#include "recomp.h"

/* FUN_1000f840 @ 0x104af840 (878 bytes, 273 insns) */
void f_104af840(void) {
  FTRACE(0x104af840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104af840 push ebp */
  push32((uint32_t)(EBP));
  /* 104af841 mov ebp, esp */
  EBP = (ESP);
  /* 104af843 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104af846 push esi */
  push32((uint32_t)(ESI));
  /* 104af847 mov eax, dword ptr [0x104cdc98] */
  EAX = (r32((uint32_t)(0x104cdc98)));
  /* 104af84c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104af84f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 104af856 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 104af85d jmp 0x104af868 */
  goto L_104af868;
L_104af85f:;
  /* 104af85f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104af862 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104af865 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_104af868:;
  /* 104af868 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104af86c jae 0x104af8a1 */
  if (!C.cf) goto L_104af8a1;
  /* 104af86e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104af871 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104af874 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 104af877 push ecx */
  push32((uint32_t)(ECX));
  /* 104af878 call 0x104a56c0 */
  push32(0x104af87du); f_104a56c0();
  /* 104af87d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104af880 mov esi, eax */
  ESI = (EAX);
  /* 104af882 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104af885 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104af888 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 104af88c push ecx */
  push32((uint32_t)(ECX));
  /* 104af88d call 0x104a56c0 */
  push32(0x104af892u); f_104a56c0();
  /* 104af892 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104af895 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104af898 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 104af89c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 104af89f jmp 0x104af85f */
  goto L_104af85f;
L_104af8a1:;
  /* 104af8a1 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 104af8a8 jmp 0x104af8b3 */
  goto L_104af8b3;
L_104af8aa:;
  /* 104af8aa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104af8ad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104af8b0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_104af8b3:;
  /* 104af8b3 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104af8b7 jae 0x104af8ed */
  if (!C.cf) goto L_104af8ed;
  /* 104af8b9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104af8bc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104af8bf mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 104af8c3 push eax */
  push32((uint32_t)(EAX));
  /* 104af8c4 call 0x104a56c0 */
  push32(0x104af8c9u); f_104a56c0();
  /* 104af8c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104af8cc mov esi, eax */
  ESI = (EAX);
  /* 104af8ce mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104af8d1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104af8d4 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 104af8d8 push eax */
  push32((uint32_t)(EAX));
  /* 104af8d9 call 0x104a56c0 */
  push32(0x104af8deu); f_104a56c0();
  /* 104af8de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104af8e1 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104af8e4 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 104af8e8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104af8eb jmp 0x104af8aa */
  goto L_104af8aa;
L_104af8ed:;
  /* 104af8ed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104af8f0 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 104af8f6 push eax */
  push32((uint32_t)(EAX));
  /* 104af8f7 call 0x104a56c0 */
  push32(0x104af8fcu); f_104a56c0();
  /* 104af8fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104af8ff mov esi, eax */
  ESI = (EAX);
  /* 104af901 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104af904 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 104af90a push edx */
  push32((uint32_t)(EDX));
  /* 104af90b call 0x104a56c0 */
  push32(0x104af910u); f_104a56c0();
  /* 104af910 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104af913 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104af916 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 104af91a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104af91d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104af920 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 104af926 push edx */
  push32((uint32_t)(EDX));
  /* 104af927 call 0x104a56c0 */
  push32(0x104af92cu); f_104a56c0();
  /* 104af92c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104af92f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104af932 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 104af936 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 104af939 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104af93c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 104af942 push ecx */
  push32((uint32_t)(ECX));
  /* 104af943 call 0x104a56c0 */
  push32(0x104af948u); f_104a56c0();
  /* 104af948 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104af94b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104af94e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 104af952 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104af955 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104af958 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 104af95e push edx */
  push32((uint32_t)(EDX));
  /* 104af95f call 0x104a56c0 */
  push32(0x104af964u); f_104a56c0();
  /* 104af964 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104af967 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104af96a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 104af96e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 104af971 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104af974 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104af979 push eax */
  push32((uint32_t)(EAX));
  /* 104af97a call 0x104a2870 */
  push32(0x104af97fu); f_104a2870();
  /* 104af97f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104af982 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104af985 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104af989 je 0x104afba6 */
  if (C.zf) goto L_104afba6;
  /* 104af98f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104af992 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 104af995 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104af998 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104af99e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 104af9a1 push 0xac */
  push32((uint32_t)(0xacu));
  /* 104af9a6 mov eax, dword ptr [0x104cdc98] */
  EAX = (r32((uint32_t)(0x104cdc98)));
  /* 104af9ab push eax */
  push32((uint32_t)(EAX));
  /* 104af9ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104af9af push ecx */
  push32((uint32_t)(ECX));
  /* 104af9b0 call 0x104a9170 */
  push32(0x104af9b5u); f_104a9170();
  /* 104af9b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104af9b8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 104af9bf jmp 0x104af9ca */
  goto L_104af9ca;
L_104af9c1:;
  /* 104af9c1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104af9c4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104af9c7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_104af9ca:;
  /* 104af9ca cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104af9ce jae 0x104afa3e */
  if (!C.cf) goto L_104afa3e;
  /* 104af9d0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104af9d3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104af9d6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104af9d9 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 104af9dc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104af9df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104af9e2 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 104af9e5 push edx */
  push32((uint32_t)(EDX));
  /* 104af9e6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104af9e9 push eax */
  push32((uint32_t)(EAX));
  /* 104af9ea call 0x104a5840 */
  push32(0x104af9efu); f_104a5840();
  /* 104af9ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104af9f2 push eax */
  push32((uint32_t)(EAX));
  /* 104af9f3 call 0x104a56c0 */
  push32(0x104af9f8u); f_104a56c0();
  /* 104af9f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104af9fb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104af9fe lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 104afa02 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 104afa05 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104afa08 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104afa0b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104afa0e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 104afa12 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104afa15 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104afa18 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 104afa1c push edx */
  push32((uint32_t)(EDX));
  /* 104afa1d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104afa20 push eax */
  push32((uint32_t)(EAX));
  /* 104afa21 call 0x104a5840 */
  push32(0x104afa26u); f_104a5840();
  /* 104afa26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104afa29 push eax */
  push32((uint32_t)(EAX));
  /* 104afa2a call 0x104a56c0 */
  push32(0x104afa2fu); f_104a56c0();
  /* 104afa2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104afa32 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104afa35 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 104afa39 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 104afa3c jmp 0x104af9c1 */
  goto L_104af9c1;
L_104afa3e:;
  /* 104afa3e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 104afa45 jmp 0x104afa50 */
  goto L_104afa50;
L_104afa47:;
  /* 104afa47 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104afa4a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104afa4d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_104afa50:;
  /* 104afa50 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104afa54 jae 0x104afac6 */
  if (!C.cf) goto L_104afac6;
  /* 104afa56 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104afa59 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104afa5c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104afa5f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 104afa63 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104afa66 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104afa69 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 104afa6d push eax */
  push32((uint32_t)(EAX));
  /* 104afa6e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104afa71 push ecx */
  push32((uint32_t)(ECX));
  /* 104afa72 call 0x104a5840 */
  push32(0x104afa77u); f_104a5840();
  /* 104afa77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104afa7a push eax */
  push32((uint32_t)(EAX));
  /* 104afa7b call 0x104a56c0 */
  push32(0x104afa80u); f_104a56c0();
  /* 104afa80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104afa83 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104afa86 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 104afa8a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 104afa8d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104afa90 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104afa93 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104afa96 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 104afa9a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104afa9d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104afaa0 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 104afaa4 push eax */
  push32((uint32_t)(EAX));
  /* 104afaa5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104afaa8 push ecx */
  push32((uint32_t)(ECX));
  /* 104afaa9 call 0x104a5840 */
  push32(0x104afaaeu); f_104a5840();
  /* 104afaae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104afab1 push eax */
  push32((uint32_t)(EAX));
  /* 104afab2 call 0x104a56c0 */
  push32(0x104afab7u); f_104a56c0();
  /* 104afab7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104afaba mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104afabd lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 104afac1 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 104afac4 jmp 0x104afa47 */
  goto L_104afa47;
L_104afac6:;
  /* 104afac6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104afac9 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104afacc mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 104afad2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104afad5 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 104afadb push ecx */
  push32((uint32_t)(ECX));
  /* 104afadc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104afadf push edx */
  push32((uint32_t)(EDX));
  /* 104afae0 call 0x104a5840 */
  push32(0x104afae5u); f_104a5840();
  /* 104afae5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104afae8 push eax */
  push32((uint32_t)(EAX));
  /* 104afae9 call 0x104a56c0 */
  push32(0x104afaeeu); f_104a56c0();
  /* 104afaee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104afaf1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104afaf4 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 104afaf8 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 104afafb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104afafe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104afb01 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 104afb07 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104afb0a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 104afb10 push eax */
  push32((uint32_t)(EAX));
  /* 104afb11 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104afb14 push ecx */
  push32((uint32_t)(ECX));
  /* 104afb15 call 0x104a5840 */
  push32(0x104afb1au); f_104a5840();
  /* 104afb1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104afb1d push eax */
  push32((uint32_t)(EAX));
  /* 104afb1e call 0x104a56c0 */
  push32(0x104afb23u); f_104a56c0();
  /* 104afb23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104afb26 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104afb29 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 104afb2d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 104afb30 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104afb33 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104afb36 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 104afb3c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104afb3f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 104afb45 push ecx */
  push32((uint32_t)(ECX));
  /* 104afb46 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104afb49 push edx */
  push32((uint32_t)(EDX));
  /* 104afb4a call 0x104a5840 */
  push32(0x104afb4fu); f_104a5840();
  /* 104afb4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104afb52 push eax */
  push32((uint32_t)(EAX));
  /* 104afb53 call 0x104a56c0 */
  push32(0x104afb58u); f_104a56c0();
  /* 104afb58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104afb5b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104afb5e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 104afb62 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 104afb65 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104afb68 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104afb6b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 104afb71 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104afb74 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 104afb7a push eax */
  push32((uint32_t)(EAX));
  /* 104afb7b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104afb7e push ecx */
  push32((uint32_t)(ECX));
  /* 104afb7f call 0x104a5840 */
  push32(0x104afb84u); f_104a5840();
  /* 104afb84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104afb87 push eax */
  push32((uint32_t)(EAX));
  /* 104afb88 call 0x104a56c0 */
  push32(0x104afb8du); f_104a56c0();
  /* 104afb8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104afb90 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104afb93 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 104afb97 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 104afb9a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104afb9d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104afba0 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_104afba6:;
  /* 104afba6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104afba9 pop esi */
  ESI = (pop32());
  /* 104afbaa mov esp, ebp */
  ESP = (EBP);
  /* 104afbac pop ebp */
  EBP = (pop32());
  /* 104afbad ret  */
  ESPCHK(0x104af840u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fbb0 @ 0x104afbb0 (31 bytes, 15 insns) */
void f_104afbb0(void) {
  FTRACE(0x104afbb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104afbb0 push ebp */
  push32((uint32_t)(EBP));
  /* 104afbb1 mov ebp, esp */
  EBP = (ESP);
  /* 104afbb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 104afbb5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104afbb8 push eax */
  push32((uint32_t)(EAX));
  /* 104afbb9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104afbbc push ecx */
  push32((uint32_t)(ECX));
  /* 104afbbd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104afbc0 push edx */
  push32((uint32_t)(EDX));
  /* 104afbc1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104afbc4 push eax */
  push32((uint32_t)(EAX));
  /* 104afbc5 call 0x104afbd0 */
  push32(0x104afbcau); f_104afbd0();
  /* 104afbca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104afbcd pop ebp */
  EBP = (pop32());
  /* 104afbce ret  */
  ESPCHK(0x104afbb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fbd0 @ 0x104afbd0 (393 bytes, 123 insns) */
void f_104afbd0(void) {
  FTRACE(0x104afbd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104afbd0 push ebp */
  push32((uint32_t)(EBP));
  /* 104afbd1 mov ebp, esp */
  EBP = (ESP);
  /* 104afbd3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104afbd6 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104afbda jne 0x104afbe6 */
  if (!C.zf) goto L_104afbe6;
  /* 104afbdc mov eax, dword ptr [0x104cdc98] */
  EAX = (r32((uint32_t)(0x104cdc98)));
  /* 104afbe1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 104afbe4 jmp 0x104afbec */
  goto L_104afbec;
L_104afbe6:;
  /* 104afbe6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 104afbe9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_104afbec:;
  /* 104afbec mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104afbef mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104afbf2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104afbf5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104afbf8 push 0x104ce7ac */
  push32((uint32_t)(0x104ce7acu));
  /* 104afbfd call dword ptr [0x104d0270] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0270))), 0x104afc03u);
  /* 104afc03 cmp dword ptr [0x104ce79c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce79c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104afc0a je 0x104afc2a */
  if (C.zf) goto L_104afc2a;
  /* 104afc0c push 0x104ce7ac */
  push32((uint32_t)(0x104ce7acu));
  /* 104afc11 call dword ptr [0x104d0260] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0260))), 0x104afc17u);
  /* 104afc17 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 104afc19 call 0x104a6290 */
  push32(0x104afc1eu); f_104a6290();
  /* 104afc1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104afc21 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 104afc28 jmp 0x104afc31 */
  goto L_104afc31;
L_104afc2a:;
  /* 104afc2a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_104afc31:;
  /* 104afc31 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104afc35 jbe 0x104afd22 */
  if ((C.cf||C.zf)) goto L_104afd22;
  /* 104afc3b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104afc3e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104afc40 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 104afc43 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104afc47 je 0x104afc51 */
  if (C.zf) goto L_104afc51;
  /* 104afc49 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104afc4d je 0x104afc56 */
  if (C.zf) goto L_104afc56;
  /* 104afc4f jmp 0x104afcb0 */
  goto L_104afcb0;
L_104afc51:;
  /* 104afc51 jmp 0x104afd22 */
  goto L_104afd22;
L_104afc56:;
  /* 104afc56 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104afc59 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104afc5c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 104afc5f mov dword ptr [0x104ce788], 0 */
  w32((uint32_t)(0x104ce788), (0x0u));
  /* 104afc69 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104afc6c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104afc6f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104afc72 jne 0x104afc87 */
  if (!C.zf) goto L_104afc87;
  /* 104afc74 mov dword ptr [0x104ce788], 1 */
  w32((uint32_t)(0x104ce788), (0x1u));
  /* 104afc7e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104afc81 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104afc84 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_104afc87:;
  /* 104afc87 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104afc8a push ecx */
  push32((uint32_t)(ECX));
  /* 104afc8b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 104afc8e push edx */
  push32((uint32_t)(EDX));
  /* 104afc8f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 104afc92 push eax */
  push32((uint32_t)(EAX));
  /* 104afc93 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104afc96 push ecx */
  push32((uint32_t)(ECX));
  /* 104afc97 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104afc9a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104afc9c push eax */
  push32((uint32_t)(EAX));
  /* 104afc9d call 0x104afd60 */
  push32(0x104afca2u); f_104afd60();
  /* 104afca2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104afca5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104afca8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104afcab mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 104afcae jmp 0x104afd1d */
  goto L_104afd1d;
L_104afcb0:;
  /* 104afcb0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104afcb3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104afcb5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104afcb7 mov ecx, dword ptr [0x104ccc98] */
  ECX = (r32((uint32_t)(0x104ccc98)));
  /* 104afcbd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104afcbf mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 104afcc3 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 104afcc9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104afccb je 0x104afcf8 */
  if (C.zf) goto L_104afcf8;
  /* 104afccd cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104afcd1 jbe 0x104afcf8 */
  if ((C.cf||C.zf)) goto L_104afcf8;
  /* 104afcd3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104afcd6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104afcd9 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104afcdb mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 104afcdd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104afce0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104afce3 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 104afce6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104afce9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104afcec mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 104afcef mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104afcf2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104afcf5 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_104afcf8:;
  /* 104afcf8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104afcfb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104afcfe mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104afd00 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 104afd02 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104afd05 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104afd08 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 104afd0b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104afd0e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104afd11 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 104afd14 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104afd17 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104afd1a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_104afd1d:;
  /* 104afd1d jmp 0x104afc31 */
  goto L_104afc31;
L_104afd22:;
  /* 104afd22 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104afd26 je 0x104afd34 */
  if (C.zf) goto L_104afd34;
  /* 104afd28 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 104afd2a call 0x104a6330 */
  push32(0x104afd2fu); f_104a6330();
  /* 104afd2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104afd32 jmp 0x104afd3f */
  goto L_104afd3f;
L_104afd34:;
  /* 104afd34 push 0x104ce7ac */
  push32((uint32_t)(0x104ce7acu));
  /* 104afd39 call dword ptr [0x104d0260] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0260))), 0x104afd3fu);
L_104afd3f:;
  /* 104afd3f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104afd43 jbe 0x104afd53 */
  if ((C.cf||C.zf)) goto L_104afd53;
  /* 104afd45 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104afd48 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 104afd4b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104afd4e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104afd51 jmp 0x104afd55 */
  goto L_104afd55;
L_104afd53:;
  /* 104afd53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104afd55:;
  /* 104afd55 mov esp, ebp */
  ESP = (EBP);
  /* 104afd57 pop ebp */
  EBP = (pop32());
  /* 104afd58 ret  */
  ESPCHK(0x104afbd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fd60 @ 0x104afd60 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_104afd60(void) {
  FTRACE(0x104afd60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104afd60 push ebp */
  push32((uint32_t)(EBP));
  /* 104afd61 mov ebp, esp */
  EBP = (ESP);
  /* 104afd63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104afd66 push esi */
  push32((uint32_t)(ESI));
  /* 104afd67 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 104afd6b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104afd6e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104afd71 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104afd74 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104afd77 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104afd7b ja 0x104b02c8 */
  if ((!C.cf&&!C.zf)) goto L_104b02c8;
  /* 104afd81 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104afd84 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104afd86 mov dl, byte ptr [eax + 0x104b0329] */
  DL = (r8((uint32_t)(EAX + 0x104b0329)));
  /* 104afd8c jmp dword ptr [edx*4 + 0x104b02cd] */
  switch (EDX) {
    case 0: goto L_104b02a6;
    case 1: goto L_104afdb5;
    case 2: goto L_104afdfb;
    case 3: goto L_104aff48;
    case 4: goto L_104aff70;
    case 5: goto L_104b000f;
    case 6: goto L_104b007b;
    case 7: goto L_104b00a4;
    case 8: goto L_104b00e5;
    case 9: goto L_104b01c7;
    case 10: goto L_104b022e;
    case 11: goto L_104b027b;
    case 12: goto L_104afd93;
    case 13: goto L_104afdd8;
    case 14: goto L_104afe1e;
    case 15: goto L_104aff1e;
    case 16: goto L_104affb5;
    case 17: goto L_104affe2;
    case 18: goto L_104b0037;
    case 19: goto L_104b00bb;
    case 20: goto L_104b0169;
    case 21: goto L_104b01f8;
    case 22: goto L_104b02c8;
    default: x86_unimpl("switch@0x104afd8c out of table"); return;
  }
L_104afd93:;
  /* 104afd93 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104afd96 push ecx */
  push32((uint32_t)(ECX));
  /* 104afd97 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104afd9a push edx */
  push32((uint32_t)(EDX));
  /* 104afd9b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104afd9e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 104afda1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104afda4 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 104afda7 push eax */
  push32((uint32_t)(EAX));
  /* 104afda8 call 0x104b0380 */
  push32(0x104afdadu); f_104b0380();
  /* 104afdad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104afdb0 jmp 0x104b02c8 */
  goto L_104b02c8;
L_104afdb5:;
  /* 104afdb5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104afdb8 push ecx */
  push32((uint32_t)(ECX));
  /* 104afdb9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104afdbc push edx */
  push32((uint32_t)(EDX));
  /* 104afdbd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104afdc0 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 104afdc3 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104afdc6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 104afdca push eax */
  push32((uint32_t)(EAX));
  /* 104afdcb call 0x104b0380 */
  push32(0x104afdd0u); f_104b0380();
  /* 104afdd0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104afdd3 jmp 0x104b02c8 */
  goto L_104b02c8;
L_104afdd8:;
  /* 104afdd8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104afddb push ecx */
  push32((uint32_t)(ECX));
  /* 104afddc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104afddf push edx */
  push32((uint32_t)(EDX));
  /* 104afde0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104afde3 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 104afde6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104afde9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 104afded push eax */
  push32((uint32_t)(EAX));
  /* 104afdee call 0x104b0380 */
  push32(0x104afdf3u); f_104b0380();
  /* 104afdf3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104afdf6 jmp 0x104b02c8 */
  goto L_104b02c8;
L_104afdfb:;
  /* 104afdfb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104afdfe push ecx */
  push32((uint32_t)(ECX));
  /* 104afdff mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104afe02 push edx */
  push32((uint32_t)(EDX));
  /* 104afe03 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104afe06 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 104afe09 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104afe0c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 104afe10 push eax */
  push32((uint32_t)(EAX));
  /* 104afe11 call 0x104b0380 */
  push32(0x104afe16u); f_104b0380();
  /* 104afe16 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104afe19 jmp 0x104b02c8 */
  goto L_104b02c8;
L_104afe1e:;
  /* 104afe1e cmp dword ptr [0x104ce788], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce788))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104afe25 je 0x104afea6 */
  if (C.zf) goto L_104afea6;
  /* 104afe27 mov dword ptr [0x104ce788], 0 */
  w32((uint32_t)(0x104ce788), (0x0u));
  /* 104afe31 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 104afe34 push ecx */
  push32((uint32_t)(ECX));
  /* 104afe35 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104afe38 push edx */
  push32((uint32_t)(EDX));
  /* 104afe39 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104afe3c push eax */
  push32((uint32_t)(EAX));
  /* 104afe3d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104afe40 push ecx */
  push32((uint32_t)(ECX));
  /* 104afe41 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104afe44 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 104afe4a push eax */
  push32((uint32_t)(EAX));
  /* 104afe4b call 0x104b0530 */
  push32(0x104afe50u); f_104b0530();
  /* 104afe50 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104afe53 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104afe56 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104afe59 jne 0x104afe60 */
  if (!C.zf) goto L_104afe60;
  /* 104afe5b jmp 0x104b02c8 */
  goto L_104b02c8;
L_104afe60:;
  /* 104afe60 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104afe63 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104afe65 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 104afe68 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104afe6b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104afe6d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104afe70 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104afe73 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 104afe75 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104afe78 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104afe7a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104afe7d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104afe80 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 104afe82 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 104afe85 push ecx */
  push32((uint32_t)(ECX));
  /* 104afe86 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104afe89 push edx */
  push32((uint32_t)(EDX));
  /* 104afe8a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104afe8d push eax */
  push32((uint32_t)(EAX));
  /* 104afe8e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104afe91 push ecx */
  push32((uint32_t)(ECX));
  /* 104afe92 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104afe95 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 104afe9b push eax */
  push32((uint32_t)(EAX));
  /* 104afe9c call 0x104b0530 */
  push32(0x104afea1u); f_104b0530();
  /* 104afea1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104afea4 jmp 0x104aff19 */
  goto L_104aff19;
L_104afea6:;
  /* 104afea6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 104afea9 push ecx */
  push32((uint32_t)(ECX));
  /* 104afeaa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104afead push edx */
  push32((uint32_t)(EDX));
  /* 104afeae mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104afeb1 push eax */
  push32((uint32_t)(EAX));
  /* 104afeb2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104afeb5 push ecx */
  push32((uint32_t)(ECX));
  /* 104afeb6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104afeb9 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 104afebf push eax */
  push32((uint32_t)(EAX));
  /* 104afec0 call 0x104b0530 */
  push32(0x104afec5u); f_104b0530();
  /* 104afec5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104afec8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104afecb cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104afece jne 0x104afed5 */
  if (!C.zf) goto L_104afed5;
  /* 104afed0 jmp 0x104b02c8 */
  goto L_104b02c8;
L_104afed5:;
  /* 104afed5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104afed8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104afeda mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 104afedd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104afee0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104afee2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104afee5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104afee8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 104afeea mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104afeed mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104afeef sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104afef2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104afef5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 104afef7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 104afefa push ecx */
  push32((uint32_t)(ECX));
  /* 104afefb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104afefe push edx */
  push32((uint32_t)(EDX));
  /* 104afeff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104aff02 push eax */
  push32((uint32_t)(EAX));
  /* 104aff03 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104aff06 push ecx */
  push32((uint32_t)(ECX));
  /* 104aff07 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104aff0a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 104aff10 push eax */
  push32((uint32_t)(EAX));
  /* 104aff11 call 0x104b0530 */
  push32(0x104aff16u); f_104b0530();
  /* 104aff16 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104aff19:;
  /* 104aff19 jmp 0x104b02c8 */
  goto L_104b02c8;
L_104aff1e:;
  /* 104aff1e mov ecx, dword ptr [0x104ce788] */
  ECX = (r32((uint32_t)(0x104ce788)));
  /* 104aff24 mov dword ptr [0x104ce798], ecx */
  w32((uint32_t)(0x104ce798), (ECX));
  /* 104aff2a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104aff2d push edx */
  push32((uint32_t)(EDX));
  /* 104aff2e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104aff31 push eax */
  push32((uint32_t)(EAX));
  /* 104aff32 push 2 */
  push32((uint32_t)(0x2u));
  /* 104aff34 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104aff37 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 104aff3a push edx */
  push32((uint32_t)(EDX));
  /* 104aff3b call 0x104b03d0 */
  push32(0x104aff40u); f_104b03d0();
  /* 104aff40 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104aff43 jmp 0x104b02c8 */
  goto L_104b02c8;
L_104aff48:;
  /* 104aff48 mov eax, dword ptr [0x104ce788] */
  EAX = (r32((uint32_t)(0x104ce788)));
  /* 104aff4d mov dword ptr [0x104ce798], eax */
  w32((uint32_t)(0x104ce798), (EAX));
  /* 104aff52 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104aff55 push ecx */
  push32((uint32_t)(ECX));
  /* 104aff56 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104aff59 push edx */
  push32((uint32_t)(EDX));
  /* 104aff5a push 2 */
  push32((uint32_t)(0x2u));
  /* 104aff5c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104aff5f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 104aff62 push ecx */
  push32((uint32_t)(ECX));
  /* 104aff63 call 0x104b03d0 */
  push32(0x104aff68u); f_104b03d0();
  /* 104aff68 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104aff6b jmp 0x104b02c8 */
  goto L_104b02c8;
L_104aff70:;
  /* 104aff70 mov edx, dword ptr [0x104ce788] */
  EDX = (r32((uint32_t)(0x104ce788)));
  /* 104aff76 mov dword ptr [0x104ce798], edx */
  w32((uint32_t)(0x104ce798), (EDX));
  /* 104aff7c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104aff7f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 104aff82 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 104aff83 mov ecx, 0xc */
  ECX = (0xcu);
  /* 104aff88 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 104aff8a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104aff8d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aff91 jne 0x104aff9a */
  if (!C.zf) goto L_104aff9a;
  /* 104aff93 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_104aff9a:;
  /* 104aff9a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104aff9d push edx */
  push32((uint32_t)(EDX));
  /* 104aff9e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104affa1 push eax */
  push32((uint32_t)(EAX));
  /* 104affa2 push 2 */
  push32((uint32_t)(0x2u));
  /* 104affa4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104affa7 push ecx */
  push32((uint32_t)(ECX));
  /* 104affa8 call 0x104b03d0 */
  push32(0x104affadu); f_104b03d0();
  /* 104affad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104affb0 jmp 0x104b02c8 */
  goto L_104b02c8;
L_104affb5:;
  /* 104affb5 mov edx, dword ptr [0x104ce788] */
  EDX = (r32((uint32_t)(0x104ce788)));
  /* 104affbb mov dword ptr [0x104ce798], edx */
  w32((uint32_t)(0x104ce798), (EDX));
  /* 104affc1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104affc4 push eax */
  push32((uint32_t)(EAX));
  /* 104affc5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104affc8 push ecx */
  push32((uint32_t)(ECX));
  /* 104affc9 push 3 */
  push32((uint32_t)(0x3u));
  /* 104affcb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104affce mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 104affd1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104affd4 push eax */
  push32((uint32_t)(EAX));
  /* 104affd5 call 0x104b03d0 */
  push32(0x104affdau); f_104b03d0();
  /* 104affda add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104affdd jmp 0x104b02c8 */
  goto L_104b02c8;
L_104affe2:;
  /* 104affe2 mov ecx, dword ptr [0x104ce788] */
  ECX = (r32((uint32_t)(0x104ce788)));
  /* 104affe8 mov dword ptr [0x104ce798], ecx */
  w32((uint32_t)(0x104ce798), (ECX));
  /* 104affee mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104afff1 push edx */
  push32((uint32_t)(EDX));
  /* 104afff2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104afff5 push eax */
  push32((uint32_t)(EAX));
  /* 104afff6 push 2 */
  push32((uint32_t)(0x2u));
  /* 104afff8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104afffb mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 104afffe add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b0001 push edx */
  push32((uint32_t)(EDX));
  /* 104b0002 call 0x104b03d0 */
  push32(0x104b0007u); f_104b03d0();
  /* 104b0007 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b000a jmp 0x104b02c8 */
  goto L_104b02c8;
L_104b000f:;
  /* 104b000f mov eax, dword ptr [0x104ce788] */
  EAX = (r32((uint32_t)(0x104ce788)));
  /* 104b0014 mov dword ptr [0x104ce798], eax */
  w32((uint32_t)(0x104ce798), (EAX));
  /* 104b0019 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104b001c push ecx */
  push32((uint32_t)(ECX));
  /* 104b001d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b0020 push edx */
  push32((uint32_t)(EDX));
  /* 104b0021 push 2 */
  push32((uint32_t)(0x2u));
  /* 104b0023 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104b0026 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 104b0029 push ecx */
  push32((uint32_t)(ECX));
  /* 104b002a call 0x104b03d0 */
  push32(0x104b002fu); f_104b03d0();
  /* 104b002f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b0032 jmp 0x104b02c8 */
  goto L_104b02c8;
L_104b0037:;
  /* 104b0037 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104b003a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b003e jg 0x104b005c */
  if ((!C.zf&&C.sf==C.of)) goto L_104b005c;
  /* 104b0040 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104b0043 push eax */
  push32((uint32_t)(EAX));
  /* 104b0044 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b0047 push ecx */
  push32((uint32_t)(ECX));
  /* 104b0048 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104b004b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 104b0051 push eax */
  push32((uint32_t)(EAX));
  /* 104b0052 call 0x104b0380 */
  push32(0x104b0057u); f_104b0380();
  /* 104b0057 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b005a jmp 0x104b0076 */
  goto L_104b0076;
L_104b005c:;
  /* 104b005c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104b005f push ecx */
  push32((uint32_t)(ECX));
  /* 104b0060 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b0063 push edx */
  push32((uint32_t)(EDX));
  /* 104b0064 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104b0067 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 104b006d push ecx */
  push32((uint32_t)(ECX));
  /* 104b006e call 0x104b0380 */
  push32(0x104b0073u); f_104b0380();
  /* 104b0073 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104b0076:;
  /* 104b0076 jmp 0x104b02c8 */
  goto L_104b02c8;
L_104b007b:;
  /* 104b007b mov edx, dword ptr [0x104ce788] */
  EDX = (r32((uint32_t)(0x104ce788)));
  /* 104b0081 mov dword ptr [0x104ce798], edx */
  w32((uint32_t)(0x104ce798), (EDX));
  /* 104b0087 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104b008a push eax */
  push32((uint32_t)(EAX));
  /* 104b008b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b008e push ecx */
  push32((uint32_t)(ECX));
  /* 104b008f push 2 */
  push32((uint32_t)(0x2u));
  /* 104b0091 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104b0094 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104b0096 push eax */
  push32((uint32_t)(EAX));
  /* 104b0097 call 0x104b03d0 */
  push32(0x104b009cu); f_104b03d0();
  /* 104b009c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b009f jmp 0x104b02c8 */
  goto L_104b02c8;
L_104b00a4:;
  /* 104b00a4 mov ecx, dword ptr [0x104ce788] */
  ECX = (r32((uint32_t)(0x104ce788)));
  /* 104b00aa mov dword ptr [0x104ce798], ecx */
  w32((uint32_t)(0x104ce798), (ECX));
  /* 104b00b0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104b00b3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 104b00b6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104b00b9 jmp 0x104b010d */
  goto L_104b010d;
L_104b00bb:;
  /* 104b00bb mov ecx, dword ptr [0x104ce788] */
  ECX = (r32((uint32_t)(0x104ce788)));
  /* 104b00c1 mov dword ptr [0x104ce798], ecx */
  w32((uint32_t)(0x104ce798), (ECX));
  /* 104b00c7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104b00ca push edx */
  push32((uint32_t)(EDX));
  /* 104b00cb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b00ce push eax */
  push32((uint32_t)(EAX));
  /* 104b00cf push 1 */
  push32((uint32_t)(0x1u));
  /* 104b00d1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104b00d4 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 104b00d7 push edx */
  push32((uint32_t)(EDX));
  /* 104b00d8 call 0x104b03d0 */
  push32(0x104b00ddu); f_104b03d0();
  /* 104b00dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b00e0 jmp 0x104b02c8 */
  goto L_104b02c8;
L_104b00e5:;
  /* 104b00e5 mov eax, dword ptr [0x104ce788] */
  EAX = (r32((uint32_t)(0x104ce788)));
  /* 104b00ea mov dword ptr [0x104ce798], eax */
  w32((uint32_t)(0x104ce798), (EAX));
  /* 104b00ef mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104b00f2 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b00f6 jne 0x104b0101 */
  if (!C.zf) goto L_104b0101;
  /* 104b00f8 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 104b00ff jmp 0x104b010d */
  goto L_104b010d;
L_104b0101:;
  /* 104b0101 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104b0104 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 104b0107 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104b010a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_104b010d:;
  /* 104b010d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104b0110 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 104b0113 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b0116 jge 0x104b0121 */
  if ((C.sf==C.of)) goto L_104b0121;
  /* 104b0118 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104b011f jmp 0x104b014e */
  goto L_104b014e;
L_104b0121:;
  /* 104b0121 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104b0124 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 104b0127 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 104b0128 mov ecx, 7 */
  ECX = (0x7u);
  /* 104b012d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 104b012f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104b0132 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104b0135 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 104b0138 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 104b0139 mov ecx, 7 */
  ECX = (0x7u);
  /* 104b013e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 104b0140 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b0143 jl 0x104b014e */
  if ((C.sf!=C.of)) goto L_104b014e;
  /* 104b0145 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b0148 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b014b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_104b014e:;
  /* 104b014e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104b0151 push eax */
  push32((uint32_t)(EAX));
  /* 104b0152 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b0155 push ecx */
  push32((uint32_t)(ECX));
  /* 104b0156 push 2 */
  push32((uint32_t)(0x2u));
  /* 104b0158 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b015b push edx */
  push32((uint32_t)(EDX));
  /* 104b015c call 0x104b03d0 */
  push32(0x104b0161u); f_104b03d0();
  /* 104b0161 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b0164 jmp 0x104b02c8 */
  goto L_104b02c8;
L_104b0169:;
  /* 104b0169 cmp dword ptr [0x104ce788], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce788))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b0170 je 0x104b01a0 */
  if (C.zf) goto L_104b01a0;
  /* 104b0172 mov dword ptr [0x104ce788], 0 */
  w32((uint32_t)(0x104ce788), (0x0u));
  /* 104b017c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104b017f push eax */
  push32((uint32_t)(EAX));
  /* 104b0180 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104b0183 push ecx */
  push32((uint32_t)(ECX));
  /* 104b0184 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b0187 push edx */
  push32((uint32_t)(EDX));
  /* 104b0188 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104b018b push eax */
  push32((uint32_t)(EAX));
  /* 104b018c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 104b018f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 104b0195 push edx */
  push32((uint32_t)(EDX));
  /* 104b0196 call 0x104b0530 */
  push32(0x104b019bu); f_104b0530();
  /* 104b019b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b019e jmp 0x104b01c2 */
  goto L_104b01c2;
L_104b01a0:;
  /* 104b01a0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104b01a3 push eax */
  push32((uint32_t)(EAX));
  /* 104b01a4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104b01a7 push ecx */
  push32((uint32_t)(ECX));
  /* 104b01a8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b01ab push edx */
  push32((uint32_t)(EDX));
  /* 104b01ac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104b01af push eax */
  push32((uint32_t)(EAX));
  /* 104b01b0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 104b01b3 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 104b01b9 push edx */
  push32((uint32_t)(EDX));
  /* 104b01ba call 0x104b0530 */
  push32(0x104b01bfu); f_104b0530();
  /* 104b01bf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104b01c2:;
  /* 104b01c2 jmp 0x104b02c8 */
  goto L_104b02c8;
L_104b01c7:;
  /* 104b01c7 mov dword ptr [0x104ce788], 0 */
  w32((uint32_t)(0x104ce788), (0x0u));
  /* 104b01d1 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104b01d4 push eax */
  push32((uint32_t)(EAX));
  /* 104b01d5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104b01d8 push ecx */
  push32((uint32_t)(ECX));
  /* 104b01d9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b01dc push edx */
  push32((uint32_t)(EDX));
  /* 104b01dd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104b01e0 push eax */
  push32((uint32_t)(EAX));
  /* 104b01e1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 104b01e4 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 104b01ea push edx */
  push32((uint32_t)(EDX));
  /* 104b01eb call 0x104b0530 */
  push32(0x104b01f0u); f_104b0530();
  /* 104b01f0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b01f3 jmp 0x104b02c8 */
  goto L_104b02c8;
L_104b01f8:;
  /* 104b01f8 mov eax, dword ptr [0x104ce788] */
  EAX = (r32((uint32_t)(0x104ce788)));
  /* 104b01fd mov dword ptr [0x104ce798], eax */
  w32((uint32_t)(0x104ce798), (EAX));
  /* 104b0202 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104b0205 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 104b0208 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 104b0209 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 104b020e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 104b0210 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104b0213 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104b0216 push edx */
  push32((uint32_t)(EDX));
  /* 104b0217 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b021a push eax */
  push32((uint32_t)(EAX));
  /* 104b021b push 2 */
  push32((uint32_t)(0x2u));
  /* 104b021d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b0220 push ecx */
  push32((uint32_t)(ECX));
  /* 104b0221 call 0x104b03d0 */
  push32(0x104b0226u); f_104b03d0();
  /* 104b0226 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b0229 jmp 0x104b02c8 */
  goto L_104b02c8;
L_104b022e:;
  /* 104b022e mov edx, dword ptr [0x104ce788] */
  EDX = (r32((uint32_t)(0x104ce788)));
  /* 104b0234 mov dword ptr [0x104ce798], edx */
  w32((uint32_t)(0x104ce798), (EDX));
  /* 104b023a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104b023d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 104b0240 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 104b0241 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 104b0246 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 104b0248 mov ecx, eax */
  ECX = (EAX);
  /* 104b024a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b024d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104b0250 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104b0253 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 104b0256 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 104b0257 mov esi, 0x64 */
  ESI = (0x64u);
  /* 104b025c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 104b025e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b0260 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104b0263 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104b0266 push eax */
  push32((uint32_t)(EAX));
  /* 104b0267 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b026a push ecx */
  push32((uint32_t)(ECX));
  /* 104b026b push 4 */
  push32((uint32_t)(0x4u));
  /* 104b026d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b0270 push edx */
  push32((uint32_t)(EDX));
  /* 104b0271 call 0x104b03d0 */
  push32(0x104b0276u); f_104b03d0();
  /* 104b0276 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b0279 jmp 0x104b02c8 */
  goto L_104b02c8;
L_104b027b:;
  /* 104b027b call 0x104b1390 */
  push32(0x104b0280u); f_104b1390();
  /* 104b0280 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104b0283 push eax */
  push32((uint32_t)(EAX));
  /* 104b0284 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b0287 push ecx */
  push32((uint32_t)(ECX));
  /* 104b0288 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104b028b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b028d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b0291 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 104b0294 mov ecx, dword ptr [eax*4 + 0x104cde1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x104cde1c)));
  /* 104b029b push ecx */
  push32((uint32_t)(ECX));
  /* 104b029c call 0x104b0380 */
  push32(0x104b02a1u); f_104b0380();
  /* 104b02a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b02a4 jmp 0x104b02c8 */
  goto L_104b02c8;
L_104b02a6:;
  /* 104b02a6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b02a9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104b02ab mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 104b02ae mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b02b1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104b02b3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b02b6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b02b9 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 104b02bb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104b02be mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104b02c0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104b02c3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104b02c6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_104b02c8:;
  /* 104b02c8 pop esi */
  ESI = (pop32());
  /* 104b02c9 mov esp, ebp */
  ESP = (EBP);
  /* 104b02cb pop ebp */
  EBP = (pop32());
  /* 104b02cc ret  */
  ESPCHK(0x104afd60u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x104b0380 (72 bytes, 30 insns) */
void f_104b0380(void) {
  FTRACE(0x104b0380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104b0380 push ebp */
  push32((uint32_t)(EBP));
  /* 104b0381 mov ebp, esp */
  EBP = (ESP);
L_104b0383:;
  /* 104b0383 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b0386 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b0389 je 0x104b03c6 */
  if (C.zf) goto L_104b03c6;
  /* 104b038b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b038e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104b0391 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104b0393 je 0x104b03c6 */
  if (C.zf) goto L_104b03c6;
  /* 104b0395 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104b0398 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104b039a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b039d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104b039f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 104b03a1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104b03a4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104b03a6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b03a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104b03ac mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 104b03ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b03b1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b03b4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 104b03b7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b03ba mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104b03bc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104b03bf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b03c2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 104b03c4 jmp 0x104b0383 */
  goto L_104b0383;
L_104b03c6:;
  /* 104b03c6 pop ebp */
  EBP = (pop32());
  /* 104b03c7 ret  */
  ESPCHK(0x104b0380u, _esp0);
  ESP += 4; return;
}

/* FUN_100103d0 @ 0x104b03d0 (173 bytes, 64 insns) */
void f_104b03d0(void) {
  FTRACE(0x104b03d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104b03d0 push ebp */
  push32((uint32_t)(EBP));
  /* 104b03d1 mov ebp, esp */
  EBP = (ESP);
  /* 104b03d3 push ecx */
  push32((uint32_t)(ECX));
  /* 104b03d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104b03db cmp dword ptr [0x104ce798], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce798))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b03e2 je 0x104b03fa */
  if (C.zf) goto L_104b03fa;
  /* 104b03e4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104b03e7 push eax */
  push32((uint32_t)(EAX));
  /* 104b03e8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b03eb push ecx */
  push32((uint32_t)(ECX));
  /* 104b03ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b03ef push edx */
  push32((uint32_t)(EDX));
  /* 104b03f0 call 0x104b0480 */
  push32(0x104b03f5u); f_104b0480();
  /* 104b03f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b03f8 jmp 0x104b0479 */
  goto L_104b0479;
L_104b03fa:;
  /* 104b03fa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104b03fd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104b0400 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b0402 jae 0x104b0470 */
  if (!C.cf) goto L_104b0470;
  /* 104b0404 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104b0407 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104b040a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 104b040d jmp 0x104b0418 */
  goto L_104b0418;
L_104b040f:;
  /* 104b040f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104b0412 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104b0415 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_104b0418:;
  /* 104b0418 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104b041b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b041e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104b0420 je 0x104b0454 */
  if (C.zf) goto L_104b0454;
  /* 104b0422 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b0425 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 104b0426 mov ecx, 0xa */
  ECX = (0xau);
  /* 104b042b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 104b042d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b0430 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b0433 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104b0435 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104b0438 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 104b043b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b043e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 104b043f mov ecx, 0xa */
  ECX = (0xau);
  /* 104b0444 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 104b0446 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 104b0449 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b044c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b044f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104b0452 jmp 0x104b040f */
  goto L_104b040f;
L_104b0454:;
  /* 104b0454 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b0457 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104b0459 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b045c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b045f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 104b0461 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104b0464 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104b0466 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104b0469 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104b046c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 104b046e jmp 0x104b0479 */
  goto L_104b0479;
L_104b0470:;
  /* 104b0470 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104b0473 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_104b0479:;
  /* 104b0479 mov esp, ebp */
  ESP = (EBP);
  /* 104b047b pop ebp */
  EBP = (pop32());
  /* 104b047c ret  */
  ESPCHK(0x104b03d0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x104b0480 (172 bytes, 65 insns) */
void f_104b0480(void) {
  FTRACE(0x104b0480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104b0480 push ebp */
  push32((uint32_t)(EBP));
  /* 104b0481 mov ebp, esp */
  EBP = (ESP);
  /* 104b0483 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104b0486 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104b0489 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104b048b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104b048e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b0491 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b0494 jbe 0x104b04db */
  if ((C.cf||C.zf)) goto L_104b04db;
L_104b0496:;
  /* 104b0496 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b0499 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 104b049a mov ecx, 0xa */
  ECX = (0xau);
  /* 104b049f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 104b04a1 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b04a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b04a7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 104b04a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b04ac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b04af mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104b04b2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b04b5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104b04b7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104b04ba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b04bd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 104b04bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b04c2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 104b04c3 mov ecx, 0xa */
  ECX = (0xau);
  /* 104b04c8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 104b04ca mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 104b04cd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b04d1 jle 0x104b04db */
  if ((C.zf||C.sf!=C.of)) goto L_104b04db;
  /* 104b04d3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b04d6 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b04d9 ja 0x104b0496 */
  if ((!C.cf&&!C.zf)) goto L_104b0496;
L_104b04db:;
  /* 104b04db mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104b04de mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104b04e0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104b04e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104b04e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b04e9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 104b04eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b04ee sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104b04f1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_104b04f4:;
  /* 104b04f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b04f7 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104b04f9 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 104b04fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b04ff mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104b0502 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104b0504 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 104b0506 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b0509 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104b050c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104b050f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104b0512 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 104b0515 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 104b0517 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104b051a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b051d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104b0520 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104b0523 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b0526 jb 0x104b04f4 */
  if (C.cf) goto L_104b04f4;
  /* 104b0528 mov esp, ebp */
  ESP = (EBP);
  /* 104b052a pop ebp */
  EBP = (pop32());
  /* 104b052b ret  */
  ESPCHK(0x104b0480u, _esp0);
  ESP += 4; return;
}

/* FUN_10010530 @ 0x104b0530 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_104b0530(void) {
  FTRACE(0x104b0530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104b0530 push ebp */
  push32((uint32_t)(EBP));
  /* 104b0531 mov ebp, esp */
  EBP = (ESP);
  /* 104b0533 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_104b0536:;
  /* 104b0536 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b0539 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104b053c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104b053e je 0x104b09ac */
  if (C.zf) goto L_104b09ac;
  /* 104b0544 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104b0547 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b054a je 0x104b09ac */
  if (C.zf) goto L_104b09ac;
  /* 104b0550 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 104b0554 mov dword ptr [0x104ce798], 0 */
  w32((uint32_t)(0x104ce798), (0x0u));
  /* 104b055e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 104b0565 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b0568 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104b056b jmp 0x104b0576 */
  goto L_104b0576;
L_104b056d:;
  /* 104b056d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b0570 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b0573 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_104b0576:;
  /* 104b0576 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b0579 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 104b057c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b057f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104b0582 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b0585 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b0588 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104b058b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b058d jne 0x104b0591 */
  if (!C.zf) goto L_104b0591;
  /* 104b058f jmp 0x104b056d */
  goto L_104b056d;
L_104b0591:;
  /* 104b0591 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b0594 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104b0597 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104b059a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b059d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104b05a0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 104b05a3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104b05a6 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104b05a9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 104b05ac cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b05b0 ja 0x104b0900 */
  if ((!C.cf&&!C.zf)) goto L_104b0900;
  /* 104b05b6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104b05b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b05bb mov al, byte ptr [ecx + 0x104b09dc] */
  AL = (r8((uint32_t)(ECX + 0x104b09dc)));
  /* 104b05c1 jmp dword ptr [eax*4 + 0x104b09b0] */
  switch (EAX) {
    case 0: goto L_104b081f;
    case 1: goto L_104b0703;
    case 2: goto L_104b068e;
    case 3: goto L_104b05c8;
    case 4: goto L_104b0606;
    case 5: goto L_104b0667;
    case 6: goto L_104b06b5;
    case 7: goto L_104b06dc;
    case 8: goto L_104b074a;
    case 9: goto L_104b0644;
    case 10: goto L_104b0900;
    default: x86_unimpl("switch@0x104b05c1 out of table"); return;
  }
L_104b05c8:;
  /* 104b05c8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b05cb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 104b05ce mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104b05d1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104b05d4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 104b05d7 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b05db ja 0x104b0601 */
  if ((!C.cf&&!C.zf)) goto L_104b0601;
  /* 104b05dd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104b05e0 jmp dword ptr [ecx*4 + 0x104b0a2f] */
  switch (ECX) {
    case 0: goto L_104b05e7;
    case 1: goto L_104b05f1;
    case 2: goto L_104b05f7;
    case 3: goto L_104b05fd;
    case 4: goto L_104b0625;
    case 5: goto L_104b062f;
    case 6: goto L_104b0635;
    case 7: goto L_104b063b;
    default: x86_unimpl("switch@0x104b05e0 out of table"); return;
  }
L_104b05e7:;
  /* 104b05e7 mov dword ptr [0x104ce798], 1 */
  w32((uint32_t)(0x104ce798), (0x1u));
L_104b05f1:;
  /* 104b05f1 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 104b05f5 jmp 0x104b0601 */
  goto L_104b0601;
L_104b05f7:;
  /* 104b05f7 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 104b05fb jmp 0x104b0601 */
  goto L_104b0601;
L_104b05fd:;
  /* 104b05fd mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_104b0601:;
  /* 104b0601 jmp 0x104b0900 */
  goto L_104b0900;
L_104b0606:;
  /* 104b0606 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b0609 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 104b060c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104b060f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104b0612 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 104b0615 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b0619 ja 0x104b063f */
  if ((!C.cf&&!C.zf)) goto L_104b063f;
  /* 104b061b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104b061e jmp dword ptr [ecx*4 + 0x104b0a3f] */
  switch (ECX) {
    case 0: goto L_104b0625;
    case 1: goto L_104b062f;
    case 2: goto L_104b0635;
    case 3: goto L_104b063b;
    default: x86_unimpl("switch@0x104b061e out of table"); return;
  }
L_104b0625:;
  /* 104b0625 mov dword ptr [0x104ce798], 1 */
  w32((uint32_t)(0x104ce798), (0x1u));
L_104b062f:;
  /* 104b062f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 104b0633 jmp 0x104b063f */
  goto L_104b063f;
L_104b0635:;
  /* 104b0635 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 104b0639 jmp 0x104b063f */
  goto L_104b063f;
L_104b063b:;
  /* 104b063b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_104b063f:;
  /* 104b063f jmp 0x104b0900 */
  goto L_104b0900;
L_104b0644:;
  /* 104b0644 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b0647 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 104b064a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b064e je 0x104b0658 */
  if (C.zf) goto L_104b0658;
  /* 104b0650 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b0654 je 0x104b065e */
  if (C.zf) goto L_104b065e;
  /* 104b0656 jmp 0x104b0662 */
  goto L_104b0662;
L_104b0658:;
  /* 104b0658 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 104b065c jmp 0x104b0662 */
  goto L_104b0662;
L_104b065e:;
  /* 104b065e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_104b0662:;
  /* 104b0662 jmp 0x104b0900 */
  goto L_104b0900;
L_104b0667:;
  /* 104b0667 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b066a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 104b066d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b0671 je 0x104b067b */
  if (C.zf) goto L_104b067b;
  /* 104b0673 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b0677 je 0x104b0685 */
  if (C.zf) goto L_104b0685;
  /* 104b0679 jmp 0x104b0689 */
  goto L_104b0689;
L_104b067b:;
  /* 104b067b mov dword ptr [0x104ce798], 1 */
  w32((uint32_t)(0x104ce798), (0x1u));
L_104b0685:;
  /* 104b0685 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_104b0689:;
  /* 104b0689 jmp 0x104b0900 */
  goto L_104b0900;
L_104b068e:;
  /* 104b068e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b0691 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 104b0694 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b0698 je 0x104b06a2 */
  if (C.zf) goto L_104b06a2;
  /* 104b069a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b069e je 0x104b06ac */
  if (C.zf) goto L_104b06ac;
  /* 104b06a0 jmp 0x104b06b0 */
  goto L_104b06b0;
L_104b06a2:;
  /* 104b06a2 mov dword ptr [0x104ce798], 1 */
  w32((uint32_t)(0x104ce798), (0x1u));
L_104b06ac:;
  /* 104b06ac mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_104b06b0:;
  /* 104b06b0 jmp 0x104b0900 */
  goto L_104b0900;
L_104b06b5:;
  /* 104b06b5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b06b8 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 104b06bb cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b06bf je 0x104b06c9 */
  if (C.zf) goto L_104b06c9;
  /* 104b06c1 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b06c5 je 0x104b06d3 */
  if (C.zf) goto L_104b06d3;
  /* 104b06c7 jmp 0x104b06d7 */
  goto L_104b06d7;
L_104b06c9:;
  /* 104b06c9 mov dword ptr [0x104ce798], 1 */
  w32((uint32_t)(0x104ce798), (0x1u));
L_104b06d3:;
  /* 104b06d3 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_104b06d7:;
  /* 104b06d7 jmp 0x104b0900 */
  goto L_104b0900;
L_104b06dc:;
  /* 104b06dc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b06df mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 104b06e2 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b06e6 je 0x104b06f0 */
  if (C.zf) goto L_104b06f0;
  /* 104b06e8 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b06ec je 0x104b06fa */
  if (C.zf) goto L_104b06fa;
  /* 104b06ee jmp 0x104b06fe */
  goto L_104b06fe;
L_104b06f0:;
  /* 104b06f0 mov dword ptr [0x104ce798], 1 */
  w32((uint32_t)(0x104ce798), (0x1u));
L_104b06fa:;
  /* 104b06fa mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_104b06fe:;
  /* 104b06fe jmp 0x104b0900 */
  goto L_104b0900;
L_104b0703:;
  /* 104b0703 push 0x104ca7e4 */
  push32((uint32_t)(0x104ca7e4u));
  /* 104b0708 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b070b push ecx */
  push32((uint32_t)(ECX));
  /* 104b070c call 0x104b0f60 */
  push32(0x104b0711u); f_104b0f60();
  /* 104b0711 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b0714 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104b0716 jne 0x104b0723 */
  if (!C.zf) goto L_104b0723;
  /* 104b0718 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b071b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b071e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104b0721 jmp 0x104b0741 */
  goto L_104b0741;
L_104b0723:;
  /* 104b0723 push 0x104ca7e0 */
  push32((uint32_t)(0x104ca7e0u));
  /* 104b0728 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b072b push eax */
  push32((uint32_t)(EAX));
  /* 104b072c call 0x104b0f60 */
  push32(0x104b0731u); f_104b0f60();
  /* 104b0731 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b0734 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104b0736 jne 0x104b0741 */
  if (!C.zf) goto L_104b0741;
  /* 104b0738 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b073b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b073e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_104b0741:;
  /* 104b0741 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 104b0745 jmp 0x104b0900 */
  goto L_104b0900;
L_104b074a:;
  /* 104b074a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104b074d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b0751 jg 0x104b0761 */
  if ((!C.zf&&C.sf==C.of)) goto L_104b0761;
  /* 104b0753 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104b0756 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 104b075c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 104b075f jmp 0x104b076d */
  goto L_104b076d;
L_104b0761:;
  /* 104b0761 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104b0764 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 104b076a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_104b076d:;
  /* 104b076d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b0771 jle 0x104b0814 */
  if ((C.zf||C.sf!=C.of)) goto L_104b0814;
  /* 104b0777 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104b077a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b077d jbe 0x104b0814 */
  if ((C.cf||C.zf)) goto L_104b0814;
  /* 104b0783 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104b0786 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b0788 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104b078a mov ecx, dword ptr [0x104ccc98] */
  ECX = (r32((uint32_t)(0x104ccc98)));
  /* 104b0790 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104b0792 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 104b0796 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 104b079c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104b079e je 0x104b07d7 */
  if (C.zf) goto L_104b07d7;
  /* 104b07a0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104b07a3 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b07a6 jbe 0x104b07d7 */
  if ((C.cf||C.zf)) goto L_104b07d7;
  /* 104b07a8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b07ab mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104b07ad mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104b07b0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 104b07b2 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 104b07b4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b07b7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104b07b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b07bc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b07bf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 104b07c1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104b07c4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b07c7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 104b07ca mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104b07cd mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104b07cf sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104b07d2 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104b07d5 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_104b07d7:;
  /* 104b07d7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b07da mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104b07dc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104b07df mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104b07e1 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 104b07e3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b07e6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104b07e8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b07eb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b07ee mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 104b07f0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104b07f3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b07f6 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 104b07f9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104b07fc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104b07fe sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104b0801 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104b0804 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 104b0806 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b0809 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104b080c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 104b080f jmp 0x104b076d */
  goto L_104b076d;
L_104b0814:;
  /* 104b0814 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b0817 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 104b081a jmp 0x104b0536 */
  goto L_104b0536;
L_104b081f:;
  /* 104b081f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b0822 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 104b0825 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104b0827 je 0x104b08f2 */
  if (C.zf) goto L_104b08f2;
  /* 104b082d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b0830 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b0833 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_104b0836:;
  /* 104b0836 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b0839 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104b083c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104b083e je 0x104b08f0 */
  if (C.zf) goto L_104b08f0;
  /* 104b0844 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104b0847 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b084a je 0x104b08f0 */
  if (C.zf) goto L_104b08f0;
  /* 104b0850 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b0853 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104b0856 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b0859 jne 0x104b0869 */
  if (!C.zf) goto L_104b0869;
  /* 104b085b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b085e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b0861 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 104b0864 jmp 0x104b08f0 */
  goto L_104b08f0;
L_104b0869:;
  /* 104b0869 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b086c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104b086e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 104b0870 mov edx, dword ptr [0x104ccc98] */
  EDX = (r32((uint32_t)(0x104ccc98)));
  /* 104b0876 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b0878 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 104b087c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 104b0881 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104b0883 je 0x104b08bc */
  if (C.zf) goto L_104b08bc;
  /* 104b0885 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104b0888 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b088b jbe 0x104b08bc */
  if ((C.cf||C.zf)) goto L_104b08bc;
  /* 104b088d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b0890 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104b0892 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b0895 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104b0897 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 104b0899 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b089c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104b089e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b08a1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b08a4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 104b08a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b08a9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b08ac mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 104b08af mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104b08b2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104b08b4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104b08b7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104b08ba mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_104b08bc:;
  /* 104b08bc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b08bf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104b08c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b08c4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 104b08c6 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 104b08c8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b08cb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104b08cd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b08d0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b08d3 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 104b08d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b08d8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b08db mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 104b08de mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104b08e1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104b08e3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104b08e6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104b08e9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 104b08eb jmp 0x104b0836 */
  goto L_104b0836;
L_104b08f0:;
  /* 104b08f0 jmp 0x104b08fb */
  goto L_104b08fb;
L_104b08f2:;
  /* 104b08f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b08f5 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b08f8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_104b08fb:;
  /* 104b08fb jmp 0x104b0536 */
  goto L_104b0536;
L_104b0900:;
  /* 104b0900 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 104b0904 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104b0906 je 0x104b092c */
  if (C.zf) goto L_104b092c;
  /* 104b0908 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104b090b push edx */
  push32((uint32_t)(EDX));
  /* 104b090c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104b090f push eax */
  push32((uint32_t)(EAX));
  /* 104b0910 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b0913 push ecx */
  push32((uint32_t)(ECX));
  /* 104b0914 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104b0917 push edx */
  push32((uint32_t)(EDX));
  /* 104b0918 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 104b091b push eax */
  push32((uint32_t)(EAX));
  /* 104b091c call 0x104afd60 */
  push32(0x104b0921u); f_104afd60();
  /* 104b0921 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b0924 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b0927 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 104b092a jmp 0x104b09a7 */
  goto L_104b09a7;
L_104b092c:;
  /* 104b092c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b092f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b0931 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104b0933 mov ecx, dword ptr [0x104ccc98] */
  ECX = (r32((uint32_t)(0x104ccc98)));
  /* 104b0939 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104b093b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 104b093f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 104b0945 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104b0947 je 0x104b0978 */
  if (C.zf) goto L_104b0978;
  /* 104b0949 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b094c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104b094e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b0951 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104b0953 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 104b0955 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b0958 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104b095a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b095d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b0960 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 104b0962 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b0965 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b0968 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 104b096b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104b096e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104b0970 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104b0973 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104b0976 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_104b0978:;
  /* 104b0978 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b097b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104b097d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b0980 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104b0982 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 104b0984 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b0987 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104b0989 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b098c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b098f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 104b0991 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b0994 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b0997 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 104b099a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104b099d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104b099f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104b09a2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104b09a5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_104b09a7:;
  /* 104b09a7 jmp 0x104b0536 */
  goto L_104b0536;
L_104b09ac:;
  /* 104b09ac mov esp, ebp */
  ESP = (EBP);
  /* 104b09ae pop ebp */
  EBP = (pop32());
  /* 104b09af ret  */
  ESPCHK(0x104b0530u, _esp0);
  ESP += 4; return;
}

/* FUN_10010a50 @ 0x104b0a50 (650 bytes, 178 insns) */
void f_104b0a50(void) {
  FTRACE(0x104b0a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104b0a50 push ebp */
  push32((uint32_t)(EBP));
  /* 104b0a51 mov ebp, esp */
  EBP = (ESP);
  /* 104b0a53 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104b0a59 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b0a5d jne 0x104b0bb9 */
  if (!C.zf) goto L_104b0bb9;
  /* 104b0a63 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104b0a66 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 104b0a6c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 104b0a72 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104b0a75 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104b0a7c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 104b0a86 push 0 */
  push32((uint32_t)(0x0u));
  /* 104b0a88 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 104b0a8e push edx */
  push32((uint32_t)(EDX));
  /* 104b0a8f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b0a92 push eax */
  push32((uint32_t)(EAX));
  /* 104b0a93 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b0a96 push ecx */
  push32((uint32_t)(ECX));
  /* 104b0a97 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104b0a9a push edx */
  push32((uint32_t)(EDX));
  /* 104b0a9b call 0x104b1e70 */
  push32(0x104b0aa0u); f_104b1e70();
  /* 104b0aa0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b0aa3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104b0aa6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b0aaa jne 0x104b0b3f */
  if (!C.zf) goto L_104b0b3f;
  /* 104b0ab0 call dword ptr [0x104d029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d029c))), 0x104b0ab6u);
  /* 104b0ab6 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b0ab9 je 0x104b0ac0 */
  if (C.zf) goto L_104b0ac0;
  /* 104b0abb jmp 0x104b0b9d */
  goto L_104b0b9d;
L_104b0ac0:;
  /* 104b0ac0 push 0 */
  push32((uint32_t)(0x0u));
  /* 104b0ac2 push 0 */
  push32((uint32_t)(0x0u));
  /* 104b0ac4 push 0 */
  push32((uint32_t)(0x0u));
  /* 104b0ac6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b0ac9 push eax */
  push32((uint32_t)(EAX));
  /* 104b0aca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104b0acd push ecx */
  push32((uint32_t)(ECX));
  /* 104b0ace call 0x104b1e70 */
  push32(0x104b0ad3u); f_104b1e70();
  /* 104b0ad3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b0ad6 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 104b0adc cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b0ae3 jne 0x104b0aea */
  if (!C.zf) goto L_104b0aea;
  /* 104b0ae5 jmp 0x104b0b9d */
  goto L_104b0b9d;
L_104b0aea:;
  /* 104b0aea push 0x58 */
  push32((uint32_t)(0x58u));
  /* 104b0aec push 0x104ca7ec */
  push32((uint32_t)(0x104ca7ecu));
  /* 104b0af1 push 2 */
  push32((uint32_t)(0x2u));
  /* 104b0af3 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 104b0af9 push edx */
  push32((uint32_t)(EDX));
  /* 104b0afa call 0x104a2890 */
  push32(0x104b0affu); f_104a2890();
  /* 104b0aff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b0b02 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104b0b05 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b0b09 jne 0x104b0b10 */
  if (!C.zf) goto L_104b0b10;
  /* 104b0b0b jmp 0x104b0b9d */
  goto L_104b0b9d;
L_104b0b10:;
  /* 104b0b10 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 104b0b17 push 0 */
  push32((uint32_t)(0x0u));
  /* 104b0b19 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 104b0b1f push eax */
  push32((uint32_t)(EAX));
  /* 104b0b20 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b0b23 push ecx */
  push32((uint32_t)(ECX));
  /* 104b0b24 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b0b27 push edx */
  push32((uint32_t)(EDX));
  /* 104b0b28 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104b0b2b push eax */
  push32((uint32_t)(EAX));
  /* 104b0b2c call 0x104b1e70 */
  push32(0x104b0b31u); f_104b1e70();
  /* 104b0b31 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b0b34 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104b0b37 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b0b3b jne 0x104b0b3f */
  if (!C.zf) goto L_104b0b3f;
  /* 104b0b3d jmp 0x104b0b9d */
  goto L_104b0b9d;
L_104b0b3f:;
  /* 104b0b3f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 104b0b41 push 0x104ca7ec */
  push32((uint32_t)(0x104ca7ecu));
  /* 104b0b46 push 2 */
  push32((uint32_t)(0x2u));
  /* 104b0b48 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104b0b4b push ecx */
  push32((uint32_t)(ECX));
  /* 104b0b4c call 0x104a2890 */
  push32(0x104b0b51u); f_104a2890();
  /* 104b0b51 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b0b54 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 104b0b5a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 104b0b5c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 104b0b62 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b0b65 jne 0x104b0b69 */
  if (!C.zf) goto L_104b0b69;
  /* 104b0b67 jmp 0x104b0b9d */
  goto L_104b0b9d;
L_104b0b69:;
  /* 104b0b69 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104b0b6c push ecx */
  push32((uint32_t)(ECX));
  /* 104b0b6d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b0b70 push edx */
  push32((uint32_t)(EDX));
  /* 104b0b71 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 104b0b77 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104b0b79 push ecx */
  push32((uint32_t)(ECX));
  /* 104b0b7a call 0x104a60b0 */
  push32(0x104b0b7fu); f_104a60b0();
  /* 104b0b7f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b0b82 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b0b86 je 0x104b0b96 */
  if (C.zf) goto L_104b0b96;
  /* 104b0b88 push 2 */
  push32((uint32_t)(0x2u));
  /* 104b0b8a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b0b8d push edx */
  push32((uint32_t)(EDX));
  /* 104b0b8e call 0x104a3320 */
  push32(0x104b0b93u); f_104a3320();
  /* 104b0b93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104b0b96:;
  /* 104b0b96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b0b98 jmp 0x104b0cd6 */
  goto L_104b0cd6;
L_104b0b9d:;
  /* 104b0b9d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b0ba1 je 0x104b0bb1 */
  if (C.zf) goto L_104b0bb1;
  /* 104b0ba3 push 2 */
  push32((uint32_t)(0x2u));
  /* 104b0ba5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b0ba8 push eax */
  push32((uint32_t)(EAX));
  /* 104b0ba9 call 0x104a3320 */
  push32(0x104b0baeu); f_104a3320();
  /* 104b0bae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104b0bb1:;
  /* 104b0bb1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104b0bb4 jmp 0x104b0cd6 */
  goto L_104b0cd6;
L_104b0bb9:;
  /* 104b0bb9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b0bbd jne 0x104b0cd3 */
  if (!C.zf) goto L_104b0cd3;
  /* 104b0bc3 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 104b0bcd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104b0bd0 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 104b0bd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 104b0bd8 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 104b0bde push edx */
  push32((uint32_t)(EDX));
  /* 104b0bdf push 0x104ce6b0 */
  push32((uint32_t)(0x104ce6b0u));
  /* 104b0be4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b0be7 push eax */
  push32((uint32_t)(EAX));
  /* 104b0be8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104b0beb push ecx */
  push32((uint32_t)(ECX));
  /* 104b0bec call 0x104b1cd0 */
  push32(0x104b0bf1u); f_104b1cd0();
  /* 104b0bf1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b0bf4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104b0bf6 jne 0x104b0c00 */
  if (!C.zf) goto L_104b0c00;
  /* 104b0bf8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104b0bfb jmp 0x104b0cd6 */
  goto L_104b0cd6;
L_104b0c00:;
  /* 104b0c00 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 104b0c06 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 104b0c09 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 104b0c13 jmp 0x104b0c24 */
  goto L_104b0c24;
L_104b0c15:;
  /* 104b0c15 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 104b0c1b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b0c1e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_104b0c24:;
  /* 104b0c24 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b0c2b jge 0x104b0ccf */
  if ((C.sf==C.of)) goto L_104b0ccf;
  /* 104b0c31 cmp dword ptr [0x104ccea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x104ccea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b0c38 jle 0x104b0c6b */
  if ((C.zf||C.sf!=C.of)) goto L_104b0c6b;
  /* 104b0c3a push 4 */
  push32((uint32_t)(0x4u));
  /* 104b0c3c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 104b0c42 mov dl, byte ptr [ecx*2 + 0x104ce6b0] */
  DL = (r8((uint32_t)(ECX*2 + 0x104ce6b0)));
  /* 104b0c49 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 104b0c4f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 104b0c55 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104b0c5a push eax */
  push32((uint32_t)(EAX));
  /* 104b0c5b call 0x104a88a0 */
  push32(0x104b0c60u); f_104a88a0();
  /* 104b0c60 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b0c63 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 104b0c69 jmp 0x104b0c9e */
  goto L_104b0c9e;
L_104b0c6b:;
  /* 104b0c6b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 104b0c71 mov dl, byte ptr [ecx*2 + 0x104ce6b0] */
  DL = (r8((uint32_t)(ECX*2 + 0x104ce6b0)));
  /* 104b0c78 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 104b0c7e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 104b0c84 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104b0c89 mov ecx, dword ptr [0x104ccc98] */
  ECX = (r32((uint32_t)(0x104ccc98)));
  /* 104b0c8f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104b0c91 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 104b0c95 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 104b0c98 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_104b0c9e:;
  /* 104b0c9e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b0ca5 je 0x104b0cc8 */
  if (C.zf) goto L_104b0cc8;
  /* 104b0ca7 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 104b0cad movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104b0cb0 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104b0cb3 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 104b0cba lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 104b0cbe mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 104b0cc4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 104b0cc6 jmp 0x104b0cca */
  goto L_104b0cca;
L_104b0cc8:;
  /* 104b0cc8 jmp 0x104b0ccf */
  goto L_104b0ccf;
L_104b0cca:;
  /* 104b0cca jmp 0x104b0c15 */
  goto L_104b0c15;
L_104b0ccf:;
  /* 104b0ccf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b0cd1 jmp 0x104b0cd6 */
  goto L_104b0cd6;
L_104b0cd3:;
  /* 104b0cd3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_104b0cd6:;
  /* 104b0cd6 mov esp, ebp */
  ESP = (EBP);
  /* 104b0cd8 pop ebp */
  EBP = (pop32());
  /* 104b0cd9 ret  */
  ESPCHK(0x104b0a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ce0 @ 0x104b0ce0 (10 bytes, 5 insns) */
void f_104b0ce0(void) {
  FTRACE(0x104b0ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104b0ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 104b0ce1 mov ebp, esp */
  EBP = (ESP);
  /* 104b0ce3 mov eax, dword ptr [0x104cdd88] */
  EAX = (r32((uint32_t)(0x104cdd88)));
  /* 104b0ce8 pop ebp */
  EBP = (pop32());
  /* 104b0ce9 ret  */
  ESPCHK(0x104b0ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010cf0 @ 0x104b0cf0 (575 bytes, 196 insns) */
void f_104b0cf0(void) {
  FTRACE(0x104b0cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104b0cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 104b0cf1 mov ebp, esp */
  EBP = (ESP);
  /* 104b0cf3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 104b0cf5 push 0x104ca7f8 */
  push32((uint32_t)(0x104ca7f8u));
  /* 104b0cfa push 0x104ab998 */
  push32((uint32_t)(0x104ab998u));
  /* 104b0cff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 104b0d05 push eax */
  push32((uint32_t)(EAX));
  /* 104b0d06 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 104b0d0d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b0d10 push ebx */
  push32((uint32_t)(EBX));
  /* 104b0d11 push esi */
  push32((uint32_t)(ESI));
  /* 104b0d12 push edi */
  push32((uint32_t)(EDI));
  /* 104b0d13 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 104b0d16 cmp dword ptr [0x104ce6bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce6bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b0d1d jne 0x104b0d6e */
  if (!C.zf) goto L_104b0d6e;
  /* 104b0d1f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 104b0d22 push eax */
  push32((uint32_t)(EAX));
  /* 104b0d23 push 1 */
  push32((uint32_t)(0x1u));
  /* 104b0d25 push 0x104c9f2c */
  push32((uint32_t)(0x104c9f2cu));
  /* 104b0d2a push 1 */
  push32((uint32_t)(0x1u));
  /* 104b0d2c call dword ptr [0x104d031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d031c))), 0x104b0d32u);
  /* 104b0d32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104b0d34 je 0x104b0d42 */
  if (C.zf) goto L_104b0d42;
  /* 104b0d36 mov dword ptr [0x104ce6bc], 1 */
  w32((uint32_t)(0x104ce6bc), (0x1u));
  /* 104b0d40 jmp 0x104b0d6e */
  goto L_104b0d6e;
L_104b0d42:;
  /* 104b0d42 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 104b0d45 push ecx */
  push32((uint32_t)(ECX));
  /* 104b0d46 push 1 */
  push32((uint32_t)(0x1u));
  /* 104b0d48 push 0x104c9f28 */
  push32((uint32_t)(0x104c9f28u));
  /* 104b0d4d push 1 */
  push32((uint32_t)(0x1u));
  /* 104b0d4f push 0 */
  push32((uint32_t)(0x0u));
  /* 104b0d51 call dword ptr [0x104d0318] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0318))), 0x104b0d57u);
  /* 104b0d57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104b0d59 je 0x104b0d67 */
  if (C.zf) goto L_104b0d67;
  /* 104b0d5b mov dword ptr [0x104ce6bc], 2 */
  w32((uint32_t)(0x104ce6bc), (0x2u));
  /* 104b0d65 jmp 0x104b0d6e */
  goto L_104b0d6e;
L_104b0d67:;
  /* 104b0d67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b0d69 jmp 0x104b0f49 */
  goto L_104b0f49;
L_104b0d6e:;
  /* 104b0d6e cmp dword ptr [0x104ce6bc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x104ce6bc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b0d75 jne 0x104b0d92 */
  if (!C.zf) goto L_104b0d92;
  /* 104b0d77 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104b0d7a push edx */
  push32((uint32_t)(EDX));
  /* 104b0d7b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b0d7e push eax */
  push32((uint32_t)(EAX));
  /* 104b0d7f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104b0d82 push ecx */
  push32((uint32_t)(ECX));
  /* 104b0d83 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b0d86 push edx */
  push32((uint32_t)(EDX));
  /* 104b0d87 call dword ptr [0x104d031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d031c))), 0x104b0d8du);
  /* 104b0d8d jmp 0x104b0f49 */
  goto L_104b0f49;
L_104b0d92:;
  /* 104b0d92 cmp dword ptr [0x104ce6bc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x104ce6bc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b0d99 jne 0x104b0f47 */
  if (!C.zf) goto L_104b0f47;
  /* 104b0d9f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b0da3 jne 0x104b0dad */
  if (!C.zf) goto L_104b0dad;
  /* 104b0da5 mov eax, dword ptr [0x104ce630] */
  EAX = (r32((uint32_t)(0x104ce630)));
  /* 104b0daa mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_104b0dad:;
  /* 104b0dad push 0 */
  push32((uint32_t)(0x0u));
  /* 104b0daf push 0 */
  push32((uint32_t)(0x0u));
  /* 104b0db1 push 0 */
  push32((uint32_t)(0x0u));
  /* 104b0db3 push 0 */
  push32((uint32_t)(0x0u));
  /* 104b0db5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b0db8 push ecx */
  push32((uint32_t)(ECX));
  /* 104b0db9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104b0dbc push edx */
  push32((uint32_t)(EDX));
  /* 104b0dbd push 0x220 */
  push32((uint32_t)(0x220u));
  /* 104b0dc2 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104b0dc5 push eax */
  push32((uint32_t)(EAX));
  /* 104b0dc6 call dword ptr [0x104d0224] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0224))), 0x104b0dccu);
  /* 104b0dcc mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 104b0dcf cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b0dd3 jne 0x104b0ddc */
  if (!C.zf) goto L_104b0ddc;
  /* 104b0dd5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b0dd7 jmp 0x104b0f49 */
  goto L_104b0f49;
L_104b0ddc:;
  /* 104b0ddc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104b0de3 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 104b0de6 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b0de9 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 104b0deb call 0x104a5a30 */
  push32(0x104b0df0u); f_104a5a30();
  /* 104b0df0 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 104b0df3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 104b0df6 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 104b0df9 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 104b0dfc mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 104b0dff push edx */
  push32((uint32_t)(EDX));
  /* 104b0e00 push 0 */
  push32((uint32_t)(0x0u));
  /* 104b0e02 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104b0e05 push eax */
  push32((uint32_t)(EAX));
  /* 104b0e06 call 0x104a6600 */
  push32(0x104b0e0bu); f_104a6600();
  /* 104b0e0b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b0e0e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 104b0e15 jmp 0x104b0e2e */
  goto L_104b0e2e;
  /* 104b0e17 mov eax, 1 */
  EAX = (0x1u);
  /* 104b0e1c ret  */
  ESPCHK(0x104b0cf0u, _esp0);
  ESP += 4; return;
  /* 104b0e1d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 104b0e20 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 104b0e27 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_104b0e2e:;
  /* 104b0e2e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b0e32 jne 0x104b0e3b */
  if (!C.zf) goto L_104b0e3b;
  /* 104b0e34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b0e36 jmp 0x104b0f49 */
  goto L_104b0f49;
L_104b0e3b:;
  /* 104b0e3b push 0 */
  push32((uint32_t)(0x0u));
  /* 104b0e3d push 0 */
  push32((uint32_t)(0x0u));
  /* 104b0e3f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 104b0e42 push ecx */
  push32((uint32_t)(ECX));
  /* 104b0e43 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104b0e46 push edx */
  push32((uint32_t)(EDX));
  /* 104b0e47 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b0e4a push eax */
  push32((uint32_t)(EAX));
  /* 104b0e4b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104b0e4e push ecx */
  push32((uint32_t)(ECX));
  /* 104b0e4f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 104b0e54 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104b0e57 push edx */
  push32((uint32_t)(EDX));
  /* 104b0e58 call dword ptr [0x104d0224] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0224))), 0x104b0e5eu);
  /* 104b0e5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104b0e60 jne 0x104b0e69 */
  if (!C.zf) goto L_104b0e69;
  /* 104b0e62 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b0e64 jmp 0x104b0f49 */
  goto L_104b0f49;
L_104b0e69:;
  /* 104b0e69 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 104b0e70 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 104b0e73 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 104b0e77 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b0e7a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 104b0e7c call 0x104a5a30 */
  push32(0x104b0e81u); f_104a5a30();
  /* 104b0e81 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 104b0e84 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 104b0e87 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 104b0e8a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 104b0e8d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 104b0e94 jmp 0x104b0ead */
  goto L_104b0ead;
  /* 104b0e96 mov eax, 1 */
  EAX = (0x1u);
  /* 104b0e9b ret  */
  ESPCHK(0x104b0cf0u, _esp0);
  ESP += 4; return;
  /* 104b0e9c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 104b0e9f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 104b0ea6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_104b0ead:;
  /* 104b0ead cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b0eb1 jne 0x104b0eba */
  if (!C.zf) goto L_104b0eba;
  /* 104b0eb3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b0eb5 jmp 0x104b0f49 */
  goto L_104b0f49;
L_104b0eba:;
  /* 104b0eba cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b0ebe jne 0x104b0ec9 */
  if (!C.zf) goto L_104b0ec9;
  /* 104b0ec0 mov edx, dword ptr [0x104ce620] */
  EDX = (r32((uint32_t)(0x104ce620)));
  /* 104b0ec6 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_104b0ec9:;
  /* 104b0ec9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b0ecc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104b0ecf mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 104b0ed5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b0ed8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104b0edb mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 104b0ee2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104b0ee5 push ecx */
  push32((uint32_t)(ECX));
  /* 104b0ee6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 104b0ee9 push edx */
  push32((uint32_t)(EDX));
  /* 104b0eea mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104b0eed push eax */
  push32((uint32_t)(EAX));
  /* 104b0eee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b0ef1 push ecx */
  push32((uint32_t)(ECX));
  /* 104b0ef2 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 104b0ef5 push edx */
  push32((uint32_t)(EDX));
  /* 104b0ef6 call dword ptr [0x104d0318] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0318))), 0x104b0efcu);
  /* 104b0efc mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 104b0eff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b0f02 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104b0f05 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104b0f07 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 104b0f0c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b0f12 je 0x104b0f28 */
  if (C.zf) goto L_104b0f28;
  /* 104b0f14 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b0f17 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104b0f1a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104b0f1c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 104b0f20 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b0f26 je 0x104b0f2c */
  if (C.zf) goto L_104b0f2c;
L_104b0f28:;
  /* 104b0f28 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b0f2a jmp 0x104b0f49 */
  goto L_104b0f49;
L_104b0f2c:;
  /* 104b0f2c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b0f2f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 104b0f31 push eax */
  push32((uint32_t)(EAX));
  /* 104b0f32 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104b0f35 push ecx */
  push32((uint32_t)(ECX));
  /* 104b0f36 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104b0f39 push edx */
  push32((uint32_t)(EDX));
  /* 104b0f3a call 0x104aa780 */
  push32(0x104b0f3fu); f_104aa780();
  /* 104b0f3f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b0f42 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 104b0f45 jmp 0x104b0f49 */
  goto L_104b0f49;
L_104b0f47:;
  /* 104b0f47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104b0f49:;
  /* 104b0f49 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 104b0f4c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104b0f4f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 104b0f56 pop edi */
  EDI = (pop32());
  /* 104b0f57 pop esi */
  ESI = (pop32());
  /* 104b0f58 pop ebx */
  EBX = (pop32());
  /* 104b0f59 mov esp, ebp */
  ESP = (EBP);
  /* 104b0f5b pop ebp */
  EBP = (pop32());
  /* 104b0f5c ret  */
  ESPCHK(0x104b0cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f60 @ 0x104b0f60 (208 bytes, 85 insns) */
void f_104b0f60(void) {
  FTRACE(0x104b0f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104b0f60 push ebp */
  push32((uint32_t)(EBP));
  /* 104b0f61 mov ebp, esp */
  EBP = (ESP);
  /* 104b0f63 push edi */
  push32((uint32_t)(EDI));
  /* 104b0f64 push esi */
  push32((uint32_t)(ESI));
  /* 104b0f65 push ebx */
  push32((uint32_t)(EBX));
  /* 104b0f66 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 104b0f69 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 104b0f6c lea eax, [0x104ce618] */
  EAX = ((uint32_t)(0x104ce618));
  /* 104b0f72 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b0f76 jne 0x104b0fb3 */
  if (!C.zf) goto L_104b0fb3;
  /* 104b0f78 mov al, 0xff */
  AL = (0xffu);
  /* 104b0f7a mov edi, edi */
  EDI = (EDI);
L_104b0f7c:;
  /* 104b0f7c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 104b0f7e je 0x104b0fae */
  if (C.zf) goto L_104b0fae;
  /* 104b0f80 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 104b0f82 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 104b0f83 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 104b0f85 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 104b0f86 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104b0f88 je 0x104b0f7c */
  if (C.zf) goto L_104b0f7c;
  /* 104b0f8a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 104b0f8c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104b0f8e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 104b0f90 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 104b0f93 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 104b0f95 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 104b0f97 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 104b0f99 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 104b0f9b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104b0f9d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 104b0f9f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 104b0fa2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 104b0fa4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 104b0fa6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104b0fa8 je 0x104b0f7c */
  if (C.zf) goto L_104b0f7c;
  /* 104b0faa sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 104b0fac sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_104b0fae:;
  /* 104b0fae movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 104b0fb1 jmp 0x104b102b */
  goto L_104b102b;
L_104b0fb3:;
  /* 104b0fb3 lock inc dword ptr [0x104ce7ac] */
  x86_unimpl("lock inc @ 0x104b0fb3");
  /* 104b0fba cmp dword ptr [0x104ce79c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce79c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b0fc1 jg 0x104b0fc7 */
  if ((!C.zf&&C.sf==C.of)) goto L_104b0fc7;
  /* 104b0fc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 104b0fc5 jmp 0x104b0fdc */
  goto L_104b0fdc;
L_104b0fc7:;
  /* 104b0fc7 lock dec dword ptr [0x104ce7ac] */
  x86_unimpl("lock dec @ 0x104b0fc7");
  /* 104b0fce push 0x13 */
  push32((uint32_t)(0x13u));
  /* 104b0fd0 call 0x104a6290 */
  push32(0x104b0fd5u); f_104a6290();
  /* 104b0fd5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_104b0fdc:;
  /* 104b0fdc mov eax, 0xff */
  EAX = (0xffu);
  /* 104b0fe1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 104b0fe3 nop  */
  /* nop */
L_104b0fe4:;
  /* 104b0fe4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 104b0fe6 je 0x104b100f */
  if (C.zf) goto L_104b100f;
  /* 104b0fe8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 104b0fea inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 104b0feb mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 104b0fed inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 104b0fee cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104b0ff0 je 0x104b0fe4 */
  if (C.zf) goto L_104b0fe4;
  /* 104b0ff2 push eax */
  push32((uint32_t)(EAX));
  /* 104b0ff3 push ebx */
  push32((uint32_t)(EBX));
  /* 104b0ff4 call 0x104b20d0 */
  push32(0x104b0ff9u); f_104b20d0();
  /* 104b0ff9 mov ebx, eax */
  EBX = (EAX);
  /* 104b0ffb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b0ffe call 0x104b20d0 */
  push32(0x104b1003u); f_104b20d0();
  /* 104b1003 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b1006 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104b1008 je 0x104b0fe4 */
  if (C.zf) goto L_104b0fe4;
  /* 104b100a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104b100c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_104b100f:;
  /* 104b100f mov ebx, eax */
  EBX = (EAX);
  /* 104b1011 pop eax */
  EAX = (pop32());
  /* 104b1012 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b1014 jne 0x104b101f */
  if (!C.zf) goto L_104b101f;
  /* 104b1016 lock dec dword ptr [0x104ce7ac] */
  x86_unimpl("lock dec @ 0x104b1016");
  /* 104b101d jmp 0x104b1029 */
  goto L_104b1029;
L_104b101f:;
  /* 104b101f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 104b1021 call 0x104a6330 */
  push32(0x104b1026u); f_104a6330();
  /* 104b1026 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104b1029:;
  /* 104b1029 mov eax, ebx */
  EAX = (EBX);
L_104b102b:;
  /* 104b102b pop ebx */
  EBX = (pop32());
  /* 104b102c pop esi */
  ESI = (pop32());
  /* 104b102d pop edi */
  EDI = (pop32());
  /* 104b102e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 104b102f ret  */
  ESPCHK(0x104b0f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10011030 @ 0x104b1030 (257 bytes, 103 insns) */
void f_104b1030(void) {
  FTRACE(0x104b1030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104b1030 push ebp */
  push32((uint32_t)(EBP));
  /* 104b1031 mov ebp, esp */
  EBP = (ESP);
  /* 104b1033 push edi */
  push32((uint32_t)(EDI));
  /* 104b1034 push esi */
  push32((uint32_t)(ESI));
  /* 104b1035 push ebx */
  push32((uint32_t)(EBX));
  /* 104b1036 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b1039 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104b103b je 0x104b112a */
  if (C.zf) goto L_104b112a;
  /* 104b1041 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 104b1044 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 104b1047 lea eax, [0x104ce618] */
  EAX = ((uint32_t)(0x104ce618));
  /* 104b104d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b1051 jne 0x104b10a1 */
  if (!C.zf) goto L_104b10a1;
  /* 104b1053 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 104b1055 mov bl, 0x5a */
  BL = (0x5au);
  /* 104b1057 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 104b1059 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_104b105c:;
  /* 104b105c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 104b105e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 104b1060 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 104b1062 je 0x104b1085 */
  if (C.zf) goto L_104b1085;
  /* 104b1064 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 104b1066 je 0x104b1085 */
  if (C.zf) goto L_104b1085;
  /* 104b1068 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 104b1069 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 104b106a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104b106c jb 0x104b1074 */
  if (C.cf) goto L_104b1074;
  /* 104b106e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104b1070 ja 0x104b1074 */
  if ((!C.cf&&!C.zf)) goto L_104b1074;
  /* 104b1072 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_104b1074:;
  /* 104b1074 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104b1076 jb 0x104b107e */
  if (C.cf) goto L_104b107e;
  /* 104b1078 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104b107a ja 0x104b107e */
  if ((!C.cf&&!C.zf)) goto L_104b107e;
  /* 104b107c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_104b107e:;
  /* 104b107e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104b1080 jne 0x104b108f */
  if (!C.zf) goto L_104b108f;
  /* 104b1082 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 104b1083 jne 0x104b105c */
  if (!C.zf) goto L_104b105c;
L_104b1085:;
  /* 104b1085 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104b1087 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104b1089 je 0x104b112a */
  if (C.zf) goto L_104b112a;
L_104b108f:;
  /* 104b108f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 104b1094 jb 0x104b112a */
  if (C.cf) goto L_104b112a;
  /* 104b109a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 104b109c jmp 0x104b112a */
  goto L_104b112a;
L_104b10a1:;
  /* 104b10a1 lock inc dword ptr [0x104ce7ac] */
  x86_unimpl("lock inc @ 0x104b10a1");
  /* 104b10a8 cmp dword ptr [0x104ce79c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce79c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b10af jg 0x104b10b5 */
  if ((!C.zf&&C.sf==C.of)) goto L_104b10b5;
  /* 104b10b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 104b10b3 jmp 0x104b10ce */
  goto L_104b10ce;
L_104b10b5:;
  /* 104b10b5 lock dec dword ptr [0x104ce7ac] */
  x86_unimpl("lock dec @ 0x104b10b5");
  /* 104b10bc mov ebx, ecx */
  EBX = (ECX);
  /* 104b10be push 0x13 */
  push32((uint32_t)(0x13u));
  /* 104b10c0 call 0x104a6290 */
  push32(0x104b10c5u); f_104a6290();
  /* 104b10c5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 104b10cc mov ecx, ebx */
  ECX = (EBX);
L_104b10ce:;
  /* 104b10ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b10d0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 104b10d2 mov edi, edi */
  EDI = (EDI);
L_104b10d4:;
  /* 104b10d4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 104b10d6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b10d8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 104b10da je 0x104b10ff */
  if (C.zf) goto L_104b10ff;
  /* 104b10dc or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 104b10de je 0x104b10ff */
  if (C.zf) goto L_104b10ff;
  /* 104b10e0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 104b10e1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 104b10e2 push ecx */
  push32((uint32_t)(ECX));
  /* 104b10e3 push eax */
  push32((uint32_t)(EAX));
  /* 104b10e4 push ebx */
  push32((uint32_t)(EBX));
  /* 104b10e5 call 0x104b20d0 */
  push32(0x104b10eau); f_104b20d0();
  /* 104b10ea mov ebx, eax */
  EBX = (EAX);
  /* 104b10ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b10ef call 0x104b20d0 */
  push32(0x104b10f4u); f_104b20d0();
  /* 104b10f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b10f7 pop ecx */
  ECX = (pop32());
  /* 104b10f8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b10fa jne 0x104b1105 */
  if (!C.zf) goto L_104b1105;
  /* 104b10fc dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 104b10fd jne 0x104b10d4 */
  if (!C.zf) goto L_104b10d4;
L_104b10ff:;
  /* 104b10ff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104b1101 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b1103 je 0x104b110e */
  if (C.zf) goto L_104b110e;
L_104b1105:;
  /* 104b1105 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 104b110a jb 0x104b110e */
  if (C.cf) goto L_104b110e;
  /* 104b110c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_104b110e:;
  /* 104b110e pop eax */
  EAX = (pop32());
  /* 104b110f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b1111 jne 0x104b111c */
  if (!C.zf) goto L_104b111c;
  /* 104b1113 lock dec dword ptr [0x104ce7ac] */
  x86_unimpl("lock dec @ 0x104b1113");
  /* 104b111a jmp 0x104b112a */
  goto L_104b112a;
L_104b111c:;
  /* 104b111c mov ebx, ecx */
  EBX = (ECX);
  /* 104b111e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 104b1120 call 0x104a6330 */
  push32(0x104b1125u); f_104a6330();
  /* 104b1125 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b1128 mov ecx, ebx */
  ECX = (EBX);
L_104b112a:;
  /* 104b112a mov eax, ecx */
  EAX = (ECX);
  /* 104b112c pop ebx */
  EBX = (pop32());
  /* 104b112d pop esi */
  ESI = (pop32());
  /* 104b112e pop edi */
  EDI = (pop32());
  /* 104b112f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 104b1130 ret  */
  ESPCHK(0x104b1030u, _esp0);
  ESP += 4; return;
}

/* FUN_10011140 @ 0x104b1140 (255 bytes, 88 insns) */
void f_104b1140(void) {
  FTRACE(0x104b1140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104b1140 push ebp */
  push32((uint32_t)(EBP));
  /* 104b1141 mov ebp, esp */
  EBP = (ESP);
  /* 104b1143 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_104b1146:;
  /* 104b1146 cmp dword ptr [0x104ccea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x104ccea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b114d jle 0x104b1166 */
  if ((C.zf||C.sf!=C.of)) goto L_104b1166;
  /* 104b114f push 8 */
  push32((uint32_t)(0x8u));
  /* 104b1151 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b1154 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104b1156 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 104b1158 push ecx */
  push32((uint32_t)(ECX));
  /* 104b1159 call 0x104a88a0 */
  push32(0x104b115eu); f_104a88a0();
  /* 104b115e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b1161 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 104b1164 jmp 0x104b117f */
  goto L_104b117f;
L_104b1166:;
  /* 104b1166 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b1169 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b116b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104b116d mov ecx, dword ptr [0x104ccc98] */
  ECX = (r32((uint32_t)(0x104ccc98)));
  /* 104b1173 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104b1175 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 104b1179 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 104b117c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_104b117f:;
  /* 104b117f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b1183 je 0x104b1190 */
  if (C.zf) goto L_104b1190;
  /* 104b1185 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b1188 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b118b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 104b118e jmp 0x104b1146 */
  goto L_104b1146;
L_104b1190:;
  /* 104b1190 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b1193 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104b1195 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104b1197 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104b119a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b119d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b11a0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 104b11a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b11a6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104b11a9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b11ad je 0x104b11b5 */
  if (C.zf) goto L_104b11b5;
  /* 104b11af cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b11b3 jne 0x104b11c8 */
  if (!C.zf) goto L_104b11c8;
L_104b11b5:;
  /* 104b11b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b11b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b11ba mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104b11bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104b11bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b11c2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b11c5 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_104b11c8:;
  /* 104b11c8 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_104b11cf:;
  /* 104b11cf cmp dword ptr [0x104ccea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x104ccea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b11d6 jle 0x104b11eb */
  if ((C.zf||C.sf!=C.of)) goto L_104b11eb;
  /* 104b11d8 push 4 */
  push32((uint32_t)(0x4u));
  /* 104b11da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b11dd push edx */
  push32((uint32_t)(EDX));
  /* 104b11de call 0x104a88a0 */
  push32(0x104b11e3u); f_104a88a0();
  /* 104b11e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b11e6 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 104b11e9 jmp 0x104b1200 */
  goto L_104b1200;
L_104b11eb:;
  /* 104b11eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b11ee mov ecx, dword ptr [0x104ccc98] */
  ECX = (r32((uint32_t)(0x104ccc98)));
  /* 104b11f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104b11f6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 104b11fa and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 104b11fd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_104b1200:;
  /* 104b1200 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b1204 je 0x104b122b */
  if (C.zf) goto L_104b122b;
  /* 104b1206 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104b1209 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104b120c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b120f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 104b1213 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 104b1216 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b1219 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104b121b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 104b121d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104b1220 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b1223 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b1226 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 104b1229 jmp 0x104b11cf */
  goto L_104b11cf;
L_104b122b:;
  /* 104b122b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b122f jne 0x104b1238 */
  if (!C.zf) goto L_104b1238;
  /* 104b1231 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104b1234 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 104b1236 jmp 0x104b123b */
  goto L_104b123b;
L_104b1238:;
  /* 104b1238 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_104b123b:;
  /* 104b123b mov esp, ebp */
  ESP = (EBP);
  /* 104b123d pop ebp */
  EBP = (pop32());
  /* 104b123e ret  */
  ESPCHK(0x104b1140u, _esp0);
  ESP += 4; return;
}

/* FUN_10011240 @ 0x104b1240 (17 bytes, 8 insns) */
void f_104b1240(void) {
  FTRACE(0x104b1240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104b1240 push ebp */
  push32((uint32_t)(EBP));
  /* 104b1241 mov ebp, esp */
  EBP = (ESP);
  /* 104b1243 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b1246 push eax */
  push32((uint32_t)(EAX));
  /* 104b1247 call 0x104b1140 */
  push32(0x104b124cu); f_104b1140();
  /* 104b124c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b124f pop ebp */
  EBP = (pop32());
  /* 104b1250 ret  */
  ESPCHK(0x104b1240u, _esp0);
  ESP += 4; return;
}

/* FUN_10011260 @ 0x104b1260 (297 bytes, 106 insns) */
void f_104b1260(void) {
  FTRACE(0x104b1260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104b1260 push ebp */
  push32((uint32_t)(EBP));
  /* 104b1261 mov ebp, esp */
  EBP = (ESP);
  /* 104b1263 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104b1266 push esi */
  push32((uint32_t)(ESI));
L_104b1267:;
  /* 104b1267 cmp dword ptr [0x104ccea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x104ccea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b126e jle 0x104b1287 */
  if ((C.zf||C.sf!=C.of)) goto L_104b1287;
  /* 104b1270 push 8 */
  push32((uint32_t)(0x8u));
  /* 104b1272 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b1275 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104b1277 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 104b1279 push ecx */
  push32((uint32_t)(ECX));
  /* 104b127a call 0x104a88a0 */
  push32(0x104b127fu); f_104a88a0();
  /* 104b127f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b1282 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 104b1285 jmp 0x104b12a0 */
  goto L_104b12a0;
L_104b1287:;
  /* 104b1287 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b128a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b128c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104b128e mov ecx, dword ptr [0x104ccc98] */
  ECX = (r32((uint32_t)(0x104ccc98)));
  /* 104b1294 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104b1296 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 104b129a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 104b129d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_104b12a0:;
  /* 104b12a0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b12a4 je 0x104b12b1 */
  if (C.zf) goto L_104b12b1;
  /* 104b12a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b12a9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b12ac mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 104b12af jmp 0x104b1267 */
  goto L_104b1267;
L_104b12b1:;
  /* 104b12b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b12b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104b12b6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104b12b8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104b12bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b12be add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b12c1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 104b12c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b12c7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 104b12ca cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b12ce je 0x104b12d6 */
  if (C.zf) goto L_104b12d6;
  /* 104b12d0 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b12d4 jne 0x104b12e9 */
  if (!C.zf) goto L_104b12e9;
L_104b12d6:;
  /* 104b12d6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b12d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b12db mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104b12dd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104b12e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b12e3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b12e6 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_104b12e9:;
  /* 104b12e9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 104b12f0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_104b12f7:;
  /* 104b12f7 cmp dword ptr [0x104ccea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x104ccea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b12fe jle 0x104b1313 */
  if ((C.zf||C.sf!=C.of)) goto L_104b1313;
  /* 104b1300 push 4 */
  push32((uint32_t)(0x4u));
  /* 104b1302 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b1305 push edx */
  push32((uint32_t)(EDX));
  /* 104b1306 call 0x104a88a0 */
  push32(0x104b130bu); f_104a88a0();
  /* 104b130b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b130e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 104b1311 jmp 0x104b1328 */
  goto L_104b1328;
L_104b1313:;
  /* 104b1313 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b1316 mov ecx, dword ptr [0x104ccc98] */
  ECX = (r32((uint32_t)(0x104ccc98)));
  /* 104b131c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104b131e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 104b1322 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 104b1325 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_104b1328:;
  /* 104b1328 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b132c je 0x104b1369 */
  if (C.zf) goto L_104b1369;
  /* 104b132e push 0 */
  push32((uint32_t)(0x0u));
  /* 104b1330 push 0xa */
  push32((uint32_t)(0xau));
  /* 104b1332 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104b1335 push eax */
  push32((uint32_t)(EAX));
  /* 104b1336 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b1339 push ecx */
  push32((uint32_t)(ECX));
  /* 104b133a call 0x104b2200 */
  push32(0x104b133fu); f_104b2200();
  /* 104b133f mov ecx, eax */
  ECX = (EAX);
  /* 104b1341 mov esi, edx */
  ESI = (EDX);
  /* 104b1343 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b1346 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104b1349 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 104b134a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b134c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 104b134e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104b1351 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 104b1354 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b1357 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b1359 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104b135b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104b135e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b1361 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b1364 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 104b1367 jmp 0x104b12f7 */
  goto L_104b12f7;
L_104b1369:;
  /* 104b1369 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b136d jne 0x104b137e */
  if (!C.zf) goto L_104b137e;
  /* 104b136f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b1372 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 104b1374 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104b1377 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b137a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 104b137c jmp 0x104b1384 */
  goto L_104b1384;
L_104b137e:;
  /* 104b137e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b1381 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_104b1384:;
  /* 104b1384 pop esi */
  ESI = (pop32());
  /* 104b1385 mov esp, ebp */
  ESP = (EBP);
  /* 104b1387 pop ebp */
  EBP = (pop32());
  /* 104b1388 ret  */
  ESPCHK(0x104b1260u, _esp0);
  ESP += 4; return;
}

/* FUN_10011390 @ 0x104b1390 (61 bytes, 18 insns) */
void f_104b1390(void) {
  FTRACE(0x104b1390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104b1390 push ebp */
  push32((uint32_t)(EBP));
  /* 104b1391 mov ebp, esp */
  EBP = (ESP);
  /* 104b1393 cmp dword ptr [0x104ce778], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce778))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b139a jne 0x104b13cb */
  if (!C.zf) goto L_104b13cb;
  /* 104b139c push 0xb */
  push32((uint32_t)(0xbu));
  /* 104b139e call 0x104a6290 */
  push32(0x104b13a3u); f_104a6290();
  /* 104b13a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b13a6 cmp dword ptr [0x104ce778], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce778))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b13ad jne 0x104b13c1 */
  if (!C.zf) goto L_104b13c1;
  /* 104b13af call 0x104b13f0 */
  push32(0x104b13b4u); f_104b13f0();
  /* 104b13b4 mov eax, dword ptr [0x104ce778] */
  EAX = (r32((uint32_t)(0x104ce778)));
  /* 104b13b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b13bc mov dword ptr [0x104ce778], eax */
  w32((uint32_t)(0x104ce778), (EAX));
L_104b13c1:;
  /* 104b13c1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 104b13c3 call 0x104a6330 */
  push32(0x104b13c8u); f_104a6330();
  /* 104b13c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104b13cb:;
  /* 104b13cb pop ebp */
  EBP = (pop32());
  /* 104b13cc ret  */
  ESPCHK(0x104b1390u, _esp0);
  ESP += 4; return;
}

/* FUN_100113d0 @ 0x104b13d0 (30 bytes, 11 insns) */
void f_104b13d0(void) {
  FTRACE(0x104b13d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104b13d0 push ebp */
  push32((uint32_t)(EBP));
  /* 104b13d1 mov ebp, esp */
  EBP = (ESP);
  /* 104b13d3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 104b13d5 call 0x104a6290 */
  push32(0x104b13dau); f_104a6290();
  /* 104b13da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b13dd call 0x104b13f0 */
  push32(0x104b13e2u); f_104b13f0();
  /* 104b13e2 push 0xb */
  push32((uint32_t)(0xbu));
  /* 104b13e4 call 0x104a6330 */
  push32(0x104b13e9u); f_104a6330();
  /* 104b13e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b13ec pop ebp */
  EBP = (pop32());
  /* 104b13ed ret  */
  ESPCHK(0x104b13d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100113f0 @ 0x104b13f0 (939 bytes, 266 insns) */
void f_104b13f0(void) {
  FTRACE(0x104b13f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104b13f0 push ebp */
  push32((uint32_t)(EBP));
  /* 104b13f1 mov ebp, esp */
  EBP = (ESP);
  /* 104b13f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104b13f6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104b13fd push 0xc */
  push32((uint32_t)(0xcu));
  /* 104b13ff call 0x104a6290 */
  push32(0x104b1404u); f_104a6290();
  /* 104b1404 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b1407 mov dword ptr [0x104ce6c0], 0 */
  w32((uint32_t)(0x104ce6c0), (0x0u));
  /* 104b1411 mov dword ptr [0x104cde38], 0xffffffff */
  w32((uint32_t)(0x104cde38), (0xffffffffu));
  /* 104b141b mov eax, dword ptr [0x104cde38] */
  EAX = (r32((uint32_t)(0x104cde38)));
  /* 104b1420 mov dword ptr [0x104cde28], eax */
  w32((uint32_t)(0x104cde28), (EAX));
  /* 104b1425 push 0x104ca858 */
  push32((uint32_t)(0x104ca858u));
  /* 104b142a call 0x104b2270 */
  push32(0x104b142fu); f_104b2270();
  /* 104b142f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b1432 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104b1435 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b1439 jne 0x104b1573 */
  if (!C.zf) goto L_104b1573;
  /* 104b143f push 0xc */
  push32((uint32_t)(0xcu));
  /* 104b1441 call 0x104a6330 */
  push32(0x104b1446u); f_104a6330();
  /* 104b1446 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b1449 push 0x104ce6c8 */
  push32((uint32_t)(0x104ce6c8u));
  /* 104b144e call dword ptr [0x104d0234] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0234))), 0x104b1454u);
  /* 104b1454 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b1457 je 0x104b156e */
  if (C.zf) goto L_104b156e;
  /* 104b145d mov dword ptr [0x104ce6c0], 1 */
  w32((uint32_t)(0x104ce6c0), (0x1u));
  /* 104b1467 mov ecx, dword ptr [0x104ce6c8] */
  ECX = (r32((uint32_t)(0x104ce6c8)));
  /* 104b146d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104b1470 mov dword ptr [0x104cdd90], ecx */
  w32((uint32_t)(0x104cdd90), (ECX));
  /* 104b1476 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104b1478 mov dx, word ptr [0x104ce70e] */
  DX = (r16((uint32_t)(0x104ce70e)));
  /* 104b147f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104b1481 je 0x104b1499 */
  if (C.zf) goto L_104b1499;
  /* 104b1483 mov eax, dword ptr [0x104ce71c] */
  EAX = (r32((uint32_t)(0x104ce71c)));
  /* 104b1488 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104b148b mov ecx, dword ptr [0x104cdd90] */
  ECX = (r32((uint32_t)(0x104cdd90)));
  /* 104b1491 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b1493 mov dword ptr [0x104cdd90], ecx */
  w32((uint32_t)(0x104cdd90), (ECX));
L_104b1499:;
  /* 104b1499 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104b149b mov dx, word ptr [0x104ce762] */
  DX = (r16((uint32_t)(0x104ce762)));
  /* 104b14a2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104b14a4 je 0x104b14ce */
  if (C.zf) goto L_104b14ce;
  /* 104b14a6 cmp dword ptr [0x104ce770], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce770))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b14ad je 0x104b14ce */
  if (C.zf) goto L_104b14ce;
  /* 104b14af mov dword ptr [0x104cdd94], 1 */
  w32((uint32_t)(0x104cdd94), (0x1u));
  /* 104b14b9 mov eax, dword ptr [0x104ce770] */
  EAX = (r32((uint32_t)(0x104ce770)));
  /* 104b14be sub eax, dword ptr [0x104ce71c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x104ce71c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104b14c4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104b14c7 mov dword ptr [0x104cdd98], eax */
  w32((uint32_t)(0x104cdd98), (EAX));
  /* 104b14cc jmp 0x104b14e2 */
  goto L_104b14e2;
L_104b14ce:;
  /* 104b14ce mov dword ptr [0x104cdd94], 0 */
  w32((uint32_t)(0x104cdd94), (0x0u));
  /* 104b14d8 mov dword ptr [0x104cdd98], 0 */
  w32((uint32_t)(0x104cdd98), (0x0u));
L_104b14e2:;
  /* 104b14e2 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 104b14e5 push ecx */
  push32((uint32_t)(ECX));
  /* 104b14e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 104b14e8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 104b14ea mov edx, dword ptr [0x104cde1c] */
  EDX = (r32((uint32_t)(0x104cde1c)));
  /* 104b14f0 push edx */
  push32((uint32_t)(EDX));
  /* 104b14f1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 104b14f3 push 0x104ce6cc */
  push32((uint32_t)(0x104ce6ccu));
  /* 104b14f8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 104b14fd mov eax, dword ptr [0x104ce630] */
  EAX = (r32((uint32_t)(0x104ce630)));
  /* 104b1502 push eax */
  push32((uint32_t)(EAX));
  /* 104b1503 call dword ptr [0x104d0224] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0224))), 0x104b1509u);
  /* 104b1509 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104b150b je 0x104b151f */
  if (C.zf) goto L_104b151f;
  /* 104b150d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b1511 jne 0x104b151f */
  if (!C.zf) goto L_104b151f;
  /* 104b1513 mov ecx, dword ptr [0x104cde1c] */
  ECX = (r32((uint32_t)(0x104cde1c)));
  /* 104b1519 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 104b151d jmp 0x104b1528 */
  goto L_104b1528;
L_104b151f:;
  /* 104b151f mov edx, dword ptr [0x104cde1c] */
  EDX = (r32((uint32_t)(0x104cde1c)));
  /* 104b1525 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_104b1528:;
  /* 104b1528 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 104b152b push eax */
  push32((uint32_t)(EAX));
  /* 104b152c push 0 */
  push32((uint32_t)(0x0u));
  /* 104b152e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 104b1530 mov ecx, dword ptr [0x104cde20] */
  ECX = (r32((uint32_t)(0x104cde20)));
  /* 104b1536 push ecx */
  push32((uint32_t)(ECX));
  /* 104b1537 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 104b1539 push 0x104ce720 */
  push32((uint32_t)(0x104ce720u));
  /* 104b153e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 104b1543 mov edx, dword ptr [0x104ce630] */
  EDX = (r32((uint32_t)(0x104ce630)));
  /* 104b1549 push edx */
  push32((uint32_t)(EDX));
  /* 104b154a call dword ptr [0x104d0224] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0224))), 0x104b1550u);
  /* 104b1550 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104b1552 je 0x104b1565 */
  if (C.zf) goto L_104b1565;
  /* 104b1554 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b1558 jne 0x104b1565 */
  if (!C.zf) goto L_104b1565;
  /* 104b155a mov eax, dword ptr [0x104cde20] */
  EAX = (r32((uint32_t)(0x104cde20)));
  /* 104b155f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 104b1563 jmp 0x104b156e */
  goto L_104b156e;
L_104b1565:;
  /* 104b1565 mov ecx, dword ptr [0x104cde20] */
  ECX = (r32((uint32_t)(0x104cde20)));
  /* 104b156b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_104b156e:;
  /* 104b156e jmp 0x104b1797 */
  goto L_104b1797;
L_104b1573:;
  /* 104b1573 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b1576 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 104b1579 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104b157b je 0x104b159d */
  if (C.zf) goto L_104b159d;
  /* 104b157d cmp dword ptr [0x104ce774], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce774))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b1584 je 0x104b15ac */
  if (C.zf) goto L_104b15ac;
  /* 104b1586 mov ecx, dword ptr [0x104ce774] */
  ECX = (r32((uint32_t)(0x104ce774)));
  /* 104b158c push ecx */
  push32((uint32_t)(ECX));
  /* 104b158d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b1590 push edx */
  push32((uint32_t)(EDX));
  /* 104b1591 call 0x104ae520 */
  push32(0x104b1596u); f_104ae520();
  /* 104b1596 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b1599 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104b159b jne 0x104b15ac */
  if (!C.zf) goto L_104b15ac;
L_104b159d:;
  /* 104b159d push 0xc */
  push32((uint32_t)(0xcu));
  /* 104b159f call 0x104a6330 */
  push32(0x104b15a4u); f_104a6330();
  /* 104b15a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b15a7 jmp 0x104b1797 */
  goto L_104b1797;
L_104b15ac:;
  /* 104b15ac push 2 */
  push32((uint32_t)(0x2u));
  /* 104b15ae mov eax, dword ptr [0x104ce774] */
  EAX = (r32((uint32_t)(0x104ce774)));
  /* 104b15b3 push eax */
  push32((uint32_t)(EAX));
  /* 104b15b4 call 0x104a3320 */
  push32(0x104b15b9u); f_104a3320();
  /* 104b15b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b15bc push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 104b15c1 push 0x104ca850 */
  push32((uint32_t)(0x104ca850u));
  /* 104b15c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 104b15c8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b15cb push ecx */
  push32((uint32_t)(ECX));
  /* 104b15cc call 0x104a56c0 */
  push32(0x104b15d1u); f_104a56c0();
  /* 104b15d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b15d4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b15d7 push eax */
  push32((uint32_t)(EAX));
  /* 104b15d8 call 0x104a2890 */
  push32(0x104b15ddu); f_104a2890();
  /* 104b15dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b15e0 mov dword ptr [0x104ce774], eax */
  w32((uint32_t)(0x104ce774), (EAX));
  /* 104b15e5 cmp dword ptr [0x104ce774], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce774))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b15ec jne 0x104b15fd */
  if (!C.zf) goto L_104b15fd;
  /* 104b15ee push 0xc */
  push32((uint32_t)(0xcu));
  /* 104b15f0 call 0x104a6330 */
  push32(0x104b15f5u); f_104a6330();
  /* 104b15f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b15f8 jmp 0x104b1797 */
  goto L_104b1797;
L_104b15fd:;
  /* 104b15fd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b1600 push edx */
  push32((uint32_t)(EDX));
  /* 104b1601 mov eax, dword ptr [0x104ce774] */
  EAX = (r32((uint32_t)(0x104ce774)));
  /* 104b1606 push eax */
  push32((uint32_t)(EAX));
  /* 104b1607 call 0x104a5840 */
  push32(0x104b160cu); f_104a5840();
  /* 104b160c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b160f push 0xc */
  push32((uint32_t)(0xcu));
  /* 104b1611 call 0x104a6330 */
  push32(0x104b1616u); f_104a6330();
  /* 104b1616 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b1619 push 3 */
  push32((uint32_t)(0x3u));
  /* 104b161b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b161e push ecx */
  push32((uint32_t)(ECX));
  /* 104b161f mov edx, dword ptr [0x104cde1c] */
  EDX = (r32((uint32_t)(0x104cde1c)));
  /* 104b1625 push edx */
  push32((uint32_t)(EDX));
  /* 104b1626 call 0x104a60b0 */
  push32(0x104b162bu); f_104a60b0();
  /* 104b162b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b162e mov eax, dword ptr [0x104cde1c] */
  EAX = (r32((uint32_t)(0x104cde1c)));
  /* 104b1633 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 104b1637 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b163a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b163d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104b1640 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b1643 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 104b1646 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b1649 jne 0x104b165d */
  if (!C.zf) goto L_104b165d;
  /* 104b164b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b164e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b1651 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104b1654 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b1657 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b165a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_104b165d:;
  /* 104b165d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b1660 push eax */
  push32((uint32_t)(EAX));
  /* 104b1661 call 0x104b1140 */
  push32(0x104b1666u); f_104b1140();
  /* 104b1666 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b1669 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104b166f mov dword ptr [0x104cdd90], eax */
  w32((uint32_t)(0x104cdd90), (EAX));
L_104b1674:;
  /* 104b1674 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b1677 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104b167a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b167d je 0x104b1695 */
  if (C.zf) goto L_104b1695;
  /* 104b167f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b1682 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104b1685 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b1688 jl 0x104b16a0 */
  if ((C.sf!=C.of)) goto L_104b16a0;
  /* 104b168a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b168d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 104b1690 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b1693 jg 0x104b16a0 */
  if ((!C.zf&&C.sf==C.of)) goto L_104b16a0;
L_104b1695:;
  /* 104b1695 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b1698 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b169b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104b169e jmp 0x104b1674 */
  goto L_104b1674;
L_104b16a0:;
  /* 104b16a0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b16a3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 104b16a6 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b16a9 jne 0x104b1745 */
  if (!C.zf) goto L_104b1745;
  /* 104b16af mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b16b2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b16b5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104b16b8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b16bb push edx */
  push32((uint32_t)(EDX));
  /* 104b16bc call 0x104b1140 */
  push32(0x104b16c1u); f_104b1140();
  /* 104b16c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b16c4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104b16c7 mov ecx, dword ptr [0x104cdd90] */
  ECX = (r32((uint32_t)(0x104cdd90)));
  /* 104b16cd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b16cf mov dword ptr [0x104cdd90], ecx */
  w32((uint32_t)(0x104cdd90), (ECX));
L_104b16d5:;
  /* 104b16d5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b16d8 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 104b16db cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b16de jl 0x104b16f6 */
  if ((C.sf!=C.of)) goto L_104b16f6;
  /* 104b16e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b16e3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104b16e6 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b16e9 jg 0x104b16f6 */
  if ((!C.zf&&C.sf==C.of)) goto L_104b16f6;
  /* 104b16eb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b16ee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b16f1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104b16f4 jmp 0x104b16d5 */
  goto L_104b16d5;
L_104b16f6:;
  /* 104b16f6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b16f9 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104b16fc cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b16ff jne 0x104b1745 */
  if (!C.zf) goto L_104b1745;
  /* 104b1701 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b1704 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b1707 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104b170a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b170d push ecx */
  push32((uint32_t)(ECX));
  /* 104b170e call 0x104b1140 */
  push32(0x104b1713u); f_104b1140();
  /* 104b1713 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b1716 mov edx, dword ptr [0x104cdd90] */
  EDX = (r32((uint32_t)(0x104cdd90)));
  /* 104b171c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b171e mov dword ptr [0x104cdd90], edx */
  w32((uint32_t)(0x104cdd90), (EDX));
L_104b1724:;
  /* 104b1724 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b1727 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104b172a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b172d jl 0x104b1745 */
  if ((C.sf!=C.of)) goto L_104b1745;
  /* 104b172f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b1732 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 104b1735 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b1738 jg 0x104b1745 */
  if ((!C.zf&&C.sf==C.of)) goto L_104b1745;
  /* 104b173a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b173d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b1740 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104b1743 jmp 0x104b1724 */
  goto L_104b1724;
L_104b1745:;
  /* 104b1745 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b1749 je 0x104b1759 */
  if (C.zf) goto L_104b1759;
  /* 104b174b mov edx, dword ptr [0x104cdd90] */
  EDX = (r32((uint32_t)(0x104cdd90)));
  /* 104b1751 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 104b1753 mov dword ptr [0x104cdd90], edx */
  w32((uint32_t)(0x104cdd90), (EDX));
L_104b1759:;
  /* 104b1759 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b175c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104b175f mov dword ptr [0x104cdd94], ecx */
  w32((uint32_t)(0x104cdd94), (ECX));
  /* 104b1765 cmp dword ptr [0x104cdd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104cdd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b176c je 0x104b178e */
  if (C.zf) goto L_104b178e;
  /* 104b176e push 3 */
  push32((uint32_t)(0x3u));
  /* 104b1770 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b1773 push edx */
  push32((uint32_t)(EDX));
  /* 104b1774 mov eax, dword ptr [0x104cde20] */
  EAX = (r32((uint32_t)(0x104cde20)));
  /* 104b1779 push eax */
  push32((uint32_t)(EAX));
  /* 104b177a call 0x104a60b0 */
  push32(0x104b177fu); f_104a60b0();
  /* 104b177f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b1782 mov ecx, dword ptr [0x104cde20] */
  ECX = (r32((uint32_t)(0x104cde20)));
  /* 104b1788 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 104b178c jmp 0x104b1797 */
  goto L_104b1797;
L_104b178e:;
  /* 104b178e mov edx, dword ptr [0x104cde20] */
  EDX = (r32((uint32_t)(0x104cde20)));
  /* 104b1794 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_104b1797:;
  /* 104b1797 mov esp, ebp */
  ESP = (EBP);
  /* 104b1799 pop ebp */
  EBP = (pop32());
  /* 104b179a ret  */
  ESPCHK(0x104b13f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100117a0 @ 0x104b17a0 (46 bytes, 18 insns) */
void f_104b17a0(void) {
  FTRACE(0x104b17a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104b17a0 push ebp */
  push32((uint32_t)(EBP));
  /* 104b17a1 mov ebp, esp */
  EBP = (ESP);
  /* 104b17a3 push ecx */
  push32((uint32_t)(ECX));
  /* 104b17a4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 104b17a6 call 0x104a6290 */
  push32(0x104b17abu); f_104a6290();
  /* 104b17ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b17ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b17b1 push eax */
  push32((uint32_t)(EAX));
  /* 104b17b2 call 0x104b17d0 */
  push32(0x104b17b7u); f_104b17d0();
  /* 104b17b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b17ba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104b17bd push 0xb */
  push32((uint32_t)(0xbu));
  /* 104b17bf call 0x104a6330 */
  push32(0x104b17c4u); f_104a6330();
  /* 104b17c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b17c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b17ca mov esp, ebp */
  ESP = (EBP);
  /* 104b17cc pop ebp */
  EBP = (pop32());
  /* 104b17cd ret  */
  ESPCHK(0x104b17a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100117d0 @ 0x104b17d0 (762 bytes, 246 insns) */
void f_104b17d0(void) {
  FTRACE(0x104b17d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104b17d0 push ebp */
  push32((uint32_t)(EBP));
  /* 104b17d1 mov ebp, esp */
  EBP = (ESP);
  /* 104b17d3 push ecx */
  push32((uint32_t)(ECX));
  /* 104b17d4 cmp dword ptr [0x104cdd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104cdd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b17db jne 0x104b17e4 */
  if (!C.zf) goto L_104b17e4;
  /* 104b17dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b17df jmp 0x104b1ac6 */
  goto L_104b1ac6;
L_104b17e4:;
  /* 104b17e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b17e7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 104b17ea cmp ecx, dword ptr [0x104cde28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x104cde28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b17f0 jne 0x104b1804 */
  if (!C.zf) goto L_104b1804;
  /* 104b17f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b17f5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 104b17f8 cmp eax, dword ptr [0x104cde38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x104cde38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b17fe je 0x104b19cb */
  if (C.zf) goto L_104b19cb;
L_104b1804:;
  /* 104b1804 cmp dword ptr [0x104ce6c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce6c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b180b je 0x104b1985 */
  if (C.zf) goto L_104b1985;
  /* 104b1811 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104b1813 mov cx, word ptr [0x104ce760] */
  CX = (r16((uint32_t)(0x104ce760)));
  /* 104b181a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104b181c jne 0x104b1879 */
  if (!C.zf) goto L_104b1879;
  /* 104b181e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104b1820 mov dx, word ptr [0x104ce76e] */
  DX = (r16((uint32_t)(0x104ce76e)));
  /* 104b1827 push edx */
  push32((uint32_t)(EDX));
  /* 104b1828 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b182a mov ax, word ptr [0x104ce76c] */
  AX = (r16((uint32_t)(0x104ce76c)));
  /* 104b1830 push eax */
  push32((uint32_t)(EAX));
  /* 104b1831 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104b1833 mov cx, word ptr [0x104ce76a] */
  CX = (r16((uint32_t)(0x104ce76a)));
  /* 104b183a push ecx */
  push32((uint32_t)(ECX));
  /* 104b183b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104b183d mov dx, word ptr [0x104ce768] */
  DX = (r16((uint32_t)(0x104ce768)));
  /* 104b1844 push edx */
  push32((uint32_t)(EDX));
  /* 104b1845 push 0 */
  push32((uint32_t)(0x0u));
  /* 104b1847 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b1849 mov ax, word ptr [0x104ce764] */
  AX = (r16((uint32_t)(0x104ce764)));
  /* 104b184f push eax */
  push32((uint32_t)(EAX));
  /* 104b1850 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104b1852 mov cx, word ptr [0x104ce766] */
  CX = (r16((uint32_t)(0x104ce766)));
  /* 104b1859 push ecx */
  push32((uint32_t)(ECX));
  /* 104b185a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104b185c mov dx, word ptr [0x104ce762] */
  DX = (r16((uint32_t)(0x104ce762)));
  /* 104b1863 push edx */
  push32((uint32_t)(EDX));
  /* 104b1864 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b1867 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 104b186a push ecx */
  push32((uint32_t)(ECX));
  /* 104b186b push 1 */
  push32((uint32_t)(0x1u));
  /* 104b186d push 1 */
  push32((uint32_t)(0x1u));
  /* 104b186f call 0x104b1ad0 */
  push32(0x104b1874u); f_104b1ad0();
  /* 104b1874 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b1877 jmp 0x104b18ca */
  goto L_104b18ca;
L_104b1879:;
  /* 104b1879 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104b187b mov dx, word ptr [0x104ce76e] */
  DX = (r16((uint32_t)(0x104ce76e)));
  /* 104b1882 push edx */
  push32((uint32_t)(EDX));
  /* 104b1883 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b1885 mov ax, word ptr [0x104ce76c] */
  AX = (r16((uint32_t)(0x104ce76c)));
  /* 104b188b push eax */
  push32((uint32_t)(EAX));
  /* 104b188c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104b188e mov cx, word ptr [0x104ce76a] */
  CX = (r16((uint32_t)(0x104ce76a)));
  /* 104b1895 push ecx */
  push32((uint32_t)(ECX));
  /* 104b1896 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104b1898 mov dx, word ptr [0x104ce768] */
  DX = (r16((uint32_t)(0x104ce768)));
  /* 104b189f push edx */
  push32((uint32_t)(EDX));
  /* 104b18a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b18a2 mov ax, word ptr [0x104ce766] */
  AX = (r16((uint32_t)(0x104ce766)));
  /* 104b18a8 push eax */
  push32((uint32_t)(EAX));
  /* 104b18a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 104b18ab push 0 */
  push32((uint32_t)(0x0u));
  /* 104b18ad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104b18af mov cx, word ptr [0x104ce762] */
  CX = (r16((uint32_t)(0x104ce762)));
  /* 104b18b6 push ecx */
  push32((uint32_t)(ECX));
  /* 104b18b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b18ba mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 104b18bd push eax */
  push32((uint32_t)(EAX));
  /* 104b18be push 0 */
  push32((uint32_t)(0x0u));
  /* 104b18c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 104b18c2 call 0x104b1ad0 */
  push32(0x104b18c7u); f_104b1ad0();
  /* 104b18c7 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104b18ca:;
  /* 104b18ca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104b18cc mov cx, word ptr [0x104ce70c] */
  CX = (r16((uint32_t)(0x104ce70c)));
  /* 104b18d3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104b18d5 jne 0x104b1932 */
  if (!C.zf) goto L_104b1932;
  /* 104b18d7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104b18d9 mov dx, word ptr [0x104ce71a] */
  DX = (r16((uint32_t)(0x104ce71a)));
  /* 104b18e0 push edx */
  push32((uint32_t)(EDX));
  /* 104b18e1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b18e3 mov ax, word ptr [0x104ce718] */
  AX = (r16((uint32_t)(0x104ce718)));
  /* 104b18e9 push eax */
  push32((uint32_t)(EAX));
  /* 104b18ea xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104b18ec mov cx, word ptr [0x104ce716] */
  CX = (r16((uint32_t)(0x104ce716)));
  /* 104b18f3 push ecx */
  push32((uint32_t)(ECX));
  /* 104b18f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104b18f6 mov dx, word ptr [0x104ce714] */
  DX = (r16((uint32_t)(0x104ce714)));
  /* 104b18fd push edx */
  push32((uint32_t)(EDX));
  /* 104b18fe push 0 */
  push32((uint32_t)(0x0u));
  /* 104b1900 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b1902 mov ax, word ptr [0x104ce710] */
  AX = (r16((uint32_t)(0x104ce710)));
  /* 104b1908 push eax */
  push32((uint32_t)(EAX));
  /* 104b1909 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104b190b mov cx, word ptr [0x104ce712] */
  CX = (r16((uint32_t)(0x104ce712)));
  /* 104b1912 push ecx */
  push32((uint32_t)(ECX));
  /* 104b1913 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104b1915 mov dx, word ptr [0x104ce70e] */
  DX = (r16((uint32_t)(0x104ce70e)));
  /* 104b191c push edx */
  push32((uint32_t)(EDX));
  /* 104b191d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b1920 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 104b1923 push ecx */
  push32((uint32_t)(ECX));
  /* 104b1924 push 1 */
  push32((uint32_t)(0x1u));
  /* 104b1926 push 0 */
  push32((uint32_t)(0x0u));
  /* 104b1928 call 0x104b1ad0 */
  push32(0x104b192du); f_104b1ad0();
  /* 104b192d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b1930 jmp 0x104b1983 */
  goto L_104b1983;
L_104b1932:;
  /* 104b1932 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104b1934 mov dx, word ptr [0x104ce71a] */
  DX = (r16((uint32_t)(0x104ce71a)));
  /* 104b193b push edx */
  push32((uint32_t)(EDX));
  /* 104b193c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b193e mov ax, word ptr [0x104ce718] */
  AX = (r16((uint32_t)(0x104ce718)));
  /* 104b1944 push eax */
  push32((uint32_t)(EAX));
  /* 104b1945 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104b1947 mov cx, word ptr [0x104ce716] */
  CX = (r16((uint32_t)(0x104ce716)));
  /* 104b194e push ecx */
  push32((uint32_t)(ECX));
  /* 104b194f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104b1951 mov dx, word ptr [0x104ce714] */
  DX = (r16((uint32_t)(0x104ce714)));
  /* 104b1958 push edx */
  push32((uint32_t)(EDX));
  /* 104b1959 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b195b mov ax, word ptr [0x104ce712] */
  AX = (r16((uint32_t)(0x104ce712)));
  /* 104b1961 push eax */
  push32((uint32_t)(EAX));
  /* 104b1962 push 0 */
  push32((uint32_t)(0x0u));
  /* 104b1964 push 0 */
  push32((uint32_t)(0x0u));
  /* 104b1966 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104b1968 mov cx, word ptr [0x104ce70e] */
  CX = (r16((uint32_t)(0x104ce70e)));
  /* 104b196f push ecx */
  push32((uint32_t)(ECX));
  /* 104b1970 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b1973 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 104b1976 push eax */
  push32((uint32_t)(EAX));
  /* 104b1977 push 0 */
  push32((uint32_t)(0x0u));
  /* 104b1979 push 0 */
  push32((uint32_t)(0x0u));
  /* 104b197b call 0x104b1ad0 */
  push32(0x104b1980u); f_104b1ad0();
  /* 104b1980 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104b1983:;
  /* 104b1983 jmp 0x104b19cb */
  goto L_104b19cb;
L_104b1985:;
  /* 104b1985 push 0 */
  push32((uint32_t)(0x0u));
  /* 104b1987 push 0 */
  push32((uint32_t)(0x0u));
  /* 104b1989 push 0 */
  push32((uint32_t)(0x0u));
  /* 104b198b push 2 */
  push32((uint32_t)(0x2u));
  /* 104b198d push 0 */
  push32((uint32_t)(0x0u));
  /* 104b198f push 0 */
  push32((uint32_t)(0x0u));
  /* 104b1991 push 1 */
  push32((uint32_t)(0x1u));
  /* 104b1993 push 4 */
  push32((uint32_t)(0x4u));
  /* 104b1995 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b1998 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 104b199b push edx */
  push32((uint32_t)(EDX));
  /* 104b199c push 1 */
  push32((uint32_t)(0x1u));
  /* 104b199e push 1 */
  push32((uint32_t)(0x1u));
  /* 104b19a0 call 0x104b1ad0 */
  push32(0x104b19a5u); f_104b1ad0();
  /* 104b19a5 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b19a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 104b19aa push 0 */
  push32((uint32_t)(0x0u));
  /* 104b19ac push 0 */
  push32((uint32_t)(0x0u));
  /* 104b19ae push 2 */
  push32((uint32_t)(0x2u));
  /* 104b19b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 104b19b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 104b19b4 push 5 */
  push32((uint32_t)(0x5u));
  /* 104b19b6 push 0xa */
  push32((uint32_t)(0xau));
  /* 104b19b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b19bb mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 104b19be push ecx */
  push32((uint32_t)(ECX));
  /* 104b19bf push 1 */
  push32((uint32_t)(0x1u));
  /* 104b19c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 104b19c3 call 0x104b1ad0 */
  push32(0x104b19c8u); f_104b1ad0();
  /* 104b19c8 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104b19cb:;
  /* 104b19cb mov edx, dword ptr [0x104cde2c] */
  EDX = (r32((uint32_t)(0x104cde2c)));
  /* 104b19d1 cmp edx, dword ptr [0x104cde3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x104cde3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b19d7 jge 0x104b1a24 */
  if ((C.sf==C.of)) goto L_104b1a24;
  /* 104b19d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b19dc mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 104b19df cmp ecx, dword ptr [0x104cde2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x104cde2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b19e5 jl 0x104b19f5 */
  if ((C.sf!=C.of)) goto L_104b19f5;
  /* 104b19e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b19ea mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 104b19ed cmp eax, dword ptr [0x104cde3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x104cde3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b19f3 jle 0x104b19fc */
  if ((C.zf||C.sf!=C.of)) goto L_104b19fc;
L_104b19f5:;
  /* 104b19f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b19f7 jmp 0x104b1ac6 */
  goto L_104b1ac6;
L_104b19fc:;
  /* 104b19fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b19ff mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 104b1a02 cmp edx, dword ptr [0x104cde2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x104cde2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b1a08 jle 0x104b1a22 */
  if ((C.zf||C.sf!=C.of)) goto L_104b1a22;
  /* 104b1a0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b1a0d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 104b1a10 cmp ecx, dword ptr [0x104cde3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x104cde3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b1a16 jge 0x104b1a22 */
  if ((C.sf==C.of)) goto L_104b1a22;
  /* 104b1a18 mov eax, 1 */
  EAX = (0x1u);
  /* 104b1a1d jmp 0x104b1ac6 */
  goto L_104b1ac6;
L_104b1a22:;
  /* 104b1a22 jmp 0x104b1a67 */
  goto L_104b1a67;
L_104b1a24:;
  /* 104b1a24 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b1a27 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 104b1a2a cmp eax, dword ptr [0x104cde3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x104cde3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b1a30 jl 0x104b1a40 */
  if ((C.sf!=C.of)) goto L_104b1a40;
  /* 104b1a32 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b1a35 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 104b1a38 cmp edx, dword ptr [0x104cde2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x104cde2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b1a3e jle 0x104b1a47 */
  if ((C.zf||C.sf!=C.of)) goto L_104b1a47;
L_104b1a40:;
  /* 104b1a40 mov eax, 1 */
  EAX = (0x1u);
  /* 104b1a45 jmp 0x104b1ac6 */
  goto L_104b1ac6;
L_104b1a47:;
  /* 104b1a47 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b1a4a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 104b1a4d cmp ecx, dword ptr [0x104cde3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x104cde3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b1a53 jle 0x104b1a67 */
  if ((C.zf||C.sf!=C.of)) goto L_104b1a67;
  /* 104b1a55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b1a58 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 104b1a5b cmp eax, dword ptr [0x104cde2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x104cde2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b1a61 jge 0x104b1a67 */
  if ((C.sf==C.of)) goto L_104b1a67;
  /* 104b1a63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b1a65 jmp 0x104b1ac6 */
  goto L_104b1ac6;
L_104b1a67:;
  /* 104b1a67 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b1a6a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 104b1a6d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104b1a70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b1a73 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104b1a75 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b1a77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b1a7a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 104b1a7d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104b1a83 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b1a85 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104b1a8b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104b1a8e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b1a91 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 104b1a94 cmp edx, dword ptr [0x104cde2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x104cde2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b1a9a jne 0x104b1ab2 */
  if (!C.zf) goto L_104b1ab2;
  /* 104b1a9c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b1a9f cmp eax, dword ptr [0x104cde30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x104cde30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b1aa5 jl 0x104b1aae */
  if ((C.sf!=C.of)) goto L_104b1aae;
  /* 104b1aa7 mov eax, 1 */
  EAX = (0x1u);
  /* 104b1aac jmp 0x104b1ac6 */
  goto L_104b1ac6;
L_104b1aae:;
  /* 104b1aae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b1ab0 jmp 0x104b1ac6 */
  goto L_104b1ac6;
L_104b1ab2:;
  /* 104b1ab2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b1ab5 cmp ecx, dword ptr [0x104cde40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x104cde40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b1abb jge 0x104b1ac4 */
  if ((C.sf==C.of)) goto L_104b1ac4;
  /* 104b1abd mov eax, 1 */
  EAX = (0x1u);
  /* 104b1ac2 jmp 0x104b1ac6 */
  goto L_104b1ac6;
L_104b1ac4:;
  /* 104b1ac4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104b1ac6:;
  /* 104b1ac6 mov esp, ebp */
  ESP = (EBP);
  /* 104b1ac8 pop ebp */
  EBP = (pop32());
  /* 104b1ac9 ret  */
  ESPCHK(0x104b17d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ad0 @ 0x104b1ad0 (504 bytes, 145 insns) */
void f_104b1ad0(void) {
  FTRACE(0x104b1ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104b1ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 104b1ad1 mov ebp, esp */
  EBP = (ESP);
  /* 104b1ad3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104b1ad6 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b1ada jne 0x104b1bac */
  if (!C.zf) goto L_104b1bac;
  /* 104b1ae0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b1ae3 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 104b1ae6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104b1ae8 jne 0x104b1af9 */
  if (!C.zf) goto L_104b1af9;
  /* 104b1aea mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104b1aed mov edx, dword ptr [ecx*4 + 0x104cde4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x104cde4c)));
  /* 104b1af4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 104b1af7 jmp 0x104b1b06 */
  goto L_104b1b06;
L_104b1af9:;
  /* 104b1af9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104b1afc mov ecx, dword ptr [eax*4 + 0x104cde80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x104cde80)));
  /* 104b1b03 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_104b1b06:;
  /* 104b1b06 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b1b09 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b1b0c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 104b1b0f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b1b12 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104b1b15 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104b1b1b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104b1b1e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b1b20 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b1b23 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104b1b26 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 104b1b29 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 104b1b2d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 104b1b2e mov ecx, 7 */
  ECX = (0x7u);
  /* 104b1b33 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 104b1b35 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104b1b38 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b1b3b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b1b3e jge 0x104b1b59 */
  if ((C.sf==C.of)) goto L_104b1b59;
  /* 104b1b40 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 104b1b43 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104b1b46 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 104b1b49 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104b1b4c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104b1b4f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b1b52 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b1b54 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104b1b57 jmp 0x104b1b6d */
  goto L_104b1b6d;
L_104b1b59:;
  /* 104b1b59 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 104b1b5c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104b1b5f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104b1b62 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104b1b65 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b1b68 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b1b6a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_104b1b6d:;
  /* 104b1b6d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b1b71 jne 0x104b1baa */
  if (!C.zf) goto L_104b1baa;
  /* 104b1b73 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b1b76 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 104b1b79 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104b1b7b jne 0x104b1b8c */
  if (!C.zf) goto L_104b1b8c;
  /* 104b1b7d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104b1b80 mov eax, dword ptr [edx*4 + 0x104cde50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x104cde50)));
  /* 104b1b87 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 104b1b8a jmp 0x104b1b99 */
  goto L_104b1b99;
L_104b1b8c:;
  /* 104b1b8c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104b1b8f mov edx, dword ptr [ecx*4 + 0x104cde84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x104cde84)));
  /* 104b1b96 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_104b1b99:;
  /* 104b1b99 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104b1b9c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b1b9f jle 0x104b1baa */
  if ((C.zf||C.sf!=C.of)) goto L_104b1baa;
  /* 104b1ba1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104b1ba4 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104b1ba7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_104b1baa:;
  /* 104b1baa jmp 0x104b1be1 */
  goto L_104b1be1;
L_104b1bac:;
  /* 104b1bac mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b1baf and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 104b1bb2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104b1bb4 jne 0x104b1bc5 */
  if (!C.zf) goto L_104b1bc5;
  /* 104b1bb6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104b1bb9 mov ecx, dword ptr [eax*4 + 0x104cde4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x104cde4c)));
  /* 104b1bc0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 104b1bc3 jmp 0x104b1bd2 */
  goto L_104b1bd2;
L_104b1bc5:;
  /* 104b1bc5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104b1bc8 mov eax, dword ptr [edx*4 + 0x104cde80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x104cde80)));
  /* 104b1bcf mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_104b1bd2:;
  /* 104b1bd2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104b1bd5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104b1bd8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104b1bdb add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b1bde mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_104b1be1:;
  /* 104b1be1 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b1be5 jne 0x104b1c21 */
  if (!C.zf) goto L_104b1c21;
  /* 104b1be7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104b1bea mov dword ptr [0x104cde2c], eax */
  w32((uint32_t)(0x104cde2c), (EAX));
  /* 104b1bef mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 104b1bf2 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104b1bf5 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 104b1bf8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b1bfa imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104b1bfd mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 104b1c00 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b1c02 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104b1c08 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 104b1c0b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b1c0d mov dword ptr [0x104cde30], ecx */
  w32((uint32_t)(0x104cde30), (ECX));
  /* 104b1c13 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b1c16 mov dword ptr [0x104cde28], edx */
  w32((uint32_t)(0x104cde28), (EDX));
  /* 104b1c1c jmp 0x104b1cc4 */
  goto L_104b1cc4;
L_104b1c21:;
  /* 104b1c21 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104b1c24 mov dword ptr [0x104cde3c], eax */
  w32((uint32_t)(0x104cde3c), (EAX));
  /* 104b1c29 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 104b1c2c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104b1c2f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 104b1c32 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b1c34 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104b1c37 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 104b1c3a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b1c3c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104b1c42 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 104b1c45 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b1c47 mov dword ptr [0x104cde40], ecx */
  w32((uint32_t)(0x104cde40), (ECX));
  /* 104b1c4d mov edx, dword ptr [0x104cdd98] */
  EDX = (r32((uint32_t)(0x104cdd98)));
  /* 104b1c53 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104b1c59 mov eax, dword ptr [0x104cde40] */
  EAX = (r32((uint32_t)(0x104cde40)));
  /* 104b1c5e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b1c60 mov dword ptr [0x104cde40], eax */
  w32((uint32_t)(0x104cde40), (EAX));
  /* 104b1c65 cmp dword ptr [0x104cde40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104cde40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b1c6c jge 0x104b1c91 */
  if ((C.sf==C.of)) goto L_104b1c91;
  /* 104b1c6e mov ecx, dword ptr [0x104cde40] */
  ECX = (r32((uint32_t)(0x104cde40)));
  /* 104b1c74 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b1c7a mov dword ptr [0x104cde40], ecx */
  w32((uint32_t)(0x104cde40), (ECX));
  /* 104b1c80 mov edx, dword ptr [0x104cde3c] */
  EDX = (r32((uint32_t)(0x104cde3c)));
  /* 104b1c86 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104b1c89 mov dword ptr [0x104cde3c], edx */
  w32((uint32_t)(0x104cde3c), (EDX));
  /* 104b1c8f jmp 0x104b1cbb */
  goto L_104b1cbb;
L_104b1c91:;
  /* 104b1c91 cmp dword ptr [0x104cde40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x104cde40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b1c9b jl 0x104b1cbb */
  if ((C.sf!=C.of)) goto L_104b1cbb;
  /* 104b1c9d mov eax, dword ptr [0x104cde40] */
  EAX = (r32((uint32_t)(0x104cde40)));
  /* 104b1ca2 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104b1ca7 mov dword ptr [0x104cde40], eax */
  w32((uint32_t)(0x104cde40), (EAX));
  /* 104b1cac mov ecx, dword ptr [0x104cde3c] */
  ECX = (r32((uint32_t)(0x104cde3c)));
  /* 104b1cb2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b1cb5 mov dword ptr [0x104cde3c], ecx */
  w32((uint32_t)(0x104cde3c), (ECX));
L_104b1cbb:;
  /* 104b1cbb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b1cbe mov dword ptr [0x104cde38], edx */
  w32((uint32_t)(0x104cde38), (EDX));
L_104b1cc4:;
  /* 104b1cc4 mov esp, ebp */
  ESP = (EBP);
  /* 104b1cc6 pop ebp */
  EBP = (pop32());
  /* 104b1cc7 ret  */
  ESPCHK(0x104b1ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011cd0 @ 0x104b1cd0 (382 bytes, 135 insns) */
void f_104b1cd0(void) {
  FTRACE(0x104b1cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104b1cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 104b1cd1 mov ebp, esp */
  EBP = (ESP);
  /* 104b1cd3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 104b1cd5 push 0x104ca860 */
  push32((uint32_t)(0x104ca860u));
  /* 104b1cda push 0x104ab998 */
  push32((uint32_t)(0x104ab998u));
  /* 104b1cdf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 104b1ce5 push eax */
  push32((uint32_t)(EAX));
  /* 104b1ce6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 104b1ced add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b1cf0 push ebx */
  push32((uint32_t)(EBX));
  /* 104b1cf1 push esi */
  push32((uint32_t)(ESI));
  /* 104b1cf2 push edi */
  push32((uint32_t)(EDI));
  /* 104b1cf3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 104b1cf6 cmp dword ptr [0x104ce77c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce77c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b1cfd jne 0x104b1d42 */
  if (!C.zf) goto L_104b1d42;
  /* 104b1cff push 0 */
  push32((uint32_t)(0x0u));
  /* 104b1d01 push 0 */
  push32((uint32_t)(0x0u));
  /* 104b1d03 push 1 */
  push32((uint32_t)(0x1u));
  /* 104b1d05 push 0 */
  push32((uint32_t)(0x0u));
  /* 104b1d07 call dword ptr [0x104d0230] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0230))), 0x104b1d0du);
  /* 104b1d0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104b1d0f je 0x104b1d1d */
  if (C.zf) goto L_104b1d1d;
  /* 104b1d11 mov dword ptr [0x104ce77c], 1 */
  w32((uint32_t)(0x104ce77c), (0x1u));
  /* 104b1d1b jmp 0x104b1d42 */
  goto L_104b1d42;
L_104b1d1d:;
  /* 104b1d1d push 0 */
  push32((uint32_t)(0x0u));
  /* 104b1d1f push 0 */
  push32((uint32_t)(0x0u));
  /* 104b1d21 push 1 */
  push32((uint32_t)(0x1u));
  /* 104b1d23 push 0 */
  push32((uint32_t)(0x0u));
  /* 104b1d25 call dword ptr [0x104d0248] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0248))), 0x104b1d2bu);
  /* 104b1d2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104b1d2d je 0x104b1d3b */
  if (C.zf) goto L_104b1d3b;
  /* 104b1d2f mov dword ptr [0x104ce77c], 2 */
  w32((uint32_t)(0x104ce77c), (0x2u));
  /* 104b1d39 jmp 0x104b1d42 */
  goto L_104b1d42;
L_104b1d3b:;
  /* 104b1d3b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b1d3d jmp 0x104b1e51 */
  goto L_104b1e51;
L_104b1d42:;
  /* 104b1d42 cmp dword ptr [0x104ce77c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x104ce77c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b1d49 jne 0x104b1d66 */
  if (!C.zf) goto L_104b1d66;
  /* 104b1d4b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104b1d4e push eax */
  push32((uint32_t)(EAX));
  /* 104b1d4f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b1d52 push ecx */
  push32((uint32_t)(ECX));
  /* 104b1d53 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104b1d56 push edx */
  push32((uint32_t)(EDX));
  /* 104b1d57 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b1d5a push eax */
  push32((uint32_t)(EAX));
  /* 104b1d5b call dword ptr [0x104d0230] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0230))), 0x104b1d61u);
  /* 104b1d61 jmp 0x104b1e51 */
  goto L_104b1e51;
L_104b1d66:;
  /* 104b1d66 cmp dword ptr [0x104ce77c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x104ce77c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b1d6d jne 0x104b1e4f */
  if (!C.zf) goto L_104b1e4f;
  /* 104b1d73 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b1d77 jne 0x104b1d82 */
  if (!C.zf) goto L_104b1d82;
  /* 104b1d79 mov ecx, dword ptr [0x104ce630] */
  ECX = (r32((uint32_t)(0x104ce630)));
  /* 104b1d7f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_104b1d82:;
  /* 104b1d82 push 0 */
  push32((uint32_t)(0x0u));
  /* 104b1d84 push 0 */
  push32((uint32_t)(0x0u));
  /* 104b1d86 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104b1d89 push edx */
  push32((uint32_t)(EDX));
  /* 104b1d8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b1d8d push eax */
  push32((uint32_t)(EAX));
  /* 104b1d8e call dword ptr [0x104d0248] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0248))), 0x104b1d94u);
  /* 104b1d94 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 104b1d97 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b1d9b jne 0x104b1da4 */
  if (!C.zf) goto L_104b1da4;
  /* 104b1d9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b1d9f jmp 0x104b1e51 */
  goto L_104b1e51;
L_104b1da4:;
  /* 104b1da4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104b1dab mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104b1dae add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b1db1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 104b1db3 call 0x104a5a30 */
  push32(0x104b1db8u); f_104a5a30();
  /* 104b1db8 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 104b1dbb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 104b1dbe mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 104b1dc1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 104b1dc4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 104b1dcb jmp 0x104b1de4 */
  goto L_104b1de4;
  /* 104b1dcd mov eax, 1 */
  EAX = (0x1u);
  /* 104b1dd2 ret  */
  ESPCHK(0x104b1cd0u, _esp0);
  ESP += 4; return;
  /* 104b1dd3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 104b1dd6 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 104b1ddd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_104b1de4:;
  /* 104b1de4 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b1de8 jne 0x104b1dee */
  if (!C.zf) goto L_104b1dee;
  /* 104b1dea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b1dec jmp 0x104b1e51 */
  goto L_104b1e51;
L_104b1dee:;
  /* 104b1dee mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104b1df1 push edx */
  push32((uint32_t)(EDX));
  /* 104b1df2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 104b1df5 push eax */
  push32((uint32_t)(EAX));
  /* 104b1df6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104b1df9 push ecx */
  push32((uint32_t)(ECX));
  /* 104b1dfa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b1dfd push edx */
  push32((uint32_t)(EDX));
  /* 104b1dfe call dword ptr [0x104d0248] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0248))), 0x104b1e04u);
  /* 104b1e04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104b1e06 jne 0x104b1e0c */
  if (!C.zf) goto L_104b1e0c;
  /* 104b1e08 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b1e0a jmp 0x104b1e51 */
  goto L_104b1e51;
L_104b1e0c:;
  /* 104b1e0c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b1e10 jne 0x104b1e2d */
  if (!C.zf) goto L_104b1e2d;
  /* 104b1e12 push 0 */
  push32((uint32_t)(0x0u));
  /* 104b1e14 push 0 */
  push32((uint32_t)(0x0u));
  /* 104b1e16 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 104b1e18 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 104b1e1b push eax */
  push32((uint32_t)(EAX));
  /* 104b1e1c push 1 */
  push32((uint32_t)(0x1u));
  /* 104b1e1e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 104b1e21 push ecx */
  push32((uint32_t)(ECX));
  /* 104b1e22 call dword ptr [0x104d0314] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0314))), 0x104b1e28u);
  /* 104b1e28 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 104b1e2b jmp 0x104b1e4a */
  goto L_104b1e4a;
L_104b1e2d:;
  /* 104b1e2d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104b1e30 push edx */
  push32((uint32_t)(EDX));
  /* 104b1e31 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b1e34 push eax */
  push32((uint32_t)(EAX));
  /* 104b1e35 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 104b1e37 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104b1e3a push ecx */
  push32((uint32_t)(ECX));
  /* 104b1e3b push 1 */
  push32((uint32_t)(0x1u));
  /* 104b1e3d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104b1e40 push edx */
  push32((uint32_t)(EDX));
  /* 104b1e41 call dword ptr [0x104d0314] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0314))), 0x104b1e47u);
  /* 104b1e47 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_104b1e4a:;
  /* 104b1e4a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104b1e4d jmp 0x104b1e51 */
  goto L_104b1e51;
L_104b1e4f:;
  /* 104b1e4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104b1e51:;
  /* 104b1e51 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 104b1e54 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104b1e57 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 104b1e5e pop edi */
  EDI = (pop32());
  /* 104b1e5f pop esi */
  ESI = (pop32());
  /* 104b1e60 pop ebx */
  EBX = (pop32());
  /* 104b1e61 mov esp, ebp */
  ESP = (EBP);
  /* 104b1e63 pop ebp */
  EBP = (pop32());
  /* 104b1e64 ret  */
  ESPCHK(0x104b1cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e70 @ 0x104b1e70 (398 bytes, 140 insns) */
void f_104b1e70(void) {
  FTRACE(0x104b1e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104b1e70 push ebp */
  push32((uint32_t)(EBP));
  /* 104b1e71 mov ebp, esp */
  EBP = (ESP);
  /* 104b1e73 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 104b1e75 push 0x104ca870 */
  push32((uint32_t)(0x104ca870u));
  /* 104b1e7a push 0x104ab998 */
  push32((uint32_t)(0x104ab998u));
  /* 104b1e7f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 104b1e85 push eax */
  push32((uint32_t)(EAX));
  /* 104b1e86 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 104b1e8d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b1e90 push ebx */
  push32((uint32_t)(EBX));
  /* 104b1e91 push esi */
  push32((uint32_t)(ESI));
  /* 104b1e92 push edi */
  push32((uint32_t)(EDI));
  /* 104b1e93 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 104b1e96 cmp dword ptr [0x104ce780], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce780))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b1e9d jne 0x104b1ee2 */
  if (!C.zf) goto L_104b1ee2;
  /* 104b1e9f push 0 */
  push32((uint32_t)(0x0u));
  /* 104b1ea1 push 0 */
  push32((uint32_t)(0x0u));
  /* 104b1ea3 push 1 */
  push32((uint32_t)(0x1u));
  /* 104b1ea5 push 0 */
  push32((uint32_t)(0x0u));
  /* 104b1ea7 call dword ptr [0x104d0230] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0230))), 0x104b1eadu);
  /* 104b1ead test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104b1eaf je 0x104b1ebd */
  if (C.zf) goto L_104b1ebd;
  /* 104b1eb1 mov dword ptr [0x104ce780], 1 */
  w32((uint32_t)(0x104ce780), (0x1u));
  /* 104b1ebb jmp 0x104b1ee2 */
  goto L_104b1ee2;
L_104b1ebd:;
  /* 104b1ebd push 0 */
  push32((uint32_t)(0x0u));
  /* 104b1ebf push 0 */
  push32((uint32_t)(0x0u));
  /* 104b1ec1 push 1 */
  push32((uint32_t)(0x1u));
  /* 104b1ec3 push 0 */
  push32((uint32_t)(0x0u));
  /* 104b1ec5 call dword ptr [0x104d0248] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0248))), 0x104b1ecbu);
  /* 104b1ecb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104b1ecd je 0x104b1edb */
  if (C.zf) goto L_104b1edb;
  /* 104b1ecf mov dword ptr [0x104ce780], 2 */
  w32((uint32_t)(0x104ce780), (0x2u));
  /* 104b1ed9 jmp 0x104b1ee2 */
  goto L_104b1ee2;
L_104b1edb:;
  /* 104b1edb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b1edd jmp 0x104b2001 */
  goto L_104b2001;
L_104b1ee2:;
  /* 104b1ee2 cmp dword ptr [0x104ce780], 2 */
  { uint32_t _a=(r32((uint32_t)(0x104ce780))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b1ee9 jne 0x104b1f06 */
  if (!C.zf) goto L_104b1f06;
  /* 104b1eeb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104b1eee push eax */
  push32((uint32_t)(EAX));
  /* 104b1eef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b1ef2 push ecx */
  push32((uint32_t)(ECX));
  /* 104b1ef3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104b1ef6 push edx */
  push32((uint32_t)(EDX));
  /* 104b1ef7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b1efa push eax */
  push32((uint32_t)(EAX));
  /* 104b1efb call dword ptr [0x104d0248] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0248))), 0x104b1f01u);
  /* 104b1f01 jmp 0x104b2001 */
  goto L_104b2001;
L_104b1f06:;
  /* 104b1f06 cmp dword ptr [0x104ce780], 1 */
  { uint32_t _a=(r32((uint32_t)(0x104ce780))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b1f0d jne 0x104b1fff */
  if (!C.zf) goto L_104b1fff;
  /* 104b1f13 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b1f17 jne 0x104b1f22 */
  if (!C.zf) goto L_104b1f22;
  /* 104b1f19 mov ecx, dword ptr [0x104ce630] */
  ECX = (r32((uint32_t)(0x104ce630)));
  /* 104b1f1f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_104b1f22:;
  /* 104b1f22 push 0 */
  push32((uint32_t)(0x0u));
  /* 104b1f24 push 0 */
  push32((uint32_t)(0x0u));
  /* 104b1f26 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104b1f29 push edx */
  push32((uint32_t)(EDX));
  /* 104b1f2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b1f2d push eax */
  push32((uint32_t)(EAX));
  /* 104b1f2e call dword ptr [0x104d0230] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0230))), 0x104b1f34u);
  /* 104b1f34 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 104b1f37 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b1f3b jne 0x104b1f44 */
  if (!C.zf) goto L_104b1f44;
  /* 104b1f3d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b1f3f jmp 0x104b2001 */
  goto L_104b2001;
L_104b1f44:;
  /* 104b1f44 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104b1f4b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104b1f4e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 104b1f50 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b1f53 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 104b1f55 call 0x104a5a30 */
  push32(0x104b1f5au); f_104a5a30();
  /* 104b1f5a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 104b1f5d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 104b1f60 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 104b1f63 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 104b1f66 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 104b1f6d jmp 0x104b1f86 */
  goto L_104b1f86;
  /* 104b1f6f mov eax, 1 */
  EAX = (0x1u);
  /* 104b1f74 ret  */
  ESPCHK(0x104b1e70u, _esp0);
  ESP += 4; return;
  /* 104b1f75 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 104b1f78 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 104b1f7f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_104b1f86:;
  /* 104b1f86 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b1f8a jne 0x104b1f90 */
  if (!C.zf) goto L_104b1f90;
  /* 104b1f8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b1f8e jmp 0x104b2001 */
  goto L_104b2001;
L_104b1f90:;
  /* 104b1f90 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104b1f93 push edx */
  push32((uint32_t)(EDX));
  /* 104b1f94 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 104b1f97 push eax */
  push32((uint32_t)(EAX));
  /* 104b1f98 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104b1f9b push ecx */
  push32((uint32_t)(ECX));
  /* 104b1f9c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b1f9f push edx */
  push32((uint32_t)(EDX));
  /* 104b1fa0 call dword ptr [0x104d0230] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0230))), 0x104b1fa6u);
  /* 104b1fa6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104b1fa8 jne 0x104b1fae */
  if (!C.zf) goto L_104b1fae;
  /* 104b1faa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b1fac jmp 0x104b2001 */
  goto L_104b2001;
L_104b1fae:;
  /* 104b1fae cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b1fb2 jne 0x104b1fd6 */
  if (!C.zf) goto L_104b1fd6;
  /* 104b1fb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 104b1fb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 104b1fb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 104b1fba push 0 */
  push32((uint32_t)(0x0u));
  /* 104b1fbc push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 104b1fbe mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 104b1fc1 push eax */
  push32((uint32_t)(EAX));
  /* 104b1fc2 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 104b1fc7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 104b1fca push ecx */
  push32((uint32_t)(ECX));
  /* 104b1fcb call dword ptr [0x104d0224] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0224))), 0x104b1fd1u);
  /* 104b1fd1 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 104b1fd4 jmp 0x104b1ffa */
  goto L_104b1ffa;
L_104b1fd6:;
  /* 104b1fd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 104b1fd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 104b1fda mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104b1fdd push edx */
  push32((uint32_t)(EDX));
  /* 104b1fde mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b1fe1 push eax */
  push32((uint32_t)(EAX));
  /* 104b1fe2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 104b1fe4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104b1fe7 push ecx */
  push32((uint32_t)(ECX));
  /* 104b1fe8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 104b1fed mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104b1ff0 push edx */
  push32((uint32_t)(EDX));
  /* 104b1ff1 call dword ptr [0x104d0224] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0224))), 0x104b1ff7u);
  /* 104b1ff7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_104b1ffa:;
  /* 104b1ffa mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104b1ffd jmp 0x104b2001 */
  goto L_104b2001;
L_104b1fff:;
  /* 104b1fff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104b2001:;
  /* 104b2001 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 104b2004 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104b2007 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 104b200e pop edi */
  EDI = (pop32());
  /* 104b200f pop esi */
  ESI = (pop32());
  /* 104b2010 pop ebx */
  EBX = (pop32());
  /* 104b2011 mov esp, ebp */
  ESP = (EBP);
  /* 104b2013 pop ebp */
  EBP = (pop32());
  /* 104b2014 ret  */
  ESPCHK(0x104b1e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10012020 @ 0x104b2020 (11 bytes, 6 insns) */
void f_104b2020(void) {
  FTRACE(0x104b2020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104b2020 push ebp */
  push32((uint32_t)(EBP));
  /* 104b2021 mov ebp, esp */
  EBP = (ESP);
  /* 104b2023 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b2026 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b2029 pop ebp */
  EBP = (pop32());
  /* 104b202a ret  */
  ESPCHK(0x104b2020u, _esp0);
  ESP += 4; return;
}

/* FUN_10012030 @ 0x104b2030 (147 bytes, 43 insns) */
void f_104b2030(void) {
  FTRACE(0x104b2030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104b2030 push ebp */
  push32((uint32_t)(EBP));
  /* 104b2031 mov ebp, esp */
  EBP = (ESP);
  /* 104b2033 push ecx */
  push32((uint32_t)(ECX));
  /* 104b2034 cmp dword ptr [0x104ce620], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce620))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b203b jne 0x104b2057 */
  if (!C.zf) goto L_104b2057;
  /* 104b203d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b2041 jl 0x104b2052 */
  if ((C.sf!=C.of)) goto L_104b2052;
  /* 104b2043 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b2047 jg 0x104b2052 */
  if ((!C.zf&&C.sf==C.of)) goto L_104b2052;
  /* 104b2049 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b204c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b204f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_104b2052:;
  /* 104b2052 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b2055 jmp 0x104b20bf */
  goto L_104b20bf;
L_104b2057:;
  /* 104b2057 push 0x104ce7ac */
  push32((uint32_t)(0x104ce7acu));
  /* 104b205c call dword ptr [0x104d0270] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0270))), 0x104b2062u);
  /* 104b2062 cmp dword ptr [0x104ce79c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce79c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b2069 je 0x104b2089 */
  if (C.zf) goto L_104b2089;
  /* 104b206b push 0x104ce7ac */
  push32((uint32_t)(0x104ce7acu));
  /* 104b2070 call dword ptr [0x104d0260] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0260))), 0x104b2076u);
  /* 104b2076 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 104b2078 call 0x104a6290 */
  push32(0x104b207du); f_104a6290();
  /* 104b207d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b2080 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 104b2087 jmp 0x104b2090 */
  goto L_104b2090;
L_104b2089:;
  /* 104b2089 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_104b2090:;
  /* 104b2090 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b2093 push ecx */
  push32((uint32_t)(ECX));
  /* 104b2094 call 0x104b20d0 */
  push32(0x104b2099u); f_104b20d0();
  /* 104b2099 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b209c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 104b209f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b20a3 je 0x104b20b1 */
  if (C.zf) goto L_104b20b1;
  /* 104b20a5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 104b20a7 call 0x104a6330 */
  push32(0x104b20acu); f_104a6330();
  /* 104b20ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b20af jmp 0x104b20bc */
  goto L_104b20bc;
L_104b20b1:;
  /* 104b20b1 push 0x104ce7ac */
  push32((uint32_t)(0x104ce7acu));
  /* 104b20b6 call dword ptr [0x104d0260] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0260))), 0x104b20bcu);
L_104b20bc:;
  /* 104b20bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_104b20bf:;
  /* 104b20bf mov esp, ebp */
  ESP = (EBP);
  /* 104b20c1 pop ebp */
  EBP = (pop32());
  /* 104b20c2 ret  */
  ESPCHK(0x104b2030u, _esp0);
  ESP += 4; return;
}

/* FUN_100120d0 @ 0x104b20d0 (299 bytes, 91 insns) */
void f_104b20d0(void) {
  FTRACE(0x104b20d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104b20d0 push ebp */
  push32((uint32_t)(EBP));
  /* 104b20d1 mov ebp, esp */
  EBP = (ESP);
  /* 104b20d3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104b20d6 cmp dword ptr [0x104ce620], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce620))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b20dd jne 0x104b20fc */
  if (!C.zf) goto L_104b20fc;
  /* 104b20df cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b20e3 jl 0x104b20f4 */
  if ((C.sf!=C.of)) goto L_104b20f4;
  /* 104b20e5 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b20e9 jg 0x104b20f4 */
  if ((!C.zf&&C.sf==C.of)) goto L_104b20f4;
  /* 104b20eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b20ee add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b20f1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_104b20f4:;
  /* 104b20f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b20f7 jmp 0x104b21f7 */
  goto L_104b21f7;
L_104b20fc:;
  /* 104b20fc cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b2103 jge 0x104b2143 */
  if ((C.sf==C.of)) goto L_104b2143;
  /* 104b2105 cmp dword ptr [0x104ccea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x104ccea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b210c jle 0x104b2121 */
  if ((C.zf||C.sf!=C.of)) goto L_104b2121;
  /* 104b210e push 1 */
  push32((uint32_t)(0x1u));
  /* 104b2110 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b2113 push ecx */
  push32((uint32_t)(ECX));
  /* 104b2114 call 0x104a88a0 */
  push32(0x104b2119u); f_104a88a0();
  /* 104b2119 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b211c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 104b211f jmp 0x104b2135 */
  goto L_104b2135;
L_104b2121:;
  /* 104b2121 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b2124 mov eax, dword ptr [0x104ccc98] */
  EAX = (r32((uint32_t)(0x104ccc98)));
  /* 104b2129 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104b212b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 104b212f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 104b2132 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_104b2135:;
  /* 104b2135 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b2139 jne 0x104b2143 */
  if (!C.zf) goto L_104b2143;
  /* 104b213b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b213e jmp 0x104b21f7 */
  goto L_104b21f7;
L_104b2143:;
  /* 104b2143 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b2146 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 104b2149 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 104b214f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 104b2155 mov eax, dword ptr [0x104ccc98] */
  EAX = (r32((uint32_t)(0x104ccc98)));
  /* 104b215a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104b215c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 104b2160 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 104b2166 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104b2168 je 0x104b218c */
  if (C.zf) goto L_104b218c;
  /* 104b216a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b216d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 104b2170 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 104b2176 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 104b2179 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 104b217c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 104b217f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 104b2183 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 104b218a jmp 0x104b219d */
  goto L_104b219d;
L_104b218c:;
  /* 104b218c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 104b218f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 104b2192 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 104b2196 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_104b219d:;
  /* 104b219d push 1 */
  push32((uint32_t)(0x1u));
  /* 104b219f push 0 */
  push32((uint32_t)(0x0u));
  /* 104b21a1 push 3 */
  push32((uint32_t)(0x3u));
  /* 104b21a3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 104b21a6 push edx */
  push32((uint32_t)(EDX));
  /* 104b21a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b21aa push eax */
  push32((uint32_t)(EAX));
  /* 104b21ab lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 104b21ae push ecx */
  push32((uint32_t)(ECX));
  /* 104b21af push 0x100 */
  push32((uint32_t)(0x100u));
  /* 104b21b4 mov edx, dword ptr [0x104ce620] */
  EDX = (r32((uint32_t)(0x104ce620)));
  /* 104b21ba push edx */
  push32((uint32_t)(EDX));
  /* 104b21bb call 0x104aac80 */
  push32(0x104b21c0u); f_104aac80();
  /* 104b21c0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b21c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104b21c6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b21ca jne 0x104b21d1 */
  if (!C.zf) goto L_104b21d1;
  /* 104b21cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b21cf jmp 0x104b21f7 */
  goto L_104b21f7;
L_104b21d1:;
  /* 104b21d1 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b21d5 jne 0x104b21e1 */
  if (!C.zf) goto L_104b21e1;
  /* 104b21d7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b21da and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104b21df jmp 0x104b21f7 */
  goto L_104b21f7;
L_104b21e1:;
  /* 104b21e1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b21e4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104b21e9 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 104b21ec and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 104b21f2 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 104b21f5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_104b21f7:;
  /* 104b21f7 mov esp, ebp */
  ESP = (EBP);
  /* 104b21f9 pop ebp */
  EBP = (pop32());
  /* 104b21fa ret  */
  ESPCHK(0x104b20d0u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x104b2200 (52 bytes, 19 insns) */
void f_104b2200(void) {
  FTRACE(0x104b2200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104b2200 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 104b2204 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 104b2208 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104b220a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 104b220e jne 0x104b2219 */
  if (!C.zf) goto L_104b2219;
  /* 104b2210 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 104b2214 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 104b2216 ret 0x10 */
  ESPCHK(0x104b2200u, _esp0);
  ESP += 20; return;
L_104b2219:;
  /* 104b2219 push ebx */
  push32((uint32_t)(EBX));
  /* 104b221a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 104b221c mov ebx, eax */
  EBX = (EAX);
  /* 104b221e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 104b2222 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 104b2226 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b2228 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 104b222c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 104b222e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b2230 pop ebx */
  EBX = (pop32());
  /* 104b2231 ret 0x10 */
  ESPCHK(0x104b2200u, _esp0);
  ESP += 20; return;
}

/* FUN_10012240 @ 0x104b2240 (46 bytes, 18 insns) */
void f_104b2240(void) {
  FTRACE(0x104b2240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104b2240 push ebp */
  push32((uint32_t)(EBP));
  /* 104b2241 mov ebp, esp */
  EBP = (ESP);
  /* 104b2243 push ecx */
  push32((uint32_t)(ECX));
  /* 104b2244 push 0xc */
  push32((uint32_t)(0xcu));
  /* 104b2246 call 0x104a6290 */
  push32(0x104b224bu); f_104a6290();
  /* 104b224b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b224e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b2251 push eax */
  push32((uint32_t)(EAX));
  /* 104b2252 call 0x104b2270 */
  push32(0x104b2257u); f_104b2270();
  /* 104b2257 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b225a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104b225d push 0xc */
  push32((uint32_t)(0xcu));
  /* 104b225f call 0x104a6330 */
  push32(0x104b2264u); f_104a6330();
  /* 104b2264 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b2267 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b226a mov esp, ebp */
  ESP = (EBP);
  /* 104b226c pop ebp */
  EBP = (pop32());
  /* 104b226d ret  */
  ESPCHK(0x104b2240u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x104b2270 (198 bytes, 69 insns) */
void f_104b2270(void) {
  FTRACE(0x104b2270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104b2270 push ebp */
  push32((uint32_t)(EBP));
  /* 104b2271 mov ebp, esp */
  EBP = (ESP);
  /* 104b2273 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104b2276 mov eax, dword ptr [0x104ce43c] */
  EAX = (r32((uint32_t)(0x104ce43c)));
  /* 104b227b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104b227e cmp dword ptr [0x104cff40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104cff40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b2285 jne 0x104b228e */
  if (!C.zf) goto L_104b228e;
  /* 104b2287 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b2289 jmp 0x104b2332 */
  goto L_104b2332;
L_104b228e:;
  /* 104b228e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b2292 jne 0x104b22b6 */
  if (!C.zf) goto L_104b22b6;
  /* 104b2294 cmp dword ptr [0x104ce444], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce444))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b229b je 0x104b22b6 */
  if (C.zf) goto L_104b22b6;
  /* 104b229d call 0x104b2390 */
  push32(0x104b22a2u); f_104b2390();
  /* 104b22a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104b22a4 je 0x104b22ad */
  if (C.zf) goto L_104b22ad;
  /* 104b22a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b22a8 jmp 0x104b2332 */
  goto L_104b2332;
L_104b22ad:;
  /* 104b22ad mov ecx, dword ptr [0x104ce43c] */
  ECX = (r32((uint32_t)(0x104ce43c)));
  /* 104b22b3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_104b22b6:;
  /* 104b22b6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b22ba je 0x104b2330 */
  if (C.zf) goto L_104b2330;
  /* 104b22bc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b22c0 je 0x104b2330 */
  if (C.zf) goto L_104b2330;
  /* 104b22c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b22c5 push edx */
  push32((uint32_t)(EDX));
  /* 104b22c6 call 0x104a56c0 */
  push32(0x104b22cbu); f_104a56c0();
  /* 104b22cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b22ce mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104b22d1:;
  /* 104b22d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104b22d4 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b22d7 je 0x104b2330 */
  if (C.zf) goto L_104b2330;
  /* 104b22d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104b22dc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104b22de push edx */
  push32((uint32_t)(EDX));
  /* 104b22df call 0x104a56c0 */
  push32(0x104b22e4u); f_104a56c0();
  /* 104b22e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b22e7 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b22ea jbe 0x104b2325 */
  if ((C.cf||C.zf)) goto L_104b2325;
  /* 104b22ec mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104b22ef mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104b22f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b22f4 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 104b22f8 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b22fb jne 0x104b2325 */
  if (!C.zf) goto L_104b2325;
  /* 104b22fd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b2300 push ecx */
  push32((uint32_t)(ECX));
  /* 104b2301 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b2304 push edx */
  push32((uint32_t)(EDX));
  /* 104b2305 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104b2308 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104b230a push ecx */
  push32((uint32_t)(ECX));
  /* 104b230b call 0x104b2340 */
  push32(0x104b2310u); f_104b2340();
  /* 104b2310 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b2313 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104b2315 jne 0x104b2325 */
  if (!C.zf) goto L_104b2325;
  /* 104b2317 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104b231a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104b231c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b231f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 104b2323 jmp 0x104b2332 */
  goto L_104b2332;
L_104b2325:;
  /* 104b2325 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104b2328 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b232b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 104b232e jmp 0x104b22d1 */
  goto L_104b22d1;
L_104b2330:;
  /* 104b2330 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104b2332:;
  /* 104b2332 mov esp, ebp */
  ESP = (EBP);
  /* 104b2334 pop ebp */
  EBP = (pop32());
  /* 104b2335 ret  */
  ESPCHK(0x104b2270u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x104b2340 (79 bytes, 32 insns) */
void f_104b2340(void) {
  FTRACE(0x104b2340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104b2340 push ebp */
  push32((uint32_t)(EBP));
  /* 104b2341 mov ebp, esp */
  EBP = (ESP);
  /* 104b2343 push ecx */
  push32((uint32_t)(ECX));
  /* 104b2344 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b2348 jne 0x104b234e */
  if (!C.zf) goto L_104b234e;
  /* 104b234a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b234c jmp 0x104b238b */
  goto L_104b238b;
L_104b234e:;
  /* 104b234e mov eax, dword ptr [0x104cfb04] */
  EAX = (r32((uint32_t)(0x104cfb04)));
  /* 104b2353 push eax */
  push32((uint32_t)(EAX));
  /* 104b2354 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b2357 push ecx */
  push32((uint32_t)(ECX));
  /* 104b2358 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104b235b push edx */
  push32((uint32_t)(EDX));
  /* 104b235c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b235f push eax */
  push32((uint32_t)(EAX));
  /* 104b2360 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b2363 push ecx */
  push32((uint32_t)(ECX));
  /* 104b2364 push 1 */
  push32((uint32_t)(0x1u));
  /* 104b2366 mov edx, dword ptr [0x104cfda4] */
  EDX = (r32((uint32_t)(0x104cfda4)));
  /* 104b236c push edx */
  push32((uint32_t)(EDX));
  /* 104b236d call 0x104b2440 */
  push32(0x104b2372u); f_104b2440();
  /* 104b2372 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b2375 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104b2378 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b237c jne 0x104b2385 */
  if (!C.zf) goto L_104b2385;
  /* 104b237e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 104b2383 jmp 0x104b238b */
  goto L_104b238b;
L_104b2385:;
  /* 104b2385 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b2388 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_104b238b:;
  /* 104b238b mov esp, ebp */
  ESP = (EBP);
  /* 104b238d pop ebp */
  EBP = (pop32());
  /* 104b238e ret  */
  ESPCHK(0x104b2340u, _esp0);
  ESP += 4; return;
}

/* FUN_10012390 @ 0x104b2390 (174 bytes, 66 insns) */
void f_104b2390(void) {
  FTRACE(0x104b2390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104b2390 push ebp */
  push32((uint32_t)(EBP));
  /* 104b2391 mov ebp, esp */
  EBP = (ESP);
  /* 104b2393 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104b2396 mov eax, dword ptr [0x104ce444] */
  EAX = (r32((uint32_t)(0x104ce444)));
  /* 104b239b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104b239e:;
  /* 104b239e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b23a1 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b23a4 je 0x104b2438 */
  if (C.zf) goto L_104b2438;
  /* 104b23aa push 0 */
  push32((uint32_t)(0x0u));
  /* 104b23ac push 0 */
  push32((uint32_t)(0x0u));
  /* 104b23ae push 0 */
  push32((uint32_t)(0x0u));
  /* 104b23b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 104b23b2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 104b23b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b23b7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104b23b9 push eax */
  push32((uint32_t)(EAX));
  /* 104b23ba push 0 */
  push32((uint32_t)(0x0u));
  /* 104b23bc push 1 */
  push32((uint32_t)(0x1u));
  /* 104b23be call dword ptr [0x104d0224] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0224))), 0x104b23c4u);
  /* 104b23c4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104b23c7 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b23cb jne 0x104b23d2 */
  if (!C.zf) goto L_104b23d2;
  /* 104b23cd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104b23d0 jmp 0x104b243a */
  goto L_104b243a;
L_104b23d2:;
  /* 104b23d2 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 104b23d4 push 0x104ca87c */
  push32((uint32_t)(0x104ca87cu));
  /* 104b23d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 104b23db mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b23de push ecx */
  push32((uint32_t)(ECX));
  /* 104b23df call 0x104a2890 */
  push32(0x104b23e4u); f_104a2890();
  /* 104b23e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b23e7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104b23ea cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b23ee jne 0x104b23f5 */
  if (!C.zf) goto L_104b23f5;
  /* 104b23f0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104b23f3 jmp 0x104b243a */
  goto L_104b243a;
L_104b23f5:;
  /* 104b23f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 104b23f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 104b23f9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b23fc push edx */
  push32((uint32_t)(EDX));
  /* 104b23fd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104b2400 push eax */
  push32((uint32_t)(EAX));
  /* 104b2401 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 104b2403 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b2406 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104b2408 push edx */
  push32((uint32_t)(EDX));
  /* 104b2409 push 0 */
  push32((uint32_t)(0x0u));
  /* 104b240b push 1 */
  push32((uint32_t)(0x1u));
  /* 104b240d call dword ptr [0x104d0224] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0224))), 0x104b2413u);
  /* 104b2413 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104b2415 jne 0x104b241c */
  if (!C.zf) goto L_104b241c;
  /* 104b2417 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104b241a jmp 0x104b243a */
  goto L_104b243a;
L_104b241c:;
  /* 104b241c push 0 */
  push32((uint32_t)(0x0u));
  /* 104b241e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104b2421 push eax */
  push32((uint32_t)(EAX));
  /* 104b2422 call 0x104b2890 */
  push32(0x104b2427u); f_104b2890();
  /* 104b2427 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b242a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b242d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b2430 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104b2433 jmp 0x104b239e */
  goto L_104b239e;
L_104b2438:;
  /* 104b2438 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104b243a:;
  /* 104b243a mov esp, ebp */
  ESP = (EBP);
  /* 104b243c pop ebp */
  EBP = (pop32());
  /* 104b243d ret  */
  ESPCHK(0x104b2390u, _esp0);
  ESP += 4; return;
}

/* FUN_10012440 @ 0x104b2440 (970 bytes, 340 insns) */
void f_104b2440(void) {
  FTRACE(0x104b2440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104b2440 push ebp */
  push32((uint32_t)(EBP));
  /* 104b2441 mov ebp, esp */
  EBP = (ESP);
  /* 104b2443 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 104b2445 push 0x104ca8d0 */
  push32((uint32_t)(0x104ca8d0u));
  /* 104b244a push 0x104ab998 */
  push32((uint32_t)(0x104ab998u));
  /* 104b244f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 104b2455 push eax */
  push32((uint32_t)(EAX));
  /* 104b2456 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 104b245d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b2460 push ebx */
  push32((uint32_t)(EBX));
  /* 104b2461 push esi */
  push32((uint32_t)(ESI));
  /* 104b2462 push edi */
  push32((uint32_t)(EDI));
  /* 104b2463 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 104b2466 cmp dword ptr [0x104ce784], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce784))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b246d jne 0x104b24c6 */
  if (!C.zf) goto L_104b24c6;
  /* 104b246f push 1 */
  push32((uint32_t)(0x1u));
  /* 104b2471 push 0x104c9f2c */
  push32((uint32_t)(0x104c9f2cu));
  /* 104b2476 push 1 */
  push32((uint32_t)(0x1u));
  /* 104b2478 push 0x104c9f2c */
  push32((uint32_t)(0x104c9f2cu));
  /* 104b247d push 0 */
  push32((uint32_t)(0x0u));
  /* 104b247f push 0 */
  push32((uint32_t)(0x0u));
  /* 104b2481 call dword ptr [0x104d022c] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d022c))), 0x104b2487u);
  /* 104b2487 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104b2489 je 0x104b2497 */
  if (C.zf) goto L_104b2497;
  /* 104b248b mov dword ptr [0x104ce784], 1 */
  w32((uint32_t)(0x104ce784), (0x1u));
  /* 104b2495 jmp 0x104b24c6 */
  goto L_104b24c6;
L_104b2497:;
  /* 104b2497 push 1 */
  push32((uint32_t)(0x1u));
  /* 104b2499 push 0x104c9f28 */
  push32((uint32_t)(0x104c9f28u));
  /* 104b249e push 1 */
  push32((uint32_t)(0x1u));
  /* 104b24a0 push 0x104c9f28 */
  push32((uint32_t)(0x104c9f28u));
  /* 104b24a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 104b24a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 104b24a9 call dword ptr [0x104d0238] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0238))), 0x104b24afu);
  /* 104b24af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104b24b1 je 0x104b24bf */
  if (C.zf) goto L_104b24bf;
  /* 104b24b3 mov dword ptr [0x104ce784], 2 */
  w32((uint32_t)(0x104ce784), (0x2u));
  /* 104b24bd jmp 0x104b24c6 */
  goto L_104b24c6;
L_104b24bf:;
  /* 104b24bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b24c1 jmp 0x104b2824 */
  goto L_104b2824;
L_104b24c6:;
  /* 104b24c6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b24ca jle 0x104b24df */
  if ((C.zf||C.sf!=C.of)) goto L_104b24df;
  /* 104b24cc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104b24cf push eax */
  push32((uint32_t)(EAX));
  /* 104b24d0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b24d3 push ecx */
  push32((uint32_t)(ECX));
  /* 104b24d4 call 0x104b2840 */
  push32(0x104b24d9u); f_104b2840();
  /* 104b24d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b24dc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_104b24df:;
  /* 104b24df cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b24e3 jle 0x104b24f8 */
  if ((C.zf||C.sf!=C.of)) goto L_104b24f8;
  /* 104b24e5 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 104b24e8 push edx */
  push32((uint32_t)(EDX));
  /* 104b24e9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104b24ec push eax */
  push32((uint32_t)(EAX));
  /* 104b24ed call 0x104b2840 */
  push32(0x104b24f2u); f_104b2840();
  /* 104b24f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b24f5 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_104b24f8:;
  /* 104b24f8 cmp dword ptr [0x104ce784], 2 */
  { uint32_t _a=(r32((uint32_t)(0x104ce784))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b24ff jne 0x104b2524 */
  if (!C.zf) goto L_104b2524;
  /* 104b2501 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 104b2504 push ecx */
  push32((uint32_t)(ECX));
  /* 104b2505 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104b2508 push edx */
  push32((uint32_t)(EDX));
  /* 104b2509 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104b250c push eax */
  push32((uint32_t)(EAX));
  /* 104b250d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b2510 push ecx */
  push32((uint32_t)(ECX));
  /* 104b2511 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104b2514 push edx */
  push32((uint32_t)(EDX));
  /* 104b2515 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b2518 push eax */
  push32((uint32_t)(EAX));
  /* 104b2519 call dword ptr [0x104d0238] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0238))), 0x104b251fu);
  /* 104b251f jmp 0x104b2824 */
  goto L_104b2824;
L_104b2524:;
  /* 104b2524 cmp dword ptr [0x104ce784], 1 */
  { uint32_t _a=(r32((uint32_t)(0x104ce784))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b252b jne 0x104b2822 */
  if (!C.zf) goto L_104b2822;
  /* 104b2531 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b2535 jne 0x104b2540 */
  if (!C.zf) goto L_104b2540;
  /* 104b2537 mov ecx, dword ptr [0x104ce630] */
  ECX = (r32((uint32_t)(0x104ce630)));
  /* 104b253d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_104b2540:;
  /* 104b2540 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b2544 je 0x104b2550 */
  if (C.zf) goto L_104b2550;
  /* 104b2546 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b254a jne 0x104b26cc */
  if (!C.zf) goto L_104b26cc;
L_104b2550:;
  /* 104b2550 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104b2553 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b2556 jne 0x104b2562 */
  if (!C.zf) goto L_104b2562;
  /* 104b2558 mov eax, 2 */
  EAX = (0x2u);
  /* 104b255d jmp 0x104b2824 */
  goto L_104b2824;
L_104b2562:;
  /* 104b2562 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b2566 jle 0x104b2572 */
  if ((C.zf||C.sf!=C.of)) goto L_104b2572;
  /* 104b2568 mov eax, 1 */
  EAX = (0x1u);
  /* 104b256d jmp 0x104b2824 */
  goto L_104b2824;
L_104b2572:;
  /* 104b2572 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b2576 jle 0x104b2582 */
  if ((C.zf||C.sf!=C.of)) goto L_104b2582;
  /* 104b2578 mov eax, 3 */
  EAX = (0x3u);
  /* 104b257d jmp 0x104b2824 */
  goto L_104b2824;
L_104b2582:;
  /* 104b2582 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 104b2585 push eax */
  push32((uint32_t)(EAX));
  /* 104b2586 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 104b2589 push ecx */
  push32((uint32_t)(ECX));
  /* 104b258a call dword ptr [0x104d0308] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0308))), 0x104b2590u);
  /* 104b2590 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104b2592 jne 0x104b259b */
  if (!C.zf) goto L_104b259b;
  /* 104b2594 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b2596 jmp 0x104b2824 */
  goto L_104b2824;
L_104b259b:;
  /* 104b259b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b259f jne 0x104b25a7 */
  if (!C.zf) goto L_104b25a7;
  /* 104b25a1 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b25a5 je 0x104b25d4 */
  if (C.zf) goto L_104b25d4;
L_104b25a7:;
  /* 104b25a7 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b25ab jne 0x104b25b3 */
  if (!C.zf) goto L_104b25b3;
  /* 104b25ad cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b25b1 je 0x104b25d4 */
  if (C.zf) goto L_104b25d4;
L_104b25b3:;
  /* 104b25b3 push 0x104ca890 */
  push32((uint32_t)(0x104ca890u));
  /* 104b25b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 104b25ba push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 104b25bf push 0x104ca888 */
  push32((uint32_t)(0x104ca888u));
  /* 104b25c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 104b25c6 call 0x104a1950 */
  push32(0x104b25cbu); f_104a1950();
  /* 104b25cb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b25ce cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b25d1 jne 0x104b25d4 */
  if (!C.zf) goto L_104b25d4;
  /* 104b25d3 int3  */
  x86_unimpl("int3 @ 0x104b25d3");
L_104b25d4:;
  /* 104b25d4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104b25d6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104b25d8 jne 0x104b259b */
  if (!C.zf) goto L_104b259b;
  /* 104b25da cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b25de jle 0x104b2653 */
  if ((C.zf||C.sf!=C.of)) goto L_104b2653;
  /* 104b25e0 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b25e4 jae 0x104b25f0 */
  if (!C.cf) goto L_104b25f0;
  /* 104b25e6 mov eax, 3 */
  EAX = (0x3u);
  /* 104b25eb jmp 0x104b2824 */
  goto L_104b2824;
L_104b25f0:;
  /* 104b25f0 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 104b25f3 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 104b25f6 jmp 0x104b2601 */
  goto L_104b2601;
L_104b25f8:;
  /* 104b25f8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 104b25fb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b25fe mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_104b2601:;
  /* 104b2601 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 104b2604 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b2606 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104b2608 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104b260a je 0x104b2649 */
  if (C.zf) goto L_104b2649;
  /* 104b260c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 104b260f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104b2611 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 104b2614 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104b2616 je 0x104b2649 */
  if (C.zf) goto L_104b2649;
  /* 104b2618 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b261b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104b261d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 104b261f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 104b2622 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b2624 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104b2626 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b2628 jl 0x104b2647 */
  if ((C.sf!=C.of)) goto L_104b2647;
  /* 104b262a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b262d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104b262f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104b2631 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 104b2634 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104b2636 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 104b2639 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b263b jg 0x104b2647 */
  if ((!C.zf&&C.sf==C.of)) goto L_104b2647;
  /* 104b263d mov eax, 2 */
  EAX = (0x2u);
  /* 104b2642 jmp 0x104b2824 */
  goto L_104b2824;
L_104b2647:;
  /* 104b2647 jmp 0x104b25f8 */
  goto L_104b25f8;
L_104b2649:;
  /* 104b2649 mov eax, 3 */
  EAX = (0x3u);
  /* 104b264e jmp 0x104b2824 */
  goto L_104b2824;
L_104b2653:;
  /* 104b2653 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b2657 jle 0x104b26cc */
  if ((C.zf||C.sf!=C.of)) goto L_104b26cc;
  /* 104b2659 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b265d jae 0x104b2669 */
  if (!C.cf) goto L_104b2669;
  /* 104b265f mov eax, 1 */
  EAX = (0x1u);
  /* 104b2664 jmp 0x104b2824 */
  goto L_104b2824;
L_104b2669:;
  /* 104b2669 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 104b266c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 104b266f jmp 0x104b267a */
  goto L_104b267a;
L_104b2671:;
  /* 104b2671 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 104b2674 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b2677 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_104b267a:;
  /* 104b267a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 104b267d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104b267f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104b2681 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104b2683 je 0x104b26c2 */
  if (C.zf) goto L_104b26c2;
  /* 104b2685 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 104b2688 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104b268a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 104b268d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104b268f je 0x104b26c2 */
  if (C.zf) goto L_104b26c2;
  /* 104b2691 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104b2694 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b2696 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104b2698 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 104b269b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104b269d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104b269f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b26a1 jl 0x104b26c0 */
  if ((C.sf!=C.of)) goto L_104b26c0;
  /* 104b26a3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104b26a6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104b26a8 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 104b26aa mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 104b26ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b26af mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 104b26b2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b26b4 jg 0x104b26c0 */
  if ((!C.zf&&C.sf==C.of)) goto L_104b26c0;
  /* 104b26b6 mov eax, 2 */
  EAX = (0x2u);
  /* 104b26bb jmp 0x104b2824 */
  goto L_104b2824;
L_104b26c0:;
  /* 104b26c0 jmp 0x104b2671 */
  goto L_104b2671;
L_104b26c2:;
  /* 104b26c2 mov eax, 1 */
  EAX = (0x1u);
  /* 104b26c7 jmp 0x104b2824 */
  goto L_104b2824;
L_104b26cc:;
  /* 104b26cc push 0 */
  push32((uint32_t)(0x0u));
  /* 104b26ce push 0 */
  push32((uint32_t)(0x0u));
  /* 104b26d0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104b26d3 push ecx */
  push32((uint32_t)(ECX));
  /* 104b26d4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b26d7 push edx */
  push32((uint32_t)(EDX));
  /* 104b26d8 push 9 */
  push32((uint32_t)(0x9u));
  /* 104b26da mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 104b26dd push eax */
  push32((uint32_t)(EAX));
  /* 104b26de call dword ptr [0x104d0314] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0314))), 0x104b26e4u);
  /* 104b26e4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 104b26e7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b26eb jne 0x104b26f4 */
  if (!C.zf) goto L_104b26f4;
  /* 104b26ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b26ef jmp 0x104b2824 */
  goto L_104b2824;
L_104b26f4:;
  /* 104b26f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104b26fb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104b26fe shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 104b2700 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b2703 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 104b2705 call 0x104a5a30 */
  push32(0x104b270au); f_104a5a30();
  /* 104b270a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 104b270d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 104b2710 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 104b2713 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 104b2716 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 104b271d jmp 0x104b2736 */
  goto L_104b2736;
  /* 104b271f mov eax, 1 */
  EAX = (0x1u);
  /* 104b2724 ret  */
  ESPCHK(0x104b2440u, _esp0);
  ESP += 4; return;
  /* 104b2725 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 104b2728 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 104b272f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_104b2736:;
  /* 104b2736 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b273a jne 0x104b2743 */
  if (!C.zf) goto L_104b2743;
  /* 104b273c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b273e jmp 0x104b2824 */
  goto L_104b2824;
L_104b2743:;
  /* 104b2743 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104b2746 push edx */
  push32((uint32_t)(EDX));
  /* 104b2747 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104b274a push eax */
  push32((uint32_t)(EAX));
  /* 104b274b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104b274e push ecx */
  push32((uint32_t)(ECX));
  /* 104b274f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104b2752 push edx */
  push32((uint32_t)(EDX));
  /* 104b2753 push 1 */
  push32((uint32_t)(0x1u));
  /* 104b2755 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 104b2758 push eax */
  push32((uint32_t)(EAX));
  /* 104b2759 call dword ptr [0x104d0314] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0314))), 0x104b275fu);
  /* 104b275f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104b2761 jne 0x104b276a */
  if (!C.zf) goto L_104b276a;
  /* 104b2763 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b2765 jmp 0x104b2824 */
  goto L_104b2824;
L_104b276a:;
  /* 104b276a push 0 */
  push32((uint32_t)(0x0u));
  /* 104b276c push 0 */
  push32((uint32_t)(0x0u));
  /* 104b276e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 104b2771 push ecx */
  push32((uint32_t)(ECX));
  /* 104b2772 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104b2775 push edx */
  push32((uint32_t)(EDX));
  /* 104b2776 push 9 */
  push32((uint32_t)(0x9u));
  /* 104b2778 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 104b277b push eax */
  push32((uint32_t)(EAX));
  /* 104b277c call dword ptr [0x104d0314] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0314))), 0x104b2782u);
  /* 104b2782 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 104b2785 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b2789 jne 0x104b2792 */
  if (!C.zf) goto L_104b2792;
  /* 104b278b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b278d jmp 0x104b2824 */
  goto L_104b2824;
L_104b2792:;
  /* 104b2792 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 104b2799 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 104b279c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 104b279e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b27a1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 104b27a3 call 0x104a5a30 */
  push32(0x104b27a8u); f_104a5a30();
  /* 104b27a8 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 104b27ab mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 104b27ae mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 104b27b1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 104b27b4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 104b27bb jmp 0x104b27d4 */
  goto L_104b27d4;
  /* 104b27bd mov eax, 1 */
  EAX = (0x1u);
  /* 104b27c2 ret  */
  ESPCHK(0x104b2440u, _esp0);
  ESP += 4; return;
  /* 104b27c3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 104b27c6 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 104b27cd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_104b27d4:;
  /* 104b27d4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b27d8 jne 0x104b27de */
  if (!C.zf) goto L_104b27de;
  /* 104b27da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b27dc jmp 0x104b2824 */
  goto L_104b2824;
L_104b27de:;
  /* 104b27de mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 104b27e1 push edx */
  push32((uint32_t)(EDX));
  /* 104b27e2 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 104b27e5 push eax */
  push32((uint32_t)(EAX));
  /* 104b27e6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 104b27e9 push ecx */
  push32((uint32_t)(ECX));
  /* 104b27ea mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104b27ed push edx */
  push32((uint32_t)(EDX));
  /* 104b27ee push 1 */
  push32((uint32_t)(0x1u));
  /* 104b27f0 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 104b27f3 push eax */
  push32((uint32_t)(EAX));
  /* 104b27f4 call dword ptr [0x104d0314] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0314))), 0x104b27fau);
  /* 104b27fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104b27fc jne 0x104b2802 */
  if (!C.zf) goto L_104b2802;
  /* 104b27fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b2800 jmp 0x104b2824 */
  goto L_104b2824;
L_104b2802:;
  /* 104b2802 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104b2805 push ecx */
  push32((uint32_t)(ECX));
  /* 104b2806 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 104b2809 push edx */
  push32((uint32_t)(EDX));
  /* 104b280a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104b280d push eax */
  push32((uint32_t)(EAX));
  /* 104b280e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104b2811 push ecx */
  push32((uint32_t)(ECX));
  /* 104b2812 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104b2815 push edx */
  push32((uint32_t)(EDX));
  /* 104b2816 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b2819 push eax */
  push32((uint32_t)(EAX));
  /* 104b281a call dword ptr [0x104d022c] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d022c))), 0x104b2820u);
  /* 104b2820 jmp 0x104b2824 */
  goto L_104b2824;
L_104b2822:;
  /* 104b2822 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104b2824:;
  /* 104b2824 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 104b2827 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104b282a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 104b2831 pop edi */
  EDI = (pop32());
  /* 104b2832 pop esi */
  ESI = (pop32());
  /* 104b2833 pop ebx */
  EBX = (pop32());
  /* 104b2834 mov esp, ebp */
  ESP = (EBP);
  /* 104b2836 pop ebp */
  EBP = (pop32());
  /* 104b2837 ret  */
  ESPCHK(0x104b2440u, _esp0);
  ESP += 4; return;
}

/* FUN_10012840 @ 0x104b2840 (80 bytes, 32 insns) */
void f_104b2840(void) {
  FTRACE(0x104b2840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104b2840 push ebp */
  push32((uint32_t)(EBP));
  /* 104b2841 mov ebp, esp */
  EBP = (ESP);
  /* 104b2843 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104b2846 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104b2849 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104b284c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b284f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_104b2852:;
  /* 104b2852 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104b2855 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104b2858 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104b285b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104b285e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104b2860 je 0x104b2877 */
  if (C.zf) goto L_104b2877;
  /* 104b2862 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b2865 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104b2868 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104b286a je 0x104b2877 */
  if (C.zf) goto L_104b2877;
  /* 104b286c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b286f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b2872 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104b2875 jmp 0x104b2852 */
  goto L_104b2852;
L_104b2877:;
  /* 104b2877 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b287a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104b287d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104b287f jne 0x104b2889 */
  if (!C.zf) goto L_104b2889;
  /* 104b2881 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b2884 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104b2887 jmp 0x104b288c */
  goto L_104b288c;
L_104b2889:;
  /* 104b2889 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_104b288c:;
  /* 104b288c mov esp, ebp */
  ESP = (EBP);
  /* 104b288e pop ebp */
  EBP = (pop32());
  /* 104b288f ret  */
  ESPCHK(0x104b2840u, _esp0);
  ESP += 4; return;
}

/* FUN_10012890 @ 0x104b2890 (736 bytes, 224 insns) */
void f_104b2890(void) {
  FTRACE(0x104b2890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104b2890 push ebp */
  push32((uint32_t)(EBP));
  /* 104b2891 mov ebp, esp */
  EBP = (ESP);
  /* 104b2893 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104b2896 push esi */
  push32((uint32_t)(ESI));
  /* 104b2897 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b289b je 0x104b28bc */
  if (C.zf) goto L_104b28bc;
  /* 104b289d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 104b289f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b28a2 push eax */
  push32((uint32_t)(EAX));
  /* 104b28a3 call 0x104b2ce0 */
  push32(0x104b28a8u); f_104b2ce0();
  /* 104b28a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b28ab mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 104b28ae cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b28b2 je 0x104b28bc */
  if (C.zf) goto L_104b28bc;
  /* 104b28b4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b28b7 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b28ba jne 0x104b28c4 */
  if (!C.zf) goto L_104b28c4;
L_104b28bc:;
  /* 104b28bc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104b28bf jmp 0x104b2b6b */
  goto L_104b2b6b;
L_104b28c4:;
  /* 104b28c4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104b28c7 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 104b28cb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 104b28cd sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104b28cf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 104b28d0 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 104b28d3 mov ecx, dword ptr [0x104ce43c] */
  ECX = (r32((uint32_t)(0x104ce43c)));
  /* 104b28d9 cmp ecx, dword ptr [0x104ce440] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x104ce440))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b28df jne 0x104b28f5 */
  if (!C.zf) goto L_104b28f5;
  /* 104b28e1 mov edx, dword ptr [0x104ce43c] */
  EDX = (r32((uint32_t)(0x104ce43c)));
  /* 104b28e7 push edx */
  push32((uint32_t)(EDX));
  /* 104b28e8 call 0x104b2bf0 */
  push32(0x104b28edu); f_104b2bf0();
  /* 104b28ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b28f0 mov dword ptr [0x104ce43c], eax */
  w32((uint32_t)(0x104ce43c), (EAX));
L_104b28f5:;
  /* 104b28f5 cmp dword ptr [0x104ce43c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce43c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b28fc jne 0x104b29b5 */
  if (!C.zf) goto L_104b29b5;
  /* 104b2902 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b2906 je 0x104b2927 */
  if (C.zf) goto L_104b2927;
  /* 104b2908 cmp dword ptr [0x104ce444], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce444))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b290f je 0x104b2927 */
  if (C.zf) goto L_104b2927;
  /* 104b2911 call 0x104b2390 */
  push32(0x104b2916u); f_104b2390();
  /* 104b2916 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104b2918 je 0x104b2922 */
  if (C.zf) goto L_104b2922;
  /* 104b291a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104b291d jmp 0x104b2b6b */
  goto L_104b2b6b;
L_104b2922:;
  /* 104b2922 jmp 0x104b29b5 */
  goto L_104b29b5;
L_104b2927:;
  /* 104b2927 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b292b je 0x104b2934 */
  if (C.zf) goto L_104b2934;
  /* 104b292d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b292f jmp 0x104b2b6b */
  goto L_104b2b6b;
L_104b2934:;
  /* 104b2934 cmp dword ptr [0x104ce43c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce43c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b293b jne 0x104b2974 */
  if (!C.zf) goto L_104b2974;
  /* 104b293d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 104b2942 push 0x104ca8e8 */
  push32((uint32_t)(0x104ca8e8u));
  /* 104b2947 push 2 */
  push32((uint32_t)(0x2u));
  /* 104b2949 push 4 */
  push32((uint32_t)(0x4u));
  /* 104b294b call 0x104a2890 */
  push32(0x104b2950u); f_104a2890();
  /* 104b2950 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b2953 mov dword ptr [0x104ce43c], eax */
  w32((uint32_t)(0x104ce43c), (EAX));
  /* 104b2958 cmp dword ptr [0x104ce43c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce43c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b295f jne 0x104b2969 */
  if (!C.zf) goto L_104b2969;
  /* 104b2961 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104b2964 jmp 0x104b2b6b */
  goto L_104b2b6b;
L_104b2969:;
  /* 104b2969 mov eax, dword ptr [0x104ce43c] */
  EAX = (r32((uint32_t)(0x104ce43c)));
  /* 104b296e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_104b2974:;
  /* 104b2974 cmp dword ptr [0x104ce444], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce444))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b297b jne 0x104b29b5 */
  if (!C.zf) goto L_104b29b5;
  /* 104b297d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 104b2982 push 0x104ca8e8 */
  push32((uint32_t)(0x104ca8e8u));
  /* 104b2987 push 2 */
  push32((uint32_t)(0x2u));
  /* 104b2989 push 4 */
  push32((uint32_t)(0x4u));
  /* 104b298b call 0x104a2890 */
  push32(0x104b2990u); f_104a2890();
  /* 104b2990 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b2993 mov dword ptr [0x104ce444], eax */
  w32((uint32_t)(0x104ce444), (EAX));
  /* 104b2998 cmp dword ptr [0x104ce444], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce444))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b299f jne 0x104b29a9 */
  if (!C.zf) goto L_104b29a9;
  /* 104b29a1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104b29a4 jmp 0x104b2b6b */
  goto L_104b2b6b;
L_104b29a9:;
  /* 104b29a9 mov ecx, dword ptr [0x104ce444] */
  ECX = (r32((uint32_t)(0x104ce444)));
  /* 104b29af mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_104b29b5:;
  /* 104b29b5 mov edx, dword ptr [0x104ce43c] */
  EDX = (r32((uint32_t)(0x104ce43c)));
  /* 104b29bb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 104b29be mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104b29c1 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104b29c4 push eax */
  push32((uint32_t)(EAX));
  /* 104b29c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b29c8 push ecx */
  push32((uint32_t)(ECX));
  /* 104b29c9 call 0x104b2b70 */
  push32(0x104b29ceu); f_104b2b70();
  /* 104b29ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b29d1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104b29d4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b29d8 jl 0x104b2a71 */
  if ((C.sf!=C.of)) goto L_104b2a71;
  /* 104b29de mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b29e1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b29e4 je 0x104b2a71 */
  if (C.zf) goto L_104b2a71;
  /* 104b29ea cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b29ee je 0x104b2a63 */
  if (C.zf) goto L_104b2a63;
  /* 104b29f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 104b29f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104b29f5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b29f8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 104b29fb push edx */
  push32((uint32_t)(EDX));
  /* 104b29fc call 0x104a3320 */
  push32(0x104b2a01u); f_104a3320();
  /* 104b2a01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b2a04 jmp 0x104b2a0f */
  goto L_104b2a0f;
L_104b2a06:;
  /* 104b2a06 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104b2a09 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b2a0c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_104b2a0f:;
  /* 104b2a0f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104b2a12 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b2a15 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b2a19 je 0x104b2a30 */
  if (C.zf) goto L_104b2a30;
  /* 104b2a1b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104b2a1e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b2a21 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104b2a24 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 104b2a27 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 104b2a2b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 104b2a2e jmp 0x104b2a06 */
  goto L_104b2a06;
L_104b2a30:;
  /* 104b2a30 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 104b2a35 push 0x104ca8e8 */
  push32((uint32_t)(0x104ca8e8u));
  /* 104b2a3a push 2 */
  push32((uint32_t)(0x2u));
  /* 104b2a3c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104b2a3f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 104b2a42 push eax */
  push32((uint32_t)(EAX));
  /* 104b2a43 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b2a46 push ecx */
  push32((uint32_t)(ECX));
  /* 104b2a47 call 0x104a2d20 */
  push32(0x104b2a4cu); f_104a2d20();
  /* 104b2a4c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b2a4f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104b2a52 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b2a56 je 0x104b2a61 */
  if (C.zf) goto L_104b2a61;
  /* 104b2a58 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b2a5b mov dword ptr [0x104ce43c], edx */
  w32((uint32_t)(0x104ce43c), (EDX));
L_104b2a61:;
  /* 104b2a61 jmp 0x104b2a6f */
  goto L_104b2a6f;
L_104b2a63:;
  /* 104b2a63 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104b2a66 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b2a69 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b2a6c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_104b2a6f:;
  /* 104b2a6f jmp 0x104b2ae4 */
  goto L_104b2ae4;
L_104b2a71:;
  /* 104b2a71 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b2a75 jne 0x104b2add */
  if (!C.zf) goto L_104b2add;
  /* 104b2a77 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b2a7b jge 0x104b2a85 */
  if ((C.sf==C.of)) goto L_104b2a85;
  /* 104b2a7d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104b2a80 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 104b2a82 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_104b2a85:;
  /* 104b2a85 push 0xce */
  push32((uint32_t)(0xceu));
  /* 104b2a8a push 0x104ca8e8 */
  push32((uint32_t)(0x104ca8e8u));
  /* 104b2a8f push 2 */
  push32((uint32_t)(0x2u));
  /* 104b2a91 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104b2a94 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 104b2a9b push edx */
  push32((uint32_t)(EDX));
  /* 104b2a9c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b2a9f push eax */
  push32((uint32_t)(EAX));
  /* 104b2aa0 call 0x104a2d20 */
  push32(0x104b2aa5u); f_104a2d20();
  /* 104b2aa5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b2aa8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104b2aab cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b2aaf jne 0x104b2ab9 */
  if (!C.zf) goto L_104b2ab9;
  /* 104b2ab1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104b2ab4 jmp 0x104b2b6b */
  goto L_104b2b6b;
L_104b2ab9:;
  /* 104b2ab9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104b2abc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b2abf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b2ac2 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 104b2ac5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104b2ac8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b2acb mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 104b2ad3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b2ad6 mov dword ptr [0x104ce43c], eax */
  w32((uint32_t)(0x104ce43c), (EAX));
  /* 104b2adb jmp 0x104b2ae4 */
  goto L_104b2ae4;
L_104b2add:;
  /* 104b2add xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b2adf jmp 0x104b2b6b */
  goto L_104b2b6b;
L_104b2ae4:;
  /* 104b2ae4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b2ae8 je 0x104b2b69 */
  if (C.zf) goto L_104b2b69;
  /* 104b2aea push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 104b2aef push 0x104ca8e8 */
  push32((uint32_t)(0x104ca8e8u));
  /* 104b2af4 push 2 */
  push32((uint32_t)(0x2u));
  /* 104b2af6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b2af9 push ecx */
  push32((uint32_t)(ECX));
  /* 104b2afa call 0x104a56c0 */
  push32(0x104b2affu); f_104a56c0();
  /* 104b2aff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b2b02 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b2b05 push eax */
  push32((uint32_t)(EAX));
  /* 104b2b06 call 0x104a2890 */
  push32(0x104b2b0bu); f_104a2890();
  /* 104b2b0b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b2b0e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 104b2b11 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b2b15 je 0x104b2b69 */
  if (C.zf) goto L_104b2b69;
  /* 104b2b17 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b2b1a push edx */
  push32((uint32_t)(EDX));
  /* 104b2b1b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104b2b1e push eax */
  push32((uint32_t)(EAX));
  /* 104b2b1f call 0x104a5840 */
  push32(0x104b2b24u); f_104a5840();
  /* 104b2b24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b2b27 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104b2b2a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104b2b2d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104b2b30 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b2b32 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104b2b35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b2b38 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 104b2b3b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b2b3e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b2b41 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104b2b44 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104b2b47 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 104b2b49 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104b2b4b not edx */
  EDX = (~(EDX));
  /* 104b2b4d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 104b2b50 push edx */
  push32((uint32_t)(EDX));
  /* 104b2b51 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104b2b54 push eax */
  push32((uint32_t)(EAX));
  /* 104b2b55 call dword ptr [0x104d0228] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0228))), 0x104b2b5bu);
  /* 104b2b5b push 2 */
  push32((uint32_t)(0x2u));
  /* 104b2b5d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104b2b60 push ecx */
  push32((uint32_t)(ECX));
  /* 104b2b61 call 0x104a3320 */
  push32(0x104b2b66u); f_104a3320();
  /* 104b2b66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104b2b69:;
  /* 104b2b69 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104b2b6b:;
  /* 104b2b6b pop esi */
  ESI = (pop32());
  /* 104b2b6c mov esp, ebp */
  ESP = (EBP);
  /* 104b2b6e pop ebp */
  EBP = (pop32());
  /* 104b2b6f ret  */
  ESPCHK(0x104b2890u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x104b2b70 (124 bytes, 47 insns) */
void f_104b2b70(void) {
  FTRACE(0x104b2b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104b2b70 push ebp */
  push32((uint32_t)(EBP));
  /* 104b2b71 mov ebp, esp */
  EBP = (ESP);
  /* 104b2b73 push ecx */
  push32((uint32_t)(ECX));
  /* 104b2b74 mov eax, dword ptr [0x104ce43c] */
  EAX = (r32((uint32_t)(0x104ce43c)));
  /* 104b2b79 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104b2b7c jmp 0x104b2b87 */
  goto L_104b2b87;
L_104b2b7e:;
  /* 104b2b7e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b2b81 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b2b84 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_104b2b87:;
  /* 104b2b87 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b2b8a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b2b8d je 0x104b2bda */
  if (C.zf) goto L_104b2bda;
  /* 104b2b8f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104b2b92 push eax */
  push32((uint32_t)(EAX));
  /* 104b2b93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b2b96 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104b2b98 push edx */
  push32((uint32_t)(EDX));
  /* 104b2b99 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b2b9c push eax */
  push32((uint32_t)(EAX));
  /* 104b2b9d call 0x104b2340 */
  push32(0x104b2ba2u); f_104b2340();
  /* 104b2ba2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b2ba5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104b2ba7 jne 0x104b2bd8 */
  if (!C.zf) goto L_104b2bd8;
  /* 104b2ba9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b2bac mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104b2bae mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104b2bb1 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 104b2bb5 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b2bb8 je 0x104b2bca */
  if (C.zf) goto L_104b2bca;
  /* 104b2bba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b2bbd mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104b2bbf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104b2bc2 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 104b2bc6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104b2bc8 jne 0x104b2bd8 */
  if (!C.zf) goto L_104b2bd8;
L_104b2bca:;
  /* 104b2bca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b2bcd sub eax, dword ptr [0x104ce43c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x104ce43c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104b2bd3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 104b2bd6 jmp 0x104b2be8 */
  goto L_104b2be8;
L_104b2bd8:;
  /* 104b2bd8 jmp 0x104b2b7e */
  goto L_104b2b7e;
L_104b2bda:;
  /* 104b2bda mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b2bdd sub eax, dword ptr [0x104ce43c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x104ce43c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104b2be3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 104b2be6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_104b2be8:;
  /* 104b2be8 mov esp, ebp */
  ESP = (EBP);
  /* 104b2bea pop ebp */
  EBP = (pop32());
  /* 104b2beb ret  */
  ESPCHK(0x104b2b70u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x104b2bf0 (238 bytes, 80 insns) */
void f_104b2bf0(void) {
  FTRACE(0x104b2bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104b2bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 104b2bf1 mov ebp, esp */
  EBP = (ESP);
  /* 104b2bf3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104b2bf6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 104b2bfd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b2c00 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104b2c03 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b2c07 jne 0x104b2c10 */
  if (!C.zf) goto L_104b2c10;
  /* 104b2c09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b2c0b jmp 0x104b2cda */
  goto L_104b2cda;
L_104b2c10:;
  /* 104b2c10 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b2c13 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104b2c15 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b2c18 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b2c1b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104b2c1e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104b2c20 je 0x104b2c2d */
  if (C.zf) goto L_104b2c2d;
  /* 104b2c22 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104b2c25 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b2c28 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 104b2c2b jmp 0x104b2c10 */
  goto L_104b2c10;
L_104b2c2d:;
  /* 104b2c2d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 104b2c32 push 0x104ca8e8 */
  push32((uint32_t)(0x104ca8e8u));
  /* 104b2c37 push 2 */
  push32((uint32_t)(0x2u));
  /* 104b2c39 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104b2c3c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 104b2c43 push eax */
  push32((uint32_t)(EAX));
  /* 104b2c44 call 0x104a2890 */
  push32(0x104b2c49u); f_104a2890();
  /* 104b2c49 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b2c4c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104b2c4f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104b2c52 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104b2c55 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b2c59 jne 0x104b2c65 */
  if (!C.zf) goto L_104b2c65;
  /* 104b2c5b push 9 */
  push32((uint32_t)(0x9u));
  /* 104b2c5d call 0x104a1800 */
  push32(0x104b2c62u); f_104a1800();
  /* 104b2c62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104b2c65:;
  /* 104b2c65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b2c68 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_104b2c6b:;
  /* 104b2c6b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b2c6e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b2c71 je 0x104b2cce */
  if (C.zf) goto L_104b2cce;
  /* 104b2c73 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 104b2c78 push 0x104ca8e8 */
  push32((uint32_t)(0x104ca8e8u));
  /* 104b2c7d push 2 */
  push32((uint32_t)(0x2u));
  /* 104b2c7f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b2c82 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104b2c84 push edx */
  push32((uint32_t)(EDX));
  /* 104b2c85 call 0x104a56c0 */
  push32(0x104b2c8au); f_104a56c0();
  /* 104b2c8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b2c8d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b2c90 push eax */
  push32((uint32_t)(EAX));
  /* 104b2c91 call 0x104a2890 */
  push32(0x104b2c96u); f_104a2890();
  /* 104b2c96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b2c99 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104b2c9c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 104b2c9e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104b2ca1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b2ca4 je 0x104b2cba */
  if (C.zf) goto L_104b2cba;
  /* 104b2ca6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b2ca9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104b2cab push ecx */
  push32((uint32_t)(ECX));
  /* 104b2cac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104b2caf mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104b2cb1 push eax */
  push32((uint32_t)(EAX));
  /* 104b2cb2 call 0x104a5840 */
  push32(0x104b2cb7u); f_104a5840();
  /* 104b2cb7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104b2cba:;
  /* 104b2cba mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104b2cbd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b2cc0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104b2cc3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104b2cc6 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b2cc9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 104b2ccc jmp 0x104b2c6b */
  goto L_104b2c6b;
L_104b2cce:;
  /* 104b2cce mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104b2cd1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 104b2cd7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_104b2cda:;
  /* 104b2cda mov esp, ebp */
  ESP = (EBP);
  /* 104b2cdc pop ebp */
  EBP = (pop32());
  /* 104b2cdd ret  */
  ESPCHK(0x104b2bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ce0 @ 0x104b2ce0 (237 bytes, 81 insns) */
void f_104b2ce0(void) {
  FTRACE(0x104b2ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104b2ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 104b2ce1 mov ebp, esp */
  EBP = (ESP);
  /* 104b2ce3 push ecx */
  push32((uint32_t)(ECX));
  /* 104b2ce4 cmp dword ptr [0x104cfb8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104cfb8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b2ceb jne 0x104b2d02 */
  if (!C.zf) goto L_104b2d02;
  /* 104b2ced mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104b2cf0 push eax */
  push32((uint32_t)(EAX));
  /* 104b2cf1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b2cf4 push ecx */
  push32((uint32_t)(ECX));
  /* 104b2cf5 call 0x104b2de0 */
  push32(0x104b2cfau); f_104b2de0();
  /* 104b2cfa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b2cfd jmp 0x104b2dc9 */
  goto L_104b2dc9;
L_104b2d02:;
  /* 104b2d02 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 104b2d04 call 0x104a6290 */
  push32(0x104b2d09u); f_104a6290();
  /* 104b2d09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b2d0c jmp 0x104b2d17 */
  goto L_104b2d17;
L_104b2d0e:;
  /* 104b2d0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b2d11 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b2d14 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_104b2d17:;
  /* 104b2d17 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b2d1a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 104b2d1e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 104b2d22 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b2d25 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 104b2d2b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104b2d2d je 0x104b2dab */
  if (C.zf) goto L_104b2dab;
  /* 104b2d2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b2d32 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104b2d37 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104b2d39 mov cl, byte ptr [eax + 0x104cfca1] */
  CL = (r8((uint32_t)(EAX + 0x104cfca1)));
  /* 104b2d3f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 104b2d42 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104b2d44 je 0x104b2d96 */
  if (C.zf) goto L_104b2d96;
  /* 104b2d46 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b2d49 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b2d4c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 104b2d4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b2d52 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104b2d54 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 104b2d56 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104b2d58 jne 0x104b2d68 */
  if (!C.zf) goto L_104b2d68;
  /* 104b2d5a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 104b2d5c call 0x104a6330 */
  push32(0x104b2d61u); f_104a6330();
  /* 104b2d61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b2d64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b2d66 jmp 0x104b2dc9 */
  goto L_104b2dc9;
L_104b2d68:;
  /* 104b2d68 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b2d6b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 104b2d71 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 104b2d74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b2d77 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104b2d79 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 104b2d7b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 104b2d7d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b2d80 jne 0x104b2d94 */
  if (!C.zf) goto L_104b2d94;
  /* 104b2d82 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 104b2d84 call 0x104a6330 */
  push32(0x104b2d89u); f_104a6330();
  /* 104b2d89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b2d8c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b2d8f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104b2d92 jmp 0x104b2dc9 */
  goto L_104b2dc9;
L_104b2d94:;
  /* 104b2d94 jmp 0x104b2da6 */
  goto L_104b2da6;
L_104b2d96:;
  /* 104b2d96 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b2d99 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 104b2d9f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b2da2 jne 0x104b2da6 */
  if (!C.zf) goto L_104b2da6;
  /* 104b2da4 jmp 0x104b2dab */
  goto L_104b2dab;
L_104b2da6:;
  /* 104b2da6 jmp 0x104b2d0e */
  goto L_104b2d0e;
L_104b2dab:;
  /* 104b2dab push 0x19 */
  push32((uint32_t)(0x19u));
  /* 104b2dad call 0x104a6330 */
  push32(0x104b2db2u); f_104a6330();
  /* 104b2db2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104b2db5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104b2db8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104b2dbd cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104b2dc0 jne 0x104b2dc7 */
  if (!C.zf) goto L_104b2dc7;
  /* 104b2dc2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104b2dc5 jmp 0x104b2dc9 */
  goto L_104b2dc9;
L_104b2dc7:;
  /* 104b2dc7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104b2dc9:;
  /* 104b2dc9 mov esp, ebp */
  ESP = (EBP);
  /* 104b2dcb pop ebp */
  EBP = (pop32());
  /* 104b2dcc ret  */
  ESPCHK(0x104b2ce0u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x104b2de0 (193 bytes, 87 insns) */
void f_104b2de0(void) {
  FTRACE(0x104b2de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104b2de0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b2de2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 104b2de6 push ebx */
  push32((uint32_t)(EBX));
  /* 104b2de7 mov ebx, eax */
  EBX = (EAX);
  /* 104b2de9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 104b2dec mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 104b2df0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 104b2df6 je 0x104b2e0b */
  if (C.zf) goto L_104b2e0b;
L_104b2df8:;
  /* 104b2df8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 104b2dfa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 104b2dfb cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104b2dfd je 0x104b2dd0 */
  if (C.zf) { jmp_ind(0x104b2dd0u); return; }
  /* 104b2dff test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 104b2e01 je 0x104b2e54 */
  if (C.zf) goto L_104b2e54;
  /* 104b2e03 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 104b2e09 jne 0x104b2df8 */
  if (!C.zf) goto L_104b2df8;
L_104b2e0b:;
  /* 104b2e0b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 104b2e0d push edi */
  push32((uint32_t)(EDI));
  /* 104b2e0e mov eax, ebx */
  EAX = (EBX);
  /* 104b2e10 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 104b2e13 push esi */
  push32((uint32_t)(ESI));
  /* 104b2e14 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_104b2e16:;
  /* 104b2e16 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 104b2e18 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 104b2e1d mov eax, ecx */
  EAX = (ECX);
  /* 104b2e1f mov esi, edi */
  ESI = (EDI);
  /* 104b2e21 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 104b2e23 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 104b2e25 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 104b2e27 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 104b2e2a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104b2e2d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 104b2e2f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 104b2e31 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104b2e34 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 104b2e3a jne 0x104b2e58 */
  if (!C.zf) goto L_104b2e58;
  /* 104b2e3c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 104b2e41 je 0x104b2e16 */
  if (C.zf) goto L_104b2e16;
  /* 104b2e43 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 104b2e48 jne 0x104b2e52 */
  if (!C.zf) goto L_104b2e52;
  /* 104b2e4a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 104b2e50 jne 0x104b2e16 */
  if (!C.zf) goto L_104b2e16;
L_104b2e52:;
  /* 104b2e52 pop esi */
  ESI = (pop32());
  /* 104b2e53 pop edi */
  EDI = (pop32());
L_104b2e54:;
  /* 104b2e54 pop ebx */
  EBX = (pop32());
  /* 104b2e55 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104b2e57 ret  */
  ESPCHK(0x104b2de0u, _esp0);
  ESP += 4; return;
L_104b2e58:;
  /* 104b2e58 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 104b2e5b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104b2e5d je 0x104b2e95 */
  if (C.zf) goto L_104b2e95;
  /* 104b2e5f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 104b2e61 je 0x104b2e52 */
  if (C.zf) goto L_104b2e52;
  /* 104b2e63 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104b2e65 je 0x104b2e8e */
  if (C.zf) goto L_104b2e8e;
  /* 104b2e67 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 104b2e69 je 0x104b2e52 */
  if (C.zf) goto L_104b2e52;
  /* 104b2e6b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 104b2e6e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104b2e70 je 0x104b2e87 */
  if (C.zf) goto L_104b2e87;
  /* 104b2e72 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 104b2e74 je 0x104b2e52 */
  if (C.zf) goto L_104b2e52;
  /* 104b2e76 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104b2e78 je 0x104b2e80 */
  if (C.zf) goto L_104b2e80;
  /* 104b2e7a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 104b2e7c je 0x104b2e52 */
  if (C.zf) goto L_104b2e52;
  /* 104b2e7e jmp 0x104b2e16 */
  goto L_104b2e16;
L_104b2e80:;
  /* 104b2e80 pop esi */
  ESI = (pop32());
  /* 104b2e81 pop edi */
  EDI = (pop32());
  /* 104b2e82 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 104b2e85 pop ebx */
  EBX = (pop32());
  /* 104b2e86 ret  */
  ESPCHK(0x104b2de0u, _esp0);
  ESP += 4; return;
L_104b2e87:;
  /* 104b2e87 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 104b2e8a pop esi */
  ESI = (pop32());
  /* 104b2e8b pop edi */
  EDI = (pop32());
  /* 104b2e8c pop ebx */
  EBX = (pop32());
  /* 104b2e8d ret  */
  ESPCHK(0x104b2de0u, _esp0);
  ESP += 4; return;
L_104b2e8e:;
  /* 104b2e8e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 104b2e91 pop esi */
  ESI = (pop32());
  /* 104b2e92 pop edi */
  EDI = (pop32());
  /* 104b2e93 pop ebx */
  EBX = (pop32());
  /* 104b2e94 ret  */
  ESPCHK(0x104b2de0u, _esp0);
  ESP += 4; return;
L_104b2e95:;
  /* 104b2e95 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 104b2e98 pop esi */
  ESI = (pop32());
  /* 104b2e99 pop edi */
  EDI = (pop32());
  /* 104b2e9a pop ebx */
  EBX = (pop32());
  /* 104b2e9b ret  */
  ESPCHK(0x104b2de0u, _esp0);
  ESP += 4; return;
  /* 104b2e9c jmp dword ptr [0x104d024c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x104d024c)))); return;
}

/* RtlUnwind @ 0x104b2fec (6 bytes, 1 insns) */
void f_104b2fec(void) {
  FTRACE(0x104b2fecu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104b2fec jmp dword ptr [0x104d032c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x104d032c)))); return;
}

