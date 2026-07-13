#include "recomp.h"

/* FUN_10010850 @ 0x10730850 (289 bytes, 97 insns) */
void f_10730850(void) {
  FTRACE(0x10730850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10730850 push ebp */
  push32((uint32_t)(EBP));
  /* 10730851 mov ebp, esp */
  EBP = (ESP);
  /* 10730853 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10730856 push esi */
  push32((uint32_t)(ESI));
  /* 10730857 mov eax, dword ptr [0x1074ec98] */
  EAX = (r32((uint32_t)(0x1074ec98)));
  /* 1073085c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1073085f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10730866 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1073086d jmp 0x10730878 */
  goto L_10730878;
L_1073086f:;
  /* 1073086f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10730872 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10730875 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10730878:;
  /* 10730878 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1073087c jae 0x107308b1 */
  if (!C.cf) goto L_107308b1;
  /* 1073087e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10730881 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10730884 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10730887 push ecx */
  push32((uint32_t)(ECX));
  /* 10730888 call 0x10726930 */
  push32(0x1073088du); f_10726930();
  /* 1073088d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10730890 mov esi, eax */
  ESI = (EAX);
  /* 10730892 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10730895 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10730898 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 1073089c push ecx */
  push32((uint32_t)(ECX));
  /* 1073089d call 0x10726930 */
  push32(0x107308a2u); f_10726930();
  /* 107308a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107308a5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107308a8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 107308ac mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 107308af jmp 0x1073086f */
  goto L_1073086f;
L_107308b1:;
  /* 107308b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107308b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107308b7 push eax */
  push32((uint32_t)(EAX));
  /* 107308b8 call 0x10723ae0 */
  push32(0x107308bdu); f_10723ae0();
  /* 107308bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107308c0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107308c3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107308c7 je 0x10730969 */
  if (C.zf) goto L_10730969;
  /* 107308cd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107308d0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 107308d3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 107308da jmp 0x107308e5 */
  goto L_107308e5;
L_107308dc:;
  /* 107308dc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107308df add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107308e2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_107308e5:;
  /* 107308e5 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107308e9 jae 0x1073095a */
  if (!C.cf) goto L_1073095a;
  /* 107308eb mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107308ee mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 107308f1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107308f4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107308f7 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 107308fa mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107308fd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10730900 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10730903 push ecx */
  push32((uint32_t)(ECX));
  /* 10730904 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10730907 push edx */
  push32((uint32_t)(EDX));
  /* 10730908 call 0x10726ab0 */
  push32(0x1073090du); f_10726ab0();
  /* 1073090d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10730910 push eax */
  push32((uint32_t)(EAX));
  /* 10730911 call 0x10726930 */
  push32(0x10730916u); f_10726930();
  /* 10730916 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10730919 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1073091c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1073091e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10730921 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10730924 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10730927 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1073092a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1073092d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10730930 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10730933 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10730936 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 1073093a push eax */
  push32((uint32_t)(EAX));
  /* 1073093b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1073093e push ecx */
  push32((uint32_t)(ECX));
  /* 1073093f call 0x10726ab0 */
  push32(0x10730944u); f_10726ab0();
  /* 10730944 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10730947 push eax */
  push32((uint32_t)(EAX));
  /* 10730948 call 0x10726930 */
  push32(0x1073094du); f_10726930();
  /* 1073094d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10730950 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10730953 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10730955 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10730958 jmp 0x107308dc */
  goto L_107308dc;
L_1073095a:;
  /* 1073095a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1073095d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10730960 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10730963 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10730966 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10730969:;
  /* 10730969 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1073096c pop esi */
  ESI = (pop32());
  /* 1073096d mov esp, ebp */
  ESP = (EBP);
  /* 1073096f pop ebp */
  EBP = (pop32());
  /* 10730970 ret  */
  ESPCHK(0x10730850u, _esp0);
  ESP += 4; return;
}

/* FUN_10010980 @ 0x10730980 (291 bytes, 97 insns) */
void f_10730980(void) {
  FTRACE(0x10730980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10730980 push ebp */
  push32((uint32_t)(EBP));
  /* 10730981 mov ebp, esp */
  EBP = (ESP);
  /* 10730983 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10730986 push esi */
  push32((uint32_t)(ESI));
  /* 10730987 mov eax, dword ptr [0x1074ec98] */
  EAX = (r32((uint32_t)(0x1074ec98)));
  /* 1073098c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1073098f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10730996 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1073099d jmp 0x107309a8 */
  goto L_107309a8;
L_1073099f:;
  /* 1073099f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107309a2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107309a5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_107309a8:;
  /* 107309a8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107309ac jae 0x107309e2 */
  if (!C.cf) goto L_107309e2;
  /* 107309ae mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107309b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107309b4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 107309b8 push ecx */
  push32((uint32_t)(ECX));
  /* 107309b9 call 0x10726930 */
  push32(0x107309beu); f_10726930();
  /* 107309be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107309c1 mov esi, eax */
  ESI = (EAX);
  /* 107309c3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107309c6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107309c9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 107309cd push ecx */
  push32((uint32_t)(ECX));
  /* 107309ce call 0x10726930 */
  push32(0x107309d3u); f_10726930();
  /* 107309d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107309d6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107309d9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 107309dd mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 107309e0 jmp 0x1073099f */
  goto L_1073099f;
L_107309e2:;
  /* 107309e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107309e5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107309e8 push eax */
  push32((uint32_t)(EAX));
  /* 107309e9 call 0x10723ae0 */
  push32(0x107309eeu); f_10723ae0();
  /* 107309ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107309f1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107309f4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107309f8 je 0x10730a9b */
  if (C.zf) goto L_10730a9b;
  /* 107309fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10730a01 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10730a04 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10730a0b jmp 0x10730a16 */
  goto L_10730a16;
L_10730a0d:;
  /* 10730a0d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10730a10 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10730a13 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10730a16:;
  /* 10730a16 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10730a1a jae 0x10730a8c */
  if (!C.cf) goto L_10730a8c;
  /* 10730a1c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10730a1f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10730a22 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10730a25 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10730a28 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10730a2b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10730a2e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10730a31 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10730a35 push ecx */
  push32((uint32_t)(ECX));
  /* 10730a36 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10730a39 push edx */
  push32((uint32_t)(EDX));
  /* 10730a3a call 0x10726ab0 */
  push32(0x10730a3fu); f_10726ab0();
  /* 10730a3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10730a42 push eax */
  push32((uint32_t)(EAX));
  /* 10730a43 call 0x10726930 */
  push32(0x10730a48u); f_10726930();
  /* 10730a48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10730a4b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10730a4e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10730a50 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10730a53 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10730a56 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10730a59 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10730a5c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10730a5f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10730a62 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10730a65 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10730a68 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10730a6c push eax */
  push32((uint32_t)(EAX));
  /* 10730a6d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10730a70 push ecx */
  push32((uint32_t)(ECX));
  /* 10730a71 call 0x10726ab0 */
  push32(0x10730a76u); f_10726ab0();
  /* 10730a76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10730a79 push eax */
  push32((uint32_t)(EAX));
  /* 10730a7a call 0x10726930 */
  push32(0x10730a7fu); f_10726930();
  /* 10730a7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10730a82 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10730a85 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10730a87 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10730a8a jmp 0x10730a0d */
  goto L_10730a0d;
L_10730a8c:;
  /* 10730a8c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10730a8f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10730a92 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10730a95 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10730a98 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10730a9b:;
  /* 10730a9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10730a9e pop esi */
  ESI = (pop32());
  /* 10730a9f mov esp, ebp */
  ESP = (EBP);
  /* 10730aa1 pop ebp */
  EBP = (pop32());
  /* 10730aa2 ret  */
  ESPCHK(0x10730980u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ab0 @ 0x10730ab0 (878 bytes, 273 insns) */
void f_10730ab0(void) {
  FTRACE(0x10730ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10730ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 10730ab1 mov ebp, esp */
  EBP = (ESP);
  /* 10730ab3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10730ab6 push esi */
  push32((uint32_t)(ESI));
  /* 10730ab7 mov eax, dword ptr [0x1074ec98] */
  EAX = (r32((uint32_t)(0x1074ec98)));
  /* 10730abc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10730abf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10730ac6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10730acd jmp 0x10730ad8 */
  goto L_10730ad8;
L_10730acf:;
  /* 10730acf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10730ad2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10730ad5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10730ad8:;
  /* 10730ad8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10730adc jae 0x10730b11 */
  if (!C.cf) goto L_10730b11;
  /* 10730ade mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10730ae1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10730ae4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10730ae7 push ecx */
  push32((uint32_t)(ECX));
  /* 10730ae8 call 0x10726930 */
  push32(0x10730aedu); f_10726930();
  /* 10730aed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10730af0 mov esi, eax */
  ESI = (EAX);
  /* 10730af2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10730af5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10730af8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 10730afc push ecx */
  push32((uint32_t)(ECX));
  /* 10730afd call 0x10726930 */
  push32(0x10730b02u); f_10726930();
  /* 10730b02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10730b05 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10730b08 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10730b0c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10730b0f jmp 0x10730acf */
  goto L_10730acf;
L_10730b11:;
  /* 10730b11 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10730b18 jmp 0x10730b23 */
  goto L_10730b23;
L_10730b1a:;
  /* 10730b1a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10730b1d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10730b20 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10730b23:;
  /* 10730b23 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10730b27 jae 0x10730b5d */
  if (!C.cf) goto L_10730b5d;
  /* 10730b29 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10730b2c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10730b2f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10730b33 push eax */
  push32((uint32_t)(EAX));
  /* 10730b34 call 0x10726930 */
  push32(0x10730b39u); f_10726930();
  /* 10730b39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10730b3c mov esi, eax */
  ESI = (EAX);
  /* 10730b3e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10730b41 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10730b44 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10730b48 push eax */
  push32((uint32_t)(EAX));
  /* 10730b49 call 0x10726930 */
  push32(0x10730b4eu); f_10726930();
  /* 10730b4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10730b51 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10730b54 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10730b58 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10730b5b jmp 0x10730b1a */
  goto L_10730b1a;
L_10730b5d:;
  /* 10730b5d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10730b60 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10730b66 push eax */
  push32((uint32_t)(EAX));
  /* 10730b67 call 0x10726930 */
  push32(0x10730b6cu); f_10726930();
  /* 10730b6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10730b6f mov esi, eax */
  ESI = (EAX);
  /* 10730b71 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10730b74 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 10730b7a push edx */
  push32((uint32_t)(EDX));
  /* 10730b7b call 0x10726930 */
  push32(0x10730b80u); f_10726930();
  /* 10730b80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10730b83 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10730b86 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10730b8a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10730b8d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10730b90 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10730b96 push edx */
  push32((uint32_t)(EDX));
  /* 10730b97 call 0x10726930 */
  push32(0x10730b9cu); f_10726930();
  /* 10730b9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10730b9f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10730ba2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10730ba6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10730ba9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10730bac mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 10730bb2 push ecx */
  push32((uint32_t)(ECX));
  /* 10730bb3 call 0x10726930 */
  push32(0x10730bb8u); f_10726930();
  /* 10730bb8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10730bbb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10730bbe lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10730bc2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10730bc5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10730bc8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 10730bce push edx */
  push32((uint32_t)(EDX));
  /* 10730bcf call 0x10726930 */
  push32(0x10730bd4u); f_10726930();
  /* 10730bd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10730bd7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10730bda lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10730bde mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10730be1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10730be4 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10730be9 push eax */
  push32((uint32_t)(EAX));
  /* 10730bea call 0x10723ae0 */
  push32(0x10730befu); f_10723ae0();
  /* 10730bef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10730bf2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10730bf5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10730bf9 je 0x10730e16 */
  if (C.zf) goto L_10730e16;
  /* 10730bff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10730c02 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10730c05 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10730c08 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10730c0e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10730c11 push 0xac */
  push32((uint32_t)(0xacu));
  /* 10730c16 mov eax, dword ptr [0x1074ec98] */
  EAX = (r32((uint32_t)(0x1074ec98)));
  /* 10730c1b push eax */
  push32((uint32_t)(EAX));
  /* 10730c1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10730c1f push ecx */
  push32((uint32_t)(ECX));
  /* 10730c20 call 0x1072a3e0 */
  push32(0x10730c25u); f_1072a3e0();
  /* 10730c25 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10730c28 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10730c2f jmp 0x10730c3a */
  goto L_10730c3a;
L_10730c31:;
  /* 10730c31 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10730c34 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10730c37 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10730c3a:;
  /* 10730c3a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10730c3e jae 0x10730cae */
  if (!C.cf) goto L_10730cae;
  /* 10730c40 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10730c43 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10730c46 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10730c49 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10730c4c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10730c4f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10730c52 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10730c55 push edx */
  push32((uint32_t)(EDX));
  /* 10730c56 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10730c59 push eax */
  push32((uint32_t)(EAX));
  /* 10730c5a call 0x10726ab0 */
  push32(0x10730c5fu); f_10726ab0();
  /* 10730c5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10730c62 push eax */
  push32((uint32_t)(EAX));
  /* 10730c63 call 0x10726930 */
  push32(0x10730c68u); f_10726930();
  /* 10730c68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10730c6b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10730c6e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10730c72 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10730c75 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10730c78 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10730c7b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10730c7e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 10730c82 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10730c85 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10730c88 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 10730c8c push edx */
  push32((uint32_t)(EDX));
  /* 10730c8d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10730c90 push eax */
  push32((uint32_t)(EAX));
  /* 10730c91 call 0x10726ab0 */
  push32(0x10730c96u); f_10726ab0();
  /* 10730c96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10730c99 push eax */
  push32((uint32_t)(EAX));
  /* 10730c9a call 0x10726930 */
  push32(0x10730c9fu); f_10726930();
  /* 10730c9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10730ca2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10730ca5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10730ca9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10730cac jmp 0x10730c31 */
  goto L_10730c31;
L_10730cae:;
  /* 10730cae mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10730cb5 jmp 0x10730cc0 */
  goto L_10730cc0;
L_10730cb7:;
  /* 10730cb7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10730cba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10730cbd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10730cc0:;
  /* 10730cc0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10730cc4 jae 0x10730d36 */
  if (!C.cf) goto L_10730d36;
  /* 10730cc6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10730cc9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10730ccc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10730ccf mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 10730cd3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10730cd6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10730cd9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10730cdd push eax */
  push32((uint32_t)(EAX));
  /* 10730cde mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10730ce1 push ecx */
  push32((uint32_t)(ECX));
  /* 10730ce2 call 0x10726ab0 */
  push32(0x10730ce7u); f_10726ab0();
  /* 10730ce7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10730cea push eax */
  push32((uint32_t)(EAX));
  /* 10730ceb call 0x10726930 */
  push32(0x10730cf0u); f_10726930();
  /* 10730cf0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10730cf3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10730cf6 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10730cfa mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10730cfd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10730d00 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10730d03 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10730d06 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 10730d0a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10730d0d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10730d10 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10730d14 push eax */
  push32((uint32_t)(EAX));
  /* 10730d15 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10730d18 push ecx */
  push32((uint32_t)(ECX));
  /* 10730d19 call 0x10726ab0 */
  push32(0x10730d1eu); f_10726ab0();
  /* 10730d1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10730d21 push eax */
  push32((uint32_t)(EAX));
  /* 10730d22 call 0x10726930 */
  push32(0x10730d27u); f_10726930();
  /* 10730d27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10730d2a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10730d2d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10730d31 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10730d34 jmp 0x10730cb7 */
  goto L_10730cb7;
L_10730d36:;
  /* 10730d36 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10730d39 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10730d3c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 10730d42 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10730d45 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 10730d4b push ecx */
  push32((uint32_t)(ECX));
  /* 10730d4c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10730d4f push edx */
  push32((uint32_t)(EDX));
  /* 10730d50 call 0x10726ab0 */
  push32(0x10730d55u); f_10726ab0();
  /* 10730d55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10730d58 push eax */
  push32((uint32_t)(EAX));
  /* 10730d59 call 0x10726930 */
  push32(0x10730d5eu); f_10726930();
  /* 10730d5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10730d61 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10730d64 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10730d68 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10730d6b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10730d6e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10730d71 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 10730d77 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10730d7a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10730d80 push eax */
  push32((uint32_t)(EAX));
  /* 10730d81 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10730d84 push ecx */
  push32((uint32_t)(ECX));
  /* 10730d85 call 0x10726ab0 */
  push32(0x10730d8au); f_10726ab0();
  /* 10730d8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10730d8d push eax */
  push32((uint32_t)(EAX));
  /* 10730d8e call 0x10726930 */
  push32(0x10730d93u); f_10726930();
  /* 10730d93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10730d96 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10730d99 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10730d9d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10730da0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10730da3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10730da6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 10730dac mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10730daf mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 10730db5 push ecx */
  push32((uint32_t)(ECX));
  /* 10730db6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10730db9 push edx */
  push32((uint32_t)(EDX));
  /* 10730dba call 0x10726ab0 */
  push32(0x10730dbfu); f_10726ab0();
  /* 10730dbf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10730dc2 push eax */
  push32((uint32_t)(EAX));
  /* 10730dc3 call 0x10726930 */
  push32(0x10730dc8u); f_10726930();
  /* 10730dc8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10730dcb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10730dce lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10730dd2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10730dd5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10730dd8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10730ddb mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 10730de1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10730de4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 10730dea push eax */
  push32((uint32_t)(EAX));
  /* 10730deb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10730dee push ecx */
  push32((uint32_t)(ECX));
  /* 10730def call 0x10726ab0 */
  push32(0x10730df4u); f_10726ab0();
  /* 10730df4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10730df7 push eax */
  push32((uint32_t)(EAX));
  /* 10730df8 call 0x10726930 */
  push32(0x10730dfdu); f_10726930();
  /* 10730dfd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10730e00 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10730e03 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10730e07 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10730e0a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10730e0d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10730e10 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_10730e16:;
  /* 10730e16 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10730e19 pop esi */
  ESI = (pop32());
  /* 10730e1a mov esp, ebp */
  ESP = (EBP);
  /* 10730e1c pop ebp */
  EBP = (pop32());
  /* 10730e1d ret  */
  ESPCHK(0x10730ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010e20 @ 0x10730e20 (31 bytes, 15 insns) */
void f_10730e20(void) {
  FTRACE(0x10730e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10730e20 push ebp */
  push32((uint32_t)(EBP));
  /* 10730e21 mov ebp, esp */
  EBP = (ESP);
  /* 10730e23 push 0 */
  push32((uint32_t)(0x0u));
  /* 10730e25 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10730e28 push eax */
  push32((uint32_t)(EAX));
  /* 10730e29 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10730e2c push ecx */
  push32((uint32_t)(ECX));
  /* 10730e2d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10730e30 push edx */
  push32((uint32_t)(EDX));
  /* 10730e31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10730e34 push eax */
  push32((uint32_t)(EAX));
  /* 10730e35 call 0x10730e40 */
  push32(0x10730e3au); f_10730e40();
  /* 10730e3a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10730e3d pop ebp */
  EBP = (pop32());
  /* 10730e3e ret  */
  ESPCHK(0x10730e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10010e40 @ 0x10730e40 (393 bytes, 123 insns) */
void f_10730e40(void) {
  FTRACE(0x10730e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10730e40 push ebp */
  push32((uint32_t)(EBP));
  /* 10730e41 mov ebp, esp */
  EBP = (ESP);
  /* 10730e43 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10730e46 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10730e4a jne 0x10730e56 */
  if (!C.zf) goto L_10730e56;
  /* 10730e4c mov eax, dword ptr [0x1074ec98] */
  EAX = (r32((uint32_t)(0x1074ec98)));
  /* 10730e51 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10730e54 jmp 0x10730e5c */
  goto L_10730e5c;
L_10730e56:;
  /* 10730e56 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10730e59 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10730e5c:;
  /* 10730e5c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10730e5f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10730e62 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10730e65 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10730e68 push 0x1074f88c */
  push32((uint32_t)(0x1074f88cu));
  /* 10730e6d call dword ptr [0x10752320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752320))), 0x10730e73u);
  /* 10730e73 cmp dword ptr [0x1074f87c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f87c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10730e7a je 0x10730e9a */
  if (C.zf) goto L_10730e9a;
  /* 10730e7c push 0x1074f88c */
  push32((uint32_t)(0x1074f88cu));
  /* 10730e81 call dword ptr [0x10752310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752310))), 0x10730e87u);
  /* 10730e87 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10730e89 call 0x10727500 */
  push32(0x10730e8eu); f_10727500();
  /* 10730e8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10730e91 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10730e98 jmp 0x10730ea1 */
  goto L_10730ea1;
L_10730e9a:;
  /* 10730e9a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10730ea1:;
  /* 10730ea1 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10730ea5 jbe 0x10730f92 */
  if ((C.cf||C.zf)) goto L_10730f92;
  /* 10730eab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10730eae mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10730eb0 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 10730eb3 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10730eb7 je 0x10730ec1 */
  if (C.zf) goto L_10730ec1;
  /* 10730eb9 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10730ebd je 0x10730ec6 */
  if (C.zf) goto L_10730ec6;
  /* 10730ebf jmp 0x10730f20 */
  goto L_10730f20;
L_10730ec1:;
  /* 10730ec1 jmp 0x10730f92 */
  goto L_10730f92;
L_10730ec6:;
  /* 10730ec6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10730ec9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10730ecc mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10730ecf mov dword ptr [0x1074f868], 0 */
  w32((uint32_t)(0x1074f868), (0x0u));
  /* 10730ed9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10730edc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10730edf cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10730ee2 jne 0x10730ef7 */
  if (!C.zf) goto L_10730ef7;
  /* 10730ee4 mov dword ptr [0x1074f868], 1 */
  w32((uint32_t)(0x1074f868), (0x1u));
  /* 10730eee mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10730ef1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10730ef4 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10730ef7:;
  /* 10730ef7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10730efa push ecx */
  push32((uint32_t)(ECX));
  /* 10730efb lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10730efe push edx */
  push32((uint32_t)(EDX));
  /* 10730eff lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10730f02 push eax */
  push32((uint32_t)(EAX));
  /* 10730f03 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10730f06 push ecx */
  push32((uint32_t)(ECX));
  /* 10730f07 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10730f0a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10730f0c push eax */
  push32((uint32_t)(EAX));
  /* 10730f0d call 0x10730fd0 */
  push32(0x10730f12u); f_10730fd0();
  /* 10730f12 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10730f15 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10730f18 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10730f1b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10730f1e jmp 0x10730f8d */
  goto L_10730f8d;
L_10730f20:;
  /* 10730f20 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10730f23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10730f25 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10730f27 mov ecx, dword ptr [0x1074dc98] */
  ECX = (r32((uint32_t)(0x1074dc98)));
  /* 10730f2d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10730f2f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10730f33 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10730f39 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10730f3b je 0x10730f68 */
  if (C.zf) goto L_10730f68;
  /* 10730f3d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10730f41 jbe 0x10730f68 */
  if ((C.cf||C.zf)) goto L_10730f68;
  /* 10730f43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10730f46 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10730f49 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10730f4b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10730f4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10730f50 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10730f53 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10730f56 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10730f59 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10730f5c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10730f5f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10730f62 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10730f65 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10730f68:;
  /* 10730f68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10730f6b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10730f6e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10730f70 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10730f72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10730f75 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10730f78 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10730f7b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10730f7e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10730f81 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10730f84 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10730f87 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10730f8a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10730f8d:;
  /* 10730f8d jmp 0x10730ea1 */
  goto L_10730ea1;
L_10730f92:;
  /* 10730f92 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10730f96 je 0x10730fa4 */
  if (C.zf) goto L_10730fa4;
  /* 10730f98 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10730f9a call 0x107275a0 */
  push32(0x10730f9fu); f_107275a0();
  /* 10730f9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10730fa2 jmp 0x10730faf */
  goto L_10730faf;
L_10730fa4:;
  /* 10730fa4 push 0x1074f88c */
  push32((uint32_t)(0x1074f88cu));
  /* 10730fa9 call dword ptr [0x10752310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752310))), 0x10730fafu);
L_10730faf:;
  /* 10730faf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10730fb3 jbe 0x10730fc3 */
  if ((C.cf||C.zf)) goto L_10730fc3;
  /* 10730fb5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10730fb8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10730fbb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10730fbe sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10730fc1 jmp 0x10730fc5 */
  goto L_10730fc5;
L_10730fc3:;
  /* 10730fc3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10730fc5:;
  /* 10730fc5 mov esp, ebp */
  ESP = (EBP);
  /* 10730fc7 pop ebp */
  EBP = (pop32());
  /* 10730fc8 ret  */
  ESPCHK(0x10730e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10010fd0 @ 0x10730fd0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_10730fd0(void) {
  FTRACE(0x10730fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10730fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10730fd1 mov ebp, esp */
  EBP = (ESP);
  /* 10730fd3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10730fd6 push esi */
  push32((uint32_t)(ESI));
  /* 10730fd7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 10730fdb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10730fde mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10730fe1 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10730fe4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10730fe7 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10730feb ja 0x10731538 */
  if ((!C.cf&&!C.zf)) goto L_10731538;
  /* 10730ff1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10730ff4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10730ff6 mov dl, byte ptr [eax + 0x10731599] */
  DL = (r8((uint32_t)(EAX + 0x10731599)));
  /* 10730ffc jmp dword ptr [edx*4 + 0x1073153d] */
  switch (EDX) {
    case 0: goto L_10731516;
    case 1: goto L_10731025;
    case 2: goto L_1073106b;
    case 3: goto L_107311b8;
    case 4: goto L_107311e0;
    case 5: goto L_1073127f;
    case 6: goto L_107312eb;
    case 7: goto L_10731314;
    case 8: goto L_10731355;
    case 9: goto L_10731437;
    case 10: goto L_1073149e;
    case 11: goto L_107314eb;
    case 12: goto L_10731003;
    case 13: goto L_10731048;
    case 14: goto L_1073108e;
    case 15: goto L_1073118e;
    case 16: goto L_10731225;
    case 17: goto L_10731252;
    case 18: goto L_107312a7;
    case 19: goto L_1073132b;
    case 20: goto L_107313d9;
    case 21: goto L_10731468;
    case 22: goto L_10731538;
    default: x86_unimpl("switch@0x10730ffc out of table"); return;
  }
L_10731003:;
  /* 10731003 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10731006 push ecx */
  push32((uint32_t)(ECX));
  /* 10731007 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1073100a push edx */
  push32((uint32_t)(EDX));
  /* 1073100b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1073100e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10731011 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10731014 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10731017 push eax */
  push32((uint32_t)(EAX));
  /* 10731018 call 0x107315f0 */
  push32(0x1073101du); f_107315f0();
  /* 1073101d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10731020 jmp 0x10731538 */
  goto L_10731538;
L_10731025:;
  /* 10731025 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10731028 push ecx */
  push32((uint32_t)(ECX));
  /* 10731029 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1073102c push edx */
  push32((uint32_t)(EDX));
  /* 1073102d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10731030 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10731033 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10731036 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 1073103a push eax */
  push32((uint32_t)(EAX));
  /* 1073103b call 0x107315f0 */
  push32(0x10731040u); f_107315f0();
  /* 10731040 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10731043 jmp 0x10731538 */
  goto L_10731538;
L_10731048:;
  /* 10731048 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1073104b push ecx */
  push32((uint32_t)(ECX));
  /* 1073104c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1073104f push edx */
  push32((uint32_t)(EDX));
  /* 10731050 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10731053 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10731056 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10731059 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 1073105d push eax */
  push32((uint32_t)(EAX));
  /* 1073105e call 0x107315f0 */
  push32(0x10731063u); f_107315f0();
  /* 10731063 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10731066 jmp 0x10731538 */
  goto L_10731538;
L_1073106b:;
  /* 1073106b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1073106e push ecx */
  push32((uint32_t)(ECX));
  /* 1073106f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10731072 push edx */
  push32((uint32_t)(EDX));
  /* 10731073 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10731076 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10731079 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1073107c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10731080 push eax */
  push32((uint32_t)(EAX));
  /* 10731081 call 0x107315f0 */
  push32(0x10731086u); f_107315f0();
  /* 10731086 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10731089 jmp 0x10731538 */
  goto L_10731538;
L_1073108e:;
  /* 1073108e cmp dword ptr [0x1074f868], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f868))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10731095 je 0x10731116 */
  if (C.zf) goto L_10731116;
  /* 10731097 mov dword ptr [0x1074f868], 0 */
  w32((uint32_t)(0x1074f868), (0x0u));
  /* 107310a1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 107310a4 push ecx */
  push32((uint32_t)(ECX));
  /* 107310a5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107310a8 push edx */
  push32((uint32_t)(EDX));
  /* 107310a9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107310ac push eax */
  push32((uint32_t)(EAX));
  /* 107310ad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107310b0 push ecx */
  push32((uint32_t)(ECX));
  /* 107310b1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107310b4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 107310ba push eax */
  push32((uint32_t)(EAX));
  /* 107310bb call 0x107317a0 */
  push32(0x107310c0u); f_107317a0();
  /* 107310c0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107310c3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107310c6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107310c9 jne 0x107310d0 */
  if (!C.zf) goto L_107310d0;
  /* 107310cb jmp 0x10731538 */
  goto L_10731538;
L_107310d0:;
  /* 107310d0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107310d3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107310d5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 107310d8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107310db mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107310dd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107310e0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107310e3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 107310e5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107310e8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107310ea sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107310ed mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107310f0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 107310f2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 107310f5 push ecx */
  push32((uint32_t)(ECX));
  /* 107310f6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107310f9 push edx */
  push32((uint32_t)(EDX));
  /* 107310fa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107310fd push eax */
  push32((uint32_t)(EAX));
  /* 107310fe mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10731101 push ecx */
  push32((uint32_t)(ECX));
  /* 10731102 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10731105 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 1073110b push eax */
  push32((uint32_t)(EAX));
  /* 1073110c call 0x107317a0 */
  push32(0x10731111u); f_107317a0();
  /* 10731111 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10731114 jmp 0x10731189 */
  goto L_10731189;
L_10731116:;
  /* 10731116 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10731119 push ecx */
  push32((uint32_t)(ECX));
  /* 1073111a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1073111d push edx */
  push32((uint32_t)(EDX));
  /* 1073111e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10731121 push eax */
  push32((uint32_t)(EAX));
  /* 10731122 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10731125 push ecx */
  push32((uint32_t)(ECX));
  /* 10731126 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10731129 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 1073112f push eax */
  push32((uint32_t)(EAX));
  /* 10731130 call 0x107317a0 */
  push32(0x10731135u); f_107317a0();
  /* 10731135 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10731138 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1073113b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1073113e jne 0x10731145 */
  if (!C.zf) goto L_10731145;
  /* 10731140 jmp 0x10731538 */
  goto L_10731538;
L_10731145:;
  /* 10731145 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10731148 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1073114a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 1073114d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10731150 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10731152 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10731155 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10731158 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1073115a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1073115d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1073115f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10731162 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10731165 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10731167 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1073116a push ecx */
  push32((uint32_t)(ECX));
  /* 1073116b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1073116e push edx */
  push32((uint32_t)(EDX));
  /* 1073116f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10731172 push eax */
  push32((uint32_t)(EAX));
  /* 10731173 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10731176 push ecx */
  push32((uint32_t)(ECX));
  /* 10731177 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1073117a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10731180 push eax */
  push32((uint32_t)(EAX));
  /* 10731181 call 0x107317a0 */
  push32(0x10731186u); f_107317a0();
  /* 10731186 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10731189:;
  /* 10731189 jmp 0x10731538 */
  goto L_10731538;
L_1073118e:;
  /* 1073118e mov ecx, dword ptr [0x1074f868] */
  ECX = (r32((uint32_t)(0x1074f868)));
  /* 10731194 mov dword ptr [0x1074f878], ecx */
  w32((uint32_t)(0x1074f878), (ECX));
  /* 1073119a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1073119d push edx */
  push32((uint32_t)(EDX));
  /* 1073119e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107311a1 push eax */
  push32((uint32_t)(EAX));
  /* 107311a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 107311a4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107311a7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 107311aa push edx */
  push32((uint32_t)(EDX));
  /* 107311ab call 0x10731640 */
  push32(0x107311b0u); f_10731640();
  /* 107311b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107311b3 jmp 0x10731538 */
  goto L_10731538;
L_107311b8:;
  /* 107311b8 mov eax, dword ptr [0x1074f868] */
  EAX = (r32((uint32_t)(0x1074f868)));
  /* 107311bd mov dword ptr [0x1074f878], eax */
  w32((uint32_t)(0x1074f878), (EAX));
  /* 107311c2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107311c5 push ecx */
  push32((uint32_t)(ECX));
  /* 107311c6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107311c9 push edx */
  push32((uint32_t)(EDX));
  /* 107311ca push 2 */
  push32((uint32_t)(0x2u));
  /* 107311cc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107311cf mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 107311d2 push ecx */
  push32((uint32_t)(ECX));
  /* 107311d3 call 0x10731640 */
  push32(0x107311d8u); f_10731640();
  /* 107311d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107311db jmp 0x10731538 */
  goto L_10731538;
L_107311e0:;
  /* 107311e0 mov edx, dword ptr [0x1074f868] */
  EDX = (r32((uint32_t)(0x1074f868)));
  /* 107311e6 mov dword ptr [0x1074f878], edx */
  w32((uint32_t)(0x1074f878), (EDX));
  /* 107311ec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107311ef mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 107311f2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 107311f3 mov ecx, 0xc */
  ECX = (0xcu);
  /* 107311f8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 107311fa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107311fd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10731201 jne 0x1073120a */
  if (!C.zf) goto L_1073120a;
  /* 10731203 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_1073120a:;
  /* 1073120a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1073120d push edx */
  push32((uint32_t)(EDX));
  /* 1073120e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10731211 push eax */
  push32((uint32_t)(EAX));
  /* 10731212 push 2 */
  push32((uint32_t)(0x2u));
  /* 10731214 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10731217 push ecx */
  push32((uint32_t)(ECX));
  /* 10731218 call 0x10731640 */
  push32(0x1073121du); f_10731640();
  /* 1073121d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10731220 jmp 0x10731538 */
  goto L_10731538;
L_10731225:;
  /* 10731225 mov edx, dword ptr [0x1074f868] */
  EDX = (r32((uint32_t)(0x1074f868)));
  /* 1073122b mov dword ptr [0x1074f878], edx */
  w32((uint32_t)(0x1074f878), (EDX));
  /* 10731231 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10731234 push eax */
  push32((uint32_t)(EAX));
  /* 10731235 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10731238 push ecx */
  push32((uint32_t)(ECX));
  /* 10731239 push 3 */
  push32((uint32_t)(0x3u));
  /* 1073123b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1073123e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10731241 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10731244 push eax */
  push32((uint32_t)(EAX));
  /* 10731245 call 0x10731640 */
  push32(0x1073124au); f_10731640();
  /* 1073124a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1073124d jmp 0x10731538 */
  goto L_10731538;
L_10731252:;
  /* 10731252 mov ecx, dword ptr [0x1074f868] */
  ECX = (r32((uint32_t)(0x1074f868)));
  /* 10731258 mov dword ptr [0x1074f878], ecx */
  w32((uint32_t)(0x1074f878), (ECX));
  /* 1073125e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10731261 push edx */
  push32((uint32_t)(EDX));
  /* 10731262 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10731265 push eax */
  push32((uint32_t)(EAX));
  /* 10731266 push 2 */
  push32((uint32_t)(0x2u));
  /* 10731268 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1073126b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1073126e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10731271 push edx */
  push32((uint32_t)(EDX));
  /* 10731272 call 0x10731640 */
  push32(0x10731277u); f_10731640();
  /* 10731277 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1073127a jmp 0x10731538 */
  goto L_10731538;
L_1073127f:;
  /* 1073127f mov eax, dword ptr [0x1074f868] */
  EAX = (r32((uint32_t)(0x1074f868)));
  /* 10731284 mov dword ptr [0x1074f878], eax */
  w32((uint32_t)(0x1074f878), (EAX));
  /* 10731289 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1073128c push ecx */
  push32((uint32_t)(ECX));
  /* 1073128d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10731290 push edx */
  push32((uint32_t)(EDX));
  /* 10731291 push 2 */
  push32((uint32_t)(0x2u));
  /* 10731293 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10731296 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10731299 push ecx */
  push32((uint32_t)(ECX));
  /* 1073129a call 0x10731640 */
  push32(0x1073129fu); f_10731640();
  /* 1073129f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107312a2 jmp 0x10731538 */
  goto L_10731538;
L_107312a7:;
  /* 107312a7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107312aa cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107312ae jg 0x107312cc */
  if ((!C.zf&&C.sf==C.of)) goto L_107312cc;
  /* 107312b0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107312b3 push eax */
  push32((uint32_t)(EAX));
  /* 107312b4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107312b7 push ecx */
  push32((uint32_t)(ECX));
  /* 107312b8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107312bb mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 107312c1 push eax */
  push32((uint32_t)(EAX));
  /* 107312c2 call 0x107315f0 */
  push32(0x107312c7u); f_107315f0();
  /* 107312c7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107312ca jmp 0x107312e6 */
  goto L_107312e6;
L_107312cc:;
  /* 107312cc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107312cf push ecx */
  push32((uint32_t)(ECX));
  /* 107312d0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107312d3 push edx */
  push32((uint32_t)(EDX));
  /* 107312d4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107312d7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 107312dd push ecx */
  push32((uint32_t)(ECX));
  /* 107312de call 0x107315f0 */
  push32(0x107312e3u); f_107315f0();
  /* 107312e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107312e6:;
  /* 107312e6 jmp 0x10731538 */
  goto L_10731538;
L_107312eb:;
  /* 107312eb mov edx, dword ptr [0x1074f868] */
  EDX = (r32((uint32_t)(0x1074f868)));
  /* 107312f1 mov dword ptr [0x1074f878], edx */
  w32((uint32_t)(0x1074f878), (EDX));
  /* 107312f7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107312fa push eax */
  push32((uint32_t)(EAX));
  /* 107312fb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107312fe push ecx */
  push32((uint32_t)(ECX));
  /* 107312ff push 2 */
  push32((uint32_t)(0x2u));
  /* 10731301 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10731304 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10731306 push eax */
  push32((uint32_t)(EAX));
  /* 10731307 call 0x10731640 */
  push32(0x1073130cu); f_10731640();
  /* 1073130c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1073130f jmp 0x10731538 */
  goto L_10731538;
L_10731314:;
  /* 10731314 mov ecx, dword ptr [0x1074f868] */
  ECX = (r32((uint32_t)(0x1074f868)));
  /* 1073131a mov dword ptr [0x1074f878], ecx */
  w32((uint32_t)(0x1074f878), (ECX));
  /* 10731320 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10731323 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10731326 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10731329 jmp 0x1073137d */
  goto L_1073137d;
L_1073132b:;
  /* 1073132b mov ecx, dword ptr [0x1074f868] */
  ECX = (r32((uint32_t)(0x1074f868)));
  /* 10731331 mov dword ptr [0x1074f878], ecx */
  w32((uint32_t)(0x1074f878), (ECX));
  /* 10731337 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1073133a push edx */
  push32((uint32_t)(EDX));
  /* 1073133b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1073133e push eax */
  push32((uint32_t)(EAX));
  /* 1073133f push 1 */
  push32((uint32_t)(0x1u));
  /* 10731341 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10731344 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10731347 push edx */
  push32((uint32_t)(EDX));
  /* 10731348 call 0x10731640 */
  push32(0x1073134du); f_10731640();
  /* 1073134d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10731350 jmp 0x10731538 */
  goto L_10731538;
L_10731355:;
  /* 10731355 mov eax, dword ptr [0x1074f868] */
  EAX = (r32((uint32_t)(0x1074f868)));
  /* 1073135a mov dword ptr [0x1074f878], eax */
  w32((uint32_t)(0x1074f878), (EAX));
  /* 1073135f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10731362 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10731366 jne 0x10731371 */
  if (!C.zf) goto L_10731371;
  /* 10731368 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 1073136f jmp 0x1073137d */
  goto L_1073137d;
L_10731371:;
  /* 10731371 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10731374 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10731377 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1073137a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1073137d:;
  /* 1073137d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10731380 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10731383 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10731386 jge 0x10731391 */
  if ((C.sf==C.of)) goto L_10731391;
  /* 10731388 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1073138f jmp 0x107313be */
  goto L_107313be;
L_10731391:;
  /* 10731391 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10731394 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10731397 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10731398 mov ecx, 7 */
  ECX = (0x7u);
  /* 1073139d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1073139f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107313a2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107313a5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 107313a8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 107313a9 mov ecx, 7 */
  ECX = (0x7u);
  /* 107313ae idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 107313b0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107313b3 jl 0x107313be */
  if ((C.sf!=C.of)) goto L_107313be;
  /* 107313b5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107313b8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107313bb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_107313be:;
  /* 107313be mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107313c1 push eax */
  push32((uint32_t)(EAX));
  /* 107313c2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107313c5 push ecx */
  push32((uint32_t)(ECX));
  /* 107313c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 107313c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107313cb push edx */
  push32((uint32_t)(EDX));
  /* 107313cc call 0x10731640 */
  push32(0x107313d1u); f_10731640();
  /* 107313d1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107313d4 jmp 0x10731538 */
  goto L_10731538;
L_107313d9:;
  /* 107313d9 cmp dword ptr [0x1074f868], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f868))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107313e0 je 0x10731410 */
  if (C.zf) goto L_10731410;
  /* 107313e2 mov dword ptr [0x1074f868], 0 */
  w32((uint32_t)(0x1074f868), (0x0u));
  /* 107313ec mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107313ef push eax */
  push32((uint32_t)(EAX));
  /* 107313f0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107313f3 push ecx */
  push32((uint32_t)(ECX));
  /* 107313f4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107313f7 push edx */
  push32((uint32_t)(EDX));
  /* 107313f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107313fb push eax */
  push32((uint32_t)(EAX));
  /* 107313fc mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 107313ff mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 10731405 push edx */
  push32((uint32_t)(EDX));
  /* 10731406 call 0x107317a0 */
  push32(0x1073140bu); f_107317a0();
  /* 1073140b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1073140e jmp 0x10731432 */
  goto L_10731432;
L_10731410:;
  /* 10731410 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10731413 push eax */
  push32((uint32_t)(EAX));
  /* 10731414 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10731417 push ecx */
  push32((uint32_t)(ECX));
  /* 10731418 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1073141b push edx */
  push32((uint32_t)(EDX));
  /* 1073141c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1073141f push eax */
  push32((uint32_t)(EAX));
  /* 10731420 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10731423 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10731429 push edx */
  push32((uint32_t)(EDX));
  /* 1073142a call 0x107317a0 */
  push32(0x1073142fu); f_107317a0();
  /* 1073142f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10731432:;
  /* 10731432 jmp 0x10731538 */
  goto L_10731538;
L_10731437:;
  /* 10731437 mov dword ptr [0x1074f868], 0 */
  w32((uint32_t)(0x1074f868), (0x0u));
  /* 10731441 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10731444 push eax */
  push32((uint32_t)(EAX));
  /* 10731445 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10731448 push ecx */
  push32((uint32_t)(ECX));
  /* 10731449 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1073144c push edx */
  push32((uint32_t)(EDX));
  /* 1073144d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10731450 push eax */
  push32((uint32_t)(EAX));
  /* 10731451 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10731454 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 1073145a push edx */
  push32((uint32_t)(EDX));
  /* 1073145b call 0x107317a0 */
  push32(0x10731460u); f_107317a0();
  /* 10731460 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10731463 jmp 0x10731538 */
  goto L_10731538;
L_10731468:;
  /* 10731468 mov eax, dword ptr [0x1074f868] */
  EAX = (r32((uint32_t)(0x1074f868)));
  /* 1073146d mov dword ptr [0x1074f878], eax */
  w32((uint32_t)(0x1074f878), (EAX));
  /* 10731472 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10731475 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10731478 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10731479 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 1073147e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10731480 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10731483 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10731486 push edx */
  push32((uint32_t)(EDX));
  /* 10731487 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1073148a push eax */
  push32((uint32_t)(EAX));
  /* 1073148b push 2 */
  push32((uint32_t)(0x2u));
  /* 1073148d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10731490 push ecx */
  push32((uint32_t)(ECX));
  /* 10731491 call 0x10731640 */
  push32(0x10731496u); f_10731640();
  /* 10731496 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10731499 jmp 0x10731538 */
  goto L_10731538;
L_1073149e:;
  /* 1073149e mov edx, dword ptr [0x1074f868] */
  EDX = (r32((uint32_t)(0x1074f868)));
  /* 107314a4 mov dword ptr [0x1074f878], edx */
  w32((uint32_t)(0x1074f878), (EDX));
  /* 107314aa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107314ad mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 107314b0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 107314b1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 107314b6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 107314b8 mov ecx, eax */
  ECX = (EAX);
  /* 107314ba add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107314bd imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107314c0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107314c3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107314c6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 107314c7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 107314cc idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 107314ce add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107314d0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107314d3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107314d6 push eax */
  push32((uint32_t)(EAX));
  /* 107314d7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107314da push ecx */
  push32((uint32_t)(ECX));
  /* 107314db push 4 */
  push32((uint32_t)(0x4u));
  /* 107314dd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107314e0 push edx */
  push32((uint32_t)(EDX));
  /* 107314e1 call 0x10731640 */
  push32(0x107314e6u); f_10731640();
  /* 107314e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107314e9 jmp 0x10731538 */
  goto L_10731538;
L_107314eb:;
  /* 107314eb call 0x10732600 */
  push32(0x107314f0u); f_10732600();
  /* 107314f0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107314f3 push eax */
  push32((uint32_t)(EAX));
  /* 107314f4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107314f7 push ecx */
  push32((uint32_t)(ECX));
  /* 107314f8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107314fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107314fd cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10731501 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 10731504 mov ecx, dword ptr [eax*4 + 0x1074ee1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1074ee1c)));
  /* 1073150b push ecx */
  push32((uint32_t)(ECX));
  /* 1073150c call 0x107315f0 */
  push32(0x10731511u); f_107315f0();
  /* 10731511 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10731514 jmp 0x10731538 */
  goto L_10731538;
L_10731516:;
  /* 10731516 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10731519 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1073151b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 1073151e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10731521 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10731523 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10731526 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10731529 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1073152b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1073152e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10731530 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10731533 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10731536 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10731538:;
  /* 10731538 pop esi */
  ESI = (pop32());
  /* 10731539 mov esp, ebp */
  ESP = (EBP);
  /* 1073153b pop ebp */
  EBP = (pop32());
  /* 1073153c ret  */
  ESPCHK(0x10730fd0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x107315f0 (72 bytes, 30 insns) */
void f_107315f0(void) {
  FTRACE(0x107315f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107315f0 push ebp */
  push32((uint32_t)(EBP));
  /* 107315f1 mov ebp, esp */
  EBP = (ESP);
L_107315f3:;
  /* 107315f3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107315f6 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107315f9 je 0x10731636 */
  if (C.zf) goto L_10731636;
  /* 107315fb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107315fe movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10731601 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10731603 je 0x10731636 */
  if (C.zf) goto L_10731636;
  /* 10731605 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10731608 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1073160a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1073160d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1073160f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10731611 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10731614 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10731616 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10731619 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1073161c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1073161e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10731621 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10731624 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10731627 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1073162a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1073162c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1073162f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10731632 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10731634 jmp 0x107315f3 */
  goto L_107315f3;
L_10731636:;
  /* 10731636 pop ebp */
  EBP = (pop32());
  /* 10731637 ret  */
  ESPCHK(0x107315f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011640 @ 0x10731640 (173 bytes, 64 insns) */
void f_10731640(void) {
  FTRACE(0x10731640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10731640 push ebp */
  push32((uint32_t)(EBP));
  /* 10731641 mov ebp, esp */
  EBP = (ESP);
  /* 10731643 push ecx */
  push32((uint32_t)(ECX));
  /* 10731644 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1073164b cmp dword ptr [0x1074f878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10731652 je 0x1073166a */
  if (C.zf) goto L_1073166a;
  /* 10731654 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10731657 push eax */
  push32((uint32_t)(EAX));
  /* 10731658 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1073165b push ecx */
  push32((uint32_t)(ECX));
  /* 1073165c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1073165f push edx */
  push32((uint32_t)(EDX));
  /* 10731660 call 0x107316f0 */
  push32(0x10731665u); f_107316f0();
  /* 10731665 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10731668 jmp 0x107316e9 */
  goto L_107316e9;
L_1073166a:;
  /* 1073166a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1073166d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10731670 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10731672 jae 0x107316e0 */
  if (!C.cf) goto L_107316e0;
  /* 10731674 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10731677 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1073167a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1073167d jmp 0x10731688 */
  goto L_10731688;
L_1073167f:;
  /* 1073167f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10731682 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10731685 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10731688:;
  /* 10731688 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1073168b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1073168e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10731690 je 0x107316c4 */
  if (C.zf) goto L_107316c4;
  /* 10731692 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10731695 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10731696 mov ecx, 0xa */
  ECX = (0xau);
  /* 1073169b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1073169d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107316a0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107316a3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107316a5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107316a8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 107316ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107316ae cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 107316af mov ecx, 0xa */
  ECX = (0xau);
  /* 107316b4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 107316b6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 107316b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107316bc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107316bf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107316c2 jmp 0x1073167f */
  goto L_1073167f;
L_107316c4:;
  /* 107316c4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107316c7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107316c9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107316cc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107316cf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 107316d1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107316d4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107316d6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107316d9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107316dc mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 107316de jmp 0x107316e9 */
  goto L_107316e9;
L_107316e0:;
  /* 107316e0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107316e3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_107316e9:;
  /* 107316e9 mov esp, ebp */
  ESP = (EBP);
  /* 107316eb pop ebp */
  EBP = (pop32());
  /* 107316ec ret  */
  ESPCHK(0x10731640u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x107316f0 (172 bytes, 65 insns) */
void f_107316f0(void) {
  FTRACE(0x107316f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107316f0 push ebp */
  push32((uint32_t)(EBP));
  /* 107316f1 mov ebp, esp */
  EBP = (ESP);
  /* 107316f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107316f6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107316f9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107316fb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107316fe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10731701 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10731704 jbe 0x1073174b */
  if ((C.cf||C.zf)) goto L_1073174b;
L_10731706:;
  /* 10731706 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10731709 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1073170a mov ecx, 0xa */
  ECX = (0xau);
  /* 1073170f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10731711 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10731714 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10731717 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10731719 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1073171c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1073171f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10731722 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10731725 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10731727 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1073172a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1073172d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1073172f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10731732 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10731733 mov ecx, 0xa */
  ECX = (0xau);
  /* 10731738 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1073173a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1073173d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10731741 jle 0x1073174b */
  if ((C.zf||C.sf!=C.of)) goto L_1073174b;
  /* 10731743 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10731746 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10731749 ja 0x10731706 */
  if ((!C.cf&&!C.zf)) goto L_10731706;
L_1073174b:;
  /* 1073174b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1073174e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10731750 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10731753 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10731756 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10731759 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1073175b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1073175e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10731761 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10731764:;
  /* 10731764 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10731767 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10731769 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1073176c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1073176f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10731772 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10731774 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10731776 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10731779 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1073177c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1073177f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10731782 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10731785 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10731787 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1073178a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1073178d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10731790 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10731793 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10731796 jb 0x10731764 */
  if (C.cf) goto L_10731764;
  /* 10731798 mov esp, ebp */
  ESP = (EBP);
  /* 1073179a pop ebp */
  EBP = (pop32());
  /* 1073179b ret  */
  ESPCHK(0x107316f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100117a0 @ 0x107317a0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_107317a0(void) {
  FTRACE(0x107317a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107317a0 push ebp */
  push32((uint32_t)(EBP));
  /* 107317a1 mov ebp, esp */
  EBP = (ESP);
  /* 107317a3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_107317a6:;
  /* 107317a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107317a9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107317ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107317ae je 0x10731c1c */
  if (C.zf) goto L_10731c1c;
  /* 107317b4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107317b7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107317ba je 0x10731c1c */
  if (C.zf) goto L_10731c1c;
  /* 107317c0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 107317c4 mov dword ptr [0x1074f878], 0 */
  w32((uint32_t)(0x1074f878), (0x0u));
  /* 107317ce mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 107317d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107317d8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107317db jmp 0x107317e6 */
  goto L_107317e6;
L_107317dd:;
  /* 107317dd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107317e0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107317e3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_107317e6:;
  /* 107317e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107317e9 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 107317ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107317ef movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107317f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107317f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107317f8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107317fb cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107317fd jne 0x10731801 */
  if (!C.zf) goto L_10731801;
  /* 107317ff jmp 0x107317dd */
  goto L_107317dd;
L_10731801:;
  /* 10731801 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10731804 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10731807 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1073180a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1073180d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10731810 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10731813 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10731816 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10731819 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1073181c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10731820 ja 0x10731b70 */
  if ((!C.cf&&!C.zf)) goto L_10731b70;
  /* 10731826 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10731829 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1073182b mov al, byte ptr [ecx + 0x10731c4c] */
  AL = (r8((uint32_t)(ECX + 0x10731c4c)));
  /* 10731831 jmp dword ptr [eax*4 + 0x10731c20] */
  switch (EAX) {
    case 0: goto L_10731a8f;
    case 1: goto L_10731973;
    case 2: goto L_107318fe;
    case 3: goto L_10731838;
    case 4: goto L_10731876;
    case 5: goto L_107318d7;
    case 6: goto L_10731925;
    case 7: goto L_1073194c;
    case 8: goto L_107319ba;
    case 9: goto L_107318b4;
    case 10: goto L_10731b70;
    default: x86_unimpl("switch@0x10731831 out of table"); return;
  }
L_10731838:;
  /* 10731838 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1073183b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1073183e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10731841 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10731844 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10731847 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1073184b ja 0x10731871 */
  if ((!C.cf&&!C.zf)) goto L_10731871;
  /* 1073184d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10731850 jmp dword ptr [ecx*4 + 0x10731c9f] */
  switch (ECX) {
    case 0: goto L_10731857;
    case 1: goto L_10731861;
    case 2: goto L_10731867;
    case 3: goto L_1073186d;
    case 4: goto L_10731895;
    case 5: goto L_1073189f;
    case 6: goto L_107318a5;
    case 7: goto L_107318ab;
    default: x86_unimpl("switch@0x10731850 out of table"); return;
  }
L_10731857:;
  /* 10731857 mov dword ptr [0x1074f878], 1 */
  w32((uint32_t)(0x1074f878), (0x1u));
L_10731861:;
  /* 10731861 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 10731865 jmp 0x10731871 */
  goto L_10731871;
L_10731867:;
  /* 10731867 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 1073186b jmp 0x10731871 */
  goto L_10731871;
L_1073186d:;
  /* 1073186d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_10731871:;
  /* 10731871 jmp 0x10731b70 */
  goto L_10731b70;
L_10731876:;
  /* 10731876 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10731879 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1073187c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1073187f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10731882 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10731885 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10731889 ja 0x107318af */
  if ((!C.cf&&!C.zf)) goto L_107318af;
  /* 1073188b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1073188e jmp dword ptr [ecx*4 + 0x10731caf] */
  switch (ECX) {
    case 0: goto L_10731895;
    case 1: goto L_1073189f;
    case 2: goto L_107318a5;
    case 3: goto L_107318ab;
    default: x86_unimpl("switch@0x1073188e out of table"); return;
  }
L_10731895:;
  /* 10731895 mov dword ptr [0x1074f878], 1 */
  w32((uint32_t)(0x1074f878), (0x1u));
L_1073189f:;
  /* 1073189f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 107318a3 jmp 0x107318af */
  goto L_107318af;
L_107318a5:;
  /* 107318a5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 107318a9 jmp 0x107318af */
  goto L_107318af;
L_107318ab:;
  /* 107318ab mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_107318af:;
  /* 107318af jmp 0x10731b70 */
  goto L_10731b70;
L_107318b4:;
  /* 107318b4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107318b7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 107318ba cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107318be je 0x107318c8 */
  if (C.zf) goto L_107318c8;
  /* 107318c0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107318c4 je 0x107318ce */
  if (C.zf) goto L_107318ce;
  /* 107318c6 jmp 0x107318d2 */
  goto L_107318d2;
L_107318c8:;
  /* 107318c8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 107318cc jmp 0x107318d2 */
  goto L_107318d2;
L_107318ce:;
  /* 107318ce mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_107318d2:;
  /* 107318d2 jmp 0x10731b70 */
  goto L_10731b70;
L_107318d7:;
  /* 107318d7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107318da mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 107318dd cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107318e1 je 0x107318eb */
  if (C.zf) goto L_107318eb;
  /* 107318e3 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107318e7 je 0x107318f5 */
  if (C.zf) goto L_107318f5;
  /* 107318e9 jmp 0x107318f9 */
  goto L_107318f9;
L_107318eb:;
  /* 107318eb mov dword ptr [0x1074f878], 1 */
  w32((uint32_t)(0x1074f878), (0x1u));
L_107318f5:;
  /* 107318f5 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_107318f9:;
  /* 107318f9 jmp 0x10731b70 */
  goto L_10731b70;
L_107318fe:;
  /* 107318fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10731901 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10731904 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10731908 je 0x10731912 */
  if (C.zf) goto L_10731912;
  /* 1073190a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1073190e je 0x1073191c */
  if (C.zf) goto L_1073191c;
  /* 10731910 jmp 0x10731920 */
  goto L_10731920;
L_10731912:;
  /* 10731912 mov dword ptr [0x1074f878], 1 */
  w32((uint32_t)(0x1074f878), (0x1u));
L_1073191c:;
  /* 1073191c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_10731920:;
  /* 10731920 jmp 0x10731b70 */
  goto L_10731b70;
L_10731925:;
  /* 10731925 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10731928 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 1073192b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1073192f je 0x10731939 */
  if (C.zf) goto L_10731939;
  /* 10731931 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10731935 je 0x10731943 */
  if (C.zf) goto L_10731943;
  /* 10731937 jmp 0x10731947 */
  goto L_10731947;
L_10731939:;
  /* 10731939 mov dword ptr [0x1074f878], 1 */
  w32((uint32_t)(0x1074f878), (0x1u));
L_10731943:;
  /* 10731943 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_10731947:;
  /* 10731947 jmp 0x10731b70 */
  goto L_10731b70;
L_1073194c:;
  /* 1073194c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1073194f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10731952 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10731956 je 0x10731960 */
  if (C.zf) goto L_10731960;
  /* 10731958 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1073195c je 0x1073196a */
  if (C.zf) goto L_1073196a;
  /* 1073195e jmp 0x1073196e */
  goto L_1073196e;
L_10731960:;
  /* 10731960 mov dword ptr [0x1074f878], 1 */
  w32((uint32_t)(0x1074f878), (0x1u));
L_1073196a:;
  /* 1073196a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_1073196e:;
  /* 1073196e jmp 0x10731b70 */
  goto L_10731b70;
L_10731973:;
  /* 10731973 push 0x1074b91c */
  push32((uint32_t)(0x1074b91cu));
  /* 10731978 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1073197b push ecx */
  push32((uint32_t)(ECX));
  /* 1073197c call 0x107321d0 */
  push32(0x10731981u); f_107321d0();
  /* 10731981 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10731984 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10731986 jne 0x10731993 */
  if (!C.zf) goto L_10731993;
  /* 10731988 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1073198b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1073198e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10731991 jmp 0x107319b1 */
  goto L_107319b1;
L_10731993:;
  /* 10731993 push 0x1074b918 */
  push32((uint32_t)(0x1074b918u));
  /* 10731998 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1073199b push eax */
  push32((uint32_t)(EAX));
  /* 1073199c call 0x107321d0 */
  push32(0x107319a1u); f_107321d0();
  /* 107319a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107319a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107319a6 jne 0x107319b1 */
  if (!C.zf) goto L_107319b1;
  /* 107319a8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107319ab add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107319ae mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_107319b1:;
  /* 107319b1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 107319b5 jmp 0x10731b70 */
  goto L_10731b70;
L_107319ba:;
  /* 107319ba mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107319bd cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107319c1 jg 0x107319d1 */
  if ((!C.zf&&C.sf==C.of)) goto L_107319d1;
  /* 107319c3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107319c6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 107319cc mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 107319cf jmp 0x107319dd */
  goto L_107319dd;
L_107319d1:;
  /* 107319d1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107319d4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 107319da mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_107319dd:;
  /* 107319dd cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107319e1 jle 0x10731a84 */
  if ((C.zf||C.sf!=C.of)) goto L_10731a84;
  /* 107319e7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107319ea cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107319ed jbe 0x10731a84 */
  if ((C.cf||C.zf)) goto L_10731a84;
  /* 107319f3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107319f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107319f8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107319fa mov ecx, dword ptr [0x1074dc98] */
  ECX = (r32((uint32_t)(0x1074dc98)));
  /* 10731a00 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10731a02 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10731a06 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10731a0c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10731a0e je 0x10731a47 */
  if (C.zf) goto L_10731a47;
  /* 10731a10 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10731a13 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10731a16 jbe 0x10731a47 */
  if ((C.cf||C.zf)) goto L_10731a47;
  /* 10731a18 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10731a1b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10731a1d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10731a20 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10731a22 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10731a24 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10731a27 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10731a29 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10731a2c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10731a2f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10731a31 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10731a34 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10731a37 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10731a3a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10731a3d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10731a3f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10731a42 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10731a45 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10731a47:;
  /* 10731a47 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10731a4a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10731a4c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10731a4f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10731a51 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10731a53 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10731a56 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10731a58 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10731a5b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10731a5e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10731a60 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10731a63 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10731a66 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10731a69 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10731a6c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10731a6e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10731a71 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10731a74 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10731a76 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10731a79 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10731a7c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10731a7f jmp 0x107319dd */
  goto L_107319dd;
L_10731a84:;
  /* 10731a84 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10731a87 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10731a8a jmp 0x107317a6 */
  goto L_107317a6;
L_10731a8f:;
  /* 10731a8f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10731a92 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10731a95 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10731a97 je 0x10731b62 */
  if (C.zf) goto L_10731b62;
  /* 10731a9d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10731aa0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10731aa3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10731aa6:;
  /* 10731aa6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10731aa9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10731aac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10731aae je 0x10731b60 */
  if (C.zf) goto L_10731b60;
  /* 10731ab4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10731ab7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10731aba je 0x10731b60 */
  if (C.zf) goto L_10731b60;
  /* 10731ac0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10731ac3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10731ac6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10731ac9 jne 0x10731ad9 */
  if (!C.zf) goto L_10731ad9;
  /* 10731acb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10731ace add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10731ad1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10731ad4 jmp 0x10731b60 */
  goto L_10731b60;
L_10731ad9:;
  /* 10731ad9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10731adc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10731ade mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10731ae0 mov edx, dword ptr [0x1074dc98] */
  EDX = (r32((uint32_t)(0x1074dc98)));
  /* 10731ae6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10731ae8 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10731aec and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10731af1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10731af3 je 0x10731b2c */
  if (C.zf) goto L_10731b2c;
  /* 10731af5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10731af8 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10731afb jbe 0x10731b2c */
  if ((C.cf||C.zf)) goto L_10731b2c;
  /* 10731afd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10731b00 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10731b02 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10731b05 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10731b07 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10731b09 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10731b0c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10731b0e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10731b11 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10731b14 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10731b16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10731b19 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10731b1c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10731b1f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10731b22 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10731b24 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10731b27 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10731b2a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10731b2c:;
  /* 10731b2c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10731b2f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10731b31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10731b34 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10731b36 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10731b38 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10731b3b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10731b3d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10731b40 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10731b43 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10731b45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10731b48 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10731b4b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10731b4e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10731b51 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10731b53 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10731b56 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10731b59 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10731b5b jmp 0x10731aa6 */
  goto L_10731aa6;
L_10731b60:;
  /* 10731b60 jmp 0x10731b6b */
  goto L_10731b6b;
L_10731b62:;
  /* 10731b62 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10731b65 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10731b68 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10731b6b:;
  /* 10731b6b jmp 0x107317a6 */
  goto L_107317a6;
L_10731b70:;
  /* 10731b70 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10731b74 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10731b76 je 0x10731b9c */
  if (C.zf) goto L_10731b9c;
  /* 10731b78 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10731b7b push edx */
  push32((uint32_t)(EDX));
  /* 10731b7c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10731b7f push eax */
  push32((uint32_t)(EAX));
  /* 10731b80 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10731b83 push ecx */
  push32((uint32_t)(ECX));
  /* 10731b84 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10731b87 push edx */
  push32((uint32_t)(EDX));
  /* 10731b88 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10731b8b push eax */
  push32((uint32_t)(EAX));
  /* 10731b8c call 0x10730fd0 */
  push32(0x10731b91u); f_10730fd0();
  /* 10731b91 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10731b94 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10731b97 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10731b9a jmp 0x10731c17 */
  goto L_10731c17;
L_10731b9c:;
  /* 10731b9c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10731b9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10731ba1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10731ba3 mov ecx, dword ptr [0x1074dc98] */
  ECX = (r32((uint32_t)(0x1074dc98)));
  /* 10731ba9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10731bab mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10731baf and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10731bb5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10731bb7 je 0x10731be8 */
  if (C.zf) goto L_10731be8;
  /* 10731bb9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10731bbc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10731bbe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10731bc1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10731bc3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10731bc5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10731bc8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10731bca add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10731bcd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10731bd0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10731bd2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10731bd5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10731bd8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10731bdb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10731bde mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10731be0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10731be3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10731be6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10731be8:;
  /* 10731be8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10731beb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10731bed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10731bf0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10731bf2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10731bf4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10731bf7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10731bf9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10731bfc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10731bff mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10731c01 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10731c04 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10731c07 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10731c0a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10731c0d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10731c0f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10731c12 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10731c15 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10731c17:;
  /* 10731c17 jmp 0x107317a6 */
  goto L_107317a6;
L_10731c1c:;
  /* 10731c1c mov esp, ebp */
  ESP = (EBP);
  /* 10731c1e pop ebp */
  EBP = (pop32());
  /* 10731c1f ret  */
  ESPCHK(0x107317a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011cc0 @ 0x10731cc0 (650 bytes, 178 insns) */
void f_10731cc0(void) {
  FTRACE(0x10731cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10731cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10731cc1 mov ebp, esp */
  EBP = (ESP);
  /* 10731cc3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10731cc9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10731ccd jne 0x10731e29 */
  if (!C.zf) goto L_10731e29;
  /* 10731cd3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10731cd6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 10731cdc lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 10731ce2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10731ce5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10731cec mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 10731cf6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10731cf8 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10731cfe push edx */
  push32((uint32_t)(EDX));
  /* 10731cff mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10731d02 push eax */
  push32((uint32_t)(EAX));
  /* 10731d03 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10731d06 push ecx */
  push32((uint32_t)(ECX));
  /* 10731d07 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10731d0a push edx */
  push32((uint32_t)(EDX));
  /* 10731d0b call 0x107330e0 */
  push32(0x10731d10u); f_107330e0();
  /* 10731d10 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10731d13 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10731d16 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10731d1a jne 0x10731daf */
  if (!C.zf) goto L_10731daf;
  /* 10731d20 call dword ptr [0x10752280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752280))), 0x10731d26u);
  /* 10731d26 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10731d29 je 0x10731d30 */
  if (C.zf) goto L_10731d30;
  /* 10731d2b jmp 0x10731e0d */
  goto L_10731e0d;
L_10731d30:;
  /* 10731d30 push 0 */
  push32((uint32_t)(0x0u));
  /* 10731d32 push 0 */
  push32((uint32_t)(0x0u));
  /* 10731d34 push 0 */
  push32((uint32_t)(0x0u));
  /* 10731d36 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10731d39 push eax */
  push32((uint32_t)(EAX));
  /* 10731d3a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10731d3d push ecx */
  push32((uint32_t)(ECX));
  /* 10731d3e call 0x107330e0 */
  push32(0x10731d43u); f_107330e0();
  /* 10731d43 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10731d46 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 10731d4c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10731d53 jne 0x10731d5a */
  if (!C.zf) goto L_10731d5a;
  /* 10731d55 jmp 0x10731e0d */
  goto L_10731e0d;
L_10731d5a:;
  /* 10731d5a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 10731d5c push 0x1074b924 */
  push32((uint32_t)(0x1074b924u));
  /* 10731d61 push 2 */
  push32((uint32_t)(0x2u));
  /* 10731d63 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10731d69 push edx */
  push32((uint32_t)(EDX));
  /* 10731d6a call 0x10723b00 */
  push32(0x10731d6fu); f_10723b00();
  /* 10731d6f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10731d72 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10731d75 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10731d79 jne 0x10731d80 */
  if (!C.zf) goto L_10731d80;
  /* 10731d7b jmp 0x10731e0d */
  goto L_10731e0d;
L_10731d80:;
  /* 10731d80 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10731d87 push 0 */
  push32((uint32_t)(0x0u));
  /* 10731d89 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 10731d8f push eax */
  push32((uint32_t)(EAX));
  /* 10731d90 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10731d93 push ecx */
  push32((uint32_t)(ECX));
  /* 10731d94 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10731d97 push edx */
  push32((uint32_t)(EDX));
  /* 10731d98 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10731d9b push eax */
  push32((uint32_t)(EAX));
  /* 10731d9c call 0x107330e0 */
  push32(0x10731da1u); f_107330e0();
  /* 10731da1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10731da4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10731da7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10731dab jne 0x10731daf */
  if (!C.zf) goto L_10731daf;
  /* 10731dad jmp 0x10731e0d */
  goto L_10731e0d;
L_10731daf:;
  /* 10731daf push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10731db1 push 0x1074b924 */
  push32((uint32_t)(0x1074b924u));
  /* 10731db6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10731db8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10731dbb push ecx */
  push32((uint32_t)(ECX));
  /* 10731dbc call 0x10723b00 */
  push32(0x10731dc1u); f_10723b00();
  /* 10731dc1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10731dc4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 10731dca mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10731dcc mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10731dd2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10731dd5 jne 0x10731dd9 */
  if (!C.zf) goto L_10731dd9;
  /* 10731dd7 jmp 0x10731e0d */
  goto L_10731e0d;
L_10731dd9:;
  /* 10731dd9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10731ddc push ecx */
  push32((uint32_t)(ECX));
  /* 10731ddd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10731de0 push edx */
  push32((uint32_t)(EDX));
  /* 10731de1 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10731de7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10731de9 push ecx */
  push32((uint32_t)(ECX));
  /* 10731dea call 0x10727320 */
  push32(0x10731defu); f_10727320();
  /* 10731def add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10731df2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10731df6 je 0x10731e06 */
  if (C.zf) goto L_10731e06;
  /* 10731df8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10731dfa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10731dfd push edx */
  push32((uint32_t)(EDX));
  /* 10731dfe call 0x10724590 */
  push32(0x10731e03u); f_10724590();
  /* 10731e03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10731e06:;
  /* 10731e06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10731e08 jmp 0x10731f46 */
  goto L_10731f46;
L_10731e0d:;
  /* 10731e0d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10731e11 je 0x10731e21 */
  if (C.zf) goto L_10731e21;
  /* 10731e13 push 2 */
  push32((uint32_t)(0x2u));
  /* 10731e15 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10731e18 push eax */
  push32((uint32_t)(EAX));
  /* 10731e19 call 0x10724590 */
  push32(0x10731e1eu); f_10724590();
  /* 10731e1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10731e21:;
  /* 10731e21 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10731e24 jmp 0x10731f46 */
  goto L_10731f46;
L_10731e29:;
  /* 10731e29 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10731e2d jne 0x10731f43 */
  if (!C.zf) goto L_10731f43;
  /* 10731e33 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 10731e3d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10731e40 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 10731e46 push 0 */
  push32((uint32_t)(0x0u));
  /* 10731e48 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10731e4e push edx */
  push32((uint32_t)(EDX));
  /* 10731e4f push 0x1074f790 */
  push32((uint32_t)(0x1074f790u));
  /* 10731e54 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10731e57 push eax */
  push32((uint32_t)(EAX));
  /* 10731e58 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10731e5b push ecx */
  push32((uint32_t)(ECX));
  /* 10731e5c call 0x10732f40 */
  push32(0x10731e61u); f_10732f40();
  /* 10731e61 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10731e64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10731e66 jne 0x10731e70 */
  if (!C.zf) goto L_10731e70;
  /* 10731e68 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10731e6b jmp 0x10731f46 */
  goto L_10731f46;
L_10731e70:;
  /* 10731e70 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10731e76 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10731e79 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 10731e83 jmp 0x10731e94 */
  goto L_10731e94;
L_10731e85:;
  /* 10731e85 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10731e8b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10731e8e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_10731e94:;
  /* 10731e94 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10731e9b jge 0x10731f3f */
  if ((C.sf==C.of)) goto L_10731f3f;
  /* 10731ea1 cmp dword ptr [0x1074dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1074dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10731ea8 jle 0x10731edb */
  if ((C.zf||C.sf!=C.of)) goto L_10731edb;
  /* 10731eaa push 4 */
  push32((uint32_t)(0x4u));
  /* 10731eac mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10731eb2 mov dl, byte ptr [ecx*2 + 0x1074f790] */
  DL = (r8((uint32_t)(ECX*2 + 0x1074f790)));
  /* 10731eb9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10731ebf mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10731ec5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10731eca push eax */
  push32((uint32_t)(EAX));
  /* 10731ecb call 0x10729b10 */
  push32(0x10731ed0u); f_10729b10();
  /* 10731ed0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10731ed3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 10731ed9 jmp 0x10731f0e */
  goto L_10731f0e;
L_10731edb:;
  /* 10731edb mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10731ee1 mov dl, byte ptr [ecx*2 + 0x1074f790] */
  DL = (r8((uint32_t)(ECX*2 + 0x1074f790)));
  /* 10731ee8 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10731eee mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10731ef4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10731ef9 mov ecx, dword ptr [0x1074dc98] */
  ECX = (r32((uint32_t)(0x1074dc98)));
  /* 10731eff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10731f01 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10731f05 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10731f08 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_10731f0e:;
  /* 10731f0e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10731f15 je 0x10731f38 */
  if (C.zf) goto L_10731f38;
  /* 10731f17 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10731f1d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10731f20 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10731f23 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 10731f2a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10731f2e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10731f34 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10731f36 jmp 0x10731f3a */
  goto L_10731f3a;
L_10731f38:;
  /* 10731f38 jmp 0x10731f3f */
  goto L_10731f3f;
L_10731f3a:;
  /* 10731f3a jmp 0x10731e85 */
  goto L_10731e85;
L_10731f3f:;
  /* 10731f3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10731f41 jmp 0x10731f46 */
  goto L_10731f46;
L_10731f43:;
  /* 10731f43 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10731f46:;
  /* 10731f46 mov esp, ebp */
  ESP = (EBP);
  /* 10731f48 pop ebp */
  EBP = (pop32());
  /* 10731f49 ret  */
  ESPCHK(0x10731cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f50 @ 0x10731f50 (10 bytes, 5 insns) */
void f_10731f50(void) {
  FTRACE(0x10731f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10731f50 push ebp */
  push32((uint32_t)(EBP));
  /* 10731f51 mov ebp, esp */
  EBP = (ESP);
  /* 10731f53 mov eax, dword ptr [0x1074ed88] */
  EAX = (r32((uint32_t)(0x1074ed88)));
  /* 10731f58 pop ebp */
  EBP = (pop32());
  /* 10731f59 ret  */
  ESPCHK(0x10731f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f60 @ 0x10731f60 (575 bytes, 196 insns) */
void f_10731f60(void) {
  FTRACE(0x10731f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10731f60 push ebp */
  push32((uint32_t)(EBP));
  /* 10731f61 mov ebp, esp */
  EBP = (ESP);
  /* 10731f63 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10731f65 push 0x1074b930 */
  push32((uint32_t)(0x1074b930u));
  /* 10731f6a push 0x1072cc08 */
  push32((uint32_t)(0x1072cc08u));
  /* 10731f6f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10731f75 push eax */
  push32((uint32_t)(EAX));
  /* 10731f76 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10731f7d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10731f80 push ebx */
  push32((uint32_t)(EBX));
  /* 10731f81 push esi */
  push32((uint32_t)(ESI));
  /* 10731f82 push edi */
  push32((uint32_t)(EDI));
  /* 10731f83 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10731f86 cmp dword ptr [0x1074f79c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f79c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10731f8d jne 0x10731fde */
  if (!C.zf) goto L_10731fde;
  /* 10731f8f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10731f92 push eax */
  push32((uint32_t)(EAX));
  /* 10731f93 push 1 */
  push32((uint32_t)(0x1u));
  /* 10731f95 push 0x1074b064 */
  push32((uint32_t)(0x1074b064u));
  /* 10731f9a push 1 */
  push32((uint32_t)(0x1u));
  /* 10731f9c call dword ptr [0x107522d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522d0))), 0x10731fa2u);
  /* 10731fa2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10731fa4 je 0x10731fb2 */
  if (C.zf) goto L_10731fb2;
  /* 10731fa6 mov dword ptr [0x1074f79c], 1 */
  w32((uint32_t)(0x1074f79c), (0x1u));
  /* 10731fb0 jmp 0x10731fde */
  goto L_10731fde;
L_10731fb2:;
  /* 10731fb2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 10731fb5 push ecx */
  push32((uint32_t)(ECX));
  /* 10731fb6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10731fb8 push 0x1074b060 */
  push32((uint32_t)(0x1074b060u));
  /* 10731fbd push 1 */
  push32((uint32_t)(0x1u));
  /* 10731fbf push 0 */
  push32((uint32_t)(0x0u));
  /* 10731fc1 call dword ptr [0x107522e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522e0))), 0x10731fc7u);
  /* 10731fc7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10731fc9 je 0x10731fd7 */
  if (C.zf) goto L_10731fd7;
  /* 10731fcb mov dword ptr [0x1074f79c], 2 */
  w32((uint32_t)(0x1074f79c), (0x2u));
  /* 10731fd5 jmp 0x10731fde */
  goto L_10731fde;
L_10731fd7:;
  /* 10731fd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10731fd9 jmp 0x107321b9 */
  goto L_107321b9;
L_10731fde:;
  /* 10731fde cmp dword ptr [0x1074f79c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1074f79c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10731fe5 jne 0x10732002 */
  if (!C.zf) goto L_10732002;
  /* 10731fe7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10731fea push edx */
  push32((uint32_t)(EDX));
  /* 10731feb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10731fee push eax */
  push32((uint32_t)(EAX));
  /* 10731fef mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10731ff2 push ecx */
  push32((uint32_t)(ECX));
  /* 10731ff3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10731ff6 push edx */
  push32((uint32_t)(EDX));
  /* 10731ff7 call dword ptr [0x107522d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522d0))), 0x10731ffdu);
  /* 10731ffd jmp 0x107321b9 */
  goto L_107321b9;
L_10732002:;
  /* 10732002 cmp dword ptr [0x1074f79c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1074f79c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10732009 jne 0x107321b7 */
  if (!C.zf) goto L_107321b7;
  /* 1073200f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10732013 jne 0x1073201d */
  if (!C.zf) goto L_1073201d;
  /* 10732015 mov eax, dword ptr [0x1074f710] */
  EAX = (r32((uint32_t)(0x1074f710)));
  /* 1073201a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_1073201d:;
  /* 1073201d push 0 */
  push32((uint32_t)(0x0u));
  /* 1073201f push 0 */
  push32((uint32_t)(0x0u));
  /* 10732021 push 0 */
  push32((uint32_t)(0x0u));
  /* 10732023 push 0 */
  push32((uint32_t)(0x0u));
  /* 10732025 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10732028 push ecx */
  push32((uint32_t)(ECX));
  /* 10732029 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1073202c push edx */
  push32((uint32_t)(EDX));
  /* 1073202d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10732032 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10732035 push eax */
  push32((uint32_t)(EAX));
  /* 10732036 call dword ptr [0x1075234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075234c))), 0x1073203cu);
  /* 1073203c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1073203f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10732043 jne 0x1073204c */
  if (!C.zf) goto L_1073204c;
  /* 10732045 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10732047 jmp 0x107321b9 */
  goto L_107321b9;
L_1073204c:;
  /* 1073204c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10732053 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10732056 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10732059 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1073205b call 0x10726ca0 */
  push32(0x10732060u); f_10726ca0();
  /* 10732060 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 10732063 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10732066 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10732069 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1073206c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1073206f push edx */
  push32((uint32_t)(EDX));
  /* 10732070 push 0 */
  push32((uint32_t)(0x0u));
  /* 10732072 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10732075 push eax */
  push32((uint32_t)(EAX));
  /* 10732076 call 0x10727870 */
  push32(0x1073207bu); f_10727870();
  /* 1073207b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1073207e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10732085 jmp 0x1073209e */
  goto L_1073209e;
  /* 10732087 mov eax, 1 */
  EAX = (0x1u);
  /* 1073208c ret  */
  ESPCHK(0x10731f60u, _esp0);
  ESP += 4; return;
  /* 1073208d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10732090 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10732097 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1073209e:;
  /* 1073209e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107320a2 jne 0x107320ab */
  if (!C.zf) goto L_107320ab;
  /* 107320a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107320a6 jmp 0x107321b9 */
  goto L_107321b9;
L_107320ab:;
  /* 107320ab push 0 */
  push32((uint32_t)(0x0u));
  /* 107320ad push 0 */
  push32((uint32_t)(0x0u));
  /* 107320af mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 107320b2 push ecx */
  push32((uint32_t)(ECX));
  /* 107320b3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107320b6 push edx */
  push32((uint32_t)(EDX));
  /* 107320b7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107320ba push eax */
  push32((uint32_t)(EAX));
  /* 107320bb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107320be push ecx */
  push32((uint32_t)(ECX));
  /* 107320bf push 0x220 */
  push32((uint32_t)(0x220u));
  /* 107320c4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107320c7 push edx */
  push32((uint32_t)(EDX));
  /* 107320c8 call dword ptr [0x1075234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075234c))), 0x107320ceu);
  /* 107320ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107320d0 jne 0x107320d9 */
  if (!C.zf) goto L_107320d9;
  /* 107320d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107320d4 jmp 0x107321b9 */
  goto L_107321b9;
L_107320d9:;
  /* 107320d9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 107320e0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 107320e3 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 107320e7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107320ea and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 107320ec call 0x10726ca0 */
  push32(0x107320f1u); f_10726ca0();
  /* 107320f1 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 107320f4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 107320f7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 107320fa mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 107320fd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10732104 jmp 0x1073211d */
  goto L_1073211d;
  /* 10732106 mov eax, 1 */
  EAX = (0x1u);
  /* 1073210b ret  */
  ESPCHK(0x10731f60u, _esp0);
  ESP += 4; return;
  /* 1073210c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1073210f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10732116 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1073211d:;
  /* 1073211d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10732121 jne 0x1073212a */
  if (!C.zf) goto L_1073212a;
  /* 10732123 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10732125 jmp 0x107321b9 */
  goto L_107321b9;
L_1073212a:;
  /* 1073212a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1073212e jne 0x10732139 */
  if (!C.zf) goto L_10732139;
  /* 10732130 mov edx, dword ptr [0x1074f700] */
  EDX = (r32((uint32_t)(0x1074f700)));
  /* 10732136 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_10732139:;
  /* 10732139 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1073213c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1073213f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 10732145 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10732148 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1073214b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 10732152 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10732155 push ecx */
  push32((uint32_t)(ECX));
  /* 10732156 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10732159 push edx */
  push32((uint32_t)(EDX));
  /* 1073215a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1073215d push eax */
  push32((uint32_t)(EAX));
  /* 1073215e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10732161 push ecx */
  push32((uint32_t)(ECX));
  /* 10732162 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10732165 push edx */
  push32((uint32_t)(EDX));
  /* 10732166 call dword ptr [0x107522e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522e0))), 0x1073216cu);
  /* 1073216c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1073216f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10732172 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10732175 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10732177 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 1073217c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10732182 je 0x10732198 */
  if (C.zf) goto L_10732198;
  /* 10732184 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10732187 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1073218a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1073218c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10732190 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10732196 je 0x1073219c */
  if (C.zf) goto L_1073219c;
L_10732198:;
  /* 10732198 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1073219a jmp 0x107321b9 */
  goto L_107321b9;
L_1073219c:;
  /* 1073219c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1073219f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 107321a1 push eax */
  push32((uint32_t)(EAX));
  /* 107321a2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107321a5 push ecx */
  push32((uint32_t)(ECX));
  /* 107321a6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107321a9 push edx */
  push32((uint32_t)(EDX));
  /* 107321aa call 0x1072b9f0 */
  push32(0x107321afu); f_1072b9f0();
  /* 107321af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107321b2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 107321b5 jmp 0x107321b9 */
  goto L_107321b9;
L_107321b7:;
  /* 107321b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107321b9:;
  /* 107321b9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 107321bc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107321bf mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 107321c6 pop edi */
  EDI = (pop32());
  /* 107321c7 pop esi */
  ESI = (pop32());
  /* 107321c8 pop ebx */
  EBX = (pop32());
  /* 107321c9 mov esp, ebp */
  ESP = (EBP);
  /* 107321cb pop ebp */
  EBP = (pop32());
  /* 107321cc ret  */
  ESPCHK(0x10731f60u, _esp0);
  ESP += 4; return;
}

/* FUN_100121d0 @ 0x107321d0 (208 bytes, 85 insns) */
void f_107321d0(void) {
  FTRACE(0x107321d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107321d0 push ebp */
  push32((uint32_t)(EBP));
  /* 107321d1 mov ebp, esp */
  EBP = (ESP);
  /* 107321d3 push edi */
  push32((uint32_t)(EDI));
  /* 107321d4 push esi */
  push32((uint32_t)(ESI));
  /* 107321d5 push ebx */
  push32((uint32_t)(EBX));
  /* 107321d6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 107321d9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 107321dc lea eax, [0x1074f6f8] */
  EAX = ((uint32_t)(0x1074f6f8));
  /* 107321e2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107321e6 jne 0x10732223 */
  if (!C.zf) goto L_10732223;
  /* 107321e8 mov al, 0xff */
  AL = (0xffu);
  /* 107321ea mov edi, edi */
  EDI = (EDI);
L_107321ec:;
  /* 107321ec or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 107321ee je 0x1073221e */
  if (C.zf) goto L_1073221e;
  /* 107321f0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 107321f2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 107321f3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 107321f5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 107321f6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107321f8 je 0x107321ec */
  if (C.zf) goto L_107321ec;
  /* 107321fa sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 107321fc cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107321fe sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10732200 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10732203 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10732205 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10732207 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 10732209 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1073220b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1073220d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1073220f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10732212 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10732214 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10732216 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10732218 je 0x107321ec */
  if (C.zf) goto L_107321ec;
  /* 1073221a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1073221c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_1073221e:;
  /* 1073221e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 10732221 jmp 0x1073229b */
  goto L_1073229b;
L_10732223:;
  /* 10732223 lock inc dword ptr [0x1074f88c] */
  x86_unimpl("lock inc @ 0x10732223");
  /* 1073222a cmp dword ptr [0x1074f87c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f87c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10732231 jg 0x10732237 */
  if ((!C.zf&&C.sf==C.of)) goto L_10732237;
  /* 10732233 push 0 */
  push32((uint32_t)(0x0u));
  /* 10732235 jmp 0x1073224c */
  goto L_1073224c;
L_10732237:;
  /* 10732237 lock dec dword ptr [0x1074f88c] */
  x86_unimpl("lock dec @ 0x10732237");
  /* 1073223e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10732240 call 0x10727500 */
  push32(0x10732245u); f_10727500();
  /* 10732245 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_1073224c:;
  /* 1073224c mov eax, 0xff */
  EAX = (0xffu);
  /* 10732251 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10732253 nop  */
  /* nop */
L_10732254:;
  /* 10732254 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10732256 je 0x1073227f */
  if (C.zf) goto L_1073227f;
  /* 10732258 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1073225a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1073225b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1073225d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1073225e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10732260 je 0x10732254 */
  if (C.zf) goto L_10732254;
  /* 10732262 push eax */
  push32((uint32_t)(EAX));
  /* 10732263 push ebx */
  push32((uint32_t)(EBX));
  /* 10732264 call 0x10733340 */
  push32(0x10732269u); f_10733340();
  /* 10732269 mov ebx, eax */
  EBX = (EAX);
  /* 1073226b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1073226e call 0x10733340 */
  push32(0x10732273u); f_10733340();
  /* 10732273 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10732276 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10732278 je 0x10732254 */
  if (C.zf) goto L_10732254;
  /* 1073227a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1073227c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1073227f:;
  /* 1073227f mov ebx, eax */
  EBX = (EAX);
  /* 10732281 pop eax */
  EAX = (pop32());
  /* 10732282 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10732284 jne 0x1073228f */
  if (!C.zf) goto L_1073228f;
  /* 10732286 lock dec dword ptr [0x1074f88c] */
  x86_unimpl("lock dec @ 0x10732286");
  /* 1073228d jmp 0x10732299 */
  goto L_10732299;
L_1073228f:;
  /* 1073228f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10732291 call 0x107275a0 */
  push32(0x10732296u); f_107275a0();
  /* 10732296 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10732299:;
  /* 10732299 mov eax, ebx */
  EAX = (EBX);
L_1073229b:;
  /* 1073229b pop ebx */
  EBX = (pop32());
  /* 1073229c pop esi */
  ESI = (pop32());
  /* 1073229d pop edi */
  EDI = (pop32());
  /* 1073229e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1073229f ret  */
  ESPCHK(0x107321d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100122a0 @ 0x107322a0 (257 bytes, 103 insns) */
void f_107322a0(void) {
  FTRACE(0x107322a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107322a0 push ebp */
  push32((uint32_t)(EBP));
  /* 107322a1 mov ebp, esp */
  EBP = (ESP);
  /* 107322a3 push edi */
  push32((uint32_t)(EDI));
  /* 107322a4 push esi */
  push32((uint32_t)(ESI));
  /* 107322a5 push ebx */
  push32((uint32_t)(EBX));
  /* 107322a6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107322a9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107322ab je 0x1073239a */
  if (C.zf) goto L_1073239a;
  /* 107322b1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 107322b4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 107322b7 lea eax, [0x1074f6f8] */
  EAX = ((uint32_t)(0x1074f6f8));
  /* 107322bd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107322c1 jne 0x10732311 */
  if (!C.zf) goto L_10732311;
  /* 107322c3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 107322c5 mov bl, 0x5a */
  BL = (0x5au);
  /* 107322c7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 107322c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_107322cc:;
  /* 107322cc mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 107322ce or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 107322d0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 107322d2 je 0x107322f5 */
  if (C.zf) goto L_107322f5;
  /* 107322d4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 107322d6 je 0x107322f5 */
  if (C.zf) goto L_107322f5;
  /* 107322d8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 107322d9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 107322da cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107322dc jb 0x107322e4 */
  if (C.cf) goto L_107322e4;
  /* 107322de cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107322e0 ja 0x107322e4 */
  if ((!C.cf&&!C.zf)) goto L_107322e4;
  /* 107322e2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_107322e4:;
  /* 107322e4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107322e6 jb 0x107322ee */
  if (C.cf) goto L_107322ee;
  /* 107322e8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107322ea ja 0x107322ee */
  if ((!C.cf&&!C.zf)) goto L_107322ee;
  /* 107322ec add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_107322ee:;
  /* 107322ee cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107322f0 jne 0x107322ff */
  if (!C.zf) goto L_107322ff;
  /* 107322f2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 107322f3 jne 0x107322cc */
  if (!C.zf) goto L_107322cc;
L_107322f5:;
  /* 107322f5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107322f7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107322f9 je 0x1073239a */
  if (C.zf) goto L_1073239a;
L_107322ff:;
  /* 107322ff mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10732304 jb 0x1073239a */
  if (C.cf) goto L_1073239a;
  /* 1073230a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1073230c jmp 0x1073239a */
  goto L_1073239a;
L_10732311:;
  /* 10732311 lock inc dword ptr [0x1074f88c] */
  x86_unimpl("lock inc @ 0x10732311");
  /* 10732318 cmp dword ptr [0x1074f87c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f87c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1073231f jg 0x10732325 */
  if ((!C.zf&&C.sf==C.of)) goto L_10732325;
  /* 10732321 push 0 */
  push32((uint32_t)(0x0u));
  /* 10732323 jmp 0x1073233e */
  goto L_1073233e;
L_10732325:;
  /* 10732325 lock dec dword ptr [0x1074f88c] */
  x86_unimpl("lock dec @ 0x10732325");
  /* 1073232c mov ebx, ecx */
  EBX = (ECX);
  /* 1073232e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10732330 call 0x10727500 */
  push32(0x10732335u); f_10727500();
  /* 10732335 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 1073233c mov ecx, ebx */
  ECX = (EBX);
L_1073233e:;
  /* 1073233e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10732340 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10732342 mov edi, edi */
  EDI = (EDI);
L_10732344:;
  /* 10732344 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10732346 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10732348 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1073234a je 0x1073236f */
  if (C.zf) goto L_1073236f;
  /* 1073234c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1073234e je 0x1073236f */
  if (C.zf) goto L_1073236f;
  /* 10732350 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10732351 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10732352 push ecx */
  push32((uint32_t)(ECX));
  /* 10732353 push eax */
  push32((uint32_t)(EAX));
  /* 10732354 push ebx */
  push32((uint32_t)(EBX));
  /* 10732355 call 0x10733340 */
  push32(0x1073235au); f_10733340();
  /* 1073235a mov ebx, eax */
  EBX = (EAX);
  /* 1073235c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1073235f call 0x10733340 */
  push32(0x10732364u); f_10733340();
  /* 10732364 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10732367 pop ecx */
  ECX = (pop32());
  /* 10732368 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1073236a jne 0x10732375 */
  if (!C.zf) goto L_10732375;
  /* 1073236c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1073236d jne 0x10732344 */
  if (!C.zf) goto L_10732344;
L_1073236f:;
  /* 1073236f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10732371 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10732373 je 0x1073237e */
  if (C.zf) goto L_1073237e;
L_10732375:;
  /* 10732375 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 1073237a jb 0x1073237e */
  if (C.cf) goto L_1073237e;
  /* 1073237c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_1073237e:;
  /* 1073237e pop eax */
  EAX = (pop32());
  /* 1073237f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10732381 jne 0x1073238c */
  if (!C.zf) goto L_1073238c;
  /* 10732383 lock dec dword ptr [0x1074f88c] */
  x86_unimpl("lock dec @ 0x10732383");
  /* 1073238a jmp 0x1073239a */
  goto L_1073239a;
L_1073238c:;
  /* 1073238c mov ebx, ecx */
  EBX = (ECX);
  /* 1073238e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10732390 call 0x107275a0 */
  push32(0x10732395u); f_107275a0();
  /* 10732395 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10732398 mov ecx, ebx */
  ECX = (EBX);
L_1073239a:;
  /* 1073239a mov eax, ecx */
  EAX = (ECX);
  /* 1073239c pop ebx */
  EBX = (pop32());
  /* 1073239d pop esi */
  ESI = (pop32());
  /* 1073239e pop edi */
  EDI = (pop32());
  /* 1073239f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 107323a0 ret  */
  ESPCHK(0x107322a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100123b0 @ 0x107323b0 (255 bytes, 88 insns) */
void f_107323b0(void) {
  FTRACE(0x107323b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107323b0 push ebp */
  push32((uint32_t)(EBP));
  /* 107323b1 mov ebp, esp */
  EBP = (ESP);
  /* 107323b3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_107323b6:;
  /* 107323b6 cmp dword ptr [0x1074dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1074dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107323bd jle 0x107323d6 */
  if ((C.zf||C.sf!=C.of)) goto L_107323d6;
  /* 107323bf push 8 */
  push32((uint32_t)(0x8u));
  /* 107323c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107323c4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107323c6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 107323c8 push ecx */
  push32((uint32_t)(ECX));
  /* 107323c9 call 0x10729b10 */
  push32(0x107323ceu); f_10729b10();
  /* 107323ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107323d1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 107323d4 jmp 0x107323ef */
  goto L_107323ef;
L_107323d6:;
  /* 107323d6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107323d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107323db mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107323dd mov ecx, dword ptr [0x1074dc98] */
  ECX = (r32((uint32_t)(0x1074dc98)));
  /* 107323e3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107323e5 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 107323e9 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 107323ec mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_107323ef:;
  /* 107323ef cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107323f3 je 0x10732400 */
  if (C.zf) goto L_10732400;
  /* 107323f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107323f8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107323fb mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 107323fe jmp 0x107323b6 */
  goto L_107323b6;
L_10732400:;
  /* 10732400 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10732403 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10732405 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10732407 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1073240a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1073240d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10732410 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10732413 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10732416 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10732419 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1073241d je 0x10732425 */
  if (C.zf) goto L_10732425;
  /* 1073241f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10732423 jne 0x10732438 */
  if (!C.zf) goto L_10732438;
L_10732425:;
  /* 10732425 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10732428 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1073242a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1073242c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1073242f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10732432 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10732435 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10732438:;
  /* 10732438 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1073243f:;
  /* 1073243f cmp dword ptr [0x1074dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1074dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10732446 jle 0x1073245b */
  if ((C.zf||C.sf!=C.of)) goto L_1073245b;
  /* 10732448 push 4 */
  push32((uint32_t)(0x4u));
  /* 1073244a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1073244d push edx */
  push32((uint32_t)(EDX));
  /* 1073244e call 0x10729b10 */
  push32(0x10732453u); f_10729b10();
  /* 10732453 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10732456 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10732459 jmp 0x10732470 */
  goto L_10732470;
L_1073245b:;
  /* 1073245b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1073245e mov ecx, dword ptr [0x1074dc98] */
  ECX = (r32((uint32_t)(0x1074dc98)));
  /* 10732464 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10732466 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1073246a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1073246d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10732470:;
  /* 10732470 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10732474 je 0x1073249b */
  if (C.zf) goto L_1073249b;
  /* 10732476 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10732479 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1073247c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1073247f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 10732483 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10732486 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10732489 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1073248b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1073248d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10732490 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10732493 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10732496 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10732499 jmp 0x1073243f */
  goto L_1073243f;
L_1073249b:;
  /* 1073249b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1073249f jne 0x107324a8 */
  if (!C.zf) goto L_107324a8;
  /* 107324a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107324a4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 107324a6 jmp 0x107324ab */
  goto L_107324ab;
L_107324a8:;
  /* 107324a8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_107324ab:;
  /* 107324ab mov esp, ebp */
  ESP = (EBP);
  /* 107324ad pop ebp */
  EBP = (pop32());
  /* 107324ae ret  */
  ESPCHK(0x107323b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100124b0 @ 0x107324b0 (17 bytes, 8 insns) */
void f_107324b0(void) {
  FTRACE(0x107324b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107324b0 push ebp */
  push32((uint32_t)(EBP));
  /* 107324b1 mov ebp, esp */
  EBP = (ESP);
  /* 107324b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107324b6 push eax */
  push32((uint32_t)(EAX));
  /* 107324b7 call 0x107323b0 */
  push32(0x107324bcu); f_107323b0();
  /* 107324bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107324bf pop ebp */
  EBP = (pop32());
  /* 107324c0 ret  */
  ESPCHK(0x107324b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100124d0 @ 0x107324d0 (297 bytes, 106 insns) */
void f_107324d0(void) {
  FTRACE(0x107324d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107324d0 push ebp */
  push32((uint32_t)(EBP));
  /* 107324d1 mov ebp, esp */
  EBP = (ESP);
  /* 107324d3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107324d6 push esi */
  push32((uint32_t)(ESI));
L_107324d7:;
  /* 107324d7 cmp dword ptr [0x1074dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1074dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107324de jle 0x107324f7 */
  if ((C.zf||C.sf!=C.of)) goto L_107324f7;
  /* 107324e0 push 8 */
  push32((uint32_t)(0x8u));
  /* 107324e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107324e5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107324e7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 107324e9 push ecx */
  push32((uint32_t)(ECX));
  /* 107324ea call 0x10729b10 */
  push32(0x107324efu); f_10729b10();
  /* 107324ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107324f2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 107324f5 jmp 0x10732510 */
  goto L_10732510;
L_107324f7:;
  /* 107324f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107324fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107324fc mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107324fe mov ecx, dword ptr [0x1074dc98] */
  ECX = (r32((uint32_t)(0x1074dc98)));
  /* 10732504 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10732506 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1073250a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1073250d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10732510:;
  /* 10732510 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10732514 je 0x10732521 */
  if (C.zf) goto L_10732521;
  /* 10732516 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10732519 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1073251c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1073251f jmp 0x107324d7 */
  goto L_107324d7;
L_10732521:;
  /* 10732521 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10732524 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10732526 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10732528 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1073252b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1073252e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10732531 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10732534 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10732537 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1073253a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1073253e je 0x10732546 */
  if (C.zf) goto L_10732546;
  /* 10732540 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10732544 jne 0x10732559 */
  if (!C.zf) goto L_10732559;
L_10732546:;
  /* 10732546 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10732549 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1073254b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1073254d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10732550 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10732553 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10732556 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10732559:;
  /* 10732559 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10732560 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10732567:;
  /* 10732567 cmp dword ptr [0x1074dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1074dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1073256e jle 0x10732583 */
  if ((C.zf||C.sf!=C.of)) goto L_10732583;
  /* 10732570 push 4 */
  push32((uint32_t)(0x4u));
  /* 10732572 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10732575 push edx */
  push32((uint32_t)(EDX));
  /* 10732576 call 0x10729b10 */
  push32(0x1073257bu); f_10729b10();
  /* 1073257b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1073257e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10732581 jmp 0x10732598 */
  goto L_10732598;
L_10732583:;
  /* 10732583 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10732586 mov ecx, dword ptr [0x1074dc98] */
  ECX = (r32((uint32_t)(0x1074dc98)));
  /* 1073258c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1073258e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10732592 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10732595 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_10732598:;
  /* 10732598 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1073259c je 0x107325d9 */
  if (C.zf) goto L_107325d9;
  /* 1073259e push 0 */
  push32((uint32_t)(0x0u));
  /* 107325a0 push 0xa */
  push32((uint32_t)(0xau));
  /* 107325a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107325a5 push eax */
  push32((uint32_t)(EAX));
  /* 107325a6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107325a9 push ecx */
  push32((uint32_t)(ECX));
  /* 107325aa call 0x10733470 */
  push32(0x107325afu); f_10733470();
  /* 107325af mov ecx, eax */
  ECX = (EAX);
  /* 107325b1 mov esi, edx */
  ESI = (EDX);
  /* 107325b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107325b6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107325b9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 107325ba add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107325bc adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 107325be mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107325c1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 107325c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107325c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107325c9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107325cb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107325ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107325d1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107325d4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 107325d7 jmp 0x10732567 */
  goto L_10732567;
L_107325d9:;
  /* 107325d9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107325dd jne 0x107325ee */
  if (!C.zf) goto L_107325ee;
  /* 107325df mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107325e2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 107325e4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107325e7 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107325ea neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 107325ec jmp 0x107325f4 */
  goto L_107325f4;
L_107325ee:;
  /* 107325ee mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107325f1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_107325f4:;
  /* 107325f4 pop esi */
  ESI = (pop32());
  /* 107325f5 mov esp, ebp */
  ESP = (EBP);
  /* 107325f7 pop ebp */
  EBP = (pop32());
  /* 107325f8 ret  */
  ESPCHK(0x107324d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012600 @ 0x10732600 (61 bytes, 18 insns) */
void f_10732600(void) {
  FTRACE(0x10732600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10732600 push ebp */
  push32((uint32_t)(EBP));
  /* 10732601 mov ebp, esp */
  EBP = (ESP);
  /* 10732603 cmp dword ptr [0x1074f858], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f858))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1073260a jne 0x1073263b */
  if (!C.zf) goto L_1073263b;
  /* 1073260c push 0xb */
  push32((uint32_t)(0xbu));
  /* 1073260e call 0x10727500 */
  push32(0x10732613u); f_10727500();
  /* 10732613 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10732616 cmp dword ptr [0x1074f858], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f858))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1073261d jne 0x10732631 */
  if (!C.zf) goto L_10732631;
  /* 1073261f call 0x10732660 */
  push32(0x10732624u); f_10732660();
  /* 10732624 mov eax, dword ptr [0x1074f858] */
  EAX = (r32((uint32_t)(0x1074f858)));
  /* 10732629 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1073262c mov dword ptr [0x1074f858], eax */
  w32((uint32_t)(0x1074f858), (EAX));
L_10732631:;
  /* 10732631 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10732633 call 0x107275a0 */
  push32(0x10732638u); f_107275a0();
  /* 10732638 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1073263b:;
  /* 1073263b pop ebp */
  EBP = (pop32());
  /* 1073263c ret  */
  ESPCHK(0x10732600u, _esp0);
  ESP += 4; return;
}

/* FUN_10012640 @ 0x10732640 (30 bytes, 11 insns) */
void f_10732640(void) {
  FTRACE(0x10732640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10732640 push ebp */
  push32((uint32_t)(EBP));
  /* 10732641 mov ebp, esp */
  EBP = (ESP);
  /* 10732643 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10732645 call 0x10727500 */
  push32(0x1073264au); f_10727500();
  /* 1073264a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1073264d call 0x10732660 */
  push32(0x10732652u); f_10732660();
  /* 10732652 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10732654 call 0x107275a0 */
  push32(0x10732659u); f_107275a0();
  /* 10732659 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1073265c pop ebp */
  EBP = (pop32());
  /* 1073265d ret  */
  ESPCHK(0x10732640u, _esp0);
  ESP += 4; return;
}

/* FUN_10012660 @ 0x10732660 (939 bytes, 266 insns) */
void f_10732660(void) {
  FTRACE(0x10732660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10732660 push ebp */
  push32((uint32_t)(EBP));
  /* 10732661 mov ebp, esp */
  EBP = (ESP);
  /* 10732663 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10732666 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1073266d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1073266f call 0x10727500 */
  push32(0x10732674u); f_10727500();
  /* 10732674 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10732677 mov dword ptr [0x1074f7a0], 0 */
  w32((uint32_t)(0x1074f7a0), (0x0u));
  /* 10732681 mov dword ptr [0x1074ee38], 0xffffffff */
  w32((uint32_t)(0x1074ee38), (0xffffffffu));
  /* 1073268b mov eax, dword ptr [0x1074ee38] */
  EAX = (r32((uint32_t)(0x1074ee38)));
  /* 10732690 mov dword ptr [0x1074ee28], eax */
  w32((uint32_t)(0x1074ee28), (EAX));
  /* 10732695 push 0x1074b990 */
  push32((uint32_t)(0x1074b990u));
  /* 1073269a call 0x107334e0 */
  push32(0x1073269fu); f_107334e0();
  /* 1073269f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107326a2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107326a5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107326a9 jne 0x107327e3 */
  if (!C.zf) goto L_107327e3;
  /* 107326af push 0xc */
  push32((uint32_t)(0xcu));
  /* 107326b1 call 0x107275a0 */
  push32(0x107326b6u); f_107275a0();
  /* 107326b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107326b9 push 0x1074f7a8 */
  push32((uint32_t)(0x1074f7a8u));
  /* 107326be call dword ptr [0x10752294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752294))), 0x107326c4u);
  /* 107326c4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107326c7 je 0x107327de */
  if (C.zf) goto L_107327de;
  /* 107326cd mov dword ptr [0x1074f7a0], 1 */
  w32((uint32_t)(0x1074f7a0), (0x1u));
  /* 107326d7 mov ecx, dword ptr [0x1074f7a8] */
  ECX = (r32((uint32_t)(0x1074f7a8)));
  /* 107326dd imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107326e0 mov dword ptr [0x1074ed90], ecx */
  w32((uint32_t)(0x1074ed90), (ECX));
  /* 107326e6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107326e8 mov dx, word ptr [0x1074f7ee] */
  DX = (r16((uint32_t)(0x1074f7ee)));
  /* 107326ef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107326f1 je 0x10732709 */
  if (C.zf) goto L_10732709;
  /* 107326f3 mov eax, dword ptr [0x1074f7fc] */
  EAX = (r32((uint32_t)(0x1074f7fc)));
  /* 107326f8 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107326fb mov ecx, dword ptr [0x1074ed90] */
  ECX = (r32((uint32_t)(0x1074ed90)));
  /* 10732701 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10732703 mov dword ptr [0x1074ed90], ecx */
  w32((uint32_t)(0x1074ed90), (ECX));
L_10732709:;
  /* 10732709 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1073270b mov dx, word ptr [0x1074f842] */
  DX = (r16((uint32_t)(0x1074f842)));
  /* 10732712 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10732714 je 0x1073273e */
  if (C.zf) goto L_1073273e;
  /* 10732716 cmp dword ptr [0x1074f850], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f850))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1073271d je 0x1073273e */
  if (C.zf) goto L_1073273e;
  /* 1073271f mov dword ptr [0x1074ed94], 1 */
  w32((uint32_t)(0x1074ed94), (0x1u));
  /* 10732729 mov eax, dword ptr [0x1074f850] */
  EAX = (r32((uint32_t)(0x1074f850)));
  /* 1073272e sub eax, dword ptr [0x1074f7fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1074f7fc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10732734 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10732737 mov dword ptr [0x1074ed98], eax */
  w32((uint32_t)(0x1074ed98), (EAX));
  /* 1073273c jmp 0x10732752 */
  goto L_10732752;
L_1073273e:;
  /* 1073273e mov dword ptr [0x1074ed94], 0 */
  w32((uint32_t)(0x1074ed94), (0x0u));
  /* 10732748 mov dword ptr [0x1074ed98], 0 */
  w32((uint32_t)(0x1074ed98), (0x0u));
L_10732752:;
  /* 10732752 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10732755 push ecx */
  push32((uint32_t)(ECX));
  /* 10732756 push 0 */
  push32((uint32_t)(0x0u));
  /* 10732758 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1073275a mov edx, dword ptr [0x1074ee1c] */
  EDX = (r32((uint32_t)(0x1074ee1c)));
  /* 10732760 push edx */
  push32((uint32_t)(EDX));
  /* 10732761 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10732763 push 0x1074f7ac */
  push32((uint32_t)(0x1074f7acu));
  /* 10732768 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1073276d mov eax, dword ptr [0x1074f710] */
  EAX = (r32((uint32_t)(0x1074f710)));
  /* 10732772 push eax */
  push32((uint32_t)(EAX));
  /* 10732773 call dword ptr [0x1075234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075234c))), 0x10732779u);
  /* 10732779 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1073277b je 0x1073278f */
  if (C.zf) goto L_1073278f;
  /* 1073277d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10732781 jne 0x1073278f */
  if (!C.zf) goto L_1073278f;
  /* 10732783 mov ecx, dword ptr [0x1074ee1c] */
  ECX = (r32((uint32_t)(0x1074ee1c)));
  /* 10732789 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 1073278d jmp 0x10732798 */
  goto L_10732798;
L_1073278f:;
  /* 1073278f mov edx, dword ptr [0x1074ee1c] */
  EDX = (r32((uint32_t)(0x1074ee1c)));
  /* 10732795 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10732798:;
  /* 10732798 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1073279b push eax */
  push32((uint32_t)(EAX));
  /* 1073279c push 0 */
  push32((uint32_t)(0x0u));
  /* 1073279e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 107327a0 mov ecx, dword ptr [0x1074ee20] */
  ECX = (r32((uint32_t)(0x1074ee20)));
  /* 107327a6 push ecx */
  push32((uint32_t)(ECX));
  /* 107327a7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 107327a9 push 0x1074f800 */
  push32((uint32_t)(0x1074f800u));
  /* 107327ae push 0x220 */
  push32((uint32_t)(0x220u));
  /* 107327b3 mov edx, dword ptr [0x1074f710] */
  EDX = (r32((uint32_t)(0x1074f710)));
  /* 107327b9 push edx */
  push32((uint32_t)(EDX));
  /* 107327ba call dword ptr [0x1075234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075234c))), 0x107327c0u);
  /* 107327c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107327c2 je 0x107327d5 */
  if (C.zf) goto L_107327d5;
  /* 107327c4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107327c8 jne 0x107327d5 */
  if (!C.zf) goto L_107327d5;
  /* 107327ca mov eax, dword ptr [0x1074ee20] */
  EAX = (r32((uint32_t)(0x1074ee20)));
  /* 107327cf mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 107327d3 jmp 0x107327de */
  goto L_107327de;
L_107327d5:;
  /* 107327d5 mov ecx, dword ptr [0x1074ee20] */
  ECX = (r32((uint32_t)(0x1074ee20)));
  /* 107327db mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_107327de:;
  /* 107327de jmp 0x10732a07 */
  goto L_10732a07;
L_107327e3:;
  /* 107327e3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107327e6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 107327e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107327eb je 0x1073280d */
  if (C.zf) goto L_1073280d;
  /* 107327ed cmp dword ptr [0x1074f854], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f854))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107327f4 je 0x1073281c */
  if (C.zf) goto L_1073281c;
  /* 107327f6 mov ecx, dword ptr [0x1074f854] */
  ECX = (r32((uint32_t)(0x1074f854)));
  /* 107327fc push ecx */
  push32((uint32_t)(ECX));
  /* 107327fd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10732800 push edx */
  push32((uint32_t)(EDX));
  /* 10732801 call 0x1072f790 */
  push32(0x10732806u); f_1072f790();
  /* 10732806 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10732809 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1073280b jne 0x1073281c */
  if (!C.zf) goto L_1073281c;
L_1073280d:;
  /* 1073280d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1073280f call 0x107275a0 */
  push32(0x10732814u); f_107275a0();
  /* 10732814 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10732817 jmp 0x10732a07 */
  goto L_10732a07;
L_1073281c:;
  /* 1073281c push 2 */
  push32((uint32_t)(0x2u));
  /* 1073281e mov eax, dword ptr [0x1074f854] */
  EAX = (r32((uint32_t)(0x1074f854)));
  /* 10732823 push eax */
  push32((uint32_t)(EAX));
  /* 10732824 call 0x10724590 */
  push32(0x10732829u); f_10724590();
  /* 10732829 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1073282c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 10732831 push 0x1074b988 */
  push32((uint32_t)(0x1074b988u));
  /* 10732836 push 2 */
  push32((uint32_t)(0x2u));
  /* 10732838 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1073283b push ecx */
  push32((uint32_t)(ECX));
  /* 1073283c call 0x10726930 */
  push32(0x10732841u); f_10726930();
  /* 10732841 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10732844 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10732847 push eax */
  push32((uint32_t)(EAX));
  /* 10732848 call 0x10723b00 */
  push32(0x1073284du); f_10723b00();
  /* 1073284d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10732850 mov dword ptr [0x1074f854], eax */
  w32((uint32_t)(0x1074f854), (EAX));
  /* 10732855 cmp dword ptr [0x1074f854], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f854))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1073285c jne 0x1073286d */
  if (!C.zf) goto L_1073286d;
  /* 1073285e push 0xc */
  push32((uint32_t)(0xcu));
  /* 10732860 call 0x107275a0 */
  push32(0x10732865u); f_107275a0();
  /* 10732865 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10732868 jmp 0x10732a07 */
  goto L_10732a07;
L_1073286d:;
  /* 1073286d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10732870 push edx */
  push32((uint32_t)(EDX));
  /* 10732871 mov eax, dword ptr [0x1074f854] */
  EAX = (r32((uint32_t)(0x1074f854)));
  /* 10732876 push eax */
  push32((uint32_t)(EAX));
  /* 10732877 call 0x10726ab0 */
  push32(0x1073287cu); f_10726ab0();
  /* 1073287c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1073287f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10732881 call 0x107275a0 */
  push32(0x10732886u); f_107275a0();
  /* 10732886 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10732889 push 3 */
  push32((uint32_t)(0x3u));
  /* 1073288b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1073288e push ecx */
  push32((uint32_t)(ECX));
  /* 1073288f mov edx, dword ptr [0x1074ee1c] */
  EDX = (r32((uint32_t)(0x1074ee1c)));
  /* 10732895 push edx */
  push32((uint32_t)(EDX));
  /* 10732896 call 0x10727320 */
  push32(0x1073289bu); f_10727320();
  /* 1073289b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1073289e mov eax, dword ptr [0x1074ee1c] */
  EAX = (r32((uint32_t)(0x1074ee1c)));
  /* 107328a3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 107328a7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107328aa add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107328ad mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107328b0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107328b3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 107328b6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107328b9 jne 0x107328cd */
  if (!C.zf) goto L_107328cd;
  /* 107328bb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107328be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107328c1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107328c4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107328c7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107328ca mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_107328cd:;
  /* 107328cd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107328d0 push eax */
  push32((uint32_t)(EAX));
  /* 107328d1 call 0x107323b0 */
  push32(0x107328d6u); f_107323b0();
  /* 107328d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107328d9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107328df mov dword ptr [0x1074ed90], eax */
  w32((uint32_t)(0x1074ed90), (EAX));
L_107328e4:;
  /* 107328e4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107328e7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107328ea cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107328ed je 0x10732905 */
  if (C.zf) goto L_10732905;
  /* 107328ef mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107328f2 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107328f5 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107328f8 jl 0x10732910 */
  if ((C.sf!=C.of)) goto L_10732910;
  /* 107328fa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107328fd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10732900 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10732903 jg 0x10732910 */
  if ((!C.zf&&C.sf==C.of)) goto L_10732910;
L_10732905:;
  /* 10732905 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10732908 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1073290b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1073290e jmp 0x107328e4 */
  goto L_107328e4;
L_10732910:;
  /* 10732910 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10732913 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10732916 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10732919 jne 0x107329b5 */
  if (!C.zf) goto L_107329b5;
  /* 1073291f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10732922 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10732925 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10732928 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1073292b push edx */
  push32((uint32_t)(EDX));
  /* 1073292c call 0x107323b0 */
  push32(0x10732931u); f_107323b0();
  /* 10732931 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10732934 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10732937 mov ecx, dword ptr [0x1074ed90] */
  ECX = (r32((uint32_t)(0x1074ed90)));
  /* 1073293d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1073293f mov dword ptr [0x1074ed90], ecx */
  w32((uint32_t)(0x1074ed90), (ECX));
L_10732945:;
  /* 10732945 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10732948 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1073294b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1073294e jl 0x10732966 */
  if ((C.sf!=C.of)) goto L_10732966;
  /* 10732950 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10732953 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10732956 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10732959 jg 0x10732966 */
  if ((!C.zf&&C.sf==C.of)) goto L_10732966;
  /* 1073295b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1073295e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10732961 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10732964 jmp 0x10732945 */
  goto L_10732945;
L_10732966:;
  /* 10732966 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10732969 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1073296c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1073296f jne 0x107329b5 */
  if (!C.zf) goto L_107329b5;
  /* 10732971 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10732974 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10732977 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1073297a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1073297d push ecx */
  push32((uint32_t)(ECX));
  /* 1073297e call 0x107323b0 */
  push32(0x10732983u); f_107323b0();
  /* 10732983 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10732986 mov edx, dword ptr [0x1074ed90] */
  EDX = (r32((uint32_t)(0x1074ed90)));
  /* 1073298c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1073298e mov dword ptr [0x1074ed90], edx */
  w32((uint32_t)(0x1074ed90), (EDX));
L_10732994:;
  /* 10732994 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10732997 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1073299a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1073299d jl 0x107329b5 */
  if ((C.sf!=C.of)) goto L_107329b5;
  /* 1073299f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107329a2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 107329a5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107329a8 jg 0x107329b5 */
  if ((!C.zf&&C.sf==C.of)) goto L_107329b5;
  /* 107329aa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107329ad add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107329b0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107329b3 jmp 0x10732994 */
  goto L_10732994;
L_107329b5:;
  /* 107329b5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107329b9 je 0x107329c9 */
  if (C.zf) goto L_107329c9;
  /* 107329bb mov edx, dword ptr [0x1074ed90] */
  EDX = (r32((uint32_t)(0x1074ed90)));
  /* 107329c1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 107329c3 mov dword ptr [0x1074ed90], edx */
  w32((uint32_t)(0x1074ed90), (EDX));
L_107329c9:;
  /* 107329c9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107329cc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107329cf mov dword ptr [0x1074ed94], ecx */
  w32((uint32_t)(0x1074ed94), (ECX));
  /* 107329d5 cmp dword ptr [0x1074ed94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074ed94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107329dc je 0x107329fe */
  if (C.zf) goto L_107329fe;
  /* 107329de push 3 */
  push32((uint32_t)(0x3u));
  /* 107329e0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107329e3 push edx */
  push32((uint32_t)(EDX));
  /* 107329e4 mov eax, dword ptr [0x1074ee20] */
  EAX = (r32((uint32_t)(0x1074ee20)));
  /* 107329e9 push eax */
  push32((uint32_t)(EAX));
  /* 107329ea call 0x10727320 */
  push32(0x107329efu); f_10727320();
  /* 107329ef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107329f2 mov ecx, dword ptr [0x1074ee20] */
  ECX = (r32((uint32_t)(0x1074ee20)));
  /* 107329f8 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 107329fc jmp 0x10732a07 */
  goto L_10732a07;
L_107329fe:;
  /* 107329fe mov edx, dword ptr [0x1074ee20] */
  EDX = (r32((uint32_t)(0x1074ee20)));
  /* 10732a04 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10732a07:;
  /* 10732a07 mov esp, ebp */
  ESP = (EBP);
  /* 10732a09 pop ebp */
  EBP = (pop32());
  /* 10732a0a ret  */
  ESPCHK(0x10732660u, _esp0);
  ESP += 4; return;
}

/* FUN_10012a10 @ 0x10732a10 (46 bytes, 18 insns) */
void f_10732a10(void) {
  FTRACE(0x10732a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10732a10 push ebp */
  push32((uint32_t)(EBP));
  /* 10732a11 mov ebp, esp */
  EBP = (ESP);
  /* 10732a13 push ecx */
  push32((uint32_t)(ECX));
  /* 10732a14 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10732a16 call 0x10727500 */
  push32(0x10732a1bu); f_10727500();
  /* 10732a1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10732a1e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10732a21 push eax */
  push32((uint32_t)(EAX));
  /* 10732a22 call 0x10732a40 */
  push32(0x10732a27u); f_10732a40();
  /* 10732a27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10732a2a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10732a2d push 0xb */
  push32((uint32_t)(0xbu));
  /* 10732a2f call 0x107275a0 */
  push32(0x10732a34u); f_107275a0();
  /* 10732a34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10732a37 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10732a3a mov esp, ebp */
  ESP = (EBP);
  /* 10732a3c pop ebp */
  EBP = (pop32());
  /* 10732a3d ret  */
  ESPCHK(0x10732a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10012a40 @ 0x10732a40 (762 bytes, 246 insns) */
void f_10732a40(void) {
  FTRACE(0x10732a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10732a40 push ebp */
  push32((uint32_t)(EBP));
  /* 10732a41 mov ebp, esp */
  EBP = (ESP);
  /* 10732a43 push ecx */
  push32((uint32_t)(ECX));
  /* 10732a44 cmp dword ptr [0x1074ed94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074ed94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10732a4b jne 0x10732a54 */
  if (!C.zf) goto L_10732a54;
  /* 10732a4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10732a4f jmp 0x10732d36 */
  goto L_10732d36;
L_10732a54:;
  /* 10732a54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10732a57 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10732a5a cmp ecx, dword ptr [0x1074ee28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1074ee28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10732a60 jne 0x10732a74 */
  if (!C.zf) goto L_10732a74;
  /* 10732a62 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10732a65 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10732a68 cmp eax, dword ptr [0x1074ee38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1074ee38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10732a6e je 0x10732c3b */
  if (C.zf) goto L_10732c3b;
L_10732a74:;
  /* 10732a74 cmp dword ptr [0x1074f7a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f7a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10732a7b je 0x10732bf5 */
  if (C.zf) goto L_10732bf5;
  /* 10732a81 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10732a83 mov cx, word ptr [0x1074f840] */
  CX = (r16((uint32_t)(0x1074f840)));
  /* 10732a8a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10732a8c jne 0x10732ae9 */
  if (!C.zf) goto L_10732ae9;
  /* 10732a8e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10732a90 mov dx, word ptr [0x1074f84e] */
  DX = (r16((uint32_t)(0x1074f84e)));
  /* 10732a97 push edx */
  push32((uint32_t)(EDX));
  /* 10732a98 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10732a9a mov ax, word ptr [0x1074f84c] */
  AX = (r16((uint32_t)(0x1074f84c)));
  /* 10732aa0 push eax */
  push32((uint32_t)(EAX));
  /* 10732aa1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10732aa3 mov cx, word ptr [0x1074f84a] */
  CX = (r16((uint32_t)(0x1074f84a)));
  /* 10732aaa push ecx */
  push32((uint32_t)(ECX));
  /* 10732aab xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10732aad mov dx, word ptr [0x1074f848] */
  DX = (r16((uint32_t)(0x1074f848)));
  /* 10732ab4 push edx */
  push32((uint32_t)(EDX));
  /* 10732ab5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10732ab7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10732ab9 mov ax, word ptr [0x1074f844] */
  AX = (r16((uint32_t)(0x1074f844)));
  /* 10732abf push eax */
  push32((uint32_t)(EAX));
  /* 10732ac0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10732ac2 mov cx, word ptr [0x1074f846] */
  CX = (r16((uint32_t)(0x1074f846)));
  /* 10732ac9 push ecx */
  push32((uint32_t)(ECX));
  /* 10732aca xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10732acc mov dx, word ptr [0x1074f842] */
  DX = (r16((uint32_t)(0x1074f842)));
  /* 10732ad3 push edx */
  push32((uint32_t)(EDX));
  /* 10732ad4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10732ad7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10732ada push ecx */
  push32((uint32_t)(ECX));
  /* 10732adb push 1 */
  push32((uint32_t)(0x1u));
  /* 10732add push 1 */
  push32((uint32_t)(0x1u));
  /* 10732adf call 0x10732d40 */
  push32(0x10732ae4u); f_10732d40();
  /* 10732ae4 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10732ae7 jmp 0x10732b3a */
  goto L_10732b3a;
L_10732ae9:;
  /* 10732ae9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10732aeb mov dx, word ptr [0x1074f84e] */
  DX = (r16((uint32_t)(0x1074f84e)));
  /* 10732af2 push edx */
  push32((uint32_t)(EDX));
  /* 10732af3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10732af5 mov ax, word ptr [0x1074f84c] */
  AX = (r16((uint32_t)(0x1074f84c)));
  /* 10732afb push eax */
  push32((uint32_t)(EAX));
  /* 10732afc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10732afe mov cx, word ptr [0x1074f84a] */
  CX = (r16((uint32_t)(0x1074f84a)));
  /* 10732b05 push ecx */
  push32((uint32_t)(ECX));
  /* 10732b06 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10732b08 mov dx, word ptr [0x1074f848] */
  DX = (r16((uint32_t)(0x1074f848)));
  /* 10732b0f push edx */
  push32((uint32_t)(EDX));
  /* 10732b10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10732b12 mov ax, word ptr [0x1074f846] */
  AX = (r16((uint32_t)(0x1074f846)));
  /* 10732b18 push eax */
  push32((uint32_t)(EAX));
  /* 10732b19 push 0 */
  push32((uint32_t)(0x0u));
  /* 10732b1b push 0 */
  push32((uint32_t)(0x0u));
  /* 10732b1d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10732b1f mov cx, word ptr [0x1074f842] */
  CX = (r16((uint32_t)(0x1074f842)));
  /* 10732b26 push ecx */
  push32((uint32_t)(ECX));
  /* 10732b27 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10732b2a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10732b2d push eax */
  push32((uint32_t)(EAX));
  /* 10732b2e push 0 */
  push32((uint32_t)(0x0u));
  /* 10732b30 push 1 */
  push32((uint32_t)(0x1u));
  /* 10732b32 call 0x10732d40 */
  push32(0x10732b37u); f_10732d40();
  /* 10732b37 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10732b3a:;
  /* 10732b3a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10732b3c mov cx, word ptr [0x1074f7ec] */
  CX = (r16((uint32_t)(0x1074f7ec)));
  /* 10732b43 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10732b45 jne 0x10732ba2 */
  if (!C.zf) goto L_10732ba2;
  /* 10732b47 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10732b49 mov dx, word ptr [0x1074f7fa] */
  DX = (r16((uint32_t)(0x1074f7fa)));
  /* 10732b50 push edx */
  push32((uint32_t)(EDX));
  /* 10732b51 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10732b53 mov ax, word ptr [0x1074f7f8] */
  AX = (r16((uint32_t)(0x1074f7f8)));
  /* 10732b59 push eax */
  push32((uint32_t)(EAX));
  /* 10732b5a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10732b5c mov cx, word ptr [0x1074f7f6] */
  CX = (r16((uint32_t)(0x1074f7f6)));
  /* 10732b63 push ecx */
  push32((uint32_t)(ECX));
  /* 10732b64 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10732b66 mov dx, word ptr [0x1074f7f4] */
  DX = (r16((uint32_t)(0x1074f7f4)));
  /* 10732b6d push edx */
  push32((uint32_t)(EDX));
  /* 10732b6e push 0 */
  push32((uint32_t)(0x0u));
  /* 10732b70 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10732b72 mov ax, word ptr [0x1074f7f0] */
  AX = (r16((uint32_t)(0x1074f7f0)));
  /* 10732b78 push eax */
  push32((uint32_t)(EAX));
  /* 10732b79 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10732b7b mov cx, word ptr [0x1074f7f2] */
  CX = (r16((uint32_t)(0x1074f7f2)));
  /* 10732b82 push ecx */
  push32((uint32_t)(ECX));
  /* 10732b83 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10732b85 mov dx, word ptr [0x1074f7ee] */
  DX = (r16((uint32_t)(0x1074f7ee)));
  /* 10732b8c push edx */
  push32((uint32_t)(EDX));
  /* 10732b8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10732b90 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10732b93 push ecx */
  push32((uint32_t)(ECX));
  /* 10732b94 push 1 */
  push32((uint32_t)(0x1u));
  /* 10732b96 push 0 */
  push32((uint32_t)(0x0u));
  /* 10732b98 call 0x10732d40 */
  push32(0x10732b9du); f_10732d40();
  /* 10732b9d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10732ba0 jmp 0x10732bf3 */
  goto L_10732bf3;
L_10732ba2:;
  /* 10732ba2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10732ba4 mov dx, word ptr [0x1074f7fa] */
  DX = (r16((uint32_t)(0x1074f7fa)));
  /* 10732bab push edx */
  push32((uint32_t)(EDX));
  /* 10732bac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10732bae mov ax, word ptr [0x1074f7f8] */
  AX = (r16((uint32_t)(0x1074f7f8)));
  /* 10732bb4 push eax */
  push32((uint32_t)(EAX));
  /* 10732bb5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10732bb7 mov cx, word ptr [0x1074f7f6] */
  CX = (r16((uint32_t)(0x1074f7f6)));
  /* 10732bbe push ecx */
  push32((uint32_t)(ECX));
  /* 10732bbf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10732bc1 mov dx, word ptr [0x1074f7f4] */
  DX = (r16((uint32_t)(0x1074f7f4)));
  /* 10732bc8 push edx */
  push32((uint32_t)(EDX));
  /* 10732bc9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10732bcb mov ax, word ptr [0x1074f7f2] */
  AX = (r16((uint32_t)(0x1074f7f2)));
  /* 10732bd1 push eax */
  push32((uint32_t)(EAX));
  /* 10732bd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10732bd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10732bd6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10732bd8 mov cx, word ptr [0x1074f7ee] */
  CX = (r16((uint32_t)(0x1074f7ee)));
  /* 10732bdf push ecx */
  push32((uint32_t)(ECX));
  /* 10732be0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10732be3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10732be6 push eax */
  push32((uint32_t)(EAX));
  /* 10732be7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10732be9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10732beb call 0x10732d40 */
  push32(0x10732bf0u); f_10732d40();
  /* 10732bf0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10732bf3:;
  /* 10732bf3 jmp 0x10732c3b */
  goto L_10732c3b;
L_10732bf5:;
  /* 10732bf5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10732bf7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10732bf9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10732bfb push 2 */
  push32((uint32_t)(0x2u));
  /* 10732bfd push 0 */
  push32((uint32_t)(0x0u));
  /* 10732bff push 0 */
  push32((uint32_t)(0x0u));
  /* 10732c01 push 1 */
  push32((uint32_t)(0x1u));
  /* 10732c03 push 4 */
  push32((uint32_t)(0x4u));
  /* 10732c05 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10732c08 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10732c0b push edx */
  push32((uint32_t)(EDX));
  /* 10732c0c push 1 */
  push32((uint32_t)(0x1u));
  /* 10732c0e push 1 */
  push32((uint32_t)(0x1u));
  /* 10732c10 call 0x10732d40 */
  push32(0x10732c15u); f_10732d40();
  /* 10732c15 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10732c18 push 0 */
  push32((uint32_t)(0x0u));
  /* 10732c1a push 0 */
  push32((uint32_t)(0x0u));
  /* 10732c1c push 0 */
  push32((uint32_t)(0x0u));
  /* 10732c1e push 2 */
  push32((uint32_t)(0x2u));
  /* 10732c20 push 0 */
  push32((uint32_t)(0x0u));
  /* 10732c22 push 0 */
  push32((uint32_t)(0x0u));
  /* 10732c24 push 5 */
  push32((uint32_t)(0x5u));
  /* 10732c26 push 0xa */
  push32((uint32_t)(0xau));
  /* 10732c28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10732c2b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10732c2e push ecx */
  push32((uint32_t)(ECX));
  /* 10732c2f push 1 */
  push32((uint32_t)(0x1u));
  /* 10732c31 push 0 */
  push32((uint32_t)(0x0u));
  /* 10732c33 call 0x10732d40 */
  push32(0x10732c38u); f_10732d40();
  /* 10732c38 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10732c3b:;
  /* 10732c3b mov edx, dword ptr [0x1074ee2c] */
  EDX = (r32((uint32_t)(0x1074ee2c)));
  /* 10732c41 cmp edx, dword ptr [0x1074ee3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1074ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10732c47 jge 0x10732c94 */
  if ((C.sf==C.of)) goto L_10732c94;
  /* 10732c49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10732c4c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10732c4f cmp ecx, dword ptr [0x1074ee2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1074ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10732c55 jl 0x10732c65 */
  if ((C.sf!=C.of)) goto L_10732c65;
  /* 10732c57 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10732c5a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10732c5d cmp eax, dword ptr [0x1074ee3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1074ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10732c63 jle 0x10732c6c */
  if ((C.zf||C.sf!=C.of)) goto L_10732c6c;
L_10732c65:;
  /* 10732c65 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10732c67 jmp 0x10732d36 */
  goto L_10732d36;
L_10732c6c:;
  /* 10732c6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10732c6f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10732c72 cmp edx, dword ptr [0x1074ee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1074ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10732c78 jle 0x10732c92 */
  if ((C.zf||C.sf!=C.of)) goto L_10732c92;
  /* 10732c7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10732c7d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10732c80 cmp ecx, dword ptr [0x1074ee3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1074ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10732c86 jge 0x10732c92 */
  if ((C.sf==C.of)) goto L_10732c92;
  /* 10732c88 mov eax, 1 */
  EAX = (0x1u);
  /* 10732c8d jmp 0x10732d36 */
  goto L_10732d36;
L_10732c92:;
  /* 10732c92 jmp 0x10732cd7 */
  goto L_10732cd7;
L_10732c94:;
  /* 10732c94 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10732c97 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10732c9a cmp eax, dword ptr [0x1074ee3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1074ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10732ca0 jl 0x10732cb0 */
  if ((C.sf!=C.of)) goto L_10732cb0;
  /* 10732ca2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10732ca5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10732ca8 cmp edx, dword ptr [0x1074ee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1074ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10732cae jle 0x10732cb7 */
  if ((C.zf||C.sf!=C.of)) goto L_10732cb7;
L_10732cb0:;
  /* 10732cb0 mov eax, 1 */
  EAX = (0x1u);
  /* 10732cb5 jmp 0x10732d36 */
  goto L_10732d36;
L_10732cb7:;
  /* 10732cb7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10732cba mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10732cbd cmp ecx, dword ptr [0x1074ee3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1074ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10732cc3 jle 0x10732cd7 */
  if ((C.zf||C.sf!=C.of)) goto L_10732cd7;
  /* 10732cc5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10732cc8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10732ccb cmp eax, dword ptr [0x1074ee2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1074ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10732cd1 jge 0x10732cd7 */
  if ((C.sf==C.of)) goto L_10732cd7;
  /* 10732cd3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10732cd5 jmp 0x10732d36 */
  goto L_10732d36;
L_10732cd7:;
  /* 10732cd7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10732cda mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10732cdd imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10732ce0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10732ce3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10732ce5 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10732ce7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10732cea mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10732ced imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10732cf3 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10732cf5 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10732cfb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10732cfe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10732d01 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10732d04 cmp edx, dword ptr [0x1074ee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1074ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10732d0a jne 0x10732d22 */
  if (!C.zf) goto L_10732d22;
  /* 10732d0c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10732d0f cmp eax, dword ptr [0x1074ee30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1074ee30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10732d15 jl 0x10732d1e */
  if ((C.sf!=C.of)) goto L_10732d1e;
  /* 10732d17 mov eax, 1 */
  EAX = (0x1u);
  /* 10732d1c jmp 0x10732d36 */
  goto L_10732d36;
L_10732d1e:;
  /* 10732d1e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10732d20 jmp 0x10732d36 */
  goto L_10732d36;
L_10732d22:;
  /* 10732d22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10732d25 cmp ecx, dword ptr [0x1074ee40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1074ee40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10732d2b jge 0x10732d34 */
  if ((C.sf==C.of)) goto L_10732d34;
  /* 10732d2d mov eax, 1 */
  EAX = (0x1u);
  /* 10732d32 jmp 0x10732d36 */
  goto L_10732d36;
L_10732d34:;
  /* 10732d34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10732d36:;
  /* 10732d36 mov esp, ebp */
  ESP = (EBP);
  /* 10732d38 pop ebp */
  EBP = (pop32());
  /* 10732d39 ret  */
  ESPCHK(0x10732a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d40 @ 0x10732d40 (504 bytes, 145 insns) */
void f_10732d40(void) {
  FTRACE(0x10732d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10732d40 push ebp */
  push32((uint32_t)(EBP));
  /* 10732d41 mov ebp, esp */
  EBP = (ESP);
  /* 10732d43 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10732d46 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10732d4a jne 0x10732e1c */
  if (!C.zf) goto L_10732e1c;
  /* 10732d50 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10732d53 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10732d56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10732d58 jne 0x10732d69 */
  if (!C.zf) goto L_10732d69;
  /* 10732d5a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10732d5d mov edx, dword ptr [ecx*4 + 0x1074ee4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1074ee4c)));
  /* 10732d64 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10732d67 jmp 0x10732d76 */
  goto L_10732d76;
L_10732d69:;
  /* 10732d69 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10732d6c mov ecx, dword ptr [eax*4 + 0x1074ee80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1074ee80)));
  /* 10732d73 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10732d76:;
  /* 10732d76 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10732d79 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10732d7c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10732d7f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10732d82 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10732d85 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10732d8b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10732d8e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10732d90 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10732d93 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10732d96 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10732d99 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 10732d9d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10732d9e mov ecx, 7 */
  ECX = (0x7u);
  /* 10732da3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10732da5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10732da8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10732dab cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10732dae jge 0x10732dc9 */
  if ((C.sf==C.of)) goto L_10732dc9;
  /* 10732db0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10732db3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10732db6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10732db9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10732dbc imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10732dbf add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10732dc2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10732dc4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10732dc7 jmp 0x10732ddd */
  goto L_10732ddd;
L_10732dc9:;
  /* 10732dc9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10732dcc sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10732dcf mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10732dd2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10732dd5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10732dd8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10732dda mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10732ddd:;
  /* 10732ddd cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10732de1 jne 0x10732e1a */
  if (!C.zf) goto L_10732e1a;
  /* 10732de3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10732de6 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10732de9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10732deb jne 0x10732dfc */
  if (!C.zf) goto L_10732dfc;
  /* 10732ded mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10732df0 mov eax, dword ptr [edx*4 + 0x1074ee50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1074ee50)));
  /* 10732df7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10732dfa jmp 0x10732e09 */
  goto L_10732e09;
L_10732dfc:;
  /* 10732dfc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10732dff mov edx, dword ptr [ecx*4 + 0x1074ee84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1074ee84)));
  /* 10732e06 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10732e09:;
  /* 10732e09 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10732e0c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10732e0f jle 0x10732e1a */
  if ((C.zf||C.sf!=C.of)) goto L_10732e1a;
  /* 10732e11 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10732e14 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10732e17 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10732e1a:;
  /* 10732e1a jmp 0x10732e51 */
  goto L_10732e51;
L_10732e1c:;
  /* 10732e1c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10732e1f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10732e22 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10732e24 jne 0x10732e35 */
  if (!C.zf) goto L_10732e35;
  /* 10732e26 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10732e29 mov ecx, dword ptr [eax*4 + 0x1074ee4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1074ee4c)));
  /* 10732e30 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10732e33 jmp 0x10732e42 */
  goto L_10732e42;
L_10732e35:;
  /* 10732e35 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10732e38 mov eax, dword ptr [edx*4 + 0x1074ee80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1074ee80)));
  /* 10732e3f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10732e42:;
  /* 10732e42 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10732e45 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10732e48 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10732e4b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10732e4e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10732e51:;
  /* 10732e51 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10732e55 jne 0x10732e91 */
  if (!C.zf) goto L_10732e91;
  /* 10732e57 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10732e5a mov dword ptr [0x1074ee2c], eax */
  w32((uint32_t)(0x1074ee2c), (EAX));
  /* 10732e5f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10732e62 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10732e65 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10732e68 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10732e6a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10732e6d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10732e70 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10732e72 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10732e78 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10732e7b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10732e7d mov dword ptr [0x1074ee30], ecx */
  w32((uint32_t)(0x1074ee30), (ECX));
  /* 10732e83 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10732e86 mov dword ptr [0x1074ee28], edx */
  w32((uint32_t)(0x1074ee28), (EDX));
  /* 10732e8c jmp 0x10732f34 */
  goto L_10732f34;
L_10732e91:;
  /* 10732e91 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10732e94 mov dword ptr [0x1074ee3c], eax */
  w32((uint32_t)(0x1074ee3c), (EAX));
  /* 10732e99 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10732e9c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10732e9f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10732ea2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10732ea4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10732ea7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10732eaa add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10732eac imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10732eb2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10732eb5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10732eb7 mov dword ptr [0x1074ee40], ecx */
  w32((uint32_t)(0x1074ee40), (ECX));
  /* 10732ebd mov edx, dword ptr [0x1074ed98] */
  EDX = (r32((uint32_t)(0x1074ed98)));
  /* 10732ec3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10732ec9 mov eax, dword ptr [0x1074ee40] */
  EAX = (r32((uint32_t)(0x1074ee40)));
  /* 10732ece add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10732ed0 mov dword ptr [0x1074ee40], eax */
  w32((uint32_t)(0x1074ee40), (EAX));
  /* 10732ed5 cmp dword ptr [0x1074ee40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074ee40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10732edc jge 0x10732f01 */
  if ((C.sf==C.of)) goto L_10732f01;
  /* 10732ede mov ecx, dword ptr [0x1074ee40] */
  ECX = (r32((uint32_t)(0x1074ee40)));
  /* 10732ee4 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10732eea mov dword ptr [0x1074ee40], ecx */
  w32((uint32_t)(0x1074ee40), (ECX));
  /* 10732ef0 mov edx, dword ptr [0x1074ee3c] */
  EDX = (r32((uint32_t)(0x1074ee3c)));
  /* 10732ef6 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10732ef9 mov dword ptr [0x1074ee3c], edx */
  w32((uint32_t)(0x1074ee3c), (EDX));
  /* 10732eff jmp 0x10732f2b */
  goto L_10732f2b;
L_10732f01:;
  /* 10732f01 cmp dword ptr [0x1074ee40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x1074ee40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10732f0b jl 0x10732f2b */
  if ((C.sf!=C.of)) goto L_10732f2b;
  /* 10732f0d mov eax, dword ptr [0x1074ee40] */
  EAX = (r32((uint32_t)(0x1074ee40)));
  /* 10732f12 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10732f17 mov dword ptr [0x1074ee40], eax */
  w32((uint32_t)(0x1074ee40), (EAX));
  /* 10732f1c mov ecx, dword ptr [0x1074ee3c] */
  ECX = (r32((uint32_t)(0x1074ee3c)));
  /* 10732f22 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10732f25 mov dword ptr [0x1074ee3c], ecx */
  w32((uint32_t)(0x1074ee3c), (ECX));
L_10732f2b:;
  /* 10732f2b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10732f2e mov dword ptr [0x1074ee38], edx */
  w32((uint32_t)(0x1074ee38), (EDX));
L_10732f34:;
  /* 10732f34 mov esp, ebp */
  ESP = (EBP);
  /* 10732f36 pop ebp */
  EBP = (pop32());
  /* 10732f37 ret  */
  ESPCHK(0x10732d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f40 @ 0x10732f40 (382 bytes, 135 insns) */
void f_10732f40(void) {
  FTRACE(0x10732f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10732f40 push ebp */
  push32((uint32_t)(EBP));
  /* 10732f41 mov ebp, esp */
  EBP = (ESP);
  /* 10732f43 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10732f45 push 0x1074b998 */
  push32((uint32_t)(0x1074b998u));
  /* 10732f4a push 0x1072cc08 */
  push32((uint32_t)(0x1072cc08u));
  /* 10732f4f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10732f55 push eax */
  push32((uint32_t)(EAX));
  /* 10732f56 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10732f5d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10732f60 push ebx */
  push32((uint32_t)(EBX));
  /* 10732f61 push esi */
  push32((uint32_t)(ESI));
  /* 10732f62 push edi */
  push32((uint32_t)(EDI));
  /* 10732f63 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10732f66 cmp dword ptr [0x1074f85c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f85c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10732f6d jne 0x10732fb2 */
  if (!C.zf) goto L_10732fb2;
  /* 10732f6f push 0 */
  push32((uint32_t)(0x0u));
  /* 10732f71 push 0 */
  push32((uint32_t)(0x0u));
  /* 10732f73 push 1 */
  push32((uint32_t)(0x1u));
  /* 10732f75 push 0 */
  push32((uint32_t)(0x0u));
  /* 10732f77 call dword ptr [0x10752290] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752290))), 0x10732f7du);
  /* 10732f7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10732f7f je 0x10732f8d */
  if (C.zf) goto L_10732f8d;
  /* 10732f81 mov dword ptr [0x1074f85c], 1 */
  w32((uint32_t)(0x1074f85c), (0x1u));
  /* 10732f8b jmp 0x10732fb2 */
  goto L_10732fb2;
L_10732f8d:;
  /* 10732f8d push 0 */
  push32((uint32_t)(0x0u));
  /* 10732f8f push 0 */
  push32((uint32_t)(0x0u));
  /* 10732f91 push 1 */
  push32((uint32_t)(0x1u));
  /* 10732f93 push 0 */
  push32((uint32_t)(0x0u));
  /* 10732f95 call dword ptr [0x107522a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522a8))), 0x10732f9bu);
  /* 10732f9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10732f9d je 0x10732fab */
  if (C.zf) goto L_10732fab;
  /* 10732f9f mov dword ptr [0x1074f85c], 2 */
  w32((uint32_t)(0x1074f85c), (0x2u));
  /* 10732fa9 jmp 0x10732fb2 */
  goto L_10732fb2;
L_10732fab:;
  /* 10732fab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10732fad jmp 0x107330c1 */
  goto L_107330c1;
L_10732fb2:;
  /* 10732fb2 cmp dword ptr [0x1074f85c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1074f85c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10732fb9 jne 0x10732fd6 */
  if (!C.zf) goto L_10732fd6;
  /* 10732fbb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10732fbe push eax */
  push32((uint32_t)(EAX));
  /* 10732fbf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10732fc2 push ecx */
  push32((uint32_t)(ECX));
  /* 10732fc3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10732fc6 push edx */
  push32((uint32_t)(EDX));
  /* 10732fc7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10732fca push eax */
  push32((uint32_t)(EAX));
  /* 10732fcb call dword ptr [0x10752290] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752290))), 0x10732fd1u);
  /* 10732fd1 jmp 0x107330c1 */
  goto L_107330c1;
L_10732fd6:;
  /* 10732fd6 cmp dword ptr [0x1074f85c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1074f85c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10732fdd jne 0x107330bf */
  if (!C.zf) goto L_107330bf;
  /* 10732fe3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10732fe7 jne 0x10732ff2 */
  if (!C.zf) goto L_10732ff2;
  /* 10732fe9 mov ecx, dword ptr [0x1074f710] */
  ECX = (r32((uint32_t)(0x1074f710)));
  /* 10732fef mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10732ff2:;
  /* 10732ff2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10732ff4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10732ff6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10732ff9 push edx */
  push32((uint32_t)(EDX));
  /* 10732ffa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10732ffd push eax */
  push32((uint32_t)(EAX));
  /* 10732ffe call dword ptr [0x107522a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522a8))), 0x10733004u);
  /* 10733004 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10733007 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1073300b jne 0x10733014 */
  if (!C.zf) goto L_10733014;
  /* 1073300d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1073300f jmp 0x107330c1 */
  goto L_107330c1;
L_10733014:;
  /* 10733014 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1073301b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1073301e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10733021 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10733023 call 0x10726ca0 */
  push32(0x10733028u); f_10726ca0();
  /* 10733028 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 1073302b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1073302e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10733031 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10733034 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1073303b jmp 0x10733054 */
  goto L_10733054;
  /* 1073303d mov eax, 1 */
  EAX = (0x1u);
  /* 10733042 ret  */
  ESPCHK(0x10732f40u, _esp0);
  ESP += 4; return;
  /* 10733043 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10733046 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1073304d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10733054:;
  /* 10733054 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10733058 jne 0x1073305e */
  if (!C.zf) goto L_1073305e;
  /* 1073305a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1073305c jmp 0x107330c1 */
  goto L_107330c1;
L_1073305e:;
  /* 1073305e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10733061 push edx */
  push32((uint32_t)(EDX));
  /* 10733062 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10733065 push eax */
  push32((uint32_t)(EAX));
  /* 10733066 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10733069 push ecx */
  push32((uint32_t)(ECX));
  /* 1073306a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1073306d push edx */
  push32((uint32_t)(EDX));
  /* 1073306e call dword ptr [0x107522a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522a8))), 0x10733074u);
  /* 10733074 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10733076 jne 0x1073307c */
  if (!C.zf) goto L_1073307c;
  /* 10733078 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1073307a jmp 0x107330c1 */
  goto L_107330c1;
L_1073307c:;
  /* 1073307c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10733080 jne 0x1073309d */
  if (!C.zf) goto L_1073309d;
  /* 10733082 push 0 */
  push32((uint32_t)(0x0u));
  /* 10733084 push 0 */
  push32((uint32_t)(0x0u));
  /* 10733086 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10733088 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1073308b push eax */
  push32((uint32_t)(EAX));
  /* 1073308c push 1 */
  push32((uint32_t)(0x1u));
  /* 1073308e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10733091 push ecx */
  push32((uint32_t)(ECX));
  /* 10733092 call dword ptr [0x107522d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522d8))), 0x10733098u);
  /* 10733098 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1073309b jmp 0x107330ba */
  goto L_107330ba;
L_1073309d:;
  /* 1073309d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107330a0 push edx */
  push32((uint32_t)(EDX));
  /* 107330a1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107330a4 push eax */
  push32((uint32_t)(EAX));
  /* 107330a5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 107330a7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107330aa push ecx */
  push32((uint32_t)(ECX));
  /* 107330ab push 1 */
  push32((uint32_t)(0x1u));
  /* 107330ad mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107330b0 push edx */
  push32((uint32_t)(EDX));
  /* 107330b1 call dword ptr [0x107522d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522d8))), 0x107330b7u);
  /* 107330b7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_107330ba:;
  /* 107330ba mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107330bd jmp 0x107330c1 */
  goto L_107330c1;
L_107330bf:;
  /* 107330bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107330c1:;
  /* 107330c1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 107330c4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107330c7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 107330ce pop edi */
  EDI = (pop32());
  /* 107330cf pop esi */
  ESI = (pop32());
  /* 107330d0 pop ebx */
  EBX = (pop32());
  /* 107330d1 mov esp, ebp */
  ESP = (EBP);
  /* 107330d3 pop ebp */
  EBP = (pop32());
  /* 107330d4 ret  */
  ESPCHK(0x10732f40u, _esp0);
  ESP += 4; return;
}

/* FUN_100130e0 @ 0x107330e0 (398 bytes, 140 insns) */
void f_107330e0(void) {
  FTRACE(0x107330e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107330e0 push ebp */
  push32((uint32_t)(EBP));
  /* 107330e1 mov ebp, esp */
  EBP = (ESP);
  /* 107330e3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 107330e5 push 0x1074b9a8 */
  push32((uint32_t)(0x1074b9a8u));
  /* 107330ea push 0x1072cc08 */
  push32((uint32_t)(0x1072cc08u));
  /* 107330ef mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 107330f5 push eax */
  push32((uint32_t)(EAX));
  /* 107330f6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 107330fd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10733100 push ebx */
  push32((uint32_t)(EBX));
  /* 10733101 push esi */
  push32((uint32_t)(ESI));
  /* 10733102 push edi */
  push32((uint32_t)(EDI));
  /* 10733103 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10733106 cmp dword ptr [0x1074f860], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f860))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1073310d jne 0x10733152 */
  if (!C.zf) goto L_10733152;
  /* 1073310f push 0 */
  push32((uint32_t)(0x0u));
  /* 10733111 push 0 */
  push32((uint32_t)(0x0u));
  /* 10733113 push 1 */
  push32((uint32_t)(0x1u));
  /* 10733115 push 0 */
  push32((uint32_t)(0x0u));
  /* 10733117 call dword ptr [0x10752290] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752290))), 0x1073311du);
  /* 1073311d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1073311f je 0x1073312d */
  if (C.zf) goto L_1073312d;
  /* 10733121 mov dword ptr [0x1074f860], 1 */
  w32((uint32_t)(0x1074f860), (0x1u));
  /* 1073312b jmp 0x10733152 */
  goto L_10733152;
L_1073312d:;
  /* 1073312d push 0 */
  push32((uint32_t)(0x0u));
  /* 1073312f push 0 */
  push32((uint32_t)(0x0u));
  /* 10733131 push 1 */
  push32((uint32_t)(0x1u));
  /* 10733133 push 0 */
  push32((uint32_t)(0x0u));
  /* 10733135 call dword ptr [0x107522a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522a8))), 0x1073313bu);
  /* 1073313b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1073313d je 0x1073314b */
  if (C.zf) goto L_1073314b;
  /* 1073313f mov dword ptr [0x1074f860], 2 */
  w32((uint32_t)(0x1074f860), (0x2u));
  /* 10733149 jmp 0x10733152 */
  goto L_10733152;
L_1073314b:;
  /* 1073314b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1073314d jmp 0x10733271 */
  goto L_10733271;
L_10733152:;
  /* 10733152 cmp dword ptr [0x1074f860], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1074f860))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10733159 jne 0x10733176 */
  if (!C.zf) goto L_10733176;
  /* 1073315b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1073315e push eax */
  push32((uint32_t)(EAX));
  /* 1073315f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10733162 push ecx */
  push32((uint32_t)(ECX));
  /* 10733163 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10733166 push edx */
  push32((uint32_t)(EDX));
  /* 10733167 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1073316a push eax */
  push32((uint32_t)(EAX));
  /* 1073316b call dword ptr [0x107522a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522a8))), 0x10733171u);
  /* 10733171 jmp 0x10733271 */
  goto L_10733271;
L_10733176:;
  /* 10733176 cmp dword ptr [0x1074f860], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1074f860))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1073317d jne 0x1073326f */
  if (!C.zf) goto L_1073326f;
  /* 10733183 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10733187 jne 0x10733192 */
  if (!C.zf) goto L_10733192;
  /* 10733189 mov ecx, dword ptr [0x1074f710] */
  ECX = (r32((uint32_t)(0x1074f710)));
  /* 1073318f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10733192:;
  /* 10733192 push 0 */
  push32((uint32_t)(0x0u));
  /* 10733194 push 0 */
  push32((uint32_t)(0x0u));
  /* 10733196 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10733199 push edx */
  push32((uint32_t)(EDX));
  /* 1073319a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1073319d push eax */
  push32((uint32_t)(EAX));
  /* 1073319e call dword ptr [0x10752290] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752290))), 0x107331a4u);
  /* 107331a4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 107331a7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107331ab jne 0x107331b4 */
  if (!C.zf) goto L_107331b4;
  /* 107331ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107331af jmp 0x10733271 */
  goto L_10733271;
L_107331b4:;
  /* 107331b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107331bb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107331be shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 107331c0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107331c3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 107331c5 call 0x10726ca0 */
  push32(0x107331cau); f_10726ca0();
  /* 107331ca mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 107331cd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 107331d0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 107331d3 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 107331d6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 107331dd jmp 0x107331f6 */
  goto L_107331f6;
  /* 107331df mov eax, 1 */
  EAX = (0x1u);
  /* 107331e4 ret  */
  ESPCHK(0x107330e0u, _esp0);
  ESP += 4; return;
  /* 107331e5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 107331e8 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 107331ef mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_107331f6:;
  /* 107331f6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107331fa jne 0x10733200 */
  if (!C.zf) goto L_10733200;
  /* 107331fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107331fe jmp 0x10733271 */
  goto L_10733271;
L_10733200:;
  /* 10733200 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10733203 push edx */
  push32((uint32_t)(EDX));
  /* 10733204 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10733207 push eax */
  push32((uint32_t)(EAX));
  /* 10733208 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1073320b push ecx */
  push32((uint32_t)(ECX));
  /* 1073320c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1073320f push edx */
  push32((uint32_t)(EDX));
  /* 10733210 call dword ptr [0x10752290] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752290))), 0x10733216u);
  /* 10733216 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10733218 jne 0x1073321e */
  if (!C.zf) goto L_1073321e;
  /* 1073321a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1073321c jmp 0x10733271 */
  goto L_10733271;
L_1073321e:;
  /* 1073321e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10733222 jne 0x10733246 */
  if (!C.zf) goto L_10733246;
  /* 10733224 push 0 */
  push32((uint32_t)(0x0u));
  /* 10733226 push 0 */
  push32((uint32_t)(0x0u));
  /* 10733228 push 0 */
  push32((uint32_t)(0x0u));
  /* 1073322a push 0 */
  push32((uint32_t)(0x0u));
  /* 1073322c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1073322e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10733231 push eax */
  push32((uint32_t)(EAX));
  /* 10733232 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10733237 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1073323a push ecx */
  push32((uint32_t)(ECX));
  /* 1073323b call dword ptr [0x1075234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075234c))), 0x10733241u);
  /* 10733241 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10733244 jmp 0x1073326a */
  goto L_1073326a;
L_10733246:;
  /* 10733246 push 0 */
  push32((uint32_t)(0x0u));
  /* 10733248 push 0 */
  push32((uint32_t)(0x0u));
  /* 1073324a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1073324d push edx */
  push32((uint32_t)(EDX));
  /* 1073324e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10733251 push eax */
  push32((uint32_t)(EAX));
  /* 10733252 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10733254 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10733257 push ecx */
  push32((uint32_t)(ECX));
  /* 10733258 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1073325d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10733260 push edx */
  push32((uint32_t)(EDX));
  /* 10733261 call dword ptr [0x1075234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075234c))), 0x10733267u);
  /* 10733267 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1073326a:;
  /* 1073326a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1073326d jmp 0x10733271 */
  goto L_10733271;
L_1073326f:;
  /* 1073326f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10733271:;
  /* 10733271 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10733274 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10733277 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1073327e pop edi */
  EDI = (pop32());
  /* 1073327f pop esi */
  ESI = (pop32());
  /* 10733280 pop ebx */
  EBX = (pop32());
  /* 10733281 mov esp, ebp */
  ESP = (EBP);
  /* 10733283 pop ebp */
  EBP = (pop32());
  /* 10733284 ret  */
  ESPCHK(0x107330e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013290 @ 0x10733290 (11 bytes, 6 insns) */
void f_10733290(void) {
  FTRACE(0x10733290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10733290 push ebp */
  push32((uint32_t)(EBP));
  /* 10733291 mov ebp, esp */
  EBP = (ESP);
  /* 10733293 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10733296 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10733299 pop ebp */
  EBP = (pop32());
  /* 1073329a ret  */
  ESPCHK(0x10733290u, _esp0);
  ESP += 4; return;
}

/* FUN_100132a0 @ 0x107332a0 (147 bytes, 43 insns) */
void f_107332a0(void) {
  FTRACE(0x107332a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107332a0 push ebp */
  push32((uint32_t)(EBP));
  /* 107332a1 mov ebp, esp */
  EBP = (ESP);
  /* 107332a3 push ecx */
  push32((uint32_t)(ECX));
  /* 107332a4 cmp dword ptr [0x1074f700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107332ab jne 0x107332c7 */
  if (!C.zf) goto L_107332c7;
  /* 107332ad cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107332b1 jl 0x107332c2 */
  if ((C.sf!=C.of)) goto L_107332c2;
  /* 107332b3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107332b7 jg 0x107332c2 */
  if ((!C.zf&&C.sf==C.of)) goto L_107332c2;
  /* 107332b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107332bc add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107332bf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_107332c2:;
  /* 107332c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107332c5 jmp 0x1073332f */
  goto L_1073332f;
L_107332c7:;
  /* 107332c7 push 0x1074f88c */
  push32((uint32_t)(0x1074f88cu));
  /* 107332cc call dword ptr [0x10752320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752320))), 0x107332d2u);
  /* 107332d2 cmp dword ptr [0x1074f87c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f87c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107332d9 je 0x107332f9 */
  if (C.zf) goto L_107332f9;
  /* 107332db push 0x1074f88c */
  push32((uint32_t)(0x1074f88cu));
  /* 107332e0 call dword ptr [0x10752310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752310))), 0x107332e6u);
  /* 107332e6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 107332e8 call 0x10727500 */
  push32(0x107332edu); f_10727500();
  /* 107332ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107332f0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 107332f7 jmp 0x10733300 */
  goto L_10733300;
L_107332f9:;
  /* 107332f9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10733300:;
  /* 10733300 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10733303 push ecx */
  push32((uint32_t)(ECX));
  /* 10733304 call 0x10733340 */
  push32(0x10733309u); f_10733340();
  /* 10733309 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1073330c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1073330f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10733313 je 0x10733321 */
  if (C.zf) goto L_10733321;
  /* 10733315 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10733317 call 0x107275a0 */
  push32(0x1073331cu); f_107275a0();
  /* 1073331c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1073331f jmp 0x1073332c */
  goto L_1073332c;
L_10733321:;
  /* 10733321 push 0x1074f88c */
  push32((uint32_t)(0x1074f88cu));
  /* 10733326 call dword ptr [0x10752310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752310))), 0x1073332cu);
L_1073332c:;
  /* 1073332c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1073332f:;
  /* 1073332f mov esp, ebp */
  ESP = (EBP);
  /* 10733331 pop ebp */
  EBP = (pop32());
  /* 10733332 ret  */
  ESPCHK(0x107332a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013340 @ 0x10733340 (299 bytes, 91 insns) */
void f_10733340(void) {
  FTRACE(0x10733340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10733340 push ebp */
  push32((uint32_t)(EBP));
  /* 10733341 mov ebp, esp */
  EBP = (ESP);
  /* 10733343 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10733346 cmp dword ptr [0x1074f700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1073334d jne 0x1073336c */
  if (!C.zf) goto L_1073336c;
  /* 1073334f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10733353 jl 0x10733364 */
  if ((C.sf!=C.of)) goto L_10733364;
  /* 10733355 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10733359 jg 0x10733364 */
  if ((!C.zf&&C.sf==C.of)) goto L_10733364;
  /* 1073335b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1073335e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10733361 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10733364:;
  /* 10733364 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10733367 jmp 0x10733467 */
  goto L_10733467;
L_1073336c:;
  /* 1073336c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10733373 jge 0x107333b3 */
  if ((C.sf==C.of)) goto L_107333b3;
  /* 10733375 cmp dword ptr [0x1074dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1074dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1073337c jle 0x10733391 */
  if ((C.zf||C.sf!=C.of)) goto L_10733391;
  /* 1073337e push 1 */
  push32((uint32_t)(0x1u));
  /* 10733380 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10733383 push ecx */
  push32((uint32_t)(ECX));
  /* 10733384 call 0x10729b10 */
  push32(0x10733389u); f_10729b10();
  /* 10733389 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1073338c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1073338f jmp 0x107333a5 */
  goto L_107333a5;
L_10733391:;
  /* 10733391 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10733394 mov eax, dword ptr [0x1074dc98] */
  EAX = (r32((uint32_t)(0x1074dc98)));
  /* 10733399 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1073339b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1073339f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 107333a2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_107333a5:;
  /* 107333a5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107333a9 jne 0x107333b3 */
  if (!C.zf) goto L_107333b3;
  /* 107333ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107333ae jmp 0x10733467 */
  goto L_10733467;
L_107333b3:;
  /* 107333b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107333b6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 107333b9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 107333bf and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 107333c5 mov eax, dword ptr [0x1074dc98] */
  EAX = (r32((uint32_t)(0x1074dc98)));
  /* 107333ca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107333cc mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 107333d0 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 107333d6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107333d8 je 0x107333fc */
  if (C.zf) goto L_107333fc;
  /* 107333da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107333dd sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 107333e0 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 107333e6 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 107333e9 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 107333ec mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 107333ef mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 107333f3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 107333fa jmp 0x1073340d */
  goto L_1073340d;
L_107333fc:;
  /* 107333fc mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 107333ff mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10733402 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 10733406 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_1073340d:;
  /* 1073340d push 1 */
  push32((uint32_t)(0x1u));
  /* 1073340f push 0 */
  push32((uint32_t)(0x0u));
  /* 10733411 push 3 */
  push32((uint32_t)(0x3u));
  /* 10733413 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10733416 push edx */
  push32((uint32_t)(EDX));
  /* 10733417 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1073341a push eax */
  push32((uint32_t)(EAX));
  /* 1073341b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 1073341e push ecx */
  push32((uint32_t)(ECX));
  /* 1073341f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10733424 mov edx, dword ptr [0x1074f700] */
  EDX = (r32((uint32_t)(0x1074f700)));
  /* 1073342a push edx */
  push32((uint32_t)(EDX));
  /* 1073342b call 0x1072bef0 */
  push32(0x10733430u); f_1072bef0();
  /* 10733430 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10733433 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10733436 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1073343a jne 0x10733441 */
  if (!C.zf) goto L_10733441;
  /* 1073343c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1073343f jmp 0x10733467 */
  goto L_10733467;
L_10733441:;
  /* 10733441 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10733445 jne 0x10733451 */
  if (!C.zf) goto L_10733451;
  /* 10733447 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1073344a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1073344f jmp 0x10733467 */
  goto L_10733467;
L_10733451:;
  /* 10733451 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10733454 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10733459 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 1073345c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10733462 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10733465 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_10733467:;
  /* 10733467 mov esp, ebp */
  ESP = (EBP);
  /* 10733469 pop ebp */
  EBP = (pop32());
  /* 1073346a ret  */
  ESPCHK(0x10733340u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x10733470 (52 bytes, 19 insns) */
void f_10733470(void) {
  FTRACE(0x10733470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10733470 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10733474 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10733478 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1073347a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1073347e jne 0x10733489 */
  if (!C.zf) goto L_10733489;
  /* 10733480 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10733484 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10733486 ret 0x10 */
  ESPCHK(0x10733470u, _esp0);
  ESP += 20; return;
L_10733489:;
  /* 10733489 push ebx */
  push32((uint32_t)(EBX));
  /* 1073348a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1073348c mov ebx, eax */
  EBX = (EAX);
  /* 1073348e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10733492 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10733496 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10733498 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1073349c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1073349e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107334a0 pop ebx */
  EBX = (pop32());
  /* 107334a1 ret 0x10 */
  ESPCHK(0x10733470u, _esp0);
  ESP += 20; return;
}

/* FUN_100134b0 @ 0x107334b0 (46 bytes, 18 insns) */
void f_107334b0(void) {
  FTRACE(0x107334b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107334b0 push ebp */
  push32((uint32_t)(EBP));
  /* 107334b1 mov ebp, esp */
  EBP = (ESP);
  /* 107334b3 push ecx */
  push32((uint32_t)(ECX));
  /* 107334b4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 107334b6 call 0x10727500 */
  push32(0x107334bbu); f_10727500();
  /* 107334bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107334be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107334c1 push eax */
  push32((uint32_t)(EAX));
  /* 107334c2 call 0x107334e0 */
  push32(0x107334c7u); f_107334e0();
  /* 107334c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107334ca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107334cd push 0xc */
  push32((uint32_t)(0xcu));
  /* 107334cf call 0x107275a0 */
  push32(0x107334d4u); f_107275a0();
  /* 107334d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107334d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107334da mov esp, ebp */
  ESP = (EBP);
  /* 107334dc pop ebp */
  EBP = (pop32());
  /* 107334dd ret  */
  ESPCHK(0x107334b0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x107334e0 (198 bytes, 69 insns) */
void f_107334e0(void) {
  FTRACE(0x107334e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107334e0 push ebp */
  push32((uint32_t)(EBP));
  /* 107334e1 mov ebp, esp */
  EBP = (ESP);
  /* 107334e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107334e6 mov eax, dword ptr [0x1074f520] */
  EAX = (r32((uint32_t)(0x1074f520)));
  /* 107334eb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107334ee cmp dword ptr [0x10751020], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10751020))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107334f5 jne 0x107334fe */
  if (!C.zf) goto L_107334fe;
  /* 107334f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107334f9 jmp 0x107335a2 */
  goto L_107335a2;
L_107334fe:;
  /* 107334fe cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10733502 jne 0x10733526 */
  if (!C.zf) goto L_10733526;
  /* 10733504 cmp dword ptr [0x1074f528], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f528))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1073350b je 0x10733526 */
  if (C.zf) goto L_10733526;
  /* 1073350d call 0x10733600 */
  push32(0x10733512u); f_10733600();
  /* 10733512 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10733514 je 0x1073351d */
  if (C.zf) goto L_1073351d;
  /* 10733516 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10733518 jmp 0x107335a2 */
  goto L_107335a2;
L_1073351d:;
  /* 1073351d mov ecx, dword ptr [0x1074f520] */
  ECX = (r32((uint32_t)(0x1074f520)));
  /* 10733523 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10733526:;
  /* 10733526 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1073352a je 0x107335a0 */
  if (C.zf) goto L_107335a0;
  /* 1073352c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10733530 je 0x107335a0 */
  if (C.zf) goto L_107335a0;
  /* 10733532 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10733535 push edx */
  push32((uint32_t)(EDX));
  /* 10733536 call 0x10726930 */
  push32(0x1073353bu); f_10726930();
  /* 1073353b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1073353e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10733541:;
  /* 10733541 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10733544 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10733547 je 0x107335a0 */
  if (C.zf) goto L_107335a0;
  /* 10733549 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1073354c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1073354e push edx */
  push32((uint32_t)(EDX));
  /* 1073354f call 0x10726930 */
  push32(0x10733554u); f_10726930();
  /* 10733554 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10733557 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1073355a jbe 0x10733595 */
  if ((C.cf||C.zf)) goto L_10733595;
  /* 1073355c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1073355f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10733561 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10733564 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 10733568 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1073356b jne 0x10733595 */
  if (!C.zf) goto L_10733595;
  /* 1073356d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10733570 push ecx */
  push32((uint32_t)(ECX));
  /* 10733571 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10733574 push edx */
  push32((uint32_t)(EDX));
  /* 10733575 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10733578 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1073357a push ecx */
  push32((uint32_t)(ECX));
  /* 1073357b call 0x107335b0 */
  push32(0x10733580u); f_107335b0();
  /* 10733580 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10733583 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10733585 jne 0x10733595 */
  if (!C.zf) goto L_10733595;
  /* 10733587 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1073358a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1073358c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1073358f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 10733593 jmp 0x107335a2 */
  goto L_107335a2;
L_10733595:;
  /* 10733595 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10733598 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1073359b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1073359e jmp 0x10733541 */
  goto L_10733541;
L_107335a0:;
  /* 107335a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107335a2:;
  /* 107335a2 mov esp, ebp */
  ESP = (EBP);
  /* 107335a4 pop ebp */
  EBP = (pop32());
  /* 107335a5 ret  */
  ESPCHK(0x107334e0u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x107335b0 (79 bytes, 32 insns) */
void f_107335b0(void) {
  FTRACE(0x107335b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107335b0 push ebp */
  push32((uint32_t)(EBP));
  /* 107335b1 mov ebp, esp */
  EBP = (ESP);
  /* 107335b3 push ecx */
  push32((uint32_t)(ECX));
  /* 107335b4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107335b8 jne 0x107335be */
  if (!C.zf) goto L_107335be;
  /* 107335ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107335bc jmp 0x107335fb */
  goto L_107335fb;
L_107335be:;
  /* 107335be mov eax, dword ptr [0x10750be4] */
  EAX = (r32((uint32_t)(0x10750be4)));
  /* 107335c3 push eax */
  push32((uint32_t)(EAX));
  /* 107335c4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107335c7 push ecx */
  push32((uint32_t)(ECX));
  /* 107335c8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107335cb push edx */
  push32((uint32_t)(EDX));
  /* 107335cc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107335cf push eax */
  push32((uint32_t)(EAX));
  /* 107335d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107335d3 push ecx */
  push32((uint32_t)(ECX));
  /* 107335d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 107335d6 mov edx, dword ptr [0x10750e84] */
  EDX = (r32((uint32_t)(0x10750e84)));
  /* 107335dc push edx */
  push32((uint32_t)(EDX));
  /* 107335dd call 0x107336b0 */
  push32(0x107335e2u); f_107336b0();
  /* 107335e2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107335e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107335e8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107335ec jne 0x107335f5 */
  if (!C.zf) goto L_107335f5;
  /* 107335ee mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 107335f3 jmp 0x107335fb */
  goto L_107335fb;
L_107335f5:;
  /* 107335f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107335f8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_107335fb:;
  /* 107335fb mov esp, ebp */
  ESP = (EBP);
  /* 107335fd pop ebp */
  EBP = (pop32());
  /* 107335fe ret  */
  ESPCHK(0x107335b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013600 @ 0x10733600 (174 bytes, 66 insns) */
void f_10733600(void) {
  FTRACE(0x10733600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10733600 push ebp */
  push32((uint32_t)(EBP));
  /* 10733601 mov ebp, esp */
  EBP = (ESP);
  /* 10733603 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10733606 mov eax, dword ptr [0x1074f528] */
  EAX = (r32((uint32_t)(0x1074f528)));
  /* 1073360b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1073360e:;
  /* 1073360e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10733611 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10733614 je 0x107336a8 */
  if (C.zf) goto L_107336a8;
  /* 1073361a push 0 */
  push32((uint32_t)(0x0u));
  /* 1073361c push 0 */
  push32((uint32_t)(0x0u));
  /* 1073361e push 0 */
  push32((uint32_t)(0x0u));
  /* 10733620 push 0 */
  push32((uint32_t)(0x0u));
  /* 10733622 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10733624 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10733627 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10733629 push eax */
  push32((uint32_t)(EAX));
  /* 1073362a push 0 */
  push32((uint32_t)(0x0u));
  /* 1073362c push 1 */
  push32((uint32_t)(0x1u));
  /* 1073362e call dword ptr [0x1075234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075234c))), 0x10733634u);
  /* 10733634 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10733637 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1073363b jne 0x10733642 */
  if (!C.zf) goto L_10733642;
  /* 1073363d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10733640 jmp 0x107336aa */
  goto L_107336aa;
L_10733642:;
  /* 10733642 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10733644 push 0x1074b9b4 */
  push32((uint32_t)(0x1074b9b4u));
  /* 10733649 push 2 */
  push32((uint32_t)(0x2u));
  /* 1073364b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1073364e push ecx */
  push32((uint32_t)(ECX));
  /* 1073364f call 0x10723b00 */
  push32(0x10733654u); f_10723b00();
  /* 10733654 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10733657 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1073365a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1073365e jne 0x10733665 */
  if (!C.zf) goto L_10733665;
  /* 10733660 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10733663 jmp 0x107336aa */
  goto L_107336aa;
L_10733665:;
  /* 10733665 push 0 */
  push32((uint32_t)(0x0u));
  /* 10733667 push 0 */
  push32((uint32_t)(0x0u));
  /* 10733669 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1073366c push edx */
  push32((uint32_t)(EDX));
  /* 1073366d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10733670 push eax */
  push32((uint32_t)(EAX));
  /* 10733671 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10733673 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10733676 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10733678 push edx */
  push32((uint32_t)(EDX));
  /* 10733679 push 0 */
  push32((uint32_t)(0x0u));
  /* 1073367b push 1 */
  push32((uint32_t)(0x1u));
  /* 1073367d call dword ptr [0x1075234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075234c))), 0x10733683u);
  /* 10733683 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10733685 jne 0x1073368c */
  if (!C.zf) goto L_1073368c;
  /* 10733687 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1073368a jmp 0x107336aa */
  goto L_107336aa;
L_1073368c:;
  /* 1073368c push 0 */
  push32((uint32_t)(0x0u));
  /* 1073368e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10733691 push eax */
  push32((uint32_t)(EAX));
  /* 10733692 call 0x10733b00 */
  push32(0x10733697u); f_10733b00();
  /* 10733697 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1073369a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1073369d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107336a0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107336a3 jmp 0x1073360e */
  goto L_1073360e;
L_107336a8:;
  /* 107336a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107336aa:;
  /* 107336aa mov esp, ebp */
  ESP = (EBP);
  /* 107336ac pop ebp */
  EBP = (pop32());
  /* 107336ad ret  */
  ESPCHK(0x10733600u, _esp0);
  ESP += 4; return;
}

/* FUN_100136b0 @ 0x107336b0 (970 bytes, 340 insns) */
void f_107336b0(void) {
  FTRACE(0x107336b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107336b0 push ebp */
  push32((uint32_t)(EBP));
  /* 107336b1 mov ebp, esp */
  EBP = (ESP);
  /* 107336b3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 107336b5 push 0x1074ba08 */
  push32((uint32_t)(0x1074ba08u));
  /* 107336ba push 0x1072cc08 */
  push32((uint32_t)(0x1072cc08u));
  /* 107336bf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 107336c5 push eax */
  push32((uint32_t)(EAX));
  /* 107336c6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 107336cd add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107336d0 push ebx */
  push32((uint32_t)(EBX));
  /* 107336d1 push esi */
  push32((uint32_t)(ESI));
  /* 107336d2 push edi */
  push32((uint32_t)(EDI));
  /* 107336d3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 107336d6 cmp dword ptr [0x1074f864], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f864))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107336dd jne 0x10733736 */
  if (!C.zf) goto L_10733736;
  /* 107336df push 1 */
  push32((uint32_t)(0x1u));
  /* 107336e1 push 0x1074b064 */
  push32((uint32_t)(0x1074b064u));
  /* 107336e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 107336e8 push 0x1074b064 */
  push32((uint32_t)(0x1074b064u));
  /* 107336ed push 0 */
  push32((uint32_t)(0x0u));
  /* 107336ef push 0 */
  push32((uint32_t)(0x0u));
  /* 107336f1 call dword ptr [0x1075228c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075228c))), 0x107336f7u);
  /* 107336f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107336f9 je 0x10733707 */
  if (C.zf) goto L_10733707;
  /* 107336fb mov dword ptr [0x1074f864], 1 */
  w32((uint32_t)(0x1074f864), (0x1u));
  /* 10733705 jmp 0x10733736 */
  goto L_10733736;
L_10733707:;
  /* 10733707 push 1 */
  push32((uint32_t)(0x1u));
  /* 10733709 push 0x1074b060 */
  push32((uint32_t)(0x1074b060u));
  /* 1073370e push 1 */
  push32((uint32_t)(0x1u));
  /* 10733710 push 0x1074b060 */
  push32((uint32_t)(0x1074b060u));
  /* 10733715 push 0 */
  push32((uint32_t)(0x0u));
  /* 10733717 push 0 */
  push32((uint32_t)(0x0u));
  /* 10733719 call dword ptr [0x10752298] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752298))), 0x1073371fu);
  /* 1073371f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10733721 je 0x1073372f */
  if (C.zf) goto L_1073372f;
  /* 10733723 mov dword ptr [0x1074f864], 2 */
  w32((uint32_t)(0x1074f864), (0x2u));
  /* 1073372d jmp 0x10733736 */
  goto L_10733736;
L_1073372f:;
  /* 1073372f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10733731 jmp 0x10733a94 */
  goto L_10733a94;
L_10733736:;
  /* 10733736 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1073373a jle 0x1073374f */
  if ((C.zf||C.sf!=C.of)) goto L_1073374f;
  /* 1073373c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1073373f push eax */
  push32((uint32_t)(EAX));
  /* 10733740 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10733743 push ecx */
  push32((uint32_t)(ECX));
  /* 10733744 call 0x10733ab0 */
  push32(0x10733749u); f_10733ab0();
  /* 10733749 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1073374c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1073374f:;
  /* 1073374f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10733753 jle 0x10733768 */
  if ((C.zf||C.sf!=C.of)) goto L_10733768;
  /* 10733755 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10733758 push edx */
  push32((uint32_t)(EDX));
  /* 10733759 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1073375c push eax */
  push32((uint32_t)(EAX));
  /* 1073375d call 0x10733ab0 */
  push32(0x10733762u); f_10733ab0();
  /* 10733762 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10733765 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_10733768:;
  /* 10733768 cmp dword ptr [0x1074f864], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1074f864))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1073376f jne 0x10733794 */
  if (!C.zf) goto L_10733794;
  /* 10733771 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10733774 push ecx */
  push32((uint32_t)(ECX));
  /* 10733775 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10733778 push edx */
  push32((uint32_t)(EDX));
  /* 10733779 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1073377c push eax */
  push32((uint32_t)(EAX));
  /* 1073377d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10733780 push ecx */
  push32((uint32_t)(ECX));
  /* 10733781 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10733784 push edx */
  push32((uint32_t)(EDX));
  /* 10733785 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10733788 push eax */
  push32((uint32_t)(EAX));
  /* 10733789 call dword ptr [0x10752298] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752298))), 0x1073378fu);
  /* 1073378f jmp 0x10733a94 */
  goto L_10733a94;
L_10733794:;
  /* 10733794 cmp dword ptr [0x1074f864], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1074f864))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1073379b jne 0x10733a92 */
  if (!C.zf) goto L_10733a92;
  /* 107337a1 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107337a5 jne 0x107337b0 */
  if (!C.zf) goto L_107337b0;
  /* 107337a7 mov ecx, dword ptr [0x1074f710] */
  ECX = (r32((uint32_t)(0x1074f710)));
  /* 107337ad mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_107337b0:;
  /* 107337b0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107337b4 je 0x107337c0 */
  if (C.zf) goto L_107337c0;
  /* 107337b6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107337ba jne 0x1073393c */
  if (!C.zf) goto L_1073393c;
L_107337c0:;
  /* 107337c0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107337c3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107337c6 jne 0x107337d2 */
  if (!C.zf) goto L_107337d2;
  /* 107337c8 mov eax, 2 */
  EAX = (0x2u);
  /* 107337cd jmp 0x10733a94 */
  goto L_10733a94;
L_107337d2:;
  /* 107337d2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107337d6 jle 0x107337e2 */
  if ((C.zf||C.sf!=C.of)) goto L_107337e2;
  /* 107337d8 mov eax, 1 */
  EAX = (0x1u);
  /* 107337dd jmp 0x10733a94 */
  goto L_10733a94;
L_107337e2:;
  /* 107337e2 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107337e6 jle 0x107337f2 */
  if ((C.zf||C.sf!=C.of)) goto L_107337f2;
  /* 107337e8 mov eax, 3 */
  EAX = (0x3u);
  /* 107337ed jmp 0x10733a94 */
  goto L_10733a94;
L_107337f2:;
  /* 107337f2 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 107337f5 push eax */
  push32((uint32_t)(EAX));
  /* 107337f6 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 107337f9 push ecx */
  push32((uint32_t)(ECX));
  /* 107337fa call dword ptr [0x107522e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522e4))), 0x10733800u);
  /* 10733800 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10733802 jne 0x1073380b */
  if (!C.zf) goto L_1073380b;
  /* 10733804 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10733806 jmp 0x10733a94 */
  goto L_10733a94;
L_1073380b:;
  /* 1073380b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1073380f jne 0x10733817 */
  if (!C.zf) goto L_10733817;
  /* 10733811 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10733815 je 0x10733844 */
  if (C.zf) goto L_10733844;
L_10733817:;
  /* 10733817 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1073381b jne 0x10733823 */
  if (!C.zf) goto L_10733823;
  /* 1073381d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10733821 je 0x10733844 */
  if (C.zf) goto L_10733844;
L_10733823:;
  /* 10733823 push 0x1074b9c8 */
  push32((uint32_t)(0x1074b9c8u));
  /* 10733828 push 0 */
  push32((uint32_t)(0x0u));
  /* 1073382a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 1073382f push 0x1074b9c0 */
  push32((uint32_t)(0x1074b9c0u));
  /* 10733834 push 2 */
  push32((uint32_t)(0x2u));
  /* 10733836 call 0x10722bc0 */
  push32(0x1073383bu); f_10722bc0();
  /* 1073383b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1073383e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10733841 jne 0x10733844 */
  if (!C.zf) goto L_10733844;
  /* 10733843 int3  */
  x86_unimpl("int3 @ 0x10733843");
L_10733844:;
  /* 10733844 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10733846 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10733848 jne 0x1073380b */
  if (!C.zf) goto L_1073380b;
  /* 1073384a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1073384e jle 0x107338c3 */
  if ((C.zf||C.sf!=C.of)) goto L_107338c3;
  /* 10733850 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10733854 jae 0x10733860 */
  if (!C.cf) goto L_10733860;
  /* 10733856 mov eax, 3 */
  EAX = (0x3u);
  /* 1073385b jmp 0x10733a94 */
  goto L_10733a94;
L_10733860:;
  /* 10733860 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 10733863 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 10733866 jmp 0x10733871 */
  goto L_10733871;
L_10733868:;
  /* 10733868 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1073386b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1073386e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_10733871:;
  /* 10733871 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10733874 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10733876 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10733878 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1073387a je 0x107338b9 */
  if (C.zf) goto L_107338b9;
  /* 1073387c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1073387f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10733881 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10733884 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10733886 je 0x107338b9 */
  if (C.zf) goto L_107338b9;
  /* 10733888 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1073388b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1073388d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1073388f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10733892 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10733894 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10733896 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10733898 jl 0x107338b7 */
  if ((C.sf!=C.of)) goto L_107338b7;
  /* 1073389a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1073389d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1073389f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 107338a1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 107338a4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107338a6 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 107338a9 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107338ab jg 0x107338b7 */
  if ((!C.zf&&C.sf==C.of)) goto L_107338b7;
  /* 107338ad mov eax, 2 */
  EAX = (0x2u);
  /* 107338b2 jmp 0x10733a94 */
  goto L_10733a94;
L_107338b7:;
  /* 107338b7 jmp 0x10733868 */
  goto L_10733868;
L_107338b9:;
  /* 107338b9 mov eax, 3 */
  EAX = (0x3u);
  /* 107338be jmp 0x10733a94 */
  goto L_10733a94;
L_107338c3:;
  /* 107338c3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107338c7 jle 0x1073393c */
  if ((C.zf||C.sf!=C.of)) goto L_1073393c;
  /* 107338c9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107338cd jae 0x107338d9 */
  if (!C.cf) goto L_107338d9;
  /* 107338cf mov eax, 1 */
  EAX = (0x1u);
  /* 107338d4 jmp 0x10733a94 */
  goto L_10733a94;
L_107338d9:;
  /* 107338d9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 107338dc mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 107338df jmp 0x107338ea */
  goto L_107338ea;
L_107338e1:;
  /* 107338e1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 107338e4 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107338e7 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_107338ea:;
  /* 107338ea mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 107338ed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107338ef mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 107338f1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107338f3 je 0x10733932 */
  if (C.zf) goto L_10733932;
  /* 107338f5 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 107338f8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107338fa mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 107338fd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107338ff je 0x10733932 */
  if (C.zf) goto L_10733932;
  /* 10733901 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10733904 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10733906 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10733908 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1073390b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1073390d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1073390f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10733911 jl 0x10733930 */
  if ((C.sf!=C.of)) goto L_10733930;
  /* 10733913 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10733916 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10733918 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1073391a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 1073391d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1073391f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10733922 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10733924 jg 0x10733930 */
  if ((!C.zf&&C.sf==C.of)) goto L_10733930;
  /* 10733926 mov eax, 2 */
  EAX = (0x2u);
  /* 1073392b jmp 0x10733a94 */
  goto L_10733a94;
L_10733930:;
  /* 10733930 jmp 0x107338e1 */
  goto L_107338e1;
L_10733932:;
  /* 10733932 mov eax, 1 */
  EAX = (0x1u);
  /* 10733937 jmp 0x10733a94 */
  goto L_10733a94;
L_1073393c:;
  /* 1073393c push 0 */
  push32((uint32_t)(0x0u));
  /* 1073393e push 0 */
  push32((uint32_t)(0x0u));
  /* 10733940 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10733943 push ecx */
  push32((uint32_t)(ECX));
  /* 10733944 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10733947 push edx */
  push32((uint32_t)(EDX));
  /* 10733948 push 9 */
  push32((uint32_t)(0x9u));
  /* 1073394a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1073394d push eax */
  push32((uint32_t)(EAX));
  /* 1073394e call dword ptr [0x107522d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522d8))), 0x10733954u);
  /* 10733954 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10733957 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1073395b jne 0x10733964 */
  if (!C.zf) goto L_10733964;
  /* 1073395d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1073395f jmp 0x10733a94 */
  goto L_10733a94;
L_10733964:;
  /* 10733964 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1073396b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1073396e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10733970 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10733973 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10733975 call 0x10726ca0 */
  push32(0x1073397au); f_10726ca0();
  /* 1073397a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 1073397d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10733980 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 10733983 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10733986 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1073398d jmp 0x107339a6 */
  goto L_107339a6;
  /* 1073398f mov eax, 1 */
  EAX = (0x1u);
  /* 10733994 ret  */
  ESPCHK(0x107336b0u, _esp0);
  ESP += 4; return;
  /* 10733995 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10733998 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1073399f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_107339a6:;
  /* 107339a6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107339aa jne 0x107339b3 */
  if (!C.zf) goto L_107339b3;
  /* 107339ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107339ae jmp 0x10733a94 */
  goto L_10733a94;
L_107339b3:;
  /* 107339b3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107339b6 push edx */
  push32((uint32_t)(EDX));
  /* 107339b7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107339ba push eax */
  push32((uint32_t)(EAX));
  /* 107339bb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107339be push ecx */
  push32((uint32_t)(ECX));
  /* 107339bf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107339c2 push edx */
  push32((uint32_t)(EDX));
  /* 107339c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 107339c5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 107339c8 push eax */
  push32((uint32_t)(EAX));
  /* 107339c9 call dword ptr [0x107522d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522d8))), 0x107339cfu);
  /* 107339cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107339d1 jne 0x107339da */
  if (!C.zf) goto L_107339da;
  /* 107339d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107339d5 jmp 0x10733a94 */
  goto L_10733a94;
L_107339da:;
  /* 107339da push 0 */
  push32((uint32_t)(0x0u));
  /* 107339dc push 0 */
  push32((uint32_t)(0x0u));
  /* 107339de mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 107339e1 push ecx */
  push32((uint32_t)(ECX));
  /* 107339e2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107339e5 push edx */
  push32((uint32_t)(EDX));
  /* 107339e6 push 9 */
  push32((uint32_t)(0x9u));
  /* 107339e8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 107339eb push eax */
  push32((uint32_t)(EAX));
  /* 107339ec call dword ptr [0x107522d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522d8))), 0x107339f2u);
  /* 107339f2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 107339f5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107339f9 jne 0x10733a02 */
  if (!C.zf) goto L_10733a02;
  /* 107339fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107339fd jmp 0x10733a94 */
  goto L_10733a94;
L_10733a02:;
  /* 10733a02 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10733a09 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10733a0c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10733a0e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10733a11 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10733a13 call 0x10726ca0 */
  push32(0x10733a18u); f_10726ca0();
  /* 10733a18 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 10733a1b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10733a1e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 10733a21 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10733a24 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10733a2b jmp 0x10733a44 */
  goto L_10733a44;
  /* 10733a2d mov eax, 1 */
  EAX = (0x1u);
  /* 10733a32 ret  */
  ESPCHK(0x107336b0u, _esp0);
  ESP += 4; return;
  /* 10733a33 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10733a36 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10733a3d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10733a44:;
  /* 10733a44 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10733a48 jne 0x10733a4e */
  if (!C.zf) goto L_10733a4e;
  /* 10733a4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10733a4c jmp 0x10733a94 */
  goto L_10733a94;
L_10733a4e:;
  /* 10733a4e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10733a51 push edx */
  push32((uint32_t)(EDX));
  /* 10733a52 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10733a55 push eax */
  push32((uint32_t)(EAX));
  /* 10733a56 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10733a59 push ecx */
  push32((uint32_t)(ECX));
  /* 10733a5a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10733a5d push edx */
  push32((uint32_t)(EDX));
  /* 10733a5e push 1 */
  push32((uint32_t)(0x1u));
  /* 10733a60 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10733a63 push eax */
  push32((uint32_t)(EAX));
  /* 10733a64 call dword ptr [0x107522d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522d8))), 0x10733a6au);
  /* 10733a6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10733a6c jne 0x10733a72 */
  if (!C.zf) goto L_10733a72;
  /* 10733a6e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10733a70 jmp 0x10733a94 */
  goto L_10733a94;
L_10733a72:;
  /* 10733a72 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10733a75 push ecx */
  push32((uint32_t)(ECX));
  /* 10733a76 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10733a79 push edx */
  push32((uint32_t)(EDX));
  /* 10733a7a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10733a7d push eax */
  push32((uint32_t)(EAX));
  /* 10733a7e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10733a81 push ecx */
  push32((uint32_t)(ECX));
  /* 10733a82 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10733a85 push edx */
  push32((uint32_t)(EDX));
  /* 10733a86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10733a89 push eax */
  push32((uint32_t)(EAX));
  /* 10733a8a call dword ptr [0x1075228c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075228c))), 0x10733a90u);
  /* 10733a90 jmp 0x10733a94 */
  goto L_10733a94;
L_10733a92:;
  /* 10733a92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10733a94:;
  /* 10733a94 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 10733a97 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10733a9a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10733aa1 pop edi */
  EDI = (pop32());
  /* 10733aa2 pop esi */
  ESI = (pop32());
  /* 10733aa3 pop ebx */
  EBX = (pop32());
  /* 10733aa4 mov esp, ebp */
  ESP = (EBP);
  /* 10733aa6 pop ebp */
  EBP = (pop32());
  /* 10733aa7 ret  */
  ESPCHK(0x107336b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013ab0 @ 0x10733ab0 (80 bytes, 32 insns) */
void f_10733ab0(void) {
  FTRACE(0x10733ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10733ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 10733ab1 mov ebp, esp */
  EBP = (ESP);
  /* 10733ab3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10733ab6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10733ab9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10733abc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10733abf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10733ac2:;
  /* 10733ac2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10733ac5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10733ac8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10733acb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10733ace test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10733ad0 je 0x10733ae7 */
  if (C.zf) goto L_10733ae7;
  /* 10733ad2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10733ad5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10733ad8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10733ada je 0x10733ae7 */
  if (C.zf) goto L_10733ae7;
  /* 10733adc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10733adf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10733ae2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10733ae5 jmp 0x10733ac2 */
  goto L_10733ac2;
L_10733ae7:;
  /* 10733ae7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10733aea movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10733aed test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10733aef jne 0x10733af9 */
  if (!C.zf) goto L_10733af9;
  /* 10733af1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10733af4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10733af7 jmp 0x10733afc */
  goto L_10733afc;
L_10733af9:;
  /* 10733af9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10733afc:;
  /* 10733afc mov esp, ebp */
  ESP = (EBP);
  /* 10733afe pop ebp */
  EBP = (pop32());
  /* 10733aff ret  */
  ESPCHK(0x10733ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b00 @ 0x10733b00 (736 bytes, 224 insns) */
void f_10733b00(void) {
  FTRACE(0x10733b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10733b00 push ebp */
  push32((uint32_t)(EBP));
  /* 10733b01 mov ebp, esp */
  EBP = (ESP);
  /* 10733b03 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10733b06 push esi */
  push32((uint32_t)(ESI));
  /* 10733b07 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10733b0b je 0x10733b2c */
  if (C.zf) goto L_10733b2c;
  /* 10733b0d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10733b0f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10733b12 push eax */
  push32((uint32_t)(EAX));
  /* 10733b13 call 0x10733f50 */
  push32(0x10733b18u); f_10733f50();
  /* 10733b18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10733b1b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10733b1e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10733b22 je 0x10733b2c */
  if (C.zf) goto L_10733b2c;
  /* 10733b24 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10733b27 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10733b2a jne 0x10733b34 */
  if (!C.zf) goto L_10733b34;
L_10733b2c:;
  /* 10733b2c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10733b2f jmp 0x10733ddb */
  goto L_10733ddb;
L_10733b34:;
  /* 10733b34 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10733b37 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10733b3b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10733b3d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10733b3f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10733b40 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10733b43 mov ecx, dword ptr [0x1074f520] */
  ECX = (r32((uint32_t)(0x1074f520)));
  /* 10733b49 cmp ecx, dword ptr [0x1074f524] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1074f524))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10733b4f jne 0x10733b65 */
  if (!C.zf) goto L_10733b65;
  /* 10733b51 mov edx, dword ptr [0x1074f520] */
  EDX = (r32((uint32_t)(0x1074f520)));
  /* 10733b57 push edx */
  push32((uint32_t)(EDX));
  /* 10733b58 call 0x10733e60 */
  push32(0x10733b5du); f_10733e60();
  /* 10733b5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10733b60 mov dword ptr [0x1074f520], eax */
  w32((uint32_t)(0x1074f520), (EAX));
L_10733b65:;
  /* 10733b65 cmp dword ptr [0x1074f520], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f520))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10733b6c jne 0x10733c25 */
  if (!C.zf) goto L_10733c25;
  /* 10733b72 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10733b76 je 0x10733b97 */
  if (C.zf) goto L_10733b97;
  /* 10733b78 cmp dword ptr [0x1074f528], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f528))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10733b7f je 0x10733b97 */
  if (C.zf) goto L_10733b97;
  /* 10733b81 call 0x10733600 */
  push32(0x10733b86u); f_10733600();
  /* 10733b86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10733b88 je 0x10733b92 */
  if (C.zf) goto L_10733b92;
  /* 10733b8a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10733b8d jmp 0x10733ddb */
  goto L_10733ddb;
L_10733b92:;
  /* 10733b92 jmp 0x10733c25 */
  goto L_10733c25;
L_10733b97:;
  /* 10733b97 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10733b9b je 0x10733ba4 */
  if (C.zf) goto L_10733ba4;
  /* 10733b9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10733b9f jmp 0x10733ddb */
  goto L_10733ddb;
L_10733ba4:;
  /* 10733ba4 cmp dword ptr [0x1074f520], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f520))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10733bab jne 0x10733be4 */
  if (!C.zf) goto L_10733be4;
  /* 10733bad push 0x87 */
  push32((uint32_t)(0x87u));
  /* 10733bb2 push 0x1074ba20 */
  push32((uint32_t)(0x1074ba20u));
  /* 10733bb7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10733bb9 push 4 */
  push32((uint32_t)(0x4u));
  /* 10733bbb call 0x10723b00 */
  push32(0x10733bc0u); f_10723b00();
  /* 10733bc0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10733bc3 mov dword ptr [0x1074f520], eax */
  w32((uint32_t)(0x1074f520), (EAX));
  /* 10733bc8 cmp dword ptr [0x1074f520], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f520))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10733bcf jne 0x10733bd9 */
  if (!C.zf) goto L_10733bd9;
  /* 10733bd1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10733bd4 jmp 0x10733ddb */
  goto L_10733ddb;
L_10733bd9:;
  /* 10733bd9 mov eax, dword ptr [0x1074f520] */
  EAX = (r32((uint32_t)(0x1074f520)));
  /* 10733bde mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10733be4:;
  /* 10733be4 cmp dword ptr [0x1074f528], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f528))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10733beb jne 0x10733c25 */
  if (!C.zf) goto L_10733c25;
  /* 10733bed push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 10733bf2 push 0x1074ba20 */
  push32((uint32_t)(0x1074ba20u));
  /* 10733bf7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10733bf9 push 4 */
  push32((uint32_t)(0x4u));
  /* 10733bfb call 0x10723b00 */
  push32(0x10733c00u); f_10723b00();
  /* 10733c00 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10733c03 mov dword ptr [0x1074f528], eax */
  w32((uint32_t)(0x1074f528), (EAX));
  /* 10733c08 cmp dword ptr [0x1074f528], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f528))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10733c0f jne 0x10733c19 */
  if (!C.zf) goto L_10733c19;
  /* 10733c11 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10733c14 jmp 0x10733ddb */
  goto L_10733ddb;
L_10733c19:;
  /* 10733c19 mov ecx, dword ptr [0x1074f528] */
  ECX = (r32((uint32_t)(0x1074f528)));
  /* 10733c1f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_10733c25:;
  /* 10733c25 mov edx, dword ptr [0x1074f520] */
  EDX = (r32((uint32_t)(0x1074f520)));
  /* 10733c2b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10733c2e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10733c31 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10733c34 push eax */
  push32((uint32_t)(EAX));
  /* 10733c35 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10733c38 push ecx */
  push32((uint32_t)(ECX));
  /* 10733c39 call 0x10733de0 */
  push32(0x10733c3eu); f_10733de0();
  /* 10733c3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10733c41 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10733c44 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10733c48 jl 0x10733ce1 */
  if ((C.sf!=C.of)) goto L_10733ce1;
  /* 10733c4e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10733c51 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10733c54 je 0x10733ce1 */
  if (C.zf) goto L_10733ce1;
  /* 10733c5a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10733c5e je 0x10733cd3 */
  if (C.zf) goto L_10733cd3;
  /* 10733c60 push 2 */
  push32((uint32_t)(0x2u));
  /* 10733c62 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10733c65 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10733c68 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10733c6b push edx */
  push32((uint32_t)(EDX));
  /* 10733c6c call 0x10724590 */
  push32(0x10733c71u); f_10724590();
  /* 10733c71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10733c74 jmp 0x10733c7f */
  goto L_10733c7f;
L_10733c76:;
  /* 10733c76 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10733c79 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10733c7c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10733c7f:;
  /* 10733c7f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10733c82 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10733c85 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10733c89 je 0x10733ca0 */
  if (C.zf) goto L_10733ca0;
  /* 10733c8b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10733c8e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10733c91 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10733c94 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10733c97 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 10733c9b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10733c9e jmp 0x10733c76 */
  goto L_10733c76;
L_10733ca0:;
  /* 10733ca0 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 10733ca5 push 0x1074ba20 */
  push32((uint32_t)(0x1074ba20u));
  /* 10733caa push 2 */
  push32((uint32_t)(0x2u));
  /* 10733cac mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10733caf shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10733cb2 push eax */
  push32((uint32_t)(EAX));
  /* 10733cb3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10733cb6 push ecx */
  push32((uint32_t)(ECX));
  /* 10733cb7 call 0x10723f90 */
  push32(0x10733cbcu); f_10723f90();
  /* 10733cbc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10733cbf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10733cc2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10733cc6 je 0x10733cd1 */
  if (C.zf) goto L_10733cd1;
  /* 10733cc8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10733ccb mov dword ptr [0x1074f520], edx */
  w32((uint32_t)(0x1074f520), (EDX));
L_10733cd1:;
  /* 10733cd1 jmp 0x10733cdf */
  goto L_10733cdf;
L_10733cd3:;
  /* 10733cd3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10733cd6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10733cd9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10733cdc mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_10733cdf:;
  /* 10733cdf jmp 0x10733d54 */
  goto L_10733d54;
L_10733ce1:;
  /* 10733ce1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10733ce5 jne 0x10733d4d */
  if (!C.zf) goto L_10733d4d;
  /* 10733ce7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10733ceb jge 0x10733cf5 */
  if ((C.sf==C.of)) goto L_10733cf5;
  /* 10733ced mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10733cf0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10733cf2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10733cf5:;
  /* 10733cf5 push 0xce */
  push32((uint32_t)(0xceu));
  /* 10733cfa push 0x1074ba20 */
  push32((uint32_t)(0x1074ba20u));
  /* 10733cff push 2 */
  push32((uint32_t)(0x2u));
  /* 10733d01 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10733d04 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 10733d0b push edx */
  push32((uint32_t)(EDX));
  /* 10733d0c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10733d0f push eax */
  push32((uint32_t)(EAX));
  /* 10733d10 call 0x10723f90 */
  push32(0x10733d15u); f_10723f90();
  /* 10733d15 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10733d18 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10733d1b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10733d1f jne 0x10733d29 */
  if (!C.zf) goto L_10733d29;
  /* 10733d21 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10733d24 jmp 0x10733ddb */
  goto L_10733ddb;
L_10733d29:;
  /* 10733d29 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10733d2c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10733d2f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10733d32 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 10733d35 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10733d38 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10733d3b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 10733d43 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10733d46 mov dword ptr [0x1074f520], eax */
  w32((uint32_t)(0x1074f520), (EAX));
  /* 10733d4b jmp 0x10733d54 */
  goto L_10733d54;
L_10733d4d:;
  /* 10733d4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10733d4f jmp 0x10733ddb */
  goto L_10733ddb;
L_10733d54:;
  /* 10733d54 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10733d58 je 0x10733dd9 */
  if (C.zf) goto L_10733dd9;
  /* 10733d5a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 10733d5f push 0x1074ba20 */
  push32((uint32_t)(0x1074ba20u));
  /* 10733d64 push 2 */
  push32((uint32_t)(0x2u));
  /* 10733d66 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10733d69 push ecx */
  push32((uint32_t)(ECX));
  /* 10733d6a call 0x10726930 */
  push32(0x10733d6fu); f_10726930();
  /* 10733d6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10733d72 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10733d75 push eax */
  push32((uint32_t)(EAX));
  /* 10733d76 call 0x10723b00 */
  push32(0x10733d7bu); f_10723b00();
  /* 10733d7b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10733d7e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10733d81 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10733d85 je 0x10733dd9 */
  if (C.zf) goto L_10733dd9;
  /* 10733d87 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10733d8a push edx */
  push32((uint32_t)(EDX));
  /* 10733d8b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10733d8e push eax */
  push32((uint32_t)(EAX));
  /* 10733d8f call 0x10726ab0 */
  push32(0x10733d94u); f_10726ab0();
  /* 10733d94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10733d97 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10733d9a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10733d9d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10733da0 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10733da2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10733da5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10733da8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10733dab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10733dae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10733db1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10733db4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10733db7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10733db9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10733dbb not edx */
  EDX = (~(EDX));
  /* 10733dbd and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10733dc0 push edx */
  push32((uint32_t)(EDX));
  /* 10733dc1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10733dc4 push eax */
  push32((uint32_t)(EAX));
  /* 10733dc5 call dword ptr [0x10752288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752288))), 0x10733dcbu);
  /* 10733dcb push 2 */
  push32((uint32_t)(0x2u));
  /* 10733dcd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10733dd0 push ecx */
  push32((uint32_t)(ECX));
  /* 10733dd1 call 0x10724590 */
  push32(0x10733dd6u); f_10724590();
  /* 10733dd6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10733dd9:;
  /* 10733dd9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10733ddb:;
  /* 10733ddb pop esi */
  ESI = (pop32());
  /* 10733ddc mov esp, ebp */
  ESP = (EBP);
  /* 10733dde pop ebp */
  EBP = (pop32());
  /* 10733ddf ret  */
  ESPCHK(0x10733b00u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x10733de0 (124 bytes, 47 insns) */
void f_10733de0(void) {
  FTRACE(0x10733de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10733de0 push ebp */
  push32((uint32_t)(EBP));
  /* 10733de1 mov ebp, esp */
  EBP = (ESP);
  /* 10733de3 push ecx */
  push32((uint32_t)(ECX));
  /* 10733de4 mov eax, dword ptr [0x1074f520] */
  EAX = (r32((uint32_t)(0x1074f520)));
  /* 10733de9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10733dec jmp 0x10733df7 */
  goto L_10733df7;
L_10733dee:;
  /* 10733dee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10733df1 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10733df4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10733df7:;
  /* 10733df7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10733dfa cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10733dfd je 0x10733e4a */
  if (C.zf) goto L_10733e4a;
  /* 10733dff mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10733e02 push eax */
  push32((uint32_t)(EAX));
  /* 10733e03 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10733e06 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10733e08 push edx */
  push32((uint32_t)(EDX));
  /* 10733e09 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10733e0c push eax */
  push32((uint32_t)(EAX));
  /* 10733e0d call 0x107335b0 */
  push32(0x10733e12u); f_107335b0();
  /* 10733e12 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10733e15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10733e17 jne 0x10733e48 */
  if (!C.zf) goto L_10733e48;
  /* 10733e19 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10733e1c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10733e1e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10733e21 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 10733e25 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10733e28 je 0x10733e3a */
  if (C.zf) goto L_10733e3a;
  /* 10733e2a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10733e2d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10733e2f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10733e32 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 10733e36 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10733e38 jne 0x10733e48 */
  if (!C.zf) goto L_10733e48;
L_10733e3a:;
  /* 10733e3a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10733e3d sub eax, dword ptr [0x1074f520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1074f520))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10733e43 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10733e46 jmp 0x10733e58 */
  goto L_10733e58;
L_10733e48:;
  /* 10733e48 jmp 0x10733dee */
  goto L_10733dee;
L_10733e4a:;
  /* 10733e4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10733e4d sub eax, dword ptr [0x1074f520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1074f520))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10733e53 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10733e56 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_10733e58:;
  /* 10733e58 mov esp, ebp */
  ESP = (EBP);
  /* 10733e5a pop ebp */
  EBP = (pop32());
  /* 10733e5b ret  */
  ESPCHK(0x10733de0u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x10733e60 (238 bytes, 80 insns) */
void f_10733e60(void) {
  FTRACE(0x10733e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10733e60 push ebp */
  push32((uint32_t)(EBP));
  /* 10733e61 mov ebp, esp */
  EBP = (ESP);
  /* 10733e63 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10733e66 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10733e6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10733e70 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10733e73 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10733e77 jne 0x10733e80 */
  if (!C.zf) goto L_10733e80;
  /* 10733e79 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10733e7b jmp 0x10733f4a */
  goto L_10733f4a;
L_10733e80:;
  /* 10733e80 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10733e83 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10733e85 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10733e88 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10733e8b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10733e8e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10733e90 je 0x10733e9d */
  if (C.zf) goto L_10733e9d;
  /* 10733e92 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10733e95 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10733e98 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10733e9b jmp 0x10733e80 */
  goto L_10733e80;
L_10733e9d:;
  /* 10733e9d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 10733ea2 push 0x1074ba20 */
  push32((uint32_t)(0x1074ba20u));
  /* 10733ea7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10733ea9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10733eac lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 10733eb3 push eax */
  push32((uint32_t)(EAX));
  /* 10733eb4 call 0x10723b00 */
  push32(0x10733eb9u); f_10723b00();
  /* 10733eb9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10733ebc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10733ebf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10733ec2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10733ec5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10733ec9 jne 0x10733ed5 */
  if (!C.zf) goto L_10733ed5;
  /* 10733ecb push 9 */
  push32((uint32_t)(0x9u));
  /* 10733ecd call 0x10722a70 */
  push32(0x10733ed2u); f_10722a70();
  /* 10733ed2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10733ed5:;
  /* 10733ed5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10733ed8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10733edb:;
  /* 10733edb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10733ede cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10733ee1 je 0x10733f3e */
  if (C.zf) goto L_10733f3e;
  /* 10733ee3 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 10733ee8 push 0x1074ba20 */
  push32((uint32_t)(0x1074ba20u));
  /* 10733eed push 2 */
  push32((uint32_t)(0x2u));
  /* 10733eef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10733ef2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10733ef4 push edx */
  push32((uint32_t)(EDX));
  /* 10733ef5 call 0x10726930 */
  push32(0x10733efau); f_10726930();
  /* 10733efa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10733efd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10733f00 push eax */
  push32((uint32_t)(EAX));
  /* 10733f01 call 0x10723b00 */
  push32(0x10733f06u); f_10723b00();
  /* 10733f06 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10733f09 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10733f0c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10733f0e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10733f11 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10733f14 je 0x10733f2a */
  if (C.zf) goto L_10733f2a;
  /* 10733f16 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10733f19 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10733f1b push ecx */
  push32((uint32_t)(ECX));
  /* 10733f1c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10733f1f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10733f21 push eax */
  push32((uint32_t)(EAX));
  /* 10733f22 call 0x10726ab0 */
  push32(0x10733f27u); f_10726ab0();
  /* 10733f27 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10733f2a:;
  /* 10733f2a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10733f2d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10733f30 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10733f33 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10733f36 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10733f39 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10733f3c jmp 0x10733edb */
  goto L_10733edb;
L_10733f3e:;
  /* 10733f3e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10733f41 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10733f47 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10733f4a:;
  /* 10733f4a mov esp, ebp */
  ESP = (EBP);
  /* 10733f4c pop ebp */
  EBP = (pop32());
  /* 10733f4d ret  */
  ESPCHK(0x10733e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10013f50 @ 0x10733f50 (237 bytes, 81 insns) */
void f_10733f50(void) {
  FTRACE(0x10733f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10733f50 push ebp */
  push32((uint32_t)(EBP));
  /* 10733f51 mov ebp, esp */
  EBP = (ESP);
  /* 10733f53 push ecx */
  push32((uint32_t)(ECX));
  /* 10733f54 cmp dword ptr [0x10750c6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10750c6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10733f5b jne 0x10733f72 */
  if (!C.zf) goto L_10733f72;
  /* 10733f5d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10733f60 push eax */
  push32((uint32_t)(EAX));
  /* 10733f61 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10733f64 push ecx */
  push32((uint32_t)(ECX));
  /* 10733f65 call 0x10734050 */
  push32(0x10733f6au); f_10734050();
  /* 10733f6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10733f6d jmp 0x10734039 */
  goto L_10734039;
L_10733f72:;
  /* 10733f72 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10733f74 call 0x10727500 */
  push32(0x10733f79u); f_10727500();
  /* 10733f79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10733f7c jmp 0x10733f87 */
  goto L_10733f87;
L_10733f7e:;
  /* 10733f7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10733f81 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10733f84 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10733f87:;
  /* 10733f87 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10733f8a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 10733f8e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 10733f92 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10733f95 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10733f9b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10733f9d je 0x1073401b */
  if (C.zf) goto L_1073401b;
  /* 10733f9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10733fa2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10733fa7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10733fa9 mov cl, byte ptr [eax + 0x10750d81] */
  CL = (r8((uint32_t)(EAX + 0x10750d81)));
  /* 10733faf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10733fb2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10733fb4 je 0x10734006 */
  if (C.zf) goto L_10734006;
  /* 10733fb6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10733fb9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10733fbc mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10733fbf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10733fc2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10733fc4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10733fc6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10733fc8 jne 0x10733fd8 */
  if (!C.zf) goto L_10733fd8;
  /* 10733fca push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10733fcc call 0x107275a0 */
  push32(0x10733fd1u); f_107275a0();
  /* 10733fd1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10733fd4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10733fd6 jmp 0x10734039 */
  goto L_10734039;
L_10733fd8:;
  /* 10733fd8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10733fdb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10733fe1 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10733fe4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10733fe7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10733fe9 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10733feb or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10733fed cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10733ff0 jne 0x10734004 */
  if (!C.zf) goto L_10734004;
  /* 10733ff2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10733ff4 call 0x107275a0 */
  push32(0x10733ff9u); f_107275a0();
  /* 10733ff9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10733ffc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10733fff sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10734002 jmp 0x10734039 */
  goto L_10734039;
L_10734004:;
  /* 10734004 jmp 0x10734016 */
  goto L_10734016;
L_10734006:;
  /* 10734006 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10734009 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1073400f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10734012 jne 0x10734016 */
  if (!C.zf) goto L_10734016;
  /* 10734014 jmp 0x1073401b */
  goto L_1073401b;
L_10734016:;
  /* 10734016 jmp 0x10733f7e */
  goto L_10733f7e;
L_1073401b:;
  /* 1073401b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1073401d call 0x107275a0 */
  push32(0x10734022u); f_107275a0();
  /* 10734022 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10734025 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10734028 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1073402d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10734030 jne 0x10734037 */
  if (!C.zf) goto L_10734037;
  /* 10734032 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10734035 jmp 0x10734039 */
  goto L_10734039;
L_10734037:;
  /* 10734037 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10734039:;
  /* 10734039 mov esp, ebp */
  ESP = (EBP);
  /* 1073403b pop ebp */
  EBP = (pop32());
  /* 1073403c ret  */
  ESPCHK(0x10733f50u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x10734050 (193 bytes, 87 insns) */
void f_10734050(void) {
  FTRACE(0x10734050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10734050 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10734052 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10734056 push ebx */
  push32((uint32_t)(EBX));
  /* 10734057 mov ebx, eax */
  EBX = (EAX);
  /* 10734059 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1073405c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10734060 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10734066 je 0x1073407b */
  if (C.zf) goto L_1073407b;
L_10734068:;
  /* 10734068 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 1073406a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1073406b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1073406d je 0x10734040 */
  if (C.zf) { jmp_ind(0x10734040u); return; }
  /* 1073406f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10734071 je 0x107340c4 */
  if (C.zf) goto L_107340c4;
  /* 10734073 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10734079 jne 0x10734068 */
  if (!C.zf) goto L_10734068;
L_1073407b:;
  /* 1073407b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 1073407d push edi */
  push32((uint32_t)(EDI));
  /* 1073407e mov eax, ebx */
  EAX = (EBX);
  /* 10734080 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 10734083 push esi */
  push32((uint32_t)(ESI));
  /* 10734084 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_10734086:;
  /* 10734086 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10734088 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 1073408d mov eax, ecx */
  EAX = (ECX);
  /* 1073408f mov esi, edi */
  ESI = (EDI);
  /* 10734091 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 10734093 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10734095 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10734097 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1073409a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1073409d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1073409f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 107340a1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107340a4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 107340aa jne 0x107340c8 */
  if (!C.zf) goto L_107340c8;
  /* 107340ac and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 107340b1 je 0x10734086 */
  if (C.zf) goto L_10734086;
  /* 107340b3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 107340b8 jne 0x107340c2 */
  if (!C.zf) goto L_107340c2;
  /* 107340ba and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 107340c0 jne 0x10734086 */
  if (!C.zf) goto L_10734086;
L_107340c2:;
  /* 107340c2 pop esi */
  ESI = (pop32());
  /* 107340c3 pop edi */
  EDI = (pop32());
L_107340c4:;
  /* 107340c4 pop ebx */
  EBX = (pop32());
  /* 107340c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107340c7 ret  */
  ESPCHK(0x10734050u, _esp0);
  ESP += 4; return;
L_107340c8:;
  /* 107340c8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 107340cb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107340cd je 0x10734105 */
  if (C.zf) goto L_10734105;
  /* 107340cf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 107340d1 je 0x107340c2 */
  if (C.zf) goto L_107340c2;
  /* 107340d3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107340d5 je 0x107340fe */
  if (C.zf) goto L_107340fe;
  /* 107340d7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 107340d9 je 0x107340c2 */
  if (C.zf) goto L_107340c2;
  /* 107340db shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 107340de cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107340e0 je 0x107340f7 */
  if (C.zf) goto L_107340f7;
  /* 107340e2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 107340e4 je 0x107340c2 */
  if (C.zf) goto L_107340c2;
  /* 107340e6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107340e8 je 0x107340f0 */
  if (C.zf) goto L_107340f0;
  /* 107340ea test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 107340ec je 0x107340c2 */
  if (C.zf) goto L_107340c2;
  /* 107340ee jmp 0x10734086 */
  goto L_10734086;
L_107340f0:;
  /* 107340f0 pop esi */
  ESI = (pop32());
  /* 107340f1 pop edi */
  EDI = (pop32());
  /* 107340f2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 107340f5 pop ebx */
  EBX = (pop32());
  /* 107340f6 ret  */
  ESPCHK(0x10734050u, _esp0);
  ESP += 4; return;
L_107340f7:;
  /* 107340f7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 107340fa pop esi */
  ESI = (pop32());
  /* 107340fb pop edi */
  EDI = (pop32());
  /* 107340fc pop ebx */
  EBX = (pop32());
  /* 107340fd ret  */
  ESPCHK(0x10734050u, _esp0);
  ESP += 4; return;
L_107340fe:;
  /* 107340fe lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 10734101 pop esi */
  ESI = (pop32());
  /* 10734102 pop edi */
  EDI = (pop32());
  /* 10734103 pop ebx */
  EBX = (pop32());
  /* 10734104 ret  */
  ESPCHK(0x10734050u, _esp0);
  ESP += 4; return;
L_10734105:;
  /* 10734105 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 10734108 pop esi */
  ESI = (pop32());
  /* 10734109 pop edi */
  EDI = (pop32());
  /* 1073410a pop ebx */
  EBX = (pop32());
  /* 1073410b ret  */
  ESPCHK(0x10734050u, _esp0);
  ESP += 4; return;
  /* 1073410c jmp dword ptr [0x107522fc] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x107522fc)))); return;
}

/* RtlUnwind @ 0x1073425c (6 bytes, 1 insns) */
void f_1073425c(void) {
  FTRACE(0x1073425cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1073425c jmp dword ptr [0x107522c0] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x107522c0)))); return;
}

