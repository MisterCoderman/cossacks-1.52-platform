#include "recomp.h"

/* FUN_10010850 @ 0x10570850 (289 bytes, 97 insns) */
void f_10570850(void) {
  FTRACE(0x10570850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10570850 push ebp */
  push32((uint32_t)(EBP));
  /* 10570851 mov ebp, esp */
  EBP = (ESP);
  /* 10570853 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10570856 push esi */
  push32((uint32_t)(ESI));
  /* 10570857 mov eax, dword ptr [0x1058ec98] */
  EAX = (r32((uint32_t)(0x1058ec98)));
  /* 1057085c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1057085f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10570866 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1057086d jmp 0x10570878 */
  goto L_10570878;
L_1057086f:;
  /* 1057086f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10570872 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10570875 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10570878:;
  /* 10570878 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1057087c jae 0x105708b1 */
  if (!C.cf) goto L_105708b1;
  /* 1057087e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10570881 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10570884 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10570887 push ecx */
  push32((uint32_t)(ECX));
  /* 10570888 call 0x10566930 */
  push32(0x1057088du); f_10566930();
  /* 1057088d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10570890 mov esi, eax */
  ESI = (EAX);
  /* 10570892 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10570895 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10570898 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 1057089c push ecx */
  push32((uint32_t)(ECX));
  /* 1057089d call 0x10566930 */
  push32(0x105708a2u); f_10566930();
  /* 105708a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105708a5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105708a8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 105708ac mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 105708af jmp 0x1057086f */
  goto L_1057086f;
L_105708b1:;
  /* 105708b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105708b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105708b7 push eax */
  push32((uint32_t)(EAX));
  /* 105708b8 call 0x10563ae0 */
  push32(0x105708bdu); f_10563ae0();
  /* 105708bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105708c0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105708c3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105708c7 je 0x10570969 */
  if (C.zf) goto L_10570969;
  /* 105708cd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105708d0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 105708d3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 105708da jmp 0x105708e5 */
  goto L_105708e5;
L_105708dc:;
  /* 105708dc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105708df add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105708e2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_105708e5:;
  /* 105708e5 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105708e9 jae 0x1057095a */
  if (!C.cf) goto L_1057095a;
  /* 105708eb mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105708ee mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 105708f1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105708f4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105708f7 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 105708fa mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105708fd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10570900 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10570903 push ecx */
  push32((uint32_t)(ECX));
  /* 10570904 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10570907 push edx */
  push32((uint32_t)(EDX));
  /* 10570908 call 0x10566ab0 */
  push32(0x1057090du); f_10566ab0();
  /* 1057090d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10570910 push eax */
  push32((uint32_t)(EAX));
  /* 10570911 call 0x10566930 */
  push32(0x10570916u); f_10566930();
  /* 10570916 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10570919 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1057091c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1057091e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10570921 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10570924 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10570927 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1057092a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1057092d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10570930 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10570933 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10570936 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 1057093a push eax */
  push32((uint32_t)(EAX));
  /* 1057093b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1057093e push ecx */
  push32((uint32_t)(ECX));
  /* 1057093f call 0x10566ab0 */
  push32(0x10570944u); f_10566ab0();
  /* 10570944 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10570947 push eax */
  push32((uint32_t)(EAX));
  /* 10570948 call 0x10566930 */
  push32(0x1057094du); f_10566930();
  /* 1057094d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10570950 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10570953 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10570955 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10570958 jmp 0x105708dc */
  goto L_105708dc;
L_1057095a:;
  /* 1057095a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1057095d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10570960 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10570963 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10570966 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10570969:;
  /* 10570969 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1057096c pop esi */
  ESI = (pop32());
  /* 1057096d mov esp, ebp */
  ESP = (EBP);
  /* 1057096f pop ebp */
  EBP = (pop32());
  /* 10570970 ret  */
  ESPCHK(0x10570850u, _esp0);
  ESP += 4; return;
}

/* FUN_10010980 @ 0x10570980 (291 bytes, 97 insns) */
void f_10570980(void) {
  FTRACE(0x10570980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10570980 push ebp */
  push32((uint32_t)(EBP));
  /* 10570981 mov ebp, esp */
  EBP = (ESP);
  /* 10570983 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10570986 push esi */
  push32((uint32_t)(ESI));
  /* 10570987 mov eax, dword ptr [0x1058ec98] */
  EAX = (r32((uint32_t)(0x1058ec98)));
  /* 1057098c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1057098f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10570996 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1057099d jmp 0x105709a8 */
  goto L_105709a8;
L_1057099f:;
  /* 1057099f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105709a2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105709a5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_105709a8:;
  /* 105709a8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105709ac jae 0x105709e2 */
  if (!C.cf) goto L_105709e2;
  /* 105709ae mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105709b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105709b4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 105709b8 push ecx */
  push32((uint32_t)(ECX));
  /* 105709b9 call 0x10566930 */
  push32(0x105709beu); f_10566930();
  /* 105709be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105709c1 mov esi, eax */
  ESI = (EAX);
  /* 105709c3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105709c6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105709c9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 105709cd push ecx */
  push32((uint32_t)(ECX));
  /* 105709ce call 0x10566930 */
  push32(0x105709d3u); f_10566930();
  /* 105709d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105709d6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105709d9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 105709dd mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 105709e0 jmp 0x1057099f */
  goto L_1057099f;
L_105709e2:;
  /* 105709e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105709e5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105709e8 push eax */
  push32((uint32_t)(EAX));
  /* 105709e9 call 0x10563ae0 */
  push32(0x105709eeu); f_10563ae0();
  /* 105709ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105709f1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105709f4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105709f8 je 0x10570a9b */
  if (C.zf) goto L_10570a9b;
  /* 105709fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10570a01 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10570a04 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10570a0b jmp 0x10570a16 */
  goto L_10570a16;
L_10570a0d:;
  /* 10570a0d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10570a10 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10570a13 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10570a16:;
  /* 10570a16 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10570a1a jae 0x10570a8c */
  if (!C.cf) goto L_10570a8c;
  /* 10570a1c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10570a1f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10570a22 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10570a25 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10570a28 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10570a2b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10570a2e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10570a31 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10570a35 push ecx */
  push32((uint32_t)(ECX));
  /* 10570a36 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10570a39 push edx */
  push32((uint32_t)(EDX));
  /* 10570a3a call 0x10566ab0 */
  push32(0x10570a3fu); f_10566ab0();
  /* 10570a3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10570a42 push eax */
  push32((uint32_t)(EAX));
  /* 10570a43 call 0x10566930 */
  push32(0x10570a48u); f_10566930();
  /* 10570a48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10570a4b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10570a4e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10570a50 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10570a53 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10570a56 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10570a59 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10570a5c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10570a5f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10570a62 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10570a65 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10570a68 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10570a6c push eax */
  push32((uint32_t)(EAX));
  /* 10570a6d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10570a70 push ecx */
  push32((uint32_t)(ECX));
  /* 10570a71 call 0x10566ab0 */
  push32(0x10570a76u); f_10566ab0();
  /* 10570a76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10570a79 push eax */
  push32((uint32_t)(EAX));
  /* 10570a7a call 0x10566930 */
  push32(0x10570a7fu); f_10566930();
  /* 10570a7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10570a82 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10570a85 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10570a87 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10570a8a jmp 0x10570a0d */
  goto L_10570a0d;
L_10570a8c:;
  /* 10570a8c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10570a8f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10570a92 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10570a95 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10570a98 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10570a9b:;
  /* 10570a9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10570a9e pop esi */
  ESI = (pop32());
  /* 10570a9f mov esp, ebp */
  ESP = (EBP);
  /* 10570aa1 pop ebp */
  EBP = (pop32());
  /* 10570aa2 ret  */
  ESPCHK(0x10570980u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ab0 @ 0x10570ab0 (878 bytes, 273 insns) */
void f_10570ab0(void) {
  FTRACE(0x10570ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10570ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 10570ab1 mov ebp, esp */
  EBP = (ESP);
  /* 10570ab3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10570ab6 push esi */
  push32((uint32_t)(ESI));
  /* 10570ab7 mov eax, dword ptr [0x1058ec98] */
  EAX = (r32((uint32_t)(0x1058ec98)));
  /* 10570abc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10570abf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10570ac6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10570acd jmp 0x10570ad8 */
  goto L_10570ad8;
L_10570acf:;
  /* 10570acf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10570ad2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10570ad5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10570ad8:;
  /* 10570ad8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10570adc jae 0x10570b11 */
  if (!C.cf) goto L_10570b11;
  /* 10570ade mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10570ae1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10570ae4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10570ae7 push ecx */
  push32((uint32_t)(ECX));
  /* 10570ae8 call 0x10566930 */
  push32(0x10570aedu); f_10566930();
  /* 10570aed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10570af0 mov esi, eax */
  ESI = (EAX);
  /* 10570af2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10570af5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10570af8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 10570afc push ecx */
  push32((uint32_t)(ECX));
  /* 10570afd call 0x10566930 */
  push32(0x10570b02u); f_10566930();
  /* 10570b02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10570b05 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10570b08 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10570b0c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10570b0f jmp 0x10570acf */
  goto L_10570acf;
L_10570b11:;
  /* 10570b11 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10570b18 jmp 0x10570b23 */
  goto L_10570b23;
L_10570b1a:;
  /* 10570b1a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10570b1d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10570b20 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10570b23:;
  /* 10570b23 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10570b27 jae 0x10570b5d */
  if (!C.cf) goto L_10570b5d;
  /* 10570b29 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10570b2c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10570b2f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10570b33 push eax */
  push32((uint32_t)(EAX));
  /* 10570b34 call 0x10566930 */
  push32(0x10570b39u); f_10566930();
  /* 10570b39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10570b3c mov esi, eax */
  ESI = (EAX);
  /* 10570b3e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10570b41 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10570b44 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10570b48 push eax */
  push32((uint32_t)(EAX));
  /* 10570b49 call 0x10566930 */
  push32(0x10570b4eu); f_10566930();
  /* 10570b4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10570b51 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10570b54 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10570b58 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10570b5b jmp 0x10570b1a */
  goto L_10570b1a;
L_10570b5d:;
  /* 10570b5d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10570b60 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10570b66 push eax */
  push32((uint32_t)(EAX));
  /* 10570b67 call 0x10566930 */
  push32(0x10570b6cu); f_10566930();
  /* 10570b6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10570b6f mov esi, eax */
  ESI = (EAX);
  /* 10570b71 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10570b74 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 10570b7a push edx */
  push32((uint32_t)(EDX));
  /* 10570b7b call 0x10566930 */
  push32(0x10570b80u); f_10566930();
  /* 10570b80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10570b83 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10570b86 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10570b8a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10570b8d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10570b90 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10570b96 push edx */
  push32((uint32_t)(EDX));
  /* 10570b97 call 0x10566930 */
  push32(0x10570b9cu); f_10566930();
  /* 10570b9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10570b9f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10570ba2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10570ba6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10570ba9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10570bac mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 10570bb2 push ecx */
  push32((uint32_t)(ECX));
  /* 10570bb3 call 0x10566930 */
  push32(0x10570bb8u); f_10566930();
  /* 10570bb8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10570bbb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10570bbe lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10570bc2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10570bc5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10570bc8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 10570bce push edx */
  push32((uint32_t)(EDX));
  /* 10570bcf call 0x10566930 */
  push32(0x10570bd4u); f_10566930();
  /* 10570bd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10570bd7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10570bda lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10570bde mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10570be1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10570be4 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10570be9 push eax */
  push32((uint32_t)(EAX));
  /* 10570bea call 0x10563ae0 */
  push32(0x10570befu); f_10563ae0();
  /* 10570bef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10570bf2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10570bf5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10570bf9 je 0x10570e16 */
  if (C.zf) goto L_10570e16;
  /* 10570bff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10570c02 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10570c05 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10570c08 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10570c0e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10570c11 push 0xac */
  push32((uint32_t)(0xacu));
  /* 10570c16 mov eax, dword ptr [0x1058ec98] */
  EAX = (r32((uint32_t)(0x1058ec98)));
  /* 10570c1b push eax */
  push32((uint32_t)(EAX));
  /* 10570c1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10570c1f push ecx */
  push32((uint32_t)(ECX));
  /* 10570c20 call 0x1056a3e0 */
  push32(0x10570c25u); f_1056a3e0();
  /* 10570c25 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10570c28 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10570c2f jmp 0x10570c3a */
  goto L_10570c3a;
L_10570c31:;
  /* 10570c31 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10570c34 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10570c37 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10570c3a:;
  /* 10570c3a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10570c3e jae 0x10570cae */
  if (!C.cf) goto L_10570cae;
  /* 10570c40 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10570c43 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10570c46 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10570c49 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10570c4c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10570c4f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10570c52 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10570c55 push edx */
  push32((uint32_t)(EDX));
  /* 10570c56 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10570c59 push eax */
  push32((uint32_t)(EAX));
  /* 10570c5a call 0x10566ab0 */
  push32(0x10570c5fu); f_10566ab0();
  /* 10570c5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10570c62 push eax */
  push32((uint32_t)(EAX));
  /* 10570c63 call 0x10566930 */
  push32(0x10570c68u); f_10566930();
  /* 10570c68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10570c6b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10570c6e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10570c72 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10570c75 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10570c78 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10570c7b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10570c7e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 10570c82 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10570c85 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10570c88 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 10570c8c push edx */
  push32((uint32_t)(EDX));
  /* 10570c8d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10570c90 push eax */
  push32((uint32_t)(EAX));
  /* 10570c91 call 0x10566ab0 */
  push32(0x10570c96u); f_10566ab0();
  /* 10570c96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10570c99 push eax */
  push32((uint32_t)(EAX));
  /* 10570c9a call 0x10566930 */
  push32(0x10570c9fu); f_10566930();
  /* 10570c9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10570ca2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10570ca5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10570ca9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10570cac jmp 0x10570c31 */
  goto L_10570c31;
L_10570cae:;
  /* 10570cae mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10570cb5 jmp 0x10570cc0 */
  goto L_10570cc0;
L_10570cb7:;
  /* 10570cb7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10570cba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10570cbd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10570cc0:;
  /* 10570cc0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10570cc4 jae 0x10570d36 */
  if (!C.cf) goto L_10570d36;
  /* 10570cc6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10570cc9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10570ccc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10570ccf mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 10570cd3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10570cd6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10570cd9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10570cdd push eax */
  push32((uint32_t)(EAX));
  /* 10570cde mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10570ce1 push ecx */
  push32((uint32_t)(ECX));
  /* 10570ce2 call 0x10566ab0 */
  push32(0x10570ce7u); f_10566ab0();
  /* 10570ce7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10570cea push eax */
  push32((uint32_t)(EAX));
  /* 10570ceb call 0x10566930 */
  push32(0x10570cf0u); f_10566930();
  /* 10570cf0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10570cf3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10570cf6 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10570cfa mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10570cfd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10570d00 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10570d03 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10570d06 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 10570d0a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10570d0d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10570d10 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10570d14 push eax */
  push32((uint32_t)(EAX));
  /* 10570d15 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10570d18 push ecx */
  push32((uint32_t)(ECX));
  /* 10570d19 call 0x10566ab0 */
  push32(0x10570d1eu); f_10566ab0();
  /* 10570d1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10570d21 push eax */
  push32((uint32_t)(EAX));
  /* 10570d22 call 0x10566930 */
  push32(0x10570d27u); f_10566930();
  /* 10570d27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10570d2a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10570d2d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10570d31 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10570d34 jmp 0x10570cb7 */
  goto L_10570cb7;
L_10570d36:;
  /* 10570d36 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10570d39 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10570d3c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 10570d42 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10570d45 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 10570d4b push ecx */
  push32((uint32_t)(ECX));
  /* 10570d4c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10570d4f push edx */
  push32((uint32_t)(EDX));
  /* 10570d50 call 0x10566ab0 */
  push32(0x10570d55u); f_10566ab0();
  /* 10570d55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10570d58 push eax */
  push32((uint32_t)(EAX));
  /* 10570d59 call 0x10566930 */
  push32(0x10570d5eu); f_10566930();
  /* 10570d5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10570d61 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10570d64 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10570d68 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10570d6b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10570d6e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10570d71 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 10570d77 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10570d7a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10570d80 push eax */
  push32((uint32_t)(EAX));
  /* 10570d81 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10570d84 push ecx */
  push32((uint32_t)(ECX));
  /* 10570d85 call 0x10566ab0 */
  push32(0x10570d8au); f_10566ab0();
  /* 10570d8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10570d8d push eax */
  push32((uint32_t)(EAX));
  /* 10570d8e call 0x10566930 */
  push32(0x10570d93u); f_10566930();
  /* 10570d93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10570d96 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10570d99 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10570d9d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10570da0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10570da3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10570da6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 10570dac mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10570daf mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 10570db5 push ecx */
  push32((uint32_t)(ECX));
  /* 10570db6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10570db9 push edx */
  push32((uint32_t)(EDX));
  /* 10570dba call 0x10566ab0 */
  push32(0x10570dbfu); f_10566ab0();
  /* 10570dbf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10570dc2 push eax */
  push32((uint32_t)(EAX));
  /* 10570dc3 call 0x10566930 */
  push32(0x10570dc8u); f_10566930();
  /* 10570dc8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10570dcb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10570dce lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10570dd2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10570dd5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10570dd8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10570ddb mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 10570de1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10570de4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 10570dea push eax */
  push32((uint32_t)(EAX));
  /* 10570deb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10570dee push ecx */
  push32((uint32_t)(ECX));
  /* 10570def call 0x10566ab0 */
  push32(0x10570df4u); f_10566ab0();
  /* 10570df4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10570df7 push eax */
  push32((uint32_t)(EAX));
  /* 10570df8 call 0x10566930 */
  push32(0x10570dfdu); f_10566930();
  /* 10570dfd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10570e00 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10570e03 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10570e07 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10570e0a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10570e0d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10570e10 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_10570e16:;
  /* 10570e16 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10570e19 pop esi */
  ESI = (pop32());
  /* 10570e1a mov esp, ebp */
  ESP = (EBP);
  /* 10570e1c pop ebp */
  EBP = (pop32());
  /* 10570e1d ret  */
  ESPCHK(0x10570ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010e20 @ 0x10570e20 (31 bytes, 15 insns) */
void f_10570e20(void) {
  FTRACE(0x10570e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10570e20 push ebp */
  push32((uint32_t)(EBP));
  /* 10570e21 mov ebp, esp */
  EBP = (ESP);
  /* 10570e23 push 0 */
  push32((uint32_t)(0x0u));
  /* 10570e25 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10570e28 push eax */
  push32((uint32_t)(EAX));
  /* 10570e29 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10570e2c push ecx */
  push32((uint32_t)(ECX));
  /* 10570e2d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10570e30 push edx */
  push32((uint32_t)(EDX));
  /* 10570e31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10570e34 push eax */
  push32((uint32_t)(EAX));
  /* 10570e35 call 0x10570e40 */
  push32(0x10570e3au); f_10570e40();
  /* 10570e3a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10570e3d pop ebp */
  EBP = (pop32());
  /* 10570e3e ret  */
  ESPCHK(0x10570e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10010e40 @ 0x10570e40 (393 bytes, 123 insns) */
void f_10570e40(void) {
  FTRACE(0x10570e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10570e40 push ebp */
  push32((uint32_t)(EBP));
  /* 10570e41 mov ebp, esp */
  EBP = (ESP);
  /* 10570e43 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10570e46 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10570e4a jne 0x10570e56 */
  if (!C.zf) goto L_10570e56;
  /* 10570e4c mov eax, dword ptr [0x1058ec98] */
  EAX = (r32((uint32_t)(0x1058ec98)));
  /* 10570e51 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10570e54 jmp 0x10570e5c */
  goto L_10570e5c;
L_10570e56:;
  /* 10570e56 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10570e59 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10570e5c:;
  /* 10570e5c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10570e5f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10570e62 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10570e65 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10570e68 push 0x1058f8a4 */
  push32((uint32_t)(0x1058f8a4u));
  /* 10570e6d call dword ptr [0x105922f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922f4))), 0x10570e73u);
  /* 10570e73 cmp dword ptr [0x1058f894], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f894))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10570e7a je 0x10570e9a */
  if (C.zf) goto L_10570e9a;
  /* 10570e7c push 0x1058f8a4 */
  push32((uint32_t)(0x1058f8a4u));
  /* 10570e81 call dword ptr [0x105922e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922e4))), 0x10570e87u);
  /* 10570e87 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10570e89 call 0x10567500 */
  push32(0x10570e8eu); f_10567500();
  /* 10570e8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10570e91 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10570e98 jmp 0x10570ea1 */
  goto L_10570ea1;
L_10570e9a:;
  /* 10570e9a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10570ea1:;
  /* 10570ea1 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10570ea5 jbe 0x10570f92 */
  if ((C.cf||C.zf)) goto L_10570f92;
  /* 10570eab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10570eae mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10570eb0 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 10570eb3 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10570eb7 je 0x10570ec1 */
  if (C.zf) goto L_10570ec1;
  /* 10570eb9 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10570ebd je 0x10570ec6 */
  if (C.zf) goto L_10570ec6;
  /* 10570ebf jmp 0x10570f20 */
  goto L_10570f20;
L_10570ec1:;
  /* 10570ec1 jmp 0x10570f92 */
  goto L_10570f92;
L_10570ec6:;
  /* 10570ec6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10570ec9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10570ecc mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10570ecf mov dword ptr [0x1058f880], 0 */
  w32((uint32_t)(0x1058f880), (0x0u));
  /* 10570ed9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10570edc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10570edf cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10570ee2 jne 0x10570ef7 */
  if (!C.zf) goto L_10570ef7;
  /* 10570ee4 mov dword ptr [0x1058f880], 1 */
  w32((uint32_t)(0x1058f880), (0x1u));
  /* 10570eee mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10570ef1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10570ef4 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10570ef7:;
  /* 10570ef7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10570efa push ecx */
  push32((uint32_t)(ECX));
  /* 10570efb lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10570efe push edx */
  push32((uint32_t)(EDX));
  /* 10570eff lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10570f02 push eax */
  push32((uint32_t)(EAX));
  /* 10570f03 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10570f06 push ecx */
  push32((uint32_t)(ECX));
  /* 10570f07 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10570f0a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10570f0c push eax */
  push32((uint32_t)(EAX));
  /* 10570f0d call 0x10570fd0 */
  push32(0x10570f12u); f_10570fd0();
  /* 10570f12 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10570f15 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10570f18 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10570f1b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10570f1e jmp 0x10570f8d */
  goto L_10570f8d;
L_10570f20:;
  /* 10570f20 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10570f23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10570f25 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10570f27 mov ecx, dword ptr [0x1058dc98] */
  ECX = (r32((uint32_t)(0x1058dc98)));
  /* 10570f2d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10570f2f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10570f33 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10570f39 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10570f3b je 0x10570f68 */
  if (C.zf) goto L_10570f68;
  /* 10570f3d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10570f41 jbe 0x10570f68 */
  if ((C.cf||C.zf)) goto L_10570f68;
  /* 10570f43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10570f46 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10570f49 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10570f4b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10570f4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10570f50 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10570f53 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10570f56 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10570f59 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10570f5c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10570f5f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10570f62 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10570f65 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10570f68:;
  /* 10570f68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10570f6b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10570f6e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10570f70 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10570f72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10570f75 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10570f78 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10570f7b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10570f7e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10570f81 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10570f84 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10570f87 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10570f8a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10570f8d:;
  /* 10570f8d jmp 0x10570ea1 */
  goto L_10570ea1;
L_10570f92:;
  /* 10570f92 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10570f96 je 0x10570fa4 */
  if (C.zf) goto L_10570fa4;
  /* 10570f98 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10570f9a call 0x105675a0 */
  push32(0x10570f9fu); f_105675a0();
  /* 10570f9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10570fa2 jmp 0x10570faf */
  goto L_10570faf;
L_10570fa4:;
  /* 10570fa4 push 0x1058f8a4 */
  push32((uint32_t)(0x1058f8a4u));
  /* 10570fa9 call dword ptr [0x105922e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922e4))), 0x10570fafu);
L_10570faf:;
  /* 10570faf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10570fb3 jbe 0x10570fc3 */
  if ((C.cf||C.zf)) goto L_10570fc3;
  /* 10570fb5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10570fb8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10570fbb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10570fbe sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10570fc1 jmp 0x10570fc5 */
  goto L_10570fc5;
L_10570fc3:;
  /* 10570fc3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10570fc5:;
  /* 10570fc5 mov esp, ebp */
  ESP = (EBP);
  /* 10570fc7 pop ebp */
  EBP = (pop32());
  /* 10570fc8 ret  */
  ESPCHK(0x10570e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10010fd0 @ 0x10570fd0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_10570fd0(void) {
  FTRACE(0x10570fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10570fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10570fd1 mov ebp, esp */
  EBP = (ESP);
  /* 10570fd3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10570fd6 push esi */
  push32((uint32_t)(ESI));
  /* 10570fd7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 10570fdb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10570fde mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10570fe1 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10570fe4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10570fe7 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10570feb ja 0x10571538 */
  if ((!C.cf&&!C.zf)) goto L_10571538;
  /* 10570ff1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10570ff4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10570ff6 mov dl, byte ptr [eax + 0x10571599] */
  DL = (r8((uint32_t)(EAX + 0x10571599)));
  /* 10570ffc jmp dword ptr [edx*4 + 0x1057153d] */
  switch (EDX) {
    case 0: goto L_10571516;
    case 1: goto L_10571025;
    case 2: goto L_1057106b;
    case 3: goto L_105711b8;
    case 4: goto L_105711e0;
    case 5: goto L_1057127f;
    case 6: goto L_105712eb;
    case 7: goto L_10571314;
    case 8: goto L_10571355;
    case 9: goto L_10571437;
    case 10: goto L_1057149e;
    case 11: goto L_105714eb;
    case 12: goto L_10571003;
    case 13: goto L_10571048;
    case 14: goto L_1057108e;
    case 15: goto L_1057118e;
    case 16: goto L_10571225;
    case 17: goto L_10571252;
    case 18: goto L_105712a7;
    case 19: goto L_1057132b;
    case 20: goto L_105713d9;
    case 21: goto L_10571468;
    case 22: goto L_10571538;
    default: x86_unimpl("switch@0x10570ffc out of table"); return;
  }
L_10571003:;
  /* 10571003 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10571006 push ecx */
  push32((uint32_t)(ECX));
  /* 10571007 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1057100a push edx */
  push32((uint32_t)(EDX));
  /* 1057100b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1057100e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10571011 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10571014 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10571017 push eax */
  push32((uint32_t)(EAX));
  /* 10571018 call 0x105715f0 */
  push32(0x1057101du); f_105715f0();
  /* 1057101d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10571020 jmp 0x10571538 */
  goto L_10571538;
L_10571025:;
  /* 10571025 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10571028 push ecx */
  push32((uint32_t)(ECX));
  /* 10571029 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1057102c push edx */
  push32((uint32_t)(EDX));
  /* 1057102d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10571030 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10571033 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10571036 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 1057103a push eax */
  push32((uint32_t)(EAX));
  /* 1057103b call 0x105715f0 */
  push32(0x10571040u); f_105715f0();
  /* 10571040 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10571043 jmp 0x10571538 */
  goto L_10571538;
L_10571048:;
  /* 10571048 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1057104b push ecx */
  push32((uint32_t)(ECX));
  /* 1057104c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1057104f push edx */
  push32((uint32_t)(EDX));
  /* 10571050 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10571053 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10571056 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10571059 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 1057105d push eax */
  push32((uint32_t)(EAX));
  /* 1057105e call 0x105715f0 */
  push32(0x10571063u); f_105715f0();
  /* 10571063 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10571066 jmp 0x10571538 */
  goto L_10571538;
L_1057106b:;
  /* 1057106b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1057106e push ecx */
  push32((uint32_t)(ECX));
  /* 1057106f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10571072 push edx */
  push32((uint32_t)(EDX));
  /* 10571073 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10571076 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10571079 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1057107c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10571080 push eax */
  push32((uint32_t)(EAX));
  /* 10571081 call 0x105715f0 */
  push32(0x10571086u); f_105715f0();
  /* 10571086 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10571089 jmp 0x10571538 */
  goto L_10571538;
L_1057108e:;
  /* 1057108e cmp dword ptr [0x1058f880], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f880))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10571095 je 0x10571116 */
  if (C.zf) goto L_10571116;
  /* 10571097 mov dword ptr [0x1058f880], 0 */
  w32((uint32_t)(0x1058f880), (0x0u));
  /* 105710a1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 105710a4 push ecx */
  push32((uint32_t)(ECX));
  /* 105710a5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105710a8 push edx */
  push32((uint32_t)(EDX));
  /* 105710a9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105710ac push eax */
  push32((uint32_t)(EAX));
  /* 105710ad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105710b0 push ecx */
  push32((uint32_t)(ECX));
  /* 105710b1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105710b4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 105710ba push eax */
  push32((uint32_t)(EAX));
  /* 105710bb call 0x105717a0 */
  push32(0x105710c0u); f_105717a0();
  /* 105710c0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105710c3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105710c6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105710c9 jne 0x105710d0 */
  if (!C.zf) goto L_105710d0;
  /* 105710cb jmp 0x10571538 */
  goto L_10571538;
L_105710d0:;
  /* 105710d0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105710d3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105710d5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 105710d8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105710db mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105710dd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105710e0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105710e3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 105710e5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105710e8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105710ea sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105710ed mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105710f0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 105710f2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 105710f5 push ecx */
  push32((uint32_t)(ECX));
  /* 105710f6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105710f9 push edx */
  push32((uint32_t)(EDX));
  /* 105710fa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105710fd push eax */
  push32((uint32_t)(EAX));
  /* 105710fe mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10571101 push ecx */
  push32((uint32_t)(ECX));
  /* 10571102 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10571105 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 1057110b push eax */
  push32((uint32_t)(EAX));
  /* 1057110c call 0x105717a0 */
  push32(0x10571111u); f_105717a0();
  /* 10571111 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10571114 jmp 0x10571189 */
  goto L_10571189;
L_10571116:;
  /* 10571116 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10571119 push ecx */
  push32((uint32_t)(ECX));
  /* 1057111a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1057111d push edx */
  push32((uint32_t)(EDX));
  /* 1057111e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10571121 push eax */
  push32((uint32_t)(EAX));
  /* 10571122 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10571125 push ecx */
  push32((uint32_t)(ECX));
  /* 10571126 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10571129 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 1057112f push eax */
  push32((uint32_t)(EAX));
  /* 10571130 call 0x105717a0 */
  push32(0x10571135u); f_105717a0();
  /* 10571135 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10571138 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1057113b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1057113e jne 0x10571145 */
  if (!C.zf) goto L_10571145;
  /* 10571140 jmp 0x10571538 */
  goto L_10571538;
L_10571145:;
  /* 10571145 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10571148 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1057114a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 1057114d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10571150 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10571152 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10571155 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10571158 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1057115a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1057115d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1057115f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10571162 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10571165 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10571167 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1057116a push ecx */
  push32((uint32_t)(ECX));
  /* 1057116b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1057116e push edx */
  push32((uint32_t)(EDX));
  /* 1057116f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10571172 push eax */
  push32((uint32_t)(EAX));
  /* 10571173 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10571176 push ecx */
  push32((uint32_t)(ECX));
  /* 10571177 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1057117a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10571180 push eax */
  push32((uint32_t)(EAX));
  /* 10571181 call 0x105717a0 */
  push32(0x10571186u); f_105717a0();
  /* 10571186 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10571189:;
  /* 10571189 jmp 0x10571538 */
  goto L_10571538;
L_1057118e:;
  /* 1057118e mov ecx, dword ptr [0x1058f880] */
  ECX = (r32((uint32_t)(0x1058f880)));
  /* 10571194 mov dword ptr [0x1058f890], ecx */
  w32((uint32_t)(0x1058f890), (ECX));
  /* 1057119a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1057119d push edx */
  push32((uint32_t)(EDX));
  /* 1057119e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105711a1 push eax */
  push32((uint32_t)(EAX));
  /* 105711a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 105711a4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105711a7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 105711aa push edx */
  push32((uint32_t)(EDX));
  /* 105711ab call 0x10571640 */
  push32(0x105711b0u); f_10571640();
  /* 105711b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105711b3 jmp 0x10571538 */
  goto L_10571538;
L_105711b8:;
  /* 105711b8 mov eax, dword ptr [0x1058f880] */
  EAX = (r32((uint32_t)(0x1058f880)));
  /* 105711bd mov dword ptr [0x1058f890], eax */
  w32((uint32_t)(0x1058f890), (EAX));
  /* 105711c2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105711c5 push ecx */
  push32((uint32_t)(ECX));
  /* 105711c6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105711c9 push edx */
  push32((uint32_t)(EDX));
  /* 105711ca push 2 */
  push32((uint32_t)(0x2u));
  /* 105711cc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105711cf mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 105711d2 push ecx */
  push32((uint32_t)(ECX));
  /* 105711d3 call 0x10571640 */
  push32(0x105711d8u); f_10571640();
  /* 105711d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105711db jmp 0x10571538 */
  goto L_10571538;
L_105711e0:;
  /* 105711e0 mov edx, dword ptr [0x1058f880] */
  EDX = (r32((uint32_t)(0x1058f880)));
  /* 105711e6 mov dword ptr [0x1058f890], edx */
  w32((uint32_t)(0x1058f890), (EDX));
  /* 105711ec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105711ef mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 105711f2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 105711f3 mov ecx, 0xc */
  ECX = (0xcu);
  /* 105711f8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 105711fa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105711fd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10571201 jne 0x1057120a */
  if (!C.zf) goto L_1057120a;
  /* 10571203 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_1057120a:;
  /* 1057120a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1057120d push edx */
  push32((uint32_t)(EDX));
  /* 1057120e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10571211 push eax */
  push32((uint32_t)(EAX));
  /* 10571212 push 2 */
  push32((uint32_t)(0x2u));
  /* 10571214 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10571217 push ecx */
  push32((uint32_t)(ECX));
  /* 10571218 call 0x10571640 */
  push32(0x1057121du); f_10571640();
  /* 1057121d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10571220 jmp 0x10571538 */
  goto L_10571538;
L_10571225:;
  /* 10571225 mov edx, dword ptr [0x1058f880] */
  EDX = (r32((uint32_t)(0x1058f880)));
  /* 1057122b mov dword ptr [0x1058f890], edx */
  w32((uint32_t)(0x1058f890), (EDX));
  /* 10571231 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10571234 push eax */
  push32((uint32_t)(EAX));
  /* 10571235 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10571238 push ecx */
  push32((uint32_t)(ECX));
  /* 10571239 push 3 */
  push32((uint32_t)(0x3u));
  /* 1057123b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1057123e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10571241 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10571244 push eax */
  push32((uint32_t)(EAX));
  /* 10571245 call 0x10571640 */
  push32(0x1057124au); f_10571640();
  /* 1057124a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1057124d jmp 0x10571538 */
  goto L_10571538;
L_10571252:;
  /* 10571252 mov ecx, dword ptr [0x1058f880] */
  ECX = (r32((uint32_t)(0x1058f880)));
  /* 10571258 mov dword ptr [0x1058f890], ecx */
  w32((uint32_t)(0x1058f890), (ECX));
  /* 1057125e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10571261 push edx */
  push32((uint32_t)(EDX));
  /* 10571262 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10571265 push eax */
  push32((uint32_t)(EAX));
  /* 10571266 push 2 */
  push32((uint32_t)(0x2u));
  /* 10571268 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1057126b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1057126e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10571271 push edx */
  push32((uint32_t)(EDX));
  /* 10571272 call 0x10571640 */
  push32(0x10571277u); f_10571640();
  /* 10571277 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1057127a jmp 0x10571538 */
  goto L_10571538;
L_1057127f:;
  /* 1057127f mov eax, dword ptr [0x1058f880] */
  EAX = (r32((uint32_t)(0x1058f880)));
  /* 10571284 mov dword ptr [0x1058f890], eax */
  w32((uint32_t)(0x1058f890), (EAX));
  /* 10571289 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1057128c push ecx */
  push32((uint32_t)(ECX));
  /* 1057128d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10571290 push edx */
  push32((uint32_t)(EDX));
  /* 10571291 push 2 */
  push32((uint32_t)(0x2u));
  /* 10571293 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10571296 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10571299 push ecx */
  push32((uint32_t)(ECX));
  /* 1057129a call 0x10571640 */
  push32(0x1057129fu); f_10571640();
  /* 1057129f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105712a2 jmp 0x10571538 */
  goto L_10571538;
L_105712a7:;
  /* 105712a7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105712aa cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105712ae jg 0x105712cc */
  if ((!C.zf&&C.sf==C.of)) goto L_105712cc;
  /* 105712b0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105712b3 push eax */
  push32((uint32_t)(EAX));
  /* 105712b4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105712b7 push ecx */
  push32((uint32_t)(ECX));
  /* 105712b8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105712bb mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 105712c1 push eax */
  push32((uint32_t)(EAX));
  /* 105712c2 call 0x105715f0 */
  push32(0x105712c7u); f_105715f0();
  /* 105712c7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105712ca jmp 0x105712e6 */
  goto L_105712e6;
L_105712cc:;
  /* 105712cc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105712cf push ecx */
  push32((uint32_t)(ECX));
  /* 105712d0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105712d3 push edx */
  push32((uint32_t)(EDX));
  /* 105712d4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 105712d7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 105712dd push ecx */
  push32((uint32_t)(ECX));
  /* 105712de call 0x105715f0 */
  push32(0x105712e3u); f_105715f0();
  /* 105712e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105712e6:;
  /* 105712e6 jmp 0x10571538 */
  goto L_10571538;
L_105712eb:;
  /* 105712eb mov edx, dword ptr [0x1058f880] */
  EDX = (r32((uint32_t)(0x1058f880)));
  /* 105712f1 mov dword ptr [0x1058f890], edx */
  w32((uint32_t)(0x1058f890), (EDX));
  /* 105712f7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105712fa push eax */
  push32((uint32_t)(EAX));
  /* 105712fb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105712fe push ecx */
  push32((uint32_t)(ECX));
  /* 105712ff push 2 */
  push32((uint32_t)(0x2u));
  /* 10571301 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10571304 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10571306 push eax */
  push32((uint32_t)(EAX));
  /* 10571307 call 0x10571640 */
  push32(0x1057130cu); f_10571640();
  /* 1057130c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1057130f jmp 0x10571538 */
  goto L_10571538;
L_10571314:;
  /* 10571314 mov ecx, dword ptr [0x1058f880] */
  ECX = (r32((uint32_t)(0x1058f880)));
  /* 1057131a mov dword ptr [0x1058f890], ecx */
  w32((uint32_t)(0x1058f890), (ECX));
  /* 10571320 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10571323 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10571326 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10571329 jmp 0x1057137d */
  goto L_1057137d;
L_1057132b:;
  /* 1057132b mov ecx, dword ptr [0x1058f880] */
  ECX = (r32((uint32_t)(0x1058f880)));
  /* 10571331 mov dword ptr [0x1058f890], ecx */
  w32((uint32_t)(0x1058f890), (ECX));
  /* 10571337 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1057133a push edx */
  push32((uint32_t)(EDX));
  /* 1057133b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1057133e push eax */
  push32((uint32_t)(EAX));
  /* 1057133f push 1 */
  push32((uint32_t)(0x1u));
  /* 10571341 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10571344 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10571347 push edx */
  push32((uint32_t)(EDX));
  /* 10571348 call 0x10571640 */
  push32(0x1057134du); f_10571640();
  /* 1057134d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10571350 jmp 0x10571538 */
  goto L_10571538;
L_10571355:;
  /* 10571355 mov eax, dword ptr [0x1058f880] */
  EAX = (r32((uint32_t)(0x1058f880)));
  /* 1057135a mov dword ptr [0x1058f890], eax */
  w32((uint32_t)(0x1058f890), (EAX));
  /* 1057135f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10571362 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10571366 jne 0x10571371 */
  if (!C.zf) goto L_10571371;
  /* 10571368 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 1057136f jmp 0x1057137d */
  goto L_1057137d;
L_10571371:;
  /* 10571371 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10571374 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10571377 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1057137a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1057137d:;
  /* 1057137d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10571380 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10571383 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10571386 jge 0x10571391 */
  if ((C.sf==C.of)) goto L_10571391;
  /* 10571388 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1057138f jmp 0x105713be */
  goto L_105713be;
L_10571391:;
  /* 10571391 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10571394 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10571397 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10571398 mov ecx, 7 */
  ECX = (0x7u);
  /* 1057139d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1057139f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105713a2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105713a5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 105713a8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 105713a9 mov ecx, 7 */
  ECX = (0x7u);
  /* 105713ae idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 105713b0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105713b3 jl 0x105713be */
  if ((C.sf!=C.of)) goto L_105713be;
  /* 105713b5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105713b8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105713bb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_105713be:;
  /* 105713be mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105713c1 push eax */
  push32((uint32_t)(EAX));
  /* 105713c2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105713c5 push ecx */
  push32((uint32_t)(ECX));
  /* 105713c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 105713c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105713cb push edx */
  push32((uint32_t)(EDX));
  /* 105713cc call 0x10571640 */
  push32(0x105713d1u); f_10571640();
  /* 105713d1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105713d4 jmp 0x10571538 */
  goto L_10571538;
L_105713d9:;
  /* 105713d9 cmp dword ptr [0x1058f880], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f880))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105713e0 je 0x10571410 */
  if (C.zf) goto L_10571410;
  /* 105713e2 mov dword ptr [0x1058f880], 0 */
  w32((uint32_t)(0x1058f880), (0x0u));
  /* 105713ec mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 105713ef push eax */
  push32((uint32_t)(EAX));
  /* 105713f0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105713f3 push ecx */
  push32((uint32_t)(ECX));
  /* 105713f4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105713f7 push edx */
  push32((uint32_t)(EDX));
  /* 105713f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105713fb push eax */
  push32((uint32_t)(EAX));
  /* 105713fc mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 105713ff mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 10571405 push edx */
  push32((uint32_t)(EDX));
  /* 10571406 call 0x105717a0 */
  push32(0x1057140bu); f_105717a0();
  /* 1057140b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1057140e jmp 0x10571432 */
  goto L_10571432;
L_10571410:;
  /* 10571410 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10571413 push eax */
  push32((uint32_t)(EAX));
  /* 10571414 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10571417 push ecx */
  push32((uint32_t)(ECX));
  /* 10571418 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1057141b push edx */
  push32((uint32_t)(EDX));
  /* 1057141c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1057141f push eax */
  push32((uint32_t)(EAX));
  /* 10571420 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10571423 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10571429 push edx */
  push32((uint32_t)(EDX));
  /* 1057142a call 0x105717a0 */
  push32(0x1057142fu); f_105717a0();
  /* 1057142f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10571432:;
  /* 10571432 jmp 0x10571538 */
  goto L_10571538;
L_10571437:;
  /* 10571437 mov dword ptr [0x1058f880], 0 */
  w32((uint32_t)(0x1058f880), (0x0u));
  /* 10571441 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10571444 push eax */
  push32((uint32_t)(EAX));
  /* 10571445 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10571448 push ecx */
  push32((uint32_t)(ECX));
  /* 10571449 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1057144c push edx */
  push32((uint32_t)(EDX));
  /* 1057144d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10571450 push eax */
  push32((uint32_t)(EAX));
  /* 10571451 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10571454 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 1057145a push edx */
  push32((uint32_t)(EDX));
  /* 1057145b call 0x105717a0 */
  push32(0x10571460u); f_105717a0();
  /* 10571460 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10571463 jmp 0x10571538 */
  goto L_10571538;
L_10571468:;
  /* 10571468 mov eax, dword ptr [0x1058f880] */
  EAX = (r32((uint32_t)(0x1058f880)));
  /* 1057146d mov dword ptr [0x1058f890], eax */
  w32((uint32_t)(0x1058f890), (EAX));
  /* 10571472 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10571475 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10571478 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10571479 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 1057147e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10571480 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10571483 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10571486 push edx */
  push32((uint32_t)(EDX));
  /* 10571487 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1057148a push eax */
  push32((uint32_t)(EAX));
  /* 1057148b push 2 */
  push32((uint32_t)(0x2u));
  /* 1057148d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10571490 push ecx */
  push32((uint32_t)(ECX));
  /* 10571491 call 0x10571640 */
  push32(0x10571496u); f_10571640();
  /* 10571496 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10571499 jmp 0x10571538 */
  goto L_10571538;
L_1057149e:;
  /* 1057149e mov edx, dword ptr [0x1058f880] */
  EDX = (r32((uint32_t)(0x1058f880)));
  /* 105714a4 mov dword ptr [0x1058f890], edx */
  w32((uint32_t)(0x1058f890), (EDX));
  /* 105714aa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105714ad mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 105714b0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 105714b1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 105714b6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 105714b8 mov ecx, eax */
  ECX = (EAX);
  /* 105714ba add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105714bd imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105714c0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105714c3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 105714c6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 105714c7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 105714cc idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 105714ce add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105714d0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105714d3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105714d6 push eax */
  push32((uint32_t)(EAX));
  /* 105714d7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105714da push ecx */
  push32((uint32_t)(ECX));
  /* 105714db push 4 */
  push32((uint32_t)(0x4u));
  /* 105714dd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105714e0 push edx */
  push32((uint32_t)(EDX));
  /* 105714e1 call 0x10571640 */
  push32(0x105714e6u); f_10571640();
  /* 105714e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105714e9 jmp 0x10571538 */
  goto L_10571538;
L_105714eb:;
  /* 105714eb call 0x10572600 */
  push32(0x105714f0u); f_10572600();
  /* 105714f0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105714f3 push eax */
  push32((uint32_t)(EAX));
  /* 105714f4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105714f7 push ecx */
  push32((uint32_t)(ECX));
  /* 105714f8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105714fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105714fd cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10571501 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 10571504 mov ecx, dword ptr [eax*4 + 0x1058ee1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1058ee1c)));
  /* 1057150b push ecx */
  push32((uint32_t)(ECX));
  /* 1057150c call 0x105715f0 */
  push32(0x10571511u); f_105715f0();
  /* 10571511 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10571514 jmp 0x10571538 */
  goto L_10571538;
L_10571516:;
  /* 10571516 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10571519 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1057151b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 1057151e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10571521 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10571523 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10571526 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10571529 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1057152b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1057152e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10571530 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10571533 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10571536 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10571538:;
  /* 10571538 pop esi */
  ESI = (pop32());
  /* 10571539 mov esp, ebp */
  ESP = (EBP);
  /* 1057153b pop ebp */
  EBP = (pop32());
  /* 1057153c ret  */
  ESPCHK(0x10570fd0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x105715f0 (72 bytes, 30 insns) */
void f_105715f0(void) {
  FTRACE(0x105715f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105715f0 push ebp */
  push32((uint32_t)(EBP));
  /* 105715f1 mov ebp, esp */
  EBP = (ESP);
L_105715f3:;
  /* 105715f3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105715f6 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105715f9 je 0x10571636 */
  if (C.zf) goto L_10571636;
  /* 105715fb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105715fe movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10571601 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10571603 je 0x10571636 */
  if (C.zf) goto L_10571636;
  /* 10571605 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10571608 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1057160a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1057160d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1057160f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10571611 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10571614 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10571616 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10571619 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1057161c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1057161e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10571621 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10571624 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10571627 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1057162a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1057162c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1057162f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10571632 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10571634 jmp 0x105715f3 */
  goto L_105715f3;
L_10571636:;
  /* 10571636 pop ebp */
  EBP = (pop32());
  /* 10571637 ret  */
  ESPCHK(0x105715f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011640 @ 0x10571640 (173 bytes, 64 insns) */
void f_10571640(void) {
  FTRACE(0x10571640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10571640 push ebp */
  push32((uint32_t)(EBP));
  /* 10571641 mov ebp, esp */
  EBP = (ESP);
  /* 10571643 push ecx */
  push32((uint32_t)(ECX));
  /* 10571644 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1057164b cmp dword ptr [0x1058f890], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f890))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10571652 je 0x1057166a */
  if (C.zf) goto L_1057166a;
  /* 10571654 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10571657 push eax */
  push32((uint32_t)(EAX));
  /* 10571658 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1057165b push ecx */
  push32((uint32_t)(ECX));
  /* 1057165c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1057165f push edx */
  push32((uint32_t)(EDX));
  /* 10571660 call 0x105716f0 */
  push32(0x10571665u); f_105716f0();
  /* 10571665 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10571668 jmp 0x105716e9 */
  goto L_105716e9;
L_1057166a:;
  /* 1057166a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1057166d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10571670 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10571672 jae 0x105716e0 */
  if (!C.cf) goto L_105716e0;
  /* 10571674 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10571677 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1057167a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1057167d jmp 0x10571688 */
  goto L_10571688;
L_1057167f:;
  /* 1057167f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10571682 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10571685 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10571688:;
  /* 10571688 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1057168b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1057168e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10571690 je 0x105716c4 */
  if (C.zf) goto L_105716c4;
  /* 10571692 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10571695 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10571696 mov ecx, 0xa */
  ECX = (0xau);
  /* 1057169b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1057169d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105716a0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105716a3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105716a5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105716a8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 105716ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105716ae cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 105716af mov ecx, 0xa */
  ECX = (0xau);
  /* 105716b4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 105716b6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 105716b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105716bc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105716bf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105716c2 jmp 0x1057167f */
  goto L_1057167f;
L_105716c4:;
  /* 105716c4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105716c7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105716c9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105716cc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105716cf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 105716d1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105716d4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105716d6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105716d9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105716dc mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 105716de jmp 0x105716e9 */
  goto L_105716e9;
L_105716e0:;
  /* 105716e0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105716e3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_105716e9:;
  /* 105716e9 mov esp, ebp */
  ESP = (EBP);
  /* 105716eb pop ebp */
  EBP = (pop32());
  /* 105716ec ret  */
  ESPCHK(0x10571640u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x105716f0 (172 bytes, 65 insns) */
void f_105716f0(void) {
  FTRACE(0x105716f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105716f0 push ebp */
  push32((uint32_t)(EBP));
  /* 105716f1 mov ebp, esp */
  EBP = (ESP);
  /* 105716f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105716f6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105716f9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105716fb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105716fe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10571701 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10571704 jbe 0x1057174b */
  if ((C.cf||C.zf)) goto L_1057174b;
L_10571706:;
  /* 10571706 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10571709 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1057170a mov ecx, 0xa */
  ECX = (0xau);
  /* 1057170f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10571711 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10571714 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10571717 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10571719 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1057171c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1057171f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10571722 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10571725 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10571727 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1057172a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1057172d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1057172f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10571732 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10571733 mov ecx, 0xa */
  ECX = (0xau);
  /* 10571738 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1057173a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1057173d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10571741 jle 0x1057174b */
  if ((C.zf||C.sf!=C.of)) goto L_1057174b;
  /* 10571743 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10571746 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10571749 ja 0x10571706 */
  if ((!C.cf&&!C.zf)) goto L_10571706;
L_1057174b:;
  /* 1057174b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1057174e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10571750 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10571753 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10571756 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10571759 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1057175b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1057175e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10571761 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10571764:;
  /* 10571764 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10571767 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10571769 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1057176c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1057176f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10571772 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10571774 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10571776 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10571779 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1057177c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1057177f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10571782 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10571785 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10571787 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1057178a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1057178d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10571790 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10571793 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10571796 jb 0x10571764 */
  if (C.cf) goto L_10571764;
  /* 10571798 mov esp, ebp */
  ESP = (EBP);
  /* 1057179a pop ebp */
  EBP = (pop32());
  /* 1057179b ret  */
  ESPCHK(0x105716f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100117a0 @ 0x105717a0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_105717a0(void) {
  FTRACE(0x105717a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105717a0 push ebp */
  push32((uint32_t)(EBP));
  /* 105717a1 mov ebp, esp */
  EBP = (ESP);
  /* 105717a3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_105717a6:;
  /* 105717a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105717a9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105717ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105717ae je 0x10571c1c */
  if (C.zf) goto L_10571c1c;
  /* 105717b4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105717b7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105717ba je 0x10571c1c */
  if (C.zf) goto L_10571c1c;
  /* 105717c0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 105717c4 mov dword ptr [0x1058f890], 0 */
  w32((uint32_t)(0x1058f890), (0x0u));
  /* 105717ce mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 105717d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105717d8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105717db jmp 0x105717e6 */
  goto L_105717e6;
L_105717dd:;
  /* 105717dd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105717e0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105717e3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_105717e6:;
  /* 105717e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105717e9 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 105717ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105717ef movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 105717f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105717f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105717f8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105717fb cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105717fd jne 0x10571801 */
  if (!C.zf) goto L_10571801;
  /* 105717ff jmp 0x105717dd */
  goto L_105717dd;
L_10571801:;
  /* 10571801 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10571804 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10571807 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1057180a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1057180d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10571810 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10571813 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10571816 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10571819 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1057181c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10571820 ja 0x10571b70 */
  if ((!C.cf&&!C.zf)) goto L_10571b70;
  /* 10571826 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10571829 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1057182b mov al, byte ptr [ecx + 0x10571c4c] */
  AL = (r8((uint32_t)(ECX + 0x10571c4c)));
  /* 10571831 jmp dword ptr [eax*4 + 0x10571c20] */
  switch (EAX) {
    case 0: goto L_10571a8f;
    case 1: goto L_10571973;
    case 2: goto L_105718fe;
    case 3: goto L_10571838;
    case 4: goto L_10571876;
    case 5: goto L_105718d7;
    case 6: goto L_10571925;
    case 7: goto L_1057194c;
    case 8: goto L_105719ba;
    case 9: goto L_105718b4;
    case 10: goto L_10571b70;
    default: x86_unimpl("switch@0x10571831 out of table"); return;
  }
L_10571838:;
  /* 10571838 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1057183b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1057183e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10571841 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10571844 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10571847 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1057184b ja 0x10571871 */
  if ((!C.cf&&!C.zf)) goto L_10571871;
  /* 1057184d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10571850 jmp dword ptr [ecx*4 + 0x10571c9f] */
  switch (ECX) {
    case 0: goto L_10571857;
    case 1: goto L_10571861;
    case 2: goto L_10571867;
    case 3: goto L_1057186d;
    case 4: goto L_10571895;
    case 5: goto L_1057189f;
    case 6: goto L_105718a5;
    case 7: goto L_105718ab;
    default: x86_unimpl("switch@0x10571850 out of table"); return;
  }
L_10571857:;
  /* 10571857 mov dword ptr [0x1058f890], 1 */
  w32((uint32_t)(0x1058f890), (0x1u));
L_10571861:;
  /* 10571861 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 10571865 jmp 0x10571871 */
  goto L_10571871;
L_10571867:;
  /* 10571867 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 1057186b jmp 0x10571871 */
  goto L_10571871;
L_1057186d:;
  /* 1057186d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_10571871:;
  /* 10571871 jmp 0x10571b70 */
  goto L_10571b70;
L_10571876:;
  /* 10571876 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10571879 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1057187c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1057187f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10571882 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10571885 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10571889 ja 0x105718af */
  if ((!C.cf&&!C.zf)) goto L_105718af;
  /* 1057188b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1057188e jmp dword ptr [ecx*4 + 0x10571caf] */
  switch (ECX) {
    case 0: goto L_10571895;
    case 1: goto L_1057189f;
    case 2: goto L_105718a5;
    case 3: goto L_105718ab;
    default: x86_unimpl("switch@0x1057188e out of table"); return;
  }
L_10571895:;
  /* 10571895 mov dword ptr [0x1058f890], 1 */
  w32((uint32_t)(0x1058f890), (0x1u));
L_1057189f:;
  /* 1057189f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 105718a3 jmp 0x105718af */
  goto L_105718af;
L_105718a5:;
  /* 105718a5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 105718a9 jmp 0x105718af */
  goto L_105718af;
L_105718ab:;
  /* 105718ab mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_105718af:;
  /* 105718af jmp 0x10571b70 */
  goto L_10571b70;
L_105718b4:;
  /* 105718b4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105718b7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 105718ba cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105718be je 0x105718c8 */
  if (C.zf) goto L_105718c8;
  /* 105718c0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105718c4 je 0x105718ce */
  if (C.zf) goto L_105718ce;
  /* 105718c6 jmp 0x105718d2 */
  goto L_105718d2;
L_105718c8:;
  /* 105718c8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 105718cc jmp 0x105718d2 */
  goto L_105718d2;
L_105718ce:;
  /* 105718ce mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_105718d2:;
  /* 105718d2 jmp 0x10571b70 */
  goto L_10571b70;
L_105718d7:;
  /* 105718d7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105718da mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 105718dd cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105718e1 je 0x105718eb */
  if (C.zf) goto L_105718eb;
  /* 105718e3 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105718e7 je 0x105718f5 */
  if (C.zf) goto L_105718f5;
  /* 105718e9 jmp 0x105718f9 */
  goto L_105718f9;
L_105718eb:;
  /* 105718eb mov dword ptr [0x1058f890], 1 */
  w32((uint32_t)(0x1058f890), (0x1u));
L_105718f5:;
  /* 105718f5 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_105718f9:;
  /* 105718f9 jmp 0x10571b70 */
  goto L_10571b70;
L_105718fe:;
  /* 105718fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10571901 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10571904 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10571908 je 0x10571912 */
  if (C.zf) goto L_10571912;
  /* 1057190a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1057190e je 0x1057191c */
  if (C.zf) goto L_1057191c;
  /* 10571910 jmp 0x10571920 */
  goto L_10571920;
L_10571912:;
  /* 10571912 mov dword ptr [0x1058f890], 1 */
  w32((uint32_t)(0x1058f890), (0x1u));
L_1057191c:;
  /* 1057191c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_10571920:;
  /* 10571920 jmp 0x10571b70 */
  goto L_10571b70;
L_10571925:;
  /* 10571925 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10571928 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 1057192b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1057192f je 0x10571939 */
  if (C.zf) goto L_10571939;
  /* 10571931 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10571935 je 0x10571943 */
  if (C.zf) goto L_10571943;
  /* 10571937 jmp 0x10571947 */
  goto L_10571947;
L_10571939:;
  /* 10571939 mov dword ptr [0x1058f890], 1 */
  w32((uint32_t)(0x1058f890), (0x1u));
L_10571943:;
  /* 10571943 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_10571947:;
  /* 10571947 jmp 0x10571b70 */
  goto L_10571b70;
L_1057194c:;
  /* 1057194c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1057194f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10571952 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10571956 je 0x10571960 */
  if (C.zf) goto L_10571960;
  /* 10571958 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1057195c je 0x1057196a */
  if (C.zf) goto L_1057196a;
  /* 1057195e jmp 0x1057196e */
  goto L_1057196e;
L_10571960:;
  /* 10571960 mov dword ptr [0x1058f890], 1 */
  w32((uint32_t)(0x1058f890), (0x1u));
L_1057196a:;
  /* 1057196a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_1057196e:;
  /* 1057196e jmp 0x10571b70 */
  goto L_10571b70;
L_10571973:;
  /* 10571973 push 0x1058b9bc */
  push32((uint32_t)(0x1058b9bcu));
  /* 10571978 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1057197b push ecx */
  push32((uint32_t)(ECX));
  /* 1057197c call 0x105721d0 */
  push32(0x10571981u); f_105721d0();
  /* 10571981 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10571984 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10571986 jne 0x10571993 */
  if (!C.zf) goto L_10571993;
  /* 10571988 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1057198b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1057198e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10571991 jmp 0x105719b1 */
  goto L_105719b1;
L_10571993:;
  /* 10571993 push 0x1058b9b8 */
  push32((uint32_t)(0x1058b9b8u));
  /* 10571998 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1057199b push eax */
  push32((uint32_t)(EAX));
  /* 1057199c call 0x105721d0 */
  push32(0x105719a1u); f_105721d0();
  /* 105719a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105719a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105719a6 jne 0x105719b1 */
  if (!C.zf) goto L_105719b1;
  /* 105719a8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105719ab add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105719ae mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_105719b1:;
  /* 105719b1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 105719b5 jmp 0x10571b70 */
  goto L_10571b70;
L_105719ba:;
  /* 105719ba mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105719bd cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105719c1 jg 0x105719d1 */
  if ((!C.zf&&C.sf==C.of)) goto L_105719d1;
  /* 105719c3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 105719c6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 105719cc mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 105719cf jmp 0x105719dd */
  goto L_105719dd;
L_105719d1:;
  /* 105719d1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105719d4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 105719da mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_105719dd:;
  /* 105719dd cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105719e1 jle 0x10571a84 */
  if ((C.zf||C.sf!=C.of)) goto L_10571a84;
  /* 105719e7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105719ea cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105719ed jbe 0x10571a84 */
  if ((C.cf||C.zf)) goto L_10571a84;
  /* 105719f3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105719f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105719f8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105719fa mov ecx, dword ptr [0x1058dc98] */
  ECX = (r32((uint32_t)(0x1058dc98)));
  /* 10571a00 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10571a02 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10571a06 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10571a0c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10571a0e je 0x10571a47 */
  if (C.zf) goto L_10571a47;
  /* 10571a10 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10571a13 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10571a16 jbe 0x10571a47 */
  if ((C.cf||C.zf)) goto L_10571a47;
  /* 10571a18 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10571a1b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10571a1d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10571a20 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10571a22 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10571a24 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10571a27 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10571a29 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10571a2c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10571a2f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10571a31 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10571a34 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10571a37 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10571a3a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10571a3d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10571a3f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10571a42 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10571a45 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10571a47:;
  /* 10571a47 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10571a4a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10571a4c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10571a4f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10571a51 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10571a53 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10571a56 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10571a58 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10571a5b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10571a5e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10571a60 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10571a63 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10571a66 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10571a69 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10571a6c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10571a6e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10571a71 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10571a74 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10571a76 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10571a79 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10571a7c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10571a7f jmp 0x105719dd */
  goto L_105719dd;
L_10571a84:;
  /* 10571a84 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10571a87 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10571a8a jmp 0x105717a6 */
  goto L_105717a6;
L_10571a8f:;
  /* 10571a8f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10571a92 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10571a95 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10571a97 je 0x10571b62 */
  if (C.zf) goto L_10571b62;
  /* 10571a9d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10571aa0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10571aa3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10571aa6:;
  /* 10571aa6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10571aa9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10571aac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10571aae je 0x10571b60 */
  if (C.zf) goto L_10571b60;
  /* 10571ab4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10571ab7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10571aba je 0x10571b60 */
  if (C.zf) goto L_10571b60;
  /* 10571ac0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10571ac3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10571ac6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10571ac9 jne 0x10571ad9 */
  if (!C.zf) goto L_10571ad9;
  /* 10571acb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10571ace add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10571ad1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10571ad4 jmp 0x10571b60 */
  goto L_10571b60;
L_10571ad9:;
  /* 10571ad9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10571adc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10571ade mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10571ae0 mov edx, dword ptr [0x1058dc98] */
  EDX = (r32((uint32_t)(0x1058dc98)));
  /* 10571ae6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10571ae8 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10571aec and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10571af1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10571af3 je 0x10571b2c */
  if (C.zf) goto L_10571b2c;
  /* 10571af5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10571af8 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10571afb jbe 0x10571b2c */
  if ((C.cf||C.zf)) goto L_10571b2c;
  /* 10571afd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10571b00 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10571b02 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10571b05 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10571b07 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10571b09 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10571b0c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10571b0e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10571b11 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10571b14 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10571b16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10571b19 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10571b1c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10571b1f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10571b22 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10571b24 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10571b27 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10571b2a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10571b2c:;
  /* 10571b2c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10571b2f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10571b31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10571b34 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10571b36 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10571b38 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10571b3b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10571b3d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10571b40 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10571b43 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10571b45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10571b48 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10571b4b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10571b4e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10571b51 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10571b53 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10571b56 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10571b59 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10571b5b jmp 0x10571aa6 */
  goto L_10571aa6;
L_10571b60:;
  /* 10571b60 jmp 0x10571b6b */
  goto L_10571b6b;
L_10571b62:;
  /* 10571b62 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10571b65 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10571b68 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10571b6b:;
  /* 10571b6b jmp 0x105717a6 */
  goto L_105717a6;
L_10571b70:;
  /* 10571b70 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10571b74 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10571b76 je 0x10571b9c */
  if (C.zf) goto L_10571b9c;
  /* 10571b78 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10571b7b push edx */
  push32((uint32_t)(EDX));
  /* 10571b7c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10571b7f push eax */
  push32((uint32_t)(EAX));
  /* 10571b80 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10571b83 push ecx */
  push32((uint32_t)(ECX));
  /* 10571b84 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10571b87 push edx */
  push32((uint32_t)(EDX));
  /* 10571b88 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10571b8b push eax */
  push32((uint32_t)(EAX));
  /* 10571b8c call 0x10570fd0 */
  push32(0x10571b91u); f_10570fd0();
  /* 10571b91 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10571b94 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10571b97 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10571b9a jmp 0x10571c17 */
  goto L_10571c17;
L_10571b9c:;
  /* 10571b9c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10571b9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10571ba1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10571ba3 mov ecx, dword ptr [0x1058dc98] */
  ECX = (r32((uint32_t)(0x1058dc98)));
  /* 10571ba9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10571bab mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10571baf and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10571bb5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10571bb7 je 0x10571be8 */
  if (C.zf) goto L_10571be8;
  /* 10571bb9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10571bbc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10571bbe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10571bc1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10571bc3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10571bc5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10571bc8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10571bca add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10571bcd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10571bd0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10571bd2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10571bd5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10571bd8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10571bdb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10571bde mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10571be0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10571be3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10571be6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10571be8:;
  /* 10571be8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10571beb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10571bed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10571bf0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10571bf2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10571bf4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10571bf7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10571bf9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10571bfc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10571bff mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10571c01 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10571c04 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10571c07 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10571c0a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10571c0d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10571c0f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10571c12 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10571c15 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10571c17:;
  /* 10571c17 jmp 0x105717a6 */
  goto L_105717a6;
L_10571c1c:;
  /* 10571c1c mov esp, ebp */
  ESP = (EBP);
  /* 10571c1e pop ebp */
  EBP = (pop32());
  /* 10571c1f ret  */
  ESPCHK(0x105717a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011cc0 @ 0x10571cc0 (650 bytes, 178 insns) */
void f_10571cc0(void) {
  FTRACE(0x10571cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10571cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10571cc1 mov ebp, esp */
  EBP = (ESP);
  /* 10571cc3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10571cc9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10571ccd jne 0x10571e29 */
  if (!C.zf) goto L_10571e29;
  /* 10571cd3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10571cd6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 10571cdc lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 10571ce2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10571ce5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10571cec mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 10571cf6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10571cf8 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10571cfe push edx */
  push32((uint32_t)(EDX));
  /* 10571cff mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10571d02 push eax */
  push32((uint32_t)(EAX));
  /* 10571d03 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10571d06 push ecx */
  push32((uint32_t)(ECX));
  /* 10571d07 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10571d0a push edx */
  push32((uint32_t)(EDX));
  /* 10571d0b call 0x105730e0 */
  push32(0x10571d10u); f_105730e0();
  /* 10571d10 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10571d13 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10571d16 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10571d1a jne 0x10571daf */
  if (!C.zf) goto L_10571daf;
  /* 10571d20 call dword ptr [0x10592320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592320))), 0x10571d26u);
  /* 10571d26 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10571d29 je 0x10571d30 */
  if (C.zf) goto L_10571d30;
  /* 10571d2b jmp 0x10571e0d */
  goto L_10571e0d;
L_10571d30:;
  /* 10571d30 push 0 */
  push32((uint32_t)(0x0u));
  /* 10571d32 push 0 */
  push32((uint32_t)(0x0u));
  /* 10571d34 push 0 */
  push32((uint32_t)(0x0u));
  /* 10571d36 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10571d39 push eax */
  push32((uint32_t)(EAX));
  /* 10571d3a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10571d3d push ecx */
  push32((uint32_t)(ECX));
  /* 10571d3e call 0x105730e0 */
  push32(0x10571d43u); f_105730e0();
  /* 10571d43 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10571d46 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 10571d4c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10571d53 jne 0x10571d5a */
  if (!C.zf) goto L_10571d5a;
  /* 10571d55 jmp 0x10571e0d */
  goto L_10571e0d;
L_10571d5a:;
  /* 10571d5a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 10571d5c push 0x1058b9c4 */
  push32((uint32_t)(0x1058b9c4u));
  /* 10571d61 push 2 */
  push32((uint32_t)(0x2u));
  /* 10571d63 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10571d69 push edx */
  push32((uint32_t)(EDX));
  /* 10571d6a call 0x10563b00 */
  push32(0x10571d6fu); f_10563b00();
  /* 10571d6f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10571d72 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10571d75 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10571d79 jne 0x10571d80 */
  if (!C.zf) goto L_10571d80;
  /* 10571d7b jmp 0x10571e0d */
  goto L_10571e0d;
L_10571d80:;
  /* 10571d80 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10571d87 push 0 */
  push32((uint32_t)(0x0u));
  /* 10571d89 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 10571d8f push eax */
  push32((uint32_t)(EAX));
  /* 10571d90 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10571d93 push ecx */
  push32((uint32_t)(ECX));
  /* 10571d94 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10571d97 push edx */
  push32((uint32_t)(EDX));
  /* 10571d98 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10571d9b push eax */
  push32((uint32_t)(EAX));
  /* 10571d9c call 0x105730e0 */
  push32(0x10571da1u); f_105730e0();
  /* 10571da1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10571da4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10571da7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10571dab jne 0x10571daf */
  if (!C.zf) goto L_10571daf;
  /* 10571dad jmp 0x10571e0d */
  goto L_10571e0d;
L_10571daf:;
  /* 10571daf push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10571db1 push 0x1058b9c4 */
  push32((uint32_t)(0x1058b9c4u));
  /* 10571db6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10571db8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10571dbb push ecx */
  push32((uint32_t)(ECX));
  /* 10571dbc call 0x10563b00 */
  push32(0x10571dc1u); f_10563b00();
  /* 10571dc1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10571dc4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 10571dca mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10571dcc mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10571dd2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10571dd5 jne 0x10571dd9 */
  if (!C.zf) goto L_10571dd9;
  /* 10571dd7 jmp 0x10571e0d */
  goto L_10571e0d;
L_10571dd9:;
  /* 10571dd9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10571ddc push ecx */
  push32((uint32_t)(ECX));
  /* 10571ddd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10571de0 push edx */
  push32((uint32_t)(EDX));
  /* 10571de1 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10571de7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10571de9 push ecx */
  push32((uint32_t)(ECX));
  /* 10571dea call 0x10567320 */
  push32(0x10571defu); f_10567320();
  /* 10571def add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10571df2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10571df6 je 0x10571e06 */
  if (C.zf) goto L_10571e06;
  /* 10571df8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10571dfa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10571dfd push edx */
  push32((uint32_t)(EDX));
  /* 10571dfe call 0x10564590 */
  push32(0x10571e03u); f_10564590();
  /* 10571e03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10571e06:;
  /* 10571e06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10571e08 jmp 0x10571f46 */
  goto L_10571f46;
L_10571e0d:;
  /* 10571e0d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10571e11 je 0x10571e21 */
  if (C.zf) goto L_10571e21;
  /* 10571e13 push 2 */
  push32((uint32_t)(0x2u));
  /* 10571e15 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10571e18 push eax */
  push32((uint32_t)(EAX));
  /* 10571e19 call 0x10564590 */
  push32(0x10571e1eu); f_10564590();
  /* 10571e1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10571e21:;
  /* 10571e21 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10571e24 jmp 0x10571f46 */
  goto L_10571f46;
L_10571e29:;
  /* 10571e29 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10571e2d jne 0x10571f43 */
  if (!C.zf) goto L_10571f43;
  /* 10571e33 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 10571e3d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10571e40 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 10571e46 push 0 */
  push32((uint32_t)(0x0u));
  /* 10571e48 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10571e4e push edx */
  push32((uint32_t)(EDX));
  /* 10571e4f push 0x1058f7a8 */
  push32((uint32_t)(0x1058f7a8u));
  /* 10571e54 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10571e57 push eax */
  push32((uint32_t)(EAX));
  /* 10571e58 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10571e5b push ecx */
  push32((uint32_t)(ECX));
  /* 10571e5c call 0x10572f40 */
  push32(0x10571e61u); f_10572f40();
  /* 10571e61 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10571e64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10571e66 jne 0x10571e70 */
  if (!C.zf) goto L_10571e70;
  /* 10571e68 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10571e6b jmp 0x10571f46 */
  goto L_10571f46;
L_10571e70:;
  /* 10571e70 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10571e76 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10571e79 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 10571e83 jmp 0x10571e94 */
  goto L_10571e94;
L_10571e85:;
  /* 10571e85 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10571e8b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10571e8e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_10571e94:;
  /* 10571e94 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10571e9b jge 0x10571f3f */
  if ((C.sf==C.of)) goto L_10571f3f;
  /* 10571ea1 cmp dword ptr [0x1058dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1058dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10571ea8 jle 0x10571edb */
  if ((C.zf||C.sf!=C.of)) goto L_10571edb;
  /* 10571eaa push 4 */
  push32((uint32_t)(0x4u));
  /* 10571eac mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10571eb2 mov dl, byte ptr [ecx*2 + 0x1058f7a8] */
  DL = (r8((uint32_t)(ECX*2 + 0x1058f7a8)));
  /* 10571eb9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10571ebf mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10571ec5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10571eca push eax */
  push32((uint32_t)(EAX));
  /* 10571ecb call 0x10569b10 */
  push32(0x10571ed0u); f_10569b10();
  /* 10571ed0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10571ed3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 10571ed9 jmp 0x10571f0e */
  goto L_10571f0e;
L_10571edb:;
  /* 10571edb mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10571ee1 mov dl, byte ptr [ecx*2 + 0x1058f7a8] */
  DL = (r8((uint32_t)(ECX*2 + 0x1058f7a8)));
  /* 10571ee8 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10571eee mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10571ef4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10571ef9 mov ecx, dword ptr [0x1058dc98] */
  ECX = (r32((uint32_t)(0x1058dc98)));
  /* 10571eff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10571f01 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10571f05 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10571f08 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_10571f0e:;
  /* 10571f0e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10571f15 je 0x10571f38 */
  if (C.zf) goto L_10571f38;
  /* 10571f17 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10571f1d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10571f20 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10571f23 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 10571f2a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10571f2e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10571f34 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10571f36 jmp 0x10571f3a */
  goto L_10571f3a;
L_10571f38:;
  /* 10571f38 jmp 0x10571f3f */
  goto L_10571f3f;
L_10571f3a:;
  /* 10571f3a jmp 0x10571e85 */
  goto L_10571e85;
L_10571f3f:;
  /* 10571f3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10571f41 jmp 0x10571f46 */
  goto L_10571f46;
L_10571f43:;
  /* 10571f43 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10571f46:;
  /* 10571f46 mov esp, ebp */
  ESP = (EBP);
  /* 10571f48 pop ebp */
  EBP = (pop32());
  /* 10571f49 ret  */
  ESPCHK(0x10571cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f50 @ 0x10571f50 (10 bytes, 5 insns) */
void f_10571f50(void) {
  FTRACE(0x10571f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10571f50 push ebp */
  push32((uint32_t)(EBP));
  /* 10571f51 mov ebp, esp */
  EBP = (ESP);
  /* 10571f53 mov eax, dword ptr [0x1058ed88] */
  EAX = (r32((uint32_t)(0x1058ed88)));
  /* 10571f58 pop ebp */
  EBP = (pop32());
  /* 10571f59 ret  */
  ESPCHK(0x10571f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f60 @ 0x10571f60 (575 bytes, 196 insns) */
void f_10571f60(void) {
  FTRACE(0x10571f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10571f60 push ebp */
  push32((uint32_t)(EBP));
  /* 10571f61 mov ebp, esp */
  EBP = (ESP);
  /* 10571f63 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10571f65 push 0x1058b9d0 */
  push32((uint32_t)(0x1058b9d0u));
  /* 10571f6a push 0x1056cc08 */
  push32((uint32_t)(0x1056cc08u));
  /* 10571f6f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10571f75 push eax */
  push32((uint32_t)(EAX));
  /* 10571f76 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10571f7d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10571f80 push ebx */
  push32((uint32_t)(EBX));
  /* 10571f81 push esi */
  push32((uint32_t)(ESI));
  /* 10571f82 push edi */
  push32((uint32_t)(EDI));
  /* 10571f83 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10571f86 cmp dword ptr [0x1058f7b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f7b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10571f8d jne 0x10571fde */
  if (!C.zf) goto L_10571fde;
  /* 10571f8f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10571f92 push eax */
  push32((uint32_t)(EAX));
  /* 10571f93 push 1 */
  push32((uint32_t)(0x1u));
  /* 10571f95 push 0x1058b100 */
  push32((uint32_t)(0x1058b100u));
  /* 10571f9a push 1 */
  push32((uint32_t)(0x1u));
  /* 10571f9c call dword ptr [0x105922bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922bc))), 0x10571fa2u);
  /* 10571fa2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10571fa4 je 0x10571fb2 */
  if (C.zf) goto L_10571fb2;
  /* 10571fa6 mov dword ptr [0x1058f7b4], 1 */
  w32((uint32_t)(0x1058f7b4), (0x1u));
  /* 10571fb0 jmp 0x10571fde */
  goto L_10571fde;
L_10571fb2:;
  /* 10571fb2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 10571fb5 push ecx */
  push32((uint32_t)(ECX));
  /* 10571fb6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10571fb8 push 0x1058b0fc */
  push32((uint32_t)(0x1058b0fcu));
  /* 10571fbd push 1 */
  push32((uint32_t)(0x1u));
  /* 10571fbf push 0 */
  push32((uint32_t)(0x0u));
  /* 10571fc1 call dword ptr [0x105922c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922c0))), 0x10571fc7u);
  /* 10571fc7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10571fc9 je 0x10571fd7 */
  if (C.zf) goto L_10571fd7;
  /* 10571fcb mov dword ptr [0x1058f7b4], 2 */
  w32((uint32_t)(0x1058f7b4), (0x2u));
  /* 10571fd5 jmp 0x10571fde */
  goto L_10571fde;
L_10571fd7:;
  /* 10571fd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10571fd9 jmp 0x105721b9 */
  goto L_105721b9;
L_10571fde:;
  /* 10571fde cmp dword ptr [0x1058f7b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1058f7b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10571fe5 jne 0x10572002 */
  if (!C.zf) goto L_10572002;
  /* 10571fe7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10571fea push edx */
  push32((uint32_t)(EDX));
  /* 10571feb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10571fee push eax */
  push32((uint32_t)(EAX));
  /* 10571fef mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10571ff2 push ecx */
  push32((uint32_t)(ECX));
  /* 10571ff3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10571ff6 push edx */
  push32((uint32_t)(EDX));
  /* 10571ff7 call dword ptr [0x105922bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922bc))), 0x10571ffdu);
  /* 10571ffd jmp 0x105721b9 */
  goto L_105721b9;
L_10572002:;
  /* 10572002 cmp dword ptr [0x1058f7b4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1058f7b4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10572009 jne 0x105721b7 */
  if (!C.zf) goto L_105721b7;
  /* 1057200f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10572013 jne 0x1057201d */
  if (!C.zf) goto L_1057201d;
  /* 10572015 mov eax, dword ptr [0x1058f728] */
  EAX = (r32((uint32_t)(0x1058f728)));
  /* 1057201a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_1057201d:;
  /* 1057201d push 0 */
  push32((uint32_t)(0x0u));
  /* 1057201f push 0 */
  push32((uint32_t)(0x0u));
  /* 10572021 push 0 */
  push32((uint32_t)(0x0u));
  /* 10572023 push 0 */
  push32((uint32_t)(0x0u));
  /* 10572025 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10572028 push ecx */
  push32((uint32_t)(ECX));
  /* 10572029 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1057202c push edx */
  push32((uint32_t)(EDX));
  /* 1057202d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10572032 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10572035 push eax */
  push32((uint32_t)(EAX));
  /* 10572036 call dword ptr [0x1059234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059234c))), 0x1057203cu);
  /* 1057203c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1057203f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10572043 jne 0x1057204c */
  if (!C.zf) goto L_1057204c;
  /* 10572045 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10572047 jmp 0x105721b9 */
  goto L_105721b9;
L_1057204c:;
  /* 1057204c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10572053 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10572056 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10572059 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1057205b call 0x10566ca0 */
  push32(0x10572060u); f_10566ca0();
  /* 10572060 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 10572063 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10572066 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10572069 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1057206c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1057206f push edx */
  push32((uint32_t)(EDX));
  /* 10572070 push 0 */
  push32((uint32_t)(0x0u));
  /* 10572072 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10572075 push eax */
  push32((uint32_t)(EAX));
  /* 10572076 call 0x10567870 */
  push32(0x1057207bu); f_10567870();
  /* 1057207b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1057207e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10572085 jmp 0x1057209e */
  goto L_1057209e;
  /* 10572087 mov eax, 1 */
  EAX = (0x1u);
  /* 1057208c ret  */
  ESPCHK(0x10571f60u, _esp0);
  ESP += 4; return;
  /* 1057208d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10572090 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10572097 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1057209e:;
  /* 1057209e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105720a2 jne 0x105720ab */
  if (!C.zf) goto L_105720ab;
  /* 105720a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105720a6 jmp 0x105721b9 */
  goto L_105721b9;
L_105720ab:;
  /* 105720ab push 0 */
  push32((uint32_t)(0x0u));
  /* 105720ad push 0 */
  push32((uint32_t)(0x0u));
  /* 105720af mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 105720b2 push ecx */
  push32((uint32_t)(ECX));
  /* 105720b3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105720b6 push edx */
  push32((uint32_t)(EDX));
  /* 105720b7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105720ba push eax */
  push32((uint32_t)(EAX));
  /* 105720bb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105720be push ecx */
  push32((uint32_t)(ECX));
  /* 105720bf push 0x220 */
  push32((uint32_t)(0x220u));
  /* 105720c4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105720c7 push edx */
  push32((uint32_t)(EDX));
  /* 105720c8 call dword ptr [0x1059234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059234c))), 0x105720ceu);
  /* 105720ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105720d0 jne 0x105720d9 */
  if (!C.zf) goto L_105720d9;
  /* 105720d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105720d4 jmp 0x105721b9 */
  goto L_105721b9;
L_105720d9:;
  /* 105720d9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 105720e0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 105720e3 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 105720e7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105720ea and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 105720ec call 0x10566ca0 */
  push32(0x105720f1u); f_10566ca0();
  /* 105720f1 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 105720f4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 105720f7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 105720fa mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 105720fd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10572104 jmp 0x1057211d */
  goto L_1057211d;
  /* 10572106 mov eax, 1 */
  EAX = (0x1u);
  /* 1057210b ret  */
  ESPCHK(0x10571f60u, _esp0);
  ESP += 4; return;
  /* 1057210c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1057210f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10572116 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1057211d:;
  /* 1057211d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10572121 jne 0x1057212a */
  if (!C.zf) goto L_1057212a;
  /* 10572123 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10572125 jmp 0x105721b9 */
  goto L_105721b9;
L_1057212a:;
  /* 1057212a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1057212e jne 0x10572139 */
  if (!C.zf) goto L_10572139;
  /* 10572130 mov edx, dword ptr [0x1058f718] */
  EDX = (r32((uint32_t)(0x1058f718)));
  /* 10572136 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_10572139:;
  /* 10572139 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1057213c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1057213f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 10572145 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10572148 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1057214b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 10572152 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10572155 push ecx */
  push32((uint32_t)(ECX));
  /* 10572156 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10572159 push edx */
  push32((uint32_t)(EDX));
  /* 1057215a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1057215d push eax */
  push32((uint32_t)(EAX));
  /* 1057215e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10572161 push ecx */
  push32((uint32_t)(ECX));
  /* 10572162 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10572165 push edx */
  push32((uint32_t)(EDX));
  /* 10572166 call dword ptr [0x105922c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922c0))), 0x1057216cu);
  /* 1057216c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1057216f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10572172 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10572175 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10572177 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 1057217c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10572182 je 0x10572198 */
  if (C.zf) goto L_10572198;
  /* 10572184 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10572187 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1057218a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1057218c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10572190 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10572196 je 0x1057219c */
  if (C.zf) goto L_1057219c;
L_10572198:;
  /* 10572198 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1057219a jmp 0x105721b9 */
  goto L_105721b9;
L_1057219c:;
  /* 1057219c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1057219f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 105721a1 push eax */
  push32((uint32_t)(EAX));
  /* 105721a2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105721a5 push ecx */
  push32((uint32_t)(ECX));
  /* 105721a6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105721a9 push edx */
  push32((uint32_t)(EDX));
  /* 105721aa call 0x1056b9f0 */
  push32(0x105721afu); f_1056b9f0();
  /* 105721af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105721b2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 105721b5 jmp 0x105721b9 */
  goto L_105721b9;
L_105721b7:;
  /* 105721b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105721b9:;
  /* 105721b9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 105721bc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105721bf mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 105721c6 pop edi */
  EDI = (pop32());
  /* 105721c7 pop esi */
  ESI = (pop32());
  /* 105721c8 pop ebx */
  EBX = (pop32());
  /* 105721c9 mov esp, ebp */
  ESP = (EBP);
  /* 105721cb pop ebp */
  EBP = (pop32());
  /* 105721cc ret  */
  ESPCHK(0x10571f60u, _esp0);
  ESP += 4; return;
}

/* FUN_100121d0 @ 0x105721d0 (208 bytes, 85 insns) */
void f_105721d0(void) {
  FTRACE(0x105721d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105721d0 push ebp */
  push32((uint32_t)(EBP));
  /* 105721d1 mov ebp, esp */
  EBP = (ESP);
  /* 105721d3 push edi */
  push32((uint32_t)(EDI));
  /* 105721d4 push esi */
  push32((uint32_t)(ESI));
  /* 105721d5 push ebx */
  push32((uint32_t)(EBX));
  /* 105721d6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 105721d9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 105721dc lea eax, [0x1058f710] */
  EAX = ((uint32_t)(0x1058f710));
  /* 105721e2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105721e6 jne 0x10572223 */
  if (!C.zf) goto L_10572223;
  /* 105721e8 mov al, 0xff */
  AL = (0xffu);
  /* 105721ea mov edi, edi */
  EDI = (EDI);
L_105721ec:;
  /* 105721ec or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 105721ee je 0x1057221e */
  if (C.zf) goto L_1057221e;
  /* 105721f0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 105721f2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 105721f3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 105721f5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 105721f6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105721f8 je 0x105721ec */
  if (C.zf) goto L_105721ec;
  /* 105721fa sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 105721fc cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105721fe sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10572200 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10572203 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10572205 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10572207 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 10572209 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1057220b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1057220d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1057220f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10572212 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10572214 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10572216 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10572218 je 0x105721ec */
  if (C.zf) goto L_105721ec;
  /* 1057221a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1057221c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_1057221e:;
  /* 1057221e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 10572221 jmp 0x1057229b */
  goto L_1057229b;
L_10572223:;
  /* 10572223 lock inc dword ptr [0x1058f8a4] */
  x86_unimpl("lock inc @ 0x10572223");
  /* 1057222a cmp dword ptr [0x1058f894], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f894))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10572231 jg 0x10572237 */
  if ((!C.zf&&C.sf==C.of)) goto L_10572237;
  /* 10572233 push 0 */
  push32((uint32_t)(0x0u));
  /* 10572235 jmp 0x1057224c */
  goto L_1057224c;
L_10572237:;
  /* 10572237 lock dec dword ptr [0x1058f8a4] */
  x86_unimpl("lock dec @ 0x10572237");
  /* 1057223e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10572240 call 0x10567500 */
  push32(0x10572245u); f_10567500();
  /* 10572245 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_1057224c:;
  /* 1057224c mov eax, 0xff */
  EAX = (0xffu);
  /* 10572251 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10572253 nop  */
  /* nop */
L_10572254:;
  /* 10572254 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10572256 je 0x1057227f */
  if (C.zf) goto L_1057227f;
  /* 10572258 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1057225a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1057225b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1057225d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1057225e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10572260 je 0x10572254 */
  if (C.zf) goto L_10572254;
  /* 10572262 push eax */
  push32((uint32_t)(EAX));
  /* 10572263 push ebx */
  push32((uint32_t)(EBX));
  /* 10572264 call 0x10573340 */
  push32(0x10572269u); f_10573340();
  /* 10572269 mov ebx, eax */
  EBX = (EAX);
  /* 1057226b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1057226e call 0x10573340 */
  push32(0x10572273u); f_10573340();
  /* 10572273 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10572276 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10572278 je 0x10572254 */
  if (C.zf) goto L_10572254;
  /* 1057227a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1057227c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1057227f:;
  /* 1057227f mov ebx, eax */
  EBX = (EAX);
  /* 10572281 pop eax */
  EAX = (pop32());
  /* 10572282 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10572284 jne 0x1057228f */
  if (!C.zf) goto L_1057228f;
  /* 10572286 lock dec dword ptr [0x1058f8a4] */
  x86_unimpl("lock dec @ 0x10572286");
  /* 1057228d jmp 0x10572299 */
  goto L_10572299;
L_1057228f:;
  /* 1057228f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10572291 call 0x105675a0 */
  push32(0x10572296u); f_105675a0();
  /* 10572296 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10572299:;
  /* 10572299 mov eax, ebx */
  EAX = (EBX);
L_1057229b:;
  /* 1057229b pop ebx */
  EBX = (pop32());
  /* 1057229c pop esi */
  ESI = (pop32());
  /* 1057229d pop edi */
  EDI = (pop32());
  /* 1057229e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1057229f ret  */
  ESPCHK(0x105721d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100122a0 @ 0x105722a0 (257 bytes, 103 insns) */
void f_105722a0(void) {
  FTRACE(0x105722a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105722a0 push ebp */
  push32((uint32_t)(EBP));
  /* 105722a1 mov ebp, esp */
  EBP = (ESP);
  /* 105722a3 push edi */
  push32((uint32_t)(EDI));
  /* 105722a4 push esi */
  push32((uint32_t)(ESI));
  /* 105722a5 push ebx */
  push32((uint32_t)(EBX));
  /* 105722a6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105722a9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105722ab je 0x1057239a */
  if (C.zf) goto L_1057239a;
  /* 105722b1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 105722b4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 105722b7 lea eax, [0x1058f710] */
  EAX = ((uint32_t)(0x1058f710));
  /* 105722bd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105722c1 jne 0x10572311 */
  if (!C.zf) goto L_10572311;
  /* 105722c3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 105722c5 mov bl, 0x5a */
  BL = (0x5au);
  /* 105722c7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 105722c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_105722cc:;
  /* 105722cc mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 105722ce or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 105722d0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 105722d2 je 0x105722f5 */
  if (C.zf) goto L_105722f5;
  /* 105722d4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 105722d6 je 0x105722f5 */
  if (C.zf) goto L_105722f5;
  /* 105722d8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 105722d9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 105722da cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105722dc jb 0x105722e4 */
  if (C.cf) goto L_105722e4;
  /* 105722de cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105722e0 ja 0x105722e4 */
  if ((!C.cf&&!C.zf)) goto L_105722e4;
  /* 105722e2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_105722e4:;
  /* 105722e4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105722e6 jb 0x105722ee */
  if (C.cf) goto L_105722ee;
  /* 105722e8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105722ea ja 0x105722ee */
  if ((!C.cf&&!C.zf)) goto L_105722ee;
  /* 105722ec add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_105722ee:;
  /* 105722ee cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105722f0 jne 0x105722ff */
  if (!C.zf) goto L_105722ff;
  /* 105722f2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 105722f3 jne 0x105722cc */
  if (!C.zf) goto L_105722cc;
L_105722f5:;
  /* 105722f5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105722f7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105722f9 je 0x1057239a */
  if (C.zf) goto L_1057239a;
L_105722ff:;
  /* 105722ff mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10572304 jb 0x1057239a */
  if (C.cf) goto L_1057239a;
  /* 1057230a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1057230c jmp 0x1057239a */
  goto L_1057239a;
L_10572311:;
  /* 10572311 lock inc dword ptr [0x1058f8a4] */
  x86_unimpl("lock inc @ 0x10572311");
  /* 10572318 cmp dword ptr [0x1058f894], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f894))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1057231f jg 0x10572325 */
  if ((!C.zf&&C.sf==C.of)) goto L_10572325;
  /* 10572321 push 0 */
  push32((uint32_t)(0x0u));
  /* 10572323 jmp 0x1057233e */
  goto L_1057233e;
L_10572325:;
  /* 10572325 lock dec dword ptr [0x1058f8a4] */
  x86_unimpl("lock dec @ 0x10572325");
  /* 1057232c mov ebx, ecx */
  EBX = (ECX);
  /* 1057232e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10572330 call 0x10567500 */
  push32(0x10572335u); f_10567500();
  /* 10572335 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 1057233c mov ecx, ebx */
  ECX = (EBX);
L_1057233e:;
  /* 1057233e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10572340 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10572342 mov edi, edi */
  EDI = (EDI);
L_10572344:;
  /* 10572344 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10572346 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10572348 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1057234a je 0x1057236f */
  if (C.zf) goto L_1057236f;
  /* 1057234c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1057234e je 0x1057236f */
  if (C.zf) goto L_1057236f;
  /* 10572350 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10572351 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10572352 push ecx */
  push32((uint32_t)(ECX));
  /* 10572353 push eax */
  push32((uint32_t)(EAX));
  /* 10572354 push ebx */
  push32((uint32_t)(EBX));
  /* 10572355 call 0x10573340 */
  push32(0x1057235au); f_10573340();
  /* 1057235a mov ebx, eax */
  EBX = (EAX);
  /* 1057235c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1057235f call 0x10573340 */
  push32(0x10572364u); f_10573340();
  /* 10572364 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10572367 pop ecx */
  ECX = (pop32());
  /* 10572368 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1057236a jne 0x10572375 */
  if (!C.zf) goto L_10572375;
  /* 1057236c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1057236d jne 0x10572344 */
  if (!C.zf) goto L_10572344;
L_1057236f:;
  /* 1057236f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10572371 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10572373 je 0x1057237e */
  if (C.zf) goto L_1057237e;
L_10572375:;
  /* 10572375 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 1057237a jb 0x1057237e */
  if (C.cf) goto L_1057237e;
  /* 1057237c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_1057237e:;
  /* 1057237e pop eax */
  EAX = (pop32());
  /* 1057237f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10572381 jne 0x1057238c */
  if (!C.zf) goto L_1057238c;
  /* 10572383 lock dec dword ptr [0x1058f8a4] */
  x86_unimpl("lock dec @ 0x10572383");
  /* 1057238a jmp 0x1057239a */
  goto L_1057239a;
L_1057238c:;
  /* 1057238c mov ebx, ecx */
  EBX = (ECX);
  /* 1057238e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10572390 call 0x105675a0 */
  push32(0x10572395u); f_105675a0();
  /* 10572395 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10572398 mov ecx, ebx */
  ECX = (EBX);
L_1057239a:;
  /* 1057239a mov eax, ecx */
  EAX = (ECX);
  /* 1057239c pop ebx */
  EBX = (pop32());
  /* 1057239d pop esi */
  ESI = (pop32());
  /* 1057239e pop edi */
  EDI = (pop32());
  /* 1057239f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 105723a0 ret  */
  ESPCHK(0x105722a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100123b0 @ 0x105723b0 (255 bytes, 88 insns) */
void f_105723b0(void) {
  FTRACE(0x105723b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105723b0 push ebp */
  push32((uint32_t)(EBP));
  /* 105723b1 mov ebp, esp */
  EBP = (ESP);
  /* 105723b3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_105723b6:;
  /* 105723b6 cmp dword ptr [0x1058dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1058dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105723bd jle 0x105723d6 */
  if ((C.zf||C.sf!=C.of)) goto L_105723d6;
  /* 105723bf push 8 */
  push32((uint32_t)(0x8u));
  /* 105723c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105723c4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105723c6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 105723c8 push ecx */
  push32((uint32_t)(ECX));
  /* 105723c9 call 0x10569b10 */
  push32(0x105723ceu); f_10569b10();
  /* 105723ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105723d1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 105723d4 jmp 0x105723ef */
  goto L_105723ef;
L_105723d6:;
  /* 105723d6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105723d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105723db mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105723dd mov ecx, dword ptr [0x1058dc98] */
  ECX = (r32((uint32_t)(0x1058dc98)));
  /* 105723e3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105723e5 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 105723e9 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 105723ec mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_105723ef:;
  /* 105723ef cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105723f3 je 0x10572400 */
  if (C.zf) goto L_10572400;
  /* 105723f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105723f8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105723fb mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 105723fe jmp 0x105723b6 */
  goto L_105723b6;
L_10572400:;
  /* 10572400 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10572403 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10572405 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10572407 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1057240a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1057240d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10572410 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10572413 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10572416 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10572419 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1057241d je 0x10572425 */
  if (C.zf) goto L_10572425;
  /* 1057241f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10572423 jne 0x10572438 */
  if (!C.zf) goto L_10572438;
L_10572425:;
  /* 10572425 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10572428 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1057242a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1057242c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1057242f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10572432 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10572435 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10572438:;
  /* 10572438 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1057243f:;
  /* 1057243f cmp dword ptr [0x1058dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1058dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10572446 jle 0x1057245b */
  if ((C.zf||C.sf!=C.of)) goto L_1057245b;
  /* 10572448 push 4 */
  push32((uint32_t)(0x4u));
  /* 1057244a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1057244d push edx */
  push32((uint32_t)(EDX));
  /* 1057244e call 0x10569b10 */
  push32(0x10572453u); f_10569b10();
  /* 10572453 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10572456 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10572459 jmp 0x10572470 */
  goto L_10572470;
L_1057245b:;
  /* 1057245b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1057245e mov ecx, dword ptr [0x1058dc98] */
  ECX = (r32((uint32_t)(0x1058dc98)));
  /* 10572464 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10572466 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1057246a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1057246d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10572470:;
  /* 10572470 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10572474 je 0x1057249b */
  if (C.zf) goto L_1057249b;
  /* 10572476 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10572479 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1057247c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1057247f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 10572483 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10572486 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10572489 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1057248b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1057248d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10572490 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10572493 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10572496 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10572499 jmp 0x1057243f */
  goto L_1057243f;
L_1057249b:;
  /* 1057249b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1057249f jne 0x105724a8 */
  if (!C.zf) goto L_105724a8;
  /* 105724a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105724a4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 105724a6 jmp 0x105724ab */
  goto L_105724ab;
L_105724a8:;
  /* 105724a8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_105724ab:;
  /* 105724ab mov esp, ebp */
  ESP = (EBP);
  /* 105724ad pop ebp */
  EBP = (pop32());
  /* 105724ae ret  */
  ESPCHK(0x105723b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100124b0 @ 0x105724b0 (17 bytes, 8 insns) */
void f_105724b0(void) {
  FTRACE(0x105724b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105724b0 push ebp */
  push32((uint32_t)(EBP));
  /* 105724b1 mov ebp, esp */
  EBP = (ESP);
  /* 105724b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105724b6 push eax */
  push32((uint32_t)(EAX));
  /* 105724b7 call 0x105723b0 */
  push32(0x105724bcu); f_105723b0();
  /* 105724bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105724bf pop ebp */
  EBP = (pop32());
  /* 105724c0 ret  */
  ESPCHK(0x105724b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100124d0 @ 0x105724d0 (297 bytes, 106 insns) */
void f_105724d0(void) {
  FTRACE(0x105724d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105724d0 push ebp */
  push32((uint32_t)(EBP));
  /* 105724d1 mov ebp, esp */
  EBP = (ESP);
  /* 105724d3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105724d6 push esi */
  push32((uint32_t)(ESI));
L_105724d7:;
  /* 105724d7 cmp dword ptr [0x1058dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1058dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105724de jle 0x105724f7 */
  if ((C.zf||C.sf!=C.of)) goto L_105724f7;
  /* 105724e0 push 8 */
  push32((uint32_t)(0x8u));
  /* 105724e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105724e5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105724e7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 105724e9 push ecx */
  push32((uint32_t)(ECX));
  /* 105724ea call 0x10569b10 */
  push32(0x105724efu); f_10569b10();
  /* 105724ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105724f2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 105724f5 jmp 0x10572510 */
  goto L_10572510;
L_105724f7:;
  /* 105724f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105724fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105724fc mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105724fe mov ecx, dword ptr [0x1058dc98] */
  ECX = (r32((uint32_t)(0x1058dc98)));
  /* 10572504 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10572506 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1057250a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1057250d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10572510:;
  /* 10572510 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10572514 je 0x10572521 */
  if (C.zf) goto L_10572521;
  /* 10572516 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10572519 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1057251c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1057251f jmp 0x105724d7 */
  goto L_105724d7;
L_10572521:;
  /* 10572521 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10572524 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10572526 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10572528 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1057252b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1057252e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10572531 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10572534 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10572537 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1057253a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1057253e je 0x10572546 */
  if (C.zf) goto L_10572546;
  /* 10572540 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10572544 jne 0x10572559 */
  if (!C.zf) goto L_10572559;
L_10572546:;
  /* 10572546 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10572549 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1057254b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1057254d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10572550 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10572553 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10572556 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10572559:;
  /* 10572559 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10572560 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10572567:;
  /* 10572567 cmp dword ptr [0x1058dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1058dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1057256e jle 0x10572583 */
  if ((C.zf||C.sf!=C.of)) goto L_10572583;
  /* 10572570 push 4 */
  push32((uint32_t)(0x4u));
  /* 10572572 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10572575 push edx */
  push32((uint32_t)(EDX));
  /* 10572576 call 0x10569b10 */
  push32(0x1057257bu); f_10569b10();
  /* 1057257b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1057257e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10572581 jmp 0x10572598 */
  goto L_10572598;
L_10572583:;
  /* 10572583 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10572586 mov ecx, dword ptr [0x1058dc98] */
  ECX = (r32((uint32_t)(0x1058dc98)));
  /* 1057258c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1057258e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10572592 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10572595 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_10572598:;
  /* 10572598 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1057259c je 0x105725d9 */
  if (C.zf) goto L_105725d9;
  /* 1057259e push 0 */
  push32((uint32_t)(0x0u));
  /* 105725a0 push 0xa */
  push32((uint32_t)(0xau));
  /* 105725a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105725a5 push eax */
  push32((uint32_t)(EAX));
  /* 105725a6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105725a9 push ecx */
  push32((uint32_t)(ECX));
  /* 105725aa call 0x10573470 */
  push32(0x105725afu); f_10573470();
  /* 105725af mov ecx, eax */
  ECX = (EAX);
  /* 105725b1 mov esi, edx */
  ESI = (EDX);
  /* 105725b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105725b6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105725b9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 105725ba add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105725bc adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 105725be mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105725c1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 105725c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105725c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105725c9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105725cb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105725ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105725d1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105725d4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 105725d7 jmp 0x10572567 */
  goto L_10572567;
L_105725d9:;
  /* 105725d9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105725dd jne 0x105725ee */
  if (!C.zf) goto L_105725ee;
  /* 105725df mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105725e2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 105725e4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105725e7 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105725ea neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 105725ec jmp 0x105725f4 */
  goto L_105725f4;
L_105725ee:;
  /* 105725ee mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105725f1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_105725f4:;
  /* 105725f4 pop esi */
  ESI = (pop32());
  /* 105725f5 mov esp, ebp */
  ESP = (EBP);
  /* 105725f7 pop ebp */
  EBP = (pop32());
  /* 105725f8 ret  */
  ESPCHK(0x105724d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012600 @ 0x10572600 (61 bytes, 18 insns) */
void f_10572600(void) {
  FTRACE(0x10572600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10572600 push ebp */
  push32((uint32_t)(EBP));
  /* 10572601 mov ebp, esp */
  EBP = (ESP);
  /* 10572603 cmp dword ptr [0x1058f870], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f870))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1057260a jne 0x1057263b */
  if (!C.zf) goto L_1057263b;
  /* 1057260c push 0xb */
  push32((uint32_t)(0xbu));
  /* 1057260e call 0x10567500 */
  push32(0x10572613u); f_10567500();
  /* 10572613 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10572616 cmp dword ptr [0x1058f870], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f870))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1057261d jne 0x10572631 */
  if (!C.zf) goto L_10572631;
  /* 1057261f call 0x10572660 */
  push32(0x10572624u); f_10572660();
  /* 10572624 mov eax, dword ptr [0x1058f870] */
  EAX = (r32((uint32_t)(0x1058f870)));
  /* 10572629 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1057262c mov dword ptr [0x1058f870], eax */
  w32((uint32_t)(0x1058f870), (EAX));
L_10572631:;
  /* 10572631 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10572633 call 0x105675a0 */
  push32(0x10572638u); f_105675a0();
  /* 10572638 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1057263b:;
  /* 1057263b pop ebp */
  EBP = (pop32());
  /* 1057263c ret  */
  ESPCHK(0x10572600u, _esp0);
  ESP += 4; return;
}

/* FUN_10012640 @ 0x10572640 (30 bytes, 11 insns) */
void f_10572640(void) {
  FTRACE(0x10572640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10572640 push ebp */
  push32((uint32_t)(EBP));
  /* 10572641 mov ebp, esp */
  EBP = (ESP);
  /* 10572643 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10572645 call 0x10567500 */
  push32(0x1057264au); f_10567500();
  /* 1057264a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1057264d call 0x10572660 */
  push32(0x10572652u); f_10572660();
  /* 10572652 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10572654 call 0x105675a0 */
  push32(0x10572659u); f_105675a0();
  /* 10572659 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1057265c pop ebp */
  EBP = (pop32());
  /* 1057265d ret  */
  ESPCHK(0x10572640u, _esp0);
  ESP += 4; return;
}

/* FUN_10012660 @ 0x10572660 (939 bytes, 266 insns) */
void f_10572660(void) {
  FTRACE(0x10572660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10572660 push ebp */
  push32((uint32_t)(EBP));
  /* 10572661 mov ebp, esp */
  EBP = (ESP);
  /* 10572663 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10572666 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1057266d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1057266f call 0x10567500 */
  push32(0x10572674u); f_10567500();
  /* 10572674 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10572677 mov dword ptr [0x1058f7b8], 0 */
  w32((uint32_t)(0x1058f7b8), (0x0u));
  /* 10572681 mov dword ptr [0x1058ee38], 0xffffffff */
  w32((uint32_t)(0x1058ee38), (0xffffffffu));
  /* 1057268b mov eax, dword ptr [0x1058ee38] */
  EAX = (r32((uint32_t)(0x1058ee38)));
  /* 10572690 mov dword ptr [0x1058ee28], eax */
  w32((uint32_t)(0x1058ee28), (EAX));
  /* 10572695 push 0x1058ba30 */
  push32((uint32_t)(0x1058ba30u));
  /* 1057269a call 0x105734e0 */
  push32(0x1057269fu); f_105734e0();
  /* 1057269f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105726a2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105726a5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105726a9 jne 0x105727e3 */
  if (!C.zf) goto L_105727e3;
  /* 105726af push 0xc */
  push32((uint32_t)(0xcu));
  /* 105726b1 call 0x105675a0 */
  push32(0x105726b6u); f_105675a0();
  /* 105726b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105726b9 push 0x1058f7c0 */
  push32((uint32_t)(0x1058f7c0u));
  /* 105726be call dword ptr [0x10592280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592280))), 0x105726c4u);
  /* 105726c4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105726c7 je 0x105727de */
  if (C.zf) goto L_105727de;
  /* 105726cd mov dword ptr [0x1058f7b8], 1 */
  w32((uint32_t)(0x1058f7b8), (0x1u));
  /* 105726d7 mov ecx, dword ptr [0x1058f7c0] */
  ECX = (r32((uint32_t)(0x1058f7c0)));
  /* 105726dd imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105726e0 mov dword ptr [0x1058ed90], ecx */
  w32((uint32_t)(0x1058ed90), (ECX));
  /* 105726e6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105726e8 mov dx, word ptr [0x1058f806] */
  DX = (r16((uint32_t)(0x1058f806)));
  /* 105726ef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105726f1 je 0x10572709 */
  if (C.zf) goto L_10572709;
  /* 105726f3 mov eax, dword ptr [0x1058f814] */
  EAX = (r32((uint32_t)(0x1058f814)));
  /* 105726f8 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105726fb mov ecx, dword ptr [0x1058ed90] */
  ECX = (r32((uint32_t)(0x1058ed90)));
  /* 10572701 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10572703 mov dword ptr [0x1058ed90], ecx */
  w32((uint32_t)(0x1058ed90), (ECX));
L_10572709:;
  /* 10572709 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1057270b mov dx, word ptr [0x1058f85a] */
  DX = (r16((uint32_t)(0x1058f85a)));
  /* 10572712 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10572714 je 0x1057273e */
  if (C.zf) goto L_1057273e;
  /* 10572716 cmp dword ptr [0x1058f868], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f868))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1057271d je 0x1057273e */
  if (C.zf) goto L_1057273e;
  /* 1057271f mov dword ptr [0x1058ed94], 1 */
  w32((uint32_t)(0x1058ed94), (0x1u));
  /* 10572729 mov eax, dword ptr [0x1058f868] */
  EAX = (r32((uint32_t)(0x1058f868)));
  /* 1057272e sub eax, dword ptr [0x1058f814] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1058f814))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10572734 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10572737 mov dword ptr [0x1058ed98], eax */
  w32((uint32_t)(0x1058ed98), (EAX));
  /* 1057273c jmp 0x10572752 */
  goto L_10572752;
L_1057273e:;
  /* 1057273e mov dword ptr [0x1058ed94], 0 */
  w32((uint32_t)(0x1058ed94), (0x0u));
  /* 10572748 mov dword ptr [0x1058ed98], 0 */
  w32((uint32_t)(0x1058ed98), (0x0u));
L_10572752:;
  /* 10572752 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10572755 push ecx */
  push32((uint32_t)(ECX));
  /* 10572756 push 0 */
  push32((uint32_t)(0x0u));
  /* 10572758 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1057275a mov edx, dword ptr [0x1058ee1c] */
  EDX = (r32((uint32_t)(0x1058ee1c)));
  /* 10572760 push edx */
  push32((uint32_t)(EDX));
  /* 10572761 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10572763 push 0x1058f7c4 */
  push32((uint32_t)(0x1058f7c4u));
  /* 10572768 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1057276d mov eax, dword ptr [0x1058f728] */
  EAX = (r32((uint32_t)(0x1058f728)));
  /* 10572772 push eax */
  push32((uint32_t)(EAX));
  /* 10572773 call dword ptr [0x1059234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059234c))), 0x10572779u);
  /* 10572779 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1057277b je 0x1057278f */
  if (C.zf) goto L_1057278f;
  /* 1057277d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10572781 jne 0x1057278f */
  if (!C.zf) goto L_1057278f;
  /* 10572783 mov ecx, dword ptr [0x1058ee1c] */
  ECX = (r32((uint32_t)(0x1058ee1c)));
  /* 10572789 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 1057278d jmp 0x10572798 */
  goto L_10572798;
L_1057278f:;
  /* 1057278f mov edx, dword ptr [0x1058ee1c] */
  EDX = (r32((uint32_t)(0x1058ee1c)));
  /* 10572795 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10572798:;
  /* 10572798 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1057279b push eax */
  push32((uint32_t)(EAX));
  /* 1057279c push 0 */
  push32((uint32_t)(0x0u));
  /* 1057279e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 105727a0 mov ecx, dword ptr [0x1058ee20] */
  ECX = (r32((uint32_t)(0x1058ee20)));
  /* 105727a6 push ecx */
  push32((uint32_t)(ECX));
  /* 105727a7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 105727a9 push 0x1058f818 */
  push32((uint32_t)(0x1058f818u));
  /* 105727ae push 0x220 */
  push32((uint32_t)(0x220u));
  /* 105727b3 mov edx, dword ptr [0x1058f728] */
  EDX = (r32((uint32_t)(0x1058f728)));
  /* 105727b9 push edx */
  push32((uint32_t)(EDX));
  /* 105727ba call dword ptr [0x1059234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059234c))), 0x105727c0u);
  /* 105727c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105727c2 je 0x105727d5 */
  if (C.zf) goto L_105727d5;
  /* 105727c4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105727c8 jne 0x105727d5 */
  if (!C.zf) goto L_105727d5;
  /* 105727ca mov eax, dword ptr [0x1058ee20] */
  EAX = (r32((uint32_t)(0x1058ee20)));
  /* 105727cf mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 105727d3 jmp 0x105727de */
  goto L_105727de;
L_105727d5:;
  /* 105727d5 mov ecx, dword ptr [0x1058ee20] */
  ECX = (r32((uint32_t)(0x1058ee20)));
  /* 105727db mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_105727de:;
  /* 105727de jmp 0x10572a07 */
  goto L_10572a07;
L_105727e3:;
  /* 105727e3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105727e6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 105727e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105727eb je 0x1057280d */
  if (C.zf) goto L_1057280d;
  /* 105727ed cmp dword ptr [0x1058f86c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f86c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105727f4 je 0x1057281c */
  if (C.zf) goto L_1057281c;
  /* 105727f6 mov ecx, dword ptr [0x1058f86c] */
  ECX = (r32((uint32_t)(0x1058f86c)));
  /* 105727fc push ecx */
  push32((uint32_t)(ECX));
  /* 105727fd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10572800 push edx */
  push32((uint32_t)(EDX));
  /* 10572801 call 0x1056f790 */
  push32(0x10572806u); f_1056f790();
  /* 10572806 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10572809 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1057280b jne 0x1057281c */
  if (!C.zf) goto L_1057281c;
L_1057280d:;
  /* 1057280d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1057280f call 0x105675a0 */
  push32(0x10572814u); f_105675a0();
  /* 10572814 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10572817 jmp 0x10572a07 */
  goto L_10572a07;
L_1057281c:;
  /* 1057281c push 2 */
  push32((uint32_t)(0x2u));
  /* 1057281e mov eax, dword ptr [0x1058f86c] */
  EAX = (r32((uint32_t)(0x1058f86c)));
  /* 10572823 push eax */
  push32((uint32_t)(EAX));
  /* 10572824 call 0x10564590 */
  push32(0x10572829u); f_10564590();
  /* 10572829 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1057282c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 10572831 push 0x1058ba28 */
  push32((uint32_t)(0x1058ba28u));
  /* 10572836 push 2 */
  push32((uint32_t)(0x2u));
  /* 10572838 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1057283b push ecx */
  push32((uint32_t)(ECX));
  /* 1057283c call 0x10566930 */
  push32(0x10572841u); f_10566930();
  /* 10572841 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10572844 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10572847 push eax */
  push32((uint32_t)(EAX));
  /* 10572848 call 0x10563b00 */
  push32(0x1057284du); f_10563b00();
  /* 1057284d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10572850 mov dword ptr [0x1058f86c], eax */
  w32((uint32_t)(0x1058f86c), (EAX));
  /* 10572855 cmp dword ptr [0x1058f86c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f86c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1057285c jne 0x1057286d */
  if (!C.zf) goto L_1057286d;
  /* 1057285e push 0xc */
  push32((uint32_t)(0xcu));
  /* 10572860 call 0x105675a0 */
  push32(0x10572865u); f_105675a0();
  /* 10572865 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10572868 jmp 0x10572a07 */
  goto L_10572a07;
L_1057286d:;
  /* 1057286d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10572870 push edx */
  push32((uint32_t)(EDX));
  /* 10572871 mov eax, dword ptr [0x1058f86c] */
  EAX = (r32((uint32_t)(0x1058f86c)));
  /* 10572876 push eax */
  push32((uint32_t)(EAX));
  /* 10572877 call 0x10566ab0 */
  push32(0x1057287cu); f_10566ab0();
  /* 1057287c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1057287f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10572881 call 0x105675a0 */
  push32(0x10572886u); f_105675a0();
  /* 10572886 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10572889 push 3 */
  push32((uint32_t)(0x3u));
  /* 1057288b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1057288e push ecx */
  push32((uint32_t)(ECX));
  /* 1057288f mov edx, dword ptr [0x1058ee1c] */
  EDX = (r32((uint32_t)(0x1058ee1c)));
  /* 10572895 push edx */
  push32((uint32_t)(EDX));
  /* 10572896 call 0x10567320 */
  push32(0x1057289bu); f_10567320();
  /* 1057289b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1057289e mov eax, dword ptr [0x1058ee1c] */
  EAX = (r32((uint32_t)(0x1058ee1c)));
  /* 105728a3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 105728a7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105728aa add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105728ad mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105728b0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105728b3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 105728b6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105728b9 jne 0x105728cd */
  if (!C.zf) goto L_105728cd;
  /* 105728bb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105728be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105728c1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105728c4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105728c7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105728ca mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_105728cd:;
  /* 105728cd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105728d0 push eax */
  push32((uint32_t)(EAX));
  /* 105728d1 call 0x105723b0 */
  push32(0x105728d6u); f_105723b0();
  /* 105728d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105728d9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105728df mov dword ptr [0x1058ed90], eax */
  w32((uint32_t)(0x1058ed90), (EAX));
L_105728e4:;
  /* 105728e4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105728e7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 105728ea cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105728ed je 0x10572905 */
  if (C.zf) goto L_10572905;
  /* 105728ef mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105728f2 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105728f5 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105728f8 jl 0x10572910 */
  if ((C.sf!=C.of)) goto L_10572910;
  /* 105728fa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105728fd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10572900 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10572903 jg 0x10572910 */
  if ((!C.zf&&C.sf==C.of)) goto L_10572910;
L_10572905:;
  /* 10572905 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10572908 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1057290b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1057290e jmp 0x105728e4 */
  goto L_105728e4;
L_10572910:;
  /* 10572910 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10572913 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10572916 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10572919 jne 0x105729b5 */
  if (!C.zf) goto L_105729b5;
  /* 1057291f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10572922 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10572925 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10572928 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1057292b push edx */
  push32((uint32_t)(EDX));
  /* 1057292c call 0x105723b0 */
  push32(0x10572931u); f_105723b0();
  /* 10572931 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10572934 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10572937 mov ecx, dword ptr [0x1058ed90] */
  ECX = (r32((uint32_t)(0x1058ed90)));
  /* 1057293d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1057293f mov dword ptr [0x1058ed90], ecx */
  w32((uint32_t)(0x1058ed90), (ECX));
L_10572945:;
  /* 10572945 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10572948 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1057294b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1057294e jl 0x10572966 */
  if ((C.sf!=C.of)) goto L_10572966;
  /* 10572950 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10572953 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10572956 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10572959 jg 0x10572966 */
  if ((!C.zf&&C.sf==C.of)) goto L_10572966;
  /* 1057295b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1057295e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10572961 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10572964 jmp 0x10572945 */
  goto L_10572945;
L_10572966:;
  /* 10572966 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10572969 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1057296c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1057296f jne 0x105729b5 */
  if (!C.zf) goto L_105729b5;
  /* 10572971 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10572974 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10572977 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1057297a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1057297d push ecx */
  push32((uint32_t)(ECX));
  /* 1057297e call 0x105723b0 */
  push32(0x10572983u); f_105723b0();
  /* 10572983 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10572986 mov edx, dword ptr [0x1058ed90] */
  EDX = (r32((uint32_t)(0x1058ed90)));
  /* 1057298c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1057298e mov dword ptr [0x1058ed90], edx */
  w32((uint32_t)(0x1058ed90), (EDX));
L_10572994:;
  /* 10572994 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10572997 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1057299a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1057299d jl 0x105729b5 */
  if ((C.sf!=C.of)) goto L_105729b5;
  /* 1057299f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105729a2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 105729a5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105729a8 jg 0x105729b5 */
  if ((!C.zf&&C.sf==C.of)) goto L_105729b5;
  /* 105729aa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105729ad add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105729b0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105729b3 jmp 0x10572994 */
  goto L_10572994;
L_105729b5:;
  /* 105729b5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105729b9 je 0x105729c9 */
  if (C.zf) goto L_105729c9;
  /* 105729bb mov edx, dword ptr [0x1058ed90] */
  EDX = (r32((uint32_t)(0x1058ed90)));
  /* 105729c1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 105729c3 mov dword ptr [0x1058ed90], edx */
  w32((uint32_t)(0x1058ed90), (EDX));
L_105729c9:;
  /* 105729c9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105729cc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105729cf mov dword ptr [0x1058ed94], ecx */
  w32((uint32_t)(0x1058ed94), (ECX));
  /* 105729d5 cmp dword ptr [0x1058ed94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058ed94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105729dc je 0x105729fe */
  if (C.zf) goto L_105729fe;
  /* 105729de push 3 */
  push32((uint32_t)(0x3u));
  /* 105729e0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105729e3 push edx */
  push32((uint32_t)(EDX));
  /* 105729e4 mov eax, dword ptr [0x1058ee20] */
  EAX = (r32((uint32_t)(0x1058ee20)));
  /* 105729e9 push eax */
  push32((uint32_t)(EAX));
  /* 105729ea call 0x10567320 */
  push32(0x105729efu); f_10567320();
  /* 105729ef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105729f2 mov ecx, dword ptr [0x1058ee20] */
  ECX = (r32((uint32_t)(0x1058ee20)));
  /* 105729f8 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 105729fc jmp 0x10572a07 */
  goto L_10572a07;
L_105729fe:;
  /* 105729fe mov edx, dword ptr [0x1058ee20] */
  EDX = (r32((uint32_t)(0x1058ee20)));
  /* 10572a04 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10572a07:;
  /* 10572a07 mov esp, ebp */
  ESP = (EBP);
  /* 10572a09 pop ebp */
  EBP = (pop32());
  /* 10572a0a ret  */
  ESPCHK(0x10572660u, _esp0);
  ESP += 4; return;
}

/* FUN_10012a10 @ 0x10572a10 (46 bytes, 18 insns) */
void f_10572a10(void) {
  FTRACE(0x10572a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10572a10 push ebp */
  push32((uint32_t)(EBP));
  /* 10572a11 mov ebp, esp */
  EBP = (ESP);
  /* 10572a13 push ecx */
  push32((uint32_t)(ECX));
  /* 10572a14 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10572a16 call 0x10567500 */
  push32(0x10572a1bu); f_10567500();
  /* 10572a1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10572a1e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10572a21 push eax */
  push32((uint32_t)(EAX));
  /* 10572a22 call 0x10572a40 */
  push32(0x10572a27u); f_10572a40();
  /* 10572a27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10572a2a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10572a2d push 0xb */
  push32((uint32_t)(0xbu));
  /* 10572a2f call 0x105675a0 */
  push32(0x10572a34u); f_105675a0();
  /* 10572a34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10572a37 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10572a3a mov esp, ebp */
  ESP = (EBP);
  /* 10572a3c pop ebp */
  EBP = (pop32());
  /* 10572a3d ret  */
  ESPCHK(0x10572a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10012a40 @ 0x10572a40 (762 bytes, 246 insns) */
void f_10572a40(void) {
  FTRACE(0x10572a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10572a40 push ebp */
  push32((uint32_t)(EBP));
  /* 10572a41 mov ebp, esp */
  EBP = (ESP);
  /* 10572a43 push ecx */
  push32((uint32_t)(ECX));
  /* 10572a44 cmp dword ptr [0x1058ed94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058ed94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10572a4b jne 0x10572a54 */
  if (!C.zf) goto L_10572a54;
  /* 10572a4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10572a4f jmp 0x10572d36 */
  goto L_10572d36;
L_10572a54:;
  /* 10572a54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10572a57 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10572a5a cmp ecx, dword ptr [0x1058ee28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1058ee28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10572a60 jne 0x10572a74 */
  if (!C.zf) goto L_10572a74;
  /* 10572a62 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10572a65 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10572a68 cmp eax, dword ptr [0x1058ee38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1058ee38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10572a6e je 0x10572c3b */
  if (C.zf) goto L_10572c3b;
L_10572a74:;
  /* 10572a74 cmp dword ptr [0x1058f7b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f7b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10572a7b je 0x10572bf5 */
  if (C.zf) goto L_10572bf5;
  /* 10572a81 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10572a83 mov cx, word ptr [0x1058f858] */
  CX = (r16((uint32_t)(0x1058f858)));
  /* 10572a8a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10572a8c jne 0x10572ae9 */
  if (!C.zf) goto L_10572ae9;
  /* 10572a8e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10572a90 mov dx, word ptr [0x1058f866] */
  DX = (r16((uint32_t)(0x1058f866)));
  /* 10572a97 push edx */
  push32((uint32_t)(EDX));
  /* 10572a98 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10572a9a mov ax, word ptr [0x1058f864] */
  AX = (r16((uint32_t)(0x1058f864)));
  /* 10572aa0 push eax */
  push32((uint32_t)(EAX));
  /* 10572aa1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10572aa3 mov cx, word ptr [0x1058f862] */
  CX = (r16((uint32_t)(0x1058f862)));
  /* 10572aaa push ecx */
  push32((uint32_t)(ECX));
  /* 10572aab xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10572aad mov dx, word ptr [0x1058f860] */
  DX = (r16((uint32_t)(0x1058f860)));
  /* 10572ab4 push edx */
  push32((uint32_t)(EDX));
  /* 10572ab5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10572ab7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10572ab9 mov ax, word ptr [0x1058f85c] */
  AX = (r16((uint32_t)(0x1058f85c)));
  /* 10572abf push eax */
  push32((uint32_t)(EAX));
  /* 10572ac0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10572ac2 mov cx, word ptr [0x1058f85e] */
  CX = (r16((uint32_t)(0x1058f85e)));
  /* 10572ac9 push ecx */
  push32((uint32_t)(ECX));
  /* 10572aca xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10572acc mov dx, word ptr [0x1058f85a] */
  DX = (r16((uint32_t)(0x1058f85a)));
  /* 10572ad3 push edx */
  push32((uint32_t)(EDX));
  /* 10572ad4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10572ad7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10572ada push ecx */
  push32((uint32_t)(ECX));
  /* 10572adb push 1 */
  push32((uint32_t)(0x1u));
  /* 10572add push 1 */
  push32((uint32_t)(0x1u));
  /* 10572adf call 0x10572d40 */
  push32(0x10572ae4u); f_10572d40();
  /* 10572ae4 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10572ae7 jmp 0x10572b3a */
  goto L_10572b3a;
L_10572ae9:;
  /* 10572ae9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10572aeb mov dx, word ptr [0x1058f866] */
  DX = (r16((uint32_t)(0x1058f866)));
  /* 10572af2 push edx */
  push32((uint32_t)(EDX));
  /* 10572af3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10572af5 mov ax, word ptr [0x1058f864] */
  AX = (r16((uint32_t)(0x1058f864)));
  /* 10572afb push eax */
  push32((uint32_t)(EAX));
  /* 10572afc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10572afe mov cx, word ptr [0x1058f862] */
  CX = (r16((uint32_t)(0x1058f862)));
  /* 10572b05 push ecx */
  push32((uint32_t)(ECX));
  /* 10572b06 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10572b08 mov dx, word ptr [0x1058f860] */
  DX = (r16((uint32_t)(0x1058f860)));
  /* 10572b0f push edx */
  push32((uint32_t)(EDX));
  /* 10572b10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10572b12 mov ax, word ptr [0x1058f85e] */
  AX = (r16((uint32_t)(0x1058f85e)));
  /* 10572b18 push eax */
  push32((uint32_t)(EAX));
  /* 10572b19 push 0 */
  push32((uint32_t)(0x0u));
  /* 10572b1b push 0 */
  push32((uint32_t)(0x0u));
  /* 10572b1d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10572b1f mov cx, word ptr [0x1058f85a] */
  CX = (r16((uint32_t)(0x1058f85a)));
  /* 10572b26 push ecx */
  push32((uint32_t)(ECX));
  /* 10572b27 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10572b2a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10572b2d push eax */
  push32((uint32_t)(EAX));
  /* 10572b2e push 0 */
  push32((uint32_t)(0x0u));
  /* 10572b30 push 1 */
  push32((uint32_t)(0x1u));
  /* 10572b32 call 0x10572d40 */
  push32(0x10572b37u); f_10572d40();
  /* 10572b37 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10572b3a:;
  /* 10572b3a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10572b3c mov cx, word ptr [0x1058f804] */
  CX = (r16((uint32_t)(0x1058f804)));
  /* 10572b43 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10572b45 jne 0x10572ba2 */
  if (!C.zf) goto L_10572ba2;
  /* 10572b47 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10572b49 mov dx, word ptr [0x1058f812] */
  DX = (r16((uint32_t)(0x1058f812)));
  /* 10572b50 push edx */
  push32((uint32_t)(EDX));
  /* 10572b51 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10572b53 mov ax, word ptr [0x1058f810] */
  AX = (r16((uint32_t)(0x1058f810)));
  /* 10572b59 push eax */
  push32((uint32_t)(EAX));
  /* 10572b5a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10572b5c mov cx, word ptr [0x1058f80e] */
  CX = (r16((uint32_t)(0x1058f80e)));
  /* 10572b63 push ecx */
  push32((uint32_t)(ECX));
  /* 10572b64 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10572b66 mov dx, word ptr [0x1058f80c] */
  DX = (r16((uint32_t)(0x1058f80c)));
  /* 10572b6d push edx */
  push32((uint32_t)(EDX));
  /* 10572b6e push 0 */
  push32((uint32_t)(0x0u));
  /* 10572b70 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10572b72 mov ax, word ptr [0x1058f808] */
  AX = (r16((uint32_t)(0x1058f808)));
  /* 10572b78 push eax */
  push32((uint32_t)(EAX));
  /* 10572b79 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10572b7b mov cx, word ptr [0x1058f80a] */
  CX = (r16((uint32_t)(0x1058f80a)));
  /* 10572b82 push ecx */
  push32((uint32_t)(ECX));
  /* 10572b83 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10572b85 mov dx, word ptr [0x1058f806] */
  DX = (r16((uint32_t)(0x1058f806)));
  /* 10572b8c push edx */
  push32((uint32_t)(EDX));
  /* 10572b8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10572b90 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10572b93 push ecx */
  push32((uint32_t)(ECX));
  /* 10572b94 push 1 */
  push32((uint32_t)(0x1u));
  /* 10572b96 push 0 */
  push32((uint32_t)(0x0u));
  /* 10572b98 call 0x10572d40 */
  push32(0x10572b9du); f_10572d40();
  /* 10572b9d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10572ba0 jmp 0x10572bf3 */
  goto L_10572bf3;
L_10572ba2:;
  /* 10572ba2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10572ba4 mov dx, word ptr [0x1058f812] */
  DX = (r16((uint32_t)(0x1058f812)));
  /* 10572bab push edx */
  push32((uint32_t)(EDX));
  /* 10572bac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10572bae mov ax, word ptr [0x1058f810] */
  AX = (r16((uint32_t)(0x1058f810)));
  /* 10572bb4 push eax */
  push32((uint32_t)(EAX));
  /* 10572bb5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10572bb7 mov cx, word ptr [0x1058f80e] */
  CX = (r16((uint32_t)(0x1058f80e)));
  /* 10572bbe push ecx */
  push32((uint32_t)(ECX));
  /* 10572bbf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10572bc1 mov dx, word ptr [0x1058f80c] */
  DX = (r16((uint32_t)(0x1058f80c)));
  /* 10572bc8 push edx */
  push32((uint32_t)(EDX));
  /* 10572bc9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10572bcb mov ax, word ptr [0x1058f80a] */
  AX = (r16((uint32_t)(0x1058f80a)));
  /* 10572bd1 push eax */
  push32((uint32_t)(EAX));
  /* 10572bd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10572bd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10572bd6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10572bd8 mov cx, word ptr [0x1058f806] */
  CX = (r16((uint32_t)(0x1058f806)));
  /* 10572bdf push ecx */
  push32((uint32_t)(ECX));
  /* 10572be0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10572be3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10572be6 push eax */
  push32((uint32_t)(EAX));
  /* 10572be7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10572be9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10572beb call 0x10572d40 */
  push32(0x10572bf0u); f_10572d40();
  /* 10572bf0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10572bf3:;
  /* 10572bf3 jmp 0x10572c3b */
  goto L_10572c3b;
L_10572bf5:;
  /* 10572bf5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10572bf7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10572bf9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10572bfb push 2 */
  push32((uint32_t)(0x2u));
  /* 10572bfd push 0 */
  push32((uint32_t)(0x0u));
  /* 10572bff push 0 */
  push32((uint32_t)(0x0u));
  /* 10572c01 push 1 */
  push32((uint32_t)(0x1u));
  /* 10572c03 push 4 */
  push32((uint32_t)(0x4u));
  /* 10572c05 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10572c08 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10572c0b push edx */
  push32((uint32_t)(EDX));
  /* 10572c0c push 1 */
  push32((uint32_t)(0x1u));
  /* 10572c0e push 1 */
  push32((uint32_t)(0x1u));
  /* 10572c10 call 0x10572d40 */
  push32(0x10572c15u); f_10572d40();
  /* 10572c15 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10572c18 push 0 */
  push32((uint32_t)(0x0u));
  /* 10572c1a push 0 */
  push32((uint32_t)(0x0u));
  /* 10572c1c push 0 */
  push32((uint32_t)(0x0u));
  /* 10572c1e push 2 */
  push32((uint32_t)(0x2u));
  /* 10572c20 push 0 */
  push32((uint32_t)(0x0u));
  /* 10572c22 push 0 */
  push32((uint32_t)(0x0u));
  /* 10572c24 push 5 */
  push32((uint32_t)(0x5u));
  /* 10572c26 push 0xa */
  push32((uint32_t)(0xau));
  /* 10572c28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10572c2b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10572c2e push ecx */
  push32((uint32_t)(ECX));
  /* 10572c2f push 1 */
  push32((uint32_t)(0x1u));
  /* 10572c31 push 0 */
  push32((uint32_t)(0x0u));
  /* 10572c33 call 0x10572d40 */
  push32(0x10572c38u); f_10572d40();
  /* 10572c38 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10572c3b:;
  /* 10572c3b mov edx, dword ptr [0x1058ee2c] */
  EDX = (r32((uint32_t)(0x1058ee2c)));
  /* 10572c41 cmp edx, dword ptr [0x1058ee3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1058ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10572c47 jge 0x10572c94 */
  if ((C.sf==C.of)) goto L_10572c94;
  /* 10572c49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10572c4c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10572c4f cmp ecx, dword ptr [0x1058ee2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1058ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10572c55 jl 0x10572c65 */
  if ((C.sf!=C.of)) goto L_10572c65;
  /* 10572c57 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10572c5a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10572c5d cmp eax, dword ptr [0x1058ee3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1058ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10572c63 jle 0x10572c6c */
  if ((C.zf||C.sf!=C.of)) goto L_10572c6c;
L_10572c65:;
  /* 10572c65 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10572c67 jmp 0x10572d36 */
  goto L_10572d36;
L_10572c6c:;
  /* 10572c6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10572c6f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10572c72 cmp edx, dword ptr [0x1058ee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1058ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10572c78 jle 0x10572c92 */
  if ((C.zf||C.sf!=C.of)) goto L_10572c92;
  /* 10572c7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10572c7d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10572c80 cmp ecx, dword ptr [0x1058ee3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1058ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10572c86 jge 0x10572c92 */
  if ((C.sf==C.of)) goto L_10572c92;
  /* 10572c88 mov eax, 1 */
  EAX = (0x1u);
  /* 10572c8d jmp 0x10572d36 */
  goto L_10572d36;
L_10572c92:;
  /* 10572c92 jmp 0x10572cd7 */
  goto L_10572cd7;
L_10572c94:;
  /* 10572c94 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10572c97 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10572c9a cmp eax, dword ptr [0x1058ee3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1058ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10572ca0 jl 0x10572cb0 */
  if ((C.sf!=C.of)) goto L_10572cb0;
  /* 10572ca2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10572ca5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10572ca8 cmp edx, dword ptr [0x1058ee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1058ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10572cae jle 0x10572cb7 */
  if ((C.zf||C.sf!=C.of)) goto L_10572cb7;
L_10572cb0:;
  /* 10572cb0 mov eax, 1 */
  EAX = (0x1u);
  /* 10572cb5 jmp 0x10572d36 */
  goto L_10572d36;
L_10572cb7:;
  /* 10572cb7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10572cba mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10572cbd cmp ecx, dword ptr [0x1058ee3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1058ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10572cc3 jle 0x10572cd7 */
  if ((C.zf||C.sf!=C.of)) goto L_10572cd7;
  /* 10572cc5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10572cc8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10572ccb cmp eax, dword ptr [0x1058ee2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1058ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10572cd1 jge 0x10572cd7 */
  if ((C.sf==C.of)) goto L_10572cd7;
  /* 10572cd3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10572cd5 jmp 0x10572d36 */
  goto L_10572d36;
L_10572cd7:;
  /* 10572cd7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10572cda mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10572cdd imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10572ce0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10572ce3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10572ce5 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10572ce7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10572cea mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10572ced imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10572cf3 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10572cf5 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10572cfb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10572cfe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10572d01 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10572d04 cmp edx, dword ptr [0x1058ee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1058ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10572d0a jne 0x10572d22 */
  if (!C.zf) goto L_10572d22;
  /* 10572d0c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10572d0f cmp eax, dword ptr [0x1058ee30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1058ee30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10572d15 jl 0x10572d1e */
  if ((C.sf!=C.of)) goto L_10572d1e;
  /* 10572d17 mov eax, 1 */
  EAX = (0x1u);
  /* 10572d1c jmp 0x10572d36 */
  goto L_10572d36;
L_10572d1e:;
  /* 10572d1e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10572d20 jmp 0x10572d36 */
  goto L_10572d36;
L_10572d22:;
  /* 10572d22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10572d25 cmp ecx, dword ptr [0x1058ee40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1058ee40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10572d2b jge 0x10572d34 */
  if ((C.sf==C.of)) goto L_10572d34;
  /* 10572d2d mov eax, 1 */
  EAX = (0x1u);
  /* 10572d32 jmp 0x10572d36 */
  goto L_10572d36;
L_10572d34:;
  /* 10572d34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10572d36:;
  /* 10572d36 mov esp, ebp */
  ESP = (EBP);
  /* 10572d38 pop ebp */
  EBP = (pop32());
  /* 10572d39 ret  */
  ESPCHK(0x10572a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d40 @ 0x10572d40 (504 bytes, 145 insns) */
void f_10572d40(void) {
  FTRACE(0x10572d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10572d40 push ebp */
  push32((uint32_t)(EBP));
  /* 10572d41 mov ebp, esp */
  EBP = (ESP);
  /* 10572d43 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10572d46 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10572d4a jne 0x10572e1c */
  if (!C.zf) goto L_10572e1c;
  /* 10572d50 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10572d53 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10572d56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10572d58 jne 0x10572d69 */
  if (!C.zf) goto L_10572d69;
  /* 10572d5a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10572d5d mov edx, dword ptr [ecx*4 + 0x1058ee4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1058ee4c)));
  /* 10572d64 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10572d67 jmp 0x10572d76 */
  goto L_10572d76;
L_10572d69:;
  /* 10572d69 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10572d6c mov ecx, dword ptr [eax*4 + 0x1058ee80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1058ee80)));
  /* 10572d73 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10572d76:;
  /* 10572d76 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10572d79 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10572d7c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10572d7f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10572d82 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10572d85 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10572d8b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10572d8e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10572d90 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10572d93 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10572d96 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10572d99 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 10572d9d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10572d9e mov ecx, 7 */
  ECX = (0x7u);
  /* 10572da3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10572da5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10572da8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10572dab cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10572dae jge 0x10572dc9 */
  if ((C.sf==C.of)) goto L_10572dc9;
  /* 10572db0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10572db3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10572db6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10572db9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10572dbc imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10572dbf add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10572dc2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10572dc4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10572dc7 jmp 0x10572ddd */
  goto L_10572ddd;
L_10572dc9:;
  /* 10572dc9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10572dcc sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10572dcf mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10572dd2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10572dd5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10572dd8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10572dda mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10572ddd:;
  /* 10572ddd cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10572de1 jne 0x10572e1a */
  if (!C.zf) goto L_10572e1a;
  /* 10572de3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10572de6 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10572de9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10572deb jne 0x10572dfc */
  if (!C.zf) goto L_10572dfc;
  /* 10572ded mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10572df0 mov eax, dword ptr [edx*4 + 0x1058ee50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1058ee50)));
  /* 10572df7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10572dfa jmp 0x10572e09 */
  goto L_10572e09;
L_10572dfc:;
  /* 10572dfc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10572dff mov edx, dword ptr [ecx*4 + 0x1058ee84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1058ee84)));
  /* 10572e06 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10572e09:;
  /* 10572e09 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10572e0c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10572e0f jle 0x10572e1a */
  if ((C.zf||C.sf!=C.of)) goto L_10572e1a;
  /* 10572e11 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10572e14 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10572e17 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10572e1a:;
  /* 10572e1a jmp 0x10572e51 */
  goto L_10572e51;
L_10572e1c:;
  /* 10572e1c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10572e1f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10572e22 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10572e24 jne 0x10572e35 */
  if (!C.zf) goto L_10572e35;
  /* 10572e26 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10572e29 mov ecx, dword ptr [eax*4 + 0x1058ee4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1058ee4c)));
  /* 10572e30 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10572e33 jmp 0x10572e42 */
  goto L_10572e42;
L_10572e35:;
  /* 10572e35 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10572e38 mov eax, dword ptr [edx*4 + 0x1058ee80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1058ee80)));
  /* 10572e3f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10572e42:;
  /* 10572e42 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10572e45 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10572e48 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10572e4b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10572e4e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10572e51:;
  /* 10572e51 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10572e55 jne 0x10572e91 */
  if (!C.zf) goto L_10572e91;
  /* 10572e57 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10572e5a mov dword ptr [0x1058ee2c], eax */
  w32((uint32_t)(0x1058ee2c), (EAX));
  /* 10572e5f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10572e62 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10572e65 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10572e68 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10572e6a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10572e6d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10572e70 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10572e72 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10572e78 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10572e7b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10572e7d mov dword ptr [0x1058ee30], ecx */
  w32((uint32_t)(0x1058ee30), (ECX));
  /* 10572e83 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10572e86 mov dword ptr [0x1058ee28], edx */
  w32((uint32_t)(0x1058ee28), (EDX));
  /* 10572e8c jmp 0x10572f34 */
  goto L_10572f34;
L_10572e91:;
  /* 10572e91 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10572e94 mov dword ptr [0x1058ee3c], eax */
  w32((uint32_t)(0x1058ee3c), (EAX));
  /* 10572e99 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10572e9c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10572e9f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10572ea2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10572ea4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10572ea7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10572eaa add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10572eac imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10572eb2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10572eb5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10572eb7 mov dword ptr [0x1058ee40], ecx */
  w32((uint32_t)(0x1058ee40), (ECX));
  /* 10572ebd mov edx, dword ptr [0x1058ed98] */
  EDX = (r32((uint32_t)(0x1058ed98)));
  /* 10572ec3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10572ec9 mov eax, dword ptr [0x1058ee40] */
  EAX = (r32((uint32_t)(0x1058ee40)));
  /* 10572ece add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10572ed0 mov dword ptr [0x1058ee40], eax */
  w32((uint32_t)(0x1058ee40), (EAX));
  /* 10572ed5 cmp dword ptr [0x1058ee40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058ee40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10572edc jge 0x10572f01 */
  if ((C.sf==C.of)) goto L_10572f01;
  /* 10572ede mov ecx, dword ptr [0x1058ee40] */
  ECX = (r32((uint32_t)(0x1058ee40)));
  /* 10572ee4 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10572eea mov dword ptr [0x1058ee40], ecx */
  w32((uint32_t)(0x1058ee40), (ECX));
  /* 10572ef0 mov edx, dword ptr [0x1058ee3c] */
  EDX = (r32((uint32_t)(0x1058ee3c)));
  /* 10572ef6 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10572ef9 mov dword ptr [0x1058ee3c], edx */
  w32((uint32_t)(0x1058ee3c), (EDX));
  /* 10572eff jmp 0x10572f2b */
  goto L_10572f2b;
L_10572f01:;
  /* 10572f01 cmp dword ptr [0x1058ee40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x1058ee40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10572f0b jl 0x10572f2b */
  if ((C.sf!=C.of)) goto L_10572f2b;
  /* 10572f0d mov eax, dword ptr [0x1058ee40] */
  EAX = (r32((uint32_t)(0x1058ee40)));
  /* 10572f12 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10572f17 mov dword ptr [0x1058ee40], eax */
  w32((uint32_t)(0x1058ee40), (EAX));
  /* 10572f1c mov ecx, dword ptr [0x1058ee3c] */
  ECX = (r32((uint32_t)(0x1058ee3c)));
  /* 10572f22 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10572f25 mov dword ptr [0x1058ee3c], ecx */
  w32((uint32_t)(0x1058ee3c), (ECX));
L_10572f2b:;
  /* 10572f2b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10572f2e mov dword ptr [0x1058ee38], edx */
  w32((uint32_t)(0x1058ee38), (EDX));
L_10572f34:;
  /* 10572f34 mov esp, ebp */
  ESP = (EBP);
  /* 10572f36 pop ebp */
  EBP = (pop32());
  /* 10572f37 ret  */
  ESPCHK(0x10572d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f40 @ 0x10572f40 (382 bytes, 135 insns) */
void f_10572f40(void) {
  FTRACE(0x10572f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10572f40 push ebp */
  push32((uint32_t)(EBP));
  /* 10572f41 mov ebp, esp */
  EBP = (ESP);
  /* 10572f43 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10572f45 push 0x1058ba38 */
  push32((uint32_t)(0x1058ba38u));
  /* 10572f4a push 0x1056cc08 */
  push32((uint32_t)(0x1056cc08u));
  /* 10572f4f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10572f55 push eax */
  push32((uint32_t)(EAX));
  /* 10572f56 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10572f5d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10572f60 push ebx */
  push32((uint32_t)(EBX));
  /* 10572f61 push esi */
  push32((uint32_t)(ESI));
  /* 10572f62 push edi */
  push32((uint32_t)(EDI));
  /* 10572f63 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10572f66 cmp dword ptr [0x1058f874], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f874))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10572f6d jne 0x10572fb2 */
  if (!C.zf) goto L_10572fb2;
  /* 10572f6f push 0 */
  push32((uint32_t)(0x0u));
  /* 10572f71 push 0 */
  push32((uint32_t)(0x0u));
  /* 10572f73 push 1 */
  push32((uint32_t)(0x1u));
  /* 10572f75 push 0 */
  push32((uint32_t)(0x0u));
  /* 10572f77 call dword ptr [0x1059227c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059227c))), 0x10572f7du);
  /* 10572f7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10572f7f je 0x10572f8d */
  if (C.zf) goto L_10572f8d;
  /* 10572f81 mov dword ptr [0x1058f874], 1 */
  w32((uint32_t)(0x1058f874), (0x1u));
  /* 10572f8b jmp 0x10572fb2 */
  goto L_10572fb2;
L_10572f8d:;
  /* 10572f8d push 0 */
  push32((uint32_t)(0x0u));
  /* 10572f8f push 0 */
  push32((uint32_t)(0x0u));
  /* 10572f91 push 1 */
  push32((uint32_t)(0x1u));
  /* 10572f93 push 0 */
  push32((uint32_t)(0x0u));
  /* 10572f95 call dword ptr [0x10592294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592294))), 0x10572f9bu);
  /* 10572f9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10572f9d je 0x10572fab */
  if (C.zf) goto L_10572fab;
  /* 10572f9f mov dword ptr [0x1058f874], 2 */
  w32((uint32_t)(0x1058f874), (0x2u));
  /* 10572fa9 jmp 0x10572fb2 */
  goto L_10572fb2;
L_10572fab:;
  /* 10572fab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10572fad jmp 0x105730c1 */
  goto L_105730c1;
L_10572fb2:;
  /* 10572fb2 cmp dword ptr [0x1058f874], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1058f874))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10572fb9 jne 0x10572fd6 */
  if (!C.zf) goto L_10572fd6;
  /* 10572fbb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10572fbe push eax */
  push32((uint32_t)(EAX));
  /* 10572fbf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10572fc2 push ecx */
  push32((uint32_t)(ECX));
  /* 10572fc3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10572fc6 push edx */
  push32((uint32_t)(EDX));
  /* 10572fc7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10572fca push eax */
  push32((uint32_t)(EAX));
  /* 10572fcb call dword ptr [0x1059227c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059227c))), 0x10572fd1u);
  /* 10572fd1 jmp 0x105730c1 */
  goto L_105730c1;
L_10572fd6:;
  /* 10572fd6 cmp dword ptr [0x1058f874], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1058f874))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10572fdd jne 0x105730bf */
  if (!C.zf) goto L_105730bf;
  /* 10572fe3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10572fe7 jne 0x10572ff2 */
  if (!C.zf) goto L_10572ff2;
  /* 10572fe9 mov ecx, dword ptr [0x1058f728] */
  ECX = (r32((uint32_t)(0x1058f728)));
  /* 10572fef mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10572ff2:;
  /* 10572ff2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10572ff4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10572ff6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10572ff9 push edx */
  push32((uint32_t)(EDX));
  /* 10572ffa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10572ffd push eax */
  push32((uint32_t)(EAX));
  /* 10572ffe call dword ptr [0x10592294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592294))), 0x10573004u);
  /* 10573004 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10573007 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1057300b jne 0x10573014 */
  if (!C.zf) goto L_10573014;
  /* 1057300d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1057300f jmp 0x105730c1 */
  goto L_105730c1;
L_10573014:;
  /* 10573014 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1057301b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1057301e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10573021 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10573023 call 0x10566ca0 */
  push32(0x10573028u); f_10566ca0();
  /* 10573028 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 1057302b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1057302e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10573031 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10573034 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1057303b jmp 0x10573054 */
  goto L_10573054;
  /* 1057303d mov eax, 1 */
  EAX = (0x1u);
  /* 10573042 ret  */
  ESPCHK(0x10572f40u, _esp0);
  ESP += 4; return;
  /* 10573043 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10573046 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1057304d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10573054:;
  /* 10573054 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10573058 jne 0x1057305e */
  if (!C.zf) goto L_1057305e;
  /* 1057305a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1057305c jmp 0x105730c1 */
  goto L_105730c1;
L_1057305e:;
  /* 1057305e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10573061 push edx */
  push32((uint32_t)(EDX));
  /* 10573062 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10573065 push eax */
  push32((uint32_t)(EAX));
  /* 10573066 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10573069 push ecx */
  push32((uint32_t)(ECX));
  /* 1057306a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1057306d push edx */
  push32((uint32_t)(EDX));
  /* 1057306e call dword ptr [0x10592294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592294))), 0x10573074u);
  /* 10573074 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10573076 jne 0x1057307c */
  if (!C.zf) goto L_1057307c;
  /* 10573078 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1057307a jmp 0x105730c1 */
  goto L_105730c1;
L_1057307c:;
  /* 1057307c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10573080 jne 0x1057309d */
  if (!C.zf) goto L_1057309d;
  /* 10573082 push 0 */
  push32((uint32_t)(0x0u));
  /* 10573084 push 0 */
  push32((uint32_t)(0x0u));
  /* 10573086 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10573088 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1057308b push eax */
  push32((uint32_t)(EAX));
  /* 1057308c push 1 */
  push32((uint32_t)(0x1u));
  /* 1057308e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10573091 push ecx */
  push32((uint32_t)(ECX));
  /* 10573092 call dword ptr [0x105922c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922c4))), 0x10573098u);
  /* 10573098 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1057309b jmp 0x105730ba */
  goto L_105730ba;
L_1057309d:;
  /* 1057309d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105730a0 push edx */
  push32((uint32_t)(EDX));
  /* 105730a1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105730a4 push eax */
  push32((uint32_t)(EAX));
  /* 105730a5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 105730a7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105730aa push ecx */
  push32((uint32_t)(ECX));
  /* 105730ab push 1 */
  push32((uint32_t)(0x1u));
  /* 105730ad mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105730b0 push edx */
  push32((uint32_t)(EDX));
  /* 105730b1 call dword ptr [0x105922c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922c4))), 0x105730b7u);
  /* 105730b7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_105730ba:;
  /* 105730ba mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 105730bd jmp 0x105730c1 */
  goto L_105730c1;
L_105730bf:;
  /* 105730bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105730c1:;
  /* 105730c1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 105730c4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105730c7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 105730ce pop edi */
  EDI = (pop32());
  /* 105730cf pop esi */
  ESI = (pop32());
  /* 105730d0 pop ebx */
  EBX = (pop32());
  /* 105730d1 mov esp, ebp */
  ESP = (EBP);
  /* 105730d3 pop ebp */
  EBP = (pop32());
  /* 105730d4 ret  */
  ESPCHK(0x10572f40u, _esp0);
  ESP += 4; return;
}

/* FUN_100130e0 @ 0x105730e0 (398 bytes, 140 insns) */
void f_105730e0(void) {
  FTRACE(0x105730e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105730e0 push ebp */
  push32((uint32_t)(EBP));
  /* 105730e1 mov ebp, esp */
  EBP = (ESP);
  /* 105730e3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 105730e5 push 0x1058ba48 */
  push32((uint32_t)(0x1058ba48u));
  /* 105730ea push 0x1056cc08 */
  push32((uint32_t)(0x1056cc08u));
  /* 105730ef mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 105730f5 push eax */
  push32((uint32_t)(EAX));
  /* 105730f6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 105730fd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10573100 push ebx */
  push32((uint32_t)(EBX));
  /* 10573101 push esi */
  push32((uint32_t)(ESI));
  /* 10573102 push edi */
  push32((uint32_t)(EDI));
  /* 10573103 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10573106 cmp dword ptr [0x1058f878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1057310d jne 0x10573152 */
  if (!C.zf) goto L_10573152;
  /* 1057310f push 0 */
  push32((uint32_t)(0x0u));
  /* 10573111 push 0 */
  push32((uint32_t)(0x0u));
  /* 10573113 push 1 */
  push32((uint32_t)(0x1u));
  /* 10573115 push 0 */
  push32((uint32_t)(0x0u));
  /* 10573117 call dword ptr [0x1059227c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059227c))), 0x1057311du);
  /* 1057311d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1057311f je 0x1057312d */
  if (C.zf) goto L_1057312d;
  /* 10573121 mov dword ptr [0x1058f878], 1 */
  w32((uint32_t)(0x1058f878), (0x1u));
  /* 1057312b jmp 0x10573152 */
  goto L_10573152;
L_1057312d:;
  /* 1057312d push 0 */
  push32((uint32_t)(0x0u));
  /* 1057312f push 0 */
  push32((uint32_t)(0x0u));
  /* 10573131 push 1 */
  push32((uint32_t)(0x1u));
  /* 10573133 push 0 */
  push32((uint32_t)(0x0u));
  /* 10573135 call dword ptr [0x10592294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592294))), 0x1057313bu);
  /* 1057313b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1057313d je 0x1057314b */
  if (C.zf) goto L_1057314b;
  /* 1057313f mov dword ptr [0x1058f878], 2 */
  w32((uint32_t)(0x1058f878), (0x2u));
  /* 10573149 jmp 0x10573152 */
  goto L_10573152;
L_1057314b:;
  /* 1057314b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1057314d jmp 0x10573271 */
  goto L_10573271;
L_10573152:;
  /* 10573152 cmp dword ptr [0x1058f878], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1058f878))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10573159 jne 0x10573176 */
  if (!C.zf) goto L_10573176;
  /* 1057315b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1057315e push eax */
  push32((uint32_t)(EAX));
  /* 1057315f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10573162 push ecx */
  push32((uint32_t)(ECX));
  /* 10573163 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10573166 push edx */
  push32((uint32_t)(EDX));
  /* 10573167 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1057316a push eax */
  push32((uint32_t)(EAX));
  /* 1057316b call dword ptr [0x10592294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592294))), 0x10573171u);
  /* 10573171 jmp 0x10573271 */
  goto L_10573271;
L_10573176:;
  /* 10573176 cmp dword ptr [0x1058f878], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1058f878))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1057317d jne 0x1057326f */
  if (!C.zf) goto L_1057326f;
  /* 10573183 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10573187 jne 0x10573192 */
  if (!C.zf) goto L_10573192;
  /* 10573189 mov ecx, dword ptr [0x1058f728] */
  ECX = (r32((uint32_t)(0x1058f728)));
  /* 1057318f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10573192:;
  /* 10573192 push 0 */
  push32((uint32_t)(0x0u));
  /* 10573194 push 0 */
  push32((uint32_t)(0x0u));
  /* 10573196 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10573199 push edx */
  push32((uint32_t)(EDX));
  /* 1057319a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1057319d push eax */
  push32((uint32_t)(EAX));
  /* 1057319e call dword ptr [0x1059227c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059227c))), 0x105731a4u);
  /* 105731a4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 105731a7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105731ab jne 0x105731b4 */
  if (!C.zf) goto L_105731b4;
  /* 105731ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105731af jmp 0x10573271 */
  goto L_10573271;
L_105731b4:;
  /* 105731b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105731bb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105731be shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 105731c0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105731c3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 105731c5 call 0x10566ca0 */
  push32(0x105731cau); f_10566ca0();
  /* 105731ca mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 105731cd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 105731d0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 105731d3 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 105731d6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 105731dd jmp 0x105731f6 */
  goto L_105731f6;
  /* 105731df mov eax, 1 */
  EAX = (0x1u);
  /* 105731e4 ret  */
  ESPCHK(0x105730e0u, _esp0);
  ESP += 4; return;
  /* 105731e5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 105731e8 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 105731ef mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_105731f6:;
  /* 105731f6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105731fa jne 0x10573200 */
  if (!C.zf) goto L_10573200;
  /* 105731fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105731fe jmp 0x10573271 */
  goto L_10573271;
L_10573200:;
  /* 10573200 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10573203 push edx */
  push32((uint32_t)(EDX));
  /* 10573204 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10573207 push eax */
  push32((uint32_t)(EAX));
  /* 10573208 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1057320b push ecx */
  push32((uint32_t)(ECX));
  /* 1057320c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1057320f push edx */
  push32((uint32_t)(EDX));
  /* 10573210 call dword ptr [0x1059227c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059227c))), 0x10573216u);
  /* 10573216 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10573218 jne 0x1057321e */
  if (!C.zf) goto L_1057321e;
  /* 1057321a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1057321c jmp 0x10573271 */
  goto L_10573271;
L_1057321e:;
  /* 1057321e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10573222 jne 0x10573246 */
  if (!C.zf) goto L_10573246;
  /* 10573224 push 0 */
  push32((uint32_t)(0x0u));
  /* 10573226 push 0 */
  push32((uint32_t)(0x0u));
  /* 10573228 push 0 */
  push32((uint32_t)(0x0u));
  /* 1057322a push 0 */
  push32((uint32_t)(0x0u));
  /* 1057322c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1057322e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10573231 push eax */
  push32((uint32_t)(EAX));
  /* 10573232 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10573237 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1057323a push ecx */
  push32((uint32_t)(ECX));
  /* 1057323b call dword ptr [0x1059234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059234c))), 0x10573241u);
  /* 10573241 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10573244 jmp 0x1057326a */
  goto L_1057326a;
L_10573246:;
  /* 10573246 push 0 */
  push32((uint32_t)(0x0u));
  /* 10573248 push 0 */
  push32((uint32_t)(0x0u));
  /* 1057324a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1057324d push edx */
  push32((uint32_t)(EDX));
  /* 1057324e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10573251 push eax */
  push32((uint32_t)(EAX));
  /* 10573252 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10573254 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10573257 push ecx */
  push32((uint32_t)(ECX));
  /* 10573258 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1057325d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10573260 push edx */
  push32((uint32_t)(EDX));
  /* 10573261 call dword ptr [0x1059234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059234c))), 0x10573267u);
  /* 10573267 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1057326a:;
  /* 1057326a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1057326d jmp 0x10573271 */
  goto L_10573271;
L_1057326f:;
  /* 1057326f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10573271:;
  /* 10573271 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10573274 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10573277 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1057327e pop edi */
  EDI = (pop32());
  /* 1057327f pop esi */
  ESI = (pop32());
  /* 10573280 pop ebx */
  EBX = (pop32());
  /* 10573281 mov esp, ebp */
  ESP = (EBP);
  /* 10573283 pop ebp */
  EBP = (pop32());
  /* 10573284 ret  */
  ESPCHK(0x105730e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013290 @ 0x10573290 (11 bytes, 6 insns) */
void f_10573290(void) {
  FTRACE(0x10573290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10573290 push ebp */
  push32((uint32_t)(EBP));
  /* 10573291 mov ebp, esp */
  EBP = (ESP);
  /* 10573293 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10573296 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10573299 pop ebp */
  EBP = (pop32());
  /* 1057329a ret  */
  ESPCHK(0x10573290u, _esp0);
  ESP += 4; return;
}

/* FUN_100132a0 @ 0x105732a0 (147 bytes, 43 insns) */
void f_105732a0(void) {
  FTRACE(0x105732a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105732a0 push ebp */
  push32((uint32_t)(EBP));
  /* 105732a1 mov ebp, esp */
  EBP = (ESP);
  /* 105732a3 push ecx */
  push32((uint32_t)(ECX));
  /* 105732a4 cmp dword ptr [0x1058f718], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f718))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105732ab jne 0x105732c7 */
  if (!C.zf) goto L_105732c7;
  /* 105732ad cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105732b1 jl 0x105732c2 */
  if ((C.sf!=C.of)) goto L_105732c2;
  /* 105732b3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105732b7 jg 0x105732c2 */
  if ((!C.zf&&C.sf==C.of)) goto L_105732c2;
  /* 105732b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105732bc add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105732bf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_105732c2:;
  /* 105732c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105732c5 jmp 0x1057332f */
  goto L_1057332f;
L_105732c7:;
  /* 105732c7 push 0x1058f8a4 */
  push32((uint32_t)(0x1058f8a4u));
  /* 105732cc call dword ptr [0x105922f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922f4))), 0x105732d2u);
  /* 105732d2 cmp dword ptr [0x1058f894], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f894))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105732d9 je 0x105732f9 */
  if (C.zf) goto L_105732f9;
  /* 105732db push 0x1058f8a4 */
  push32((uint32_t)(0x1058f8a4u));
  /* 105732e0 call dword ptr [0x105922e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922e4))), 0x105732e6u);
  /* 105732e6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 105732e8 call 0x10567500 */
  push32(0x105732edu); f_10567500();
  /* 105732ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105732f0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 105732f7 jmp 0x10573300 */
  goto L_10573300;
L_105732f9:;
  /* 105732f9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10573300:;
  /* 10573300 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10573303 push ecx */
  push32((uint32_t)(ECX));
  /* 10573304 call 0x10573340 */
  push32(0x10573309u); f_10573340();
  /* 10573309 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1057330c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1057330f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10573313 je 0x10573321 */
  if (C.zf) goto L_10573321;
  /* 10573315 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10573317 call 0x105675a0 */
  push32(0x1057331cu); f_105675a0();
  /* 1057331c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1057331f jmp 0x1057332c */
  goto L_1057332c;
L_10573321:;
  /* 10573321 push 0x1058f8a4 */
  push32((uint32_t)(0x1058f8a4u));
  /* 10573326 call dword ptr [0x105922e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922e4))), 0x1057332cu);
L_1057332c:;
  /* 1057332c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1057332f:;
  /* 1057332f mov esp, ebp */
  ESP = (EBP);
  /* 10573331 pop ebp */
  EBP = (pop32());
  /* 10573332 ret  */
  ESPCHK(0x105732a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013340 @ 0x10573340 (299 bytes, 91 insns) */
void f_10573340(void) {
  FTRACE(0x10573340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10573340 push ebp */
  push32((uint32_t)(EBP));
  /* 10573341 mov ebp, esp */
  EBP = (ESP);
  /* 10573343 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10573346 cmp dword ptr [0x1058f718], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f718))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1057334d jne 0x1057336c */
  if (!C.zf) goto L_1057336c;
  /* 1057334f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10573353 jl 0x10573364 */
  if ((C.sf!=C.of)) goto L_10573364;
  /* 10573355 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10573359 jg 0x10573364 */
  if ((!C.zf&&C.sf==C.of)) goto L_10573364;
  /* 1057335b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1057335e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10573361 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10573364:;
  /* 10573364 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10573367 jmp 0x10573467 */
  goto L_10573467;
L_1057336c:;
  /* 1057336c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10573373 jge 0x105733b3 */
  if ((C.sf==C.of)) goto L_105733b3;
  /* 10573375 cmp dword ptr [0x1058dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1058dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1057337c jle 0x10573391 */
  if ((C.zf||C.sf!=C.of)) goto L_10573391;
  /* 1057337e push 1 */
  push32((uint32_t)(0x1u));
  /* 10573380 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10573383 push ecx */
  push32((uint32_t)(ECX));
  /* 10573384 call 0x10569b10 */
  push32(0x10573389u); f_10569b10();
  /* 10573389 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1057338c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1057338f jmp 0x105733a5 */
  goto L_105733a5;
L_10573391:;
  /* 10573391 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10573394 mov eax, dword ptr [0x1058dc98] */
  EAX = (r32((uint32_t)(0x1058dc98)));
  /* 10573399 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1057339b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1057339f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 105733a2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_105733a5:;
  /* 105733a5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105733a9 jne 0x105733b3 */
  if (!C.zf) goto L_105733b3;
  /* 105733ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105733ae jmp 0x10573467 */
  goto L_10573467;
L_105733b3:;
  /* 105733b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105733b6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 105733b9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 105733bf and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 105733c5 mov eax, dword ptr [0x1058dc98] */
  EAX = (r32((uint32_t)(0x1058dc98)));
  /* 105733ca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105733cc mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 105733d0 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 105733d6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105733d8 je 0x105733fc */
  if (C.zf) goto L_105733fc;
  /* 105733da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105733dd sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 105733e0 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 105733e6 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 105733e9 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 105733ec mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 105733ef mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 105733f3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 105733fa jmp 0x1057340d */
  goto L_1057340d;
L_105733fc:;
  /* 105733fc mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 105733ff mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10573402 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 10573406 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_1057340d:;
  /* 1057340d push 1 */
  push32((uint32_t)(0x1u));
  /* 1057340f push 0 */
  push32((uint32_t)(0x0u));
  /* 10573411 push 3 */
  push32((uint32_t)(0x3u));
  /* 10573413 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10573416 push edx */
  push32((uint32_t)(EDX));
  /* 10573417 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1057341a push eax */
  push32((uint32_t)(EAX));
  /* 1057341b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 1057341e push ecx */
  push32((uint32_t)(ECX));
  /* 1057341f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10573424 mov edx, dword ptr [0x1058f718] */
  EDX = (r32((uint32_t)(0x1058f718)));
  /* 1057342a push edx */
  push32((uint32_t)(EDX));
  /* 1057342b call 0x1056bef0 */
  push32(0x10573430u); f_1056bef0();
  /* 10573430 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10573433 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10573436 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1057343a jne 0x10573441 */
  if (!C.zf) goto L_10573441;
  /* 1057343c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1057343f jmp 0x10573467 */
  goto L_10573467;
L_10573441:;
  /* 10573441 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10573445 jne 0x10573451 */
  if (!C.zf) goto L_10573451;
  /* 10573447 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1057344a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1057344f jmp 0x10573467 */
  goto L_10573467;
L_10573451:;
  /* 10573451 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10573454 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10573459 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 1057345c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10573462 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10573465 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_10573467:;
  /* 10573467 mov esp, ebp */
  ESP = (EBP);
  /* 10573469 pop ebp */
  EBP = (pop32());
  /* 1057346a ret  */
  ESPCHK(0x10573340u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x10573470 (52 bytes, 19 insns) */
void f_10573470(void) {
  FTRACE(0x10573470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10573470 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10573474 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10573478 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1057347a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1057347e jne 0x10573489 */
  if (!C.zf) goto L_10573489;
  /* 10573480 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10573484 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10573486 ret 0x10 */
  ESPCHK(0x10573470u, _esp0);
  ESP += 20; return;
L_10573489:;
  /* 10573489 push ebx */
  push32((uint32_t)(EBX));
  /* 1057348a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1057348c mov ebx, eax */
  EBX = (EAX);
  /* 1057348e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10573492 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10573496 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10573498 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1057349c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1057349e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105734a0 pop ebx */
  EBX = (pop32());
  /* 105734a1 ret 0x10 */
  ESPCHK(0x10573470u, _esp0);
  ESP += 20; return;
}

/* FUN_100134b0 @ 0x105734b0 (46 bytes, 18 insns) */
void f_105734b0(void) {
  FTRACE(0x105734b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105734b0 push ebp */
  push32((uint32_t)(EBP));
  /* 105734b1 mov ebp, esp */
  EBP = (ESP);
  /* 105734b3 push ecx */
  push32((uint32_t)(ECX));
  /* 105734b4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 105734b6 call 0x10567500 */
  push32(0x105734bbu); f_10567500();
  /* 105734bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105734be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105734c1 push eax */
  push32((uint32_t)(EAX));
  /* 105734c2 call 0x105734e0 */
  push32(0x105734c7u); f_105734e0();
  /* 105734c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105734ca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105734cd push 0xc */
  push32((uint32_t)(0xcu));
  /* 105734cf call 0x105675a0 */
  push32(0x105734d4u); f_105675a0();
  /* 105734d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105734d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105734da mov esp, ebp */
  ESP = (EBP);
  /* 105734dc pop ebp */
  EBP = (pop32());
  /* 105734dd ret  */
  ESPCHK(0x105734b0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x105734e0 (198 bytes, 69 insns) */
void f_105734e0(void) {
  FTRACE(0x105734e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105734e0 push ebp */
  push32((uint32_t)(EBP));
  /* 105734e1 mov ebp, esp */
  EBP = (ESP);
  /* 105734e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105734e6 mov eax, dword ptr [0x1058f534] */
  EAX = (r32((uint32_t)(0x1058f534)));
  /* 105734eb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105734ee cmp dword ptr [0x10591040], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10591040))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105734f5 jne 0x105734fe */
  if (!C.zf) goto L_105734fe;
  /* 105734f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105734f9 jmp 0x105735a2 */
  goto L_105735a2;
L_105734fe:;
  /* 105734fe cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10573502 jne 0x10573526 */
  if (!C.zf) goto L_10573526;
  /* 10573504 cmp dword ptr [0x1058f53c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f53c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1057350b je 0x10573526 */
  if (C.zf) goto L_10573526;
  /* 1057350d call 0x10573600 */
  push32(0x10573512u); f_10573600();
  /* 10573512 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10573514 je 0x1057351d */
  if (C.zf) goto L_1057351d;
  /* 10573516 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10573518 jmp 0x105735a2 */
  goto L_105735a2;
L_1057351d:;
  /* 1057351d mov ecx, dword ptr [0x1058f534] */
  ECX = (r32((uint32_t)(0x1058f534)));
  /* 10573523 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10573526:;
  /* 10573526 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1057352a je 0x105735a0 */
  if (C.zf) goto L_105735a0;
  /* 1057352c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10573530 je 0x105735a0 */
  if (C.zf) goto L_105735a0;
  /* 10573532 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10573535 push edx */
  push32((uint32_t)(EDX));
  /* 10573536 call 0x10566930 */
  push32(0x1057353bu); f_10566930();
  /* 1057353b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1057353e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10573541:;
  /* 10573541 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10573544 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10573547 je 0x105735a0 */
  if (C.zf) goto L_105735a0;
  /* 10573549 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1057354c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1057354e push edx */
  push32((uint32_t)(EDX));
  /* 1057354f call 0x10566930 */
  push32(0x10573554u); f_10566930();
  /* 10573554 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10573557 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1057355a jbe 0x10573595 */
  if ((C.cf||C.zf)) goto L_10573595;
  /* 1057355c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1057355f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10573561 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10573564 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 10573568 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1057356b jne 0x10573595 */
  if (!C.zf) goto L_10573595;
  /* 1057356d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10573570 push ecx */
  push32((uint32_t)(ECX));
  /* 10573571 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10573574 push edx */
  push32((uint32_t)(EDX));
  /* 10573575 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10573578 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1057357a push ecx */
  push32((uint32_t)(ECX));
  /* 1057357b call 0x105735b0 */
  push32(0x10573580u); f_105735b0();
  /* 10573580 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10573583 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10573585 jne 0x10573595 */
  if (!C.zf) goto L_10573595;
  /* 10573587 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1057358a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1057358c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1057358f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 10573593 jmp 0x105735a2 */
  goto L_105735a2;
L_10573595:;
  /* 10573595 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10573598 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1057359b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1057359e jmp 0x10573541 */
  goto L_10573541;
L_105735a0:;
  /* 105735a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105735a2:;
  /* 105735a2 mov esp, ebp */
  ESP = (EBP);
  /* 105735a4 pop ebp */
  EBP = (pop32());
  /* 105735a5 ret  */
  ESPCHK(0x105734e0u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x105735b0 (79 bytes, 32 insns) */
void f_105735b0(void) {
  FTRACE(0x105735b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105735b0 push ebp */
  push32((uint32_t)(EBP));
  /* 105735b1 mov ebp, esp */
  EBP = (ESP);
  /* 105735b3 push ecx */
  push32((uint32_t)(ECX));
  /* 105735b4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105735b8 jne 0x105735be */
  if (!C.zf) goto L_105735be;
  /* 105735ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105735bc jmp 0x105735fb */
  goto L_105735fb;
L_105735be:;
  /* 105735be mov eax, dword ptr [0x10590c04] */
  EAX = (r32((uint32_t)(0x10590c04)));
  /* 105735c3 push eax */
  push32((uint32_t)(EAX));
  /* 105735c4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105735c7 push ecx */
  push32((uint32_t)(ECX));
  /* 105735c8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105735cb push edx */
  push32((uint32_t)(EDX));
  /* 105735cc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105735cf push eax */
  push32((uint32_t)(EAX));
  /* 105735d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105735d3 push ecx */
  push32((uint32_t)(ECX));
  /* 105735d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 105735d6 mov edx, dword ptr [0x10590ea4] */
  EDX = (r32((uint32_t)(0x10590ea4)));
  /* 105735dc push edx */
  push32((uint32_t)(EDX));
  /* 105735dd call 0x105736b0 */
  push32(0x105735e2u); f_105736b0();
  /* 105735e2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105735e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105735e8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105735ec jne 0x105735f5 */
  if (!C.zf) goto L_105735f5;
  /* 105735ee mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 105735f3 jmp 0x105735fb */
  goto L_105735fb;
L_105735f5:;
  /* 105735f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105735f8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_105735fb:;
  /* 105735fb mov esp, ebp */
  ESP = (EBP);
  /* 105735fd pop ebp */
  EBP = (pop32());
  /* 105735fe ret  */
  ESPCHK(0x105735b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013600 @ 0x10573600 (174 bytes, 66 insns) */
void f_10573600(void) {
  FTRACE(0x10573600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10573600 push ebp */
  push32((uint32_t)(EBP));
  /* 10573601 mov ebp, esp */
  EBP = (ESP);
  /* 10573603 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10573606 mov eax, dword ptr [0x1058f53c] */
  EAX = (r32((uint32_t)(0x1058f53c)));
  /* 1057360b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1057360e:;
  /* 1057360e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10573611 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10573614 je 0x105736a8 */
  if (C.zf) goto L_105736a8;
  /* 1057361a push 0 */
  push32((uint32_t)(0x0u));
  /* 1057361c push 0 */
  push32((uint32_t)(0x0u));
  /* 1057361e push 0 */
  push32((uint32_t)(0x0u));
  /* 10573620 push 0 */
  push32((uint32_t)(0x0u));
  /* 10573622 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10573624 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10573627 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10573629 push eax */
  push32((uint32_t)(EAX));
  /* 1057362a push 0 */
  push32((uint32_t)(0x0u));
  /* 1057362c push 1 */
  push32((uint32_t)(0x1u));
  /* 1057362e call dword ptr [0x1059234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059234c))), 0x10573634u);
  /* 10573634 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10573637 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1057363b jne 0x10573642 */
  if (!C.zf) goto L_10573642;
  /* 1057363d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10573640 jmp 0x105736aa */
  goto L_105736aa;
L_10573642:;
  /* 10573642 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10573644 push 0x1058ba54 */
  push32((uint32_t)(0x1058ba54u));
  /* 10573649 push 2 */
  push32((uint32_t)(0x2u));
  /* 1057364b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1057364e push ecx */
  push32((uint32_t)(ECX));
  /* 1057364f call 0x10563b00 */
  push32(0x10573654u); f_10563b00();
  /* 10573654 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10573657 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1057365a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1057365e jne 0x10573665 */
  if (!C.zf) goto L_10573665;
  /* 10573660 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10573663 jmp 0x105736aa */
  goto L_105736aa;
L_10573665:;
  /* 10573665 push 0 */
  push32((uint32_t)(0x0u));
  /* 10573667 push 0 */
  push32((uint32_t)(0x0u));
  /* 10573669 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1057366c push edx */
  push32((uint32_t)(EDX));
  /* 1057366d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10573670 push eax */
  push32((uint32_t)(EAX));
  /* 10573671 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10573673 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10573676 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10573678 push edx */
  push32((uint32_t)(EDX));
  /* 10573679 push 0 */
  push32((uint32_t)(0x0u));
  /* 1057367b push 1 */
  push32((uint32_t)(0x1u));
  /* 1057367d call dword ptr [0x1059234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059234c))), 0x10573683u);
  /* 10573683 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10573685 jne 0x1057368c */
  if (!C.zf) goto L_1057368c;
  /* 10573687 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1057368a jmp 0x105736aa */
  goto L_105736aa;
L_1057368c:;
  /* 1057368c push 0 */
  push32((uint32_t)(0x0u));
  /* 1057368e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10573691 push eax */
  push32((uint32_t)(EAX));
  /* 10573692 call 0x10573b00 */
  push32(0x10573697u); f_10573b00();
  /* 10573697 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1057369a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1057369d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105736a0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105736a3 jmp 0x1057360e */
  goto L_1057360e;
L_105736a8:;
  /* 105736a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105736aa:;
  /* 105736aa mov esp, ebp */
  ESP = (EBP);
  /* 105736ac pop ebp */
  EBP = (pop32());
  /* 105736ad ret  */
  ESPCHK(0x10573600u, _esp0);
  ESP += 4; return;
}

/* FUN_100136b0 @ 0x105736b0 (970 bytes, 340 insns) */
void f_105736b0(void) {
  FTRACE(0x105736b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105736b0 push ebp */
  push32((uint32_t)(EBP));
  /* 105736b1 mov ebp, esp */
  EBP = (ESP);
  /* 105736b3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 105736b5 push 0x1058baa8 */
  push32((uint32_t)(0x1058baa8u));
  /* 105736ba push 0x1056cc08 */
  push32((uint32_t)(0x1056cc08u));
  /* 105736bf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 105736c5 push eax */
  push32((uint32_t)(EAX));
  /* 105736c6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 105736cd add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105736d0 push ebx */
  push32((uint32_t)(EBX));
  /* 105736d1 push esi */
  push32((uint32_t)(ESI));
  /* 105736d2 push edi */
  push32((uint32_t)(EDI));
  /* 105736d3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 105736d6 cmp dword ptr [0x1058f87c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f87c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105736dd jne 0x10573736 */
  if (!C.zf) goto L_10573736;
  /* 105736df push 1 */
  push32((uint32_t)(0x1u));
  /* 105736e1 push 0x1058b100 */
  push32((uint32_t)(0x1058b100u));
  /* 105736e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 105736e8 push 0x1058b100 */
  push32((uint32_t)(0x1058b100u));
  /* 105736ed push 0 */
  push32((uint32_t)(0x0u));
  /* 105736ef push 0 */
  push32((uint32_t)(0x0u));
  /* 105736f1 call dword ptr [0x10592274] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592274))), 0x105736f7u);
  /* 105736f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105736f9 je 0x10573707 */
  if (C.zf) goto L_10573707;
  /* 105736fb mov dword ptr [0x1058f87c], 1 */
  w32((uint32_t)(0x1058f87c), (0x1u));
  /* 10573705 jmp 0x10573736 */
  goto L_10573736;
L_10573707:;
  /* 10573707 push 1 */
  push32((uint32_t)(0x1u));
  /* 10573709 push 0x1058b0fc */
  push32((uint32_t)(0x1058b0fcu));
  /* 1057370e push 1 */
  push32((uint32_t)(0x1u));
  /* 10573710 push 0x1058b0fc */
  push32((uint32_t)(0x1058b0fcu));
  /* 10573715 push 0 */
  push32((uint32_t)(0x0u));
  /* 10573717 push 0 */
  push32((uint32_t)(0x0u));
  /* 10573719 call dword ptr [0x10592278] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592278))), 0x1057371fu);
  /* 1057371f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10573721 je 0x1057372f */
  if (C.zf) goto L_1057372f;
  /* 10573723 mov dword ptr [0x1058f87c], 2 */
  w32((uint32_t)(0x1058f87c), (0x2u));
  /* 1057372d jmp 0x10573736 */
  goto L_10573736;
L_1057372f:;
  /* 1057372f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10573731 jmp 0x10573a94 */
  goto L_10573a94;
L_10573736:;
  /* 10573736 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1057373a jle 0x1057374f */
  if ((C.zf||C.sf!=C.of)) goto L_1057374f;
  /* 1057373c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1057373f push eax */
  push32((uint32_t)(EAX));
  /* 10573740 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10573743 push ecx */
  push32((uint32_t)(ECX));
  /* 10573744 call 0x10573ab0 */
  push32(0x10573749u); f_10573ab0();
  /* 10573749 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1057374c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1057374f:;
  /* 1057374f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10573753 jle 0x10573768 */
  if ((C.zf||C.sf!=C.of)) goto L_10573768;
  /* 10573755 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10573758 push edx */
  push32((uint32_t)(EDX));
  /* 10573759 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1057375c push eax */
  push32((uint32_t)(EAX));
  /* 1057375d call 0x10573ab0 */
  push32(0x10573762u); f_10573ab0();
  /* 10573762 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10573765 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_10573768:;
  /* 10573768 cmp dword ptr [0x1058f87c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1058f87c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1057376f jne 0x10573794 */
  if (!C.zf) goto L_10573794;
  /* 10573771 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10573774 push ecx */
  push32((uint32_t)(ECX));
  /* 10573775 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10573778 push edx */
  push32((uint32_t)(EDX));
  /* 10573779 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1057377c push eax */
  push32((uint32_t)(EAX));
  /* 1057377d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10573780 push ecx */
  push32((uint32_t)(ECX));
  /* 10573781 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10573784 push edx */
  push32((uint32_t)(EDX));
  /* 10573785 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10573788 push eax */
  push32((uint32_t)(EAX));
  /* 10573789 call dword ptr [0x10592278] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592278))), 0x1057378fu);
  /* 1057378f jmp 0x10573a94 */
  goto L_10573a94;
L_10573794:;
  /* 10573794 cmp dword ptr [0x1058f87c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1058f87c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1057379b jne 0x10573a92 */
  if (!C.zf) goto L_10573a92;
  /* 105737a1 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105737a5 jne 0x105737b0 */
  if (!C.zf) goto L_105737b0;
  /* 105737a7 mov ecx, dword ptr [0x1058f728] */
  ECX = (r32((uint32_t)(0x1058f728)));
  /* 105737ad mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_105737b0:;
  /* 105737b0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105737b4 je 0x105737c0 */
  if (C.zf) goto L_105737c0;
  /* 105737b6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105737ba jne 0x1057393c */
  if (!C.zf) goto L_1057393c;
L_105737c0:;
  /* 105737c0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105737c3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105737c6 jne 0x105737d2 */
  if (!C.zf) goto L_105737d2;
  /* 105737c8 mov eax, 2 */
  EAX = (0x2u);
  /* 105737cd jmp 0x10573a94 */
  goto L_10573a94;
L_105737d2:;
  /* 105737d2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105737d6 jle 0x105737e2 */
  if ((C.zf||C.sf!=C.of)) goto L_105737e2;
  /* 105737d8 mov eax, 1 */
  EAX = (0x1u);
  /* 105737dd jmp 0x10573a94 */
  goto L_10573a94;
L_105737e2:;
  /* 105737e2 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105737e6 jle 0x105737f2 */
  if ((C.zf||C.sf!=C.of)) goto L_105737f2;
  /* 105737e8 mov eax, 3 */
  EAX = (0x3u);
  /* 105737ed jmp 0x10573a94 */
  goto L_10573a94;
L_105737f2:;
  /* 105737f2 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 105737f5 push eax */
  push32((uint32_t)(EAX));
  /* 105737f6 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 105737f9 push ecx */
  push32((uint32_t)(ECX));
  /* 105737fa call dword ptr [0x10592328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592328))), 0x10573800u);
  /* 10573800 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10573802 jne 0x1057380b */
  if (!C.zf) goto L_1057380b;
  /* 10573804 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10573806 jmp 0x10573a94 */
  goto L_10573a94;
L_1057380b:;
  /* 1057380b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1057380f jne 0x10573817 */
  if (!C.zf) goto L_10573817;
  /* 10573811 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10573815 je 0x10573844 */
  if (C.zf) goto L_10573844;
L_10573817:;
  /* 10573817 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1057381b jne 0x10573823 */
  if (!C.zf) goto L_10573823;
  /* 1057381d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10573821 je 0x10573844 */
  if (C.zf) goto L_10573844;
L_10573823:;
  /* 10573823 push 0x1058ba68 */
  push32((uint32_t)(0x1058ba68u));
  /* 10573828 push 0 */
  push32((uint32_t)(0x0u));
  /* 1057382a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 1057382f push 0x1058ba60 */
  push32((uint32_t)(0x1058ba60u));
  /* 10573834 push 2 */
  push32((uint32_t)(0x2u));
  /* 10573836 call 0x10562bc0 */
  push32(0x1057383bu); f_10562bc0();
  /* 1057383b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1057383e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10573841 jne 0x10573844 */
  if (!C.zf) goto L_10573844;
  /* 10573843 int3  */
  x86_unimpl("int3 @ 0x10573843");
L_10573844:;
  /* 10573844 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10573846 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10573848 jne 0x1057380b */
  if (!C.zf) goto L_1057380b;
  /* 1057384a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1057384e jle 0x105738c3 */
  if ((C.zf||C.sf!=C.of)) goto L_105738c3;
  /* 10573850 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10573854 jae 0x10573860 */
  if (!C.cf) goto L_10573860;
  /* 10573856 mov eax, 3 */
  EAX = (0x3u);
  /* 1057385b jmp 0x10573a94 */
  goto L_10573a94;
L_10573860:;
  /* 10573860 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 10573863 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 10573866 jmp 0x10573871 */
  goto L_10573871;
L_10573868:;
  /* 10573868 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1057386b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1057386e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_10573871:;
  /* 10573871 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10573874 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10573876 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10573878 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1057387a je 0x105738b9 */
  if (C.zf) goto L_105738b9;
  /* 1057387c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1057387f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10573881 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10573884 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10573886 je 0x105738b9 */
  if (C.zf) goto L_105738b9;
  /* 10573888 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1057388b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1057388d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1057388f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10573892 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10573894 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10573896 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10573898 jl 0x105738b7 */
  if ((C.sf!=C.of)) goto L_105738b7;
  /* 1057389a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1057389d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1057389f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105738a1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 105738a4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105738a6 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 105738a9 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105738ab jg 0x105738b7 */
  if ((!C.zf&&C.sf==C.of)) goto L_105738b7;
  /* 105738ad mov eax, 2 */
  EAX = (0x2u);
  /* 105738b2 jmp 0x10573a94 */
  goto L_10573a94;
L_105738b7:;
  /* 105738b7 jmp 0x10573868 */
  goto L_10573868;
L_105738b9:;
  /* 105738b9 mov eax, 3 */
  EAX = (0x3u);
  /* 105738be jmp 0x10573a94 */
  goto L_10573a94;
L_105738c3:;
  /* 105738c3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105738c7 jle 0x1057393c */
  if ((C.zf||C.sf!=C.of)) goto L_1057393c;
  /* 105738c9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105738cd jae 0x105738d9 */
  if (!C.cf) goto L_105738d9;
  /* 105738cf mov eax, 1 */
  EAX = (0x1u);
  /* 105738d4 jmp 0x10573a94 */
  goto L_10573a94;
L_105738d9:;
  /* 105738d9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 105738dc mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 105738df jmp 0x105738ea */
  goto L_105738ea;
L_105738e1:;
  /* 105738e1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 105738e4 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105738e7 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_105738ea:;
  /* 105738ea mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 105738ed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105738ef mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105738f1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105738f3 je 0x10573932 */
  if (C.zf) goto L_10573932;
  /* 105738f5 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 105738f8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105738fa mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 105738fd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105738ff je 0x10573932 */
  if (C.zf) goto L_10573932;
  /* 10573901 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10573904 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10573906 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10573908 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1057390b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1057390d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1057390f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10573911 jl 0x10573930 */
  if ((C.sf!=C.of)) goto L_10573930;
  /* 10573913 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10573916 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10573918 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1057391a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 1057391d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1057391f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10573922 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10573924 jg 0x10573930 */
  if ((!C.zf&&C.sf==C.of)) goto L_10573930;
  /* 10573926 mov eax, 2 */
  EAX = (0x2u);
  /* 1057392b jmp 0x10573a94 */
  goto L_10573a94;
L_10573930:;
  /* 10573930 jmp 0x105738e1 */
  goto L_105738e1;
L_10573932:;
  /* 10573932 mov eax, 1 */
  EAX = (0x1u);
  /* 10573937 jmp 0x10573a94 */
  goto L_10573a94;
L_1057393c:;
  /* 1057393c push 0 */
  push32((uint32_t)(0x0u));
  /* 1057393e push 0 */
  push32((uint32_t)(0x0u));
  /* 10573940 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10573943 push ecx */
  push32((uint32_t)(ECX));
  /* 10573944 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10573947 push edx */
  push32((uint32_t)(EDX));
  /* 10573948 push 9 */
  push32((uint32_t)(0x9u));
  /* 1057394a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1057394d push eax */
  push32((uint32_t)(EAX));
  /* 1057394e call dword ptr [0x105922c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922c4))), 0x10573954u);
  /* 10573954 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10573957 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1057395b jne 0x10573964 */
  if (!C.zf) goto L_10573964;
  /* 1057395d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1057395f jmp 0x10573a94 */
  goto L_10573a94;
L_10573964:;
  /* 10573964 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1057396b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1057396e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10573970 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10573973 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10573975 call 0x10566ca0 */
  push32(0x1057397au); f_10566ca0();
  /* 1057397a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 1057397d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10573980 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 10573983 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10573986 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1057398d jmp 0x105739a6 */
  goto L_105739a6;
  /* 1057398f mov eax, 1 */
  EAX = (0x1u);
  /* 10573994 ret  */
  ESPCHK(0x105736b0u, _esp0);
  ESP += 4; return;
  /* 10573995 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10573998 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1057399f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_105739a6:;
  /* 105739a6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105739aa jne 0x105739b3 */
  if (!C.zf) goto L_105739b3;
  /* 105739ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105739ae jmp 0x10573a94 */
  goto L_10573a94;
L_105739b3:;
  /* 105739b3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105739b6 push edx */
  push32((uint32_t)(EDX));
  /* 105739b7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 105739ba push eax */
  push32((uint32_t)(EAX));
  /* 105739bb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105739be push ecx */
  push32((uint32_t)(ECX));
  /* 105739bf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105739c2 push edx */
  push32((uint32_t)(EDX));
  /* 105739c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 105739c5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 105739c8 push eax */
  push32((uint32_t)(EAX));
  /* 105739c9 call dword ptr [0x105922c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922c4))), 0x105739cfu);
  /* 105739cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105739d1 jne 0x105739da */
  if (!C.zf) goto L_105739da;
  /* 105739d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105739d5 jmp 0x10573a94 */
  goto L_10573a94;
L_105739da:;
  /* 105739da push 0 */
  push32((uint32_t)(0x0u));
  /* 105739dc push 0 */
  push32((uint32_t)(0x0u));
  /* 105739de mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 105739e1 push ecx */
  push32((uint32_t)(ECX));
  /* 105739e2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105739e5 push edx */
  push32((uint32_t)(EDX));
  /* 105739e6 push 9 */
  push32((uint32_t)(0x9u));
  /* 105739e8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 105739eb push eax */
  push32((uint32_t)(EAX));
  /* 105739ec call dword ptr [0x105922c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922c4))), 0x105739f2u);
  /* 105739f2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 105739f5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105739f9 jne 0x10573a02 */
  if (!C.zf) goto L_10573a02;
  /* 105739fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105739fd jmp 0x10573a94 */
  goto L_10573a94;
L_10573a02:;
  /* 10573a02 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10573a09 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10573a0c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10573a0e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10573a11 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10573a13 call 0x10566ca0 */
  push32(0x10573a18u); f_10566ca0();
  /* 10573a18 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 10573a1b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10573a1e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 10573a21 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10573a24 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10573a2b jmp 0x10573a44 */
  goto L_10573a44;
  /* 10573a2d mov eax, 1 */
  EAX = (0x1u);
  /* 10573a32 ret  */
  ESPCHK(0x105736b0u, _esp0);
  ESP += 4; return;
  /* 10573a33 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10573a36 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10573a3d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10573a44:;
  /* 10573a44 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10573a48 jne 0x10573a4e */
  if (!C.zf) goto L_10573a4e;
  /* 10573a4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10573a4c jmp 0x10573a94 */
  goto L_10573a94;
L_10573a4e:;
  /* 10573a4e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10573a51 push edx */
  push32((uint32_t)(EDX));
  /* 10573a52 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10573a55 push eax */
  push32((uint32_t)(EAX));
  /* 10573a56 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10573a59 push ecx */
  push32((uint32_t)(ECX));
  /* 10573a5a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10573a5d push edx */
  push32((uint32_t)(EDX));
  /* 10573a5e push 1 */
  push32((uint32_t)(0x1u));
  /* 10573a60 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10573a63 push eax */
  push32((uint32_t)(EAX));
  /* 10573a64 call dword ptr [0x105922c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922c4))), 0x10573a6au);
  /* 10573a6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10573a6c jne 0x10573a72 */
  if (!C.zf) goto L_10573a72;
  /* 10573a6e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10573a70 jmp 0x10573a94 */
  goto L_10573a94;
L_10573a72:;
  /* 10573a72 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10573a75 push ecx */
  push32((uint32_t)(ECX));
  /* 10573a76 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10573a79 push edx */
  push32((uint32_t)(EDX));
  /* 10573a7a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10573a7d push eax */
  push32((uint32_t)(EAX));
  /* 10573a7e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10573a81 push ecx */
  push32((uint32_t)(ECX));
  /* 10573a82 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10573a85 push edx */
  push32((uint32_t)(EDX));
  /* 10573a86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10573a89 push eax */
  push32((uint32_t)(EAX));
  /* 10573a8a call dword ptr [0x10592274] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592274))), 0x10573a90u);
  /* 10573a90 jmp 0x10573a94 */
  goto L_10573a94;
L_10573a92:;
  /* 10573a92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10573a94:;
  /* 10573a94 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 10573a97 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10573a9a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10573aa1 pop edi */
  EDI = (pop32());
  /* 10573aa2 pop esi */
  ESI = (pop32());
  /* 10573aa3 pop ebx */
  EBX = (pop32());
  /* 10573aa4 mov esp, ebp */
  ESP = (EBP);
  /* 10573aa6 pop ebp */
  EBP = (pop32());
  /* 10573aa7 ret  */
  ESPCHK(0x105736b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013ab0 @ 0x10573ab0 (80 bytes, 32 insns) */
void f_10573ab0(void) {
  FTRACE(0x10573ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10573ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 10573ab1 mov ebp, esp */
  EBP = (ESP);
  /* 10573ab3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10573ab6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10573ab9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10573abc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10573abf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10573ac2:;
  /* 10573ac2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10573ac5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10573ac8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10573acb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10573ace test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10573ad0 je 0x10573ae7 */
  if (C.zf) goto L_10573ae7;
  /* 10573ad2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10573ad5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10573ad8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10573ada je 0x10573ae7 */
  if (C.zf) goto L_10573ae7;
  /* 10573adc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10573adf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10573ae2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10573ae5 jmp 0x10573ac2 */
  goto L_10573ac2;
L_10573ae7:;
  /* 10573ae7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10573aea movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10573aed test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10573aef jne 0x10573af9 */
  if (!C.zf) goto L_10573af9;
  /* 10573af1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10573af4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10573af7 jmp 0x10573afc */
  goto L_10573afc;
L_10573af9:;
  /* 10573af9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10573afc:;
  /* 10573afc mov esp, ebp */
  ESP = (EBP);
  /* 10573afe pop ebp */
  EBP = (pop32());
  /* 10573aff ret  */
  ESPCHK(0x10573ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b00 @ 0x10573b00 (736 bytes, 224 insns) */
void f_10573b00(void) {
  FTRACE(0x10573b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10573b00 push ebp */
  push32((uint32_t)(EBP));
  /* 10573b01 mov ebp, esp */
  EBP = (ESP);
  /* 10573b03 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10573b06 push esi */
  push32((uint32_t)(ESI));
  /* 10573b07 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10573b0b je 0x10573b2c */
  if (C.zf) goto L_10573b2c;
  /* 10573b0d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10573b0f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10573b12 push eax */
  push32((uint32_t)(EAX));
  /* 10573b13 call 0x10573f50 */
  push32(0x10573b18u); f_10573f50();
  /* 10573b18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10573b1b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10573b1e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10573b22 je 0x10573b2c */
  if (C.zf) goto L_10573b2c;
  /* 10573b24 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10573b27 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10573b2a jne 0x10573b34 */
  if (!C.zf) goto L_10573b34;
L_10573b2c:;
  /* 10573b2c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10573b2f jmp 0x10573ddb */
  goto L_10573ddb;
L_10573b34:;
  /* 10573b34 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10573b37 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10573b3b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10573b3d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10573b3f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10573b40 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10573b43 mov ecx, dword ptr [0x1058f534] */
  ECX = (r32((uint32_t)(0x1058f534)));
  /* 10573b49 cmp ecx, dword ptr [0x1058f538] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1058f538))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10573b4f jne 0x10573b65 */
  if (!C.zf) goto L_10573b65;
  /* 10573b51 mov edx, dword ptr [0x1058f534] */
  EDX = (r32((uint32_t)(0x1058f534)));
  /* 10573b57 push edx */
  push32((uint32_t)(EDX));
  /* 10573b58 call 0x10573e60 */
  push32(0x10573b5du); f_10573e60();
  /* 10573b5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10573b60 mov dword ptr [0x1058f534], eax */
  w32((uint32_t)(0x1058f534), (EAX));
L_10573b65:;
  /* 10573b65 cmp dword ptr [0x1058f534], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f534))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10573b6c jne 0x10573c25 */
  if (!C.zf) goto L_10573c25;
  /* 10573b72 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10573b76 je 0x10573b97 */
  if (C.zf) goto L_10573b97;
  /* 10573b78 cmp dword ptr [0x1058f53c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f53c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10573b7f je 0x10573b97 */
  if (C.zf) goto L_10573b97;
  /* 10573b81 call 0x10573600 */
  push32(0x10573b86u); f_10573600();
  /* 10573b86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10573b88 je 0x10573b92 */
  if (C.zf) goto L_10573b92;
  /* 10573b8a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10573b8d jmp 0x10573ddb */
  goto L_10573ddb;
L_10573b92:;
  /* 10573b92 jmp 0x10573c25 */
  goto L_10573c25;
L_10573b97:;
  /* 10573b97 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10573b9b je 0x10573ba4 */
  if (C.zf) goto L_10573ba4;
  /* 10573b9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10573b9f jmp 0x10573ddb */
  goto L_10573ddb;
L_10573ba4:;
  /* 10573ba4 cmp dword ptr [0x1058f534], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f534))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10573bab jne 0x10573be4 */
  if (!C.zf) goto L_10573be4;
  /* 10573bad push 0x87 */
  push32((uint32_t)(0x87u));
  /* 10573bb2 push 0x1058bac0 */
  push32((uint32_t)(0x1058bac0u));
  /* 10573bb7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10573bb9 push 4 */
  push32((uint32_t)(0x4u));
  /* 10573bbb call 0x10563b00 */
  push32(0x10573bc0u); f_10563b00();
  /* 10573bc0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10573bc3 mov dword ptr [0x1058f534], eax */
  w32((uint32_t)(0x1058f534), (EAX));
  /* 10573bc8 cmp dword ptr [0x1058f534], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f534))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10573bcf jne 0x10573bd9 */
  if (!C.zf) goto L_10573bd9;
  /* 10573bd1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10573bd4 jmp 0x10573ddb */
  goto L_10573ddb;
L_10573bd9:;
  /* 10573bd9 mov eax, dword ptr [0x1058f534] */
  EAX = (r32((uint32_t)(0x1058f534)));
  /* 10573bde mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10573be4:;
  /* 10573be4 cmp dword ptr [0x1058f53c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f53c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10573beb jne 0x10573c25 */
  if (!C.zf) goto L_10573c25;
  /* 10573bed push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 10573bf2 push 0x1058bac0 */
  push32((uint32_t)(0x1058bac0u));
  /* 10573bf7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10573bf9 push 4 */
  push32((uint32_t)(0x4u));
  /* 10573bfb call 0x10563b00 */
  push32(0x10573c00u); f_10563b00();
  /* 10573c00 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10573c03 mov dword ptr [0x1058f53c], eax */
  w32((uint32_t)(0x1058f53c), (EAX));
  /* 10573c08 cmp dword ptr [0x1058f53c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f53c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10573c0f jne 0x10573c19 */
  if (!C.zf) goto L_10573c19;
  /* 10573c11 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10573c14 jmp 0x10573ddb */
  goto L_10573ddb;
L_10573c19:;
  /* 10573c19 mov ecx, dword ptr [0x1058f53c] */
  ECX = (r32((uint32_t)(0x1058f53c)));
  /* 10573c1f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_10573c25:;
  /* 10573c25 mov edx, dword ptr [0x1058f534] */
  EDX = (r32((uint32_t)(0x1058f534)));
  /* 10573c2b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10573c2e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10573c31 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10573c34 push eax */
  push32((uint32_t)(EAX));
  /* 10573c35 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10573c38 push ecx */
  push32((uint32_t)(ECX));
  /* 10573c39 call 0x10573de0 */
  push32(0x10573c3eu); f_10573de0();
  /* 10573c3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10573c41 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10573c44 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10573c48 jl 0x10573ce1 */
  if ((C.sf!=C.of)) goto L_10573ce1;
  /* 10573c4e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10573c51 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10573c54 je 0x10573ce1 */
  if (C.zf) goto L_10573ce1;
  /* 10573c5a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10573c5e je 0x10573cd3 */
  if (C.zf) goto L_10573cd3;
  /* 10573c60 push 2 */
  push32((uint32_t)(0x2u));
  /* 10573c62 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10573c65 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10573c68 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10573c6b push edx */
  push32((uint32_t)(EDX));
  /* 10573c6c call 0x10564590 */
  push32(0x10573c71u); f_10564590();
  /* 10573c71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10573c74 jmp 0x10573c7f */
  goto L_10573c7f;
L_10573c76:;
  /* 10573c76 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10573c79 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10573c7c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10573c7f:;
  /* 10573c7f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10573c82 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10573c85 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10573c89 je 0x10573ca0 */
  if (C.zf) goto L_10573ca0;
  /* 10573c8b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10573c8e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10573c91 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10573c94 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10573c97 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 10573c9b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10573c9e jmp 0x10573c76 */
  goto L_10573c76;
L_10573ca0:;
  /* 10573ca0 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 10573ca5 push 0x1058bac0 */
  push32((uint32_t)(0x1058bac0u));
  /* 10573caa push 2 */
  push32((uint32_t)(0x2u));
  /* 10573cac mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10573caf shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10573cb2 push eax */
  push32((uint32_t)(EAX));
  /* 10573cb3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10573cb6 push ecx */
  push32((uint32_t)(ECX));
  /* 10573cb7 call 0x10563f90 */
  push32(0x10573cbcu); f_10563f90();
  /* 10573cbc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10573cbf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10573cc2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10573cc6 je 0x10573cd1 */
  if (C.zf) goto L_10573cd1;
  /* 10573cc8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10573ccb mov dword ptr [0x1058f534], edx */
  w32((uint32_t)(0x1058f534), (EDX));
L_10573cd1:;
  /* 10573cd1 jmp 0x10573cdf */
  goto L_10573cdf;
L_10573cd3:;
  /* 10573cd3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10573cd6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10573cd9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10573cdc mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_10573cdf:;
  /* 10573cdf jmp 0x10573d54 */
  goto L_10573d54;
L_10573ce1:;
  /* 10573ce1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10573ce5 jne 0x10573d4d */
  if (!C.zf) goto L_10573d4d;
  /* 10573ce7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10573ceb jge 0x10573cf5 */
  if ((C.sf==C.of)) goto L_10573cf5;
  /* 10573ced mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10573cf0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10573cf2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10573cf5:;
  /* 10573cf5 push 0xce */
  push32((uint32_t)(0xceu));
  /* 10573cfa push 0x1058bac0 */
  push32((uint32_t)(0x1058bac0u));
  /* 10573cff push 2 */
  push32((uint32_t)(0x2u));
  /* 10573d01 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10573d04 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 10573d0b push edx */
  push32((uint32_t)(EDX));
  /* 10573d0c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10573d0f push eax */
  push32((uint32_t)(EAX));
  /* 10573d10 call 0x10563f90 */
  push32(0x10573d15u); f_10563f90();
  /* 10573d15 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10573d18 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10573d1b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10573d1f jne 0x10573d29 */
  if (!C.zf) goto L_10573d29;
  /* 10573d21 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10573d24 jmp 0x10573ddb */
  goto L_10573ddb;
L_10573d29:;
  /* 10573d29 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10573d2c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10573d2f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10573d32 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 10573d35 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10573d38 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10573d3b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 10573d43 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10573d46 mov dword ptr [0x1058f534], eax */
  w32((uint32_t)(0x1058f534), (EAX));
  /* 10573d4b jmp 0x10573d54 */
  goto L_10573d54;
L_10573d4d:;
  /* 10573d4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10573d4f jmp 0x10573ddb */
  goto L_10573ddb;
L_10573d54:;
  /* 10573d54 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10573d58 je 0x10573dd9 */
  if (C.zf) goto L_10573dd9;
  /* 10573d5a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 10573d5f push 0x1058bac0 */
  push32((uint32_t)(0x1058bac0u));
  /* 10573d64 push 2 */
  push32((uint32_t)(0x2u));
  /* 10573d66 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10573d69 push ecx */
  push32((uint32_t)(ECX));
  /* 10573d6a call 0x10566930 */
  push32(0x10573d6fu); f_10566930();
  /* 10573d6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10573d72 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10573d75 push eax */
  push32((uint32_t)(EAX));
  /* 10573d76 call 0x10563b00 */
  push32(0x10573d7bu); f_10563b00();
  /* 10573d7b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10573d7e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10573d81 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10573d85 je 0x10573dd9 */
  if (C.zf) goto L_10573dd9;
  /* 10573d87 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10573d8a push edx */
  push32((uint32_t)(EDX));
  /* 10573d8b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10573d8e push eax */
  push32((uint32_t)(EAX));
  /* 10573d8f call 0x10566ab0 */
  push32(0x10573d94u); f_10566ab0();
  /* 10573d94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10573d97 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10573d9a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10573d9d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10573da0 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10573da2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10573da5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10573da8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10573dab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10573dae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10573db1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10573db4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10573db7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10573db9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10573dbb not edx */
  EDX = (~(EDX));
  /* 10573dbd and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10573dc0 push edx */
  push32((uint32_t)(EDX));
  /* 10573dc1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10573dc4 push eax */
  push32((uint32_t)(EAX));
  /* 10573dc5 call dword ptr [0x10592270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592270))), 0x10573dcbu);
  /* 10573dcb push 2 */
  push32((uint32_t)(0x2u));
  /* 10573dcd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10573dd0 push ecx */
  push32((uint32_t)(ECX));
  /* 10573dd1 call 0x10564590 */
  push32(0x10573dd6u); f_10564590();
  /* 10573dd6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10573dd9:;
  /* 10573dd9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10573ddb:;
  /* 10573ddb pop esi */
  ESI = (pop32());
  /* 10573ddc mov esp, ebp */
  ESP = (EBP);
  /* 10573dde pop ebp */
  EBP = (pop32());
  /* 10573ddf ret  */
  ESPCHK(0x10573b00u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x10573de0 (124 bytes, 47 insns) */
void f_10573de0(void) {
  FTRACE(0x10573de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10573de0 push ebp */
  push32((uint32_t)(EBP));
  /* 10573de1 mov ebp, esp */
  EBP = (ESP);
  /* 10573de3 push ecx */
  push32((uint32_t)(ECX));
  /* 10573de4 mov eax, dword ptr [0x1058f534] */
  EAX = (r32((uint32_t)(0x1058f534)));
  /* 10573de9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10573dec jmp 0x10573df7 */
  goto L_10573df7;
L_10573dee:;
  /* 10573dee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10573df1 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10573df4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10573df7:;
  /* 10573df7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10573dfa cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10573dfd je 0x10573e4a */
  if (C.zf) goto L_10573e4a;
  /* 10573dff mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10573e02 push eax */
  push32((uint32_t)(EAX));
  /* 10573e03 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10573e06 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10573e08 push edx */
  push32((uint32_t)(EDX));
  /* 10573e09 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10573e0c push eax */
  push32((uint32_t)(EAX));
  /* 10573e0d call 0x105735b0 */
  push32(0x10573e12u); f_105735b0();
  /* 10573e12 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10573e15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10573e17 jne 0x10573e48 */
  if (!C.zf) goto L_10573e48;
  /* 10573e19 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10573e1c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10573e1e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10573e21 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 10573e25 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10573e28 je 0x10573e3a */
  if (C.zf) goto L_10573e3a;
  /* 10573e2a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10573e2d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10573e2f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10573e32 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 10573e36 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10573e38 jne 0x10573e48 */
  if (!C.zf) goto L_10573e48;
L_10573e3a:;
  /* 10573e3a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10573e3d sub eax, dword ptr [0x1058f534] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1058f534))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10573e43 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10573e46 jmp 0x10573e58 */
  goto L_10573e58;
L_10573e48:;
  /* 10573e48 jmp 0x10573dee */
  goto L_10573dee;
L_10573e4a:;
  /* 10573e4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10573e4d sub eax, dword ptr [0x1058f534] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1058f534))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10573e53 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10573e56 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_10573e58:;
  /* 10573e58 mov esp, ebp */
  ESP = (EBP);
  /* 10573e5a pop ebp */
  EBP = (pop32());
  /* 10573e5b ret  */
  ESPCHK(0x10573de0u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x10573e60 (238 bytes, 80 insns) */
void f_10573e60(void) {
  FTRACE(0x10573e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10573e60 push ebp */
  push32((uint32_t)(EBP));
  /* 10573e61 mov ebp, esp */
  EBP = (ESP);
  /* 10573e63 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10573e66 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10573e6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10573e70 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10573e73 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10573e77 jne 0x10573e80 */
  if (!C.zf) goto L_10573e80;
  /* 10573e79 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10573e7b jmp 0x10573f4a */
  goto L_10573f4a;
L_10573e80:;
  /* 10573e80 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10573e83 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10573e85 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10573e88 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10573e8b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10573e8e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10573e90 je 0x10573e9d */
  if (C.zf) goto L_10573e9d;
  /* 10573e92 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10573e95 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10573e98 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10573e9b jmp 0x10573e80 */
  goto L_10573e80;
L_10573e9d:;
  /* 10573e9d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 10573ea2 push 0x1058bac0 */
  push32((uint32_t)(0x1058bac0u));
  /* 10573ea7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10573ea9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10573eac lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 10573eb3 push eax */
  push32((uint32_t)(EAX));
  /* 10573eb4 call 0x10563b00 */
  push32(0x10573eb9u); f_10563b00();
  /* 10573eb9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10573ebc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10573ebf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10573ec2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10573ec5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10573ec9 jne 0x10573ed5 */
  if (!C.zf) goto L_10573ed5;
  /* 10573ecb push 9 */
  push32((uint32_t)(0x9u));
  /* 10573ecd call 0x10562a70 */
  push32(0x10573ed2u); f_10562a70();
  /* 10573ed2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10573ed5:;
  /* 10573ed5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10573ed8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10573edb:;
  /* 10573edb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10573ede cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10573ee1 je 0x10573f3e */
  if (C.zf) goto L_10573f3e;
  /* 10573ee3 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 10573ee8 push 0x1058bac0 */
  push32((uint32_t)(0x1058bac0u));
  /* 10573eed push 2 */
  push32((uint32_t)(0x2u));
  /* 10573eef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10573ef2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10573ef4 push edx */
  push32((uint32_t)(EDX));
  /* 10573ef5 call 0x10566930 */
  push32(0x10573efau); f_10566930();
  /* 10573efa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10573efd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10573f00 push eax */
  push32((uint32_t)(EAX));
  /* 10573f01 call 0x10563b00 */
  push32(0x10573f06u); f_10563b00();
  /* 10573f06 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10573f09 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10573f0c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10573f0e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10573f11 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10573f14 je 0x10573f2a */
  if (C.zf) goto L_10573f2a;
  /* 10573f16 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10573f19 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10573f1b push ecx */
  push32((uint32_t)(ECX));
  /* 10573f1c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10573f1f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10573f21 push eax */
  push32((uint32_t)(EAX));
  /* 10573f22 call 0x10566ab0 */
  push32(0x10573f27u); f_10566ab0();
  /* 10573f27 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10573f2a:;
  /* 10573f2a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10573f2d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10573f30 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10573f33 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10573f36 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10573f39 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10573f3c jmp 0x10573edb */
  goto L_10573edb;
L_10573f3e:;
  /* 10573f3e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10573f41 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10573f47 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10573f4a:;
  /* 10573f4a mov esp, ebp */
  ESP = (EBP);
  /* 10573f4c pop ebp */
  EBP = (pop32());
  /* 10573f4d ret  */
  ESPCHK(0x10573e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10013f50 @ 0x10573f50 (237 bytes, 81 insns) */
void f_10573f50(void) {
  FTRACE(0x10573f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10573f50 push ebp */
  push32((uint32_t)(EBP));
  /* 10573f51 mov ebp, esp */
  EBP = (ESP);
  /* 10573f53 push ecx */
  push32((uint32_t)(ECX));
  /* 10573f54 cmp dword ptr [0x10590c8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10590c8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10573f5b jne 0x10573f72 */
  if (!C.zf) goto L_10573f72;
  /* 10573f5d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10573f60 push eax */
  push32((uint32_t)(EAX));
  /* 10573f61 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10573f64 push ecx */
  push32((uint32_t)(ECX));
  /* 10573f65 call 0x10574050 */
  push32(0x10573f6au); f_10574050();
  /* 10573f6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10573f6d jmp 0x10574039 */
  goto L_10574039;
L_10573f72:;
  /* 10573f72 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10573f74 call 0x10567500 */
  push32(0x10573f79u); f_10567500();
  /* 10573f79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10573f7c jmp 0x10573f87 */
  goto L_10573f87;
L_10573f7e:;
  /* 10573f7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10573f81 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10573f84 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10573f87:;
  /* 10573f87 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10573f8a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 10573f8e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 10573f92 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10573f95 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10573f9b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10573f9d je 0x1057401b */
  if (C.zf) goto L_1057401b;
  /* 10573f9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10573fa2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10573fa7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10573fa9 mov cl, byte ptr [eax + 0x10590da1] */
  CL = (r8((uint32_t)(EAX + 0x10590da1)));
  /* 10573faf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10573fb2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10573fb4 je 0x10574006 */
  if (C.zf) goto L_10574006;
  /* 10573fb6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10573fb9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10573fbc mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10573fbf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10573fc2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10573fc4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10573fc6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10573fc8 jne 0x10573fd8 */
  if (!C.zf) goto L_10573fd8;
  /* 10573fca push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10573fcc call 0x105675a0 */
  push32(0x10573fd1u); f_105675a0();
  /* 10573fd1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10573fd4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10573fd6 jmp 0x10574039 */
  goto L_10574039;
L_10573fd8:;
  /* 10573fd8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10573fdb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10573fe1 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10573fe4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10573fe7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10573fe9 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10573feb or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10573fed cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10573ff0 jne 0x10574004 */
  if (!C.zf) goto L_10574004;
  /* 10573ff2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10573ff4 call 0x105675a0 */
  push32(0x10573ff9u); f_105675a0();
  /* 10573ff9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10573ffc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10573fff sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10574002 jmp 0x10574039 */
  goto L_10574039;
L_10574004:;
  /* 10574004 jmp 0x10574016 */
  goto L_10574016;
L_10574006:;
  /* 10574006 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10574009 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1057400f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10574012 jne 0x10574016 */
  if (!C.zf) goto L_10574016;
  /* 10574014 jmp 0x1057401b */
  goto L_1057401b;
L_10574016:;
  /* 10574016 jmp 0x10573f7e */
  goto L_10573f7e;
L_1057401b:;
  /* 1057401b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1057401d call 0x105675a0 */
  push32(0x10574022u); f_105675a0();
  /* 10574022 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10574025 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10574028 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1057402d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10574030 jne 0x10574037 */
  if (!C.zf) goto L_10574037;
  /* 10574032 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10574035 jmp 0x10574039 */
  goto L_10574039;
L_10574037:;
  /* 10574037 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10574039:;
  /* 10574039 mov esp, ebp */
  ESP = (EBP);
  /* 1057403b pop ebp */
  EBP = (pop32());
  /* 1057403c ret  */
  ESPCHK(0x10573f50u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x10574050 (193 bytes, 87 insns) */
void f_10574050(void) {
  FTRACE(0x10574050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10574050 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10574052 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10574056 push ebx */
  push32((uint32_t)(EBX));
  /* 10574057 mov ebx, eax */
  EBX = (EAX);
  /* 10574059 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1057405c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10574060 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10574066 je 0x1057407b */
  if (C.zf) goto L_1057407b;
L_10574068:;
  /* 10574068 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 1057406a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1057406b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1057406d je 0x10574040 */
  if (C.zf) { jmp_ind(0x10574040u); return; }
  /* 1057406f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10574071 je 0x105740c4 */
  if (C.zf) goto L_105740c4;
  /* 10574073 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10574079 jne 0x10574068 */
  if (!C.zf) goto L_10574068;
L_1057407b:;
  /* 1057407b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 1057407d push edi */
  push32((uint32_t)(EDI));
  /* 1057407e mov eax, ebx */
  EAX = (EBX);
  /* 10574080 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 10574083 push esi */
  push32((uint32_t)(ESI));
  /* 10574084 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_10574086:;
  /* 10574086 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10574088 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 1057408d mov eax, ecx */
  EAX = (ECX);
  /* 1057408f mov esi, edi */
  ESI = (EDI);
  /* 10574091 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 10574093 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10574095 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10574097 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1057409a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1057409d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1057409f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 105740a1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105740a4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 105740aa jne 0x105740c8 */
  if (!C.zf) goto L_105740c8;
  /* 105740ac and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 105740b1 je 0x10574086 */
  if (C.zf) goto L_10574086;
  /* 105740b3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 105740b8 jne 0x105740c2 */
  if (!C.zf) goto L_105740c2;
  /* 105740ba and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 105740c0 jne 0x10574086 */
  if (!C.zf) goto L_10574086;
L_105740c2:;
  /* 105740c2 pop esi */
  ESI = (pop32());
  /* 105740c3 pop edi */
  EDI = (pop32());
L_105740c4:;
  /* 105740c4 pop ebx */
  EBX = (pop32());
  /* 105740c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105740c7 ret  */
  ESPCHK(0x10574050u, _esp0);
  ESP += 4; return;
L_105740c8:;
  /* 105740c8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 105740cb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105740cd je 0x10574105 */
  if (C.zf) goto L_10574105;
  /* 105740cf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 105740d1 je 0x105740c2 */
  if (C.zf) goto L_105740c2;
  /* 105740d3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105740d5 je 0x105740fe */
  if (C.zf) goto L_105740fe;
  /* 105740d7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 105740d9 je 0x105740c2 */
  if (C.zf) goto L_105740c2;
  /* 105740db shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 105740de cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105740e0 je 0x105740f7 */
  if (C.zf) goto L_105740f7;
  /* 105740e2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 105740e4 je 0x105740c2 */
  if (C.zf) goto L_105740c2;
  /* 105740e6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105740e8 je 0x105740f0 */
  if (C.zf) goto L_105740f0;
  /* 105740ea test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 105740ec je 0x105740c2 */
  if (C.zf) goto L_105740c2;
  /* 105740ee jmp 0x10574086 */
  goto L_10574086;
L_105740f0:;
  /* 105740f0 pop esi */
  ESI = (pop32());
  /* 105740f1 pop edi */
  EDI = (pop32());
  /* 105740f2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 105740f5 pop ebx */
  EBX = (pop32());
  /* 105740f6 ret  */
  ESPCHK(0x10574050u, _esp0);
  ESP += 4; return;
L_105740f7:;
  /* 105740f7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 105740fa pop esi */
  ESI = (pop32());
  /* 105740fb pop edi */
  EDI = (pop32());
  /* 105740fc pop ebx */
  EBX = (pop32());
  /* 105740fd ret  */
  ESPCHK(0x10574050u, _esp0);
  ESP += 4; return;
L_105740fe:;
  /* 105740fe lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 10574101 pop esi */
  ESI = (pop32());
  /* 10574102 pop edi */
  EDI = (pop32());
  /* 10574103 pop ebx */
  EBX = (pop32());
  /* 10574104 ret  */
  ESPCHK(0x10574050u, _esp0);
  ESP += 4; return;
L_10574105:;
  /* 10574105 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 10574108 pop esi */
  ESI = (pop32());
  /* 10574109 pop edi */
  EDI = (pop32());
  /* 1057410a pop ebx */
  EBX = (pop32());
  /* 1057410b ret  */
  ESPCHK(0x10574050u, _esp0);
  ESP += 4; return;
  /* 1057410c jmp dword ptr [0x105922d0] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x105922d0)))); return;
}

/* RtlUnwind @ 0x1057425c (6 bytes, 1 insns) */
void f_1057425c(void) {
  FTRACE(0x1057425cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1057425c jmp dword ptr [0x105922ac] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x105922ac)))); return;
}

