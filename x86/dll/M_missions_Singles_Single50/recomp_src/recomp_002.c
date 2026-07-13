#include "recomp.h"

/* FUN_10015690 @ 0x11865690 (878 bytes, 273 insns) */
void f_11865690(void) {
  FTRACE(0x11865690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11865690 push ebp */
  push32((uint32_t)(EBP));
  /* 11865691 mov ebp, esp */
  EBP = (ESP);
  /* 11865693 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11865696 push esi */
  push32((uint32_t)(ESI));
  /* 11865697 mov eax, dword ptr [0x11883c98] */
  EAX = (r32((uint32_t)(0x11883c98)));
  /* 1186569c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1186569f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 118656a6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 118656ad jmp 0x118656b8 */
  goto L_118656b8;
L_118656af:;
  /* 118656af mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 118656b2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118656b5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_118656b8:;
  /* 118656b8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118656bc jae 0x118656f1 */
  if (!C.cf) goto L_118656f1;
  /* 118656be mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 118656c1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118656c4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 118656c7 push ecx */
  push32((uint32_t)(ECX));
  /* 118656c8 call 0x1185b510 */
  push32(0x118656cdu); f_1185b510();
  /* 118656cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118656d0 mov esi, eax */
  ESI = (EAX);
  /* 118656d2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 118656d5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118656d8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 118656dc push ecx */
  push32((uint32_t)(ECX));
  /* 118656dd call 0x1185b510 */
  push32(0x118656e2u); f_1185b510();
  /* 118656e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118656e5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118656e8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 118656ec mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 118656ef jmp 0x118656af */
  goto L_118656af;
L_118656f1:;
  /* 118656f1 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 118656f8 jmp 0x11865703 */
  goto L_11865703;
L_118656fa:;
  /* 118656fa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 118656fd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11865700 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11865703:;
  /* 11865703 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11865707 jae 0x1186573d */
  if (!C.cf) goto L_1186573d;
  /* 11865709 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1186570c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1186570f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11865713 push eax */
  push32((uint32_t)(EAX));
  /* 11865714 call 0x1185b510 */
  push32(0x11865719u); f_1185b510();
  /* 11865719 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186571c mov esi, eax */
  ESI = (EAX);
  /* 1186571e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11865721 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11865724 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11865728 push eax */
  push32((uint32_t)(EAX));
  /* 11865729 call 0x1185b510 */
  push32(0x1186572eu); f_1185b510();
  /* 1186572e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11865731 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11865734 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11865738 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1186573b jmp 0x118656fa */
  goto L_118656fa;
L_1186573d:;
  /* 1186573d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11865740 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 11865746 push eax */
  push32((uint32_t)(EAX));
  /* 11865747 call 0x1185b510 */
  push32(0x1186574cu); f_1185b510();
  /* 1186574c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186574f mov esi, eax */
  ESI = (EAX);
  /* 11865751 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11865754 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 1186575a push edx */
  push32((uint32_t)(EDX));
  /* 1186575b call 0x1185b510 */
  push32(0x11865760u); f_1185b510();
  /* 11865760 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11865763 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11865766 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1186576a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1186576d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11865770 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 11865776 push edx */
  push32((uint32_t)(EDX));
  /* 11865777 call 0x1185b510 */
  push32(0x1186577cu); f_1185b510();
  /* 1186577c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186577f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11865782 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11865786 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11865789 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1186578c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 11865792 push ecx */
  push32((uint32_t)(ECX));
  /* 11865793 call 0x1185b510 */
  push32(0x11865798u); f_1185b510();
  /* 11865798 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186579b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1186579e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 118657a2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 118657a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118657a8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 118657ae push edx */
  push32((uint32_t)(EDX));
  /* 118657af call 0x1185b510 */
  push32(0x118657b4u); f_1185b510();
  /* 118657b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118657b7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118657ba lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 118657be mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 118657c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118657c4 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118657c9 push eax */
  push32((uint32_t)(EAX));
  /* 118657ca call 0x118586c0 */
  push32(0x118657cfu); f_118586c0();
  /* 118657cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118657d2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118657d5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118657d9 je 0x118659f6 */
  if (C.zf) goto L_118659f6;
  /* 118657df mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118657e2 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 118657e5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118657e8 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118657ee mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 118657f1 push 0xac */
  push32((uint32_t)(0xacu));
  /* 118657f6 mov eax, dword ptr [0x11883c98] */
  EAX = (r32((uint32_t)(0x11883c98)));
  /* 118657fb push eax */
  push32((uint32_t)(EAX));
  /* 118657fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118657ff push ecx */
  push32((uint32_t)(ECX));
  /* 11865800 call 0x1185efc0 */
  push32(0x11865805u); f_1185efc0();
  /* 11865805 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11865808 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1186580f jmp 0x1186581a */
  goto L_1186581a;
L_11865811:;
  /* 11865811 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11865814 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11865817 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1186581a:;
  /* 1186581a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186581e jae 0x1186588e */
  if (!C.cf) goto L_1186588e;
  /* 11865820 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11865823 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11865826 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11865829 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 1186582c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1186582f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11865832 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11865835 push edx */
  push32((uint32_t)(EDX));
  /* 11865836 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11865839 push eax */
  push32((uint32_t)(EAX));
  /* 1186583a call 0x1185b690 */
  push32(0x1186583fu); f_1185b690();
  /* 1186583f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11865842 push eax */
  push32((uint32_t)(EAX));
  /* 11865843 call 0x1185b510 */
  push32(0x11865848u); f_1185b510();
  /* 11865848 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186584b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1186584e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11865852 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11865855 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11865858 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1186585b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1186585e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 11865862 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11865865 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11865868 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 1186586c push edx */
  push32((uint32_t)(EDX));
  /* 1186586d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11865870 push eax */
  push32((uint32_t)(EAX));
  /* 11865871 call 0x1185b690 */
  push32(0x11865876u); f_1185b690();
  /* 11865876 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11865879 push eax */
  push32((uint32_t)(EAX));
  /* 1186587a call 0x1185b510 */
  push32(0x1186587fu); f_1185b510();
  /* 1186587f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11865882 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11865885 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11865889 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1186588c jmp 0x11865811 */
  goto L_11865811;
L_1186588e:;
  /* 1186588e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11865895 jmp 0x118658a0 */
  goto L_118658a0;
L_11865897:;
  /* 11865897 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1186589a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1186589d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_118658a0:;
  /* 118658a0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118658a4 jae 0x11865916 */
  if (!C.cf) goto L_11865916;
  /* 118658a6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 118658a9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 118658ac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 118658af mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 118658b3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 118658b6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118658b9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 118658bd push eax */
  push32((uint32_t)(EAX));
  /* 118658be mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 118658c1 push ecx */
  push32((uint32_t)(ECX));
  /* 118658c2 call 0x1185b690 */
  push32(0x118658c7u); f_1185b690();
  /* 118658c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118658ca push eax */
  push32((uint32_t)(EAX));
  /* 118658cb call 0x1185b510 */
  push32(0x118658d0u); f_1185b510();
  /* 118658d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118658d3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 118658d6 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 118658da mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 118658dd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 118658e0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 118658e3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 118658e6 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 118658ea mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 118658ed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118658f0 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 118658f4 push eax */
  push32((uint32_t)(EAX));
  /* 118658f5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 118658f8 push ecx */
  push32((uint32_t)(ECX));
  /* 118658f9 call 0x1185b690 */
  push32(0x118658feu); f_1185b690();
  /* 118658fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11865901 push eax */
  push32((uint32_t)(EAX));
  /* 11865902 call 0x1185b510 */
  push32(0x11865907u); f_1185b510();
  /* 11865907 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186590a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1186590d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11865911 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11865914 jmp 0x11865897 */
  goto L_11865897;
L_11865916:;
  /* 11865916 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11865919 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1186591c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 11865922 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11865925 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 1186592b push ecx */
  push32((uint32_t)(ECX));
  /* 1186592c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1186592f push edx */
  push32((uint32_t)(EDX));
  /* 11865930 call 0x1185b690 */
  push32(0x11865935u); f_1185b690();
  /* 11865935 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11865938 push eax */
  push32((uint32_t)(EAX));
  /* 11865939 call 0x1185b510 */
  push32(0x1186593eu); f_1185b510();
  /* 1186593e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11865941 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11865944 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11865948 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1186594b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1186594e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11865951 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 11865957 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1186595a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 11865960 push eax */
  push32((uint32_t)(EAX));
  /* 11865961 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11865964 push ecx */
  push32((uint32_t)(ECX));
  /* 11865965 call 0x1185b690 */
  push32(0x1186596au); f_1185b690();
  /* 1186596a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186596d push eax */
  push32((uint32_t)(EAX));
  /* 1186596e call 0x1185b510 */
  push32(0x11865973u); f_1185b510();
  /* 11865973 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11865976 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11865979 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1186597d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11865980 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11865983 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11865986 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 1186598c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1186598f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 11865995 push ecx */
  push32((uint32_t)(ECX));
  /* 11865996 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11865999 push edx */
  push32((uint32_t)(EDX));
  /* 1186599a call 0x1185b690 */
  push32(0x1186599fu); f_1185b690();
  /* 1186599f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118659a2 push eax */
  push32((uint32_t)(EAX));
  /* 118659a3 call 0x1185b510 */
  push32(0x118659a8u); f_1185b510();
  /* 118659a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118659ab mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 118659ae lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 118659b2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 118659b5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 118659b8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 118659bb mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 118659c1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118659c4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 118659ca push eax */
  push32((uint32_t)(EAX));
  /* 118659cb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 118659ce push ecx */
  push32((uint32_t)(ECX));
  /* 118659cf call 0x1185b690 */
  push32(0x118659d4u); f_1185b690();
  /* 118659d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118659d7 push eax */
  push32((uint32_t)(EAX));
  /* 118659d8 call 0x1185b510 */
  push32(0x118659ddu); f_1185b510();
  /* 118659dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118659e0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 118659e3 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 118659e7 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 118659ea mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 118659ed mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 118659f0 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_118659f6:;
  /* 118659f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118659f9 pop esi */
  ESI = (pop32());
  /* 118659fa mov esp, ebp */
  ESP = (EBP);
  /* 118659fc pop ebp */
  EBP = (pop32());
  /* 118659fd ret  */
  ESPCHK(0x11865690u, _esp0);
  ESP += 4; return;
}

/* FUN_10015a00 @ 0x11865a00 (31 bytes, 15 insns) */
void f_11865a00(void) {
  FTRACE(0x11865a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11865a00 push ebp */
  push32((uint32_t)(EBP));
  /* 11865a01 mov ebp, esp */
  EBP = (ESP);
  /* 11865a03 push 0 */
  push32((uint32_t)(0x0u));
  /* 11865a05 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11865a08 push eax */
  push32((uint32_t)(EAX));
  /* 11865a09 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11865a0c push ecx */
  push32((uint32_t)(ECX));
  /* 11865a0d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11865a10 push edx */
  push32((uint32_t)(EDX));
  /* 11865a11 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11865a14 push eax */
  push32((uint32_t)(EAX));
  /* 11865a15 call 0x11865a20 */
  push32(0x11865a1au); f_11865a20();
  /* 11865a1a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11865a1d pop ebp */
  EBP = (pop32());
  /* 11865a1e ret  */
  ESPCHK(0x11865a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10015a20 @ 0x11865a20 (393 bytes, 123 insns) */
void f_11865a20(void) {
  FTRACE(0x11865a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11865a20 push ebp */
  push32((uint32_t)(EBP));
  /* 11865a21 mov ebp, esp */
  EBP = (ESP);
  /* 11865a23 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11865a26 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11865a2a jne 0x11865a36 */
  if (!C.zf) goto L_11865a36;
  /* 11865a2c mov eax, dword ptr [0x11883c98] */
  EAX = (r32((uint32_t)(0x11883c98)));
  /* 11865a31 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11865a34 jmp 0x11865a3c */
  goto L_11865a3c;
L_11865a36:;
  /* 11865a36 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11865a39 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11865a3c:;
  /* 11865a3c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11865a3f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11865a42 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11865a45 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11865a48 push 0x11884c0c */
  push32((uint32_t)(0x11884c0cu));
  /* 11865a4d call dword ptr [0x118873d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118873d0))), 0x11865a53u);
  /* 11865a53 cmp dword ptr [0x11884bfc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11884bfc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11865a5a je 0x11865a7a */
  if (C.zf) goto L_11865a7a;
  /* 11865a5c push 0x11884c0c */
  push32((uint32_t)(0x11884c0cu));
  /* 11865a61 call dword ptr [0x118873c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118873c0))), 0x11865a67u);
  /* 11865a67 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11865a69 call 0x1185c0e0 */
  push32(0x11865a6eu); f_1185c0e0();
  /* 11865a6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11865a71 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11865a78 jmp 0x11865a81 */
  goto L_11865a81;
L_11865a7a:;
  /* 11865a7a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11865a81:;
  /* 11865a81 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11865a85 jbe 0x11865b72 */
  if ((C.cf||C.zf)) goto L_11865b72;
  /* 11865a8b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11865a8e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11865a90 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 11865a93 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11865a97 je 0x11865aa1 */
  if (C.zf) goto L_11865aa1;
  /* 11865a99 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11865a9d je 0x11865aa6 */
  if (C.zf) goto L_11865aa6;
  /* 11865a9f jmp 0x11865b00 */
  goto L_11865b00;
L_11865aa1:;
  /* 11865aa1 jmp 0x11865b72 */
  goto L_11865b72;
L_11865aa6:;
  /* 11865aa6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11865aa9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11865aac mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11865aaf mov dword ptr [0x11884be8], 0 */
  w32((uint32_t)(0x11884be8), (0x0u));
  /* 11865ab9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11865abc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11865abf cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11865ac2 jne 0x11865ad7 */
  if (!C.zf) goto L_11865ad7;
  /* 11865ac4 mov dword ptr [0x11884be8], 1 */
  w32((uint32_t)(0x11884be8), (0x1u));
  /* 11865ace mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11865ad1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11865ad4 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11865ad7:;
  /* 11865ad7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11865ada push ecx */
  push32((uint32_t)(ECX));
  /* 11865adb lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11865ade push edx */
  push32((uint32_t)(EDX));
  /* 11865adf lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11865ae2 push eax */
  push32((uint32_t)(EAX));
  /* 11865ae3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11865ae6 push ecx */
  push32((uint32_t)(ECX));
  /* 11865ae7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11865aea mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11865aec push eax */
  push32((uint32_t)(EAX));
  /* 11865aed call 0x11865bb0 */
  push32(0x11865af2u); f_11865bb0();
  /* 11865af2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11865af5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11865af8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11865afb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11865afe jmp 0x11865b6d */
  goto L_11865b6d;
L_11865b00:;
  /* 11865b00 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11865b03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11865b05 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11865b07 mov ecx, dword ptr [0x11882c98] */
  ECX = (r32((uint32_t)(0x11882c98)));
  /* 11865b0d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11865b0f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11865b13 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11865b19 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11865b1b je 0x11865b48 */
  if (C.zf) goto L_11865b48;
  /* 11865b1d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11865b21 jbe 0x11865b48 */
  if ((C.cf||C.zf)) goto L_11865b48;
  /* 11865b23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11865b26 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11865b29 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11865b2b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11865b2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11865b30 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11865b33 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11865b36 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11865b39 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11865b3c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11865b3f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11865b42 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11865b45 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11865b48:;
  /* 11865b48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11865b4b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11865b4e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11865b50 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11865b52 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11865b55 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11865b58 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11865b5b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11865b5e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11865b61 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11865b64 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11865b67 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11865b6a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11865b6d:;
  /* 11865b6d jmp 0x11865a81 */
  goto L_11865a81;
L_11865b72:;
  /* 11865b72 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11865b76 je 0x11865b84 */
  if (C.zf) goto L_11865b84;
  /* 11865b78 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11865b7a call 0x1185c180 */
  push32(0x11865b7fu); f_1185c180();
  /* 11865b7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11865b82 jmp 0x11865b8f */
  goto L_11865b8f;
L_11865b84:;
  /* 11865b84 push 0x11884c0c */
  push32((uint32_t)(0x11884c0cu));
  /* 11865b89 call dword ptr [0x118873c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118873c0))), 0x11865b8fu);
L_11865b8f:;
  /* 11865b8f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11865b93 jbe 0x11865ba3 */
  if ((C.cf||C.zf)) goto L_11865ba3;
  /* 11865b95 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11865b98 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11865b9b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11865b9e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11865ba1 jmp 0x11865ba5 */
  goto L_11865ba5;
L_11865ba3:;
  /* 11865ba3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11865ba5:;
  /* 11865ba5 mov esp, ebp */
  ESP = (EBP);
  /* 11865ba7 pop ebp */
  EBP = (pop32());
  /* 11865ba8 ret  */
  ESPCHK(0x11865a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10015bb0 @ 0x11865bb0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_11865bb0(void) {
  FTRACE(0x11865bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11865bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11865bb1 mov ebp, esp */
  EBP = (ESP);
  /* 11865bb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11865bb6 push esi */
  push32((uint32_t)(ESI));
  /* 11865bb7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 11865bbb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11865bbe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11865bc1 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11865bc4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11865bc7 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11865bcb ja 0x11866118 */
  if ((!C.cf&&!C.zf)) goto L_11866118;
  /* 11865bd1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11865bd4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11865bd6 mov dl, byte ptr [eax + 0x11866179] */
  DL = (r8((uint32_t)(EAX + 0x11866179)));
  /* 11865bdc jmp dword ptr [edx*4 + 0x1186611d] */
  switch (EDX) {
    case 0: goto L_118660f6;
    case 1: goto L_11865c05;
    case 2: goto L_11865c4b;
    case 3: goto L_11865d98;
    case 4: goto L_11865dc0;
    case 5: goto L_11865e5f;
    case 6: goto L_11865ecb;
    case 7: goto L_11865ef4;
    case 8: goto L_11865f35;
    case 9: goto L_11866017;
    case 10: goto L_1186607e;
    case 11: goto L_118660cb;
    case 12: goto L_11865be3;
    case 13: goto L_11865c28;
    case 14: goto L_11865c6e;
    case 15: goto L_11865d6e;
    case 16: goto L_11865e05;
    case 17: goto L_11865e32;
    case 18: goto L_11865e87;
    case 19: goto L_11865f0b;
    case 20: goto L_11865fb9;
    case 21: goto L_11866048;
    case 22: goto L_11866118;
    default: x86_unimpl("switch@0x11865bdc out of table"); return;
  }
L_11865be3:;
  /* 11865be3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11865be6 push ecx */
  push32((uint32_t)(ECX));
  /* 11865be7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11865bea push edx */
  push32((uint32_t)(EDX));
  /* 11865beb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11865bee mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11865bf1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11865bf4 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11865bf7 push eax */
  push32((uint32_t)(EAX));
  /* 11865bf8 call 0x118661d0 */
  push32(0x11865bfdu); f_118661d0();
  /* 11865bfd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11865c00 jmp 0x11866118 */
  goto L_11866118;
L_11865c05:;
  /* 11865c05 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11865c08 push ecx */
  push32((uint32_t)(ECX));
  /* 11865c09 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11865c0c push edx */
  push32((uint32_t)(EDX));
  /* 11865c0d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11865c10 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11865c13 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11865c16 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 11865c1a push eax */
  push32((uint32_t)(EAX));
  /* 11865c1b call 0x118661d0 */
  push32(0x11865c20u); f_118661d0();
  /* 11865c20 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11865c23 jmp 0x11866118 */
  goto L_11866118;
L_11865c28:;
  /* 11865c28 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11865c2b push ecx */
  push32((uint32_t)(ECX));
  /* 11865c2c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11865c2f push edx */
  push32((uint32_t)(EDX));
  /* 11865c30 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11865c33 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11865c36 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11865c39 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11865c3d push eax */
  push32((uint32_t)(EAX));
  /* 11865c3e call 0x118661d0 */
  push32(0x11865c43u); f_118661d0();
  /* 11865c43 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11865c46 jmp 0x11866118 */
  goto L_11866118;
L_11865c4b:;
  /* 11865c4b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11865c4e push ecx */
  push32((uint32_t)(ECX));
  /* 11865c4f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11865c52 push edx */
  push32((uint32_t)(EDX));
  /* 11865c53 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11865c56 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11865c59 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11865c5c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11865c60 push eax */
  push32((uint32_t)(EAX));
  /* 11865c61 call 0x118661d0 */
  push32(0x11865c66u); f_118661d0();
  /* 11865c66 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11865c69 jmp 0x11866118 */
  goto L_11866118;
L_11865c6e:;
  /* 11865c6e cmp dword ptr [0x11884be8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11884be8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11865c75 je 0x11865cf6 */
  if (C.zf) goto L_11865cf6;
  /* 11865c77 mov dword ptr [0x11884be8], 0 */
  w32((uint32_t)(0x11884be8), (0x0u));
  /* 11865c81 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11865c84 push ecx */
  push32((uint32_t)(ECX));
  /* 11865c85 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11865c88 push edx */
  push32((uint32_t)(EDX));
  /* 11865c89 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11865c8c push eax */
  push32((uint32_t)(EAX));
  /* 11865c8d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11865c90 push ecx */
  push32((uint32_t)(ECX));
  /* 11865c91 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11865c94 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 11865c9a push eax */
  push32((uint32_t)(EAX));
  /* 11865c9b call 0x11866380 */
  push32(0x11865ca0u); f_11866380();
  /* 11865ca0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11865ca3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11865ca6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11865ca9 jne 0x11865cb0 */
  if (!C.zf) goto L_11865cb0;
  /* 11865cab jmp 0x11866118 */
  goto L_11866118;
L_11865cb0:;
  /* 11865cb0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11865cb3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11865cb5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 11865cb8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11865cbb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11865cbd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11865cc0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11865cc3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11865cc5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11865cc8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11865cca sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11865ccd mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11865cd0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11865cd2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11865cd5 push ecx */
  push32((uint32_t)(ECX));
  /* 11865cd6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11865cd9 push edx */
  push32((uint32_t)(EDX));
  /* 11865cda mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11865cdd push eax */
  push32((uint32_t)(EAX));
  /* 11865cde mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11865ce1 push ecx */
  push32((uint32_t)(ECX));
  /* 11865ce2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11865ce5 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 11865ceb push eax */
  push32((uint32_t)(EAX));
  /* 11865cec call 0x11866380 */
  push32(0x11865cf1u); f_11866380();
  /* 11865cf1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11865cf4 jmp 0x11865d69 */
  goto L_11865d69;
L_11865cf6:;
  /* 11865cf6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11865cf9 push ecx */
  push32((uint32_t)(ECX));
  /* 11865cfa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11865cfd push edx */
  push32((uint32_t)(EDX));
  /* 11865cfe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11865d01 push eax */
  push32((uint32_t)(EAX));
  /* 11865d02 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11865d05 push ecx */
  push32((uint32_t)(ECX));
  /* 11865d06 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11865d09 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 11865d0f push eax */
  push32((uint32_t)(EAX));
  /* 11865d10 call 0x11866380 */
  push32(0x11865d15u); f_11866380();
  /* 11865d15 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11865d18 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11865d1b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11865d1e jne 0x11865d25 */
  if (!C.zf) goto L_11865d25;
  /* 11865d20 jmp 0x11866118 */
  goto L_11866118;
L_11865d25:;
  /* 11865d25 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11865d28 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11865d2a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 11865d2d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11865d30 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11865d32 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11865d35 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11865d38 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11865d3a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11865d3d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11865d3f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11865d42 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11865d45 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11865d47 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11865d4a push ecx */
  push32((uint32_t)(ECX));
  /* 11865d4b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11865d4e push edx */
  push32((uint32_t)(EDX));
  /* 11865d4f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11865d52 push eax */
  push32((uint32_t)(EAX));
  /* 11865d53 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11865d56 push ecx */
  push32((uint32_t)(ECX));
  /* 11865d57 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11865d5a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 11865d60 push eax */
  push32((uint32_t)(EAX));
  /* 11865d61 call 0x11866380 */
  push32(0x11865d66u); f_11866380();
  /* 11865d66 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11865d69:;
  /* 11865d69 jmp 0x11866118 */
  goto L_11866118;
L_11865d6e:;
  /* 11865d6e mov ecx, dword ptr [0x11884be8] */
  ECX = (r32((uint32_t)(0x11884be8)));
  /* 11865d74 mov dword ptr [0x11884bf8], ecx */
  w32((uint32_t)(0x11884bf8), (ECX));
  /* 11865d7a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11865d7d push edx */
  push32((uint32_t)(EDX));
  /* 11865d7e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11865d81 push eax */
  push32((uint32_t)(EAX));
  /* 11865d82 push 2 */
  push32((uint32_t)(0x2u));
  /* 11865d84 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11865d87 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11865d8a push edx */
  push32((uint32_t)(EDX));
  /* 11865d8b call 0x11866220 */
  push32(0x11865d90u); f_11866220();
  /* 11865d90 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11865d93 jmp 0x11866118 */
  goto L_11866118;
L_11865d98:;
  /* 11865d98 mov eax, dword ptr [0x11884be8] */
  EAX = (r32((uint32_t)(0x11884be8)));
  /* 11865d9d mov dword ptr [0x11884bf8], eax */
  w32((uint32_t)(0x11884bf8), (EAX));
  /* 11865da2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11865da5 push ecx */
  push32((uint32_t)(ECX));
  /* 11865da6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11865da9 push edx */
  push32((uint32_t)(EDX));
  /* 11865daa push 2 */
  push32((uint32_t)(0x2u));
  /* 11865dac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11865daf mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11865db2 push ecx */
  push32((uint32_t)(ECX));
  /* 11865db3 call 0x11866220 */
  push32(0x11865db8u); f_11866220();
  /* 11865db8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11865dbb jmp 0x11866118 */
  goto L_11866118;
L_11865dc0:;
  /* 11865dc0 mov edx, dword ptr [0x11884be8] */
  EDX = (r32((uint32_t)(0x11884be8)));
  /* 11865dc6 mov dword ptr [0x11884bf8], edx */
  w32((uint32_t)(0x11884bf8), (EDX));
  /* 11865dcc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11865dcf mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 11865dd2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11865dd3 mov ecx, 0xc */
  ECX = (0xcu);
  /* 11865dd8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11865dda mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11865ddd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11865de1 jne 0x11865dea */
  if (!C.zf) goto L_11865dea;
  /* 11865de3 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_11865dea:;
  /* 11865dea mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11865ded push edx */
  push32((uint32_t)(EDX));
  /* 11865dee mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11865df1 push eax */
  push32((uint32_t)(EAX));
  /* 11865df2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11865df4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11865df7 push ecx */
  push32((uint32_t)(ECX));
  /* 11865df8 call 0x11866220 */
  push32(0x11865dfdu); f_11866220();
  /* 11865dfd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11865e00 jmp 0x11866118 */
  goto L_11866118;
L_11865e05:;
  /* 11865e05 mov edx, dword ptr [0x11884be8] */
  EDX = (r32((uint32_t)(0x11884be8)));
  /* 11865e0b mov dword ptr [0x11884bf8], edx */
  w32((uint32_t)(0x11884bf8), (EDX));
  /* 11865e11 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11865e14 push eax */
  push32((uint32_t)(EAX));
  /* 11865e15 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11865e18 push ecx */
  push32((uint32_t)(ECX));
  /* 11865e19 push 3 */
  push32((uint32_t)(0x3u));
  /* 11865e1b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11865e1e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11865e21 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11865e24 push eax */
  push32((uint32_t)(EAX));
  /* 11865e25 call 0x11866220 */
  push32(0x11865e2au); f_11866220();
  /* 11865e2a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11865e2d jmp 0x11866118 */
  goto L_11866118;
L_11865e32:;
  /* 11865e32 mov ecx, dword ptr [0x11884be8] */
  ECX = (r32((uint32_t)(0x11884be8)));
  /* 11865e38 mov dword ptr [0x11884bf8], ecx */
  w32((uint32_t)(0x11884bf8), (ECX));
  /* 11865e3e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11865e41 push edx */
  push32((uint32_t)(EDX));
  /* 11865e42 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11865e45 push eax */
  push32((uint32_t)(EAX));
  /* 11865e46 push 2 */
  push32((uint32_t)(0x2u));
  /* 11865e48 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11865e4b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11865e4e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11865e51 push edx */
  push32((uint32_t)(EDX));
  /* 11865e52 call 0x11866220 */
  push32(0x11865e57u); f_11866220();
  /* 11865e57 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11865e5a jmp 0x11866118 */
  goto L_11866118;
L_11865e5f:;
  /* 11865e5f mov eax, dword ptr [0x11884be8] */
  EAX = (r32((uint32_t)(0x11884be8)));
  /* 11865e64 mov dword ptr [0x11884bf8], eax */
  w32((uint32_t)(0x11884bf8), (EAX));
  /* 11865e69 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11865e6c push ecx */
  push32((uint32_t)(ECX));
  /* 11865e6d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11865e70 push edx */
  push32((uint32_t)(EDX));
  /* 11865e71 push 2 */
  push32((uint32_t)(0x2u));
  /* 11865e73 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11865e76 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11865e79 push ecx */
  push32((uint32_t)(ECX));
  /* 11865e7a call 0x11866220 */
  push32(0x11865e7fu); f_11866220();
  /* 11865e7f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11865e82 jmp 0x11866118 */
  goto L_11866118;
L_11865e87:;
  /* 11865e87 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11865e8a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11865e8e jg 0x11865eac */
  if ((!C.zf&&C.sf==C.of)) goto L_11865eac;
  /* 11865e90 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11865e93 push eax */
  push32((uint32_t)(EAX));
  /* 11865e94 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11865e97 push ecx */
  push32((uint32_t)(ECX));
  /* 11865e98 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11865e9b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 11865ea1 push eax */
  push32((uint32_t)(EAX));
  /* 11865ea2 call 0x118661d0 */
  push32(0x11865ea7u); f_118661d0();
  /* 11865ea7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11865eaa jmp 0x11865ec6 */
  goto L_11865ec6;
L_11865eac:;
  /* 11865eac mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11865eaf push ecx */
  push32((uint32_t)(ECX));
  /* 11865eb0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11865eb3 push edx */
  push32((uint32_t)(EDX));
  /* 11865eb4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11865eb7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 11865ebd push ecx */
  push32((uint32_t)(ECX));
  /* 11865ebe call 0x118661d0 */
  push32(0x11865ec3u); f_118661d0();
  /* 11865ec3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11865ec6:;
  /* 11865ec6 jmp 0x11866118 */
  goto L_11866118;
L_11865ecb:;
  /* 11865ecb mov edx, dword ptr [0x11884be8] */
  EDX = (r32((uint32_t)(0x11884be8)));
  /* 11865ed1 mov dword ptr [0x11884bf8], edx */
  w32((uint32_t)(0x11884bf8), (EDX));
  /* 11865ed7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11865eda push eax */
  push32((uint32_t)(EAX));
  /* 11865edb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11865ede push ecx */
  push32((uint32_t)(ECX));
  /* 11865edf push 2 */
  push32((uint32_t)(0x2u));
  /* 11865ee1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11865ee4 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11865ee6 push eax */
  push32((uint32_t)(EAX));
  /* 11865ee7 call 0x11866220 */
  push32(0x11865eecu); f_11866220();
  /* 11865eec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11865eef jmp 0x11866118 */
  goto L_11866118;
L_11865ef4:;
  /* 11865ef4 mov ecx, dword ptr [0x11884be8] */
  ECX = (r32((uint32_t)(0x11884be8)));
  /* 11865efa mov dword ptr [0x11884bf8], ecx */
  w32((uint32_t)(0x11884bf8), (ECX));
  /* 11865f00 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11865f03 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11865f06 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11865f09 jmp 0x11865f5d */
  goto L_11865f5d;
L_11865f0b:;
  /* 11865f0b mov ecx, dword ptr [0x11884be8] */
  ECX = (r32((uint32_t)(0x11884be8)));
  /* 11865f11 mov dword ptr [0x11884bf8], ecx */
  w32((uint32_t)(0x11884bf8), (ECX));
  /* 11865f17 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11865f1a push edx */
  push32((uint32_t)(EDX));
  /* 11865f1b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11865f1e push eax */
  push32((uint32_t)(EAX));
  /* 11865f1f push 1 */
  push32((uint32_t)(0x1u));
  /* 11865f21 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11865f24 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11865f27 push edx */
  push32((uint32_t)(EDX));
  /* 11865f28 call 0x11866220 */
  push32(0x11865f2du); f_11866220();
  /* 11865f2d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11865f30 jmp 0x11866118 */
  goto L_11866118;
L_11865f35:;
  /* 11865f35 mov eax, dword ptr [0x11884be8] */
  EAX = (r32((uint32_t)(0x11884be8)));
  /* 11865f3a mov dword ptr [0x11884bf8], eax */
  w32((uint32_t)(0x11884bf8), (EAX));
  /* 11865f3f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11865f42 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11865f46 jne 0x11865f51 */
  if (!C.zf) goto L_11865f51;
  /* 11865f48 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 11865f4f jmp 0x11865f5d */
  goto L_11865f5d;
L_11865f51:;
  /* 11865f51 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11865f54 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11865f57 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11865f5a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11865f5d:;
  /* 11865f5d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11865f60 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11865f63 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11865f66 jge 0x11865f71 */
  if ((C.sf==C.of)) goto L_11865f71;
  /* 11865f68 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11865f6f jmp 0x11865f9e */
  goto L_11865f9e;
L_11865f71:;
  /* 11865f71 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11865f74 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11865f77 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11865f78 mov ecx, 7 */
  ECX = (0x7u);
  /* 11865f7d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11865f7f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11865f82 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11865f85 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11865f88 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11865f89 mov ecx, 7 */
  ECX = (0x7u);
  /* 11865f8e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11865f90 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11865f93 jl 0x11865f9e */
  if ((C.sf!=C.of)) goto L_11865f9e;
  /* 11865f95 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11865f98 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11865f9b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11865f9e:;
  /* 11865f9e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11865fa1 push eax */
  push32((uint32_t)(EAX));
  /* 11865fa2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11865fa5 push ecx */
  push32((uint32_t)(ECX));
  /* 11865fa6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11865fa8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11865fab push edx */
  push32((uint32_t)(EDX));
  /* 11865fac call 0x11866220 */
  push32(0x11865fb1u); f_11866220();
  /* 11865fb1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11865fb4 jmp 0x11866118 */
  goto L_11866118;
L_11865fb9:;
  /* 11865fb9 cmp dword ptr [0x11884be8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11884be8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11865fc0 je 0x11865ff0 */
  if (C.zf) goto L_11865ff0;
  /* 11865fc2 mov dword ptr [0x11884be8], 0 */
  w32((uint32_t)(0x11884be8), (0x0u));
  /* 11865fcc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11865fcf push eax */
  push32((uint32_t)(EAX));
  /* 11865fd0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11865fd3 push ecx */
  push32((uint32_t)(ECX));
  /* 11865fd4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11865fd7 push edx */
  push32((uint32_t)(EDX));
  /* 11865fd8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11865fdb push eax */
  push32((uint32_t)(EAX));
  /* 11865fdc mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11865fdf mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 11865fe5 push edx */
  push32((uint32_t)(EDX));
  /* 11865fe6 call 0x11866380 */
  push32(0x11865febu); f_11866380();
  /* 11865feb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11865fee jmp 0x11866012 */
  goto L_11866012;
L_11865ff0:;
  /* 11865ff0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11865ff3 push eax */
  push32((uint32_t)(EAX));
  /* 11865ff4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11865ff7 push ecx */
  push32((uint32_t)(ECX));
  /* 11865ff8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11865ffb push edx */
  push32((uint32_t)(EDX));
  /* 11865ffc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11865fff push eax */
  push32((uint32_t)(EAX));
  /* 11866000 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11866003 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 11866009 push edx */
  push32((uint32_t)(EDX));
  /* 1186600a call 0x11866380 */
  push32(0x1186600fu); f_11866380();
  /* 1186600f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11866012:;
  /* 11866012 jmp 0x11866118 */
  goto L_11866118;
L_11866017:;
  /* 11866017 mov dword ptr [0x11884be8], 0 */
  w32((uint32_t)(0x11884be8), (0x0u));
  /* 11866021 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11866024 push eax */
  push32((uint32_t)(EAX));
  /* 11866025 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11866028 push ecx */
  push32((uint32_t)(ECX));
  /* 11866029 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1186602c push edx */
  push32((uint32_t)(EDX));
  /* 1186602d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11866030 push eax */
  push32((uint32_t)(EAX));
  /* 11866031 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11866034 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 1186603a push edx */
  push32((uint32_t)(EDX));
  /* 1186603b call 0x11866380 */
  push32(0x11866040u); f_11866380();
  /* 11866040 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11866043 jmp 0x11866118 */
  goto L_11866118;
L_11866048:;
  /* 11866048 mov eax, dword ptr [0x11884be8] */
  EAX = (r32((uint32_t)(0x11884be8)));
  /* 1186604d mov dword ptr [0x11884bf8], eax */
  w32((uint32_t)(0x11884bf8), (EAX));
  /* 11866052 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11866055 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 11866058 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11866059 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 1186605e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11866060 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11866063 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11866066 push edx */
  push32((uint32_t)(EDX));
  /* 11866067 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1186606a push eax */
  push32((uint32_t)(EAX));
  /* 1186606b push 2 */
  push32((uint32_t)(0x2u));
  /* 1186606d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11866070 push ecx */
  push32((uint32_t)(ECX));
  /* 11866071 call 0x11866220 */
  push32(0x11866076u); f_11866220();
  /* 11866076 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11866079 jmp 0x11866118 */
  goto L_11866118;
L_1186607e:;
  /* 1186607e mov edx, dword ptr [0x11884be8] */
  EDX = (r32((uint32_t)(0x11884be8)));
  /* 11866084 mov dword ptr [0x11884bf8], edx */
  w32((uint32_t)(0x11884bf8), (EDX));
  /* 1186608a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1186608d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 11866090 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11866091 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11866096 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11866098 mov ecx, eax */
  ECX = (EAX);
  /* 1186609a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1186609d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118660a0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118660a3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 118660a6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 118660a7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 118660ac idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 118660ae add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118660b0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 118660b3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118660b6 push eax */
  push32((uint32_t)(EAX));
  /* 118660b7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118660ba push ecx */
  push32((uint32_t)(ECX));
  /* 118660bb push 4 */
  push32((uint32_t)(0x4u));
  /* 118660bd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118660c0 push edx */
  push32((uint32_t)(EDX));
  /* 118660c1 call 0x11866220 */
  push32(0x118660c6u); f_11866220();
  /* 118660c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118660c9 jmp 0x11866118 */
  goto L_11866118;
L_118660cb:;
  /* 118660cb call 0x118671e0 */
  push32(0x118660d0u); f_118671e0();
  /* 118660d0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118660d3 push eax */
  push32((uint32_t)(EAX));
  /* 118660d4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118660d7 push ecx */
  push32((uint32_t)(ECX));
  /* 118660d8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118660db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118660dd cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118660e1 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 118660e4 mov ecx, dword ptr [eax*4 + 0x11883e1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11883e1c)));
  /* 118660eb push ecx */
  push32((uint32_t)(ECX));
  /* 118660ec call 0x118661d0 */
  push32(0x118660f1u); f_118661d0();
  /* 118660f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118660f4 jmp 0x11866118 */
  goto L_11866118;
L_118660f6:;
  /* 118660f6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118660f9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 118660fb mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 118660fe mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11866101 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11866103 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11866106 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11866109 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1186610b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1186610e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11866110 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11866113 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11866116 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11866118:;
  /* 11866118 pop esi */
  ESI = (pop32());
  /* 11866119 mov esp, ebp */
  ESP = (EBP);
  /* 1186611b pop ebp */
  EBP = (pop32());
  /* 1186611c ret  */
  ESPCHK(0x11865bb0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x118661d0 (72 bytes, 30 insns) */
void f_118661d0(void) {
  FTRACE(0x118661d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118661d0 push ebp */
  push32((uint32_t)(EBP));
  /* 118661d1 mov ebp, esp */
  EBP = (ESP);
L_118661d3:;
  /* 118661d3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118661d6 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118661d9 je 0x11866216 */
  if (C.zf) goto L_11866216;
  /* 118661db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118661de movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 118661e1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118661e3 je 0x11866216 */
  if (C.zf) goto L_11866216;
  /* 118661e5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118661e8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 118661ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118661ed mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 118661ef mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 118661f1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118661f4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 118661f6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118661f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118661fc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 118661fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11866201 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11866204 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11866207 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1186620a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1186620c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1186620f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11866212 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11866214 jmp 0x118661d3 */
  goto L_118661d3;
L_11866216:;
  /* 11866216 pop ebp */
  EBP = (pop32());
  /* 11866217 ret  */
  ESPCHK(0x118661d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016220 @ 0x11866220 (173 bytes, 64 insns) */
void f_11866220(void) {
  FTRACE(0x11866220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11866220 push ebp */
  push32((uint32_t)(EBP));
  /* 11866221 mov ebp, esp */
  EBP = (ESP);
  /* 11866223 push ecx */
  push32((uint32_t)(ECX));
  /* 11866224 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1186622b cmp dword ptr [0x11884bf8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11884bf8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11866232 je 0x1186624a */
  if (C.zf) goto L_1186624a;
  /* 11866234 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11866237 push eax */
  push32((uint32_t)(EAX));
  /* 11866238 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1186623b push ecx */
  push32((uint32_t)(ECX));
  /* 1186623c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186623f push edx */
  push32((uint32_t)(EDX));
  /* 11866240 call 0x118662d0 */
  push32(0x11866245u); f_118662d0();
  /* 11866245 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11866248 jmp 0x118662c9 */
  goto L_118662c9;
L_1186624a:;
  /* 1186624a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1186624d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11866250 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11866252 jae 0x118662c0 */
  if (!C.cf) goto L_118662c0;
  /* 11866254 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11866257 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1186625a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1186625d jmp 0x11866268 */
  goto L_11866268;
L_1186625f:;
  /* 1186625f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11866262 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11866265 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11866268:;
  /* 11866268 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1186626b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1186626e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11866270 je 0x118662a4 */
  if (C.zf) goto L_118662a4;
  /* 11866272 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11866275 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11866276 mov ecx, 0xa */
  ECX = (0xau);
  /* 1186627b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1186627d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11866280 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11866283 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11866285 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11866288 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 1186628b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186628e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1186628f mov ecx, 0xa */
  ECX = (0xau);
  /* 11866294 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11866296 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11866299 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1186629c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1186629f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 118662a2 jmp 0x1186625f */
  goto L_1186625f;
L_118662a4:;
  /* 118662a4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118662a7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 118662a9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118662ac mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118662af mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 118662b1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118662b4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 118662b6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118662b9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 118662bc mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 118662be jmp 0x118662c9 */
  goto L_118662c9;
L_118662c0:;
  /* 118662c0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118662c3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_118662c9:;
  /* 118662c9 mov esp, ebp */
  ESP = (EBP);
  /* 118662cb pop ebp */
  EBP = (pop32());
  /* 118662cc ret  */
  ESPCHK(0x11866220u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x118662d0 (172 bytes, 65 insns) */
void f_118662d0(void) {
  FTRACE(0x118662d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118662d0 push ebp */
  push32((uint32_t)(EBP));
  /* 118662d1 mov ebp, esp */
  EBP = (ESP);
  /* 118662d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118662d6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118662d9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 118662db mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 118662de mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118662e1 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118662e4 jbe 0x1186632b */
  if ((C.cf||C.zf)) goto L_1186632b;
L_118662e6:;
  /* 118662e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118662e9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 118662ea mov ecx, 0xa */
  ECX = (0xau);
  /* 118662ef idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 118662f1 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118662f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118662f7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 118662f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118662fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118662ff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11866302 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11866305 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11866307 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1186630a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1186630d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1186630f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11866312 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11866313 mov ecx, 0xa */
  ECX = (0xau);
  /* 11866318 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1186631a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1186631d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11866321 jle 0x1186632b */
  if ((C.zf||C.sf!=C.of)) goto L_1186632b;
  /* 11866323 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11866326 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11866329 ja 0x118662e6 */
  if ((!C.cf&&!C.zf)) goto L_118662e6;
L_1186632b:;
  /* 1186632b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1186632e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11866330 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11866333 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11866336 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11866339 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1186633b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1186633e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11866341 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11866344:;
  /* 11866344 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11866347 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11866349 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1186634c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1186634f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11866352 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11866354 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11866356 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11866359 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1186635c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1186635f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11866362 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11866365 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11866367 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1186636a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1186636d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11866370 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11866373 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11866376 jb 0x11866344 */
  if (C.cf) goto L_11866344;
  /* 11866378 mov esp, ebp */
  ESP = (EBP);
  /* 1186637a pop ebp */
  EBP = (pop32());
  /* 1186637b ret  */
  ESPCHK(0x118662d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016380 @ 0x11866380 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_11866380(void) {
  FTRACE(0x11866380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11866380 push ebp */
  push32((uint32_t)(EBP));
  /* 11866381 mov ebp, esp */
  EBP = (ESP);
  /* 11866383 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11866386:;
  /* 11866386 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11866389 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1186638c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1186638e je 0x118667fc */
  if (C.zf) goto L_118667fc;
  /* 11866394 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11866397 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186639a je 0x118667fc */
  if (C.zf) goto L_118667fc;
  /* 118663a0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 118663a4 mov dword ptr [0x11884bf8], 0 */
  w32((uint32_t)(0x11884bf8), (0x0u));
  /* 118663ae mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 118663b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118663b8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118663bb jmp 0x118663c6 */
  goto L_118663c6;
L_118663bd:;
  /* 118663bd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118663c0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118663c3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_118663c6:;
  /* 118663c6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118663c9 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 118663cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118663cf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 118663d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118663d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118663d8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 118663db cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118663dd jne 0x118663e1 */
  if (!C.zf) goto L_118663e1;
  /* 118663df jmp 0x118663bd */
  goto L_118663bd;
L_118663e1:;
  /* 118663e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118663e4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118663e7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 118663ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118663ed movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 118663f0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 118663f3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 118663f6 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118663f9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 118663fc cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11866400 ja 0x11866750 */
  if ((!C.cf&&!C.zf)) goto L_11866750;
  /* 11866406 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11866409 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1186640b mov al, byte ptr [ecx + 0x1186682c] */
  AL = (r8((uint32_t)(ECX + 0x1186682c)));
  /* 11866411 jmp dword ptr [eax*4 + 0x11866800] */
  switch (EAX) {
    case 0: goto L_1186666f;
    case 1: goto L_11866553;
    case 2: goto L_118664de;
    case 3: goto L_11866418;
    case 4: goto L_11866456;
    case 5: goto L_118664b7;
    case 6: goto L_11866505;
    case 7: goto L_1186652c;
    case 8: goto L_1186659a;
    case 9: goto L_11866494;
    case 10: goto L_11866750;
    default: x86_unimpl("switch@0x11866411 out of table"); return;
  }
L_11866418:;
  /* 11866418 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1186641b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1186641e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11866421 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11866424 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11866427 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186642b ja 0x11866451 */
  if ((!C.cf&&!C.zf)) goto L_11866451;
  /* 1186642d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11866430 jmp dword ptr [ecx*4 + 0x1186687f] */
  switch (ECX) {
    case 0: goto L_11866437;
    case 1: goto L_11866441;
    case 2: goto L_11866447;
    case 3: goto L_1186644d;
    case 4: goto L_11866475;
    case 5: goto L_1186647f;
    case 6: goto L_11866485;
    case 7: goto L_1186648b;
    default: x86_unimpl("switch@0x11866430 out of table"); return;
  }
L_11866437:;
  /* 11866437 mov dword ptr [0x11884bf8], 1 */
  w32((uint32_t)(0x11884bf8), (0x1u));
L_11866441:;
  /* 11866441 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 11866445 jmp 0x11866451 */
  goto L_11866451;
L_11866447:;
  /* 11866447 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 1186644b jmp 0x11866451 */
  goto L_11866451;
L_1186644d:;
  /* 1186644d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_11866451:;
  /* 11866451 jmp 0x11866750 */
  goto L_11866750;
L_11866456:;
  /* 11866456 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11866459 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1186645c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1186645f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11866462 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11866465 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11866469 ja 0x1186648f */
  if ((!C.cf&&!C.zf)) goto L_1186648f;
  /* 1186646b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1186646e jmp dword ptr [ecx*4 + 0x1186688f] */
  switch (ECX) {
    case 0: goto L_11866475;
    case 1: goto L_1186647f;
    case 2: goto L_11866485;
    case 3: goto L_1186648b;
    default: x86_unimpl("switch@0x1186646e out of table"); return;
  }
L_11866475:;
  /* 11866475 mov dword ptr [0x11884bf8], 1 */
  w32((uint32_t)(0x11884bf8), (0x1u));
L_1186647f:;
  /* 1186647f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 11866483 jmp 0x1186648f */
  goto L_1186648f;
L_11866485:;
  /* 11866485 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 11866489 jmp 0x1186648f */
  goto L_1186648f;
L_1186648b:;
  /* 1186648b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_1186648f:;
  /* 1186648f jmp 0x11866750 */
  goto L_11866750;
L_11866494:;
  /* 11866494 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11866497 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1186649a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186649e je 0x118664a8 */
  if (C.zf) goto L_118664a8;
  /* 118664a0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118664a4 je 0x118664ae */
  if (C.zf) goto L_118664ae;
  /* 118664a6 jmp 0x118664b2 */
  goto L_118664b2;
L_118664a8:;
  /* 118664a8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 118664ac jmp 0x118664b2 */
  goto L_118664b2;
L_118664ae:;
  /* 118664ae mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_118664b2:;
  /* 118664b2 jmp 0x11866750 */
  goto L_11866750;
L_118664b7:;
  /* 118664b7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118664ba mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 118664bd cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118664c1 je 0x118664cb */
  if (C.zf) goto L_118664cb;
  /* 118664c3 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118664c7 je 0x118664d5 */
  if (C.zf) goto L_118664d5;
  /* 118664c9 jmp 0x118664d9 */
  goto L_118664d9;
L_118664cb:;
  /* 118664cb mov dword ptr [0x11884bf8], 1 */
  w32((uint32_t)(0x11884bf8), (0x1u));
L_118664d5:;
  /* 118664d5 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_118664d9:;
  /* 118664d9 jmp 0x11866750 */
  goto L_11866750;
L_118664de:;
  /* 118664de mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118664e1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 118664e4 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118664e8 je 0x118664f2 */
  if (C.zf) goto L_118664f2;
  /* 118664ea cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118664ee je 0x118664fc */
  if (C.zf) goto L_118664fc;
  /* 118664f0 jmp 0x11866500 */
  goto L_11866500;
L_118664f2:;
  /* 118664f2 mov dword ptr [0x11884bf8], 1 */
  w32((uint32_t)(0x11884bf8), (0x1u));
L_118664fc:;
  /* 118664fc mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_11866500:;
  /* 11866500 jmp 0x11866750 */
  goto L_11866750;
L_11866505:;
  /* 11866505 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11866508 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 1186650b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186650f je 0x11866519 */
  if (C.zf) goto L_11866519;
  /* 11866511 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11866515 je 0x11866523 */
  if (C.zf) goto L_11866523;
  /* 11866517 jmp 0x11866527 */
  goto L_11866527;
L_11866519:;
  /* 11866519 mov dword ptr [0x11884bf8], 1 */
  w32((uint32_t)(0x11884bf8), (0x1u));
L_11866523:;
  /* 11866523 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_11866527:;
  /* 11866527 jmp 0x11866750 */
  goto L_11866750;
L_1186652c:;
  /* 1186652c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1186652f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11866532 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11866536 je 0x11866540 */
  if (C.zf) goto L_11866540;
  /* 11866538 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186653c je 0x1186654a */
  if (C.zf) goto L_1186654a;
  /* 1186653e jmp 0x1186654e */
  goto L_1186654e;
L_11866540:;
  /* 11866540 mov dword ptr [0x11884bf8], 1 */
  w32((uint32_t)(0x11884bf8), (0x1u));
L_1186654a:;
  /* 1186654a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_1186654e:;
  /* 1186654e jmp 0x11866750 */
  goto L_11866750;
L_11866553:;
  /* 11866553 push 0x1188120c */
  push32((uint32_t)(0x1188120cu));
  /* 11866558 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186655b push ecx */
  push32((uint32_t)(ECX));
  /* 1186655c call 0x11866db0 */
  push32(0x11866561u); f_11866db0();
  /* 11866561 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11866564 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11866566 jne 0x11866573 */
  if (!C.zf) goto L_11866573;
  /* 11866568 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186656b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1186656e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11866571 jmp 0x11866591 */
  goto L_11866591;
L_11866573:;
  /* 11866573 push 0x11881208 */
  push32((uint32_t)(0x11881208u));
  /* 11866578 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186657b push eax */
  push32((uint32_t)(EAX));
  /* 1186657c call 0x11866db0 */
  push32(0x11866581u); f_11866db0();
  /* 11866581 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11866584 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11866586 jne 0x11866591 */
  if (!C.zf) goto L_11866591;
  /* 11866588 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186658b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1186658e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11866591:;
  /* 11866591 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 11866595 jmp 0x11866750 */
  goto L_11866750;
L_1186659a:;
  /* 1186659a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1186659d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118665a1 jg 0x118665b1 */
  if ((!C.zf&&C.sf==C.of)) goto L_118665b1;
  /* 118665a3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 118665a6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 118665ac mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 118665af jmp 0x118665bd */
  goto L_118665bd;
L_118665b1:;
  /* 118665b1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 118665b4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 118665ba mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_118665bd:;
  /* 118665bd cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118665c1 jle 0x11866664 */
  if ((C.zf||C.sf!=C.of)) goto L_11866664;
  /* 118665c7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 118665ca cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118665cd jbe 0x11866664 */
  if ((C.cf||C.zf)) goto L_11866664;
  /* 118665d3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 118665d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118665d8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 118665da mov ecx, dword ptr [0x11882c98] */
  ECX = (r32((uint32_t)(0x11882c98)));
  /* 118665e0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118665e2 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 118665e6 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 118665ec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118665ee je 0x11866627 */
  if (C.zf) goto L_11866627;
  /* 118665f0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118665f3 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118665f6 jbe 0x11866627 */
  if ((C.cf||C.zf)) goto L_11866627;
  /* 118665f8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118665fb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 118665fd mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11866600 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11866602 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11866604 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11866607 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11866609 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1186660c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1186660f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11866611 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11866614 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11866617 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1186661a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1186661d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1186661f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11866622 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11866625 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11866627:;
  /* 11866627 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1186662a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1186662c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1186662f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11866631 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11866633 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11866636 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11866638 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1186663b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1186663e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11866640 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11866643 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11866646 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11866649 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1186664c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1186664e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11866651 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11866654 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11866656 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11866659 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1186665c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1186665f jmp 0x118665bd */
  goto L_118665bd;
L_11866664:;
  /* 11866664 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11866667 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1186666a jmp 0x11866386 */
  goto L_11866386;
L_1186666f:;
  /* 1186666f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11866672 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11866675 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11866677 je 0x11866742 */
  if (C.zf) goto L_11866742;
  /* 1186667d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11866680 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11866683 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11866686:;
  /* 11866686 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11866689 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1186668c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1186668e je 0x11866740 */
  if (C.zf) goto L_11866740;
  /* 11866694 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11866697 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186669a je 0x11866740 */
  if (C.zf) goto L_11866740;
  /* 118666a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118666a3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 118666a6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118666a9 jne 0x118666b9 */
  if (!C.zf) goto L_118666b9;
  /* 118666ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118666ae add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118666b1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 118666b4 jmp 0x11866740 */
  goto L_11866740;
L_118666b9:;
  /* 118666b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118666bc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118666be mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 118666c0 mov edx, dword ptr [0x11882c98] */
  EDX = (r32((uint32_t)(0x11882c98)));
  /* 118666c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118666c8 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 118666cc and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 118666d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118666d3 je 0x1186670c */
  if (C.zf) goto L_1186670c;
  /* 118666d5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 118666d8 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118666db jbe 0x1186670c */
  if ((C.cf||C.zf)) goto L_1186670c;
  /* 118666dd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118666e0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 118666e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118666e5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 118666e7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 118666e9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118666ec mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 118666ee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118666f1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118666f4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 118666f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118666f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118666fc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 118666ff mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11866702 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11866704 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11866707 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1186670a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1186670c:;
  /* 1186670c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1186670f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11866711 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11866714 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11866716 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11866718 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1186671b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1186671d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11866720 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11866723 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11866725 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11866728 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1186672b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1186672e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11866731 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11866733 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11866736 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11866739 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1186673b jmp 0x11866686 */
  goto L_11866686;
L_11866740:;
  /* 11866740 jmp 0x1186674b */
  goto L_1186674b;
L_11866742:;
  /* 11866742 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11866745 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11866748 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1186674b:;
  /* 1186674b jmp 0x11866386 */
  goto L_11866386;
L_11866750:;
  /* 11866750 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11866754 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11866756 je 0x1186677c */
  if (C.zf) goto L_1186677c;
  /* 11866758 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1186675b push edx */
  push32((uint32_t)(EDX));
  /* 1186675c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1186675f push eax */
  push32((uint32_t)(EAX));
  /* 11866760 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11866763 push ecx */
  push32((uint32_t)(ECX));
  /* 11866764 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11866767 push edx */
  push32((uint32_t)(EDX));
  /* 11866768 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1186676b push eax */
  push32((uint32_t)(EAX));
  /* 1186676c call 0x11865bb0 */
  push32(0x11866771u); f_11865bb0();
  /* 11866771 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11866774 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11866777 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1186677a jmp 0x118667f7 */
  goto L_118667f7;
L_1186677c:;
  /* 1186677c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186677f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11866781 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11866783 mov ecx, dword ptr [0x11882c98] */
  ECX = (r32((uint32_t)(0x11882c98)));
  /* 11866789 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1186678b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1186678f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11866795 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11866797 je 0x118667c8 */
  if (C.zf) goto L_118667c8;
  /* 11866799 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1186679c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1186679e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118667a1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 118667a3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 118667a5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118667a8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 118667aa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118667ad mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118667b0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 118667b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118667b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118667b8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 118667bb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 118667be mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 118667c0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118667c3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 118667c6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_118667c8:;
  /* 118667c8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118667cb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 118667cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118667d0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 118667d2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 118667d4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118667d7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 118667d9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118667dc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118667df mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 118667e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118667e4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118667e7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 118667ea mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 118667ed mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 118667ef sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118667f2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118667f5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_118667f7:;
  /* 118667f7 jmp 0x11866386 */
  goto L_11866386;
L_118667fc:;
  /* 118667fc mov esp, ebp */
  ESP = (EBP);
  /* 118667fe pop ebp */
  EBP = (pop32());
  /* 118667ff ret  */
  ESPCHK(0x11866380u, _esp0);
  ESP += 4; return;
}

/* FUN_100168a0 @ 0x118668a0 (650 bytes, 178 insns) */
void f_118668a0(void) {
  FTRACE(0x118668a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118668a0 push ebp */
  push32((uint32_t)(EBP));
  /* 118668a1 mov ebp, esp */
  EBP = (ESP);
  /* 118668a3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118668a9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118668ad jne 0x11866a09 */
  if (!C.zf) goto L_11866a09;
  /* 118668b3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118668b6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 118668bc lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 118668c2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118668c5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 118668cc mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 118668d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 118668d8 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 118668de push edx */
  push32((uint32_t)(EDX));
  /* 118668df mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118668e2 push eax */
  push32((uint32_t)(EAX));
  /* 118668e3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118668e6 push ecx */
  push32((uint32_t)(ECX));
  /* 118668e7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118668ea push edx */
  push32((uint32_t)(EDX));
  /* 118668eb call 0x11867cc0 */
  push32(0x118668f0u); f_11867cc0();
  /* 118668f0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118668f3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 118668f6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118668fa jne 0x1186698f */
  if (!C.zf) goto L_1186698f;
  /* 11866900 call dword ptr [0x118873f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118873f8))), 0x11866906u);
  /* 11866906 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11866909 je 0x11866910 */
  if (C.zf) goto L_11866910;
  /* 1186690b jmp 0x118669ed */
  goto L_118669ed;
L_11866910:;
  /* 11866910 push 0 */
  push32((uint32_t)(0x0u));
  /* 11866912 push 0 */
  push32((uint32_t)(0x0u));
  /* 11866914 push 0 */
  push32((uint32_t)(0x0u));
  /* 11866916 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11866919 push eax */
  push32((uint32_t)(EAX));
  /* 1186691a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1186691d push ecx */
  push32((uint32_t)(ECX));
  /* 1186691e call 0x11867cc0 */
  push32(0x11866923u); f_11867cc0();
  /* 11866923 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11866926 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 1186692c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11866933 jne 0x1186693a */
  if (!C.zf) goto L_1186693a;
  /* 11866935 jmp 0x118669ed */
  goto L_118669ed;
L_1186693a:;
  /* 1186693a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 1186693c push 0x11881214 */
  push32((uint32_t)(0x11881214u));
  /* 11866941 push 2 */
  push32((uint32_t)(0x2u));
  /* 11866943 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 11866949 push edx */
  push32((uint32_t)(EDX));
  /* 1186694a call 0x118586e0 */
  push32(0x1186694fu); f_118586e0();
  /* 1186694f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11866952 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11866955 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11866959 jne 0x11866960 */
  if (!C.zf) goto L_11866960;
  /* 1186695b jmp 0x118669ed */
  goto L_118669ed;
L_11866960:;
  /* 11866960 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11866967 push 0 */
  push32((uint32_t)(0x0u));
  /* 11866969 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 1186696f push eax */
  push32((uint32_t)(EAX));
  /* 11866970 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11866973 push ecx */
  push32((uint32_t)(ECX));
  /* 11866974 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11866977 push edx */
  push32((uint32_t)(EDX));
  /* 11866978 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1186697b push eax */
  push32((uint32_t)(EAX));
  /* 1186697c call 0x11867cc0 */
  push32(0x11866981u); f_11867cc0();
  /* 11866981 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11866984 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11866987 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186698b jne 0x1186698f */
  if (!C.zf) goto L_1186698f;
  /* 1186698d jmp 0x118669ed */
  goto L_118669ed;
L_1186698f:;
  /* 1186698f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11866991 push 0x11881214 */
  push32((uint32_t)(0x11881214u));
  /* 11866996 push 2 */
  push32((uint32_t)(0x2u));
  /* 11866998 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1186699b push ecx */
  push32((uint32_t)(ECX));
  /* 1186699c call 0x118586e0 */
  push32(0x118669a1u); f_118586e0();
  /* 118669a1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118669a4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 118669aa mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 118669ac mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 118669b2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118669b5 jne 0x118669b9 */
  if (!C.zf) goto L_118669b9;
  /* 118669b7 jmp 0x118669ed */
  goto L_118669ed;
L_118669b9:;
  /* 118669b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118669bc push ecx */
  push32((uint32_t)(ECX));
  /* 118669bd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118669c0 push edx */
  push32((uint32_t)(EDX));
  /* 118669c1 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 118669c7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 118669c9 push ecx */
  push32((uint32_t)(ECX));
  /* 118669ca call 0x1185bf00 */
  push32(0x118669cfu); f_1185bf00();
  /* 118669cf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118669d2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118669d6 je 0x118669e6 */
  if (C.zf) goto L_118669e6;
  /* 118669d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 118669da mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118669dd push edx */
  push32((uint32_t)(EDX));
  /* 118669de call 0x11859170 */
  push32(0x118669e3u); f_11859170();
  /* 118669e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118669e6:;
  /* 118669e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118669e8 jmp 0x11866b26 */
  goto L_11866b26;
L_118669ed:;
  /* 118669ed cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118669f1 je 0x11866a01 */
  if (C.zf) goto L_11866a01;
  /* 118669f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 118669f5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118669f8 push eax */
  push32((uint32_t)(EAX));
  /* 118669f9 call 0x11859170 */
  push32(0x118669feu); f_11859170();
  /* 118669fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11866a01:;
  /* 11866a01 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11866a04 jmp 0x11866b26 */
  goto L_11866b26;
L_11866a09:;
  /* 11866a09 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11866a0d jne 0x11866b23 */
  if (!C.zf) goto L_11866b23;
  /* 11866a13 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 11866a1d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11866a20 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 11866a26 push 0 */
  push32((uint32_t)(0x0u));
  /* 11866a28 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11866a2e push edx */
  push32((uint32_t)(EDX));
  /* 11866a2f push 0x11884b10 */
  push32((uint32_t)(0x11884b10u));
  /* 11866a34 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11866a37 push eax */
  push32((uint32_t)(EAX));
  /* 11866a38 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11866a3b push ecx */
  push32((uint32_t)(ECX));
  /* 11866a3c call 0x11867b20 */
  push32(0x11866a41u); f_11867b20();
  /* 11866a41 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11866a44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11866a46 jne 0x11866a50 */
  if (!C.zf) goto L_11866a50;
  /* 11866a48 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11866a4b jmp 0x11866b26 */
  goto L_11866b26;
L_11866a50:;
  /* 11866a50 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11866a56 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11866a59 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 11866a63 jmp 0x11866a74 */
  goto L_11866a74;
L_11866a65:;
  /* 11866a65 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11866a6b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11866a6e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_11866a74:;
  /* 11866a74 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11866a7b jge 0x11866b1f */
  if ((C.sf==C.of)) goto L_11866b1f;
  /* 11866a81 cmp dword ptr [0x11882ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11882ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11866a88 jle 0x11866abb */
  if ((C.zf||C.sf!=C.of)) goto L_11866abb;
  /* 11866a8a push 4 */
  push32((uint32_t)(0x4u));
  /* 11866a8c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11866a92 mov dl, byte ptr [ecx*2 + 0x11884b10] */
  DL = (r8((uint32_t)(ECX*2 + 0x11884b10)));
  /* 11866a99 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 11866a9f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11866aa5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11866aaa push eax */
  push32((uint32_t)(EAX));
  /* 11866aab call 0x1185e6f0 */
  push32(0x11866ab0u); f_1185e6f0();
  /* 11866ab0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11866ab3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 11866ab9 jmp 0x11866aee */
  goto L_11866aee;
L_11866abb:;
  /* 11866abb mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11866ac1 mov dl, byte ptr [ecx*2 + 0x11884b10] */
  DL = (r8((uint32_t)(ECX*2 + 0x11884b10)));
  /* 11866ac8 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 11866ace mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11866ad4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11866ad9 mov ecx, dword ptr [0x11882c98] */
  ECX = (r32((uint32_t)(0x11882c98)));
  /* 11866adf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11866ae1 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11866ae5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11866ae8 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_11866aee:;
  /* 11866aee cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11866af5 je 0x11866b18 */
  if (C.zf) goto L_11866b18;
  /* 11866af7 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11866afd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11866b00 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11866b03 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 11866b0a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11866b0e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11866b14 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11866b16 jmp 0x11866b1a */
  goto L_11866b1a;
L_11866b18:;
  /* 11866b18 jmp 0x11866b1f */
  goto L_11866b1f;
L_11866b1a:;
  /* 11866b1a jmp 0x11866a65 */
  goto L_11866a65;
L_11866b1f:;
  /* 11866b1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11866b21 jmp 0x11866b26 */
  goto L_11866b26;
L_11866b23:;
  /* 11866b23 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11866b26:;
  /* 11866b26 mov esp, ebp */
  ESP = (EBP);
  /* 11866b28 pop ebp */
  EBP = (pop32());
  /* 11866b29 ret  */
  ESPCHK(0x118668a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016b30 @ 0x11866b30 (10 bytes, 5 insns) */
void f_11866b30(void) {
  FTRACE(0x11866b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11866b30 push ebp */
  push32((uint32_t)(EBP));
  /* 11866b31 mov ebp, esp */
  EBP = (ESP);
  /* 11866b33 mov eax, dword ptr [0x11883d88] */
  EAX = (r32((uint32_t)(0x11883d88)));
  /* 11866b38 pop ebp */
  EBP = (pop32());
  /* 11866b39 ret  */
  ESPCHK(0x11866b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10016b40 @ 0x11866b40 (575 bytes, 196 insns) */
void f_11866b40(void) {
  FTRACE(0x11866b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11866b40 push ebp */
  push32((uint32_t)(EBP));
  /* 11866b41 mov ebp, esp */
  EBP = (ESP);
  /* 11866b43 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11866b45 push 0x11881220 */
  push32((uint32_t)(0x11881220u));
  /* 11866b4a push 0x118617e8 */
  push32((uint32_t)(0x118617e8u));
  /* 11866b4f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11866b55 push eax */
  push32((uint32_t)(EAX));
  /* 11866b56 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11866b5d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11866b60 push ebx */
  push32((uint32_t)(EBX));
  /* 11866b61 push esi */
  push32((uint32_t)(ESI));
  /* 11866b62 push edi */
  push32((uint32_t)(EDI));
  /* 11866b63 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11866b66 cmp dword ptr [0x11884b1c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11884b1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11866b6d jne 0x11866bbe */
  if (!C.zf) goto L_11866bbe;
  /* 11866b6f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11866b72 push eax */
  push32((uint32_t)(EAX));
  /* 11866b73 push 1 */
  push32((uint32_t)(0x1u));
  /* 11866b75 push 0x11880954 */
  push32((uint32_t)(0x11880954u));
  /* 11866b7a push 1 */
  push32((uint32_t)(0x1u));
  /* 11866b7c call dword ptr [0x11887330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887330))), 0x11866b82u);
  /* 11866b82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11866b84 je 0x11866b92 */
  if (C.zf) goto L_11866b92;
  /* 11866b86 mov dword ptr [0x11884b1c], 1 */
  w32((uint32_t)(0x11884b1c), (0x1u));
  /* 11866b90 jmp 0x11866bbe */
  goto L_11866bbe;
L_11866b92:;
  /* 11866b92 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 11866b95 push ecx */
  push32((uint32_t)(ECX));
  /* 11866b96 push 1 */
  push32((uint32_t)(0x1u));
  /* 11866b98 push 0x11880950 */
  push32((uint32_t)(0x11880950u));
  /* 11866b9d push 1 */
  push32((uint32_t)(0x1u));
  /* 11866b9f push 0 */
  push32((uint32_t)(0x0u));
  /* 11866ba1 call dword ptr [0x11887340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887340))), 0x11866ba7u);
  /* 11866ba7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11866ba9 je 0x11866bb7 */
  if (C.zf) goto L_11866bb7;
  /* 11866bab mov dword ptr [0x11884b1c], 2 */
  w32((uint32_t)(0x11884b1c), (0x2u));
  /* 11866bb5 jmp 0x11866bbe */
  goto L_11866bbe;
L_11866bb7:;
  /* 11866bb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11866bb9 jmp 0x11866d99 */
  goto L_11866d99;
L_11866bbe:;
  /* 11866bbe cmp dword ptr [0x11884b1c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11884b1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11866bc5 jne 0x11866be2 */
  if (!C.zf) goto L_11866be2;
  /* 11866bc7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11866bca push edx */
  push32((uint32_t)(EDX));
  /* 11866bcb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11866bce push eax */
  push32((uint32_t)(EAX));
  /* 11866bcf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11866bd2 push ecx */
  push32((uint32_t)(ECX));
  /* 11866bd3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11866bd6 push edx */
  push32((uint32_t)(EDX));
  /* 11866bd7 call dword ptr [0x11887330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887330))), 0x11866bddu);
  /* 11866bdd jmp 0x11866d99 */
  goto L_11866d99;
L_11866be2:;
  /* 11866be2 cmp dword ptr [0x11884b1c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11884b1c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11866be9 jne 0x11866d97 */
  if (!C.zf) goto L_11866d97;
  /* 11866bef cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11866bf3 jne 0x11866bfd */
  if (!C.zf) goto L_11866bfd;
  /* 11866bf5 mov eax, dword ptr [0x11884a90] */
  EAX = (r32((uint32_t)(0x11884a90)));
  /* 11866bfa mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11866bfd:;
  /* 11866bfd push 0 */
  push32((uint32_t)(0x0u));
  /* 11866bff push 0 */
  push32((uint32_t)(0x0u));
  /* 11866c01 push 0 */
  push32((uint32_t)(0x0u));
  /* 11866c03 push 0 */
  push32((uint32_t)(0x0u));
  /* 11866c05 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11866c08 push ecx */
  push32((uint32_t)(ECX));
  /* 11866c09 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11866c0c push edx */
  push32((uint32_t)(EDX));
  /* 11866c0d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11866c12 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11866c15 push eax */
  push32((uint32_t)(EAX));
  /* 11866c16 call dword ptr [0x11887384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887384))), 0x11866c1cu);
  /* 11866c1c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11866c1f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11866c23 jne 0x11866c2c */
  if (!C.zf) goto L_11866c2c;
  /* 11866c25 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11866c27 jmp 0x11866d99 */
  goto L_11866d99;
L_11866c2c:;
  /* 11866c2c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11866c33 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11866c36 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11866c39 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11866c3b call 0x1185b880 */
  push32(0x11866c40u); f_1185b880();
  /* 11866c40 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 11866c43 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11866c46 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11866c49 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11866c4c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11866c4f push edx */
  push32((uint32_t)(EDX));
  /* 11866c50 push 0 */
  push32((uint32_t)(0x0u));
  /* 11866c52 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11866c55 push eax */
  push32((uint32_t)(EAX));
  /* 11866c56 call 0x1185c450 */
  push32(0x11866c5bu); f_1185c450();
  /* 11866c5b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11866c5e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11866c65 jmp 0x11866c7e */
  goto L_11866c7e;
  /* 11866c67 mov eax, 1 */
  EAX = (0x1u);
  /* 11866c6c ret  */
  ESPCHK(0x11866b40u, _esp0);
  ESP += 4; return;
  /* 11866c6d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11866c70 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11866c77 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11866c7e:;
  /* 11866c7e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11866c82 jne 0x11866c8b */
  if (!C.zf) goto L_11866c8b;
  /* 11866c84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11866c86 jmp 0x11866d99 */
  goto L_11866d99;
L_11866c8b:;
  /* 11866c8b push 0 */
  push32((uint32_t)(0x0u));
  /* 11866c8d push 0 */
  push32((uint32_t)(0x0u));
  /* 11866c8f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11866c92 push ecx */
  push32((uint32_t)(ECX));
  /* 11866c93 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11866c96 push edx */
  push32((uint32_t)(EDX));
  /* 11866c97 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11866c9a push eax */
  push32((uint32_t)(EAX));
  /* 11866c9b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11866c9e push ecx */
  push32((uint32_t)(ECX));
  /* 11866c9f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11866ca4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11866ca7 push edx */
  push32((uint32_t)(EDX));
  /* 11866ca8 call dword ptr [0x11887384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887384))), 0x11866caeu);
  /* 11866cae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11866cb0 jne 0x11866cb9 */
  if (!C.zf) goto L_11866cb9;
  /* 11866cb2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11866cb4 jmp 0x11866d99 */
  goto L_11866d99;
L_11866cb9:;
  /* 11866cb9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11866cc0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11866cc3 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 11866cc7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11866cca and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11866ccc call 0x1185b880 */
  push32(0x11866cd1u); f_1185b880();
  /* 11866cd1 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 11866cd4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11866cd7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11866cda mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11866cdd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11866ce4 jmp 0x11866cfd */
  goto L_11866cfd;
  /* 11866ce6 mov eax, 1 */
  EAX = (0x1u);
  /* 11866ceb ret  */
  ESPCHK(0x11866b40u, _esp0);
  ESP += 4; return;
  /* 11866cec mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11866cef mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11866cf6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11866cfd:;
  /* 11866cfd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11866d01 jne 0x11866d0a */
  if (!C.zf) goto L_11866d0a;
  /* 11866d03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11866d05 jmp 0x11866d99 */
  goto L_11866d99;
L_11866d0a:;
  /* 11866d0a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11866d0e jne 0x11866d19 */
  if (!C.zf) goto L_11866d19;
  /* 11866d10 mov edx, dword ptr [0x11884a80] */
  EDX = (r32((uint32_t)(0x11884a80)));
  /* 11866d16 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_11866d19:;
  /* 11866d19 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11866d1c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11866d1f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 11866d25 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11866d28 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11866d2b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 11866d32 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11866d35 push ecx */
  push32((uint32_t)(ECX));
  /* 11866d36 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11866d39 push edx */
  push32((uint32_t)(EDX));
  /* 11866d3a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11866d3d push eax */
  push32((uint32_t)(EAX));
  /* 11866d3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11866d41 push ecx */
  push32((uint32_t)(ECX));
  /* 11866d42 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11866d45 push edx */
  push32((uint32_t)(EDX));
  /* 11866d46 call dword ptr [0x11887340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887340))), 0x11866d4cu);
  /* 11866d4c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11866d4f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11866d52 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11866d55 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11866d57 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 11866d5c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11866d62 je 0x11866d78 */
  if (C.zf) goto L_11866d78;
  /* 11866d64 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11866d67 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11866d6a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11866d6c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11866d70 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11866d76 je 0x11866d7c */
  if (C.zf) goto L_11866d7c;
L_11866d78:;
  /* 11866d78 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11866d7a jmp 0x11866d99 */
  goto L_11866d99;
L_11866d7c:;
  /* 11866d7c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11866d7f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11866d81 push eax */
  push32((uint32_t)(EAX));
  /* 11866d82 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11866d85 push ecx */
  push32((uint32_t)(ECX));
  /* 11866d86 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11866d89 push edx */
  push32((uint32_t)(EDX));
  /* 11866d8a call 0x118605d0 */
  push32(0x11866d8fu); f_118605d0();
  /* 11866d8f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11866d92 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11866d95 jmp 0x11866d99 */
  goto L_11866d99;
L_11866d97:;
  /* 11866d97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11866d99:;
  /* 11866d99 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 11866d9c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11866d9f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11866da6 pop edi */
  EDI = (pop32());
  /* 11866da7 pop esi */
  ESI = (pop32());
  /* 11866da8 pop ebx */
  EBX = (pop32());
  /* 11866da9 mov esp, ebp */
  ESP = (EBP);
  /* 11866dab pop ebp */
  EBP = (pop32());
  /* 11866dac ret  */
  ESPCHK(0x11866b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10016db0 @ 0x11866db0 (208 bytes, 85 insns) */
void f_11866db0(void) {
  FTRACE(0x11866db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11866db0 push ebp */
  push32((uint32_t)(EBP));
  /* 11866db1 mov ebp, esp */
  EBP = (ESP);
  /* 11866db3 push edi */
  push32((uint32_t)(EDI));
  /* 11866db4 push esi */
  push32((uint32_t)(ESI));
  /* 11866db5 push ebx */
  push32((uint32_t)(EBX));
  /* 11866db6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11866db9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11866dbc lea eax, [0x11884a78] */
  EAX = ((uint32_t)(0x11884a78));
  /* 11866dc2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11866dc6 jne 0x11866e03 */
  if (!C.zf) goto L_11866e03;
  /* 11866dc8 mov al, 0xff */
  AL = (0xffu);
  /* 11866dca mov edi, edi */
  EDI = (EDI);
L_11866dcc:;
  /* 11866dcc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11866dce je 0x11866dfe */
  if (C.zf) goto L_11866dfe;
  /* 11866dd0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11866dd2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11866dd3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 11866dd5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11866dd6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11866dd8 je 0x11866dcc */
  if (C.zf) goto L_11866dcc;
  /* 11866dda sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11866ddc cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11866dde sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11866de0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11866de3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11866de5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11866de7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 11866de9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11866deb cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11866ded sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11866def and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11866df2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11866df4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11866df6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11866df8 je 0x11866dcc */
  if (C.zf) goto L_11866dcc;
  /* 11866dfa sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11866dfc sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_11866dfe:;
  /* 11866dfe movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11866e01 jmp 0x11866e7b */
  goto L_11866e7b;
L_11866e03:;
  /* 11866e03 lock inc dword ptr [0x11884c0c] */
  x86_unimpl("lock inc @ 0x11866e03");
  /* 11866e0a cmp dword ptr [0x11884bfc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11884bfc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11866e11 jg 0x11866e17 */
  if ((!C.zf&&C.sf==C.of)) goto L_11866e17;
  /* 11866e13 push 0 */
  push32((uint32_t)(0x0u));
  /* 11866e15 jmp 0x11866e2c */
  goto L_11866e2c;
L_11866e17:;
  /* 11866e17 lock dec dword ptr [0x11884c0c] */
  x86_unimpl("lock dec @ 0x11866e17");
  /* 11866e1e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11866e20 call 0x1185c0e0 */
  push32(0x11866e25u); f_1185c0e0();
  /* 11866e25 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_11866e2c:;
  /* 11866e2c mov eax, 0xff */
  EAX = (0xffu);
  /* 11866e31 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11866e33 nop  */
  /* nop */
L_11866e34:;
  /* 11866e34 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11866e36 je 0x11866e5f */
  if (C.zf) goto L_11866e5f;
  /* 11866e38 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11866e3a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11866e3b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11866e3d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11866e3e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11866e40 je 0x11866e34 */
  if (C.zf) goto L_11866e34;
  /* 11866e42 push eax */
  push32((uint32_t)(EAX));
  /* 11866e43 push ebx */
  push32((uint32_t)(EBX));
  /* 11866e44 call 0x11867f20 */
  push32(0x11866e49u); f_11867f20();
  /* 11866e49 mov ebx, eax */
  EBX = (EAX);
  /* 11866e4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11866e4e call 0x11867f20 */
  push32(0x11866e53u); f_11867f20();
  /* 11866e53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11866e56 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11866e58 je 0x11866e34 */
  if (C.zf) goto L_11866e34;
  /* 11866e5a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11866e5c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11866e5f:;
  /* 11866e5f mov ebx, eax */
  EBX = (EAX);
  /* 11866e61 pop eax */
  EAX = (pop32());
  /* 11866e62 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11866e64 jne 0x11866e6f */
  if (!C.zf) goto L_11866e6f;
  /* 11866e66 lock dec dword ptr [0x11884c0c] */
  x86_unimpl("lock dec @ 0x11866e66");
  /* 11866e6d jmp 0x11866e79 */
  goto L_11866e79;
L_11866e6f:;
  /* 11866e6f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11866e71 call 0x1185c180 */
  push32(0x11866e76u); f_1185c180();
  /* 11866e76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11866e79:;
  /* 11866e79 mov eax, ebx */
  EAX = (EBX);
L_11866e7b:;
  /* 11866e7b pop ebx */
  EBX = (pop32());
  /* 11866e7c pop esi */
  ESI = (pop32());
  /* 11866e7d pop edi */
  EDI = (pop32());
  /* 11866e7e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11866e7f ret  */
  ESPCHK(0x11866db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016e80 @ 0x11866e80 (257 bytes, 103 insns) */
void f_11866e80(void) {
  FTRACE(0x11866e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11866e80 push ebp */
  push32((uint32_t)(EBP));
  /* 11866e81 mov ebp, esp */
  EBP = (ESP);
  /* 11866e83 push edi */
  push32((uint32_t)(EDI));
  /* 11866e84 push esi */
  push32((uint32_t)(ESI));
  /* 11866e85 push ebx */
  push32((uint32_t)(EBX));
  /* 11866e86 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11866e89 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11866e8b je 0x11866f7a */
  if (C.zf) goto L_11866f7a;
  /* 11866e91 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11866e94 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11866e97 lea eax, [0x11884a78] */
  EAX = ((uint32_t)(0x11884a78));
  /* 11866e9d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11866ea1 jne 0x11866ef1 */
  if (!C.zf) goto L_11866ef1;
  /* 11866ea3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 11866ea5 mov bl, 0x5a */
  BL = (0x5au);
  /* 11866ea7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 11866ea9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11866eac:;
  /* 11866eac mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 11866eae or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11866eb0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11866eb2 je 0x11866ed5 */
  if (C.zf) goto L_11866ed5;
  /* 11866eb4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11866eb6 je 0x11866ed5 */
  if (C.zf) goto L_11866ed5;
  /* 11866eb8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11866eb9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11866eba cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11866ebc jb 0x11866ec4 */
  if (C.cf) goto L_11866ec4;
  /* 11866ebe cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11866ec0 ja 0x11866ec4 */
  if ((!C.cf&&!C.zf)) goto L_11866ec4;
  /* 11866ec2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_11866ec4:;
  /* 11866ec4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11866ec6 jb 0x11866ece */
  if (C.cf) goto L_11866ece;
  /* 11866ec8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11866eca ja 0x11866ece */
  if ((!C.cf&&!C.zf)) goto L_11866ece;
  /* 11866ecc add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_11866ece:;
  /* 11866ece cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11866ed0 jne 0x11866edf */
  if (!C.zf) goto L_11866edf;
  /* 11866ed2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11866ed3 jne 0x11866eac */
  if (!C.zf) goto L_11866eac;
L_11866ed5:;
  /* 11866ed5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11866ed7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11866ed9 je 0x11866f7a */
  if (C.zf) goto L_11866f7a;
L_11866edf:;
  /* 11866edf mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11866ee4 jb 0x11866f7a */
  if (C.cf) goto L_11866f7a;
  /* 11866eea neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11866eec jmp 0x11866f7a */
  goto L_11866f7a;
L_11866ef1:;
  /* 11866ef1 lock inc dword ptr [0x11884c0c] */
  x86_unimpl("lock inc @ 0x11866ef1");
  /* 11866ef8 cmp dword ptr [0x11884bfc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11884bfc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11866eff jg 0x11866f05 */
  if ((!C.zf&&C.sf==C.of)) goto L_11866f05;
  /* 11866f01 push 0 */
  push32((uint32_t)(0x0u));
  /* 11866f03 jmp 0x11866f1e */
  goto L_11866f1e;
L_11866f05:;
  /* 11866f05 lock dec dword ptr [0x11884c0c] */
  x86_unimpl("lock dec @ 0x11866f05");
  /* 11866f0c mov ebx, ecx */
  EBX = (ECX);
  /* 11866f0e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11866f10 call 0x1185c0e0 */
  push32(0x11866f15u); f_1185c0e0();
  /* 11866f15 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 11866f1c mov ecx, ebx */
  ECX = (EBX);
L_11866f1e:;
  /* 11866f1e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11866f20 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11866f22 mov edi, edi */
  EDI = (EDI);
L_11866f24:;
  /* 11866f24 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11866f26 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11866f28 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11866f2a je 0x11866f4f */
  if (C.zf) goto L_11866f4f;
  /* 11866f2c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11866f2e je 0x11866f4f */
  if (C.zf) goto L_11866f4f;
  /* 11866f30 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11866f31 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11866f32 push ecx */
  push32((uint32_t)(ECX));
  /* 11866f33 push eax */
  push32((uint32_t)(EAX));
  /* 11866f34 push ebx */
  push32((uint32_t)(EBX));
  /* 11866f35 call 0x11867f20 */
  push32(0x11866f3au); f_11867f20();
  /* 11866f3a mov ebx, eax */
  EBX = (EAX);
  /* 11866f3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11866f3f call 0x11867f20 */
  push32(0x11866f44u); f_11867f20();
  /* 11866f44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11866f47 pop ecx */
  ECX = (pop32());
  /* 11866f48 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11866f4a jne 0x11866f55 */
  if (!C.zf) goto L_11866f55;
  /* 11866f4c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11866f4d jne 0x11866f24 */
  if (!C.zf) goto L_11866f24;
L_11866f4f:;
  /* 11866f4f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11866f51 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11866f53 je 0x11866f5e */
  if (C.zf) goto L_11866f5e;
L_11866f55:;
  /* 11866f55 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11866f5a jb 0x11866f5e */
  if (C.cf) goto L_11866f5e;
  /* 11866f5c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_11866f5e:;
  /* 11866f5e pop eax */
  EAX = (pop32());
  /* 11866f5f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11866f61 jne 0x11866f6c */
  if (!C.zf) goto L_11866f6c;
  /* 11866f63 lock dec dword ptr [0x11884c0c] */
  x86_unimpl("lock dec @ 0x11866f63");
  /* 11866f6a jmp 0x11866f7a */
  goto L_11866f7a;
L_11866f6c:;
  /* 11866f6c mov ebx, ecx */
  EBX = (ECX);
  /* 11866f6e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11866f70 call 0x1185c180 */
  push32(0x11866f75u); f_1185c180();
  /* 11866f75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11866f78 mov ecx, ebx */
  ECX = (EBX);
L_11866f7a:;
  /* 11866f7a mov eax, ecx */
  EAX = (ECX);
  /* 11866f7c pop ebx */
  EBX = (pop32());
  /* 11866f7d pop esi */
  ESI = (pop32());
  /* 11866f7e pop edi */
  EDI = (pop32());
  /* 11866f7f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11866f80 ret  */
  ESPCHK(0x11866e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10016f90 @ 0x11866f90 (255 bytes, 88 insns) */
void f_11866f90(void) {
  FTRACE(0x11866f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11866f90 push ebp */
  push32((uint32_t)(EBP));
  /* 11866f91 mov ebp, esp */
  EBP = (ESP);
  /* 11866f93 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11866f96:;
  /* 11866f96 cmp dword ptr [0x11882ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11882ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11866f9d jle 0x11866fb6 */
  if ((C.zf||C.sf!=C.of)) goto L_11866fb6;
  /* 11866f9f push 8 */
  push32((uint32_t)(0x8u));
  /* 11866fa1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11866fa4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11866fa6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11866fa8 push ecx */
  push32((uint32_t)(ECX));
  /* 11866fa9 call 0x1185e6f0 */
  push32(0x11866faeu); f_1185e6f0();
  /* 11866fae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11866fb1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11866fb4 jmp 0x11866fcf */
  goto L_11866fcf;
L_11866fb6:;
  /* 11866fb6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11866fb9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11866fbb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11866fbd mov ecx, dword ptr [0x11882c98] */
  ECX = (r32((uint32_t)(0x11882c98)));
  /* 11866fc3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11866fc5 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11866fc9 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11866fcc mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11866fcf:;
  /* 11866fcf cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11866fd3 je 0x11866fe0 */
  if (C.zf) goto L_11866fe0;
  /* 11866fd5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11866fd8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11866fdb mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11866fde jmp 0x11866f96 */
  goto L_11866f96;
L_11866fe0:;
  /* 11866fe0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11866fe3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11866fe5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11866fe7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11866fea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11866fed add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11866ff0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11866ff3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11866ff6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11866ff9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11866ffd je 0x11867005 */
  if (C.zf) goto L_11867005;
  /* 11866fff cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11867003 jne 0x11867018 */
  if (!C.zf) goto L_11867018;
L_11867005:;
  /* 11867005 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11867008 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1186700a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1186700c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1186700f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11867012 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11867015 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11867018:;
  /* 11867018 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1186701f:;
  /* 1186701f cmp dword ptr [0x11882ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11882ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11867026 jle 0x1186703b */
  if ((C.zf||C.sf!=C.of)) goto L_1186703b;
  /* 11867028 push 4 */
  push32((uint32_t)(0x4u));
  /* 1186702a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1186702d push edx */
  push32((uint32_t)(EDX));
  /* 1186702e call 0x1185e6f0 */
  push32(0x11867033u); f_1185e6f0();
  /* 11867033 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11867036 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11867039 jmp 0x11867050 */
  goto L_11867050;
L_1186703b:;
  /* 1186703b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1186703e mov ecx, dword ptr [0x11882c98] */
  ECX = (r32((uint32_t)(0x11882c98)));
  /* 11867044 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11867046 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1186704a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1186704d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11867050:;
  /* 11867050 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11867054 je 0x1186707b */
  if (C.zf) goto L_1186707b;
  /* 11867056 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11867059 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1186705c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1186705f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 11867063 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11867066 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11867069 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1186706b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1186706d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11867070 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11867073 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11867076 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11867079 jmp 0x1186701f */
  goto L_1186701f;
L_1186707b:;
  /* 1186707b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186707f jne 0x11867088 */
  if (!C.zf) goto L_11867088;
  /* 11867081 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11867084 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11867086 jmp 0x1186708b */
  goto L_1186708b;
L_11867088:;
  /* 11867088 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1186708b:;
  /* 1186708b mov esp, ebp */
  ESP = (EBP);
  /* 1186708d pop ebp */
  EBP = (pop32());
  /* 1186708e ret  */
  ESPCHK(0x11866f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10017090 @ 0x11867090 (17 bytes, 8 insns) */
void f_11867090(void) {
  FTRACE(0x11867090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11867090 push ebp */
  push32((uint32_t)(EBP));
  /* 11867091 mov ebp, esp */
  EBP = (ESP);
  /* 11867093 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11867096 push eax */
  push32((uint32_t)(EAX));
  /* 11867097 call 0x11866f90 */
  push32(0x1186709cu); f_11866f90();
  /* 1186709c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186709f pop ebp */
  EBP = (pop32());
  /* 118670a0 ret  */
  ESPCHK(0x11867090u, _esp0);
  ESP += 4; return;
}

/* FUN_100170b0 @ 0x118670b0 (297 bytes, 106 insns) */
void f_118670b0(void) {
  FTRACE(0x118670b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118670b0 push ebp */
  push32((uint32_t)(EBP));
  /* 118670b1 mov ebp, esp */
  EBP = (ESP);
  /* 118670b3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118670b6 push esi */
  push32((uint32_t)(ESI));
L_118670b7:;
  /* 118670b7 cmp dword ptr [0x11882ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11882ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118670be jle 0x118670d7 */
  if ((C.zf||C.sf!=C.of)) goto L_118670d7;
  /* 118670c0 push 8 */
  push32((uint32_t)(0x8u));
  /* 118670c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118670c5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118670c7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 118670c9 push ecx */
  push32((uint32_t)(ECX));
  /* 118670ca call 0x1185e6f0 */
  push32(0x118670cfu); f_1185e6f0();
  /* 118670cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118670d2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 118670d5 jmp 0x118670f0 */
  goto L_118670f0;
L_118670d7:;
  /* 118670d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118670da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118670dc mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 118670de mov ecx, dword ptr [0x11882c98] */
  ECX = (r32((uint32_t)(0x11882c98)));
  /* 118670e4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118670e6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 118670ea and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 118670ed mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_118670f0:;
  /* 118670f0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118670f4 je 0x11867101 */
  if (C.zf) goto L_11867101;
  /* 118670f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118670f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118670fc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 118670ff jmp 0x118670b7 */
  goto L_118670b7;
L_11867101:;
  /* 11867101 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11867104 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11867106 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11867108 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1186710b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186710e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11867111 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11867114 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11867117 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1186711a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186711e je 0x11867126 */
  if (C.zf) goto L_11867126;
  /* 11867120 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11867124 jne 0x11867139 */
  if (!C.zf) goto L_11867139;
L_11867126:;
  /* 11867126 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11867129 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1186712b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1186712d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11867130 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11867133 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11867136 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11867139:;
  /* 11867139 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11867140 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11867147:;
  /* 11867147 cmp dword ptr [0x11882ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11882ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186714e jle 0x11867163 */
  if ((C.zf||C.sf!=C.of)) goto L_11867163;
  /* 11867150 push 4 */
  push32((uint32_t)(0x4u));
  /* 11867152 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11867155 push edx */
  push32((uint32_t)(EDX));
  /* 11867156 call 0x1185e6f0 */
  push32(0x1186715bu); f_1185e6f0();
  /* 1186715b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186715e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11867161 jmp 0x11867178 */
  goto L_11867178;
L_11867163:;
  /* 11867163 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11867166 mov ecx, dword ptr [0x11882c98] */
  ECX = (r32((uint32_t)(0x11882c98)));
  /* 1186716c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1186716e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11867172 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11867175 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_11867178:;
  /* 11867178 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186717c je 0x118671b9 */
  if (C.zf) goto L_118671b9;
  /* 1186717e push 0 */
  push32((uint32_t)(0x0u));
  /* 11867180 push 0xa */
  push32((uint32_t)(0xau));
  /* 11867182 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11867185 push eax */
  push32((uint32_t)(EAX));
  /* 11867186 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11867189 push ecx */
  push32((uint32_t)(ECX));
  /* 1186718a call 0x11868050 */
  push32(0x1186718fu); f_11868050();
  /* 1186718f mov ecx, eax */
  ECX = (EAX);
  /* 11867191 mov esi, edx */
  ESI = (EDX);
  /* 11867193 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11867196 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11867199 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1186719a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1186719c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1186719e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118671a1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 118671a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118671a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118671a9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 118671ab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118671ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118671b1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118671b4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 118671b7 jmp 0x11867147 */
  goto L_11867147;
L_118671b9:;
  /* 118671b9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118671bd jne 0x118671ce */
  if (!C.zf) goto L_118671ce;
  /* 118671bf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118671c2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 118671c4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 118671c7 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118671ca neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 118671cc jmp 0x118671d4 */
  goto L_118671d4;
L_118671ce:;
  /* 118671ce mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118671d1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_118671d4:;
  /* 118671d4 pop esi */
  ESI = (pop32());
  /* 118671d5 mov esp, ebp */
  ESP = (EBP);
  /* 118671d7 pop ebp */
  EBP = (pop32());
  /* 118671d8 ret  */
  ESPCHK(0x118670b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100171e0 @ 0x118671e0 (61 bytes, 18 insns) */
void f_118671e0(void) {
  FTRACE(0x118671e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118671e0 push ebp */
  push32((uint32_t)(EBP));
  /* 118671e1 mov ebp, esp */
  EBP = (ESP);
  /* 118671e3 cmp dword ptr [0x11884bd8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11884bd8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118671ea jne 0x1186721b */
  if (!C.zf) goto L_1186721b;
  /* 118671ec push 0xb */
  push32((uint32_t)(0xbu));
  /* 118671ee call 0x1185c0e0 */
  push32(0x118671f3u); f_1185c0e0();
  /* 118671f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118671f6 cmp dword ptr [0x11884bd8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11884bd8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118671fd jne 0x11867211 */
  if (!C.zf) goto L_11867211;
  /* 118671ff call 0x11867240 */
  push32(0x11867204u); f_11867240();
  /* 11867204 mov eax, dword ptr [0x11884bd8] */
  EAX = (r32((uint32_t)(0x11884bd8)));
  /* 11867209 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1186720c mov dword ptr [0x11884bd8], eax */
  w32((uint32_t)(0x11884bd8), (EAX));
L_11867211:;
  /* 11867211 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11867213 call 0x1185c180 */
  push32(0x11867218u); f_1185c180();
  /* 11867218 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1186721b:;
  /* 1186721b pop ebp */
  EBP = (pop32());
  /* 1186721c ret  */
  ESPCHK(0x118671e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017220 @ 0x11867220 (30 bytes, 11 insns) */
void f_11867220(void) {
  FTRACE(0x11867220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11867220 push ebp */
  push32((uint32_t)(EBP));
  /* 11867221 mov ebp, esp */
  EBP = (ESP);
  /* 11867223 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11867225 call 0x1185c0e0 */
  push32(0x1186722au); f_1185c0e0();
  /* 1186722a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186722d call 0x11867240 */
  push32(0x11867232u); f_11867240();
  /* 11867232 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11867234 call 0x1185c180 */
  push32(0x11867239u); f_1185c180();
  /* 11867239 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186723c pop ebp */
  EBP = (pop32());
  /* 1186723d ret  */
  ESPCHK(0x11867220u, _esp0);
  ESP += 4; return;
}

/* FUN_10017240 @ 0x11867240 (939 bytes, 266 insns) */
void f_11867240(void) {
  FTRACE(0x11867240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11867240 push ebp */
  push32((uint32_t)(EBP));
  /* 11867241 mov ebp, esp */
  EBP = (ESP);
  /* 11867243 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11867246 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1186724d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1186724f call 0x1185c0e0 */
  push32(0x11867254u); f_1185c0e0();
  /* 11867254 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11867257 mov dword ptr [0x11884b20], 0 */
  w32((uint32_t)(0x11884b20), (0x0u));
  /* 11867261 mov dword ptr [0x11883e38], 0xffffffff */
  w32((uint32_t)(0x11883e38), (0xffffffffu));
  /* 1186726b mov eax, dword ptr [0x11883e38] */
  EAX = (r32((uint32_t)(0x11883e38)));
  /* 11867270 mov dword ptr [0x11883e28], eax */
  w32((uint32_t)(0x11883e28), (EAX));
  /* 11867275 push 0x11881280 */
  push32((uint32_t)(0x11881280u));
  /* 1186727a call 0x118680c0 */
  push32(0x1186727fu); f_118680c0();
  /* 1186727f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11867282 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11867285 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11867289 jne 0x118673c3 */
  if (!C.zf) goto L_118673c3;
  /* 1186728f push 0xc */
  push32((uint32_t)(0xcu));
  /* 11867291 call 0x1185c180 */
  push32(0x11867296u); f_1185c180();
  /* 11867296 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11867299 push 0x11884b28 */
  push32((uint32_t)(0x11884b28u));
  /* 1186729e call dword ptr [0x118872f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118872f4))), 0x118672a4u);
  /* 118672a4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118672a7 je 0x118673be */
  if (C.zf) goto L_118673be;
  /* 118672ad mov dword ptr [0x11884b20], 1 */
  w32((uint32_t)(0x11884b20), (0x1u));
  /* 118672b7 mov ecx, dword ptr [0x11884b28] */
  ECX = (r32((uint32_t)(0x11884b28)));
  /* 118672bd imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118672c0 mov dword ptr [0x11883d90], ecx */
  w32((uint32_t)(0x11883d90), (ECX));
  /* 118672c6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118672c8 mov dx, word ptr [0x11884b6e] */
  DX = (r16((uint32_t)(0x11884b6e)));
  /* 118672cf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118672d1 je 0x118672e9 */
  if (C.zf) goto L_118672e9;
  /* 118672d3 mov eax, dword ptr [0x11884b7c] */
  EAX = (r32((uint32_t)(0x11884b7c)));
  /* 118672d8 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118672db mov ecx, dword ptr [0x11883d90] */
  ECX = (r32((uint32_t)(0x11883d90)));
  /* 118672e1 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118672e3 mov dword ptr [0x11883d90], ecx */
  w32((uint32_t)(0x11883d90), (ECX));
L_118672e9:;
  /* 118672e9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118672eb mov dx, word ptr [0x11884bc2] */
  DX = (r16((uint32_t)(0x11884bc2)));
  /* 118672f2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118672f4 je 0x1186731e */
  if (C.zf) goto L_1186731e;
  /* 118672f6 cmp dword ptr [0x11884bd0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11884bd0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118672fd je 0x1186731e */
  if (C.zf) goto L_1186731e;
  /* 118672ff mov dword ptr [0x11883d94], 1 */
  w32((uint32_t)(0x11883d94), (0x1u));
  /* 11867309 mov eax, dword ptr [0x11884bd0] */
  EAX = (r32((uint32_t)(0x11884bd0)));
  /* 1186730e sub eax, dword ptr [0x11884b7c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11884b7c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11867314 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11867317 mov dword ptr [0x11883d98], eax */
  w32((uint32_t)(0x11883d98), (EAX));
  /* 1186731c jmp 0x11867332 */
  goto L_11867332;
L_1186731e:;
  /* 1186731e mov dword ptr [0x11883d94], 0 */
  w32((uint32_t)(0x11883d94), (0x0u));
  /* 11867328 mov dword ptr [0x11883d98], 0 */
  w32((uint32_t)(0x11883d98), (0x0u));
L_11867332:;
  /* 11867332 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11867335 push ecx */
  push32((uint32_t)(ECX));
  /* 11867336 push 0 */
  push32((uint32_t)(0x0u));
  /* 11867338 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1186733a mov edx, dword ptr [0x11883e1c] */
  EDX = (r32((uint32_t)(0x11883e1c)));
  /* 11867340 push edx */
  push32((uint32_t)(EDX));
  /* 11867341 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11867343 push 0x11884b2c */
  push32((uint32_t)(0x11884b2cu));
  /* 11867348 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1186734d mov eax, dword ptr [0x11884a90] */
  EAX = (r32((uint32_t)(0x11884a90)));
  /* 11867352 push eax */
  push32((uint32_t)(EAX));
  /* 11867353 call dword ptr [0x11887384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887384))), 0x11867359u);
  /* 11867359 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1186735b je 0x1186736f */
  if (C.zf) goto L_1186736f;
  /* 1186735d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11867361 jne 0x1186736f */
  if (!C.zf) goto L_1186736f;
  /* 11867363 mov ecx, dword ptr [0x11883e1c] */
  ECX = (r32((uint32_t)(0x11883e1c)));
  /* 11867369 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 1186736d jmp 0x11867378 */
  goto L_11867378;
L_1186736f:;
  /* 1186736f mov edx, dword ptr [0x11883e1c] */
  EDX = (r32((uint32_t)(0x11883e1c)));
  /* 11867375 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_11867378:;
  /* 11867378 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1186737b push eax */
  push32((uint32_t)(EAX));
  /* 1186737c push 0 */
  push32((uint32_t)(0x0u));
  /* 1186737e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11867380 mov ecx, dword ptr [0x11883e20] */
  ECX = (r32((uint32_t)(0x11883e20)));
  /* 11867386 push ecx */
  push32((uint32_t)(ECX));
  /* 11867387 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11867389 push 0x11884b80 */
  push32((uint32_t)(0x11884b80u));
  /* 1186738e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11867393 mov edx, dword ptr [0x11884a90] */
  EDX = (r32((uint32_t)(0x11884a90)));
  /* 11867399 push edx */
  push32((uint32_t)(EDX));
  /* 1186739a call dword ptr [0x11887384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887384))), 0x118673a0u);
  /* 118673a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118673a2 je 0x118673b5 */
  if (C.zf) goto L_118673b5;
  /* 118673a4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118673a8 jne 0x118673b5 */
  if (!C.zf) goto L_118673b5;
  /* 118673aa mov eax, dword ptr [0x11883e20] */
  EAX = (r32((uint32_t)(0x11883e20)));
  /* 118673af mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 118673b3 jmp 0x118673be */
  goto L_118673be;
L_118673b5:;
  /* 118673b5 mov ecx, dword ptr [0x11883e20] */
  ECX = (r32((uint32_t)(0x11883e20)));
  /* 118673bb mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_118673be:;
  /* 118673be jmp 0x118675e7 */
  goto L_118675e7;
L_118673c3:;
  /* 118673c3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118673c6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 118673c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118673cb je 0x118673ed */
  if (C.zf) goto L_118673ed;
  /* 118673cd cmp dword ptr [0x11884bd4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11884bd4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118673d4 je 0x118673fc */
  if (C.zf) goto L_118673fc;
  /* 118673d6 mov ecx, dword ptr [0x11884bd4] */
  ECX = (r32((uint32_t)(0x11884bd4)));
  /* 118673dc push ecx */
  push32((uint32_t)(ECX));
  /* 118673dd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118673e0 push edx */
  push32((uint32_t)(EDX));
  /* 118673e1 call 0x11864370 */
  push32(0x118673e6u); f_11864370();
  /* 118673e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118673e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118673eb jne 0x118673fc */
  if (!C.zf) goto L_118673fc;
L_118673ed:;
  /* 118673ed push 0xc */
  push32((uint32_t)(0xcu));
  /* 118673ef call 0x1185c180 */
  push32(0x118673f4u); f_1185c180();
  /* 118673f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118673f7 jmp 0x118675e7 */
  goto L_118675e7;
L_118673fc:;
  /* 118673fc push 2 */
  push32((uint32_t)(0x2u));
  /* 118673fe mov eax, dword ptr [0x11884bd4] */
  EAX = (r32((uint32_t)(0x11884bd4)));
  /* 11867403 push eax */
  push32((uint32_t)(EAX));
  /* 11867404 call 0x11859170 */
  push32(0x11867409u); f_11859170();
  /* 11867409 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186740c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 11867411 push 0x11881278 */
  push32((uint32_t)(0x11881278u));
  /* 11867416 push 2 */
  push32((uint32_t)(0x2u));
  /* 11867418 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1186741b push ecx */
  push32((uint32_t)(ECX));
  /* 1186741c call 0x1185b510 */
  push32(0x11867421u); f_1185b510();
  /* 11867421 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11867424 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11867427 push eax */
  push32((uint32_t)(EAX));
  /* 11867428 call 0x118586e0 */
  push32(0x1186742du); f_118586e0();
  /* 1186742d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11867430 mov dword ptr [0x11884bd4], eax */
  w32((uint32_t)(0x11884bd4), (EAX));
  /* 11867435 cmp dword ptr [0x11884bd4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11884bd4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186743c jne 0x1186744d */
  if (!C.zf) goto L_1186744d;
  /* 1186743e push 0xc */
  push32((uint32_t)(0xcu));
  /* 11867440 call 0x1185c180 */
  push32(0x11867445u); f_1185c180();
  /* 11867445 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11867448 jmp 0x118675e7 */
  goto L_118675e7;
L_1186744d:;
  /* 1186744d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11867450 push edx */
  push32((uint32_t)(EDX));
  /* 11867451 mov eax, dword ptr [0x11884bd4] */
  EAX = (r32((uint32_t)(0x11884bd4)));
  /* 11867456 push eax */
  push32((uint32_t)(EAX));
  /* 11867457 call 0x1185b690 */
  push32(0x1186745cu); f_1185b690();
  /* 1186745c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186745f push 0xc */
  push32((uint32_t)(0xcu));
  /* 11867461 call 0x1185c180 */
  push32(0x11867466u); f_1185c180();
  /* 11867466 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11867469 push 3 */
  push32((uint32_t)(0x3u));
  /* 1186746b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1186746e push ecx */
  push32((uint32_t)(ECX));
  /* 1186746f mov edx, dword ptr [0x11883e1c] */
  EDX = (r32((uint32_t)(0x11883e1c)));
  /* 11867475 push edx */
  push32((uint32_t)(EDX));
  /* 11867476 call 0x1185bf00 */
  push32(0x1186747bu); f_1185bf00();
  /* 1186747b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186747e mov eax, dword ptr [0x11883e1c] */
  EAX = (r32((uint32_t)(0x11883e1c)));
  /* 11867483 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 11867487 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1186748a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1186748d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11867490 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11867493 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11867496 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11867499 jne 0x118674ad */
  if (!C.zf) goto L_118674ad;
  /* 1186749b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1186749e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118674a1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 118674a4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118674a7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118674aa mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_118674ad:;
  /* 118674ad mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118674b0 push eax */
  push32((uint32_t)(EAX));
  /* 118674b1 call 0x11866f90 */
  push32(0x118674b6u); f_11866f90();
  /* 118674b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118674b9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118674bf mov dword ptr [0x11883d90], eax */
  w32((uint32_t)(0x11883d90), (EAX));
L_118674c4:;
  /* 118674c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118674c7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 118674ca cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118674cd je 0x118674e5 */
  if (C.zf) goto L_118674e5;
  /* 118674cf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118674d2 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 118674d5 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118674d8 jl 0x118674f0 */
  if ((C.sf!=C.of)) goto L_118674f0;
  /* 118674da mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118674dd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 118674e0 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118674e3 jg 0x118674f0 */
  if ((!C.zf&&C.sf==C.of)) goto L_118674f0;
L_118674e5:;
  /* 118674e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118674e8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118674eb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118674ee jmp 0x118674c4 */
  goto L_118674c4;
L_118674f0:;
  /* 118674f0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118674f3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 118674f6 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118674f9 jne 0x11867595 */
  if (!C.zf) goto L_11867595;
  /* 118674ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11867502 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11867505 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11867508 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1186750b push edx */
  push32((uint32_t)(EDX));
  /* 1186750c call 0x11866f90 */
  push32(0x11867511u); f_11866f90();
  /* 11867511 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11867514 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11867517 mov ecx, dword ptr [0x11883d90] */
  ECX = (r32((uint32_t)(0x11883d90)));
  /* 1186751d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1186751f mov dword ptr [0x11883d90], ecx */
  w32((uint32_t)(0x11883d90), (ECX));
L_11867525:;
  /* 11867525 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11867528 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1186752b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186752e jl 0x11867546 */
  if ((C.sf!=C.of)) goto L_11867546;
  /* 11867530 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11867533 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11867536 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11867539 jg 0x11867546 */
  if ((!C.zf&&C.sf==C.of)) goto L_11867546;
  /* 1186753b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1186753e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11867541 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11867544 jmp 0x11867525 */
  goto L_11867525;
L_11867546:;
  /* 11867546 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11867549 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1186754c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186754f jne 0x11867595 */
  if (!C.zf) goto L_11867595;
  /* 11867551 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11867554 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11867557 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1186755a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1186755d push ecx */
  push32((uint32_t)(ECX));
  /* 1186755e call 0x11866f90 */
  push32(0x11867563u); f_11866f90();
  /* 11867563 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11867566 mov edx, dword ptr [0x11883d90] */
  EDX = (r32((uint32_t)(0x11883d90)));
  /* 1186756c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1186756e mov dword ptr [0x11883d90], edx */
  w32((uint32_t)(0x11883d90), (EDX));
L_11867574:;
  /* 11867574 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11867577 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1186757a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186757d jl 0x11867595 */
  if ((C.sf!=C.of)) goto L_11867595;
  /* 1186757f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11867582 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11867585 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11867588 jg 0x11867595 */
  if ((!C.zf&&C.sf==C.of)) goto L_11867595;
  /* 1186758a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1186758d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11867590 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11867593 jmp 0x11867574 */
  goto L_11867574;
L_11867595:;
  /* 11867595 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11867599 je 0x118675a9 */
  if (C.zf) goto L_118675a9;
  /* 1186759b mov edx, dword ptr [0x11883d90] */
  EDX = (r32((uint32_t)(0x11883d90)));
  /* 118675a1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 118675a3 mov dword ptr [0x11883d90], edx */
  w32((uint32_t)(0x11883d90), (EDX));
L_118675a9:;
  /* 118675a9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118675ac movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 118675af mov dword ptr [0x11883d94], ecx */
  w32((uint32_t)(0x11883d94), (ECX));
  /* 118675b5 cmp dword ptr [0x11883d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11883d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118675bc je 0x118675de */
  if (C.zf) goto L_118675de;
  /* 118675be push 3 */
  push32((uint32_t)(0x3u));
  /* 118675c0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118675c3 push edx */
  push32((uint32_t)(EDX));
  /* 118675c4 mov eax, dword ptr [0x11883e20] */
  EAX = (r32((uint32_t)(0x11883e20)));
  /* 118675c9 push eax */
  push32((uint32_t)(EAX));
  /* 118675ca call 0x1185bf00 */
  push32(0x118675cfu); f_1185bf00();
  /* 118675cf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118675d2 mov ecx, dword ptr [0x11883e20] */
  ECX = (r32((uint32_t)(0x11883e20)));
  /* 118675d8 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 118675dc jmp 0x118675e7 */
  goto L_118675e7;
L_118675de:;
  /* 118675de mov edx, dword ptr [0x11883e20] */
  EDX = (r32((uint32_t)(0x11883e20)));
  /* 118675e4 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_118675e7:;
  /* 118675e7 mov esp, ebp */
  ESP = (EBP);
  /* 118675e9 pop ebp */
  EBP = (pop32());
  /* 118675ea ret  */
  ESPCHK(0x11867240u, _esp0);
  ESP += 4; return;
}

/* FUN_100175f0 @ 0x118675f0 (46 bytes, 18 insns) */
void f_118675f0(void) {
  FTRACE(0x118675f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118675f0 push ebp */
  push32((uint32_t)(EBP));
  /* 118675f1 mov ebp, esp */
  EBP = (ESP);
  /* 118675f3 push ecx */
  push32((uint32_t)(ECX));
  /* 118675f4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 118675f6 call 0x1185c0e0 */
  push32(0x118675fbu); f_1185c0e0();
  /* 118675fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118675fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11867601 push eax */
  push32((uint32_t)(EAX));
  /* 11867602 call 0x11867620 */
  push32(0x11867607u); f_11867620();
  /* 11867607 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186760a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1186760d push 0xb */
  push32((uint32_t)(0xbu));
  /* 1186760f call 0x1185c180 */
  push32(0x11867614u); f_1185c180();
  /* 11867614 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11867617 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1186761a mov esp, ebp */
  ESP = (EBP);
  /* 1186761c pop ebp */
  EBP = (pop32());
  /* 1186761d ret  */
  ESPCHK(0x118675f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017620 @ 0x11867620 (762 bytes, 246 insns) */
void f_11867620(void) {
  FTRACE(0x11867620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11867620 push ebp */
  push32((uint32_t)(EBP));
  /* 11867621 mov ebp, esp */
  EBP = (ESP);
  /* 11867623 push ecx */
  push32((uint32_t)(ECX));
  /* 11867624 cmp dword ptr [0x11883d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11883d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186762b jne 0x11867634 */
  if (!C.zf) goto L_11867634;
  /* 1186762d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1186762f jmp 0x11867916 */
  goto L_11867916;
L_11867634:;
  /* 11867634 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11867637 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1186763a cmp ecx, dword ptr [0x11883e28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11883e28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11867640 jne 0x11867654 */
  if (!C.zf) goto L_11867654;
  /* 11867642 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11867645 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11867648 cmp eax, dword ptr [0x11883e38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11883e38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186764e je 0x1186781b */
  if (C.zf) goto L_1186781b;
L_11867654:;
  /* 11867654 cmp dword ptr [0x11884b20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11884b20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186765b je 0x118677d5 */
  if (C.zf) goto L_118677d5;
  /* 11867661 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11867663 mov cx, word ptr [0x11884bc0] */
  CX = (r16((uint32_t)(0x11884bc0)));
  /* 1186766a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1186766c jne 0x118676c9 */
  if (!C.zf) goto L_118676c9;
  /* 1186766e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11867670 mov dx, word ptr [0x11884bce] */
  DX = (r16((uint32_t)(0x11884bce)));
  /* 11867677 push edx */
  push32((uint32_t)(EDX));
  /* 11867678 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1186767a mov ax, word ptr [0x11884bcc] */
  AX = (r16((uint32_t)(0x11884bcc)));
  /* 11867680 push eax */
  push32((uint32_t)(EAX));
  /* 11867681 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11867683 mov cx, word ptr [0x11884bca] */
  CX = (r16((uint32_t)(0x11884bca)));
  /* 1186768a push ecx */
  push32((uint32_t)(ECX));
  /* 1186768b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1186768d mov dx, word ptr [0x11884bc8] */
  DX = (r16((uint32_t)(0x11884bc8)));
  /* 11867694 push edx */
  push32((uint32_t)(EDX));
  /* 11867695 push 0 */
  push32((uint32_t)(0x0u));
  /* 11867697 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11867699 mov ax, word ptr [0x11884bc4] */
  AX = (r16((uint32_t)(0x11884bc4)));
  /* 1186769f push eax */
  push32((uint32_t)(EAX));
  /* 118676a0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118676a2 mov cx, word ptr [0x11884bc6] */
  CX = (r16((uint32_t)(0x11884bc6)));
  /* 118676a9 push ecx */
  push32((uint32_t)(ECX));
  /* 118676aa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118676ac mov dx, word ptr [0x11884bc2] */
  DX = (r16((uint32_t)(0x11884bc2)));
  /* 118676b3 push edx */
  push32((uint32_t)(EDX));
  /* 118676b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118676b7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 118676ba push ecx */
  push32((uint32_t)(ECX));
  /* 118676bb push 1 */
  push32((uint32_t)(0x1u));
  /* 118676bd push 1 */
  push32((uint32_t)(0x1u));
  /* 118676bf call 0x11867920 */
  push32(0x118676c4u); f_11867920();
  /* 118676c4 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118676c7 jmp 0x1186771a */
  goto L_1186771a;
L_118676c9:;
  /* 118676c9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118676cb mov dx, word ptr [0x11884bce] */
  DX = (r16((uint32_t)(0x11884bce)));
  /* 118676d2 push edx */
  push32((uint32_t)(EDX));
  /* 118676d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118676d5 mov ax, word ptr [0x11884bcc] */
  AX = (r16((uint32_t)(0x11884bcc)));
  /* 118676db push eax */
  push32((uint32_t)(EAX));
  /* 118676dc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118676de mov cx, word ptr [0x11884bca] */
  CX = (r16((uint32_t)(0x11884bca)));
  /* 118676e5 push ecx */
  push32((uint32_t)(ECX));
  /* 118676e6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118676e8 mov dx, word ptr [0x11884bc8] */
  DX = (r16((uint32_t)(0x11884bc8)));
  /* 118676ef push edx */
  push32((uint32_t)(EDX));
  /* 118676f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118676f2 mov ax, word ptr [0x11884bc6] */
  AX = (r16((uint32_t)(0x11884bc6)));
  /* 118676f8 push eax */
  push32((uint32_t)(EAX));
  /* 118676f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 118676fb push 0 */
  push32((uint32_t)(0x0u));
  /* 118676fd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118676ff mov cx, word ptr [0x11884bc2] */
  CX = (r16((uint32_t)(0x11884bc2)));
  /* 11867706 push ecx */
  push32((uint32_t)(ECX));
  /* 11867707 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186770a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1186770d push eax */
  push32((uint32_t)(EAX));
  /* 1186770e push 0 */
  push32((uint32_t)(0x0u));
  /* 11867710 push 1 */
  push32((uint32_t)(0x1u));
  /* 11867712 call 0x11867920 */
  push32(0x11867717u); f_11867920();
  /* 11867717 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1186771a:;
  /* 1186771a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1186771c mov cx, word ptr [0x11884b6c] */
  CX = (r16((uint32_t)(0x11884b6c)));
  /* 11867723 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11867725 jne 0x11867782 */
  if (!C.zf) goto L_11867782;
  /* 11867727 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11867729 mov dx, word ptr [0x11884b7a] */
  DX = (r16((uint32_t)(0x11884b7a)));
  /* 11867730 push edx */
  push32((uint32_t)(EDX));
  /* 11867731 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11867733 mov ax, word ptr [0x11884b78] */
  AX = (r16((uint32_t)(0x11884b78)));
  /* 11867739 push eax */
  push32((uint32_t)(EAX));
  /* 1186773a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1186773c mov cx, word ptr [0x11884b76] */
  CX = (r16((uint32_t)(0x11884b76)));
  /* 11867743 push ecx */
  push32((uint32_t)(ECX));
  /* 11867744 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11867746 mov dx, word ptr [0x11884b74] */
  DX = (r16((uint32_t)(0x11884b74)));
  /* 1186774d push edx */
  push32((uint32_t)(EDX));
  /* 1186774e push 0 */
  push32((uint32_t)(0x0u));
  /* 11867750 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11867752 mov ax, word ptr [0x11884b70] */
  AX = (r16((uint32_t)(0x11884b70)));
  /* 11867758 push eax */
  push32((uint32_t)(EAX));
  /* 11867759 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1186775b mov cx, word ptr [0x11884b72] */
  CX = (r16((uint32_t)(0x11884b72)));
  /* 11867762 push ecx */
  push32((uint32_t)(ECX));
  /* 11867763 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11867765 mov dx, word ptr [0x11884b6e] */
  DX = (r16((uint32_t)(0x11884b6e)));
  /* 1186776c push edx */
  push32((uint32_t)(EDX));
  /* 1186776d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11867770 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11867773 push ecx */
  push32((uint32_t)(ECX));
  /* 11867774 push 1 */
  push32((uint32_t)(0x1u));
  /* 11867776 push 0 */
  push32((uint32_t)(0x0u));
  /* 11867778 call 0x11867920 */
  push32(0x1186777du); f_11867920();
  /* 1186777d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11867780 jmp 0x118677d3 */
  goto L_118677d3;
L_11867782:;
  /* 11867782 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11867784 mov dx, word ptr [0x11884b7a] */
  DX = (r16((uint32_t)(0x11884b7a)));
  /* 1186778b push edx */
  push32((uint32_t)(EDX));
  /* 1186778c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1186778e mov ax, word ptr [0x11884b78] */
  AX = (r16((uint32_t)(0x11884b78)));
  /* 11867794 push eax */
  push32((uint32_t)(EAX));
  /* 11867795 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11867797 mov cx, word ptr [0x11884b76] */
  CX = (r16((uint32_t)(0x11884b76)));
  /* 1186779e push ecx */
  push32((uint32_t)(ECX));
  /* 1186779f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118677a1 mov dx, word ptr [0x11884b74] */
  DX = (r16((uint32_t)(0x11884b74)));
  /* 118677a8 push edx */
  push32((uint32_t)(EDX));
  /* 118677a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118677ab mov ax, word ptr [0x11884b72] */
  AX = (r16((uint32_t)(0x11884b72)));
  /* 118677b1 push eax */
  push32((uint32_t)(EAX));
  /* 118677b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 118677b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 118677b6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118677b8 mov cx, word ptr [0x11884b6e] */
  CX = (r16((uint32_t)(0x11884b6e)));
  /* 118677bf push ecx */
  push32((uint32_t)(ECX));
  /* 118677c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118677c3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 118677c6 push eax */
  push32((uint32_t)(EAX));
  /* 118677c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 118677c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 118677cb call 0x11867920 */
  push32(0x118677d0u); f_11867920();
  /* 118677d0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118677d3:;
  /* 118677d3 jmp 0x1186781b */
  goto L_1186781b;
L_118677d5:;
  /* 118677d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 118677d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 118677d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 118677db push 2 */
  push32((uint32_t)(0x2u));
  /* 118677dd push 0 */
  push32((uint32_t)(0x0u));
  /* 118677df push 0 */
  push32((uint32_t)(0x0u));
  /* 118677e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 118677e3 push 4 */
  push32((uint32_t)(0x4u));
  /* 118677e5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118677e8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 118677eb push edx */
  push32((uint32_t)(EDX));
  /* 118677ec push 1 */
  push32((uint32_t)(0x1u));
  /* 118677ee push 1 */
  push32((uint32_t)(0x1u));
  /* 118677f0 call 0x11867920 */
  push32(0x118677f5u); f_11867920();
  /* 118677f5 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118677f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 118677fa push 0 */
  push32((uint32_t)(0x0u));
  /* 118677fc push 0 */
  push32((uint32_t)(0x0u));
  /* 118677fe push 2 */
  push32((uint32_t)(0x2u));
  /* 11867800 push 0 */
  push32((uint32_t)(0x0u));
  /* 11867802 push 0 */
  push32((uint32_t)(0x0u));
  /* 11867804 push 5 */
  push32((uint32_t)(0x5u));
  /* 11867806 push 0xa */
  push32((uint32_t)(0xau));
  /* 11867808 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186780b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1186780e push ecx */
  push32((uint32_t)(ECX));
  /* 1186780f push 1 */
  push32((uint32_t)(0x1u));
  /* 11867811 push 0 */
  push32((uint32_t)(0x0u));
  /* 11867813 call 0x11867920 */
  push32(0x11867818u); f_11867920();
  /* 11867818 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1186781b:;
  /* 1186781b mov edx, dword ptr [0x11883e2c] */
  EDX = (r32((uint32_t)(0x11883e2c)));
  /* 11867821 cmp edx, dword ptr [0x11883e3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11883e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11867827 jge 0x11867874 */
  if ((C.sf==C.of)) goto L_11867874;
  /* 11867829 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186782c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1186782f cmp ecx, dword ptr [0x11883e2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11883e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11867835 jl 0x11867845 */
  if ((C.sf!=C.of)) goto L_11867845;
  /* 11867837 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186783a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1186783d cmp eax, dword ptr [0x11883e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11883e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11867843 jle 0x1186784c */
  if ((C.zf||C.sf!=C.of)) goto L_1186784c;
L_11867845:;
  /* 11867845 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11867847 jmp 0x11867916 */
  goto L_11867916;
L_1186784c:;
  /* 1186784c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186784f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11867852 cmp edx, dword ptr [0x11883e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11883e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11867858 jle 0x11867872 */
  if ((C.zf||C.sf!=C.of)) goto L_11867872;
  /* 1186785a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186785d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11867860 cmp ecx, dword ptr [0x11883e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11883e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11867866 jge 0x11867872 */
  if ((C.sf==C.of)) goto L_11867872;
  /* 11867868 mov eax, 1 */
  EAX = (0x1u);
  /* 1186786d jmp 0x11867916 */
  goto L_11867916;
L_11867872:;
  /* 11867872 jmp 0x118678b7 */
  goto L_118678b7;
L_11867874:;
  /* 11867874 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11867877 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1186787a cmp eax, dword ptr [0x11883e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11883e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11867880 jl 0x11867890 */
  if ((C.sf!=C.of)) goto L_11867890;
  /* 11867882 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11867885 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11867888 cmp edx, dword ptr [0x11883e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11883e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186788e jle 0x11867897 */
  if ((C.zf||C.sf!=C.of)) goto L_11867897;
L_11867890:;
  /* 11867890 mov eax, 1 */
  EAX = (0x1u);
  /* 11867895 jmp 0x11867916 */
  goto L_11867916;
L_11867897:;
  /* 11867897 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186789a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1186789d cmp ecx, dword ptr [0x11883e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11883e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118678a3 jle 0x118678b7 */
  if ((C.zf||C.sf!=C.of)) goto L_118678b7;
  /* 118678a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118678a8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 118678ab cmp eax, dword ptr [0x11883e2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11883e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118678b1 jge 0x118678b7 */
  if ((C.sf==C.of)) goto L_118678b7;
  /* 118678b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118678b5 jmp 0x11867916 */
  goto L_11867916;
L_118678b7:;
  /* 118678b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118678ba mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 118678bd imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118678c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118678c3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 118678c5 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118678c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118678ca mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 118678cd imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118678d3 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118678d5 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118678db mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 118678de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118678e1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 118678e4 cmp edx, dword ptr [0x11883e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11883e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118678ea jne 0x11867902 */
  if (!C.zf) goto L_11867902;
  /* 118678ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118678ef cmp eax, dword ptr [0x11883e30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11883e30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118678f5 jl 0x118678fe */
  if ((C.sf!=C.of)) goto L_118678fe;
  /* 118678f7 mov eax, 1 */
  EAX = (0x1u);
  /* 118678fc jmp 0x11867916 */
  goto L_11867916;
L_118678fe:;
  /* 118678fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11867900 jmp 0x11867916 */
  goto L_11867916;
L_11867902:;
  /* 11867902 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11867905 cmp ecx, dword ptr [0x11883e40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11883e40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186790b jge 0x11867914 */
  if ((C.sf==C.of)) goto L_11867914;
  /* 1186790d mov eax, 1 */
  EAX = (0x1u);
  /* 11867912 jmp 0x11867916 */
  goto L_11867916;
L_11867914:;
  /* 11867914 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11867916:;
  /* 11867916 mov esp, ebp */
  ESP = (EBP);
  /* 11867918 pop ebp */
  EBP = (pop32());
  /* 11867919 ret  */
  ESPCHK(0x11867620u, _esp0);
  ESP += 4; return;
}

/* FUN_10017920 @ 0x11867920 (504 bytes, 145 insns) */
void f_11867920(void) {
  FTRACE(0x11867920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11867920 push ebp */
  push32((uint32_t)(EBP));
  /* 11867921 mov ebp, esp */
  EBP = (ESP);
  /* 11867923 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11867926 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186792a jne 0x118679fc */
  if (!C.zf) goto L_118679fc;
  /* 11867930 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11867933 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11867936 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11867938 jne 0x11867949 */
  if (!C.zf) goto L_11867949;
  /* 1186793a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1186793d mov edx, dword ptr [ecx*4 + 0x11883e4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11883e4c)));
  /* 11867944 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11867947 jmp 0x11867956 */
  goto L_11867956;
L_11867949:;
  /* 11867949 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1186794c mov ecx, dword ptr [eax*4 + 0x11883e80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11883e80)));
  /* 11867953 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11867956:;
  /* 11867956 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11867959 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1186795c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1186795f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11867962 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11867965 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1186796b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1186796e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11867970 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11867973 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11867976 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 11867979 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 1186797d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1186797e mov ecx, 7 */
  ECX = (0x7u);
  /* 11867983 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11867985 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11867988 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1186798b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186798e jge 0x118679a9 */
  if ((C.sf==C.of)) goto L_118679a9;
  /* 11867990 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11867993 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11867996 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11867999 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1186799c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1186799f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118679a2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118679a4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 118679a7 jmp 0x118679bd */
  goto L_118679bd;
L_118679a9:;
  /* 118679a9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 118679ac sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118679af mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 118679b2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118679b5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118679b8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118679ba mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_118679bd:;
  /* 118679bd cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118679c1 jne 0x118679fa */
  if (!C.zf) goto L_118679fa;
  /* 118679c3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118679c6 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 118679c9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118679cb jne 0x118679dc */
  if (!C.zf) goto L_118679dc;
  /* 118679cd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 118679d0 mov eax, dword ptr [edx*4 + 0x11883e50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11883e50)));
  /* 118679d7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 118679da jmp 0x118679e9 */
  goto L_118679e9;
L_118679dc:;
  /* 118679dc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 118679df mov edx, dword ptr [ecx*4 + 0x11883e84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11883e84)));
  /* 118679e6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_118679e9:;
  /* 118679e9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118679ec cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118679ef jle 0x118679fa */
  if ((C.zf||C.sf!=C.of)) goto L_118679fa;
  /* 118679f1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118679f4 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118679f7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_118679fa:;
  /* 118679fa jmp 0x11867a31 */
  goto L_11867a31;
L_118679fc:;
  /* 118679fc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118679ff and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11867a02 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11867a04 jne 0x11867a15 */
  if (!C.zf) goto L_11867a15;
  /* 11867a06 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11867a09 mov ecx, dword ptr [eax*4 + 0x11883e4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11883e4c)));
  /* 11867a10 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11867a13 jmp 0x11867a22 */
  goto L_11867a22;
L_11867a15:;
  /* 11867a15 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11867a18 mov eax, dword ptr [edx*4 + 0x11883e80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11883e80)));
  /* 11867a1f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11867a22:;
  /* 11867a22 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11867a25 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11867a28 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11867a2b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11867a2e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11867a31:;
  /* 11867a31 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11867a35 jne 0x11867a71 */
  if (!C.zf) goto L_11867a71;
  /* 11867a37 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11867a3a mov dword ptr [0x11883e2c], eax */
  w32((uint32_t)(0x11883e2c), (EAX));
  /* 11867a3f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11867a42 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11867a45 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11867a48 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11867a4a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11867a4d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 11867a50 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11867a52 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11867a58 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 11867a5b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11867a5d mov dword ptr [0x11883e30], ecx */
  w32((uint32_t)(0x11883e30), (ECX));
  /* 11867a63 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11867a66 mov dword ptr [0x11883e28], edx */
  w32((uint32_t)(0x11883e28), (EDX));
  /* 11867a6c jmp 0x11867b14 */
  goto L_11867b14;
L_11867a71:;
  /* 11867a71 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11867a74 mov dword ptr [0x11883e3c], eax */
  w32((uint32_t)(0x11883e3c), (EAX));
  /* 11867a79 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11867a7c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11867a7f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11867a82 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11867a84 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11867a87 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 11867a8a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11867a8c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11867a92 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 11867a95 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11867a97 mov dword ptr [0x11883e40], ecx */
  w32((uint32_t)(0x11883e40), (ECX));
  /* 11867a9d mov edx, dword ptr [0x11883d98] */
  EDX = (r32((uint32_t)(0x11883d98)));
  /* 11867aa3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11867aa9 mov eax, dword ptr [0x11883e40] */
  EAX = (r32((uint32_t)(0x11883e40)));
  /* 11867aae add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11867ab0 mov dword ptr [0x11883e40], eax */
  w32((uint32_t)(0x11883e40), (EAX));
  /* 11867ab5 cmp dword ptr [0x11883e40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11883e40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11867abc jge 0x11867ae1 */
  if ((C.sf==C.of)) goto L_11867ae1;
  /* 11867abe mov ecx, dword ptr [0x11883e40] */
  ECX = (r32((uint32_t)(0x11883e40)));
  /* 11867ac4 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11867aca mov dword ptr [0x11883e40], ecx */
  w32((uint32_t)(0x11883e40), (ECX));
  /* 11867ad0 mov edx, dword ptr [0x11883e3c] */
  EDX = (r32((uint32_t)(0x11883e3c)));
  /* 11867ad6 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11867ad9 mov dword ptr [0x11883e3c], edx */
  w32((uint32_t)(0x11883e3c), (EDX));
  /* 11867adf jmp 0x11867b0b */
  goto L_11867b0b;
L_11867ae1:;
  /* 11867ae1 cmp dword ptr [0x11883e40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x11883e40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11867aeb jl 0x11867b0b */
  if ((C.sf!=C.of)) goto L_11867b0b;
  /* 11867aed mov eax, dword ptr [0x11883e40] */
  EAX = (r32((uint32_t)(0x11883e40)));
  /* 11867af2 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11867af7 mov dword ptr [0x11883e40], eax */
  w32((uint32_t)(0x11883e40), (EAX));
  /* 11867afc mov ecx, dword ptr [0x11883e3c] */
  ECX = (r32((uint32_t)(0x11883e3c)));
  /* 11867b02 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11867b05 mov dword ptr [0x11883e3c], ecx */
  w32((uint32_t)(0x11883e3c), (ECX));
L_11867b0b:;
  /* 11867b0b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11867b0e mov dword ptr [0x11883e38], edx */
  w32((uint32_t)(0x11883e38), (EDX));
L_11867b14:;
  /* 11867b14 mov esp, ebp */
  ESP = (EBP);
  /* 11867b16 pop ebp */
  EBP = (pop32());
  /* 11867b17 ret  */
  ESPCHK(0x11867920u, _esp0);
  ESP += 4; return;
}

/* FUN_10017b20 @ 0x11867b20 (382 bytes, 135 insns) */
void f_11867b20(void) {
  FTRACE(0x11867b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11867b20 push ebp */
  push32((uint32_t)(EBP));
  /* 11867b21 mov ebp, esp */
  EBP = (ESP);
  /* 11867b23 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11867b25 push 0x11881288 */
  push32((uint32_t)(0x11881288u));
  /* 11867b2a push 0x118617e8 */
  push32((uint32_t)(0x118617e8u));
  /* 11867b2f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11867b35 push eax */
  push32((uint32_t)(EAX));
  /* 11867b36 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11867b3d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11867b40 push ebx */
  push32((uint32_t)(EBX));
  /* 11867b41 push esi */
  push32((uint32_t)(ESI));
  /* 11867b42 push edi */
  push32((uint32_t)(EDI));
  /* 11867b43 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11867b46 cmp dword ptr [0x11884bdc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11884bdc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11867b4d jne 0x11867b92 */
  if (!C.zf) goto L_11867b92;
  /* 11867b4f push 0 */
  push32((uint32_t)(0x0u));
  /* 11867b51 push 0 */
  push32((uint32_t)(0x0u));
  /* 11867b53 push 1 */
  push32((uint32_t)(0x1u));
  /* 11867b55 push 0 */
  push32((uint32_t)(0x0u));
  /* 11867b57 call dword ptr [0x118872f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118872f0))), 0x11867b5du);
  /* 11867b5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11867b5f je 0x11867b6d */
  if (C.zf) goto L_11867b6d;
  /* 11867b61 mov dword ptr [0x11884bdc], 1 */
  w32((uint32_t)(0x11884bdc), (0x1u));
  /* 11867b6b jmp 0x11867b92 */
  goto L_11867b92;
L_11867b6d:;
  /* 11867b6d push 0 */
  push32((uint32_t)(0x0u));
  /* 11867b6f push 0 */
  push32((uint32_t)(0x0u));
  /* 11867b71 push 1 */
  push32((uint32_t)(0x1u));
  /* 11867b73 push 0 */
  push32((uint32_t)(0x0u));
  /* 11867b75 call dword ptr [0x11887308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887308))), 0x11867b7bu);
  /* 11867b7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11867b7d je 0x11867b8b */
  if (C.zf) goto L_11867b8b;
  /* 11867b7f mov dword ptr [0x11884bdc], 2 */
  w32((uint32_t)(0x11884bdc), (0x2u));
  /* 11867b89 jmp 0x11867b92 */
  goto L_11867b92;
L_11867b8b:;
  /* 11867b8b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11867b8d jmp 0x11867ca1 */
  goto L_11867ca1;
L_11867b92:;
  /* 11867b92 cmp dword ptr [0x11884bdc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11884bdc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11867b99 jne 0x11867bb6 */
  if (!C.zf) goto L_11867bb6;
  /* 11867b9b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11867b9e push eax */
  push32((uint32_t)(EAX));
  /* 11867b9f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11867ba2 push ecx */
  push32((uint32_t)(ECX));
  /* 11867ba3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11867ba6 push edx */
  push32((uint32_t)(EDX));
  /* 11867ba7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11867baa push eax */
  push32((uint32_t)(EAX));
  /* 11867bab call dword ptr [0x118872f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118872f0))), 0x11867bb1u);
  /* 11867bb1 jmp 0x11867ca1 */
  goto L_11867ca1;
L_11867bb6:;
  /* 11867bb6 cmp dword ptr [0x11884bdc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11884bdc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11867bbd jne 0x11867c9f */
  if (!C.zf) goto L_11867c9f;
  /* 11867bc3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11867bc7 jne 0x11867bd2 */
  if (!C.zf) goto L_11867bd2;
  /* 11867bc9 mov ecx, dword ptr [0x11884a90] */
  ECX = (r32((uint32_t)(0x11884a90)));
  /* 11867bcf mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11867bd2:;
  /* 11867bd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11867bd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11867bd6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11867bd9 push edx */
  push32((uint32_t)(EDX));
  /* 11867bda mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11867bdd push eax */
  push32((uint32_t)(EAX));
  /* 11867bde call dword ptr [0x11887308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887308))), 0x11867be4u);
  /* 11867be4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11867be7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11867beb jne 0x11867bf4 */
  if (!C.zf) goto L_11867bf4;
  /* 11867bed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11867bef jmp 0x11867ca1 */
  goto L_11867ca1;
L_11867bf4:;
  /* 11867bf4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11867bfb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11867bfe add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11867c01 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11867c03 call 0x1185b880 */
  push32(0x11867c08u); f_1185b880();
  /* 11867c08 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 11867c0b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11867c0e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11867c11 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11867c14 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11867c1b jmp 0x11867c34 */
  goto L_11867c34;
  /* 11867c1d mov eax, 1 */
  EAX = (0x1u);
  /* 11867c22 ret  */
  ESPCHK(0x11867b20u, _esp0);
  ESP += 4; return;
  /* 11867c23 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11867c26 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11867c2d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11867c34:;
  /* 11867c34 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11867c38 jne 0x11867c3e */
  if (!C.zf) goto L_11867c3e;
  /* 11867c3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11867c3c jmp 0x11867ca1 */
  goto L_11867ca1;
L_11867c3e:;
  /* 11867c3e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11867c41 push edx */
  push32((uint32_t)(EDX));
  /* 11867c42 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11867c45 push eax */
  push32((uint32_t)(EAX));
  /* 11867c46 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11867c49 push ecx */
  push32((uint32_t)(ECX));
  /* 11867c4a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11867c4d push edx */
  push32((uint32_t)(EDX));
  /* 11867c4e call dword ptr [0x11887308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887308))), 0x11867c54u);
  /* 11867c54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11867c56 jne 0x11867c5c */
  if (!C.zf) goto L_11867c5c;
  /* 11867c58 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11867c5a jmp 0x11867ca1 */
  goto L_11867ca1;
L_11867c5c:;
  /* 11867c5c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11867c60 jne 0x11867c7d */
  if (!C.zf) goto L_11867c7d;
  /* 11867c62 push 0 */
  push32((uint32_t)(0x0u));
  /* 11867c64 push 0 */
  push32((uint32_t)(0x0u));
  /* 11867c66 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11867c68 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11867c6b push eax */
  push32((uint32_t)(EAX));
  /* 11867c6c push 1 */
  push32((uint32_t)(0x1u));
  /* 11867c6e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11867c71 push ecx */
  push32((uint32_t)(ECX));
  /* 11867c72 call dword ptr [0x11887338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887338))), 0x11867c78u);
  /* 11867c78 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11867c7b jmp 0x11867c9a */
  goto L_11867c9a;
L_11867c7d:;
  /* 11867c7d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11867c80 push edx */
  push32((uint32_t)(EDX));
  /* 11867c81 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11867c84 push eax */
  push32((uint32_t)(EAX));
  /* 11867c85 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11867c87 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11867c8a push ecx */
  push32((uint32_t)(ECX));
  /* 11867c8b push 1 */
  push32((uint32_t)(0x1u));
  /* 11867c8d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11867c90 push edx */
  push32((uint32_t)(EDX));
  /* 11867c91 call dword ptr [0x11887338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887338))), 0x11867c97u);
  /* 11867c97 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11867c9a:;
  /* 11867c9a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11867c9d jmp 0x11867ca1 */
  goto L_11867ca1;
L_11867c9f:;
  /* 11867c9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11867ca1:;
  /* 11867ca1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11867ca4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11867ca7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11867cae pop edi */
  EDI = (pop32());
  /* 11867caf pop esi */
  ESI = (pop32());
  /* 11867cb0 pop ebx */
  EBX = (pop32());
  /* 11867cb1 mov esp, ebp */
  ESP = (EBP);
  /* 11867cb3 pop ebp */
  EBP = (pop32());
  /* 11867cb4 ret  */
  ESPCHK(0x11867b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10017cc0 @ 0x11867cc0 (398 bytes, 140 insns) */
void f_11867cc0(void) {
  FTRACE(0x11867cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11867cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11867cc1 mov ebp, esp */
  EBP = (ESP);
  /* 11867cc3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11867cc5 push 0x11881298 */
  push32((uint32_t)(0x11881298u));
  /* 11867cca push 0x118617e8 */
  push32((uint32_t)(0x118617e8u));
  /* 11867ccf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11867cd5 push eax */
  push32((uint32_t)(EAX));
  /* 11867cd6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11867cdd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11867ce0 push ebx */
  push32((uint32_t)(EBX));
  /* 11867ce1 push esi */
  push32((uint32_t)(ESI));
  /* 11867ce2 push edi */
  push32((uint32_t)(EDI));
  /* 11867ce3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11867ce6 cmp dword ptr [0x11884be0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11884be0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11867ced jne 0x11867d32 */
  if (!C.zf) goto L_11867d32;
  /* 11867cef push 0 */
  push32((uint32_t)(0x0u));
  /* 11867cf1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11867cf3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11867cf5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11867cf7 call dword ptr [0x118872f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118872f0))), 0x11867cfdu);
  /* 11867cfd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11867cff je 0x11867d0d */
  if (C.zf) goto L_11867d0d;
  /* 11867d01 mov dword ptr [0x11884be0], 1 */
  w32((uint32_t)(0x11884be0), (0x1u));
  /* 11867d0b jmp 0x11867d32 */
  goto L_11867d32;
L_11867d0d:;
  /* 11867d0d push 0 */
  push32((uint32_t)(0x0u));
  /* 11867d0f push 0 */
  push32((uint32_t)(0x0u));
  /* 11867d11 push 1 */
  push32((uint32_t)(0x1u));
  /* 11867d13 push 0 */
  push32((uint32_t)(0x0u));
  /* 11867d15 call dword ptr [0x11887308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887308))), 0x11867d1bu);
  /* 11867d1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11867d1d je 0x11867d2b */
  if (C.zf) goto L_11867d2b;
  /* 11867d1f mov dword ptr [0x11884be0], 2 */
  w32((uint32_t)(0x11884be0), (0x2u));
  /* 11867d29 jmp 0x11867d32 */
  goto L_11867d32;
L_11867d2b:;
  /* 11867d2b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11867d2d jmp 0x11867e51 */
  goto L_11867e51;
L_11867d32:;
  /* 11867d32 cmp dword ptr [0x11884be0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11884be0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11867d39 jne 0x11867d56 */
  if (!C.zf) goto L_11867d56;
  /* 11867d3b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11867d3e push eax */
  push32((uint32_t)(EAX));
  /* 11867d3f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11867d42 push ecx */
  push32((uint32_t)(ECX));
  /* 11867d43 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11867d46 push edx */
  push32((uint32_t)(EDX));
  /* 11867d47 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11867d4a push eax */
  push32((uint32_t)(EAX));
  /* 11867d4b call dword ptr [0x11887308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887308))), 0x11867d51u);
  /* 11867d51 jmp 0x11867e51 */
  goto L_11867e51;
L_11867d56:;
  /* 11867d56 cmp dword ptr [0x11884be0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11884be0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11867d5d jne 0x11867e4f */
  if (!C.zf) goto L_11867e4f;
  /* 11867d63 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11867d67 jne 0x11867d72 */
  if (!C.zf) goto L_11867d72;
  /* 11867d69 mov ecx, dword ptr [0x11884a90] */
  ECX = (r32((uint32_t)(0x11884a90)));
  /* 11867d6f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11867d72:;
  /* 11867d72 push 0 */
  push32((uint32_t)(0x0u));
  /* 11867d74 push 0 */
  push32((uint32_t)(0x0u));
  /* 11867d76 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11867d79 push edx */
  push32((uint32_t)(EDX));
  /* 11867d7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11867d7d push eax */
  push32((uint32_t)(EAX));
  /* 11867d7e call dword ptr [0x118872f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118872f0))), 0x11867d84u);
  /* 11867d84 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11867d87 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11867d8b jne 0x11867d94 */
  if (!C.zf) goto L_11867d94;
  /* 11867d8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11867d8f jmp 0x11867e51 */
  goto L_11867e51;
L_11867d94:;
  /* 11867d94 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11867d9b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11867d9e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11867da0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11867da3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11867da5 call 0x1185b880 */
  push32(0x11867daau); f_1185b880();
  /* 11867daa mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 11867dad mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11867db0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11867db3 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11867db6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11867dbd jmp 0x11867dd6 */
  goto L_11867dd6;
  /* 11867dbf mov eax, 1 */
  EAX = (0x1u);
  /* 11867dc4 ret  */
  ESPCHK(0x11867cc0u, _esp0);
  ESP += 4; return;
  /* 11867dc5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11867dc8 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11867dcf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11867dd6:;
  /* 11867dd6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11867dda jne 0x11867de0 */
  if (!C.zf) goto L_11867de0;
  /* 11867ddc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11867dde jmp 0x11867e51 */
  goto L_11867e51;
L_11867de0:;
  /* 11867de0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11867de3 push edx */
  push32((uint32_t)(EDX));
  /* 11867de4 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11867de7 push eax */
  push32((uint32_t)(EAX));
  /* 11867de8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11867deb push ecx */
  push32((uint32_t)(ECX));
  /* 11867dec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11867def push edx */
  push32((uint32_t)(EDX));
  /* 11867df0 call dword ptr [0x118872f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118872f0))), 0x11867df6u);
  /* 11867df6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11867df8 jne 0x11867dfe */
  if (!C.zf) goto L_11867dfe;
  /* 11867dfa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11867dfc jmp 0x11867e51 */
  goto L_11867e51;
L_11867dfe:;
  /* 11867dfe cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11867e02 jne 0x11867e26 */
  if (!C.zf) goto L_11867e26;
  /* 11867e04 push 0 */
  push32((uint32_t)(0x0u));
  /* 11867e06 push 0 */
  push32((uint32_t)(0x0u));
  /* 11867e08 push 0 */
  push32((uint32_t)(0x0u));
  /* 11867e0a push 0 */
  push32((uint32_t)(0x0u));
  /* 11867e0c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11867e0e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11867e11 push eax */
  push32((uint32_t)(EAX));
  /* 11867e12 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11867e17 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11867e1a push ecx */
  push32((uint32_t)(ECX));
  /* 11867e1b call dword ptr [0x11887384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887384))), 0x11867e21u);
  /* 11867e21 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11867e24 jmp 0x11867e4a */
  goto L_11867e4a;
L_11867e26:;
  /* 11867e26 push 0 */
  push32((uint32_t)(0x0u));
  /* 11867e28 push 0 */
  push32((uint32_t)(0x0u));
  /* 11867e2a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11867e2d push edx */
  push32((uint32_t)(EDX));
  /* 11867e2e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11867e31 push eax */
  push32((uint32_t)(EAX));
  /* 11867e32 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11867e34 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11867e37 push ecx */
  push32((uint32_t)(ECX));
  /* 11867e38 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11867e3d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11867e40 push edx */
  push32((uint32_t)(EDX));
  /* 11867e41 call dword ptr [0x11887384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887384))), 0x11867e47u);
  /* 11867e47 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11867e4a:;
  /* 11867e4a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11867e4d jmp 0x11867e51 */
  goto L_11867e51;
L_11867e4f:;
  /* 11867e4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11867e51:;
  /* 11867e51 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11867e54 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11867e57 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11867e5e pop edi */
  EDI = (pop32());
  /* 11867e5f pop esi */
  ESI = (pop32());
  /* 11867e60 pop ebx */
  EBX = (pop32());
  /* 11867e61 mov esp, ebp */
  ESP = (EBP);
  /* 11867e63 pop ebp */
  EBP = (pop32());
  /* 11867e64 ret  */
  ESPCHK(0x11867cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017e70 @ 0x11867e70 (11 bytes, 6 insns) */
void f_11867e70(void) {
  FTRACE(0x11867e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11867e70 push ebp */
  push32((uint32_t)(EBP));
  /* 11867e71 mov ebp, esp */
  EBP = (ESP);
  /* 11867e73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11867e76 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11867e79 pop ebp */
  EBP = (pop32());
  /* 11867e7a ret  */
  ESPCHK(0x11867e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10017e80 @ 0x11867e80 (147 bytes, 43 insns) */
void f_11867e80(void) {
  FTRACE(0x11867e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11867e80 push ebp */
  push32((uint32_t)(EBP));
  /* 11867e81 mov ebp, esp */
  EBP = (ESP);
  /* 11867e83 push ecx */
  push32((uint32_t)(ECX));
  /* 11867e84 cmp dword ptr [0x11884a80], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11884a80))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11867e8b jne 0x11867ea7 */
  if (!C.zf) goto L_11867ea7;
  /* 11867e8d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11867e91 jl 0x11867ea2 */
  if ((C.sf!=C.of)) goto L_11867ea2;
  /* 11867e93 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11867e97 jg 0x11867ea2 */
  if ((!C.zf&&C.sf==C.of)) goto L_11867ea2;
  /* 11867e99 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11867e9c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11867e9f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11867ea2:;
  /* 11867ea2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11867ea5 jmp 0x11867f0f */
  goto L_11867f0f;
L_11867ea7:;
  /* 11867ea7 push 0x11884c0c */
  push32((uint32_t)(0x11884c0cu));
  /* 11867eac call dword ptr [0x118873d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118873d0))), 0x11867eb2u);
  /* 11867eb2 cmp dword ptr [0x11884bfc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11884bfc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11867eb9 je 0x11867ed9 */
  if (C.zf) goto L_11867ed9;
  /* 11867ebb push 0x11884c0c */
  push32((uint32_t)(0x11884c0cu));
  /* 11867ec0 call dword ptr [0x118873c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118873c0))), 0x11867ec6u);
  /* 11867ec6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11867ec8 call 0x1185c0e0 */
  push32(0x11867ecdu); f_1185c0e0();
  /* 11867ecd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11867ed0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11867ed7 jmp 0x11867ee0 */
  goto L_11867ee0;
L_11867ed9:;
  /* 11867ed9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11867ee0:;
  /* 11867ee0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11867ee3 push ecx */
  push32((uint32_t)(ECX));
  /* 11867ee4 call 0x11867f20 */
  push32(0x11867ee9u); f_11867f20();
  /* 11867ee9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11867eec mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11867eef cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11867ef3 je 0x11867f01 */
  if (C.zf) goto L_11867f01;
  /* 11867ef5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11867ef7 call 0x1185c180 */
  push32(0x11867efcu); f_1185c180();
  /* 11867efc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11867eff jmp 0x11867f0c */
  goto L_11867f0c;
L_11867f01:;
  /* 11867f01 push 0x11884c0c */
  push32((uint32_t)(0x11884c0cu));
  /* 11867f06 call dword ptr [0x118873c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118873c0))), 0x11867f0cu);
L_11867f0c:;
  /* 11867f0c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11867f0f:;
  /* 11867f0f mov esp, ebp */
  ESP = (EBP);
  /* 11867f11 pop ebp */
  EBP = (pop32());
  /* 11867f12 ret  */
  ESPCHK(0x11867e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10017f20 @ 0x11867f20 (299 bytes, 91 insns) */
void f_11867f20(void) {
  FTRACE(0x11867f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11867f20 push ebp */
  push32((uint32_t)(EBP));
  /* 11867f21 mov ebp, esp */
  EBP = (ESP);
  /* 11867f23 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11867f26 cmp dword ptr [0x11884a80], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11884a80))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11867f2d jne 0x11867f4c */
  if (!C.zf) goto L_11867f4c;
  /* 11867f2f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11867f33 jl 0x11867f44 */
  if ((C.sf!=C.of)) goto L_11867f44;
  /* 11867f35 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11867f39 jg 0x11867f44 */
  if ((!C.zf&&C.sf==C.of)) goto L_11867f44;
  /* 11867f3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11867f3e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11867f41 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11867f44:;
  /* 11867f44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11867f47 jmp 0x11868047 */
  goto L_11868047;
L_11867f4c:;
  /* 11867f4c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11867f53 jge 0x11867f93 */
  if ((C.sf==C.of)) goto L_11867f93;
  /* 11867f55 cmp dword ptr [0x11882ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11882ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11867f5c jle 0x11867f71 */
  if ((C.zf||C.sf!=C.of)) goto L_11867f71;
  /* 11867f5e push 1 */
  push32((uint32_t)(0x1u));
  /* 11867f60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11867f63 push ecx */
  push32((uint32_t)(ECX));
  /* 11867f64 call 0x1185e6f0 */
  push32(0x11867f69u); f_1185e6f0();
  /* 11867f69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11867f6c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11867f6f jmp 0x11867f85 */
  goto L_11867f85;
L_11867f71:;
  /* 11867f71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11867f74 mov eax, dword ptr [0x11882c98] */
  EAX = (r32((uint32_t)(0x11882c98)));
  /* 11867f79 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11867f7b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11867f7f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11867f82 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11867f85:;
  /* 11867f85 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11867f89 jne 0x11867f93 */
  if (!C.zf) goto L_11867f93;
  /* 11867f8b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11867f8e jmp 0x11868047 */
  goto L_11868047;
L_11867f93:;
  /* 11867f93 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11867f96 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11867f99 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11867f9f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11867fa5 mov eax, dword ptr [0x11882c98] */
  EAX = (r32((uint32_t)(0x11882c98)));
  /* 11867faa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11867fac mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11867fb0 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11867fb6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11867fb8 je 0x11867fdc */
  if (C.zf) goto L_11867fdc;
  /* 11867fba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11867fbd sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11867fc0 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11867fc6 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 11867fc9 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11867fcc mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 11867fcf mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 11867fd3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11867fda jmp 0x11867fed */
  goto L_11867fed;
L_11867fdc:;
  /* 11867fdc mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 11867fdf mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11867fe2 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 11867fe6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_11867fed:;
  /* 11867fed push 1 */
  push32((uint32_t)(0x1u));
  /* 11867fef push 0 */
  push32((uint32_t)(0x0u));
  /* 11867ff1 push 3 */
  push32((uint32_t)(0x3u));
  /* 11867ff3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11867ff6 push edx */
  push32((uint32_t)(EDX));
  /* 11867ff7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11867ffa push eax */
  push32((uint32_t)(EAX));
  /* 11867ffb lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11867ffe push ecx */
  push32((uint32_t)(ECX));
  /* 11867fff push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11868004 mov edx, dword ptr [0x11884a80] */
  EDX = (r32((uint32_t)(0x11884a80)));
  /* 1186800a push edx */
  push32((uint32_t)(EDX));
  /* 1186800b call 0x11860ad0 */
  push32(0x11868010u); f_11860ad0();
  /* 11868010 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11868013 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11868016 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186801a jne 0x11868021 */
  if (!C.zf) goto L_11868021;
  /* 1186801c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186801f jmp 0x11868047 */
  goto L_11868047;
L_11868021:;
  /* 11868021 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11868025 jne 0x11868031 */
  if (!C.zf) goto L_11868031;
  /* 11868027 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1186802a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1186802f jmp 0x11868047 */
  goto L_11868047;
L_11868031:;
  /* 11868031 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11868034 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11868039 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 1186803c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11868042 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11868045 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11868047:;
  /* 11868047 mov esp, ebp */
  ESP = (EBP);
  /* 11868049 pop ebp */
  EBP = (pop32());
  /* 1186804a ret  */
  ESPCHK(0x11867f20u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x11868050 (52 bytes, 19 insns) */
void f_11868050(void) {
  FTRACE(0x11868050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11868050 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11868054 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11868058 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1186805a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1186805e jne 0x11868069 */
  if (!C.zf) goto L_11868069;
  /* 11868060 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11868064 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11868066 ret 0x10 */
  ESPCHK(0x11868050u, _esp0);
  ESP += 20; return;
L_11868069:;
  /* 11868069 push ebx */
  push32((uint32_t)(EBX));
  /* 1186806a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1186806c mov ebx, eax */
  EBX = (EAX);
  /* 1186806e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11868072 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11868076 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11868078 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1186807c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1186807e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11868080 pop ebx */
  EBX = (pop32());
  /* 11868081 ret 0x10 */
  ESPCHK(0x11868050u, _esp0);
  ESP += 20; return;
}

/* FUN_10018090 @ 0x11868090 (46 bytes, 18 insns) */
void f_11868090(void) {
  FTRACE(0x11868090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11868090 push ebp */
  push32((uint32_t)(EBP));
  /* 11868091 mov ebp, esp */
  EBP = (ESP);
  /* 11868093 push ecx */
  push32((uint32_t)(ECX));
  /* 11868094 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11868096 call 0x1185c0e0 */
  push32(0x1186809bu); f_1185c0e0();
  /* 1186809b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186809e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118680a1 push eax */
  push32((uint32_t)(EAX));
  /* 118680a2 call 0x118680c0 */
  push32(0x118680a7u); f_118680c0();
  /* 118680a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118680aa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118680ad push 0xc */
  push32((uint32_t)(0xcu));
  /* 118680af call 0x1185c180 */
  push32(0x118680b4u); f_1185c180();
  /* 118680b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118680b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118680ba mov esp, ebp */
  ESP = (EBP);
  /* 118680bc pop ebp */
  EBP = (pop32());
  /* 118680bd ret  */
  ESPCHK(0x11868090u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x118680c0 (198 bytes, 69 insns) */
void f_118680c0(void) {
  FTRACE(0x118680c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118680c0 push ebp */
  push32((uint32_t)(EBP));
  /* 118680c1 mov ebp, esp */
  EBP = (ESP);
  /* 118680c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118680c6 mov eax, dword ptr [0x1188489c] */
  EAX = (r32((uint32_t)(0x1188489c)));
  /* 118680cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 118680ce cmp dword ptr [0x118863a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118863a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118680d5 jne 0x118680de */
  if (!C.zf) goto L_118680de;
  /* 118680d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118680d9 jmp 0x11868182 */
  goto L_11868182;
L_118680de:;
  /* 118680de cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118680e2 jne 0x11868106 */
  if (!C.zf) goto L_11868106;
  /* 118680e4 cmp dword ptr [0x118848a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118848a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118680eb je 0x11868106 */
  if (C.zf) goto L_11868106;
  /* 118680ed call 0x118681e0 */
  push32(0x118680f2u); f_118681e0();
  /* 118680f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118680f4 je 0x118680fd */
  if (C.zf) goto L_118680fd;
  /* 118680f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118680f8 jmp 0x11868182 */
  goto L_11868182;
L_118680fd:;
  /* 118680fd mov ecx, dword ptr [0x1188489c] */
  ECX = (r32((uint32_t)(0x1188489c)));
  /* 11868103 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11868106:;
  /* 11868106 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186810a je 0x11868180 */
  if (C.zf) goto L_11868180;
  /* 1186810c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11868110 je 0x11868180 */
  if (C.zf) goto L_11868180;
  /* 11868112 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11868115 push edx */
  push32((uint32_t)(EDX));
  /* 11868116 call 0x1185b510 */
  push32(0x1186811bu); f_1185b510();
  /* 1186811b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186811e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11868121:;
  /* 11868121 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11868124 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11868127 je 0x11868180 */
  if (C.zf) goto L_11868180;
  /* 11868129 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1186812c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1186812e push edx */
  push32((uint32_t)(EDX));
  /* 1186812f call 0x1185b510 */
  push32(0x11868134u); f_1185b510();
  /* 11868134 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11868137 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186813a jbe 0x11868175 */
  if ((C.cf||C.zf)) goto L_11868175;
  /* 1186813c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1186813f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11868141 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11868144 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 11868148 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186814b jne 0x11868175 */
  if (!C.zf) goto L_11868175;
  /* 1186814d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11868150 push ecx */
  push32((uint32_t)(ECX));
  /* 11868151 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11868154 push edx */
  push32((uint32_t)(EDX));
  /* 11868155 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11868158 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1186815a push ecx */
  push32((uint32_t)(ECX));
  /* 1186815b call 0x11868190 */
  push32(0x11868160u); f_11868190();
  /* 11868160 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11868163 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11868165 jne 0x11868175 */
  if (!C.zf) goto L_11868175;
  /* 11868167 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1186816a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1186816c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1186816f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 11868173 jmp 0x11868182 */
  goto L_11868182;
L_11868175:;
  /* 11868175 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11868178 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1186817b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1186817e jmp 0x11868121 */
  goto L_11868121;
L_11868180:;
  /* 11868180 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11868182:;
  /* 11868182 mov esp, ebp */
  ESP = (EBP);
  /* 11868184 pop ebp */
  EBP = (pop32());
  /* 11868185 ret  */
  ESPCHK(0x118680c0u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x11868190 (79 bytes, 32 insns) */
void f_11868190(void) {
  FTRACE(0x11868190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11868190 push ebp */
  push32((uint32_t)(EBP));
  /* 11868191 mov ebp, esp */
  EBP = (ESP);
  /* 11868193 push ecx */
  push32((uint32_t)(ECX));
  /* 11868194 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11868198 jne 0x1186819e */
  if (!C.zf) goto L_1186819e;
  /* 1186819a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1186819c jmp 0x118681db */
  goto L_118681db;
L_1186819e:;
  /* 1186819e mov eax, dword ptr [0x11885f64] */
  EAX = (r32((uint32_t)(0x11885f64)));
  /* 118681a3 push eax */
  push32((uint32_t)(EAX));
  /* 118681a4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118681a7 push ecx */
  push32((uint32_t)(ECX));
  /* 118681a8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118681ab push edx */
  push32((uint32_t)(EDX));
  /* 118681ac mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118681af push eax */
  push32((uint32_t)(EAX));
  /* 118681b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118681b3 push ecx */
  push32((uint32_t)(ECX));
  /* 118681b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 118681b6 mov edx, dword ptr [0x11886204] */
  EDX = (r32((uint32_t)(0x11886204)));
  /* 118681bc push edx */
  push32((uint32_t)(EDX));
  /* 118681bd call 0x11868290 */
  push32(0x118681c2u); f_11868290();
  /* 118681c2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118681c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118681c8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118681cc jne 0x118681d5 */
  if (!C.zf) goto L_118681d5;
  /* 118681ce mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 118681d3 jmp 0x118681db */
  goto L_118681db;
L_118681d5:;
  /* 118681d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118681d8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_118681db:;
  /* 118681db mov esp, ebp */
  ESP = (EBP);
  /* 118681dd pop ebp */
  EBP = (pop32());
  /* 118681de ret  */
  ESPCHK(0x11868190u, _esp0);
  ESP += 4; return;
}

/* FUN_100181e0 @ 0x118681e0 (174 bytes, 66 insns) */
void f_118681e0(void) {
  FTRACE(0x118681e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118681e0 push ebp */
  push32((uint32_t)(EBP));
  /* 118681e1 mov ebp, esp */
  EBP = (ESP);
  /* 118681e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118681e6 mov eax, dword ptr [0x118848a4] */
  EAX = (r32((uint32_t)(0x118848a4)));
  /* 118681eb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_118681ee:;
  /* 118681ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118681f1 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118681f4 je 0x11868288 */
  if (C.zf) goto L_11868288;
  /* 118681fa push 0 */
  push32((uint32_t)(0x0u));
  /* 118681fc push 0 */
  push32((uint32_t)(0x0u));
  /* 118681fe push 0 */
  push32((uint32_t)(0x0u));
  /* 11868200 push 0 */
  push32((uint32_t)(0x0u));
  /* 11868202 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11868204 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11868207 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11868209 push eax */
  push32((uint32_t)(EAX));
  /* 1186820a push 0 */
  push32((uint32_t)(0x0u));
  /* 1186820c push 1 */
  push32((uint32_t)(0x1u));
  /* 1186820e call dword ptr [0x11887384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887384))), 0x11868214u);
  /* 11868214 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11868217 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186821b jne 0x11868222 */
  if (!C.zf) goto L_11868222;
  /* 1186821d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11868220 jmp 0x1186828a */
  goto L_1186828a;
L_11868222:;
  /* 11868222 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11868224 push 0x118812a4 */
  push32((uint32_t)(0x118812a4u));
  /* 11868229 push 2 */
  push32((uint32_t)(0x2u));
  /* 1186822b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1186822e push ecx */
  push32((uint32_t)(ECX));
  /* 1186822f call 0x118586e0 */
  push32(0x11868234u); f_118586e0();
  /* 11868234 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11868237 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1186823a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186823e jne 0x11868245 */
  if (!C.zf) goto L_11868245;
  /* 11868240 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11868243 jmp 0x1186828a */
  goto L_1186828a;
L_11868245:;
  /* 11868245 push 0 */
  push32((uint32_t)(0x0u));
  /* 11868247 push 0 */
  push32((uint32_t)(0x0u));
  /* 11868249 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1186824c push edx */
  push32((uint32_t)(EDX));
  /* 1186824d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11868250 push eax */
  push32((uint32_t)(EAX));
  /* 11868251 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11868253 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11868256 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11868258 push edx */
  push32((uint32_t)(EDX));
  /* 11868259 push 0 */
  push32((uint32_t)(0x0u));
  /* 1186825b push 1 */
  push32((uint32_t)(0x1u));
  /* 1186825d call dword ptr [0x11887384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887384))), 0x11868263u);
  /* 11868263 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11868265 jne 0x1186826c */
  if (!C.zf) goto L_1186826c;
  /* 11868267 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1186826a jmp 0x1186828a */
  goto L_1186828a;
L_1186826c:;
  /* 1186826c push 0 */
  push32((uint32_t)(0x0u));
  /* 1186826e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11868271 push eax */
  push32((uint32_t)(EAX));
  /* 11868272 call 0x118686e0 */
  push32(0x11868277u); f_118686e0();
  /* 11868277 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186827a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1186827d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11868280 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11868283 jmp 0x118681ee */
  goto L_118681ee;
L_11868288:;
  /* 11868288 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1186828a:;
  /* 1186828a mov esp, ebp */
  ESP = (EBP);
  /* 1186828c pop ebp */
  EBP = (pop32());
  /* 1186828d ret  */
  ESPCHK(0x118681e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018290 @ 0x11868290 (970 bytes, 340 insns) */
void f_11868290(void) {
  FTRACE(0x11868290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11868290 push ebp */
  push32((uint32_t)(EBP));
  /* 11868291 mov ebp, esp */
  EBP = (ESP);
  /* 11868293 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11868295 push 0x118812f8 */
  push32((uint32_t)(0x118812f8u));
  /* 1186829a push 0x118617e8 */
  push32((uint32_t)(0x118617e8u));
  /* 1186829f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 118682a5 push eax */
  push32((uint32_t)(EAX));
  /* 118682a6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 118682ad add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118682b0 push ebx */
  push32((uint32_t)(EBX));
  /* 118682b1 push esi */
  push32((uint32_t)(ESI));
  /* 118682b2 push edi */
  push32((uint32_t)(EDI));
  /* 118682b3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 118682b6 cmp dword ptr [0x11884be4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11884be4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118682bd jne 0x11868316 */
  if (!C.zf) goto L_11868316;
  /* 118682bf push 1 */
  push32((uint32_t)(0x1u));
  /* 118682c1 push 0x11880954 */
  push32((uint32_t)(0x11880954u));
  /* 118682c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 118682c8 push 0x11880954 */
  push32((uint32_t)(0x11880954u));
  /* 118682cd push 0 */
  push32((uint32_t)(0x0u));
  /* 118682cf push 0 */
  push32((uint32_t)(0x0u));
  /* 118682d1 call dword ptr [0x118872ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x118872ec))), 0x118682d7u);
  /* 118682d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118682d9 je 0x118682e7 */
  if (C.zf) goto L_118682e7;
  /* 118682db mov dword ptr [0x11884be4], 1 */
  w32((uint32_t)(0x11884be4), (0x1u));
  /* 118682e5 jmp 0x11868316 */
  goto L_11868316;
L_118682e7:;
  /* 118682e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 118682e9 push 0x11880950 */
  push32((uint32_t)(0x11880950u));
  /* 118682ee push 1 */
  push32((uint32_t)(0x1u));
  /* 118682f0 push 0x11880950 */
  push32((uint32_t)(0x11880950u));
  /* 118682f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 118682f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 118682f9 call dword ptr [0x118872f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118872f8))), 0x118682ffu);
  /* 118682ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11868301 je 0x1186830f */
  if (C.zf) goto L_1186830f;
  /* 11868303 mov dword ptr [0x11884be4], 2 */
  w32((uint32_t)(0x11884be4), (0x2u));
  /* 1186830d jmp 0x11868316 */
  goto L_11868316;
L_1186830f:;
  /* 1186830f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11868311 jmp 0x11868674 */
  goto L_11868674;
L_11868316:;
  /* 11868316 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186831a jle 0x1186832f */
  if ((C.zf||C.sf!=C.of)) goto L_1186832f;
  /* 1186831c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1186831f push eax */
  push32((uint32_t)(EAX));
  /* 11868320 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11868323 push ecx */
  push32((uint32_t)(ECX));
  /* 11868324 call 0x11868690 */
  push32(0x11868329u); f_11868690();
  /* 11868329 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186832c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1186832f:;
  /* 1186832f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11868333 jle 0x11868348 */
  if ((C.zf||C.sf!=C.of)) goto L_11868348;
  /* 11868335 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11868338 push edx */
  push32((uint32_t)(EDX));
  /* 11868339 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1186833c push eax */
  push32((uint32_t)(EAX));
  /* 1186833d call 0x11868690 */
  push32(0x11868342u); f_11868690();
  /* 11868342 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11868345 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_11868348:;
  /* 11868348 cmp dword ptr [0x11884be4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11884be4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186834f jne 0x11868374 */
  if (!C.zf) goto L_11868374;
  /* 11868351 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11868354 push ecx */
  push32((uint32_t)(ECX));
  /* 11868355 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11868358 push edx */
  push32((uint32_t)(EDX));
  /* 11868359 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1186835c push eax */
  push32((uint32_t)(EAX));
  /* 1186835d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11868360 push ecx */
  push32((uint32_t)(ECX));
  /* 11868361 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11868364 push edx */
  push32((uint32_t)(EDX));
  /* 11868365 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11868368 push eax */
  push32((uint32_t)(EAX));
  /* 11868369 call dword ptr [0x118872f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118872f8))), 0x1186836fu);
  /* 1186836f jmp 0x11868674 */
  goto L_11868674;
L_11868374:;
  /* 11868374 cmp dword ptr [0x11884be4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11884be4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186837b jne 0x11868672 */
  if (!C.zf) goto L_11868672;
  /* 11868381 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11868385 jne 0x11868390 */
  if (!C.zf) goto L_11868390;
  /* 11868387 mov ecx, dword ptr [0x11884a90] */
  ECX = (r32((uint32_t)(0x11884a90)));
  /* 1186838d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_11868390:;
  /* 11868390 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11868394 je 0x118683a0 */
  if (C.zf) goto L_118683a0;
  /* 11868396 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186839a jne 0x1186851c */
  if (!C.zf) goto L_1186851c;
L_118683a0:;
  /* 118683a0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 118683a3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118683a6 jne 0x118683b2 */
  if (!C.zf) goto L_118683b2;
  /* 118683a8 mov eax, 2 */
  EAX = (0x2u);
  /* 118683ad jmp 0x11868674 */
  goto L_11868674;
L_118683b2:;
  /* 118683b2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118683b6 jle 0x118683c2 */
  if ((C.zf||C.sf!=C.of)) goto L_118683c2;
  /* 118683b8 mov eax, 1 */
  EAX = (0x1u);
  /* 118683bd jmp 0x11868674 */
  goto L_11868674;
L_118683c2:;
  /* 118683c2 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118683c6 jle 0x118683d2 */
  if ((C.zf||C.sf!=C.of)) goto L_118683d2;
  /* 118683c8 mov eax, 3 */
  EAX = (0x3u);
  /* 118683cd jmp 0x11868674 */
  goto L_11868674;
L_118683d2:;
  /* 118683d2 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 118683d5 push eax */
  push32((uint32_t)(EAX));
  /* 118683d6 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 118683d9 push ecx */
  push32((uint32_t)(ECX));
  /* 118683da call dword ptr [0x11887344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887344))), 0x118683e0u);
  /* 118683e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118683e2 jne 0x118683eb */
  if (!C.zf) goto L_118683eb;
  /* 118683e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118683e6 jmp 0x11868674 */
  goto L_11868674;
L_118683eb:;
  /* 118683eb cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118683ef jne 0x118683f7 */
  if (!C.zf) goto L_118683f7;
  /* 118683f1 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118683f5 je 0x11868424 */
  if (C.zf) goto L_11868424;
L_118683f7:;
  /* 118683f7 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118683fb jne 0x11868403 */
  if (!C.zf) goto L_11868403;
  /* 118683fd cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11868401 je 0x11868424 */
  if (C.zf) goto L_11868424;
L_11868403:;
  /* 11868403 push 0x118812b8 */
  push32((uint32_t)(0x118812b8u));
  /* 11868408 push 0 */
  push32((uint32_t)(0x0u));
  /* 1186840a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 1186840f push 0x118812b0 */
  push32((uint32_t)(0x118812b0u));
  /* 11868414 push 2 */
  push32((uint32_t)(0x2u));
  /* 11868416 call 0x118577a0 */
  push32(0x1186841bu); f_118577a0();
  /* 1186841b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186841e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11868421 jne 0x11868424 */
  if (!C.zf) goto L_11868424;
  /* 11868423 int3  */
  x86_unimpl("int3 @ 0x11868423");
L_11868424:;
  /* 11868424 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11868426 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11868428 jne 0x118683eb */
  if (!C.zf) goto L_118683eb;
  /* 1186842a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186842e jle 0x118684a3 */
  if ((C.zf||C.sf!=C.of)) goto L_118684a3;
  /* 11868430 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11868434 jae 0x11868440 */
  if (!C.cf) goto L_11868440;
  /* 11868436 mov eax, 3 */
  EAX = (0x3u);
  /* 1186843b jmp 0x11868674 */
  goto L_11868674;
L_11868440:;
  /* 11868440 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 11868443 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 11868446 jmp 0x11868451 */
  goto L_11868451;
L_11868448:;
  /* 11868448 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1186844b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1186844e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_11868451:;
  /* 11868451 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11868454 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11868456 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11868458 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1186845a je 0x11868499 */
  if (C.zf) goto L_11868499;
  /* 1186845c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1186845f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11868461 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11868464 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11868466 je 0x11868499 */
  if (C.zf) goto L_11868499;
  /* 11868468 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1186846b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1186846d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1186846f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11868472 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11868474 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11868476 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11868478 jl 0x11868497 */
  if ((C.sf!=C.of)) goto L_11868497;
  /* 1186847a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1186847d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1186847f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11868481 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11868484 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11868486 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11868489 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186848b jg 0x11868497 */
  if ((!C.zf&&C.sf==C.of)) goto L_11868497;
  /* 1186848d mov eax, 2 */
  EAX = (0x2u);
  /* 11868492 jmp 0x11868674 */
  goto L_11868674;
L_11868497:;
  /* 11868497 jmp 0x11868448 */
  goto L_11868448;
L_11868499:;
  /* 11868499 mov eax, 3 */
  EAX = (0x3u);
  /* 1186849e jmp 0x11868674 */
  goto L_11868674;
L_118684a3:;
  /* 118684a3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118684a7 jle 0x1186851c */
  if ((C.zf||C.sf!=C.of)) goto L_1186851c;
  /* 118684a9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118684ad jae 0x118684b9 */
  if (!C.cf) goto L_118684b9;
  /* 118684af mov eax, 1 */
  EAX = (0x1u);
  /* 118684b4 jmp 0x11868674 */
  goto L_11868674;
L_118684b9:;
  /* 118684b9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 118684bc mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 118684bf jmp 0x118684ca */
  goto L_118684ca;
L_118684c1:;
  /* 118684c1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 118684c4 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118684c7 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_118684ca:;
  /* 118684ca mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 118684cd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118684cf mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 118684d1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118684d3 je 0x11868512 */
  if (C.zf) goto L_11868512;
  /* 118684d5 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 118684d8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118684da mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 118684dd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118684df je 0x11868512 */
  if (C.zf) goto L_11868512;
  /* 118684e1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 118684e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118684e6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 118684e8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 118684eb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118684ed mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 118684ef cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118684f1 jl 0x11868510 */
  if ((C.sf!=C.of)) goto L_11868510;
  /* 118684f3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 118684f6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118684f8 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 118684fa mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 118684fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118684ff mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11868502 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11868504 jg 0x11868510 */
  if ((!C.zf&&C.sf==C.of)) goto L_11868510;
  /* 11868506 mov eax, 2 */
  EAX = (0x2u);
  /* 1186850b jmp 0x11868674 */
  goto L_11868674;
L_11868510:;
  /* 11868510 jmp 0x118684c1 */
  goto L_118684c1;
L_11868512:;
  /* 11868512 mov eax, 1 */
  EAX = (0x1u);
  /* 11868517 jmp 0x11868674 */
  goto L_11868674;
L_1186851c:;
  /* 1186851c push 0 */
  push32((uint32_t)(0x0u));
  /* 1186851e push 0 */
  push32((uint32_t)(0x0u));
  /* 11868520 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11868523 push ecx */
  push32((uint32_t)(ECX));
  /* 11868524 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11868527 push edx */
  push32((uint32_t)(EDX));
  /* 11868528 push 9 */
  push32((uint32_t)(0x9u));
  /* 1186852a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1186852d push eax */
  push32((uint32_t)(EAX));
  /* 1186852e call dword ptr [0x11887338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887338))), 0x11868534u);
  /* 11868534 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11868537 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186853b jne 0x11868544 */
  if (!C.zf) goto L_11868544;
  /* 1186853d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1186853f jmp 0x11868674 */
  goto L_11868674;
L_11868544:;
  /* 11868544 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1186854b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1186854e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11868550 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11868553 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11868555 call 0x1185b880 */
  push32(0x1186855au); f_1185b880();
  /* 1186855a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 1186855d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11868560 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11868563 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11868566 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1186856d jmp 0x11868586 */
  goto L_11868586;
  /* 1186856f mov eax, 1 */
  EAX = (0x1u);
  /* 11868574 ret  */
  ESPCHK(0x11868290u, _esp0);
  ESP += 4; return;
  /* 11868575 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11868578 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1186857f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11868586:;
  /* 11868586 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186858a jne 0x11868593 */
  if (!C.zf) goto L_11868593;
  /* 1186858c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1186858e jmp 0x11868674 */
  goto L_11868674;
L_11868593:;
  /* 11868593 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11868596 push edx */
  push32((uint32_t)(EDX));
  /* 11868597 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1186859a push eax */
  push32((uint32_t)(EAX));
  /* 1186859b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1186859e push ecx */
  push32((uint32_t)(ECX));
  /* 1186859f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118685a2 push edx */
  push32((uint32_t)(EDX));
  /* 118685a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 118685a5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 118685a8 push eax */
  push32((uint32_t)(EAX));
  /* 118685a9 call dword ptr [0x11887338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887338))), 0x118685afu);
  /* 118685af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118685b1 jne 0x118685ba */
  if (!C.zf) goto L_118685ba;
  /* 118685b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118685b5 jmp 0x11868674 */
  goto L_11868674;
L_118685ba:;
  /* 118685ba push 0 */
  push32((uint32_t)(0x0u));
  /* 118685bc push 0 */
  push32((uint32_t)(0x0u));
  /* 118685be mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 118685c1 push ecx */
  push32((uint32_t)(ECX));
  /* 118685c2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 118685c5 push edx */
  push32((uint32_t)(EDX));
  /* 118685c6 push 9 */
  push32((uint32_t)(0x9u));
  /* 118685c8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 118685cb push eax */
  push32((uint32_t)(EAX));
  /* 118685cc call dword ptr [0x11887338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887338))), 0x118685d2u);
  /* 118685d2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 118685d5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118685d9 jne 0x118685e2 */
  if (!C.zf) goto L_118685e2;
  /* 118685db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118685dd jmp 0x11868674 */
  goto L_11868674;
L_118685e2:;
  /* 118685e2 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 118685e9 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 118685ec shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 118685ee add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118685f1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 118685f3 call 0x1185b880 */
  push32(0x118685f8u); f_1185b880();
  /* 118685f8 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 118685fb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 118685fe mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11868601 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11868604 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1186860b jmp 0x11868624 */
  goto L_11868624;
  /* 1186860d mov eax, 1 */
  EAX = (0x1u);
  /* 11868612 ret  */
  ESPCHK(0x11868290u, _esp0);
  ESP += 4; return;
  /* 11868613 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11868616 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 1186861d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11868624:;
  /* 11868624 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11868628 jne 0x1186862e */
  if (!C.zf) goto L_1186862e;
  /* 1186862a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1186862c jmp 0x11868674 */
  goto L_11868674;
L_1186862e:;
  /* 1186862e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11868631 push edx */
  push32((uint32_t)(EDX));
  /* 11868632 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11868635 push eax */
  push32((uint32_t)(EAX));
  /* 11868636 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11868639 push ecx */
  push32((uint32_t)(ECX));
  /* 1186863a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1186863d push edx */
  push32((uint32_t)(EDX));
  /* 1186863e push 1 */
  push32((uint32_t)(0x1u));
  /* 11868640 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11868643 push eax */
  push32((uint32_t)(EAX));
  /* 11868644 call dword ptr [0x11887338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887338))), 0x1186864au);
  /* 1186864a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1186864c jne 0x11868652 */
  if (!C.zf) goto L_11868652;
  /* 1186864e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11868650 jmp 0x11868674 */
  goto L_11868674;
L_11868652:;
  /* 11868652 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11868655 push ecx */
  push32((uint32_t)(ECX));
  /* 11868656 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11868659 push edx */
  push32((uint32_t)(EDX));
  /* 1186865a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1186865d push eax */
  push32((uint32_t)(EAX));
  /* 1186865e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11868661 push ecx */
  push32((uint32_t)(ECX));
  /* 11868662 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11868665 push edx */
  push32((uint32_t)(EDX));
  /* 11868666 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11868669 push eax */
  push32((uint32_t)(EAX));
  /* 1186866a call dword ptr [0x118872ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x118872ec))), 0x11868670u);
  /* 11868670 jmp 0x11868674 */
  goto L_11868674;
L_11868672:;
  /* 11868672 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11868674:;
  /* 11868674 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 11868677 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1186867a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11868681 pop edi */
  EDI = (pop32());
  /* 11868682 pop esi */
  ESI = (pop32());
  /* 11868683 pop ebx */
  EBX = (pop32());
  /* 11868684 mov esp, ebp */
  ESP = (EBP);
  /* 11868686 pop ebp */
  EBP = (pop32());
  /* 11868687 ret  */
  ESPCHK(0x11868290u, _esp0);
  ESP += 4; return;
}

/* FUN_10018690 @ 0x11868690 (80 bytes, 32 insns) */
void f_11868690(void) {
  FTRACE(0x11868690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11868690 push ebp */
  push32((uint32_t)(EBP));
  /* 11868691 mov ebp, esp */
  EBP = (ESP);
  /* 11868693 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11868696 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11868699 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1186869c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186869f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_118686a2:;
  /* 118686a2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 118686a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118686a8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118686ab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 118686ae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118686b0 je 0x118686c7 */
  if (C.zf) goto L_118686c7;
  /* 118686b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118686b5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 118686b8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118686ba je 0x118686c7 */
  if (C.zf) goto L_118686c7;
  /* 118686bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118686bf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118686c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118686c5 jmp 0x118686a2 */
  goto L_118686a2;
L_118686c7:;
  /* 118686c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118686ca movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 118686cd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118686cf jne 0x118686d9 */
  if (!C.zf) goto L_118686d9;
  /* 118686d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118686d4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118686d7 jmp 0x118686dc */
  goto L_118686dc;
L_118686d9:;
  /* 118686d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_118686dc:;
  /* 118686dc mov esp, ebp */
  ESP = (EBP);
  /* 118686de pop ebp */
  EBP = (pop32());
  /* 118686df ret  */
  ESPCHK(0x11868690u, _esp0);
  ESP += 4; return;
}

/* FUN_100186e0 @ 0x118686e0 (736 bytes, 224 insns) */
void f_118686e0(void) {
  FTRACE(0x118686e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118686e0 push ebp */
  push32((uint32_t)(EBP));
  /* 118686e1 mov ebp, esp */
  EBP = (ESP);
  /* 118686e3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118686e6 push esi */
  push32((uint32_t)(ESI));
  /* 118686e7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118686eb je 0x1186870c */
  if (C.zf) goto L_1186870c;
  /* 118686ed push 0x3d */
  push32((uint32_t)(0x3du));
  /* 118686ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118686f2 push eax */
  push32((uint32_t)(EAX));
  /* 118686f3 call 0x11868b30 */
  push32(0x118686f8u); f_11868b30();
  /* 118686f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118686fb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 118686fe cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11868702 je 0x1186870c */
  if (C.zf) goto L_1186870c;
  /* 11868704 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11868707 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186870a jne 0x11868714 */
  if (!C.zf) goto L_11868714;
L_1186870c:;
  /* 1186870c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1186870f jmp 0x118689bb */
  goto L_118689bb;
L_11868714:;
  /* 11868714 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11868717 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1186871b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1186871d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1186871f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11868720 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11868723 mov ecx, dword ptr [0x1188489c] */
  ECX = (r32((uint32_t)(0x1188489c)));
  /* 11868729 cmp ecx, dword ptr [0x118848a0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x118848a0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186872f jne 0x11868745 */
  if (!C.zf) goto L_11868745;
  /* 11868731 mov edx, dword ptr [0x1188489c] */
  EDX = (r32((uint32_t)(0x1188489c)));
  /* 11868737 push edx */
  push32((uint32_t)(EDX));
  /* 11868738 call 0x11868a40 */
  push32(0x1186873du); f_11868a40();
  /* 1186873d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11868740 mov dword ptr [0x1188489c], eax */
  w32((uint32_t)(0x1188489c), (EAX));
L_11868745:;
  /* 11868745 cmp dword ptr [0x1188489c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1188489c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186874c jne 0x11868805 */
  if (!C.zf) goto L_11868805;
  /* 11868752 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11868756 je 0x11868777 */
  if (C.zf) goto L_11868777;
  /* 11868758 cmp dword ptr [0x118848a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118848a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186875f je 0x11868777 */
  if (C.zf) goto L_11868777;
  /* 11868761 call 0x118681e0 */
  push32(0x11868766u); f_118681e0();
  /* 11868766 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11868768 je 0x11868772 */
  if (C.zf) goto L_11868772;
  /* 1186876a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1186876d jmp 0x118689bb */
  goto L_118689bb;
L_11868772:;
  /* 11868772 jmp 0x11868805 */
  goto L_11868805;
L_11868777:;
  /* 11868777 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186877b je 0x11868784 */
  if (C.zf) goto L_11868784;
  /* 1186877d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1186877f jmp 0x118689bb */
  goto L_118689bb;
L_11868784:;
  /* 11868784 cmp dword ptr [0x1188489c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1188489c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186878b jne 0x118687c4 */
  if (!C.zf) goto L_118687c4;
  /* 1186878d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 11868792 push 0x11881310 */
  push32((uint32_t)(0x11881310u));
  /* 11868797 push 2 */
  push32((uint32_t)(0x2u));
  /* 11868799 push 4 */
  push32((uint32_t)(0x4u));
  /* 1186879b call 0x118586e0 */
  push32(0x118687a0u); f_118586e0();
  /* 118687a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118687a3 mov dword ptr [0x1188489c], eax */
  w32((uint32_t)(0x1188489c), (EAX));
  /* 118687a8 cmp dword ptr [0x1188489c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1188489c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118687af jne 0x118687b9 */
  if (!C.zf) goto L_118687b9;
  /* 118687b1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118687b4 jmp 0x118689bb */
  goto L_118689bb;
L_118687b9:;
  /* 118687b9 mov eax, dword ptr [0x1188489c] */
  EAX = (r32((uint32_t)(0x1188489c)));
  /* 118687be mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_118687c4:;
  /* 118687c4 cmp dword ptr [0x118848a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118848a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118687cb jne 0x11868805 */
  if (!C.zf) goto L_11868805;
  /* 118687cd push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 118687d2 push 0x11881310 */
  push32((uint32_t)(0x11881310u));
  /* 118687d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 118687d9 push 4 */
  push32((uint32_t)(0x4u));
  /* 118687db call 0x118586e0 */
  push32(0x118687e0u); f_118586e0();
  /* 118687e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118687e3 mov dword ptr [0x118848a4], eax */
  w32((uint32_t)(0x118848a4), (EAX));
  /* 118687e8 cmp dword ptr [0x118848a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118848a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118687ef jne 0x118687f9 */
  if (!C.zf) goto L_118687f9;
  /* 118687f1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118687f4 jmp 0x118689bb */
  goto L_118689bb;
L_118687f9:;
  /* 118687f9 mov ecx, dword ptr [0x118848a4] */
  ECX = (r32((uint32_t)(0x118848a4)));
  /* 118687ff mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_11868805:;
  /* 11868805 mov edx, dword ptr [0x1188489c] */
  EDX = (r32((uint32_t)(0x1188489c)));
  /* 1186880b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1186880e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11868811 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11868814 push eax */
  push32((uint32_t)(EAX));
  /* 11868815 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11868818 push ecx */
  push32((uint32_t)(ECX));
  /* 11868819 call 0x118689c0 */
  push32(0x1186881eu); f_118689c0();
  /* 1186881e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11868821 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11868824 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11868828 jl 0x118688c1 */
  if ((C.sf!=C.of)) goto L_118688c1;
  /* 1186882e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11868831 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11868834 je 0x118688c1 */
  if (C.zf) goto L_118688c1;
  /* 1186883a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186883e je 0x118688b3 */
  if (C.zf) goto L_118688b3;
  /* 11868840 push 2 */
  push32((uint32_t)(0x2u));
  /* 11868842 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11868845 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11868848 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1186884b push edx */
  push32((uint32_t)(EDX));
  /* 1186884c call 0x11859170 */
  push32(0x11868851u); f_11859170();
  /* 11868851 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11868854 jmp 0x1186885f */
  goto L_1186885f;
L_11868856:;
  /* 11868856 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11868859 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1186885c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1186885f:;
  /* 1186885f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11868862 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11868865 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11868869 je 0x11868880 */
  if (C.zf) goto L_11868880;
  /* 1186886b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1186886e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11868871 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11868874 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11868877 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 1186887b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 1186887e jmp 0x11868856 */
  goto L_11868856;
L_11868880:;
  /* 11868880 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 11868885 push 0x11881310 */
  push32((uint32_t)(0x11881310u));
  /* 1186888a push 2 */
  push32((uint32_t)(0x2u));
  /* 1186888c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1186888f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11868892 push eax */
  push32((uint32_t)(EAX));
  /* 11868893 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11868896 push ecx */
  push32((uint32_t)(ECX));
  /* 11868897 call 0x11858b70 */
  push32(0x1186889cu); f_11858b70();
  /* 1186889c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186889f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 118688a2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118688a6 je 0x118688b1 */
  if (C.zf) goto L_118688b1;
  /* 118688a8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118688ab mov dword ptr [0x1188489c], edx */
  w32((uint32_t)(0x1188489c), (EDX));
L_118688b1:;
  /* 118688b1 jmp 0x118688bf */
  goto L_118688bf;
L_118688b3:;
  /* 118688b3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118688b6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118688b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118688bc mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_118688bf:;
  /* 118688bf jmp 0x11868934 */
  goto L_11868934;
L_118688c1:;
  /* 118688c1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118688c5 jne 0x1186892d */
  if (!C.zf) goto L_1186892d;
  /* 118688c7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118688cb jge 0x118688d5 */
  if ((C.sf==C.of)) goto L_118688d5;
  /* 118688cd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118688d0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 118688d2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_118688d5:;
  /* 118688d5 push 0xce */
  push32((uint32_t)(0xceu));
  /* 118688da push 0x11881310 */
  push32((uint32_t)(0x11881310u));
  /* 118688df push 2 */
  push32((uint32_t)(0x2u));
  /* 118688e1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118688e4 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 118688eb push edx */
  push32((uint32_t)(EDX));
  /* 118688ec mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118688ef push eax */
  push32((uint32_t)(EAX));
  /* 118688f0 call 0x11858b70 */
  push32(0x118688f5u); f_11858b70();
  /* 118688f5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118688f8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 118688fb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118688ff jne 0x11868909 */
  if (!C.zf) goto L_11868909;
  /* 11868901 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11868904 jmp 0x118689bb */
  goto L_118689bb;
L_11868909:;
  /* 11868909 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1186890c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1186890f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11868912 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11868915 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11868918 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1186891b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 11868923 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11868926 mov dword ptr [0x1188489c], eax */
  w32((uint32_t)(0x1188489c), (EAX));
  /* 1186892b jmp 0x11868934 */
  goto L_11868934;
L_1186892d:;
  /* 1186892d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1186892f jmp 0x118689bb */
  goto L_118689bb;
L_11868934:;
  /* 11868934 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11868938 je 0x118689b9 */
  if (C.zf) goto L_118689b9;
  /* 1186893a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 1186893f push 0x11881310 */
  push32((uint32_t)(0x11881310u));
  /* 11868944 push 2 */
  push32((uint32_t)(0x2u));
  /* 11868946 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11868949 push ecx */
  push32((uint32_t)(ECX));
  /* 1186894a call 0x1185b510 */
  push32(0x1186894fu); f_1185b510();
  /* 1186894f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11868952 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11868955 push eax */
  push32((uint32_t)(EAX));
  /* 11868956 call 0x118586e0 */
  push32(0x1186895bu); f_118586e0();
  /* 1186895b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186895e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11868961 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11868965 je 0x118689b9 */
  if (C.zf) goto L_118689b9;
  /* 11868967 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186896a push edx */
  push32((uint32_t)(EDX));
  /* 1186896b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1186896e push eax */
  push32((uint32_t)(EAX));
  /* 1186896f call 0x1185b690 */
  push32(0x11868974u); f_1185b690();
  /* 11868974 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11868977 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1186897a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1186897d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11868980 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11868982 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11868985 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11868988 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1186898b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1186898e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11868991 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11868994 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11868997 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11868999 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1186899b not edx */
  EDX = (~(EDX));
  /* 1186899d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 118689a0 push edx */
  push32((uint32_t)(EDX));
  /* 118689a1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 118689a4 push eax */
  push32((uint32_t)(EAX));
  /* 118689a5 call dword ptr [0x118872e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118872e8))), 0x118689abu);
  /* 118689ab push 2 */
  push32((uint32_t)(0x2u));
  /* 118689ad mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 118689b0 push ecx */
  push32((uint32_t)(ECX));
  /* 118689b1 call 0x11859170 */
  push32(0x118689b6u); f_11859170();
  /* 118689b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118689b9:;
  /* 118689b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118689bb:;
  /* 118689bb pop esi */
  ESI = (pop32());
  /* 118689bc mov esp, ebp */
  ESP = (EBP);
  /* 118689be pop ebp */
  EBP = (pop32());
  /* 118689bf ret  */
  ESPCHK(0x118686e0u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x118689c0 (124 bytes, 47 insns) */
void f_118689c0(void) {
  FTRACE(0x118689c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118689c0 push ebp */
  push32((uint32_t)(EBP));
  /* 118689c1 mov ebp, esp */
  EBP = (ESP);
  /* 118689c3 push ecx */
  push32((uint32_t)(ECX));
  /* 118689c4 mov eax, dword ptr [0x1188489c] */
  EAX = (r32((uint32_t)(0x1188489c)));
  /* 118689c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118689cc jmp 0x118689d7 */
  goto L_118689d7;
L_118689ce:;
  /* 118689ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118689d1 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118689d4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_118689d7:;
  /* 118689d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118689da cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118689dd je 0x11868a2a */
  if (C.zf) goto L_11868a2a;
  /* 118689df mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118689e2 push eax */
  push32((uint32_t)(EAX));
  /* 118689e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118689e6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 118689e8 push edx */
  push32((uint32_t)(EDX));
  /* 118689e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118689ec push eax */
  push32((uint32_t)(EAX));
  /* 118689ed call 0x11868190 */
  push32(0x118689f2u); f_11868190();
  /* 118689f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118689f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118689f7 jne 0x11868a28 */
  if (!C.zf) goto L_11868a28;
  /* 118689f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118689fc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 118689fe mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11868a01 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 11868a05 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11868a08 je 0x11868a1a */
  if (C.zf) goto L_11868a1a;
  /* 11868a0a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11868a0d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11868a0f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11868a12 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 11868a16 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11868a18 jne 0x11868a28 */
  if (!C.zf) goto L_11868a28;
L_11868a1a:;
  /* 11868a1a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11868a1d sub eax, dword ptr [0x1188489c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1188489c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11868a23 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11868a26 jmp 0x11868a38 */
  goto L_11868a38;
L_11868a28:;
  /* 11868a28 jmp 0x118689ce */
  goto L_118689ce;
L_11868a2a:;
  /* 11868a2a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11868a2d sub eax, dword ptr [0x1188489c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1188489c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11868a33 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11868a36 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11868a38:;
  /* 11868a38 mov esp, ebp */
  ESP = (EBP);
  /* 11868a3a pop ebp */
  EBP = (pop32());
  /* 11868a3b ret  */
  ESPCHK(0x118689c0u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x11868a40 (238 bytes, 80 insns) */
void f_11868a40(void) {
  FTRACE(0x11868a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11868a40 push ebp */
  push32((uint32_t)(EBP));
  /* 11868a41 mov ebp, esp */
  EBP = (ESP);
  /* 11868a43 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11868a46 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11868a4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11868a50 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11868a53 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11868a57 jne 0x11868a60 */
  if (!C.zf) goto L_11868a60;
  /* 11868a59 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11868a5b jmp 0x11868b2a */
  goto L_11868b2a;
L_11868a60:;
  /* 11868a60 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11868a63 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11868a65 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11868a68 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11868a6b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11868a6e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11868a70 je 0x11868a7d */
  if (C.zf) goto L_11868a7d;
  /* 11868a72 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11868a75 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11868a78 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11868a7b jmp 0x11868a60 */
  goto L_11868a60;
L_11868a7d:;
  /* 11868a7d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 11868a82 push 0x11881310 */
  push32((uint32_t)(0x11881310u));
  /* 11868a87 push 2 */
  push32((uint32_t)(0x2u));
  /* 11868a89 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11868a8c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 11868a93 push eax */
  push32((uint32_t)(EAX));
  /* 11868a94 call 0x118586e0 */
  push32(0x11868a99u); f_118586e0();
  /* 11868a99 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11868a9c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11868a9f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11868aa2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11868aa5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11868aa9 jne 0x11868ab5 */
  if (!C.zf) goto L_11868ab5;
  /* 11868aab push 9 */
  push32((uint32_t)(0x9u));
  /* 11868aad call 0x11857650 */
  push32(0x11868ab2u); f_11857650();
  /* 11868ab2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11868ab5:;
  /* 11868ab5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11868ab8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11868abb:;
  /* 11868abb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11868abe cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11868ac1 je 0x11868b1e */
  if (C.zf) goto L_11868b1e;
  /* 11868ac3 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 11868ac8 push 0x11881310 */
  push32((uint32_t)(0x11881310u));
  /* 11868acd push 2 */
  push32((uint32_t)(0x2u));
  /* 11868acf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11868ad2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11868ad4 push edx */
  push32((uint32_t)(EDX));
  /* 11868ad5 call 0x1185b510 */
  push32(0x11868adau); f_1185b510();
  /* 11868ada add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11868add add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11868ae0 push eax */
  push32((uint32_t)(EAX));
  /* 11868ae1 call 0x118586e0 */
  push32(0x11868ae6u); f_118586e0();
  /* 11868ae6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11868ae9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11868aec mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11868aee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11868af1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11868af4 je 0x11868b0a */
  if (C.zf) goto L_11868b0a;
  /* 11868af6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11868af9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11868afb push ecx */
  push32((uint32_t)(ECX));
  /* 11868afc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11868aff mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11868b01 push eax */
  push32((uint32_t)(EAX));
  /* 11868b02 call 0x1185b690 */
  push32(0x11868b07u); f_1185b690();
  /* 11868b07 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11868b0a:;
  /* 11868b0a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11868b0d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11868b10 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11868b13 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11868b16 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11868b19 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11868b1c jmp 0x11868abb */
  goto L_11868abb;
L_11868b1e:;
  /* 11868b1e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11868b21 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11868b27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11868b2a:;
  /* 11868b2a mov esp, ebp */
  ESP = (EBP);
  /* 11868b2c pop ebp */
  EBP = (pop32());
  /* 11868b2d ret  */
  ESPCHK(0x11868a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10018b30 @ 0x11868b30 (237 bytes, 81 insns) */
void f_11868b30(void) {
  FTRACE(0x11868b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11868b30 push ebp */
  push32((uint32_t)(EBP));
  /* 11868b31 mov ebp, esp */
  EBP = (ESP);
  /* 11868b33 push ecx */
  push32((uint32_t)(ECX));
  /* 11868b34 cmp dword ptr [0x11885fec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11885fec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11868b3b jne 0x11868b52 */
  if (!C.zf) goto L_11868b52;
  /* 11868b3d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11868b40 push eax */
  push32((uint32_t)(EAX));
  /* 11868b41 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11868b44 push ecx */
  push32((uint32_t)(ECX));
  /* 11868b45 call 0x11868c30 */
  push32(0x11868b4au); f_11868c30();
  /* 11868b4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11868b4d jmp 0x11868c19 */
  goto L_11868c19;
L_11868b52:;
  /* 11868b52 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11868b54 call 0x1185c0e0 */
  push32(0x11868b59u); f_1185c0e0();
  /* 11868b59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11868b5c jmp 0x11868b67 */
  goto L_11868b67;
L_11868b5e:;
  /* 11868b5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11868b61 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11868b64 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11868b67:;
  /* 11868b67 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11868b6a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 11868b6e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 11868b72 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11868b75 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11868b7b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11868b7d je 0x11868bfb */
  if (C.zf) goto L_11868bfb;
  /* 11868b7f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11868b82 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11868b87 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11868b89 mov cl, byte ptr [eax + 0x11886101] */
  CL = (r8((uint32_t)(EAX + 0x11886101)));
  /* 11868b8f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11868b92 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11868b94 je 0x11868be6 */
  if (C.zf) goto L_11868be6;
  /* 11868b96 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11868b99 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11868b9c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11868b9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11868ba2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11868ba4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11868ba6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11868ba8 jne 0x11868bb8 */
  if (!C.zf) goto L_11868bb8;
  /* 11868baa push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11868bac call 0x1185c180 */
  push32(0x11868bb1u); f_1185c180();
  /* 11868bb1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11868bb4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11868bb6 jmp 0x11868c19 */
  goto L_11868c19;
L_11868bb8:;
  /* 11868bb8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11868bbb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11868bc1 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11868bc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11868bc7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11868bc9 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11868bcb or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11868bcd cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11868bd0 jne 0x11868be4 */
  if (!C.zf) goto L_11868be4;
  /* 11868bd2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11868bd4 call 0x1185c180 */
  push32(0x11868bd9u); f_1185c180();
  /* 11868bd9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11868bdc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11868bdf sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11868be2 jmp 0x11868c19 */
  goto L_11868c19;
L_11868be4:;
  /* 11868be4 jmp 0x11868bf6 */
  goto L_11868bf6;
L_11868be6:;
  /* 11868be6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11868be9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11868bef cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11868bf2 jne 0x11868bf6 */
  if (!C.zf) goto L_11868bf6;
  /* 11868bf4 jmp 0x11868bfb */
  goto L_11868bfb;
L_11868bf6:;
  /* 11868bf6 jmp 0x11868b5e */
  goto L_11868b5e;
L_11868bfb:;
  /* 11868bfb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11868bfd call 0x1185c180 */
  push32(0x11868c02u); f_1185c180();
  /* 11868c02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11868c05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11868c08 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11868c0d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11868c10 jne 0x11868c17 */
  if (!C.zf) goto L_11868c17;
  /* 11868c12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11868c15 jmp 0x11868c19 */
  goto L_11868c19;
L_11868c17:;
  /* 11868c17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11868c19:;
  /* 11868c19 mov esp, ebp */
  ESP = (EBP);
  /* 11868c1b pop ebp */
  EBP = (pop32());
  /* 11868c1c ret  */
  ESPCHK(0x11868b30u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x11868c30 (193 bytes, 87 insns) */
void f_11868c30(void) {
  FTRACE(0x11868c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11868c30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11868c32 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11868c36 push ebx */
  push32((uint32_t)(EBX));
  /* 11868c37 mov ebx, eax */
  EBX = (EAX);
  /* 11868c39 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11868c3c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11868c40 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11868c46 je 0x11868c5b */
  if (C.zf) goto L_11868c5b;
L_11868c48:;
  /* 11868c48 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11868c4a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11868c4b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11868c4d je 0x11868c20 */
  if (C.zf) { jmp_ind(0x11868c20u); return; }
  /* 11868c4f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11868c51 je 0x11868ca4 */
  if (C.zf) goto L_11868ca4;
  /* 11868c53 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11868c59 jne 0x11868c48 */
  if (!C.zf) goto L_11868c48;
L_11868c5b:;
  /* 11868c5b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 11868c5d push edi */
  push32((uint32_t)(EDI));
  /* 11868c5e mov eax, ebx */
  EAX = (EBX);
  /* 11868c60 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 11868c63 push esi */
  push32((uint32_t)(ESI));
  /* 11868c64 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_11868c66:;
  /* 11868c66 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11868c68 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 11868c6d mov eax, ecx */
  EAX = (ECX);
  /* 11868c6f mov esi, edi */
  ESI = (EDI);
  /* 11868c71 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 11868c73 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11868c75 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11868c77 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11868c7a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11868c7d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11868c7f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11868c81 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11868c84 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 11868c8a jne 0x11868ca8 */
  if (!C.zf) goto L_11868ca8;
  /* 11868c8c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11868c91 je 0x11868c66 */
  if (C.zf) goto L_11868c66;
  /* 11868c93 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11868c98 jne 0x11868ca2 */
  if (!C.zf) goto L_11868ca2;
  /* 11868c9a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 11868ca0 jne 0x11868c66 */
  if (!C.zf) goto L_11868c66;
L_11868ca2:;
  /* 11868ca2 pop esi */
  ESI = (pop32());
  /* 11868ca3 pop edi */
  EDI = (pop32());
L_11868ca4:;
  /* 11868ca4 pop ebx */
  EBX = (pop32());
  /* 11868ca5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11868ca7 ret  */
  ESPCHK(0x11868c30u, _esp0);
  ESP += 4; return;
L_11868ca8:;
  /* 11868ca8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11868cab cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11868cad je 0x11868ce5 */
  if (C.zf) goto L_11868ce5;
  /* 11868caf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11868cb1 je 0x11868ca2 */
  if (C.zf) goto L_11868ca2;
  /* 11868cb3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11868cb5 je 0x11868cde */
  if (C.zf) goto L_11868cde;
  /* 11868cb7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11868cb9 je 0x11868ca2 */
  if (C.zf) goto L_11868ca2;
  /* 11868cbb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11868cbe cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11868cc0 je 0x11868cd7 */
  if (C.zf) goto L_11868cd7;
  /* 11868cc2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11868cc4 je 0x11868ca2 */
  if (C.zf) goto L_11868ca2;
  /* 11868cc6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11868cc8 je 0x11868cd0 */
  if (C.zf) goto L_11868cd0;
  /* 11868cca test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11868ccc je 0x11868ca2 */
  if (C.zf) goto L_11868ca2;
  /* 11868cce jmp 0x11868c66 */
  goto L_11868c66;
L_11868cd0:;
  /* 11868cd0 pop esi */
  ESI = (pop32());
  /* 11868cd1 pop edi */
  EDI = (pop32());
  /* 11868cd2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 11868cd5 pop ebx */
  EBX = (pop32());
  /* 11868cd6 ret  */
  ESPCHK(0x11868c30u, _esp0);
  ESP += 4; return;
L_11868cd7:;
  /* 11868cd7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 11868cda pop esi */
  ESI = (pop32());
  /* 11868cdb pop edi */
  EDI = (pop32());
  /* 11868cdc pop ebx */
  EBX = (pop32());
  /* 11868cdd ret  */
  ESPCHK(0x11868c30u, _esp0);
  ESP += 4; return;
L_11868cde:;
  /* 11868cde lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 11868ce1 pop esi */
  ESI = (pop32());
  /* 11868ce2 pop edi */
  EDI = (pop32());
  /* 11868ce3 pop ebx */
  EBX = (pop32());
  /* 11868ce4 ret  */
  ESPCHK(0x11868c30u, _esp0);
  ESP += 4; return;
L_11868ce5:;
  /* 11868ce5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 11868ce8 pop esi */
  ESI = (pop32());
  /* 11868ce9 pop edi */
  EDI = (pop32());
  /* 11868cea pop ebx */
  EBX = (pop32());
  /* 11868ceb ret  */
  ESPCHK(0x11868c30u, _esp0);
  ESP += 4; return;
  /* 11868cec jmp dword ptr [0x118873ac] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x118873ac)))); return;
}

/* RtlUnwind @ 0x11868e3c (6 bytes, 1 insns) */
void f_11868e3c(void) {
  FTRACE(0x11868e3cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11868e3c jmp dword ptr [0x11887320] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11887320)))); return;
}

