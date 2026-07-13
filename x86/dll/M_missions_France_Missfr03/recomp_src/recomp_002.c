#include "recomp.h"

/* FUN_1000f890 @ 0x1062f890 (878 bytes, 273 insns) */
void f_1062f890(void) {
  FTRACE(0x1062f890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062f890 push ebp */
  push32((uint32_t)(EBP));
  /* 1062f891 mov ebp, esp */
  EBP = (ESP);
  /* 1062f893 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062f896 push esi */
  push32((uint32_t)(ESI));
  /* 1062f897 mov eax, dword ptr [0x1064dc98] */
  EAX = (r32((uint32_t)(0x1064dc98)));
  /* 1062f89c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1062f89f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1062f8a6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1062f8ad jmp 0x1062f8b8 */
  goto L_1062f8b8;
L_1062f8af:;
  /* 1062f8af mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062f8b2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f8b5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1062f8b8:;
  /* 1062f8b8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062f8bc jae 0x1062f8f1 */
  if (!C.cf) goto L_1062f8f1;
  /* 1062f8be mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062f8c1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062f8c4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1062f8c7 push ecx */
  push32((uint32_t)(ECX));
  /* 1062f8c8 call 0x10625710 */
  push32(0x1062f8cdu); f_10625710();
  /* 1062f8cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f8d0 mov esi, eax */
  ESI = (EAX);
  /* 1062f8d2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062f8d5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062f8d8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 1062f8dc push ecx */
  push32((uint32_t)(ECX));
  /* 1062f8dd call 0x10625710 */
  push32(0x1062f8e2u); f_10625710();
  /* 1062f8e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f8e5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f8e8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1062f8ec mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1062f8ef jmp 0x1062f8af */
  goto L_1062f8af;
L_1062f8f1:;
  /* 1062f8f1 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1062f8f8 jmp 0x1062f903 */
  goto L_1062f903;
L_1062f8fa:;
  /* 1062f8fa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062f8fd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f900 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1062f903:;
  /* 1062f903 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062f907 jae 0x1062f93d */
  if (!C.cf) goto L_1062f93d;
  /* 1062f909 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062f90c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062f90f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 1062f913 push eax */
  push32((uint32_t)(EAX));
  /* 1062f914 call 0x10625710 */
  push32(0x1062f919u); f_10625710();
  /* 1062f919 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f91c mov esi, eax */
  ESI = (EAX);
  /* 1062f91e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062f921 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062f924 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 1062f928 push eax */
  push32((uint32_t)(EAX));
  /* 1062f929 call 0x10625710 */
  push32(0x1062f92eu); f_10625710();
  /* 1062f92e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f931 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f934 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1062f938 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1062f93b jmp 0x1062f8fa */
  goto L_1062f8fa;
L_1062f93d:;
  /* 1062f93d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062f940 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 1062f946 push eax */
  push32((uint32_t)(EAX));
  /* 1062f947 call 0x10625710 */
  push32(0x1062f94cu); f_10625710();
  /* 1062f94c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f94f mov esi, eax */
  ESI = (EAX);
  /* 1062f951 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062f954 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 1062f95a push edx */
  push32((uint32_t)(EDX));
  /* 1062f95b call 0x10625710 */
  push32(0x1062f960u); f_10625710();
  /* 1062f960 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f963 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f966 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1062f96a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1062f96d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062f970 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 1062f976 push edx */
  push32((uint32_t)(EDX));
  /* 1062f977 call 0x10625710 */
  push32(0x1062f97cu); f_10625710();
  /* 1062f97c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f97f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062f982 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1062f986 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1062f989 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062f98c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 1062f992 push ecx */
  push32((uint32_t)(ECX));
  /* 1062f993 call 0x10625710 */
  push32(0x1062f998u); f_10625710();
  /* 1062f998 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f99b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062f99e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1062f9a2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1062f9a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062f9a8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 1062f9ae push edx */
  push32((uint32_t)(EDX));
  /* 1062f9af call 0x10625710 */
  push32(0x1062f9b4u); f_10625710();
  /* 1062f9b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f9b7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062f9ba lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1062f9be mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1062f9c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062f9c4 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f9c9 push eax */
  push32((uint32_t)(EAX));
  /* 1062f9ca call 0x106228c0 */
  push32(0x1062f9cfu); f_106228c0();
  /* 1062f9cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f9d2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1062f9d5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062f9d9 je 0x1062fbf6 */
  if (C.zf) goto L_1062fbf6;
  /* 1062f9df mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062f9e2 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1062f9e5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062f9e8 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f9ee mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1062f9f1 push 0xac */
  push32((uint32_t)(0xacu));
  /* 1062f9f6 mov eax, dword ptr [0x1064dc98] */
  EAX = (r32((uint32_t)(0x1064dc98)));
  /* 1062f9fb push eax */
  push32((uint32_t)(EAX));
  /* 1062f9fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062f9ff push ecx */
  push32((uint32_t)(ECX));
  /* 1062fa00 call 0x106291c0 */
  push32(0x1062fa05u); f_106291c0();
  /* 1062fa05 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062fa08 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1062fa0f jmp 0x1062fa1a */
  goto L_1062fa1a;
L_1062fa11:;
  /* 1062fa11 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062fa14 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062fa17 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1062fa1a:;
  /* 1062fa1a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062fa1e jae 0x1062fa8e */
  if (!C.cf) goto L_1062fa8e;
  /* 1062fa20 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062fa23 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1062fa26 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1062fa29 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 1062fa2c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062fa2f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062fa32 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1062fa35 push edx */
  push32((uint32_t)(EDX));
  /* 1062fa36 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1062fa39 push eax */
  push32((uint32_t)(EAX));
  /* 1062fa3a call 0x10625890 */
  push32(0x1062fa3fu); f_10625890();
  /* 1062fa3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062fa42 push eax */
  push32((uint32_t)(EAX));
  /* 1062fa43 call 0x10625710 */
  push32(0x1062fa48u); f_10625710();
  /* 1062fa48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062fa4b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1062fa4e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1062fa52 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1062fa55 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062fa58 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1062fa5b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1062fa5e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 1062fa62 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062fa65 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062fa68 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 1062fa6c push edx */
  push32((uint32_t)(EDX));
  /* 1062fa6d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1062fa70 push eax */
  push32((uint32_t)(EAX));
  /* 1062fa71 call 0x10625890 */
  push32(0x1062fa76u); f_10625890();
  /* 1062fa76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062fa79 push eax */
  push32((uint32_t)(EAX));
  /* 1062fa7a call 0x10625710 */
  push32(0x1062fa7fu); f_10625710();
  /* 1062fa7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062fa82 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1062fa85 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1062fa89 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1062fa8c jmp 0x1062fa11 */
  goto L_1062fa11;
L_1062fa8e:;
  /* 1062fa8e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1062fa95 jmp 0x1062faa0 */
  goto L_1062faa0;
L_1062fa97:;
  /* 1062fa97 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062fa9a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062fa9d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1062faa0:;
  /* 1062faa0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062faa4 jae 0x1062fb16 */
  if (!C.cf) goto L_1062fb16;
  /* 1062faa6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062faa9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1062faac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1062faaf mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 1062fab3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062fab6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062fab9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 1062fabd push eax */
  push32((uint32_t)(EAX));
  /* 1062fabe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1062fac1 push ecx */
  push32((uint32_t)(ECX));
  /* 1062fac2 call 0x10625890 */
  push32(0x1062fac7u); f_10625890();
  /* 1062fac7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062faca push eax */
  push32((uint32_t)(EAX));
  /* 1062facb call 0x10625710 */
  push32(0x1062fad0u); f_10625710();
  /* 1062fad0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062fad3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1062fad6 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1062fada mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1062fadd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062fae0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1062fae3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1062fae6 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 1062faea mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062faed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062faf0 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 1062faf4 push eax */
  push32((uint32_t)(EAX));
  /* 1062faf5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1062faf8 push ecx */
  push32((uint32_t)(ECX));
  /* 1062faf9 call 0x10625890 */
  push32(0x1062fafeu); f_10625890();
  /* 1062fafe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062fb01 push eax */
  push32((uint32_t)(EAX));
  /* 1062fb02 call 0x10625710 */
  push32(0x1062fb07u); f_10625710();
  /* 1062fb07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062fb0a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1062fb0d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1062fb11 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1062fb14 jmp 0x1062fa97 */
  goto L_1062fa97;
L_1062fb16:;
  /* 1062fb16 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1062fb19 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1062fb1c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 1062fb22 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062fb25 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 1062fb2b push ecx */
  push32((uint32_t)(ECX));
  /* 1062fb2c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1062fb2f push edx */
  push32((uint32_t)(EDX));
  /* 1062fb30 call 0x10625890 */
  push32(0x1062fb35u); f_10625890();
  /* 1062fb35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062fb38 push eax */
  push32((uint32_t)(EAX));
  /* 1062fb39 call 0x10625710 */
  push32(0x1062fb3eu); f_10625710();
  /* 1062fb3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062fb41 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1062fb44 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1062fb48 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1062fb4b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1062fb4e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1062fb51 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 1062fb57 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062fb5a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 1062fb60 push eax */
  push32((uint32_t)(EAX));
  /* 1062fb61 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1062fb64 push ecx */
  push32((uint32_t)(ECX));
  /* 1062fb65 call 0x10625890 */
  push32(0x1062fb6au); f_10625890();
  /* 1062fb6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062fb6d push eax */
  push32((uint32_t)(EAX));
  /* 1062fb6e call 0x10625710 */
  push32(0x1062fb73u); f_10625710();
  /* 1062fb73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062fb76 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1062fb79 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1062fb7d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1062fb80 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1062fb83 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1062fb86 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 1062fb8c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062fb8f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 1062fb95 push ecx */
  push32((uint32_t)(ECX));
  /* 1062fb96 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1062fb99 push edx */
  push32((uint32_t)(EDX));
  /* 1062fb9a call 0x10625890 */
  push32(0x1062fb9fu); f_10625890();
  /* 1062fb9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062fba2 push eax */
  push32((uint32_t)(EAX));
  /* 1062fba3 call 0x10625710 */
  push32(0x1062fba8u); f_10625710();
  /* 1062fba8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062fbab mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1062fbae lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1062fbb2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1062fbb5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1062fbb8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1062fbbb mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 1062fbc1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062fbc4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 1062fbca push eax */
  push32((uint32_t)(EAX));
  /* 1062fbcb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1062fbce push ecx */
  push32((uint32_t)(ECX));
  /* 1062fbcf call 0x10625890 */
  push32(0x1062fbd4u); f_10625890();
  /* 1062fbd4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062fbd7 push eax */
  push32((uint32_t)(EAX));
  /* 1062fbd8 call 0x10625710 */
  push32(0x1062fbddu); f_10625710();
  /* 1062fbdd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062fbe0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1062fbe3 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1062fbe7 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1062fbea mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1062fbed mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1062fbf0 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_1062fbf6:;
  /* 1062fbf6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062fbf9 pop esi */
  ESI = (pop32());
  /* 1062fbfa mov esp, ebp */
  ESP = (EBP);
  /* 1062fbfc pop ebp */
  EBP = (pop32());
  /* 1062fbfd ret  */
  ESPCHK(0x1062f890u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc00 @ 0x1062fc00 (31 bytes, 15 insns) */
void f_1062fc00(void) {
  FTRACE(0x1062fc00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062fc00 push ebp */
  push32((uint32_t)(EBP));
  /* 1062fc01 mov ebp, esp */
  EBP = (ESP);
  /* 1062fc03 push 0 */
  push32((uint32_t)(0x0u));
  /* 1062fc05 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1062fc08 push eax */
  push32((uint32_t)(EAX));
  /* 1062fc09 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062fc0c push ecx */
  push32((uint32_t)(ECX));
  /* 1062fc0d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062fc10 push edx */
  push32((uint32_t)(EDX));
  /* 1062fc11 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062fc14 push eax */
  push32((uint32_t)(EAX));
  /* 1062fc15 call 0x1062fc20 */
  push32(0x1062fc1au); f_1062fc20();
  /* 1062fc1a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062fc1d pop ebp */
  EBP = (pop32());
  /* 1062fc1e ret  */
  ESPCHK(0x1062fc00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc20 @ 0x1062fc20 (393 bytes, 123 insns) */
void f_1062fc20(void) {
  FTRACE(0x1062fc20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062fc20 push ebp */
  push32((uint32_t)(EBP));
  /* 1062fc21 mov ebp, esp */
  EBP = (ESP);
  /* 1062fc23 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062fc26 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062fc2a jne 0x1062fc36 */
  if (!C.zf) goto L_1062fc36;
  /* 1062fc2c mov eax, dword ptr [0x1064dc98] */
  EAX = (r32((uint32_t)(0x1064dc98)));
  /* 1062fc31 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1062fc34 jmp 0x1062fc3c */
  goto L_1062fc3c;
L_1062fc36:;
  /* 1062fc36 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1062fc39 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1062fc3c:;
  /* 1062fc3c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062fc3f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1062fc42 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062fc45 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1062fc48 push 0x1064e79c */
  push32((uint32_t)(0x1064e79cu));
  /* 1062fc4d call dword ptr [0x10650280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650280))), 0x1062fc53u);
  /* 1062fc53 cmp dword ptr [0x1064e78c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e78c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062fc5a je 0x1062fc7a */
  if (C.zf) goto L_1062fc7a;
  /* 1062fc5c push 0x1064e79c */
  push32((uint32_t)(0x1064e79cu));
  /* 1062fc61 call dword ptr [0x10650270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650270))), 0x1062fc67u);
  /* 1062fc67 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1062fc69 call 0x106262e0 */
  push32(0x1062fc6eu); f_106262e0();
  /* 1062fc6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062fc71 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1062fc78 jmp 0x1062fc81 */
  goto L_1062fc81;
L_1062fc7a:;
  /* 1062fc7a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1062fc81:;
  /* 1062fc81 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062fc85 jbe 0x1062fd72 */
  if ((C.cf||C.zf)) goto L_1062fd72;
  /* 1062fc8b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062fc8e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1062fc90 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 1062fc93 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1062fc97 je 0x1062fca1 */
  if (C.zf) goto L_1062fca1;
  /* 1062fc99 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1062fc9d je 0x1062fca6 */
  if (C.zf) goto L_1062fca6;
  /* 1062fc9f jmp 0x1062fd00 */
  goto L_1062fd00;
L_1062fca1:;
  /* 1062fca1 jmp 0x1062fd72 */
  goto L_1062fd72;
L_1062fca6:;
  /* 1062fca6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062fca9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062fcac mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1062fcaf mov dword ptr [0x1064e778], 0 */
  w32((uint32_t)(0x1064e778), (0x0u));
  /* 1062fcb9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062fcbc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1062fcbf cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062fcc2 jne 0x1062fcd7 */
  if (!C.zf) goto L_1062fcd7;
  /* 1062fcc4 mov dword ptr [0x1064e778], 1 */
  w32((uint32_t)(0x1064e778), (0x1u));
  /* 1062fcce mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062fcd1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062fcd4 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_1062fcd7:;
  /* 1062fcd7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062fcda push ecx */
  push32((uint32_t)(ECX));
  /* 1062fcdb lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 1062fcde push edx */
  push32((uint32_t)(EDX));
  /* 1062fcdf lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1062fce2 push eax */
  push32((uint32_t)(EAX));
  /* 1062fce3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1062fce6 push ecx */
  push32((uint32_t)(ECX));
  /* 1062fce7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062fcea mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1062fcec push eax */
  push32((uint32_t)(EAX));
  /* 1062fced call 0x1062fdb0 */
  push32(0x1062fcf2u); f_1062fdb0();
  /* 1062fcf2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062fcf5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062fcf8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062fcfb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1062fcfe jmp 0x1062fd6d */
  goto L_1062fd6d;
L_1062fd00:;
  /* 1062fd00 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062fd03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062fd05 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1062fd07 mov ecx, dword ptr [0x1064cc98] */
  ECX = (r32((uint32_t)(0x1064cc98)));
  /* 1062fd0d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1062fd0f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1062fd13 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1062fd19 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1062fd1b je 0x1062fd48 */
  if (C.zf) goto L_1062fd48;
  /* 1062fd1d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062fd21 jbe 0x1062fd48 */
  if ((C.cf||C.zf)) goto L_1062fd48;
  /* 1062fd23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062fd26 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062fd29 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1062fd2b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1062fd2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062fd30 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062fd33 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1062fd36 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062fd39 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062fd3c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1062fd3f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062fd42 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062fd45 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1062fd48:;
  /* 1062fd48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062fd4b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062fd4e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1062fd50 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1062fd52 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062fd55 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062fd58 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1062fd5b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062fd5e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062fd61 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1062fd64 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062fd67 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062fd6a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1062fd6d:;
  /* 1062fd6d jmp 0x1062fc81 */
  goto L_1062fc81;
L_1062fd72:;
  /* 1062fd72 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062fd76 je 0x1062fd84 */
  if (C.zf) goto L_1062fd84;
  /* 1062fd78 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1062fd7a call 0x10626380 */
  push32(0x1062fd7fu); f_10626380();
  /* 1062fd7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062fd82 jmp 0x1062fd8f */
  goto L_1062fd8f;
L_1062fd84:;
  /* 1062fd84 push 0x1064e79c */
  push32((uint32_t)(0x1064e79cu));
  /* 1062fd89 call dword ptr [0x10650270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650270))), 0x1062fd8fu);
L_1062fd8f:;
  /* 1062fd8f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062fd93 jbe 0x1062fda3 */
  if ((C.cf||C.zf)) goto L_1062fda3;
  /* 1062fd95 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062fd98 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1062fd9b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062fd9e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062fda1 jmp 0x1062fda5 */
  goto L_1062fda5;
L_1062fda3:;
  /* 1062fda3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1062fda5:;
  /* 1062fda5 mov esp, ebp */
  ESP = (EBP);
  /* 1062fda7 pop ebp */
  EBP = (pop32());
  /* 1062fda8 ret  */
  ESPCHK(0x1062fc20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fdb0 @ 0x1062fdb0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_1062fdb0(void) {
  FTRACE(0x1062fdb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062fdb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1062fdb1 mov ebp, esp */
  EBP = (ESP);
  /* 1062fdb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062fdb6 push esi */
  push32((uint32_t)(ESI));
  /* 1062fdb7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1062fdbb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1062fdbe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062fdc1 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062fdc4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1062fdc7 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062fdcb ja 0x10630318 */
  if ((!C.cf&&!C.zf)) goto L_10630318;
  /* 1062fdd1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062fdd4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1062fdd6 mov dl, byte ptr [eax + 0x10630379] */
  DL = (r8((uint32_t)(EAX + 0x10630379)));
  /* 1062fddc jmp dword ptr [edx*4 + 0x1063031d] */
  switch (EDX) {
    case 0: goto L_106302f6;
    case 1: goto L_1062fe05;
    case 2: goto L_1062fe4b;
    case 3: goto L_1062ff98;
    case 4: goto L_1062ffc0;
    case 5: goto L_1063005f;
    case 6: goto L_106300cb;
    case 7: goto L_106300f4;
    case 8: goto L_10630135;
    case 9: goto L_10630217;
    case 10: goto L_1063027e;
    case 11: goto L_106302cb;
    case 12: goto L_1062fde3;
    case 13: goto L_1062fe28;
    case 14: goto L_1062fe6e;
    case 15: goto L_1062ff6e;
    case 16: goto L_10630005;
    case 17: goto L_10630032;
    case 18: goto L_10630087;
    case 19: goto L_1063010b;
    case 20: goto L_106301b9;
    case 21: goto L_10630248;
    case 22: goto L_10630318;
    default: x86_unimpl("switch@0x1062fddc out of table"); return;
  }
L_1062fde3:;
  /* 1062fde3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1062fde6 push ecx */
  push32((uint32_t)(ECX));
  /* 1062fde7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062fdea push edx */
  push32((uint32_t)(EDX));
  /* 1062fdeb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062fdee mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 1062fdf1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1062fdf4 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1062fdf7 push eax */
  push32((uint32_t)(EAX));
  /* 1062fdf8 call 0x106303d0 */
  push32(0x1062fdfdu); f_106303d0();
  /* 1062fdfd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062fe00 jmp 0x10630318 */
  goto L_10630318;
L_1062fe05:;
  /* 1062fe05 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1062fe08 push ecx */
  push32((uint32_t)(ECX));
  /* 1062fe09 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062fe0c push edx */
  push32((uint32_t)(EDX));
  /* 1062fe0d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062fe10 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 1062fe13 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1062fe16 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 1062fe1a push eax */
  push32((uint32_t)(EAX));
  /* 1062fe1b call 0x106303d0 */
  push32(0x1062fe20u); f_106303d0();
  /* 1062fe20 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062fe23 jmp 0x10630318 */
  goto L_10630318;
L_1062fe28:;
  /* 1062fe28 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1062fe2b push ecx */
  push32((uint32_t)(ECX));
  /* 1062fe2c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062fe2f push edx */
  push32((uint32_t)(EDX));
  /* 1062fe30 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062fe33 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1062fe36 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1062fe39 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 1062fe3d push eax */
  push32((uint32_t)(EAX));
  /* 1062fe3e call 0x106303d0 */
  push32(0x1062fe43u); f_106303d0();
  /* 1062fe43 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062fe46 jmp 0x10630318 */
  goto L_10630318;
L_1062fe4b:;
  /* 1062fe4b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1062fe4e push ecx */
  push32((uint32_t)(ECX));
  /* 1062fe4f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062fe52 push edx */
  push32((uint32_t)(EDX));
  /* 1062fe53 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062fe56 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1062fe59 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1062fe5c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 1062fe60 push eax */
  push32((uint32_t)(EAX));
  /* 1062fe61 call 0x106303d0 */
  push32(0x1062fe66u); f_106303d0();
  /* 1062fe66 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062fe69 jmp 0x10630318 */
  goto L_10630318;
L_1062fe6e:;
  /* 1062fe6e cmp dword ptr [0x1064e778], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e778))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062fe75 je 0x1062fef6 */
  if (C.zf) goto L_1062fef6;
  /* 1062fe77 mov dword ptr [0x1064e778], 0 */
  w32((uint32_t)(0x1064e778), (0x0u));
  /* 1062fe81 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1062fe84 push ecx */
  push32((uint32_t)(ECX));
  /* 1062fe85 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1062fe88 push edx */
  push32((uint32_t)(EDX));
  /* 1062fe89 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062fe8c push eax */
  push32((uint32_t)(EAX));
  /* 1062fe8d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062fe90 push ecx */
  push32((uint32_t)(ECX));
  /* 1062fe91 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1062fe94 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 1062fe9a push eax */
  push32((uint32_t)(EAX));
  /* 1062fe9b call 0x10630580 */
  push32(0x1062fea0u); f_10630580();
  /* 1062fea0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062fea3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1062fea6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062fea9 jne 0x1062feb0 */
  if (!C.zf) goto L_1062feb0;
  /* 1062feab jmp 0x10630318 */
  goto L_10630318;
L_1062feb0:;
  /* 1062feb0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062feb3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1062feb5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 1062feb8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062febb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1062febd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062fec0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062fec3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1062fec5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1062fec8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1062feca sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062fecd mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1062fed0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1062fed2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1062fed5 push ecx */
  push32((uint32_t)(ECX));
  /* 1062fed6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1062fed9 push edx */
  push32((uint32_t)(EDX));
  /* 1062feda mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062fedd push eax */
  push32((uint32_t)(EAX));
  /* 1062fede mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062fee1 push ecx */
  push32((uint32_t)(ECX));
  /* 1062fee2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1062fee5 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 1062feeb push eax */
  push32((uint32_t)(EAX));
  /* 1062feec call 0x10630580 */
  push32(0x1062fef1u); f_10630580();
  /* 1062fef1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062fef4 jmp 0x1062ff69 */
  goto L_1062ff69;
L_1062fef6:;
  /* 1062fef6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1062fef9 push ecx */
  push32((uint32_t)(ECX));
  /* 1062fefa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1062fefd push edx */
  push32((uint32_t)(EDX));
  /* 1062fefe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062ff01 push eax */
  push32((uint32_t)(EAX));
  /* 1062ff02 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062ff05 push ecx */
  push32((uint32_t)(ECX));
  /* 1062ff06 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1062ff09 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 1062ff0f push eax */
  push32((uint32_t)(EAX));
  /* 1062ff10 call 0x10630580 */
  push32(0x1062ff15u); f_10630580();
  /* 1062ff15 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062ff18 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1062ff1b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062ff1e jne 0x1062ff25 */
  if (!C.zf) goto L_1062ff25;
  /* 1062ff20 jmp 0x10630318 */
  goto L_10630318;
L_1062ff25:;
  /* 1062ff25 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062ff28 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1062ff2a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 1062ff2d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062ff30 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1062ff32 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062ff35 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062ff38 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1062ff3a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1062ff3d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1062ff3f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062ff42 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1062ff45 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1062ff47 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1062ff4a push ecx */
  push32((uint32_t)(ECX));
  /* 1062ff4b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1062ff4e push edx */
  push32((uint32_t)(EDX));
  /* 1062ff4f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062ff52 push eax */
  push32((uint32_t)(EAX));
  /* 1062ff53 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062ff56 push ecx */
  push32((uint32_t)(ECX));
  /* 1062ff57 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1062ff5a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 1062ff60 push eax */
  push32((uint32_t)(EAX));
  /* 1062ff61 call 0x10630580 */
  push32(0x1062ff66u); f_10630580();
  /* 1062ff66 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1062ff69:;
  /* 1062ff69 jmp 0x10630318 */
  goto L_10630318;
L_1062ff6e:;
  /* 1062ff6e mov ecx, dword ptr [0x1064e778] */
  ECX = (r32((uint32_t)(0x1064e778)));
  /* 1062ff74 mov dword ptr [0x1064e788], ecx */
  w32((uint32_t)(0x1064e788), (ECX));
  /* 1062ff7a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1062ff7d push edx */
  push32((uint32_t)(EDX));
  /* 1062ff7e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062ff81 push eax */
  push32((uint32_t)(EAX));
  /* 1062ff82 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062ff84 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062ff87 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1062ff8a push edx */
  push32((uint32_t)(EDX));
  /* 1062ff8b call 0x10630420 */
  push32(0x1062ff90u); f_10630420();
  /* 1062ff90 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062ff93 jmp 0x10630318 */
  goto L_10630318;
L_1062ff98:;
  /* 1062ff98 mov eax, dword ptr [0x1064e778] */
  EAX = (r32((uint32_t)(0x1064e778)));
  /* 1062ff9d mov dword ptr [0x1064e788], eax */
  w32((uint32_t)(0x1064e788), (EAX));
  /* 1062ffa2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1062ffa5 push ecx */
  push32((uint32_t)(ECX));
  /* 1062ffa6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062ffa9 push edx */
  push32((uint32_t)(EDX));
  /* 1062ffaa push 2 */
  push32((uint32_t)(0x2u));
  /* 1062ffac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062ffaf mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1062ffb2 push ecx */
  push32((uint32_t)(ECX));
  /* 1062ffb3 call 0x10630420 */
  push32(0x1062ffb8u); f_10630420();
  /* 1062ffb8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062ffbb jmp 0x10630318 */
  goto L_10630318;
L_1062ffc0:;
  /* 1062ffc0 mov edx, dword ptr [0x1064e778] */
  EDX = (r32((uint32_t)(0x1064e778)));
  /* 1062ffc6 mov dword ptr [0x1064e788], edx */
  w32((uint32_t)(0x1064e788), (EDX));
  /* 1062ffcc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062ffcf mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 1062ffd2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1062ffd3 mov ecx, 0xc */
  ECX = (0xcu);
  /* 1062ffd8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1062ffda mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1062ffdd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062ffe1 jne 0x1062ffea */
  if (!C.zf) goto L_1062ffea;
  /* 1062ffe3 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_1062ffea:;
  /* 1062ffea mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1062ffed push edx */
  push32((uint32_t)(EDX));
  /* 1062ffee mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062fff1 push eax */
  push32((uint32_t)(EAX));
  /* 1062fff2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062fff4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062fff7 push ecx */
  push32((uint32_t)(ECX));
  /* 1062fff8 call 0x10630420 */
  push32(0x1062fffdu); f_10630420();
  /* 1062fffd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10630000 jmp 0x10630318 */
  goto L_10630318;
L_10630005:;
  /* 10630005 mov edx, dword ptr [0x1064e778] */
  EDX = (r32((uint32_t)(0x1064e778)));
  /* 1063000b mov dword ptr [0x1064e788], edx */
  w32((uint32_t)(0x1064e788), (EDX));
  /* 10630011 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10630014 push eax */
  push32((uint32_t)(EAX));
  /* 10630015 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10630018 push ecx */
  push32((uint32_t)(ECX));
  /* 10630019 push 3 */
  push32((uint32_t)(0x3u));
  /* 1063001b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1063001e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10630021 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10630024 push eax */
  push32((uint32_t)(EAX));
  /* 10630025 call 0x10630420 */
  push32(0x1063002au); f_10630420();
  /* 1063002a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1063002d jmp 0x10630318 */
  goto L_10630318;
L_10630032:;
  /* 10630032 mov ecx, dword ptr [0x1064e778] */
  ECX = (r32((uint32_t)(0x1064e778)));
  /* 10630038 mov dword ptr [0x1064e788], ecx */
  w32((uint32_t)(0x1064e788), (ECX));
  /* 1063003e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10630041 push edx */
  push32((uint32_t)(EDX));
  /* 10630042 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10630045 push eax */
  push32((uint32_t)(EAX));
  /* 10630046 push 2 */
  push32((uint32_t)(0x2u));
  /* 10630048 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1063004b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1063004e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10630051 push edx */
  push32((uint32_t)(EDX));
  /* 10630052 call 0x10630420 */
  push32(0x10630057u); f_10630420();
  /* 10630057 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1063005a jmp 0x10630318 */
  goto L_10630318;
L_1063005f:;
  /* 1063005f mov eax, dword ptr [0x1064e778] */
  EAX = (r32((uint32_t)(0x1064e778)));
  /* 10630064 mov dword ptr [0x1064e788], eax */
  w32((uint32_t)(0x1064e788), (EAX));
  /* 10630069 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1063006c push ecx */
  push32((uint32_t)(ECX));
  /* 1063006d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10630070 push edx */
  push32((uint32_t)(EDX));
  /* 10630071 push 2 */
  push32((uint32_t)(0x2u));
  /* 10630073 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10630076 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10630079 push ecx */
  push32((uint32_t)(ECX));
  /* 1063007a call 0x10630420 */
  push32(0x1063007fu); f_10630420();
  /* 1063007f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10630082 jmp 0x10630318 */
  goto L_10630318;
L_10630087:;
  /* 10630087 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1063008a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1063008e jg 0x106300ac */
  if ((!C.zf&&C.sf==C.of)) goto L_106300ac;
  /* 10630090 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10630093 push eax */
  push32((uint32_t)(EAX));
  /* 10630094 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10630097 push ecx */
  push32((uint32_t)(ECX));
  /* 10630098 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1063009b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 106300a1 push eax */
  push32((uint32_t)(EAX));
  /* 106300a2 call 0x106303d0 */
  push32(0x106300a7u); f_106303d0();
  /* 106300a7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106300aa jmp 0x106300c6 */
  goto L_106300c6;
L_106300ac:;
  /* 106300ac mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106300af push ecx */
  push32((uint32_t)(ECX));
  /* 106300b0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106300b3 push edx */
  push32((uint32_t)(EDX));
  /* 106300b4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106300b7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 106300bd push ecx */
  push32((uint32_t)(ECX));
  /* 106300be call 0x106303d0 */
  push32(0x106300c3u); f_106303d0();
  /* 106300c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106300c6:;
  /* 106300c6 jmp 0x10630318 */
  goto L_10630318;
L_106300cb:;
  /* 106300cb mov edx, dword ptr [0x1064e778] */
  EDX = (r32((uint32_t)(0x1064e778)));
  /* 106300d1 mov dword ptr [0x1064e788], edx */
  w32((uint32_t)(0x1064e788), (EDX));
  /* 106300d7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106300da push eax */
  push32((uint32_t)(EAX));
  /* 106300db mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106300de push ecx */
  push32((uint32_t)(ECX));
  /* 106300df push 2 */
  push32((uint32_t)(0x2u));
  /* 106300e1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106300e4 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106300e6 push eax */
  push32((uint32_t)(EAX));
  /* 106300e7 call 0x10630420 */
  push32(0x106300ecu); f_10630420();
  /* 106300ec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106300ef jmp 0x10630318 */
  goto L_10630318;
L_106300f4:;
  /* 106300f4 mov ecx, dword ptr [0x1064e778] */
  ECX = (r32((uint32_t)(0x1064e778)));
  /* 106300fa mov dword ptr [0x1064e788], ecx */
  w32((uint32_t)(0x1064e788), (ECX));
  /* 10630100 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10630103 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10630106 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10630109 jmp 0x1063015d */
  goto L_1063015d;
L_1063010b:;
  /* 1063010b mov ecx, dword ptr [0x1064e778] */
  ECX = (r32((uint32_t)(0x1064e778)));
  /* 10630111 mov dword ptr [0x1064e788], ecx */
  w32((uint32_t)(0x1064e788), (ECX));
  /* 10630117 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1063011a push edx */
  push32((uint32_t)(EDX));
  /* 1063011b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1063011e push eax */
  push32((uint32_t)(EAX));
  /* 1063011f push 1 */
  push32((uint32_t)(0x1u));
  /* 10630121 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10630124 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10630127 push edx */
  push32((uint32_t)(EDX));
  /* 10630128 call 0x10630420 */
  push32(0x1063012du); f_10630420();
  /* 1063012d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10630130 jmp 0x10630318 */
  goto L_10630318;
L_10630135:;
  /* 10630135 mov eax, dword ptr [0x1064e778] */
  EAX = (r32((uint32_t)(0x1064e778)));
  /* 1063013a mov dword ptr [0x1064e788], eax */
  w32((uint32_t)(0x1064e788), (EAX));
  /* 1063013f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10630142 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10630146 jne 0x10630151 */
  if (!C.zf) goto L_10630151;
  /* 10630148 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 1063014f jmp 0x1063015d */
  goto L_1063015d;
L_10630151:;
  /* 10630151 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10630154 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10630157 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1063015a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1063015d:;
  /* 1063015d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10630160 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10630163 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10630166 jge 0x10630171 */
  if ((C.sf==C.of)) goto L_10630171;
  /* 10630168 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1063016f jmp 0x1063019e */
  goto L_1063019e;
L_10630171:;
  /* 10630171 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10630174 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10630177 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10630178 mov ecx, 7 */
  ECX = (0x7u);
  /* 1063017d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1063017f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10630182 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10630185 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10630188 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10630189 mov ecx, 7 */
  ECX = (0x7u);
  /* 1063018e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10630190 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10630193 jl 0x1063019e */
  if ((C.sf!=C.of)) goto L_1063019e;
  /* 10630195 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10630198 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1063019b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1063019e:;
  /* 1063019e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106301a1 push eax */
  push32((uint32_t)(EAX));
  /* 106301a2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106301a5 push ecx */
  push32((uint32_t)(ECX));
  /* 106301a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 106301a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106301ab push edx */
  push32((uint32_t)(EDX));
  /* 106301ac call 0x10630420 */
  push32(0x106301b1u); f_10630420();
  /* 106301b1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106301b4 jmp 0x10630318 */
  goto L_10630318;
L_106301b9:;
  /* 106301b9 cmp dword ptr [0x1064e778], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e778))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106301c0 je 0x106301f0 */
  if (C.zf) goto L_106301f0;
  /* 106301c2 mov dword ptr [0x1064e778], 0 */
  w32((uint32_t)(0x1064e778), (0x0u));
  /* 106301cc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106301cf push eax */
  push32((uint32_t)(EAX));
  /* 106301d0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106301d3 push ecx */
  push32((uint32_t)(ECX));
  /* 106301d4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106301d7 push edx */
  push32((uint32_t)(EDX));
  /* 106301d8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106301db push eax */
  push32((uint32_t)(EAX));
  /* 106301dc mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 106301df mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 106301e5 push edx */
  push32((uint32_t)(EDX));
  /* 106301e6 call 0x10630580 */
  push32(0x106301ebu); f_10630580();
  /* 106301eb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106301ee jmp 0x10630212 */
  goto L_10630212;
L_106301f0:;
  /* 106301f0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106301f3 push eax */
  push32((uint32_t)(EAX));
  /* 106301f4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106301f7 push ecx */
  push32((uint32_t)(ECX));
  /* 106301f8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106301fb push edx */
  push32((uint32_t)(EDX));
  /* 106301fc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106301ff push eax */
  push32((uint32_t)(EAX));
  /* 10630200 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10630203 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10630209 push edx */
  push32((uint32_t)(EDX));
  /* 1063020a call 0x10630580 */
  push32(0x1063020fu); f_10630580();
  /* 1063020f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10630212:;
  /* 10630212 jmp 0x10630318 */
  goto L_10630318;
L_10630217:;
  /* 10630217 mov dword ptr [0x1064e778], 0 */
  w32((uint32_t)(0x1064e778), (0x0u));
  /* 10630221 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10630224 push eax */
  push32((uint32_t)(EAX));
  /* 10630225 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10630228 push ecx */
  push32((uint32_t)(ECX));
  /* 10630229 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1063022c push edx */
  push32((uint32_t)(EDX));
  /* 1063022d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10630230 push eax */
  push32((uint32_t)(EAX));
  /* 10630231 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10630234 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 1063023a push edx */
  push32((uint32_t)(EDX));
  /* 1063023b call 0x10630580 */
  push32(0x10630240u); f_10630580();
  /* 10630240 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10630243 jmp 0x10630318 */
  goto L_10630318;
L_10630248:;
  /* 10630248 mov eax, dword ptr [0x1064e778] */
  EAX = (r32((uint32_t)(0x1064e778)));
  /* 1063024d mov dword ptr [0x1064e788], eax */
  w32((uint32_t)(0x1064e788), (EAX));
  /* 10630252 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10630255 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10630258 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10630259 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 1063025e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10630260 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10630263 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10630266 push edx */
  push32((uint32_t)(EDX));
  /* 10630267 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1063026a push eax */
  push32((uint32_t)(EAX));
  /* 1063026b push 2 */
  push32((uint32_t)(0x2u));
  /* 1063026d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10630270 push ecx */
  push32((uint32_t)(ECX));
  /* 10630271 call 0x10630420 */
  push32(0x10630276u); f_10630420();
  /* 10630276 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10630279 jmp 0x10630318 */
  goto L_10630318;
L_1063027e:;
  /* 1063027e mov edx, dword ptr [0x1064e778] */
  EDX = (r32((uint32_t)(0x1064e778)));
  /* 10630284 mov dword ptr [0x1064e788], edx */
  w32((uint32_t)(0x1064e788), (EDX));
  /* 1063028a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1063028d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 10630290 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10630291 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10630296 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10630298 mov ecx, eax */
  ECX = (EAX);
  /* 1063029a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1063029d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106302a0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106302a3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 106302a6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 106302a7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 106302ac idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 106302ae add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106302b0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106302b3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106302b6 push eax */
  push32((uint32_t)(EAX));
  /* 106302b7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106302ba push ecx */
  push32((uint32_t)(ECX));
  /* 106302bb push 4 */
  push32((uint32_t)(0x4u));
  /* 106302bd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106302c0 push edx */
  push32((uint32_t)(EDX));
  /* 106302c1 call 0x10630420 */
  push32(0x106302c6u); f_10630420();
  /* 106302c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106302c9 jmp 0x10630318 */
  goto L_10630318;
L_106302cb:;
  /* 106302cb call 0x106313e0 */
  push32(0x106302d0u); f_106313e0();
  /* 106302d0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106302d3 push eax */
  push32((uint32_t)(EAX));
  /* 106302d4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106302d7 push ecx */
  push32((uint32_t)(ECX));
  /* 106302d8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106302db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106302dd cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106302e1 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 106302e4 mov ecx, dword ptr [eax*4 + 0x1064de1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1064de1c)));
  /* 106302eb push ecx */
  push32((uint32_t)(ECX));
  /* 106302ec call 0x106303d0 */
  push32(0x106302f1u); f_106303d0();
  /* 106302f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106302f4 jmp 0x10630318 */
  goto L_10630318;
L_106302f6:;
  /* 106302f6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106302f9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106302fb mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 106302fe mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10630301 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10630303 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10630306 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10630309 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1063030b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1063030e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10630310 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10630313 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10630316 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10630318:;
  /* 10630318 pop esi */
  ESI = (pop32());
  /* 10630319 mov esp, ebp */
  ESP = (EBP);
  /* 1063031b pop ebp */
  EBP = (pop32());
  /* 1063031c ret  */
  ESPCHK(0x1062fdb0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x106303d0 (72 bytes, 30 insns) */
void f_106303d0(void) {
  FTRACE(0x106303d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106303d0 push ebp */
  push32((uint32_t)(EBP));
  /* 106303d1 mov ebp, esp */
  EBP = (ESP);
L_106303d3:;
  /* 106303d3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106303d6 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106303d9 je 0x10630416 */
  if (C.zf) goto L_10630416;
  /* 106303db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106303de movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106303e1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106303e3 je 0x10630416 */
  if (C.zf) goto L_10630416;
  /* 106303e5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106303e8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106303ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106303ed mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106303ef mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 106303f1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106303f4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106303f6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106303f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106303fc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 106303fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10630401 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10630404 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10630407 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1063040a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1063040c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1063040f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10630412 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10630414 jmp 0x106303d3 */
  goto L_106303d3;
L_10630416:;
  /* 10630416 pop ebp */
  EBP = (pop32());
  /* 10630417 ret  */
  ESPCHK(0x106303d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010420 @ 0x10630420 (173 bytes, 64 insns) */
void f_10630420(void) {
  FTRACE(0x10630420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10630420 push ebp */
  push32((uint32_t)(EBP));
  /* 10630421 mov ebp, esp */
  EBP = (ESP);
  /* 10630423 push ecx */
  push32((uint32_t)(ECX));
  /* 10630424 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1063042b cmp dword ptr [0x1064e788], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e788))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10630432 je 0x1063044a */
  if (C.zf) goto L_1063044a;
  /* 10630434 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10630437 push eax */
  push32((uint32_t)(EAX));
  /* 10630438 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1063043b push ecx */
  push32((uint32_t)(ECX));
  /* 1063043c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1063043f push edx */
  push32((uint32_t)(EDX));
  /* 10630440 call 0x106304d0 */
  push32(0x10630445u); f_106304d0();
  /* 10630445 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10630448 jmp 0x106304c9 */
  goto L_106304c9;
L_1063044a:;
  /* 1063044a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1063044d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10630450 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10630452 jae 0x106304c0 */
  if (!C.cf) goto L_106304c0;
  /* 10630454 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10630457 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1063045a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1063045d jmp 0x10630468 */
  goto L_10630468;
L_1063045f:;
  /* 1063045f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10630462 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10630465 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10630468:;
  /* 10630468 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1063046b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1063046e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10630470 je 0x106304a4 */
  if (C.zf) goto L_106304a4;
  /* 10630472 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10630475 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10630476 mov ecx, 0xa */
  ECX = (0xau);
  /* 1063047b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1063047d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10630480 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10630483 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10630485 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10630488 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 1063048b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1063048e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1063048f mov ecx, 0xa */
  ECX = (0xau);
  /* 10630494 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10630496 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10630499 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1063049c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1063049f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106304a2 jmp 0x1063045f */
  goto L_1063045f;
L_106304a4:;
  /* 106304a4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106304a7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106304a9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106304ac mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106304af mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 106304b1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106304b4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106304b6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106304b9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106304bc mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 106304be jmp 0x106304c9 */
  goto L_106304c9;
L_106304c0:;
  /* 106304c0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106304c3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_106304c9:;
  /* 106304c9 mov esp, ebp */
  ESP = (EBP);
  /* 106304cb pop ebp */
  EBP = (pop32());
  /* 106304cc ret  */
  ESPCHK(0x10630420u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x106304d0 (172 bytes, 65 insns) */
void f_106304d0(void) {
  FTRACE(0x106304d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106304d0 push ebp */
  push32((uint32_t)(EBP));
  /* 106304d1 mov ebp, esp */
  EBP = (ESP);
  /* 106304d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106304d6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106304d9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106304db mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106304de mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106304e1 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106304e4 jbe 0x1063052b */
  if ((C.cf||C.zf)) goto L_1063052b;
L_106304e6:;
  /* 106304e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106304e9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 106304ea mov ecx, 0xa */
  ECX = (0xau);
  /* 106304ef idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 106304f1 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106304f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106304f7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 106304f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106304fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106304ff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10630502 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10630505 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10630507 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1063050a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1063050d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1063050f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10630512 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10630513 mov ecx, 0xa */
  ECX = (0xau);
  /* 10630518 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1063051a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1063051d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10630521 jle 0x1063052b */
  if ((C.zf||C.sf!=C.of)) goto L_1063052b;
  /* 10630523 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10630526 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10630529 ja 0x106304e6 */
  if ((!C.cf&&!C.zf)) goto L_106304e6;
L_1063052b:;
  /* 1063052b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1063052e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10630530 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10630533 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10630536 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10630539 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1063053b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1063053e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10630541 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10630544:;
  /* 10630544 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10630547 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10630549 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1063054c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1063054f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10630552 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10630554 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10630556 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10630559 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1063055c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1063055f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10630562 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10630565 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10630567 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1063056a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1063056d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10630570 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10630573 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10630576 jb 0x10630544 */
  if (C.cf) goto L_10630544;
  /* 10630578 mov esp, ebp */
  ESP = (EBP);
  /* 1063057a pop ebp */
  EBP = (pop32());
  /* 1063057b ret  */
  ESPCHK(0x106304d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010580 @ 0x10630580 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_10630580(void) {
  FTRACE(0x10630580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10630580 push ebp */
  push32((uint32_t)(EBP));
  /* 10630581 mov ebp, esp */
  EBP = (ESP);
  /* 10630583 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10630586:;
  /* 10630586 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10630589 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1063058c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1063058e je 0x106309fc */
  if (C.zf) goto L_106309fc;
  /* 10630594 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10630597 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1063059a je 0x106309fc */
  if (C.zf) goto L_106309fc;
  /* 106305a0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 106305a4 mov dword ptr [0x1064e788], 0 */
  w32((uint32_t)(0x1064e788), (0x0u));
  /* 106305ae mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 106305b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106305b8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106305bb jmp 0x106305c6 */
  goto L_106305c6;
L_106305bd:;
  /* 106305bd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106305c0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106305c3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_106305c6:;
  /* 106305c6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106305c9 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 106305cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106305cf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106305d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106305d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106305d8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106305db cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106305dd jne 0x106305e1 */
  if (!C.zf) goto L_106305e1;
  /* 106305df jmp 0x106305bd */
  goto L_106305bd;
L_106305e1:;
  /* 106305e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106305e4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106305e7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106305ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106305ed movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106305f0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 106305f3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106305f6 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106305f9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 106305fc cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10630600 ja 0x10630950 */
  if ((!C.cf&&!C.zf)) goto L_10630950;
  /* 10630606 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10630609 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1063060b mov al, byte ptr [ecx + 0x10630a2c] */
  AL = (r8((uint32_t)(ECX + 0x10630a2c)));
  /* 10630611 jmp dword ptr [eax*4 + 0x10630a00] */
  switch (EAX) {
    case 0: goto L_1063086f;
    case 1: goto L_10630753;
    case 2: goto L_106306de;
    case 3: goto L_10630618;
    case 4: goto L_10630656;
    case 5: goto L_106306b7;
    case 6: goto L_10630705;
    case 7: goto L_1063072c;
    case 8: goto L_1063079a;
    case 9: goto L_10630694;
    case 10: goto L_10630950;
    default: x86_unimpl("switch@0x10630611 out of table"); return;
  }
L_10630618:;
  /* 10630618 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1063061b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1063061e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10630621 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10630624 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10630627 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1063062b ja 0x10630651 */
  if ((!C.cf&&!C.zf)) goto L_10630651;
  /* 1063062d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10630630 jmp dword ptr [ecx*4 + 0x10630a7f] */
  switch (ECX) {
    case 0: goto L_10630637;
    case 1: goto L_10630641;
    case 2: goto L_10630647;
    case 3: goto L_1063064d;
    case 4: goto L_10630675;
    case 5: goto L_1063067f;
    case 6: goto L_10630685;
    case 7: goto L_1063068b;
    default: x86_unimpl("switch@0x10630630 out of table"); return;
  }
L_10630637:;
  /* 10630637 mov dword ptr [0x1064e788], 1 */
  w32((uint32_t)(0x1064e788), (0x1u));
L_10630641:;
  /* 10630641 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 10630645 jmp 0x10630651 */
  goto L_10630651;
L_10630647:;
  /* 10630647 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 1063064b jmp 0x10630651 */
  goto L_10630651;
L_1063064d:;
  /* 1063064d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_10630651:;
  /* 10630651 jmp 0x10630950 */
  goto L_10630950;
L_10630656:;
  /* 10630656 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10630659 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1063065c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1063065f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10630662 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10630665 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10630669 ja 0x1063068f */
  if ((!C.cf&&!C.zf)) goto L_1063068f;
  /* 1063066b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1063066e jmp dword ptr [ecx*4 + 0x10630a8f] */
  switch (ECX) {
    case 0: goto L_10630675;
    case 1: goto L_1063067f;
    case 2: goto L_10630685;
    case 3: goto L_1063068b;
    default: x86_unimpl("switch@0x1063066e out of table"); return;
  }
L_10630675:;
  /* 10630675 mov dword ptr [0x1064e788], 1 */
  w32((uint32_t)(0x1064e788), (0x1u));
L_1063067f:;
  /* 1063067f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 10630683 jmp 0x1063068f */
  goto L_1063068f;
L_10630685:;
  /* 10630685 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 10630689 jmp 0x1063068f */
  goto L_1063068f;
L_1063068b:;
  /* 1063068b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_1063068f:;
  /* 1063068f jmp 0x10630950 */
  goto L_10630950;
L_10630694:;
  /* 10630694 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10630697 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1063069a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1063069e je 0x106306a8 */
  if (C.zf) goto L_106306a8;
  /* 106306a0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106306a4 je 0x106306ae */
  if (C.zf) goto L_106306ae;
  /* 106306a6 jmp 0x106306b2 */
  goto L_106306b2;
L_106306a8:;
  /* 106306a8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 106306ac jmp 0x106306b2 */
  goto L_106306b2;
L_106306ae:;
  /* 106306ae mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_106306b2:;
  /* 106306b2 jmp 0x10630950 */
  goto L_10630950;
L_106306b7:;
  /* 106306b7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106306ba mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 106306bd cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106306c1 je 0x106306cb */
  if (C.zf) goto L_106306cb;
  /* 106306c3 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106306c7 je 0x106306d5 */
  if (C.zf) goto L_106306d5;
  /* 106306c9 jmp 0x106306d9 */
  goto L_106306d9;
L_106306cb:;
  /* 106306cb mov dword ptr [0x1064e788], 1 */
  w32((uint32_t)(0x1064e788), (0x1u));
L_106306d5:;
  /* 106306d5 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_106306d9:;
  /* 106306d9 jmp 0x10630950 */
  goto L_10630950;
L_106306de:;
  /* 106306de mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106306e1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 106306e4 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106306e8 je 0x106306f2 */
  if (C.zf) goto L_106306f2;
  /* 106306ea cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106306ee je 0x106306fc */
  if (C.zf) goto L_106306fc;
  /* 106306f0 jmp 0x10630700 */
  goto L_10630700;
L_106306f2:;
  /* 106306f2 mov dword ptr [0x1064e788], 1 */
  w32((uint32_t)(0x1064e788), (0x1u));
L_106306fc:;
  /* 106306fc mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_10630700:;
  /* 10630700 jmp 0x10630950 */
  goto L_10630950;
L_10630705:;
  /* 10630705 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10630708 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 1063070b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1063070f je 0x10630719 */
  if (C.zf) goto L_10630719;
  /* 10630711 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10630715 je 0x10630723 */
  if (C.zf) goto L_10630723;
  /* 10630717 jmp 0x10630727 */
  goto L_10630727;
L_10630719:;
  /* 10630719 mov dword ptr [0x1064e788], 1 */
  w32((uint32_t)(0x1064e788), (0x1u));
L_10630723:;
  /* 10630723 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_10630727:;
  /* 10630727 jmp 0x10630950 */
  goto L_10630950;
L_1063072c:;
  /* 1063072c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1063072f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10630732 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10630736 je 0x10630740 */
  if (C.zf) goto L_10630740;
  /* 10630738 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1063073c je 0x1063074a */
  if (C.zf) goto L_1063074a;
  /* 1063073e jmp 0x1063074e */
  goto L_1063074e;
L_10630740:;
  /* 10630740 mov dword ptr [0x1064e788], 1 */
  w32((uint32_t)(0x1064e788), (0x1u));
L_1063074a:;
  /* 1063074a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_1063074e:;
  /* 1063074e jmp 0x10630950 */
  goto L_10630950;
L_10630753:;
  /* 10630753 push 0x1064a7f4 */
  push32((uint32_t)(0x1064a7f4u));
  /* 10630758 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1063075b push ecx */
  push32((uint32_t)(ECX));
  /* 1063075c call 0x10630fb0 */
  push32(0x10630761u); f_10630fb0();
  /* 10630761 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10630764 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10630766 jne 0x10630773 */
  if (!C.zf) goto L_10630773;
  /* 10630768 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1063076b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1063076e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10630771 jmp 0x10630791 */
  goto L_10630791;
L_10630773:;
  /* 10630773 push 0x1064a7f0 */
  push32((uint32_t)(0x1064a7f0u));
  /* 10630778 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1063077b push eax */
  push32((uint32_t)(EAX));
  /* 1063077c call 0x10630fb0 */
  push32(0x10630781u); f_10630fb0();
  /* 10630781 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10630784 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10630786 jne 0x10630791 */
  if (!C.zf) goto L_10630791;
  /* 10630788 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1063078b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1063078e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10630791:;
  /* 10630791 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 10630795 jmp 0x10630950 */
  goto L_10630950;
L_1063079a:;
  /* 1063079a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1063079d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106307a1 jg 0x106307b1 */
  if ((!C.zf&&C.sf==C.of)) goto L_106307b1;
  /* 106307a3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106307a6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 106307ac mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 106307af jmp 0x106307bd */
  goto L_106307bd;
L_106307b1:;
  /* 106307b1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106307b4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 106307ba mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_106307bd:;
  /* 106307bd cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106307c1 jle 0x10630864 */
  if ((C.zf||C.sf!=C.of)) goto L_10630864;
  /* 106307c7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106307ca cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106307cd jbe 0x10630864 */
  if ((C.cf||C.zf)) goto L_10630864;
  /* 106307d3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106307d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106307d8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106307da mov ecx, dword ptr [0x1064cc98] */
  ECX = (r32((uint32_t)(0x1064cc98)));
  /* 106307e0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106307e2 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 106307e6 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 106307ec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106307ee je 0x10630827 */
  if (C.zf) goto L_10630827;
  /* 106307f0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106307f3 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106307f6 jbe 0x10630827 */
  if ((C.cf||C.zf)) goto L_10630827;
  /* 106307f8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106307fb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106307fd mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10630800 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10630802 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10630804 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10630807 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10630809 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1063080c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1063080f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10630811 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10630814 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10630817 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1063081a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1063081d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1063081f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10630822 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10630825 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10630827:;
  /* 10630827 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1063082a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1063082c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1063082f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10630831 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10630833 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10630836 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10630838 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1063083b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1063083e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10630840 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10630843 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10630846 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10630849 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1063084c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1063084e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10630851 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10630854 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10630856 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10630859 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1063085c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1063085f jmp 0x106307bd */
  goto L_106307bd;
L_10630864:;
  /* 10630864 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10630867 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1063086a jmp 0x10630586 */
  goto L_10630586;
L_1063086f:;
  /* 1063086f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10630872 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10630875 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10630877 je 0x10630942 */
  if (C.zf) goto L_10630942;
  /* 1063087d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10630880 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10630883 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10630886:;
  /* 10630886 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10630889 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1063088c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1063088e je 0x10630940 */
  if (C.zf) goto L_10630940;
  /* 10630894 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10630897 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1063089a je 0x10630940 */
  if (C.zf) goto L_10630940;
  /* 106308a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106308a3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106308a6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106308a9 jne 0x106308b9 */
  if (!C.zf) goto L_106308b9;
  /* 106308ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106308ae add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106308b1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 106308b4 jmp 0x10630940 */
  goto L_10630940;
L_106308b9:;
  /* 106308b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106308bc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106308be mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 106308c0 mov edx, dword ptr [0x1064cc98] */
  EDX = (r32((uint32_t)(0x1064cc98)));
  /* 106308c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106308c8 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 106308cc and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 106308d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106308d3 je 0x1063090c */
  if (C.zf) goto L_1063090c;
  /* 106308d5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106308d8 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106308db jbe 0x1063090c */
  if ((C.cf||C.zf)) goto L_1063090c;
  /* 106308dd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106308e0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106308e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106308e5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106308e7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 106308e9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106308ec mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106308ee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106308f1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106308f4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 106308f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106308f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106308fc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 106308ff mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10630902 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10630904 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10630907 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1063090a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1063090c:;
  /* 1063090c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1063090f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10630911 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10630914 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10630916 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10630918 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1063091b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1063091d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10630920 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10630923 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10630925 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10630928 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1063092b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1063092e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10630931 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10630933 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10630936 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10630939 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1063093b jmp 0x10630886 */
  goto L_10630886;
L_10630940:;
  /* 10630940 jmp 0x1063094b */
  goto L_1063094b;
L_10630942:;
  /* 10630942 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10630945 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10630948 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1063094b:;
  /* 1063094b jmp 0x10630586 */
  goto L_10630586;
L_10630950:;
  /* 10630950 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10630954 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10630956 je 0x1063097c */
  if (C.zf) goto L_1063097c;
  /* 10630958 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1063095b push edx */
  push32((uint32_t)(EDX));
  /* 1063095c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1063095f push eax */
  push32((uint32_t)(EAX));
  /* 10630960 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10630963 push ecx */
  push32((uint32_t)(ECX));
  /* 10630964 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10630967 push edx */
  push32((uint32_t)(EDX));
  /* 10630968 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1063096b push eax */
  push32((uint32_t)(EAX));
  /* 1063096c call 0x1062fdb0 */
  push32(0x10630971u); f_1062fdb0();
  /* 10630971 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10630974 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10630977 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1063097a jmp 0x106309f7 */
  goto L_106309f7;
L_1063097c:;
  /* 1063097c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1063097f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10630981 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10630983 mov ecx, dword ptr [0x1064cc98] */
  ECX = (r32((uint32_t)(0x1064cc98)));
  /* 10630989 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1063098b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1063098f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10630995 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10630997 je 0x106309c8 */
  if (C.zf) goto L_106309c8;
  /* 10630999 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1063099c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1063099e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106309a1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106309a3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 106309a5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106309a8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106309aa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106309ad mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106309b0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 106309b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106309b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106309b8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 106309bb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106309be mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106309c0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106309c3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106309c6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_106309c8:;
  /* 106309c8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106309cb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106309cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106309d0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106309d2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 106309d4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106309d7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106309d9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106309dc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106309df mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 106309e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106309e4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106309e7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 106309ea mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106309ed mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106309ef sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106309f2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106309f5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_106309f7:;
  /* 106309f7 jmp 0x10630586 */
  goto L_10630586;
L_106309fc:;
  /* 106309fc mov esp, ebp */
  ESP = (EBP);
  /* 106309fe pop ebp */
  EBP = (pop32());
  /* 106309ff ret  */
  ESPCHK(0x10630580u, _esp0);
  ESP += 4; return;
}

/* FUN_10010aa0 @ 0x10630aa0 (650 bytes, 178 insns) */
void f_10630aa0(void) {
  FTRACE(0x10630aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10630aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10630aa1 mov ebp, esp */
  EBP = (ESP);
  /* 10630aa3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10630aa9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10630aad jne 0x10630c09 */
  if (!C.zf) goto L_10630c09;
  /* 10630ab3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10630ab6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 10630abc lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 10630ac2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10630ac5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10630acc mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 10630ad6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10630ad8 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10630ade push edx */
  push32((uint32_t)(EDX));
  /* 10630adf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10630ae2 push eax */
  push32((uint32_t)(EAX));
  /* 10630ae3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10630ae6 push ecx */
  push32((uint32_t)(ECX));
  /* 10630ae7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10630aea push edx */
  push32((uint32_t)(EDX));
  /* 10630aeb call 0x10631ec0 */
  push32(0x10630af0u); f_10631ec0();
  /* 10630af0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10630af3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10630af6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10630afa jne 0x10630b8f */
  if (!C.zf) goto L_10630b8f;
  /* 10630b00 call dword ptr [0x106502ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502ac))), 0x10630b06u);
  /* 10630b06 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10630b09 je 0x10630b10 */
  if (C.zf) goto L_10630b10;
  /* 10630b0b jmp 0x10630bed */
  goto L_10630bed;
L_10630b10:;
  /* 10630b10 push 0 */
  push32((uint32_t)(0x0u));
  /* 10630b12 push 0 */
  push32((uint32_t)(0x0u));
  /* 10630b14 push 0 */
  push32((uint32_t)(0x0u));
  /* 10630b16 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10630b19 push eax */
  push32((uint32_t)(EAX));
  /* 10630b1a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10630b1d push ecx */
  push32((uint32_t)(ECX));
  /* 10630b1e call 0x10631ec0 */
  push32(0x10630b23u); f_10631ec0();
  /* 10630b23 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10630b26 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 10630b2c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10630b33 jne 0x10630b3a */
  if (!C.zf) goto L_10630b3a;
  /* 10630b35 jmp 0x10630bed */
  goto L_10630bed;
L_10630b3a:;
  /* 10630b3a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 10630b3c push 0x1064a7fc */
  push32((uint32_t)(0x1064a7fcu));
  /* 10630b41 push 2 */
  push32((uint32_t)(0x2u));
  /* 10630b43 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10630b49 push edx */
  push32((uint32_t)(EDX));
  /* 10630b4a call 0x106228e0 */
  push32(0x10630b4fu); f_106228e0();
  /* 10630b4f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10630b52 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10630b55 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10630b59 jne 0x10630b60 */
  if (!C.zf) goto L_10630b60;
  /* 10630b5b jmp 0x10630bed */
  goto L_10630bed;
L_10630b60:;
  /* 10630b60 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10630b67 push 0 */
  push32((uint32_t)(0x0u));
  /* 10630b69 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 10630b6f push eax */
  push32((uint32_t)(EAX));
  /* 10630b70 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10630b73 push ecx */
  push32((uint32_t)(ECX));
  /* 10630b74 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10630b77 push edx */
  push32((uint32_t)(EDX));
  /* 10630b78 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10630b7b push eax */
  push32((uint32_t)(EAX));
  /* 10630b7c call 0x10631ec0 */
  push32(0x10630b81u); f_10631ec0();
  /* 10630b81 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10630b84 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10630b87 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10630b8b jne 0x10630b8f */
  if (!C.zf) goto L_10630b8f;
  /* 10630b8d jmp 0x10630bed */
  goto L_10630bed;
L_10630b8f:;
  /* 10630b8f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10630b91 push 0x1064a7fc */
  push32((uint32_t)(0x1064a7fcu));
  /* 10630b96 push 2 */
  push32((uint32_t)(0x2u));
  /* 10630b98 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10630b9b push ecx */
  push32((uint32_t)(ECX));
  /* 10630b9c call 0x106228e0 */
  push32(0x10630ba1u); f_106228e0();
  /* 10630ba1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10630ba4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 10630baa mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10630bac mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10630bb2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10630bb5 jne 0x10630bb9 */
  if (!C.zf) goto L_10630bb9;
  /* 10630bb7 jmp 0x10630bed */
  goto L_10630bed;
L_10630bb9:;
  /* 10630bb9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10630bbc push ecx */
  push32((uint32_t)(ECX));
  /* 10630bbd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10630bc0 push edx */
  push32((uint32_t)(EDX));
  /* 10630bc1 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10630bc7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10630bc9 push ecx */
  push32((uint32_t)(ECX));
  /* 10630bca call 0x10626100 */
  push32(0x10630bcfu); f_10626100();
  /* 10630bcf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10630bd2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10630bd6 je 0x10630be6 */
  if (C.zf) goto L_10630be6;
  /* 10630bd8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10630bda mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10630bdd push edx */
  push32((uint32_t)(EDX));
  /* 10630bde call 0x10623370 */
  push32(0x10630be3u); f_10623370();
  /* 10630be3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10630be6:;
  /* 10630be6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10630be8 jmp 0x10630d26 */
  goto L_10630d26;
L_10630bed:;
  /* 10630bed cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10630bf1 je 0x10630c01 */
  if (C.zf) goto L_10630c01;
  /* 10630bf3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10630bf5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10630bf8 push eax */
  push32((uint32_t)(EAX));
  /* 10630bf9 call 0x10623370 */
  push32(0x10630bfeu); f_10623370();
  /* 10630bfe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10630c01:;
  /* 10630c01 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10630c04 jmp 0x10630d26 */
  goto L_10630d26;
L_10630c09:;
  /* 10630c09 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10630c0d jne 0x10630d23 */
  if (!C.zf) goto L_10630d23;
  /* 10630c13 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 10630c1d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10630c20 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 10630c26 push 0 */
  push32((uint32_t)(0x0u));
  /* 10630c28 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10630c2e push edx */
  push32((uint32_t)(EDX));
  /* 10630c2f push 0x1064e6a0 */
  push32((uint32_t)(0x1064e6a0u));
  /* 10630c34 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10630c37 push eax */
  push32((uint32_t)(EAX));
  /* 10630c38 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10630c3b push ecx */
  push32((uint32_t)(ECX));
  /* 10630c3c call 0x10631d20 */
  push32(0x10630c41u); f_10631d20();
  /* 10630c41 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10630c44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10630c46 jne 0x10630c50 */
  if (!C.zf) goto L_10630c50;
  /* 10630c48 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10630c4b jmp 0x10630d26 */
  goto L_10630d26;
L_10630c50:;
  /* 10630c50 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10630c56 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10630c59 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 10630c63 jmp 0x10630c74 */
  goto L_10630c74;
L_10630c65:;
  /* 10630c65 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10630c6b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10630c6e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_10630c74:;
  /* 10630c74 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10630c7b jge 0x10630d1f */
  if ((C.sf==C.of)) goto L_10630d1f;
  /* 10630c81 cmp dword ptr [0x1064cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1064cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10630c88 jle 0x10630cbb */
  if ((C.zf||C.sf!=C.of)) goto L_10630cbb;
  /* 10630c8a push 4 */
  push32((uint32_t)(0x4u));
  /* 10630c8c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10630c92 mov dl, byte ptr [ecx*2 + 0x1064e6a0] */
  DL = (r8((uint32_t)(ECX*2 + 0x1064e6a0)));
  /* 10630c99 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10630c9f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10630ca5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10630caa push eax */
  push32((uint32_t)(EAX));
  /* 10630cab call 0x106288f0 */
  push32(0x10630cb0u); f_106288f0();
  /* 10630cb0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10630cb3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 10630cb9 jmp 0x10630cee */
  goto L_10630cee;
L_10630cbb:;
  /* 10630cbb mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10630cc1 mov dl, byte ptr [ecx*2 + 0x1064e6a0] */
  DL = (r8((uint32_t)(ECX*2 + 0x1064e6a0)));
  /* 10630cc8 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10630cce mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10630cd4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10630cd9 mov ecx, dword ptr [0x1064cc98] */
  ECX = (r32((uint32_t)(0x1064cc98)));
  /* 10630cdf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10630ce1 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10630ce5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10630ce8 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_10630cee:;
  /* 10630cee cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10630cf5 je 0x10630d18 */
  if (C.zf) goto L_10630d18;
  /* 10630cf7 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10630cfd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10630d00 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10630d03 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 10630d0a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10630d0e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10630d14 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10630d16 jmp 0x10630d1a */
  goto L_10630d1a;
L_10630d18:;
  /* 10630d18 jmp 0x10630d1f */
  goto L_10630d1f;
L_10630d1a:;
  /* 10630d1a jmp 0x10630c65 */
  goto L_10630c65;
L_10630d1f:;
  /* 10630d1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10630d21 jmp 0x10630d26 */
  goto L_10630d26;
L_10630d23:;
  /* 10630d23 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10630d26:;
  /* 10630d26 mov esp, ebp */
  ESP = (EBP);
  /* 10630d28 pop ebp */
  EBP = (pop32());
  /* 10630d29 ret  */
  ESPCHK(0x10630aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010d30 @ 0x10630d30 (10 bytes, 5 insns) */
void f_10630d30(void) {
  FTRACE(0x10630d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10630d30 push ebp */
  push32((uint32_t)(EBP));
  /* 10630d31 mov ebp, esp */
  EBP = (ESP);
  /* 10630d33 mov eax, dword ptr [0x1064dd88] */
  EAX = (r32((uint32_t)(0x1064dd88)));
  /* 10630d38 pop ebp */
  EBP = (pop32());
  /* 10630d39 ret  */
  ESPCHK(0x10630d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10010d40 @ 0x10630d40 (575 bytes, 196 insns) */
void f_10630d40(void) {
  FTRACE(0x10630d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10630d40 push ebp */
  push32((uint32_t)(EBP));
  /* 10630d41 mov ebp, esp */
  EBP = (ESP);
  /* 10630d43 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10630d45 push 0x1064a808 */
  push32((uint32_t)(0x1064a808u));
  /* 10630d4a push 0x1062b9e8 */
  push32((uint32_t)(0x1062b9e8u));
  /* 10630d4f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10630d55 push eax */
  push32((uint32_t)(EAX));
  /* 10630d56 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10630d5d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10630d60 push ebx */
  push32((uint32_t)(EBX));
  /* 10630d61 push esi */
  push32((uint32_t)(ESI));
  /* 10630d62 push edi */
  push32((uint32_t)(EDI));
  /* 10630d63 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10630d66 cmp dword ptr [0x1064e6ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e6ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10630d6d jne 0x10630dbe */
  if (!C.zf) goto L_10630dbe;
  /* 10630d6f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10630d72 push eax */
  push32((uint32_t)(EAX));
  /* 10630d73 push 1 */
  push32((uint32_t)(0x1u));
  /* 10630d75 push 0x10649f3c */
  push32((uint32_t)(0x10649f3cu));
  /* 10630d7a push 1 */
  push32((uint32_t)(0x1u));
  /* 10630d7c call dword ptr [0x1065032c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1065032c))), 0x10630d82u);
  /* 10630d82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10630d84 je 0x10630d92 */
  if (C.zf) goto L_10630d92;
  /* 10630d86 mov dword ptr [0x1064e6ac], 1 */
  w32((uint32_t)(0x1064e6ac), (0x1u));
  /* 10630d90 jmp 0x10630dbe */
  goto L_10630dbe;
L_10630d92:;
  /* 10630d92 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 10630d95 push ecx */
  push32((uint32_t)(ECX));
  /* 10630d96 push 1 */
  push32((uint32_t)(0x1u));
  /* 10630d98 push 0x10649f38 */
  push32((uint32_t)(0x10649f38u));
  /* 10630d9d push 1 */
  push32((uint32_t)(0x1u));
  /* 10630d9f push 0 */
  push32((uint32_t)(0x0u));
  /* 10630da1 call dword ptr [0x10650328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650328))), 0x10630da7u);
  /* 10630da7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10630da9 je 0x10630db7 */
  if (C.zf) goto L_10630db7;
  /* 10630dab mov dword ptr [0x1064e6ac], 2 */
  w32((uint32_t)(0x1064e6ac), (0x2u));
  /* 10630db5 jmp 0x10630dbe */
  goto L_10630dbe;
L_10630db7:;
  /* 10630db7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10630db9 jmp 0x10630f99 */
  goto L_10630f99;
L_10630dbe:;
  /* 10630dbe cmp dword ptr [0x1064e6ac], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1064e6ac))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10630dc5 jne 0x10630de2 */
  if (!C.zf) goto L_10630de2;
  /* 10630dc7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10630dca push edx */
  push32((uint32_t)(EDX));
  /* 10630dcb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10630dce push eax */
  push32((uint32_t)(EAX));
  /* 10630dcf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10630dd2 push ecx */
  push32((uint32_t)(ECX));
  /* 10630dd3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10630dd6 push edx */
  push32((uint32_t)(EDX));
  /* 10630dd7 call dword ptr [0x1065032c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1065032c))), 0x10630dddu);
  /* 10630ddd jmp 0x10630f99 */
  goto L_10630f99;
L_10630de2:;
  /* 10630de2 cmp dword ptr [0x1064e6ac], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1064e6ac))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10630de9 jne 0x10630f97 */
  if (!C.zf) goto L_10630f97;
  /* 10630def cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10630df3 jne 0x10630dfd */
  if (!C.zf) goto L_10630dfd;
  /* 10630df5 mov eax, dword ptr [0x1064e620] */
  EAX = (r32((uint32_t)(0x1064e620)));
  /* 10630dfa mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_10630dfd:;
  /* 10630dfd push 0 */
  push32((uint32_t)(0x0u));
  /* 10630dff push 0 */
  push32((uint32_t)(0x0u));
  /* 10630e01 push 0 */
  push32((uint32_t)(0x0u));
  /* 10630e03 push 0 */
  push32((uint32_t)(0x0u));
  /* 10630e05 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10630e08 push ecx */
  push32((uint32_t)(ECX));
  /* 10630e09 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10630e0c push edx */
  push32((uint32_t)(EDX));
  /* 10630e0d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10630e12 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10630e15 push eax */
  push32((uint32_t)(EAX));
  /* 10630e16 call dword ptr [0x106502d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502d8))), 0x10630e1cu);
  /* 10630e1c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10630e1f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10630e23 jne 0x10630e2c */
  if (!C.zf) goto L_10630e2c;
  /* 10630e25 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10630e27 jmp 0x10630f99 */
  goto L_10630f99;
L_10630e2c:;
  /* 10630e2c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10630e33 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10630e36 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10630e39 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10630e3b call 0x10625a80 */
  push32(0x10630e40u); f_10625a80();
  /* 10630e40 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 10630e43 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10630e46 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10630e49 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10630e4c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10630e4f push edx */
  push32((uint32_t)(EDX));
  /* 10630e50 push 0 */
  push32((uint32_t)(0x0u));
  /* 10630e52 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10630e55 push eax */
  push32((uint32_t)(EAX));
  /* 10630e56 call 0x10626650 */
  push32(0x10630e5bu); f_10626650();
  /* 10630e5b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10630e5e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10630e65 jmp 0x10630e7e */
  goto L_10630e7e;
  /* 10630e67 mov eax, 1 */
  EAX = (0x1u);
  /* 10630e6c ret  */
  ESPCHK(0x10630d40u, _esp0);
  ESP += 4; return;
  /* 10630e6d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10630e70 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10630e77 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10630e7e:;
  /* 10630e7e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10630e82 jne 0x10630e8b */
  if (!C.zf) goto L_10630e8b;
  /* 10630e84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10630e86 jmp 0x10630f99 */
  goto L_10630f99;
L_10630e8b:;
  /* 10630e8b push 0 */
  push32((uint32_t)(0x0u));
  /* 10630e8d push 0 */
  push32((uint32_t)(0x0u));
  /* 10630e8f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10630e92 push ecx */
  push32((uint32_t)(ECX));
  /* 10630e93 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10630e96 push edx */
  push32((uint32_t)(EDX));
  /* 10630e97 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10630e9a push eax */
  push32((uint32_t)(EAX));
  /* 10630e9b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10630e9e push ecx */
  push32((uint32_t)(ECX));
  /* 10630e9f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10630ea4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10630ea7 push edx */
  push32((uint32_t)(EDX));
  /* 10630ea8 call dword ptr [0x106502d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502d8))), 0x10630eaeu);
  /* 10630eae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10630eb0 jne 0x10630eb9 */
  if (!C.zf) goto L_10630eb9;
  /* 10630eb2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10630eb4 jmp 0x10630f99 */
  goto L_10630f99;
L_10630eb9:;
  /* 10630eb9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10630ec0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10630ec3 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 10630ec7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10630eca and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10630ecc call 0x10625a80 */
  push32(0x10630ed1u); f_10625a80();
  /* 10630ed1 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 10630ed4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10630ed7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10630eda mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10630edd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10630ee4 jmp 0x10630efd */
  goto L_10630efd;
  /* 10630ee6 mov eax, 1 */
  EAX = (0x1u);
  /* 10630eeb ret  */
  ESPCHK(0x10630d40u, _esp0);
  ESP += 4; return;
  /* 10630eec mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10630eef mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10630ef6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10630efd:;
  /* 10630efd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10630f01 jne 0x10630f0a */
  if (!C.zf) goto L_10630f0a;
  /* 10630f03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10630f05 jmp 0x10630f99 */
  goto L_10630f99;
L_10630f0a:;
  /* 10630f0a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10630f0e jne 0x10630f19 */
  if (!C.zf) goto L_10630f19;
  /* 10630f10 mov edx, dword ptr [0x1064e610] */
  EDX = (r32((uint32_t)(0x1064e610)));
  /* 10630f16 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_10630f19:;
  /* 10630f19 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10630f1c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10630f1f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 10630f25 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10630f28 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10630f2b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 10630f32 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10630f35 push ecx */
  push32((uint32_t)(ECX));
  /* 10630f36 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10630f39 push edx */
  push32((uint32_t)(EDX));
  /* 10630f3a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10630f3d push eax */
  push32((uint32_t)(EAX));
  /* 10630f3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10630f41 push ecx */
  push32((uint32_t)(ECX));
  /* 10630f42 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10630f45 push edx */
  push32((uint32_t)(EDX));
  /* 10630f46 call dword ptr [0x10650328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650328))), 0x10630f4cu);
  /* 10630f4c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10630f4f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10630f52 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10630f55 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10630f57 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 10630f5c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10630f62 je 0x10630f78 */
  if (C.zf) goto L_10630f78;
  /* 10630f64 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10630f67 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10630f6a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10630f6c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10630f70 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10630f76 je 0x10630f7c */
  if (C.zf) goto L_10630f7c;
L_10630f78:;
  /* 10630f78 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10630f7a jmp 0x10630f99 */
  goto L_10630f99;
L_10630f7c:;
  /* 10630f7c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10630f7f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10630f81 push eax */
  push32((uint32_t)(EAX));
  /* 10630f82 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10630f85 push ecx */
  push32((uint32_t)(ECX));
  /* 10630f86 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10630f89 push edx */
  push32((uint32_t)(EDX));
  /* 10630f8a call 0x1062a7d0 */
  push32(0x10630f8fu); f_1062a7d0();
  /* 10630f8f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10630f92 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10630f95 jmp 0x10630f99 */
  goto L_10630f99;
L_10630f97:;
  /* 10630f97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10630f99:;
  /* 10630f99 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 10630f9c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10630f9f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10630fa6 pop edi */
  EDI = (pop32());
  /* 10630fa7 pop esi */
  ESI = (pop32());
  /* 10630fa8 pop ebx */
  EBX = (pop32());
  /* 10630fa9 mov esp, ebp */
  ESP = (EBP);
  /* 10630fab pop ebp */
  EBP = (pop32());
  /* 10630fac ret  */
  ESPCHK(0x10630d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10010fb0 @ 0x10630fb0 (208 bytes, 85 insns) */
void f_10630fb0(void) {
  FTRACE(0x10630fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10630fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10630fb1 mov ebp, esp */
  EBP = (ESP);
  /* 10630fb3 push edi */
  push32((uint32_t)(EDI));
  /* 10630fb4 push esi */
  push32((uint32_t)(ESI));
  /* 10630fb5 push ebx */
  push32((uint32_t)(EBX));
  /* 10630fb6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10630fb9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10630fbc lea eax, [0x1064e608] */
  EAX = ((uint32_t)(0x1064e608));
  /* 10630fc2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10630fc6 jne 0x10631003 */
  if (!C.zf) goto L_10631003;
  /* 10630fc8 mov al, 0xff */
  AL = (0xffu);
  /* 10630fca mov edi, edi */
  EDI = (EDI);
L_10630fcc:;
  /* 10630fcc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10630fce je 0x10630ffe */
  if (C.zf) goto L_10630ffe;
  /* 10630fd0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10630fd2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10630fd3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 10630fd5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10630fd6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10630fd8 je 0x10630fcc */
  if (C.zf) goto L_10630fcc;
  /* 10630fda sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10630fdc cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10630fde sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10630fe0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10630fe3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10630fe5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10630fe7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 10630fe9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10630feb cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10630fed sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10630fef and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10630ff2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10630ff4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10630ff6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10630ff8 je 0x10630fcc */
  if (C.zf) goto L_10630fcc;
  /* 10630ffa sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10630ffc sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_10630ffe:;
  /* 10630ffe movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 10631001 jmp 0x1063107b */
  goto L_1063107b;
L_10631003:;
  /* 10631003 lock inc dword ptr [0x1064e79c] */
  x86_unimpl("lock inc @ 0x10631003");
  /* 1063100a cmp dword ptr [0x1064e78c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e78c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10631011 jg 0x10631017 */
  if ((!C.zf&&C.sf==C.of)) goto L_10631017;
  /* 10631013 push 0 */
  push32((uint32_t)(0x0u));
  /* 10631015 jmp 0x1063102c */
  goto L_1063102c;
L_10631017:;
  /* 10631017 lock dec dword ptr [0x1064e79c] */
  x86_unimpl("lock dec @ 0x10631017");
  /* 1063101e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10631020 call 0x106262e0 */
  push32(0x10631025u); f_106262e0();
  /* 10631025 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_1063102c:;
  /* 1063102c mov eax, 0xff */
  EAX = (0xffu);
  /* 10631031 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10631033 nop  */
  /* nop */
L_10631034:;
  /* 10631034 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10631036 je 0x1063105f */
  if (C.zf) goto L_1063105f;
  /* 10631038 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1063103a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1063103b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1063103d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1063103e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10631040 je 0x10631034 */
  if (C.zf) goto L_10631034;
  /* 10631042 push eax */
  push32((uint32_t)(EAX));
  /* 10631043 push ebx */
  push32((uint32_t)(EBX));
  /* 10631044 call 0x10632120 */
  push32(0x10631049u); f_10632120();
  /* 10631049 mov ebx, eax */
  EBX = (EAX);
  /* 1063104b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1063104e call 0x10632120 */
  push32(0x10631053u); f_10632120();
  /* 10631053 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10631056 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10631058 je 0x10631034 */
  if (C.zf) goto L_10631034;
  /* 1063105a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1063105c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1063105f:;
  /* 1063105f mov ebx, eax */
  EBX = (EAX);
  /* 10631061 pop eax */
  EAX = (pop32());
  /* 10631062 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10631064 jne 0x1063106f */
  if (!C.zf) goto L_1063106f;
  /* 10631066 lock dec dword ptr [0x1064e79c] */
  x86_unimpl("lock dec @ 0x10631066");
  /* 1063106d jmp 0x10631079 */
  goto L_10631079;
L_1063106f:;
  /* 1063106f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10631071 call 0x10626380 */
  push32(0x10631076u); f_10626380();
  /* 10631076 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10631079:;
  /* 10631079 mov eax, ebx */
  EAX = (EBX);
L_1063107b:;
  /* 1063107b pop ebx */
  EBX = (pop32());
  /* 1063107c pop esi */
  ESI = (pop32());
  /* 1063107d pop edi */
  EDI = (pop32());
  /* 1063107e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1063107f ret  */
  ESPCHK(0x10630fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011080 @ 0x10631080 (257 bytes, 103 insns) */
void f_10631080(void) {
  FTRACE(0x10631080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10631080 push ebp */
  push32((uint32_t)(EBP));
  /* 10631081 mov ebp, esp */
  EBP = (ESP);
  /* 10631083 push edi */
  push32((uint32_t)(EDI));
  /* 10631084 push esi */
  push32((uint32_t)(ESI));
  /* 10631085 push ebx */
  push32((uint32_t)(EBX));
  /* 10631086 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10631089 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1063108b je 0x1063117a */
  if (C.zf) goto L_1063117a;
  /* 10631091 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10631094 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10631097 lea eax, [0x1064e608] */
  EAX = ((uint32_t)(0x1064e608));
  /* 1063109d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106310a1 jne 0x106310f1 */
  if (!C.zf) goto L_106310f1;
  /* 106310a3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 106310a5 mov bl, 0x5a */
  BL = (0x5au);
  /* 106310a7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 106310a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_106310ac:;
  /* 106310ac mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 106310ae or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 106310b0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 106310b2 je 0x106310d5 */
  if (C.zf) goto L_106310d5;
  /* 106310b4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 106310b6 je 0x106310d5 */
  if (C.zf) goto L_106310d5;
  /* 106310b8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 106310b9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 106310ba cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106310bc jb 0x106310c4 */
  if (C.cf) goto L_106310c4;
  /* 106310be cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106310c0 ja 0x106310c4 */
  if ((!C.cf&&!C.zf)) goto L_106310c4;
  /* 106310c2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_106310c4:;
  /* 106310c4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106310c6 jb 0x106310ce */
  if (C.cf) goto L_106310ce;
  /* 106310c8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106310ca ja 0x106310ce */
  if ((!C.cf&&!C.zf)) goto L_106310ce;
  /* 106310cc add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_106310ce:;
  /* 106310ce cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106310d0 jne 0x106310df */
  if (!C.zf) goto L_106310df;
  /* 106310d2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 106310d3 jne 0x106310ac */
  if (!C.zf) goto L_106310ac;
L_106310d5:;
  /* 106310d5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106310d7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106310d9 je 0x1063117a */
  if (C.zf) goto L_1063117a;
L_106310df:;
  /* 106310df mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 106310e4 jb 0x1063117a */
  if (C.cf) goto L_1063117a;
  /* 106310ea neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 106310ec jmp 0x1063117a */
  goto L_1063117a;
L_106310f1:;
  /* 106310f1 lock inc dword ptr [0x1064e79c] */
  x86_unimpl("lock inc @ 0x106310f1");
  /* 106310f8 cmp dword ptr [0x1064e78c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e78c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106310ff jg 0x10631105 */
  if ((!C.zf&&C.sf==C.of)) goto L_10631105;
  /* 10631101 push 0 */
  push32((uint32_t)(0x0u));
  /* 10631103 jmp 0x1063111e */
  goto L_1063111e;
L_10631105:;
  /* 10631105 lock dec dword ptr [0x1064e79c] */
  x86_unimpl("lock dec @ 0x10631105");
  /* 1063110c mov ebx, ecx */
  EBX = (ECX);
  /* 1063110e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10631110 call 0x106262e0 */
  push32(0x10631115u); f_106262e0();
  /* 10631115 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 1063111c mov ecx, ebx */
  ECX = (EBX);
L_1063111e:;
  /* 1063111e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10631120 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10631122 mov edi, edi */
  EDI = (EDI);
L_10631124:;
  /* 10631124 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10631126 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10631128 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1063112a je 0x1063114f */
  if (C.zf) goto L_1063114f;
  /* 1063112c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1063112e je 0x1063114f */
  if (C.zf) goto L_1063114f;
  /* 10631130 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10631131 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10631132 push ecx */
  push32((uint32_t)(ECX));
  /* 10631133 push eax */
  push32((uint32_t)(EAX));
  /* 10631134 push ebx */
  push32((uint32_t)(EBX));
  /* 10631135 call 0x10632120 */
  push32(0x1063113au); f_10632120();
  /* 1063113a mov ebx, eax */
  EBX = (EAX);
  /* 1063113c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1063113f call 0x10632120 */
  push32(0x10631144u); f_10632120();
  /* 10631144 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10631147 pop ecx */
  ECX = (pop32());
  /* 10631148 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1063114a jne 0x10631155 */
  if (!C.zf) goto L_10631155;
  /* 1063114c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1063114d jne 0x10631124 */
  if (!C.zf) goto L_10631124;
L_1063114f:;
  /* 1063114f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10631151 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10631153 je 0x1063115e */
  if (C.zf) goto L_1063115e;
L_10631155:;
  /* 10631155 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 1063115a jb 0x1063115e */
  if (C.cf) goto L_1063115e;
  /* 1063115c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_1063115e:;
  /* 1063115e pop eax */
  EAX = (pop32());
  /* 1063115f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10631161 jne 0x1063116c */
  if (!C.zf) goto L_1063116c;
  /* 10631163 lock dec dword ptr [0x1064e79c] */
  x86_unimpl("lock dec @ 0x10631163");
  /* 1063116a jmp 0x1063117a */
  goto L_1063117a;
L_1063116c:;
  /* 1063116c mov ebx, ecx */
  EBX = (ECX);
  /* 1063116e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10631170 call 0x10626380 */
  push32(0x10631175u); f_10626380();
  /* 10631175 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10631178 mov ecx, ebx */
  ECX = (EBX);
L_1063117a:;
  /* 1063117a mov eax, ecx */
  EAX = (ECX);
  /* 1063117c pop ebx */
  EBX = (pop32());
  /* 1063117d pop esi */
  ESI = (pop32());
  /* 1063117e pop edi */
  EDI = (pop32());
  /* 1063117f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10631180 ret  */
  ESPCHK(0x10631080u, _esp0);
  ESP += 4; return;
}

/* FUN_10011190 @ 0x10631190 (255 bytes, 88 insns) */
void f_10631190(void) {
  FTRACE(0x10631190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10631190 push ebp */
  push32((uint32_t)(EBP));
  /* 10631191 mov ebp, esp */
  EBP = (ESP);
  /* 10631193 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10631196:;
  /* 10631196 cmp dword ptr [0x1064cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1064cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1063119d jle 0x106311b6 */
  if ((C.zf||C.sf!=C.of)) goto L_106311b6;
  /* 1063119f push 8 */
  push32((uint32_t)(0x8u));
  /* 106311a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106311a4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106311a6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 106311a8 push ecx */
  push32((uint32_t)(ECX));
  /* 106311a9 call 0x106288f0 */
  push32(0x106311aeu); f_106288f0();
  /* 106311ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106311b1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 106311b4 jmp 0x106311cf */
  goto L_106311cf;
L_106311b6:;
  /* 106311b6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106311b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106311bb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106311bd mov ecx, dword ptr [0x1064cc98] */
  ECX = (r32((uint32_t)(0x1064cc98)));
  /* 106311c3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106311c5 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 106311c9 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 106311cc mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_106311cf:;
  /* 106311cf cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106311d3 je 0x106311e0 */
  if (C.zf) goto L_106311e0;
  /* 106311d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106311d8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106311db mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 106311de jmp 0x10631196 */
  goto L_10631196;
L_106311e0:;
  /* 106311e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106311e3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106311e5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106311e7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106311ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106311ed add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106311f0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 106311f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106311f6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106311f9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106311fd je 0x10631205 */
  if (C.zf) goto L_10631205;
  /* 106311ff cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10631203 jne 0x10631218 */
  if (!C.zf) goto L_10631218;
L_10631205:;
  /* 10631205 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10631208 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1063120a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1063120c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1063120f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10631212 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10631215 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10631218:;
  /* 10631218 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1063121f:;
  /* 1063121f cmp dword ptr [0x1064cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1064cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10631226 jle 0x1063123b */
  if ((C.zf||C.sf!=C.of)) goto L_1063123b;
  /* 10631228 push 4 */
  push32((uint32_t)(0x4u));
  /* 1063122a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1063122d push edx */
  push32((uint32_t)(EDX));
  /* 1063122e call 0x106288f0 */
  push32(0x10631233u); f_106288f0();
  /* 10631233 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10631236 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10631239 jmp 0x10631250 */
  goto L_10631250;
L_1063123b:;
  /* 1063123b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1063123e mov ecx, dword ptr [0x1064cc98] */
  ECX = (r32((uint32_t)(0x1064cc98)));
  /* 10631244 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10631246 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1063124a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1063124d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10631250:;
  /* 10631250 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10631254 je 0x1063127b */
  if (C.zf) goto L_1063127b;
  /* 10631256 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10631259 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1063125c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1063125f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 10631263 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10631266 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10631269 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1063126b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1063126d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10631270 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10631273 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10631276 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10631279 jmp 0x1063121f */
  goto L_1063121f;
L_1063127b:;
  /* 1063127b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1063127f jne 0x10631288 */
  if (!C.zf) goto L_10631288;
  /* 10631281 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10631284 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10631286 jmp 0x1063128b */
  goto L_1063128b;
L_10631288:;
  /* 10631288 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1063128b:;
  /* 1063128b mov esp, ebp */
  ESP = (EBP);
  /* 1063128d pop ebp */
  EBP = (pop32());
  /* 1063128e ret  */
  ESPCHK(0x10631190u, _esp0);
  ESP += 4; return;
}

/* FUN_10011290 @ 0x10631290 (17 bytes, 8 insns) */
void f_10631290(void) {
  FTRACE(0x10631290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10631290 push ebp */
  push32((uint32_t)(EBP));
  /* 10631291 mov ebp, esp */
  EBP = (ESP);
  /* 10631293 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10631296 push eax */
  push32((uint32_t)(EAX));
  /* 10631297 call 0x10631190 */
  push32(0x1063129cu); f_10631190();
  /* 1063129c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1063129f pop ebp */
  EBP = (pop32());
  /* 106312a0 ret  */
  ESPCHK(0x10631290u, _esp0);
  ESP += 4; return;
}

/* FUN_100112b0 @ 0x106312b0 (297 bytes, 106 insns) */
void f_106312b0(void) {
  FTRACE(0x106312b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106312b0 push ebp */
  push32((uint32_t)(EBP));
  /* 106312b1 mov ebp, esp */
  EBP = (ESP);
  /* 106312b3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106312b6 push esi */
  push32((uint32_t)(ESI));
L_106312b7:;
  /* 106312b7 cmp dword ptr [0x1064cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1064cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106312be jle 0x106312d7 */
  if ((C.zf||C.sf!=C.of)) goto L_106312d7;
  /* 106312c0 push 8 */
  push32((uint32_t)(0x8u));
  /* 106312c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106312c5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106312c7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 106312c9 push ecx */
  push32((uint32_t)(ECX));
  /* 106312ca call 0x106288f0 */
  push32(0x106312cfu); f_106288f0();
  /* 106312cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106312d2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 106312d5 jmp 0x106312f0 */
  goto L_106312f0;
L_106312d7:;
  /* 106312d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106312da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106312dc mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106312de mov ecx, dword ptr [0x1064cc98] */
  ECX = (r32((uint32_t)(0x1064cc98)));
  /* 106312e4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106312e6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 106312ea and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 106312ed mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_106312f0:;
  /* 106312f0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106312f4 je 0x10631301 */
  if (C.zf) goto L_10631301;
  /* 106312f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106312f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106312fc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 106312ff jmp 0x106312b7 */
  goto L_106312b7;
L_10631301:;
  /* 10631301 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10631304 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10631306 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10631308 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1063130b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1063130e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10631311 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10631314 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10631317 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1063131a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1063131e je 0x10631326 */
  if (C.zf) goto L_10631326;
  /* 10631320 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10631324 jne 0x10631339 */
  if (!C.zf) goto L_10631339;
L_10631326:;
  /* 10631326 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10631329 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1063132b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1063132d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10631330 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10631333 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10631336 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10631339:;
  /* 10631339 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10631340 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10631347:;
  /* 10631347 cmp dword ptr [0x1064cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1064cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1063134e jle 0x10631363 */
  if ((C.zf||C.sf!=C.of)) goto L_10631363;
  /* 10631350 push 4 */
  push32((uint32_t)(0x4u));
  /* 10631352 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10631355 push edx */
  push32((uint32_t)(EDX));
  /* 10631356 call 0x106288f0 */
  push32(0x1063135bu); f_106288f0();
  /* 1063135b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1063135e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10631361 jmp 0x10631378 */
  goto L_10631378;
L_10631363:;
  /* 10631363 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10631366 mov ecx, dword ptr [0x1064cc98] */
  ECX = (r32((uint32_t)(0x1064cc98)));
  /* 1063136c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1063136e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10631372 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10631375 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_10631378:;
  /* 10631378 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1063137c je 0x106313b9 */
  if (C.zf) goto L_106313b9;
  /* 1063137e push 0 */
  push32((uint32_t)(0x0u));
  /* 10631380 push 0xa */
  push32((uint32_t)(0xau));
  /* 10631382 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10631385 push eax */
  push32((uint32_t)(EAX));
  /* 10631386 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10631389 push ecx */
  push32((uint32_t)(ECX));
  /* 1063138a call 0x10632250 */
  push32(0x1063138fu); f_10632250();
  /* 1063138f mov ecx, eax */
  ECX = (EAX);
  /* 10631391 mov esi, edx */
  ESI = (EDX);
  /* 10631393 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10631396 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10631399 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1063139a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1063139c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1063139e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106313a1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 106313a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106313a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106313a9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106313ab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106313ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106313b1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106313b4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 106313b7 jmp 0x10631347 */
  goto L_10631347;
L_106313b9:;
  /* 106313b9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106313bd jne 0x106313ce */
  if (!C.zf) goto L_106313ce;
  /* 106313bf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106313c2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 106313c4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106313c7 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106313ca neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 106313cc jmp 0x106313d4 */
  goto L_106313d4;
L_106313ce:;
  /* 106313ce mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106313d1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_106313d4:;
  /* 106313d4 pop esi */
  ESI = (pop32());
  /* 106313d5 mov esp, ebp */
  ESP = (EBP);
  /* 106313d7 pop ebp */
  EBP = (pop32());
  /* 106313d8 ret  */
  ESPCHK(0x106312b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100113e0 @ 0x106313e0 (61 bytes, 18 insns) */
void f_106313e0(void) {
  FTRACE(0x106313e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106313e0 push ebp */
  push32((uint32_t)(EBP));
  /* 106313e1 mov ebp, esp */
  EBP = (ESP);
  /* 106313e3 cmp dword ptr [0x1064e768], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e768))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106313ea jne 0x1063141b */
  if (!C.zf) goto L_1063141b;
  /* 106313ec push 0xb */
  push32((uint32_t)(0xbu));
  /* 106313ee call 0x106262e0 */
  push32(0x106313f3u); f_106262e0();
  /* 106313f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106313f6 cmp dword ptr [0x1064e768], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e768))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106313fd jne 0x10631411 */
  if (!C.zf) goto L_10631411;
  /* 106313ff call 0x10631440 */
  push32(0x10631404u); f_10631440();
  /* 10631404 mov eax, dword ptr [0x1064e768] */
  EAX = (r32((uint32_t)(0x1064e768)));
  /* 10631409 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1063140c mov dword ptr [0x1064e768], eax */
  w32((uint32_t)(0x1064e768), (EAX));
L_10631411:;
  /* 10631411 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10631413 call 0x10626380 */
  push32(0x10631418u); f_10626380();
  /* 10631418 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1063141b:;
  /* 1063141b pop ebp */
  EBP = (pop32());
  /* 1063141c ret  */
  ESPCHK(0x106313e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011420 @ 0x10631420 (30 bytes, 11 insns) */
void f_10631420(void) {
  FTRACE(0x10631420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10631420 push ebp */
  push32((uint32_t)(EBP));
  /* 10631421 mov ebp, esp */
  EBP = (ESP);
  /* 10631423 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10631425 call 0x106262e0 */
  push32(0x1063142au); f_106262e0();
  /* 1063142a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1063142d call 0x10631440 */
  push32(0x10631432u); f_10631440();
  /* 10631432 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10631434 call 0x10626380 */
  push32(0x10631439u); f_10626380();
  /* 10631439 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1063143c pop ebp */
  EBP = (pop32());
  /* 1063143d ret  */
  ESPCHK(0x10631420u, _esp0);
  ESP += 4; return;
}

/* FUN_10011440 @ 0x10631440 (939 bytes, 266 insns) */
void f_10631440(void) {
  FTRACE(0x10631440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10631440 push ebp */
  push32((uint32_t)(EBP));
  /* 10631441 mov ebp, esp */
  EBP = (ESP);
  /* 10631443 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10631446 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1063144d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1063144f call 0x106262e0 */
  push32(0x10631454u); f_106262e0();
  /* 10631454 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10631457 mov dword ptr [0x1064e6b0], 0 */
  w32((uint32_t)(0x1064e6b0), (0x0u));
  /* 10631461 mov dword ptr [0x1064de38], 0xffffffff */
  w32((uint32_t)(0x1064de38), (0xffffffffu));
  /* 1063146b mov eax, dword ptr [0x1064de38] */
  EAX = (r32((uint32_t)(0x1064de38)));
  /* 10631470 mov dword ptr [0x1064de28], eax */
  w32((uint32_t)(0x1064de28), (EAX));
  /* 10631475 push 0x1064a868 */
  push32((uint32_t)(0x1064a868u));
  /* 1063147a call 0x106322c0 */
  push32(0x1063147fu); f_106322c0();
  /* 1063147f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10631482 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10631485 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10631489 jne 0x106315c3 */
  if (!C.zf) goto L_106315c3;
  /* 1063148f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10631491 call 0x10626380 */
  push32(0x10631496u); f_10626380();
  /* 10631496 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10631499 push 0x1064e6b8 */
  push32((uint32_t)(0x1064e6b8u));
  /* 1063149e call dword ptr [0x1065023c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1065023c))), 0x106314a4u);
  /* 106314a4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106314a7 je 0x106315be */
  if (C.zf) goto L_106315be;
  /* 106314ad mov dword ptr [0x1064e6b0], 1 */
  w32((uint32_t)(0x1064e6b0), (0x1u));
  /* 106314b7 mov ecx, dword ptr [0x1064e6b8] */
  ECX = (r32((uint32_t)(0x1064e6b8)));
  /* 106314bd imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106314c0 mov dword ptr [0x1064dd90], ecx */
  w32((uint32_t)(0x1064dd90), (ECX));
  /* 106314c6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106314c8 mov dx, word ptr [0x1064e6fe] */
  DX = (r16((uint32_t)(0x1064e6fe)));
  /* 106314cf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106314d1 je 0x106314e9 */
  if (C.zf) goto L_106314e9;
  /* 106314d3 mov eax, dword ptr [0x1064e70c] */
  EAX = (r32((uint32_t)(0x1064e70c)));
  /* 106314d8 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106314db mov ecx, dword ptr [0x1064dd90] */
  ECX = (r32((uint32_t)(0x1064dd90)));
  /* 106314e1 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106314e3 mov dword ptr [0x1064dd90], ecx */
  w32((uint32_t)(0x1064dd90), (ECX));
L_106314e9:;
  /* 106314e9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106314eb mov dx, word ptr [0x1064e752] */
  DX = (r16((uint32_t)(0x1064e752)));
  /* 106314f2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106314f4 je 0x1063151e */
  if (C.zf) goto L_1063151e;
  /* 106314f6 cmp dword ptr [0x1064e760], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e760))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106314fd je 0x1063151e */
  if (C.zf) goto L_1063151e;
  /* 106314ff mov dword ptr [0x1064dd94], 1 */
  w32((uint32_t)(0x1064dd94), (0x1u));
  /* 10631509 mov eax, dword ptr [0x1064e760] */
  EAX = (r32((uint32_t)(0x1064e760)));
  /* 1063150e sub eax, dword ptr [0x1064e70c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1064e70c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10631514 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10631517 mov dword ptr [0x1064dd98], eax */
  w32((uint32_t)(0x1064dd98), (EAX));
  /* 1063151c jmp 0x10631532 */
  goto L_10631532;
L_1063151e:;
  /* 1063151e mov dword ptr [0x1064dd94], 0 */
  w32((uint32_t)(0x1064dd94), (0x0u));
  /* 10631528 mov dword ptr [0x1064dd98], 0 */
  w32((uint32_t)(0x1064dd98), (0x0u));
L_10631532:;
  /* 10631532 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10631535 push ecx */
  push32((uint32_t)(ECX));
  /* 10631536 push 0 */
  push32((uint32_t)(0x0u));
  /* 10631538 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1063153a mov edx, dword ptr [0x1064de1c] */
  EDX = (r32((uint32_t)(0x1064de1c)));
  /* 10631540 push edx */
  push32((uint32_t)(EDX));
  /* 10631541 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10631543 push 0x1064e6bc */
  push32((uint32_t)(0x1064e6bcu));
  /* 10631548 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1063154d mov eax, dword ptr [0x1064e620] */
  EAX = (r32((uint32_t)(0x1064e620)));
  /* 10631552 push eax */
  push32((uint32_t)(EAX));
  /* 10631553 call dword ptr [0x106502d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502d8))), 0x10631559u);
  /* 10631559 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1063155b je 0x1063156f */
  if (C.zf) goto L_1063156f;
  /* 1063155d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10631561 jne 0x1063156f */
  if (!C.zf) goto L_1063156f;
  /* 10631563 mov ecx, dword ptr [0x1064de1c] */
  ECX = (r32((uint32_t)(0x1064de1c)));
  /* 10631569 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 1063156d jmp 0x10631578 */
  goto L_10631578;
L_1063156f:;
  /* 1063156f mov edx, dword ptr [0x1064de1c] */
  EDX = (r32((uint32_t)(0x1064de1c)));
  /* 10631575 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10631578:;
  /* 10631578 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1063157b push eax */
  push32((uint32_t)(EAX));
  /* 1063157c push 0 */
  push32((uint32_t)(0x0u));
  /* 1063157e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10631580 mov ecx, dword ptr [0x1064de20] */
  ECX = (r32((uint32_t)(0x1064de20)));
  /* 10631586 push ecx */
  push32((uint32_t)(ECX));
  /* 10631587 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10631589 push 0x1064e710 */
  push32((uint32_t)(0x1064e710u));
  /* 1063158e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10631593 mov edx, dword ptr [0x1064e620] */
  EDX = (r32((uint32_t)(0x1064e620)));
  /* 10631599 push edx */
  push32((uint32_t)(EDX));
  /* 1063159a call dword ptr [0x106502d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502d8))), 0x106315a0u);
  /* 106315a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106315a2 je 0x106315b5 */
  if (C.zf) goto L_106315b5;
  /* 106315a4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106315a8 jne 0x106315b5 */
  if (!C.zf) goto L_106315b5;
  /* 106315aa mov eax, dword ptr [0x1064de20] */
  EAX = (r32((uint32_t)(0x1064de20)));
  /* 106315af mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 106315b3 jmp 0x106315be */
  goto L_106315be;
L_106315b5:;
  /* 106315b5 mov ecx, dword ptr [0x1064de20] */
  ECX = (r32((uint32_t)(0x1064de20)));
  /* 106315bb mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_106315be:;
  /* 106315be jmp 0x106317e7 */
  goto L_106317e7;
L_106315c3:;
  /* 106315c3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106315c6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 106315c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106315cb je 0x106315ed */
  if (C.zf) goto L_106315ed;
  /* 106315cd cmp dword ptr [0x1064e764], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e764))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106315d4 je 0x106315fc */
  if (C.zf) goto L_106315fc;
  /* 106315d6 mov ecx, dword ptr [0x1064e764] */
  ECX = (r32((uint32_t)(0x1064e764)));
  /* 106315dc push ecx */
  push32((uint32_t)(ECX));
  /* 106315dd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106315e0 push edx */
  push32((uint32_t)(EDX));
  /* 106315e1 call 0x1062e570 */
  push32(0x106315e6u); f_1062e570();
  /* 106315e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106315e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106315eb jne 0x106315fc */
  if (!C.zf) goto L_106315fc;
L_106315ed:;
  /* 106315ed push 0xc */
  push32((uint32_t)(0xcu));
  /* 106315ef call 0x10626380 */
  push32(0x106315f4u); f_10626380();
  /* 106315f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106315f7 jmp 0x106317e7 */
  goto L_106317e7;
L_106315fc:;
  /* 106315fc push 2 */
  push32((uint32_t)(0x2u));
  /* 106315fe mov eax, dword ptr [0x1064e764] */
  EAX = (r32((uint32_t)(0x1064e764)));
  /* 10631603 push eax */
  push32((uint32_t)(EAX));
  /* 10631604 call 0x10623370 */
  push32(0x10631609u); f_10623370();
  /* 10631609 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1063160c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 10631611 push 0x1064a860 */
  push32((uint32_t)(0x1064a860u));
  /* 10631616 push 2 */
  push32((uint32_t)(0x2u));
  /* 10631618 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1063161b push ecx */
  push32((uint32_t)(ECX));
  /* 1063161c call 0x10625710 */
  push32(0x10631621u); f_10625710();
  /* 10631621 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10631624 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10631627 push eax */
  push32((uint32_t)(EAX));
  /* 10631628 call 0x106228e0 */
  push32(0x1063162du); f_106228e0();
  /* 1063162d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10631630 mov dword ptr [0x1064e764], eax */
  w32((uint32_t)(0x1064e764), (EAX));
  /* 10631635 cmp dword ptr [0x1064e764], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e764))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1063163c jne 0x1063164d */
  if (!C.zf) goto L_1063164d;
  /* 1063163e push 0xc */
  push32((uint32_t)(0xcu));
  /* 10631640 call 0x10626380 */
  push32(0x10631645u); f_10626380();
  /* 10631645 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10631648 jmp 0x106317e7 */
  goto L_106317e7;
L_1063164d:;
  /* 1063164d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10631650 push edx */
  push32((uint32_t)(EDX));
  /* 10631651 mov eax, dword ptr [0x1064e764] */
  EAX = (r32((uint32_t)(0x1064e764)));
  /* 10631656 push eax */
  push32((uint32_t)(EAX));
  /* 10631657 call 0x10625890 */
  push32(0x1063165cu); f_10625890();
  /* 1063165c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1063165f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10631661 call 0x10626380 */
  push32(0x10631666u); f_10626380();
  /* 10631666 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10631669 push 3 */
  push32((uint32_t)(0x3u));
  /* 1063166b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1063166e push ecx */
  push32((uint32_t)(ECX));
  /* 1063166f mov edx, dword ptr [0x1064de1c] */
  EDX = (r32((uint32_t)(0x1064de1c)));
  /* 10631675 push edx */
  push32((uint32_t)(EDX));
  /* 10631676 call 0x10626100 */
  push32(0x1063167bu); f_10626100();
  /* 1063167b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1063167e mov eax, dword ptr [0x1064de1c] */
  EAX = (r32((uint32_t)(0x1064de1c)));
  /* 10631683 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 10631687 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1063168a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1063168d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10631690 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10631693 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10631696 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10631699 jne 0x106316ad */
  if (!C.zf) goto L_106316ad;
  /* 1063169b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1063169e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106316a1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106316a4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106316a7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106316aa mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_106316ad:;
  /* 106316ad mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106316b0 push eax */
  push32((uint32_t)(EAX));
  /* 106316b1 call 0x10631190 */
  push32(0x106316b6u); f_10631190();
  /* 106316b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106316b9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106316bf mov dword ptr [0x1064dd90], eax */
  w32((uint32_t)(0x1064dd90), (EAX));
L_106316c4:;
  /* 106316c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106316c7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106316ca cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106316cd je 0x106316e5 */
  if (C.zf) goto L_106316e5;
  /* 106316cf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106316d2 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106316d5 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106316d8 jl 0x106316f0 */
  if ((C.sf!=C.of)) goto L_106316f0;
  /* 106316da mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106316dd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 106316e0 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106316e3 jg 0x106316f0 */
  if ((!C.zf&&C.sf==C.of)) goto L_106316f0;
L_106316e5:;
  /* 106316e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106316e8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106316eb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106316ee jmp 0x106316c4 */
  goto L_106316c4;
L_106316f0:;
  /* 106316f0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106316f3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 106316f6 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106316f9 jne 0x10631795 */
  if (!C.zf) goto L_10631795;
  /* 106316ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10631702 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10631705 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10631708 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1063170b push edx */
  push32((uint32_t)(EDX));
  /* 1063170c call 0x10631190 */
  push32(0x10631711u); f_10631190();
  /* 10631711 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10631714 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10631717 mov ecx, dword ptr [0x1064dd90] */
  ECX = (r32((uint32_t)(0x1064dd90)));
  /* 1063171d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1063171f mov dword ptr [0x1064dd90], ecx */
  w32((uint32_t)(0x1064dd90), (ECX));
L_10631725:;
  /* 10631725 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10631728 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1063172b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1063172e jl 0x10631746 */
  if ((C.sf!=C.of)) goto L_10631746;
  /* 10631730 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10631733 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10631736 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10631739 jg 0x10631746 */
  if ((!C.zf&&C.sf==C.of)) goto L_10631746;
  /* 1063173b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1063173e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10631741 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10631744 jmp 0x10631725 */
  goto L_10631725;
L_10631746:;
  /* 10631746 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10631749 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1063174c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1063174f jne 0x10631795 */
  if (!C.zf) goto L_10631795;
  /* 10631751 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10631754 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10631757 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1063175a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1063175d push ecx */
  push32((uint32_t)(ECX));
  /* 1063175e call 0x10631190 */
  push32(0x10631763u); f_10631190();
  /* 10631763 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10631766 mov edx, dword ptr [0x1064dd90] */
  EDX = (r32((uint32_t)(0x1064dd90)));
  /* 1063176c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1063176e mov dword ptr [0x1064dd90], edx */
  w32((uint32_t)(0x1064dd90), (EDX));
L_10631774:;
  /* 10631774 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10631777 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1063177a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1063177d jl 0x10631795 */
  if ((C.sf!=C.of)) goto L_10631795;
  /* 1063177f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10631782 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10631785 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10631788 jg 0x10631795 */
  if ((!C.zf&&C.sf==C.of)) goto L_10631795;
  /* 1063178a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1063178d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10631790 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10631793 jmp 0x10631774 */
  goto L_10631774;
L_10631795:;
  /* 10631795 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10631799 je 0x106317a9 */
  if (C.zf) goto L_106317a9;
  /* 1063179b mov edx, dword ptr [0x1064dd90] */
  EDX = (r32((uint32_t)(0x1064dd90)));
  /* 106317a1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 106317a3 mov dword ptr [0x1064dd90], edx */
  w32((uint32_t)(0x1064dd90), (EDX));
L_106317a9:;
  /* 106317a9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106317ac movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106317af mov dword ptr [0x1064dd94], ecx */
  w32((uint32_t)(0x1064dd94), (ECX));
  /* 106317b5 cmp dword ptr [0x1064dd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064dd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106317bc je 0x106317de */
  if (C.zf) goto L_106317de;
  /* 106317be push 3 */
  push32((uint32_t)(0x3u));
  /* 106317c0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106317c3 push edx */
  push32((uint32_t)(EDX));
  /* 106317c4 mov eax, dword ptr [0x1064de20] */
  EAX = (r32((uint32_t)(0x1064de20)));
  /* 106317c9 push eax */
  push32((uint32_t)(EAX));
  /* 106317ca call 0x10626100 */
  push32(0x106317cfu); f_10626100();
  /* 106317cf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106317d2 mov ecx, dword ptr [0x1064de20] */
  ECX = (r32((uint32_t)(0x1064de20)));
  /* 106317d8 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 106317dc jmp 0x106317e7 */
  goto L_106317e7;
L_106317de:;
  /* 106317de mov edx, dword ptr [0x1064de20] */
  EDX = (r32((uint32_t)(0x1064de20)));
  /* 106317e4 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_106317e7:;
  /* 106317e7 mov esp, ebp */
  ESP = (EBP);
  /* 106317e9 pop ebp */
  EBP = (pop32());
  /* 106317ea ret  */
  ESPCHK(0x10631440u, _esp0);
  ESP += 4; return;
}

/* FUN_100117f0 @ 0x106317f0 (46 bytes, 18 insns) */
void f_106317f0(void) {
  FTRACE(0x106317f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106317f0 push ebp */
  push32((uint32_t)(EBP));
  /* 106317f1 mov ebp, esp */
  EBP = (ESP);
  /* 106317f3 push ecx */
  push32((uint32_t)(ECX));
  /* 106317f4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 106317f6 call 0x106262e0 */
  push32(0x106317fbu); f_106262e0();
  /* 106317fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106317fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10631801 push eax */
  push32((uint32_t)(EAX));
  /* 10631802 call 0x10631820 */
  push32(0x10631807u); f_10631820();
  /* 10631807 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1063180a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1063180d push 0xb */
  push32((uint32_t)(0xbu));
  /* 1063180f call 0x10626380 */
  push32(0x10631814u); f_10626380();
  /* 10631814 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10631817 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1063181a mov esp, ebp */
  ESP = (EBP);
  /* 1063181c pop ebp */
  EBP = (pop32());
  /* 1063181d ret  */
  ESPCHK(0x106317f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011820 @ 0x10631820 (762 bytes, 246 insns) */
void f_10631820(void) {
  FTRACE(0x10631820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10631820 push ebp */
  push32((uint32_t)(EBP));
  /* 10631821 mov ebp, esp */
  EBP = (ESP);
  /* 10631823 push ecx */
  push32((uint32_t)(ECX));
  /* 10631824 cmp dword ptr [0x1064dd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064dd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1063182b jne 0x10631834 */
  if (!C.zf) goto L_10631834;
  /* 1063182d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1063182f jmp 0x10631b16 */
  goto L_10631b16;
L_10631834:;
  /* 10631834 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10631837 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1063183a cmp ecx, dword ptr [0x1064de28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1064de28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10631840 jne 0x10631854 */
  if (!C.zf) goto L_10631854;
  /* 10631842 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10631845 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10631848 cmp eax, dword ptr [0x1064de38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1064de38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1063184e je 0x10631a1b */
  if (C.zf) goto L_10631a1b;
L_10631854:;
  /* 10631854 cmp dword ptr [0x1064e6b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e6b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1063185b je 0x106319d5 */
  if (C.zf) goto L_106319d5;
  /* 10631861 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10631863 mov cx, word ptr [0x1064e750] */
  CX = (r16((uint32_t)(0x1064e750)));
  /* 1063186a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1063186c jne 0x106318c9 */
  if (!C.zf) goto L_106318c9;
  /* 1063186e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10631870 mov dx, word ptr [0x1064e75e] */
  DX = (r16((uint32_t)(0x1064e75e)));
  /* 10631877 push edx */
  push32((uint32_t)(EDX));
  /* 10631878 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1063187a mov ax, word ptr [0x1064e75c] */
  AX = (r16((uint32_t)(0x1064e75c)));
  /* 10631880 push eax */
  push32((uint32_t)(EAX));
  /* 10631881 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10631883 mov cx, word ptr [0x1064e75a] */
  CX = (r16((uint32_t)(0x1064e75a)));
  /* 1063188a push ecx */
  push32((uint32_t)(ECX));
  /* 1063188b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1063188d mov dx, word ptr [0x1064e758] */
  DX = (r16((uint32_t)(0x1064e758)));
  /* 10631894 push edx */
  push32((uint32_t)(EDX));
  /* 10631895 push 0 */
  push32((uint32_t)(0x0u));
  /* 10631897 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10631899 mov ax, word ptr [0x1064e754] */
  AX = (r16((uint32_t)(0x1064e754)));
  /* 1063189f push eax */
  push32((uint32_t)(EAX));
  /* 106318a0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106318a2 mov cx, word ptr [0x1064e756] */
  CX = (r16((uint32_t)(0x1064e756)));
  /* 106318a9 push ecx */
  push32((uint32_t)(ECX));
  /* 106318aa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106318ac mov dx, word ptr [0x1064e752] */
  DX = (r16((uint32_t)(0x1064e752)));
  /* 106318b3 push edx */
  push32((uint32_t)(EDX));
  /* 106318b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106318b7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 106318ba push ecx */
  push32((uint32_t)(ECX));
  /* 106318bb push 1 */
  push32((uint32_t)(0x1u));
  /* 106318bd push 1 */
  push32((uint32_t)(0x1u));
  /* 106318bf call 0x10631b20 */
  push32(0x106318c4u); f_10631b20();
  /* 106318c4 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106318c7 jmp 0x1063191a */
  goto L_1063191a;
L_106318c9:;
  /* 106318c9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106318cb mov dx, word ptr [0x1064e75e] */
  DX = (r16((uint32_t)(0x1064e75e)));
  /* 106318d2 push edx */
  push32((uint32_t)(EDX));
  /* 106318d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106318d5 mov ax, word ptr [0x1064e75c] */
  AX = (r16((uint32_t)(0x1064e75c)));
  /* 106318db push eax */
  push32((uint32_t)(EAX));
  /* 106318dc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106318de mov cx, word ptr [0x1064e75a] */
  CX = (r16((uint32_t)(0x1064e75a)));
  /* 106318e5 push ecx */
  push32((uint32_t)(ECX));
  /* 106318e6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106318e8 mov dx, word ptr [0x1064e758] */
  DX = (r16((uint32_t)(0x1064e758)));
  /* 106318ef push edx */
  push32((uint32_t)(EDX));
  /* 106318f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106318f2 mov ax, word ptr [0x1064e756] */
  AX = (r16((uint32_t)(0x1064e756)));
  /* 106318f8 push eax */
  push32((uint32_t)(EAX));
  /* 106318f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 106318fb push 0 */
  push32((uint32_t)(0x0u));
  /* 106318fd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106318ff mov cx, word ptr [0x1064e752] */
  CX = (r16((uint32_t)(0x1064e752)));
  /* 10631906 push ecx */
  push32((uint32_t)(ECX));
  /* 10631907 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1063190a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1063190d push eax */
  push32((uint32_t)(EAX));
  /* 1063190e push 0 */
  push32((uint32_t)(0x0u));
  /* 10631910 push 1 */
  push32((uint32_t)(0x1u));
  /* 10631912 call 0x10631b20 */
  push32(0x10631917u); f_10631b20();
  /* 10631917 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1063191a:;
  /* 1063191a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1063191c mov cx, word ptr [0x1064e6fc] */
  CX = (r16((uint32_t)(0x1064e6fc)));
  /* 10631923 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10631925 jne 0x10631982 */
  if (!C.zf) goto L_10631982;
  /* 10631927 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10631929 mov dx, word ptr [0x1064e70a] */
  DX = (r16((uint32_t)(0x1064e70a)));
  /* 10631930 push edx */
  push32((uint32_t)(EDX));
  /* 10631931 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10631933 mov ax, word ptr [0x1064e708] */
  AX = (r16((uint32_t)(0x1064e708)));
  /* 10631939 push eax */
  push32((uint32_t)(EAX));
  /* 1063193a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1063193c mov cx, word ptr [0x1064e706] */
  CX = (r16((uint32_t)(0x1064e706)));
  /* 10631943 push ecx */
  push32((uint32_t)(ECX));
  /* 10631944 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10631946 mov dx, word ptr [0x1064e704] */
  DX = (r16((uint32_t)(0x1064e704)));
  /* 1063194d push edx */
  push32((uint32_t)(EDX));
  /* 1063194e push 0 */
  push32((uint32_t)(0x0u));
  /* 10631950 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10631952 mov ax, word ptr [0x1064e700] */
  AX = (r16((uint32_t)(0x1064e700)));
  /* 10631958 push eax */
  push32((uint32_t)(EAX));
  /* 10631959 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1063195b mov cx, word ptr [0x1064e702] */
  CX = (r16((uint32_t)(0x1064e702)));
  /* 10631962 push ecx */
  push32((uint32_t)(ECX));
  /* 10631963 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10631965 mov dx, word ptr [0x1064e6fe] */
  DX = (r16((uint32_t)(0x1064e6fe)));
  /* 1063196c push edx */
  push32((uint32_t)(EDX));
  /* 1063196d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10631970 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10631973 push ecx */
  push32((uint32_t)(ECX));
  /* 10631974 push 1 */
  push32((uint32_t)(0x1u));
  /* 10631976 push 0 */
  push32((uint32_t)(0x0u));
  /* 10631978 call 0x10631b20 */
  push32(0x1063197du); f_10631b20();
  /* 1063197d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10631980 jmp 0x106319d3 */
  goto L_106319d3;
L_10631982:;
  /* 10631982 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10631984 mov dx, word ptr [0x1064e70a] */
  DX = (r16((uint32_t)(0x1064e70a)));
  /* 1063198b push edx */
  push32((uint32_t)(EDX));
  /* 1063198c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1063198e mov ax, word ptr [0x1064e708] */
  AX = (r16((uint32_t)(0x1064e708)));
  /* 10631994 push eax */
  push32((uint32_t)(EAX));
  /* 10631995 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10631997 mov cx, word ptr [0x1064e706] */
  CX = (r16((uint32_t)(0x1064e706)));
  /* 1063199e push ecx */
  push32((uint32_t)(ECX));
  /* 1063199f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106319a1 mov dx, word ptr [0x1064e704] */
  DX = (r16((uint32_t)(0x1064e704)));
  /* 106319a8 push edx */
  push32((uint32_t)(EDX));
  /* 106319a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106319ab mov ax, word ptr [0x1064e702] */
  AX = (r16((uint32_t)(0x1064e702)));
  /* 106319b1 push eax */
  push32((uint32_t)(EAX));
  /* 106319b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 106319b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 106319b6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106319b8 mov cx, word ptr [0x1064e6fe] */
  CX = (r16((uint32_t)(0x1064e6fe)));
  /* 106319bf push ecx */
  push32((uint32_t)(ECX));
  /* 106319c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106319c3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 106319c6 push eax */
  push32((uint32_t)(EAX));
  /* 106319c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 106319c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 106319cb call 0x10631b20 */
  push32(0x106319d0u); f_10631b20();
  /* 106319d0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106319d3:;
  /* 106319d3 jmp 0x10631a1b */
  goto L_10631a1b;
L_106319d5:;
  /* 106319d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 106319d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 106319d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 106319db push 2 */
  push32((uint32_t)(0x2u));
  /* 106319dd push 0 */
  push32((uint32_t)(0x0u));
  /* 106319df push 0 */
  push32((uint32_t)(0x0u));
  /* 106319e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 106319e3 push 4 */
  push32((uint32_t)(0x4u));
  /* 106319e5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106319e8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 106319eb push edx */
  push32((uint32_t)(EDX));
  /* 106319ec push 1 */
  push32((uint32_t)(0x1u));
  /* 106319ee push 1 */
  push32((uint32_t)(0x1u));
  /* 106319f0 call 0x10631b20 */
  push32(0x106319f5u); f_10631b20();
  /* 106319f5 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106319f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 106319fa push 0 */
  push32((uint32_t)(0x0u));
  /* 106319fc push 0 */
  push32((uint32_t)(0x0u));
  /* 106319fe push 2 */
  push32((uint32_t)(0x2u));
  /* 10631a00 push 0 */
  push32((uint32_t)(0x0u));
  /* 10631a02 push 0 */
  push32((uint32_t)(0x0u));
  /* 10631a04 push 5 */
  push32((uint32_t)(0x5u));
  /* 10631a06 push 0xa */
  push32((uint32_t)(0xau));
  /* 10631a08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10631a0b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10631a0e push ecx */
  push32((uint32_t)(ECX));
  /* 10631a0f push 1 */
  push32((uint32_t)(0x1u));
  /* 10631a11 push 0 */
  push32((uint32_t)(0x0u));
  /* 10631a13 call 0x10631b20 */
  push32(0x10631a18u); f_10631b20();
  /* 10631a18 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10631a1b:;
  /* 10631a1b mov edx, dword ptr [0x1064de2c] */
  EDX = (r32((uint32_t)(0x1064de2c)));
  /* 10631a21 cmp edx, dword ptr [0x1064de3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1064de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10631a27 jge 0x10631a74 */
  if ((C.sf==C.of)) goto L_10631a74;
  /* 10631a29 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10631a2c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10631a2f cmp ecx, dword ptr [0x1064de2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1064de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10631a35 jl 0x10631a45 */
  if ((C.sf!=C.of)) goto L_10631a45;
  /* 10631a37 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10631a3a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10631a3d cmp eax, dword ptr [0x1064de3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1064de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10631a43 jle 0x10631a4c */
  if ((C.zf||C.sf!=C.of)) goto L_10631a4c;
L_10631a45:;
  /* 10631a45 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10631a47 jmp 0x10631b16 */
  goto L_10631b16;
L_10631a4c:;
  /* 10631a4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10631a4f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10631a52 cmp edx, dword ptr [0x1064de2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1064de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10631a58 jle 0x10631a72 */
  if ((C.zf||C.sf!=C.of)) goto L_10631a72;
  /* 10631a5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10631a5d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10631a60 cmp ecx, dword ptr [0x1064de3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1064de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10631a66 jge 0x10631a72 */
  if ((C.sf==C.of)) goto L_10631a72;
  /* 10631a68 mov eax, 1 */
  EAX = (0x1u);
  /* 10631a6d jmp 0x10631b16 */
  goto L_10631b16;
L_10631a72:;
  /* 10631a72 jmp 0x10631ab7 */
  goto L_10631ab7;
L_10631a74:;
  /* 10631a74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10631a77 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10631a7a cmp eax, dword ptr [0x1064de3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1064de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10631a80 jl 0x10631a90 */
  if ((C.sf!=C.of)) goto L_10631a90;
  /* 10631a82 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10631a85 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10631a88 cmp edx, dword ptr [0x1064de2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1064de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10631a8e jle 0x10631a97 */
  if ((C.zf||C.sf!=C.of)) goto L_10631a97;
L_10631a90:;
  /* 10631a90 mov eax, 1 */
  EAX = (0x1u);
  /* 10631a95 jmp 0x10631b16 */
  goto L_10631b16;
L_10631a97:;
  /* 10631a97 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10631a9a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10631a9d cmp ecx, dword ptr [0x1064de3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1064de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10631aa3 jle 0x10631ab7 */
  if ((C.zf||C.sf!=C.of)) goto L_10631ab7;
  /* 10631aa5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10631aa8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10631aab cmp eax, dword ptr [0x1064de2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1064de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10631ab1 jge 0x10631ab7 */
  if ((C.sf==C.of)) goto L_10631ab7;
  /* 10631ab3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10631ab5 jmp 0x10631b16 */
  goto L_10631b16;
L_10631ab7:;
  /* 10631ab7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10631aba mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10631abd imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10631ac0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10631ac3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10631ac5 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10631ac7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10631aca mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10631acd imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10631ad3 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10631ad5 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10631adb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10631ade mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10631ae1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10631ae4 cmp edx, dword ptr [0x1064de2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1064de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10631aea jne 0x10631b02 */
  if (!C.zf) goto L_10631b02;
  /* 10631aec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10631aef cmp eax, dword ptr [0x1064de30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1064de30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10631af5 jl 0x10631afe */
  if ((C.sf!=C.of)) goto L_10631afe;
  /* 10631af7 mov eax, 1 */
  EAX = (0x1u);
  /* 10631afc jmp 0x10631b16 */
  goto L_10631b16;
L_10631afe:;
  /* 10631afe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10631b00 jmp 0x10631b16 */
  goto L_10631b16;
L_10631b02:;
  /* 10631b02 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10631b05 cmp ecx, dword ptr [0x1064de40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1064de40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10631b0b jge 0x10631b14 */
  if ((C.sf==C.of)) goto L_10631b14;
  /* 10631b0d mov eax, 1 */
  EAX = (0x1u);
  /* 10631b12 jmp 0x10631b16 */
  goto L_10631b16;
L_10631b14:;
  /* 10631b14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10631b16:;
  /* 10631b16 mov esp, ebp */
  ESP = (EBP);
  /* 10631b18 pop ebp */
  EBP = (pop32());
  /* 10631b19 ret  */
  ESPCHK(0x10631820u, _esp0);
  ESP += 4; return;
}

/* FUN_10011b20 @ 0x10631b20 (504 bytes, 145 insns) */
void f_10631b20(void) {
  FTRACE(0x10631b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10631b20 push ebp */
  push32((uint32_t)(EBP));
  /* 10631b21 mov ebp, esp */
  EBP = (ESP);
  /* 10631b23 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10631b26 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10631b2a jne 0x10631bfc */
  if (!C.zf) goto L_10631bfc;
  /* 10631b30 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10631b33 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10631b36 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10631b38 jne 0x10631b49 */
  if (!C.zf) goto L_10631b49;
  /* 10631b3a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10631b3d mov edx, dword ptr [ecx*4 + 0x1064de4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1064de4c)));
  /* 10631b44 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10631b47 jmp 0x10631b56 */
  goto L_10631b56;
L_10631b49:;
  /* 10631b49 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10631b4c mov ecx, dword ptr [eax*4 + 0x1064de80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1064de80)));
  /* 10631b53 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10631b56:;
  /* 10631b56 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10631b59 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10631b5c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10631b5f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10631b62 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10631b65 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10631b6b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10631b6e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10631b70 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10631b73 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10631b76 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10631b79 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 10631b7d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10631b7e mov ecx, 7 */
  ECX = (0x7u);
  /* 10631b83 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10631b85 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10631b88 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10631b8b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10631b8e jge 0x10631ba9 */
  if ((C.sf==C.of)) goto L_10631ba9;
  /* 10631b90 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10631b93 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10631b96 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10631b99 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10631b9c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10631b9f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10631ba2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10631ba4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10631ba7 jmp 0x10631bbd */
  goto L_10631bbd;
L_10631ba9:;
  /* 10631ba9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10631bac sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10631baf mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10631bb2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10631bb5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10631bb8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10631bba mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10631bbd:;
  /* 10631bbd cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10631bc1 jne 0x10631bfa */
  if (!C.zf) goto L_10631bfa;
  /* 10631bc3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10631bc6 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10631bc9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10631bcb jne 0x10631bdc */
  if (!C.zf) goto L_10631bdc;
  /* 10631bcd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10631bd0 mov eax, dword ptr [edx*4 + 0x1064de50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1064de50)));
  /* 10631bd7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10631bda jmp 0x10631be9 */
  goto L_10631be9;
L_10631bdc:;
  /* 10631bdc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10631bdf mov edx, dword ptr [ecx*4 + 0x1064de84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1064de84)));
  /* 10631be6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10631be9:;
  /* 10631be9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10631bec cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10631bef jle 0x10631bfa */
  if ((C.zf||C.sf!=C.of)) goto L_10631bfa;
  /* 10631bf1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10631bf4 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10631bf7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10631bfa:;
  /* 10631bfa jmp 0x10631c31 */
  goto L_10631c31;
L_10631bfc:;
  /* 10631bfc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10631bff and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10631c02 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10631c04 jne 0x10631c15 */
  if (!C.zf) goto L_10631c15;
  /* 10631c06 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10631c09 mov ecx, dword ptr [eax*4 + 0x1064de4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1064de4c)));
  /* 10631c10 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10631c13 jmp 0x10631c22 */
  goto L_10631c22;
L_10631c15:;
  /* 10631c15 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10631c18 mov eax, dword ptr [edx*4 + 0x1064de80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1064de80)));
  /* 10631c1f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10631c22:;
  /* 10631c22 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10631c25 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10631c28 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10631c2b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10631c2e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10631c31:;
  /* 10631c31 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10631c35 jne 0x10631c71 */
  if (!C.zf) goto L_10631c71;
  /* 10631c37 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10631c3a mov dword ptr [0x1064de2c], eax */
  w32((uint32_t)(0x1064de2c), (EAX));
  /* 10631c3f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10631c42 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10631c45 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10631c48 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10631c4a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10631c4d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10631c50 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10631c52 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10631c58 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10631c5b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10631c5d mov dword ptr [0x1064de30], ecx */
  w32((uint32_t)(0x1064de30), (ECX));
  /* 10631c63 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10631c66 mov dword ptr [0x1064de28], edx */
  w32((uint32_t)(0x1064de28), (EDX));
  /* 10631c6c jmp 0x10631d14 */
  goto L_10631d14;
L_10631c71:;
  /* 10631c71 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10631c74 mov dword ptr [0x1064de3c], eax */
  w32((uint32_t)(0x1064de3c), (EAX));
  /* 10631c79 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10631c7c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10631c7f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10631c82 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10631c84 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10631c87 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10631c8a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10631c8c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10631c92 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10631c95 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10631c97 mov dword ptr [0x1064de40], ecx */
  w32((uint32_t)(0x1064de40), (ECX));
  /* 10631c9d mov edx, dword ptr [0x1064dd98] */
  EDX = (r32((uint32_t)(0x1064dd98)));
  /* 10631ca3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10631ca9 mov eax, dword ptr [0x1064de40] */
  EAX = (r32((uint32_t)(0x1064de40)));
  /* 10631cae add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10631cb0 mov dword ptr [0x1064de40], eax */
  w32((uint32_t)(0x1064de40), (EAX));
  /* 10631cb5 cmp dword ptr [0x1064de40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064de40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10631cbc jge 0x10631ce1 */
  if ((C.sf==C.of)) goto L_10631ce1;
  /* 10631cbe mov ecx, dword ptr [0x1064de40] */
  ECX = (r32((uint32_t)(0x1064de40)));
  /* 10631cc4 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10631cca mov dword ptr [0x1064de40], ecx */
  w32((uint32_t)(0x1064de40), (ECX));
  /* 10631cd0 mov edx, dword ptr [0x1064de3c] */
  EDX = (r32((uint32_t)(0x1064de3c)));
  /* 10631cd6 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10631cd9 mov dword ptr [0x1064de3c], edx */
  w32((uint32_t)(0x1064de3c), (EDX));
  /* 10631cdf jmp 0x10631d0b */
  goto L_10631d0b;
L_10631ce1:;
  /* 10631ce1 cmp dword ptr [0x1064de40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x1064de40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10631ceb jl 0x10631d0b */
  if ((C.sf!=C.of)) goto L_10631d0b;
  /* 10631ced mov eax, dword ptr [0x1064de40] */
  EAX = (r32((uint32_t)(0x1064de40)));
  /* 10631cf2 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10631cf7 mov dword ptr [0x1064de40], eax */
  w32((uint32_t)(0x1064de40), (EAX));
  /* 10631cfc mov ecx, dword ptr [0x1064de3c] */
  ECX = (r32((uint32_t)(0x1064de3c)));
  /* 10631d02 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10631d05 mov dword ptr [0x1064de3c], ecx */
  w32((uint32_t)(0x1064de3c), (ECX));
L_10631d0b:;
  /* 10631d0b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10631d0e mov dword ptr [0x1064de38], edx */
  w32((uint32_t)(0x1064de38), (EDX));
L_10631d14:;
  /* 10631d14 mov esp, ebp */
  ESP = (EBP);
  /* 10631d16 pop ebp */
  EBP = (pop32());
  /* 10631d17 ret  */
  ESPCHK(0x10631b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10011d20 @ 0x10631d20 (382 bytes, 135 insns) */
void f_10631d20(void) {
  FTRACE(0x10631d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10631d20 push ebp */
  push32((uint32_t)(EBP));
  /* 10631d21 mov ebp, esp */
  EBP = (ESP);
  /* 10631d23 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10631d25 push 0x1064a870 */
  push32((uint32_t)(0x1064a870u));
  /* 10631d2a push 0x1062b9e8 */
  push32((uint32_t)(0x1062b9e8u));
  /* 10631d2f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10631d35 push eax */
  push32((uint32_t)(EAX));
  /* 10631d36 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10631d3d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10631d40 push ebx */
  push32((uint32_t)(EBX));
  /* 10631d41 push esi */
  push32((uint32_t)(ESI));
  /* 10631d42 push edi */
  push32((uint32_t)(EDI));
  /* 10631d43 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10631d46 cmp dword ptr [0x1064e76c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e76c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10631d4d jne 0x10631d92 */
  if (!C.zf) goto L_10631d92;
  /* 10631d4f push 0 */
  push32((uint32_t)(0x0u));
  /* 10631d51 push 0 */
  push32((uint32_t)(0x0u));
  /* 10631d53 push 1 */
  push32((uint32_t)(0x1u));
  /* 10631d55 push 0 */
  push32((uint32_t)(0x0u));
  /* 10631d57 call dword ptr [0x10650238] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650238))), 0x10631d5du);
  /* 10631d5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10631d5f je 0x10631d6d */
  if (C.zf) goto L_10631d6d;
  /* 10631d61 mov dword ptr [0x1064e76c], 1 */
  w32((uint32_t)(0x1064e76c), (0x1u));
  /* 10631d6b jmp 0x10631d92 */
  goto L_10631d92;
L_10631d6d:;
  /* 10631d6d push 0 */
  push32((uint32_t)(0x0u));
  /* 10631d6f push 0 */
  push32((uint32_t)(0x0u));
  /* 10631d71 push 1 */
  push32((uint32_t)(0x1u));
  /* 10631d73 push 0 */
  push32((uint32_t)(0x0u));
  /* 10631d75 call dword ptr [0x10650250] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650250))), 0x10631d7bu);
  /* 10631d7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10631d7d je 0x10631d8b */
  if (C.zf) goto L_10631d8b;
  /* 10631d7f mov dword ptr [0x1064e76c], 2 */
  w32((uint32_t)(0x1064e76c), (0x2u));
  /* 10631d89 jmp 0x10631d92 */
  goto L_10631d92;
L_10631d8b:;
  /* 10631d8b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10631d8d jmp 0x10631ea1 */
  goto L_10631ea1;
L_10631d92:;
  /* 10631d92 cmp dword ptr [0x1064e76c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1064e76c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10631d99 jne 0x10631db6 */
  if (!C.zf) goto L_10631db6;
  /* 10631d9b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10631d9e push eax */
  push32((uint32_t)(EAX));
  /* 10631d9f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10631da2 push ecx */
  push32((uint32_t)(ECX));
  /* 10631da3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10631da6 push edx */
  push32((uint32_t)(EDX));
  /* 10631da7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10631daa push eax */
  push32((uint32_t)(EAX));
  /* 10631dab call dword ptr [0x10650238] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650238))), 0x10631db1u);
  /* 10631db1 jmp 0x10631ea1 */
  goto L_10631ea1;
L_10631db6:;
  /* 10631db6 cmp dword ptr [0x1064e76c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1064e76c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10631dbd jne 0x10631e9f */
  if (!C.zf) goto L_10631e9f;
  /* 10631dc3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10631dc7 jne 0x10631dd2 */
  if (!C.zf) goto L_10631dd2;
  /* 10631dc9 mov ecx, dword ptr [0x1064e620] */
  ECX = (r32((uint32_t)(0x1064e620)));
  /* 10631dcf mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10631dd2:;
  /* 10631dd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10631dd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10631dd6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10631dd9 push edx */
  push32((uint32_t)(EDX));
  /* 10631dda mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10631ddd push eax */
  push32((uint32_t)(EAX));
  /* 10631dde call dword ptr [0x10650250] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650250))), 0x10631de4u);
  /* 10631de4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10631de7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10631deb jne 0x10631df4 */
  if (!C.zf) goto L_10631df4;
  /* 10631ded xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10631def jmp 0x10631ea1 */
  goto L_10631ea1;
L_10631df4:;
  /* 10631df4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10631dfb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10631dfe add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10631e01 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10631e03 call 0x10625a80 */
  push32(0x10631e08u); f_10625a80();
  /* 10631e08 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 10631e0b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10631e0e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10631e11 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10631e14 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10631e1b jmp 0x10631e34 */
  goto L_10631e34;
  /* 10631e1d mov eax, 1 */
  EAX = (0x1u);
  /* 10631e22 ret  */
  ESPCHK(0x10631d20u, _esp0);
  ESP += 4; return;
  /* 10631e23 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10631e26 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10631e2d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10631e34:;
  /* 10631e34 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10631e38 jne 0x10631e3e */
  if (!C.zf) goto L_10631e3e;
  /* 10631e3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10631e3c jmp 0x10631ea1 */
  goto L_10631ea1;
L_10631e3e:;
  /* 10631e3e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10631e41 push edx */
  push32((uint32_t)(EDX));
  /* 10631e42 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10631e45 push eax */
  push32((uint32_t)(EAX));
  /* 10631e46 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10631e49 push ecx */
  push32((uint32_t)(ECX));
  /* 10631e4a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10631e4d push edx */
  push32((uint32_t)(EDX));
  /* 10631e4e call dword ptr [0x10650250] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650250))), 0x10631e54u);
  /* 10631e54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10631e56 jne 0x10631e5c */
  if (!C.zf) goto L_10631e5c;
  /* 10631e58 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10631e5a jmp 0x10631ea1 */
  goto L_10631ea1;
L_10631e5c:;
  /* 10631e5c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10631e60 jne 0x10631e7d */
  if (!C.zf) goto L_10631e7d;
  /* 10631e62 push 0 */
  push32((uint32_t)(0x0u));
  /* 10631e64 push 0 */
  push32((uint32_t)(0x0u));
  /* 10631e66 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10631e68 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10631e6b push eax */
  push32((uint32_t)(EAX));
  /* 10631e6c push 1 */
  push32((uint32_t)(0x1u));
  /* 10631e6e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10631e71 push ecx */
  push32((uint32_t)(ECX));
  /* 10631e72 call dword ptr [0x10650324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650324))), 0x10631e78u);
  /* 10631e78 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10631e7b jmp 0x10631e9a */
  goto L_10631e9a;
L_10631e7d:;
  /* 10631e7d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10631e80 push edx */
  push32((uint32_t)(EDX));
  /* 10631e81 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10631e84 push eax */
  push32((uint32_t)(EAX));
  /* 10631e85 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10631e87 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10631e8a push ecx */
  push32((uint32_t)(ECX));
  /* 10631e8b push 1 */
  push32((uint32_t)(0x1u));
  /* 10631e8d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10631e90 push edx */
  push32((uint32_t)(EDX));
  /* 10631e91 call dword ptr [0x10650324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650324))), 0x10631e97u);
  /* 10631e97 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10631e9a:;
  /* 10631e9a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10631e9d jmp 0x10631ea1 */
  goto L_10631ea1;
L_10631e9f:;
  /* 10631e9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10631ea1:;
  /* 10631ea1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10631ea4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10631ea7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10631eae pop edi */
  EDI = (pop32());
  /* 10631eaf pop esi */
  ESI = (pop32());
  /* 10631eb0 pop ebx */
  EBX = (pop32());
  /* 10631eb1 mov esp, ebp */
  ESP = (EBP);
  /* 10631eb3 pop ebp */
  EBP = (pop32());
  /* 10631eb4 ret  */
  ESPCHK(0x10631d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ec0 @ 0x10631ec0 (398 bytes, 140 insns) */
void f_10631ec0(void) {
  FTRACE(0x10631ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10631ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 10631ec1 mov ebp, esp */
  EBP = (ESP);
  /* 10631ec3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10631ec5 push 0x1064a880 */
  push32((uint32_t)(0x1064a880u));
  /* 10631eca push 0x1062b9e8 */
  push32((uint32_t)(0x1062b9e8u));
  /* 10631ecf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10631ed5 push eax */
  push32((uint32_t)(EAX));
  /* 10631ed6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10631edd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10631ee0 push ebx */
  push32((uint32_t)(EBX));
  /* 10631ee1 push esi */
  push32((uint32_t)(ESI));
  /* 10631ee2 push edi */
  push32((uint32_t)(EDI));
  /* 10631ee3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10631ee6 cmp dword ptr [0x1064e770], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e770))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10631eed jne 0x10631f32 */
  if (!C.zf) goto L_10631f32;
  /* 10631eef push 0 */
  push32((uint32_t)(0x0u));
  /* 10631ef1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10631ef3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10631ef5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10631ef7 call dword ptr [0x10650238] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650238))), 0x10631efdu);
  /* 10631efd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10631eff je 0x10631f0d */
  if (C.zf) goto L_10631f0d;
  /* 10631f01 mov dword ptr [0x1064e770], 1 */
  w32((uint32_t)(0x1064e770), (0x1u));
  /* 10631f0b jmp 0x10631f32 */
  goto L_10631f32;
L_10631f0d:;
  /* 10631f0d push 0 */
  push32((uint32_t)(0x0u));
  /* 10631f0f push 0 */
  push32((uint32_t)(0x0u));
  /* 10631f11 push 1 */
  push32((uint32_t)(0x1u));
  /* 10631f13 push 0 */
  push32((uint32_t)(0x0u));
  /* 10631f15 call dword ptr [0x10650250] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650250))), 0x10631f1bu);
  /* 10631f1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10631f1d je 0x10631f2b */
  if (C.zf) goto L_10631f2b;
  /* 10631f1f mov dword ptr [0x1064e770], 2 */
  w32((uint32_t)(0x1064e770), (0x2u));
  /* 10631f29 jmp 0x10631f32 */
  goto L_10631f32;
L_10631f2b:;
  /* 10631f2b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10631f2d jmp 0x10632051 */
  goto L_10632051;
L_10631f32:;
  /* 10631f32 cmp dword ptr [0x1064e770], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1064e770))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10631f39 jne 0x10631f56 */
  if (!C.zf) goto L_10631f56;
  /* 10631f3b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10631f3e push eax */
  push32((uint32_t)(EAX));
  /* 10631f3f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10631f42 push ecx */
  push32((uint32_t)(ECX));
  /* 10631f43 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10631f46 push edx */
  push32((uint32_t)(EDX));
  /* 10631f47 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10631f4a push eax */
  push32((uint32_t)(EAX));
  /* 10631f4b call dword ptr [0x10650250] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650250))), 0x10631f51u);
  /* 10631f51 jmp 0x10632051 */
  goto L_10632051;
L_10631f56:;
  /* 10631f56 cmp dword ptr [0x1064e770], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1064e770))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10631f5d jne 0x1063204f */
  if (!C.zf) goto L_1063204f;
  /* 10631f63 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10631f67 jne 0x10631f72 */
  if (!C.zf) goto L_10631f72;
  /* 10631f69 mov ecx, dword ptr [0x1064e620] */
  ECX = (r32((uint32_t)(0x1064e620)));
  /* 10631f6f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10631f72:;
  /* 10631f72 push 0 */
  push32((uint32_t)(0x0u));
  /* 10631f74 push 0 */
  push32((uint32_t)(0x0u));
  /* 10631f76 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10631f79 push edx */
  push32((uint32_t)(EDX));
  /* 10631f7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10631f7d push eax */
  push32((uint32_t)(EAX));
  /* 10631f7e call dword ptr [0x10650238] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650238))), 0x10631f84u);
  /* 10631f84 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10631f87 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10631f8b jne 0x10631f94 */
  if (!C.zf) goto L_10631f94;
  /* 10631f8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10631f8f jmp 0x10632051 */
  goto L_10632051;
L_10631f94:;
  /* 10631f94 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10631f9b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10631f9e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10631fa0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10631fa3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10631fa5 call 0x10625a80 */
  push32(0x10631faau); f_10625a80();
  /* 10631faa mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 10631fad mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10631fb0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10631fb3 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10631fb6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10631fbd jmp 0x10631fd6 */
  goto L_10631fd6;
  /* 10631fbf mov eax, 1 */
  EAX = (0x1u);
  /* 10631fc4 ret  */
  ESPCHK(0x10631ec0u, _esp0);
  ESP += 4; return;
  /* 10631fc5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10631fc8 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10631fcf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10631fd6:;
  /* 10631fd6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10631fda jne 0x10631fe0 */
  if (!C.zf) goto L_10631fe0;
  /* 10631fdc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10631fde jmp 0x10632051 */
  goto L_10632051;
L_10631fe0:;
  /* 10631fe0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10631fe3 push edx */
  push32((uint32_t)(EDX));
  /* 10631fe4 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10631fe7 push eax */
  push32((uint32_t)(EAX));
  /* 10631fe8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10631feb push ecx */
  push32((uint32_t)(ECX));
  /* 10631fec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10631fef push edx */
  push32((uint32_t)(EDX));
  /* 10631ff0 call dword ptr [0x10650238] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650238))), 0x10631ff6u);
  /* 10631ff6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10631ff8 jne 0x10631ffe */
  if (!C.zf) goto L_10631ffe;
  /* 10631ffa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10631ffc jmp 0x10632051 */
  goto L_10632051;
L_10631ffe:;
  /* 10631ffe cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10632002 jne 0x10632026 */
  if (!C.zf) goto L_10632026;
  /* 10632004 push 0 */
  push32((uint32_t)(0x0u));
  /* 10632006 push 0 */
  push32((uint32_t)(0x0u));
  /* 10632008 push 0 */
  push32((uint32_t)(0x0u));
  /* 1063200a push 0 */
  push32((uint32_t)(0x0u));
  /* 1063200c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1063200e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10632011 push eax */
  push32((uint32_t)(EAX));
  /* 10632012 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10632017 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1063201a push ecx */
  push32((uint32_t)(ECX));
  /* 1063201b call dword ptr [0x106502d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502d8))), 0x10632021u);
  /* 10632021 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10632024 jmp 0x1063204a */
  goto L_1063204a;
L_10632026:;
  /* 10632026 push 0 */
  push32((uint32_t)(0x0u));
  /* 10632028 push 0 */
  push32((uint32_t)(0x0u));
  /* 1063202a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1063202d push edx */
  push32((uint32_t)(EDX));
  /* 1063202e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10632031 push eax */
  push32((uint32_t)(EAX));
  /* 10632032 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10632034 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10632037 push ecx */
  push32((uint32_t)(ECX));
  /* 10632038 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1063203d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10632040 push edx */
  push32((uint32_t)(EDX));
  /* 10632041 call dword ptr [0x106502d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502d8))), 0x10632047u);
  /* 10632047 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1063204a:;
  /* 1063204a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1063204d jmp 0x10632051 */
  goto L_10632051;
L_1063204f:;
  /* 1063204f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10632051:;
  /* 10632051 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10632054 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10632057 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1063205e pop edi */
  EDI = (pop32());
  /* 1063205f pop esi */
  ESI = (pop32());
  /* 10632060 pop ebx */
  EBX = (pop32());
  /* 10632061 mov esp, ebp */
  ESP = (EBP);
  /* 10632063 pop ebp */
  EBP = (pop32());
  /* 10632064 ret  */
  ESPCHK(0x10631ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012070 @ 0x10632070 (11 bytes, 6 insns) */
void f_10632070(void) {
  FTRACE(0x10632070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10632070 push ebp */
  push32((uint32_t)(EBP));
  /* 10632071 mov ebp, esp */
  EBP = (ESP);
  /* 10632073 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10632076 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10632079 pop ebp */
  EBP = (pop32());
  /* 1063207a ret  */
  ESPCHK(0x10632070u, _esp0);
  ESP += 4; return;
}

/* FUN_10012080 @ 0x10632080 (147 bytes, 43 insns) */
void f_10632080(void) {
  FTRACE(0x10632080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10632080 push ebp */
  push32((uint32_t)(EBP));
  /* 10632081 mov ebp, esp */
  EBP = (ESP);
  /* 10632083 push ecx */
  push32((uint32_t)(ECX));
  /* 10632084 cmp dword ptr [0x1064e610], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e610))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1063208b jne 0x106320a7 */
  if (!C.zf) goto L_106320a7;
  /* 1063208d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10632091 jl 0x106320a2 */
  if ((C.sf!=C.of)) goto L_106320a2;
  /* 10632093 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10632097 jg 0x106320a2 */
  if ((!C.zf&&C.sf==C.of)) goto L_106320a2;
  /* 10632099 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1063209c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1063209f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_106320a2:;
  /* 106320a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106320a5 jmp 0x1063210f */
  goto L_1063210f;
L_106320a7:;
  /* 106320a7 push 0x1064e79c */
  push32((uint32_t)(0x1064e79cu));
  /* 106320ac call dword ptr [0x10650280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650280))), 0x106320b2u);
  /* 106320b2 cmp dword ptr [0x1064e78c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e78c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106320b9 je 0x106320d9 */
  if (C.zf) goto L_106320d9;
  /* 106320bb push 0x1064e79c */
  push32((uint32_t)(0x1064e79cu));
  /* 106320c0 call dword ptr [0x10650270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650270))), 0x106320c6u);
  /* 106320c6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 106320c8 call 0x106262e0 */
  push32(0x106320cdu); f_106262e0();
  /* 106320cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106320d0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 106320d7 jmp 0x106320e0 */
  goto L_106320e0;
L_106320d9:;
  /* 106320d9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_106320e0:;
  /* 106320e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106320e3 push ecx */
  push32((uint32_t)(ECX));
  /* 106320e4 call 0x10632120 */
  push32(0x106320e9u); f_10632120();
  /* 106320e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106320ec mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 106320ef cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106320f3 je 0x10632101 */
  if (C.zf) goto L_10632101;
  /* 106320f5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 106320f7 call 0x10626380 */
  push32(0x106320fcu); f_10626380();
  /* 106320fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106320ff jmp 0x1063210c */
  goto L_1063210c;
L_10632101:;
  /* 10632101 push 0x1064e79c */
  push32((uint32_t)(0x1064e79cu));
  /* 10632106 call dword ptr [0x10650270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650270))), 0x1063210cu);
L_1063210c:;
  /* 1063210c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1063210f:;
  /* 1063210f mov esp, ebp */
  ESP = (EBP);
  /* 10632111 pop ebp */
  EBP = (pop32());
  /* 10632112 ret  */
  ESPCHK(0x10632080u, _esp0);
  ESP += 4; return;
}

/* FUN_10012120 @ 0x10632120 (299 bytes, 91 insns) */
void f_10632120(void) {
  FTRACE(0x10632120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10632120 push ebp */
  push32((uint32_t)(EBP));
  /* 10632121 mov ebp, esp */
  EBP = (ESP);
  /* 10632123 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10632126 cmp dword ptr [0x1064e610], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e610))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1063212d jne 0x1063214c */
  if (!C.zf) goto L_1063214c;
  /* 1063212f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10632133 jl 0x10632144 */
  if ((C.sf!=C.of)) goto L_10632144;
  /* 10632135 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10632139 jg 0x10632144 */
  if ((!C.zf&&C.sf==C.of)) goto L_10632144;
  /* 1063213b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1063213e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10632141 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10632144:;
  /* 10632144 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10632147 jmp 0x10632247 */
  goto L_10632247;
L_1063214c:;
  /* 1063214c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10632153 jge 0x10632193 */
  if ((C.sf==C.of)) goto L_10632193;
  /* 10632155 cmp dword ptr [0x1064cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1064cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1063215c jle 0x10632171 */
  if ((C.zf||C.sf!=C.of)) goto L_10632171;
  /* 1063215e push 1 */
  push32((uint32_t)(0x1u));
  /* 10632160 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10632163 push ecx */
  push32((uint32_t)(ECX));
  /* 10632164 call 0x106288f0 */
  push32(0x10632169u); f_106288f0();
  /* 10632169 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1063216c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1063216f jmp 0x10632185 */
  goto L_10632185;
L_10632171:;
  /* 10632171 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10632174 mov eax, dword ptr [0x1064cc98] */
  EAX = (r32((uint32_t)(0x1064cc98)));
  /* 10632179 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1063217b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1063217f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10632182 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10632185:;
  /* 10632185 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10632189 jne 0x10632193 */
  if (!C.zf) goto L_10632193;
  /* 1063218b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1063218e jmp 0x10632247 */
  goto L_10632247;
L_10632193:;
  /* 10632193 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10632196 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10632199 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1063219f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 106321a5 mov eax, dword ptr [0x1064cc98] */
  EAX = (r32((uint32_t)(0x1064cc98)));
  /* 106321aa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106321ac mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 106321b0 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 106321b6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106321b8 je 0x106321dc */
  if (C.zf) goto L_106321dc;
  /* 106321ba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106321bd sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 106321c0 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 106321c6 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 106321c9 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 106321cc mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 106321cf mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 106321d3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 106321da jmp 0x106321ed */
  goto L_106321ed;
L_106321dc:;
  /* 106321dc mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 106321df mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 106321e2 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 106321e6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_106321ed:;
  /* 106321ed push 1 */
  push32((uint32_t)(0x1u));
  /* 106321ef push 0 */
  push32((uint32_t)(0x0u));
  /* 106321f1 push 3 */
  push32((uint32_t)(0x3u));
  /* 106321f3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 106321f6 push edx */
  push32((uint32_t)(EDX));
  /* 106321f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106321fa push eax */
  push32((uint32_t)(EAX));
  /* 106321fb lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 106321fe push ecx */
  push32((uint32_t)(ECX));
  /* 106321ff push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10632204 mov edx, dword ptr [0x1064e610] */
  EDX = (r32((uint32_t)(0x1064e610)));
  /* 1063220a push edx */
  push32((uint32_t)(EDX));
  /* 1063220b call 0x1062acd0 */
  push32(0x10632210u); f_1062acd0();
  /* 10632210 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10632213 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10632216 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1063221a jne 0x10632221 */
  if (!C.zf) goto L_10632221;
  /* 1063221c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1063221f jmp 0x10632247 */
  goto L_10632247;
L_10632221:;
  /* 10632221 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10632225 jne 0x10632231 */
  if (!C.zf) goto L_10632231;
  /* 10632227 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1063222a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1063222f jmp 0x10632247 */
  goto L_10632247;
L_10632231:;
  /* 10632231 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10632234 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10632239 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 1063223c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10632242 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10632245 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_10632247:;
  /* 10632247 mov esp, ebp */
  ESP = (EBP);
  /* 10632249 pop ebp */
  EBP = (pop32());
  /* 1063224a ret  */
  ESPCHK(0x10632120u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x10632250 (52 bytes, 19 insns) */
void f_10632250(void) {
  FTRACE(0x10632250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10632250 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10632254 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10632258 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1063225a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1063225e jne 0x10632269 */
  if (!C.zf) goto L_10632269;
  /* 10632260 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10632264 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10632266 ret 0x10 */
  ESPCHK(0x10632250u, _esp0);
  ESP += 20; return;
L_10632269:;
  /* 10632269 push ebx */
  push32((uint32_t)(EBX));
  /* 1063226a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1063226c mov ebx, eax */
  EBX = (EAX);
  /* 1063226e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10632272 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10632276 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10632278 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1063227c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1063227e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10632280 pop ebx */
  EBX = (pop32());
  /* 10632281 ret 0x10 */
  ESPCHK(0x10632250u, _esp0);
  ESP += 20; return;
}

/* FUN_10012290 @ 0x10632290 (46 bytes, 18 insns) */
void f_10632290(void) {
  FTRACE(0x10632290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10632290 push ebp */
  push32((uint32_t)(EBP));
  /* 10632291 mov ebp, esp */
  EBP = (ESP);
  /* 10632293 push ecx */
  push32((uint32_t)(ECX));
  /* 10632294 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10632296 call 0x106262e0 */
  push32(0x1063229bu); f_106262e0();
  /* 1063229b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1063229e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106322a1 push eax */
  push32((uint32_t)(EAX));
  /* 106322a2 call 0x106322c0 */
  push32(0x106322a7u); f_106322c0();
  /* 106322a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106322aa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106322ad push 0xc */
  push32((uint32_t)(0xcu));
  /* 106322af call 0x10626380 */
  push32(0x106322b4u); f_10626380();
  /* 106322b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106322b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106322ba mov esp, ebp */
  ESP = (EBP);
  /* 106322bc pop ebp */
  EBP = (pop32());
  /* 106322bd ret  */
  ESPCHK(0x10632290u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x106322c0 (198 bytes, 69 insns) */
void f_106322c0(void) {
  FTRACE(0x106322c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106322c0 push ebp */
  push32((uint32_t)(EBP));
  /* 106322c1 mov ebp, esp */
  EBP = (ESP);
  /* 106322c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106322c6 mov eax, dword ptr [0x1064e430] */
  EAX = (r32((uint32_t)(0x1064e430)));
  /* 106322cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106322ce cmp dword ptr [0x1064ff20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064ff20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106322d5 jne 0x106322de */
  if (!C.zf) goto L_106322de;
  /* 106322d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106322d9 jmp 0x10632382 */
  goto L_10632382;
L_106322de:;
  /* 106322de cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106322e2 jne 0x10632306 */
  if (!C.zf) goto L_10632306;
  /* 106322e4 cmp dword ptr [0x1064e438], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e438))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106322eb je 0x10632306 */
  if (C.zf) goto L_10632306;
  /* 106322ed call 0x106323e0 */
  push32(0x106322f2u); f_106323e0();
  /* 106322f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106322f4 je 0x106322fd */
  if (C.zf) goto L_106322fd;
  /* 106322f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106322f8 jmp 0x10632382 */
  goto L_10632382;
L_106322fd:;
  /* 106322fd mov ecx, dword ptr [0x1064e430] */
  ECX = (r32((uint32_t)(0x1064e430)));
  /* 10632303 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10632306:;
  /* 10632306 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1063230a je 0x10632380 */
  if (C.zf) goto L_10632380;
  /* 1063230c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10632310 je 0x10632380 */
  if (C.zf) goto L_10632380;
  /* 10632312 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10632315 push edx */
  push32((uint32_t)(EDX));
  /* 10632316 call 0x10625710 */
  push32(0x1063231bu); f_10625710();
  /* 1063231b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1063231e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10632321:;
  /* 10632321 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10632324 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10632327 je 0x10632380 */
  if (C.zf) goto L_10632380;
  /* 10632329 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1063232c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1063232e push edx */
  push32((uint32_t)(EDX));
  /* 1063232f call 0x10625710 */
  push32(0x10632334u); f_10625710();
  /* 10632334 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10632337 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1063233a jbe 0x10632375 */
  if ((C.cf||C.zf)) goto L_10632375;
  /* 1063233c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1063233f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10632341 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10632344 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 10632348 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1063234b jne 0x10632375 */
  if (!C.zf) goto L_10632375;
  /* 1063234d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10632350 push ecx */
  push32((uint32_t)(ECX));
  /* 10632351 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10632354 push edx */
  push32((uint32_t)(EDX));
  /* 10632355 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10632358 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1063235a push ecx */
  push32((uint32_t)(ECX));
  /* 1063235b call 0x10632390 */
  push32(0x10632360u); f_10632390();
  /* 10632360 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10632363 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10632365 jne 0x10632375 */
  if (!C.zf) goto L_10632375;
  /* 10632367 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1063236a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1063236c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1063236f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 10632373 jmp 0x10632382 */
  goto L_10632382;
L_10632375:;
  /* 10632375 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10632378 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1063237b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1063237e jmp 0x10632321 */
  goto L_10632321;
L_10632380:;
  /* 10632380 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10632382:;
  /* 10632382 mov esp, ebp */
  ESP = (EBP);
  /* 10632384 pop ebp */
  EBP = (pop32());
  /* 10632385 ret  */
  ESPCHK(0x106322c0u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x10632390 (79 bytes, 32 insns) */
void f_10632390(void) {
  FTRACE(0x10632390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10632390 push ebp */
  push32((uint32_t)(EBP));
  /* 10632391 mov ebp, esp */
  EBP = (ESP);
  /* 10632393 push ecx */
  push32((uint32_t)(ECX));
  /* 10632394 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10632398 jne 0x1063239e */
  if (!C.zf) goto L_1063239e;
  /* 1063239a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1063239c jmp 0x106323db */
  goto L_106323db;
L_1063239e:;
  /* 1063239e mov eax, dword ptr [0x1064fae4] */
  EAX = (r32((uint32_t)(0x1064fae4)));
  /* 106323a3 push eax */
  push32((uint32_t)(EAX));
  /* 106323a4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106323a7 push ecx */
  push32((uint32_t)(ECX));
  /* 106323a8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106323ab push edx */
  push32((uint32_t)(EDX));
  /* 106323ac mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106323af push eax */
  push32((uint32_t)(EAX));
  /* 106323b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106323b3 push ecx */
  push32((uint32_t)(ECX));
  /* 106323b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 106323b6 mov edx, dword ptr [0x1064fd84] */
  EDX = (r32((uint32_t)(0x1064fd84)));
  /* 106323bc push edx */
  push32((uint32_t)(EDX));
  /* 106323bd call 0x10632490 */
  push32(0x106323c2u); f_10632490();
  /* 106323c2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106323c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106323c8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106323cc jne 0x106323d5 */
  if (!C.zf) goto L_106323d5;
  /* 106323ce mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 106323d3 jmp 0x106323db */
  goto L_106323db;
L_106323d5:;
  /* 106323d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106323d8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_106323db:;
  /* 106323db mov esp, ebp */
  ESP = (EBP);
  /* 106323dd pop ebp */
  EBP = (pop32());
  /* 106323de ret  */
  ESPCHK(0x10632390u, _esp0);
  ESP += 4; return;
}

/* FUN_100123e0 @ 0x106323e0 (174 bytes, 66 insns) */
void f_106323e0(void) {
  FTRACE(0x106323e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106323e0 push ebp */
  push32((uint32_t)(EBP));
  /* 106323e1 mov ebp, esp */
  EBP = (ESP);
  /* 106323e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106323e6 mov eax, dword ptr [0x1064e438] */
  EAX = (r32((uint32_t)(0x1064e438)));
  /* 106323eb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106323ee:;
  /* 106323ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106323f1 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106323f4 je 0x10632488 */
  if (C.zf) goto L_10632488;
  /* 106323fa push 0 */
  push32((uint32_t)(0x0u));
  /* 106323fc push 0 */
  push32((uint32_t)(0x0u));
  /* 106323fe push 0 */
  push32((uint32_t)(0x0u));
  /* 10632400 push 0 */
  push32((uint32_t)(0x0u));
  /* 10632402 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10632404 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10632407 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10632409 push eax */
  push32((uint32_t)(EAX));
  /* 1063240a push 0 */
  push32((uint32_t)(0x0u));
  /* 1063240c push 1 */
  push32((uint32_t)(0x1u));
  /* 1063240e call dword ptr [0x106502d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502d8))), 0x10632414u);
  /* 10632414 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10632417 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1063241b jne 0x10632422 */
  if (!C.zf) goto L_10632422;
  /* 1063241d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10632420 jmp 0x1063248a */
  goto L_1063248a;
L_10632422:;
  /* 10632422 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10632424 push 0x1064a88c */
  push32((uint32_t)(0x1064a88cu));
  /* 10632429 push 2 */
  push32((uint32_t)(0x2u));
  /* 1063242b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1063242e push ecx */
  push32((uint32_t)(ECX));
  /* 1063242f call 0x106228e0 */
  push32(0x10632434u); f_106228e0();
  /* 10632434 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10632437 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1063243a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1063243e jne 0x10632445 */
  if (!C.zf) goto L_10632445;
  /* 10632440 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10632443 jmp 0x1063248a */
  goto L_1063248a;
L_10632445:;
  /* 10632445 push 0 */
  push32((uint32_t)(0x0u));
  /* 10632447 push 0 */
  push32((uint32_t)(0x0u));
  /* 10632449 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1063244c push edx */
  push32((uint32_t)(EDX));
  /* 1063244d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10632450 push eax */
  push32((uint32_t)(EAX));
  /* 10632451 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10632453 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10632456 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10632458 push edx */
  push32((uint32_t)(EDX));
  /* 10632459 push 0 */
  push32((uint32_t)(0x0u));
  /* 1063245b push 1 */
  push32((uint32_t)(0x1u));
  /* 1063245d call dword ptr [0x106502d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502d8))), 0x10632463u);
  /* 10632463 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10632465 jne 0x1063246c */
  if (!C.zf) goto L_1063246c;
  /* 10632467 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1063246a jmp 0x1063248a */
  goto L_1063248a;
L_1063246c:;
  /* 1063246c push 0 */
  push32((uint32_t)(0x0u));
  /* 1063246e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10632471 push eax */
  push32((uint32_t)(EAX));
  /* 10632472 call 0x106328e0 */
  push32(0x10632477u); f_106328e0();
  /* 10632477 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1063247a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1063247d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10632480 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10632483 jmp 0x106323ee */
  goto L_106323ee;
L_10632488:;
  /* 10632488 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1063248a:;
  /* 1063248a mov esp, ebp */
  ESP = (EBP);
  /* 1063248c pop ebp */
  EBP = (pop32());
  /* 1063248d ret  */
  ESPCHK(0x106323e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012490 @ 0x10632490 (970 bytes, 340 insns) */
void f_10632490(void) {
  FTRACE(0x10632490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10632490 push ebp */
  push32((uint32_t)(EBP));
  /* 10632491 mov ebp, esp */
  EBP = (ESP);
  /* 10632493 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10632495 push 0x1064a8e0 */
  push32((uint32_t)(0x1064a8e0u));
  /* 1063249a push 0x1062b9e8 */
  push32((uint32_t)(0x1062b9e8u));
  /* 1063249f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 106324a5 push eax */
  push32((uint32_t)(EAX));
  /* 106324a6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 106324ad add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106324b0 push ebx */
  push32((uint32_t)(EBX));
  /* 106324b1 push esi */
  push32((uint32_t)(ESI));
  /* 106324b2 push edi */
  push32((uint32_t)(EDI));
  /* 106324b3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 106324b6 cmp dword ptr [0x1064e774], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e774))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106324bd jne 0x10632516 */
  if (!C.zf) goto L_10632516;
  /* 106324bf push 1 */
  push32((uint32_t)(0x1u));
  /* 106324c1 push 0x10649f3c */
  push32((uint32_t)(0x10649f3cu));
  /* 106324c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 106324c8 push 0x10649f3c */
  push32((uint32_t)(0x10649f3cu));
  /* 106324cd push 0 */
  push32((uint32_t)(0x0u));
  /* 106324cf push 0 */
  push32((uint32_t)(0x0u));
  /* 106324d1 call dword ptr [0x10650234] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650234))), 0x106324d7u);
  /* 106324d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106324d9 je 0x106324e7 */
  if (C.zf) goto L_106324e7;
  /* 106324db mov dword ptr [0x1064e774], 1 */
  w32((uint32_t)(0x1064e774), (0x1u));
  /* 106324e5 jmp 0x10632516 */
  goto L_10632516;
L_106324e7:;
  /* 106324e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 106324e9 push 0x10649f38 */
  push32((uint32_t)(0x10649f38u));
  /* 106324ee push 1 */
  push32((uint32_t)(0x1u));
  /* 106324f0 push 0x10649f38 */
  push32((uint32_t)(0x10649f38u));
  /* 106324f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 106324f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 106324f9 call dword ptr [0x10650240] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650240))), 0x106324ffu);
  /* 106324ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10632501 je 0x1063250f */
  if (C.zf) goto L_1063250f;
  /* 10632503 mov dword ptr [0x1064e774], 2 */
  w32((uint32_t)(0x1064e774), (0x2u));
  /* 1063250d jmp 0x10632516 */
  goto L_10632516;
L_1063250f:;
  /* 1063250f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10632511 jmp 0x10632874 */
  goto L_10632874;
L_10632516:;
  /* 10632516 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1063251a jle 0x1063252f */
  if ((C.zf||C.sf!=C.of)) goto L_1063252f;
  /* 1063251c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1063251f push eax */
  push32((uint32_t)(EAX));
  /* 10632520 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10632523 push ecx */
  push32((uint32_t)(ECX));
  /* 10632524 call 0x10632890 */
  push32(0x10632529u); f_10632890();
  /* 10632529 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1063252c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1063252f:;
  /* 1063252f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10632533 jle 0x10632548 */
  if ((C.zf||C.sf!=C.of)) goto L_10632548;
  /* 10632535 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10632538 push edx */
  push32((uint32_t)(EDX));
  /* 10632539 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1063253c push eax */
  push32((uint32_t)(EAX));
  /* 1063253d call 0x10632890 */
  push32(0x10632542u); f_10632890();
  /* 10632542 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10632545 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_10632548:;
  /* 10632548 cmp dword ptr [0x1064e774], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1064e774))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1063254f jne 0x10632574 */
  if (!C.zf) goto L_10632574;
  /* 10632551 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10632554 push ecx */
  push32((uint32_t)(ECX));
  /* 10632555 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10632558 push edx */
  push32((uint32_t)(EDX));
  /* 10632559 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1063255c push eax */
  push32((uint32_t)(EAX));
  /* 1063255d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10632560 push ecx */
  push32((uint32_t)(ECX));
  /* 10632561 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10632564 push edx */
  push32((uint32_t)(EDX));
  /* 10632565 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10632568 push eax */
  push32((uint32_t)(EAX));
  /* 10632569 call dword ptr [0x10650240] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650240))), 0x1063256fu);
  /* 1063256f jmp 0x10632874 */
  goto L_10632874;
L_10632574:;
  /* 10632574 cmp dword ptr [0x1064e774], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1064e774))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1063257b jne 0x10632872 */
  if (!C.zf) goto L_10632872;
  /* 10632581 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10632585 jne 0x10632590 */
  if (!C.zf) goto L_10632590;
  /* 10632587 mov ecx, dword ptr [0x1064e620] */
  ECX = (r32((uint32_t)(0x1064e620)));
  /* 1063258d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_10632590:;
  /* 10632590 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10632594 je 0x106325a0 */
  if (C.zf) goto L_106325a0;
  /* 10632596 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1063259a jne 0x1063271c */
  if (!C.zf) goto L_1063271c;
L_106325a0:;
  /* 106325a0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106325a3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106325a6 jne 0x106325b2 */
  if (!C.zf) goto L_106325b2;
  /* 106325a8 mov eax, 2 */
  EAX = (0x2u);
  /* 106325ad jmp 0x10632874 */
  goto L_10632874;
L_106325b2:;
  /* 106325b2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106325b6 jle 0x106325c2 */
  if ((C.zf||C.sf!=C.of)) goto L_106325c2;
  /* 106325b8 mov eax, 1 */
  EAX = (0x1u);
  /* 106325bd jmp 0x10632874 */
  goto L_10632874;
L_106325c2:;
  /* 106325c2 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106325c6 jle 0x106325d2 */
  if ((C.zf||C.sf!=C.of)) goto L_106325d2;
  /* 106325c8 mov eax, 3 */
  EAX = (0x3u);
  /* 106325cd jmp 0x10632874 */
  goto L_10632874;
L_106325d2:;
  /* 106325d2 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 106325d5 push eax */
  push32((uint32_t)(EAX));
  /* 106325d6 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 106325d9 push ecx */
  push32((uint32_t)(ECX));
  /* 106325da call dword ptr [0x10650318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650318))), 0x106325e0u);
  /* 106325e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106325e2 jne 0x106325eb */
  if (!C.zf) goto L_106325eb;
  /* 106325e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106325e6 jmp 0x10632874 */
  goto L_10632874;
L_106325eb:;
  /* 106325eb cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106325ef jne 0x106325f7 */
  if (!C.zf) goto L_106325f7;
  /* 106325f1 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106325f5 je 0x10632624 */
  if (C.zf) goto L_10632624;
L_106325f7:;
  /* 106325f7 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106325fb jne 0x10632603 */
  if (!C.zf) goto L_10632603;
  /* 106325fd cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10632601 je 0x10632624 */
  if (C.zf) goto L_10632624;
L_10632603:;
  /* 10632603 push 0x1064a8a0 */
  push32((uint32_t)(0x1064a8a0u));
  /* 10632608 push 0 */
  push32((uint32_t)(0x0u));
  /* 1063260a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 1063260f push 0x1064a898 */
  push32((uint32_t)(0x1064a898u));
  /* 10632614 push 2 */
  push32((uint32_t)(0x2u));
  /* 10632616 call 0x106219a0 */
  push32(0x1063261bu); f_106219a0();
  /* 1063261b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1063261e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10632621 jne 0x10632624 */
  if (!C.zf) goto L_10632624;
  /* 10632623 int3  */
  x86_unimpl("int3 @ 0x10632623");
L_10632624:;
  /* 10632624 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10632626 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10632628 jne 0x106325eb */
  if (!C.zf) goto L_106325eb;
  /* 1063262a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1063262e jle 0x106326a3 */
  if ((C.zf||C.sf!=C.of)) goto L_106326a3;
  /* 10632630 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10632634 jae 0x10632640 */
  if (!C.cf) goto L_10632640;
  /* 10632636 mov eax, 3 */
  EAX = (0x3u);
  /* 1063263b jmp 0x10632874 */
  goto L_10632874;
L_10632640:;
  /* 10632640 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 10632643 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 10632646 jmp 0x10632651 */
  goto L_10632651;
L_10632648:;
  /* 10632648 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1063264b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1063264e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_10632651:;
  /* 10632651 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10632654 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10632656 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10632658 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1063265a je 0x10632699 */
  if (C.zf) goto L_10632699;
  /* 1063265c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1063265f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10632661 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10632664 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10632666 je 0x10632699 */
  if (C.zf) goto L_10632699;
  /* 10632668 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1063266b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1063266d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1063266f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10632672 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10632674 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10632676 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10632678 jl 0x10632697 */
  if ((C.sf!=C.of)) goto L_10632697;
  /* 1063267a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1063267d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1063267f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10632681 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10632684 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10632686 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10632689 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1063268b jg 0x10632697 */
  if ((!C.zf&&C.sf==C.of)) goto L_10632697;
  /* 1063268d mov eax, 2 */
  EAX = (0x2u);
  /* 10632692 jmp 0x10632874 */
  goto L_10632874;
L_10632697:;
  /* 10632697 jmp 0x10632648 */
  goto L_10632648;
L_10632699:;
  /* 10632699 mov eax, 3 */
  EAX = (0x3u);
  /* 1063269e jmp 0x10632874 */
  goto L_10632874;
L_106326a3:;
  /* 106326a3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106326a7 jle 0x1063271c */
  if ((C.zf||C.sf!=C.of)) goto L_1063271c;
  /* 106326a9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106326ad jae 0x106326b9 */
  if (!C.cf) goto L_106326b9;
  /* 106326af mov eax, 1 */
  EAX = (0x1u);
  /* 106326b4 jmp 0x10632874 */
  goto L_10632874;
L_106326b9:;
  /* 106326b9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 106326bc mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 106326bf jmp 0x106326ca */
  goto L_106326ca;
L_106326c1:;
  /* 106326c1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 106326c4 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106326c7 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_106326ca:;
  /* 106326ca mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 106326cd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106326cf mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106326d1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106326d3 je 0x10632712 */
  if (C.zf) goto L_10632712;
  /* 106326d5 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 106326d8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106326da mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 106326dd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106326df je 0x10632712 */
  if (C.zf) goto L_10632712;
  /* 106326e1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106326e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106326e6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106326e8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 106326eb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106326ed mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106326ef cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106326f1 jl 0x10632710 */
  if ((C.sf!=C.of)) goto L_10632710;
  /* 106326f3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106326f6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106326f8 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 106326fa mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 106326fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106326ff mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10632702 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10632704 jg 0x10632710 */
  if ((!C.zf&&C.sf==C.of)) goto L_10632710;
  /* 10632706 mov eax, 2 */
  EAX = (0x2u);
  /* 1063270b jmp 0x10632874 */
  goto L_10632874;
L_10632710:;
  /* 10632710 jmp 0x106326c1 */
  goto L_106326c1;
L_10632712:;
  /* 10632712 mov eax, 1 */
  EAX = (0x1u);
  /* 10632717 jmp 0x10632874 */
  goto L_10632874;
L_1063271c:;
  /* 1063271c push 0 */
  push32((uint32_t)(0x0u));
  /* 1063271e push 0 */
  push32((uint32_t)(0x0u));
  /* 10632720 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10632723 push ecx */
  push32((uint32_t)(ECX));
  /* 10632724 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10632727 push edx */
  push32((uint32_t)(EDX));
  /* 10632728 push 9 */
  push32((uint32_t)(0x9u));
  /* 1063272a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1063272d push eax */
  push32((uint32_t)(EAX));
  /* 1063272e call dword ptr [0x10650324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650324))), 0x10632734u);
  /* 10632734 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10632737 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1063273b jne 0x10632744 */
  if (!C.zf) goto L_10632744;
  /* 1063273d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1063273f jmp 0x10632874 */
  goto L_10632874;
L_10632744:;
  /* 10632744 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1063274b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1063274e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10632750 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10632753 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10632755 call 0x10625a80 */
  push32(0x1063275au); f_10625a80();
  /* 1063275a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 1063275d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10632760 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 10632763 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10632766 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1063276d jmp 0x10632786 */
  goto L_10632786;
  /* 1063276f mov eax, 1 */
  EAX = (0x1u);
  /* 10632774 ret  */
  ESPCHK(0x10632490u, _esp0);
  ESP += 4; return;
  /* 10632775 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10632778 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1063277f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10632786:;
  /* 10632786 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1063278a jne 0x10632793 */
  if (!C.zf) goto L_10632793;
  /* 1063278c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1063278e jmp 0x10632874 */
  goto L_10632874;
L_10632793:;
  /* 10632793 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10632796 push edx */
  push32((uint32_t)(EDX));
  /* 10632797 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1063279a push eax */
  push32((uint32_t)(EAX));
  /* 1063279b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1063279e push ecx */
  push32((uint32_t)(ECX));
  /* 1063279f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106327a2 push edx */
  push32((uint32_t)(EDX));
  /* 106327a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 106327a5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 106327a8 push eax */
  push32((uint32_t)(EAX));
  /* 106327a9 call dword ptr [0x10650324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650324))), 0x106327afu);
  /* 106327af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106327b1 jne 0x106327ba */
  if (!C.zf) goto L_106327ba;
  /* 106327b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106327b5 jmp 0x10632874 */
  goto L_10632874;
L_106327ba:;
  /* 106327ba push 0 */
  push32((uint32_t)(0x0u));
  /* 106327bc push 0 */
  push32((uint32_t)(0x0u));
  /* 106327be mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 106327c1 push ecx */
  push32((uint32_t)(ECX));
  /* 106327c2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106327c5 push edx */
  push32((uint32_t)(EDX));
  /* 106327c6 push 9 */
  push32((uint32_t)(0x9u));
  /* 106327c8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 106327cb push eax */
  push32((uint32_t)(EAX));
  /* 106327cc call dword ptr [0x10650324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650324))), 0x106327d2u);
  /* 106327d2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 106327d5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106327d9 jne 0x106327e2 */
  if (!C.zf) goto L_106327e2;
  /* 106327db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106327dd jmp 0x10632874 */
  goto L_10632874;
L_106327e2:;
  /* 106327e2 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 106327e9 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 106327ec shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 106327ee add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106327f1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 106327f3 call 0x10625a80 */
  push32(0x106327f8u); f_10625a80();
  /* 106327f8 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 106327fb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 106327fe mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 10632801 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10632804 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1063280b jmp 0x10632824 */
  goto L_10632824;
  /* 1063280d mov eax, 1 */
  EAX = (0x1u);
  /* 10632812 ret  */
  ESPCHK(0x10632490u, _esp0);
  ESP += 4; return;
  /* 10632813 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10632816 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 1063281d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10632824:;
  /* 10632824 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10632828 jne 0x1063282e */
  if (!C.zf) goto L_1063282e;
  /* 1063282a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1063282c jmp 0x10632874 */
  goto L_10632874;
L_1063282e:;
  /* 1063282e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10632831 push edx */
  push32((uint32_t)(EDX));
  /* 10632832 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10632835 push eax */
  push32((uint32_t)(EAX));
  /* 10632836 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10632839 push ecx */
  push32((uint32_t)(ECX));
  /* 1063283a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1063283d push edx */
  push32((uint32_t)(EDX));
  /* 1063283e push 1 */
  push32((uint32_t)(0x1u));
  /* 10632840 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10632843 push eax */
  push32((uint32_t)(EAX));
  /* 10632844 call dword ptr [0x10650324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650324))), 0x1063284au);
  /* 1063284a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1063284c jne 0x10632852 */
  if (!C.zf) goto L_10632852;
  /* 1063284e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10632850 jmp 0x10632874 */
  goto L_10632874;
L_10632852:;
  /* 10632852 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10632855 push ecx */
  push32((uint32_t)(ECX));
  /* 10632856 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10632859 push edx */
  push32((uint32_t)(EDX));
  /* 1063285a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1063285d push eax */
  push32((uint32_t)(EAX));
  /* 1063285e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10632861 push ecx */
  push32((uint32_t)(ECX));
  /* 10632862 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10632865 push edx */
  push32((uint32_t)(EDX));
  /* 10632866 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10632869 push eax */
  push32((uint32_t)(EAX));
  /* 1063286a call dword ptr [0x10650234] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650234))), 0x10632870u);
  /* 10632870 jmp 0x10632874 */
  goto L_10632874;
L_10632872:;
  /* 10632872 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10632874:;
  /* 10632874 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 10632877 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1063287a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10632881 pop edi */
  EDI = (pop32());
  /* 10632882 pop esi */
  ESI = (pop32());
  /* 10632883 pop ebx */
  EBX = (pop32());
  /* 10632884 mov esp, ebp */
  ESP = (EBP);
  /* 10632886 pop ebp */
  EBP = (pop32());
  /* 10632887 ret  */
  ESPCHK(0x10632490u, _esp0);
  ESP += 4; return;
}

/* FUN_10012890 @ 0x10632890 (80 bytes, 32 insns) */
void f_10632890(void) {
  FTRACE(0x10632890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10632890 push ebp */
  push32((uint32_t)(EBP));
  /* 10632891 mov ebp, esp */
  EBP = (ESP);
  /* 10632893 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10632896 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10632899 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1063289c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1063289f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_106328a2:;
  /* 106328a2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106328a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106328a8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106328ab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106328ae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106328b0 je 0x106328c7 */
  if (C.zf) goto L_106328c7;
  /* 106328b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106328b5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106328b8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106328ba je 0x106328c7 */
  if (C.zf) goto L_106328c7;
  /* 106328bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106328bf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106328c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106328c5 jmp 0x106328a2 */
  goto L_106328a2;
L_106328c7:;
  /* 106328c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106328ca movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106328cd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106328cf jne 0x106328d9 */
  if (!C.zf) goto L_106328d9;
  /* 106328d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106328d4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106328d7 jmp 0x106328dc */
  goto L_106328dc;
L_106328d9:;
  /* 106328d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_106328dc:;
  /* 106328dc mov esp, ebp */
  ESP = (EBP);
  /* 106328de pop ebp */
  EBP = (pop32());
  /* 106328df ret  */
  ESPCHK(0x10632890u, _esp0);
  ESP += 4; return;
}

/* FUN_100128e0 @ 0x106328e0 (736 bytes, 224 insns) */
void f_106328e0(void) {
  FTRACE(0x106328e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106328e0 push ebp */
  push32((uint32_t)(EBP));
  /* 106328e1 mov ebp, esp */
  EBP = (ESP);
  /* 106328e3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106328e6 push esi */
  push32((uint32_t)(ESI));
  /* 106328e7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106328eb je 0x1063290c */
  if (C.zf) goto L_1063290c;
  /* 106328ed push 0x3d */
  push32((uint32_t)(0x3du));
  /* 106328ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106328f2 push eax */
  push32((uint32_t)(EAX));
  /* 106328f3 call 0x10632d30 */
  push32(0x106328f8u); f_10632d30();
  /* 106328f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106328fb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 106328fe cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10632902 je 0x1063290c */
  if (C.zf) goto L_1063290c;
  /* 10632904 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10632907 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1063290a jne 0x10632914 */
  if (!C.zf) goto L_10632914;
L_1063290c:;
  /* 1063290c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1063290f jmp 0x10632bbb */
  goto L_10632bbb;
L_10632914:;
  /* 10632914 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10632917 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1063291b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1063291d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1063291f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10632920 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10632923 mov ecx, dword ptr [0x1064e430] */
  ECX = (r32((uint32_t)(0x1064e430)));
  /* 10632929 cmp ecx, dword ptr [0x1064e434] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1064e434))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1063292f jne 0x10632945 */
  if (!C.zf) goto L_10632945;
  /* 10632931 mov edx, dword ptr [0x1064e430] */
  EDX = (r32((uint32_t)(0x1064e430)));
  /* 10632937 push edx */
  push32((uint32_t)(EDX));
  /* 10632938 call 0x10632c40 */
  push32(0x1063293du); f_10632c40();
  /* 1063293d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10632940 mov dword ptr [0x1064e430], eax */
  w32((uint32_t)(0x1064e430), (EAX));
L_10632945:;
  /* 10632945 cmp dword ptr [0x1064e430], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e430))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1063294c jne 0x10632a05 */
  if (!C.zf) goto L_10632a05;
  /* 10632952 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10632956 je 0x10632977 */
  if (C.zf) goto L_10632977;
  /* 10632958 cmp dword ptr [0x1064e438], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e438))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1063295f je 0x10632977 */
  if (C.zf) goto L_10632977;
  /* 10632961 call 0x106323e0 */
  push32(0x10632966u); f_106323e0();
  /* 10632966 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10632968 je 0x10632972 */
  if (C.zf) goto L_10632972;
  /* 1063296a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1063296d jmp 0x10632bbb */
  goto L_10632bbb;
L_10632972:;
  /* 10632972 jmp 0x10632a05 */
  goto L_10632a05;
L_10632977:;
  /* 10632977 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1063297b je 0x10632984 */
  if (C.zf) goto L_10632984;
  /* 1063297d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1063297f jmp 0x10632bbb */
  goto L_10632bbb;
L_10632984:;
  /* 10632984 cmp dword ptr [0x1064e430], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e430))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1063298b jne 0x106329c4 */
  if (!C.zf) goto L_106329c4;
  /* 1063298d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 10632992 push 0x1064a8f8 */
  push32((uint32_t)(0x1064a8f8u));
  /* 10632997 push 2 */
  push32((uint32_t)(0x2u));
  /* 10632999 push 4 */
  push32((uint32_t)(0x4u));
  /* 1063299b call 0x106228e0 */
  push32(0x106329a0u); f_106228e0();
  /* 106329a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106329a3 mov dword ptr [0x1064e430], eax */
  w32((uint32_t)(0x1064e430), (EAX));
  /* 106329a8 cmp dword ptr [0x1064e430], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e430))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106329af jne 0x106329b9 */
  if (!C.zf) goto L_106329b9;
  /* 106329b1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106329b4 jmp 0x10632bbb */
  goto L_10632bbb;
L_106329b9:;
  /* 106329b9 mov eax, dword ptr [0x1064e430] */
  EAX = (r32((uint32_t)(0x1064e430)));
  /* 106329be mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_106329c4:;
  /* 106329c4 cmp dword ptr [0x1064e438], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e438))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106329cb jne 0x10632a05 */
  if (!C.zf) goto L_10632a05;
  /* 106329cd push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 106329d2 push 0x1064a8f8 */
  push32((uint32_t)(0x1064a8f8u));
  /* 106329d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 106329d9 push 4 */
  push32((uint32_t)(0x4u));
  /* 106329db call 0x106228e0 */
  push32(0x106329e0u); f_106228e0();
  /* 106329e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106329e3 mov dword ptr [0x1064e438], eax */
  w32((uint32_t)(0x1064e438), (EAX));
  /* 106329e8 cmp dword ptr [0x1064e438], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e438))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106329ef jne 0x106329f9 */
  if (!C.zf) goto L_106329f9;
  /* 106329f1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106329f4 jmp 0x10632bbb */
  goto L_10632bbb;
L_106329f9:;
  /* 106329f9 mov ecx, dword ptr [0x1064e438] */
  ECX = (r32((uint32_t)(0x1064e438)));
  /* 106329ff mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_10632a05:;
  /* 10632a05 mov edx, dword ptr [0x1064e430] */
  EDX = (r32((uint32_t)(0x1064e430)));
  /* 10632a0b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10632a0e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10632a11 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10632a14 push eax */
  push32((uint32_t)(EAX));
  /* 10632a15 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10632a18 push ecx */
  push32((uint32_t)(ECX));
  /* 10632a19 call 0x10632bc0 */
  push32(0x10632a1eu); f_10632bc0();
  /* 10632a1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10632a21 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10632a24 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10632a28 jl 0x10632ac1 */
  if ((C.sf!=C.of)) goto L_10632ac1;
  /* 10632a2e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10632a31 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10632a34 je 0x10632ac1 */
  if (C.zf) goto L_10632ac1;
  /* 10632a3a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10632a3e je 0x10632ab3 */
  if (C.zf) goto L_10632ab3;
  /* 10632a40 push 2 */
  push32((uint32_t)(0x2u));
  /* 10632a42 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10632a45 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10632a48 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10632a4b push edx */
  push32((uint32_t)(EDX));
  /* 10632a4c call 0x10623370 */
  push32(0x10632a51u); f_10623370();
  /* 10632a51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10632a54 jmp 0x10632a5f */
  goto L_10632a5f;
L_10632a56:;
  /* 10632a56 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10632a59 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10632a5c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10632a5f:;
  /* 10632a5f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10632a62 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10632a65 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10632a69 je 0x10632a80 */
  if (C.zf) goto L_10632a80;
  /* 10632a6b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10632a6e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10632a71 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10632a74 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10632a77 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 10632a7b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10632a7e jmp 0x10632a56 */
  goto L_10632a56;
L_10632a80:;
  /* 10632a80 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 10632a85 push 0x1064a8f8 */
  push32((uint32_t)(0x1064a8f8u));
  /* 10632a8a push 2 */
  push32((uint32_t)(0x2u));
  /* 10632a8c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10632a8f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10632a92 push eax */
  push32((uint32_t)(EAX));
  /* 10632a93 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10632a96 push ecx */
  push32((uint32_t)(ECX));
  /* 10632a97 call 0x10622d70 */
  push32(0x10632a9cu); f_10622d70();
  /* 10632a9c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10632a9f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10632aa2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10632aa6 je 0x10632ab1 */
  if (C.zf) goto L_10632ab1;
  /* 10632aa8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10632aab mov dword ptr [0x1064e430], edx */
  w32((uint32_t)(0x1064e430), (EDX));
L_10632ab1:;
  /* 10632ab1 jmp 0x10632abf */
  goto L_10632abf;
L_10632ab3:;
  /* 10632ab3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10632ab6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10632ab9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10632abc mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_10632abf:;
  /* 10632abf jmp 0x10632b34 */
  goto L_10632b34;
L_10632ac1:;
  /* 10632ac1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10632ac5 jne 0x10632b2d */
  if (!C.zf) goto L_10632b2d;
  /* 10632ac7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10632acb jge 0x10632ad5 */
  if ((C.sf==C.of)) goto L_10632ad5;
  /* 10632acd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10632ad0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10632ad2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10632ad5:;
  /* 10632ad5 push 0xce */
  push32((uint32_t)(0xceu));
  /* 10632ada push 0x1064a8f8 */
  push32((uint32_t)(0x1064a8f8u));
  /* 10632adf push 2 */
  push32((uint32_t)(0x2u));
  /* 10632ae1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10632ae4 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 10632aeb push edx */
  push32((uint32_t)(EDX));
  /* 10632aec mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10632aef push eax */
  push32((uint32_t)(EAX));
  /* 10632af0 call 0x10622d70 */
  push32(0x10632af5u); f_10622d70();
  /* 10632af5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10632af8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10632afb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10632aff jne 0x10632b09 */
  if (!C.zf) goto L_10632b09;
  /* 10632b01 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10632b04 jmp 0x10632bbb */
  goto L_10632bbb;
L_10632b09:;
  /* 10632b09 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10632b0c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10632b0f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10632b12 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 10632b15 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10632b18 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10632b1b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 10632b23 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10632b26 mov dword ptr [0x1064e430], eax */
  w32((uint32_t)(0x1064e430), (EAX));
  /* 10632b2b jmp 0x10632b34 */
  goto L_10632b34;
L_10632b2d:;
  /* 10632b2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10632b2f jmp 0x10632bbb */
  goto L_10632bbb;
L_10632b34:;
  /* 10632b34 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10632b38 je 0x10632bb9 */
  if (C.zf) goto L_10632bb9;
  /* 10632b3a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 10632b3f push 0x1064a8f8 */
  push32((uint32_t)(0x1064a8f8u));
  /* 10632b44 push 2 */
  push32((uint32_t)(0x2u));
  /* 10632b46 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10632b49 push ecx */
  push32((uint32_t)(ECX));
  /* 10632b4a call 0x10625710 */
  push32(0x10632b4fu); f_10625710();
  /* 10632b4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10632b52 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10632b55 push eax */
  push32((uint32_t)(EAX));
  /* 10632b56 call 0x106228e0 */
  push32(0x10632b5bu); f_106228e0();
  /* 10632b5b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10632b5e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10632b61 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10632b65 je 0x10632bb9 */
  if (C.zf) goto L_10632bb9;
  /* 10632b67 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10632b6a push edx */
  push32((uint32_t)(EDX));
  /* 10632b6b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10632b6e push eax */
  push32((uint32_t)(EAX));
  /* 10632b6f call 0x10625890 */
  push32(0x10632b74u); f_10625890();
  /* 10632b74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10632b77 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10632b7a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10632b7d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10632b80 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10632b82 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10632b85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10632b88 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10632b8b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10632b8e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10632b91 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10632b94 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10632b97 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10632b99 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10632b9b not edx */
  EDX = (~(EDX));
  /* 10632b9d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10632ba0 push edx */
  push32((uint32_t)(EDX));
  /* 10632ba1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10632ba4 push eax */
  push32((uint32_t)(EAX));
  /* 10632ba5 call dword ptr [0x10650230] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650230))), 0x10632babu);
  /* 10632bab push 2 */
  push32((uint32_t)(0x2u));
  /* 10632bad mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10632bb0 push ecx */
  push32((uint32_t)(ECX));
  /* 10632bb1 call 0x10623370 */
  push32(0x10632bb6u); f_10623370();
  /* 10632bb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10632bb9:;
  /* 10632bb9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10632bbb:;
  /* 10632bbb pop esi */
  ESI = (pop32());
  /* 10632bbc mov esp, ebp */
  ESP = (EBP);
  /* 10632bbe pop ebp */
  EBP = (pop32());
  /* 10632bbf ret  */
  ESPCHK(0x106328e0u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x10632bc0 (124 bytes, 47 insns) */
void f_10632bc0(void) {
  FTRACE(0x10632bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10632bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10632bc1 mov ebp, esp */
  EBP = (ESP);
  /* 10632bc3 push ecx */
  push32((uint32_t)(ECX));
  /* 10632bc4 mov eax, dword ptr [0x1064e430] */
  EAX = (r32((uint32_t)(0x1064e430)));
  /* 10632bc9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10632bcc jmp 0x10632bd7 */
  goto L_10632bd7;
L_10632bce:;
  /* 10632bce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10632bd1 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10632bd4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10632bd7:;
  /* 10632bd7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10632bda cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10632bdd je 0x10632c2a */
  if (C.zf) goto L_10632c2a;
  /* 10632bdf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10632be2 push eax */
  push32((uint32_t)(EAX));
  /* 10632be3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10632be6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10632be8 push edx */
  push32((uint32_t)(EDX));
  /* 10632be9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10632bec push eax */
  push32((uint32_t)(EAX));
  /* 10632bed call 0x10632390 */
  push32(0x10632bf2u); f_10632390();
  /* 10632bf2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10632bf5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10632bf7 jne 0x10632c28 */
  if (!C.zf) goto L_10632c28;
  /* 10632bf9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10632bfc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10632bfe mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10632c01 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 10632c05 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10632c08 je 0x10632c1a */
  if (C.zf) goto L_10632c1a;
  /* 10632c0a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10632c0d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10632c0f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10632c12 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 10632c16 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10632c18 jne 0x10632c28 */
  if (!C.zf) goto L_10632c28;
L_10632c1a:;
  /* 10632c1a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10632c1d sub eax, dword ptr [0x1064e430] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1064e430))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10632c23 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10632c26 jmp 0x10632c38 */
  goto L_10632c38;
L_10632c28:;
  /* 10632c28 jmp 0x10632bce */
  goto L_10632bce;
L_10632c2a:;
  /* 10632c2a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10632c2d sub eax, dword ptr [0x1064e430] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1064e430))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10632c33 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10632c36 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_10632c38:;
  /* 10632c38 mov esp, ebp */
  ESP = (EBP);
  /* 10632c3a pop ebp */
  EBP = (pop32());
  /* 10632c3b ret  */
  ESPCHK(0x10632bc0u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x10632c40 (238 bytes, 80 insns) */
void f_10632c40(void) {
  FTRACE(0x10632c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10632c40 push ebp */
  push32((uint32_t)(EBP));
  /* 10632c41 mov ebp, esp */
  EBP = (ESP);
  /* 10632c43 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10632c46 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10632c4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10632c50 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10632c53 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10632c57 jne 0x10632c60 */
  if (!C.zf) goto L_10632c60;
  /* 10632c59 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10632c5b jmp 0x10632d2a */
  goto L_10632d2a;
L_10632c60:;
  /* 10632c60 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10632c63 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10632c65 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10632c68 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10632c6b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10632c6e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10632c70 je 0x10632c7d */
  if (C.zf) goto L_10632c7d;
  /* 10632c72 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10632c75 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10632c78 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10632c7b jmp 0x10632c60 */
  goto L_10632c60;
L_10632c7d:;
  /* 10632c7d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 10632c82 push 0x1064a8f8 */
  push32((uint32_t)(0x1064a8f8u));
  /* 10632c87 push 2 */
  push32((uint32_t)(0x2u));
  /* 10632c89 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10632c8c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 10632c93 push eax */
  push32((uint32_t)(EAX));
  /* 10632c94 call 0x106228e0 */
  push32(0x10632c99u); f_106228e0();
  /* 10632c99 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10632c9c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10632c9f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10632ca2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10632ca5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10632ca9 jne 0x10632cb5 */
  if (!C.zf) goto L_10632cb5;
  /* 10632cab push 9 */
  push32((uint32_t)(0x9u));
  /* 10632cad call 0x10621850 */
  push32(0x10632cb2u); f_10621850();
  /* 10632cb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10632cb5:;
  /* 10632cb5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10632cb8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10632cbb:;
  /* 10632cbb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10632cbe cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10632cc1 je 0x10632d1e */
  if (C.zf) goto L_10632d1e;
  /* 10632cc3 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 10632cc8 push 0x1064a8f8 */
  push32((uint32_t)(0x1064a8f8u));
  /* 10632ccd push 2 */
  push32((uint32_t)(0x2u));
  /* 10632ccf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10632cd2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10632cd4 push edx */
  push32((uint32_t)(EDX));
  /* 10632cd5 call 0x10625710 */
  push32(0x10632cdau); f_10625710();
  /* 10632cda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10632cdd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10632ce0 push eax */
  push32((uint32_t)(EAX));
  /* 10632ce1 call 0x106228e0 */
  push32(0x10632ce6u); f_106228e0();
  /* 10632ce6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10632ce9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10632cec mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10632cee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10632cf1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10632cf4 je 0x10632d0a */
  if (C.zf) goto L_10632d0a;
  /* 10632cf6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10632cf9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10632cfb push ecx */
  push32((uint32_t)(ECX));
  /* 10632cfc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10632cff mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10632d01 push eax */
  push32((uint32_t)(EAX));
  /* 10632d02 call 0x10625890 */
  push32(0x10632d07u); f_10625890();
  /* 10632d07 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10632d0a:;
  /* 10632d0a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10632d0d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10632d10 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10632d13 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10632d16 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10632d19 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10632d1c jmp 0x10632cbb */
  goto L_10632cbb;
L_10632d1e:;
  /* 10632d1e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10632d21 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10632d27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10632d2a:;
  /* 10632d2a mov esp, ebp */
  ESP = (EBP);
  /* 10632d2c pop ebp */
  EBP = (pop32());
  /* 10632d2d ret  */
  ESPCHK(0x10632c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d30 @ 0x10632d30 (237 bytes, 81 insns) */
void f_10632d30(void) {
  FTRACE(0x10632d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10632d30 push ebp */
  push32((uint32_t)(EBP));
  /* 10632d31 mov ebp, esp */
  EBP = (ESP);
  /* 10632d33 push ecx */
  push32((uint32_t)(ECX));
  /* 10632d34 cmp dword ptr [0x1064fb6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064fb6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10632d3b jne 0x10632d52 */
  if (!C.zf) goto L_10632d52;
  /* 10632d3d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10632d40 push eax */
  push32((uint32_t)(EAX));
  /* 10632d41 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10632d44 push ecx */
  push32((uint32_t)(ECX));
  /* 10632d45 call 0x10632e30 */
  push32(0x10632d4au); f_10632e30();
  /* 10632d4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10632d4d jmp 0x10632e19 */
  goto L_10632e19;
L_10632d52:;
  /* 10632d52 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10632d54 call 0x106262e0 */
  push32(0x10632d59u); f_106262e0();
  /* 10632d59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10632d5c jmp 0x10632d67 */
  goto L_10632d67;
L_10632d5e:;
  /* 10632d5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10632d61 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10632d64 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10632d67:;
  /* 10632d67 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10632d6a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 10632d6e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 10632d72 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10632d75 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10632d7b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10632d7d je 0x10632dfb */
  if (C.zf) goto L_10632dfb;
  /* 10632d7f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10632d82 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10632d87 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10632d89 mov cl, byte ptr [eax + 0x1064fc81] */
  CL = (r8((uint32_t)(EAX + 0x1064fc81)));
  /* 10632d8f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10632d92 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10632d94 je 0x10632de6 */
  if (C.zf) goto L_10632de6;
  /* 10632d96 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10632d99 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10632d9c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10632d9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10632da2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10632da4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10632da6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10632da8 jne 0x10632db8 */
  if (!C.zf) goto L_10632db8;
  /* 10632daa push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10632dac call 0x10626380 */
  push32(0x10632db1u); f_10626380();
  /* 10632db1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10632db4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10632db6 jmp 0x10632e19 */
  goto L_10632e19;
L_10632db8:;
  /* 10632db8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10632dbb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10632dc1 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10632dc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10632dc7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10632dc9 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10632dcb or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10632dcd cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10632dd0 jne 0x10632de4 */
  if (!C.zf) goto L_10632de4;
  /* 10632dd2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10632dd4 call 0x10626380 */
  push32(0x10632dd9u); f_10626380();
  /* 10632dd9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10632ddc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10632ddf sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10632de2 jmp 0x10632e19 */
  goto L_10632e19;
L_10632de4:;
  /* 10632de4 jmp 0x10632df6 */
  goto L_10632df6;
L_10632de6:;
  /* 10632de6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10632de9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10632def cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10632df2 jne 0x10632df6 */
  if (!C.zf) goto L_10632df6;
  /* 10632df4 jmp 0x10632dfb */
  goto L_10632dfb;
L_10632df6:;
  /* 10632df6 jmp 0x10632d5e */
  goto L_10632d5e;
L_10632dfb:;
  /* 10632dfb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10632dfd call 0x10626380 */
  push32(0x10632e02u); f_10626380();
  /* 10632e02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10632e05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10632e08 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10632e0d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10632e10 jne 0x10632e17 */
  if (!C.zf) goto L_10632e17;
  /* 10632e12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10632e15 jmp 0x10632e19 */
  goto L_10632e19;
L_10632e17:;
  /* 10632e17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10632e19:;
  /* 10632e19 mov esp, ebp */
  ESP = (EBP);
  /* 10632e1b pop ebp */
  EBP = (pop32());
  /* 10632e1c ret  */
  ESPCHK(0x10632d30u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x10632e30 (193 bytes, 87 insns) */
void f_10632e30(void) {
  FTRACE(0x10632e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10632e30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10632e32 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10632e36 push ebx */
  push32((uint32_t)(EBX));
  /* 10632e37 mov ebx, eax */
  EBX = (EAX);
  /* 10632e39 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10632e3c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10632e40 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10632e46 je 0x10632e5b */
  if (C.zf) goto L_10632e5b;
L_10632e48:;
  /* 10632e48 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 10632e4a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10632e4b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10632e4d je 0x10632e20 */
  if (C.zf) { jmp_ind(0x10632e20u); return; }
  /* 10632e4f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10632e51 je 0x10632ea4 */
  if (C.zf) goto L_10632ea4;
  /* 10632e53 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10632e59 jne 0x10632e48 */
  if (!C.zf) goto L_10632e48;
L_10632e5b:;
  /* 10632e5b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 10632e5d push edi */
  push32((uint32_t)(EDI));
  /* 10632e5e mov eax, ebx */
  EAX = (EBX);
  /* 10632e60 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 10632e63 push esi */
  push32((uint32_t)(ESI));
  /* 10632e64 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_10632e66:;
  /* 10632e66 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10632e68 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 10632e6d mov eax, ecx */
  EAX = (ECX);
  /* 10632e6f mov esi, edi */
  ESI = (EDI);
  /* 10632e71 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 10632e73 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10632e75 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10632e77 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10632e7a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10632e7d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10632e7f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10632e81 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10632e84 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 10632e8a jne 0x10632ea8 */
  if (!C.zf) goto L_10632ea8;
  /* 10632e8c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10632e91 je 0x10632e66 */
  if (C.zf) goto L_10632e66;
  /* 10632e93 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10632e98 jne 0x10632ea2 */
  if (!C.zf) goto L_10632ea2;
  /* 10632e9a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 10632ea0 jne 0x10632e66 */
  if (!C.zf) goto L_10632e66;
L_10632ea2:;
  /* 10632ea2 pop esi */
  ESI = (pop32());
  /* 10632ea3 pop edi */
  EDI = (pop32());
L_10632ea4:;
  /* 10632ea4 pop ebx */
  EBX = (pop32());
  /* 10632ea5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10632ea7 ret  */
  ESPCHK(0x10632e30u, _esp0);
  ESP += 4; return;
L_10632ea8:;
  /* 10632ea8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10632eab cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10632ead je 0x10632ee5 */
  if (C.zf) goto L_10632ee5;
  /* 10632eaf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10632eb1 je 0x10632ea2 */
  if (C.zf) goto L_10632ea2;
  /* 10632eb3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10632eb5 je 0x10632ede */
  if (C.zf) goto L_10632ede;
  /* 10632eb7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10632eb9 je 0x10632ea2 */
  if (C.zf) goto L_10632ea2;
  /* 10632ebb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10632ebe cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10632ec0 je 0x10632ed7 */
  if (C.zf) goto L_10632ed7;
  /* 10632ec2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10632ec4 je 0x10632ea2 */
  if (C.zf) goto L_10632ea2;
  /* 10632ec6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10632ec8 je 0x10632ed0 */
  if (C.zf) goto L_10632ed0;
  /* 10632eca test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10632ecc je 0x10632ea2 */
  if (C.zf) goto L_10632ea2;
  /* 10632ece jmp 0x10632e66 */
  goto L_10632e66;
L_10632ed0:;
  /* 10632ed0 pop esi */
  ESI = (pop32());
  /* 10632ed1 pop edi */
  EDI = (pop32());
  /* 10632ed2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 10632ed5 pop ebx */
  EBX = (pop32());
  /* 10632ed6 ret  */
  ESPCHK(0x10632e30u, _esp0);
  ESP += 4; return;
L_10632ed7:;
  /* 10632ed7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 10632eda pop esi */
  ESI = (pop32());
  /* 10632edb pop edi */
  EDI = (pop32());
  /* 10632edc pop ebx */
  EBX = (pop32());
  /* 10632edd ret  */
  ESPCHK(0x10632e30u, _esp0);
  ESP += 4; return;
L_10632ede:;
  /* 10632ede lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 10632ee1 pop esi */
  ESI = (pop32());
  /* 10632ee2 pop edi */
  EDI = (pop32());
  /* 10632ee3 pop ebx */
  EBX = (pop32());
  /* 10632ee4 ret  */
  ESPCHK(0x10632e30u, _esp0);
  ESP += 4; return;
L_10632ee5:;
  /* 10632ee5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 10632ee8 pop esi */
  ESI = (pop32());
  /* 10632ee9 pop edi */
  EDI = (pop32());
  /* 10632eea pop ebx */
  EBX = (pop32());
  /* 10632eeb ret  */
  ESPCHK(0x10632e30u, _esp0);
  ESP += 4; return;
  /* 10632eec jmp dword ptr [0x1065025c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1065025c)))); return;
}

/* RtlUnwind @ 0x1063303c (6 bytes, 1 insns) */
void f_1063303c(void) {
  FTRACE(0x1063303cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1063303c jmp dword ptr [0x1065033c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1065033c)))); return;
}

