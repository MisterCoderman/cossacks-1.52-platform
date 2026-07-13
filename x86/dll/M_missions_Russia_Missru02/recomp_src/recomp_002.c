#include "recomp.h"

/* FUN_10011f90 @ 0x109d1f90 (289 bytes, 97 insns) */
void f_109d1f90(void) {
  FTRACE(0x109d1f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d1f90 push ebp */
  push32((uint32_t)(EBP));
  /* 109d1f91 mov ebp, esp */
  EBP = (ESP);
  /* 109d1f93 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d1f96 push esi */
  push32((uint32_t)(ESI));
  /* 109d1f97 mov eax, dword ptr [0x109f0c98] */
  EAX = (r32((uint32_t)(0x109f0c98)));
  /* 109d1f9c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 109d1f9f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 109d1fa6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 109d1fad jmp 0x109d1fb8 */
  goto L_109d1fb8;
L_109d1faf:;
  /* 109d1faf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109d1fb2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d1fb5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_109d1fb8:;
  /* 109d1fb8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d1fbc jae 0x109d1ff1 */
  if (!C.cf) goto L_109d1ff1;
  /* 109d1fbe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109d1fc1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d1fc4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 109d1fc7 push ecx */
  push32((uint32_t)(ECX));
  /* 109d1fc8 call 0x109c8070 */
  push32(0x109d1fcdu); f_109c8070();
  /* 109d1fcd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d1fd0 mov esi, eax */
  ESI = (EAX);
  /* 109d1fd2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109d1fd5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d1fd8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 109d1fdc push ecx */
  push32((uint32_t)(ECX));
  /* 109d1fdd call 0x109c8070 */
  push32(0x109d1fe2u); f_109c8070();
  /* 109d1fe2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d1fe5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d1fe8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 109d1fec mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 109d1fef jmp 0x109d1faf */
  goto L_109d1faf;
L_109d1ff1:;
  /* 109d1ff1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d1ff4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d1ff7 push eax */
  push32((uint32_t)(EAX));
  /* 109d1ff8 call 0x109c5220 */
  push32(0x109d1ffdu); f_109c5220();
  /* 109d1ffd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2000 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109d2003 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d2007 je 0x109d20a9 */
  if (C.zf) goto L_109d20a9;
  /* 109d200d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d2010 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 109d2013 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 109d201a jmp 0x109d2025 */
  goto L_109d2025;
L_109d201c:;
  /* 109d201c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109d201f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2022 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_109d2025:;
  /* 109d2025 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d2029 jae 0x109d209a */
  if (!C.cf) goto L_109d209a;
  /* 109d202b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 109d202e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 109d2031 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 109d2034 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2037 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 109d203a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109d203d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d2040 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 109d2043 push ecx */
  push32((uint32_t)(ECX));
  /* 109d2044 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109d2047 push edx */
  push32((uint32_t)(EDX));
  /* 109d2048 call 0x109c81f0 */
  push32(0x109d204du); f_109c81f0();
  /* 109d204d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2050 push eax */
  push32((uint32_t)(EAX));
  /* 109d2051 call 0x109c8070 */
  push32(0x109d2056u); f_109c8070();
  /* 109d2056 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2059 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 109d205c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d205e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 109d2061 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109d2064 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 109d2067 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 109d206a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d206d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 109d2070 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109d2073 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d2076 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 109d207a push eax */
  push32((uint32_t)(EAX));
  /* 109d207b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 109d207e push ecx */
  push32((uint32_t)(ECX));
  /* 109d207f call 0x109c81f0 */
  push32(0x109d2084u); f_109c81f0();
  /* 109d2084 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2087 push eax */
  push32((uint32_t)(EAX));
  /* 109d2088 call 0x109c8070 */
  push32(0x109d208du); f_109c8070();
  /* 109d208d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2090 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109d2093 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2095 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 109d2098 jmp 0x109d201c */
  goto L_109d201c;
L_109d209a:;
  /* 109d209a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 109d209d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 109d20a0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 109d20a3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d20a6 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_109d20a9:;
  /* 109d20a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d20ac pop esi */
  ESI = (pop32());
  /* 109d20ad mov esp, ebp */
  ESP = (EBP);
  /* 109d20af pop ebp */
  EBP = (pop32());
  /* 109d20b0 ret  */
  ESPCHK(0x109d1f90u, _esp0);
  ESP += 4; return;
}

/* FUN_100120c0 @ 0x109d20c0 (291 bytes, 97 insns) */
void f_109d20c0(void) {
  FTRACE(0x109d20c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d20c0 push ebp */
  push32((uint32_t)(EBP));
  /* 109d20c1 mov ebp, esp */
  EBP = (ESP);
  /* 109d20c3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d20c6 push esi */
  push32((uint32_t)(ESI));
  /* 109d20c7 mov eax, dword ptr [0x109f0c98] */
  EAX = (r32((uint32_t)(0x109f0c98)));
  /* 109d20cc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 109d20cf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 109d20d6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 109d20dd jmp 0x109d20e8 */
  goto L_109d20e8;
L_109d20df:;
  /* 109d20df mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109d20e2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d20e5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_109d20e8:;
  /* 109d20e8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d20ec jae 0x109d2122 */
  if (!C.cf) goto L_109d2122;
  /* 109d20ee mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109d20f1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d20f4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 109d20f8 push ecx */
  push32((uint32_t)(ECX));
  /* 109d20f9 call 0x109c8070 */
  push32(0x109d20feu); f_109c8070();
  /* 109d20fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2101 mov esi, eax */
  ESI = (EAX);
  /* 109d2103 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109d2106 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d2109 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 109d210d push ecx */
  push32((uint32_t)(ECX));
  /* 109d210e call 0x109c8070 */
  push32(0x109d2113u); f_109c8070();
  /* 109d2113 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2116 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2119 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 109d211d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 109d2120 jmp 0x109d20df */
  goto L_109d20df;
L_109d2122:;
  /* 109d2122 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d2125 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2128 push eax */
  push32((uint32_t)(EAX));
  /* 109d2129 call 0x109c5220 */
  push32(0x109d212eu); f_109c5220();
  /* 109d212e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2131 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109d2134 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d2138 je 0x109d21db */
  if (C.zf) goto L_109d21db;
  /* 109d213e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d2141 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 109d2144 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 109d214b jmp 0x109d2156 */
  goto L_109d2156;
L_109d214d:;
  /* 109d214d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109d2150 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2153 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_109d2156:;
  /* 109d2156 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d215a jae 0x109d21cc */
  if (!C.cf) goto L_109d21cc;
  /* 109d215c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 109d215f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 109d2162 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 109d2165 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2168 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 109d216b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109d216e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d2171 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 109d2175 push ecx */
  push32((uint32_t)(ECX));
  /* 109d2176 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109d2179 push edx */
  push32((uint32_t)(EDX));
  /* 109d217a call 0x109c81f0 */
  push32(0x109d217fu); f_109c81f0();
  /* 109d217f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2182 push eax */
  push32((uint32_t)(EAX));
  /* 109d2183 call 0x109c8070 */
  push32(0x109d2188u); f_109c8070();
  /* 109d2188 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d218b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 109d218e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2190 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 109d2193 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109d2196 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 109d2199 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 109d219c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d219f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 109d21a2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109d21a5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d21a8 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 109d21ac push eax */
  push32((uint32_t)(EAX));
  /* 109d21ad mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 109d21b0 push ecx */
  push32((uint32_t)(ECX));
  /* 109d21b1 call 0x109c81f0 */
  push32(0x109d21b6u); f_109c81f0();
  /* 109d21b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d21b9 push eax */
  push32((uint32_t)(EAX));
  /* 109d21ba call 0x109c8070 */
  push32(0x109d21bfu); f_109c8070();
  /* 109d21bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d21c2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109d21c5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d21c7 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 109d21ca jmp 0x109d214d */
  goto L_109d214d;
L_109d21cc:;
  /* 109d21cc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 109d21cf mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 109d21d2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 109d21d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d21d8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_109d21db:;
  /* 109d21db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d21de pop esi */
  ESI = (pop32());
  /* 109d21df mov esp, ebp */
  ESP = (EBP);
  /* 109d21e1 pop ebp */
  EBP = (pop32());
  /* 109d21e2 ret  */
  ESPCHK(0x109d20c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100121f0 @ 0x109d21f0 (878 bytes, 273 insns) */
void f_109d21f0(void) {
  FTRACE(0x109d21f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d21f0 push ebp */
  push32((uint32_t)(EBP));
  /* 109d21f1 mov ebp, esp */
  EBP = (ESP);
  /* 109d21f3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d21f6 push esi */
  push32((uint32_t)(ESI));
  /* 109d21f7 mov eax, dword ptr [0x109f0c98] */
  EAX = (r32((uint32_t)(0x109f0c98)));
  /* 109d21fc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 109d21ff mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 109d2206 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 109d220d jmp 0x109d2218 */
  goto L_109d2218;
L_109d220f:;
  /* 109d220f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109d2212 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2215 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_109d2218:;
  /* 109d2218 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d221c jae 0x109d2251 */
  if (!C.cf) goto L_109d2251;
  /* 109d221e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109d2221 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d2224 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 109d2227 push ecx */
  push32((uint32_t)(ECX));
  /* 109d2228 call 0x109c8070 */
  push32(0x109d222du); f_109c8070();
  /* 109d222d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2230 mov esi, eax */
  ESI = (EAX);
  /* 109d2232 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109d2235 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d2238 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 109d223c push ecx */
  push32((uint32_t)(ECX));
  /* 109d223d call 0x109c8070 */
  push32(0x109d2242u); f_109c8070();
  /* 109d2242 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2245 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2248 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 109d224c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 109d224f jmp 0x109d220f */
  goto L_109d220f;
L_109d2251:;
  /* 109d2251 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 109d2258 jmp 0x109d2263 */
  goto L_109d2263;
L_109d225a:;
  /* 109d225a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 109d225d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2260 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_109d2263:;
  /* 109d2263 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d2267 jae 0x109d229d */
  if (!C.cf) goto L_109d229d;
  /* 109d2269 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109d226c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d226f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 109d2273 push eax */
  push32((uint32_t)(EAX));
  /* 109d2274 call 0x109c8070 */
  push32(0x109d2279u); f_109c8070();
  /* 109d2279 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d227c mov esi, eax */
  ESI = (EAX);
  /* 109d227e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109d2281 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d2284 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 109d2288 push eax */
  push32((uint32_t)(EAX));
  /* 109d2289 call 0x109c8070 */
  push32(0x109d228eu); f_109c8070();
  /* 109d228e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2291 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2294 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 109d2298 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 109d229b jmp 0x109d225a */
  goto L_109d225a;
L_109d229d:;
  /* 109d229d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d22a0 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 109d22a6 push eax */
  push32((uint32_t)(EAX));
  /* 109d22a7 call 0x109c8070 */
  push32(0x109d22acu); f_109c8070();
  /* 109d22ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d22af mov esi, eax */
  ESI = (EAX);
  /* 109d22b1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d22b4 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 109d22ba push edx */
  push32((uint32_t)(EDX));
  /* 109d22bb call 0x109c8070 */
  push32(0x109d22c0u); f_109c8070();
  /* 109d22c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d22c3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d22c6 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 109d22ca mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 109d22cd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d22d0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 109d22d6 push edx */
  push32((uint32_t)(EDX));
  /* 109d22d7 call 0x109c8070 */
  push32(0x109d22dcu); f_109c8070();
  /* 109d22dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d22df mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d22e2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 109d22e6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 109d22e9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d22ec mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 109d22f2 push ecx */
  push32((uint32_t)(ECX));
  /* 109d22f3 call 0x109c8070 */
  push32(0x109d22f8u); f_109c8070();
  /* 109d22f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d22fb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d22fe lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 109d2302 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 109d2305 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d2308 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 109d230e push edx */
  push32((uint32_t)(EDX));
  /* 109d230f call 0x109c8070 */
  push32(0x109d2314u); f_109c8070();
  /* 109d2314 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2317 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d231a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 109d231e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 109d2321 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d2324 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2329 push eax */
  push32((uint32_t)(EAX));
  /* 109d232a call 0x109c5220 */
  push32(0x109d232fu); f_109c5220();
  /* 109d232f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2332 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109d2335 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d2339 je 0x109d2556 */
  if (C.zf) goto L_109d2556;
  /* 109d233f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d2342 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 109d2345 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d2348 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d234e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 109d2351 push 0xac */
  push32((uint32_t)(0xacu));
  /* 109d2356 mov eax, dword ptr [0x109f0c98] */
  EAX = (r32((uint32_t)(0x109f0c98)));
  /* 109d235b push eax */
  push32((uint32_t)(EAX));
  /* 109d235c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d235f push ecx */
  push32((uint32_t)(ECX));
  /* 109d2360 call 0x109cbb20 */
  push32(0x109d2365u); f_109cbb20();
  /* 109d2365 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2368 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 109d236f jmp 0x109d237a */
  goto L_109d237a;
L_109d2371:;
  /* 109d2371 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109d2374 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2377 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_109d237a:;
  /* 109d237a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d237e jae 0x109d23ee */
  if (!C.cf) goto L_109d23ee;
  /* 109d2380 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 109d2383 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 109d2386 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109d2389 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 109d238c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 109d238f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d2392 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 109d2395 push edx */
  push32((uint32_t)(EDX));
  /* 109d2396 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 109d2399 push eax */
  push32((uint32_t)(EAX));
  /* 109d239a call 0x109c81f0 */
  push32(0x109d239fu); f_109c81f0();
  /* 109d239f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d23a2 push eax */
  push32((uint32_t)(EAX));
  /* 109d23a3 call 0x109c8070 */
  push32(0x109d23a8u); f_109c8070();
  /* 109d23a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d23ab mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 109d23ae lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 109d23b2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 109d23b5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 109d23b8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 109d23bb mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109d23be mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 109d23c2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 109d23c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d23c8 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 109d23cc push edx */
  push32((uint32_t)(EDX));
  /* 109d23cd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 109d23d0 push eax */
  push32((uint32_t)(EAX));
  /* 109d23d1 call 0x109c81f0 */
  push32(0x109d23d6u); f_109c81f0();
  /* 109d23d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d23d9 push eax */
  push32((uint32_t)(EAX));
  /* 109d23da call 0x109c8070 */
  push32(0x109d23dfu); f_109c8070();
  /* 109d23df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d23e2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 109d23e5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 109d23e9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 109d23ec jmp 0x109d2371 */
  goto L_109d2371;
L_109d23ee:;
  /* 109d23ee mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 109d23f5 jmp 0x109d2400 */
  goto L_109d2400;
L_109d23f7:;
  /* 109d23f7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 109d23fa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d23fd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_109d2400:;
  /* 109d2400 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d2404 jae 0x109d2476 */
  if (!C.cf) goto L_109d2476;
  /* 109d2406 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109d2409 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 109d240c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 109d240f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 109d2413 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109d2416 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d2419 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 109d241d push eax */
  push32((uint32_t)(EAX));
  /* 109d241e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 109d2421 push ecx */
  push32((uint32_t)(ECX));
  /* 109d2422 call 0x109c81f0 */
  push32(0x109d2427u); f_109c81f0();
  /* 109d2427 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d242a push eax */
  push32((uint32_t)(EAX));
  /* 109d242b call 0x109c8070 */
  push32(0x109d2430u); f_109c8070();
  /* 109d2430 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2433 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109d2436 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 109d243a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 109d243d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109d2440 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 109d2443 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 109d2446 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 109d244a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109d244d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d2450 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 109d2454 push eax */
  push32((uint32_t)(EAX));
  /* 109d2455 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 109d2458 push ecx */
  push32((uint32_t)(ECX));
  /* 109d2459 call 0x109c81f0 */
  push32(0x109d245eu); f_109c81f0();
  /* 109d245e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2461 push eax */
  push32((uint32_t)(EAX));
  /* 109d2462 call 0x109c8070 */
  push32(0x109d2467u); f_109c8070();
  /* 109d2467 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d246a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109d246d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 109d2471 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 109d2474 jmp 0x109d23f7 */
  goto L_109d23f7;
L_109d2476:;
  /* 109d2476 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 109d2479 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109d247c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 109d2482 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d2485 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 109d248b push ecx */
  push32((uint32_t)(ECX));
  /* 109d248c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109d248f push edx */
  push32((uint32_t)(EDX));
  /* 109d2490 call 0x109c81f0 */
  push32(0x109d2495u); f_109c81f0();
  /* 109d2495 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2498 push eax */
  push32((uint32_t)(EAX));
  /* 109d2499 call 0x109c8070 */
  push32(0x109d249eu); f_109c8070();
  /* 109d249e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d24a1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 109d24a4 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 109d24a8 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 109d24ab mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 109d24ae mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 109d24b1 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 109d24b7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d24ba mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 109d24c0 push eax */
  push32((uint32_t)(EAX));
  /* 109d24c1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 109d24c4 push ecx */
  push32((uint32_t)(ECX));
  /* 109d24c5 call 0x109c81f0 */
  push32(0x109d24cau); f_109c81f0();
  /* 109d24ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d24cd push eax */
  push32((uint32_t)(EAX));
  /* 109d24ce call 0x109c8070 */
  push32(0x109d24d3u); f_109c8070();
  /* 109d24d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d24d6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109d24d9 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 109d24dd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 109d24e0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 109d24e3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109d24e6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 109d24ec mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d24ef mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 109d24f5 push ecx */
  push32((uint32_t)(ECX));
  /* 109d24f6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109d24f9 push edx */
  push32((uint32_t)(EDX));
  /* 109d24fa call 0x109c81f0 */
  push32(0x109d24ffu); f_109c81f0();
  /* 109d24ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2502 push eax */
  push32((uint32_t)(EAX));
  /* 109d2503 call 0x109c8070 */
  push32(0x109d2508u); f_109c8070();
  /* 109d2508 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d250b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 109d250e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 109d2512 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 109d2515 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 109d2518 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 109d251b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 109d2521 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d2524 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 109d252a push eax */
  push32((uint32_t)(EAX));
  /* 109d252b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 109d252e push ecx */
  push32((uint32_t)(ECX));
  /* 109d252f call 0x109c81f0 */
  push32(0x109d2534u); f_109c81f0();
  /* 109d2534 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2537 push eax */
  push32((uint32_t)(EAX));
  /* 109d2538 call 0x109c8070 */
  push32(0x109d253du); f_109c8070();
  /* 109d253d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2540 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109d2543 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 109d2547 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 109d254a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 109d254d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109d2550 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_109d2556:;
  /* 109d2556 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d2559 pop esi */
  ESI = (pop32());
  /* 109d255a mov esp, ebp */
  ESP = (EBP);
  /* 109d255c pop ebp */
  EBP = (pop32());
  /* 109d255d ret  */
  ESPCHK(0x109d21f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012560 @ 0x109d2560 (31 bytes, 15 insns) */
void f_109d2560(void) {
  FTRACE(0x109d2560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d2560 push ebp */
  push32((uint32_t)(EBP));
  /* 109d2561 mov ebp, esp */
  EBP = (ESP);
  /* 109d2563 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d2565 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d2568 push eax */
  push32((uint32_t)(EAX));
  /* 109d2569 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d256c push ecx */
  push32((uint32_t)(ECX));
  /* 109d256d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d2570 push edx */
  push32((uint32_t)(EDX));
  /* 109d2571 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d2574 push eax */
  push32((uint32_t)(EAX));
  /* 109d2575 call 0x109d2580 */
  push32(0x109d257au); f_109d2580();
  /* 109d257a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d257d pop ebp */
  EBP = (pop32());
  /* 109d257e ret  */
  ESPCHK(0x109d2560u, _esp0);
  ESP += 4; return;
}

/* FUN_10012580 @ 0x109d2580 (393 bytes, 123 insns) */
void f_109d2580(void) {
  FTRACE(0x109d2580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d2580 push ebp */
  push32((uint32_t)(EBP));
  /* 109d2581 mov ebp, esp */
  EBP = (ESP);
  /* 109d2583 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d2586 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d258a jne 0x109d2596 */
  if (!C.zf) goto L_109d2596;
  /* 109d258c mov eax, dword ptr [0x109f0c98] */
  EAX = (r32((uint32_t)(0x109f0c98)));
  /* 109d2591 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 109d2594 jmp 0x109d259c */
  goto L_109d259c;
L_109d2596:;
  /* 109d2596 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 109d2599 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_109d259c:;
  /* 109d259c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109d259f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 109d25a2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d25a5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 109d25a8 push 0x109f1a0c */
  push32((uint32_t)(0x109f1a0cu));
  /* 109d25ad call dword ptr [0x109f4354] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4354))), 0x109d25b3u);
  /* 109d25b3 cmp dword ptr [0x109f19fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f19fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d25ba je 0x109d25da */
  if (C.zf) goto L_109d25da;
  /* 109d25bc push 0x109f1a0c */
  push32((uint32_t)(0x109f1a0cu));
  /* 109d25c1 call dword ptr [0x109f4344] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4344))), 0x109d25c7u);
  /* 109d25c7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 109d25c9 call 0x109c8c40 */
  push32(0x109d25ceu); f_109c8c40();
  /* 109d25ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d25d1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 109d25d8 jmp 0x109d25e1 */
  goto L_109d25e1;
L_109d25da:;
  /* 109d25da mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_109d25e1:;
  /* 109d25e1 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d25e5 jbe 0x109d26d2 */
  if ((C.cf||C.zf)) goto L_109d26d2;
  /* 109d25eb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d25ee mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 109d25f0 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 109d25f3 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109d25f7 je 0x109d2601 */
  if (C.zf) goto L_109d2601;
  /* 109d25f9 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109d25fd je 0x109d2606 */
  if (C.zf) goto L_109d2606;
  /* 109d25ff jmp 0x109d2660 */
  goto L_109d2660;
L_109d2601:;
  /* 109d2601 jmp 0x109d26d2 */
  goto L_109d26d2;
L_109d2606:;
  /* 109d2606 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d2609 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d260c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 109d260f mov dword ptr [0x109f19e8], 0 */
  w32((uint32_t)(0x109f19e8), (0x0u));
  /* 109d2619 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d261c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 109d261f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d2622 jne 0x109d2637 */
  if (!C.zf) goto L_109d2637;
  /* 109d2624 mov dword ptr [0x109f19e8], 1 */
  w32((uint32_t)(0x109f19e8), (0x1u));
  /* 109d262e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d2631 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2634 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_109d2637:;
  /* 109d2637 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d263a push ecx */
  push32((uint32_t)(ECX));
  /* 109d263b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 109d263e push edx */
  push32((uint32_t)(EDX));
  /* 109d263f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 109d2642 push eax */
  push32((uint32_t)(EAX));
  /* 109d2643 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d2646 push ecx */
  push32((uint32_t)(ECX));
  /* 109d2647 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d264a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 109d264c push eax */
  push32((uint32_t)(EAX));
  /* 109d264d call 0x109d2710 */
  push32(0x109d2652u); f_109d2710();
  /* 109d2652 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2655 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d2658 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d265b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 109d265e jmp 0x109d26cd */
  goto L_109d26cd;
L_109d2660:;
  /* 109d2660 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d2663 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d2665 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 109d2667 mov ecx, dword ptr [0x109efc98] */
  ECX = (r32((uint32_t)(0x109efc98)));
  /* 109d266d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109d266f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 109d2673 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 109d2679 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109d267b je 0x109d26a8 */
  if (C.zf) goto L_109d26a8;
  /* 109d267d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d2681 jbe 0x109d26a8 */
  if ((C.cf||C.zf)) goto L_109d26a8;
  /* 109d2683 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d2686 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d2689 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 109d268b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 109d268d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d2690 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2693 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 109d2696 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d2699 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d269c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 109d269f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d26a2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d26a5 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_109d26a8:;
  /* 109d26a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d26ab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d26ae mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 109d26b0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 109d26b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d26b5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d26b8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 109d26bb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d26be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d26c1 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 109d26c4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d26c7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d26ca mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_109d26cd:;
  /* 109d26cd jmp 0x109d25e1 */
  goto L_109d25e1;
L_109d26d2:;
  /* 109d26d2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d26d6 je 0x109d26e4 */
  if (C.zf) goto L_109d26e4;
  /* 109d26d8 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 109d26da call 0x109c8ce0 */
  push32(0x109d26dfu); f_109c8ce0();
  /* 109d26df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d26e2 jmp 0x109d26ef */
  goto L_109d26ef;
L_109d26e4:;
  /* 109d26e4 push 0x109f1a0c */
  push32((uint32_t)(0x109f1a0cu));
  /* 109d26e9 call dword ptr [0x109f4344] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4344))), 0x109d26efu);
L_109d26ef:;
  /* 109d26ef cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d26f3 jbe 0x109d2703 */
  if ((C.cf||C.zf)) goto L_109d2703;
  /* 109d26f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d26f8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 109d26fb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d26fe sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d2701 jmp 0x109d2705 */
  goto L_109d2705;
L_109d2703:;
  /* 109d2703 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_109d2705:;
  /* 109d2705 mov esp, ebp */
  ESP = (EBP);
  /* 109d2707 pop ebp */
  EBP = (pop32());
  /* 109d2708 ret  */
  ESPCHK(0x109d2580u, _esp0);
  ESP += 4; return;
}

/* FUN_10012710 @ 0x109d2710 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_109d2710(void) {
  FTRACE(0x109d2710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d2710 push ebp */
  push32((uint32_t)(EBP));
  /* 109d2711 mov ebp, esp */
  EBP = (ESP);
  /* 109d2713 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d2716 push esi */
  push32((uint32_t)(ESI));
  /* 109d2717 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 109d271b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 109d271e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d2721 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d2724 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109d2727 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d272b ja 0x109d2c78 */
  if ((!C.cf&&!C.zf)) goto L_109d2c78;
  /* 109d2731 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d2734 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109d2736 mov dl, byte ptr [eax + 0x109d2cd9] */
  DL = (r8((uint32_t)(EAX + 0x109d2cd9)));
  /* 109d273c jmp dword ptr [edx*4 + 0x109d2c7d] */
  switch (EDX) {
    case 0: goto L_109d2c56;
    case 1: goto L_109d2765;
    case 2: goto L_109d27ab;
    case 3: goto L_109d28f8;
    case 4: goto L_109d2920;
    case 5: goto L_109d29bf;
    case 6: goto L_109d2a2b;
    case 7: goto L_109d2a54;
    case 8: goto L_109d2a95;
    case 9: goto L_109d2b77;
    case 10: goto L_109d2bde;
    case 11: goto L_109d2c2b;
    case 12: goto L_109d2743;
    case 13: goto L_109d2788;
    case 14: goto L_109d27ce;
    case 15: goto L_109d28ce;
    case 16: goto L_109d2965;
    case 17: goto L_109d2992;
    case 18: goto L_109d29e7;
    case 19: goto L_109d2a6b;
    case 20: goto L_109d2b19;
    case 21: goto L_109d2ba8;
    case 22: goto L_109d2c78;
    default: x86_unimpl("switch@0x109d273c out of table"); return;
  }
L_109d2743:;
  /* 109d2743 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d2746 push ecx */
  push32((uint32_t)(ECX));
  /* 109d2747 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d274a push edx */
  push32((uint32_t)(EDX));
  /* 109d274b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d274e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 109d2751 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 109d2754 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 109d2757 push eax */
  push32((uint32_t)(EAX));
  /* 109d2758 call 0x109d2d30 */
  push32(0x109d275du); f_109d2d30();
  /* 109d275d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2760 jmp 0x109d2c78 */
  goto L_109d2c78;
L_109d2765:;
  /* 109d2765 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d2768 push ecx */
  push32((uint32_t)(ECX));
  /* 109d2769 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d276c push edx */
  push32((uint32_t)(EDX));
  /* 109d276d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d2770 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 109d2773 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 109d2776 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 109d277a push eax */
  push32((uint32_t)(EAX));
  /* 109d277b call 0x109d2d30 */
  push32(0x109d2780u); f_109d2d30();
  /* 109d2780 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2783 jmp 0x109d2c78 */
  goto L_109d2c78;
L_109d2788:;
  /* 109d2788 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d278b push ecx */
  push32((uint32_t)(ECX));
  /* 109d278c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d278f push edx */
  push32((uint32_t)(EDX));
  /* 109d2790 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d2793 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 109d2796 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 109d2799 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 109d279d push eax */
  push32((uint32_t)(EAX));
  /* 109d279e call 0x109d2d30 */
  push32(0x109d27a3u); f_109d2d30();
  /* 109d27a3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d27a6 jmp 0x109d2c78 */
  goto L_109d2c78;
L_109d27ab:;
  /* 109d27ab mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d27ae push ecx */
  push32((uint32_t)(ECX));
  /* 109d27af mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d27b2 push edx */
  push32((uint32_t)(EDX));
  /* 109d27b3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d27b6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 109d27b9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 109d27bc mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 109d27c0 push eax */
  push32((uint32_t)(EAX));
  /* 109d27c1 call 0x109d2d30 */
  push32(0x109d27c6u); f_109d2d30();
  /* 109d27c6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d27c9 jmp 0x109d2c78 */
  goto L_109d2c78;
L_109d27ce:;
  /* 109d27ce cmp dword ptr [0x109f19e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f19e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d27d5 je 0x109d2856 */
  if (C.zf) goto L_109d2856;
  /* 109d27d7 mov dword ptr [0x109f19e8], 0 */
  w32((uint32_t)(0x109f19e8), (0x0u));
  /* 109d27e1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 109d27e4 push ecx */
  push32((uint32_t)(ECX));
  /* 109d27e5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d27e8 push edx */
  push32((uint32_t)(EDX));
  /* 109d27e9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d27ec push eax */
  push32((uint32_t)(EAX));
  /* 109d27ed mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d27f0 push ecx */
  push32((uint32_t)(ECX));
  /* 109d27f1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 109d27f4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 109d27fa push eax */
  push32((uint32_t)(EAX));
  /* 109d27fb call 0x109d2ee0 */
  push32(0x109d2800u); f_109d2ee0();
  /* 109d2800 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2803 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d2806 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d2809 jne 0x109d2810 */
  if (!C.zf) goto L_109d2810;
  /* 109d280b jmp 0x109d2c78 */
  goto L_109d2c78;
L_109d2810:;
  /* 109d2810 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d2813 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 109d2815 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 109d2818 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d281b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109d281d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2820 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d2823 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 109d2825 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d2828 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109d282a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d282d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d2830 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 109d2832 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 109d2835 push ecx */
  push32((uint32_t)(ECX));
  /* 109d2836 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d2839 push edx */
  push32((uint32_t)(EDX));
  /* 109d283a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d283d push eax */
  push32((uint32_t)(EAX));
  /* 109d283e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d2841 push ecx */
  push32((uint32_t)(ECX));
  /* 109d2842 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 109d2845 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 109d284b push eax */
  push32((uint32_t)(EAX));
  /* 109d284c call 0x109d2ee0 */
  push32(0x109d2851u); f_109d2ee0();
  /* 109d2851 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2854 jmp 0x109d28c9 */
  goto L_109d28c9;
L_109d2856:;
  /* 109d2856 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 109d2859 push ecx */
  push32((uint32_t)(ECX));
  /* 109d285a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d285d push edx */
  push32((uint32_t)(EDX));
  /* 109d285e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d2861 push eax */
  push32((uint32_t)(EAX));
  /* 109d2862 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d2865 push ecx */
  push32((uint32_t)(ECX));
  /* 109d2866 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 109d2869 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 109d286f push eax */
  push32((uint32_t)(EAX));
  /* 109d2870 call 0x109d2ee0 */
  push32(0x109d2875u); f_109d2ee0();
  /* 109d2875 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2878 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d287b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d287e jne 0x109d2885 */
  if (!C.zf) goto L_109d2885;
  /* 109d2880 jmp 0x109d2c78 */
  goto L_109d2c78;
L_109d2885:;
  /* 109d2885 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d2888 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 109d288a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 109d288d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d2890 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109d2892 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2895 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d2898 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 109d289a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d289d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109d289f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d28a2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d28a5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 109d28a7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 109d28aa push ecx */
  push32((uint32_t)(ECX));
  /* 109d28ab mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d28ae push edx */
  push32((uint32_t)(EDX));
  /* 109d28af mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d28b2 push eax */
  push32((uint32_t)(EAX));
  /* 109d28b3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d28b6 push ecx */
  push32((uint32_t)(ECX));
  /* 109d28b7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 109d28ba mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 109d28c0 push eax */
  push32((uint32_t)(EAX));
  /* 109d28c1 call 0x109d2ee0 */
  push32(0x109d28c6u); f_109d2ee0();
  /* 109d28c6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109d28c9:;
  /* 109d28c9 jmp 0x109d2c78 */
  goto L_109d2c78;
L_109d28ce:;
  /* 109d28ce mov ecx, dword ptr [0x109f19e8] */
  ECX = (r32((uint32_t)(0x109f19e8)));
  /* 109d28d4 mov dword ptr [0x109f19f8], ecx */
  w32((uint32_t)(0x109f19f8), (ECX));
  /* 109d28da mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d28dd push edx */
  push32((uint32_t)(EDX));
  /* 109d28de mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d28e1 push eax */
  push32((uint32_t)(EAX));
  /* 109d28e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d28e4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d28e7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 109d28ea push edx */
  push32((uint32_t)(EDX));
  /* 109d28eb call 0x109d2d80 */
  push32(0x109d28f0u); f_109d2d80();
  /* 109d28f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d28f3 jmp 0x109d2c78 */
  goto L_109d2c78;
L_109d28f8:;
  /* 109d28f8 mov eax, dword ptr [0x109f19e8] */
  EAX = (r32((uint32_t)(0x109f19e8)));
  /* 109d28fd mov dword ptr [0x109f19f8], eax */
  w32((uint32_t)(0x109f19f8), (EAX));
  /* 109d2902 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d2905 push ecx */
  push32((uint32_t)(ECX));
  /* 109d2906 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d2909 push edx */
  push32((uint32_t)(EDX));
  /* 109d290a push 2 */
  push32((uint32_t)(0x2u));
  /* 109d290c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d290f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 109d2912 push ecx */
  push32((uint32_t)(ECX));
  /* 109d2913 call 0x109d2d80 */
  push32(0x109d2918u); f_109d2d80();
  /* 109d2918 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d291b jmp 0x109d2c78 */
  goto L_109d2c78;
L_109d2920:;
  /* 109d2920 mov edx, dword ptr [0x109f19e8] */
  EDX = (r32((uint32_t)(0x109f19e8)));
  /* 109d2926 mov dword ptr [0x109f19f8], edx */
  w32((uint32_t)(0x109f19f8), (EDX));
  /* 109d292c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d292f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 109d2932 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 109d2933 mov ecx, 0xc */
  ECX = (0xcu);
  /* 109d2938 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 109d293a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 109d293d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d2941 jne 0x109d294a */
  if (!C.zf) goto L_109d294a;
  /* 109d2943 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_109d294a:;
  /* 109d294a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d294d push edx */
  push32((uint32_t)(EDX));
  /* 109d294e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d2951 push eax */
  push32((uint32_t)(EAX));
  /* 109d2952 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d2954 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d2957 push ecx */
  push32((uint32_t)(ECX));
  /* 109d2958 call 0x109d2d80 */
  push32(0x109d295du); f_109d2d80();
  /* 109d295d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2960 jmp 0x109d2c78 */
  goto L_109d2c78;
L_109d2965:;
  /* 109d2965 mov edx, dword ptr [0x109f19e8] */
  EDX = (r32((uint32_t)(0x109f19e8)));
  /* 109d296b mov dword ptr [0x109f19f8], edx */
  w32((uint32_t)(0x109f19f8), (EDX));
  /* 109d2971 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d2974 push eax */
  push32((uint32_t)(EAX));
  /* 109d2975 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d2978 push ecx */
  push32((uint32_t)(ECX));
  /* 109d2979 push 3 */
  push32((uint32_t)(0x3u));
  /* 109d297b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d297e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 109d2981 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2984 push eax */
  push32((uint32_t)(EAX));
  /* 109d2985 call 0x109d2d80 */
  push32(0x109d298au); f_109d2d80();
  /* 109d298a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d298d jmp 0x109d2c78 */
  goto L_109d2c78;
L_109d2992:;
  /* 109d2992 mov ecx, dword ptr [0x109f19e8] */
  ECX = (r32((uint32_t)(0x109f19e8)));
  /* 109d2998 mov dword ptr [0x109f19f8], ecx */
  w32((uint32_t)(0x109f19f8), (ECX));
  /* 109d299e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d29a1 push edx */
  push32((uint32_t)(EDX));
  /* 109d29a2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d29a5 push eax */
  push32((uint32_t)(EAX));
  /* 109d29a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d29a8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d29ab mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 109d29ae add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d29b1 push edx */
  push32((uint32_t)(EDX));
  /* 109d29b2 call 0x109d2d80 */
  push32(0x109d29b7u); f_109d2d80();
  /* 109d29b7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d29ba jmp 0x109d2c78 */
  goto L_109d2c78;
L_109d29bf:;
  /* 109d29bf mov eax, dword ptr [0x109f19e8] */
  EAX = (r32((uint32_t)(0x109f19e8)));
  /* 109d29c4 mov dword ptr [0x109f19f8], eax */
  w32((uint32_t)(0x109f19f8), (EAX));
  /* 109d29c9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d29cc push ecx */
  push32((uint32_t)(ECX));
  /* 109d29cd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d29d0 push edx */
  push32((uint32_t)(EDX));
  /* 109d29d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d29d3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d29d6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 109d29d9 push ecx */
  push32((uint32_t)(ECX));
  /* 109d29da call 0x109d2d80 */
  push32(0x109d29dfu); f_109d2d80();
  /* 109d29df add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d29e2 jmp 0x109d2c78 */
  goto L_109d2c78;
L_109d29e7:;
  /* 109d29e7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d29ea cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d29ee jg 0x109d2a0c */
  if ((!C.zf&&C.sf==C.of)) goto L_109d2a0c;
  /* 109d29f0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d29f3 push eax */
  push32((uint32_t)(EAX));
  /* 109d29f4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d29f7 push ecx */
  push32((uint32_t)(ECX));
  /* 109d29f8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 109d29fb mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 109d2a01 push eax */
  push32((uint32_t)(EAX));
  /* 109d2a02 call 0x109d2d30 */
  push32(0x109d2a07u); f_109d2d30();
  /* 109d2a07 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2a0a jmp 0x109d2a26 */
  goto L_109d2a26;
L_109d2a0c:;
  /* 109d2a0c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d2a0f push ecx */
  push32((uint32_t)(ECX));
  /* 109d2a10 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d2a13 push edx */
  push32((uint32_t)(EDX));
  /* 109d2a14 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 109d2a17 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 109d2a1d push ecx */
  push32((uint32_t)(ECX));
  /* 109d2a1e call 0x109d2d30 */
  push32(0x109d2a23u); f_109d2d30();
  /* 109d2a23 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109d2a26:;
  /* 109d2a26 jmp 0x109d2c78 */
  goto L_109d2c78;
L_109d2a2b:;
  /* 109d2a2b mov edx, dword ptr [0x109f19e8] */
  EDX = (r32((uint32_t)(0x109f19e8)));
  /* 109d2a31 mov dword ptr [0x109f19f8], edx */
  w32((uint32_t)(0x109f19f8), (EDX));
  /* 109d2a37 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d2a3a push eax */
  push32((uint32_t)(EAX));
  /* 109d2a3b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d2a3e push ecx */
  push32((uint32_t)(ECX));
  /* 109d2a3f push 2 */
  push32((uint32_t)(0x2u));
  /* 109d2a41 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d2a44 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 109d2a46 push eax */
  push32((uint32_t)(EAX));
  /* 109d2a47 call 0x109d2d80 */
  push32(0x109d2a4cu); f_109d2d80();
  /* 109d2a4c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2a4f jmp 0x109d2c78 */
  goto L_109d2c78;
L_109d2a54:;
  /* 109d2a54 mov ecx, dword ptr [0x109f19e8] */
  ECX = (r32((uint32_t)(0x109f19e8)));
  /* 109d2a5a mov dword ptr [0x109f19f8], ecx */
  w32((uint32_t)(0x109f19f8), (ECX));
  /* 109d2a60 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d2a63 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 109d2a66 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 109d2a69 jmp 0x109d2abd */
  goto L_109d2abd;
L_109d2a6b:;
  /* 109d2a6b mov ecx, dword ptr [0x109f19e8] */
  ECX = (r32((uint32_t)(0x109f19e8)));
  /* 109d2a71 mov dword ptr [0x109f19f8], ecx */
  w32((uint32_t)(0x109f19f8), (ECX));
  /* 109d2a77 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d2a7a push edx */
  push32((uint32_t)(EDX));
  /* 109d2a7b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d2a7e push eax */
  push32((uint32_t)(EAX));
  /* 109d2a7f push 1 */
  push32((uint32_t)(0x1u));
  /* 109d2a81 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d2a84 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 109d2a87 push edx */
  push32((uint32_t)(EDX));
  /* 109d2a88 call 0x109d2d80 */
  push32(0x109d2a8du); f_109d2d80();
  /* 109d2a8d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2a90 jmp 0x109d2c78 */
  goto L_109d2c78;
L_109d2a95:;
  /* 109d2a95 mov eax, dword ptr [0x109f19e8] */
  EAX = (r32((uint32_t)(0x109f19e8)));
  /* 109d2a9a mov dword ptr [0x109f19f8], eax */
  w32((uint32_t)(0x109f19f8), (EAX));
  /* 109d2a9f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d2aa2 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d2aa6 jne 0x109d2ab1 */
  if (!C.zf) goto L_109d2ab1;
  /* 109d2aa8 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 109d2aaf jmp 0x109d2abd */
  goto L_109d2abd;
L_109d2ab1:;
  /* 109d2ab1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d2ab4 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 109d2ab7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d2aba mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_109d2abd:;
  /* 109d2abd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d2ac0 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 109d2ac3 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d2ac6 jge 0x109d2ad1 */
  if ((C.sf==C.of)) goto L_109d2ad1;
  /* 109d2ac8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 109d2acf jmp 0x109d2afe */
  goto L_109d2afe;
L_109d2ad1:;
  /* 109d2ad1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d2ad4 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 109d2ad7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 109d2ad8 mov ecx, 7 */
  ECX = (0x7u);
  /* 109d2add idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 109d2adf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109d2ae2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d2ae5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 109d2ae8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 109d2ae9 mov ecx, 7 */
  ECX = (0x7u);
  /* 109d2aee idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 109d2af0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d2af3 jl 0x109d2afe */
  if ((C.sf!=C.of)) goto L_109d2afe;
  /* 109d2af5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d2af8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2afb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_109d2afe:;
  /* 109d2afe mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d2b01 push eax */
  push32((uint32_t)(EAX));
  /* 109d2b02 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d2b05 push ecx */
  push32((uint32_t)(ECX));
  /* 109d2b06 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d2b08 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d2b0b push edx */
  push32((uint32_t)(EDX));
  /* 109d2b0c call 0x109d2d80 */
  push32(0x109d2b11u); f_109d2d80();
  /* 109d2b11 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2b14 jmp 0x109d2c78 */
  goto L_109d2c78;
L_109d2b19:;
  /* 109d2b19 cmp dword ptr [0x109f19e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f19e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d2b20 je 0x109d2b50 */
  if (C.zf) goto L_109d2b50;
  /* 109d2b22 mov dword ptr [0x109f19e8], 0 */
  w32((uint32_t)(0x109f19e8), (0x0u));
  /* 109d2b2c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 109d2b2f push eax */
  push32((uint32_t)(EAX));
  /* 109d2b30 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d2b33 push ecx */
  push32((uint32_t)(ECX));
  /* 109d2b34 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d2b37 push edx */
  push32((uint32_t)(EDX));
  /* 109d2b38 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d2b3b push eax */
  push32((uint32_t)(EAX));
  /* 109d2b3c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 109d2b3f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 109d2b45 push edx */
  push32((uint32_t)(EDX));
  /* 109d2b46 call 0x109d2ee0 */
  push32(0x109d2b4bu); f_109d2ee0();
  /* 109d2b4b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2b4e jmp 0x109d2b72 */
  goto L_109d2b72;
L_109d2b50:;
  /* 109d2b50 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 109d2b53 push eax */
  push32((uint32_t)(EAX));
  /* 109d2b54 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d2b57 push ecx */
  push32((uint32_t)(ECX));
  /* 109d2b58 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d2b5b push edx */
  push32((uint32_t)(EDX));
  /* 109d2b5c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d2b5f push eax */
  push32((uint32_t)(EAX));
  /* 109d2b60 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 109d2b63 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 109d2b69 push edx */
  push32((uint32_t)(EDX));
  /* 109d2b6a call 0x109d2ee0 */
  push32(0x109d2b6fu); f_109d2ee0();
  /* 109d2b6f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109d2b72:;
  /* 109d2b72 jmp 0x109d2c78 */
  goto L_109d2c78;
L_109d2b77:;
  /* 109d2b77 mov dword ptr [0x109f19e8], 0 */
  w32((uint32_t)(0x109f19e8), (0x0u));
  /* 109d2b81 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 109d2b84 push eax */
  push32((uint32_t)(EAX));
  /* 109d2b85 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d2b88 push ecx */
  push32((uint32_t)(ECX));
  /* 109d2b89 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d2b8c push edx */
  push32((uint32_t)(EDX));
  /* 109d2b8d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d2b90 push eax */
  push32((uint32_t)(EAX));
  /* 109d2b91 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 109d2b94 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 109d2b9a push edx */
  push32((uint32_t)(EDX));
  /* 109d2b9b call 0x109d2ee0 */
  push32(0x109d2ba0u); f_109d2ee0();
  /* 109d2ba0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2ba3 jmp 0x109d2c78 */
  goto L_109d2c78;
L_109d2ba8:;
  /* 109d2ba8 mov eax, dword ptr [0x109f19e8] */
  EAX = (r32((uint32_t)(0x109f19e8)));
  /* 109d2bad mov dword ptr [0x109f19f8], eax */
  w32((uint32_t)(0x109f19f8), (EAX));
  /* 109d2bb2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d2bb5 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 109d2bb8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 109d2bb9 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 109d2bbe idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 109d2bc0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 109d2bc3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d2bc6 push edx */
  push32((uint32_t)(EDX));
  /* 109d2bc7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d2bca push eax */
  push32((uint32_t)(EAX));
  /* 109d2bcb push 2 */
  push32((uint32_t)(0x2u));
  /* 109d2bcd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d2bd0 push ecx */
  push32((uint32_t)(ECX));
  /* 109d2bd1 call 0x109d2d80 */
  push32(0x109d2bd6u); f_109d2d80();
  /* 109d2bd6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2bd9 jmp 0x109d2c78 */
  goto L_109d2c78;
L_109d2bde:;
  /* 109d2bde mov edx, dword ptr [0x109f19e8] */
  EDX = (r32((uint32_t)(0x109f19e8)));
  /* 109d2be4 mov dword ptr [0x109f19f8], edx */
  w32((uint32_t)(0x109f19f8), (EDX));
  /* 109d2bea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d2bed mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 109d2bf0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 109d2bf1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 109d2bf6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 109d2bf8 mov ecx, eax */
  ECX = (EAX);
  /* 109d2bfa add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2bfd imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109d2c00 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d2c03 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 109d2c06 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 109d2c07 mov esi, 0x64 */
  ESI = (0x64u);
  /* 109d2c0c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 109d2c0e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2c10 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 109d2c13 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d2c16 push eax */
  push32((uint32_t)(EAX));
  /* 109d2c17 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d2c1a push ecx */
  push32((uint32_t)(ECX));
  /* 109d2c1b push 4 */
  push32((uint32_t)(0x4u));
  /* 109d2c1d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d2c20 push edx */
  push32((uint32_t)(EDX));
  /* 109d2c21 call 0x109d2d80 */
  push32(0x109d2c26u); f_109d2d80();
  /* 109d2c26 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2c29 jmp 0x109d2c78 */
  goto L_109d2c78;
L_109d2c2b:;
  /* 109d2c2b call 0x109d3d40 */
  push32(0x109d2c30u); f_109d3d40();
  /* 109d2c30 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d2c33 push eax */
  push32((uint32_t)(EAX));
  /* 109d2c34 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d2c37 push ecx */
  push32((uint32_t)(ECX));
  /* 109d2c38 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d2c3b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d2c3d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d2c41 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 109d2c44 mov ecx, dword ptr [eax*4 + 0x109f0e1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x109f0e1c)));
  /* 109d2c4b push ecx */
  push32((uint32_t)(ECX));
  /* 109d2c4c call 0x109d2d30 */
  push32(0x109d2c51u); f_109d2d30();
  /* 109d2c51 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2c54 jmp 0x109d2c78 */
  goto L_109d2c78;
L_109d2c56:;
  /* 109d2c56 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d2c59 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 109d2c5b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 109d2c5e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d2c61 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109d2c63 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2c66 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d2c69 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 109d2c6b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d2c6e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109d2c70 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d2c73 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d2c76 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_109d2c78:;
  /* 109d2c78 pop esi */
  ESI = (pop32());
  /* 109d2c79 mov esp, ebp */
  ESP = (EBP);
  /* 109d2c7b pop ebp */
  EBP = (pop32());
  /* 109d2c7c ret  */
  ESPCHK(0x109d2710u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x109d2d30 (72 bytes, 30 insns) */
void f_109d2d30(void) {
  FTRACE(0x109d2d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d2d30 push ebp */
  push32((uint32_t)(EBP));
  /* 109d2d31 mov ebp, esp */
  EBP = (ESP);
L_109d2d33:;
  /* 109d2d33 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d2d36 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d2d39 je 0x109d2d76 */
  if (C.zf) goto L_109d2d76;
  /* 109d2d3b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d2d3e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 109d2d41 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109d2d43 je 0x109d2d76 */
  if (C.zf) goto L_109d2d76;
  /* 109d2d45 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d2d48 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109d2d4a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d2d4d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 109d2d4f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 109d2d51 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d2d54 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109d2d56 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2d59 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d2d5c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 109d2d5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d2d61 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2d64 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 109d2d67 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d2d6a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 109d2d6c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d2d6f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d2d72 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 109d2d74 jmp 0x109d2d33 */
  goto L_109d2d33;
L_109d2d76:;
  /* 109d2d76 pop ebp */
  EBP = (pop32());
  /* 109d2d77 ret  */
  ESPCHK(0x109d2d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d80 @ 0x109d2d80 (173 bytes, 64 insns) */
void f_109d2d80(void) {
  FTRACE(0x109d2d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d2d80 push ebp */
  push32((uint32_t)(EBP));
  /* 109d2d81 mov ebp, esp */
  EBP = (ESP);
  /* 109d2d83 push ecx */
  push32((uint32_t)(ECX));
  /* 109d2d84 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 109d2d8b cmp dword ptr [0x109f19f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f19f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d2d92 je 0x109d2daa */
  if (C.zf) goto L_109d2daa;
  /* 109d2d94 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d2d97 push eax */
  push32((uint32_t)(EAX));
  /* 109d2d98 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d2d9b push ecx */
  push32((uint32_t)(ECX));
  /* 109d2d9c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d2d9f push edx */
  push32((uint32_t)(EDX));
  /* 109d2da0 call 0x109d2e30 */
  push32(0x109d2da5u); f_109d2e30();
  /* 109d2da5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2da8 jmp 0x109d2e29 */
  goto L_109d2e29;
L_109d2daa:;
  /* 109d2daa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d2dad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d2db0 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d2db2 jae 0x109d2e20 */
  if (!C.cf) goto L_109d2e20;
  /* 109d2db4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d2db7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d2dba mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 109d2dbd jmp 0x109d2dc8 */
  goto L_109d2dc8;
L_109d2dbf:;
  /* 109d2dbf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d2dc2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d2dc5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_109d2dc8:;
  /* 109d2dc8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d2dcb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2dce test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109d2dd0 je 0x109d2e04 */
  if (C.zf) goto L_109d2e04;
  /* 109d2dd2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d2dd5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 109d2dd6 mov ecx, 0xa */
  ECX = (0xau);
  /* 109d2ddb idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 109d2ddd add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2de0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d2de3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109d2de5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d2de8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 109d2deb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d2dee cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 109d2def mov ecx, 0xa */
  ECX = (0xau);
  /* 109d2df4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 109d2df6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 109d2df9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d2dfc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2dff mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 109d2e02 jmp 0x109d2dbf */
  goto L_109d2dbf;
L_109d2e04:;
  /* 109d2e04 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d2e07 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109d2e09 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2e0c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d2e0f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 109d2e11 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d2e14 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109d2e16 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d2e19 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d2e1c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 109d2e1e jmp 0x109d2e29 */
  goto L_109d2e29;
L_109d2e20:;
  /* 109d2e20 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d2e23 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_109d2e29:;
  /* 109d2e29 mov esp, ebp */
  ESP = (EBP);
  /* 109d2e2b pop ebp */
  EBP = (pop32());
  /* 109d2e2c ret  */
  ESPCHK(0x109d2d80u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x109d2e30 (172 bytes, 65 insns) */
void f_109d2e30(void) {
  FTRACE(0x109d2e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d2e30 push ebp */
  push32((uint32_t)(EBP));
  /* 109d2e31 mov ebp, esp */
  EBP = (ESP);
  /* 109d2e33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d2e36 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d2e39 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109d2e3b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 109d2e3e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d2e41 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d2e44 jbe 0x109d2e8b */
  if ((C.cf||C.zf)) goto L_109d2e8b;
L_109d2e46:;
  /* 109d2e46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d2e49 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 109d2e4a mov ecx, 0xa */
  ECX = (0xau);
  /* 109d2e4f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 109d2e51 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2e54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d2e57 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 109d2e59 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d2e5c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2e5f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 109d2e62 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d2e65 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 109d2e67 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d2e6a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d2e6d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 109d2e6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d2e72 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 109d2e73 mov ecx, 0xa */
  ECX = (0xau);
  /* 109d2e78 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 109d2e7a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 109d2e7d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d2e81 jle 0x109d2e8b */
  if ((C.zf||C.sf!=C.of)) goto L_109d2e8b;
  /* 109d2e83 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d2e86 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d2e89 ja 0x109d2e46 */
  if ((!C.cf&&!C.zf)) goto L_109d2e46;
L_109d2e8b:;
  /* 109d2e8b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d2e8e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109d2e90 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 109d2e93 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d2e96 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d2e99 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 109d2e9b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d2e9e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d2ea1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_109d2ea4:;
  /* 109d2ea4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d2ea7 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 109d2ea9 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 109d2eac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d2eaf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d2eb2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 109d2eb4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 109d2eb6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d2eb9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d2ebc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 109d2ebf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d2ec2 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 109d2ec5 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 109d2ec7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d2eca add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2ecd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 109d2ed0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d2ed3 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d2ed6 jb 0x109d2ea4 */
  if (C.cf) goto L_109d2ea4;
  /* 109d2ed8 mov esp, ebp */
  ESP = (EBP);
  /* 109d2eda pop ebp */
  EBP = (pop32());
  /* 109d2edb ret  */
  ESPCHK(0x109d2e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ee0 @ 0x109d2ee0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_109d2ee0(void) {
  FTRACE(0x109d2ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d2ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 109d2ee1 mov ebp, esp */
  EBP = (ESP);
  /* 109d2ee3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_109d2ee6:;
  /* 109d2ee6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d2ee9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 109d2eec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109d2eee je 0x109d335c */
  if (C.zf) goto L_109d335c;
  /* 109d2ef4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d2ef7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d2efa je 0x109d335c */
  if (C.zf) goto L_109d335c;
  /* 109d2f00 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 109d2f04 mov dword ptr [0x109f19f8], 0 */
  w32((uint32_t)(0x109f19f8), (0x0u));
  /* 109d2f0e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 109d2f15 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d2f18 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109d2f1b jmp 0x109d2f26 */
  goto L_109d2f26;
L_109d2f1d:;
  /* 109d2f1d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d2f20 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2f23 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_109d2f26:;
  /* 109d2f26 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d2f29 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 109d2f2c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d2f2f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 109d2f32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d2f35 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d2f38 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 109d2f3b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d2f3d jne 0x109d2f41 */
  if (!C.zf) goto L_109d2f41;
  /* 109d2f3f jmp 0x109d2f1d */
  goto L_109d2f1d;
L_109d2f41:;
  /* 109d2f41 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d2f44 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d2f47 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 109d2f4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d2f4d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 109d2f50 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 109d2f53 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109d2f56 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d2f59 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 109d2f5c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d2f60 ja 0x109d32b0 */
  if ((!C.cf&&!C.zf)) goto L_109d32b0;
  /* 109d2f66 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 109d2f69 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d2f6b mov al, byte ptr [ecx + 0x109d338c] */
  AL = (r8((uint32_t)(ECX + 0x109d338c)));
  /* 109d2f71 jmp dword ptr [eax*4 + 0x109d3360] */
  switch (EAX) {
    case 0: goto L_109d31cf;
    case 1: goto L_109d30b3;
    case 2: goto L_109d303e;
    case 3: goto L_109d2f78;
    case 4: goto L_109d2fb6;
    case 5: goto L_109d3017;
    case 6: goto L_109d3065;
    case 7: goto L_109d308c;
    case 8: goto L_109d30fa;
    case 9: goto L_109d2ff4;
    case 10: goto L_109d32b0;
    default: x86_unimpl("switch@0x109d2f71 out of table"); return;
  }
L_109d2f78:;
  /* 109d2f78 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d2f7b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 109d2f7e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 109d2f81 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d2f84 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 109d2f87 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d2f8b ja 0x109d2fb1 */
  if ((!C.cf&&!C.zf)) goto L_109d2fb1;
  /* 109d2f8d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 109d2f90 jmp dword ptr [ecx*4 + 0x109d33df] */
  switch (ECX) {
    case 0: goto L_109d2f97;
    case 1: goto L_109d2fa1;
    case 2: goto L_109d2fa7;
    case 3: goto L_109d2fad;
    case 4: goto L_109d2fd5;
    case 5: goto L_109d2fdf;
    case 6: goto L_109d2fe5;
    case 7: goto L_109d2feb;
    default: x86_unimpl("switch@0x109d2f90 out of table"); return;
  }
L_109d2f97:;
  /* 109d2f97 mov dword ptr [0x109f19f8], 1 */
  w32((uint32_t)(0x109f19f8), (0x1u));
L_109d2fa1:;
  /* 109d2fa1 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 109d2fa5 jmp 0x109d2fb1 */
  goto L_109d2fb1;
L_109d2fa7:;
  /* 109d2fa7 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 109d2fab jmp 0x109d2fb1 */
  goto L_109d2fb1;
L_109d2fad:;
  /* 109d2fad mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_109d2fb1:;
  /* 109d2fb1 jmp 0x109d32b0 */
  goto L_109d32b0;
L_109d2fb6:;
  /* 109d2fb6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d2fb9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 109d2fbc mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 109d2fbf sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d2fc2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 109d2fc5 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d2fc9 ja 0x109d2fef */
  if ((!C.cf&&!C.zf)) goto L_109d2fef;
  /* 109d2fcb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 109d2fce jmp dword ptr [ecx*4 + 0x109d33ef] */
  switch (ECX) {
    case 0: goto L_109d2fd5;
    case 1: goto L_109d2fdf;
    case 2: goto L_109d2fe5;
    case 3: goto L_109d2feb;
    default: x86_unimpl("switch@0x109d2fce out of table"); return;
  }
L_109d2fd5:;
  /* 109d2fd5 mov dword ptr [0x109f19f8], 1 */
  w32((uint32_t)(0x109f19f8), (0x1u));
L_109d2fdf:;
  /* 109d2fdf mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 109d2fe3 jmp 0x109d2fef */
  goto L_109d2fef;
L_109d2fe5:;
  /* 109d2fe5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 109d2fe9 jmp 0x109d2fef */
  goto L_109d2fef;
L_109d2feb:;
  /* 109d2feb mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_109d2fef:;
  /* 109d2fef jmp 0x109d32b0 */
  goto L_109d32b0;
L_109d2ff4:;
  /* 109d2ff4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d2ff7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 109d2ffa cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d2ffe je 0x109d3008 */
  if (C.zf) goto L_109d3008;
  /* 109d3000 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d3004 je 0x109d300e */
  if (C.zf) goto L_109d300e;
  /* 109d3006 jmp 0x109d3012 */
  goto L_109d3012;
L_109d3008:;
  /* 109d3008 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 109d300c jmp 0x109d3012 */
  goto L_109d3012;
L_109d300e:;
  /* 109d300e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_109d3012:;
  /* 109d3012 jmp 0x109d32b0 */
  goto L_109d32b0;
L_109d3017:;
  /* 109d3017 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d301a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 109d301d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d3021 je 0x109d302b */
  if (C.zf) goto L_109d302b;
  /* 109d3023 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d3027 je 0x109d3035 */
  if (C.zf) goto L_109d3035;
  /* 109d3029 jmp 0x109d3039 */
  goto L_109d3039;
L_109d302b:;
  /* 109d302b mov dword ptr [0x109f19f8], 1 */
  w32((uint32_t)(0x109f19f8), (0x1u));
L_109d3035:;
  /* 109d3035 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_109d3039:;
  /* 109d3039 jmp 0x109d32b0 */
  goto L_109d32b0;
L_109d303e:;
  /* 109d303e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d3041 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 109d3044 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d3048 je 0x109d3052 */
  if (C.zf) goto L_109d3052;
  /* 109d304a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d304e je 0x109d305c */
  if (C.zf) goto L_109d305c;
  /* 109d3050 jmp 0x109d3060 */
  goto L_109d3060;
L_109d3052:;
  /* 109d3052 mov dword ptr [0x109f19f8], 1 */
  w32((uint32_t)(0x109f19f8), (0x1u));
L_109d305c:;
  /* 109d305c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_109d3060:;
  /* 109d3060 jmp 0x109d32b0 */
  goto L_109d32b0;
L_109d3065:;
  /* 109d3065 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d3068 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 109d306b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d306f je 0x109d3079 */
  if (C.zf) goto L_109d3079;
  /* 109d3071 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d3075 je 0x109d3083 */
  if (C.zf) goto L_109d3083;
  /* 109d3077 jmp 0x109d3087 */
  goto L_109d3087;
L_109d3079:;
  /* 109d3079 mov dword ptr [0x109f19f8], 1 */
  w32((uint32_t)(0x109f19f8), (0x1u));
L_109d3083:;
  /* 109d3083 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_109d3087:;
  /* 109d3087 jmp 0x109d32b0 */
  goto L_109d32b0;
L_109d308c:;
  /* 109d308c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d308f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 109d3092 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d3096 je 0x109d30a0 */
  if (C.zf) goto L_109d30a0;
  /* 109d3098 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d309c je 0x109d30aa */
  if (C.zf) goto L_109d30aa;
  /* 109d309e jmp 0x109d30ae */
  goto L_109d30ae;
L_109d30a0:;
  /* 109d30a0 mov dword ptr [0x109f19f8], 1 */
  w32((uint32_t)(0x109f19f8), (0x1u));
L_109d30aa:;
  /* 109d30aa mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_109d30ae:;
  /* 109d30ae jmp 0x109d32b0 */
  goto L_109d32b0;
L_109d30b3:;
  /* 109d30b3 push 0x109edb3c */
  push32((uint32_t)(0x109edb3cu));
  /* 109d30b8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d30bb push ecx */
  push32((uint32_t)(ECX));
  /* 109d30bc call 0x109d3910 */
  push32(0x109d30c1u); f_109d3910();
  /* 109d30c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d30c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d30c6 jne 0x109d30d3 */
  if (!C.zf) goto L_109d30d3;
  /* 109d30c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d30cb add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d30ce mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 109d30d1 jmp 0x109d30f1 */
  goto L_109d30f1;
L_109d30d3:;
  /* 109d30d3 push 0x109edb38 */
  push32((uint32_t)(0x109edb38u));
  /* 109d30d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d30db push eax */
  push32((uint32_t)(EAX));
  /* 109d30dc call 0x109d3910 */
  push32(0x109d30e1u); f_109d3910();
  /* 109d30e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d30e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d30e6 jne 0x109d30f1 */
  if (!C.zf) goto L_109d30f1;
  /* 109d30e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d30eb add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d30ee mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_109d30f1:;
  /* 109d30f1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 109d30f5 jmp 0x109d32b0 */
  goto L_109d32b0;
L_109d30fa:;
  /* 109d30fa mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d30fd cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d3101 jg 0x109d3111 */
  if ((!C.zf&&C.sf==C.of)) goto L_109d3111;
  /* 109d3103 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 109d3106 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 109d310c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 109d310f jmp 0x109d311d */
  goto L_109d311d;
L_109d3111:;
  /* 109d3111 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 109d3114 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 109d311a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_109d311d:;
  /* 109d311d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d3121 jle 0x109d31c4 */
  if ((C.zf||C.sf!=C.of)) goto L_109d31c4;
  /* 109d3127 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d312a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d312d jbe 0x109d31c4 */
  if ((C.cf||C.zf)) goto L_109d31c4;
  /* 109d3133 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109d3136 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d3138 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 109d313a mov ecx, dword ptr [0x109efc98] */
  ECX = (r32((uint32_t)(0x109efc98)));
  /* 109d3140 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109d3142 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 109d3146 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 109d314c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109d314e je 0x109d3187 */
  if (C.zf) goto L_109d3187;
  /* 109d3150 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d3153 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d3156 jbe 0x109d3187 */
  if ((C.cf||C.zf)) goto L_109d3187;
  /* 109d3158 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d315b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109d315d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 109d3160 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 109d3162 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 109d3164 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d3167 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 109d3169 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d316c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d316f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 109d3171 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109d3174 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d3177 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 109d317a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d317d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109d317f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d3182 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d3185 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_109d3187:;
  /* 109d3187 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d318a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109d318c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109d318f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 109d3191 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 109d3193 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d3196 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109d3198 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d319b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d319e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 109d31a0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109d31a3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d31a6 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 109d31a9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d31ac mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 109d31ae sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d31b1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d31b4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 109d31b6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d31b9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d31bc mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 109d31bf jmp 0x109d311d */
  goto L_109d311d;
L_109d31c4:;
  /* 109d31c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d31c7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 109d31ca jmp 0x109d2ee6 */
  goto L_109d2ee6;
L_109d31cf:;
  /* 109d31cf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d31d2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 109d31d5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109d31d7 je 0x109d32a2 */
  if (C.zf) goto L_109d32a2;
  /* 109d31dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d31e0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d31e3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_109d31e6:;
  /* 109d31e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d31e9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 109d31ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109d31ee je 0x109d32a0 */
  if (C.zf) goto L_109d32a0;
  /* 109d31f4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d31f7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d31fa je 0x109d32a0 */
  if (C.zf) goto L_109d32a0;
  /* 109d3200 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d3203 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 109d3206 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d3209 jne 0x109d3219 */
  if (!C.zf) goto L_109d3219;
  /* 109d320b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d320e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d3211 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 109d3214 jmp 0x109d32a0 */
  goto L_109d32a0;
L_109d3219:;
  /* 109d3219 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d321c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109d321e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 109d3220 mov edx, dword ptr [0x109efc98] */
  EDX = (r32((uint32_t)(0x109efc98)));
  /* 109d3226 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d3228 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 109d322c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 109d3231 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d3233 je 0x109d326c */
  if (C.zf) goto L_109d326c;
  /* 109d3235 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d3238 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d323b jbe 0x109d326c */
  if ((C.cf||C.zf)) goto L_109d326c;
  /* 109d323d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d3240 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 109d3242 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d3245 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 109d3247 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 109d3249 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d324c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109d324e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d3251 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d3254 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 109d3256 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d3259 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d325c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 109d325f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d3262 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109d3264 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d3267 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d326a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_109d326c:;
  /* 109d326c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d326f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109d3271 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d3274 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 109d3276 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 109d3278 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d327b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 109d327d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d3280 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d3283 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 109d3285 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d3288 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d328b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 109d328e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d3291 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109d3293 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d3296 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d3299 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 109d329b jmp 0x109d31e6 */
  goto L_109d31e6;
L_109d32a0:;
  /* 109d32a0 jmp 0x109d32ab */
  goto L_109d32ab;
L_109d32a2:;
  /* 109d32a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d32a5 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d32a8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_109d32ab:;
  /* 109d32ab jmp 0x109d2ee6 */
  goto L_109d2ee6;
L_109d32b0:;
  /* 109d32b0 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 109d32b4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109d32b6 je 0x109d32dc */
  if (C.zf) goto L_109d32dc;
  /* 109d32b8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 109d32bb push edx */
  push32((uint32_t)(EDX));
  /* 109d32bc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d32bf push eax */
  push32((uint32_t)(EAX));
  /* 109d32c0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d32c3 push ecx */
  push32((uint32_t)(ECX));
  /* 109d32c4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d32c7 push edx */
  push32((uint32_t)(EDX));
  /* 109d32c8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 109d32cb push eax */
  push32((uint32_t)(EAX));
  /* 109d32cc call 0x109d2710 */
  push32(0x109d32d1u); f_109d2710();
  /* 109d32d1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d32d4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d32d7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 109d32da jmp 0x109d3357 */
  goto L_109d3357;
L_109d32dc:;
  /* 109d32dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d32df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d32e1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 109d32e3 mov ecx, dword ptr [0x109efc98] */
  ECX = (r32((uint32_t)(0x109efc98)));
  /* 109d32e9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109d32eb mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 109d32ef and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 109d32f5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109d32f7 je 0x109d3328 */
  if (C.zf) goto L_109d3328;
  /* 109d32f9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d32fc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109d32fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d3301 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 109d3303 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 109d3305 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d3308 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109d330a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d330d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d3310 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 109d3312 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d3315 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d3318 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 109d331b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d331e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 109d3320 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d3323 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d3326 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_109d3328:;
  /* 109d3328 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d332b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 109d332d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d3330 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 109d3332 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 109d3334 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d3337 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109d3339 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d333c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d333f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 109d3341 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d3344 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d3347 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 109d334a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d334d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109d334f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d3352 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d3355 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_109d3357:;
  /* 109d3357 jmp 0x109d2ee6 */
  goto L_109d2ee6;
L_109d335c:;
  /* 109d335c mov esp, ebp */
  ESP = (EBP);
  /* 109d335e pop ebp */
  EBP = (pop32());
  /* 109d335f ret  */
  ESPCHK(0x109d2ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013400 @ 0x109d3400 (650 bytes, 178 insns) */
void f_109d3400(void) {
  FTRACE(0x109d3400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d3400 push ebp */
  push32((uint32_t)(EBP));
  /* 109d3401 mov ebp, esp */
  EBP = (ESP);
  /* 109d3403 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d3409 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d340d jne 0x109d3569 */
  if (!C.zf) goto L_109d3569;
  /* 109d3413 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d3416 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 109d341c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 109d3422 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109d3425 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 109d342c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 109d3436 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d3438 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 109d343e push edx */
  push32((uint32_t)(EDX));
  /* 109d343f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d3442 push eax */
  push32((uint32_t)(EAX));
  /* 109d3443 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d3446 push ecx */
  push32((uint32_t)(ECX));
  /* 109d3447 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d344a push edx */
  push32((uint32_t)(EDX));
  /* 109d344b call 0x109d4820 */
  push32(0x109d3450u); f_109d4820();
  /* 109d3450 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d3453 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 109d3456 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d345a jne 0x109d34ef */
  if (!C.zf) goto L_109d34ef;
  /* 109d3460 call dword ptr [0x109f4380] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4380))), 0x109d3466u);
  /* 109d3466 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d3469 je 0x109d3470 */
  if (C.zf) goto L_109d3470;
  /* 109d346b jmp 0x109d354d */
  goto L_109d354d;
L_109d3470:;
  /* 109d3470 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d3472 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d3474 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d3476 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d3479 push eax */
  push32((uint32_t)(EAX));
  /* 109d347a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d347d push ecx */
  push32((uint32_t)(ECX));
  /* 109d347e call 0x109d4820 */
  push32(0x109d3483u); f_109d4820();
  /* 109d3483 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d3486 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 109d348c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d3493 jne 0x109d349a */
  if (!C.zf) goto L_109d349a;
  /* 109d3495 jmp 0x109d354d */
  goto L_109d354d;
L_109d349a:;
  /* 109d349a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 109d349c push 0x109edb44 */
  push32((uint32_t)(0x109edb44u));
  /* 109d34a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d34a3 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 109d34a9 push edx */
  push32((uint32_t)(EDX));
  /* 109d34aa call 0x109c5240 */
  push32(0x109d34afu); f_109c5240();
  /* 109d34af add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d34b2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 109d34b5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d34b9 jne 0x109d34c0 */
  if (!C.zf) goto L_109d34c0;
  /* 109d34bb jmp 0x109d354d */
  goto L_109d354d;
L_109d34c0:;
  /* 109d34c0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 109d34c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d34c9 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 109d34cf push eax */
  push32((uint32_t)(EAX));
  /* 109d34d0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d34d3 push ecx */
  push32((uint32_t)(ECX));
  /* 109d34d4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d34d7 push edx */
  push32((uint32_t)(EDX));
  /* 109d34d8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d34db push eax */
  push32((uint32_t)(EAX));
  /* 109d34dc call 0x109d4820 */
  push32(0x109d34e1u); f_109d4820();
  /* 109d34e1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d34e4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 109d34e7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d34eb jne 0x109d34ef */
  if (!C.zf) goto L_109d34ef;
  /* 109d34ed jmp 0x109d354d */
  goto L_109d354d;
L_109d34ef:;
  /* 109d34ef push 0x63 */
  push32((uint32_t)(0x63u));
  /* 109d34f1 push 0x109edb44 */
  push32((uint32_t)(0x109edb44u));
  /* 109d34f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d34f8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d34fb push ecx */
  push32((uint32_t)(ECX));
  /* 109d34fc call 0x109c5240 */
  push32(0x109d3501u); f_109c5240();
  /* 109d3501 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d3504 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 109d350a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 109d350c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 109d3512 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d3515 jne 0x109d3519 */
  if (!C.zf) goto L_109d3519;
  /* 109d3517 jmp 0x109d354d */
  goto L_109d354d;
L_109d3519:;
  /* 109d3519 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d351c push ecx */
  push32((uint32_t)(ECX));
  /* 109d351d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d3520 push edx */
  push32((uint32_t)(EDX));
  /* 109d3521 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 109d3527 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109d3529 push ecx */
  push32((uint32_t)(ECX));
  /* 109d352a call 0x109c8a60 */
  push32(0x109d352fu); f_109c8a60();
  /* 109d352f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d3532 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d3536 je 0x109d3546 */
  if (C.zf) goto L_109d3546;
  /* 109d3538 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d353a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d353d push edx */
  push32((uint32_t)(EDX));
  /* 109d353e call 0x109c5cd0 */
  push32(0x109d3543u); f_109c5cd0();
  /* 109d3543 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109d3546:;
  /* 109d3546 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d3548 jmp 0x109d3686 */
  goto L_109d3686;
L_109d354d:;
  /* 109d354d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d3551 je 0x109d3561 */
  if (C.zf) goto L_109d3561;
  /* 109d3553 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d3555 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d3558 push eax */
  push32((uint32_t)(EAX));
  /* 109d3559 call 0x109c5cd0 */
  push32(0x109d355eu); f_109c5cd0();
  /* 109d355e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109d3561:;
  /* 109d3561 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109d3564 jmp 0x109d3686 */
  goto L_109d3686;
L_109d3569:;
  /* 109d3569 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d356d jne 0x109d3683 */
  if (!C.zf) goto L_109d3683;
  /* 109d3573 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 109d357d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d3580 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 109d3586 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d3588 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 109d358e push edx */
  push32((uint32_t)(EDX));
  /* 109d358f push 0x109f1910 */
  push32((uint32_t)(0x109f1910u));
  /* 109d3594 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d3597 push eax */
  push32((uint32_t)(EAX));
  /* 109d3598 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d359b push ecx */
  push32((uint32_t)(ECX));
  /* 109d359c call 0x109d4680 */
  push32(0x109d35a1u); f_109d4680();
  /* 109d35a1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d35a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d35a6 jne 0x109d35b0 */
  if (!C.zf) goto L_109d35b0;
  /* 109d35a8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109d35ab jmp 0x109d3686 */
  goto L_109d3686;
L_109d35b0:;
  /* 109d35b0 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 109d35b6 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 109d35b9 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 109d35c3 jmp 0x109d35d4 */
  goto L_109d35d4;
L_109d35c5:;
  /* 109d35c5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 109d35cb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d35ce mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_109d35d4:;
  /* 109d35d4 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d35db jge 0x109d367f */
  if ((C.sf==C.of)) goto L_109d367f;
  /* 109d35e1 cmp dword ptr [0x109efea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109efea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d35e8 jle 0x109d361b */
  if ((C.zf||C.sf!=C.of)) goto L_109d361b;
  /* 109d35ea push 4 */
  push32((uint32_t)(0x4u));
  /* 109d35ec mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 109d35f2 mov dl, byte ptr [ecx*2 + 0x109f1910] */
  DL = (r8((uint32_t)(ECX*2 + 0x109f1910)));
  /* 109d35f9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 109d35ff mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 109d3605 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109d360a push eax */
  push32((uint32_t)(EAX));
  /* 109d360b call 0x109cb250 */
  push32(0x109d3610u); f_109cb250();
  /* 109d3610 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d3613 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 109d3619 jmp 0x109d364e */
  goto L_109d364e;
L_109d361b:;
  /* 109d361b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 109d3621 mov dl, byte ptr [ecx*2 + 0x109f1910] */
  DL = (r8((uint32_t)(ECX*2 + 0x109f1910)));
  /* 109d3628 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 109d362e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 109d3634 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109d3639 mov ecx, dword ptr [0x109efc98] */
  ECX = (r32((uint32_t)(0x109efc98)));
  /* 109d363f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109d3641 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 109d3645 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 109d3648 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_109d364e:;
  /* 109d364e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d3655 je 0x109d3678 */
  if (C.zf) goto L_109d3678;
  /* 109d3657 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 109d365d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 109d3660 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109d3663 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 109d366a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 109d366e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 109d3674 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 109d3676 jmp 0x109d367a */
  goto L_109d367a;
L_109d3678:;
  /* 109d3678 jmp 0x109d367f */
  goto L_109d367f;
L_109d367a:;
  /* 109d367a jmp 0x109d35c5 */
  goto L_109d35c5;
L_109d367f:;
  /* 109d367f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d3681 jmp 0x109d3686 */
  goto L_109d3686;
L_109d3683:;
  /* 109d3683 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_109d3686:;
  /* 109d3686 mov esp, ebp */
  ESP = (EBP);
  /* 109d3688 pop ebp */
  EBP = (pop32());
  /* 109d3689 ret  */
  ESPCHK(0x109d3400u, _esp0);
  ESP += 4; return;
}

/* FUN_10013690 @ 0x109d3690 (10 bytes, 5 insns) */
void f_109d3690(void) {
  FTRACE(0x109d3690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d3690 push ebp */
  push32((uint32_t)(EBP));
  /* 109d3691 mov ebp, esp */
  EBP = (ESP);
  /* 109d3693 mov eax, dword ptr [0x109f0d88] */
  EAX = (r32((uint32_t)(0x109f0d88)));
  /* 109d3698 pop ebp */
  EBP = (pop32());
  /* 109d3699 ret  */
  ESPCHK(0x109d3690u, _esp0);
  ESP += 4; return;
}

/* FUN_100136a0 @ 0x109d36a0 (575 bytes, 196 insns) */
void f_109d36a0(void) {
  FTRACE(0x109d36a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d36a0 push ebp */
  push32((uint32_t)(EBP));
  /* 109d36a1 mov ebp, esp */
  EBP = (ESP);
  /* 109d36a3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 109d36a5 push 0x109edb50 */
  push32((uint32_t)(0x109edb50u));
  /* 109d36aa push 0x109ce348 */
  push32((uint32_t)(0x109ce348u));
  /* 109d36af mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 109d36b5 push eax */
  push32((uint32_t)(EAX));
  /* 109d36b6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 109d36bd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d36c0 push ebx */
  push32((uint32_t)(EBX));
  /* 109d36c1 push esi */
  push32((uint32_t)(ESI));
  /* 109d36c2 push edi */
  push32((uint32_t)(EDI));
  /* 109d36c3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 109d36c6 cmp dword ptr [0x109f191c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f191c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d36cd jne 0x109d371e */
  if (!C.zf) goto L_109d371e;
  /* 109d36cf lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 109d36d2 push eax */
  push32((uint32_t)(EAX));
  /* 109d36d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 109d36d5 push 0x109ed280 */
  push32((uint32_t)(0x109ed280u));
  /* 109d36da push 1 */
  push32((uint32_t)(0x1u));
  /* 109d36dc call dword ptr [0x109f42ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42ec))), 0x109d36e2u);
  /* 109d36e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d36e4 je 0x109d36f2 */
  if (C.zf) goto L_109d36f2;
  /* 109d36e6 mov dword ptr [0x109f191c], 1 */
  w32((uint32_t)(0x109f191c), (0x1u));
  /* 109d36f0 jmp 0x109d371e */
  goto L_109d371e;
L_109d36f2:;
  /* 109d36f2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 109d36f5 push ecx */
  push32((uint32_t)(ECX));
  /* 109d36f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 109d36f8 push 0x109ed27c */
  push32((uint32_t)(0x109ed27cu));
  /* 109d36fd push 1 */
  push32((uint32_t)(0x1u));
  /* 109d36ff push 0 */
  push32((uint32_t)(0x0u));
  /* 109d3701 call dword ptr [0x109f42fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42fc))), 0x109d3707u);
  /* 109d3707 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d3709 je 0x109d3717 */
  if (C.zf) goto L_109d3717;
  /* 109d370b mov dword ptr [0x109f191c], 2 */
  w32((uint32_t)(0x109f191c), (0x2u));
  /* 109d3715 jmp 0x109d371e */
  goto L_109d371e;
L_109d3717:;
  /* 109d3717 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d3719 jmp 0x109d38f9 */
  goto L_109d38f9;
L_109d371e:;
  /* 109d371e cmp dword ptr [0x109f191c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109f191c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d3725 jne 0x109d3742 */
  if (!C.zf) goto L_109d3742;
  /* 109d3727 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d372a push edx */
  push32((uint32_t)(EDX));
  /* 109d372b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d372e push eax */
  push32((uint32_t)(EAX));
  /* 109d372f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d3732 push ecx */
  push32((uint32_t)(ECX));
  /* 109d3733 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d3736 push edx */
  push32((uint32_t)(EDX));
  /* 109d3737 call dword ptr [0x109f42ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42ec))), 0x109d373du);
  /* 109d373d jmp 0x109d38f9 */
  goto L_109d38f9;
L_109d3742:;
  /* 109d3742 cmp dword ptr [0x109f191c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x109f191c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d3749 jne 0x109d38f7 */
  if (!C.zf) goto L_109d38f7;
  /* 109d374f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d3753 jne 0x109d375d */
  if (!C.zf) goto L_109d375d;
  /* 109d3755 mov eax, dword ptr [0x109f1890] */
  EAX = (r32((uint32_t)(0x109f1890)));
  /* 109d375a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_109d375d:;
  /* 109d375d push 0 */
  push32((uint32_t)(0x0u));
  /* 109d375f push 0 */
  push32((uint32_t)(0x0u));
  /* 109d3761 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d3763 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d3765 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d3768 push ecx */
  push32((uint32_t)(ECX));
  /* 109d3769 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d376c push edx */
  push32((uint32_t)(EDX));
  /* 109d376d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 109d3772 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 109d3775 push eax */
  push32((uint32_t)(EAX));
  /* 109d3776 call dword ptr [0x109f43ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f43ac))), 0x109d377cu);
  /* 109d377c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 109d377f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d3783 jne 0x109d378c */
  if (!C.zf) goto L_109d378c;
  /* 109d3785 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d3787 jmp 0x109d38f9 */
  goto L_109d38f9;
L_109d378c:;
  /* 109d378c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 109d3793 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 109d3796 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d3799 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 109d379b call 0x109c83e0 */
  push32(0x109d37a0u); f_109c83e0();
  /* 109d37a0 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 109d37a3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 109d37a6 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 109d37a9 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 109d37ac mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 109d37af push edx */
  push32((uint32_t)(EDX));
  /* 109d37b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d37b2 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 109d37b5 push eax */
  push32((uint32_t)(EAX));
  /* 109d37b6 call 0x109c8fb0 */
  push32(0x109d37bbu); f_109c8fb0();
  /* 109d37bb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d37be mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 109d37c5 jmp 0x109d37de */
  goto L_109d37de;
  /* 109d37c7 mov eax, 1 */
  EAX = (0x1u);
  /* 109d37cc ret  */
  ESPCHK(0x109d36a0u, _esp0);
  ESP += 4; return;
  /* 109d37cd mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 109d37d0 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 109d37d7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_109d37de:;
  /* 109d37de cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d37e2 jne 0x109d37eb */
  if (!C.zf) goto L_109d37eb;
  /* 109d37e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d37e6 jmp 0x109d38f9 */
  goto L_109d38f9;
L_109d37eb:;
  /* 109d37eb push 0 */
  push32((uint32_t)(0x0u));
  /* 109d37ed push 0 */
  push32((uint32_t)(0x0u));
  /* 109d37ef mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 109d37f2 push ecx */
  push32((uint32_t)(ECX));
  /* 109d37f3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 109d37f6 push edx */
  push32((uint32_t)(EDX));
  /* 109d37f7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d37fa push eax */
  push32((uint32_t)(EAX));
  /* 109d37fb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d37fe push ecx */
  push32((uint32_t)(ECX));
  /* 109d37ff push 0x220 */
  push32((uint32_t)(0x220u));
  /* 109d3804 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 109d3807 push edx */
  push32((uint32_t)(EDX));
  /* 109d3808 call dword ptr [0x109f43ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f43ac))), 0x109d380eu);
  /* 109d380e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d3810 jne 0x109d3819 */
  if (!C.zf) goto L_109d3819;
  /* 109d3812 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d3814 jmp 0x109d38f9 */
  goto L_109d38f9;
L_109d3819:;
  /* 109d3819 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 109d3820 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 109d3823 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 109d3827 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d382a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 109d382c call 0x109c83e0 */
  push32(0x109d3831u); f_109c83e0();
  /* 109d3831 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 109d3834 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 109d3837 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 109d383a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 109d383d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 109d3844 jmp 0x109d385d */
  goto L_109d385d;
  /* 109d3846 mov eax, 1 */
  EAX = (0x1u);
  /* 109d384b ret  */
  ESPCHK(0x109d36a0u, _esp0);
  ESP += 4; return;
  /* 109d384c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 109d384f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 109d3856 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_109d385d:;
  /* 109d385d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d3861 jne 0x109d386a */
  if (!C.zf) goto L_109d386a;
  /* 109d3863 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d3865 jmp 0x109d38f9 */
  goto L_109d38f9;
L_109d386a:;
  /* 109d386a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d386e jne 0x109d3879 */
  if (!C.zf) goto L_109d3879;
  /* 109d3870 mov edx, dword ptr [0x109f1880] */
  EDX = (r32((uint32_t)(0x109f1880)));
  /* 109d3876 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_109d3879:;
  /* 109d3879 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d387c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 109d387f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 109d3885 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d3888 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 109d388b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 109d3892 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 109d3895 push ecx */
  push32((uint32_t)(ECX));
  /* 109d3896 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 109d3899 push edx */
  push32((uint32_t)(EDX));
  /* 109d389a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 109d389d push eax */
  push32((uint32_t)(EAX));
  /* 109d389e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d38a1 push ecx */
  push32((uint32_t)(ECX));
  /* 109d38a2 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 109d38a5 push edx */
  push32((uint32_t)(EDX));
  /* 109d38a6 call dword ptr [0x109f42fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42fc))), 0x109d38acu);
  /* 109d38ac mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 109d38af mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d38b2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 109d38b5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109d38b7 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 109d38bc cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d38c2 je 0x109d38d8 */
  if (C.zf) goto L_109d38d8;
  /* 109d38c4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d38c7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 109d38ca xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109d38cc mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 109d38d0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d38d6 je 0x109d38dc */
  if (C.zf) goto L_109d38dc;
L_109d38d8:;
  /* 109d38d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d38da jmp 0x109d38f9 */
  goto L_109d38f9;
L_109d38dc:;
  /* 109d38dc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d38df shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 109d38e1 push eax */
  push32((uint32_t)(EAX));
  /* 109d38e2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 109d38e5 push ecx */
  push32((uint32_t)(ECX));
  /* 109d38e6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d38e9 push edx */
  push32((uint32_t)(EDX));
  /* 109d38ea call 0x109cd130 */
  push32(0x109d38efu); f_109cd130();
  /* 109d38ef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d38f2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 109d38f5 jmp 0x109d38f9 */
  goto L_109d38f9;
L_109d38f7:;
  /* 109d38f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_109d38f9:;
  /* 109d38f9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 109d38fc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109d38ff mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 109d3906 pop edi */
  EDI = (pop32());
  /* 109d3907 pop esi */
  ESI = (pop32());
  /* 109d3908 pop ebx */
  EBX = (pop32());
  /* 109d3909 mov esp, ebp */
  ESP = (EBP);
  /* 109d390b pop ebp */
  EBP = (pop32());
  /* 109d390c ret  */
  ESPCHK(0x109d36a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013910 @ 0x109d3910 (208 bytes, 85 insns) */
void f_109d3910(void) {
  FTRACE(0x109d3910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d3910 push ebp */
  push32((uint32_t)(EBP));
  /* 109d3911 mov ebp, esp */
  EBP = (ESP);
  /* 109d3913 push edi */
  push32((uint32_t)(EDI));
  /* 109d3914 push esi */
  push32((uint32_t)(ESI));
  /* 109d3915 push ebx */
  push32((uint32_t)(EBX));
  /* 109d3916 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 109d3919 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 109d391c lea eax, [0x109f1878] */
  EAX = ((uint32_t)(0x109f1878));
  /* 109d3922 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d3926 jne 0x109d3963 */
  if (!C.zf) goto L_109d3963;
  /* 109d3928 mov al, 0xff */
  AL = (0xffu);
  /* 109d392a mov edi, edi */
  EDI = (EDI);
L_109d392c:;
  /* 109d392c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 109d392e je 0x109d395e */
  if (C.zf) goto L_109d395e;
  /* 109d3930 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 109d3932 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 109d3933 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 109d3935 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 109d3936 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109d3938 je 0x109d392c */
  if (C.zf) goto L_109d392c;
  /* 109d393a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 109d393c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109d393e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 109d3940 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 109d3943 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 109d3945 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 109d3947 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 109d3949 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 109d394b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109d394d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 109d394f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 109d3952 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 109d3954 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 109d3956 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109d3958 je 0x109d392c */
  if (C.zf) goto L_109d392c;
  /* 109d395a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 109d395c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_109d395e:;
  /* 109d395e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 109d3961 jmp 0x109d39db */
  goto L_109d39db;
L_109d3963:;
  /* 109d3963 lock inc dword ptr [0x109f1a0c] */
  x86_unimpl("lock inc @ 0x109d3963");
  /* 109d396a cmp dword ptr [0x109f19fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f19fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d3971 jg 0x109d3977 */
  if ((!C.zf&&C.sf==C.of)) goto L_109d3977;
  /* 109d3973 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d3975 jmp 0x109d398c */
  goto L_109d398c;
L_109d3977:;
  /* 109d3977 lock dec dword ptr [0x109f1a0c] */
  x86_unimpl("lock dec @ 0x109d3977");
  /* 109d397e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 109d3980 call 0x109c8c40 */
  push32(0x109d3985u); f_109c8c40();
  /* 109d3985 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_109d398c:;
  /* 109d398c mov eax, 0xff */
  EAX = (0xffu);
  /* 109d3991 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 109d3993 nop  */
  /* nop */
L_109d3994:;
  /* 109d3994 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 109d3996 je 0x109d39bf */
  if (C.zf) goto L_109d39bf;
  /* 109d3998 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 109d399a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 109d399b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 109d399d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 109d399e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109d39a0 je 0x109d3994 */
  if (C.zf) goto L_109d3994;
  /* 109d39a2 push eax */
  push32((uint32_t)(EAX));
  /* 109d39a3 push ebx */
  push32((uint32_t)(EBX));
  /* 109d39a4 call 0x109d4a80 */
  push32(0x109d39a9u); f_109d4a80();
  /* 109d39a9 mov ebx, eax */
  EBX = (EAX);
  /* 109d39ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d39ae call 0x109d4a80 */
  push32(0x109d39b3u); f_109d4a80();
  /* 109d39b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d39b6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109d39b8 je 0x109d3994 */
  if (C.zf) goto L_109d3994;
  /* 109d39ba sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d39bc sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_109d39bf:;
  /* 109d39bf mov ebx, eax */
  EBX = (EAX);
  /* 109d39c1 pop eax */
  EAX = (pop32());
  /* 109d39c2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d39c4 jne 0x109d39cf */
  if (!C.zf) goto L_109d39cf;
  /* 109d39c6 lock dec dword ptr [0x109f1a0c] */
  x86_unimpl("lock dec @ 0x109d39c6");
  /* 109d39cd jmp 0x109d39d9 */
  goto L_109d39d9;
L_109d39cf:;
  /* 109d39cf push 0x13 */
  push32((uint32_t)(0x13u));
  /* 109d39d1 call 0x109c8ce0 */
  push32(0x109d39d6u); f_109c8ce0();
  /* 109d39d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109d39d9:;
  /* 109d39d9 mov eax, ebx */
  EAX = (EBX);
L_109d39db:;
  /* 109d39db pop ebx */
  EBX = (pop32());
  /* 109d39dc pop esi */
  ESI = (pop32());
  /* 109d39dd pop edi */
  EDI = (pop32());
  /* 109d39de leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109d39df ret  */
  ESPCHK(0x109d3910u, _esp0);
  ESP += 4; return;
}

/* FUN_100139e0 @ 0x109d39e0 (257 bytes, 103 insns) */
void f_109d39e0(void) {
  FTRACE(0x109d39e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d39e0 push ebp */
  push32((uint32_t)(EBP));
  /* 109d39e1 mov ebp, esp */
  EBP = (ESP);
  /* 109d39e3 push edi */
  push32((uint32_t)(EDI));
  /* 109d39e4 push esi */
  push32((uint32_t)(ESI));
  /* 109d39e5 push ebx */
  push32((uint32_t)(EBX));
  /* 109d39e6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d39e9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109d39eb je 0x109d3ada */
  if (C.zf) goto L_109d3ada;
  /* 109d39f1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 109d39f4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 109d39f7 lea eax, [0x109f1878] */
  EAX = ((uint32_t)(0x109f1878));
  /* 109d39fd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d3a01 jne 0x109d3a51 */
  if (!C.zf) goto L_109d3a51;
  /* 109d3a03 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 109d3a05 mov bl, 0x5a */
  BL = (0x5au);
  /* 109d3a07 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 109d3a09 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_109d3a0c:;
  /* 109d3a0c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 109d3a0e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 109d3a10 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 109d3a12 je 0x109d3a35 */
  if (C.zf) goto L_109d3a35;
  /* 109d3a14 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 109d3a16 je 0x109d3a35 */
  if (C.zf) goto L_109d3a35;
  /* 109d3a18 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 109d3a19 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 109d3a1a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109d3a1c jb 0x109d3a24 */
  if (C.cf) goto L_109d3a24;
  /* 109d3a1e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109d3a20 ja 0x109d3a24 */
  if ((!C.cf&&!C.zf)) goto L_109d3a24;
  /* 109d3a22 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_109d3a24:;
  /* 109d3a24 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109d3a26 jb 0x109d3a2e */
  if (C.cf) goto L_109d3a2e;
  /* 109d3a28 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109d3a2a ja 0x109d3a2e */
  if ((!C.cf&&!C.zf)) goto L_109d3a2e;
  /* 109d3a2c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_109d3a2e:;
  /* 109d3a2e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109d3a30 jne 0x109d3a3f */
  if (!C.zf) goto L_109d3a3f;
  /* 109d3a32 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 109d3a33 jne 0x109d3a0c */
  if (!C.zf) goto L_109d3a0c;
L_109d3a35:;
  /* 109d3a35 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109d3a37 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109d3a39 je 0x109d3ada */
  if (C.zf) goto L_109d3ada;
L_109d3a3f:;
  /* 109d3a3f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 109d3a44 jb 0x109d3ada */
  if (C.cf) goto L_109d3ada;
  /* 109d3a4a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 109d3a4c jmp 0x109d3ada */
  goto L_109d3ada;
L_109d3a51:;
  /* 109d3a51 lock inc dword ptr [0x109f1a0c] */
  x86_unimpl("lock inc @ 0x109d3a51");
  /* 109d3a58 cmp dword ptr [0x109f19fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f19fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d3a5f jg 0x109d3a65 */
  if ((!C.zf&&C.sf==C.of)) goto L_109d3a65;
  /* 109d3a61 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d3a63 jmp 0x109d3a7e */
  goto L_109d3a7e;
L_109d3a65:;
  /* 109d3a65 lock dec dword ptr [0x109f1a0c] */
  x86_unimpl("lock dec @ 0x109d3a65");
  /* 109d3a6c mov ebx, ecx */
  EBX = (ECX);
  /* 109d3a6e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 109d3a70 call 0x109c8c40 */
  push32(0x109d3a75u); f_109c8c40();
  /* 109d3a75 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 109d3a7c mov ecx, ebx */
  ECX = (EBX);
L_109d3a7e:;
  /* 109d3a7e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d3a80 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 109d3a82 mov edi, edi */
  EDI = (EDI);
L_109d3a84:;
  /* 109d3a84 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 109d3a86 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d3a88 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 109d3a8a je 0x109d3aaf */
  if (C.zf) goto L_109d3aaf;
  /* 109d3a8c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 109d3a8e je 0x109d3aaf */
  if (C.zf) goto L_109d3aaf;
  /* 109d3a90 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 109d3a91 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 109d3a92 push ecx */
  push32((uint32_t)(ECX));
  /* 109d3a93 push eax */
  push32((uint32_t)(EAX));
  /* 109d3a94 push ebx */
  push32((uint32_t)(EBX));
  /* 109d3a95 call 0x109d4a80 */
  push32(0x109d3a9au); f_109d4a80();
  /* 109d3a9a mov ebx, eax */
  EBX = (EAX);
  /* 109d3a9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d3a9f call 0x109d4a80 */
  push32(0x109d3aa4u); f_109d4a80();
  /* 109d3aa4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d3aa7 pop ecx */
  ECX = (pop32());
  /* 109d3aa8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d3aaa jne 0x109d3ab5 */
  if (!C.zf) goto L_109d3ab5;
  /* 109d3aac dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 109d3aad jne 0x109d3a84 */
  if (!C.zf) goto L_109d3a84;
L_109d3aaf:;
  /* 109d3aaf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109d3ab1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d3ab3 je 0x109d3abe */
  if (C.zf) goto L_109d3abe;
L_109d3ab5:;
  /* 109d3ab5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 109d3aba jb 0x109d3abe */
  if (C.cf) goto L_109d3abe;
  /* 109d3abc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_109d3abe:;
  /* 109d3abe pop eax */
  EAX = (pop32());
  /* 109d3abf or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d3ac1 jne 0x109d3acc */
  if (!C.zf) goto L_109d3acc;
  /* 109d3ac3 lock dec dword ptr [0x109f1a0c] */
  x86_unimpl("lock dec @ 0x109d3ac3");
  /* 109d3aca jmp 0x109d3ada */
  goto L_109d3ada;
L_109d3acc:;
  /* 109d3acc mov ebx, ecx */
  EBX = (ECX);
  /* 109d3ace push 0x13 */
  push32((uint32_t)(0x13u));
  /* 109d3ad0 call 0x109c8ce0 */
  push32(0x109d3ad5u); f_109c8ce0();
  /* 109d3ad5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d3ad8 mov ecx, ebx */
  ECX = (EBX);
L_109d3ada:;
  /* 109d3ada mov eax, ecx */
  EAX = (ECX);
  /* 109d3adc pop ebx */
  EBX = (pop32());
  /* 109d3add pop esi */
  ESI = (pop32());
  /* 109d3ade pop edi */
  EDI = (pop32());
  /* 109d3adf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109d3ae0 ret  */
  ESPCHK(0x109d39e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013af0 @ 0x109d3af0 (255 bytes, 88 insns) */
void f_109d3af0(void) {
  FTRACE(0x109d3af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d3af0 push ebp */
  push32((uint32_t)(EBP));
  /* 109d3af1 mov ebp, esp */
  EBP = (ESP);
  /* 109d3af3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_109d3af6:;
  /* 109d3af6 cmp dword ptr [0x109efea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109efea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d3afd jle 0x109d3b16 */
  if ((C.zf||C.sf!=C.of)) goto L_109d3b16;
  /* 109d3aff push 8 */
  push32((uint32_t)(0x8u));
  /* 109d3b01 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d3b04 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109d3b06 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 109d3b08 push ecx */
  push32((uint32_t)(ECX));
  /* 109d3b09 call 0x109cb250 */
  push32(0x109d3b0eu); f_109cb250();
  /* 109d3b0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d3b11 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 109d3b14 jmp 0x109d3b2f */
  goto L_109d3b2f;
L_109d3b16:;
  /* 109d3b16 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d3b19 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d3b1b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 109d3b1d mov ecx, dword ptr [0x109efc98] */
  ECX = (r32((uint32_t)(0x109efc98)));
  /* 109d3b23 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109d3b25 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 109d3b29 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 109d3b2c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_109d3b2f:;
  /* 109d3b2f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d3b33 je 0x109d3b40 */
  if (C.zf) goto L_109d3b40;
  /* 109d3b35 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d3b38 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d3b3b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 109d3b3e jmp 0x109d3af6 */
  goto L_109d3af6;
L_109d3b40:;
  /* 109d3b40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d3b43 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109d3b45 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 109d3b47 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 109d3b4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d3b4d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d3b50 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 109d3b53 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d3b56 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109d3b59 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d3b5d je 0x109d3b65 */
  if (C.zf) goto L_109d3b65;
  /* 109d3b5f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d3b63 jne 0x109d3b78 */
  if (!C.zf) goto L_109d3b78;
L_109d3b65:;
  /* 109d3b65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d3b68 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d3b6a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 109d3b6c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109d3b6f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d3b72 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d3b75 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_109d3b78:;
  /* 109d3b78 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_109d3b7f:;
  /* 109d3b7f cmp dword ptr [0x109efea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109efea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d3b86 jle 0x109d3b9b */
  if ((C.zf||C.sf!=C.of)) goto L_109d3b9b;
  /* 109d3b88 push 4 */
  push32((uint32_t)(0x4u));
  /* 109d3b8a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d3b8d push edx */
  push32((uint32_t)(EDX));
  /* 109d3b8e call 0x109cb250 */
  push32(0x109d3b93u); f_109cb250();
  /* 109d3b93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d3b96 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 109d3b99 jmp 0x109d3bb0 */
  goto L_109d3bb0;
L_109d3b9b:;
  /* 109d3b9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d3b9e mov ecx, dword ptr [0x109efc98] */
  ECX = (r32((uint32_t)(0x109efc98)));
  /* 109d3ba4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109d3ba6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 109d3baa and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 109d3bad mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_109d3bb0:;
  /* 109d3bb0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d3bb4 je 0x109d3bdb */
  if (C.zf) goto L_109d3bdb;
  /* 109d3bb6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d3bb9 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109d3bbc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d3bbf lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 109d3bc3 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 109d3bc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d3bc9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109d3bcb mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 109d3bcd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 109d3bd0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d3bd3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d3bd6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 109d3bd9 jmp 0x109d3b7f */
  goto L_109d3b7f;
L_109d3bdb:;
  /* 109d3bdb cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d3bdf jne 0x109d3be8 */
  if (!C.zf) goto L_109d3be8;
  /* 109d3be1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d3be4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 109d3be6 jmp 0x109d3beb */
  goto L_109d3beb;
L_109d3be8:;
  /* 109d3be8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_109d3beb:;
  /* 109d3beb mov esp, ebp */
  ESP = (EBP);
  /* 109d3bed pop ebp */
  EBP = (pop32());
  /* 109d3bee ret  */
  ESPCHK(0x109d3af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013bf0 @ 0x109d3bf0 (17 bytes, 8 insns) */
void f_109d3bf0(void) {
  FTRACE(0x109d3bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d3bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 109d3bf1 mov ebp, esp */
  EBP = (ESP);
  /* 109d3bf3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d3bf6 push eax */
  push32((uint32_t)(EAX));
  /* 109d3bf7 call 0x109d3af0 */
  push32(0x109d3bfcu); f_109d3af0();
  /* 109d3bfc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d3bff pop ebp */
  EBP = (pop32());
  /* 109d3c00 ret  */
  ESPCHK(0x109d3bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013c10 @ 0x109d3c10 (297 bytes, 106 insns) */
void f_109d3c10(void) {
  FTRACE(0x109d3c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d3c10 push ebp */
  push32((uint32_t)(EBP));
  /* 109d3c11 mov ebp, esp */
  EBP = (ESP);
  /* 109d3c13 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d3c16 push esi */
  push32((uint32_t)(ESI));
L_109d3c17:;
  /* 109d3c17 cmp dword ptr [0x109efea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109efea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d3c1e jle 0x109d3c37 */
  if ((C.zf||C.sf!=C.of)) goto L_109d3c37;
  /* 109d3c20 push 8 */
  push32((uint32_t)(0x8u));
  /* 109d3c22 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d3c25 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109d3c27 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 109d3c29 push ecx */
  push32((uint32_t)(ECX));
  /* 109d3c2a call 0x109cb250 */
  push32(0x109d3c2fu); f_109cb250();
  /* 109d3c2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d3c32 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 109d3c35 jmp 0x109d3c50 */
  goto L_109d3c50;
L_109d3c37:;
  /* 109d3c37 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d3c3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d3c3c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 109d3c3e mov ecx, dword ptr [0x109efc98] */
  ECX = (r32((uint32_t)(0x109efc98)));
  /* 109d3c44 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109d3c46 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 109d3c4a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 109d3c4d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_109d3c50:;
  /* 109d3c50 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d3c54 je 0x109d3c61 */
  if (C.zf) goto L_109d3c61;
  /* 109d3c56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d3c59 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d3c5c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 109d3c5f jmp 0x109d3c17 */
  goto L_109d3c17;
L_109d3c61:;
  /* 109d3c61 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d3c64 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109d3c66 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 109d3c68 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 109d3c6b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d3c6e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d3c71 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 109d3c74 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d3c77 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 109d3c7a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d3c7e je 0x109d3c86 */
  if (C.zf) goto L_109d3c86;
  /* 109d3c80 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d3c84 jne 0x109d3c99 */
  if (!C.zf) goto L_109d3c99;
L_109d3c86:;
  /* 109d3c86 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d3c89 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d3c8b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 109d3c8d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109d3c90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d3c93 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d3c96 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_109d3c99:;
  /* 109d3c99 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 109d3ca0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_109d3ca7:;
  /* 109d3ca7 cmp dword ptr [0x109efea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109efea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d3cae jle 0x109d3cc3 */
  if ((C.zf||C.sf!=C.of)) goto L_109d3cc3;
  /* 109d3cb0 push 4 */
  push32((uint32_t)(0x4u));
  /* 109d3cb2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d3cb5 push edx */
  push32((uint32_t)(EDX));
  /* 109d3cb6 call 0x109cb250 */
  push32(0x109d3cbbu); f_109cb250();
  /* 109d3cbb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d3cbe mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 109d3cc1 jmp 0x109d3cd8 */
  goto L_109d3cd8;
L_109d3cc3:;
  /* 109d3cc3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d3cc6 mov ecx, dword ptr [0x109efc98] */
  ECX = (r32((uint32_t)(0x109efc98)));
  /* 109d3ccc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109d3cce mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 109d3cd2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 109d3cd5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_109d3cd8:;
  /* 109d3cd8 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d3cdc je 0x109d3d19 */
  if (C.zf) goto L_109d3d19;
  /* 109d3cde push 0 */
  push32((uint32_t)(0x0u));
  /* 109d3ce0 push 0xa */
  push32((uint32_t)(0xau));
  /* 109d3ce2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d3ce5 push eax */
  push32((uint32_t)(EAX));
  /* 109d3ce6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d3ce9 push ecx */
  push32((uint32_t)(ECX));
  /* 109d3cea call 0x109d4bb0 */
  push32(0x109d3cefu); f_109d4bb0();
  /* 109d3cef mov ecx, eax */
  ECX = (EAX);
  /* 109d3cf1 mov esi, edx */
  ESI = (EDX);
  /* 109d3cf3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d3cf6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d3cf9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 109d3cfa add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d3cfc adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 109d3cfe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109d3d01 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 109d3d04 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d3d07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d3d09 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 109d3d0b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109d3d0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d3d11 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d3d14 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 109d3d17 jmp 0x109d3ca7 */
  goto L_109d3ca7;
L_109d3d19:;
  /* 109d3d19 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d3d1d jne 0x109d3d2e */
  if (!C.zf) goto L_109d3d2e;
  /* 109d3d1f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d3d22 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 109d3d24 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d3d27 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d3d2a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 109d3d2c jmp 0x109d3d34 */
  goto L_109d3d34;
L_109d3d2e:;
  /* 109d3d2e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d3d31 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_109d3d34:;
  /* 109d3d34 pop esi */
  ESI = (pop32());
  /* 109d3d35 mov esp, ebp */
  ESP = (EBP);
  /* 109d3d37 pop ebp */
  EBP = (pop32());
  /* 109d3d38 ret  */
  ESPCHK(0x109d3c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10013d40 @ 0x109d3d40 (61 bytes, 18 insns) */
void f_109d3d40(void) {
  FTRACE(0x109d3d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d3d40 push ebp */
  push32((uint32_t)(EBP));
  /* 109d3d41 mov ebp, esp */
  EBP = (ESP);
  /* 109d3d43 cmp dword ptr [0x109f19d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f19d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d3d4a jne 0x109d3d7b */
  if (!C.zf) goto L_109d3d7b;
  /* 109d3d4c push 0xb */
  push32((uint32_t)(0xbu));
  /* 109d3d4e call 0x109c8c40 */
  push32(0x109d3d53u); f_109c8c40();
  /* 109d3d53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d3d56 cmp dword ptr [0x109f19d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f19d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d3d5d jne 0x109d3d71 */
  if (!C.zf) goto L_109d3d71;
  /* 109d3d5f call 0x109d3da0 */
  push32(0x109d3d64u); f_109d3da0();
  /* 109d3d64 mov eax, dword ptr [0x109f19d8] */
  EAX = (r32((uint32_t)(0x109f19d8)));
  /* 109d3d69 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d3d6c mov dword ptr [0x109f19d8], eax */
  w32((uint32_t)(0x109f19d8), (EAX));
L_109d3d71:;
  /* 109d3d71 push 0xb */
  push32((uint32_t)(0xbu));
  /* 109d3d73 call 0x109c8ce0 */
  push32(0x109d3d78u); f_109c8ce0();
  /* 109d3d78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109d3d7b:;
  /* 109d3d7b pop ebp */
  EBP = (pop32());
  /* 109d3d7c ret  */
  ESPCHK(0x109d3d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10013d80 @ 0x109d3d80 (30 bytes, 11 insns) */
void f_109d3d80(void) {
  FTRACE(0x109d3d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d3d80 push ebp */
  push32((uint32_t)(EBP));
  /* 109d3d81 mov ebp, esp */
  EBP = (ESP);
  /* 109d3d83 push 0xb */
  push32((uint32_t)(0xbu));
  /* 109d3d85 call 0x109c8c40 */
  push32(0x109d3d8au); f_109c8c40();
  /* 109d3d8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d3d8d call 0x109d3da0 */
  push32(0x109d3d92u); f_109d3da0();
  /* 109d3d92 push 0xb */
  push32((uint32_t)(0xbu));
  /* 109d3d94 call 0x109c8ce0 */
  push32(0x109d3d99u); f_109c8ce0();
  /* 109d3d99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d3d9c pop ebp */
  EBP = (pop32());
  /* 109d3d9d ret  */
  ESPCHK(0x109d3d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10013da0 @ 0x109d3da0 (939 bytes, 266 insns) */
void f_109d3da0(void) {
  FTRACE(0x109d3da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d3da0 push ebp */
  push32((uint32_t)(EBP));
  /* 109d3da1 mov ebp, esp */
  EBP = (ESP);
  /* 109d3da3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d3da6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 109d3dad push 0xc */
  push32((uint32_t)(0xcu));
  /* 109d3daf call 0x109c8c40 */
  push32(0x109d3db4u); f_109c8c40();
  /* 109d3db4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d3db7 mov dword ptr [0x109f1920], 0 */
  w32((uint32_t)(0x109f1920), (0x0u));
  /* 109d3dc1 mov dword ptr [0x109f0e38], 0xffffffff */
  w32((uint32_t)(0x109f0e38), (0xffffffffu));
  /* 109d3dcb mov eax, dword ptr [0x109f0e38] */
  EAX = (r32((uint32_t)(0x109f0e38)));
  /* 109d3dd0 mov dword ptr [0x109f0e28], eax */
  w32((uint32_t)(0x109f0e28), (EAX));
  /* 109d3dd5 push 0x109edbb0 */
  push32((uint32_t)(0x109edbb0u));
  /* 109d3dda call 0x109d4c20 */
  push32(0x109d3ddfu); f_109d4c20();
  /* 109d3ddf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d3de2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 109d3de5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d3de9 jne 0x109d3f23 */
  if (!C.zf) goto L_109d3f23;
  /* 109d3def push 0xc */
  push32((uint32_t)(0xcu));
  /* 109d3df1 call 0x109c8ce0 */
  push32(0x109d3df6u); f_109c8ce0();
  /* 109d3df6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d3df9 push 0x109f1928 */
  push32((uint32_t)(0x109f1928u));
  /* 109d3dfe call dword ptr [0x109f42b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42b0))), 0x109d3e04u);
  /* 109d3e04 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d3e07 je 0x109d3f1e */
  if (C.zf) goto L_109d3f1e;
  /* 109d3e0d mov dword ptr [0x109f1920], 1 */
  w32((uint32_t)(0x109f1920), (0x1u));
  /* 109d3e17 mov ecx, dword ptr [0x109f1928] */
  ECX = (r32((uint32_t)(0x109f1928)));
  /* 109d3e1d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109d3e20 mov dword ptr [0x109f0d90], ecx */
  w32((uint32_t)(0x109f0d90), (ECX));
  /* 109d3e26 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109d3e28 mov dx, word ptr [0x109f196e] */
  DX = (r16((uint32_t)(0x109f196e)));
  /* 109d3e2f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109d3e31 je 0x109d3e49 */
  if (C.zf) goto L_109d3e49;
  /* 109d3e33 mov eax, dword ptr [0x109f197c] */
  EAX = (r32((uint32_t)(0x109f197c)));
  /* 109d3e38 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109d3e3b mov ecx, dword ptr [0x109f0d90] */
  ECX = (r32((uint32_t)(0x109f0d90)));
  /* 109d3e41 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d3e43 mov dword ptr [0x109f0d90], ecx */
  w32((uint32_t)(0x109f0d90), (ECX));
L_109d3e49:;
  /* 109d3e49 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109d3e4b mov dx, word ptr [0x109f19c2] */
  DX = (r16((uint32_t)(0x109f19c2)));
  /* 109d3e52 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109d3e54 je 0x109d3e7e */
  if (C.zf) goto L_109d3e7e;
  /* 109d3e56 cmp dword ptr [0x109f19d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f19d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d3e5d je 0x109d3e7e */
  if (C.zf) goto L_109d3e7e;
  /* 109d3e5f mov dword ptr [0x109f0d94], 1 */
  w32((uint32_t)(0x109f0d94), (0x1u));
  /* 109d3e69 mov eax, dword ptr [0x109f19d0] */
  EAX = (r32((uint32_t)(0x109f19d0)));
  /* 109d3e6e sub eax, dword ptr [0x109f197c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109f197c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d3e74 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109d3e77 mov dword ptr [0x109f0d98], eax */
  w32((uint32_t)(0x109f0d98), (EAX));
  /* 109d3e7c jmp 0x109d3e92 */
  goto L_109d3e92;
L_109d3e7e:;
  /* 109d3e7e mov dword ptr [0x109f0d94], 0 */
  w32((uint32_t)(0x109f0d94), (0x0u));
  /* 109d3e88 mov dword ptr [0x109f0d98], 0 */
  w32((uint32_t)(0x109f0d98), (0x0u));
L_109d3e92:;
  /* 109d3e92 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 109d3e95 push ecx */
  push32((uint32_t)(ECX));
  /* 109d3e96 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d3e98 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 109d3e9a mov edx, dword ptr [0x109f0e1c] */
  EDX = (r32((uint32_t)(0x109f0e1c)));
  /* 109d3ea0 push edx */
  push32((uint32_t)(EDX));
  /* 109d3ea1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 109d3ea3 push 0x109f192c */
  push32((uint32_t)(0x109f192cu));
  /* 109d3ea8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 109d3ead mov eax, dword ptr [0x109f1890] */
  EAX = (r32((uint32_t)(0x109f1890)));
  /* 109d3eb2 push eax */
  push32((uint32_t)(EAX));
  /* 109d3eb3 call dword ptr [0x109f43ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f43ac))), 0x109d3eb9u);
  /* 109d3eb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d3ebb je 0x109d3ecf */
  if (C.zf) goto L_109d3ecf;
  /* 109d3ebd cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d3ec1 jne 0x109d3ecf */
  if (!C.zf) goto L_109d3ecf;
  /* 109d3ec3 mov ecx, dword ptr [0x109f0e1c] */
  ECX = (r32((uint32_t)(0x109f0e1c)));
  /* 109d3ec9 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 109d3ecd jmp 0x109d3ed8 */
  goto L_109d3ed8;
L_109d3ecf:;
  /* 109d3ecf mov edx, dword ptr [0x109f0e1c] */
  EDX = (r32((uint32_t)(0x109f0e1c)));
  /* 109d3ed5 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_109d3ed8:;
  /* 109d3ed8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 109d3edb push eax */
  push32((uint32_t)(EAX));
  /* 109d3edc push 0 */
  push32((uint32_t)(0x0u));
  /* 109d3ede push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 109d3ee0 mov ecx, dword ptr [0x109f0e20] */
  ECX = (r32((uint32_t)(0x109f0e20)));
  /* 109d3ee6 push ecx */
  push32((uint32_t)(ECX));
  /* 109d3ee7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 109d3ee9 push 0x109f1980 */
  push32((uint32_t)(0x109f1980u));
  /* 109d3eee push 0x220 */
  push32((uint32_t)(0x220u));
  /* 109d3ef3 mov edx, dword ptr [0x109f1890] */
  EDX = (r32((uint32_t)(0x109f1890)));
  /* 109d3ef9 push edx */
  push32((uint32_t)(EDX));
  /* 109d3efa call dword ptr [0x109f43ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f43ac))), 0x109d3f00u);
  /* 109d3f00 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d3f02 je 0x109d3f15 */
  if (C.zf) goto L_109d3f15;
  /* 109d3f04 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d3f08 jne 0x109d3f15 */
  if (!C.zf) goto L_109d3f15;
  /* 109d3f0a mov eax, dword ptr [0x109f0e20] */
  EAX = (r32((uint32_t)(0x109f0e20)));
  /* 109d3f0f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 109d3f13 jmp 0x109d3f1e */
  goto L_109d3f1e;
L_109d3f15:;
  /* 109d3f15 mov ecx, dword ptr [0x109f0e20] */
  ECX = (r32((uint32_t)(0x109f0e20)));
  /* 109d3f1b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_109d3f1e:;
  /* 109d3f1e jmp 0x109d4147 */
  goto L_109d4147;
L_109d3f23:;
  /* 109d3f23 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d3f26 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 109d3f29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d3f2b je 0x109d3f4d */
  if (C.zf) goto L_109d3f4d;
  /* 109d3f2d cmp dword ptr [0x109f19d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f19d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d3f34 je 0x109d3f5c */
  if (C.zf) goto L_109d3f5c;
  /* 109d3f36 mov ecx, dword ptr [0x109f19d4] */
  ECX = (r32((uint32_t)(0x109f19d4)));
  /* 109d3f3c push ecx */
  push32((uint32_t)(ECX));
  /* 109d3f3d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d3f40 push edx */
  push32((uint32_t)(EDX));
  /* 109d3f41 call 0x109d0ed0 */
  push32(0x109d3f46u); f_109d0ed0();
  /* 109d3f46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d3f49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d3f4b jne 0x109d3f5c */
  if (!C.zf) goto L_109d3f5c;
L_109d3f4d:;
  /* 109d3f4d push 0xc */
  push32((uint32_t)(0xcu));
  /* 109d3f4f call 0x109c8ce0 */
  push32(0x109d3f54u); f_109c8ce0();
  /* 109d3f54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d3f57 jmp 0x109d4147 */
  goto L_109d4147;
L_109d3f5c:;
  /* 109d3f5c push 2 */
  push32((uint32_t)(0x2u));
  /* 109d3f5e mov eax, dword ptr [0x109f19d4] */
  EAX = (r32((uint32_t)(0x109f19d4)));
  /* 109d3f63 push eax */
  push32((uint32_t)(EAX));
  /* 109d3f64 call 0x109c5cd0 */
  push32(0x109d3f69u); f_109c5cd0();
  /* 109d3f69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d3f6c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 109d3f71 push 0x109edba8 */
  push32((uint32_t)(0x109edba8u));
  /* 109d3f76 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d3f78 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d3f7b push ecx */
  push32((uint32_t)(ECX));
  /* 109d3f7c call 0x109c8070 */
  push32(0x109d3f81u); f_109c8070();
  /* 109d3f81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d3f84 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d3f87 push eax */
  push32((uint32_t)(EAX));
  /* 109d3f88 call 0x109c5240 */
  push32(0x109d3f8du); f_109c5240();
  /* 109d3f8d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d3f90 mov dword ptr [0x109f19d4], eax */
  w32((uint32_t)(0x109f19d4), (EAX));
  /* 109d3f95 cmp dword ptr [0x109f19d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f19d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d3f9c jne 0x109d3fad */
  if (!C.zf) goto L_109d3fad;
  /* 109d3f9e push 0xc */
  push32((uint32_t)(0xcu));
  /* 109d3fa0 call 0x109c8ce0 */
  push32(0x109d3fa5u); f_109c8ce0();
  /* 109d3fa5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d3fa8 jmp 0x109d4147 */
  goto L_109d4147;
L_109d3fad:;
  /* 109d3fad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d3fb0 push edx */
  push32((uint32_t)(EDX));
  /* 109d3fb1 mov eax, dword ptr [0x109f19d4] */
  EAX = (r32((uint32_t)(0x109f19d4)));
  /* 109d3fb6 push eax */
  push32((uint32_t)(EAX));
  /* 109d3fb7 call 0x109c81f0 */
  push32(0x109d3fbcu); f_109c81f0();
  /* 109d3fbc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d3fbf push 0xc */
  push32((uint32_t)(0xcu));
  /* 109d3fc1 call 0x109c8ce0 */
  push32(0x109d3fc6u); f_109c8ce0();
  /* 109d3fc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d3fc9 push 3 */
  push32((uint32_t)(0x3u));
  /* 109d3fcb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d3fce push ecx */
  push32((uint32_t)(ECX));
  /* 109d3fcf mov edx, dword ptr [0x109f0e1c] */
  EDX = (r32((uint32_t)(0x109f0e1c)));
  /* 109d3fd5 push edx */
  push32((uint32_t)(EDX));
  /* 109d3fd6 call 0x109c8a60 */
  push32(0x109d3fdbu); f_109c8a60();
  /* 109d3fdb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d3fde mov eax, dword ptr [0x109f0e1c] */
  EAX = (r32((uint32_t)(0x109f0e1c)));
  /* 109d3fe3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 109d3fe7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d3fea add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d3fed mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109d3ff0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d3ff3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 109d3ff6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d3ff9 jne 0x109d400d */
  if (!C.zf) goto L_109d400d;
  /* 109d3ffb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d3ffe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d4001 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 109d4004 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d4007 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d400a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_109d400d:;
  /* 109d400d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d4010 push eax */
  push32((uint32_t)(EAX));
  /* 109d4011 call 0x109d3af0 */
  push32(0x109d4016u); f_109d3af0();
  /* 109d4016 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d4019 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109d401f mov dword ptr [0x109f0d90], eax */
  w32((uint32_t)(0x109f0d90), (EAX));
L_109d4024:;
  /* 109d4024 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d4027 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 109d402a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d402d je 0x109d4045 */
  if (C.zf) goto L_109d4045;
  /* 109d402f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d4032 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 109d4035 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4038 jl 0x109d4050 */
  if ((C.sf!=C.of)) goto L_109d4050;
  /* 109d403a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d403d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 109d4040 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4043 jg 0x109d4050 */
  if ((!C.zf&&C.sf==C.of)) goto L_109d4050;
L_109d4045:;
  /* 109d4045 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d4048 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d404b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109d404e jmp 0x109d4024 */
  goto L_109d4024;
L_109d4050:;
  /* 109d4050 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d4053 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 109d4056 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4059 jne 0x109d40f5 */
  if (!C.zf) goto L_109d40f5;
  /* 109d405f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d4062 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d4065 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109d4068 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d406b push edx */
  push32((uint32_t)(EDX));
  /* 109d406c call 0x109d3af0 */
  push32(0x109d4071u); f_109d3af0();
  /* 109d4071 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d4074 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109d4077 mov ecx, dword ptr [0x109f0d90] */
  ECX = (r32((uint32_t)(0x109f0d90)));
  /* 109d407d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d407f mov dword ptr [0x109f0d90], ecx */
  w32((uint32_t)(0x109f0d90), (ECX));
L_109d4085:;
  /* 109d4085 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d4088 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 109d408b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d408e jl 0x109d40a6 */
  if ((C.sf!=C.of)) goto L_109d40a6;
  /* 109d4090 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d4093 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 109d4096 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4099 jg 0x109d40a6 */
  if ((!C.zf&&C.sf==C.of)) goto L_109d40a6;
  /* 109d409b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d409e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d40a1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 109d40a4 jmp 0x109d4085 */
  goto L_109d4085;
L_109d40a6:;
  /* 109d40a6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d40a9 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 109d40ac cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d40af jne 0x109d40f5 */
  if (!C.zf) goto L_109d40f5;
  /* 109d40b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d40b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d40b7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 109d40ba mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d40bd push ecx */
  push32((uint32_t)(ECX));
  /* 109d40be call 0x109d3af0 */
  push32(0x109d40c3u); f_109d3af0();
  /* 109d40c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d40c6 mov edx, dword ptr [0x109f0d90] */
  EDX = (r32((uint32_t)(0x109f0d90)));
  /* 109d40cc add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d40ce mov dword ptr [0x109f0d90], edx */
  w32((uint32_t)(0x109f0d90), (EDX));
L_109d40d4:;
  /* 109d40d4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d40d7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 109d40da cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d40dd jl 0x109d40f5 */
  if ((C.sf!=C.of)) goto L_109d40f5;
  /* 109d40df mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d40e2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 109d40e5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d40e8 jg 0x109d40f5 */
  if ((!C.zf&&C.sf==C.of)) goto L_109d40f5;
  /* 109d40ea mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d40ed add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d40f0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109d40f3 jmp 0x109d40d4 */
  goto L_109d40d4;
L_109d40f5:;
  /* 109d40f5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d40f9 je 0x109d4109 */
  if (C.zf) goto L_109d4109;
  /* 109d40fb mov edx, dword ptr [0x109f0d90] */
  EDX = (r32((uint32_t)(0x109f0d90)));
  /* 109d4101 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 109d4103 mov dword ptr [0x109f0d90], edx */
  w32((uint32_t)(0x109f0d90), (EDX));
L_109d4109:;
  /* 109d4109 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d410c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 109d410f mov dword ptr [0x109f0d94], ecx */
  w32((uint32_t)(0x109f0d94), (ECX));
  /* 109d4115 cmp dword ptr [0x109f0d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f0d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d411c je 0x109d413e */
  if (C.zf) goto L_109d413e;
  /* 109d411e push 3 */
  push32((uint32_t)(0x3u));
  /* 109d4120 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d4123 push edx */
  push32((uint32_t)(EDX));
  /* 109d4124 mov eax, dword ptr [0x109f0e20] */
  EAX = (r32((uint32_t)(0x109f0e20)));
  /* 109d4129 push eax */
  push32((uint32_t)(EAX));
  /* 109d412a call 0x109c8a60 */
  push32(0x109d412fu); f_109c8a60();
  /* 109d412f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d4132 mov ecx, dword ptr [0x109f0e20] */
  ECX = (r32((uint32_t)(0x109f0e20)));
  /* 109d4138 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 109d413c jmp 0x109d4147 */
  goto L_109d4147;
L_109d413e:;
  /* 109d413e mov edx, dword ptr [0x109f0e20] */
  EDX = (r32((uint32_t)(0x109f0e20)));
  /* 109d4144 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_109d4147:;
  /* 109d4147 mov esp, ebp */
  ESP = (EBP);
  /* 109d4149 pop ebp */
  EBP = (pop32());
  /* 109d414a ret  */
  ESPCHK(0x109d3da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014150 @ 0x109d4150 (46 bytes, 18 insns) */
void f_109d4150(void) {
  FTRACE(0x109d4150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d4150 push ebp */
  push32((uint32_t)(EBP));
  /* 109d4151 mov ebp, esp */
  EBP = (ESP);
  /* 109d4153 push ecx */
  push32((uint32_t)(ECX));
  /* 109d4154 push 0xb */
  push32((uint32_t)(0xbu));
  /* 109d4156 call 0x109c8c40 */
  push32(0x109d415bu); f_109c8c40();
  /* 109d415b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d415e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d4161 push eax */
  push32((uint32_t)(EAX));
  /* 109d4162 call 0x109d4180 */
  push32(0x109d4167u); f_109d4180();
  /* 109d4167 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d416a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109d416d push 0xb */
  push32((uint32_t)(0xbu));
  /* 109d416f call 0x109c8ce0 */
  push32(0x109d4174u); f_109c8ce0();
  /* 109d4174 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d4177 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d417a mov esp, ebp */
  ESP = (EBP);
  /* 109d417c pop ebp */
  EBP = (pop32());
  /* 109d417d ret  */
  ESPCHK(0x109d4150u, _esp0);
  ESP += 4; return;
}

/* FUN_10014180 @ 0x109d4180 (762 bytes, 246 insns) */
void f_109d4180(void) {
  FTRACE(0x109d4180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d4180 push ebp */
  push32((uint32_t)(EBP));
  /* 109d4181 mov ebp, esp */
  EBP = (ESP);
  /* 109d4183 push ecx */
  push32((uint32_t)(ECX));
  /* 109d4184 cmp dword ptr [0x109f0d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f0d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d418b jne 0x109d4194 */
  if (!C.zf) goto L_109d4194;
  /* 109d418d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d418f jmp 0x109d4476 */
  goto L_109d4476;
L_109d4194:;
  /* 109d4194 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d4197 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 109d419a cmp ecx, dword ptr [0x109f0e28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x109f0e28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d41a0 jne 0x109d41b4 */
  if (!C.zf) goto L_109d41b4;
  /* 109d41a2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d41a5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 109d41a8 cmp eax, dword ptr [0x109f0e38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109f0e38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d41ae je 0x109d437b */
  if (C.zf) goto L_109d437b;
L_109d41b4:;
  /* 109d41b4 cmp dword ptr [0x109f1920], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f1920))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d41bb je 0x109d4335 */
  if (C.zf) goto L_109d4335;
  /* 109d41c1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109d41c3 mov cx, word ptr [0x109f19c0] */
  CX = (r16((uint32_t)(0x109f19c0)));
  /* 109d41ca test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109d41cc jne 0x109d4229 */
  if (!C.zf) goto L_109d4229;
  /* 109d41ce xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109d41d0 mov dx, word ptr [0x109f19ce] */
  DX = (r16((uint32_t)(0x109f19ce)));
  /* 109d41d7 push edx */
  push32((uint32_t)(EDX));
  /* 109d41d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d41da mov ax, word ptr [0x109f19cc] */
  AX = (r16((uint32_t)(0x109f19cc)));
  /* 109d41e0 push eax */
  push32((uint32_t)(EAX));
  /* 109d41e1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109d41e3 mov cx, word ptr [0x109f19ca] */
  CX = (r16((uint32_t)(0x109f19ca)));
  /* 109d41ea push ecx */
  push32((uint32_t)(ECX));
  /* 109d41eb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109d41ed mov dx, word ptr [0x109f19c8] */
  DX = (r16((uint32_t)(0x109f19c8)));
  /* 109d41f4 push edx */
  push32((uint32_t)(EDX));
  /* 109d41f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d41f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d41f9 mov ax, word ptr [0x109f19c4] */
  AX = (r16((uint32_t)(0x109f19c4)));
  /* 109d41ff push eax */
  push32((uint32_t)(EAX));
  /* 109d4200 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109d4202 mov cx, word ptr [0x109f19c6] */
  CX = (r16((uint32_t)(0x109f19c6)));
  /* 109d4209 push ecx */
  push32((uint32_t)(ECX));
  /* 109d420a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109d420c mov dx, word ptr [0x109f19c2] */
  DX = (r16((uint32_t)(0x109f19c2)));
  /* 109d4213 push edx */
  push32((uint32_t)(EDX));
  /* 109d4214 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d4217 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 109d421a push ecx */
  push32((uint32_t)(ECX));
  /* 109d421b push 1 */
  push32((uint32_t)(0x1u));
  /* 109d421d push 1 */
  push32((uint32_t)(0x1u));
  /* 109d421f call 0x109d4480 */
  push32(0x109d4224u); f_109d4480();
  /* 109d4224 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d4227 jmp 0x109d427a */
  goto L_109d427a;
L_109d4229:;
  /* 109d4229 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109d422b mov dx, word ptr [0x109f19ce] */
  DX = (r16((uint32_t)(0x109f19ce)));
  /* 109d4232 push edx */
  push32((uint32_t)(EDX));
  /* 109d4233 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d4235 mov ax, word ptr [0x109f19cc] */
  AX = (r16((uint32_t)(0x109f19cc)));
  /* 109d423b push eax */
  push32((uint32_t)(EAX));
  /* 109d423c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109d423e mov cx, word ptr [0x109f19ca] */
  CX = (r16((uint32_t)(0x109f19ca)));
  /* 109d4245 push ecx */
  push32((uint32_t)(ECX));
  /* 109d4246 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109d4248 mov dx, word ptr [0x109f19c8] */
  DX = (r16((uint32_t)(0x109f19c8)));
  /* 109d424f push edx */
  push32((uint32_t)(EDX));
  /* 109d4250 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d4252 mov ax, word ptr [0x109f19c6] */
  AX = (r16((uint32_t)(0x109f19c6)));
  /* 109d4258 push eax */
  push32((uint32_t)(EAX));
  /* 109d4259 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d425b push 0 */
  push32((uint32_t)(0x0u));
  /* 109d425d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109d425f mov cx, word ptr [0x109f19c2] */
  CX = (r16((uint32_t)(0x109f19c2)));
  /* 109d4266 push ecx */
  push32((uint32_t)(ECX));
  /* 109d4267 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d426a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 109d426d push eax */
  push32((uint32_t)(EAX));
  /* 109d426e push 0 */
  push32((uint32_t)(0x0u));
  /* 109d4270 push 1 */
  push32((uint32_t)(0x1u));
  /* 109d4272 call 0x109d4480 */
  push32(0x109d4277u); f_109d4480();
  /* 109d4277 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109d427a:;
  /* 109d427a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109d427c mov cx, word ptr [0x109f196c] */
  CX = (r16((uint32_t)(0x109f196c)));
  /* 109d4283 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109d4285 jne 0x109d42e2 */
  if (!C.zf) goto L_109d42e2;
  /* 109d4287 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109d4289 mov dx, word ptr [0x109f197a] */
  DX = (r16((uint32_t)(0x109f197a)));
  /* 109d4290 push edx */
  push32((uint32_t)(EDX));
  /* 109d4291 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d4293 mov ax, word ptr [0x109f1978] */
  AX = (r16((uint32_t)(0x109f1978)));
  /* 109d4299 push eax */
  push32((uint32_t)(EAX));
  /* 109d429a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109d429c mov cx, word ptr [0x109f1976] */
  CX = (r16((uint32_t)(0x109f1976)));
  /* 109d42a3 push ecx */
  push32((uint32_t)(ECX));
  /* 109d42a4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109d42a6 mov dx, word ptr [0x109f1974] */
  DX = (r16((uint32_t)(0x109f1974)));
  /* 109d42ad push edx */
  push32((uint32_t)(EDX));
  /* 109d42ae push 0 */
  push32((uint32_t)(0x0u));
  /* 109d42b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d42b2 mov ax, word ptr [0x109f1970] */
  AX = (r16((uint32_t)(0x109f1970)));
  /* 109d42b8 push eax */
  push32((uint32_t)(EAX));
  /* 109d42b9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109d42bb mov cx, word ptr [0x109f1972] */
  CX = (r16((uint32_t)(0x109f1972)));
  /* 109d42c2 push ecx */
  push32((uint32_t)(ECX));
  /* 109d42c3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109d42c5 mov dx, word ptr [0x109f196e] */
  DX = (r16((uint32_t)(0x109f196e)));
  /* 109d42cc push edx */
  push32((uint32_t)(EDX));
  /* 109d42cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d42d0 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 109d42d3 push ecx */
  push32((uint32_t)(ECX));
  /* 109d42d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 109d42d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d42d8 call 0x109d4480 */
  push32(0x109d42ddu); f_109d4480();
  /* 109d42dd add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d42e0 jmp 0x109d4333 */
  goto L_109d4333;
L_109d42e2:;
  /* 109d42e2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109d42e4 mov dx, word ptr [0x109f197a] */
  DX = (r16((uint32_t)(0x109f197a)));
  /* 109d42eb push edx */
  push32((uint32_t)(EDX));
  /* 109d42ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d42ee mov ax, word ptr [0x109f1978] */
  AX = (r16((uint32_t)(0x109f1978)));
  /* 109d42f4 push eax */
  push32((uint32_t)(EAX));
  /* 109d42f5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109d42f7 mov cx, word ptr [0x109f1976] */
  CX = (r16((uint32_t)(0x109f1976)));
  /* 109d42fe push ecx */
  push32((uint32_t)(ECX));
  /* 109d42ff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109d4301 mov dx, word ptr [0x109f1974] */
  DX = (r16((uint32_t)(0x109f1974)));
  /* 109d4308 push edx */
  push32((uint32_t)(EDX));
  /* 109d4309 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d430b mov ax, word ptr [0x109f1972] */
  AX = (r16((uint32_t)(0x109f1972)));
  /* 109d4311 push eax */
  push32((uint32_t)(EAX));
  /* 109d4312 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d4314 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d4316 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109d4318 mov cx, word ptr [0x109f196e] */
  CX = (r16((uint32_t)(0x109f196e)));
  /* 109d431f push ecx */
  push32((uint32_t)(ECX));
  /* 109d4320 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d4323 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 109d4326 push eax */
  push32((uint32_t)(EAX));
  /* 109d4327 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d4329 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d432b call 0x109d4480 */
  push32(0x109d4330u); f_109d4480();
  /* 109d4330 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109d4333:;
  /* 109d4333 jmp 0x109d437b */
  goto L_109d437b;
L_109d4335:;
  /* 109d4335 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d4337 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d4339 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d433b push 2 */
  push32((uint32_t)(0x2u));
  /* 109d433d push 0 */
  push32((uint32_t)(0x0u));
  /* 109d433f push 0 */
  push32((uint32_t)(0x0u));
  /* 109d4341 push 1 */
  push32((uint32_t)(0x1u));
  /* 109d4343 push 4 */
  push32((uint32_t)(0x4u));
  /* 109d4345 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d4348 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 109d434b push edx */
  push32((uint32_t)(EDX));
  /* 109d434c push 1 */
  push32((uint32_t)(0x1u));
  /* 109d434e push 1 */
  push32((uint32_t)(0x1u));
  /* 109d4350 call 0x109d4480 */
  push32(0x109d4355u); f_109d4480();
  /* 109d4355 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d4358 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d435a push 0 */
  push32((uint32_t)(0x0u));
  /* 109d435c push 0 */
  push32((uint32_t)(0x0u));
  /* 109d435e push 2 */
  push32((uint32_t)(0x2u));
  /* 109d4360 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d4362 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d4364 push 5 */
  push32((uint32_t)(0x5u));
  /* 109d4366 push 0xa */
  push32((uint32_t)(0xau));
  /* 109d4368 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d436b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 109d436e push ecx */
  push32((uint32_t)(ECX));
  /* 109d436f push 1 */
  push32((uint32_t)(0x1u));
  /* 109d4371 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d4373 call 0x109d4480 */
  push32(0x109d4378u); f_109d4480();
  /* 109d4378 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109d437b:;
  /* 109d437b mov edx, dword ptr [0x109f0e2c] */
  EDX = (r32((uint32_t)(0x109f0e2c)));
  /* 109d4381 cmp edx, dword ptr [0x109f0e3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x109f0e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4387 jge 0x109d43d4 */
  if ((C.sf==C.of)) goto L_109d43d4;
  /* 109d4389 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d438c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 109d438f cmp ecx, dword ptr [0x109f0e2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x109f0e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4395 jl 0x109d43a5 */
  if ((C.sf!=C.of)) goto L_109d43a5;
  /* 109d4397 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d439a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 109d439d cmp eax, dword ptr [0x109f0e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109f0e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d43a3 jle 0x109d43ac */
  if ((C.zf||C.sf!=C.of)) goto L_109d43ac;
L_109d43a5:;
  /* 109d43a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d43a7 jmp 0x109d4476 */
  goto L_109d4476;
L_109d43ac:;
  /* 109d43ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d43af mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 109d43b2 cmp edx, dword ptr [0x109f0e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x109f0e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d43b8 jle 0x109d43d2 */
  if ((C.zf||C.sf!=C.of)) goto L_109d43d2;
  /* 109d43ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d43bd mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 109d43c0 cmp ecx, dword ptr [0x109f0e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x109f0e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d43c6 jge 0x109d43d2 */
  if ((C.sf==C.of)) goto L_109d43d2;
  /* 109d43c8 mov eax, 1 */
  EAX = (0x1u);
  /* 109d43cd jmp 0x109d4476 */
  goto L_109d4476;
L_109d43d2:;
  /* 109d43d2 jmp 0x109d4417 */
  goto L_109d4417;
L_109d43d4:;
  /* 109d43d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d43d7 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 109d43da cmp eax, dword ptr [0x109f0e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109f0e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d43e0 jl 0x109d43f0 */
  if ((C.sf!=C.of)) goto L_109d43f0;
  /* 109d43e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d43e5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 109d43e8 cmp edx, dword ptr [0x109f0e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x109f0e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d43ee jle 0x109d43f7 */
  if ((C.zf||C.sf!=C.of)) goto L_109d43f7;
L_109d43f0:;
  /* 109d43f0 mov eax, 1 */
  EAX = (0x1u);
  /* 109d43f5 jmp 0x109d4476 */
  goto L_109d4476;
L_109d43f7:;
  /* 109d43f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d43fa mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 109d43fd cmp ecx, dword ptr [0x109f0e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x109f0e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4403 jle 0x109d4417 */
  if ((C.zf||C.sf!=C.of)) goto L_109d4417;
  /* 109d4405 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d4408 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 109d440b cmp eax, dword ptr [0x109f0e2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109f0e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4411 jge 0x109d4417 */
  if ((C.sf==C.of)) goto L_109d4417;
  /* 109d4413 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d4415 jmp 0x109d4476 */
  goto L_109d4476;
L_109d4417:;
  /* 109d4417 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d441a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 109d441d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109d4420 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d4423 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109d4425 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d4427 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d442a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 109d442d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109d4433 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d4435 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109d443b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 109d443e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d4441 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 109d4444 cmp edx, dword ptr [0x109f0e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x109f0e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d444a jne 0x109d4462 */
  if (!C.zf) goto L_109d4462;
  /* 109d444c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d444f cmp eax, dword ptr [0x109f0e30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109f0e30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4455 jl 0x109d445e */
  if ((C.sf!=C.of)) goto L_109d445e;
  /* 109d4457 mov eax, 1 */
  EAX = (0x1u);
  /* 109d445c jmp 0x109d4476 */
  goto L_109d4476;
L_109d445e:;
  /* 109d445e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d4460 jmp 0x109d4476 */
  goto L_109d4476;
L_109d4462:;
  /* 109d4462 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d4465 cmp ecx, dword ptr [0x109f0e40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x109f0e40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d446b jge 0x109d4474 */
  if ((C.sf==C.of)) goto L_109d4474;
  /* 109d446d mov eax, 1 */
  EAX = (0x1u);
  /* 109d4472 jmp 0x109d4476 */
  goto L_109d4476;
L_109d4474:;
  /* 109d4474 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_109d4476:;
  /* 109d4476 mov esp, ebp */
  ESP = (EBP);
  /* 109d4478 pop ebp */
  EBP = (pop32());
  /* 109d4479 ret  */
  ESPCHK(0x109d4180u, _esp0);
  ESP += 4; return;
}

/* FUN_10014480 @ 0x109d4480 (504 bytes, 145 insns) */
void f_109d4480(void) {
  FTRACE(0x109d4480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d4480 push ebp */
  push32((uint32_t)(EBP));
  /* 109d4481 mov ebp, esp */
  EBP = (ESP);
  /* 109d4483 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d4486 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d448a jne 0x109d455c */
  if (!C.zf) goto L_109d455c;
  /* 109d4490 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d4493 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 109d4496 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d4498 jne 0x109d44a9 */
  if (!C.zf) goto L_109d44a9;
  /* 109d449a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d449d mov edx, dword ptr [ecx*4 + 0x109f0e4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x109f0e4c)));
  /* 109d44a4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 109d44a7 jmp 0x109d44b6 */
  goto L_109d44b6;
L_109d44a9:;
  /* 109d44a9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d44ac mov ecx, dword ptr [eax*4 + 0x109f0e80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x109f0e80)));
  /* 109d44b3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_109d44b6:;
  /* 109d44b6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d44b9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d44bc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 109d44bf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d44c2 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d44c5 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109d44cb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d44ce add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d44d0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d44d3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d44d6 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 109d44d9 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 109d44dd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 109d44de mov ecx, 7 */
  ECX = (0x7u);
  /* 109d44e3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 109d44e5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 109d44e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d44eb cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d44ee jge 0x109d4509 */
  if ((C.sf==C.of)) goto L_109d4509;
  /* 109d44f0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 109d44f3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d44f6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 109d44f9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d44fc imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109d44ff add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d4502 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d4504 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 109d4507 jmp 0x109d451d */
  goto L_109d451d;
L_109d4509:;
  /* 109d4509 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 109d450c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d450f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 109d4512 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109d4515 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d4518 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d451a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_109d451d:;
  /* 109d451d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4521 jne 0x109d455a */
  if (!C.zf) goto L_109d455a;
  /* 109d4523 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d4526 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 109d4529 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109d452b jne 0x109d453c */
  if (!C.zf) goto L_109d453c;
  /* 109d452d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d4530 mov eax, dword ptr [edx*4 + 0x109f0e50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x109f0e50)));
  /* 109d4537 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 109d453a jmp 0x109d4549 */
  goto L_109d4549;
L_109d453c:;
  /* 109d453c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d453f mov edx, dword ptr [ecx*4 + 0x109f0e84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x109f0e84)));
  /* 109d4546 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_109d4549:;
  /* 109d4549 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d454c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d454f jle 0x109d455a */
  if ((C.zf||C.sf!=C.of)) goto L_109d455a;
  /* 109d4551 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d4554 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d4557 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_109d455a:;
  /* 109d455a jmp 0x109d4591 */
  goto L_109d4591;
L_109d455c:;
  /* 109d455c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d455f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 109d4562 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109d4564 jne 0x109d4575 */
  if (!C.zf) goto L_109d4575;
  /* 109d4566 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d4569 mov ecx, dword ptr [eax*4 + 0x109f0e4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x109f0e4c)));
  /* 109d4570 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 109d4573 jmp 0x109d4582 */
  goto L_109d4582;
L_109d4575:;
  /* 109d4575 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d4578 mov eax, dword ptr [edx*4 + 0x109f0e80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x109f0e80)));
  /* 109d457f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_109d4582:;
  /* 109d4582 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 109d4585 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 109d4588 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d458b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d458e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_109d4591:;
  /* 109d4591 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4595 jne 0x109d45d1 */
  if (!C.zf) goto L_109d45d1;
  /* 109d4597 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d459a mov dword ptr [0x109f0e2c], eax */
  w32((uint32_t)(0x109f0e2c), (EAX));
  /* 109d459f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 109d45a2 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109d45a5 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 109d45a8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d45aa imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109d45ad mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 109d45b0 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d45b2 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109d45b8 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 109d45bb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d45bd mov dword ptr [0x109f0e30], ecx */
  w32((uint32_t)(0x109f0e30), (ECX));
  /* 109d45c3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d45c6 mov dword ptr [0x109f0e28], edx */
  w32((uint32_t)(0x109f0e28), (EDX));
  /* 109d45cc jmp 0x109d4674 */
  goto L_109d4674;
L_109d45d1:;
  /* 109d45d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d45d4 mov dword ptr [0x109f0e3c], eax */
  w32((uint32_t)(0x109f0e3c), (EAX));
  /* 109d45d9 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 109d45dc imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109d45df mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 109d45e2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d45e4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109d45e7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 109d45ea add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d45ec imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109d45f2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 109d45f5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d45f7 mov dword ptr [0x109f0e40], ecx */
  w32((uint32_t)(0x109f0e40), (ECX));
  /* 109d45fd mov edx, dword ptr [0x109f0d98] */
  EDX = (r32((uint32_t)(0x109f0d98)));
  /* 109d4603 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109d4609 mov eax, dword ptr [0x109f0e40] */
  EAX = (r32((uint32_t)(0x109f0e40)));
  /* 109d460e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d4610 mov dword ptr [0x109f0e40], eax */
  w32((uint32_t)(0x109f0e40), (EAX));
  /* 109d4615 cmp dword ptr [0x109f0e40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f0e40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d461c jge 0x109d4641 */
  if ((C.sf==C.of)) goto L_109d4641;
  /* 109d461e mov ecx, dword ptr [0x109f0e40] */
  ECX = (r32((uint32_t)(0x109f0e40)));
  /* 109d4624 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d462a mov dword ptr [0x109f0e40], ecx */
  w32((uint32_t)(0x109f0e40), (ECX));
  /* 109d4630 mov edx, dword ptr [0x109f0e3c] */
  EDX = (r32((uint32_t)(0x109f0e3c)));
  /* 109d4636 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d4639 mov dword ptr [0x109f0e3c], edx */
  w32((uint32_t)(0x109f0e3c), (EDX));
  /* 109d463f jmp 0x109d466b */
  goto L_109d466b;
L_109d4641:;
  /* 109d4641 cmp dword ptr [0x109f0e40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x109f0e40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d464b jl 0x109d466b */
  if ((C.sf!=C.of)) goto L_109d466b;
  /* 109d464d mov eax, dword ptr [0x109f0e40] */
  EAX = (r32((uint32_t)(0x109f0e40)));
  /* 109d4652 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d4657 mov dword ptr [0x109f0e40], eax */
  w32((uint32_t)(0x109f0e40), (EAX));
  /* 109d465c mov ecx, dword ptr [0x109f0e3c] */
  ECX = (r32((uint32_t)(0x109f0e3c)));
  /* 109d4662 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d4665 mov dword ptr [0x109f0e3c], ecx */
  w32((uint32_t)(0x109f0e3c), (ECX));
L_109d466b:;
  /* 109d466b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d466e mov dword ptr [0x109f0e38], edx */
  w32((uint32_t)(0x109f0e38), (EDX));
L_109d4674:;
  /* 109d4674 mov esp, ebp */
  ESP = (EBP);
  /* 109d4676 pop ebp */
  EBP = (pop32());
  /* 109d4677 ret  */
  ESPCHK(0x109d4480u, _esp0);
  ESP += 4; return;
}

/* FUN_10014680 @ 0x109d4680 (382 bytes, 135 insns) */
void f_109d4680(void) {
  FTRACE(0x109d4680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d4680 push ebp */
  push32((uint32_t)(EBP));
  /* 109d4681 mov ebp, esp */
  EBP = (ESP);
  /* 109d4683 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 109d4685 push 0x109edbb8 */
  push32((uint32_t)(0x109edbb8u));
  /* 109d468a push 0x109ce348 */
  push32((uint32_t)(0x109ce348u));
  /* 109d468f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 109d4695 push eax */
  push32((uint32_t)(EAX));
  /* 109d4696 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 109d469d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d46a0 push ebx */
  push32((uint32_t)(EBX));
  /* 109d46a1 push esi */
  push32((uint32_t)(ESI));
  /* 109d46a2 push edi */
  push32((uint32_t)(EDI));
  /* 109d46a3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 109d46a6 cmp dword ptr [0x109f19dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f19dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d46ad jne 0x109d46f2 */
  if (!C.zf) goto L_109d46f2;
  /* 109d46af push 0 */
  push32((uint32_t)(0x0u));
  /* 109d46b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d46b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 109d46b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d46b7 call dword ptr [0x109f42ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42ac))), 0x109d46bdu);
  /* 109d46bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d46bf je 0x109d46cd */
  if (C.zf) goto L_109d46cd;
  /* 109d46c1 mov dword ptr [0x109f19dc], 1 */
  w32((uint32_t)(0x109f19dc), (0x1u));
  /* 109d46cb jmp 0x109d46f2 */
  goto L_109d46f2;
L_109d46cd:;
  /* 109d46cd push 0 */
  push32((uint32_t)(0x0u));
  /* 109d46cf push 0 */
  push32((uint32_t)(0x0u));
  /* 109d46d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 109d46d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d46d5 call dword ptr [0x109f42c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42c4))), 0x109d46dbu);
  /* 109d46db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d46dd je 0x109d46eb */
  if (C.zf) goto L_109d46eb;
  /* 109d46df mov dword ptr [0x109f19dc], 2 */
  w32((uint32_t)(0x109f19dc), (0x2u));
  /* 109d46e9 jmp 0x109d46f2 */
  goto L_109d46f2;
L_109d46eb:;
  /* 109d46eb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d46ed jmp 0x109d4801 */
  goto L_109d4801;
L_109d46f2:;
  /* 109d46f2 cmp dword ptr [0x109f19dc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109f19dc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d46f9 jne 0x109d4716 */
  if (!C.zf) goto L_109d4716;
  /* 109d46fb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d46fe push eax */
  push32((uint32_t)(EAX));
  /* 109d46ff mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d4702 push ecx */
  push32((uint32_t)(ECX));
  /* 109d4703 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d4706 push edx */
  push32((uint32_t)(EDX));
  /* 109d4707 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d470a push eax */
  push32((uint32_t)(EAX));
  /* 109d470b call dword ptr [0x109f42ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42ac))), 0x109d4711u);
  /* 109d4711 jmp 0x109d4801 */
  goto L_109d4801;
L_109d4716:;
  /* 109d4716 cmp dword ptr [0x109f19dc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x109f19dc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d471d jne 0x109d47ff */
  if (!C.zf) goto L_109d47ff;
  /* 109d4723 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4727 jne 0x109d4732 */
  if (!C.zf) goto L_109d4732;
  /* 109d4729 mov ecx, dword ptr [0x109f1890] */
  ECX = (r32((uint32_t)(0x109f1890)));
  /* 109d472f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_109d4732:;
  /* 109d4732 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d4734 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d4736 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d4739 push edx */
  push32((uint32_t)(EDX));
  /* 109d473a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d473d push eax */
  push32((uint32_t)(EAX));
  /* 109d473e call dword ptr [0x109f42c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42c4))), 0x109d4744u);
  /* 109d4744 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 109d4747 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d474b jne 0x109d4754 */
  if (!C.zf) goto L_109d4754;
  /* 109d474d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d474f jmp 0x109d4801 */
  goto L_109d4801;
L_109d4754:;
  /* 109d4754 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 109d475b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 109d475e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d4761 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 109d4763 call 0x109c83e0 */
  push32(0x109d4768u); f_109c83e0();
  /* 109d4768 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 109d476b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 109d476e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 109d4771 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 109d4774 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 109d477b jmp 0x109d4794 */
  goto L_109d4794;
  /* 109d477d mov eax, 1 */
  EAX = (0x1u);
  /* 109d4782 ret  */
  ESPCHK(0x109d4680u, _esp0);
  ESP += 4; return;
  /* 109d4783 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 109d4786 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 109d478d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_109d4794:;
  /* 109d4794 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4798 jne 0x109d479e */
  if (!C.zf) goto L_109d479e;
  /* 109d479a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d479c jmp 0x109d4801 */
  goto L_109d4801;
L_109d479e:;
  /* 109d479e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 109d47a1 push edx */
  push32((uint32_t)(EDX));
  /* 109d47a2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 109d47a5 push eax */
  push32((uint32_t)(EAX));
  /* 109d47a6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d47a9 push ecx */
  push32((uint32_t)(ECX));
  /* 109d47aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d47ad push edx */
  push32((uint32_t)(EDX));
  /* 109d47ae call dword ptr [0x109f42c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42c4))), 0x109d47b4u);
  /* 109d47b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d47b6 jne 0x109d47bc */
  if (!C.zf) goto L_109d47bc;
  /* 109d47b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d47ba jmp 0x109d4801 */
  goto L_109d4801;
L_109d47bc:;
  /* 109d47bc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d47c0 jne 0x109d47dd */
  if (!C.zf) goto L_109d47dd;
  /* 109d47c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d47c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d47c6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 109d47c8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 109d47cb push eax */
  push32((uint32_t)(EAX));
  /* 109d47cc push 1 */
  push32((uint32_t)(0x1u));
  /* 109d47ce mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 109d47d1 push ecx */
  push32((uint32_t)(ECX));
  /* 109d47d2 call dword ptr [0x109f42f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42f4))), 0x109d47d8u);
  /* 109d47d8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 109d47db jmp 0x109d47fa */
  goto L_109d47fa;
L_109d47dd:;
  /* 109d47dd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d47e0 push edx */
  push32((uint32_t)(EDX));
  /* 109d47e1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d47e4 push eax */
  push32((uint32_t)(EAX));
  /* 109d47e5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 109d47e7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 109d47ea push ecx */
  push32((uint32_t)(ECX));
  /* 109d47eb push 1 */
  push32((uint32_t)(0x1u));
  /* 109d47ed mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 109d47f0 push edx */
  push32((uint32_t)(EDX));
  /* 109d47f1 call dword ptr [0x109f42f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42f4))), 0x109d47f7u);
  /* 109d47f7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_109d47fa:;
  /* 109d47fa mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 109d47fd jmp 0x109d4801 */
  goto L_109d4801;
L_109d47ff:;
  /* 109d47ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_109d4801:;
  /* 109d4801 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 109d4804 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109d4807 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 109d480e pop edi */
  EDI = (pop32());
  /* 109d480f pop esi */
  ESI = (pop32());
  /* 109d4810 pop ebx */
  EBX = (pop32());
  /* 109d4811 mov esp, ebp */
  ESP = (EBP);
  /* 109d4813 pop ebp */
  EBP = (pop32());
  /* 109d4814 ret  */
  ESPCHK(0x109d4680u, _esp0);
  ESP += 4; return;
}

/* FUN_10014820 @ 0x109d4820 (398 bytes, 140 insns) */
void f_109d4820(void) {
  FTRACE(0x109d4820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d4820 push ebp */
  push32((uint32_t)(EBP));
  /* 109d4821 mov ebp, esp */
  EBP = (ESP);
  /* 109d4823 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 109d4825 push 0x109edbc8 */
  push32((uint32_t)(0x109edbc8u));
  /* 109d482a push 0x109ce348 */
  push32((uint32_t)(0x109ce348u));
  /* 109d482f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 109d4835 push eax */
  push32((uint32_t)(EAX));
  /* 109d4836 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 109d483d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d4840 push ebx */
  push32((uint32_t)(EBX));
  /* 109d4841 push esi */
  push32((uint32_t)(ESI));
  /* 109d4842 push edi */
  push32((uint32_t)(EDI));
  /* 109d4843 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 109d4846 cmp dword ptr [0x109f19e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f19e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d484d jne 0x109d4892 */
  if (!C.zf) goto L_109d4892;
  /* 109d484f push 0 */
  push32((uint32_t)(0x0u));
  /* 109d4851 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d4853 push 1 */
  push32((uint32_t)(0x1u));
  /* 109d4855 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d4857 call dword ptr [0x109f42ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42ac))), 0x109d485du);
  /* 109d485d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d485f je 0x109d486d */
  if (C.zf) goto L_109d486d;
  /* 109d4861 mov dword ptr [0x109f19e0], 1 */
  w32((uint32_t)(0x109f19e0), (0x1u));
  /* 109d486b jmp 0x109d4892 */
  goto L_109d4892;
L_109d486d:;
  /* 109d486d push 0 */
  push32((uint32_t)(0x0u));
  /* 109d486f push 0 */
  push32((uint32_t)(0x0u));
  /* 109d4871 push 1 */
  push32((uint32_t)(0x1u));
  /* 109d4873 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d4875 call dword ptr [0x109f42c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42c4))), 0x109d487bu);
  /* 109d487b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d487d je 0x109d488b */
  if (C.zf) goto L_109d488b;
  /* 109d487f mov dword ptr [0x109f19e0], 2 */
  w32((uint32_t)(0x109f19e0), (0x2u));
  /* 109d4889 jmp 0x109d4892 */
  goto L_109d4892;
L_109d488b:;
  /* 109d488b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d488d jmp 0x109d49b1 */
  goto L_109d49b1;
L_109d4892:;
  /* 109d4892 cmp dword ptr [0x109f19e0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x109f19e0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4899 jne 0x109d48b6 */
  if (!C.zf) goto L_109d48b6;
  /* 109d489b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d489e push eax */
  push32((uint32_t)(EAX));
  /* 109d489f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d48a2 push ecx */
  push32((uint32_t)(ECX));
  /* 109d48a3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d48a6 push edx */
  push32((uint32_t)(EDX));
  /* 109d48a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d48aa push eax */
  push32((uint32_t)(EAX));
  /* 109d48ab call dword ptr [0x109f42c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42c4))), 0x109d48b1u);
  /* 109d48b1 jmp 0x109d49b1 */
  goto L_109d49b1;
L_109d48b6:;
  /* 109d48b6 cmp dword ptr [0x109f19e0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109f19e0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d48bd jne 0x109d49af */
  if (!C.zf) goto L_109d49af;
  /* 109d48c3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d48c7 jne 0x109d48d2 */
  if (!C.zf) goto L_109d48d2;
  /* 109d48c9 mov ecx, dword ptr [0x109f1890] */
  ECX = (r32((uint32_t)(0x109f1890)));
  /* 109d48cf mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_109d48d2:;
  /* 109d48d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d48d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d48d6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d48d9 push edx */
  push32((uint32_t)(EDX));
  /* 109d48da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d48dd push eax */
  push32((uint32_t)(EAX));
  /* 109d48de call dword ptr [0x109f42ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42ac))), 0x109d48e4u);
  /* 109d48e4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 109d48e7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d48eb jne 0x109d48f4 */
  if (!C.zf) goto L_109d48f4;
  /* 109d48ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d48ef jmp 0x109d49b1 */
  goto L_109d49b1;
L_109d48f4:;
  /* 109d48f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 109d48fb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 109d48fe shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 109d4900 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d4903 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 109d4905 call 0x109c83e0 */
  push32(0x109d490au); f_109c83e0();
  /* 109d490a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 109d490d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 109d4910 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 109d4913 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 109d4916 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 109d491d jmp 0x109d4936 */
  goto L_109d4936;
  /* 109d491f mov eax, 1 */
  EAX = (0x1u);
  /* 109d4924 ret  */
  ESPCHK(0x109d4820u, _esp0);
  ESP += 4; return;
  /* 109d4925 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 109d4928 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 109d492f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_109d4936:;
  /* 109d4936 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d493a jne 0x109d4940 */
  if (!C.zf) goto L_109d4940;
  /* 109d493c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d493e jmp 0x109d49b1 */
  goto L_109d49b1;
L_109d4940:;
  /* 109d4940 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 109d4943 push edx */
  push32((uint32_t)(EDX));
  /* 109d4944 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 109d4947 push eax */
  push32((uint32_t)(EAX));
  /* 109d4948 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d494b push ecx */
  push32((uint32_t)(ECX));
  /* 109d494c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d494f push edx */
  push32((uint32_t)(EDX));
  /* 109d4950 call dword ptr [0x109f42ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42ac))), 0x109d4956u);
  /* 109d4956 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d4958 jne 0x109d495e */
  if (!C.zf) goto L_109d495e;
  /* 109d495a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d495c jmp 0x109d49b1 */
  goto L_109d49b1;
L_109d495e:;
  /* 109d495e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4962 jne 0x109d4986 */
  if (!C.zf) goto L_109d4986;
  /* 109d4964 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d4966 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d4968 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d496a push 0 */
  push32((uint32_t)(0x0u));
  /* 109d496c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 109d496e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 109d4971 push eax */
  push32((uint32_t)(EAX));
  /* 109d4972 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 109d4977 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 109d497a push ecx */
  push32((uint32_t)(ECX));
  /* 109d497b call dword ptr [0x109f43ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f43ac))), 0x109d4981u);
  /* 109d4981 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 109d4984 jmp 0x109d49aa */
  goto L_109d49aa;
L_109d4986:;
  /* 109d4986 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d4988 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d498a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d498d push edx */
  push32((uint32_t)(EDX));
  /* 109d498e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d4991 push eax */
  push32((uint32_t)(EAX));
  /* 109d4992 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 109d4994 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 109d4997 push ecx */
  push32((uint32_t)(ECX));
  /* 109d4998 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 109d499d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 109d49a0 push edx */
  push32((uint32_t)(EDX));
  /* 109d49a1 call dword ptr [0x109f43ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f43ac))), 0x109d49a7u);
  /* 109d49a7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_109d49aa:;
  /* 109d49aa mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 109d49ad jmp 0x109d49b1 */
  goto L_109d49b1;
L_109d49af:;
  /* 109d49af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_109d49b1:;
  /* 109d49b1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 109d49b4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109d49b7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 109d49be pop edi */
  EDI = (pop32());
  /* 109d49bf pop esi */
  ESI = (pop32());
  /* 109d49c0 pop ebx */
  EBX = (pop32());
  /* 109d49c1 mov esp, ebp */
  ESP = (EBP);
  /* 109d49c3 pop ebp */
  EBP = (pop32());
  /* 109d49c4 ret  */
  ESPCHK(0x109d4820u, _esp0);
  ESP += 4; return;
}

/* FUN_100149d0 @ 0x109d49d0 (11 bytes, 6 insns) */
void f_109d49d0(void) {
  FTRACE(0x109d49d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d49d0 push ebp */
  push32((uint32_t)(EBP));
  /* 109d49d1 mov ebp, esp */
  EBP = (ESP);
  /* 109d49d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d49d6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d49d9 pop ebp */
  EBP = (pop32());
  /* 109d49da ret  */
  ESPCHK(0x109d49d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100149e0 @ 0x109d49e0 (147 bytes, 43 insns) */
void f_109d49e0(void) {
  FTRACE(0x109d49e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d49e0 push ebp */
  push32((uint32_t)(EBP));
  /* 109d49e1 mov ebp, esp */
  EBP = (ESP);
  /* 109d49e3 push ecx */
  push32((uint32_t)(ECX));
  /* 109d49e4 cmp dword ptr [0x109f1880], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f1880))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d49eb jne 0x109d4a07 */
  if (!C.zf) goto L_109d4a07;
  /* 109d49ed cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d49f1 jl 0x109d4a02 */
  if ((C.sf!=C.of)) goto L_109d4a02;
  /* 109d49f3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d49f7 jg 0x109d4a02 */
  if ((!C.zf&&C.sf==C.of)) goto L_109d4a02;
  /* 109d49f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d49fc add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d49ff mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_109d4a02:;
  /* 109d4a02 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d4a05 jmp 0x109d4a6f */
  goto L_109d4a6f;
L_109d4a07:;
  /* 109d4a07 push 0x109f1a0c */
  push32((uint32_t)(0x109f1a0cu));
  /* 109d4a0c call dword ptr [0x109f4354] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4354))), 0x109d4a12u);
  /* 109d4a12 cmp dword ptr [0x109f19fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f19fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4a19 je 0x109d4a39 */
  if (C.zf) goto L_109d4a39;
  /* 109d4a1b push 0x109f1a0c */
  push32((uint32_t)(0x109f1a0cu));
  /* 109d4a20 call dword ptr [0x109f4344] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4344))), 0x109d4a26u);
  /* 109d4a26 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 109d4a28 call 0x109c8c40 */
  push32(0x109d4a2du); f_109c8c40();
  /* 109d4a2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d4a30 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 109d4a37 jmp 0x109d4a40 */
  goto L_109d4a40;
L_109d4a39:;
  /* 109d4a39 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_109d4a40:;
  /* 109d4a40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d4a43 push ecx */
  push32((uint32_t)(ECX));
  /* 109d4a44 call 0x109d4a80 */
  push32(0x109d4a49u); f_109d4a80();
  /* 109d4a49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d4a4c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 109d4a4f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4a53 je 0x109d4a61 */
  if (C.zf) goto L_109d4a61;
  /* 109d4a55 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 109d4a57 call 0x109c8ce0 */
  push32(0x109d4a5cu); f_109c8ce0();
  /* 109d4a5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d4a5f jmp 0x109d4a6c */
  goto L_109d4a6c;
L_109d4a61:;
  /* 109d4a61 push 0x109f1a0c */
  push32((uint32_t)(0x109f1a0cu));
  /* 109d4a66 call dword ptr [0x109f4344] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4344))), 0x109d4a6cu);
L_109d4a6c:;
  /* 109d4a6c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_109d4a6f:;
  /* 109d4a6f mov esp, ebp */
  ESP = (EBP);
  /* 109d4a71 pop ebp */
  EBP = (pop32());
  /* 109d4a72 ret  */
  ESPCHK(0x109d49e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014a80 @ 0x109d4a80 (299 bytes, 91 insns) */
void f_109d4a80(void) {
  FTRACE(0x109d4a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d4a80 push ebp */
  push32((uint32_t)(EBP));
  /* 109d4a81 mov ebp, esp */
  EBP = (ESP);
  /* 109d4a83 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d4a86 cmp dword ptr [0x109f1880], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f1880))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4a8d jne 0x109d4aac */
  if (!C.zf) goto L_109d4aac;
  /* 109d4a8f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4a93 jl 0x109d4aa4 */
  if ((C.sf!=C.of)) goto L_109d4aa4;
  /* 109d4a95 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4a99 jg 0x109d4aa4 */
  if ((!C.zf&&C.sf==C.of)) goto L_109d4aa4;
  /* 109d4a9b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d4a9e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d4aa1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_109d4aa4:;
  /* 109d4aa4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d4aa7 jmp 0x109d4ba7 */
  goto L_109d4ba7;
L_109d4aac:;
  /* 109d4aac cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4ab3 jge 0x109d4af3 */
  if ((C.sf==C.of)) goto L_109d4af3;
  /* 109d4ab5 cmp dword ptr [0x109efea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109efea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4abc jle 0x109d4ad1 */
  if ((C.zf||C.sf!=C.of)) goto L_109d4ad1;
  /* 109d4abe push 1 */
  push32((uint32_t)(0x1u));
  /* 109d4ac0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d4ac3 push ecx */
  push32((uint32_t)(ECX));
  /* 109d4ac4 call 0x109cb250 */
  push32(0x109d4ac9u); f_109cb250();
  /* 109d4ac9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d4acc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 109d4acf jmp 0x109d4ae5 */
  goto L_109d4ae5;
L_109d4ad1:;
  /* 109d4ad1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d4ad4 mov eax, dword ptr [0x109efc98] */
  EAX = (r32((uint32_t)(0x109efc98)));
  /* 109d4ad9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109d4adb mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 109d4adf and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 109d4ae2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_109d4ae5:;
  /* 109d4ae5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4ae9 jne 0x109d4af3 */
  if (!C.zf) goto L_109d4af3;
  /* 109d4aeb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d4aee jmp 0x109d4ba7 */
  goto L_109d4ba7;
L_109d4af3:;
  /* 109d4af3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d4af6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 109d4af9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 109d4aff and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 109d4b05 mov eax, dword ptr [0x109efc98] */
  EAX = (r32((uint32_t)(0x109efc98)));
  /* 109d4b0a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109d4b0c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 109d4b10 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 109d4b16 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109d4b18 je 0x109d4b3c */
  if (C.zf) goto L_109d4b3c;
  /* 109d4b1a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d4b1d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 109d4b20 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 109d4b26 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 109d4b29 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 109d4b2c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 109d4b2f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 109d4b33 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 109d4b3a jmp 0x109d4b4d */
  goto L_109d4b4d;
L_109d4b3c:;
  /* 109d4b3c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 109d4b3f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 109d4b42 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 109d4b46 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_109d4b4d:;
  /* 109d4b4d push 1 */
  push32((uint32_t)(0x1u));
  /* 109d4b4f push 0 */
  push32((uint32_t)(0x0u));
  /* 109d4b51 push 3 */
  push32((uint32_t)(0x3u));
  /* 109d4b53 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 109d4b56 push edx */
  push32((uint32_t)(EDX));
  /* 109d4b57 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d4b5a push eax */
  push32((uint32_t)(EAX));
  /* 109d4b5b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 109d4b5e push ecx */
  push32((uint32_t)(ECX));
  /* 109d4b5f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 109d4b64 mov edx, dword ptr [0x109f1880] */
  EDX = (r32((uint32_t)(0x109f1880)));
  /* 109d4b6a push edx */
  push32((uint32_t)(EDX));
  /* 109d4b6b call 0x109cd630 */
  push32(0x109d4b70u); f_109cd630();
  /* 109d4b70 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d4b73 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109d4b76 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4b7a jne 0x109d4b81 */
  if (!C.zf) goto L_109d4b81;
  /* 109d4b7c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d4b7f jmp 0x109d4ba7 */
  goto L_109d4ba7;
L_109d4b81:;
  /* 109d4b81 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4b85 jne 0x109d4b91 */
  if (!C.zf) goto L_109d4b91;
  /* 109d4b87 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d4b8a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109d4b8f jmp 0x109d4ba7 */
  goto L_109d4ba7;
L_109d4b91:;
  /* 109d4b91 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d4b94 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109d4b99 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 109d4b9c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 109d4ba2 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 109d4ba5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_109d4ba7:;
  /* 109d4ba7 mov esp, ebp */
  ESP = (EBP);
  /* 109d4ba9 pop ebp */
  EBP = (pop32());
  /* 109d4baa ret  */
  ESPCHK(0x109d4a80u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x109d4bb0 (52 bytes, 19 insns) */
void f_109d4bb0(void) {
  FTRACE(0x109d4bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d4bb0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 109d4bb4 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 109d4bb8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109d4bba mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 109d4bbe jne 0x109d4bc9 */
  if (!C.zf) goto L_109d4bc9;
  /* 109d4bc0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 109d4bc4 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 109d4bc6 ret 0x10 */
  ESPCHK(0x109d4bb0u, _esp0);
  ESP += 20; return;
L_109d4bc9:;
  /* 109d4bc9 push ebx */
  push32((uint32_t)(EBX));
  /* 109d4bca mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 109d4bcc mov ebx, eax */
  EBX = (EAX);
  /* 109d4bce mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 109d4bd2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 109d4bd6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d4bd8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 109d4bdc mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 109d4bde add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d4be0 pop ebx */
  EBX = (pop32());
  /* 109d4be1 ret 0x10 */
  ESPCHK(0x109d4bb0u, _esp0);
  ESP += 20; return;
}

/* FUN_10014bf0 @ 0x109d4bf0 (46 bytes, 18 insns) */
void f_109d4bf0(void) {
  FTRACE(0x109d4bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d4bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 109d4bf1 mov ebp, esp */
  EBP = (ESP);
  /* 109d4bf3 push ecx */
  push32((uint32_t)(ECX));
  /* 109d4bf4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 109d4bf6 call 0x109c8c40 */
  push32(0x109d4bfbu); f_109c8c40();
  /* 109d4bfb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d4bfe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d4c01 push eax */
  push32((uint32_t)(EAX));
  /* 109d4c02 call 0x109d4c20 */
  push32(0x109d4c07u); f_109d4c20();
  /* 109d4c07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d4c0a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109d4c0d push 0xc */
  push32((uint32_t)(0xcu));
  /* 109d4c0f call 0x109c8ce0 */
  push32(0x109d4c14u); f_109c8ce0();
  /* 109d4c14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d4c17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d4c1a mov esp, ebp */
  ESP = (EBP);
  /* 109d4c1c pop ebp */
  EBP = (pop32());
  /* 109d4c1d ret  */
  ESPCHK(0x109d4bf0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x109d4c20 (198 bytes, 69 insns) */
void f_109d4c20(void) {
  FTRACE(0x109d4c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d4c20 push ebp */
  push32((uint32_t)(EBP));
  /* 109d4c21 mov ebp, esp */
  EBP = (ESP);
  /* 109d4c23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d4c26 mov eax, dword ptr [0x109f16a0] */
  EAX = (r32((uint32_t)(0x109f16a0)));
  /* 109d4c2b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 109d4c2e cmp dword ptr [0x109f31a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f31a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4c35 jne 0x109d4c3e */
  if (!C.zf) goto L_109d4c3e;
  /* 109d4c37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d4c39 jmp 0x109d4ce2 */
  goto L_109d4ce2;
L_109d4c3e:;
  /* 109d4c3e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4c42 jne 0x109d4c66 */
  if (!C.zf) goto L_109d4c66;
  /* 109d4c44 cmp dword ptr [0x109f16a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f16a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4c4b je 0x109d4c66 */
  if (C.zf) goto L_109d4c66;
  /* 109d4c4d call 0x109d4d40 */
  push32(0x109d4c52u); f_109d4d40();
  /* 109d4c52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d4c54 je 0x109d4c5d */
  if (C.zf) goto L_109d4c5d;
  /* 109d4c56 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d4c58 jmp 0x109d4ce2 */
  goto L_109d4ce2;
L_109d4c5d:;
  /* 109d4c5d mov ecx, dword ptr [0x109f16a0] */
  ECX = (r32((uint32_t)(0x109f16a0)));
  /* 109d4c63 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_109d4c66:;
  /* 109d4c66 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4c6a je 0x109d4ce0 */
  if (C.zf) goto L_109d4ce0;
  /* 109d4c6c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4c70 je 0x109d4ce0 */
  if (C.zf) goto L_109d4ce0;
  /* 109d4c72 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d4c75 push edx */
  push32((uint32_t)(EDX));
  /* 109d4c76 call 0x109c8070 */
  push32(0x109d4c7bu); f_109c8070();
  /* 109d4c7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d4c7e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_109d4c81:;
  /* 109d4c81 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d4c84 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4c87 je 0x109d4ce0 */
  if (C.zf) goto L_109d4ce0;
  /* 109d4c89 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d4c8c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109d4c8e push edx */
  push32((uint32_t)(EDX));
  /* 109d4c8f call 0x109c8070 */
  push32(0x109d4c94u); f_109c8070();
  /* 109d4c94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d4c97 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4c9a jbe 0x109d4cd5 */
  if ((C.cf||C.zf)) goto L_109d4cd5;
  /* 109d4c9c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d4c9f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109d4ca1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d4ca4 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 109d4ca8 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4cab jne 0x109d4cd5 */
  if (!C.zf) goto L_109d4cd5;
  /* 109d4cad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d4cb0 push ecx */
  push32((uint32_t)(ECX));
  /* 109d4cb1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d4cb4 push edx */
  push32((uint32_t)(EDX));
  /* 109d4cb5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d4cb8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109d4cba push ecx */
  push32((uint32_t)(ECX));
  /* 109d4cbb call 0x109d4cf0 */
  push32(0x109d4cc0u); f_109d4cf0();
  /* 109d4cc0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d4cc3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d4cc5 jne 0x109d4cd5 */
  if (!C.zf) goto L_109d4cd5;
  /* 109d4cc7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d4cca mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 109d4ccc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d4ccf lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 109d4cd3 jmp 0x109d4ce2 */
  goto L_109d4ce2;
L_109d4cd5:;
  /* 109d4cd5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d4cd8 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d4cdb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 109d4cde jmp 0x109d4c81 */
  goto L_109d4c81;
L_109d4ce0:;
  /* 109d4ce0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_109d4ce2:;
  /* 109d4ce2 mov esp, ebp */
  ESP = (EBP);
  /* 109d4ce4 pop ebp */
  EBP = (pop32());
  /* 109d4ce5 ret  */
  ESPCHK(0x109d4c20u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x109d4cf0 (79 bytes, 32 insns) */
void f_109d4cf0(void) {
  FTRACE(0x109d4cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d4cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 109d4cf1 mov ebp, esp */
  EBP = (ESP);
  /* 109d4cf3 push ecx */
  push32((uint32_t)(ECX));
  /* 109d4cf4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4cf8 jne 0x109d4cfe */
  if (!C.zf) goto L_109d4cfe;
  /* 109d4cfa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d4cfc jmp 0x109d4d3b */
  goto L_109d4d3b;
L_109d4cfe:;
  /* 109d4cfe mov eax, dword ptr [0x109f2d64] */
  EAX = (r32((uint32_t)(0x109f2d64)));
  /* 109d4d03 push eax */
  push32((uint32_t)(EAX));
  /* 109d4d04 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d4d07 push ecx */
  push32((uint32_t)(ECX));
  /* 109d4d08 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d4d0b push edx */
  push32((uint32_t)(EDX));
  /* 109d4d0c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d4d0f push eax */
  push32((uint32_t)(EAX));
  /* 109d4d10 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d4d13 push ecx */
  push32((uint32_t)(ECX));
  /* 109d4d14 push 1 */
  push32((uint32_t)(0x1u));
  /* 109d4d16 mov edx, dword ptr [0x109f3004] */
  EDX = (r32((uint32_t)(0x109f3004)));
  /* 109d4d1c push edx */
  push32((uint32_t)(EDX));
  /* 109d4d1d call 0x109d4df0 */
  push32(0x109d4d22u); f_109d4df0();
  /* 109d4d22 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d4d25 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109d4d28 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4d2c jne 0x109d4d35 */
  if (!C.zf) goto L_109d4d35;
  /* 109d4d2e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 109d4d33 jmp 0x109d4d3b */
  goto L_109d4d3b;
L_109d4d35:;
  /* 109d4d35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d4d38 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_109d4d3b:;
  /* 109d4d3b mov esp, ebp */
  ESP = (EBP);
  /* 109d4d3d pop ebp */
  EBP = (pop32());
  /* 109d4d3e ret  */
  ESPCHK(0x109d4cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014d40 @ 0x109d4d40 (174 bytes, 66 insns) */
void f_109d4d40(void) {
  FTRACE(0x109d4d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d4d40 push ebp */
  push32((uint32_t)(EBP));
  /* 109d4d41 mov ebp, esp */
  EBP = (ESP);
  /* 109d4d43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d4d46 mov eax, dword ptr [0x109f16a8] */
  EAX = (r32((uint32_t)(0x109f16a8)));
  /* 109d4d4b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_109d4d4e:;
  /* 109d4d4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d4d51 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4d54 je 0x109d4de8 */
  if (C.zf) goto L_109d4de8;
  /* 109d4d5a push 0 */
  push32((uint32_t)(0x0u));
  /* 109d4d5c push 0 */
  push32((uint32_t)(0x0u));
  /* 109d4d5e push 0 */
  push32((uint32_t)(0x0u));
  /* 109d4d60 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d4d62 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 109d4d64 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d4d67 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 109d4d69 push eax */
  push32((uint32_t)(EAX));
  /* 109d4d6a push 0 */
  push32((uint32_t)(0x0u));
  /* 109d4d6c push 1 */
  push32((uint32_t)(0x1u));
  /* 109d4d6e call dword ptr [0x109f43ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f43ac))), 0x109d4d74u);
  /* 109d4d74 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 109d4d77 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4d7b jne 0x109d4d82 */
  if (!C.zf) goto L_109d4d82;
  /* 109d4d7d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109d4d80 jmp 0x109d4dea */
  goto L_109d4dea;
L_109d4d82:;
  /* 109d4d82 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 109d4d84 push 0x109edbd4 */
  push32((uint32_t)(0x109edbd4u));
  /* 109d4d89 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d4d8b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d4d8e push ecx */
  push32((uint32_t)(ECX));
  /* 109d4d8f call 0x109c5240 */
  push32(0x109d4d94u); f_109c5240();
  /* 109d4d94 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d4d97 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 109d4d9a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4d9e jne 0x109d4da5 */
  if (!C.zf) goto L_109d4da5;
  /* 109d4da0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109d4da3 jmp 0x109d4dea */
  goto L_109d4dea;
L_109d4da5:;
  /* 109d4da5 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d4da7 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d4da9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d4dac push edx */
  push32((uint32_t)(EDX));
  /* 109d4dad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d4db0 push eax */
  push32((uint32_t)(EAX));
  /* 109d4db1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 109d4db3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d4db6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109d4db8 push edx */
  push32((uint32_t)(EDX));
  /* 109d4db9 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d4dbb push 1 */
  push32((uint32_t)(0x1u));
  /* 109d4dbd call dword ptr [0x109f43ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f43ac))), 0x109d4dc3u);
  /* 109d4dc3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d4dc5 jne 0x109d4dcc */
  if (!C.zf) goto L_109d4dcc;
  /* 109d4dc7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109d4dca jmp 0x109d4dea */
  goto L_109d4dea;
L_109d4dcc:;
  /* 109d4dcc push 0 */
  push32((uint32_t)(0x0u));
  /* 109d4dce mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d4dd1 push eax */
  push32((uint32_t)(EAX));
  /* 109d4dd2 call 0x109d5240 */
  push32(0x109d4dd7u); f_109d5240();
  /* 109d4dd7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d4dda mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d4ddd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d4de0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 109d4de3 jmp 0x109d4d4e */
  goto L_109d4d4e;
L_109d4de8:;
  /* 109d4de8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_109d4dea:;
  /* 109d4dea mov esp, ebp */
  ESP = (EBP);
  /* 109d4dec pop ebp */
  EBP = (pop32());
  /* 109d4ded ret  */
  ESPCHK(0x109d4d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10014df0 @ 0x109d4df0 (970 bytes, 340 insns) */
void f_109d4df0(void) {
  FTRACE(0x109d4df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d4df0 push ebp */
  push32((uint32_t)(EBP));
  /* 109d4df1 mov ebp, esp */
  EBP = (ESP);
  /* 109d4df3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 109d4df5 push 0x109edc28 */
  push32((uint32_t)(0x109edc28u));
  /* 109d4dfa push 0x109ce348 */
  push32((uint32_t)(0x109ce348u));
  /* 109d4dff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 109d4e05 push eax */
  push32((uint32_t)(EAX));
  /* 109d4e06 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 109d4e0d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d4e10 push ebx */
  push32((uint32_t)(EBX));
  /* 109d4e11 push esi */
  push32((uint32_t)(ESI));
  /* 109d4e12 push edi */
  push32((uint32_t)(EDI));
  /* 109d4e13 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 109d4e16 cmp dword ptr [0x109f19e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f19e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4e1d jne 0x109d4e76 */
  if (!C.zf) goto L_109d4e76;
  /* 109d4e1f push 1 */
  push32((uint32_t)(0x1u));
  /* 109d4e21 push 0x109ed280 */
  push32((uint32_t)(0x109ed280u));
  /* 109d4e26 push 1 */
  push32((uint32_t)(0x1u));
  /* 109d4e28 push 0x109ed280 */
  push32((uint32_t)(0x109ed280u));
  /* 109d4e2d push 0 */
  push32((uint32_t)(0x0u));
  /* 109d4e2f push 0 */
  push32((uint32_t)(0x0u));
  /* 109d4e31 call dword ptr [0x109f42a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42a8))), 0x109d4e37u);
  /* 109d4e37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d4e39 je 0x109d4e47 */
  if (C.zf) goto L_109d4e47;
  /* 109d4e3b mov dword ptr [0x109f19e4], 1 */
  w32((uint32_t)(0x109f19e4), (0x1u));
  /* 109d4e45 jmp 0x109d4e76 */
  goto L_109d4e76;
L_109d4e47:;
  /* 109d4e47 push 1 */
  push32((uint32_t)(0x1u));
  /* 109d4e49 push 0x109ed27c */
  push32((uint32_t)(0x109ed27cu));
  /* 109d4e4e push 1 */
  push32((uint32_t)(0x1u));
  /* 109d4e50 push 0x109ed27c */
  push32((uint32_t)(0x109ed27cu));
  /* 109d4e55 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d4e57 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d4e59 call dword ptr [0x109f42b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42b4))), 0x109d4e5fu);
  /* 109d4e5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d4e61 je 0x109d4e6f */
  if (C.zf) goto L_109d4e6f;
  /* 109d4e63 mov dword ptr [0x109f19e4], 2 */
  w32((uint32_t)(0x109f19e4), (0x2u));
  /* 109d4e6d jmp 0x109d4e76 */
  goto L_109d4e76;
L_109d4e6f:;
  /* 109d4e6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d4e71 jmp 0x109d51d4 */
  goto L_109d51d4;
L_109d4e76:;
  /* 109d4e76 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4e7a jle 0x109d4e8f */
  if ((C.zf||C.sf!=C.of)) goto L_109d4e8f;
  /* 109d4e7c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d4e7f push eax */
  push32((uint32_t)(EAX));
  /* 109d4e80 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d4e83 push ecx */
  push32((uint32_t)(ECX));
  /* 109d4e84 call 0x109d51f0 */
  push32(0x109d4e89u); f_109d51f0();
  /* 109d4e89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d4e8c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_109d4e8f:;
  /* 109d4e8f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4e93 jle 0x109d4ea8 */
  if ((C.zf||C.sf!=C.of)) goto L_109d4ea8;
  /* 109d4e95 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 109d4e98 push edx */
  push32((uint32_t)(EDX));
  /* 109d4e99 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 109d4e9c push eax */
  push32((uint32_t)(EAX));
  /* 109d4e9d call 0x109d51f0 */
  push32(0x109d4ea2u); f_109d51f0();
  /* 109d4ea2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d4ea5 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_109d4ea8:;
  /* 109d4ea8 cmp dword ptr [0x109f19e4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x109f19e4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4eaf jne 0x109d4ed4 */
  if (!C.zf) goto L_109d4ed4;
  /* 109d4eb1 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 109d4eb4 push ecx */
  push32((uint32_t)(ECX));
  /* 109d4eb5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 109d4eb8 push edx */
  push32((uint32_t)(EDX));
  /* 109d4eb9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d4ebc push eax */
  push32((uint32_t)(EAX));
  /* 109d4ebd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d4ec0 push ecx */
  push32((uint32_t)(ECX));
  /* 109d4ec1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d4ec4 push edx */
  push32((uint32_t)(EDX));
  /* 109d4ec5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d4ec8 push eax */
  push32((uint32_t)(EAX));
  /* 109d4ec9 call dword ptr [0x109f42b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42b4))), 0x109d4ecfu);
  /* 109d4ecf jmp 0x109d51d4 */
  goto L_109d51d4;
L_109d4ed4:;
  /* 109d4ed4 cmp dword ptr [0x109f19e4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109f19e4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4edb jne 0x109d51d2 */
  if (!C.zf) goto L_109d51d2;
  /* 109d4ee1 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4ee5 jne 0x109d4ef0 */
  if (!C.zf) goto L_109d4ef0;
  /* 109d4ee7 mov ecx, dword ptr [0x109f1890] */
  ECX = (r32((uint32_t)(0x109f1890)));
  /* 109d4eed mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_109d4ef0:;
  /* 109d4ef0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4ef4 je 0x109d4f00 */
  if (C.zf) goto L_109d4f00;
  /* 109d4ef6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4efa jne 0x109d507c */
  if (!C.zf) goto L_109d507c;
L_109d4f00:;
  /* 109d4f00 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d4f03 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4f06 jne 0x109d4f12 */
  if (!C.zf) goto L_109d4f12;
  /* 109d4f08 mov eax, 2 */
  EAX = (0x2u);
  /* 109d4f0d jmp 0x109d51d4 */
  goto L_109d51d4;
L_109d4f12:;
  /* 109d4f12 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4f16 jle 0x109d4f22 */
  if ((C.zf||C.sf!=C.of)) goto L_109d4f22;
  /* 109d4f18 mov eax, 1 */
  EAX = (0x1u);
  /* 109d4f1d jmp 0x109d51d4 */
  goto L_109d51d4;
L_109d4f22:;
  /* 109d4f22 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4f26 jle 0x109d4f32 */
  if ((C.zf||C.sf!=C.of)) goto L_109d4f32;
  /* 109d4f28 mov eax, 3 */
  EAX = (0x3u);
  /* 109d4f2d jmp 0x109d51d4 */
  goto L_109d51d4;
L_109d4f32:;
  /* 109d4f32 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 109d4f35 push eax */
  push32((uint32_t)(EAX));
  /* 109d4f36 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 109d4f39 push ecx */
  push32((uint32_t)(ECX));
  /* 109d4f3a call dword ptr [0x109f4300] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4300))), 0x109d4f40u);
  /* 109d4f40 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d4f42 jne 0x109d4f4b */
  if (!C.zf) goto L_109d4f4b;
  /* 109d4f44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d4f46 jmp 0x109d51d4 */
  goto L_109d51d4;
L_109d4f4b:;
  /* 109d4f4b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4f4f jne 0x109d4f57 */
  if (!C.zf) goto L_109d4f57;
  /* 109d4f51 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4f55 je 0x109d4f84 */
  if (C.zf) goto L_109d4f84;
L_109d4f57:;
  /* 109d4f57 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4f5b jne 0x109d4f63 */
  if (!C.zf) goto L_109d4f63;
  /* 109d4f5d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4f61 je 0x109d4f84 */
  if (C.zf) goto L_109d4f84;
L_109d4f63:;
  /* 109d4f63 push 0x109edbe8 */
  push32((uint32_t)(0x109edbe8u));
  /* 109d4f68 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d4f6a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 109d4f6f push 0x109edbe0 */
  push32((uint32_t)(0x109edbe0u));
  /* 109d4f74 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d4f76 call 0x109c4300 */
  push32(0x109d4f7bu); f_109c4300();
  /* 109d4f7b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d4f7e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4f81 jne 0x109d4f84 */
  if (!C.zf) goto L_109d4f84;
  /* 109d4f83 int3  */
  x86_unimpl("int3 @ 0x109d4f83");
L_109d4f84:;
  /* 109d4f84 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109d4f86 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109d4f88 jne 0x109d4f4b */
  if (!C.zf) goto L_109d4f4b;
  /* 109d4f8a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4f8e jle 0x109d5003 */
  if ((C.zf||C.sf!=C.of)) goto L_109d5003;
  /* 109d4f90 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4f94 jae 0x109d4fa0 */
  if (!C.cf) goto L_109d4fa0;
  /* 109d4f96 mov eax, 3 */
  EAX = (0x3u);
  /* 109d4f9b jmp 0x109d51d4 */
  goto L_109d51d4;
L_109d4fa0:;
  /* 109d4fa0 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 109d4fa3 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 109d4fa6 jmp 0x109d4fb1 */
  goto L_109d4fb1;
L_109d4fa8:;
  /* 109d4fa8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 109d4fab add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d4fae mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_109d4fb1:;
  /* 109d4fb1 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 109d4fb4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d4fb6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 109d4fb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d4fba je 0x109d4ff9 */
  if (C.zf) goto L_109d4ff9;
  /* 109d4fbc mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 109d4fbf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109d4fc1 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 109d4fc4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109d4fc6 je 0x109d4ff9 */
  if (C.zf) goto L_109d4ff9;
  /* 109d4fc8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d4fcb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109d4fcd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 109d4fcf mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 109d4fd2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d4fd4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 109d4fd6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4fd8 jl 0x109d4ff7 */
  if ((C.sf!=C.of)) goto L_109d4ff7;
  /* 109d4fda mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d4fdd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109d4fdf mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 109d4fe1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 109d4fe4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109d4fe6 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 109d4fe9 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d4feb jg 0x109d4ff7 */
  if ((!C.zf&&C.sf==C.of)) goto L_109d4ff7;
  /* 109d4fed mov eax, 2 */
  EAX = (0x2u);
  /* 109d4ff2 jmp 0x109d51d4 */
  goto L_109d51d4;
L_109d4ff7:;
  /* 109d4ff7 jmp 0x109d4fa8 */
  goto L_109d4fa8;
L_109d4ff9:;
  /* 109d4ff9 mov eax, 3 */
  EAX = (0x3u);
  /* 109d4ffe jmp 0x109d51d4 */
  goto L_109d51d4;
L_109d5003:;
  /* 109d5003 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d5007 jle 0x109d507c */
  if ((C.zf||C.sf!=C.of)) goto L_109d507c;
  /* 109d5009 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d500d jae 0x109d5019 */
  if (!C.cf) goto L_109d5019;
  /* 109d500f mov eax, 1 */
  EAX = (0x1u);
  /* 109d5014 jmp 0x109d51d4 */
  goto L_109d51d4;
L_109d5019:;
  /* 109d5019 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 109d501c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 109d501f jmp 0x109d502a */
  goto L_109d502a;
L_109d5021:;
  /* 109d5021 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 109d5024 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d5027 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_109d502a:;
  /* 109d502a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 109d502d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109d502f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 109d5031 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109d5033 je 0x109d5072 */
  if (C.zf) goto L_109d5072;
  /* 109d5035 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 109d5038 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109d503a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 109d503d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109d503f je 0x109d5072 */
  if (C.zf) goto L_109d5072;
  /* 109d5041 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 109d5044 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d5046 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 109d5048 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 109d504b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109d504d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 109d504f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d5051 jl 0x109d5070 */
  if ((C.sf!=C.of)) goto L_109d5070;
  /* 109d5053 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 109d5056 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109d5058 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 109d505a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 109d505d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d505f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 109d5062 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d5064 jg 0x109d5070 */
  if ((!C.zf&&C.sf==C.of)) goto L_109d5070;
  /* 109d5066 mov eax, 2 */
  EAX = (0x2u);
  /* 109d506b jmp 0x109d51d4 */
  goto L_109d51d4;
L_109d5070:;
  /* 109d5070 jmp 0x109d5021 */
  goto L_109d5021;
L_109d5072:;
  /* 109d5072 mov eax, 1 */
  EAX = (0x1u);
  /* 109d5077 jmp 0x109d51d4 */
  goto L_109d51d4;
L_109d507c:;
  /* 109d507c push 0 */
  push32((uint32_t)(0x0u));
  /* 109d507e push 0 */
  push32((uint32_t)(0x0u));
  /* 109d5080 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d5083 push ecx */
  push32((uint32_t)(ECX));
  /* 109d5084 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d5087 push edx */
  push32((uint32_t)(EDX));
  /* 109d5088 push 9 */
  push32((uint32_t)(0x9u));
  /* 109d508a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 109d508d push eax */
  push32((uint32_t)(EAX));
  /* 109d508e call dword ptr [0x109f42f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42f4))), 0x109d5094u);
  /* 109d5094 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 109d5097 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d509b jne 0x109d50a4 */
  if (!C.zf) goto L_109d50a4;
  /* 109d509d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d509f jmp 0x109d51d4 */
  goto L_109d51d4;
L_109d50a4:;
  /* 109d50a4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 109d50ab mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 109d50ae shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 109d50b0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d50b3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 109d50b5 call 0x109c83e0 */
  push32(0x109d50bau); f_109c83e0();
  /* 109d50ba mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 109d50bd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 109d50c0 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 109d50c3 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 109d50c6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 109d50cd jmp 0x109d50e6 */
  goto L_109d50e6;
  /* 109d50cf mov eax, 1 */
  EAX = (0x1u);
  /* 109d50d4 ret  */
  ESPCHK(0x109d4df0u, _esp0);
  ESP += 4; return;
  /* 109d50d5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 109d50d8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 109d50df mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_109d50e6:;
  /* 109d50e6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d50ea jne 0x109d50f3 */
  if (!C.zf) goto L_109d50f3;
  /* 109d50ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d50ee jmp 0x109d51d4 */
  goto L_109d51d4;
L_109d50f3:;
  /* 109d50f3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 109d50f6 push edx */
  push32((uint32_t)(EDX));
  /* 109d50f7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 109d50fa push eax */
  push32((uint32_t)(EAX));
  /* 109d50fb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d50fe push ecx */
  push32((uint32_t)(ECX));
  /* 109d50ff mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d5102 push edx */
  push32((uint32_t)(EDX));
  /* 109d5103 push 1 */
  push32((uint32_t)(0x1u));
  /* 109d5105 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 109d5108 push eax */
  push32((uint32_t)(EAX));
  /* 109d5109 call dword ptr [0x109f42f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42f4))), 0x109d510fu);
  /* 109d510f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d5111 jne 0x109d511a */
  if (!C.zf) goto L_109d511a;
  /* 109d5113 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d5115 jmp 0x109d51d4 */
  goto L_109d51d4;
L_109d511a:;
  /* 109d511a push 0 */
  push32((uint32_t)(0x0u));
  /* 109d511c push 0 */
  push32((uint32_t)(0x0u));
  /* 109d511e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 109d5121 push ecx */
  push32((uint32_t)(ECX));
  /* 109d5122 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 109d5125 push edx */
  push32((uint32_t)(EDX));
  /* 109d5126 push 9 */
  push32((uint32_t)(0x9u));
  /* 109d5128 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 109d512b push eax */
  push32((uint32_t)(EAX));
  /* 109d512c call dword ptr [0x109f42f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42f4))), 0x109d5132u);
  /* 109d5132 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 109d5135 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d5139 jne 0x109d5142 */
  if (!C.zf) goto L_109d5142;
  /* 109d513b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d513d jmp 0x109d51d4 */
  goto L_109d51d4;
L_109d5142:;
  /* 109d5142 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 109d5149 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 109d514c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 109d514e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d5151 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 109d5153 call 0x109c83e0 */
  push32(0x109d5158u); f_109c83e0();
  /* 109d5158 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 109d515b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 109d515e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 109d5161 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 109d5164 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 109d516b jmp 0x109d5184 */
  goto L_109d5184;
  /* 109d516d mov eax, 1 */
  EAX = (0x1u);
  /* 109d5172 ret  */
  ESPCHK(0x109d4df0u, _esp0);
  ESP += 4; return;
  /* 109d5173 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 109d5176 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 109d517d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_109d5184:;
  /* 109d5184 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d5188 jne 0x109d518e */
  if (!C.zf) goto L_109d518e;
  /* 109d518a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d518c jmp 0x109d51d4 */
  goto L_109d51d4;
L_109d518e:;
  /* 109d518e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 109d5191 push edx */
  push32((uint32_t)(EDX));
  /* 109d5192 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 109d5195 push eax */
  push32((uint32_t)(EAX));
  /* 109d5196 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 109d5199 push ecx */
  push32((uint32_t)(ECX));
  /* 109d519a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 109d519d push edx */
  push32((uint32_t)(EDX));
  /* 109d519e push 1 */
  push32((uint32_t)(0x1u));
  /* 109d51a0 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 109d51a3 push eax */
  push32((uint32_t)(EAX));
  /* 109d51a4 call dword ptr [0x109f42f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42f4))), 0x109d51aau);
  /* 109d51aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d51ac jne 0x109d51b2 */
  if (!C.zf) goto L_109d51b2;
  /* 109d51ae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d51b0 jmp 0x109d51d4 */
  goto L_109d51d4;
L_109d51b2:;
  /* 109d51b2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 109d51b5 push ecx */
  push32((uint32_t)(ECX));
  /* 109d51b6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 109d51b9 push edx */
  push32((uint32_t)(EDX));
  /* 109d51ba mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 109d51bd push eax */
  push32((uint32_t)(EAX));
  /* 109d51be mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 109d51c1 push ecx */
  push32((uint32_t)(ECX));
  /* 109d51c2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d51c5 push edx */
  push32((uint32_t)(EDX));
  /* 109d51c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d51c9 push eax */
  push32((uint32_t)(EAX));
  /* 109d51ca call dword ptr [0x109f42a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42a8))), 0x109d51d0u);
  /* 109d51d0 jmp 0x109d51d4 */
  goto L_109d51d4;
L_109d51d2:;
  /* 109d51d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_109d51d4:;
  /* 109d51d4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 109d51d7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109d51da mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 109d51e1 pop edi */
  EDI = (pop32());
  /* 109d51e2 pop esi */
  ESI = (pop32());
  /* 109d51e3 pop ebx */
  EBX = (pop32());
  /* 109d51e4 mov esp, ebp */
  ESP = (EBP);
  /* 109d51e6 pop ebp */
  EBP = (pop32());
  /* 109d51e7 ret  */
  ESPCHK(0x109d4df0u, _esp0);
  ESP += 4; return;
}

/* FUN_100151f0 @ 0x109d51f0 (80 bytes, 32 insns) */
void f_109d51f0(void) {
  FTRACE(0x109d51f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d51f0 push ebp */
  push32((uint32_t)(EBP));
  /* 109d51f1 mov ebp, esp */
  EBP = (ESP);
  /* 109d51f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d51f6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d51f9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 109d51fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d51ff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_109d5202:;
  /* 109d5202 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d5205 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d5208 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d520b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 109d520e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109d5210 je 0x109d5227 */
  if (C.zf) goto L_109d5227;
  /* 109d5212 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d5215 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 109d5218 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109d521a je 0x109d5227 */
  if (C.zf) goto L_109d5227;
  /* 109d521c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d521f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d5222 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109d5225 jmp 0x109d5202 */
  goto L_109d5202;
L_109d5227:;
  /* 109d5227 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d522a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 109d522d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109d522f jne 0x109d5239 */
  if (!C.zf) goto L_109d5239;
  /* 109d5231 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d5234 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d5237 jmp 0x109d523c */
  goto L_109d523c;
L_109d5239:;
  /* 109d5239 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_109d523c:;
  /* 109d523c mov esp, ebp */
  ESP = (EBP);
  /* 109d523e pop ebp */
  EBP = (pop32());
  /* 109d523f ret  */
  ESPCHK(0x109d51f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015240 @ 0x109d5240 (736 bytes, 224 insns) */
void f_109d5240(void) {
  FTRACE(0x109d5240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d5240 push ebp */
  push32((uint32_t)(EBP));
  /* 109d5241 mov ebp, esp */
  EBP = (ESP);
  /* 109d5243 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d5246 push esi */
  push32((uint32_t)(ESI));
  /* 109d5247 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d524b je 0x109d526c */
  if (C.zf) goto L_109d526c;
  /* 109d524d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 109d524f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d5252 push eax */
  push32((uint32_t)(EAX));
  /* 109d5253 call 0x109d5690 */
  push32(0x109d5258u); f_109d5690();
  /* 109d5258 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d525b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 109d525e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d5262 je 0x109d526c */
  if (C.zf) goto L_109d526c;
  /* 109d5264 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d5267 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d526a jne 0x109d5274 */
  if (!C.zf) goto L_109d5274;
L_109d526c:;
  /* 109d526c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109d526f jmp 0x109d551b */
  goto L_109d551b;
L_109d5274:;
  /* 109d5274 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 109d5277 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 109d527b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 109d527d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d527f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 109d5280 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 109d5283 mov ecx, dword ptr [0x109f16a0] */
  ECX = (r32((uint32_t)(0x109f16a0)));
  /* 109d5289 cmp ecx, dword ptr [0x109f16a4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x109f16a4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d528f jne 0x109d52a5 */
  if (!C.zf) goto L_109d52a5;
  /* 109d5291 mov edx, dword ptr [0x109f16a0] */
  EDX = (r32((uint32_t)(0x109f16a0)));
  /* 109d5297 push edx */
  push32((uint32_t)(EDX));
  /* 109d5298 call 0x109d55a0 */
  push32(0x109d529du); f_109d55a0();
  /* 109d529d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d52a0 mov dword ptr [0x109f16a0], eax */
  w32((uint32_t)(0x109f16a0), (EAX));
L_109d52a5:;
  /* 109d52a5 cmp dword ptr [0x109f16a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f16a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d52ac jne 0x109d5365 */
  if (!C.zf) goto L_109d5365;
  /* 109d52b2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d52b6 je 0x109d52d7 */
  if (C.zf) goto L_109d52d7;
  /* 109d52b8 cmp dword ptr [0x109f16a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f16a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d52bf je 0x109d52d7 */
  if (C.zf) goto L_109d52d7;
  /* 109d52c1 call 0x109d4d40 */
  push32(0x109d52c6u); f_109d4d40();
  /* 109d52c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d52c8 je 0x109d52d2 */
  if (C.zf) goto L_109d52d2;
  /* 109d52ca or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109d52cd jmp 0x109d551b */
  goto L_109d551b;
L_109d52d2:;
  /* 109d52d2 jmp 0x109d5365 */
  goto L_109d5365;
L_109d52d7:;
  /* 109d52d7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d52db je 0x109d52e4 */
  if (C.zf) goto L_109d52e4;
  /* 109d52dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d52df jmp 0x109d551b */
  goto L_109d551b;
L_109d52e4:;
  /* 109d52e4 cmp dword ptr [0x109f16a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f16a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d52eb jne 0x109d5324 */
  if (!C.zf) goto L_109d5324;
  /* 109d52ed push 0x87 */
  push32((uint32_t)(0x87u));
  /* 109d52f2 push 0x109edc40 */
  push32((uint32_t)(0x109edc40u));
  /* 109d52f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d52f9 push 4 */
  push32((uint32_t)(0x4u));
  /* 109d52fb call 0x109c5240 */
  push32(0x109d5300u); f_109c5240();
  /* 109d5300 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d5303 mov dword ptr [0x109f16a0], eax */
  w32((uint32_t)(0x109f16a0), (EAX));
  /* 109d5308 cmp dword ptr [0x109f16a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f16a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d530f jne 0x109d5319 */
  if (!C.zf) goto L_109d5319;
  /* 109d5311 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109d5314 jmp 0x109d551b */
  goto L_109d551b;
L_109d5319:;
  /* 109d5319 mov eax, dword ptr [0x109f16a0] */
  EAX = (r32((uint32_t)(0x109f16a0)));
  /* 109d531e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_109d5324:;
  /* 109d5324 cmp dword ptr [0x109f16a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f16a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d532b jne 0x109d5365 */
  if (!C.zf) goto L_109d5365;
  /* 109d532d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 109d5332 push 0x109edc40 */
  push32((uint32_t)(0x109edc40u));
  /* 109d5337 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d5339 push 4 */
  push32((uint32_t)(0x4u));
  /* 109d533b call 0x109c5240 */
  push32(0x109d5340u); f_109c5240();
  /* 109d5340 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d5343 mov dword ptr [0x109f16a8], eax */
  w32((uint32_t)(0x109f16a8), (EAX));
  /* 109d5348 cmp dword ptr [0x109f16a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f16a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d534f jne 0x109d5359 */
  if (!C.zf) goto L_109d5359;
  /* 109d5351 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109d5354 jmp 0x109d551b */
  goto L_109d551b;
L_109d5359:;
  /* 109d5359 mov ecx, dword ptr [0x109f16a8] */
  ECX = (r32((uint32_t)(0x109f16a8)));
  /* 109d535f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_109d5365:;
  /* 109d5365 mov edx, dword ptr [0x109f16a0] */
  EDX = (r32((uint32_t)(0x109f16a0)));
  /* 109d536b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 109d536e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 109d5371 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d5374 push eax */
  push32((uint32_t)(EAX));
  /* 109d5375 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d5378 push ecx */
  push32((uint32_t)(ECX));
  /* 109d5379 call 0x109d5520 */
  push32(0x109d537eu); f_109d5520();
  /* 109d537e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d5381 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 109d5384 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d5388 jl 0x109d5421 */
  if ((C.sf!=C.of)) goto L_109d5421;
  /* 109d538e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d5391 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d5394 je 0x109d5421 */
  if (C.zf) goto L_109d5421;
  /* 109d539a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d539e je 0x109d5413 */
  if (C.zf) goto L_109d5413;
  /* 109d53a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d53a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d53a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d53a8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 109d53ab push edx */
  push32((uint32_t)(EDX));
  /* 109d53ac call 0x109c5cd0 */
  push32(0x109d53b1u); f_109c5cd0();
  /* 109d53b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d53b4 jmp 0x109d53bf */
  goto L_109d53bf;
L_109d53b6:;
  /* 109d53b6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d53b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d53bc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_109d53bf:;
  /* 109d53bf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d53c2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d53c5 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d53c9 je 0x109d53e0 */
  if (C.zf) goto L_109d53e0;
  /* 109d53cb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d53ce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d53d1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d53d4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 109d53d7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 109d53db mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 109d53de jmp 0x109d53b6 */
  goto L_109d53b6;
L_109d53e0:;
  /* 109d53e0 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 109d53e5 push 0x109edc40 */
  push32((uint32_t)(0x109edc40u));
  /* 109d53ea push 2 */
  push32((uint32_t)(0x2u));
  /* 109d53ec mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d53ef shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 109d53f2 push eax */
  push32((uint32_t)(EAX));
  /* 109d53f3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d53f6 push ecx */
  push32((uint32_t)(ECX));
  /* 109d53f7 call 0x109c56d0 */
  push32(0x109d53fcu); f_109c56d0();
  /* 109d53fc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d53ff mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 109d5402 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d5406 je 0x109d5411 */
  if (C.zf) goto L_109d5411;
  /* 109d5408 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d540b mov dword ptr [0x109f16a0], edx */
  w32((uint32_t)(0x109f16a0), (EDX));
L_109d5411:;
  /* 109d5411 jmp 0x109d541f */
  goto L_109d541f;
L_109d5413:;
  /* 109d5413 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d5416 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d5419 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d541c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_109d541f:;
  /* 109d541f jmp 0x109d5494 */
  goto L_109d5494;
L_109d5421:;
  /* 109d5421 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d5425 jne 0x109d548d */
  if (!C.zf) goto L_109d548d;
  /* 109d5427 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d542b jge 0x109d5435 */
  if ((C.sf==C.of)) goto L_109d5435;
  /* 109d542d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d5430 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 109d5432 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_109d5435:;
  /* 109d5435 push 0xce */
  push32((uint32_t)(0xceu));
  /* 109d543a push 0x109edc40 */
  push32((uint32_t)(0x109edc40u));
  /* 109d543f push 2 */
  push32((uint32_t)(0x2u));
  /* 109d5441 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d5444 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 109d544b push edx */
  push32((uint32_t)(EDX));
  /* 109d544c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d544f push eax */
  push32((uint32_t)(EAX));
  /* 109d5450 call 0x109c56d0 */
  push32(0x109d5455u); f_109c56d0();
  /* 109d5455 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d5458 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 109d545b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d545f jne 0x109d5469 */
  if (!C.zf) goto L_109d5469;
  /* 109d5461 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109d5464 jmp 0x109d551b */
  goto L_109d551b;
L_109d5469:;
  /* 109d5469 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d546c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d546f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d5472 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 109d5475 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d5478 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d547b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 109d5483 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d5486 mov dword ptr [0x109f16a0], eax */
  w32((uint32_t)(0x109f16a0), (EAX));
  /* 109d548b jmp 0x109d5494 */
  goto L_109d5494;
L_109d548d:;
  /* 109d548d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d548f jmp 0x109d551b */
  goto L_109d551b;
L_109d5494:;
  /* 109d5494 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d5498 je 0x109d5519 */
  if (C.zf) goto L_109d5519;
  /* 109d549a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 109d549f push 0x109edc40 */
  push32((uint32_t)(0x109edc40u));
  /* 109d54a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d54a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d54a9 push ecx */
  push32((uint32_t)(ECX));
  /* 109d54aa call 0x109c8070 */
  push32(0x109d54afu); f_109c8070();
  /* 109d54af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d54b2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d54b5 push eax */
  push32((uint32_t)(EAX));
  /* 109d54b6 call 0x109c5240 */
  push32(0x109d54bbu); f_109c5240();
  /* 109d54bb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d54be mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 109d54c1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d54c5 je 0x109d5519 */
  if (C.zf) goto L_109d5519;
  /* 109d54c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d54ca push edx */
  push32((uint32_t)(EDX));
  /* 109d54cb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 109d54ce push eax */
  push32((uint32_t)(EAX));
  /* 109d54cf call 0x109c81f0 */
  push32(0x109d54d4u); f_109c81f0();
  /* 109d54d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d54d7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 109d54da sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d54dd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109d54e0 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d54e2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 109d54e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d54e8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 109d54eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d54ee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d54f1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 109d54f4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109d54f7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 109d54f9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d54fb not edx */
  EDX = (~(EDX));
  /* 109d54fd and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 109d5500 push edx */
  push32((uint32_t)(EDX));
  /* 109d5501 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 109d5504 push eax */
  push32((uint32_t)(EAX));
  /* 109d5505 call dword ptr [0x109f42a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42a4))), 0x109d550bu);
  /* 109d550b push 2 */
  push32((uint32_t)(0x2u));
  /* 109d550d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109d5510 push ecx */
  push32((uint32_t)(ECX));
  /* 109d5511 call 0x109c5cd0 */
  push32(0x109d5516u); f_109c5cd0();
  /* 109d5516 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109d5519:;
  /* 109d5519 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_109d551b:;
  /* 109d551b pop esi */
  ESI = (pop32());
  /* 109d551c mov esp, ebp */
  ESP = (EBP);
  /* 109d551e pop ebp */
  EBP = (pop32());
  /* 109d551f ret  */
  ESPCHK(0x109d5240u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x109d5520 (124 bytes, 47 insns) */
void f_109d5520(void) {
  FTRACE(0x109d5520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d5520 push ebp */
  push32((uint32_t)(EBP));
  /* 109d5521 mov ebp, esp */
  EBP = (ESP);
  /* 109d5523 push ecx */
  push32((uint32_t)(ECX));
  /* 109d5524 mov eax, dword ptr [0x109f16a0] */
  EAX = (r32((uint32_t)(0x109f16a0)));
  /* 109d5529 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109d552c jmp 0x109d5537 */
  goto L_109d5537;
L_109d552e:;
  /* 109d552e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d5531 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d5534 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_109d5537:;
  /* 109d5537 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d553a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d553d je 0x109d558a */
  if (C.zf) goto L_109d558a;
  /* 109d553f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d5542 push eax */
  push32((uint32_t)(EAX));
  /* 109d5543 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d5546 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109d5548 push edx */
  push32((uint32_t)(EDX));
  /* 109d5549 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d554c push eax */
  push32((uint32_t)(EAX));
  /* 109d554d call 0x109d4cf0 */
  push32(0x109d5552u); f_109d4cf0();
  /* 109d5552 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d5555 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d5557 jne 0x109d5588 */
  if (!C.zf) goto L_109d5588;
  /* 109d5559 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d555c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109d555e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d5561 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 109d5565 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d5568 je 0x109d557a */
  if (C.zf) goto L_109d557a;
  /* 109d556a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d556d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 109d556f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d5572 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 109d5576 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109d5578 jne 0x109d5588 */
  if (!C.zf) goto L_109d5588;
L_109d557a:;
  /* 109d557a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d557d sub eax, dword ptr [0x109f16a0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109f16a0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d5583 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 109d5586 jmp 0x109d5598 */
  goto L_109d5598;
L_109d5588:;
  /* 109d5588 jmp 0x109d552e */
  goto L_109d552e;
L_109d558a:;
  /* 109d558a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d558d sub eax, dword ptr [0x109f16a0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109f16a0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d5593 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 109d5596 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_109d5598:;
  /* 109d5598 mov esp, ebp */
  ESP = (EBP);
  /* 109d559a pop ebp */
  EBP = (pop32());
  /* 109d559b ret  */
  ESPCHK(0x109d5520u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x109d55a0 (238 bytes, 80 insns) */
void f_109d55a0(void) {
  FTRACE(0x109d55a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d55a0 push ebp */
  push32((uint32_t)(EBP));
  /* 109d55a1 mov ebp, esp */
  EBP = (ESP);
  /* 109d55a3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d55a6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 109d55ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d55b0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 109d55b3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d55b7 jne 0x109d55c0 */
  if (!C.zf) goto L_109d55c0;
  /* 109d55b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d55bb jmp 0x109d568a */
  goto L_109d568a;
L_109d55c0:;
  /* 109d55c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d55c3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109d55c5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d55c8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d55cb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 109d55ce test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109d55d0 je 0x109d55dd */
  if (C.zf) goto L_109d55dd;
  /* 109d55d2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109d55d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d55d8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 109d55db jmp 0x109d55c0 */
  goto L_109d55c0;
L_109d55dd:;
  /* 109d55dd push 0x146 */
  push32((uint32_t)(0x146u));
  /* 109d55e2 push 0x109edc40 */
  push32((uint32_t)(0x109edc40u));
  /* 109d55e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d55e9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109d55ec lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 109d55f3 push eax */
  push32((uint32_t)(EAX));
  /* 109d55f4 call 0x109c5240 */
  push32(0x109d55f9u); f_109c5240();
  /* 109d55f9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d55fc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 109d55ff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d5602 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 109d5605 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d5609 jne 0x109d5615 */
  if (!C.zf) goto L_109d5615;
  /* 109d560b push 9 */
  push32((uint32_t)(0x9u));
  /* 109d560d call 0x109c41b0 */
  push32(0x109d5612u); f_109c41b0();
  /* 109d5612 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109d5615:;
  /* 109d5615 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d5618 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_109d561b:;
  /* 109d561b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d561e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d5621 je 0x109d567e */
  if (C.zf) goto L_109d567e;
  /* 109d5623 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 109d5628 push 0x109edc40 */
  push32((uint32_t)(0x109edc40u));
  /* 109d562d push 2 */
  push32((uint32_t)(0x2u));
  /* 109d562f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d5632 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109d5634 push edx */
  push32((uint32_t)(EDX));
  /* 109d5635 call 0x109c8070 */
  push32(0x109d563au); f_109c8070();
  /* 109d563a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d563d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d5640 push eax */
  push32((uint32_t)(EAX));
  /* 109d5641 call 0x109c5240 */
  push32(0x109d5646u); f_109c5240();
  /* 109d5646 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d5649 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d564c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 109d564e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d5651 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d5654 je 0x109d566a */
  if (C.zf) goto L_109d566a;
  /* 109d5656 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d5659 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109d565b push ecx */
  push32((uint32_t)(ECX));
  /* 109d565c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d565f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 109d5661 push eax */
  push32((uint32_t)(EAX));
  /* 109d5662 call 0x109c81f0 */
  push32(0x109d5667u); f_109c81f0();
  /* 109d5667 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109d566a:;
  /* 109d566a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d566d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d5670 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109d5673 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d5676 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d5679 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 109d567c jmp 0x109d561b */
  goto L_109d561b;
L_109d567e:;
  /* 109d567e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d5681 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 109d5687 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_109d568a:;
  /* 109d568a mov esp, ebp */
  ESP = (EBP);
  /* 109d568c pop ebp */
  EBP = (pop32());
  /* 109d568d ret  */
  ESPCHK(0x109d55a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015690 @ 0x109d5690 (237 bytes, 81 insns) */
void f_109d5690(void) {
  FTRACE(0x109d5690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d5690 push ebp */
  push32((uint32_t)(EBP));
  /* 109d5691 mov ebp, esp */
  EBP = (ESP);
  /* 109d5693 push ecx */
  push32((uint32_t)(ECX));
  /* 109d5694 cmp dword ptr [0x109f2dec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f2dec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d569b jne 0x109d56b2 */
  if (!C.zf) goto L_109d56b2;
  /* 109d569d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d56a0 push eax */
  push32((uint32_t)(EAX));
  /* 109d56a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d56a4 push ecx */
  push32((uint32_t)(ECX));
  /* 109d56a5 call 0x109d5790 */
  push32(0x109d56aau); f_109d5790();
  /* 109d56aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d56ad jmp 0x109d5779 */
  goto L_109d5779;
L_109d56b2:;
  /* 109d56b2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 109d56b4 call 0x109c8c40 */
  push32(0x109d56b9u); f_109c8c40();
  /* 109d56b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d56bc jmp 0x109d56c7 */
  goto L_109d56c7;
L_109d56be:;
  /* 109d56be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d56c1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d56c4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_109d56c7:;
  /* 109d56c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d56ca movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 109d56ce mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 109d56d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d56d5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 109d56db test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109d56dd je 0x109d575b */
  if (C.zf) goto L_109d575b;
  /* 109d56df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d56e2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109d56e7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109d56e9 mov cl, byte ptr [eax + 0x109f2f01] */
  CL = (r8((uint32_t)(EAX + 0x109f2f01)));
  /* 109d56ef and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 109d56f2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109d56f4 je 0x109d5746 */
  if (C.zf) goto L_109d5746;
  /* 109d56f6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d56f9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d56fc mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 109d56ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d5702 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109d5704 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 109d5706 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109d5708 jne 0x109d5718 */
  if (!C.zf) goto L_109d5718;
  /* 109d570a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 109d570c call 0x109c8ce0 */
  push32(0x109d5711u); f_109c8ce0();
  /* 109d5711 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d5714 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d5716 jmp 0x109d5779 */
  goto L_109d5779;
L_109d5718:;
  /* 109d5718 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d571b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 109d5721 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 109d5724 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d5727 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109d5729 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 109d572b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 109d572d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d5730 jne 0x109d5744 */
  if (!C.zf) goto L_109d5744;
  /* 109d5732 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 109d5734 call 0x109c8ce0 */
  push32(0x109d5739u); f_109c8ce0();
  /* 109d5739 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d573c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d573f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d5742 jmp 0x109d5779 */
  goto L_109d5779;
L_109d5744:;
  /* 109d5744 jmp 0x109d5756 */
  goto L_109d5756;
L_109d5746:;
  /* 109d5746 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d5749 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 109d574f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d5752 jne 0x109d5756 */
  if (!C.zf) goto L_109d5756;
  /* 109d5754 jmp 0x109d575b */
  goto L_109d575b;
L_109d5756:;
  /* 109d5756 jmp 0x109d56be */
  goto L_109d56be;
L_109d575b:;
  /* 109d575b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 109d575d call 0x109c8ce0 */
  push32(0x109d5762u); f_109c8ce0();
  /* 109d5762 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d5765 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d5768 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109d576d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d5770 jne 0x109d5777 */
  if (!C.zf) goto L_109d5777;
  /* 109d5772 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d5775 jmp 0x109d5779 */
  goto L_109d5779;
L_109d5777:;
  /* 109d5777 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_109d5779:;
  /* 109d5779 mov esp, ebp */
  ESP = (EBP);
  /* 109d577b pop ebp */
  EBP = (pop32());
  /* 109d577c ret  */
  ESPCHK(0x109d5690u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x109d5790 (193 bytes, 87 insns) */
void f_109d5790(void) {
  FTRACE(0x109d5790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d5790 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d5792 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 109d5796 push ebx */
  push32((uint32_t)(EBX));
  /* 109d5797 mov ebx, eax */
  EBX = (EAX);
  /* 109d5799 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 109d579c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 109d57a0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 109d57a6 je 0x109d57bb */
  if (C.zf) goto L_109d57bb;
L_109d57a8:;
  /* 109d57a8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 109d57aa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 109d57ab cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109d57ad je 0x109d5780 */
  if (C.zf) { jmp_ind(0x109d5780u); return; }
  /* 109d57af test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 109d57b1 je 0x109d5804 */
  if (C.zf) goto L_109d5804;
  /* 109d57b3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 109d57b9 jne 0x109d57a8 */
  if (!C.zf) goto L_109d57a8;
L_109d57bb:;
  /* 109d57bb or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 109d57bd push edi */
  push32((uint32_t)(EDI));
  /* 109d57be mov eax, ebx */
  EAX = (EBX);
  /* 109d57c0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 109d57c3 push esi */
  push32((uint32_t)(ESI));
  /* 109d57c4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_109d57c6:;
  /* 109d57c6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 109d57c8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 109d57cd mov eax, ecx */
  EAX = (ECX);
  /* 109d57cf mov esi, edi */
  ESI = (EDI);
  /* 109d57d1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 109d57d3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 109d57d5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 109d57d7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 109d57da xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109d57dd xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 109d57df xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 109d57e1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d57e4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 109d57ea jne 0x109d5808 */
  if (!C.zf) goto L_109d5808;
  /* 109d57ec and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 109d57f1 je 0x109d57c6 */
  if (C.zf) goto L_109d57c6;
  /* 109d57f3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 109d57f8 jne 0x109d5802 */
  if (!C.zf) goto L_109d5802;
  /* 109d57fa and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 109d5800 jne 0x109d57c6 */
  if (!C.zf) goto L_109d57c6;
L_109d5802:;
  /* 109d5802 pop esi */
  ESI = (pop32());
  /* 109d5803 pop edi */
  EDI = (pop32());
L_109d5804:;
  /* 109d5804 pop ebx */
  EBX = (pop32());
  /* 109d5805 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d5807 ret  */
  ESPCHK(0x109d5790u, _esp0);
  ESP += 4; return;
L_109d5808:;
  /* 109d5808 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 109d580b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109d580d je 0x109d5845 */
  if (C.zf) goto L_109d5845;
  /* 109d580f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109d5811 je 0x109d5802 */
  if (C.zf) goto L_109d5802;
  /* 109d5813 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109d5815 je 0x109d583e */
  if (C.zf) goto L_109d583e;
  /* 109d5817 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 109d5819 je 0x109d5802 */
  if (C.zf) goto L_109d5802;
  /* 109d581b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 109d581e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109d5820 je 0x109d5837 */
  if (C.zf) goto L_109d5837;
  /* 109d5822 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109d5824 je 0x109d5802 */
  if (C.zf) goto L_109d5802;
  /* 109d5826 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109d5828 je 0x109d5830 */
  if (C.zf) goto L_109d5830;
  /* 109d582a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 109d582c je 0x109d5802 */
  if (C.zf) goto L_109d5802;
  /* 109d582e jmp 0x109d57c6 */
  goto L_109d57c6;
L_109d5830:;
  /* 109d5830 pop esi */
  ESI = (pop32());
  /* 109d5831 pop edi */
  EDI = (pop32());
  /* 109d5832 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 109d5835 pop ebx */
  EBX = (pop32());
  /* 109d5836 ret  */
  ESPCHK(0x109d5790u, _esp0);
  ESP += 4; return;
L_109d5837:;
  /* 109d5837 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 109d583a pop esi */
  ESI = (pop32());
  /* 109d583b pop edi */
  EDI = (pop32());
  /* 109d583c pop ebx */
  EBX = (pop32());
  /* 109d583d ret  */
  ESPCHK(0x109d5790u, _esp0);
  ESP += 4; return;
L_109d583e:;
  /* 109d583e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 109d5841 pop esi */
  ESI = (pop32());
  /* 109d5842 pop edi */
  EDI = (pop32());
  /* 109d5843 pop ebx */
  EBX = (pop32());
  /* 109d5844 ret  */
  ESPCHK(0x109d5790u, _esp0);
  ESP += 4; return;
L_109d5845:;
  /* 109d5845 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 109d5848 pop esi */
  ESI = (pop32());
  /* 109d5849 pop edi */
  EDI = (pop32());
  /* 109d584a pop ebx */
  EBX = (pop32());
  /* 109d584b ret  */
  ESPCHK(0x109d5790u, _esp0);
  ESP += 4; return;
  /* 109d584c jmp dword ptr [0x109f4330] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x109f4330)))); return;
}

/* RtlUnwind @ 0x109d599c (6 bytes, 1 insns) */
void f_109d599c(void) {
  FTRACE(0x109d599cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d599c jmp dword ptr [0x109f42dc] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x109f42dc)))); return;
}

