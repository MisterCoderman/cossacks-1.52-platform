#include "recomp.h"

/* FUN_100110e0 @ 0x10a910e0 (289 bytes, 97 insns) */
void f_10a910e0(void) {
  FTRACE(0x10a910e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a910e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a910e1 mov ebp, esp */
  EBP = (ESP);
  /* 10a910e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a910e6 push esi */
  push32((uint32_t)(ESI));
  /* 10a910e7 mov eax, dword ptr [0x10aafc98] */
  EAX = (r32((uint32_t)(0x10aafc98)));
  /* 10a910ec mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a910ef mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10a910f6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10a910fd jmp 0x10a91108 */
  goto L_10a91108;
L_10a910ff:;
  /* 10a910ff mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a91102 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91105 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10a91108:;
  /* 10a91108 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a9110c jae 0x10a91141 */
  if (!C.cf) goto L_10a91141;
  /* 10a9110e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a91111 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a91114 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10a91117 push ecx */
  push32((uint32_t)(ECX));
  /* 10a91118 call 0x10a871c0 */
  push32(0x10a9111du); f_10a871c0();
  /* 10a9111d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91120 mov esi, eax */
  ESI = (EAX);
  /* 10a91122 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a91125 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a91128 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 10a9112c push ecx */
  push32((uint32_t)(ECX));
  /* 10a9112d call 0x10a871c0 */
  push32(0x10a91132u); f_10a871c0();
  /* 10a91132 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91135 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91138 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10a9113c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10a9113f jmp 0x10a910ff */
  goto L_10a910ff;
L_10a91141:;
  /* 10a91141 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a91144 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91147 push eax */
  push32((uint32_t)(EAX));
  /* 10a91148 call 0x10a84370 */
  push32(0x10a9114du); f_10a84370();
  /* 10a9114d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91150 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a91153 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a91157 je 0x10a911f9 */
  if (C.zf) goto L_10a911f9;
  /* 10a9115d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a91160 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10a91163 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10a9116a jmp 0x10a91175 */
  goto L_10a91175;
L_10a9116c:;
  /* 10a9116c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a9116f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91172 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10a91175:;
  /* 10a91175 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a91179 jae 0x10a911ea */
  if (!C.cf) goto L_10a911ea;
  /* 10a9117b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a9117e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10a91181 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a91184 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91187 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10a9118a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a9118d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a91190 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10a91193 push ecx */
  push32((uint32_t)(ECX));
  /* 10a91194 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a91197 push edx */
  push32((uint32_t)(EDX));
  /* 10a91198 call 0x10a87340 */
  push32(0x10a9119du); f_10a87340();
  /* 10a9119d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a911a0 push eax */
  push32((uint32_t)(EAX));
  /* 10a911a1 call 0x10a871c0 */
  push32(0x10a911a6u); f_10a871c0();
  /* 10a911a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a911a9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a911ac add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a911ae mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10a911b1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a911b4 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10a911b7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a911ba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a911bd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10a911c0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a911c3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a911c6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 10a911ca push eax */
  push32((uint32_t)(EAX));
  /* 10a911cb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a911ce push ecx */
  push32((uint32_t)(ECX));
  /* 10a911cf call 0x10a87340 */
  push32(0x10a911d4u); f_10a87340();
  /* 10a911d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a911d7 push eax */
  push32((uint32_t)(EAX));
  /* 10a911d8 call 0x10a871c0 */
  push32(0x10a911ddu); f_10a871c0();
  /* 10a911dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a911e0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a911e3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a911e5 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10a911e8 jmp 0x10a9116c */
  goto L_10a9116c;
L_10a911ea:;
  /* 10a911ea mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a911ed mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10a911f0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a911f3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a911f6 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10a911f9:;
  /* 10a911f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a911fc pop esi */
  ESI = (pop32());
  /* 10a911fd mov esp, ebp */
  ESP = (EBP);
  /* 10a911ff pop ebp */
  EBP = (pop32());
  /* 10a91200 ret  */
  ESPCHK(0x10a910e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011210 @ 0x10a91210 (291 bytes, 97 insns) */
void f_10a91210(void) {
  FTRACE(0x10a91210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a91210 push ebp */
  push32((uint32_t)(EBP));
  /* 10a91211 mov ebp, esp */
  EBP = (ESP);
  /* 10a91213 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a91216 push esi */
  push32((uint32_t)(ESI));
  /* 10a91217 mov eax, dword ptr [0x10aafc98] */
  EAX = (r32((uint32_t)(0x10aafc98)));
  /* 10a9121c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a9121f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10a91226 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10a9122d jmp 0x10a91238 */
  goto L_10a91238;
L_10a9122f:;
  /* 10a9122f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a91232 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91235 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10a91238:;
  /* 10a91238 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a9123c jae 0x10a91272 */
  if (!C.cf) goto L_10a91272;
  /* 10a9123e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a91241 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a91244 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10a91248 push ecx */
  push32((uint32_t)(ECX));
  /* 10a91249 call 0x10a871c0 */
  push32(0x10a9124eu); f_10a871c0();
  /* 10a9124e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91251 mov esi, eax */
  ESI = (EAX);
  /* 10a91253 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a91256 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a91259 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 10a9125d push ecx */
  push32((uint32_t)(ECX));
  /* 10a9125e call 0x10a871c0 */
  push32(0x10a91263u); f_10a871c0();
  /* 10a91263 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91266 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91269 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10a9126d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10a91270 jmp 0x10a9122f */
  goto L_10a9122f;
L_10a91272:;
  /* 10a91272 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a91275 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91278 push eax */
  push32((uint32_t)(EAX));
  /* 10a91279 call 0x10a84370 */
  push32(0x10a9127eu); f_10a84370();
  /* 10a9127e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91281 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a91284 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a91288 je 0x10a9132b */
  if (C.zf) goto L_10a9132b;
  /* 10a9128e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a91291 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10a91294 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10a9129b jmp 0x10a912a6 */
  goto L_10a912a6;
L_10a9129d:;
  /* 10a9129d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a912a0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a912a3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10a912a6:;
  /* 10a912a6 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a912aa jae 0x10a9131c */
  if (!C.cf) goto L_10a9131c;
  /* 10a912ac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a912af mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10a912b2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a912b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a912b8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10a912bb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a912be mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a912c1 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10a912c5 push ecx */
  push32((uint32_t)(ECX));
  /* 10a912c6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a912c9 push edx */
  push32((uint32_t)(EDX));
  /* 10a912ca call 0x10a87340 */
  push32(0x10a912cfu); f_10a87340();
  /* 10a912cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a912d2 push eax */
  push32((uint32_t)(EAX));
  /* 10a912d3 call 0x10a871c0 */
  push32(0x10a912d8u); f_10a871c0();
  /* 10a912d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a912db mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a912de add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a912e0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10a912e3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a912e6 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10a912e9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a912ec add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a912ef mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10a912f2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a912f5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a912f8 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10a912fc push eax */
  push32((uint32_t)(EAX));
  /* 10a912fd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a91300 push ecx */
  push32((uint32_t)(ECX));
  /* 10a91301 call 0x10a87340 */
  push32(0x10a91306u); f_10a87340();
  /* 10a91306 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91309 push eax */
  push32((uint32_t)(EAX));
  /* 10a9130a call 0x10a871c0 */
  push32(0x10a9130fu); f_10a871c0();
  /* 10a9130f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91312 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a91315 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91317 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10a9131a jmp 0x10a9129d */
  goto L_10a9129d;
L_10a9131c:;
  /* 10a9131c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a9131f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10a91322 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a91325 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91328 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10a9132b:;
  /* 10a9132b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a9132e pop esi */
  ESI = (pop32());
  /* 10a9132f mov esp, ebp */
  ESP = (EBP);
  /* 10a91331 pop ebp */
  EBP = (pop32());
  /* 10a91332 ret  */
  ESPCHK(0x10a91210u, _esp0);
  ESP += 4; return;
}

/* FUN_10011340 @ 0x10a91340 (878 bytes, 273 insns) */
void f_10a91340(void) {
  FTRACE(0x10a91340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a91340 push ebp */
  push32((uint32_t)(EBP));
  /* 10a91341 mov ebp, esp */
  EBP = (ESP);
  /* 10a91343 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a91346 push esi */
  push32((uint32_t)(ESI));
  /* 10a91347 mov eax, dword ptr [0x10aafc98] */
  EAX = (r32((uint32_t)(0x10aafc98)));
  /* 10a9134c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a9134f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10a91356 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10a9135d jmp 0x10a91368 */
  goto L_10a91368;
L_10a9135f:;
  /* 10a9135f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a91362 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91365 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10a91368:;
  /* 10a91368 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a9136c jae 0x10a913a1 */
  if (!C.cf) goto L_10a913a1;
  /* 10a9136e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a91371 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a91374 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10a91377 push ecx */
  push32((uint32_t)(ECX));
  /* 10a91378 call 0x10a871c0 */
  push32(0x10a9137du); f_10a871c0();
  /* 10a9137d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91380 mov esi, eax */
  ESI = (EAX);
  /* 10a91382 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a91385 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a91388 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 10a9138c push ecx */
  push32((uint32_t)(ECX));
  /* 10a9138d call 0x10a871c0 */
  push32(0x10a91392u); f_10a871c0();
  /* 10a91392 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91395 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91398 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10a9139c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10a9139f jmp 0x10a9135f */
  goto L_10a9135f;
L_10a913a1:;
  /* 10a913a1 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10a913a8 jmp 0x10a913b3 */
  goto L_10a913b3;
L_10a913aa:;
  /* 10a913aa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a913ad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a913b0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10a913b3:;
  /* 10a913b3 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a913b7 jae 0x10a913ed */
  if (!C.cf) goto L_10a913ed;
  /* 10a913b9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a913bc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a913bf mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10a913c3 push eax */
  push32((uint32_t)(EAX));
  /* 10a913c4 call 0x10a871c0 */
  push32(0x10a913c9u); f_10a871c0();
  /* 10a913c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a913cc mov esi, eax */
  ESI = (EAX);
  /* 10a913ce mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a913d1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a913d4 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10a913d8 push eax */
  push32((uint32_t)(EAX));
  /* 10a913d9 call 0x10a871c0 */
  push32(0x10a913deu); f_10a871c0();
  /* 10a913de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a913e1 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a913e4 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10a913e8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a913eb jmp 0x10a913aa */
  goto L_10a913aa;
L_10a913ed:;
  /* 10a913ed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a913f0 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10a913f6 push eax */
  push32((uint32_t)(EAX));
  /* 10a913f7 call 0x10a871c0 */
  push32(0x10a913fcu); f_10a871c0();
  /* 10a913fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a913ff mov esi, eax */
  ESI = (EAX);
  /* 10a91401 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a91404 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 10a9140a push edx */
  push32((uint32_t)(EDX));
  /* 10a9140b call 0x10a871c0 */
  push32(0x10a91410u); f_10a871c0();
  /* 10a91410 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91413 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91416 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10a9141a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a9141d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a91420 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10a91426 push edx */
  push32((uint32_t)(EDX));
  /* 10a91427 call 0x10a871c0 */
  push32(0x10a9142cu); f_10a871c0();
  /* 10a9142c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a9142f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a91432 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10a91436 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10a91439 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a9143c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 10a91442 push ecx */
  push32((uint32_t)(ECX));
  /* 10a91443 call 0x10a871c0 */
  push32(0x10a91448u); f_10a871c0();
  /* 10a91448 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a9144b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a9144e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10a91452 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a91455 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a91458 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 10a9145e push edx */
  push32((uint32_t)(EDX));
  /* 10a9145f call 0x10a871c0 */
  push32(0x10a91464u); f_10a871c0();
  /* 10a91464 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91467 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a9146a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10a9146e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10a91471 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a91474 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91479 push eax */
  push32((uint32_t)(EAX));
  /* 10a9147a call 0x10a84370 */
  push32(0x10a9147fu); f_10a84370();
  /* 10a9147f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91482 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a91485 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a91489 je 0x10a916a6 */
  if (C.zf) goto L_10a916a6;
  /* 10a9148f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a91492 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10a91495 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a91498 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a9149e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10a914a1 push 0xac */
  push32((uint32_t)(0xacu));
  /* 10a914a6 mov eax, dword ptr [0x10aafc98] */
  EAX = (r32((uint32_t)(0x10aafc98)));
  /* 10a914ab push eax */
  push32((uint32_t)(EAX));
  /* 10a914ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a914af push ecx */
  push32((uint32_t)(ECX));
  /* 10a914b0 call 0x10a8ac70 */
  push32(0x10a914b5u); f_10a8ac70();
  /* 10a914b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a914b8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10a914bf jmp 0x10a914ca */
  goto L_10a914ca;
L_10a914c1:;
  /* 10a914c1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a914c4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a914c7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10a914ca:;
  /* 10a914ca cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a914ce jae 0x10a9153e */
  if (!C.cf) goto L_10a9153e;
  /* 10a914d0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a914d3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a914d6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a914d9 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10a914dc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a914df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a914e2 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10a914e5 push edx */
  push32((uint32_t)(EDX));
  /* 10a914e6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a914e9 push eax */
  push32((uint32_t)(EAX));
  /* 10a914ea call 0x10a87340 */
  push32(0x10a914efu); f_10a87340();
  /* 10a914ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a914f2 push eax */
  push32((uint32_t)(EAX));
  /* 10a914f3 call 0x10a871c0 */
  push32(0x10a914f8u); f_10a871c0();
  /* 10a914f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a914fb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a914fe lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10a91502 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10a91505 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a91508 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a9150b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a9150e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 10a91512 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a91515 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a91518 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 10a9151c push edx */
  push32((uint32_t)(EDX));
  /* 10a9151d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a91520 push eax */
  push32((uint32_t)(EAX));
  /* 10a91521 call 0x10a87340 */
  push32(0x10a91526u); f_10a87340();
  /* 10a91526 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91529 push eax */
  push32((uint32_t)(EAX));
  /* 10a9152a call 0x10a871c0 */
  push32(0x10a9152fu); f_10a871c0();
  /* 10a9152f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91532 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a91535 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10a91539 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10a9153c jmp 0x10a914c1 */
  goto L_10a914c1;
L_10a9153e:;
  /* 10a9153e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10a91545 jmp 0x10a91550 */
  goto L_10a91550;
L_10a91547:;
  /* 10a91547 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a9154a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a9154d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10a91550:;
  /* 10a91550 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a91554 jae 0x10a915c6 */
  if (!C.cf) goto L_10a915c6;
  /* 10a91556 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a91559 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a9155c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a9155f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 10a91563 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a91566 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a91569 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10a9156d push eax */
  push32((uint32_t)(EAX));
  /* 10a9156e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a91571 push ecx */
  push32((uint32_t)(ECX));
  /* 10a91572 call 0x10a87340 */
  push32(0x10a91577u); f_10a87340();
  /* 10a91577 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a9157a push eax */
  push32((uint32_t)(EAX));
  /* 10a9157b call 0x10a871c0 */
  push32(0x10a91580u); f_10a871c0();
  /* 10a91580 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91583 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a91586 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10a9158a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10a9158d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a91590 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a91593 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a91596 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 10a9159a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a9159d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a915a0 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10a915a4 push eax */
  push32((uint32_t)(EAX));
  /* 10a915a5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a915a8 push ecx */
  push32((uint32_t)(ECX));
  /* 10a915a9 call 0x10a87340 */
  push32(0x10a915aeu); f_10a87340();
  /* 10a915ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a915b1 push eax */
  push32((uint32_t)(EAX));
  /* 10a915b2 call 0x10a871c0 */
  push32(0x10a915b7u); f_10a871c0();
  /* 10a915b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a915ba mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a915bd lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10a915c1 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10a915c4 jmp 0x10a91547 */
  goto L_10a91547;
L_10a915c6:;
  /* 10a915c6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a915c9 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a915cc mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 10a915d2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a915d5 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 10a915db push ecx */
  push32((uint32_t)(ECX));
  /* 10a915dc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a915df push edx */
  push32((uint32_t)(EDX));
  /* 10a915e0 call 0x10a87340 */
  push32(0x10a915e5u); f_10a87340();
  /* 10a915e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a915e8 push eax */
  push32((uint32_t)(EAX));
  /* 10a915e9 call 0x10a871c0 */
  push32(0x10a915eeu); f_10a871c0();
  /* 10a915ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a915f1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a915f4 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10a915f8 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10a915fb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a915fe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a91601 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 10a91607 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a9160a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10a91610 push eax */
  push32((uint32_t)(EAX));
  /* 10a91611 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a91614 push ecx */
  push32((uint32_t)(ECX));
  /* 10a91615 call 0x10a87340 */
  push32(0x10a9161au); f_10a87340();
  /* 10a9161a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a9161d push eax */
  push32((uint32_t)(EAX));
  /* 10a9161e call 0x10a871c0 */
  push32(0x10a91623u); f_10a871c0();
  /* 10a91623 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91626 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a91629 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10a9162d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10a91630 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a91633 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a91636 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 10a9163c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a9163f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 10a91645 push ecx */
  push32((uint32_t)(ECX));
  /* 10a91646 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a91649 push edx */
  push32((uint32_t)(EDX));
  /* 10a9164a call 0x10a87340 */
  push32(0x10a9164fu); f_10a87340();
  /* 10a9164f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91652 push eax */
  push32((uint32_t)(EAX));
  /* 10a91653 call 0x10a871c0 */
  push32(0x10a91658u); f_10a871c0();
  /* 10a91658 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a9165b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a9165e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10a91662 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10a91665 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a91668 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a9166b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 10a91671 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a91674 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 10a9167a push eax */
  push32((uint32_t)(EAX));
  /* 10a9167b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a9167e push ecx */
  push32((uint32_t)(ECX));
  /* 10a9167f call 0x10a87340 */
  push32(0x10a91684u); f_10a87340();
  /* 10a91684 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91687 push eax */
  push32((uint32_t)(EAX));
  /* 10a91688 call 0x10a871c0 */
  push32(0x10a9168du); f_10a871c0();
  /* 10a9168d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91690 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a91693 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10a91697 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10a9169a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a9169d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a916a0 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_10a916a6:;
  /* 10a916a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a916a9 pop esi */
  ESI = (pop32());
  /* 10a916aa mov esp, ebp */
  ESP = (EBP);
  /* 10a916ac pop ebp */
  EBP = (pop32());
  /* 10a916ad ret  */
  ESPCHK(0x10a91340u, _esp0);
  ESP += 4; return;
}

/* FUN_100116b0 @ 0x10a916b0 (31 bytes, 15 insns) */
void f_10a916b0(void) {
  FTRACE(0x10a916b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a916b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a916b1 mov ebp, esp */
  EBP = (ESP);
  /* 10a916b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a916b5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a916b8 push eax */
  push32((uint32_t)(EAX));
  /* 10a916b9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a916bc push ecx */
  push32((uint32_t)(ECX));
  /* 10a916bd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a916c0 push edx */
  push32((uint32_t)(EDX));
  /* 10a916c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a916c4 push eax */
  push32((uint32_t)(EAX));
  /* 10a916c5 call 0x10a916d0 */
  push32(0x10a916cau); f_10a916d0();
  /* 10a916ca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a916cd pop ebp */
  EBP = (pop32());
  /* 10a916ce ret  */
  ESPCHK(0x10a916b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100116d0 @ 0x10a916d0 (393 bytes, 123 insns) */
void f_10a916d0(void) {
  FTRACE(0x10a916d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a916d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a916d1 mov ebp, esp */
  EBP = (ESP);
  /* 10a916d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a916d6 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a916da jne 0x10a916e6 */
  if (!C.zf) goto L_10a916e6;
  /* 10a916dc mov eax, dword ptr [0x10aafc98] */
  EAX = (r32((uint32_t)(0x10aafc98)));
  /* 10a916e1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10a916e4 jmp 0x10a916ec */
  goto L_10a916ec;
L_10a916e6:;
  /* 10a916e6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a916e9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10a916ec:;
  /* 10a916ec mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a916ef mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a916f2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a916f5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a916f8 push 0x10ab0a3c */
  push32((uint32_t)(0x10ab0a3cu));
  /* 10a916fd call dword ptr [0x10ab3344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3344))), 0x10a91703u);
  /* 10a91703 cmp dword ptr [0x10ab0a2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab0a2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a9170a je 0x10a9172a */
  if (C.zf) goto L_10a9172a;
  /* 10a9170c push 0x10ab0a3c */
  push32((uint32_t)(0x10ab0a3cu));
  /* 10a91711 call dword ptr [0x10ab3334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3334))), 0x10a91717u);
  /* 10a91717 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10a91719 call 0x10a87d90 */
  push32(0x10a9171eu); f_10a87d90();
  /* 10a9171e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91721 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10a91728 jmp 0x10a91731 */
  goto L_10a91731;
L_10a9172a:;
  /* 10a9172a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10a91731:;
  /* 10a91731 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a91735 jbe 0x10a91822 */
  if ((C.cf||C.zf)) goto L_10a91822;
  /* 10a9173b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a9173e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a91740 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 10a91743 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a91747 je 0x10a91751 */
  if (C.zf) goto L_10a91751;
  /* 10a91749 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a9174d je 0x10a91756 */
  if (C.zf) goto L_10a91756;
  /* 10a9174f jmp 0x10a917b0 */
  goto L_10a917b0;
L_10a91751:;
  /* 10a91751 jmp 0x10a91822 */
  goto L_10a91822;
L_10a91756:;
  /* 10a91756 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a91759 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a9175c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10a9175f mov dword ptr [0x10ab0a18], 0 */
  w32((uint32_t)(0x10ab0a18), (0x0u));
  /* 10a91769 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a9176c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a9176f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a91772 jne 0x10a91787 */
  if (!C.zf) goto L_10a91787;
  /* 10a91774 mov dword ptr [0x10ab0a18], 1 */
  w32((uint32_t)(0x10ab0a18), (0x1u));
  /* 10a9177e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a91781 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91784 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10a91787:;
  /* 10a91787 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a9178a push ecx */
  push32((uint32_t)(ECX));
  /* 10a9178b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10a9178e push edx */
  push32((uint32_t)(EDX));
  /* 10a9178f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10a91792 push eax */
  push32((uint32_t)(EAX));
  /* 10a91793 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a91796 push ecx */
  push32((uint32_t)(ECX));
  /* 10a91797 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a9179a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a9179c push eax */
  push32((uint32_t)(EAX));
  /* 10a9179d call 0x10a91860 */
  push32(0x10a917a2u); f_10a91860();
  /* 10a917a2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a917a5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a917a8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a917ab mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10a917ae jmp 0x10a9181d */
  goto L_10a9181d;
L_10a917b0:;
  /* 10a917b0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a917b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a917b5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a917b7 mov ecx, dword ptr [0x10aaec98] */
  ECX = (r32((uint32_t)(0x10aaec98)));
  /* 10a917bd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a917bf mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10a917c3 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10a917c9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a917cb je 0x10a917f8 */
  if (C.zf) goto L_10a917f8;
  /* 10a917cd cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a917d1 jbe 0x10a917f8 */
  if ((C.cf||C.zf)) goto L_10a917f8;
  /* 10a917d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a917d6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a917d9 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a917db mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10a917dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a917e0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a917e3 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a917e6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a917e9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a917ec mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10a917ef mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a917f2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a917f5 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10a917f8:;
  /* 10a917f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a917fb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a917fe mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a91800 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10a91802 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a91805 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91808 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a9180b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a9180e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91811 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10a91814 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a91817 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a9181a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10a9181d:;
  /* 10a9181d jmp 0x10a91731 */
  goto L_10a91731;
L_10a91822:;
  /* 10a91822 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a91826 je 0x10a91834 */
  if (C.zf) goto L_10a91834;
  /* 10a91828 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10a9182a call 0x10a87e30 */
  push32(0x10a9182fu); f_10a87e30();
  /* 10a9182f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91832 jmp 0x10a9183f */
  goto L_10a9183f;
L_10a91834:;
  /* 10a91834 push 0x10ab0a3c */
  push32((uint32_t)(0x10ab0a3cu));
  /* 10a91839 call dword ptr [0x10ab3334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3334))), 0x10a9183fu);
L_10a9183f:;
  /* 10a9183f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a91843 jbe 0x10a91853 */
  if ((C.cf||C.zf)) goto L_10a91853;
  /* 10a91845 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a91848 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10a9184b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a9184e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a91851 jmp 0x10a91855 */
  goto L_10a91855;
L_10a91853:;
  /* 10a91853 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a91855:;
  /* 10a91855 mov esp, ebp */
  ESP = (EBP);
  /* 10a91857 pop ebp */
  EBP = (pop32());
  /* 10a91858 ret  */
  ESPCHK(0x10a916d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011860 @ 0x10a91860 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_10a91860(void) {
  FTRACE(0x10a91860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a91860 push ebp */
  push32((uint32_t)(EBP));
  /* 10a91861 mov ebp, esp */
  EBP = (ESP);
  /* 10a91863 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a91866 push esi */
  push32((uint32_t)(ESI));
  /* 10a91867 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 10a9186b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a9186e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a91871 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a91874 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a91877 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a9187b ja 0x10a91dc8 */
  if ((!C.cf&&!C.zf)) goto L_10a91dc8;
  /* 10a91881 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a91884 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a91886 mov dl, byte ptr [eax + 0x10a91e29] */
  DL = (r8((uint32_t)(EAX + 0x10a91e29)));
  /* 10a9188c jmp dword ptr [edx*4 + 0x10a91dcd] */
  switch (EDX) {
    case 0: goto L_10a91da6;
    case 1: goto L_10a918b5;
    case 2: goto L_10a918fb;
    case 3: goto L_10a91a48;
    case 4: goto L_10a91a70;
    case 5: goto L_10a91b0f;
    case 6: goto L_10a91b7b;
    case 7: goto L_10a91ba4;
    case 8: goto L_10a91be5;
    case 9: goto L_10a91cc7;
    case 10: goto L_10a91d2e;
    case 11: goto L_10a91d7b;
    case 12: goto L_10a91893;
    case 13: goto L_10a918d8;
    case 14: goto L_10a9191e;
    case 15: goto L_10a91a1e;
    case 16: goto L_10a91ab5;
    case 17: goto L_10a91ae2;
    case 18: goto L_10a91b37;
    case 19: goto L_10a91bbb;
    case 20: goto L_10a91c69;
    case 21: goto L_10a91cf8;
    case 22: goto L_10a91dc8;
    default: x86_unimpl("switch@0x10a9188c out of table"); return;
  }
L_10a91893:;
  /* 10a91893 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a91896 push ecx */
  push32((uint32_t)(ECX));
  /* 10a91897 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a9189a push edx */
  push32((uint32_t)(EDX));
  /* 10a9189b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a9189e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10a918a1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a918a4 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10a918a7 push eax */
  push32((uint32_t)(EAX));
  /* 10a918a8 call 0x10a91e80 */
  push32(0x10a918adu); f_10a91e80();
  /* 10a918ad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a918b0 jmp 0x10a91dc8 */
  goto L_10a91dc8;
L_10a918b5:;
  /* 10a918b5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a918b8 push ecx */
  push32((uint32_t)(ECX));
  /* 10a918b9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a918bc push edx */
  push32((uint32_t)(EDX));
  /* 10a918bd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a918c0 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10a918c3 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a918c6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 10a918ca push eax */
  push32((uint32_t)(EAX));
  /* 10a918cb call 0x10a91e80 */
  push32(0x10a918d0u); f_10a91e80();
  /* 10a918d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a918d3 jmp 0x10a91dc8 */
  goto L_10a91dc8;
L_10a918d8:;
  /* 10a918d8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a918db push ecx */
  push32((uint32_t)(ECX));
  /* 10a918dc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a918df push edx */
  push32((uint32_t)(EDX));
  /* 10a918e0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a918e3 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a918e6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a918e9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10a918ed push eax */
  push32((uint32_t)(EAX));
  /* 10a918ee call 0x10a91e80 */
  push32(0x10a918f3u); f_10a91e80();
  /* 10a918f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a918f6 jmp 0x10a91dc8 */
  goto L_10a91dc8;
L_10a918fb:;
  /* 10a918fb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a918fe push ecx */
  push32((uint32_t)(ECX));
  /* 10a918ff mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a91902 push edx */
  push32((uint32_t)(EDX));
  /* 10a91903 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a91906 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a91909 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a9190c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10a91910 push eax */
  push32((uint32_t)(EAX));
  /* 10a91911 call 0x10a91e80 */
  push32(0x10a91916u); f_10a91e80();
  /* 10a91916 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91919 jmp 0x10a91dc8 */
  goto L_10a91dc8;
L_10a9191e:;
  /* 10a9191e cmp dword ptr [0x10ab0a18], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab0a18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a91925 je 0x10a919a6 */
  if (C.zf) goto L_10a919a6;
  /* 10a91927 mov dword ptr [0x10ab0a18], 0 */
  w32((uint32_t)(0x10ab0a18), (0x0u));
  /* 10a91931 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a91934 push ecx */
  push32((uint32_t)(ECX));
  /* 10a91935 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a91938 push edx */
  push32((uint32_t)(EDX));
  /* 10a91939 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a9193c push eax */
  push32((uint32_t)(EAX));
  /* 10a9193d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a91940 push ecx */
  push32((uint32_t)(ECX));
  /* 10a91941 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a91944 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 10a9194a push eax */
  push32((uint32_t)(EAX));
  /* 10a9194b call 0x10a92030 */
  push32(0x10a91950u); f_10a92030();
  /* 10a91950 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91953 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a91956 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a91959 jne 0x10a91960 */
  if (!C.zf) goto L_10a91960;
  /* 10a9195b jmp 0x10a91dc8 */
  goto L_10a91dc8;
L_10a91960:;
  /* 10a91960 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a91963 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a91965 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 10a91968 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a9196b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a9196d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91970 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a91973 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10a91975 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a91978 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a9197a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a9197d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a91980 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10a91982 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a91985 push ecx */
  push32((uint32_t)(ECX));
  /* 10a91986 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a91989 push edx */
  push32((uint32_t)(EDX));
  /* 10a9198a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a9198d push eax */
  push32((uint32_t)(EAX));
  /* 10a9198e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a91991 push ecx */
  push32((uint32_t)(ECX));
  /* 10a91992 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a91995 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10a9199b push eax */
  push32((uint32_t)(EAX));
  /* 10a9199c call 0x10a92030 */
  push32(0x10a919a1u); f_10a92030();
  /* 10a919a1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a919a4 jmp 0x10a91a19 */
  goto L_10a91a19;
L_10a919a6:;
  /* 10a919a6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a919a9 push ecx */
  push32((uint32_t)(ECX));
  /* 10a919aa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a919ad push edx */
  push32((uint32_t)(EDX));
  /* 10a919ae mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a919b1 push eax */
  push32((uint32_t)(EAX));
  /* 10a919b2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a919b5 push ecx */
  push32((uint32_t)(ECX));
  /* 10a919b6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a919b9 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 10a919bf push eax */
  push32((uint32_t)(EAX));
  /* 10a919c0 call 0x10a92030 */
  push32(0x10a919c5u); f_10a92030();
  /* 10a919c5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a919c8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a919cb cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a919ce jne 0x10a919d5 */
  if (!C.zf) goto L_10a919d5;
  /* 10a919d0 jmp 0x10a91dc8 */
  goto L_10a91dc8;
L_10a919d5:;
  /* 10a919d5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a919d8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a919da mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 10a919dd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a919e0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a919e2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a919e5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a919e8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10a919ea mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a919ed mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a919ef sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a919f2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a919f5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10a919f7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a919fa push ecx */
  push32((uint32_t)(ECX));
  /* 10a919fb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a919fe push edx */
  push32((uint32_t)(EDX));
  /* 10a919ff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a91a02 push eax */
  push32((uint32_t)(EAX));
  /* 10a91a03 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a91a06 push ecx */
  push32((uint32_t)(ECX));
  /* 10a91a07 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a91a0a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10a91a10 push eax */
  push32((uint32_t)(EAX));
  /* 10a91a11 call 0x10a92030 */
  push32(0x10a91a16u); f_10a92030();
  /* 10a91a16 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a91a19:;
  /* 10a91a19 jmp 0x10a91dc8 */
  goto L_10a91dc8;
L_10a91a1e:;
  /* 10a91a1e mov ecx, dword ptr [0x10ab0a18] */
  ECX = (r32((uint32_t)(0x10ab0a18)));
  /* 10a91a24 mov dword ptr [0x10ab0a28], ecx */
  w32((uint32_t)(0x10ab0a28), (ECX));
  /* 10a91a2a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a91a2d push edx */
  push32((uint32_t)(EDX));
  /* 10a91a2e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a91a31 push eax */
  push32((uint32_t)(EAX));
  /* 10a91a32 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a91a34 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a91a37 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a91a3a push edx */
  push32((uint32_t)(EDX));
  /* 10a91a3b call 0x10a91ed0 */
  push32(0x10a91a40u); f_10a91ed0();
  /* 10a91a40 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91a43 jmp 0x10a91dc8 */
  goto L_10a91dc8;
L_10a91a48:;
  /* 10a91a48 mov eax, dword ptr [0x10ab0a18] */
  EAX = (r32((uint32_t)(0x10ab0a18)));
  /* 10a91a4d mov dword ptr [0x10ab0a28], eax */
  w32((uint32_t)(0x10ab0a28), (EAX));
  /* 10a91a52 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a91a55 push ecx */
  push32((uint32_t)(ECX));
  /* 10a91a56 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a91a59 push edx */
  push32((uint32_t)(EDX));
  /* 10a91a5a push 2 */
  push32((uint32_t)(0x2u));
  /* 10a91a5c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a91a5f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10a91a62 push ecx */
  push32((uint32_t)(ECX));
  /* 10a91a63 call 0x10a91ed0 */
  push32(0x10a91a68u); f_10a91ed0();
  /* 10a91a68 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91a6b jmp 0x10a91dc8 */
  goto L_10a91dc8;
L_10a91a70:;
  /* 10a91a70 mov edx, dword ptr [0x10ab0a18] */
  EDX = (r32((uint32_t)(0x10ab0a18)));
  /* 10a91a76 mov dword ptr [0x10ab0a28], edx */
  w32((uint32_t)(0x10ab0a28), (EDX));
  /* 10a91a7c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a91a7f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 10a91a82 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a91a83 mov ecx, 0xc */
  ECX = (0xcu);
  /* 10a91a88 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a91a8a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a91a8d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a91a91 jne 0x10a91a9a */
  if (!C.zf) goto L_10a91a9a;
  /* 10a91a93 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_10a91a9a:;
  /* 10a91a9a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a91a9d push edx */
  push32((uint32_t)(EDX));
  /* 10a91a9e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a91aa1 push eax */
  push32((uint32_t)(EAX));
  /* 10a91aa2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a91aa4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a91aa7 push ecx */
  push32((uint32_t)(ECX));
  /* 10a91aa8 call 0x10a91ed0 */
  push32(0x10a91aadu); f_10a91ed0();
  /* 10a91aad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91ab0 jmp 0x10a91dc8 */
  goto L_10a91dc8;
L_10a91ab5:;
  /* 10a91ab5 mov edx, dword ptr [0x10ab0a18] */
  EDX = (r32((uint32_t)(0x10ab0a18)));
  /* 10a91abb mov dword ptr [0x10ab0a28], edx */
  w32((uint32_t)(0x10ab0a28), (EDX));
  /* 10a91ac1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a91ac4 push eax */
  push32((uint32_t)(EAX));
  /* 10a91ac5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a91ac8 push ecx */
  push32((uint32_t)(ECX));
  /* 10a91ac9 push 3 */
  push32((uint32_t)(0x3u));
  /* 10a91acb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a91ace mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10a91ad1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91ad4 push eax */
  push32((uint32_t)(EAX));
  /* 10a91ad5 call 0x10a91ed0 */
  push32(0x10a91adau); f_10a91ed0();
  /* 10a91ada add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91add jmp 0x10a91dc8 */
  goto L_10a91dc8;
L_10a91ae2:;
  /* 10a91ae2 mov ecx, dword ptr [0x10ab0a18] */
  ECX = (r32((uint32_t)(0x10ab0a18)));
  /* 10a91ae8 mov dword ptr [0x10ab0a28], ecx */
  w32((uint32_t)(0x10ab0a28), (ECX));
  /* 10a91aee mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a91af1 push edx */
  push32((uint32_t)(EDX));
  /* 10a91af2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a91af5 push eax */
  push32((uint32_t)(EAX));
  /* 10a91af6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a91af8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a91afb mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10a91afe add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91b01 push edx */
  push32((uint32_t)(EDX));
  /* 10a91b02 call 0x10a91ed0 */
  push32(0x10a91b07u); f_10a91ed0();
  /* 10a91b07 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91b0a jmp 0x10a91dc8 */
  goto L_10a91dc8;
L_10a91b0f:;
  /* 10a91b0f mov eax, dword ptr [0x10ab0a18] */
  EAX = (r32((uint32_t)(0x10ab0a18)));
  /* 10a91b14 mov dword ptr [0x10ab0a28], eax */
  w32((uint32_t)(0x10ab0a28), (EAX));
  /* 10a91b19 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a91b1c push ecx */
  push32((uint32_t)(ECX));
  /* 10a91b1d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a91b20 push edx */
  push32((uint32_t)(EDX));
  /* 10a91b21 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a91b23 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a91b26 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a91b29 push ecx */
  push32((uint32_t)(ECX));
  /* 10a91b2a call 0x10a91ed0 */
  push32(0x10a91b2fu); f_10a91ed0();
  /* 10a91b2f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91b32 jmp 0x10a91dc8 */
  goto L_10a91dc8;
L_10a91b37:;
  /* 10a91b37 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a91b3a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a91b3e jg 0x10a91b5c */
  if ((!C.zf&&C.sf==C.of)) goto L_10a91b5c;
  /* 10a91b40 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a91b43 push eax */
  push32((uint32_t)(EAX));
  /* 10a91b44 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a91b47 push ecx */
  push32((uint32_t)(ECX));
  /* 10a91b48 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a91b4b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10a91b51 push eax */
  push32((uint32_t)(EAX));
  /* 10a91b52 call 0x10a91e80 */
  push32(0x10a91b57u); f_10a91e80();
  /* 10a91b57 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91b5a jmp 0x10a91b76 */
  goto L_10a91b76;
L_10a91b5c:;
  /* 10a91b5c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a91b5f push ecx */
  push32((uint32_t)(ECX));
  /* 10a91b60 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a91b63 push edx */
  push32((uint32_t)(EDX));
  /* 10a91b64 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a91b67 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 10a91b6d push ecx */
  push32((uint32_t)(ECX));
  /* 10a91b6e call 0x10a91e80 */
  push32(0x10a91b73u); f_10a91e80();
  /* 10a91b73 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a91b76:;
  /* 10a91b76 jmp 0x10a91dc8 */
  goto L_10a91dc8;
L_10a91b7b:;
  /* 10a91b7b mov edx, dword ptr [0x10ab0a18] */
  EDX = (r32((uint32_t)(0x10ab0a18)));
  /* 10a91b81 mov dword ptr [0x10ab0a28], edx */
  w32((uint32_t)(0x10ab0a28), (EDX));
  /* 10a91b87 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a91b8a push eax */
  push32((uint32_t)(EAX));
  /* 10a91b8b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a91b8e push ecx */
  push32((uint32_t)(ECX));
  /* 10a91b8f push 2 */
  push32((uint32_t)(0x2u));
  /* 10a91b91 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a91b94 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a91b96 push eax */
  push32((uint32_t)(EAX));
  /* 10a91b97 call 0x10a91ed0 */
  push32(0x10a91b9cu); f_10a91ed0();
  /* 10a91b9c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91b9f jmp 0x10a91dc8 */
  goto L_10a91dc8;
L_10a91ba4:;
  /* 10a91ba4 mov ecx, dword ptr [0x10ab0a18] */
  ECX = (r32((uint32_t)(0x10ab0a18)));
  /* 10a91baa mov dword ptr [0x10ab0a28], ecx */
  w32((uint32_t)(0x10ab0a28), (ECX));
  /* 10a91bb0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a91bb3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10a91bb6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a91bb9 jmp 0x10a91c0d */
  goto L_10a91c0d;
L_10a91bbb:;
  /* 10a91bbb mov ecx, dword ptr [0x10ab0a18] */
  ECX = (r32((uint32_t)(0x10ab0a18)));
  /* 10a91bc1 mov dword ptr [0x10ab0a28], ecx */
  w32((uint32_t)(0x10ab0a28), (ECX));
  /* 10a91bc7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a91bca push edx */
  push32((uint32_t)(EDX));
  /* 10a91bcb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a91bce push eax */
  push32((uint32_t)(EAX));
  /* 10a91bcf push 1 */
  push32((uint32_t)(0x1u));
  /* 10a91bd1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a91bd4 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10a91bd7 push edx */
  push32((uint32_t)(EDX));
  /* 10a91bd8 call 0x10a91ed0 */
  push32(0x10a91bddu); f_10a91ed0();
  /* 10a91bdd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91be0 jmp 0x10a91dc8 */
  goto L_10a91dc8;
L_10a91be5:;
  /* 10a91be5 mov eax, dword ptr [0x10ab0a18] */
  EAX = (r32((uint32_t)(0x10ab0a18)));
  /* 10a91bea mov dword ptr [0x10ab0a28], eax */
  w32((uint32_t)(0x10ab0a28), (EAX));
  /* 10a91bef mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a91bf2 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a91bf6 jne 0x10a91c01 */
  if (!C.zf) goto L_10a91c01;
  /* 10a91bf8 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 10a91bff jmp 0x10a91c0d */
  goto L_10a91c0d;
L_10a91c01:;
  /* 10a91c01 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a91c04 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10a91c07 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a91c0a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10a91c0d:;
  /* 10a91c0d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a91c10 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10a91c13 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a91c16 jge 0x10a91c21 */
  if ((C.sf==C.of)) goto L_10a91c21;
  /* 10a91c18 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a91c1f jmp 0x10a91c4e */
  goto L_10a91c4e;
L_10a91c21:;
  /* 10a91c21 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a91c24 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10a91c27 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a91c28 mov ecx, 7 */
  ECX = (0x7u);
  /* 10a91c2d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a91c2f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a91c32 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a91c35 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10a91c38 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a91c39 mov ecx, 7 */
  ECX = (0x7u);
  /* 10a91c3e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a91c40 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a91c43 jl 0x10a91c4e */
  if ((C.sf!=C.of)) goto L_10a91c4e;
  /* 10a91c45 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a91c48 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91c4b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10a91c4e:;
  /* 10a91c4e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a91c51 push eax */
  push32((uint32_t)(EAX));
  /* 10a91c52 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a91c55 push ecx */
  push32((uint32_t)(ECX));
  /* 10a91c56 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a91c58 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a91c5b push edx */
  push32((uint32_t)(EDX));
  /* 10a91c5c call 0x10a91ed0 */
  push32(0x10a91c61u); f_10a91ed0();
  /* 10a91c61 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91c64 jmp 0x10a91dc8 */
  goto L_10a91dc8;
L_10a91c69:;
  /* 10a91c69 cmp dword ptr [0x10ab0a18], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab0a18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a91c70 je 0x10a91ca0 */
  if (C.zf) goto L_10a91ca0;
  /* 10a91c72 mov dword ptr [0x10ab0a18], 0 */
  w32((uint32_t)(0x10ab0a18), (0x0u));
  /* 10a91c7c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a91c7f push eax */
  push32((uint32_t)(EAX));
  /* 10a91c80 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a91c83 push ecx */
  push32((uint32_t)(ECX));
  /* 10a91c84 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a91c87 push edx */
  push32((uint32_t)(EDX));
  /* 10a91c88 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a91c8b push eax */
  push32((uint32_t)(EAX));
  /* 10a91c8c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a91c8f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 10a91c95 push edx */
  push32((uint32_t)(EDX));
  /* 10a91c96 call 0x10a92030 */
  push32(0x10a91c9bu); f_10a92030();
  /* 10a91c9b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91c9e jmp 0x10a91cc2 */
  goto L_10a91cc2;
L_10a91ca0:;
  /* 10a91ca0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a91ca3 push eax */
  push32((uint32_t)(EAX));
  /* 10a91ca4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a91ca7 push ecx */
  push32((uint32_t)(ECX));
  /* 10a91ca8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a91cab push edx */
  push32((uint32_t)(EDX));
  /* 10a91cac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a91caf push eax */
  push32((uint32_t)(EAX));
  /* 10a91cb0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a91cb3 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10a91cb9 push edx */
  push32((uint32_t)(EDX));
  /* 10a91cba call 0x10a92030 */
  push32(0x10a91cbfu); f_10a92030();
  /* 10a91cbf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a91cc2:;
  /* 10a91cc2 jmp 0x10a91dc8 */
  goto L_10a91dc8;
L_10a91cc7:;
  /* 10a91cc7 mov dword ptr [0x10ab0a18], 0 */
  w32((uint32_t)(0x10ab0a18), (0x0u));
  /* 10a91cd1 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a91cd4 push eax */
  push32((uint32_t)(EAX));
  /* 10a91cd5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a91cd8 push ecx */
  push32((uint32_t)(ECX));
  /* 10a91cd9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a91cdc push edx */
  push32((uint32_t)(EDX));
  /* 10a91cdd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a91ce0 push eax */
  push32((uint32_t)(EAX));
  /* 10a91ce1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a91ce4 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 10a91cea push edx */
  push32((uint32_t)(EDX));
  /* 10a91ceb call 0x10a92030 */
  push32(0x10a91cf0u); f_10a92030();
  /* 10a91cf0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91cf3 jmp 0x10a91dc8 */
  goto L_10a91dc8;
L_10a91cf8:;
  /* 10a91cf8 mov eax, dword ptr [0x10ab0a18] */
  EAX = (r32((uint32_t)(0x10ab0a18)));
  /* 10a91cfd mov dword ptr [0x10ab0a28], eax */
  w32((uint32_t)(0x10ab0a28), (EAX));
  /* 10a91d02 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a91d05 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10a91d08 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a91d09 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10a91d0e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a91d10 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a91d13 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a91d16 push edx */
  push32((uint32_t)(EDX));
  /* 10a91d17 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a91d1a push eax */
  push32((uint32_t)(EAX));
  /* 10a91d1b push 2 */
  push32((uint32_t)(0x2u));
  /* 10a91d1d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a91d20 push ecx */
  push32((uint32_t)(ECX));
  /* 10a91d21 call 0x10a91ed0 */
  push32(0x10a91d26u); f_10a91ed0();
  /* 10a91d26 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91d29 jmp 0x10a91dc8 */
  goto L_10a91dc8;
L_10a91d2e:;
  /* 10a91d2e mov edx, dword ptr [0x10ab0a18] */
  EDX = (r32((uint32_t)(0x10ab0a18)));
  /* 10a91d34 mov dword ptr [0x10ab0a28], edx */
  w32((uint32_t)(0x10ab0a28), (EDX));
  /* 10a91d3a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a91d3d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 10a91d40 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a91d41 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10a91d46 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a91d48 mov ecx, eax */
  ECX = (EAX);
  /* 10a91d4a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91d4d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a91d50 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a91d53 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a91d56 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a91d57 mov esi, 0x64 */
  ESI = (0x64u);
  /* 10a91d5c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a91d5e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91d60 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a91d63 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a91d66 push eax */
  push32((uint32_t)(EAX));
  /* 10a91d67 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a91d6a push ecx */
  push32((uint32_t)(ECX));
  /* 10a91d6b push 4 */
  push32((uint32_t)(0x4u));
  /* 10a91d6d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a91d70 push edx */
  push32((uint32_t)(EDX));
  /* 10a91d71 call 0x10a91ed0 */
  push32(0x10a91d76u); f_10a91ed0();
  /* 10a91d76 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91d79 jmp 0x10a91dc8 */
  goto L_10a91dc8;
L_10a91d7b:;
  /* 10a91d7b call 0x10a92e90 */
  push32(0x10a91d80u); f_10a92e90();
  /* 10a91d80 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a91d83 push eax */
  push32((uint32_t)(EAX));
  /* 10a91d84 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a91d87 push ecx */
  push32((uint32_t)(ECX));
  /* 10a91d88 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a91d8b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a91d8d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a91d91 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 10a91d94 mov ecx, dword ptr [eax*4 + 0x10aafe1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10aafe1c)));
  /* 10a91d9b push ecx */
  push32((uint32_t)(ECX));
  /* 10a91d9c call 0x10a91e80 */
  push32(0x10a91da1u); f_10a91e80();
  /* 10a91da1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91da4 jmp 0x10a91dc8 */
  goto L_10a91dc8;
L_10a91da6:;
  /* 10a91da6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a91da9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a91dab mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 10a91dae mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a91db1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a91db3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91db6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a91db9 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10a91dbb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a91dbe mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a91dc0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a91dc3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a91dc6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10a91dc8:;
  /* 10a91dc8 pop esi */
  ESI = (pop32());
  /* 10a91dc9 mov esp, ebp */
  ESP = (EBP);
  /* 10a91dcb pop ebp */
  EBP = (pop32());
  /* 10a91dcc ret  */
  ESPCHK(0x10a91860u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x10a91e80 (72 bytes, 30 insns) */
void f_10a91e80(void) {
  FTRACE(0x10a91e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a91e80 push ebp */
  push32((uint32_t)(EBP));
  /* 10a91e81 mov ebp, esp */
  EBP = (ESP);
L_10a91e83:;
  /* 10a91e83 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a91e86 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a91e89 je 0x10a91ec6 */
  if (C.zf) goto L_10a91ec6;
  /* 10a91e8b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a91e8e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a91e91 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a91e93 je 0x10a91ec6 */
  if (C.zf) goto L_10a91ec6;
  /* 10a91e95 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a91e98 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a91e9a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a91e9d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a91e9f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10a91ea1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a91ea4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a91ea6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91ea9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a91eac mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10a91eae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a91eb1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91eb4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10a91eb7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a91eba mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a91ebc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a91ebf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a91ec2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10a91ec4 jmp 0x10a91e83 */
  goto L_10a91e83;
L_10a91ec6:;
  /* 10a91ec6 pop ebp */
  EBP = (pop32());
  /* 10a91ec7 ret  */
  ESPCHK(0x10a91e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ed0 @ 0x10a91ed0 (173 bytes, 64 insns) */
void f_10a91ed0(void) {
  FTRACE(0x10a91ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a91ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a91ed1 mov ebp, esp */
  EBP = (ESP);
  /* 10a91ed3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a91ed4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a91edb cmp dword ptr [0x10ab0a28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab0a28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a91ee2 je 0x10a91efa */
  if (C.zf) goto L_10a91efa;
  /* 10a91ee4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a91ee7 push eax */
  push32((uint32_t)(EAX));
  /* 10a91ee8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a91eeb push ecx */
  push32((uint32_t)(ECX));
  /* 10a91eec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a91eef push edx */
  push32((uint32_t)(EDX));
  /* 10a91ef0 call 0x10a91f80 */
  push32(0x10a91ef5u); f_10a91f80();
  /* 10a91ef5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91ef8 jmp 0x10a91f79 */
  goto L_10a91f79;
L_10a91efa:;
  /* 10a91efa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a91efd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a91f00 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a91f02 jae 0x10a91f70 */
  if (!C.cf) goto L_10a91f70;
  /* 10a91f04 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a91f07 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a91f0a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10a91f0d jmp 0x10a91f18 */
  goto L_10a91f18;
L_10a91f0f:;
  /* 10a91f0f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a91f12 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a91f15 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10a91f18:;
  /* 10a91f18 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a91f1b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91f1e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a91f20 je 0x10a91f54 */
  if (C.zf) goto L_10a91f54;
  /* 10a91f22 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a91f25 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a91f26 mov ecx, 0xa */
  ECX = (0xau);
  /* 10a91f2b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a91f2d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91f30 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a91f33 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a91f35 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a91f38 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 10a91f3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a91f3e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a91f3f mov ecx, 0xa */
  ECX = (0xau);
  /* 10a91f44 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a91f46 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a91f49 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a91f4c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91f4f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a91f52 jmp 0x10a91f0f */
  goto L_10a91f0f;
L_10a91f54:;
  /* 10a91f54 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a91f57 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a91f59 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91f5c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a91f5f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10a91f61 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a91f64 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a91f66 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a91f69 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a91f6c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10a91f6e jmp 0x10a91f79 */
  goto L_10a91f79;
L_10a91f70:;
  /* 10a91f70 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a91f73 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10a91f79:;
  /* 10a91f79 mov esp, ebp */
  ESP = (EBP);
  /* 10a91f7b pop ebp */
  EBP = (pop32());
  /* 10a91f7c ret  */
  ESPCHK(0x10a91ed0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x10a91f80 (172 bytes, 65 insns) */
void f_10a91f80(void) {
  FTRACE(0x10a91f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a91f80 push ebp */
  push32((uint32_t)(EBP));
  /* 10a91f81 mov ebp, esp */
  EBP = (ESP);
  /* 10a91f83 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a91f86 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a91f89 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a91f8b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a91f8e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a91f91 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a91f94 jbe 0x10a91fdb */
  if ((C.cf||C.zf)) goto L_10a91fdb;
L_10a91f96:;
  /* 10a91f96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a91f99 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a91f9a mov ecx, 0xa */
  ECX = (0xau);
  /* 10a91f9f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a91fa1 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91fa4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a91fa7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10a91fa9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a91fac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91faf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a91fb2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a91fb5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a91fb7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a91fba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a91fbd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10a91fbf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a91fc2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a91fc3 mov ecx, 0xa */
  ECX = (0xau);
  /* 10a91fc8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a91fca mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a91fcd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a91fd1 jle 0x10a91fdb */
  if ((C.zf||C.sf!=C.of)) goto L_10a91fdb;
  /* 10a91fd3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a91fd6 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a91fd9 ja 0x10a91f96 */
  if ((!C.cf&&!C.zf)) goto L_10a91f96;
L_10a91fdb:;
  /* 10a91fdb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a91fde mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a91fe0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a91fe3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a91fe6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a91fe9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10a91feb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a91fee sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a91ff1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10a91ff4:;
  /* 10a91ff4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a91ff7 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a91ff9 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 10a91ffc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a91fff mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a92002 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a92004 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10a92006 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a92009 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a9200c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a9200f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a92012 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10a92015 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10a92017 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a9201a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a9201d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a92020 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a92023 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a92026 jb 0x10a91ff4 */
  if (C.cf) goto L_10a91ff4;
  /* 10a92028 mov esp, ebp */
  ESP = (EBP);
  /* 10a9202a pop ebp */
  EBP = (pop32());
  /* 10a9202b ret  */
  ESPCHK(0x10a91f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10012030 @ 0x10a92030 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_10a92030(void) {
  FTRACE(0x10a92030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a92030 push ebp */
  push32((uint32_t)(EBP));
  /* 10a92031 mov ebp, esp */
  EBP = (ESP);
  /* 10a92033 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10a92036:;
  /* 10a92036 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a92039 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a9203c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a9203e je 0x10a924ac */
  if (C.zf) goto L_10a924ac;
  /* 10a92044 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a92047 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a9204a je 0x10a924ac */
  if (C.zf) goto L_10a924ac;
  /* 10a92050 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 10a92054 mov dword ptr [0x10ab0a28], 0 */
  w32((uint32_t)(0x10ab0a28), (0x0u));
  /* 10a9205e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10a92065 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a92068 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a9206b jmp 0x10a92076 */
  goto L_10a92076;
L_10a9206d:;
  /* 10a9206d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a92070 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a92073 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10a92076:;
  /* 10a92076 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a92079 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a9207c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a9207f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a92082 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a92085 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a92088 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a9208b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a9208d jne 0x10a92091 */
  if (!C.zf) goto L_10a92091;
  /* 10a9208f jmp 0x10a9206d */
  goto L_10a9206d;
L_10a92091:;
  /* 10a92091 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a92094 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a92097 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a9209a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a9209d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a920a0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10a920a3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a920a6 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a920a9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10a920ac cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a920b0 ja 0x10a92400 */
  if ((!C.cf&&!C.zf)) goto L_10a92400;
  /* 10a920b6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a920b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a920bb mov al, byte ptr [ecx + 0x10a924dc] */
  AL = (r8((uint32_t)(ECX + 0x10a924dc)));
  /* 10a920c1 jmp dword ptr [eax*4 + 0x10a924b0] */
  switch (EAX) {
    case 0: goto L_10a9231f;
    case 1: goto L_10a92203;
    case 2: goto L_10a9218e;
    case 3: goto L_10a920c8;
    case 4: goto L_10a92106;
    case 5: goto L_10a92167;
    case 6: goto L_10a921b5;
    case 7: goto L_10a921dc;
    case 8: goto L_10a9224a;
    case 9: goto L_10a92144;
    case 10: goto L_10a92400;
    default: x86_unimpl("switch@0x10a920c1 out of table"); return;
  }
L_10a920c8:;
  /* 10a920c8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a920cb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10a920ce mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a920d1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a920d4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10a920d7 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a920db ja 0x10a92101 */
  if ((!C.cf&&!C.zf)) goto L_10a92101;
  /* 10a920dd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a920e0 jmp dword ptr [ecx*4 + 0x10a9252f] */
  switch (ECX) {
    case 0: goto L_10a920e7;
    case 1: goto L_10a920f1;
    case 2: goto L_10a920f7;
    case 3: goto L_10a920fd;
    case 4: goto L_10a92125;
    case 5: goto L_10a9212f;
    case 6: goto L_10a92135;
    case 7: goto L_10a9213b;
    default: x86_unimpl("switch@0x10a920e0 out of table"); return;
  }
L_10a920e7:;
  /* 10a920e7 mov dword ptr [0x10ab0a28], 1 */
  w32((uint32_t)(0x10ab0a28), (0x1u));
L_10a920f1:;
  /* 10a920f1 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 10a920f5 jmp 0x10a92101 */
  goto L_10a92101;
L_10a920f7:;
  /* 10a920f7 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 10a920fb jmp 0x10a92101 */
  goto L_10a92101;
L_10a920fd:;
  /* 10a920fd mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_10a92101:;
  /* 10a92101 jmp 0x10a92400 */
  goto L_10a92400;
L_10a92106:;
  /* 10a92106 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a92109 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10a9210c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a9210f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a92112 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10a92115 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a92119 ja 0x10a9213f */
  if ((!C.cf&&!C.zf)) goto L_10a9213f;
  /* 10a9211b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a9211e jmp dword ptr [ecx*4 + 0x10a9253f] */
  switch (ECX) {
    case 0: goto L_10a92125;
    case 1: goto L_10a9212f;
    case 2: goto L_10a92135;
    case 3: goto L_10a9213b;
    default: x86_unimpl("switch@0x10a9211e out of table"); return;
  }
L_10a92125:;
  /* 10a92125 mov dword ptr [0x10ab0a28], 1 */
  w32((uint32_t)(0x10ab0a28), (0x1u));
L_10a9212f:;
  /* 10a9212f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 10a92133 jmp 0x10a9213f */
  goto L_10a9213f;
L_10a92135:;
  /* 10a92135 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 10a92139 jmp 0x10a9213f */
  goto L_10a9213f;
L_10a9213b:;
  /* 10a9213b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_10a9213f:;
  /* 10a9213f jmp 0x10a92400 */
  goto L_10a92400;
L_10a92144:;
  /* 10a92144 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a92147 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10a9214a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a9214e je 0x10a92158 */
  if (C.zf) goto L_10a92158;
  /* 10a92150 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a92154 je 0x10a9215e */
  if (C.zf) goto L_10a9215e;
  /* 10a92156 jmp 0x10a92162 */
  goto L_10a92162;
L_10a92158:;
  /* 10a92158 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 10a9215c jmp 0x10a92162 */
  goto L_10a92162;
L_10a9215e:;
  /* 10a9215e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_10a92162:;
  /* 10a92162 jmp 0x10a92400 */
  goto L_10a92400;
L_10a92167:;
  /* 10a92167 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a9216a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10a9216d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a92171 je 0x10a9217b */
  if (C.zf) goto L_10a9217b;
  /* 10a92173 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a92177 je 0x10a92185 */
  if (C.zf) goto L_10a92185;
  /* 10a92179 jmp 0x10a92189 */
  goto L_10a92189;
L_10a9217b:;
  /* 10a9217b mov dword ptr [0x10ab0a28], 1 */
  w32((uint32_t)(0x10ab0a28), (0x1u));
L_10a92185:;
  /* 10a92185 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_10a92189:;
  /* 10a92189 jmp 0x10a92400 */
  goto L_10a92400;
L_10a9218e:;
  /* 10a9218e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a92191 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10a92194 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a92198 je 0x10a921a2 */
  if (C.zf) goto L_10a921a2;
  /* 10a9219a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a9219e je 0x10a921ac */
  if (C.zf) goto L_10a921ac;
  /* 10a921a0 jmp 0x10a921b0 */
  goto L_10a921b0;
L_10a921a2:;
  /* 10a921a2 mov dword ptr [0x10ab0a28], 1 */
  w32((uint32_t)(0x10ab0a28), (0x1u));
L_10a921ac:;
  /* 10a921ac mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_10a921b0:;
  /* 10a921b0 jmp 0x10a92400 */
  goto L_10a92400;
L_10a921b5:;
  /* 10a921b5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a921b8 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 10a921bb cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a921bf je 0x10a921c9 */
  if (C.zf) goto L_10a921c9;
  /* 10a921c1 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a921c5 je 0x10a921d3 */
  if (C.zf) goto L_10a921d3;
  /* 10a921c7 jmp 0x10a921d7 */
  goto L_10a921d7;
L_10a921c9:;
  /* 10a921c9 mov dword ptr [0x10ab0a28], 1 */
  w32((uint32_t)(0x10ab0a28), (0x1u));
L_10a921d3:;
  /* 10a921d3 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_10a921d7:;
  /* 10a921d7 jmp 0x10a92400 */
  goto L_10a92400;
L_10a921dc:;
  /* 10a921dc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a921df mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10a921e2 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a921e6 je 0x10a921f0 */
  if (C.zf) goto L_10a921f0;
  /* 10a921e8 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a921ec je 0x10a921fa */
  if (C.zf) goto L_10a921fa;
  /* 10a921ee jmp 0x10a921fe */
  goto L_10a921fe;
L_10a921f0:;
  /* 10a921f0 mov dword ptr [0x10ab0a28], 1 */
  w32((uint32_t)(0x10ab0a28), (0x1u));
L_10a921fa:;
  /* 10a921fa mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_10a921fe:;
  /* 10a921fe jmp 0x10a92400 */
  goto L_10a92400;
L_10a92203:;
  /* 10a92203 push 0x10aacbd4 */
  push32((uint32_t)(0x10aacbd4u));
  /* 10a92208 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a9220b push ecx */
  push32((uint32_t)(ECX));
  /* 10a9220c call 0x10a92a60 */
  push32(0x10a92211u); f_10a92a60();
  /* 10a92211 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a92214 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a92216 jne 0x10a92223 */
  if (!C.zf) goto L_10a92223;
  /* 10a92218 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a9221b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a9221e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a92221 jmp 0x10a92241 */
  goto L_10a92241;
L_10a92223:;
  /* 10a92223 push 0x10aacbd0 */
  push32((uint32_t)(0x10aacbd0u));
  /* 10a92228 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a9222b push eax */
  push32((uint32_t)(EAX));
  /* 10a9222c call 0x10a92a60 */
  push32(0x10a92231u); f_10a92a60();
  /* 10a92231 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a92234 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a92236 jne 0x10a92241 */
  if (!C.zf) goto L_10a92241;
  /* 10a92238 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a9223b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a9223e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10a92241:;
  /* 10a92241 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 10a92245 jmp 0x10a92400 */
  goto L_10a92400;
L_10a9224a:;
  /* 10a9224a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a9224d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a92251 jg 0x10a92261 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a92261;
  /* 10a92253 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a92256 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 10a9225c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10a9225f jmp 0x10a9226d */
  goto L_10a9226d;
L_10a92261:;
  /* 10a92261 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a92264 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10a9226a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10a9226d:;
  /* 10a9226d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a92271 jle 0x10a92314 */
  if ((C.zf||C.sf!=C.of)) goto L_10a92314;
  /* 10a92277 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a9227a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a9227d jbe 0x10a92314 */
  if ((C.cf||C.zf)) goto L_10a92314;
  /* 10a92283 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a92286 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a92288 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a9228a mov ecx, dword ptr [0x10aaec98] */
  ECX = (r32((uint32_t)(0x10aaec98)));
  /* 10a92290 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a92292 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10a92296 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10a9229c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a9229e je 0x10a922d7 */
  if (C.zf) goto L_10a922d7;
  /* 10a922a0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a922a3 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a922a6 jbe 0x10a922d7 */
  if ((C.cf||C.zf)) goto L_10a922d7;
  /* 10a922a8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a922ab mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a922ad mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a922b0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10a922b2 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10a922b4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a922b7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a922b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a922bc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a922bf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10a922c1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a922c4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a922c7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10a922ca mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a922cd mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a922cf sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a922d2 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a922d5 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10a922d7:;
  /* 10a922d7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a922da mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a922dc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a922df mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a922e1 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10a922e3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a922e6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a922e8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a922eb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a922ee mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10a922f0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a922f3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a922f6 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10a922f9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a922fc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a922fe sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a92301 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a92304 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10a92306 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a92309 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a9230c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10a9230f jmp 0x10a9226d */
  goto L_10a9226d;
L_10a92314:;
  /* 10a92314 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a92317 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a9231a jmp 0x10a92036 */
  goto L_10a92036;
L_10a9231f:;
  /* 10a9231f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a92322 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10a92325 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a92327 je 0x10a923f2 */
  if (C.zf) goto L_10a923f2;
  /* 10a9232d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a92330 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a92333 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10a92336:;
  /* 10a92336 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a92339 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a9233c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a9233e je 0x10a923f0 */
  if (C.zf) goto L_10a923f0;
  /* 10a92344 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a92347 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a9234a je 0x10a923f0 */
  if (C.zf) goto L_10a923f0;
  /* 10a92350 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a92353 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a92356 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a92359 jne 0x10a92369 */
  if (!C.zf) goto L_10a92369;
  /* 10a9235b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a9235e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a92361 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10a92364 jmp 0x10a923f0 */
  goto L_10a923f0;
L_10a92369:;
  /* 10a92369 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a9236c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a9236e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10a92370 mov edx, dword ptr [0x10aaec98] */
  EDX = (r32((uint32_t)(0x10aaec98)));
  /* 10a92376 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a92378 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10a9237c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10a92381 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a92383 je 0x10a923bc */
  if (C.zf) goto L_10a923bc;
  /* 10a92385 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a92388 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a9238b jbe 0x10a923bc */
  if ((C.cf||C.zf)) goto L_10a923bc;
  /* 10a9238d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a92390 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a92392 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a92395 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a92397 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10a92399 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a9239c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a9239e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a923a1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a923a4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10a923a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a923a9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a923ac mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a923af mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a923b2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a923b4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a923b7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a923ba mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10a923bc:;
  /* 10a923bc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a923bf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a923c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a923c4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10a923c6 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10a923c8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a923cb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a923cd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a923d0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a923d3 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10a923d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a923d8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a923db mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10a923de mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a923e1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a923e3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a923e6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a923e9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10a923eb jmp 0x10a92336 */
  goto L_10a92336;
L_10a923f0:;
  /* 10a923f0 jmp 0x10a923fb */
  goto L_10a923fb;
L_10a923f2:;
  /* 10a923f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a923f5 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a923f8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10a923fb:;
  /* 10a923fb jmp 0x10a92036 */
  goto L_10a92036;
L_10a92400:;
  /* 10a92400 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10a92404 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a92406 je 0x10a9242c */
  if (C.zf) goto L_10a9242c;
  /* 10a92408 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a9240b push edx */
  push32((uint32_t)(EDX));
  /* 10a9240c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a9240f push eax */
  push32((uint32_t)(EAX));
  /* 10a92410 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a92413 push ecx */
  push32((uint32_t)(ECX));
  /* 10a92414 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a92417 push edx */
  push32((uint32_t)(EDX));
  /* 10a92418 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10a9241b push eax */
  push32((uint32_t)(EAX));
  /* 10a9241c call 0x10a91860 */
  push32(0x10a92421u); f_10a91860();
  /* 10a92421 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a92424 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a92427 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10a9242a jmp 0x10a924a7 */
  goto L_10a924a7;
L_10a9242c:;
  /* 10a9242c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a9242f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a92431 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a92433 mov ecx, dword ptr [0x10aaec98] */
  ECX = (r32((uint32_t)(0x10aaec98)));
  /* 10a92439 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a9243b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10a9243f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10a92445 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a92447 je 0x10a92478 */
  if (C.zf) goto L_10a92478;
  /* 10a92449 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a9244c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a9244e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a92451 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a92453 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10a92455 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a92458 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a9245a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a9245d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a92460 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10a92462 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a92465 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a92468 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10a9246b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a9246e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a92470 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a92473 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a92476 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10a92478:;
  /* 10a92478 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a9247b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a9247d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a92480 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a92482 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10a92484 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a92487 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a92489 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a9248c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a9248f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10a92491 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a92494 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a92497 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a9249a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a9249d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a9249f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a924a2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a924a5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10a924a7:;
  /* 10a924a7 jmp 0x10a92036 */
  goto L_10a92036;
L_10a924ac:;
  /* 10a924ac mov esp, ebp */
  ESP = (EBP);
  /* 10a924ae pop ebp */
  EBP = (pop32());
  /* 10a924af ret  */
  ESPCHK(0x10a92030u, _esp0);
  ESP += 4; return;
}

/* FUN_10012550 @ 0x10a92550 (650 bytes, 178 insns) */
void f_10a92550(void) {
  FTRACE(0x10a92550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a92550 push ebp */
  push32((uint32_t)(EBP));
  /* 10a92551 mov ebp, esp */
  EBP = (ESP);
  /* 10a92553 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a92559 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a9255d jne 0x10a926b9 */
  if (!C.zf) goto L_10a926b9;
  /* 10a92563 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a92566 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 10a9256c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 10a92572 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a92575 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a9257c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 10a92586 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a92588 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10a9258e push edx */
  push32((uint32_t)(EDX));
  /* 10a9258f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a92592 push eax */
  push32((uint32_t)(EAX));
  /* 10a92593 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a92596 push ecx */
  push32((uint32_t)(ECX));
  /* 10a92597 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a9259a push edx */
  push32((uint32_t)(EDX));
  /* 10a9259b call 0x10a93970 */
  push32(0x10a925a0u); f_10a93970();
  /* 10a925a0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a925a3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a925a6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a925aa jne 0x10a9263f */
  if (!C.zf) goto L_10a9263f;
  /* 10a925b0 call dword ptr [0x10ab3370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3370))), 0x10a925b6u);
  /* 10a925b6 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a925b9 je 0x10a925c0 */
  if (C.zf) goto L_10a925c0;
  /* 10a925bb jmp 0x10a9269d */
  goto L_10a9269d;
L_10a925c0:;
  /* 10a925c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a925c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a925c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a925c6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a925c9 push eax */
  push32((uint32_t)(EAX));
  /* 10a925ca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a925cd push ecx */
  push32((uint32_t)(ECX));
  /* 10a925ce call 0x10a93970 */
  push32(0x10a925d3u); f_10a93970();
  /* 10a925d3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a925d6 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 10a925dc cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a925e3 jne 0x10a925ea */
  if (!C.zf) goto L_10a925ea;
  /* 10a925e5 jmp 0x10a9269d */
  goto L_10a9269d;
L_10a925ea:;
  /* 10a925ea push 0x58 */
  push32((uint32_t)(0x58u));
  /* 10a925ec push 0x10aacbdc */
  push32((uint32_t)(0x10aacbdcu));
  /* 10a925f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a925f3 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10a925f9 push edx */
  push32((uint32_t)(EDX));
  /* 10a925fa call 0x10a84390 */
  push32(0x10a925ffu); f_10a84390();
  /* 10a925ff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a92602 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a92605 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a92609 jne 0x10a92610 */
  if (!C.zf) goto L_10a92610;
  /* 10a9260b jmp 0x10a9269d */
  goto L_10a9269d;
L_10a92610:;
  /* 10a92610 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10a92617 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a92619 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 10a9261f push eax */
  push32((uint32_t)(EAX));
  /* 10a92620 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a92623 push ecx */
  push32((uint32_t)(ECX));
  /* 10a92624 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a92627 push edx */
  push32((uint32_t)(EDX));
  /* 10a92628 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a9262b push eax */
  push32((uint32_t)(EAX));
  /* 10a9262c call 0x10a93970 */
  push32(0x10a92631u); f_10a93970();
  /* 10a92631 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a92634 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a92637 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a9263b jne 0x10a9263f */
  if (!C.zf) goto L_10a9263f;
  /* 10a9263d jmp 0x10a9269d */
  goto L_10a9269d;
L_10a9263f:;
  /* 10a9263f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10a92641 push 0x10aacbdc */
  push32((uint32_t)(0x10aacbdcu));
  /* 10a92646 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a92648 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a9264b push ecx */
  push32((uint32_t)(ECX));
  /* 10a9264c call 0x10a84390 */
  push32(0x10a92651u); f_10a84390();
  /* 10a92651 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a92654 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 10a9265a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10a9265c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10a92662 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a92665 jne 0x10a92669 */
  if (!C.zf) goto L_10a92669;
  /* 10a92667 jmp 0x10a9269d */
  goto L_10a9269d;
L_10a92669:;
  /* 10a92669 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a9266c push ecx */
  push32((uint32_t)(ECX));
  /* 10a9266d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a92670 push edx */
  push32((uint32_t)(EDX));
  /* 10a92671 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10a92677 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a92679 push ecx */
  push32((uint32_t)(ECX));
  /* 10a9267a call 0x10a87bb0 */
  push32(0x10a9267fu); f_10a87bb0();
  /* 10a9267f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a92682 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a92686 je 0x10a92696 */
  if (C.zf) goto L_10a92696;
  /* 10a92688 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a9268a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a9268d push edx */
  push32((uint32_t)(EDX));
  /* 10a9268e call 0x10a84e20 */
  push32(0x10a92693u); f_10a84e20();
  /* 10a92693 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a92696:;
  /* 10a92696 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a92698 jmp 0x10a927d6 */
  goto L_10a927d6;
L_10a9269d:;
  /* 10a9269d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a926a1 je 0x10a926b1 */
  if (C.zf) goto L_10a926b1;
  /* 10a926a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a926a5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a926a8 push eax */
  push32((uint32_t)(EAX));
  /* 10a926a9 call 0x10a84e20 */
  push32(0x10a926aeu); f_10a84e20();
  /* 10a926ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a926b1:;
  /* 10a926b1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a926b4 jmp 0x10a927d6 */
  goto L_10a927d6;
L_10a926b9:;
  /* 10a926b9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a926bd jne 0x10a927d3 */
  if (!C.zf) goto L_10a927d3;
  /* 10a926c3 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 10a926cd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a926d0 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 10a926d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a926d8 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10a926de push edx */
  push32((uint32_t)(EDX));
  /* 10a926df push 0x10ab0940 */
  push32((uint32_t)(0x10ab0940u));
  /* 10a926e4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a926e7 push eax */
  push32((uint32_t)(EAX));
  /* 10a926e8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a926eb push ecx */
  push32((uint32_t)(ECX));
  /* 10a926ec call 0x10a937d0 */
  push32(0x10a926f1u); f_10a937d0();
  /* 10a926f1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a926f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a926f6 jne 0x10a92700 */
  if (!C.zf) goto L_10a92700;
  /* 10a926f8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a926fb jmp 0x10a927d6 */
  goto L_10a927d6;
L_10a92700:;
  /* 10a92700 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10a92706 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10a92709 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 10a92713 jmp 0x10a92724 */
  goto L_10a92724;
L_10a92715:;
  /* 10a92715 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10a9271b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a9271e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_10a92724:;
  /* 10a92724 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a9272b jge 0x10a927cf */
  if ((C.sf==C.of)) goto L_10a927cf;
  /* 10a92731 cmp dword ptr [0x10aaeea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10aaeea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a92738 jle 0x10a9276b */
  if ((C.zf||C.sf!=C.of)) goto L_10a9276b;
  /* 10a9273a push 4 */
  push32((uint32_t)(0x4u));
  /* 10a9273c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10a92742 mov dl, byte ptr [ecx*2 + 0x10ab0940] */
  DL = (r8((uint32_t)(ECX*2 + 0x10ab0940)));
  /* 10a92749 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10a9274f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10a92755 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a9275a push eax */
  push32((uint32_t)(EAX));
  /* 10a9275b call 0x10a8a3a0 */
  push32(0x10a92760u); f_10a8a3a0();
  /* 10a92760 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a92763 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 10a92769 jmp 0x10a9279e */
  goto L_10a9279e;
L_10a9276b:;
  /* 10a9276b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10a92771 mov dl, byte ptr [ecx*2 + 0x10ab0940] */
  DL = (r8((uint32_t)(ECX*2 + 0x10ab0940)));
  /* 10a92778 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10a9277e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10a92784 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a92789 mov ecx, dword ptr [0x10aaec98] */
  ECX = (r32((uint32_t)(0x10aaec98)));
  /* 10a9278f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a92791 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10a92795 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10a92798 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_10a9279e:;
  /* 10a9279e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a927a5 je 0x10a927c8 */
  if (C.zf) goto L_10a927c8;
  /* 10a927a7 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10a927ad movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a927b0 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a927b3 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 10a927ba lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10a927be mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10a927c4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10a927c6 jmp 0x10a927ca */
  goto L_10a927ca;
L_10a927c8:;
  /* 10a927c8 jmp 0x10a927cf */
  goto L_10a927cf;
L_10a927ca:;
  /* 10a927ca jmp 0x10a92715 */
  goto L_10a92715;
L_10a927cf:;
  /* 10a927cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a927d1 jmp 0x10a927d6 */
  goto L_10a927d6;
L_10a927d3:;
  /* 10a927d3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10a927d6:;
  /* 10a927d6 mov esp, ebp */
  ESP = (EBP);
  /* 10a927d8 pop ebp */
  EBP = (pop32());
  /* 10a927d9 ret  */
  ESPCHK(0x10a92550u, _esp0);
  ESP += 4; return;
}

/* FUN_100127e0 @ 0x10a927e0 (10 bytes, 5 insns) */
void f_10a927e0(void) {
  FTRACE(0x10a927e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a927e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a927e1 mov ebp, esp */
  EBP = (ESP);
  /* 10a927e3 mov eax, dword ptr [0x10aafd88] */
  EAX = (r32((uint32_t)(0x10aafd88)));
  /* 10a927e8 pop ebp */
  EBP = (pop32());
  /* 10a927e9 ret  */
  ESPCHK(0x10a927e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100127f0 @ 0x10a927f0 (575 bytes, 196 insns) */
void f_10a927f0(void) {
  FTRACE(0x10a927f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a927f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a927f1 mov ebp, esp */
  EBP = (ESP);
  /* 10a927f3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10a927f5 push 0x10aacbe8 */
  push32((uint32_t)(0x10aacbe8u));
  /* 10a927fa push 0x10a8d498 */
  push32((uint32_t)(0x10a8d498u));
  /* 10a927ff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10a92805 push eax */
  push32((uint32_t)(EAX));
  /* 10a92806 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10a9280d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a92810 push ebx */
  push32((uint32_t)(EBX));
  /* 10a92811 push esi */
  push32((uint32_t)(ESI));
  /* 10a92812 push edi */
  push32((uint32_t)(EDI));
  /* 10a92813 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10a92816 cmp dword ptr [0x10ab094c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab094c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a9281d jne 0x10a9286e */
  if (!C.zf) goto L_10a9286e;
  /* 10a9281f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10a92822 push eax */
  push32((uint32_t)(EAX));
  /* 10a92823 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a92825 push 0x10aac318 */
  push32((uint32_t)(0x10aac318u));
  /* 10a9282a push 1 */
  push32((uint32_t)(0x1u));
  /* 10a9282c call dword ptr [0x10ab32e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32e4))), 0x10a92832u);
  /* 10a92832 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a92834 je 0x10a92842 */
  if (C.zf) goto L_10a92842;
  /* 10a92836 mov dword ptr [0x10ab094c], 1 */
  w32((uint32_t)(0x10ab094c), (0x1u));
  /* 10a92840 jmp 0x10a9286e */
  goto L_10a9286e;
L_10a92842:;
  /* 10a92842 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 10a92845 push ecx */
  push32((uint32_t)(ECX));
  /* 10a92846 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a92848 push 0x10aac314 */
  push32((uint32_t)(0x10aac314u));
  /* 10a9284d push 1 */
  push32((uint32_t)(0x1u));
  /* 10a9284f push 0 */
  push32((uint32_t)(0x0u));
  /* 10a92851 call dword ptr [0x10ab32f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32f4))), 0x10a92857u);
  /* 10a92857 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a92859 je 0x10a92867 */
  if (C.zf) goto L_10a92867;
  /* 10a9285b mov dword ptr [0x10ab094c], 2 */
  w32((uint32_t)(0x10ab094c), (0x2u));
  /* 10a92865 jmp 0x10a9286e */
  goto L_10a9286e;
L_10a92867:;
  /* 10a92867 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a92869 jmp 0x10a92a49 */
  goto L_10a92a49;
L_10a9286e:;
  /* 10a9286e cmp dword ptr [0x10ab094c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10ab094c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a92875 jne 0x10a92892 */
  if (!C.zf) goto L_10a92892;
  /* 10a92877 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a9287a push edx */
  push32((uint32_t)(EDX));
  /* 10a9287b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a9287e push eax */
  push32((uint32_t)(EAX));
  /* 10a9287f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a92882 push ecx */
  push32((uint32_t)(ECX));
  /* 10a92883 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a92886 push edx */
  push32((uint32_t)(EDX));
  /* 10a92887 call dword ptr [0x10ab32e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32e4))), 0x10a9288du);
  /* 10a9288d jmp 0x10a92a49 */
  goto L_10a92a49;
L_10a92892:;
  /* 10a92892 cmp dword ptr [0x10ab094c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10ab094c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a92899 jne 0x10a92a47 */
  if (!C.zf) goto L_10a92a47;
  /* 10a9289f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a928a3 jne 0x10a928ad */
  if (!C.zf) goto L_10a928ad;
  /* 10a928a5 mov eax, dword ptr [0x10ab08c0] */
  EAX = (r32((uint32_t)(0x10ab08c0)));
  /* 10a928aa mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_10a928ad:;
  /* 10a928ad push 0 */
  push32((uint32_t)(0x0u));
  /* 10a928af push 0 */
  push32((uint32_t)(0x0u));
  /* 10a928b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a928b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a928b5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a928b8 push ecx */
  push32((uint32_t)(ECX));
  /* 10a928b9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a928bc push edx */
  push32((uint32_t)(EDX));
  /* 10a928bd push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10a928c2 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a928c5 push eax */
  push32((uint32_t)(EAX));
  /* 10a928c6 call dword ptr [0x10ab339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab339c))), 0x10a928ccu);
  /* 10a928cc mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10a928cf cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a928d3 jne 0x10a928dc */
  if (!C.zf) goto L_10a928dc;
  /* 10a928d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a928d7 jmp 0x10a92a49 */
  goto L_10a92a49;
L_10a928dc:;
  /* 10a928dc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a928e3 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a928e6 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a928e9 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10a928eb call 0x10a87530 */
  push32(0x10a928f0u); f_10a87530();
  /* 10a928f0 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 10a928f3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10a928f6 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a928f9 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10a928fc mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a928ff push edx */
  push32((uint32_t)(EDX));
  /* 10a92900 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a92902 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a92905 push eax */
  push32((uint32_t)(EAX));
  /* 10a92906 call 0x10a88100 */
  push32(0x10a9290bu); f_10a88100();
  /* 10a9290b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a9290e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10a92915 jmp 0x10a9292e */
  goto L_10a9292e;
  /* 10a92917 mov eax, 1 */
  EAX = (0x1u);
  /* 10a9291c ret  */
  ESPCHK(0x10a927f0u, _esp0);
  ESP += 4; return;
  /* 10a9291d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10a92920 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10a92927 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10a9292e:;
  /* 10a9292e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a92932 jne 0x10a9293b */
  if (!C.zf) goto L_10a9293b;
  /* 10a92934 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a92936 jmp 0x10a92a49 */
  goto L_10a92a49;
L_10a9293b:;
  /* 10a9293b push 0 */
  push32((uint32_t)(0x0u));
  /* 10a9293d push 0 */
  push32((uint32_t)(0x0u));
  /* 10a9293f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a92942 push ecx */
  push32((uint32_t)(ECX));
  /* 10a92943 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a92946 push edx */
  push32((uint32_t)(EDX));
  /* 10a92947 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a9294a push eax */
  push32((uint32_t)(EAX));
  /* 10a9294b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a9294e push ecx */
  push32((uint32_t)(ECX));
  /* 10a9294f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10a92954 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a92957 push edx */
  push32((uint32_t)(EDX));
  /* 10a92958 call dword ptr [0x10ab339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab339c))), 0x10a9295eu);
  /* 10a9295e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a92960 jne 0x10a92969 */
  if (!C.zf) goto L_10a92969;
  /* 10a92962 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a92964 jmp 0x10a92a49 */
  goto L_10a92a49;
L_10a92969:;
  /* 10a92969 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10a92970 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a92973 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 10a92977 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a9297a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10a9297c call 0x10a87530 */
  push32(0x10a92981u); f_10a87530();
  /* 10a92981 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 10a92984 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10a92987 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10a9298a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10a9298d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10a92994 jmp 0x10a929ad */
  goto L_10a929ad;
  /* 10a92996 mov eax, 1 */
  EAX = (0x1u);
  /* 10a9299b ret  */
  ESPCHK(0x10a927f0u, _esp0);
  ESP += 4; return;
  /* 10a9299c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10a9299f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10a929a6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10a929ad:;
  /* 10a929ad cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a929b1 jne 0x10a929ba */
  if (!C.zf) goto L_10a929ba;
  /* 10a929b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a929b5 jmp 0x10a92a49 */
  goto L_10a92a49;
L_10a929ba:;
  /* 10a929ba cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a929be jne 0x10a929c9 */
  if (!C.zf) goto L_10a929c9;
  /* 10a929c0 mov edx, dword ptr [0x10ab08b0] */
  EDX = (r32((uint32_t)(0x10ab08b0)));
  /* 10a929c6 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_10a929c9:;
  /* 10a929c9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a929cc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a929cf mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 10a929d5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a929d8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a929db mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 10a929e2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a929e5 push ecx */
  push32((uint32_t)(ECX));
  /* 10a929e6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a929e9 push edx */
  push32((uint32_t)(EDX));
  /* 10a929ea mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a929ed push eax */
  push32((uint32_t)(EAX));
  /* 10a929ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a929f1 push ecx */
  push32((uint32_t)(ECX));
  /* 10a929f2 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10a929f5 push edx */
  push32((uint32_t)(EDX));
  /* 10a929f6 call dword ptr [0x10ab32f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32f4))), 0x10a929fcu);
  /* 10a929fc mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10a929ff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a92a02 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a92a05 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a92a07 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 10a92a0c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a92a12 je 0x10a92a28 */
  if (C.zf) goto L_10a92a28;
  /* 10a92a14 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a92a17 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a92a1a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a92a1c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10a92a20 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a92a26 je 0x10a92a2c */
  if (C.zf) goto L_10a92a2c;
L_10a92a28:;
  /* 10a92a28 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a92a2a jmp 0x10a92a49 */
  goto L_10a92a49;
L_10a92a2c:;
  /* 10a92a2c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a92a2f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10a92a31 push eax */
  push32((uint32_t)(EAX));
  /* 10a92a32 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a92a35 push ecx */
  push32((uint32_t)(ECX));
  /* 10a92a36 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a92a39 push edx */
  push32((uint32_t)(EDX));
  /* 10a92a3a call 0x10a8c280 */
  push32(0x10a92a3fu); f_10a8c280();
  /* 10a92a3f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a92a42 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a92a45 jmp 0x10a92a49 */
  goto L_10a92a49;
L_10a92a47:;
  /* 10a92a47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a92a49:;
  /* 10a92a49 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 10a92a4c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a92a4f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10a92a56 pop edi */
  EDI = (pop32());
  /* 10a92a57 pop esi */
  ESI = (pop32());
  /* 10a92a58 pop ebx */
  EBX = (pop32());
  /* 10a92a59 mov esp, ebp */
  ESP = (EBP);
  /* 10a92a5b pop ebp */
  EBP = (pop32());
  /* 10a92a5c ret  */
  ESPCHK(0x10a927f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012a60 @ 0x10a92a60 (208 bytes, 85 insns) */
void f_10a92a60(void) {
  FTRACE(0x10a92a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a92a60 push ebp */
  push32((uint32_t)(EBP));
  /* 10a92a61 mov ebp, esp */
  EBP = (ESP);
  /* 10a92a63 push edi */
  push32((uint32_t)(EDI));
  /* 10a92a64 push esi */
  push32((uint32_t)(ESI));
  /* 10a92a65 push ebx */
  push32((uint32_t)(EBX));
  /* 10a92a66 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10a92a69 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10a92a6c lea eax, [0x10ab08a8] */
  EAX = ((uint32_t)(0x10ab08a8));
  /* 10a92a72 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a92a76 jne 0x10a92ab3 */
  if (!C.zf) goto L_10a92ab3;
  /* 10a92a78 mov al, 0xff */
  AL = (0xffu);
  /* 10a92a7a mov edi, edi */
  EDI = (EDI);
L_10a92a7c:;
  /* 10a92a7c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10a92a7e je 0x10a92aae */
  if (C.zf) goto L_10a92aae;
  /* 10a92a80 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10a92a82 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10a92a83 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 10a92a85 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10a92a86 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a92a88 je 0x10a92a7c */
  if (C.zf) goto L_10a92a7c;
  /* 10a92a8a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10a92a8c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a92a8e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10a92a90 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10a92a93 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10a92a95 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10a92a97 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 10a92a99 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10a92a9b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a92a9d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10a92a9f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10a92aa2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10a92aa4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10a92aa6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a92aa8 je 0x10a92a7c */
  if (C.zf) goto L_10a92a7c;
  /* 10a92aaa sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10a92aac sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_10a92aae:;
  /* 10a92aae movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 10a92ab1 jmp 0x10a92b2b */
  goto L_10a92b2b;
L_10a92ab3:;
  /* 10a92ab3 lock inc dword ptr [0x10ab0a3c] */
  x86_unimpl("lock inc @ 0x10a92ab3");
  /* 10a92aba cmp dword ptr [0x10ab0a2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab0a2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a92ac1 jg 0x10a92ac7 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a92ac7;
  /* 10a92ac3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a92ac5 jmp 0x10a92adc */
  goto L_10a92adc;
L_10a92ac7:;
  /* 10a92ac7 lock dec dword ptr [0x10ab0a3c] */
  x86_unimpl("lock dec @ 0x10a92ac7");
  /* 10a92ace push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10a92ad0 call 0x10a87d90 */
  push32(0x10a92ad5u); f_10a87d90();
  /* 10a92ad5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_10a92adc:;
  /* 10a92adc mov eax, 0xff */
  EAX = (0xffu);
  /* 10a92ae1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10a92ae3 nop  */
  /* nop */
L_10a92ae4:;
  /* 10a92ae4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10a92ae6 je 0x10a92b0f */
  if (C.zf) goto L_10a92b0f;
  /* 10a92ae8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10a92aea inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10a92aeb mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10a92aed inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10a92aee cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a92af0 je 0x10a92ae4 */
  if (C.zf) goto L_10a92ae4;
  /* 10a92af2 push eax */
  push32((uint32_t)(EAX));
  /* 10a92af3 push ebx */
  push32((uint32_t)(EBX));
  /* 10a92af4 call 0x10a93bd0 */
  push32(0x10a92af9u); f_10a93bd0();
  /* 10a92af9 mov ebx, eax */
  EBX = (EAX);
  /* 10a92afb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a92afe call 0x10a93bd0 */
  push32(0x10a92b03u); f_10a93bd0();
  /* 10a92b03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a92b06 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a92b08 je 0x10a92ae4 */
  if (C.zf) goto L_10a92ae4;
  /* 10a92b0a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a92b0c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10a92b0f:;
  /* 10a92b0f mov ebx, eax */
  EBX = (EAX);
  /* 10a92b11 pop eax */
  EAX = (pop32());
  /* 10a92b12 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a92b14 jne 0x10a92b1f */
  if (!C.zf) goto L_10a92b1f;
  /* 10a92b16 lock dec dword ptr [0x10ab0a3c] */
  x86_unimpl("lock dec @ 0x10a92b16");
  /* 10a92b1d jmp 0x10a92b29 */
  goto L_10a92b29;
L_10a92b1f:;
  /* 10a92b1f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10a92b21 call 0x10a87e30 */
  push32(0x10a92b26u); f_10a87e30();
  /* 10a92b26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a92b29:;
  /* 10a92b29 mov eax, ebx */
  EAX = (EBX);
L_10a92b2b:;
  /* 10a92b2b pop ebx */
  EBX = (pop32());
  /* 10a92b2c pop esi */
  ESI = (pop32());
  /* 10a92b2d pop edi */
  EDI = (pop32());
  /* 10a92b2e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a92b2f ret  */
  ESPCHK(0x10a92a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b30 @ 0x10a92b30 (257 bytes, 103 insns) */
void f_10a92b30(void) {
  FTRACE(0x10a92b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a92b30 push ebp */
  push32((uint32_t)(EBP));
  /* 10a92b31 mov ebp, esp */
  EBP = (ESP);
  /* 10a92b33 push edi */
  push32((uint32_t)(EDI));
  /* 10a92b34 push esi */
  push32((uint32_t)(ESI));
  /* 10a92b35 push ebx */
  push32((uint32_t)(EBX));
  /* 10a92b36 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a92b39 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a92b3b je 0x10a92c2a */
  if (C.zf) goto L_10a92c2a;
  /* 10a92b41 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10a92b44 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10a92b47 lea eax, [0x10ab08a8] */
  EAX = ((uint32_t)(0x10ab08a8));
  /* 10a92b4d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a92b51 jne 0x10a92ba1 */
  if (!C.zf) goto L_10a92ba1;
  /* 10a92b53 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 10a92b55 mov bl, 0x5a */
  BL = (0x5au);
  /* 10a92b57 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 10a92b59 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10a92b5c:;
  /* 10a92b5c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 10a92b5e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10a92b60 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 10a92b62 je 0x10a92b85 */
  if (C.zf) goto L_10a92b85;
  /* 10a92b64 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10a92b66 je 0x10a92b85 */
  if (C.zf) goto L_10a92b85;
  /* 10a92b68 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10a92b69 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10a92b6a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a92b6c jb 0x10a92b74 */
  if (C.cf) goto L_10a92b74;
  /* 10a92b6e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a92b70 ja 0x10a92b74 */
  if ((!C.cf&&!C.zf)) goto L_10a92b74;
  /* 10a92b72 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_10a92b74:;
  /* 10a92b74 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a92b76 jb 0x10a92b7e */
  if (C.cf) goto L_10a92b7e;
  /* 10a92b78 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a92b7a ja 0x10a92b7e */
  if ((!C.cf&&!C.zf)) goto L_10a92b7e;
  /* 10a92b7c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_10a92b7e:;
  /* 10a92b7e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a92b80 jne 0x10a92b8f */
  if (!C.zf) goto L_10a92b8f;
  /* 10a92b82 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10a92b83 jne 0x10a92b5c */
  if (!C.zf) goto L_10a92b5c;
L_10a92b85:;
  /* 10a92b85 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a92b87 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a92b89 je 0x10a92c2a */
  if (C.zf) goto L_10a92c2a;
L_10a92b8f:;
  /* 10a92b8f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10a92b94 jb 0x10a92c2a */
  if (C.cf) goto L_10a92c2a;
  /* 10a92b9a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a92b9c jmp 0x10a92c2a */
  goto L_10a92c2a;
L_10a92ba1:;
  /* 10a92ba1 lock inc dword ptr [0x10ab0a3c] */
  x86_unimpl("lock inc @ 0x10a92ba1");
  /* 10a92ba8 cmp dword ptr [0x10ab0a2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab0a2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a92baf jg 0x10a92bb5 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a92bb5;
  /* 10a92bb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a92bb3 jmp 0x10a92bce */
  goto L_10a92bce;
L_10a92bb5:;
  /* 10a92bb5 lock dec dword ptr [0x10ab0a3c] */
  x86_unimpl("lock dec @ 0x10a92bb5");
  /* 10a92bbc mov ebx, ecx */
  EBX = (ECX);
  /* 10a92bbe push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10a92bc0 call 0x10a87d90 */
  push32(0x10a92bc5u); f_10a87d90();
  /* 10a92bc5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 10a92bcc mov ecx, ebx */
  ECX = (EBX);
L_10a92bce:;
  /* 10a92bce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a92bd0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10a92bd2 mov edi, edi */
  EDI = (EDI);
L_10a92bd4:;
  /* 10a92bd4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10a92bd6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a92bd8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10a92bda je 0x10a92bff */
  if (C.zf) goto L_10a92bff;
  /* 10a92bdc or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10a92bde je 0x10a92bff */
  if (C.zf) goto L_10a92bff;
  /* 10a92be0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10a92be1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10a92be2 push ecx */
  push32((uint32_t)(ECX));
  /* 10a92be3 push eax */
  push32((uint32_t)(EAX));
  /* 10a92be4 push ebx */
  push32((uint32_t)(EBX));
  /* 10a92be5 call 0x10a93bd0 */
  push32(0x10a92beau); f_10a93bd0();
  /* 10a92bea mov ebx, eax */
  EBX = (EAX);
  /* 10a92bec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a92bef call 0x10a93bd0 */
  push32(0x10a92bf4u); f_10a93bd0();
  /* 10a92bf4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a92bf7 pop ecx */
  ECX = (pop32());
  /* 10a92bf8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a92bfa jne 0x10a92c05 */
  if (!C.zf) goto L_10a92c05;
  /* 10a92bfc dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10a92bfd jne 0x10a92bd4 */
  if (!C.zf) goto L_10a92bd4;
L_10a92bff:;
  /* 10a92bff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a92c01 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a92c03 je 0x10a92c0e */
  if (C.zf) goto L_10a92c0e;
L_10a92c05:;
  /* 10a92c05 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10a92c0a jb 0x10a92c0e */
  if (C.cf) goto L_10a92c0e;
  /* 10a92c0c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_10a92c0e:;
  /* 10a92c0e pop eax */
  EAX = (pop32());
  /* 10a92c0f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a92c11 jne 0x10a92c1c */
  if (!C.zf) goto L_10a92c1c;
  /* 10a92c13 lock dec dword ptr [0x10ab0a3c] */
  x86_unimpl("lock dec @ 0x10a92c13");
  /* 10a92c1a jmp 0x10a92c2a */
  goto L_10a92c2a;
L_10a92c1c:;
  /* 10a92c1c mov ebx, ecx */
  EBX = (ECX);
  /* 10a92c1e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10a92c20 call 0x10a87e30 */
  push32(0x10a92c25u); f_10a87e30();
  /* 10a92c25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a92c28 mov ecx, ebx */
  ECX = (EBX);
L_10a92c2a:;
  /* 10a92c2a mov eax, ecx */
  EAX = (ECX);
  /* 10a92c2c pop ebx */
  EBX = (pop32());
  /* 10a92c2d pop esi */
  ESI = (pop32());
  /* 10a92c2e pop edi */
  EDI = (pop32());
  /* 10a92c2f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a92c30 ret  */
  ESPCHK(0x10a92b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10012c40 @ 0x10a92c40 (255 bytes, 88 insns) */
void f_10a92c40(void) {
  FTRACE(0x10a92c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a92c40 push ebp */
  push32((uint32_t)(EBP));
  /* 10a92c41 mov ebp, esp */
  EBP = (ESP);
  /* 10a92c43 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10a92c46:;
  /* 10a92c46 cmp dword ptr [0x10aaeea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10aaeea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a92c4d jle 0x10a92c66 */
  if ((C.zf||C.sf!=C.of)) goto L_10a92c66;
  /* 10a92c4f push 8 */
  push32((uint32_t)(0x8u));
  /* 10a92c51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a92c54 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a92c56 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10a92c58 push ecx */
  push32((uint32_t)(ECX));
  /* 10a92c59 call 0x10a8a3a0 */
  push32(0x10a92c5eu); f_10a8a3a0();
  /* 10a92c5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a92c61 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10a92c64 jmp 0x10a92c7f */
  goto L_10a92c7f;
L_10a92c66:;
  /* 10a92c66 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a92c69 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a92c6b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a92c6d mov ecx, dword ptr [0x10aaec98] */
  ECX = (r32((uint32_t)(0x10aaec98)));
  /* 10a92c73 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a92c75 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10a92c79 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10a92c7c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10a92c7f:;
  /* 10a92c7f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a92c83 je 0x10a92c90 */
  if (C.zf) goto L_10a92c90;
  /* 10a92c85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a92c88 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a92c8b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a92c8e jmp 0x10a92c46 */
  goto L_10a92c46;
L_10a92c90:;
  /* 10a92c90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a92c93 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a92c95 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a92c97 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a92c9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a92c9d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a92ca0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a92ca3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a92ca6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a92ca9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a92cad je 0x10a92cb5 */
  if (C.zf) goto L_10a92cb5;
  /* 10a92caf cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a92cb3 jne 0x10a92cc8 */
  if (!C.zf) goto L_10a92cc8;
L_10a92cb5:;
  /* 10a92cb5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a92cb8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a92cba mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a92cbc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a92cbf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a92cc2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a92cc5 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10a92cc8:;
  /* 10a92cc8 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10a92ccf:;
  /* 10a92ccf cmp dword ptr [0x10aaeea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10aaeea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a92cd6 jle 0x10a92ceb */
  if ((C.zf||C.sf!=C.of)) goto L_10a92ceb;
  /* 10a92cd8 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a92cda mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a92cdd push edx */
  push32((uint32_t)(EDX));
  /* 10a92cde call 0x10a8a3a0 */
  push32(0x10a92ce3u); f_10a8a3a0();
  /* 10a92ce3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a92ce6 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10a92ce9 jmp 0x10a92d00 */
  goto L_10a92d00;
L_10a92ceb:;
  /* 10a92ceb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a92cee mov ecx, dword ptr [0x10aaec98] */
  ECX = (r32((uint32_t)(0x10aaec98)));
  /* 10a92cf4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a92cf6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10a92cfa and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10a92cfd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10a92d00:;
  /* 10a92d00 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a92d04 je 0x10a92d2b */
  if (C.zf) goto L_10a92d2b;
  /* 10a92d06 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a92d09 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a92d0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a92d0f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 10a92d13 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10a92d16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a92d19 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a92d1b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10a92d1d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a92d20 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a92d23 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a92d26 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10a92d29 jmp 0x10a92ccf */
  goto L_10a92ccf;
L_10a92d2b:;
  /* 10a92d2b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a92d2f jne 0x10a92d38 */
  if (!C.zf) goto L_10a92d38;
  /* 10a92d31 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a92d34 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a92d36 jmp 0x10a92d3b */
  goto L_10a92d3b;
L_10a92d38:;
  /* 10a92d38 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10a92d3b:;
  /* 10a92d3b mov esp, ebp */
  ESP = (EBP);
  /* 10a92d3d pop ebp */
  EBP = (pop32());
  /* 10a92d3e ret  */
  ESPCHK(0x10a92c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d40 @ 0x10a92d40 (17 bytes, 8 insns) */
void f_10a92d40(void) {
  FTRACE(0x10a92d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a92d40 push ebp */
  push32((uint32_t)(EBP));
  /* 10a92d41 mov ebp, esp */
  EBP = (ESP);
  /* 10a92d43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a92d46 push eax */
  push32((uint32_t)(EAX));
  /* 10a92d47 call 0x10a92c40 */
  push32(0x10a92d4cu); f_10a92c40();
  /* 10a92d4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a92d4f pop ebp */
  EBP = (pop32());
  /* 10a92d50 ret  */
  ESPCHK(0x10a92d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d60 @ 0x10a92d60 (297 bytes, 106 insns) */
void f_10a92d60(void) {
  FTRACE(0x10a92d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a92d60 push ebp */
  push32((uint32_t)(EBP));
  /* 10a92d61 mov ebp, esp */
  EBP = (ESP);
  /* 10a92d63 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a92d66 push esi */
  push32((uint32_t)(ESI));
L_10a92d67:;
  /* 10a92d67 cmp dword ptr [0x10aaeea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10aaeea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a92d6e jle 0x10a92d87 */
  if ((C.zf||C.sf!=C.of)) goto L_10a92d87;
  /* 10a92d70 push 8 */
  push32((uint32_t)(0x8u));
  /* 10a92d72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a92d75 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a92d77 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10a92d79 push ecx */
  push32((uint32_t)(ECX));
  /* 10a92d7a call 0x10a8a3a0 */
  push32(0x10a92d7fu); f_10a8a3a0();
  /* 10a92d7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a92d82 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10a92d85 jmp 0x10a92da0 */
  goto L_10a92da0;
L_10a92d87:;
  /* 10a92d87 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a92d8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a92d8c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a92d8e mov ecx, dword ptr [0x10aaec98] */
  ECX = (r32((uint32_t)(0x10aaec98)));
  /* 10a92d94 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a92d96 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10a92d9a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10a92d9d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10a92da0:;
  /* 10a92da0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a92da4 je 0x10a92db1 */
  if (C.zf) goto L_10a92db1;
  /* 10a92da6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a92da9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a92dac mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a92daf jmp 0x10a92d67 */
  goto L_10a92d67;
L_10a92db1:;
  /* 10a92db1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a92db4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a92db6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a92db8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a92dbb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a92dbe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a92dc1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a92dc4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a92dc7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10a92dca cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a92dce je 0x10a92dd6 */
  if (C.zf) goto L_10a92dd6;
  /* 10a92dd0 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a92dd4 jne 0x10a92de9 */
  if (!C.zf) goto L_10a92de9;
L_10a92dd6:;
  /* 10a92dd6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a92dd9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a92ddb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a92ddd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a92de0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a92de3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a92de6 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10a92de9:;
  /* 10a92de9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10a92df0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10a92df7:;
  /* 10a92df7 cmp dword ptr [0x10aaeea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10aaeea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a92dfe jle 0x10a92e13 */
  if ((C.zf||C.sf!=C.of)) goto L_10a92e13;
  /* 10a92e00 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a92e02 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a92e05 push edx */
  push32((uint32_t)(EDX));
  /* 10a92e06 call 0x10a8a3a0 */
  push32(0x10a92e0bu); f_10a8a3a0();
  /* 10a92e0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a92e0e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10a92e11 jmp 0x10a92e28 */
  goto L_10a92e28;
L_10a92e13:;
  /* 10a92e13 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a92e16 mov ecx, dword ptr [0x10aaec98] */
  ECX = (r32((uint32_t)(0x10aaec98)));
  /* 10a92e1c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a92e1e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10a92e22 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10a92e25 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_10a92e28:;
  /* 10a92e28 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a92e2c je 0x10a92e69 */
  if (C.zf) goto L_10a92e69;
  /* 10a92e2e push 0 */
  push32((uint32_t)(0x0u));
  /* 10a92e30 push 0xa */
  push32((uint32_t)(0xau));
  /* 10a92e32 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a92e35 push eax */
  push32((uint32_t)(EAX));
  /* 10a92e36 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a92e39 push ecx */
  push32((uint32_t)(ECX));
  /* 10a92e3a call 0x10a93d00 */
  push32(0x10a92e3fu); f_10a93d00();
  /* 10a92e3f mov ecx, eax */
  ECX = (EAX);
  /* 10a92e41 mov esi, edx */
  ESI = (EDX);
  /* 10a92e43 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a92e46 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a92e49 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a92e4a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a92e4c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10a92e4e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a92e51 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 10a92e54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a92e57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a92e59 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a92e5b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a92e5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a92e61 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a92e64 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10a92e67 jmp 0x10a92df7 */
  goto L_10a92df7;
L_10a92e69:;
  /* 10a92e69 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a92e6d jne 0x10a92e7e */
  if (!C.zf) goto L_10a92e7e;
  /* 10a92e6f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a92e72 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a92e74 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a92e77 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a92e7a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a92e7c jmp 0x10a92e84 */
  goto L_10a92e84;
L_10a92e7e:;
  /* 10a92e7e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a92e81 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_10a92e84:;
  /* 10a92e84 pop esi */
  ESI = (pop32());
  /* 10a92e85 mov esp, ebp */
  ESP = (EBP);
  /* 10a92e87 pop ebp */
  EBP = (pop32());
  /* 10a92e88 ret  */
  ESPCHK(0x10a92d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10012e90 @ 0x10a92e90 (61 bytes, 18 insns) */
void f_10a92e90(void) {
  FTRACE(0x10a92e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a92e90 push ebp */
  push32((uint32_t)(EBP));
  /* 10a92e91 mov ebp, esp */
  EBP = (ESP);
  /* 10a92e93 cmp dword ptr [0x10ab0a08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab0a08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a92e9a jne 0x10a92ecb */
  if (!C.zf) goto L_10a92ecb;
  /* 10a92e9c push 0xb */
  push32((uint32_t)(0xbu));
  /* 10a92e9e call 0x10a87d90 */
  push32(0x10a92ea3u); f_10a87d90();
  /* 10a92ea3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a92ea6 cmp dword ptr [0x10ab0a08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab0a08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a92ead jne 0x10a92ec1 */
  if (!C.zf) goto L_10a92ec1;
  /* 10a92eaf call 0x10a92ef0 */
  push32(0x10a92eb4u); f_10a92ef0();
  /* 10a92eb4 mov eax, dword ptr [0x10ab0a08] */
  EAX = (r32((uint32_t)(0x10ab0a08)));
  /* 10a92eb9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a92ebc mov dword ptr [0x10ab0a08], eax */
  w32((uint32_t)(0x10ab0a08), (EAX));
L_10a92ec1:;
  /* 10a92ec1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10a92ec3 call 0x10a87e30 */
  push32(0x10a92ec8u); f_10a87e30();
  /* 10a92ec8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a92ecb:;
  /* 10a92ecb pop ebp */
  EBP = (pop32());
  /* 10a92ecc ret  */
  ESPCHK(0x10a92e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ed0 @ 0x10a92ed0 (30 bytes, 11 insns) */
void f_10a92ed0(void) {
  FTRACE(0x10a92ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a92ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a92ed1 mov ebp, esp */
  EBP = (ESP);
  /* 10a92ed3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10a92ed5 call 0x10a87d90 */
  push32(0x10a92edau); f_10a87d90();
  /* 10a92eda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a92edd call 0x10a92ef0 */
  push32(0x10a92ee2u); f_10a92ef0();
  /* 10a92ee2 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10a92ee4 call 0x10a87e30 */
  push32(0x10a92ee9u); f_10a87e30();
  /* 10a92ee9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a92eec pop ebp */
  EBP = (pop32());
  /* 10a92eed ret  */
  ESPCHK(0x10a92ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ef0 @ 0x10a92ef0 (939 bytes, 266 insns) */
void f_10a92ef0(void) {
  FTRACE(0x10a92ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a92ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a92ef1 mov ebp, esp */
  EBP = (ESP);
  /* 10a92ef3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a92ef6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a92efd push 0xc */
  push32((uint32_t)(0xcu));
  /* 10a92eff call 0x10a87d90 */
  push32(0x10a92f04u); f_10a87d90();
  /* 10a92f04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a92f07 mov dword ptr [0x10ab0950], 0 */
  w32((uint32_t)(0x10ab0950), (0x0u));
  /* 10a92f11 mov dword ptr [0x10aafe38], 0xffffffff */
  w32((uint32_t)(0x10aafe38), (0xffffffffu));
  /* 10a92f1b mov eax, dword ptr [0x10aafe38] */
  EAX = (r32((uint32_t)(0x10aafe38)));
  /* 10a92f20 mov dword ptr [0x10aafe28], eax */
  w32((uint32_t)(0x10aafe28), (EAX));
  /* 10a92f25 push 0x10aacc48 */
  push32((uint32_t)(0x10aacc48u));
  /* 10a92f2a call 0x10a93d70 */
  push32(0x10a92f2fu); f_10a93d70();
  /* 10a92f2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a92f32 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a92f35 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a92f39 jne 0x10a93073 */
  if (!C.zf) goto L_10a93073;
  /* 10a92f3f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10a92f41 call 0x10a87e30 */
  push32(0x10a92f46u); f_10a87e30();
  /* 10a92f46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a92f49 push 0x10ab0958 */
  push32((uint32_t)(0x10ab0958u));
  /* 10a92f4e call dword ptr [0x10ab32a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32a8))), 0x10a92f54u);
  /* 10a92f54 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a92f57 je 0x10a9306e */
  if (C.zf) goto L_10a9306e;
  /* 10a92f5d mov dword ptr [0x10ab0950], 1 */
  w32((uint32_t)(0x10ab0950), (0x1u));
  /* 10a92f67 mov ecx, dword ptr [0x10ab0958] */
  ECX = (r32((uint32_t)(0x10ab0958)));
  /* 10a92f6d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a92f70 mov dword ptr [0x10aafd90], ecx */
  w32((uint32_t)(0x10aafd90), (ECX));
  /* 10a92f76 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a92f78 mov dx, word ptr [0x10ab099e] */
  DX = (r16((uint32_t)(0x10ab099e)));
  /* 10a92f7f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a92f81 je 0x10a92f99 */
  if (C.zf) goto L_10a92f99;
  /* 10a92f83 mov eax, dword ptr [0x10ab09ac] */
  EAX = (r32((uint32_t)(0x10ab09ac)));
  /* 10a92f88 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a92f8b mov ecx, dword ptr [0x10aafd90] */
  ECX = (r32((uint32_t)(0x10aafd90)));
  /* 10a92f91 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a92f93 mov dword ptr [0x10aafd90], ecx */
  w32((uint32_t)(0x10aafd90), (ECX));
L_10a92f99:;
  /* 10a92f99 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a92f9b mov dx, word ptr [0x10ab09f2] */
  DX = (r16((uint32_t)(0x10ab09f2)));
  /* 10a92fa2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a92fa4 je 0x10a92fce */
  if (C.zf) goto L_10a92fce;
  /* 10a92fa6 cmp dword ptr [0x10ab0a00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab0a00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a92fad je 0x10a92fce */
  if (C.zf) goto L_10a92fce;
  /* 10a92faf mov dword ptr [0x10aafd94], 1 */
  w32((uint32_t)(0x10aafd94), (0x1u));
  /* 10a92fb9 mov eax, dword ptr [0x10ab0a00] */
  EAX = (r32((uint32_t)(0x10ab0a00)));
  /* 10a92fbe sub eax, dword ptr [0x10ab09ac] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10ab09ac))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a92fc4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a92fc7 mov dword ptr [0x10aafd98], eax */
  w32((uint32_t)(0x10aafd98), (EAX));
  /* 10a92fcc jmp 0x10a92fe2 */
  goto L_10a92fe2;
L_10a92fce:;
  /* 10a92fce mov dword ptr [0x10aafd94], 0 */
  w32((uint32_t)(0x10aafd94), (0x0u));
  /* 10a92fd8 mov dword ptr [0x10aafd98], 0 */
  w32((uint32_t)(0x10aafd98), (0x0u));
L_10a92fe2:;
  /* 10a92fe2 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10a92fe5 push ecx */
  push32((uint32_t)(ECX));
  /* 10a92fe6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a92fe8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10a92fea mov edx, dword ptr [0x10aafe1c] */
  EDX = (r32((uint32_t)(0x10aafe1c)));
  /* 10a92ff0 push edx */
  push32((uint32_t)(EDX));
  /* 10a92ff1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10a92ff3 push 0x10ab095c */
  push32((uint32_t)(0x10ab095cu));
  /* 10a92ff8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10a92ffd mov eax, dword ptr [0x10ab08c0] */
  EAX = (r32((uint32_t)(0x10ab08c0)));
  /* 10a93002 push eax */
  push32((uint32_t)(EAX));
  /* 10a93003 call dword ptr [0x10ab339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab339c))), 0x10a93009u);
  /* 10a93009 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a9300b je 0x10a9301f */
  if (C.zf) goto L_10a9301f;
  /* 10a9300d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a93011 jne 0x10a9301f */
  if (!C.zf) goto L_10a9301f;
  /* 10a93013 mov ecx, dword ptr [0x10aafe1c] */
  ECX = (r32((uint32_t)(0x10aafe1c)));
  /* 10a93019 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 10a9301d jmp 0x10a93028 */
  goto L_10a93028;
L_10a9301f:;
  /* 10a9301f mov edx, dword ptr [0x10aafe1c] */
  EDX = (r32((uint32_t)(0x10aafe1c)));
  /* 10a93025 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10a93028:;
  /* 10a93028 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10a9302b push eax */
  push32((uint32_t)(EAX));
  /* 10a9302c push 0 */
  push32((uint32_t)(0x0u));
  /* 10a9302e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10a93030 mov ecx, dword ptr [0x10aafe20] */
  ECX = (r32((uint32_t)(0x10aafe20)));
  /* 10a93036 push ecx */
  push32((uint32_t)(ECX));
  /* 10a93037 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10a93039 push 0x10ab09b0 */
  push32((uint32_t)(0x10ab09b0u));
  /* 10a9303e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10a93043 mov edx, dword ptr [0x10ab08c0] */
  EDX = (r32((uint32_t)(0x10ab08c0)));
  /* 10a93049 push edx */
  push32((uint32_t)(EDX));
  /* 10a9304a call dword ptr [0x10ab339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab339c))), 0x10a93050u);
  /* 10a93050 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a93052 je 0x10a93065 */
  if (C.zf) goto L_10a93065;
  /* 10a93054 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a93058 jne 0x10a93065 */
  if (!C.zf) goto L_10a93065;
  /* 10a9305a mov eax, dword ptr [0x10aafe20] */
  EAX = (r32((uint32_t)(0x10aafe20)));
  /* 10a9305f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 10a93063 jmp 0x10a9306e */
  goto L_10a9306e;
L_10a93065:;
  /* 10a93065 mov ecx, dword ptr [0x10aafe20] */
  ECX = (r32((uint32_t)(0x10aafe20)));
  /* 10a9306b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_10a9306e:;
  /* 10a9306e jmp 0x10a93297 */
  goto L_10a93297;
L_10a93073:;
  /* 10a93073 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a93076 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a93079 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a9307b je 0x10a9309d */
  if (C.zf) goto L_10a9309d;
  /* 10a9307d cmp dword ptr [0x10ab0a04], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab0a04))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a93084 je 0x10a930ac */
  if (C.zf) goto L_10a930ac;
  /* 10a93086 mov ecx, dword ptr [0x10ab0a04] */
  ECX = (r32((uint32_t)(0x10ab0a04)));
  /* 10a9308c push ecx */
  push32((uint32_t)(ECX));
  /* 10a9308d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a93090 push edx */
  push32((uint32_t)(EDX));
  /* 10a93091 call 0x10a90020 */
  push32(0x10a93096u); f_10a90020();
  /* 10a93096 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a93099 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a9309b jne 0x10a930ac */
  if (!C.zf) goto L_10a930ac;
L_10a9309d:;
  /* 10a9309d push 0xc */
  push32((uint32_t)(0xcu));
  /* 10a9309f call 0x10a87e30 */
  push32(0x10a930a4u); f_10a87e30();
  /* 10a930a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a930a7 jmp 0x10a93297 */
  goto L_10a93297;
L_10a930ac:;
  /* 10a930ac push 2 */
  push32((uint32_t)(0x2u));
  /* 10a930ae mov eax, dword ptr [0x10ab0a04] */
  EAX = (r32((uint32_t)(0x10ab0a04)));
  /* 10a930b3 push eax */
  push32((uint32_t)(EAX));
  /* 10a930b4 call 0x10a84e20 */
  push32(0x10a930b9u); f_10a84e20();
  /* 10a930b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a930bc push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 10a930c1 push 0x10aacc40 */
  push32((uint32_t)(0x10aacc40u));
  /* 10a930c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a930c8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a930cb push ecx */
  push32((uint32_t)(ECX));
  /* 10a930cc call 0x10a871c0 */
  push32(0x10a930d1u); f_10a871c0();
  /* 10a930d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a930d4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a930d7 push eax */
  push32((uint32_t)(EAX));
  /* 10a930d8 call 0x10a84390 */
  push32(0x10a930ddu); f_10a84390();
  /* 10a930dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a930e0 mov dword ptr [0x10ab0a04], eax */
  w32((uint32_t)(0x10ab0a04), (EAX));
  /* 10a930e5 cmp dword ptr [0x10ab0a04], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab0a04))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a930ec jne 0x10a930fd */
  if (!C.zf) goto L_10a930fd;
  /* 10a930ee push 0xc */
  push32((uint32_t)(0xcu));
  /* 10a930f0 call 0x10a87e30 */
  push32(0x10a930f5u); f_10a87e30();
  /* 10a930f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a930f8 jmp 0x10a93297 */
  goto L_10a93297;
L_10a930fd:;
  /* 10a930fd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a93100 push edx */
  push32((uint32_t)(EDX));
  /* 10a93101 mov eax, dword ptr [0x10ab0a04] */
  EAX = (r32((uint32_t)(0x10ab0a04)));
  /* 10a93106 push eax */
  push32((uint32_t)(EAX));
  /* 10a93107 call 0x10a87340 */
  push32(0x10a9310cu); f_10a87340();
  /* 10a9310c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a9310f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10a93111 call 0x10a87e30 */
  push32(0x10a93116u); f_10a87e30();
  /* 10a93116 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a93119 push 3 */
  push32((uint32_t)(0x3u));
  /* 10a9311b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a9311e push ecx */
  push32((uint32_t)(ECX));
  /* 10a9311f mov edx, dword ptr [0x10aafe1c] */
  EDX = (r32((uint32_t)(0x10aafe1c)));
  /* 10a93125 push edx */
  push32((uint32_t)(EDX));
  /* 10a93126 call 0x10a87bb0 */
  push32(0x10a9312bu); f_10a87bb0();
  /* 10a9312b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a9312e mov eax, dword ptr [0x10aafe1c] */
  EAX = (r32((uint32_t)(0x10aafe1c)));
  /* 10a93133 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 10a93137 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a9313a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a9313d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a93140 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a93143 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a93146 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a93149 jne 0x10a9315d */
  if (!C.zf) goto L_10a9315d;
  /* 10a9314b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a9314e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a93151 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a93154 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a93157 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a9315a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10a9315d:;
  /* 10a9315d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a93160 push eax */
  push32((uint32_t)(EAX));
  /* 10a93161 call 0x10a92c40 */
  push32(0x10a93166u); f_10a92c40();
  /* 10a93166 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a93169 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a9316f mov dword ptr [0x10aafd90], eax */
  w32((uint32_t)(0x10aafd90), (EAX));
L_10a93174:;
  /* 10a93174 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a93177 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a9317a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a9317d je 0x10a93195 */
  if (C.zf) goto L_10a93195;
  /* 10a9317f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a93182 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a93185 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a93188 jl 0x10a931a0 */
  if ((C.sf!=C.of)) goto L_10a931a0;
  /* 10a9318a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a9318d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a93190 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a93193 jg 0x10a931a0 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a931a0;
L_10a93195:;
  /* 10a93195 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a93198 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a9319b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a9319e jmp 0x10a93174 */
  goto L_10a93174;
L_10a931a0:;
  /* 10a931a0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a931a3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a931a6 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a931a9 jne 0x10a93245 */
  if (!C.zf) goto L_10a93245;
  /* 10a931af mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a931b2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a931b5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a931b8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a931bb push edx */
  push32((uint32_t)(EDX));
  /* 10a931bc call 0x10a92c40 */
  push32(0x10a931c1u); f_10a92c40();
  /* 10a931c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a931c4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a931c7 mov ecx, dword ptr [0x10aafd90] */
  ECX = (r32((uint32_t)(0x10aafd90)));
  /* 10a931cd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a931cf mov dword ptr [0x10aafd90], ecx */
  w32((uint32_t)(0x10aafd90), (ECX));
L_10a931d5:;
  /* 10a931d5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a931d8 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a931db cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a931de jl 0x10a931f6 */
  if ((C.sf!=C.of)) goto L_10a931f6;
  /* 10a931e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a931e3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a931e6 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a931e9 jg 0x10a931f6 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a931f6;
  /* 10a931eb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a931ee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a931f1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a931f4 jmp 0x10a931d5 */
  goto L_10a931d5;
L_10a931f6:;
  /* 10a931f6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a931f9 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a931fc cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a931ff jne 0x10a93245 */
  if (!C.zf) goto L_10a93245;
  /* 10a93201 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a93204 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a93207 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a9320a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a9320d push ecx */
  push32((uint32_t)(ECX));
  /* 10a9320e call 0x10a92c40 */
  push32(0x10a93213u); f_10a92c40();
  /* 10a93213 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a93216 mov edx, dword ptr [0x10aafd90] */
  EDX = (r32((uint32_t)(0x10aafd90)));
  /* 10a9321c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a9321e mov dword ptr [0x10aafd90], edx */
  w32((uint32_t)(0x10aafd90), (EDX));
L_10a93224:;
  /* 10a93224 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a93227 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a9322a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a9322d jl 0x10a93245 */
  if ((C.sf!=C.of)) goto L_10a93245;
  /* 10a9322f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a93232 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a93235 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a93238 jg 0x10a93245 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a93245;
  /* 10a9323a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a9323d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a93240 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a93243 jmp 0x10a93224 */
  goto L_10a93224;
L_10a93245:;
  /* 10a93245 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a93249 je 0x10a93259 */
  if (C.zf) goto L_10a93259;
  /* 10a9324b mov edx, dword ptr [0x10aafd90] */
  EDX = (r32((uint32_t)(0x10aafd90)));
  /* 10a93251 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a93253 mov dword ptr [0x10aafd90], edx */
  w32((uint32_t)(0x10aafd90), (EDX));
L_10a93259:;
  /* 10a93259 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a9325c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a9325f mov dword ptr [0x10aafd94], ecx */
  w32((uint32_t)(0x10aafd94), (ECX));
  /* 10a93265 cmp dword ptr [0x10aafd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aafd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a9326c je 0x10a9328e */
  if (C.zf) goto L_10a9328e;
  /* 10a9326e push 3 */
  push32((uint32_t)(0x3u));
  /* 10a93270 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a93273 push edx */
  push32((uint32_t)(EDX));
  /* 10a93274 mov eax, dword ptr [0x10aafe20] */
  EAX = (r32((uint32_t)(0x10aafe20)));
  /* 10a93279 push eax */
  push32((uint32_t)(EAX));
  /* 10a9327a call 0x10a87bb0 */
  push32(0x10a9327fu); f_10a87bb0();
  /* 10a9327f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a93282 mov ecx, dword ptr [0x10aafe20] */
  ECX = (r32((uint32_t)(0x10aafe20)));
  /* 10a93288 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 10a9328c jmp 0x10a93297 */
  goto L_10a93297;
L_10a9328e:;
  /* 10a9328e mov edx, dword ptr [0x10aafe20] */
  EDX = (r32((uint32_t)(0x10aafe20)));
  /* 10a93294 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10a93297:;
  /* 10a93297 mov esp, ebp */
  ESP = (EBP);
  /* 10a93299 pop ebp */
  EBP = (pop32());
  /* 10a9329a ret  */
  ESPCHK(0x10a92ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_100132a0 @ 0x10a932a0 (46 bytes, 18 insns) */
void f_10a932a0(void) {
  FTRACE(0x10a932a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a932a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a932a1 mov ebp, esp */
  EBP = (ESP);
  /* 10a932a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a932a4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10a932a6 call 0x10a87d90 */
  push32(0x10a932abu); f_10a87d90();
  /* 10a932ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a932ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a932b1 push eax */
  push32((uint32_t)(EAX));
  /* 10a932b2 call 0x10a932d0 */
  push32(0x10a932b7u); f_10a932d0();
  /* 10a932b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a932ba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a932bd push 0xb */
  push32((uint32_t)(0xbu));
  /* 10a932bf call 0x10a87e30 */
  push32(0x10a932c4u); f_10a87e30();
  /* 10a932c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a932c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a932ca mov esp, ebp */
  ESP = (EBP);
  /* 10a932cc pop ebp */
  EBP = (pop32());
  /* 10a932cd ret  */
  ESPCHK(0x10a932a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100132d0 @ 0x10a932d0 (762 bytes, 246 insns) */
void f_10a932d0(void) {
  FTRACE(0x10a932d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a932d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a932d1 mov ebp, esp */
  EBP = (ESP);
  /* 10a932d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a932d4 cmp dword ptr [0x10aafd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aafd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a932db jne 0x10a932e4 */
  if (!C.zf) goto L_10a932e4;
  /* 10a932dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a932df jmp 0x10a935c6 */
  goto L_10a935c6;
L_10a932e4:;
  /* 10a932e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a932e7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10a932ea cmp ecx, dword ptr [0x10aafe28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10aafe28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a932f0 jne 0x10a93304 */
  if (!C.zf) goto L_10a93304;
  /* 10a932f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a932f5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a932f8 cmp eax, dword ptr [0x10aafe38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10aafe38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a932fe je 0x10a934cb */
  if (C.zf) goto L_10a934cb;
L_10a93304:;
  /* 10a93304 cmp dword ptr [0x10ab0950], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab0950))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a9330b je 0x10a93485 */
  if (C.zf) goto L_10a93485;
  /* 10a93311 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a93313 mov cx, word ptr [0x10ab09f0] */
  CX = (r16((uint32_t)(0x10ab09f0)));
  /* 10a9331a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a9331c jne 0x10a93379 */
  if (!C.zf) goto L_10a93379;
  /* 10a9331e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a93320 mov dx, word ptr [0x10ab09fe] */
  DX = (r16((uint32_t)(0x10ab09fe)));
  /* 10a93327 push edx */
  push32((uint32_t)(EDX));
  /* 10a93328 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a9332a mov ax, word ptr [0x10ab09fc] */
  AX = (r16((uint32_t)(0x10ab09fc)));
  /* 10a93330 push eax */
  push32((uint32_t)(EAX));
  /* 10a93331 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a93333 mov cx, word ptr [0x10ab09fa] */
  CX = (r16((uint32_t)(0x10ab09fa)));
  /* 10a9333a push ecx */
  push32((uint32_t)(ECX));
  /* 10a9333b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a9333d mov dx, word ptr [0x10ab09f8] */
  DX = (r16((uint32_t)(0x10ab09f8)));
  /* 10a93344 push edx */
  push32((uint32_t)(EDX));
  /* 10a93345 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a93347 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a93349 mov ax, word ptr [0x10ab09f4] */
  AX = (r16((uint32_t)(0x10ab09f4)));
  /* 10a9334f push eax */
  push32((uint32_t)(EAX));
  /* 10a93350 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a93352 mov cx, word ptr [0x10ab09f6] */
  CX = (r16((uint32_t)(0x10ab09f6)));
  /* 10a93359 push ecx */
  push32((uint32_t)(ECX));
  /* 10a9335a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a9335c mov dx, word ptr [0x10ab09f2] */
  DX = (r16((uint32_t)(0x10ab09f2)));
  /* 10a93363 push edx */
  push32((uint32_t)(EDX));
  /* 10a93364 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a93367 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10a9336a push ecx */
  push32((uint32_t)(ECX));
  /* 10a9336b push 1 */
  push32((uint32_t)(0x1u));
  /* 10a9336d push 1 */
  push32((uint32_t)(0x1u));
  /* 10a9336f call 0x10a935d0 */
  push32(0x10a93374u); f_10a935d0();
  /* 10a93374 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a93377 jmp 0x10a933ca */
  goto L_10a933ca;
L_10a93379:;
  /* 10a93379 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a9337b mov dx, word ptr [0x10ab09fe] */
  DX = (r16((uint32_t)(0x10ab09fe)));
  /* 10a93382 push edx */
  push32((uint32_t)(EDX));
  /* 10a93383 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a93385 mov ax, word ptr [0x10ab09fc] */
  AX = (r16((uint32_t)(0x10ab09fc)));
  /* 10a9338b push eax */
  push32((uint32_t)(EAX));
  /* 10a9338c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a9338e mov cx, word ptr [0x10ab09fa] */
  CX = (r16((uint32_t)(0x10ab09fa)));
  /* 10a93395 push ecx */
  push32((uint32_t)(ECX));
  /* 10a93396 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a93398 mov dx, word ptr [0x10ab09f8] */
  DX = (r16((uint32_t)(0x10ab09f8)));
  /* 10a9339f push edx */
  push32((uint32_t)(EDX));
  /* 10a933a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a933a2 mov ax, word ptr [0x10ab09f6] */
  AX = (r16((uint32_t)(0x10ab09f6)));
  /* 10a933a8 push eax */
  push32((uint32_t)(EAX));
  /* 10a933a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a933ab push 0 */
  push32((uint32_t)(0x0u));
  /* 10a933ad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a933af mov cx, word ptr [0x10ab09f2] */
  CX = (r16((uint32_t)(0x10ab09f2)));
  /* 10a933b6 push ecx */
  push32((uint32_t)(ECX));
  /* 10a933b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a933ba mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a933bd push eax */
  push32((uint32_t)(EAX));
  /* 10a933be push 0 */
  push32((uint32_t)(0x0u));
  /* 10a933c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a933c2 call 0x10a935d0 */
  push32(0x10a933c7u); f_10a935d0();
  /* 10a933c7 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a933ca:;
  /* 10a933ca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a933cc mov cx, word ptr [0x10ab099c] */
  CX = (r16((uint32_t)(0x10ab099c)));
  /* 10a933d3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a933d5 jne 0x10a93432 */
  if (!C.zf) goto L_10a93432;
  /* 10a933d7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a933d9 mov dx, word ptr [0x10ab09aa] */
  DX = (r16((uint32_t)(0x10ab09aa)));
  /* 10a933e0 push edx */
  push32((uint32_t)(EDX));
  /* 10a933e1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a933e3 mov ax, word ptr [0x10ab09a8] */
  AX = (r16((uint32_t)(0x10ab09a8)));
  /* 10a933e9 push eax */
  push32((uint32_t)(EAX));
  /* 10a933ea xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a933ec mov cx, word ptr [0x10ab09a6] */
  CX = (r16((uint32_t)(0x10ab09a6)));
  /* 10a933f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a933f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a933f6 mov dx, word ptr [0x10ab09a4] */
  DX = (r16((uint32_t)(0x10ab09a4)));
  /* 10a933fd push edx */
  push32((uint32_t)(EDX));
  /* 10a933fe push 0 */
  push32((uint32_t)(0x0u));
  /* 10a93400 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a93402 mov ax, word ptr [0x10ab09a0] */
  AX = (r16((uint32_t)(0x10ab09a0)));
  /* 10a93408 push eax */
  push32((uint32_t)(EAX));
  /* 10a93409 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a9340b mov cx, word ptr [0x10ab09a2] */
  CX = (r16((uint32_t)(0x10ab09a2)));
  /* 10a93412 push ecx */
  push32((uint32_t)(ECX));
  /* 10a93413 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a93415 mov dx, word ptr [0x10ab099e] */
  DX = (r16((uint32_t)(0x10ab099e)));
  /* 10a9341c push edx */
  push32((uint32_t)(EDX));
  /* 10a9341d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a93420 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10a93423 push ecx */
  push32((uint32_t)(ECX));
  /* 10a93424 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a93426 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a93428 call 0x10a935d0 */
  push32(0x10a9342du); f_10a935d0();
  /* 10a9342d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a93430 jmp 0x10a93483 */
  goto L_10a93483;
L_10a93432:;
  /* 10a93432 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a93434 mov dx, word ptr [0x10ab09aa] */
  DX = (r16((uint32_t)(0x10ab09aa)));
  /* 10a9343b push edx */
  push32((uint32_t)(EDX));
  /* 10a9343c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a9343e mov ax, word ptr [0x10ab09a8] */
  AX = (r16((uint32_t)(0x10ab09a8)));
  /* 10a93444 push eax */
  push32((uint32_t)(EAX));
  /* 10a93445 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a93447 mov cx, word ptr [0x10ab09a6] */
  CX = (r16((uint32_t)(0x10ab09a6)));
  /* 10a9344e push ecx */
  push32((uint32_t)(ECX));
  /* 10a9344f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a93451 mov dx, word ptr [0x10ab09a4] */
  DX = (r16((uint32_t)(0x10ab09a4)));
  /* 10a93458 push edx */
  push32((uint32_t)(EDX));
  /* 10a93459 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a9345b mov ax, word ptr [0x10ab09a2] */
  AX = (r16((uint32_t)(0x10ab09a2)));
  /* 10a93461 push eax */
  push32((uint32_t)(EAX));
  /* 10a93462 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a93464 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a93466 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a93468 mov cx, word ptr [0x10ab099e] */
  CX = (r16((uint32_t)(0x10ab099e)));
  /* 10a9346f push ecx */
  push32((uint32_t)(ECX));
  /* 10a93470 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a93473 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a93476 push eax */
  push32((uint32_t)(EAX));
  /* 10a93477 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a93479 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a9347b call 0x10a935d0 */
  push32(0x10a93480u); f_10a935d0();
  /* 10a93480 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a93483:;
  /* 10a93483 jmp 0x10a934cb */
  goto L_10a934cb;
L_10a93485:;
  /* 10a93485 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a93487 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a93489 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a9348b push 2 */
  push32((uint32_t)(0x2u));
  /* 10a9348d push 0 */
  push32((uint32_t)(0x0u));
  /* 10a9348f push 0 */
  push32((uint32_t)(0x0u));
  /* 10a93491 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a93493 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a93495 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a93498 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10a9349b push edx */
  push32((uint32_t)(EDX));
  /* 10a9349c push 1 */
  push32((uint32_t)(0x1u));
  /* 10a9349e push 1 */
  push32((uint32_t)(0x1u));
  /* 10a934a0 call 0x10a935d0 */
  push32(0x10a934a5u); f_10a935d0();
  /* 10a934a5 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a934a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a934aa push 0 */
  push32((uint32_t)(0x0u));
  /* 10a934ac push 0 */
  push32((uint32_t)(0x0u));
  /* 10a934ae push 2 */
  push32((uint32_t)(0x2u));
  /* 10a934b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a934b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a934b4 push 5 */
  push32((uint32_t)(0x5u));
  /* 10a934b6 push 0xa */
  push32((uint32_t)(0xau));
  /* 10a934b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a934bb mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10a934be push ecx */
  push32((uint32_t)(ECX));
  /* 10a934bf push 1 */
  push32((uint32_t)(0x1u));
  /* 10a934c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a934c3 call 0x10a935d0 */
  push32(0x10a934c8u); f_10a935d0();
  /* 10a934c8 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a934cb:;
  /* 10a934cb mov edx, dword ptr [0x10aafe2c] */
  EDX = (r32((uint32_t)(0x10aafe2c)));
  /* 10a934d1 cmp edx, dword ptr [0x10aafe3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10aafe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a934d7 jge 0x10a93524 */
  if ((C.sf==C.of)) goto L_10a93524;
  /* 10a934d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a934dc mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10a934df cmp ecx, dword ptr [0x10aafe2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10aafe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a934e5 jl 0x10a934f5 */
  if ((C.sf!=C.of)) goto L_10a934f5;
  /* 10a934e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a934ea mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10a934ed cmp eax, dword ptr [0x10aafe3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10aafe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a934f3 jle 0x10a934fc */
  if ((C.zf||C.sf!=C.of)) goto L_10a934fc;
L_10a934f5:;
  /* 10a934f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a934f7 jmp 0x10a935c6 */
  goto L_10a935c6;
L_10a934fc:;
  /* 10a934fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a934ff mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10a93502 cmp edx, dword ptr [0x10aafe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10aafe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a93508 jle 0x10a93522 */
  if ((C.zf||C.sf!=C.of)) goto L_10a93522;
  /* 10a9350a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a9350d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10a93510 cmp ecx, dword ptr [0x10aafe3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10aafe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a93516 jge 0x10a93522 */
  if ((C.sf==C.of)) goto L_10a93522;
  /* 10a93518 mov eax, 1 */
  EAX = (0x1u);
  /* 10a9351d jmp 0x10a935c6 */
  goto L_10a935c6;
L_10a93522:;
  /* 10a93522 jmp 0x10a93567 */
  goto L_10a93567;
L_10a93524:;
  /* 10a93524 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a93527 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10a9352a cmp eax, dword ptr [0x10aafe3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10aafe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a93530 jl 0x10a93540 */
  if ((C.sf!=C.of)) goto L_10a93540;
  /* 10a93532 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a93535 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10a93538 cmp edx, dword ptr [0x10aafe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10aafe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a9353e jle 0x10a93547 */
  if ((C.zf||C.sf!=C.of)) goto L_10a93547;
L_10a93540:;
  /* 10a93540 mov eax, 1 */
  EAX = (0x1u);
  /* 10a93545 jmp 0x10a935c6 */
  goto L_10a935c6;
L_10a93547:;
  /* 10a93547 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a9354a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10a9354d cmp ecx, dword ptr [0x10aafe3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10aafe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a93553 jle 0x10a93567 */
  if ((C.zf||C.sf!=C.of)) goto L_10a93567;
  /* 10a93555 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a93558 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10a9355b cmp eax, dword ptr [0x10aafe2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10aafe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a93561 jge 0x10a93567 */
  if ((C.sf==C.of)) goto L_10a93567;
  /* 10a93563 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a93565 jmp 0x10a935c6 */
  goto L_10a935c6;
L_10a93567:;
  /* 10a93567 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a9356a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a9356d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a93570 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a93573 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a93575 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a93577 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a9357a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10a9357d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a93583 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a93585 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a9358b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a9358e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a93591 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10a93594 cmp edx, dword ptr [0x10aafe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10aafe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a9359a jne 0x10a935b2 */
  if (!C.zf) goto L_10a935b2;
  /* 10a9359c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a9359f cmp eax, dword ptr [0x10aafe30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10aafe30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a935a5 jl 0x10a935ae */
  if ((C.sf!=C.of)) goto L_10a935ae;
  /* 10a935a7 mov eax, 1 */
  EAX = (0x1u);
  /* 10a935ac jmp 0x10a935c6 */
  goto L_10a935c6;
L_10a935ae:;
  /* 10a935ae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a935b0 jmp 0x10a935c6 */
  goto L_10a935c6;
L_10a935b2:;
  /* 10a935b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a935b5 cmp ecx, dword ptr [0x10aafe40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10aafe40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a935bb jge 0x10a935c4 */
  if ((C.sf==C.of)) goto L_10a935c4;
  /* 10a935bd mov eax, 1 */
  EAX = (0x1u);
  /* 10a935c2 jmp 0x10a935c6 */
  goto L_10a935c6;
L_10a935c4:;
  /* 10a935c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a935c6:;
  /* 10a935c6 mov esp, ebp */
  ESP = (EBP);
  /* 10a935c8 pop ebp */
  EBP = (pop32());
  /* 10a935c9 ret  */
  ESPCHK(0x10a932d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100135d0 @ 0x10a935d0 (504 bytes, 145 insns) */
void f_10a935d0(void) {
  FTRACE(0x10a935d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a935d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a935d1 mov ebp, esp */
  EBP = (ESP);
  /* 10a935d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a935d6 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a935da jne 0x10a936ac */
  if (!C.zf) goto L_10a936ac;
  /* 10a935e0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a935e3 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10a935e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a935e8 jne 0x10a935f9 */
  if (!C.zf) goto L_10a935f9;
  /* 10a935ea mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a935ed mov edx, dword ptr [ecx*4 + 0x10aafe4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10aafe4c)));
  /* 10a935f4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10a935f7 jmp 0x10a93606 */
  goto L_10a93606;
L_10a935f9:;
  /* 10a935f9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a935fc mov ecx, dword ptr [eax*4 + 0x10aafe80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10aafe80)));
  /* 10a93603 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10a93606:;
  /* 10a93606 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a93609 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a9360c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10a9360f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a93612 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a93615 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a9361b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a9361e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a93620 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a93623 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a93626 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10a93629 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 10a9362d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a9362e mov ecx, 7 */
  ECX = (0x7u);
  /* 10a93633 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a93635 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a93638 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a9363b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a9363e jge 0x10a93659 */
  if ((C.sf==C.of)) goto L_10a93659;
  /* 10a93640 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10a93643 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a93646 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a93649 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a9364c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a9364f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a93652 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a93654 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a93657 jmp 0x10a9366d */
  goto L_10a9366d;
L_10a93659:;
  /* 10a93659 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10a9365c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a9365f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a93662 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a93665 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a93668 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a9366a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10a9366d:;
  /* 10a9366d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a93671 jne 0x10a936aa */
  if (!C.zf) goto L_10a936aa;
  /* 10a93673 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a93676 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10a93679 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a9367b jne 0x10a9368c */
  if (!C.zf) goto L_10a9368c;
  /* 10a9367d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a93680 mov eax, dword ptr [edx*4 + 0x10aafe50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10aafe50)));
  /* 10a93687 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10a9368a jmp 0x10a93699 */
  goto L_10a93699;
L_10a9368c:;
  /* 10a9368c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a9368f mov edx, dword ptr [ecx*4 + 0x10aafe84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10aafe84)));
  /* 10a93696 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10a93699:;
  /* 10a93699 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a9369c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a9369f jle 0x10a936aa */
  if ((C.zf||C.sf!=C.of)) goto L_10a936aa;
  /* 10a936a1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a936a4 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a936a7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10a936aa:;
  /* 10a936aa jmp 0x10a936e1 */
  goto L_10a936e1;
L_10a936ac:;
  /* 10a936ac mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a936af and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10a936b2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a936b4 jne 0x10a936c5 */
  if (!C.zf) goto L_10a936c5;
  /* 10a936b6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a936b9 mov ecx, dword ptr [eax*4 + 0x10aafe4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10aafe4c)));
  /* 10a936c0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10a936c3 jmp 0x10a936d2 */
  goto L_10a936d2;
L_10a936c5:;
  /* 10a936c5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a936c8 mov eax, dword ptr [edx*4 + 0x10aafe80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10aafe80)));
  /* 10a936cf mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10a936d2:;
  /* 10a936d2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a936d5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a936d8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a936db add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a936de mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10a936e1:;
  /* 10a936e1 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a936e5 jne 0x10a93721 */
  if (!C.zf) goto L_10a93721;
  /* 10a936e7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a936ea mov dword ptr [0x10aafe2c], eax */
  w32((uint32_t)(0x10aafe2c), (EAX));
  /* 10a936ef mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10a936f2 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a936f5 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10a936f8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a936fa imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a936fd mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10a93700 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a93702 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a93708 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10a9370b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a9370d mov dword ptr [0x10aafe30], ecx */
  w32((uint32_t)(0x10aafe30), (ECX));
  /* 10a93713 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a93716 mov dword ptr [0x10aafe28], edx */
  w32((uint32_t)(0x10aafe28), (EDX));
  /* 10a9371c jmp 0x10a937c4 */
  goto L_10a937c4;
L_10a93721:;
  /* 10a93721 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a93724 mov dword ptr [0x10aafe3c], eax */
  w32((uint32_t)(0x10aafe3c), (EAX));
  /* 10a93729 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10a9372c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a9372f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10a93732 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a93734 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a93737 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10a9373a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a9373c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a93742 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10a93745 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a93747 mov dword ptr [0x10aafe40], ecx */
  w32((uint32_t)(0x10aafe40), (ECX));
  /* 10a9374d mov edx, dword ptr [0x10aafd98] */
  EDX = (r32((uint32_t)(0x10aafd98)));
  /* 10a93753 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a93759 mov eax, dword ptr [0x10aafe40] */
  EAX = (r32((uint32_t)(0x10aafe40)));
  /* 10a9375e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a93760 mov dword ptr [0x10aafe40], eax */
  w32((uint32_t)(0x10aafe40), (EAX));
  /* 10a93765 cmp dword ptr [0x10aafe40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aafe40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a9376c jge 0x10a93791 */
  if ((C.sf==C.of)) goto L_10a93791;
  /* 10a9376e mov ecx, dword ptr [0x10aafe40] */
  ECX = (r32((uint32_t)(0x10aafe40)));
  /* 10a93774 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a9377a mov dword ptr [0x10aafe40], ecx */
  w32((uint32_t)(0x10aafe40), (ECX));
  /* 10a93780 mov edx, dword ptr [0x10aafe3c] */
  EDX = (r32((uint32_t)(0x10aafe3c)));
  /* 10a93786 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a93789 mov dword ptr [0x10aafe3c], edx */
  w32((uint32_t)(0x10aafe3c), (EDX));
  /* 10a9378f jmp 0x10a937bb */
  goto L_10a937bb;
L_10a93791:;
  /* 10a93791 cmp dword ptr [0x10aafe40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x10aafe40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a9379b jl 0x10a937bb */
  if ((C.sf!=C.of)) goto L_10a937bb;
  /* 10a9379d mov eax, dword ptr [0x10aafe40] */
  EAX = (r32((uint32_t)(0x10aafe40)));
  /* 10a937a2 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a937a7 mov dword ptr [0x10aafe40], eax */
  w32((uint32_t)(0x10aafe40), (EAX));
  /* 10a937ac mov ecx, dword ptr [0x10aafe3c] */
  ECX = (r32((uint32_t)(0x10aafe3c)));
  /* 10a937b2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a937b5 mov dword ptr [0x10aafe3c], ecx */
  w32((uint32_t)(0x10aafe3c), (ECX));
L_10a937bb:;
  /* 10a937bb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a937be mov dword ptr [0x10aafe38], edx */
  w32((uint32_t)(0x10aafe38), (EDX));
L_10a937c4:;
  /* 10a937c4 mov esp, ebp */
  ESP = (EBP);
  /* 10a937c6 pop ebp */
  EBP = (pop32());
  /* 10a937c7 ret  */
  ESPCHK(0x10a935d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100137d0 @ 0x10a937d0 (382 bytes, 135 insns) */
void f_10a937d0(void) {
  FTRACE(0x10a937d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a937d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a937d1 mov ebp, esp */
  EBP = (ESP);
  /* 10a937d3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10a937d5 push 0x10aacc50 */
  push32((uint32_t)(0x10aacc50u));
  /* 10a937da push 0x10a8d498 */
  push32((uint32_t)(0x10a8d498u));
  /* 10a937df mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10a937e5 push eax */
  push32((uint32_t)(EAX));
  /* 10a937e6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10a937ed add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a937f0 push ebx */
  push32((uint32_t)(EBX));
  /* 10a937f1 push esi */
  push32((uint32_t)(ESI));
  /* 10a937f2 push edi */
  push32((uint32_t)(EDI));
  /* 10a937f3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10a937f6 cmp dword ptr [0x10ab0a0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab0a0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a937fd jne 0x10a93842 */
  if (!C.zf) goto L_10a93842;
  /* 10a937ff push 0 */
  push32((uint32_t)(0x0u));
  /* 10a93801 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a93803 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a93805 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a93807 call dword ptr [0x10ab32a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32a4))), 0x10a9380du);
  /* 10a9380d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a9380f je 0x10a9381d */
  if (C.zf) goto L_10a9381d;
  /* 10a93811 mov dword ptr [0x10ab0a0c], 1 */
  w32((uint32_t)(0x10ab0a0c), (0x1u));
  /* 10a9381b jmp 0x10a93842 */
  goto L_10a93842;
L_10a9381d:;
  /* 10a9381d push 0 */
  push32((uint32_t)(0x0u));
  /* 10a9381f push 0 */
  push32((uint32_t)(0x0u));
  /* 10a93821 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a93823 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a93825 call dword ptr [0x10ab32bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32bc))), 0x10a9382bu);
  /* 10a9382b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a9382d je 0x10a9383b */
  if (C.zf) goto L_10a9383b;
  /* 10a9382f mov dword ptr [0x10ab0a0c], 2 */
  w32((uint32_t)(0x10ab0a0c), (0x2u));
  /* 10a93839 jmp 0x10a93842 */
  goto L_10a93842;
L_10a9383b:;
  /* 10a9383b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a9383d jmp 0x10a93951 */
  goto L_10a93951;
L_10a93842:;
  /* 10a93842 cmp dword ptr [0x10ab0a0c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10ab0a0c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a93849 jne 0x10a93866 */
  if (!C.zf) goto L_10a93866;
  /* 10a9384b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a9384e push eax */
  push32((uint32_t)(EAX));
  /* 10a9384f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a93852 push ecx */
  push32((uint32_t)(ECX));
  /* 10a93853 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a93856 push edx */
  push32((uint32_t)(EDX));
  /* 10a93857 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a9385a push eax */
  push32((uint32_t)(EAX));
  /* 10a9385b call dword ptr [0x10ab32a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32a4))), 0x10a93861u);
  /* 10a93861 jmp 0x10a93951 */
  goto L_10a93951;
L_10a93866:;
  /* 10a93866 cmp dword ptr [0x10ab0a0c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10ab0a0c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a9386d jne 0x10a9394f */
  if (!C.zf) goto L_10a9394f;
  /* 10a93873 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a93877 jne 0x10a93882 */
  if (!C.zf) goto L_10a93882;
  /* 10a93879 mov ecx, dword ptr [0x10ab08c0] */
  ECX = (r32((uint32_t)(0x10ab08c0)));
  /* 10a9387f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10a93882:;
  /* 10a93882 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a93884 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a93886 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a93889 push edx */
  push32((uint32_t)(EDX));
  /* 10a9388a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a9388d push eax */
  push32((uint32_t)(EAX));
  /* 10a9388e call dword ptr [0x10ab32bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32bc))), 0x10a93894u);
  /* 10a93894 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10a93897 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a9389b jne 0x10a938a4 */
  if (!C.zf) goto L_10a938a4;
  /* 10a9389d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a9389f jmp 0x10a93951 */
  goto L_10a93951;
L_10a938a4:;
  /* 10a938a4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a938ab mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a938ae add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a938b1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10a938b3 call 0x10a87530 */
  push32(0x10a938b8u); f_10a87530();
  /* 10a938b8 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 10a938bb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10a938be mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a938c1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10a938c4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10a938cb jmp 0x10a938e4 */
  goto L_10a938e4;
  /* 10a938cd mov eax, 1 */
  EAX = (0x1u);
  /* 10a938d2 ret  */
  ESPCHK(0x10a937d0u, _esp0);
  ESP += 4; return;
  /* 10a938d3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10a938d6 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10a938dd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10a938e4:;
  /* 10a938e4 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a938e8 jne 0x10a938ee */
  if (!C.zf) goto L_10a938ee;
  /* 10a938ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a938ec jmp 0x10a93951 */
  goto L_10a93951;
L_10a938ee:;
  /* 10a938ee mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a938f1 push edx */
  push32((uint32_t)(EDX));
  /* 10a938f2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a938f5 push eax */
  push32((uint32_t)(EAX));
  /* 10a938f6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a938f9 push ecx */
  push32((uint32_t)(ECX));
  /* 10a938fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a938fd push edx */
  push32((uint32_t)(EDX));
  /* 10a938fe call dword ptr [0x10ab32bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32bc))), 0x10a93904u);
  /* 10a93904 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a93906 jne 0x10a9390c */
  if (!C.zf) goto L_10a9390c;
  /* 10a93908 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a9390a jmp 0x10a93951 */
  goto L_10a93951;
L_10a9390c:;
  /* 10a9390c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a93910 jne 0x10a9392d */
  if (!C.zf) goto L_10a9392d;
  /* 10a93912 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a93914 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a93916 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10a93918 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a9391b push eax */
  push32((uint32_t)(EAX));
  /* 10a9391c push 1 */
  push32((uint32_t)(0x1u));
  /* 10a9391e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a93921 push ecx */
  push32((uint32_t)(ECX));
  /* 10a93922 call dword ptr [0x10ab32ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32ec))), 0x10a93928u);
  /* 10a93928 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10a9392b jmp 0x10a9394a */
  goto L_10a9394a;
L_10a9392d:;
  /* 10a9392d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a93930 push edx */
  push32((uint32_t)(EDX));
  /* 10a93931 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a93934 push eax */
  push32((uint32_t)(EAX));
  /* 10a93935 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10a93937 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a9393a push ecx */
  push32((uint32_t)(ECX));
  /* 10a9393b push 1 */
  push32((uint32_t)(0x1u));
  /* 10a9393d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a93940 push edx */
  push32((uint32_t)(EDX));
  /* 10a93941 call dword ptr [0x10ab32ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32ec))), 0x10a93947u);
  /* 10a93947 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10a9394a:;
  /* 10a9394a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a9394d jmp 0x10a93951 */
  goto L_10a93951;
L_10a9394f:;
  /* 10a9394f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a93951:;
  /* 10a93951 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10a93954 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a93957 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10a9395e pop edi */
  EDI = (pop32());
  /* 10a9395f pop esi */
  ESI = (pop32());
  /* 10a93960 pop ebx */
  EBX = (pop32());
  /* 10a93961 mov esp, ebp */
  ESP = (EBP);
  /* 10a93963 pop ebp */
  EBP = (pop32());
  /* 10a93964 ret  */
  ESPCHK(0x10a937d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013970 @ 0x10a93970 (398 bytes, 140 insns) */
void f_10a93970(void) {
  FTRACE(0x10a93970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a93970 push ebp */
  push32((uint32_t)(EBP));
  /* 10a93971 mov ebp, esp */
  EBP = (ESP);
  /* 10a93973 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10a93975 push 0x10aacc60 */
  push32((uint32_t)(0x10aacc60u));
  /* 10a9397a push 0x10a8d498 */
  push32((uint32_t)(0x10a8d498u));
  /* 10a9397f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10a93985 push eax */
  push32((uint32_t)(EAX));
  /* 10a93986 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10a9398d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a93990 push ebx */
  push32((uint32_t)(EBX));
  /* 10a93991 push esi */
  push32((uint32_t)(ESI));
  /* 10a93992 push edi */
  push32((uint32_t)(EDI));
  /* 10a93993 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10a93996 cmp dword ptr [0x10ab0a10], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab0a10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a9399d jne 0x10a939e2 */
  if (!C.zf) goto L_10a939e2;
  /* 10a9399f push 0 */
  push32((uint32_t)(0x0u));
  /* 10a939a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a939a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a939a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a939a7 call dword ptr [0x10ab32a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32a4))), 0x10a939adu);
  /* 10a939ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a939af je 0x10a939bd */
  if (C.zf) goto L_10a939bd;
  /* 10a939b1 mov dword ptr [0x10ab0a10], 1 */
  w32((uint32_t)(0x10ab0a10), (0x1u));
  /* 10a939bb jmp 0x10a939e2 */
  goto L_10a939e2;
L_10a939bd:;
  /* 10a939bd push 0 */
  push32((uint32_t)(0x0u));
  /* 10a939bf push 0 */
  push32((uint32_t)(0x0u));
  /* 10a939c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a939c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a939c5 call dword ptr [0x10ab32bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32bc))), 0x10a939cbu);
  /* 10a939cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a939cd je 0x10a939db */
  if (C.zf) goto L_10a939db;
  /* 10a939cf mov dword ptr [0x10ab0a10], 2 */
  w32((uint32_t)(0x10ab0a10), (0x2u));
  /* 10a939d9 jmp 0x10a939e2 */
  goto L_10a939e2;
L_10a939db:;
  /* 10a939db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a939dd jmp 0x10a93b01 */
  goto L_10a93b01;
L_10a939e2:;
  /* 10a939e2 cmp dword ptr [0x10ab0a10], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10ab0a10))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a939e9 jne 0x10a93a06 */
  if (!C.zf) goto L_10a93a06;
  /* 10a939eb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a939ee push eax */
  push32((uint32_t)(EAX));
  /* 10a939ef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a939f2 push ecx */
  push32((uint32_t)(ECX));
  /* 10a939f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a939f6 push edx */
  push32((uint32_t)(EDX));
  /* 10a939f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a939fa push eax */
  push32((uint32_t)(EAX));
  /* 10a939fb call dword ptr [0x10ab32bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32bc))), 0x10a93a01u);
  /* 10a93a01 jmp 0x10a93b01 */
  goto L_10a93b01;
L_10a93a06:;
  /* 10a93a06 cmp dword ptr [0x10ab0a10], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10ab0a10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a93a0d jne 0x10a93aff */
  if (!C.zf) goto L_10a93aff;
  /* 10a93a13 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a93a17 jne 0x10a93a22 */
  if (!C.zf) goto L_10a93a22;
  /* 10a93a19 mov ecx, dword ptr [0x10ab08c0] */
  ECX = (r32((uint32_t)(0x10ab08c0)));
  /* 10a93a1f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10a93a22:;
  /* 10a93a22 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a93a24 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a93a26 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a93a29 push edx */
  push32((uint32_t)(EDX));
  /* 10a93a2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a93a2d push eax */
  push32((uint32_t)(EAX));
  /* 10a93a2e call dword ptr [0x10ab32a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32a4))), 0x10a93a34u);
  /* 10a93a34 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10a93a37 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a93a3b jne 0x10a93a44 */
  if (!C.zf) goto L_10a93a44;
  /* 10a93a3d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a93a3f jmp 0x10a93b01 */
  goto L_10a93b01;
L_10a93a44:;
  /* 10a93a44 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a93a4b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a93a4e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10a93a50 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a93a53 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10a93a55 call 0x10a87530 */
  push32(0x10a93a5au); f_10a87530();
  /* 10a93a5a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 10a93a5d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10a93a60 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a93a63 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10a93a66 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10a93a6d jmp 0x10a93a86 */
  goto L_10a93a86;
  /* 10a93a6f mov eax, 1 */
  EAX = (0x1u);
  /* 10a93a74 ret  */
  ESPCHK(0x10a93970u, _esp0);
  ESP += 4; return;
  /* 10a93a75 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10a93a78 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10a93a7f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10a93a86:;
  /* 10a93a86 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a93a8a jne 0x10a93a90 */
  if (!C.zf) goto L_10a93a90;
  /* 10a93a8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a93a8e jmp 0x10a93b01 */
  goto L_10a93b01;
L_10a93a90:;
  /* 10a93a90 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a93a93 push edx */
  push32((uint32_t)(EDX));
  /* 10a93a94 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a93a97 push eax */
  push32((uint32_t)(EAX));
  /* 10a93a98 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a93a9b push ecx */
  push32((uint32_t)(ECX));
  /* 10a93a9c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a93a9f push edx */
  push32((uint32_t)(EDX));
  /* 10a93aa0 call dword ptr [0x10ab32a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32a4))), 0x10a93aa6u);
  /* 10a93aa6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a93aa8 jne 0x10a93aae */
  if (!C.zf) goto L_10a93aae;
  /* 10a93aaa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a93aac jmp 0x10a93b01 */
  goto L_10a93b01;
L_10a93aae:;
  /* 10a93aae cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a93ab2 jne 0x10a93ad6 */
  if (!C.zf) goto L_10a93ad6;
  /* 10a93ab4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a93ab6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a93ab8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a93aba push 0 */
  push32((uint32_t)(0x0u));
  /* 10a93abc push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10a93abe mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a93ac1 push eax */
  push32((uint32_t)(EAX));
  /* 10a93ac2 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10a93ac7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a93aca push ecx */
  push32((uint32_t)(ECX));
  /* 10a93acb call dword ptr [0x10ab339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab339c))), 0x10a93ad1u);
  /* 10a93ad1 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10a93ad4 jmp 0x10a93afa */
  goto L_10a93afa;
L_10a93ad6:;
  /* 10a93ad6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a93ad8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a93ada mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a93add push edx */
  push32((uint32_t)(EDX));
  /* 10a93ade mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a93ae1 push eax */
  push32((uint32_t)(EAX));
  /* 10a93ae2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10a93ae4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a93ae7 push ecx */
  push32((uint32_t)(ECX));
  /* 10a93ae8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10a93aed mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a93af0 push edx */
  push32((uint32_t)(EDX));
  /* 10a93af1 call dword ptr [0x10ab339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab339c))), 0x10a93af7u);
  /* 10a93af7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10a93afa:;
  /* 10a93afa mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a93afd jmp 0x10a93b01 */
  goto L_10a93b01;
L_10a93aff:;
  /* 10a93aff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a93b01:;
  /* 10a93b01 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10a93b04 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a93b07 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10a93b0e pop edi */
  EDI = (pop32());
  /* 10a93b0f pop esi */
  ESI = (pop32());
  /* 10a93b10 pop ebx */
  EBX = (pop32());
  /* 10a93b11 mov esp, ebp */
  ESP = (EBP);
  /* 10a93b13 pop ebp */
  EBP = (pop32());
  /* 10a93b14 ret  */
  ESPCHK(0x10a93970u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b20 @ 0x10a93b20 (11 bytes, 6 insns) */
void f_10a93b20(void) {
  FTRACE(0x10a93b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a93b20 push ebp */
  push32((uint32_t)(EBP));
  /* 10a93b21 mov ebp, esp */
  EBP = (ESP);
  /* 10a93b23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a93b26 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a93b29 pop ebp */
  EBP = (pop32());
  /* 10a93b2a ret  */
  ESPCHK(0x10a93b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b30 @ 0x10a93b30 (147 bytes, 43 insns) */
void f_10a93b30(void) {
  FTRACE(0x10a93b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a93b30 push ebp */
  push32((uint32_t)(EBP));
  /* 10a93b31 mov ebp, esp */
  EBP = (ESP);
  /* 10a93b33 push ecx */
  push32((uint32_t)(ECX));
  /* 10a93b34 cmp dword ptr [0x10ab08b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab08b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a93b3b jne 0x10a93b57 */
  if (!C.zf) goto L_10a93b57;
  /* 10a93b3d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a93b41 jl 0x10a93b52 */
  if ((C.sf!=C.of)) goto L_10a93b52;
  /* 10a93b43 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a93b47 jg 0x10a93b52 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a93b52;
  /* 10a93b49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a93b4c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a93b4f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10a93b52:;
  /* 10a93b52 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a93b55 jmp 0x10a93bbf */
  goto L_10a93bbf;
L_10a93b57:;
  /* 10a93b57 push 0x10ab0a3c */
  push32((uint32_t)(0x10ab0a3cu));
  /* 10a93b5c call dword ptr [0x10ab3344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3344))), 0x10a93b62u);
  /* 10a93b62 cmp dword ptr [0x10ab0a2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab0a2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a93b69 je 0x10a93b89 */
  if (C.zf) goto L_10a93b89;
  /* 10a93b6b push 0x10ab0a3c */
  push32((uint32_t)(0x10ab0a3cu));
  /* 10a93b70 call dword ptr [0x10ab3334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3334))), 0x10a93b76u);
  /* 10a93b76 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10a93b78 call 0x10a87d90 */
  push32(0x10a93b7du); f_10a87d90();
  /* 10a93b7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a93b80 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10a93b87 jmp 0x10a93b90 */
  goto L_10a93b90;
L_10a93b89:;
  /* 10a93b89 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10a93b90:;
  /* 10a93b90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a93b93 push ecx */
  push32((uint32_t)(ECX));
  /* 10a93b94 call 0x10a93bd0 */
  push32(0x10a93b99u); f_10a93bd0();
  /* 10a93b99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a93b9c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a93b9f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a93ba3 je 0x10a93bb1 */
  if (C.zf) goto L_10a93bb1;
  /* 10a93ba5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10a93ba7 call 0x10a87e30 */
  push32(0x10a93bacu); f_10a87e30();
  /* 10a93bac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a93baf jmp 0x10a93bbc */
  goto L_10a93bbc;
L_10a93bb1:;
  /* 10a93bb1 push 0x10ab0a3c */
  push32((uint32_t)(0x10ab0a3cu));
  /* 10a93bb6 call dword ptr [0x10ab3334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3334))), 0x10a93bbcu);
L_10a93bbc:;
  /* 10a93bbc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10a93bbf:;
  /* 10a93bbf mov esp, ebp */
  ESP = (EBP);
  /* 10a93bc1 pop ebp */
  EBP = (pop32());
  /* 10a93bc2 ret  */
  ESPCHK(0x10a93b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10013bd0 @ 0x10a93bd0 (299 bytes, 91 insns) */
void f_10a93bd0(void) {
  FTRACE(0x10a93bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a93bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a93bd1 mov ebp, esp */
  EBP = (ESP);
  /* 10a93bd3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a93bd6 cmp dword ptr [0x10ab08b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab08b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a93bdd jne 0x10a93bfc */
  if (!C.zf) goto L_10a93bfc;
  /* 10a93bdf cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a93be3 jl 0x10a93bf4 */
  if ((C.sf!=C.of)) goto L_10a93bf4;
  /* 10a93be5 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a93be9 jg 0x10a93bf4 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a93bf4;
  /* 10a93beb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a93bee add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a93bf1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10a93bf4:;
  /* 10a93bf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a93bf7 jmp 0x10a93cf7 */
  goto L_10a93cf7;
L_10a93bfc:;
  /* 10a93bfc cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a93c03 jge 0x10a93c43 */
  if ((C.sf==C.of)) goto L_10a93c43;
  /* 10a93c05 cmp dword ptr [0x10aaeea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10aaeea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a93c0c jle 0x10a93c21 */
  if ((C.zf||C.sf!=C.of)) goto L_10a93c21;
  /* 10a93c0e push 1 */
  push32((uint32_t)(0x1u));
  /* 10a93c10 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a93c13 push ecx */
  push32((uint32_t)(ECX));
  /* 10a93c14 call 0x10a8a3a0 */
  push32(0x10a93c19u); f_10a8a3a0();
  /* 10a93c19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a93c1c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10a93c1f jmp 0x10a93c35 */
  goto L_10a93c35;
L_10a93c21:;
  /* 10a93c21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a93c24 mov eax, dword ptr [0x10aaec98] */
  EAX = (r32((uint32_t)(0x10aaec98)));
  /* 10a93c29 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a93c2b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10a93c2f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10a93c32 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10a93c35:;
  /* 10a93c35 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a93c39 jne 0x10a93c43 */
  if (!C.zf) goto L_10a93c43;
  /* 10a93c3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a93c3e jmp 0x10a93cf7 */
  goto L_10a93cf7;
L_10a93c43:;
  /* 10a93c43 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a93c46 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10a93c49 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a93c4f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a93c55 mov eax, dword ptr [0x10aaec98] */
  EAX = (r32((uint32_t)(0x10aaec98)));
  /* 10a93c5a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a93c5c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10a93c60 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10a93c66 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a93c68 je 0x10a93c8c */
  if (C.zf) goto L_10a93c8c;
  /* 10a93c6a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a93c6d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10a93c70 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a93c76 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 10a93c79 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10a93c7c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 10a93c7f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 10a93c83 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10a93c8a jmp 0x10a93c9d */
  goto L_10a93c9d;
L_10a93c8c:;
  /* 10a93c8c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10a93c8f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10a93c92 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 10a93c96 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_10a93c9d:;
  /* 10a93c9d push 1 */
  push32((uint32_t)(0x1u));
  /* 10a93c9f push 0 */
  push32((uint32_t)(0x0u));
  /* 10a93ca1 push 3 */
  push32((uint32_t)(0x3u));
  /* 10a93ca3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10a93ca6 push edx */
  push32((uint32_t)(EDX));
  /* 10a93ca7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a93caa push eax */
  push32((uint32_t)(EAX));
  /* 10a93cab lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10a93cae push ecx */
  push32((uint32_t)(ECX));
  /* 10a93caf push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10a93cb4 mov edx, dword ptr [0x10ab08b0] */
  EDX = (r32((uint32_t)(0x10ab08b0)));
  /* 10a93cba push edx */
  push32((uint32_t)(EDX));
  /* 10a93cbb call 0x10a8c780 */
  push32(0x10a93cc0u); f_10a8c780();
  /* 10a93cc0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a93cc3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a93cc6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a93cca jne 0x10a93cd1 */
  if (!C.zf) goto L_10a93cd1;
  /* 10a93ccc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a93ccf jmp 0x10a93cf7 */
  goto L_10a93cf7;
L_10a93cd1:;
  /* 10a93cd1 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a93cd5 jne 0x10a93ce1 */
  if (!C.zf) goto L_10a93ce1;
  /* 10a93cd7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a93cda and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a93cdf jmp 0x10a93cf7 */
  goto L_10a93cf7;
L_10a93ce1:;
  /* 10a93ce1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a93ce4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a93ce9 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 10a93cec and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a93cf2 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10a93cf5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_10a93cf7:;
  /* 10a93cf7 mov esp, ebp */
  ESP = (EBP);
  /* 10a93cf9 pop ebp */
  EBP = (pop32());
  /* 10a93cfa ret  */
  ESPCHK(0x10a93bd0u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x10a93d00 (52 bytes, 19 insns) */
void f_10a93d00(void) {
  FTRACE(0x10a93d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a93d00 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10a93d04 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10a93d08 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a93d0a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10a93d0e jne 0x10a93d19 */
  if (!C.zf) goto L_10a93d19;
  /* 10a93d10 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10a93d14 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10a93d16 ret 0x10 */
  ESPCHK(0x10a93d00u, _esp0);
  ESP += 20; return;
L_10a93d19:;
  /* 10a93d19 push ebx */
  push32((uint32_t)(EBX));
  /* 10a93d1a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10a93d1c mov ebx, eax */
  EBX = (EAX);
  /* 10a93d1e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10a93d22 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10a93d26 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a93d28 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10a93d2c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10a93d2e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a93d30 pop ebx */
  EBX = (pop32());
  /* 10a93d31 ret 0x10 */
  ESPCHK(0x10a93d00u, _esp0);
  ESP += 20; return;
}

/* FUN_10013d40 @ 0x10a93d40 (46 bytes, 18 insns) */
void f_10a93d40(void) {
  FTRACE(0x10a93d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a93d40 push ebp */
  push32((uint32_t)(EBP));
  /* 10a93d41 mov ebp, esp */
  EBP = (ESP);
  /* 10a93d43 push ecx */
  push32((uint32_t)(ECX));
  /* 10a93d44 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10a93d46 call 0x10a87d90 */
  push32(0x10a93d4bu); f_10a87d90();
  /* 10a93d4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a93d4e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a93d51 push eax */
  push32((uint32_t)(EAX));
  /* 10a93d52 call 0x10a93d70 */
  push32(0x10a93d57u); f_10a93d70();
  /* 10a93d57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a93d5a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a93d5d push 0xc */
  push32((uint32_t)(0xcu));
  /* 10a93d5f call 0x10a87e30 */
  push32(0x10a93d64u); f_10a87e30();
  /* 10a93d64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a93d67 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a93d6a mov esp, ebp */
  ESP = (EBP);
  /* 10a93d6c pop ebp */
  EBP = (pop32());
  /* 10a93d6d ret  */
  ESPCHK(0x10a93d40u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x10a93d70 (198 bytes, 69 insns) */
void f_10a93d70(void) {
  FTRACE(0x10a93d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a93d70 push ebp */
  push32((uint32_t)(EBP));
  /* 10a93d71 mov ebp, esp */
  EBP = (ESP);
  /* 10a93d73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a93d76 mov eax, dword ptr [0x10ab06d0] */
  EAX = (r32((uint32_t)(0x10ab06d0)));
  /* 10a93d7b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a93d7e cmp dword ptr [0x10ab21c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab21c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a93d85 jne 0x10a93d8e */
  if (!C.zf) goto L_10a93d8e;
  /* 10a93d87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a93d89 jmp 0x10a93e32 */
  goto L_10a93e32;
L_10a93d8e:;
  /* 10a93d8e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a93d92 jne 0x10a93db6 */
  if (!C.zf) goto L_10a93db6;
  /* 10a93d94 cmp dword ptr [0x10ab06d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab06d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a93d9b je 0x10a93db6 */
  if (C.zf) goto L_10a93db6;
  /* 10a93d9d call 0x10a93e90 */
  push32(0x10a93da2u); f_10a93e90();
  /* 10a93da2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a93da4 je 0x10a93dad */
  if (C.zf) goto L_10a93dad;
  /* 10a93da6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a93da8 jmp 0x10a93e32 */
  goto L_10a93e32;
L_10a93dad:;
  /* 10a93dad mov ecx, dword ptr [0x10ab06d0] */
  ECX = (r32((uint32_t)(0x10ab06d0)));
  /* 10a93db3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10a93db6:;
  /* 10a93db6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a93dba je 0x10a93e30 */
  if (C.zf) goto L_10a93e30;
  /* 10a93dbc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a93dc0 je 0x10a93e30 */
  if (C.zf) goto L_10a93e30;
  /* 10a93dc2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a93dc5 push edx */
  push32((uint32_t)(EDX));
  /* 10a93dc6 call 0x10a871c0 */
  push32(0x10a93dcbu); f_10a871c0();
  /* 10a93dcb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a93dce mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a93dd1:;
  /* 10a93dd1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a93dd4 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a93dd7 je 0x10a93e30 */
  if (C.zf) goto L_10a93e30;
  /* 10a93dd9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a93ddc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a93dde push edx */
  push32((uint32_t)(EDX));
  /* 10a93ddf call 0x10a871c0 */
  push32(0x10a93de4u); f_10a871c0();
  /* 10a93de4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a93de7 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a93dea jbe 0x10a93e25 */
  if ((C.cf||C.zf)) goto L_10a93e25;
  /* 10a93dec mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a93def mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a93df1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a93df4 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 10a93df8 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a93dfb jne 0x10a93e25 */
  if (!C.zf) goto L_10a93e25;
  /* 10a93dfd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a93e00 push ecx */
  push32((uint32_t)(ECX));
  /* 10a93e01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a93e04 push edx */
  push32((uint32_t)(EDX));
  /* 10a93e05 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a93e08 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a93e0a push ecx */
  push32((uint32_t)(ECX));
  /* 10a93e0b call 0x10a93e40 */
  push32(0x10a93e10u); f_10a93e40();
  /* 10a93e10 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a93e13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a93e15 jne 0x10a93e25 */
  if (!C.zf) goto L_10a93e25;
  /* 10a93e17 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a93e1a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a93e1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a93e1f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 10a93e23 jmp 0x10a93e32 */
  goto L_10a93e32;
L_10a93e25:;
  /* 10a93e25 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a93e28 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a93e2b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10a93e2e jmp 0x10a93dd1 */
  goto L_10a93dd1;
L_10a93e30:;
  /* 10a93e30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a93e32:;
  /* 10a93e32 mov esp, ebp */
  ESP = (EBP);
  /* 10a93e34 pop ebp */
  EBP = (pop32());
  /* 10a93e35 ret  */
  ESPCHK(0x10a93d70u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x10a93e40 (79 bytes, 32 insns) */
void f_10a93e40(void) {
  FTRACE(0x10a93e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a93e40 push ebp */
  push32((uint32_t)(EBP));
  /* 10a93e41 mov ebp, esp */
  EBP = (ESP);
  /* 10a93e43 push ecx */
  push32((uint32_t)(ECX));
  /* 10a93e44 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a93e48 jne 0x10a93e4e */
  if (!C.zf) goto L_10a93e4e;
  /* 10a93e4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a93e4c jmp 0x10a93e8b */
  goto L_10a93e8b;
L_10a93e4e:;
  /* 10a93e4e mov eax, dword ptr [0x10ab1d84] */
  EAX = (r32((uint32_t)(0x10ab1d84)));
  /* 10a93e53 push eax */
  push32((uint32_t)(EAX));
  /* 10a93e54 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a93e57 push ecx */
  push32((uint32_t)(ECX));
  /* 10a93e58 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a93e5b push edx */
  push32((uint32_t)(EDX));
  /* 10a93e5c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a93e5f push eax */
  push32((uint32_t)(EAX));
  /* 10a93e60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a93e63 push ecx */
  push32((uint32_t)(ECX));
  /* 10a93e64 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a93e66 mov edx, dword ptr [0x10ab2024] */
  EDX = (r32((uint32_t)(0x10ab2024)));
  /* 10a93e6c push edx */
  push32((uint32_t)(EDX));
  /* 10a93e6d call 0x10a93f40 */
  push32(0x10a93e72u); f_10a93f40();
  /* 10a93e72 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a93e75 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a93e78 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a93e7c jne 0x10a93e85 */
  if (!C.zf) goto L_10a93e85;
  /* 10a93e7e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 10a93e83 jmp 0x10a93e8b */
  goto L_10a93e8b;
L_10a93e85:;
  /* 10a93e85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a93e88 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10a93e8b:;
  /* 10a93e8b mov esp, ebp */
  ESP = (EBP);
  /* 10a93e8d pop ebp */
  EBP = (pop32());
  /* 10a93e8e ret  */
  ESPCHK(0x10a93e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10013e90 @ 0x10a93e90 (174 bytes, 66 insns) */
void f_10a93e90(void) {
  FTRACE(0x10a93e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a93e90 push ebp */
  push32((uint32_t)(EBP));
  /* 10a93e91 mov ebp, esp */
  EBP = (ESP);
  /* 10a93e93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a93e96 mov eax, dword ptr [0x10ab06d8] */
  EAX = (r32((uint32_t)(0x10ab06d8)));
  /* 10a93e9b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a93e9e:;
  /* 10a93e9e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a93ea1 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a93ea4 je 0x10a93f38 */
  if (C.zf) goto L_10a93f38;
  /* 10a93eaa push 0 */
  push32((uint32_t)(0x0u));
  /* 10a93eac push 0 */
  push32((uint32_t)(0x0u));
  /* 10a93eae push 0 */
  push32((uint32_t)(0x0u));
  /* 10a93eb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a93eb2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10a93eb4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a93eb7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a93eb9 push eax */
  push32((uint32_t)(EAX));
  /* 10a93eba push 0 */
  push32((uint32_t)(0x0u));
  /* 10a93ebc push 1 */
  push32((uint32_t)(0x1u));
  /* 10a93ebe call dword ptr [0x10ab339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab339c))), 0x10a93ec4u);
  /* 10a93ec4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a93ec7 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a93ecb jne 0x10a93ed2 */
  if (!C.zf) goto L_10a93ed2;
  /* 10a93ecd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a93ed0 jmp 0x10a93f3a */
  goto L_10a93f3a;
L_10a93ed2:;
  /* 10a93ed2 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10a93ed4 push 0x10aacc6c */
  push32((uint32_t)(0x10aacc6cu));
  /* 10a93ed9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a93edb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a93ede push ecx */
  push32((uint32_t)(ECX));
  /* 10a93edf call 0x10a84390 */
  push32(0x10a93ee4u); f_10a84390();
  /* 10a93ee4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a93ee7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a93eea cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a93eee jne 0x10a93ef5 */
  if (!C.zf) goto L_10a93ef5;
  /* 10a93ef0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a93ef3 jmp 0x10a93f3a */
  goto L_10a93f3a;
L_10a93ef5:;
  /* 10a93ef5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a93ef7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a93ef9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a93efc push edx */
  push32((uint32_t)(EDX));
  /* 10a93efd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a93f00 push eax */
  push32((uint32_t)(EAX));
  /* 10a93f01 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10a93f03 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a93f06 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a93f08 push edx */
  push32((uint32_t)(EDX));
  /* 10a93f09 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a93f0b push 1 */
  push32((uint32_t)(0x1u));
  /* 10a93f0d call dword ptr [0x10ab339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab339c))), 0x10a93f13u);
  /* 10a93f13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a93f15 jne 0x10a93f1c */
  if (!C.zf) goto L_10a93f1c;
  /* 10a93f17 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a93f1a jmp 0x10a93f3a */
  goto L_10a93f3a;
L_10a93f1c:;
  /* 10a93f1c push 0 */
  push32((uint32_t)(0x0u));
  /* 10a93f1e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a93f21 push eax */
  push32((uint32_t)(EAX));
  /* 10a93f22 call 0x10a94390 */
  push32(0x10a93f27u); f_10a94390();
  /* 10a93f27 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a93f2a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a93f2d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a93f30 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a93f33 jmp 0x10a93e9e */
  goto L_10a93e9e;
L_10a93f38:;
  /* 10a93f38 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a93f3a:;
  /* 10a93f3a mov esp, ebp */
  ESP = (EBP);
  /* 10a93f3c pop ebp */
  EBP = (pop32());
  /* 10a93f3d ret  */
  ESPCHK(0x10a93e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10013f40 @ 0x10a93f40 (970 bytes, 340 insns) */
void f_10a93f40(void) {
  FTRACE(0x10a93f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a93f40 push ebp */
  push32((uint32_t)(EBP));
  /* 10a93f41 mov ebp, esp */
  EBP = (ESP);
  /* 10a93f43 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10a93f45 push 0x10aaccc0 */
  push32((uint32_t)(0x10aaccc0u));
  /* 10a93f4a push 0x10a8d498 */
  push32((uint32_t)(0x10a8d498u));
  /* 10a93f4f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10a93f55 push eax */
  push32((uint32_t)(EAX));
  /* 10a93f56 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10a93f5d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a93f60 push ebx */
  push32((uint32_t)(EBX));
  /* 10a93f61 push esi */
  push32((uint32_t)(ESI));
  /* 10a93f62 push edi */
  push32((uint32_t)(EDI));
  /* 10a93f63 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10a93f66 cmp dword ptr [0x10ab0a14], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab0a14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a93f6d jne 0x10a93fc6 */
  if (!C.zf) goto L_10a93fc6;
  /* 10a93f6f push 1 */
  push32((uint32_t)(0x1u));
  /* 10a93f71 push 0x10aac318 */
  push32((uint32_t)(0x10aac318u));
  /* 10a93f76 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a93f78 push 0x10aac318 */
  push32((uint32_t)(0x10aac318u));
  /* 10a93f7d push 0 */
  push32((uint32_t)(0x0u));
  /* 10a93f7f push 0 */
  push32((uint32_t)(0x0u));
  /* 10a93f81 call dword ptr [0x10ab32a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32a0))), 0x10a93f87u);
  /* 10a93f87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a93f89 je 0x10a93f97 */
  if (C.zf) goto L_10a93f97;
  /* 10a93f8b mov dword ptr [0x10ab0a14], 1 */
  w32((uint32_t)(0x10ab0a14), (0x1u));
  /* 10a93f95 jmp 0x10a93fc6 */
  goto L_10a93fc6;
L_10a93f97:;
  /* 10a93f97 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a93f99 push 0x10aac314 */
  push32((uint32_t)(0x10aac314u));
  /* 10a93f9e push 1 */
  push32((uint32_t)(0x1u));
  /* 10a93fa0 push 0x10aac314 */
  push32((uint32_t)(0x10aac314u));
  /* 10a93fa5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a93fa7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a93fa9 call dword ptr [0x10ab32ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32ac))), 0x10a93fafu);
  /* 10a93faf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a93fb1 je 0x10a93fbf */
  if (C.zf) goto L_10a93fbf;
  /* 10a93fb3 mov dword ptr [0x10ab0a14], 2 */
  w32((uint32_t)(0x10ab0a14), (0x2u));
  /* 10a93fbd jmp 0x10a93fc6 */
  goto L_10a93fc6;
L_10a93fbf:;
  /* 10a93fbf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a93fc1 jmp 0x10a94324 */
  goto L_10a94324;
L_10a93fc6:;
  /* 10a93fc6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a93fca jle 0x10a93fdf */
  if ((C.zf||C.sf!=C.of)) goto L_10a93fdf;
  /* 10a93fcc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a93fcf push eax */
  push32((uint32_t)(EAX));
  /* 10a93fd0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a93fd3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a93fd4 call 0x10a94340 */
  push32(0x10a93fd9u); f_10a94340();
  /* 10a93fd9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a93fdc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10a93fdf:;
  /* 10a93fdf cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a93fe3 jle 0x10a93ff8 */
  if ((C.zf||C.sf!=C.of)) goto L_10a93ff8;
  /* 10a93fe5 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10a93fe8 push edx */
  push32((uint32_t)(EDX));
  /* 10a93fe9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a93fec push eax */
  push32((uint32_t)(EAX));
  /* 10a93fed call 0x10a94340 */
  push32(0x10a93ff2u); f_10a94340();
  /* 10a93ff2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a93ff5 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_10a93ff8:;
  /* 10a93ff8 cmp dword ptr [0x10ab0a14], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10ab0a14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a93fff jne 0x10a94024 */
  if (!C.zf) goto L_10a94024;
  /* 10a94001 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10a94004 push ecx */
  push32((uint32_t)(ECX));
  /* 10a94005 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a94008 push edx */
  push32((uint32_t)(EDX));
  /* 10a94009 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a9400c push eax */
  push32((uint32_t)(EAX));
  /* 10a9400d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a94010 push ecx */
  push32((uint32_t)(ECX));
  /* 10a94011 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a94014 push edx */
  push32((uint32_t)(EDX));
  /* 10a94015 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a94018 push eax */
  push32((uint32_t)(EAX));
  /* 10a94019 call dword ptr [0x10ab32ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32ac))), 0x10a9401fu);
  /* 10a9401f jmp 0x10a94324 */
  goto L_10a94324;
L_10a94024:;
  /* 10a94024 cmp dword ptr [0x10ab0a14], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10ab0a14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a9402b jne 0x10a94322 */
  if (!C.zf) goto L_10a94322;
  /* 10a94031 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a94035 jne 0x10a94040 */
  if (!C.zf) goto L_10a94040;
  /* 10a94037 mov ecx, dword ptr [0x10ab08c0] */
  ECX = (r32((uint32_t)(0x10ab08c0)));
  /* 10a9403d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_10a94040:;
  /* 10a94040 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a94044 je 0x10a94050 */
  if (C.zf) goto L_10a94050;
  /* 10a94046 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a9404a jne 0x10a941cc */
  if (!C.zf) goto L_10a941cc;
L_10a94050:;
  /* 10a94050 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a94053 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a94056 jne 0x10a94062 */
  if (!C.zf) goto L_10a94062;
  /* 10a94058 mov eax, 2 */
  EAX = (0x2u);
  /* 10a9405d jmp 0x10a94324 */
  goto L_10a94324;
L_10a94062:;
  /* 10a94062 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a94066 jle 0x10a94072 */
  if ((C.zf||C.sf!=C.of)) goto L_10a94072;
  /* 10a94068 mov eax, 1 */
  EAX = (0x1u);
  /* 10a9406d jmp 0x10a94324 */
  goto L_10a94324;
L_10a94072:;
  /* 10a94072 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a94076 jle 0x10a94082 */
  if ((C.zf||C.sf!=C.of)) goto L_10a94082;
  /* 10a94078 mov eax, 3 */
  EAX = (0x3u);
  /* 10a9407d jmp 0x10a94324 */
  goto L_10a94324;
L_10a94082:;
  /* 10a94082 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 10a94085 push eax */
  push32((uint32_t)(EAX));
  /* 10a94086 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10a94089 push ecx */
  push32((uint32_t)(ECX));
  /* 10a9408a call dword ptr [0x10ab32f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32f8))), 0x10a94090u);
  /* 10a94090 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a94092 jne 0x10a9409b */
  if (!C.zf) goto L_10a9409b;
  /* 10a94094 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a94096 jmp 0x10a94324 */
  goto L_10a94324;
L_10a9409b:;
  /* 10a9409b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a9409f jne 0x10a940a7 */
  if (!C.zf) goto L_10a940a7;
  /* 10a940a1 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a940a5 je 0x10a940d4 */
  if (C.zf) goto L_10a940d4;
L_10a940a7:;
  /* 10a940a7 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a940ab jne 0x10a940b3 */
  if (!C.zf) goto L_10a940b3;
  /* 10a940ad cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a940b1 je 0x10a940d4 */
  if (C.zf) goto L_10a940d4;
L_10a940b3:;
  /* 10a940b3 push 0x10aacc80 */
  push32((uint32_t)(0x10aacc80u));
  /* 10a940b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a940ba push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 10a940bf push 0x10aacc78 */
  push32((uint32_t)(0x10aacc78u));
  /* 10a940c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a940c6 call 0x10a83450 */
  push32(0x10a940cbu); f_10a83450();
  /* 10a940cb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a940ce cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a940d1 jne 0x10a940d4 */
  if (!C.zf) goto L_10a940d4;
  /* 10a940d3 int3  */
  x86_unimpl("int3 @ 0x10a940d3");
L_10a940d4:;
  /* 10a940d4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a940d6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a940d8 jne 0x10a9409b */
  if (!C.zf) goto L_10a9409b;
  /* 10a940da cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a940de jle 0x10a94153 */
  if ((C.zf||C.sf!=C.of)) goto L_10a94153;
  /* 10a940e0 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a940e4 jae 0x10a940f0 */
  if (!C.cf) goto L_10a940f0;
  /* 10a940e6 mov eax, 3 */
  EAX = (0x3u);
  /* 10a940eb jmp 0x10a94324 */
  goto L_10a94324;
L_10a940f0:;
  /* 10a940f0 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 10a940f3 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 10a940f6 jmp 0x10a94101 */
  goto L_10a94101;
L_10a940f8:;
  /* 10a940f8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10a940fb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a940fe mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_10a94101:;
  /* 10a94101 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10a94104 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a94106 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a94108 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a9410a je 0x10a94149 */
  if (C.zf) goto L_10a94149;
  /* 10a9410c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10a9410f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a94111 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10a94114 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a94116 je 0x10a94149 */
  if (C.zf) goto L_10a94149;
  /* 10a94118 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a9411b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a9411d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10a9411f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10a94122 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a94124 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a94126 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a94128 jl 0x10a94147 */
  if ((C.sf!=C.of)) goto L_10a94147;
  /* 10a9412a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a9412d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a9412f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a94131 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10a94134 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a94136 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10a94139 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a9413b jg 0x10a94147 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a94147;
  /* 10a9413d mov eax, 2 */
  EAX = (0x2u);
  /* 10a94142 jmp 0x10a94324 */
  goto L_10a94324;
L_10a94147:;
  /* 10a94147 jmp 0x10a940f8 */
  goto L_10a940f8;
L_10a94149:;
  /* 10a94149 mov eax, 3 */
  EAX = (0x3u);
  /* 10a9414e jmp 0x10a94324 */
  goto L_10a94324;
L_10a94153:;
  /* 10a94153 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a94157 jle 0x10a941cc */
  if ((C.zf||C.sf!=C.of)) goto L_10a941cc;
  /* 10a94159 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a9415d jae 0x10a94169 */
  if (!C.cf) goto L_10a94169;
  /* 10a9415f mov eax, 1 */
  EAX = (0x1u);
  /* 10a94164 jmp 0x10a94324 */
  goto L_10a94324;
L_10a94169:;
  /* 10a94169 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 10a9416c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 10a9416f jmp 0x10a9417a */
  goto L_10a9417a;
L_10a94171:;
  /* 10a94171 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10a94174 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a94177 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_10a9417a:;
  /* 10a9417a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10a9417d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a9417f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a94181 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a94183 je 0x10a941c2 */
  if (C.zf) goto L_10a941c2;
  /* 10a94185 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10a94188 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a9418a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10a9418d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a9418f je 0x10a941c2 */
  if (C.zf) goto L_10a941c2;
  /* 10a94191 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a94194 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a94196 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a94198 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10a9419b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a9419d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a9419f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a941a1 jl 0x10a941c0 */
  if ((C.sf!=C.of)) goto L_10a941c0;
  /* 10a941a3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a941a6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a941a8 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10a941aa mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10a941ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a941af mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10a941b2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a941b4 jg 0x10a941c0 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a941c0;
  /* 10a941b6 mov eax, 2 */
  EAX = (0x2u);
  /* 10a941bb jmp 0x10a94324 */
  goto L_10a94324;
L_10a941c0:;
  /* 10a941c0 jmp 0x10a94171 */
  goto L_10a94171;
L_10a941c2:;
  /* 10a941c2 mov eax, 1 */
  EAX = (0x1u);
  /* 10a941c7 jmp 0x10a94324 */
  goto L_10a94324;
L_10a941cc:;
  /* 10a941cc push 0 */
  push32((uint32_t)(0x0u));
  /* 10a941ce push 0 */
  push32((uint32_t)(0x0u));
  /* 10a941d0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a941d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a941d4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a941d7 push edx */
  push32((uint32_t)(EDX));
  /* 10a941d8 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a941da mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10a941dd push eax */
  push32((uint32_t)(EAX));
  /* 10a941de call dword ptr [0x10ab32ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32ec))), 0x10a941e4u);
  /* 10a941e4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10a941e7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a941eb jne 0x10a941f4 */
  if (!C.zf) goto L_10a941f4;
  /* 10a941ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a941ef jmp 0x10a94324 */
  goto L_10a94324;
L_10a941f4:;
  /* 10a941f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a941fb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a941fe shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10a94200 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a94203 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10a94205 call 0x10a87530 */
  push32(0x10a9420au); f_10a87530();
  /* 10a9420a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 10a9420d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10a94210 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 10a94213 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10a94216 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10a9421d jmp 0x10a94236 */
  goto L_10a94236;
  /* 10a9421f mov eax, 1 */
  EAX = (0x1u);
  /* 10a94224 ret  */
  ESPCHK(0x10a93f40u, _esp0);
  ESP += 4; return;
  /* 10a94225 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10a94228 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10a9422f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10a94236:;
  /* 10a94236 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a9423a jne 0x10a94243 */
  if (!C.zf) goto L_10a94243;
  /* 10a9423c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a9423e jmp 0x10a94324 */
  goto L_10a94324;
L_10a94243:;
  /* 10a94243 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a94246 push edx */
  push32((uint32_t)(EDX));
  /* 10a94247 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a9424a push eax */
  push32((uint32_t)(EAX));
  /* 10a9424b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a9424e push ecx */
  push32((uint32_t)(ECX));
  /* 10a9424f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a94252 push edx */
  push32((uint32_t)(EDX));
  /* 10a94253 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a94255 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10a94258 push eax */
  push32((uint32_t)(EAX));
  /* 10a94259 call dword ptr [0x10ab32ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32ec))), 0x10a9425fu);
  /* 10a9425f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a94261 jne 0x10a9426a */
  if (!C.zf) goto L_10a9426a;
  /* 10a94263 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a94265 jmp 0x10a94324 */
  goto L_10a94324;
L_10a9426a:;
  /* 10a9426a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a9426c push 0 */
  push32((uint32_t)(0x0u));
  /* 10a9426e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10a94271 push ecx */
  push32((uint32_t)(ECX));
  /* 10a94272 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a94275 push edx */
  push32((uint32_t)(EDX));
  /* 10a94276 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a94278 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10a9427b push eax */
  push32((uint32_t)(EAX));
  /* 10a9427c call dword ptr [0x10ab32ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32ec))), 0x10a94282u);
  /* 10a94282 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10a94285 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a94289 jne 0x10a94292 */
  if (!C.zf) goto L_10a94292;
  /* 10a9428b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a9428d jmp 0x10a94324 */
  goto L_10a94324;
L_10a94292:;
  /* 10a94292 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10a94299 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a9429c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10a9429e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a942a1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10a942a3 call 0x10a87530 */
  push32(0x10a942a8u); f_10a87530();
  /* 10a942a8 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 10a942ab mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10a942ae mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 10a942b1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10a942b4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10a942bb jmp 0x10a942d4 */
  goto L_10a942d4;
  /* 10a942bd mov eax, 1 */
  EAX = (0x1u);
  /* 10a942c2 ret  */
  ESPCHK(0x10a93f40u, _esp0);
  ESP += 4; return;
  /* 10a942c3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10a942c6 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10a942cd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10a942d4:;
  /* 10a942d4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a942d8 jne 0x10a942de */
  if (!C.zf) goto L_10a942de;
  /* 10a942da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a942dc jmp 0x10a94324 */
  goto L_10a94324;
L_10a942de:;
  /* 10a942de mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a942e1 push edx */
  push32((uint32_t)(EDX));
  /* 10a942e2 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a942e5 push eax */
  push32((uint32_t)(EAX));
  /* 10a942e6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10a942e9 push ecx */
  push32((uint32_t)(ECX));
  /* 10a942ea mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a942ed push edx */
  push32((uint32_t)(EDX));
  /* 10a942ee push 1 */
  push32((uint32_t)(0x1u));
  /* 10a942f0 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10a942f3 push eax */
  push32((uint32_t)(EAX));
  /* 10a942f4 call dword ptr [0x10ab32ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32ec))), 0x10a942fau);
  /* 10a942fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a942fc jne 0x10a94302 */
  if (!C.zf) goto L_10a94302;
  /* 10a942fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a94300 jmp 0x10a94324 */
  goto L_10a94324;
L_10a94302:;
  /* 10a94302 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a94305 push ecx */
  push32((uint32_t)(ECX));
  /* 10a94306 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a94309 push edx */
  push32((uint32_t)(EDX));
  /* 10a9430a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a9430d push eax */
  push32((uint32_t)(EAX));
  /* 10a9430e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a94311 push ecx */
  push32((uint32_t)(ECX));
  /* 10a94312 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a94315 push edx */
  push32((uint32_t)(EDX));
  /* 10a94316 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a94319 push eax */
  push32((uint32_t)(EAX));
  /* 10a9431a call dword ptr [0x10ab32a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32a0))), 0x10a94320u);
  /* 10a94320 jmp 0x10a94324 */
  goto L_10a94324;
L_10a94322:;
  /* 10a94322 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a94324:;
  /* 10a94324 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 10a94327 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a9432a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10a94331 pop edi */
  EDI = (pop32());
  /* 10a94332 pop esi */
  ESI = (pop32());
  /* 10a94333 pop ebx */
  EBX = (pop32());
  /* 10a94334 mov esp, ebp */
  ESP = (EBP);
  /* 10a94336 pop ebp */
  EBP = (pop32());
  /* 10a94337 ret  */
  ESPCHK(0x10a93f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10014340 @ 0x10a94340 (80 bytes, 32 insns) */
void f_10a94340(void) {
  FTRACE(0x10a94340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a94340 push ebp */
  push32((uint32_t)(EBP));
  /* 10a94341 mov ebp, esp */
  EBP = (ESP);
  /* 10a94343 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a94346 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a94349 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a9434c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a9434f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10a94352:;
  /* 10a94352 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a94355 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a94358 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a9435b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a9435e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a94360 je 0x10a94377 */
  if (C.zf) goto L_10a94377;
  /* 10a94362 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a94365 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a94368 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a9436a je 0x10a94377 */
  if (C.zf) goto L_10a94377;
  /* 10a9436c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a9436f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a94372 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a94375 jmp 0x10a94352 */
  goto L_10a94352;
L_10a94377:;
  /* 10a94377 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a9437a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a9437d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a9437f jne 0x10a94389 */
  if (!C.zf) goto L_10a94389;
  /* 10a94381 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a94384 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a94387 jmp 0x10a9438c */
  goto L_10a9438c;
L_10a94389:;
  /* 10a94389 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10a9438c:;
  /* 10a9438c mov esp, ebp */
  ESP = (EBP);
  /* 10a9438e pop ebp */
  EBP = (pop32());
  /* 10a9438f ret  */
  ESPCHK(0x10a94340u, _esp0);
  ESP += 4; return;
}

/* FUN_10014390 @ 0x10a94390 (736 bytes, 224 insns) */
void f_10a94390(void) {
  FTRACE(0x10a94390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a94390 push ebp */
  push32((uint32_t)(EBP));
  /* 10a94391 mov ebp, esp */
  EBP = (ESP);
  /* 10a94393 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a94396 push esi */
  push32((uint32_t)(ESI));
  /* 10a94397 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a9439b je 0x10a943bc */
  if (C.zf) goto L_10a943bc;
  /* 10a9439d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10a9439f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a943a2 push eax */
  push32((uint32_t)(EAX));
  /* 10a943a3 call 0x10a947e0 */
  push32(0x10a943a8u); f_10a947e0();
  /* 10a943a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a943ab mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10a943ae cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a943b2 je 0x10a943bc */
  if (C.zf) goto L_10a943bc;
  /* 10a943b4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a943b7 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a943ba jne 0x10a943c4 */
  if (!C.zf) goto L_10a943c4;
L_10a943bc:;
  /* 10a943bc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a943bf jmp 0x10a9466b */
  goto L_10a9466b;
L_10a943c4:;
  /* 10a943c4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a943c7 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10a943cb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a943cd sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a943cf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10a943d0 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10a943d3 mov ecx, dword ptr [0x10ab06d0] */
  ECX = (r32((uint32_t)(0x10ab06d0)));
  /* 10a943d9 cmp ecx, dword ptr [0x10ab06d4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10ab06d4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a943df jne 0x10a943f5 */
  if (!C.zf) goto L_10a943f5;
  /* 10a943e1 mov edx, dword ptr [0x10ab06d0] */
  EDX = (r32((uint32_t)(0x10ab06d0)));
  /* 10a943e7 push edx */
  push32((uint32_t)(EDX));
  /* 10a943e8 call 0x10a946f0 */
  push32(0x10a943edu); f_10a946f0();
  /* 10a943ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a943f0 mov dword ptr [0x10ab06d0], eax */
  w32((uint32_t)(0x10ab06d0), (EAX));
L_10a943f5:;
  /* 10a943f5 cmp dword ptr [0x10ab06d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab06d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a943fc jne 0x10a944b5 */
  if (!C.zf) goto L_10a944b5;
  /* 10a94402 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a94406 je 0x10a94427 */
  if (C.zf) goto L_10a94427;
  /* 10a94408 cmp dword ptr [0x10ab06d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab06d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a9440f je 0x10a94427 */
  if (C.zf) goto L_10a94427;
  /* 10a94411 call 0x10a93e90 */
  push32(0x10a94416u); f_10a93e90();
  /* 10a94416 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a94418 je 0x10a94422 */
  if (C.zf) goto L_10a94422;
  /* 10a9441a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a9441d jmp 0x10a9466b */
  goto L_10a9466b;
L_10a94422:;
  /* 10a94422 jmp 0x10a944b5 */
  goto L_10a944b5;
L_10a94427:;
  /* 10a94427 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a9442b je 0x10a94434 */
  if (C.zf) goto L_10a94434;
  /* 10a9442d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a9442f jmp 0x10a9466b */
  goto L_10a9466b;
L_10a94434:;
  /* 10a94434 cmp dword ptr [0x10ab06d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab06d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a9443b jne 0x10a94474 */
  if (!C.zf) goto L_10a94474;
  /* 10a9443d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 10a94442 push 0x10aaccd8 */
  push32((uint32_t)(0x10aaccd8u));
  /* 10a94447 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a94449 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a9444b call 0x10a84390 */
  push32(0x10a94450u); f_10a84390();
  /* 10a94450 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a94453 mov dword ptr [0x10ab06d0], eax */
  w32((uint32_t)(0x10ab06d0), (EAX));
  /* 10a94458 cmp dword ptr [0x10ab06d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab06d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a9445f jne 0x10a94469 */
  if (!C.zf) goto L_10a94469;
  /* 10a94461 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a94464 jmp 0x10a9466b */
  goto L_10a9466b;
L_10a94469:;
  /* 10a94469 mov eax, dword ptr [0x10ab06d0] */
  EAX = (r32((uint32_t)(0x10ab06d0)));
  /* 10a9446e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10a94474:;
  /* 10a94474 cmp dword ptr [0x10ab06d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab06d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a9447b jne 0x10a944b5 */
  if (!C.zf) goto L_10a944b5;
  /* 10a9447d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 10a94482 push 0x10aaccd8 */
  push32((uint32_t)(0x10aaccd8u));
  /* 10a94487 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a94489 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a9448b call 0x10a84390 */
  push32(0x10a94490u); f_10a84390();
  /* 10a94490 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a94493 mov dword ptr [0x10ab06d8], eax */
  w32((uint32_t)(0x10ab06d8), (EAX));
  /* 10a94498 cmp dword ptr [0x10ab06d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab06d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a9449f jne 0x10a944a9 */
  if (!C.zf) goto L_10a944a9;
  /* 10a944a1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a944a4 jmp 0x10a9466b */
  goto L_10a9466b;
L_10a944a9:;
  /* 10a944a9 mov ecx, dword ptr [0x10ab06d8] */
  ECX = (r32((uint32_t)(0x10ab06d8)));
  /* 10a944af mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_10a944b5:;
  /* 10a944b5 mov edx, dword ptr [0x10ab06d0] */
  EDX = (r32((uint32_t)(0x10ab06d0)));
  /* 10a944bb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10a944be mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a944c1 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a944c4 push eax */
  push32((uint32_t)(EAX));
  /* 10a944c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a944c8 push ecx */
  push32((uint32_t)(ECX));
  /* 10a944c9 call 0x10a94670 */
  push32(0x10a944ceu); f_10a94670();
  /* 10a944ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a944d1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a944d4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a944d8 jl 0x10a94571 */
  if ((C.sf!=C.of)) goto L_10a94571;
  /* 10a944de mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a944e1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a944e4 je 0x10a94571 */
  if (C.zf) goto L_10a94571;
  /* 10a944ea cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a944ee je 0x10a94563 */
  if (C.zf) goto L_10a94563;
  /* 10a944f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a944f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a944f5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a944f8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10a944fb push edx */
  push32((uint32_t)(EDX));
  /* 10a944fc call 0x10a84e20 */
  push32(0x10a94501u); f_10a84e20();
  /* 10a94501 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a94504 jmp 0x10a9450f */
  goto L_10a9450f;
L_10a94506:;
  /* 10a94506 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a94509 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a9450c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10a9450f:;
  /* 10a9450f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a94512 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a94515 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a94519 je 0x10a94530 */
  if (C.zf) goto L_10a94530;
  /* 10a9451b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a9451e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a94521 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a94524 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10a94527 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 10a9452b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10a9452e jmp 0x10a94506 */
  goto L_10a94506;
L_10a94530:;
  /* 10a94530 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 10a94535 push 0x10aaccd8 */
  push32((uint32_t)(0x10aaccd8u));
  /* 10a9453a push 2 */
  push32((uint32_t)(0x2u));
  /* 10a9453c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a9453f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10a94542 push eax */
  push32((uint32_t)(EAX));
  /* 10a94543 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a94546 push ecx */
  push32((uint32_t)(ECX));
  /* 10a94547 call 0x10a84820 */
  push32(0x10a9454cu); f_10a84820();
  /* 10a9454c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a9454f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a94552 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a94556 je 0x10a94561 */
  if (C.zf) goto L_10a94561;
  /* 10a94558 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a9455b mov dword ptr [0x10ab06d0], edx */
  w32((uint32_t)(0x10ab06d0), (EDX));
L_10a94561:;
  /* 10a94561 jmp 0x10a9456f */
  goto L_10a9456f;
L_10a94563:;
  /* 10a94563 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a94566 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a94569 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a9456c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_10a9456f:;
  /* 10a9456f jmp 0x10a945e4 */
  goto L_10a945e4;
L_10a94571:;
  /* 10a94571 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a94575 jne 0x10a945dd */
  if (!C.zf) goto L_10a945dd;
  /* 10a94577 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a9457b jge 0x10a94585 */
  if ((C.sf==C.of)) goto L_10a94585;
  /* 10a9457d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a94580 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a94582 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10a94585:;
  /* 10a94585 push 0xce */
  push32((uint32_t)(0xceu));
  /* 10a9458a push 0x10aaccd8 */
  push32((uint32_t)(0x10aaccd8u));
  /* 10a9458f push 2 */
  push32((uint32_t)(0x2u));
  /* 10a94591 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a94594 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 10a9459b push edx */
  push32((uint32_t)(EDX));
  /* 10a9459c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a9459f push eax */
  push32((uint32_t)(EAX));
  /* 10a945a0 call 0x10a84820 */
  push32(0x10a945a5u); f_10a84820();
  /* 10a945a5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a945a8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a945ab cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a945af jne 0x10a945b9 */
  if (!C.zf) goto L_10a945b9;
  /* 10a945b1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a945b4 jmp 0x10a9466b */
  goto L_10a9466b;
L_10a945b9:;
  /* 10a945b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a945bc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a945bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a945c2 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 10a945c5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a945c8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a945cb mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 10a945d3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a945d6 mov dword ptr [0x10ab06d0], eax */
  w32((uint32_t)(0x10ab06d0), (EAX));
  /* 10a945db jmp 0x10a945e4 */
  goto L_10a945e4;
L_10a945dd:;
  /* 10a945dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a945df jmp 0x10a9466b */
  goto L_10a9466b;
L_10a945e4:;
  /* 10a945e4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a945e8 je 0x10a94669 */
  if (C.zf) goto L_10a94669;
  /* 10a945ea push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 10a945ef push 0x10aaccd8 */
  push32((uint32_t)(0x10aaccd8u));
  /* 10a945f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a945f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a945f9 push ecx */
  push32((uint32_t)(ECX));
  /* 10a945fa call 0x10a871c0 */
  push32(0x10a945ffu); f_10a871c0();
  /* 10a945ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a94602 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a94605 push eax */
  push32((uint32_t)(EAX));
  /* 10a94606 call 0x10a84390 */
  push32(0x10a9460bu); f_10a84390();
  /* 10a9460b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a9460e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10a94611 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a94615 je 0x10a94669 */
  if (C.zf) goto L_10a94669;
  /* 10a94617 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a9461a push edx */
  push32((uint32_t)(EDX));
  /* 10a9461b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a9461e push eax */
  push32((uint32_t)(EAX));
  /* 10a9461f call 0x10a87340 */
  push32(0x10a94624u); f_10a87340();
  /* 10a94624 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a94627 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a9462a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a9462d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a94630 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a94632 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a94635 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a94638 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10a9463b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a9463e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a94641 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a94644 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a94647 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a94649 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a9464b not edx */
  EDX = (~(EDX));
  /* 10a9464d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10a94650 push edx */
  push32((uint32_t)(EDX));
  /* 10a94651 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a94654 push eax */
  push32((uint32_t)(EAX));
  /* 10a94655 call dword ptr [0x10ab329c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab329c))), 0x10a9465bu);
  /* 10a9465b push 2 */
  push32((uint32_t)(0x2u));
  /* 10a9465d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a94660 push ecx */
  push32((uint32_t)(ECX));
  /* 10a94661 call 0x10a84e20 */
  push32(0x10a94666u); f_10a84e20();
  /* 10a94666 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a94669:;
  /* 10a94669 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a9466b:;
  /* 10a9466b pop esi */
  ESI = (pop32());
  /* 10a9466c mov esp, ebp */
  ESP = (EBP);
  /* 10a9466e pop ebp */
  EBP = (pop32());
  /* 10a9466f ret  */
  ESPCHK(0x10a94390u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x10a94670 (124 bytes, 47 insns) */
void f_10a94670(void) {
  FTRACE(0x10a94670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a94670 push ebp */
  push32((uint32_t)(EBP));
  /* 10a94671 mov ebp, esp */
  EBP = (ESP);
  /* 10a94673 push ecx */
  push32((uint32_t)(ECX));
  /* 10a94674 mov eax, dword ptr [0x10ab06d0] */
  EAX = (r32((uint32_t)(0x10ab06d0)));
  /* 10a94679 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a9467c jmp 0x10a94687 */
  goto L_10a94687;
L_10a9467e:;
  /* 10a9467e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a94681 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a94684 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10a94687:;
  /* 10a94687 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a9468a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a9468d je 0x10a946da */
  if (C.zf) goto L_10a946da;
  /* 10a9468f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a94692 push eax */
  push32((uint32_t)(EAX));
  /* 10a94693 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a94696 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a94698 push edx */
  push32((uint32_t)(EDX));
  /* 10a94699 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a9469c push eax */
  push32((uint32_t)(EAX));
  /* 10a9469d call 0x10a93e40 */
  push32(0x10a946a2u); f_10a93e40();
  /* 10a946a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a946a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a946a7 jne 0x10a946d8 */
  if (!C.zf) goto L_10a946d8;
  /* 10a946a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a946ac mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a946ae mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a946b1 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 10a946b5 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a946b8 je 0x10a946ca */
  if (C.zf) goto L_10a946ca;
  /* 10a946ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a946bd mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a946bf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a946c2 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 10a946c6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a946c8 jne 0x10a946d8 */
  if (!C.zf) goto L_10a946d8;
L_10a946ca:;
  /* 10a946ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a946cd sub eax, dword ptr [0x10ab06d0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10ab06d0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a946d3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10a946d6 jmp 0x10a946e8 */
  goto L_10a946e8;
L_10a946d8:;
  /* 10a946d8 jmp 0x10a9467e */
  goto L_10a9467e;
L_10a946da:;
  /* 10a946da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a946dd sub eax, dword ptr [0x10ab06d0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10ab06d0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a946e3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10a946e6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_10a946e8:;
  /* 10a946e8 mov esp, ebp */
  ESP = (EBP);
  /* 10a946ea pop ebp */
  EBP = (pop32());
  /* 10a946eb ret  */
  ESPCHK(0x10a94670u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x10a946f0 (238 bytes, 80 insns) */
void f_10a946f0(void) {
  FTRACE(0x10a946f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a946f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a946f1 mov ebp, esp */
  EBP = (ESP);
  /* 10a946f3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a946f6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10a946fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a94700 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a94703 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a94707 jne 0x10a94710 */
  if (!C.zf) goto L_10a94710;
  /* 10a94709 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a9470b jmp 0x10a947da */
  goto L_10a947da;
L_10a94710:;
  /* 10a94710 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a94713 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a94715 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a94718 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a9471b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a9471e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a94720 je 0x10a9472d */
  if (C.zf) goto L_10a9472d;
  /* 10a94722 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a94725 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a94728 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10a9472b jmp 0x10a94710 */
  goto L_10a94710;
L_10a9472d:;
  /* 10a9472d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 10a94732 push 0x10aaccd8 */
  push32((uint32_t)(0x10aaccd8u));
  /* 10a94737 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a94739 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a9473c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 10a94743 push eax */
  push32((uint32_t)(EAX));
  /* 10a94744 call 0x10a84390 */
  push32(0x10a94749u); f_10a84390();
  /* 10a94749 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a9474c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a9474f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a94752 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a94755 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a94759 jne 0x10a94765 */
  if (!C.zf) goto L_10a94765;
  /* 10a9475b push 9 */
  push32((uint32_t)(0x9u));
  /* 10a9475d call 0x10a83300 */
  push32(0x10a94762u); f_10a83300();
  /* 10a94762 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a94765:;
  /* 10a94765 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a94768 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10a9476b:;
  /* 10a9476b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a9476e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a94771 je 0x10a947ce */
  if (C.zf) goto L_10a947ce;
  /* 10a94773 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 10a94778 push 0x10aaccd8 */
  push32((uint32_t)(0x10aaccd8u));
  /* 10a9477d push 2 */
  push32((uint32_t)(0x2u));
  /* 10a9477f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a94782 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a94784 push edx */
  push32((uint32_t)(EDX));
  /* 10a94785 call 0x10a871c0 */
  push32(0x10a9478au); f_10a871c0();
  /* 10a9478a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a9478d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a94790 push eax */
  push32((uint32_t)(EAX));
  /* 10a94791 call 0x10a84390 */
  push32(0x10a94796u); f_10a84390();
  /* 10a94796 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a94799 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a9479c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10a9479e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a947a1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a947a4 je 0x10a947ba */
  if (C.zf) goto L_10a947ba;
  /* 10a947a6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a947a9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a947ab push ecx */
  push32((uint32_t)(ECX));
  /* 10a947ac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a947af mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a947b1 push eax */
  push32((uint32_t)(EAX));
  /* 10a947b2 call 0x10a87340 */
  push32(0x10a947b7u); f_10a87340();
  /* 10a947b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a947ba:;
  /* 10a947ba mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a947bd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a947c0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a947c3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a947c6 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a947c9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10a947cc jmp 0x10a9476b */
  goto L_10a9476b;
L_10a947ce:;
  /* 10a947ce mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a947d1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10a947d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10a947da:;
  /* 10a947da mov esp, ebp */
  ESP = (EBP);
  /* 10a947dc pop ebp */
  EBP = (pop32());
  /* 10a947dd ret  */
  ESPCHK(0x10a946f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100147e0 @ 0x10a947e0 (237 bytes, 81 insns) */
void f_10a947e0(void) {
  FTRACE(0x10a947e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a947e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a947e1 mov ebp, esp */
  EBP = (ESP);
  /* 10a947e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a947e4 cmp dword ptr [0x10ab1e0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab1e0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a947eb jne 0x10a94802 */
  if (!C.zf) goto L_10a94802;
  /* 10a947ed mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a947f0 push eax */
  push32((uint32_t)(EAX));
  /* 10a947f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a947f4 push ecx */
  push32((uint32_t)(ECX));
  /* 10a947f5 call 0x10a948e0 */
  push32(0x10a947fau); f_10a948e0();
  /* 10a947fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a947fd jmp 0x10a948c9 */
  goto L_10a948c9;
L_10a94802:;
  /* 10a94802 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10a94804 call 0x10a87d90 */
  push32(0x10a94809u); f_10a87d90();
  /* 10a94809 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a9480c jmp 0x10a94817 */
  goto L_10a94817;
L_10a9480e:;
  /* 10a9480e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a94811 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a94814 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10a94817:;
  /* 10a94817 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a9481a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 10a9481e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 10a94822 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a94825 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a9482b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a9482d je 0x10a948ab */
  if (C.zf) goto L_10a948ab;
  /* 10a9482f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a94832 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a94837 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a94839 mov cl, byte ptr [eax + 0x10ab1f21] */
  CL = (r8((uint32_t)(EAX + 0x10ab1f21)));
  /* 10a9483f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10a94842 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a94844 je 0x10a94896 */
  if (C.zf) goto L_10a94896;
  /* 10a94846 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a94849 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a9484c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10a9484f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a94852 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a94854 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10a94856 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a94858 jne 0x10a94868 */
  if (!C.zf) goto L_10a94868;
  /* 10a9485a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10a9485c call 0x10a87e30 */
  push32(0x10a94861u); f_10a87e30();
  /* 10a94861 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a94864 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a94866 jmp 0x10a948c9 */
  goto L_10a948c9;
L_10a94868:;
  /* 10a94868 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a9486b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a94871 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10a94874 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a94877 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a94879 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10a9487b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10a9487d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a94880 jne 0x10a94894 */
  if (!C.zf) goto L_10a94894;
  /* 10a94882 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10a94884 call 0x10a87e30 */
  push32(0x10a94889u); f_10a87e30();
  /* 10a94889 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a9488c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a9488f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a94892 jmp 0x10a948c9 */
  goto L_10a948c9;
L_10a94894:;
  /* 10a94894 jmp 0x10a948a6 */
  goto L_10a948a6;
L_10a94896:;
  /* 10a94896 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a94899 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a9489f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a948a2 jne 0x10a948a6 */
  if (!C.zf) goto L_10a948a6;
  /* 10a948a4 jmp 0x10a948ab */
  goto L_10a948ab;
L_10a948a6:;
  /* 10a948a6 jmp 0x10a9480e */
  goto L_10a9480e;
L_10a948ab:;
  /* 10a948ab push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10a948ad call 0x10a87e30 */
  push32(0x10a948b2u); f_10a87e30();
  /* 10a948b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a948b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a948b8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a948bd cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a948c0 jne 0x10a948c7 */
  if (!C.zf) goto L_10a948c7;
  /* 10a948c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a948c5 jmp 0x10a948c9 */
  goto L_10a948c9;
L_10a948c7:;
  /* 10a948c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a948c9:;
  /* 10a948c9 mov esp, ebp */
  ESP = (EBP);
  /* 10a948cb pop ebp */
  EBP = (pop32());
  /* 10a948cc ret  */
  ESPCHK(0x10a947e0u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x10a948e0 (193 bytes, 87 insns) */
void f_10a948e0(void) {
  FTRACE(0x10a948e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a948e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a948e2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10a948e6 push ebx */
  push32((uint32_t)(EBX));
  /* 10a948e7 mov ebx, eax */
  EBX = (EAX);
  /* 10a948e9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10a948ec mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10a948f0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10a948f6 je 0x10a9490b */
  if (C.zf) goto L_10a9490b;
L_10a948f8:;
  /* 10a948f8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 10a948fa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10a948fb cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a948fd je 0x10a948d0 */
  if (C.zf) { jmp_ind(0x10a948d0u); return; }
  /* 10a948ff test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10a94901 je 0x10a94954 */
  if (C.zf) goto L_10a94954;
  /* 10a94903 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10a94909 jne 0x10a948f8 */
  if (!C.zf) goto L_10a948f8;
L_10a9490b:;
  /* 10a9490b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 10a9490d push edi */
  push32((uint32_t)(EDI));
  /* 10a9490e mov eax, ebx */
  EAX = (EBX);
  /* 10a94910 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 10a94913 push esi */
  push32((uint32_t)(ESI));
  /* 10a94914 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_10a94916:;
  /* 10a94916 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10a94918 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 10a9491d mov eax, ecx */
  EAX = (ECX);
  /* 10a9491f mov esi, edi */
  ESI = (EDI);
  /* 10a94921 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 10a94923 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10a94925 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10a94927 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a9492a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a9492d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10a9492f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10a94931 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a94934 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 10a9493a jne 0x10a94958 */
  if (!C.zf) goto L_10a94958;
  /* 10a9493c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10a94941 je 0x10a94916 */
  if (C.zf) goto L_10a94916;
  /* 10a94943 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10a94948 jne 0x10a94952 */
  if (!C.zf) goto L_10a94952;
  /* 10a9494a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 10a94950 jne 0x10a94916 */
  if (!C.zf) goto L_10a94916;
L_10a94952:;
  /* 10a94952 pop esi */
  ESI = (pop32());
  /* 10a94953 pop edi */
  EDI = (pop32());
L_10a94954:;
  /* 10a94954 pop ebx */
  EBX = (pop32());
  /* 10a94955 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a94957 ret  */
  ESPCHK(0x10a948e0u, _esp0);
  ESP += 4; return;
L_10a94958:;
  /* 10a94958 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10a9495b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a9495d je 0x10a94995 */
  if (C.zf) goto L_10a94995;
  /* 10a9495f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10a94961 je 0x10a94952 */
  if (C.zf) goto L_10a94952;
  /* 10a94963 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a94965 je 0x10a9498e */
  if (C.zf) goto L_10a9498e;
  /* 10a94967 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10a94969 je 0x10a94952 */
  if (C.zf) goto L_10a94952;
  /* 10a9496b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10a9496e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a94970 je 0x10a94987 */
  if (C.zf) goto L_10a94987;
  /* 10a94972 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10a94974 je 0x10a94952 */
  if (C.zf) goto L_10a94952;
  /* 10a94976 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a94978 je 0x10a94980 */
  if (C.zf) goto L_10a94980;
  /* 10a9497a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10a9497c je 0x10a94952 */
  if (C.zf) goto L_10a94952;
  /* 10a9497e jmp 0x10a94916 */
  goto L_10a94916;
L_10a94980:;
  /* 10a94980 pop esi */
  ESI = (pop32());
  /* 10a94981 pop edi */
  EDI = (pop32());
  /* 10a94982 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 10a94985 pop ebx */
  EBX = (pop32());
  /* 10a94986 ret  */
  ESPCHK(0x10a948e0u, _esp0);
  ESP += 4; return;
L_10a94987:;
  /* 10a94987 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 10a9498a pop esi */
  ESI = (pop32());
  /* 10a9498b pop edi */
  EDI = (pop32());
  /* 10a9498c pop ebx */
  EBX = (pop32());
  /* 10a9498d ret  */
  ESPCHK(0x10a948e0u, _esp0);
  ESP += 4; return;
L_10a9498e:;
  /* 10a9498e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 10a94991 pop esi */
  ESI = (pop32());
  /* 10a94992 pop edi */
  EDI = (pop32());
  /* 10a94993 pop ebx */
  EBX = (pop32());
  /* 10a94994 ret  */
  ESPCHK(0x10a948e0u, _esp0);
  ESP += 4; return;
L_10a94995:;
  /* 10a94995 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 10a94998 pop esi */
  ESI = (pop32());
  /* 10a94999 pop edi */
  EDI = (pop32());
  /* 10a9499a pop ebx */
  EBX = (pop32());
  /* 10a9499b ret  */
  ESPCHK(0x10a948e0u, _esp0);
  ESP += 4; return;
  /* 10a9499c jmp dword ptr [0x10ab3320] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10ab3320)))); return;
}

/* RtlUnwind @ 0x10a94aec (6 bytes, 1 insns) */
void f_10a94aec(void) {
  FTRACE(0x10a94aecu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a94aec jmp dword ptr [0x10ab32d4] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10ab32d4)))); return;
}

