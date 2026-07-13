#include "recomp.h"

/* FUN_1000ff70 @ 0x104eff70 (289 bytes, 97 insns) */
void f_104eff70(void) {
  FTRACE(0x104eff70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104eff70 push ebp */
  push32((uint32_t)(EBP));
  /* 104eff71 mov ebp, esp */
  EBP = (ESP);
  /* 104eff73 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104eff76 push esi */
  push32((uint32_t)(ESI));
  /* 104eff77 mov eax, dword ptr [0x1050ec98] */
  EAX = (r32((uint32_t)(0x1050ec98)));
  /* 104eff7c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104eff7f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 104eff86 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 104eff8d jmp 0x104eff98 */
  goto L_104eff98;
L_104eff8f:;
  /* 104eff8f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104eff92 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104eff95 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_104eff98:;
  /* 104eff98 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eff9c jae 0x104effd1 */
  if (!C.cf) goto L_104effd1;
  /* 104eff9e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104effa1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104effa4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 104effa7 push ecx */
  push32((uint32_t)(ECX));
  /* 104effa8 call 0x104e6050 */
  push32(0x104effadu); f_104e6050();
  /* 104effad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104effb0 mov esi, eax */
  ESI = (EAX);
  /* 104effb2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104effb5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104effb8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 104effbc push ecx */
  push32((uint32_t)(ECX));
  /* 104effbd call 0x104e6050 */
  push32(0x104effc2u); f_104e6050();
  /* 104effc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104effc5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104effc8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 104effcc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 104effcf jmp 0x104eff8f */
  goto L_104eff8f;
L_104effd1:;
  /* 104effd1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104effd4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104effd7 push eax */
  push32((uint32_t)(EAX));
  /* 104effd8 call 0x104e3200 */
  push32(0x104effddu); f_104e3200();
  /* 104effdd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104effe0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104effe3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104effe7 je 0x104f0089 */
  if (C.zf) goto L_104f0089;
  /* 104effed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104efff0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 104efff3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 104efffa jmp 0x104f0005 */
  goto L_104f0005;
L_104efffc:;
  /* 104efffc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104effff add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0002 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_104f0005:;
  /* 104f0005 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f0009 jae 0x104f007a */
  if (!C.cf) goto L_104f007a;
  /* 104f000b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104f000e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 104f0011 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104f0014 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0017 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 104f001a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104f001d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f0020 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 104f0023 push ecx */
  push32((uint32_t)(ECX));
  /* 104f0024 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104f0027 push edx */
  push32((uint32_t)(EDX));
  /* 104f0028 call 0x104e61d0 */
  push32(0x104f002du); f_104e61d0();
  /* 104f002d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0030 push eax */
  push32((uint32_t)(EAX));
  /* 104f0031 call 0x104e6050 */
  push32(0x104f0036u); f_104e6050();
  /* 104f0036 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0039 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104f003c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f003e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 104f0041 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104f0044 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 104f0047 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104f004a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f004d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 104f0050 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104f0053 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f0056 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 104f005a push eax */
  push32((uint32_t)(EAX));
  /* 104f005b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104f005e push ecx */
  push32((uint32_t)(ECX));
  /* 104f005f call 0x104e61d0 */
  push32(0x104f0064u); f_104e61d0();
  /* 104f0064 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0067 push eax */
  push32((uint32_t)(EAX));
  /* 104f0068 call 0x104e6050 */
  push32(0x104f006du); f_104e6050();
  /* 104f006d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0070 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104f0073 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0075 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 104f0078 jmp 0x104efffc */
  goto L_104efffc;
L_104f007a:;
  /* 104f007a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104f007d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 104f0080 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104f0083 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0086 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_104f0089:;
  /* 104f0089 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f008c pop esi */
  ESI = (pop32());
  /* 104f008d mov esp, ebp */
  ESP = (EBP);
  /* 104f008f pop ebp */
  EBP = (pop32());
  /* 104f0090 ret  */
  ESPCHK(0x104eff70u, _esp0);
  ESP += 4; return;
}

/* FUN_100100a0 @ 0x104f00a0 (291 bytes, 97 insns) */
void f_104f00a0(void) {
  FTRACE(0x104f00a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104f00a0 push ebp */
  push32((uint32_t)(EBP));
  /* 104f00a1 mov ebp, esp */
  EBP = (ESP);
  /* 104f00a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f00a6 push esi */
  push32((uint32_t)(ESI));
  /* 104f00a7 mov eax, dword ptr [0x1050ec98] */
  EAX = (r32((uint32_t)(0x1050ec98)));
  /* 104f00ac mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104f00af mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 104f00b6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 104f00bd jmp 0x104f00c8 */
  goto L_104f00c8;
L_104f00bf:;
  /* 104f00bf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104f00c2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f00c5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_104f00c8:;
  /* 104f00c8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f00cc jae 0x104f0102 */
  if (!C.cf) goto L_104f0102;
  /* 104f00ce mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104f00d1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f00d4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 104f00d8 push ecx */
  push32((uint32_t)(ECX));
  /* 104f00d9 call 0x104e6050 */
  push32(0x104f00deu); f_104e6050();
  /* 104f00de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f00e1 mov esi, eax */
  ESI = (EAX);
  /* 104f00e3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104f00e6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f00e9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 104f00ed push ecx */
  push32((uint32_t)(ECX));
  /* 104f00ee call 0x104e6050 */
  push32(0x104f00f3u); f_104e6050();
  /* 104f00f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f00f6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f00f9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 104f00fd mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 104f0100 jmp 0x104f00bf */
  goto L_104f00bf;
L_104f0102:;
  /* 104f0102 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104f0105 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0108 push eax */
  push32((uint32_t)(EAX));
  /* 104f0109 call 0x104e3200 */
  push32(0x104f010eu); f_104e3200();
  /* 104f010e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0111 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104f0114 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f0118 je 0x104f01bb */
  if (C.zf) goto L_104f01bb;
  /* 104f011e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f0121 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 104f0124 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 104f012b jmp 0x104f0136 */
  goto L_104f0136;
L_104f012d:;
  /* 104f012d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104f0130 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0133 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_104f0136:;
  /* 104f0136 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f013a jae 0x104f01ac */
  if (!C.cf) goto L_104f01ac;
  /* 104f013c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104f013f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 104f0142 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104f0145 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0148 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 104f014b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104f014e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f0151 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 104f0155 push ecx */
  push32((uint32_t)(ECX));
  /* 104f0156 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104f0159 push edx */
  push32((uint32_t)(EDX));
  /* 104f015a call 0x104e61d0 */
  push32(0x104f015fu); f_104e61d0();
  /* 104f015f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0162 push eax */
  push32((uint32_t)(EAX));
  /* 104f0163 call 0x104e6050 */
  push32(0x104f0168u); f_104e6050();
  /* 104f0168 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f016b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104f016e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0170 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 104f0173 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104f0176 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 104f0179 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104f017c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f017f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 104f0182 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104f0185 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f0188 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 104f018c push eax */
  push32((uint32_t)(EAX));
  /* 104f018d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104f0190 push ecx */
  push32((uint32_t)(ECX));
  /* 104f0191 call 0x104e61d0 */
  push32(0x104f0196u); f_104e61d0();
  /* 104f0196 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0199 push eax */
  push32((uint32_t)(EAX));
  /* 104f019a call 0x104e6050 */
  push32(0x104f019fu); f_104e6050();
  /* 104f019f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f01a2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104f01a5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f01a7 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 104f01aa jmp 0x104f012d */
  goto L_104f012d;
L_104f01ac:;
  /* 104f01ac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104f01af mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 104f01b2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104f01b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f01b8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_104f01bb:;
  /* 104f01bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f01be pop esi */
  ESI = (pop32());
  /* 104f01bf mov esp, ebp */
  ESP = (EBP);
  /* 104f01c1 pop ebp */
  EBP = (pop32());
  /* 104f01c2 ret  */
  ESPCHK(0x104f00a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100101d0 @ 0x104f01d0 (878 bytes, 273 insns) */
void f_104f01d0(void) {
  FTRACE(0x104f01d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104f01d0 push ebp */
  push32((uint32_t)(EBP));
  /* 104f01d1 mov ebp, esp */
  EBP = (ESP);
  /* 104f01d3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f01d6 push esi */
  push32((uint32_t)(ESI));
  /* 104f01d7 mov eax, dword ptr [0x1050ec98] */
  EAX = (r32((uint32_t)(0x1050ec98)));
  /* 104f01dc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104f01df mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 104f01e6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 104f01ed jmp 0x104f01f8 */
  goto L_104f01f8;
L_104f01ef:;
  /* 104f01ef mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104f01f2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f01f5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_104f01f8:;
  /* 104f01f8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f01fc jae 0x104f0231 */
  if (!C.cf) goto L_104f0231;
  /* 104f01fe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104f0201 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f0204 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 104f0207 push ecx */
  push32((uint32_t)(ECX));
  /* 104f0208 call 0x104e6050 */
  push32(0x104f020du); f_104e6050();
  /* 104f020d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0210 mov esi, eax */
  ESI = (EAX);
  /* 104f0212 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104f0215 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f0218 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 104f021c push ecx */
  push32((uint32_t)(ECX));
  /* 104f021d call 0x104e6050 */
  push32(0x104f0222u); f_104e6050();
  /* 104f0222 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0225 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0228 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 104f022c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 104f022f jmp 0x104f01ef */
  goto L_104f01ef;
L_104f0231:;
  /* 104f0231 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 104f0238 jmp 0x104f0243 */
  goto L_104f0243;
L_104f023a:;
  /* 104f023a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104f023d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0240 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_104f0243:;
  /* 104f0243 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f0247 jae 0x104f027d */
  if (!C.cf) goto L_104f027d;
  /* 104f0249 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104f024c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f024f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 104f0253 push eax */
  push32((uint32_t)(EAX));
  /* 104f0254 call 0x104e6050 */
  push32(0x104f0259u); f_104e6050();
  /* 104f0259 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f025c mov esi, eax */
  ESI = (EAX);
  /* 104f025e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104f0261 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f0264 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 104f0268 push eax */
  push32((uint32_t)(EAX));
  /* 104f0269 call 0x104e6050 */
  push32(0x104f026eu); f_104e6050();
  /* 104f026e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0271 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0274 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 104f0278 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104f027b jmp 0x104f023a */
  goto L_104f023a;
L_104f027d:;
  /* 104f027d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f0280 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 104f0286 push eax */
  push32((uint32_t)(EAX));
  /* 104f0287 call 0x104e6050 */
  push32(0x104f028cu); f_104e6050();
  /* 104f028c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f028f mov esi, eax */
  ESI = (EAX);
  /* 104f0291 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f0294 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 104f029a push edx */
  push32((uint32_t)(EDX));
  /* 104f029b call 0x104e6050 */
  push32(0x104f02a0u); f_104e6050();
  /* 104f02a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f02a3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f02a6 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 104f02aa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104f02ad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f02b0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 104f02b6 push edx */
  push32((uint32_t)(EDX));
  /* 104f02b7 call 0x104e6050 */
  push32(0x104f02bcu); f_104e6050();
  /* 104f02bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f02bf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104f02c2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 104f02c6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 104f02c9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f02cc mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 104f02d2 push ecx */
  push32((uint32_t)(ECX));
  /* 104f02d3 call 0x104e6050 */
  push32(0x104f02d8u); f_104e6050();
  /* 104f02d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f02db mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104f02de lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 104f02e2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104f02e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f02e8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 104f02ee push edx */
  push32((uint32_t)(EDX));
  /* 104f02ef call 0x104e6050 */
  push32(0x104f02f4u); f_104e6050();
  /* 104f02f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f02f7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104f02fa lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 104f02fe mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 104f0301 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104f0304 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0309 push eax */
  push32((uint32_t)(EAX));
  /* 104f030a call 0x104e3200 */
  push32(0x104f030fu); f_104e3200();
  /* 104f030f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0312 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104f0315 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f0319 je 0x104f0536 */
  if (C.zf) goto L_104f0536;
  /* 104f031f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f0322 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 104f0325 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f0328 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f032e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 104f0331 push 0xac */
  push32((uint32_t)(0xacu));
  /* 104f0336 mov eax, dword ptr [0x1050ec98] */
  EAX = (r32((uint32_t)(0x1050ec98)));
  /* 104f033b push eax */
  push32((uint32_t)(EAX));
  /* 104f033c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f033f push ecx */
  push32((uint32_t)(ECX));
  /* 104f0340 call 0x104e9b00 */
  push32(0x104f0345u); f_104e9b00();
  /* 104f0345 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0348 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 104f034f jmp 0x104f035a */
  goto L_104f035a;
L_104f0351:;
  /* 104f0351 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104f0354 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0357 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_104f035a:;
  /* 104f035a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f035e jae 0x104f03ce */
  if (!C.cf) goto L_104f03ce;
  /* 104f0360 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104f0363 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104f0366 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104f0369 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 104f036c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104f036f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f0372 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 104f0375 push edx */
  push32((uint32_t)(EDX));
  /* 104f0376 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104f0379 push eax */
  push32((uint32_t)(EAX));
  /* 104f037a call 0x104e61d0 */
  push32(0x104f037fu); f_104e61d0();
  /* 104f037f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0382 push eax */
  push32((uint32_t)(EAX));
  /* 104f0383 call 0x104e6050 */
  push32(0x104f0388u); f_104e6050();
  /* 104f0388 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f038b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104f038e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 104f0392 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 104f0395 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104f0398 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104f039b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104f039e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 104f03a2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104f03a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f03a8 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 104f03ac push edx */
  push32((uint32_t)(EDX));
  /* 104f03ad mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104f03b0 push eax */
  push32((uint32_t)(EAX));
  /* 104f03b1 call 0x104e61d0 */
  push32(0x104f03b6u); f_104e61d0();
  /* 104f03b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f03b9 push eax */
  push32((uint32_t)(EAX));
  /* 104f03ba call 0x104e6050 */
  push32(0x104f03bfu); f_104e6050();
  /* 104f03bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f03c2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104f03c5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 104f03c9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 104f03cc jmp 0x104f0351 */
  goto L_104f0351;
L_104f03ce:;
  /* 104f03ce mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 104f03d5 jmp 0x104f03e0 */
  goto L_104f03e0;
L_104f03d7:;
  /* 104f03d7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104f03da add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f03dd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_104f03e0:;
  /* 104f03e0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f03e4 jae 0x104f0456 */
  if (!C.cf) goto L_104f0456;
  /* 104f03e6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104f03e9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104f03ec mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104f03ef mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 104f03f3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104f03f6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f03f9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 104f03fd push eax */
  push32((uint32_t)(EAX));
  /* 104f03fe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104f0401 push ecx */
  push32((uint32_t)(ECX));
  /* 104f0402 call 0x104e61d0 */
  push32(0x104f0407u); f_104e61d0();
  /* 104f0407 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f040a push eax */
  push32((uint32_t)(EAX));
  /* 104f040b call 0x104e6050 */
  push32(0x104f0410u); f_104e6050();
  /* 104f0410 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0413 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104f0416 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 104f041a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 104f041d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104f0420 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104f0423 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104f0426 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 104f042a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104f042d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f0430 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 104f0434 push eax */
  push32((uint32_t)(EAX));
  /* 104f0435 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104f0438 push ecx */
  push32((uint32_t)(ECX));
  /* 104f0439 call 0x104e61d0 */
  push32(0x104f043eu); f_104e61d0();
  /* 104f043e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0441 push eax */
  push32((uint32_t)(EAX));
  /* 104f0442 call 0x104e6050 */
  push32(0x104f0447u); f_104e6050();
  /* 104f0447 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f044a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104f044d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 104f0451 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 104f0454 jmp 0x104f03d7 */
  goto L_104f03d7;
L_104f0456:;
  /* 104f0456 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104f0459 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104f045c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 104f0462 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f0465 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 104f046b push ecx */
  push32((uint32_t)(ECX));
  /* 104f046c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104f046f push edx */
  push32((uint32_t)(EDX));
  /* 104f0470 call 0x104e61d0 */
  push32(0x104f0475u); f_104e61d0();
  /* 104f0475 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0478 push eax */
  push32((uint32_t)(EAX));
  /* 104f0479 call 0x104e6050 */
  push32(0x104f047eu); f_104e6050();
  /* 104f047e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0481 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104f0484 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 104f0488 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 104f048b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104f048e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104f0491 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 104f0497 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f049a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 104f04a0 push eax */
  push32((uint32_t)(EAX));
  /* 104f04a1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104f04a4 push ecx */
  push32((uint32_t)(ECX));
  /* 104f04a5 call 0x104e61d0 */
  push32(0x104f04aau); f_104e61d0();
  /* 104f04aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f04ad push eax */
  push32((uint32_t)(EAX));
  /* 104f04ae call 0x104e6050 */
  push32(0x104f04b3u); f_104e6050();
  /* 104f04b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f04b6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104f04b9 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 104f04bd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 104f04c0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104f04c3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104f04c6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 104f04cc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f04cf mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 104f04d5 push ecx */
  push32((uint32_t)(ECX));
  /* 104f04d6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104f04d9 push edx */
  push32((uint32_t)(EDX));
  /* 104f04da call 0x104e61d0 */
  push32(0x104f04dfu); f_104e61d0();
  /* 104f04df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f04e2 push eax */
  push32((uint32_t)(EAX));
  /* 104f04e3 call 0x104e6050 */
  push32(0x104f04e8u); f_104e6050();
  /* 104f04e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f04eb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104f04ee lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 104f04f2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 104f04f5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104f04f8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104f04fb mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 104f0501 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f0504 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 104f050a push eax */
  push32((uint32_t)(EAX));
  /* 104f050b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104f050e push ecx */
  push32((uint32_t)(ECX));
  /* 104f050f call 0x104e61d0 */
  push32(0x104f0514u); f_104e61d0();
  /* 104f0514 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0517 push eax */
  push32((uint32_t)(EAX));
  /* 104f0518 call 0x104e6050 */
  push32(0x104f051du); f_104e6050();
  /* 104f051d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0520 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104f0523 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 104f0527 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 104f052a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104f052d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104f0530 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_104f0536:;
  /* 104f0536 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f0539 pop esi */
  ESI = (pop32());
  /* 104f053a mov esp, ebp */
  ESP = (EBP);
  /* 104f053c pop ebp */
  EBP = (pop32());
  /* 104f053d ret  */
  ESPCHK(0x104f01d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010540 @ 0x104f0540 (31 bytes, 15 insns) */
void f_104f0540(void) {
  FTRACE(0x104f0540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104f0540 push ebp */
  push32((uint32_t)(EBP));
  /* 104f0541 mov ebp, esp */
  EBP = (ESP);
  /* 104f0543 push 0 */
  push32((uint32_t)(0x0u));
  /* 104f0545 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f0548 push eax */
  push32((uint32_t)(EAX));
  /* 104f0549 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f054c push ecx */
  push32((uint32_t)(ECX));
  /* 104f054d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f0550 push edx */
  push32((uint32_t)(EDX));
  /* 104f0551 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f0554 push eax */
  push32((uint32_t)(EAX));
  /* 104f0555 call 0x104f0560 */
  push32(0x104f055au); f_104f0560();
  /* 104f055a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f055d pop ebp */
  EBP = (pop32());
  /* 104f055e ret  */
  ESPCHK(0x104f0540u, _esp0);
  ESP += 4; return;
}

/* FUN_10010560 @ 0x104f0560 (393 bytes, 123 insns) */
void f_104f0560(void) {
  FTRACE(0x104f0560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104f0560 push ebp */
  push32((uint32_t)(EBP));
  /* 104f0561 mov ebp, esp */
  EBP = (ESP);
  /* 104f0563 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f0566 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f056a jne 0x104f0576 */
  if (!C.zf) goto L_104f0576;
  /* 104f056c mov eax, dword ptr [0x1050ec98] */
  EAX = (r32((uint32_t)(0x1050ec98)));
  /* 104f0571 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 104f0574 jmp 0x104f057c */
  goto L_104f057c;
L_104f0576:;
  /* 104f0576 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 104f0579 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_104f057c:;
  /* 104f057c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104f057f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104f0582 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f0585 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104f0588 push 0x1050f84c */
  push32((uint32_t)(0x1050f84cu));
  /* 104f058d call dword ptr [0x1051229c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1051229c))), 0x104f0593u);
  /* 104f0593 cmp dword ptr [0x1050f83c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f83c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f059a je 0x104f05ba */
  if (C.zf) goto L_104f05ba;
  /* 104f059c push 0x1050f84c */
  push32((uint32_t)(0x1050f84cu));
  /* 104f05a1 call dword ptr [0x1051228c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1051228c))), 0x104f05a7u);
  /* 104f05a7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 104f05a9 call 0x104e6c20 */
  push32(0x104f05aeu); f_104e6c20();
  /* 104f05ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f05b1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 104f05b8 jmp 0x104f05c1 */
  goto L_104f05c1;
L_104f05ba:;
  /* 104f05ba mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_104f05c1:;
  /* 104f05c1 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f05c5 jbe 0x104f06b2 */
  if ((C.cf||C.zf)) goto L_104f06b2;
  /* 104f05cb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f05ce mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104f05d0 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 104f05d3 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104f05d7 je 0x104f05e1 */
  if (C.zf) goto L_104f05e1;
  /* 104f05d9 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104f05dd je 0x104f05e6 */
  if (C.zf) goto L_104f05e6;
  /* 104f05df jmp 0x104f0640 */
  goto L_104f0640;
L_104f05e1:;
  /* 104f05e1 jmp 0x104f06b2 */
  goto L_104f06b2;
L_104f05e6:;
  /* 104f05e6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f05e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f05ec mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 104f05ef mov dword ptr [0x1050f828], 0 */
  w32((uint32_t)(0x1050f828), (0x0u));
  /* 104f05f9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f05fc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104f05ff cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f0602 jne 0x104f0617 */
  if (!C.zf) goto L_104f0617;
  /* 104f0604 mov dword ptr [0x1050f828], 1 */
  w32((uint32_t)(0x1050f828), (0x1u));
  /* 104f060e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f0611 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0614 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_104f0617:;
  /* 104f0617 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f061a push ecx */
  push32((uint32_t)(ECX));
  /* 104f061b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 104f061e push edx */
  push32((uint32_t)(EDX));
  /* 104f061f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 104f0622 push eax */
  push32((uint32_t)(EAX));
  /* 104f0623 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f0626 push ecx */
  push32((uint32_t)(ECX));
  /* 104f0627 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f062a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104f062c push eax */
  push32((uint32_t)(EAX));
  /* 104f062d call 0x104f06f0 */
  push32(0x104f0632u); f_104f06f0();
  /* 104f0632 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0635 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f0638 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f063b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 104f063e jmp 0x104f06ad */
  goto L_104f06ad;
L_104f0640:;
  /* 104f0640 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f0643 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f0645 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104f0647 mov ecx, dword ptr [0x1050dc98] */
  ECX = (r32((uint32_t)(0x1050dc98)));
  /* 104f064d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104f064f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 104f0653 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 104f0659 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104f065b je 0x104f0688 */
  if (C.zf) goto L_104f0688;
  /* 104f065d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f0661 jbe 0x104f0688 */
  if ((C.cf||C.zf)) goto L_104f0688;
  /* 104f0663 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f0666 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f0669 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104f066b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 104f066d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f0670 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0673 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 104f0676 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f0679 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f067c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 104f067f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f0682 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f0685 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_104f0688:;
  /* 104f0688 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f068b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f068e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104f0690 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 104f0692 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f0695 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0698 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 104f069b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f069e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f06a1 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 104f06a4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f06a7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f06aa mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_104f06ad:;
  /* 104f06ad jmp 0x104f05c1 */
  goto L_104f05c1;
L_104f06b2:;
  /* 104f06b2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f06b6 je 0x104f06c4 */
  if (C.zf) goto L_104f06c4;
  /* 104f06b8 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 104f06ba call 0x104e6cc0 */
  push32(0x104f06bfu); f_104e6cc0();
  /* 104f06bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f06c2 jmp 0x104f06cf */
  goto L_104f06cf;
L_104f06c4:;
  /* 104f06c4 push 0x1050f84c */
  push32((uint32_t)(0x1050f84cu));
  /* 104f06c9 call dword ptr [0x1051228c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1051228c))), 0x104f06cfu);
L_104f06cf:;
  /* 104f06cf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f06d3 jbe 0x104f06e3 */
  if ((C.cf||C.zf)) goto L_104f06e3;
  /* 104f06d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f06d8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 104f06db mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f06de sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f06e1 jmp 0x104f06e5 */
  goto L_104f06e5;
L_104f06e3:;
  /* 104f06e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104f06e5:;
  /* 104f06e5 mov esp, ebp */
  ESP = (EBP);
  /* 104f06e7 pop ebp */
  EBP = (pop32());
  /* 104f06e8 ret  */
  ESPCHK(0x104f0560u, _esp0);
  ESP += 4; return;
}

/* FUN_100106f0 @ 0x104f06f0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_104f06f0(void) {
  FTRACE(0x104f06f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104f06f0 push ebp */
  push32((uint32_t)(EBP));
  /* 104f06f1 mov ebp, esp */
  EBP = (ESP);
  /* 104f06f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f06f6 push esi */
  push32((uint32_t)(ESI));
  /* 104f06f7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 104f06fb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104f06fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f0701 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f0704 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104f0707 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f070b ja 0x104f0c58 */
  if ((!C.cf&&!C.zf)) goto L_104f0c58;
  /* 104f0711 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f0714 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104f0716 mov dl, byte ptr [eax + 0x104f0cb9] */
  DL = (r8((uint32_t)(EAX + 0x104f0cb9)));
  /* 104f071c jmp dword ptr [edx*4 + 0x104f0c5d] */
  switch (EDX) {
    case 0: goto L_104f0c36;
    case 1: goto L_104f0745;
    case 2: goto L_104f078b;
    case 3: goto L_104f08d8;
    case 4: goto L_104f0900;
    case 5: goto L_104f099f;
    case 6: goto L_104f0a0b;
    case 7: goto L_104f0a34;
    case 8: goto L_104f0a75;
    case 9: goto L_104f0b57;
    case 10: goto L_104f0bbe;
    case 11: goto L_104f0c0b;
    case 12: goto L_104f0723;
    case 13: goto L_104f0768;
    case 14: goto L_104f07ae;
    case 15: goto L_104f08ae;
    case 16: goto L_104f0945;
    case 17: goto L_104f0972;
    case 18: goto L_104f09c7;
    case 19: goto L_104f0a4b;
    case 20: goto L_104f0af9;
    case 21: goto L_104f0b88;
    case 22: goto L_104f0c58;
    default: x86_unimpl("switch@0x104f071c out of table"); return;
  }
L_104f0723:;
  /* 104f0723 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f0726 push ecx */
  push32((uint32_t)(ECX));
  /* 104f0727 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f072a push edx */
  push32((uint32_t)(EDX));
  /* 104f072b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f072e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 104f0731 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104f0734 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 104f0737 push eax */
  push32((uint32_t)(EAX));
  /* 104f0738 call 0x104f0d10 */
  push32(0x104f073du); f_104f0d10();
  /* 104f073d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0740 jmp 0x104f0c58 */
  goto L_104f0c58;
L_104f0745:;
  /* 104f0745 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f0748 push ecx */
  push32((uint32_t)(ECX));
  /* 104f0749 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f074c push edx */
  push32((uint32_t)(EDX));
  /* 104f074d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f0750 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 104f0753 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104f0756 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 104f075a push eax */
  push32((uint32_t)(EAX));
  /* 104f075b call 0x104f0d10 */
  push32(0x104f0760u); f_104f0d10();
  /* 104f0760 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0763 jmp 0x104f0c58 */
  goto L_104f0c58;
L_104f0768:;
  /* 104f0768 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f076b push ecx */
  push32((uint32_t)(ECX));
  /* 104f076c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f076f push edx */
  push32((uint32_t)(EDX));
  /* 104f0770 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f0773 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 104f0776 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104f0779 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 104f077d push eax */
  push32((uint32_t)(EAX));
  /* 104f077e call 0x104f0d10 */
  push32(0x104f0783u); f_104f0d10();
  /* 104f0783 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0786 jmp 0x104f0c58 */
  goto L_104f0c58;
L_104f078b:;
  /* 104f078b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f078e push ecx */
  push32((uint32_t)(ECX));
  /* 104f078f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f0792 push edx */
  push32((uint32_t)(EDX));
  /* 104f0793 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f0796 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 104f0799 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104f079c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 104f07a0 push eax */
  push32((uint32_t)(EAX));
  /* 104f07a1 call 0x104f0d10 */
  push32(0x104f07a6u); f_104f0d10();
  /* 104f07a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f07a9 jmp 0x104f0c58 */
  goto L_104f0c58;
L_104f07ae:;
  /* 104f07ae cmp dword ptr [0x1050f828], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f828))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f07b5 je 0x104f0836 */
  if (C.zf) goto L_104f0836;
  /* 104f07b7 mov dword ptr [0x1050f828], 0 */
  w32((uint32_t)(0x1050f828), (0x0u));
  /* 104f07c1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 104f07c4 push ecx */
  push32((uint32_t)(ECX));
  /* 104f07c5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f07c8 push edx */
  push32((uint32_t)(EDX));
  /* 104f07c9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f07cc push eax */
  push32((uint32_t)(EAX));
  /* 104f07cd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f07d0 push ecx */
  push32((uint32_t)(ECX));
  /* 104f07d1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104f07d4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 104f07da push eax */
  push32((uint32_t)(EAX));
  /* 104f07db call 0x104f0ec0 */
  push32(0x104f07e0u); f_104f0ec0();
  /* 104f07e0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f07e3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f07e6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f07e9 jne 0x104f07f0 */
  if (!C.zf) goto L_104f07f0;
  /* 104f07eb jmp 0x104f0c58 */
  goto L_104f0c58;
L_104f07f0:;
  /* 104f07f0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f07f3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104f07f5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 104f07f8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f07fb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104f07fd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0800 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f0803 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 104f0805 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f0808 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104f080a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f080d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f0810 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 104f0812 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 104f0815 push ecx */
  push32((uint32_t)(ECX));
  /* 104f0816 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f0819 push edx */
  push32((uint32_t)(EDX));
  /* 104f081a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f081d push eax */
  push32((uint32_t)(EAX));
  /* 104f081e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f0821 push ecx */
  push32((uint32_t)(ECX));
  /* 104f0822 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104f0825 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 104f082b push eax */
  push32((uint32_t)(EAX));
  /* 104f082c call 0x104f0ec0 */
  push32(0x104f0831u); f_104f0ec0();
  /* 104f0831 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0834 jmp 0x104f08a9 */
  goto L_104f08a9;
L_104f0836:;
  /* 104f0836 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 104f0839 push ecx */
  push32((uint32_t)(ECX));
  /* 104f083a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f083d push edx */
  push32((uint32_t)(EDX));
  /* 104f083e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f0841 push eax */
  push32((uint32_t)(EAX));
  /* 104f0842 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f0845 push ecx */
  push32((uint32_t)(ECX));
  /* 104f0846 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104f0849 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 104f084f push eax */
  push32((uint32_t)(EAX));
  /* 104f0850 call 0x104f0ec0 */
  push32(0x104f0855u); f_104f0ec0();
  /* 104f0855 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0858 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f085b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f085e jne 0x104f0865 */
  if (!C.zf) goto L_104f0865;
  /* 104f0860 jmp 0x104f0c58 */
  goto L_104f0c58;
L_104f0865:;
  /* 104f0865 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f0868 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104f086a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 104f086d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f0870 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104f0872 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0875 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f0878 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 104f087a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f087d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104f087f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f0882 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f0885 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 104f0887 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 104f088a push ecx */
  push32((uint32_t)(ECX));
  /* 104f088b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f088e push edx */
  push32((uint32_t)(EDX));
  /* 104f088f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f0892 push eax */
  push32((uint32_t)(EAX));
  /* 104f0893 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f0896 push ecx */
  push32((uint32_t)(ECX));
  /* 104f0897 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104f089a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 104f08a0 push eax */
  push32((uint32_t)(EAX));
  /* 104f08a1 call 0x104f0ec0 */
  push32(0x104f08a6u); f_104f0ec0();
  /* 104f08a6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104f08a9:;
  /* 104f08a9 jmp 0x104f0c58 */
  goto L_104f0c58;
L_104f08ae:;
  /* 104f08ae mov ecx, dword ptr [0x1050f828] */
  ECX = (r32((uint32_t)(0x1050f828)));
  /* 104f08b4 mov dword ptr [0x1050f838], ecx */
  w32((uint32_t)(0x1050f838), (ECX));
  /* 104f08ba mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f08bd push edx */
  push32((uint32_t)(EDX));
  /* 104f08be mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f08c1 push eax */
  push32((uint32_t)(EAX));
  /* 104f08c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 104f08c4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f08c7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 104f08ca push edx */
  push32((uint32_t)(EDX));
  /* 104f08cb call 0x104f0d60 */
  push32(0x104f08d0u); f_104f0d60();
  /* 104f08d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f08d3 jmp 0x104f0c58 */
  goto L_104f0c58;
L_104f08d8:;
  /* 104f08d8 mov eax, dword ptr [0x1050f828] */
  EAX = (r32((uint32_t)(0x1050f828)));
  /* 104f08dd mov dword ptr [0x1050f838], eax */
  w32((uint32_t)(0x1050f838), (EAX));
  /* 104f08e2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f08e5 push ecx */
  push32((uint32_t)(ECX));
  /* 104f08e6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f08e9 push edx */
  push32((uint32_t)(EDX));
  /* 104f08ea push 2 */
  push32((uint32_t)(0x2u));
  /* 104f08ec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f08ef mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 104f08f2 push ecx */
  push32((uint32_t)(ECX));
  /* 104f08f3 call 0x104f0d60 */
  push32(0x104f08f8u); f_104f0d60();
  /* 104f08f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f08fb jmp 0x104f0c58 */
  goto L_104f0c58;
L_104f0900:;
  /* 104f0900 mov edx, dword ptr [0x1050f828] */
  EDX = (r32((uint32_t)(0x1050f828)));
  /* 104f0906 mov dword ptr [0x1050f838], edx */
  w32((uint32_t)(0x1050f838), (EDX));
  /* 104f090c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f090f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 104f0912 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 104f0913 mov ecx, 0xc */
  ECX = (0xcu);
  /* 104f0918 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 104f091a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104f091d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f0921 jne 0x104f092a */
  if (!C.zf) goto L_104f092a;
  /* 104f0923 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_104f092a:;
  /* 104f092a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f092d push edx */
  push32((uint32_t)(EDX));
  /* 104f092e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f0931 push eax */
  push32((uint32_t)(EAX));
  /* 104f0932 push 2 */
  push32((uint32_t)(0x2u));
  /* 104f0934 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f0937 push ecx */
  push32((uint32_t)(ECX));
  /* 104f0938 call 0x104f0d60 */
  push32(0x104f093du); f_104f0d60();
  /* 104f093d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0940 jmp 0x104f0c58 */
  goto L_104f0c58;
L_104f0945:;
  /* 104f0945 mov edx, dword ptr [0x1050f828] */
  EDX = (r32((uint32_t)(0x1050f828)));
  /* 104f094b mov dword ptr [0x1050f838], edx */
  w32((uint32_t)(0x1050f838), (EDX));
  /* 104f0951 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f0954 push eax */
  push32((uint32_t)(EAX));
  /* 104f0955 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f0958 push ecx */
  push32((uint32_t)(ECX));
  /* 104f0959 push 3 */
  push32((uint32_t)(0x3u));
  /* 104f095b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f095e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 104f0961 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0964 push eax */
  push32((uint32_t)(EAX));
  /* 104f0965 call 0x104f0d60 */
  push32(0x104f096au); f_104f0d60();
  /* 104f096a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f096d jmp 0x104f0c58 */
  goto L_104f0c58;
L_104f0972:;
  /* 104f0972 mov ecx, dword ptr [0x1050f828] */
  ECX = (r32((uint32_t)(0x1050f828)));
  /* 104f0978 mov dword ptr [0x1050f838], ecx */
  w32((uint32_t)(0x1050f838), (ECX));
  /* 104f097e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f0981 push edx */
  push32((uint32_t)(EDX));
  /* 104f0982 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f0985 push eax */
  push32((uint32_t)(EAX));
  /* 104f0986 push 2 */
  push32((uint32_t)(0x2u));
  /* 104f0988 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f098b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 104f098e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0991 push edx */
  push32((uint32_t)(EDX));
  /* 104f0992 call 0x104f0d60 */
  push32(0x104f0997u); f_104f0d60();
  /* 104f0997 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f099a jmp 0x104f0c58 */
  goto L_104f0c58;
L_104f099f:;
  /* 104f099f mov eax, dword ptr [0x1050f828] */
  EAX = (r32((uint32_t)(0x1050f828)));
  /* 104f09a4 mov dword ptr [0x1050f838], eax */
  w32((uint32_t)(0x1050f838), (EAX));
  /* 104f09a9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f09ac push ecx */
  push32((uint32_t)(ECX));
  /* 104f09ad mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f09b0 push edx */
  push32((uint32_t)(EDX));
  /* 104f09b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 104f09b3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f09b6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 104f09b9 push ecx */
  push32((uint32_t)(ECX));
  /* 104f09ba call 0x104f0d60 */
  push32(0x104f09bfu); f_104f0d60();
  /* 104f09bf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f09c2 jmp 0x104f0c58 */
  goto L_104f0c58;
L_104f09c7:;
  /* 104f09c7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f09ca cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f09ce jg 0x104f09ec */
  if ((!C.zf&&C.sf==C.of)) goto L_104f09ec;
  /* 104f09d0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f09d3 push eax */
  push32((uint32_t)(EAX));
  /* 104f09d4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f09d7 push ecx */
  push32((uint32_t)(ECX));
  /* 104f09d8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104f09db mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 104f09e1 push eax */
  push32((uint32_t)(EAX));
  /* 104f09e2 call 0x104f0d10 */
  push32(0x104f09e7u); f_104f0d10();
  /* 104f09e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f09ea jmp 0x104f0a06 */
  goto L_104f0a06;
L_104f09ec:;
  /* 104f09ec mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f09ef push ecx */
  push32((uint32_t)(ECX));
  /* 104f09f0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f09f3 push edx */
  push32((uint32_t)(EDX));
  /* 104f09f4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104f09f7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 104f09fd push ecx */
  push32((uint32_t)(ECX));
  /* 104f09fe call 0x104f0d10 */
  push32(0x104f0a03u); f_104f0d10();
  /* 104f0a03 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104f0a06:;
  /* 104f0a06 jmp 0x104f0c58 */
  goto L_104f0c58;
L_104f0a0b:;
  /* 104f0a0b mov edx, dword ptr [0x1050f828] */
  EDX = (r32((uint32_t)(0x1050f828)));
  /* 104f0a11 mov dword ptr [0x1050f838], edx */
  w32((uint32_t)(0x1050f838), (EDX));
  /* 104f0a17 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f0a1a push eax */
  push32((uint32_t)(EAX));
  /* 104f0a1b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f0a1e push ecx */
  push32((uint32_t)(ECX));
  /* 104f0a1f push 2 */
  push32((uint32_t)(0x2u));
  /* 104f0a21 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f0a24 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104f0a26 push eax */
  push32((uint32_t)(EAX));
  /* 104f0a27 call 0x104f0d60 */
  push32(0x104f0a2cu); f_104f0d60();
  /* 104f0a2c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0a2f jmp 0x104f0c58 */
  goto L_104f0c58;
L_104f0a34:;
  /* 104f0a34 mov ecx, dword ptr [0x1050f828] */
  ECX = (r32((uint32_t)(0x1050f828)));
  /* 104f0a3a mov dword ptr [0x1050f838], ecx */
  w32((uint32_t)(0x1050f838), (ECX));
  /* 104f0a40 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f0a43 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 104f0a46 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104f0a49 jmp 0x104f0a9d */
  goto L_104f0a9d;
L_104f0a4b:;
  /* 104f0a4b mov ecx, dword ptr [0x1050f828] */
  ECX = (r32((uint32_t)(0x1050f828)));
  /* 104f0a51 mov dword ptr [0x1050f838], ecx */
  w32((uint32_t)(0x1050f838), (ECX));
  /* 104f0a57 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f0a5a push edx */
  push32((uint32_t)(EDX));
  /* 104f0a5b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f0a5e push eax */
  push32((uint32_t)(EAX));
  /* 104f0a5f push 1 */
  push32((uint32_t)(0x1u));
  /* 104f0a61 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f0a64 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 104f0a67 push edx */
  push32((uint32_t)(EDX));
  /* 104f0a68 call 0x104f0d60 */
  push32(0x104f0a6du); f_104f0d60();
  /* 104f0a6d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0a70 jmp 0x104f0c58 */
  goto L_104f0c58;
L_104f0a75:;
  /* 104f0a75 mov eax, dword ptr [0x1050f828] */
  EAX = (r32((uint32_t)(0x1050f828)));
  /* 104f0a7a mov dword ptr [0x1050f838], eax */
  w32((uint32_t)(0x1050f838), (EAX));
  /* 104f0a7f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f0a82 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f0a86 jne 0x104f0a91 */
  if (!C.zf) goto L_104f0a91;
  /* 104f0a88 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 104f0a8f jmp 0x104f0a9d */
  goto L_104f0a9d;
L_104f0a91:;
  /* 104f0a91 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f0a94 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 104f0a97 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f0a9a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_104f0a9d:;
  /* 104f0a9d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f0aa0 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 104f0aa3 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f0aa6 jge 0x104f0ab1 */
  if ((C.sf==C.of)) goto L_104f0ab1;
  /* 104f0aa8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104f0aaf jmp 0x104f0ade */
  goto L_104f0ade;
L_104f0ab1:;
  /* 104f0ab1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f0ab4 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 104f0ab7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 104f0ab8 mov ecx, 7 */
  ECX = (0x7u);
  /* 104f0abd idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 104f0abf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104f0ac2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f0ac5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 104f0ac8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 104f0ac9 mov ecx, 7 */
  ECX = (0x7u);
  /* 104f0ace idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 104f0ad0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f0ad3 jl 0x104f0ade */
  if ((C.sf!=C.of)) goto L_104f0ade;
  /* 104f0ad5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f0ad8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0adb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_104f0ade:;
  /* 104f0ade mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f0ae1 push eax */
  push32((uint32_t)(EAX));
  /* 104f0ae2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f0ae5 push ecx */
  push32((uint32_t)(ECX));
  /* 104f0ae6 push 2 */
  push32((uint32_t)(0x2u));
  /* 104f0ae8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f0aeb push edx */
  push32((uint32_t)(EDX));
  /* 104f0aec call 0x104f0d60 */
  push32(0x104f0af1u); f_104f0d60();
  /* 104f0af1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0af4 jmp 0x104f0c58 */
  goto L_104f0c58;
L_104f0af9:;
  /* 104f0af9 cmp dword ptr [0x1050f828], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f828))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f0b00 je 0x104f0b30 */
  if (C.zf) goto L_104f0b30;
  /* 104f0b02 mov dword ptr [0x1050f828], 0 */
  w32((uint32_t)(0x1050f828), (0x0u));
  /* 104f0b0c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104f0b0f push eax */
  push32((uint32_t)(EAX));
  /* 104f0b10 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f0b13 push ecx */
  push32((uint32_t)(ECX));
  /* 104f0b14 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f0b17 push edx */
  push32((uint32_t)(EDX));
  /* 104f0b18 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f0b1b push eax */
  push32((uint32_t)(EAX));
  /* 104f0b1c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 104f0b1f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 104f0b25 push edx */
  push32((uint32_t)(EDX));
  /* 104f0b26 call 0x104f0ec0 */
  push32(0x104f0b2bu); f_104f0ec0();
  /* 104f0b2b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0b2e jmp 0x104f0b52 */
  goto L_104f0b52;
L_104f0b30:;
  /* 104f0b30 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104f0b33 push eax */
  push32((uint32_t)(EAX));
  /* 104f0b34 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f0b37 push ecx */
  push32((uint32_t)(ECX));
  /* 104f0b38 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f0b3b push edx */
  push32((uint32_t)(EDX));
  /* 104f0b3c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f0b3f push eax */
  push32((uint32_t)(EAX));
  /* 104f0b40 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 104f0b43 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 104f0b49 push edx */
  push32((uint32_t)(EDX));
  /* 104f0b4a call 0x104f0ec0 */
  push32(0x104f0b4fu); f_104f0ec0();
  /* 104f0b4f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104f0b52:;
  /* 104f0b52 jmp 0x104f0c58 */
  goto L_104f0c58;
L_104f0b57:;
  /* 104f0b57 mov dword ptr [0x1050f828], 0 */
  w32((uint32_t)(0x1050f828), (0x0u));
  /* 104f0b61 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104f0b64 push eax */
  push32((uint32_t)(EAX));
  /* 104f0b65 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f0b68 push ecx */
  push32((uint32_t)(ECX));
  /* 104f0b69 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f0b6c push edx */
  push32((uint32_t)(EDX));
  /* 104f0b6d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f0b70 push eax */
  push32((uint32_t)(EAX));
  /* 104f0b71 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 104f0b74 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 104f0b7a push edx */
  push32((uint32_t)(EDX));
  /* 104f0b7b call 0x104f0ec0 */
  push32(0x104f0b80u); f_104f0ec0();
  /* 104f0b80 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0b83 jmp 0x104f0c58 */
  goto L_104f0c58;
L_104f0b88:;
  /* 104f0b88 mov eax, dword ptr [0x1050f828] */
  EAX = (r32((uint32_t)(0x1050f828)));
  /* 104f0b8d mov dword ptr [0x1050f838], eax */
  w32((uint32_t)(0x1050f838), (EAX));
  /* 104f0b92 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f0b95 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 104f0b98 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 104f0b99 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 104f0b9e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 104f0ba0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104f0ba3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f0ba6 push edx */
  push32((uint32_t)(EDX));
  /* 104f0ba7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f0baa push eax */
  push32((uint32_t)(EAX));
  /* 104f0bab push 2 */
  push32((uint32_t)(0x2u));
  /* 104f0bad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f0bb0 push ecx */
  push32((uint32_t)(ECX));
  /* 104f0bb1 call 0x104f0d60 */
  push32(0x104f0bb6u); f_104f0d60();
  /* 104f0bb6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0bb9 jmp 0x104f0c58 */
  goto L_104f0c58;
L_104f0bbe:;
  /* 104f0bbe mov edx, dword ptr [0x1050f828] */
  EDX = (r32((uint32_t)(0x1050f828)));
  /* 104f0bc4 mov dword ptr [0x1050f838], edx */
  w32((uint32_t)(0x1050f838), (EDX));
  /* 104f0bca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f0bcd mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 104f0bd0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 104f0bd1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 104f0bd6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 104f0bd8 mov ecx, eax */
  ECX = (EAX);
  /* 104f0bda add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0bdd imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104f0be0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f0be3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 104f0be6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 104f0be7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 104f0bec idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 104f0bee add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0bf0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104f0bf3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f0bf6 push eax */
  push32((uint32_t)(EAX));
  /* 104f0bf7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f0bfa push ecx */
  push32((uint32_t)(ECX));
  /* 104f0bfb push 4 */
  push32((uint32_t)(0x4u));
  /* 104f0bfd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f0c00 push edx */
  push32((uint32_t)(EDX));
  /* 104f0c01 call 0x104f0d60 */
  push32(0x104f0c06u); f_104f0d60();
  /* 104f0c06 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0c09 jmp 0x104f0c58 */
  goto L_104f0c58;
L_104f0c0b:;
  /* 104f0c0b call 0x104f1d20 */
  push32(0x104f0c10u); f_104f1d20();
  /* 104f0c10 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f0c13 push eax */
  push32((uint32_t)(EAX));
  /* 104f0c14 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f0c17 push ecx */
  push32((uint32_t)(ECX));
  /* 104f0c18 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f0c1b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f0c1d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f0c21 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 104f0c24 mov ecx, dword ptr [eax*4 + 0x1050ee1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1050ee1c)));
  /* 104f0c2b push ecx */
  push32((uint32_t)(ECX));
  /* 104f0c2c call 0x104f0d10 */
  push32(0x104f0c31u); f_104f0d10();
  /* 104f0c31 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0c34 jmp 0x104f0c58 */
  goto L_104f0c58;
L_104f0c36:;
  /* 104f0c36 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f0c39 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104f0c3b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 104f0c3e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f0c41 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104f0c43 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0c46 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f0c49 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 104f0c4b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f0c4e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104f0c50 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f0c53 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f0c56 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_104f0c58:;
  /* 104f0c58 pop esi */
  ESI = (pop32());
  /* 104f0c59 mov esp, ebp */
  ESP = (EBP);
  /* 104f0c5b pop ebp */
  EBP = (pop32());
  /* 104f0c5c ret  */
  ESPCHK(0x104f06f0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x104f0d10 (72 bytes, 30 insns) */
void f_104f0d10(void) {
  FTRACE(0x104f0d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104f0d10 push ebp */
  push32((uint32_t)(EBP));
  /* 104f0d11 mov ebp, esp */
  EBP = (ESP);
L_104f0d13:;
  /* 104f0d13 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f0d16 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f0d19 je 0x104f0d56 */
  if (C.zf) goto L_104f0d56;
  /* 104f0d1b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f0d1e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104f0d21 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104f0d23 je 0x104f0d56 */
  if (C.zf) goto L_104f0d56;
  /* 104f0d25 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f0d28 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104f0d2a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f0d2d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104f0d2f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 104f0d31 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f0d34 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104f0d36 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0d39 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f0d3c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 104f0d3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f0d41 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0d44 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 104f0d47 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f0d4a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104f0d4c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f0d4f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f0d52 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 104f0d54 jmp 0x104f0d13 */
  goto L_104f0d13;
L_104f0d56:;
  /* 104f0d56 pop ebp */
  EBP = (pop32());
  /* 104f0d57 ret  */
  ESPCHK(0x104f0d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10010d60 @ 0x104f0d60 (173 bytes, 64 insns) */
void f_104f0d60(void) {
  FTRACE(0x104f0d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104f0d60 push ebp */
  push32((uint32_t)(EBP));
  /* 104f0d61 mov ebp, esp */
  EBP = (ESP);
  /* 104f0d63 push ecx */
  push32((uint32_t)(ECX));
  /* 104f0d64 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104f0d6b cmp dword ptr [0x1050f838], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f838))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f0d72 je 0x104f0d8a */
  if (C.zf) goto L_104f0d8a;
  /* 104f0d74 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f0d77 push eax */
  push32((uint32_t)(EAX));
  /* 104f0d78 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f0d7b push ecx */
  push32((uint32_t)(ECX));
  /* 104f0d7c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f0d7f push edx */
  push32((uint32_t)(EDX));
  /* 104f0d80 call 0x104f0e10 */
  push32(0x104f0d85u); f_104f0e10();
  /* 104f0d85 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0d88 jmp 0x104f0e09 */
  goto L_104f0e09;
L_104f0d8a:;
  /* 104f0d8a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f0d8d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f0d90 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f0d92 jae 0x104f0e00 */
  if (!C.cf) goto L_104f0e00;
  /* 104f0d94 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f0d97 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f0d9a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 104f0d9d jmp 0x104f0da8 */
  goto L_104f0da8;
L_104f0d9f:;
  /* 104f0d9f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f0da2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f0da5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_104f0da8:;
  /* 104f0da8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f0dab add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0dae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104f0db0 je 0x104f0de4 */
  if (C.zf) goto L_104f0de4;
  /* 104f0db2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f0db5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 104f0db6 mov ecx, 0xa */
  ECX = (0xau);
  /* 104f0dbb idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 104f0dbd add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0dc0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f0dc3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104f0dc5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f0dc8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 104f0dcb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f0dce cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 104f0dcf mov ecx, 0xa */
  ECX = (0xau);
  /* 104f0dd4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 104f0dd6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 104f0dd9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f0ddc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0ddf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104f0de2 jmp 0x104f0d9f */
  goto L_104f0d9f;
L_104f0de4:;
  /* 104f0de4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f0de7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104f0de9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0dec mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f0def mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 104f0df1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f0df4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104f0df6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f0df9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f0dfc mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 104f0dfe jmp 0x104f0e09 */
  goto L_104f0e09;
L_104f0e00:;
  /* 104f0e00 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f0e03 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_104f0e09:;
  /* 104f0e09 mov esp, ebp */
  ESP = (EBP);
  /* 104f0e0b pop ebp */
  EBP = (pop32());
  /* 104f0e0c ret  */
  ESPCHK(0x104f0d60u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x104f0e10 (172 bytes, 65 insns) */
void f_104f0e10(void) {
  FTRACE(0x104f0e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104f0e10 push ebp */
  push32((uint32_t)(EBP));
  /* 104f0e11 mov ebp, esp */
  EBP = (ESP);
  /* 104f0e13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f0e16 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f0e19 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104f0e1b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104f0e1e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f0e21 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f0e24 jbe 0x104f0e6b */
  if ((C.cf||C.zf)) goto L_104f0e6b;
L_104f0e26:;
  /* 104f0e26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f0e29 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 104f0e2a mov ecx, 0xa */
  ECX = (0xau);
  /* 104f0e2f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 104f0e31 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0e34 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f0e37 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 104f0e39 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f0e3c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0e3f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104f0e42 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f0e45 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104f0e47 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f0e4a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f0e4d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 104f0e4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f0e52 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 104f0e53 mov ecx, 0xa */
  ECX = (0xau);
  /* 104f0e58 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 104f0e5a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 104f0e5d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f0e61 jle 0x104f0e6b */
  if ((C.zf||C.sf!=C.of)) goto L_104f0e6b;
  /* 104f0e63 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f0e66 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f0e69 ja 0x104f0e26 */
  if ((!C.cf&&!C.zf)) goto L_104f0e26;
L_104f0e6b:;
  /* 104f0e6b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f0e6e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104f0e70 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104f0e73 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f0e76 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f0e79 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 104f0e7b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f0e7e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f0e81 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_104f0e84:;
  /* 104f0e84 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f0e87 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104f0e89 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 104f0e8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f0e8f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104f0e92 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104f0e94 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 104f0e96 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f0e99 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f0e9c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104f0e9f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104f0ea2 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 104f0ea5 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 104f0ea7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104f0eaa add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0ead mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104f0eb0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104f0eb3 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f0eb6 jb 0x104f0e84 */
  if (C.cf) goto L_104f0e84;
  /* 104f0eb8 mov esp, ebp */
  ESP = (EBP);
  /* 104f0eba pop ebp */
  EBP = (pop32());
  /* 104f0ebb ret  */
  ESPCHK(0x104f0e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ec0 @ 0x104f0ec0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_104f0ec0(void) {
  FTRACE(0x104f0ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104f0ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 104f0ec1 mov ebp, esp */
  EBP = (ESP);
  /* 104f0ec3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_104f0ec6:;
  /* 104f0ec6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f0ec9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104f0ecc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104f0ece je 0x104f133c */
  if (C.zf) goto L_104f133c;
  /* 104f0ed4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f0ed7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f0eda je 0x104f133c */
  if (C.zf) goto L_104f133c;
  /* 104f0ee0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 104f0ee4 mov dword ptr [0x1050f838], 0 */
  w32((uint32_t)(0x1050f838), (0x0u));
  /* 104f0eee mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 104f0ef5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f0ef8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104f0efb jmp 0x104f0f06 */
  goto L_104f0f06;
L_104f0efd:;
  /* 104f0efd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f0f00 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0f03 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_104f0f06:;
  /* 104f0f06 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f0f09 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 104f0f0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f0f0f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104f0f12 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f0f15 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f0f18 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104f0f1b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f0f1d jne 0x104f0f21 */
  if (!C.zf) goto L_104f0f21;
  /* 104f0f1f jmp 0x104f0efd */
  goto L_104f0efd;
L_104f0f21:;
  /* 104f0f21 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f0f24 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f0f27 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104f0f2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f0f2d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104f0f30 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 104f0f33 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104f0f36 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f0f39 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 104f0f3c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f0f40 ja 0x104f1290 */
  if ((!C.cf&&!C.zf)) goto L_104f1290;
  /* 104f0f46 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104f0f49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f0f4b mov al, byte ptr [ecx + 0x104f136c] */
  AL = (r8((uint32_t)(ECX + 0x104f136c)));
  /* 104f0f51 jmp dword ptr [eax*4 + 0x104f1340] */
  switch (EAX) {
    case 0: goto L_104f11af;
    case 1: goto L_104f1093;
    case 2: goto L_104f101e;
    case 3: goto L_104f0f58;
    case 4: goto L_104f0f96;
    case 5: goto L_104f0ff7;
    case 6: goto L_104f1045;
    case 7: goto L_104f106c;
    case 8: goto L_104f10da;
    case 9: goto L_104f0fd4;
    case 10: goto L_104f1290;
    default: x86_unimpl("switch@0x104f0f51 out of table"); return;
  }
L_104f0f58:;
  /* 104f0f58 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f0f5b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 104f0f5e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104f0f61 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f0f64 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 104f0f67 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f0f6b ja 0x104f0f91 */
  if ((!C.cf&&!C.zf)) goto L_104f0f91;
  /* 104f0f6d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104f0f70 jmp dword ptr [ecx*4 + 0x104f13bf] */
  switch (ECX) {
    case 0: goto L_104f0f77;
    case 1: goto L_104f0f81;
    case 2: goto L_104f0f87;
    case 3: goto L_104f0f8d;
    case 4: goto L_104f0fb5;
    case 5: goto L_104f0fbf;
    case 6: goto L_104f0fc5;
    case 7: goto L_104f0fcb;
    default: x86_unimpl("switch@0x104f0f70 out of table"); return;
  }
L_104f0f77:;
  /* 104f0f77 mov dword ptr [0x1050f838], 1 */
  w32((uint32_t)(0x1050f838), (0x1u));
L_104f0f81:;
  /* 104f0f81 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 104f0f85 jmp 0x104f0f91 */
  goto L_104f0f91;
L_104f0f87:;
  /* 104f0f87 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 104f0f8b jmp 0x104f0f91 */
  goto L_104f0f91;
L_104f0f8d:;
  /* 104f0f8d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_104f0f91:;
  /* 104f0f91 jmp 0x104f1290 */
  goto L_104f1290;
L_104f0f96:;
  /* 104f0f96 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f0f99 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 104f0f9c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104f0f9f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f0fa2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 104f0fa5 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f0fa9 ja 0x104f0fcf */
  if ((!C.cf&&!C.zf)) goto L_104f0fcf;
  /* 104f0fab mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104f0fae jmp dword ptr [ecx*4 + 0x104f13cf] */
  switch (ECX) {
    case 0: goto L_104f0fb5;
    case 1: goto L_104f0fbf;
    case 2: goto L_104f0fc5;
    case 3: goto L_104f0fcb;
    default: x86_unimpl("switch@0x104f0fae out of table"); return;
  }
L_104f0fb5:;
  /* 104f0fb5 mov dword ptr [0x1050f838], 1 */
  w32((uint32_t)(0x1050f838), (0x1u));
L_104f0fbf:;
  /* 104f0fbf mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 104f0fc3 jmp 0x104f0fcf */
  goto L_104f0fcf;
L_104f0fc5:;
  /* 104f0fc5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 104f0fc9 jmp 0x104f0fcf */
  goto L_104f0fcf;
L_104f0fcb:;
  /* 104f0fcb mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_104f0fcf:;
  /* 104f0fcf jmp 0x104f1290 */
  goto L_104f1290;
L_104f0fd4:;
  /* 104f0fd4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f0fd7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 104f0fda cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f0fde je 0x104f0fe8 */
  if (C.zf) goto L_104f0fe8;
  /* 104f0fe0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f0fe4 je 0x104f0fee */
  if (C.zf) goto L_104f0fee;
  /* 104f0fe6 jmp 0x104f0ff2 */
  goto L_104f0ff2;
L_104f0fe8:;
  /* 104f0fe8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 104f0fec jmp 0x104f0ff2 */
  goto L_104f0ff2;
L_104f0fee:;
  /* 104f0fee mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_104f0ff2:;
  /* 104f0ff2 jmp 0x104f1290 */
  goto L_104f1290;
L_104f0ff7:;
  /* 104f0ff7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f0ffa mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 104f0ffd cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f1001 je 0x104f100b */
  if (C.zf) goto L_104f100b;
  /* 104f1003 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f1007 je 0x104f1015 */
  if (C.zf) goto L_104f1015;
  /* 104f1009 jmp 0x104f1019 */
  goto L_104f1019;
L_104f100b:;
  /* 104f100b mov dword ptr [0x1050f838], 1 */
  w32((uint32_t)(0x1050f838), (0x1u));
L_104f1015:;
  /* 104f1015 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_104f1019:;
  /* 104f1019 jmp 0x104f1290 */
  goto L_104f1290;
L_104f101e:;
  /* 104f101e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f1021 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 104f1024 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f1028 je 0x104f1032 */
  if (C.zf) goto L_104f1032;
  /* 104f102a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f102e je 0x104f103c */
  if (C.zf) goto L_104f103c;
  /* 104f1030 jmp 0x104f1040 */
  goto L_104f1040;
L_104f1032:;
  /* 104f1032 mov dword ptr [0x1050f838], 1 */
  w32((uint32_t)(0x1050f838), (0x1u));
L_104f103c:;
  /* 104f103c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_104f1040:;
  /* 104f1040 jmp 0x104f1290 */
  goto L_104f1290;
L_104f1045:;
  /* 104f1045 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f1048 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 104f104b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f104f je 0x104f1059 */
  if (C.zf) goto L_104f1059;
  /* 104f1051 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f1055 je 0x104f1063 */
  if (C.zf) goto L_104f1063;
  /* 104f1057 jmp 0x104f1067 */
  goto L_104f1067;
L_104f1059:;
  /* 104f1059 mov dword ptr [0x1050f838], 1 */
  w32((uint32_t)(0x1050f838), (0x1u));
L_104f1063:;
  /* 104f1063 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_104f1067:;
  /* 104f1067 jmp 0x104f1290 */
  goto L_104f1290;
L_104f106c:;
  /* 104f106c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f106f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 104f1072 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f1076 je 0x104f1080 */
  if (C.zf) goto L_104f1080;
  /* 104f1078 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f107c je 0x104f108a */
  if (C.zf) goto L_104f108a;
  /* 104f107e jmp 0x104f108e */
  goto L_104f108e;
L_104f1080:;
  /* 104f1080 mov dword ptr [0x1050f838], 1 */
  w32((uint32_t)(0x1050f838), (0x1u));
L_104f108a:;
  /* 104f108a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_104f108e:;
  /* 104f108e jmp 0x104f1290 */
  goto L_104f1290;
L_104f1093:;
  /* 104f1093 push 0x1050b8dc */
  push32((uint32_t)(0x1050b8dcu));
  /* 104f1098 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f109b push ecx */
  push32((uint32_t)(ECX));
  /* 104f109c call 0x104f18f0 */
  push32(0x104f10a1u); f_104f18f0();
  /* 104f10a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f10a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104f10a6 jne 0x104f10b3 */
  if (!C.zf) goto L_104f10b3;
  /* 104f10a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f10ab add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f10ae mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104f10b1 jmp 0x104f10d1 */
  goto L_104f10d1;
L_104f10b3:;
  /* 104f10b3 push 0x1050b8d8 */
  push32((uint32_t)(0x1050b8d8u));
  /* 104f10b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f10bb push eax */
  push32((uint32_t)(EAX));
  /* 104f10bc call 0x104f18f0 */
  push32(0x104f10c1u); f_104f18f0();
  /* 104f10c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f10c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104f10c6 jne 0x104f10d1 */
  if (!C.zf) goto L_104f10d1;
  /* 104f10c8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f10cb add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f10ce mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_104f10d1:;
  /* 104f10d1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 104f10d5 jmp 0x104f1290 */
  goto L_104f1290;
L_104f10da:;
  /* 104f10da mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f10dd cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f10e1 jg 0x104f10f1 */
  if ((!C.zf&&C.sf==C.of)) goto L_104f10f1;
  /* 104f10e3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104f10e6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 104f10ec mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 104f10ef jmp 0x104f10fd */
  goto L_104f10fd;
L_104f10f1:;
  /* 104f10f1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104f10f4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 104f10fa mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_104f10fd:;
  /* 104f10fd cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f1101 jle 0x104f11a4 */
  if ((C.zf||C.sf!=C.of)) goto L_104f11a4;
  /* 104f1107 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f110a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f110d jbe 0x104f11a4 */
  if ((C.cf||C.zf)) goto L_104f11a4;
  /* 104f1113 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104f1116 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f1118 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104f111a mov ecx, dword ptr [0x1050dc98] */
  ECX = (r32((uint32_t)(0x1050dc98)));
  /* 104f1120 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104f1122 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 104f1126 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 104f112c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104f112e je 0x104f1167 */
  if (C.zf) goto L_104f1167;
  /* 104f1130 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f1133 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f1136 jbe 0x104f1167 */
  if ((C.cf||C.zf)) goto L_104f1167;
  /* 104f1138 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f113b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104f113d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104f1140 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 104f1142 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 104f1144 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f1147 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104f1149 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f114c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f114f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 104f1151 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104f1154 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f1157 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 104f115a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f115d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104f115f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f1162 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f1165 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_104f1167:;
  /* 104f1167 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f116a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104f116c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104f116f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104f1171 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 104f1173 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f1176 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104f1178 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f117b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f117e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 104f1180 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104f1183 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f1186 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 104f1189 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f118c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104f118e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f1191 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f1194 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 104f1196 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f1199 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f119c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 104f119f jmp 0x104f10fd */
  goto L_104f10fd;
L_104f11a4:;
  /* 104f11a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f11a7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 104f11aa jmp 0x104f0ec6 */
  goto L_104f0ec6;
L_104f11af:;
  /* 104f11af mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f11b2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 104f11b5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104f11b7 je 0x104f1282 */
  if (C.zf) goto L_104f1282;
  /* 104f11bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f11c0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f11c3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_104f11c6:;
  /* 104f11c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f11c9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104f11cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104f11ce je 0x104f1280 */
  if (C.zf) goto L_104f1280;
  /* 104f11d4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f11d7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f11da je 0x104f1280 */
  if (C.zf) goto L_104f1280;
  /* 104f11e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f11e3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104f11e6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f11e9 jne 0x104f11f9 */
  if (!C.zf) goto L_104f11f9;
  /* 104f11eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f11ee add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f11f1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 104f11f4 jmp 0x104f1280 */
  goto L_104f1280;
L_104f11f9:;
  /* 104f11f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f11fc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104f11fe mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 104f1200 mov edx, dword ptr [0x1050dc98] */
  EDX = (r32((uint32_t)(0x1050dc98)));
  /* 104f1206 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f1208 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 104f120c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 104f1211 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104f1213 je 0x104f124c */
  if (C.zf) goto L_104f124c;
  /* 104f1215 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f1218 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f121b jbe 0x104f124c */
  if ((C.cf||C.zf)) goto L_104f124c;
  /* 104f121d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f1220 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104f1222 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f1225 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104f1227 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 104f1229 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f122c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104f122e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f1231 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f1234 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 104f1236 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f1239 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f123c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 104f123f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f1242 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104f1244 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f1247 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f124a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_104f124c:;
  /* 104f124c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f124f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104f1251 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f1254 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 104f1256 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 104f1258 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f125b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104f125d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f1260 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f1263 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 104f1265 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f1268 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f126b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 104f126e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f1271 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104f1273 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f1276 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f1279 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 104f127b jmp 0x104f11c6 */
  goto L_104f11c6;
L_104f1280:;
  /* 104f1280 jmp 0x104f128b */
  goto L_104f128b;
L_104f1282:;
  /* 104f1282 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f1285 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f1288 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_104f128b:;
  /* 104f128b jmp 0x104f0ec6 */
  goto L_104f0ec6;
L_104f1290:;
  /* 104f1290 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 104f1294 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104f1296 je 0x104f12bc */
  if (C.zf) goto L_104f12bc;
  /* 104f1298 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104f129b push edx */
  push32((uint32_t)(EDX));
  /* 104f129c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f129f push eax */
  push32((uint32_t)(EAX));
  /* 104f12a0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f12a3 push ecx */
  push32((uint32_t)(ECX));
  /* 104f12a4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f12a7 push edx */
  push32((uint32_t)(EDX));
  /* 104f12a8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 104f12ab push eax */
  push32((uint32_t)(EAX));
  /* 104f12ac call 0x104f06f0 */
  push32(0x104f12b1u); f_104f06f0();
  /* 104f12b1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f12b4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f12b7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 104f12ba jmp 0x104f1337 */
  goto L_104f1337;
L_104f12bc:;
  /* 104f12bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f12bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f12c1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104f12c3 mov ecx, dword ptr [0x1050dc98] */
  ECX = (r32((uint32_t)(0x1050dc98)));
  /* 104f12c9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104f12cb mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 104f12cf and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 104f12d5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104f12d7 je 0x104f1308 */
  if (C.zf) goto L_104f1308;
  /* 104f12d9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f12dc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104f12de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f12e1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104f12e3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 104f12e5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f12e8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104f12ea add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f12ed mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f12f0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 104f12f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f12f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f12f8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 104f12fb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f12fe mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104f1300 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f1303 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f1306 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_104f1308:;
  /* 104f1308 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f130b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104f130d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f1310 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104f1312 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 104f1314 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f1317 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104f1319 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f131c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f131f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 104f1321 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f1324 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f1327 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 104f132a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f132d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104f132f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f1332 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f1335 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_104f1337:;
  /* 104f1337 jmp 0x104f0ec6 */
  goto L_104f0ec6;
L_104f133c:;
  /* 104f133c mov esp, ebp */
  ESP = (EBP);
  /* 104f133e pop ebp */
  EBP = (pop32());
  /* 104f133f ret  */
  ESPCHK(0x104f0ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_100113e0 @ 0x104f13e0 (650 bytes, 178 insns) */
void f_104f13e0(void) {
  FTRACE(0x104f13e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104f13e0 push ebp */
  push32((uint32_t)(EBP));
  /* 104f13e1 mov ebp, esp */
  EBP = (ESP);
  /* 104f13e3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f13e9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f13ed jne 0x104f1549 */
  if (!C.zf) goto L_104f1549;
  /* 104f13f3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f13f6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 104f13fc lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 104f1402 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104f1405 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104f140c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 104f1416 push 0 */
  push32((uint32_t)(0x0u));
  /* 104f1418 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 104f141e push edx */
  push32((uint32_t)(EDX));
  /* 104f141f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f1422 push eax */
  push32((uint32_t)(EAX));
  /* 104f1423 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f1426 push ecx */
  push32((uint32_t)(ECX));
  /* 104f1427 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f142a push edx */
  push32((uint32_t)(EDX));
  /* 104f142b call 0x104f2800 */
  push32(0x104f1430u); f_104f2800();
  /* 104f1430 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f1433 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104f1436 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f143a jne 0x104f14cf */
  if (!C.zf) goto L_104f14cf;
  /* 104f1440 call dword ptr [0x105122c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122c8))), 0x104f1446u);
  /* 104f1446 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f1449 je 0x104f1450 */
  if (C.zf) goto L_104f1450;
  /* 104f144b jmp 0x104f152d */
  goto L_104f152d;
L_104f1450:;
  /* 104f1450 push 0 */
  push32((uint32_t)(0x0u));
  /* 104f1452 push 0 */
  push32((uint32_t)(0x0u));
  /* 104f1454 push 0 */
  push32((uint32_t)(0x0u));
  /* 104f1456 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f1459 push eax */
  push32((uint32_t)(EAX));
  /* 104f145a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f145d push ecx */
  push32((uint32_t)(ECX));
  /* 104f145e call 0x104f2800 */
  push32(0x104f1463u); f_104f2800();
  /* 104f1463 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f1466 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 104f146c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f1473 jne 0x104f147a */
  if (!C.zf) goto L_104f147a;
  /* 104f1475 jmp 0x104f152d */
  goto L_104f152d;
L_104f147a:;
  /* 104f147a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 104f147c push 0x1050b8e4 */
  push32((uint32_t)(0x1050b8e4u));
  /* 104f1481 push 2 */
  push32((uint32_t)(0x2u));
  /* 104f1483 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 104f1489 push edx */
  push32((uint32_t)(EDX));
  /* 104f148a call 0x104e3220 */
  push32(0x104f148fu); f_104e3220();
  /* 104f148f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f1492 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104f1495 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f1499 jne 0x104f14a0 */
  if (!C.zf) goto L_104f14a0;
  /* 104f149b jmp 0x104f152d */
  goto L_104f152d;
L_104f14a0:;
  /* 104f14a0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 104f14a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 104f14a9 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 104f14af push eax */
  push32((uint32_t)(EAX));
  /* 104f14b0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f14b3 push ecx */
  push32((uint32_t)(ECX));
  /* 104f14b4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f14b7 push edx */
  push32((uint32_t)(EDX));
  /* 104f14b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f14bb push eax */
  push32((uint32_t)(EAX));
  /* 104f14bc call 0x104f2800 */
  push32(0x104f14c1u); f_104f2800();
  /* 104f14c1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f14c4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104f14c7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f14cb jne 0x104f14cf */
  if (!C.zf) goto L_104f14cf;
  /* 104f14cd jmp 0x104f152d */
  goto L_104f152d;
L_104f14cf:;
  /* 104f14cf push 0x63 */
  push32((uint32_t)(0x63u));
  /* 104f14d1 push 0x1050b8e4 */
  push32((uint32_t)(0x1050b8e4u));
  /* 104f14d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 104f14d8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104f14db push ecx */
  push32((uint32_t)(ECX));
  /* 104f14dc call 0x104e3220 */
  push32(0x104f14e1u); f_104e3220();
  /* 104f14e1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f14e4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 104f14ea mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 104f14ec mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 104f14f2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f14f5 jne 0x104f14f9 */
  if (!C.zf) goto L_104f14f9;
  /* 104f14f7 jmp 0x104f152d */
  goto L_104f152d;
L_104f14f9:;
  /* 104f14f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104f14fc push ecx */
  push32((uint32_t)(ECX));
  /* 104f14fd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f1500 push edx */
  push32((uint32_t)(EDX));
  /* 104f1501 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 104f1507 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104f1509 push ecx */
  push32((uint32_t)(ECX));
  /* 104f150a call 0x104e6a40 */
  push32(0x104f150fu); f_104e6a40();
  /* 104f150f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f1512 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f1516 je 0x104f1526 */
  if (C.zf) goto L_104f1526;
  /* 104f1518 push 2 */
  push32((uint32_t)(0x2u));
  /* 104f151a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f151d push edx */
  push32((uint32_t)(EDX));
  /* 104f151e call 0x104e3cb0 */
  push32(0x104f1523u); f_104e3cb0();
  /* 104f1523 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104f1526:;
  /* 104f1526 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f1528 jmp 0x104f1666 */
  goto L_104f1666;
L_104f152d:;
  /* 104f152d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f1531 je 0x104f1541 */
  if (C.zf) goto L_104f1541;
  /* 104f1533 push 2 */
  push32((uint32_t)(0x2u));
  /* 104f1535 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f1538 push eax */
  push32((uint32_t)(EAX));
  /* 104f1539 call 0x104e3cb0 */
  push32(0x104f153eu); f_104e3cb0();
  /* 104f153e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104f1541:;
  /* 104f1541 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104f1544 jmp 0x104f1666 */
  goto L_104f1666;
L_104f1549:;
  /* 104f1549 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f154d jne 0x104f1663 */
  if (!C.zf) goto L_104f1663;
  /* 104f1553 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 104f155d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f1560 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 104f1566 push 0 */
  push32((uint32_t)(0x0u));
  /* 104f1568 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 104f156e push edx */
  push32((uint32_t)(EDX));
  /* 104f156f push 0x1050f750 */
  push32((uint32_t)(0x1050f750u));
  /* 104f1574 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f1577 push eax */
  push32((uint32_t)(EAX));
  /* 104f1578 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f157b push ecx */
  push32((uint32_t)(ECX));
  /* 104f157c call 0x104f2660 */
  push32(0x104f1581u); f_104f2660();
  /* 104f1581 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f1584 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104f1586 jne 0x104f1590 */
  if (!C.zf) goto L_104f1590;
  /* 104f1588 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104f158b jmp 0x104f1666 */
  goto L_104f1666;
L_104f1590:;
  /* 104f1590 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 104f1596 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 104f1599 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 104f15a3 jmp 0x104f15b4 */
  goto L_104f15b4;
L_104f15a5:;
  /* 104f15a5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 104f15ab add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f15ae mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_104f15b4:;
  /* 104f15b4 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f15bb jge 0x104f165f */
  if ((C.sf==C.of)) goto L_104f165f;
  /* 104f15c1 cmp dword ptr [0x1050dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1050dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f15c8 jle 0x104f15fb */
  if ((C.zf||C.sf!=C.of)) goto L_104f15fb;
  /* 104f15ca push 4 */
  push32((uint32_t)(0x4u));
  /* 104f15cc mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 104f15d2 mov dl, byte ptr [ecx*2 + 0x1050f750] */
  DL = (r8((uint32_t)(ECX*2 + 0x1050f750)));
  /* 104f15d9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 104f15df mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 104f15e5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104f15ea push eax */
  push32((uint32_t)(EAX));
  /* 104f15eb call 0x104e9230 */
  push32(0x104f15f0u); f_104e9230();
  /* 104f15f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f15f3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 104f15f9 jmp 0x104f162e */
  goto L_104f162e;
L_104f15fb:;
  /* 104f15fb mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 104f1601 mov dl, byte ptr [ecx*2 + 0x1050f750] */
  DL = (r8((uint32_t)(ECX*2 + 0x1050f750)));
  /* 104f1608 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 104f160e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 104f1614 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104f1619 mov ecx, dword ptr [0x1050dc98] */
  ECX = (r32((uint32_t)(0x1050dc98)));
  /* 104f161f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104f1621 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 104f1625 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 104f1628 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_104f162e:;
  /* 104f162e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f1635 je 0x104f1658 */
  if (C.zf) goto L_104f1658;
  /* 104f1637 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 104f163d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104f1640 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104f1643 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 104f164a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 104f164e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 104f1654 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 104f1656 jmp 0x104f165a */
  goto L_104f165a;
L_104f1658:;
  /* 104f1658 jmp 0x104f165f */
  goto L_104f165f;
L_104f165a:;
  /* 104f165a jmp 0x104f15a5 */
  goto L_104f15a5;
L_104f165f:;
  /* 104f165f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f1661 jmp 0x104f1666 */
  goto L_104f1666;
L_104f1663:;
  /* 104f1663 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_104f1666:;
  /* 104f1666 mov esp, ebp */
  ESP = (EBP);
  /* 104f1668 pop ebp */
  EBP = (pop32());
  /* 104f1669 ret  */
  ESPCHK(0x104f13e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011670 @ 0x104f1670 (10 bytes, 5 insns) */
void f_104f1670(void) {
  FTRACE(0x104f1670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104f1670 push ebp */
  push32((uint32_t)(EBP));
  /* 104f1671 mov ebp, esp */
  EBP = (ESP);
  /* 104f1673 mov eax, dword ptr [0x1050ed88] */
  EAX = (r32((uint32_t)(0x1050ed88)));
  /* 104f1678 pop ebp */
  EBP = (pop32());
  /* 104f1679 ret  */
  ESPCHK(0x104f1670u, _esp0);
  ESP += 4; return;
}

/* FUN_10011680 @ 0x104f1680 (575 bytes, 196 insns) */
void f_104f1680(void) {
  FTRACE(0x104f1680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104f1680 push ebp */
  push32((uint32_t)(EBP));
  /* 104f1681 mov ebp, esp */
  EBP = (ESP);
  /* 104f1683 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 104f1685 push 0x1050b8f0 */
  push32((uint32_t)(0x1050b8f0u));
  /* 104f168a push 0x104ec328 */
  push32((uint32_t)(0x104ec328u));
  /* 104f168f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 104f1695 push eax */
  push32((uint32_t)(EAX));
  /* 104f1696 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 104f169d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f16a0 push ebx */
  push32((uint32_t)(EBX));
  /* 104f16a1 push esi */
  push32((uint32_t)(ESI));
  /* 104f16a2 push edi */
  push32((uint32_t)(EDI));
  /* 104f16a3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 104f16a6 cmp dword ptr [0x1050f75c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f75c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f16ad jne 0x104f16fe */
  if (!C.zf) goto L_104f16fe;
  /* 104f16af lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 104f16b2 push eax */
  push32((uint32_t)(EAX));
  /* 104f16b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 104f16b5 push 0x1050b024 */
  push32((uint32_t)(0x1050b024u));
  /* 104f16ba push 1 */
  push32((uint32_t)(0x1u));
  /* 104f16bc call dword ptr [0x10512344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512344))), 0x104f16c2u);
  /* 104f16c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104f16c4 je 0x104f16d2 */
  if (C.zf) goto L_104f16d2;
  /* 104f16c6 mov dword ptr [0x1050f75c], 1 */
  w32((uint32_t)(0x1050f75c), (0x1u));
  /* 104f16d0 jmp 0x104f16fe */
  goto L_104f16fe;
L_104f16d2:;
  /* 104f16d2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 104f16d5 push ecx */
  push32((uint32_t)(ECX));
  /* 104f16d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 104f16d8 push 0x1050b020 */
  push32((uint32_t)(0x1050b020u));
  /* 104f16dd push 1 */
  push32((uint32_t)(0x1u));
  /* 104f16df push 0 */
  push32((uint32_t)(0x0u));
  /* 104f16e1 call dword ptr [0x10512340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512340))), 0x104f16e7u);
  /* 104f16e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104f16e9 je 0x104f16f7 */
  if (C.zf) goto L_104f16f7;
  /* 104f16eb mov dword ptr [0x1050f75c], 2 */
  w32((uint32_t)(0x1050f75c), (0x2u));
  /* 104f16f5 jmp 0x104f16fe */
  goto L_104f16fe;
L_104f16f7:;
  /* 104f16f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f16f9 jmp 0x104f18d9 */
  goto L_104f18d9;
L_104f16fe:;
  /* 104f16fe cmp dword ptr [0x1050f75c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1050f75c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f1705 jne 0x104f1722 */
  if (!C.zf) goto L_104f1722;
  /* 104f1707 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f170a push edx */
  push32((uint32_t)(EDX));
  /* 104f170b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f170e push eax */
  push32((uint32_t)(EAX));
  /* 104f170f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f1712 push ecx */
  push32((uint32_t)(ECX));
  /* 104f1713 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f1716 push edx */
  push32((uint32_t)(EDX));
  /* 104f1717 call dword ptr [0x10512344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512344))), 0x104f171du);
  /* 104f171d jmp 0x104f18d9 */
  goto L_104f18d9;
L_104f1722:;
  /* 104f1722 cmp dword ptr [0x1050f75c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1050f75c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f1729 jne 0x104f18d7 */
  if (!C.zf) goto L_104f18d7;
  /* 104f172f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f1733 jne 0x104f173d */
  if (!C.zf) goto L_104f173d;
  /* 104f1735 mov eax, dword ptr [0x1050f6d0] */
  EAX = (r32((uint32_t)(0x1050f6d0)));
  /* 104f173a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_104f173d:;
  /* 104f173d push 0 */
  push32((uint32_t)(0x0u));
  /* 104f173f push 0 */
  push32((uint32_t)(0x0u));
  /* 104f1741 push 0 */
  push32((uint32_t)(0x0u));
  /* 104f1743 push 0 */
  push32((uint32_t)(0x0u));
  /* 104f1745 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f1748 push ecx */
  push32((uint32_t)(ECX));
  /* 104f1749 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f174c push edx */
  push32((uint32_t)(EDX));
  /* 104f174d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 104f1752 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104f1755 push eax */
  push32((uint32_t)(EAX));
  /* 104f1756 call dword ptr [0x105122f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122f4))), 0x104f175cu);
  /* 104f175c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 104f175f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f1763 jne 0x104f176c */
  if (!C.zf) goto L_104f176c;
  /* 104f1765 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f1767 jmp 0x104f18d9 */
  goto L_104f18d9;
L_104f176c:;
  /* 104f176c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104f1773 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 104f1776 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f1779 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 104f177b call 0x104e63c0 */
  push32(0x104f1780u); f_104e63c0();
  /* 104f1780 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 104f1783 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 104f1786 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 104f1789 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 104f178c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 104f178f push edx */
  push32((uint32_t)(EDX));
  /* 104f1790 push 0 */
  push32((uint32_t)(0x0u));
  /* 104f1792 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104f1795 push eax */
  push32((uint32_t)(EAX));
  /* 104f1796 call 0x104e6f90 */
  push32(0x104f179bu); f_104e6f90();
  /* 104f179b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f179e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 104f17a5 jmp 0x104f17be */
  goto L_104f17be;
  /* 104f17a7 mov eax, 1 */
  EAX = (0x1u);
  /* 104f17ac ret  */
  ESPCHK(0x104f1680u, _esp0);
  ESP += 4; return;
  /* 104f17ad mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 104f17b0 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 104f17b7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_104f17be:;
  /* 104f17be cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f17c2 jne 0x104f17cb */
  if (!C.zf) goto L_104f17cb;
  /* 104f17c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f17c6 jmp 0x104f18d9 */
  goto L_104f18d9;
L_104f17cb:;
  /* 104f17cb push 0 */
  push32((uint32_t)(0x0u));
  /* 104f17cd push 0 */
  push32((uint32_t)(0x0u));
  /* 104f17cf mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 104f17d2 push ecx */
  push32((uint32_t)(ECX));
  /* 104f17d3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104f17d6 push edx */
  push32((uint32_t)(EDX));
  /* 104f17d7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f17da push eax */
  push32((uint32_t)(EAX));
  /* 104f17db mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f17de push ecx */
  push32((uint32_t)(ECX));
  /* 104f17df push 0x220 */
  push32((uint32_t)(0x220u));
  /* 104f17e4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104f17e7 push edx */
  push32((uint32_t)(EDX));
  /* 104f17e8 call dword ptr [0x105122f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122f4))), 0x104f17eeu);
  /* 104f17ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104f17f0 jne 0x104f17f9 */
  if (!C.zf) goto L_104f17f9;
  /* 104f17f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f17f4 jmp 0x104f18d9 */
  goto L_104f18d9;
L_104f17f9:;
  /* 104f17f9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 104f1800 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 104f1803 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 104f1807 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f180a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 104f180c call 0x104e63c0 */
  push32(0x104f1811u); f_104e63c0();
  /* 104f1811 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 104f1814 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 104f1817 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 104f181a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 104f181d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 104f1824 jmp 0x104f183d */
  goto L_104f183d;
  /* 104f1826 mov eax, 1 */
  EAX = (0x1u);
  /* 104f182b ret  */
  ESPCHK(0x104f1680u, _esp0);
  ESP += 4; return;
  /* 104f182c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 104f182f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 104f1836 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_104f183d:;
  /* 104f183d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f1841 jne 0x104f184a */
  if (!C.zf) goto L_104f184a;
  /* 104f1843 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f1845 jmp 0x104f18d9 */
  goto L_104f18d9;
L_104f184a:;
  /* 104f184a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f184e jne 0x104f1859 */
  if (!C.zf) goto L_104f1859;
  /* 104f1850 mov edx, dword ptr [0x1050f6c0] */
  EDX = (r32((uint32_t)(0x1050f6c0)));
  /* 104f1856 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_104f1859:;
  /* 104f1859 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f185c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104f185f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 104f1865 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f1868 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104f186b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 104f1872 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104f1875 push ecx */
  push32((uint32_t)(ECX));
  /* 104f1876 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 104f1879 push edx */
  push32((uint32_t)(EDX));
  /* 104f187a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104f187d push eax */
  push32((uint32_t)(EAX));
  /* 104f187e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f1881 push ecx */
  push32((uint32_t)(ECX));
  /* 104f1882 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 104f1885 push edx */
  push32((uint32_t)(EDX));
  /* 104f1886 call dword ptr [0x10512340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512340))), 0x104f188cu);
  /* 104f188c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 104f188f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f1892 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104f1895 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104f1897 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 104f189c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f18a2 je 0x104f18b8 */
  if (C.zf) goto L_104f18b8;
  /* 104f18a4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f18a7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104f18aa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104f18ac mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 104f18b0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f18b6 je 0x104f18bc */
  if (C.zf) goto L_104f18bc;
L_104f18b8:;
  /* 104f18b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f18ba jmp 0x104f18d9 */
  goto L_104f18d9;
L_104f18bc:;
  /* 104f18bc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f18bf shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 104f18c1 push eax */
  push32((uint32_t)(EAX));
  /* 104f18c2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104f18c5 push ecx */
  push32((uint32_t)(ECX));
  /* 104f18c6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f18c9 push edx */
  push32((uint32_t)(EDX));
  /* 104f18ca call 0x104eb110 */
  push32(0x104f18cfu); f_104eb110();
  /* 104f18cf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f18d2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 104f18d5 jmp 0x104f18d9 */
  goto L_104f18d9;
L_104f18d7:;
  /* 104f18d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104f18d9:;
  /* 104f18d9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 104f18dc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104f18df mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 104f18e6 pop edi */
  EDI = (pop32());
  /* 104f18e7 pop esi */
  ESI = (pop32());
  /* 104f18e8 pop ebx */
  EBX = (pop32());
  /* 104f18e9 mov esp, ebp */
  ESP = (EBP);
  /* 104f18eb pop ebp */
  EBP = (pop32());
  /* 104f18ec ret  */
  ESPCHK(0x104f1680u, _esp0);
  ESP += 4; return;
}

/* FUN_100118f0 @ 0x104f18f0 (208 bytes, 85 insns) */
void f_104f18f0(void) {
  FTRACE(0x104f18f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104f18f0 push ebp */
  push32((uint32_t)(EBP));
  /* 104f18f1 mov ebp, esp */
  EBP = (ESP);
  /* 104f18f3 push edi */
  push32((uint32_t)(EDI));
  /* 104f18f4 push esi */
  push32((uint32_t)(ESI));
  /* 104f18f5 push ebx */
  push32((uint32_t)(EBX));
  /* 104f18f6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 104f18f9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 104f18fc lea eax, [0x1050f6b8] */
  EAX = ((uint32_t)(0x1050f6b8));
  /* 104f1902 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f1906 jne 0x104f1943 */
  if (!C.zf) goto L_104f1943;
  /* 104f1908 mov al, 0xff */
  AL = (0xffu);
  /* 104f190a mov edi, edi */
  EDI = (EDI);
L_104f190c:;
  /* 104f190c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 104f190e je 0x104f193e */
  if (C.zf) goto L_104f193e;
  /* 104f1910 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 104f1912 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 104f1913 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 104f1915 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 104f1916 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104f1918 je 0x104f190c */
  if (C.zf) goto L_104f190c;
  /* 104f191a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 104f191c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104f191e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 104f1920 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 104f1923 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 104f1925 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 104f1927 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 104f1929 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 104f192b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104f192d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 104f192f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 104f1932 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 104f1934 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 104f1936 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104f1938 je 0x104f190c */
  if (C.zf) goto L_104f190c;
  /* 104f193a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 104f193c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_104f193e:;
  /* 104f193e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 104f1941 jmp 0x104f19bb */
  goto L_104f19bb;
L_104f1943:;
  /* 104f1943 lock inc dword ptr [0x1050f84c] */
  x86_unimpl("lock inc @ 0x104f1943");
  /* 104f194a cmp dword ptr [0x1050f83c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f83c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f1951 jg 0x104f1957 */
  if ((!C.zf&&C.sf==C.of)) goto L_104f1957;
  /* 104f1953 push 0 */
  push32((uint32_t)(0x0u));
  /* 104f1955 jmp 0x104f196c */
  goto L_104f196c;
L_104f1957:;
  /* 104f1957 lock dec dword ptr [0x1050f84c] */
  x86_unimpl("lock dec @ 0x104f1957");
  /* 104f195e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 104f1960 call 0x104e6c20 */
  push32(0x104f1965u); f_104e6c20();
  /* 104f1965 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_104f196c:;
  /* 104f196c mov eax, 0xff */
  EAX = (0xffu);
  /* 104f1971 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 104f1973 nop  */
  /* nop */
L_104f1974:;
  /* 104f1974 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 104f1976 je 0x104f199f */
  if (C.zf) goto L_104f199f;
  /* 104f1978 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 104f197a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 104f197b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 104f197d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 104f197e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104f1980 je 0x104f1974 */
  if (C.zf) goto L_104f1974;
  /* 104f1982 push eax */
  push32((uint32_t)(EAX));
  /* 104f1983 push ebx */
  push32((uint32_t)(EBX));
  /* 104f1984 call 0x104f2a60 */
  push32(0x104f1989u); f_104f2a60();
  /* 104f1989 mov ebx, eax */
  EBX = (EAX);
  /* 104f198b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f198e call 0x104f2a60 */
  push32(0x104f1993u); f_104f2a60();
  /* 104f1993 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f1996 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104f1998 je 0x104f1974 */
  if (C.zf) goto L_104f1974;
  /* 104f199a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f199c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_104f199f:;
  /* 104f199f mov ebx, eax */
  EBX = (EAX);
  /* 104f19a1 pop eax */
  EAX = (pop32());
  /* 104f19a2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f19a4 jne 0x104f19af */
  if (!C.zf) goto L_104f19af;
  /* 104f19a6 lock dec dword ptr [0x1050f84c] */
  x86_unimpl("lock dec @ 0x104f19a6");
  /* 104f19ad jmp 0x104f19b9 */
  goto L_104f19b9;
L_104f19af:;
  /* 104f19af push 0x13 */
  push32((uint32_t)(0x13u));
  /* 104f19b1 call 0x104e6cc0 */
  push32(0x104f19b6u); f_104e6cc0();
  /* 104f19b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104f19b9:;
  /* 104f19b9 mov eax, ebx */
  EAX = (EBX);
L_104f19bb:;
  /* 104f19bb pop ebx */
  EBX = (pop32());
  /* 104f19bc pop esi */
  ESI = (pop32());
  /* 104f19bd pop edi */
  EDI = (pop32());
  /* 104f19be leave  */
  ESP = EBP;
  EBP = pop32();
  /* 104f19bf ret  */
  ESPCHK(0x104f18f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100119c0 @ 0x104f19c0 (257 bytes, 103 insns) */
void f_104f19c0(void) {
  FTRACE(0x104f19c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104f19c0 push ebp */
  push32((uint32_t)(EBP));
  /* 104f19c1 mov ebp, esp */
  EBP = (ESP);
  /* 104f19c3 push edi */
  push32((uint32_t)(EDI));
  /* 104f19c4 push esi */
  push32((uint32_t)(ESI));
  /* 104f19c5 push ebx */
  push32((uint32_t)(EBX));
  /* 104f19c6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f19c9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104f19cb je 0x104f1aba */
  if (C.zf) goto L_104f1aba;
  /* 104f19d1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 104f19d4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 104f19d7 lea eax, [0x1050f6b8] */
  EAX = ((uint32_t)(0x1050f6b8));
  /* 104f19dd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f19e1 jne 0x104f1a31 */
  if (!C.zf) goto L_104f1a31;
  /* 104f19e3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 104f19e5 mov bl, 0x5a */
  BL = (0x5au);
  /* 104f19e7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 104f19e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_104f19ec:;
  /* 104f19ec mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 104f19ee or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 104f19f0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 104f19f2 je 0x104f1a15 */
  if (C.zf) goto L_104f1a15;
  /* 104f19f4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 104f19f6 je 0x104f1a15 */
  if (C.zf) goto L_104f1a15;
  /* 104f19f8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 104f19f9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 104f19fa cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104f19fc jb 0x104f1a04 */
  if (C.cf) goto L_104f1a04;
  /* 104f19fe cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104f1a00 ja 0x104f1a04 */
  if ((!C.cf&&!C.zf)) goto L_104f1a04;
  /* 104f1a02 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_104f1a04:;
  /* 104f1a04 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104f1a06 jb 0x104f1a0e */
  if (C.cf) goto L_104f1a0e;
  /* 104f1a08 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104f1a0a ja 0x104f1a0e */
  if ((!C.cf&&!C.zf)) goto L_104f1a0e;
  /* 104f1a0c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_104f1a0e:;
  /* 104f1a0e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104f1a10 jne 0x104f1a1f */
  if (!C.zf) goto L_104f1a1f;
  /* 104f1a12 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 104f1a13 jne 0x104f19ec */
  if (!C.zf) goto L_104f19ec;
L_104f1a15:;
  /* 104f1a15 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104f1a17 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104f1a19 je 0x104f1aba */
  if (C.zf) goto L_104f1aba;
L_104f1a1f:;
  /* 104f1a1f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 104f1a24 jb 0x104f1aba */
  if (C.cf) goto L_104f1aba;
  /* 104f1a2a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 104f1a2c jmp 0x104f1aba */
  goto L_104f1aba;
L_104f1a31:;
  /* 104f1a31 lock inc dword ptr [0x1050f84c] */
  x86_unimpl("lock inc @ 0x104f1a31");
  /* 104f1a38 cmp dword ptr [0x1050f83c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f83c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f1a3f jg 0x104f1a45 */
  if ((!C.zf&&C.sf==C.of)) goto L_104f1a45;
  /* 104f1a41 push 0 */
  push32((uint32_t)(0x0u));
  /* 104f1a43 jmp 0x104f1a5e */
  goto L_104f1a5e;
L_104f1a45:;
  /* 104f1a45 lock dec dword ptr [0x1050f84c] */
  x86_unimpl("lock dec @ 0x104f1a45");
  /* 104f1a4c mov ebx, ecx */
  EBX = (ECX);
  /* 104f1a4e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 104f1a50 call 0x104e6c20 */
  push32(0x104f1a55u); f_104e6c20();
  /* 104f1a55 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 104f1a5c mov ecx, ebx */
  ECX = (EBX);
L_104f1a5e:;
  /* 104f1a5e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f1a60 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 104f1a62 mov edi, edi */
  EDI = (EDI);
L_104f1a64:;
  /* 104f1a64 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 104f1a66 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f1a68 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 104f1a6a je 0x104f1a8f */
  if (C.zf) goto L_104f1a8f;
  /* 104f1a6c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 104f1a6e je 0x104f1a8f */
  if (C.zf) goto L_104f1a8f;
  /* 104f1a70 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 104f1a71 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 104f1a72 push ecx */
  push32((uint32_t)(ECX));
  /* 104f1a73 push eax */
  push32((uint32_t)(EAX));
  /* 104f1a74 push ebx */
  push32((uint32_t)(EBX));
  /* 104f1a75 call 0x104f2a60 */
  push32(0x104f1a7au); f_104f2a60();
  /* 104f1a7a mov ebx, eax */
  EBX = (EAX);
  /* 104f1a7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f1a7f call 0x104f2a60 */
  push32(0x104f1a84u); f_104f2a60();
  /* 104f1a84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f1a87 pop ecx */
  ECX = (pop32());
  /* 104f1a88 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f1a8a jne 0x104f1a95 */
  if (!C.zf) goto L_104f1a95;
  /* 104f1a8c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 104f1a8d jne 0x104f1a64 */
  if (!C.zf) goto L_104f1a64;
L_104f1a8f:;
  /* 104f1a8f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104f1a91 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f1a93 je 0x104f1a9e */
  if (C.zf) goto L_104f1a9e;
L_104f1a95:;
  /* 104f1a95 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 104f1a9a jb 0x104f1a9e */
  if (C.cf) goto L_104f1a9e;
  /* 104f1a9c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_104f1a9e:;
  /* 104f1a9e pop eax */
  EAX = (pop32());
  /* 104f1a9f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f1aa1 jne 0x104f1aac */
  if (!C.zf) goto L_104f1aac;
  /* 104f1aa3 lock dec dword ptr [0x1050f84c] */
  x86_unimpl("lock dec @ 0x104f1aa3");
  /* 104f1aaa jmp 0x104f1aba */
  goto L_104f1aba;
L_104f1aac:;
  /* 104f1aac mov ebx, ecx */
  EBX = (ECX);
  /* 104f1aae push 0x13 */
  push32((uint32_t)(0x13u));
  /* 104f1ab0 call 0x104e6cc0 */
  push32(0x104f1ab5u); f_104e6cc0();
  /* 104f1ab5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f1ab8 mov ecx, ebx */
  ECX = (EBX);
L_104f1aba:;
  /* 104f1aba mov eax, ecx */
  EAX = (ECX);
  /* 104f1abc pop ebx */
  EBX = (pop32());
  /* 104f1abd pop esi */
  ESI = (pop32());
  /* 104f1abe pop edi */
  EDI = (pop32());
  /* 104f1abf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 104f1ac0 ret  */
  ESPCHK(0x104f19c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ad0 @ 0x104f1ad0 (255 bytes, 88 insns) */
void f_104f1ad0(void) {
  FTRACE(0x104f1ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104f1ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 104f1ad1 mov ebp, esp */
  EBP = (ESP);
  /* 104f1ad3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_104f1ad6:;
  /* 104f1ad6 cmp dword ptr [0x1050dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1050dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f1add jle 0x104f1af6 */
  if ((C.zf||C.sf!=C.of)) goto L_104f1af6;
  /* 104f1adf push 8 */
  push32((uint32_t)(0x8u));
  /* 104f1ae1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f1ae4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104f1ae6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 104f1ae8 push ecx */
  push32((uint32_t)(ECX));
  /* 104f1ae9 call 0x104e9230 */
  push32(0x104f1aeeu); f_104e9230();
  /* 104f1aee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f1af1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 104f1af4 jmp 0x104f1b0f */
  goto L_104f1b0f;
L_104f1af6:;
  /* 104f1af6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f1af9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f1afb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104f1afd mov ecx, dword ptr [0x1050dc98] */
  ECX = (r32((uint32_t)(0x1050dc98)));
  /* 104f1b03 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104f1b05 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 104f1b09 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 104f1b0c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_104f1b0f:;
  /* 104f1b0f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f1b13 je 0x104f1b20 */
  if (C.zf) goto L_104f1b20;
  /* 104f1b15 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f1b18 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f1b1b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 104f1b1e jmp 0x104f1ad6 */
  goto L_104f1ad6;
L_104f1b20:;
  /* 104f1b20 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f1b23 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104f1b25 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104f1b27 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104f1b2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f1b2d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f1b30 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 104f1b33 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f1b36 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104f1b39 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f1b3d je 0x104f1b45 */
  if (C.zf) goto L_104f1b45;
  /* 104f1b3f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f1b43 jne 0x104f1b58 */
  if (!C.zf) goto L_104f1b58;
L_104f1b45:;
  /* 104f1b45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f1b48 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f1b4a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104f1b4c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104f1b4f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f1b52 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f1b55 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_104f1b58:;
  /* 104f1b58 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_104f1b5f:;
  /* 104f1b5f cmp dword ptr [0x1050dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1050dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f1b66 jle 0x104f1b7b */
  if ((C.zf||C.sf!=C.of)) goto L_104f1b7b;
  /* 104f1b68 push 4 */
  push32((uint32_t)(0x4u));
  /* 104f1b6a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f1b6d push edx */
  push32((uint32_t)(EDX));
  /* 104f1b6e call 0x104e9230 */
  push32(0x104f1b73u); f_104e9230();
  /* 104f1b73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f1b76 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 104f1b79 jmp 0x104f1b90 */
  goto L_104f1b90;
L_104f1b7b:;
  /* 104f1b7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f1b7e mov ecx, dword ptr [0x1050dc98] */
  ECX = (r32((uint32_t)(0x1050dc98)));
  /* 104f1b84 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104f1b86 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 104f1b8a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 104f1b8d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_104f1b90:;
  /* 104f1b90 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f1b94 je 0x104f1bbb */
  if (C.zf) goto L_104f1bbb;
  /* 104f1b96 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104f1b99 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104f1b9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f1b9f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 104f1ba3 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 104f1ba6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f1ba9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104f1bab mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 104f1bad mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104f1bb0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f1bb3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f1bb6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 104f1bb9 jmp 0x104f1b5f */
  goto L_104f1b5f;
L_104f1bbb:;
  /* 104f1bbb cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f1bbf jne 0x104f1bc8 */
  if (!C.zf) goto L_104f1bc8;
  /* 104f1bc1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104f1bc4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 104f1bc6 jmp 0x104f1bcb */
  goto L_104f1bcb;
L_104f1bc8:;
  /* 104f1bc8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_104f1bcb:;
  /* 104f1bcb mov esp, ebp */
  ESP = (EBP);
  /* 104f1bcd pop ebp */
  EBP = (pop32());
  /* 104f1bce ret  */
  ESPCHK(0x104f1ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011bd0 @ 0x104f1bd0 (17 bytes, 8 insns) */
void f_104f1bd0(void) {
  FTRACE(0x104f1bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104f1bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 104f1bd1 mov ebp, esp */
  EBP = (ESP);
  /* 104f1bd3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f1bd6 push eax */
  push32((uint32_t)(EAX));
  /* 104f1bd7 call 0x104f1ad0 */
  push32(0x104f1bdcu); f_104f1ad0();
  /* 104f1bdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f1bdf pop ebp */
  EBP = (pop32());
  /* 104f1be0 ret  */
  ESPCHK(0x104f1bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011bf0 @ 0x104f1bf0 (297 bytes, 106 insns) */
void f_104f1bf0(void) {
  FTRACE(0x104f1bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104f1bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 104f1bf1 mov ebp, esp */
  EBP = (ESP);
  /* 104f1bf3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f1bf6 push esi */
  push32((uint32_t)(ESI));
L_104f1bf7:;
  /* 104f1bf7 cmp dword ptr [0x1050dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1050dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f1bfe jle 0x104f1c17 */
  if ((C.zf||C.sf!=C.of)) goto L_104f1c17;
  /* 104f1c00 push 8 */
  push32((uint32_t)(0x8u));
  /* 104f1c02 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f1c05 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104f1c07 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 104f1c09 push ecx */
  push32((uint32_t)(ECX));
  /* 104f1c0a call 0x104e9230 */
  push32(0x104f1c0fu); f_104e9230();
  /* 104f1c0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f1c12 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 104f1c15 jmp 0x104f1c30 */
  goto L_104f1c30;
L_104f1c17:;
  /* 104f1c17 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f1c1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f1c1c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104f1c1e mov ecx, dword ptr [0x1050dc98] */
  ECX = (r32((uint32_t)(0x1050dc98)));
  /* 104f1c24 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104f1c26 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 104f1c2a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 104f1c2d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_104f1c30:;
  /* 104f1c30 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f1c34 je 0x104f1c41 */
  if (C.zf) goto L_104f1c41;
  /* 104f1c36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f1c39 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f1c3c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 104f1c3f jmp 0x104f1bf7 */
  goto L_104f1bf7;
L_104f1c41:;
  /* 104f1c41 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f1c44 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104f1c46 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104f1c48 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104f1c4b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f1c4e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f1c51 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 104f1c54 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f1c57 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 104f1c5a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f1c5e je 0x104f1c66 */
  if (C.zf) goto L_104f1c66;
  /* 104f1c60 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f1c64 jne 0x104f1c79 */
  if (!C.zf) goto L_104f1c79;
L_104f1c66:;
  /* 104f1c66 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f1c69 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f1c6b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104f1c6d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104f1c70 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f1c73 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f1c76 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_104f1c79:;
  /* 104f1c79 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 104f1c80 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_104f1c87:;
  /* 104f1c87 cmp dword ptr [0x1050dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1050dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f1c8e jle 0x104f1ca3 */
  if ((C.zf||C.sf!=C.of)) goto L_104f1ca3;
  /* 104f1c90 push 4 */
  push32((uint32_t)(0x4u));
  /* 104f1c92 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f1c95 push edx */
  push32((uint32_t)(EDX));
  /* 104f1c96 call 0x104e9230 */
  push32(0x104f1c9bu); f_104e9230();
  /* 104f1c9b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f1c9e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 104f1ca1 jmp 0x104f1cb8 */
  goto L_104f1cb8;
L_104f1ca3:;
  /* 104f1ca3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f1ca6 mov ecx, dword ptr [0x1050dc98] */
  ECX = (r32((uint32_t)(0x1050dc98)));
  /* 104f1cac xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104f1cae mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 104f1cb2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 104f1cb5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_104f1cb8:;
  /* 104f1cb8 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f1cbc je 0x104f1cf9 */
  if (C.zf) goto L_104f1cf9;
  /* 104f1cbe push 0 */
  push32((uint32_t)(0x0u));
  /* 104f1cc0 push 0xa */
  push32((uint32_t)(0xau));
  /* 104f1cc2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104f1cc5 push eax */
  push32((uint32_t)(EAX));
  /* 104f1cc6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f1cc9 push ecx */
  push32((uint32_t)(ECX));
  /* 104f1cca call 0x104f2b90 */
  push32(0x104f1ccfu); f_104f2b90();
  /* 104f1ccf mov ecx, eax */
  ECX = (EAX);
  /* 104f1cd1 mov esi, edx */
  ESI = (EDX);
  /* 104f1cd3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f1cd6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f1cd9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 104f1cda add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f1cdc adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 104f1cde mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104f1ce1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 104f1ce4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f1ce7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f1ce9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104f1ceb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104f1cee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f1cf1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f1cf4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 104f1cf7 jmp 0x104f1c87 */
  goto L_104f1c87;
L_104f1cf9:;
  /* 104f1cf9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f1cfd jne 0x104f1d0e */
  if (!C.zf) goto L_104f1d0e;
  /* 104f1cff mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f1d02 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 104f1d04 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104f1d07 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f1d0a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 104f1d0c jmp 0x104f1d14 */
  goto L_104f1d14;
L_104f1d0e:;
  /* 104f1d0e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f1d11 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_104f1d14:;
  /* 104f1d14 pop esi */
  ESI = (pop32());
  /* 104f1d15 mov esp, ebp */
  ESP = (EBP);
  /* 104f1d17 pop ebp */
  EBP = (pop32());
  /* 104f1d18 ret  */
  ESPCHK(0x104f1bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011d20 @ 0x104f1d20 (61 bytes, 18 insns) */
void f_104f1d20(void) {
  FTRACE(0x104f1d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104f1d20 push ebp */
  push32((uint32_t)(EBP));
  /* 104f1d21 mov ebp, esp */
  EBP = (ESP);
  /* 104f1d23 cmp dword ptr [0x1050f818], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f818))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f1d2a jne 0x104f1d5b */
  if (!C.zf) goto L_104f1d5b;
  /* 104f1d2c push 0xb */
  push32((uint32_t)(0xbu));
  /* 104f1d2e call 0x104e6c20 */
  push32(0x104f1d33u); f_104e6c20();
  /* 104f1d33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f1d36 cmp dword ptr [0x1050f818], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f818))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f1d3d jne 0x104f1d51 */
  if (!C.zf) goto L_104f1d51;
  /* 104f1d3f call 0x104f1d80 */
  push32(0x104f1d44u); f_104f1d80();
  /* 104f1d44 mov eax, dword ptr [0x1050f818] */
  EAX = (r32((uint32_t)(0x1050f818)));
  /* 104f1d49 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f1d4c mov dword ptr [0x1050f818], eax */
  w32((uint32_t)(0x1050f818), (EAX));
L_104f1d51:;
  /* 104f1d51 push 0xb */
  push32((uint32_t)(0xbu));
  /* 104f1d53 call 0x104e6cc0 */
  push32(0x104f1d58u); f_104e6cc0();
  /* 104f1d58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104f1d5b:;
  /* 104f1d5b pop ebp */
  EBP = (pop32());
  /* 104f1d5c ret  */
  ESPCHK(0x104f1d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10011d60 @ 0x104f1d60 (30 bytes, 11 insns) */
void f_104f1d60(void) {
  FTRACE(0x104f1d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104f1d60 push ebp */
  push32((uint32_t)(EBP));
  /* 104f1d61 mov ebp, esp */
  EBP = (ESP);
  /* 104f1d63 push 0xb */
  push32((uint32_t)(0xbu));
  /* 104f1d65 call 0x104e6c20 */
  push32(0x104f1d6au); f_104e6c20();
  /* 104f1d6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f1d6d call 0x104f1d80 */
  push32(0x104f1d72u); f_104f1d80();
  /* 104f1d72 push 0xb */
  push32((uint32_t)(0xbu));
  /* 104f1d74 call 0x104e6cc0 */
  push32(0x104f1d79u); f_104e6cc0();
  /* 104f1d79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f1d7c pop ebp */
  EBP = (pop32());
  /* 104f1d7d ret  */
  ESPCHK(0x104f1d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10011d80 @ 0x104f1d80 (939 bytes, 266 insns) */
void f_104f1d80(void) {
  FTRACE(0x104f1d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104f1d80 push ebp */
  push32((uint32_t)(EBP));
  /* 104f1d81 mov ebp, esp */
  EBP = (ESP);
  /* 104f1d83 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f1d86 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104f1d8d push 0xc */
  push32((uint32_t)(0xcu));
  /* 104f1d8f call 0x104e6c20 */
  push32(0x104f1d94u); f_104e6c20();
  /* 104f1d94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f1d97 mov dword ptr [0x1050f760], 0 */
  w32((uint32_t)(0x1050f760), (0x0u));
  /* 104f1da1 mov dword ptr [0x1050ee38], 0xffffffff */
  w32((uint32_t)(0x1050ee38), (0xffffffffu));
  /* 104f1dab mov eax, dword ptr [0x1050ee38] */
  EAX = (r32((uint32_t)(0x1050ee38)));
  /* 104f1db0 mov dword ptr [0x1050ee28], eax */
  w32((uint32_t)(0x1050ee28), (EAX));
  /* 104f1db5 push 0x1050b950 */
  push32((uint32_t)(0x1050b950u));
  /* 104f1dba call 0x104f2c00 */
  push32(0x104f1dbfu); f_104f2c00();
  /* 104f1dbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f1dc2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104f1dc5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f1dc9 jne 0x104f1f03 */
  if (!C.zf) goto L_104f1f03;
  /* 104f1dcf push 0xc */
  push32((uint32_t)(0xcu));
  /* 104f1dd1 call 0x104e6cc0 */
  push32(0x104f1dd6u); f_104e6cc0();
  /* 104f1dd6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f1dd9 push 0x1050f768 */
  push32((uint32_t)(0x1050f768u));
  /* 104f1dde call dword ptr [0x10512250] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512250))), 0x104f1de4u);
  /* 104f1de4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f1de7 je 0x104f1efe */
  if (C.zf) goto L_104f1efe;
  /* 104f1ded mov dword ptr [0x1050f760], 1 */
  w32((uint32_t)(0x1050f760), (0x1u));
  /* 104f1df7 mov ecx, dword ptr [0x1050f768] */
  ECX = (r32((uint32_t)(0x1050f768)));
  /* 104f1dfd imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104f1e00 mov dword ptr [0x1050ed90], ecx */
  w32((uint32_t)(0x1050ed90), (ECX));
  /* 104f1e06 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104f1e08 mov dx, word ptr [0x1050f7ae] */
  DX = (r16((uint32_t)(0x1050f7ae)));
  /* 104f1e0f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104f1e11 je 0x104f1e29 */
  if (C.zf) goto L_104f1e29;
  /* 104f1e13 mov eax, dword ptr [0x1050f7bc] */
  EAX = (r32((uint32_t)(0x1050f7bc)));
  /* 104f1e18 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104f1e1b mov ecx, dword ptr [0x1050ed90] */
  ECX = (r32((uint32_t)(0x1050ed90)));
  /* 104f1e21 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f1e23 mov dword ptr [0x1050ed90], ecx */
  w32((uint32_t)(0x1050ed90), (ECX));
L_104f1e29:;
  /* 104f1e29 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104f1e2b mov dx, word ptr [0x1050f802] */
  DX = (r16((uint32_t)(0x1050f802)));
  /* 104f1e32 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104f1e34 je 0x104f1e5e */
  if (C.zf) goto L_104f1e5e;
  /* 104f1e36 cmp dword ptr [0x1050f810], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f810))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f1e3d je 0x104f1e5e */
  if (C.zf) goto L_104f1e5e;
  /* 104f1e3f mov dword ptr [0x1050ed94], 1 */
  w32((uint32_t)(0x1050ed94), (0x1u));
  /* 104f1e49 mov eax, dword ptr [0x1050f810] */
  EAX = (r32((uint32_t)(0x1050f810)));
  /* 104f1e4e sub eax, dword ptr [0x1050f7bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1050f7bc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f1e54 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104f1e57 mov dword ptr [0x1050ed98], eax */
  w32((uint32_t)(0x1050ed98), (EAX));
  /* 104f1e5c jmp 0x104f1e72 */
  goto L_104f1e72;
L_104f1e5e:;
  /* 104f1e5e mov dword ptr [0x1050ed94], 0 */
  w32((uint32_t)(0x1050ed94), (0x0u));
  /* 104f1e68 mov dword ptr [0x1050ed98], 0 */
  w32((uint32_t)(0x1050ed98), (0x0u));
L_104f1e72:;
  /* 104f1e72 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 104f1e75 push ecx */
  push32((uint32_t)(ECX));
  /* 104f1e76 push 0 */
  push32((uint32_t)(0x0u));
  /* 104f1e78 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 104f1e7a mov edx, dword ptr [0x1050ee1c] */
  EDX = (r32((uint32_t)(0x1050ee1c)));
  /* 104f1e80 push edx */
  push32((uint32_t)(EDX));
  /* 104f1e81 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 104f1e83 push 0x1050f76c */
  push32((uint32_t)(0x1050f76cu));
  /* 104f1e88 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 104f1e8d mov eax, dword ptr [0x1050f6d0] */
  EAX = (r32((uint32_t)(0x1050f6d0)));
  /* 104f1e92 push eax */
  push32((uint32_t)(EAX));
  /* 104f1e93 call dword ptr [0x105122f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122f4))), 0x104f1e99u);
  /* 104f1e99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104f1e9b je 0x104f1eaf */
  if (C.zf) goto L_104f1eaf;
  /* 104f1e9d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f1ea1 jne 0x104f1eaf */
  if (!C.zf) goto L_104f1eaf;
  /* 104f1ea3 mov ecx, dword ptr [0x1050ee1c] */
  ECX = (r32((uint32_t)(0x1050ee1c)));
  /* 104f1ea9 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 104f1ead jmp 0x104f1eb8 */
  goto L_104f1eb8;
L_104f1eaf:;
  /* 104f1eaf mov edx, dword ptr [0x1050ee1c] */
  EDX = (r32((uint32_t)(0x1050ee1c)));
  /* 104f1eb5 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_104f1eb8:;
  /* 104f1eb8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 104f1ebb push eax */
  push32((uint32_t)(EAX));
  /* 104f1ebc push 0 */
  push32((uint32_t)(0x0u));
  /* 104f1ebe push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 104f1ec0 mov ecx, dword ptr [0x1050ee20] */
  ECX = (r32((uint32_t)(0x1050ee20)));
  /* 104f1ec6 push ecx */
  push32((uint32_t)(ECX));
  /* 104f1ec7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 104f1ec9 push 0x1050f7c0 */
  push32((uint32_t)(0x1050f7c0u));
  /* 104f1ece push 0x220 */
  push32((uint32_t)(0x220u));
  /* 104f1ed3 mov edx, dword ptr [0x1050f6d0] */
  EDX = (r32((uint32_t)(0x1050f6d0)));
  /* 104f1ed9 push edx */
  push32((uint32_t)(EDX));
  /* 104f1eda call dword ptr [0x105122f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122f4))), 0x104f1ee0u);
  /* 104f1ee0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104f1ee2 je 0x104f1ef5 */
  if (C.zf) goto L_104f1ef5;
  /* 104f1ee4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f1ee8 jne 0x104f1ef5 */
  if (!C.zf) goto L_104f1ef5;
  /* 104f1eea mov eax, dword ptr [0x1050ee20] */
  EAX = (r32((uint32_t)(0x1050ee20)));
  /* 104f1eef mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 104f1ef3 jmp 0x104f1efe */
  goto L_104f1efe;
L_104f1ef5:;
  /* 104f1ef5 mov ecx, dword ptr [0x1050ee20] */
  ECX = (r32((uint32_t)(0x1050ee20)));
  /* 104f1efb mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_104f1efe:;
  /* 104f1efe jmp 0x104f2127 */
  goto L_104f2127;
L_104f1f03:;
  /* 104f1f03 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f1f06 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 104f1f09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104f1f0b je 0x104f1f2d */
  if (C.zf) goto L_104f1f2d;
  /* 104f1f0d cmp dword ptr [0x1050f814], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f814))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f1f14 je 0x104f1f3c */
  if (C.zf) goto L_104f1f3c;
  /* 104f1f16 mov ecx, dword ptr [0x1050f814] */
  ECX = (r32((uint32_t)(0x1050f814)));
  /* 104f1f1c push ecx */
  push32((uint32_t)(ECX));
  /* 104f1f1d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f1f20 push edx */
  push32((uint32_t)(EDX));
  /* 104f1f21 call 0x104eeeb0 */
  push32(0x104f1f26u); f_104eeeb0();
  /* 104f1f26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f1f29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104f1f2b jne 0x104f1f3c */
  if (!C.zf) goto L_104f1f3c;
L_104f1f2d:;
  /* 104f1f2d push 0xc */
  push32((uint32_t)(0xcu));
  /* 104f1f2f call 0x104e6cc0 */
  push32(0x104f1f34u); f_104e6cc0();
  /* 104f1f34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f1f37 jmp 0x104f2127 */
  goto L_104f2127;
L_104f1f3c:;
  /* 104f1f3c push 2 */
  push32((uint32_t)(0x2u));
  /* 104f1f3e mov eax, dword ptr [0x1050f814] */
  EAX = (r32((uint32_t)(0x1050f814)));
  /* 104f1f43 push eax */
  push32((uint32_t)(EAX));
  /* 104f1f44 call 0x104e3cb0 */
  push32(0x104f1f49u); f_104e3cb0();
  /* 104f1f49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f1f4c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 104f1f51 push 0x1050b948 */
  push32((uint32_t)(0x1050b948u));
  /* 104f1f56 push 2 */
  push32((uint32_t)(0x2u));
  /* 104f1f58 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f1f5b push ecx */
  push32((uint32_t)(ECX));
  /* 104f1f5c call 0x104e6050 */
  push32(0x104f1f61u); f_104e6050();
  /* 104f1f61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f1f64 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f1f67 push eax */
  push32((uint32_t)(EAX));
  /* 104f1f68 call 0x104e3220 */
  push32(0x104f1f6du); f_104e3220();
  /* 104f1f6d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f1f70 mov dword ptr [0x1050f814], eax */
  w32((uint32_t)(0x1050f814), (EAX));
  /* 104f1f75 cmp dword ptr [0x1050f814], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f814))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f1f7c jne 0x104f1f8d */
  if (!C.zf) goto L_104f1f8d;
  /* 104f1f7e push 0xc */
  push32((uint32_t)(0xcu));
  /* 104f1f80 call 0x104e6cc0 */
  push32(0x104f1f85u); f_104e6cc0();
  /* 104f1f85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f1f88 jmp 0x104f2127 */
  goto L_104f2127;
L_104f1f8d:;
  /* 104f1f8d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f1f90 push edx */
  push32((uint32_t)(EDX));
  /* 104f1f91 mov eax, dword ptr [0x1050f814] */
  EAX = (r32((uint32_t)(0x1050f814)));
  /* 104f1f96 push eax */
  push32((uint32_t)(EAX));
  /* 104f1f97 call 0x104e61d0 */
  push32(0x104f1f9cu); f_104e61d0();
  /* 104f1f9c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f1f9f push 0xc */
  push32((uint32_t)(0xcu));
  /* 104f1fa1 call 0x104e6cc0 */
  push32(0x104f1fa6u); f_104e6cc0();
  /* 104f1fa6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f1fa9 push 3 */
  push32((uint32_t)(0x3u));
  /* 104f1fab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f1fae push ecx */
  push32((uint32_t)(ECX));
  /* 104f1faf mov edx, dword ptr [0x1050ee1c] */
  EDX = (r32((uint32_t)(0x1050ee1c)));
  /* 104f1fb5 push edx */
  push32((uint32_t)(EDX));
  /* 104f1fb6 call 0x104e6a40 */
  push32(0x104f1fbbu); f_104e6a40();
  /* 104f1fbb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f1fbe mov eax, dword ptr [0x1050ee1c] */
  EAX = (r32((uint32_t)(0x1050ee1c)));
  /* 104f1fc3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 104f1fc7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f1fca add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f1fcd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104f1fd0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f1fd3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 104f1fd6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f1fd9 jne 0x104f1fed */
  if (!C.zf) goto L_104f1fed;
  /* 104f1fdb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f1fde add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f1fe1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104f1fe4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f1fe7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f1fea mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_104f1fed:;
  /* 104f1fed mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f1ff0 push eax */
  push32((uint32_t)(EAX));
  /* 104f1ff1 call 0x104f1ad0 */
  push32(0x104f1ff6u); f_104f1ad0();
  /* 104f1ff6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f1ff9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104f1fff mov dword ptr [0x1050ed90], eax */
  w32((uint32_t)(0x1050ed90), (EAX));
L_104f2004:;
  /* 104f2004 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f2007 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104f200a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f200d je 0x104f2025 */
  if (C.zf) goto L_104f2025;
  /* 104f200f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f2012 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104f2015 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2018 jl 0x104f2030 */
  if ((C.sf!=C.of)) goto L_104f2030;
  /* 104f201a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f201d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 104f2020 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2023 jg 0x104f2030 */
  if ((!C.zf&&C.sf==C.of)) goto L_104f2030;
L_104f2025:;
  /* 104f2025 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f2028 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f202b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104f202e jmp 0x104f2004 */
  goto L_104f2004;
L_104f2030:;
  /* 104f2030 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f2033 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 104f2036 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2039 jne 0x104f20d5 */
  if (!C.zf) goto L_104f20d5;
  /* 104f203f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f2042 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f2045 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104f2048 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f204b push edx */
  push32((uint32_t)(EDX));
  /* 104f204c call 0x104f1ad0 */
  push32(0x104f2051u); f_104f1ad0();
  /* 104f2051 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f2054 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104f2057 mov ecx, dword ptr [0x1050ed90] */
  ECX = (r32((uint32_t)(0x1050ed90)));
  /* 104f205d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f205f mov dword ptr [0x1050ed90], ecx */
  w32((uint32_t)(0x1050ed90), (ECX));
L_104f2065:;
  /* 104f2065 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f2068 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 104f206b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f206e jl 0x104f2086 */
  if ((C.sf!=C.of)) goto L_104f2086;
  /* 104f2070 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f2073 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104f2076 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2079 jg 0x104f2086 */
  if ((!C.zf&&C.sf==C.of)) goto L_104f2086;
  /* 104f207b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f207e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f2081 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104f2084 jmp 0x104f2065 */
  goto L_104f2065;
L_104f2086:;
  /* 104f2086 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f2089 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104f208c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f208f jne 0x104f20d5 */
  if (!C.zf) goto L_104f20d5;
  /* 104f2091 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f2094 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f2097 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104f209a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f209d push ecx */
  push32((uint32_t)(ECX));
  /* 104f209e call 0x104f1ad0 */
  push32(0x104f20a3u); f_104f1ad0();
  /* 104f20a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f20a6 mov edx, dword ptr [0x1050ed90] */
  EDX = (r32((uint32_t)(0x1050ed90)));
  /* 104f20ac add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f20ae mov dword ptr [0x1050ed90], edx */
  w32((uint32_t)(0x1050ed90), (EDX));
L_104f20b4:;
  /* 104f20b4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f20b7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104f20ba cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f20bd jl 0x104f20d5 */
  if ((C.sf!=C.of)) goto L_104f20d5;
  /* 104f20bf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f20c2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 104f20c5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f20c8 jg 0x104f20d5 */
  if ((!C.zf&&C.sf==C.of)) goto L_104f20d5;
  /* 104f20ca mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f20cd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f20d0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104f20d3 jmp 0x104f20b4 */
  goto L_104f20b4;
L_104f20d5:;
  /* 104f20d5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f20d9 je 0x104f20e9 */
  if (C.zf) goto L_104f20e9;
  /* 104f20db mov edx, dword ptr [0x1050ed90] */
  EDX = (r32((uint32_t)(0x1050ed90)));
  /* 104f20e1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 104f20e3 mov dword ptr [0x1050ed90], edx */
  w32((uint32_t)(0x1050ed90), (EDX));
L_104f20e9:;
  /* 104f20e9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f20ec movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104f20ef mov dword ptr [0x1050ed94], ecx */
  w32((uint32_t)(0x1050ed94), (ECX));
  /* 104f20f5 cmp dword ptr [0x1050ed94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050ed94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f20fc je 0x104f211e */
  if (C.zf) goto L_104f211e;
  /* 104f20fe push 3 */
  push32((uint32_t)(0x3u));
  /* 104f2100 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f2103 push edx */
  push32((uint32_t)(EDX));
  /* 104f2104 mov eax, dword ptr [0x1050ee20] */
  EAX = (r32((uint32_t)(0x1050ee20)));
  /* 104f2109 push eax */
  push32((uint32_t)(EAX));
  /* 104f210a call 0x104e6a40 */
  push32(0x104f210fu); f_104e6a40();
  /* 104f210f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f2112 mov ecx, dword ptr [0x1050ee20] */
  ECX = (r32((uint32_t)(0x1050ee20)));
  /* 104f2118 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 104f211c jmp 0x104f2127 */
  goto L_104f2127;
L_104f211e:;
  /* 104f211e mov edx, dword ptr [0x1050ee20] */
  EDX = (r32((uint32_t)(0x1050ee20)));
  /* 104f2124 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_104f2127:;
  /* 104f2127 mov esp, ebp */
  ESP = (EBP);
  /* 104f2129 pop ebp */
  EBP = (pop32());
  /* 104f212a ret  */
  ESPCHK(0x104f1d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10012130 @ 0x104f2130 (46 bytes, 18 insns) */
void f_104f2130(void) {
  FTRACE(0x104f2130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104f2130 push ebp */
  push32((uint32_t)(EBP));
  /* 104f2131 mov ebp, esp */
  EBP = (ESP);
  /* 104f2133 push ecx */
  push32((uint32_t)(ECX));
  /* 104f2134 push 0xb */
  push32((uint32_t)(0xbu));
  /* 104f2136 call 0x104e6c20 */
  push32(0x104f213bu); f_104e6c20();
  /* 104f213b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f213e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f2141 push eax */
  push32((uint32_t)(EAX));
  /* 104f2142 call 0x104f2160 */
  push32(0x104f2147u); f_104f2160();
  /* 104f2147 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f214a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104f214d push 0xb */
  push32((uint32_t)(0xbu));
  /* 104f214f call 0x104e6cc0 */
  push32(0x104f2154u); f_104e6cc0();
  /* 104f2154 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f2157 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f215a mov esp, ebp */
  ESP = (EBP);
  /* 104f215c pop ebp */
  EBP = (pop32());
  /* 104f215d ret  */
  ESPCHK(0x104f2130u, _esp0);
  ESP += 4; return;
}

/* FUN_10012160 @ 0x104f2160 (762 bytes, 246 insns) */
void f_104f2160(void) {
  FTRACE(0x104f2160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104f2160 push ebp */
  push32((uint32_t)(EBP));
  /* 104f2161 mov ebp, esp */
  EBP = (ESP);
  /* 104f2163 push ecx */
  push32((uint32_t)(ECX));
  /* 104f2164 cmp dword ptr [0x1050ed94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050ed94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f216b jne 0x104f2174 */
  if (!C.zf) goto L_104f2174;
  /* 104f216d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f216f jmp 0x104f2456 */
  goto L_104f2456;
L_104f2174:;
  /* 104f2174 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f2177 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 104f217a cmp ecx, dword ptr [0x1050ee28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1050ee28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2180 jne 0x104f2194 */
  if (!C.zf) goto L_104f2194;
  /* 104f2182 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f2185 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 104f2188 cmp eax, dword ptr [0x1050ee38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1050ee38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f218e je 0x104f235b */
  if (C.zf) goto L_104f235b;
L_104f2194:;
  /* 104f2194 cmp dword ptr [0x1050f760], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f760))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f219b je 0x104f2315 */
  if (C.zf) goto L_104f2315;
  /* 104f21a1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104f21a3 mov cx, word ptr [0x1050f800] */
  CX = (r16((uint32_t)(0x1050f800)));
  /* 104f21aa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104f21ac jne 0x104f2209 */
  if (!C.zf) goto L_104f2209;
  /* 104f21ae xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104f21b0 mov dx, word ptr [0x1050f80e] */
  DX = (r16((uint32_t)(0x1050f80e)));
  /* 104f21b7 push edx */
  push32((uint32_t)(EDX));
  /* 104f21b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f21ba mov ax, word ptr [0x1050f80c] */
  AX = (r16((uint32_t)(0x1050f80c)));
  /* 104f21c0 push eax */
  push32((uint32_t)(EAX));
  /* 104f21c1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104f21c3 mov cx, word ptr [0x1050f80a] */
  CX = (r16((uint32_t)(0x1050f80a)));
  /* 104f21ca push ecx */
  push32((uint32_t)(ECX));
  /* 104f21cb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104f21cd mov dx, word ptr [0x1050f808] */
  DX = (r16((uint32_t)(0x1050f808)));
  /* 104f21d4 push edx */
  push32((uint32_t)(EDX));
  /* 104f21d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 104f21d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f21d9 mov ax, word ptr [0x1050f804] */
  AX = (r16((uint32_t)(0x1050f804)));
  /* 104f21df push eax */
  push32((uint32_t)(EAX));
  /* 104f21e0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104f21e2 mov cx, word ptr [0x1050f806] */
  CX = (r16((uint32_t)(0x1050f806)));
  /* 104f21e9 push ecx */
  push32((uint32_t)(ECX));
  /* 104f21ea xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104f21ec mov dx, word ptr [0x1050f802] */
  DX = (r16((uint32_t)(0x1050f802)));
  /* 104f21f3 push edx */
  push32((uint32_t)(EDX));
  /* 104f21f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f21f7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 104f21fa push ecx */
  push32((uint32_t)(ECX));
  /* 104f21fb push 1 */
  push32((uint32_t)(0x1u));
  /* 104f21fd push 1 */
  push32((uint32_t)(0x1u));
  /* 104f21ff call 0x104f2460 */
  push32(0x104f2204u); f_104f2460();
  /* 104f2204 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f2207 jmp 0x104f225a */
  goto L_104f225a;
L_104f2209:;
  /* 104f2209 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104f220b mov dx, word ptr [0x1050f80e] */
  DX = (r16((uint32_t)(0x1050f80e)));
  /* 104f2212 push edx */
  push32((uint32_t)(EDX));
  /* 104f2213 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f2215 mov ax, word ptr [0x1050f80c] */
  AX = (r16((uint32_t)(0x1050f80c)));
  /* 104f221b push eax */
  push32((uint32_t)(EAX));
  /* 104f221c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104f221e mov cx, word ptr [0x1050f80a] */
  CX = (r16((uint32_t)(0x1050f80a)));
  /* 104f2225 push ecx */
  push32((uint32_t)(ECX));
  /* 104f2226 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104f2228 mov dx, word ptr [0x1050f808] */
  DX = (r16((uint32_t)(0x1050f808)));
  /* 104f222f push edx */
  push32((uint32_t)(EDX));
  /* 104f2230 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f2232 mov ax, word ptr [0x1050f806] */
  AX = (r16((uint32_t)(0x1050f806)));
  /* 104f2238 push eax */
  push32((uint32_t)(EAX));
  /* 104f2239 push 0 */
  push32((uint32_t)(0x0u));
  /* 104f223b push 0 */
  push32((uint32_t)(0x0u));
  /* 104f223d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104f223f mov cx, word ptr [0x1050f802] */
  CX = (r16((uint32_t)(0x1050f802)));
  /* 104f2246 push ecx */
  push32((uint32_t)(ECX));
  /* 104f2247 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f224a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 104f224d push eax */
  push32((uint32_t)(EAX));
  /* 104f224e push 0 */
  push32((uint32_t)(0x0u));
  /* 104f2250 push 1 */
  push32((uint32_t)(0x1u));
  /* 104f2252 call 0x104f2460 */
  push32(0x104f2257u); f_104f2460();
  /* 104f2257 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104f225a:;
  /* 104f225a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104f225c mov cx, word ptr [0x1050f7ac] */
  CX = (r16((uint32_t)(0x1050f7ac)));
  /* 104f2263 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104f2265 jne 0x104f22c2 */
  if (!C.zf) goto L_104f22c2;
  /* 104f2267 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104f2269 mov dx, word ptr [0x1050f7ba] */
  DX = (r16((uint32_t)(0x1050f7ba)));
  /* 104f2270 push edx */
  push32((uint32_t)(EDX));
  /* 104f2271 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f2273 mov ax, word ptr [0x1050f7b8] */
  AX = (r16((uint32_t)(0x1050f7b8)));
  /* 104f2279 push eax */
  push32((uint32_t)(EAX));
  /* 104f227a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104f227c mov cx, word ptr [0x1050f7b6] */
  CX = (r16((uint32_t)(0x1050f7b6)));
  /* 104f2283 push ecx */
  push32((uint32_t)(ECX));
  /* 104f2284 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104f2286 mov dx, word ptr [0x1050f7b4] */
  DX = (r16((uint32_t)(0x1050f7b4)));
  /* 104f228d push edx */
  push32((uint32_t)(EDX));
  /* 104f228e push 0 */
  push32((uint32_t)(0x0u));
  /* 104f2290 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f2292 mov ax, word ptr [0x1050f7b0] */
  AX = (r16((uint32_t)(0x1050f7b0)));
  /* 104f2298 push eax */
  push32((uint32_t)(EAX));
  /* 104f2299 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104f229b mov cx, word ptr [0x1050f7b2] */
  CX = (r16((uint32_t)(0x1050f7b2)));
  /* 104f22a2 push ecx */
  push32((uint32_t)(ECX));
  /* 104f22a3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104f22a5 mov dx, word ptr [0x1050f7ae] */
  DX = (r16((uint32_t)(0x1050f7ae)));
  /* 104f22ac push edx */
  push32((uint32_t)(EDX));
  /* 104f22ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f22b0 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 104f22b3 push ecx */
  push32((uint32_t)(ECX));
  /* 104f22b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 104f22b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 104f22b8 call 0x104f2460 */
  push32(0x104f22bdu); f_104f2460();
  /* 104f22bd add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f22c0 jmp 0x104f2313 */
  goto L_104f2313;
L_104f22c2:;
  /* 104f22c2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104f22c4 mov dx, word ptr [0x1050f7ba] */
  DX = (r16((uint32_t)(0x1050f7ba)));
  /* 104f22cb push edx */
  push32((uint32_t)(EDX));
  /* 104f22cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f22ce mov ax, word ptr [0x1050f7b8] */
  AX = (r16((uint32_t)(0x1050f7b8)));
  /* 104f22d4 push eax */
  push32((uint32_t)(EAX));
  /* 104f22d5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104f22d7 mov cx, word ptr [0x1050f7b6] */
  CX = (r16((uint32_t)(0x1050f7b6)));
  /* 104f22de push ecx */
  push32((uint32_t)(ECX));
  /* 104f22df xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104f22e1 mov dx, word ptr [0x1050f7b4] */
  DX = (r16((uint32_t)(0x1050f7b4)));
  /* 104f22e8 push edx */
  push32((uint32_t)(EDX));
  /* 104f22e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f22eb mov ax, word ptr [0x1050f7b2] */
  AX = (r16((uint32_t)(0x1050f7b2)));
  /* 104f22f1 push eax */
  push32((uint32_t)(EAX));
  /* 104f22f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 104f22f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 104f22f6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104f22f8 mov cx, word ptr [0x1050f7ae] */
  CX = (r16((uint32_t)(0x1050f7ae)));
  /* 104f22ff push ecx */
  push32((uint32_t)(ECX));
  /* 104f2300 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f2303 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 104f2306 push eax */
  push32((uint32_t)(EAX));
  /* 104f2307 push 0 */
  push32((uint32_t)(0x0u));
  /* 104f2309 push 0 */
  push32((uint32_t)(0x0u));
  /* 104f230b call 0x104f2460 */
  push32(0x104f2310u); f_104f2460();
  /* 104f2310 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104f2313:;
  /* 104f2313 jmp 0x104f235b */
  goto L_104f235b;
L_104f2315:;
  /* 104f2315 push 0 */
  push32((uint32_t)(0x0u));
  /* 104f2317 push 0 */
  push32((uint32_t)(0x0u));
  /* 104f2319 push 0 */
  push32((uint32_t)(0x0u));
  /* 104f231b push 2 */
  push32((uint32_t)(0x2u));
  /* 104f231d push 0 */
  push32((uint32_t)(0x0u));
  /* 104f231f push 0 */
  push32((uint32_t)(0x0u));
  /* 104f2321 push 1 */
  push32((uint32_t)(0x1u));
  /* 104f2323 push 4 */
  push32((uint32_t)(0x4u));
  /* 104f2325 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f2328 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 104f232b push edx */
  push32((uint32_t)(EDX));
  /* 104f232c push 1 */
  push32((uint32_t)(0x1u));
  /* 104f232e push 1 */
  push32((uint32_t)(0x1u));
  /* 104f2330 call 0x104f2460 */
  push32(0x104f2335u); f_104f2460();
  /* 104f2335 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f2338 push 0 */
  push32((uint32_t)(0x0u));
  /* 104f233a push 0 */
  push32((uint32_t)(0x0u));
  /* 104f233c push 0 */
  push32((uint32_t)(0x0u));
  /* 104f233e push 2 */
  push32((uint32_t)(0x2u));
  /* 104f2340 push 0 */
  push32((uint32_t)(0x0u));
  /* 104f2342 push 0 */
  push32((uint32_t)(0x0u));
  /* 104f2344 push 5 */
  push32((uint32_t)(0x5u));
  /* 104f2346 push 0xa */
  push32((uint32_t)(0xau));
  /* 104f2348 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f234b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 104f234e push ecx */
  push32((uint32_t)(ECX));
  /* 104f234f push 1 */
  push32((uint32_t)(0x1u));
  /* 104f2351 push 0 */
  push32((uint32_t)(0x0u));
  /* 104f2353 call 0x104f2460 */
  push32(0x104f2358u); f_104f2460();
  /* 104f2358 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104f235b:;
  /* 104f235b mov edx, dword ptr [0x1050ee2c] */
  EDX = (r32((uint32_t)(0x1050ee2c)));
  /* 104f2361 cmp edx, dword ptr [0x1050ee3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1050ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2367 jge 0x104f23b4 */
  if ((C.sf==C.of)) goto L_104f23b4;
  /* 104f2369 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f236c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 104f236f cmp ecx, dword ptr [0x1050ee2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1050ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2375 jl 0x104f2385 */
  if ((C.sf!=C.of)) goto L_104f2385;
  /* 104f2377 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f237a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 104f237d cmp eax, dword ptr [0x1050ee3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1050ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2383 jle 0x104f238c */
  if ((C.zf||C.sf!=C.of)) goto L_104f238c;
L_104f2385:;
  /* 104f2385 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f2387 jmp 0x104f2456 */
  goto L_104f2456;
L_104f238c:;
  /* 104f238c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f238f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 104f2392 cmp edx, dword ptr [0x1050ee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1050ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2398 jle 0x104f23b2 */
  if ((C.zf||C.sf!=C.of)) goto L_104f23b2;
  /* 104f239a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f239d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 104f23a0 cmp ecx, dword ptr [0x1050ee3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1050ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f23a6 jge 0x104f23b2 */
  if ((C.sf==C.of)) goto L_104f23b2;
  /* 104f23a8 mov eax, 1 */
  EAX = (0x1u);
  /* 104f23ad jmp 0x104f2456 */
  goto L_104f2456;
L_104f23b2:;
  /* 104f23b2 jmp 0x104f23f7 */
  goto L_104f23f7;
L_104f23b4:;
  /* 104f23b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f23b7 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 104f23ba cmp eax, dword ptr [0x1050ee3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1050ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f23c0 jl 0x104f23d0 */
  if ((C.sf!=C.of)) goto L_104f23d0;
  /* 104f23c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f23c5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 104f23c8 cmp edx, dword ptr [0x1050ee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1050ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f23ce jle 0x104f23d7 */
  if ((C.zf||C.sf!=C.of)) goto L_104f23d7;
L_104f23d0:;
  /* 104f23d0 mov eax, 1 */
  EAX = (0x1u);
  /* 104f23d5 jmp 0x104f2456 */
  goto L_104f2456;
L_104f23d7:;
  /* 104f23d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f23da mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 104f23dd cmp ecx, dword ptr [0x1050ee3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1050ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f23e3 jle 0x104f23f7 */
  if ((C.zf||C.sf!=C.of)) goto L_104f23f7;
  /* 104f23e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f23e8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 104f23eb cmp eax, dword ptr [0x1050ee2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1050ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f23f1 jge 0x104f23f7 */
  if ((C.sf==C.of)) goto L_104f23f7;
  /* 104f23f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f23f5 jmp 0x104f2456 */
  goto L_104f2456;
L_104f23f7:;
  /* 104f23f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f23fa mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 104f23fd imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104f2400 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f2403 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104f2405 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f2407 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f240a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 104f240d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104f2413 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f2415 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104f241b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104f241e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f2421 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 104f2424 cmp edx, dword ptr [0x1050ee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1050ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f242a jne 0x104f2442 */
  if (!C.zf) goto L_104f2442;
  /* 104f242c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f242f cmp eax, dword ptr [0x1050ee30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1050ee30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2435 jl 0x104f243e */
  if ((C.sf!=C.of)) goto L_104f243e;
  /* 104f2437 mov eax, 1 */
  EAX = (0x1u);
  /* 104f243c jmp 0x104f2456 */
  goto L_104f2456;
L_104f243e:;
  /* 104f243e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f2440 jmp 0x104f2456 */
  goto L_104f2456;
L_104f2442:;
  /* 104f2442 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f2445 cmp ecx, dword ptr [0x1050ee40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1050ee40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f244b jge 0x104f2454 */
  if ((C.sf==C.of)) goto L_104f2454;
  /* 104f244d mov eax, 1 */
  EAX = (0x1u);
  /* 104f2452 jmp 0x104f2456 */
  goto L_104f2456;
L_104f2454:;
  /* 104f2454 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104f2456:;
  /* 104f2456 mov esp, ebp */
  ESP = (EBP);
  /* 104f2458 pop ebp */
  EBP = (pop32());
  /* 104f2459 ret  */
  ESPCHK(0x104f2160u, _esp0);
  ESP += 4; return;
}

/* FUN_10012460 @ 0x104f2460 (504 bytes, 145 insns) */
void f_104f2460(void) {
  FTRACE(0x104f2460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104f2460 push ebp */
  push32((uint32_t)(EBP));
  /* 104f2461 mov ebp, esp */
  EBP = (ESP);
  /* 104f2463 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f2466 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f246a jne 0x104f253c */
  if (!C.zf) goto L_104f253c;
  /* 104f2470 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f2473 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 104f2476 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104f2478 jne 0x104f2489 */
  if (!C.zf) goto L_104f2489;
  /* 104f247a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f247d mov edx, dword ptr [ecx*4 + 0x1050ee4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1050ee4c)));
  /* 104f2484 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 104f2487 jmp 0x104f2496 */
  goto L_104f2496;
L_104f2489:;
  /* 104f2489 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f248c mov ecx, dword ptr [eax*4 + 0x1050ee80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1050ee80)));
  /* 104f2493 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_104f2496:;
  /* 104f2496 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f2499 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f249c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 104f249f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f24a2 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f24a5 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104f24ab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104f24ae add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f24b0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f24b3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f24b6 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 104f24b9 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 104f24bd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 104f24be mov ecx, 7 */
  ECX = (0x7u);
  /* 104f24c3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 104f24c5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104f24c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f24cb cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f24ce jge 0x104f24e9 */
  if ((C.sf==C.of)) goto L_104f24e9;
  /* 104f24d0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 104f24d3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f24d6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 104f24d9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f24dc imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104f24df add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f24e2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f24e4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104f24e7 jmp 0x104f24fd */
  goto L_104f24fd;
L_104f24e9:;
  /* 104f24e9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 104f24ec sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f24ef mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104f24f2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104f24f5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f24f8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f24fa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_104f24fd:;
  /* 104f24fd cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2501 jne 0x104f253a */
  if (!C.zf) goto L_104f253a;
  /* 104f2503 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f2506 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 104f2509 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104f250b jne 0x104f251c */
  if (!C.zf) goto L_104f251c;
  /* 104f250d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f2510 mov eax, dword ptr [edx*4 + 0x1050ee50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1050ee50)));
  /* 104f2517 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 104f251a jmp 0x104f2529 */
  goto L_104f2529;
L_104f251c:;
  /* 104f251c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f251f mov edx, dword ptr [ecx*4 + 0x1050ee84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1050ee84)));
  /* 104f2526 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_104f2529:;
  /* 104f2529 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104f252c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f252f jle 0x104f253a */
  if ((C.zf||C.sf!=C.of)) goto L_104f253a;
  /* 104f2531 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104f2534 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f2537 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_104f253a:;
  /* 104f253a jmp 0x104f2571 */
  goto L_104f2571;
L_104f253c:;
  /* 104f253c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f253f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 104f2542 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104f2544 jne 0x104f2555 */
  if (!C.zf) goto L_104f2555;
  /* 104f2546 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f2549 mov ecx, dword ptr [eax*4 + 0x1050ee4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1050ee4c)));
  /* 104f2550 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 104f2553 jmp 0x104f2562 */
  goto L_104f2562;
L_104f2555:;
  /* 104f2555 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f2558 mov eax, dword ptr [edx*4 + 0x1050ee80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1050ee80)));
  /* 104f255f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_104f2562:;
  /* 104f2562 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104f2565 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104f2568 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104f256b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f256e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_104f2571:;
  /* 104f2571 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2575 jne 0x104f25b1 */
  if (!C.zf) goto L_104f25b1;
  /* 104f2577 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104f257a mov dword ptr [0x1050ee2c], eax */
  w32((uint32_t)(0x1050ee2c), (EAX));
  /* 104f257f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 104f2582 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104f2585 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 104f2588 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f258a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104f258d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 104f2590 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f2592 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104f2598 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 104f259b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f259d mov dword ptr [0x1050ee30], ecx */
  w32((uint32_t)(0x1050ee30), (ECX));
  /* 104f25a3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f25a6 mov dword ptr [0x1050ee28], edx */
  w32((uint32_t)(0x1050ee28), (EDX));
  /* 104f25ac jmp 0x104f2654 */
  goto L_104f2654;
L_104f25b1:;
  /* 104f25b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104f25b4 mov dword ptr [0x1050ee3c], eax */
  w32((uint32_t)(0x1050ee3c), (EAX));
  /* 104f25b9 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 104f25bc imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104f25bf mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 104f25c2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f25c4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104f25c7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 104f25ca add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f25cc imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104f25d2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 104f25d5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f25d7 mov dword ptr [0x1050ee40], ecx */
  w32((uint32_t)(0x1050ee40), (ECX));
  /* 104f25dd mov edx, dword ptr [0x1050ed98] */
  EDX = (r32((uint32_t)(0x1050ed98)));
  /* 104f25e3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104f25e9 mov eax, dword ptr [0x1050ee40] */
  EAX = (r32((uint32_t)(0x1050ee40)));
  /* 104f25ee add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f25f0 mov dword ptr [0x1050ee40], eax */
  w32((uint32_t)(0x1050ee40), (EAX));
  /* 104f25f5 cmp dword ptr [0x1050ee40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050ee40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f25fc jge 0x104f2621 */
  if ((C.sf==C.of)) goto L_104f2621;
  /* 104f25fe mov ecx, dword ptr [0x1050ee40] */
  ECX = (r32((uint32_t)(0x1050ee40)));
  /* 104f2604 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f260a mov dword ptr [0x1050ee40], ecx */
  w32((uint32_t)(0x1050ee40), (ECX));
  /* 104f2610 mov edx, dword ptr [0x1050ee3c] */
  EDX = (r32((uint32_t)(0x1050ee3c)));
  /* 104f2616 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f2619 mov dword ptr [0x1050ee3c], edx */
  w32((uint32_t)(0x1050ee3c), (EDX));
  /* 104f261f jmp 0x104f264b */
  goto L_104f264b;
L_104f2621:;
  /* 104f2621 cmp dword ptr [0x1050ee40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x1050ee40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f262b jl 0x104f264b */
  if ((C.sf!=C.of)) goto L_104f264b;
  /* 104f262d mov eax, dword ptr [0x1050ee40] */
  EAX = (r32((uint32_t)(0x1050ee40)));
  /* 104f2632 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f2637 mov dword ptr [0x1050ee40], eax */
  w32((uint32_t)(0x1050ee40), (EAX));
  /* 104f263c mov ecx, dword ptr [0x1050ee3c] */
  ECX = (r32((uint32_t)(0x1050ee3c)));
  /* 104f2642 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f2645 mov dword ptr [0x1050ee3c], ecx */
  w32((uint32_t)(0x1050ee3c), (ECX));
L_104f264b:;
  /* 104f264b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f264e mov dword ptr [0x1050ee38], edx */
  w32((uint32_t)(0x1050ee38), (EDX));
L_104f2654:;
  /* 104f2654 mov esp, ebp */
  ESP = (EBP);
  /* 104f2656 pop ebp */
  EBP = (pop32());
  /* 104f2657 ret  */
  ESPCHK(0x104f2460u, _esp0);
  ESP += 4; return;
}

/* FUN_10012660 @ 0x104f2660 (382 bytes, 135 insns) */
void f_104f2660(void) {
  FTRACE(0x104f2660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104f2660 push ebp */
  push32((uint32_t)(EBP));
  /* 104f2661 mov ebp, esp */
  EBP = (ESP);
  /* 104f2663 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 104f2665 push 0x1050b958 */
  push32((uint32_t)(0x1050b958u));
  /* 104f266a push 0x104ec328 */
  push32((uint32_t)(0x104ec328u));
  /* 104f266f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 104f2675 push eax */
  push32((uint32_t)(EAX));
  /* 104f2676 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 104f267d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f2680 push ebx */
  push32((uint32_t)(EBX));
  /* 104f2681 push esi */
  push32((uint32_t)(ESI));
  /* 104f2682 push edi */
  push32((uint32_t)(EDI));
  /* 104f2683 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 104f2686 cmp dword ptr [0x1050f81c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f81c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f268d jne 0x104f26d2 */
  if (!C.zf) goto L_104f26d2;
  /* 104f268f push 0 */
  push32((uint32_t)(0x0u));
  /* 104f2691 push 0 */
  push32((uint32_t)(0x0u));
  /* 104f2693 push 1 */
  push32((uint32_t)(0x1u));
  /* 104f2695 push 0 */
  push32((uint32_t)(0x0u));
  /* 104f2697 call dword ptr [0x1051224c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1051224c))), 0x104f269du);
  /* 104f269d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104f269f je 0x104f26ad */
  if (C.zf) goto L_104f26ad;
  /* 104f26a1 mov dword ptr [0x1050f81c], 1 */
  w32((uint32_t)(0x1050f81c), (0x1u));
  /* 104f26ab jmp 0x104f26d2 */
  goto L_104f26d2;
L_104f26ad:;
  /* 104f26ad push 0 */
  push32((uint32_t)(0x0u));
  /* 104f26af push 0 */
  push32((uint32_t)(0x0u));
  /* 104f26b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 104f26b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 104f26b5 call dword ptr [0x10512264] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512264))), 0x104f26bbu);
  /* 104f26bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104f26bd je 0x104f26cb */
  if (C.zf) goto L_104f26cb;
  /* 104f26bf mov dword ptr [0x1050f81c], 2 */
  w32((uint32_t)(0x1050f81c), (0x2u));
  /* 104f26c9 jmp 0x104f26d2 */
  goto L_104f26d2;
L_104f26cb:;
  /* 104f26cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f26cd jmp 0x104f27e1 */
  goto L_104f27e1;
L_104f26d2:;
  /* 104f26d2 cmp dword ptr [0x1050f81c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1050f81c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f26d9 jne 0x104f26f6 */
  if (!C.zf) goto L_104f26f6;
  /* 104f26db mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f26de push eax */
  push32((uint32_t)(EAX));
  /* 104f26df mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f26e2 push ecx */
  push32((uint32_t)(ECX));
  /* 104f26e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f26e6 push edx */
  push32((uint32_t)(EDX));
  /* 104f26e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f26ea push eax */
  push32((uint32_t)(EAX));
  /* 104f26eb call dword ptr [0x1051224c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1051224c))), 0x104f26f1u);
  /* 104f26f1 jmp 0x104f27e1 */
  goto L_104f27e1;
L_104f26f6:;
  /* 104f26f6 cmp dword ptr [0x1050f81c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1050f81c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f26fd jne 0x104f27df */
  if (!C.zf) goto L_104f27df;
  /* 104f2703 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2707 jne 0x104f2712 */
  if (!C.zf) goto L_104f2712;
  /* 104f2709 mov ecx, dword ptr [0x1050f6d0] */
  ECX = (r32((uint32_t)(0x1050f6d0)));
  /* 104f270f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_104f2712:;
  /* 104f2712 push 0 */
  push32((uint32_t)(0x0u));
  /* 104f2714 push 0 */
  push32((uint32_t)(0x0u));
  /* 104f2716 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f2719 push edx */
  push32((uint32_t)(EDX));
  /* 104f271a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f271d push eax */
  push32((uint32_t)(EAX));
  /* 104f271e call dword ptr [0x10512264] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512264))), 0x104f2724u);
  /* 104f2724 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 104f2727 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f272b jne 0x104f2734 */
  if (!C.zf) goto L_104f2734;
  /* 104f272d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f272f jmp 0x104f27e1 */
  goto L_104f27e1;
L_104f2734:;
  /* 104f2734 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104f273b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104f273e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f2741 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 104f2743 call 0x104e63c0 */
  push32(0x104f2748u); f_104e63c0();
  /* 104f2748 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 104f274b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 104f274e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 104f2751 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 104f2754 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 104f275b jmp 0x104f2774 */
  goto L_104f2774;
  /* 104f275d mov eax, 1 */
  EAX = (0x1u);
  /* 104f2762 ret  */
  ESPCHK(0x104f2660u, _esp0);
  ESP += 4; return;
  /* 104f2763 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 104f2766 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 104f276d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_104f2774:;
  /* 104f2774 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2778 jne 0x104f277e */
  if (!C.zf) goto L_104f277e;
  /* 104f277a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f277c jmp 0x104f27e1 */
  goto L_104f27e1;
L_104f277e:;
  /* 104f277e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104f2781 push edx */
  push32((uint32_t)(EDX));
  /* 104f2782 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 104f2785 push eax */
  push32((uint32_t)(EAX));
  /* 104f2786 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f2789 push ecx */
  push32((uint32_t)(ECX));
  /* 104f278a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f278d push edx */
  push32((uint32_t)(EDX));
  /* 104f278e call dword ptr [0x10512264] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512264))), 0x104f2794u);
  /* 104f2794 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104f2796 jne 0x104f279c */
  if (!C.zf) goto L_104f279c;
  /* 104f2798 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f279a jmp 0x104f27e1 */
  goto L_104f27e1;
L_104f279c:;
  /* 104f279c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f27a0 jne 0x104f27bd */
  if (!C.zf) goto L_104f27bd;
  /* 104f27a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 104f27a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 104f27a6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 104f27a8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 104f27ab push eax */
  push32((uint32_t)(EAX));
  /* 104f27ac push 1 */
  push32((uint32_t)(0x1u));
  /* 104f27ae mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 104f27b1 push ecx */
  push32((uint32_t)(ECX));
  /* 104f27b2 call dword ptr [0x1051233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1051233c))), 0x104f27b8u);
  /* 104f27b8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 104f27bb jmp 0x104f27da */
  goto L_104f27da;
L_104f27bd:;
  /* 104f27bd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f27c0 push edx */
  push32((uint32_t)(EDX));
  /* 104f27c1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f27c4 push eax */
  push32((uint32_t)(EAX));
  /* 104f27c5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 104f27c7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104f27ca push ecx */
  push32((uint32_t)(ECX));
  /* 104f27cb push 1 */
  push32((uint32_t)(0x1u));
  /* 104f27cd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104f27d0 push edx */
  push32((uint32_t)(EDX));
  /* 104f27d1 call dword ptr [0x1051233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1051233c))), 0x104f27d7u);
  /* 104f27d7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_104f27da:;
  /* 104f27da mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104f27dd jmp 0x104f27e1 */
  goto L_104f27e1;
L_104f27df:;
  /* 104f27df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104f27e1:;
  /* 104f27e1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 104f27e4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104f27e7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 104f27ee pop edi */
  EDI = (pop32());
  /* 104f27ef pop esi */
  ESI = (pop32());
  /* 104f27f0 pop ebx */
  EBX = (pop32());
  /* 104f27f1 mov esp, ebp */
  ESP = (EBP);
  /* 104f27f3 pop ebp */
  EBP = (pop32());
  /* 104f27f4 ret  */
  ESPCHK(0x104f2660u, _esp0);
  ESP += 4; return;
}

/* FUN_10012800 @ 0x104f2800 (398 bytes, 140 insns) */
void f_104f2800(void) {
  FTRACE(0x104f2800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104f2800 push ebp */
  push32((uint32_t)(EBP));
  /* 104f2801 mov ebp, esp */
  EBP = (ESP);
  /* 104f2803 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 104f2805 push 0x1050b968 */
  push32((uint32_t)(0x1050b968u));
  /* 104f280a push 0x104ec328 */
  push32((uint32_t)(0x104ec328u));
  /* 104f280f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 104f2815 push eax */
  push32((uint32_t)(EAX));
  /* 104f2816 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 104f281d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f2820 push ebx */
  push32((uint32_t)(EBX));
  /* 104f2821 push esi */
  push32((uint32_t)(ESI));
  /* 104f2822 push edi */
  push32((uint32_t)(EDI));
  /* 104f2823 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 104f2826 cmp dword ptr [0x1050f820], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f820))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f282d jne 0x104f2872 */
  if (!C.zf) goto L_104f2872;
  /* 104f282f push 0 */
  push32((uint32_t)(0x0u));
  /* 104f2831 push 0 */
  push32((uint32_t)(0x0u));
  /* 104f2833 push 1 */
  push32((uint32_t)(0x1u));
  /* 104f2835 push 0 */
  push32((uint32_t)(0x0u));
  /* 104f2837 call dword ptr [0x1051224c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1051224c))), 0x104f283du);
  /* 104f283d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104f283f je 0x104f284d */
  if (C.zf) goto L_104f284d;
  /* 104f2841 mov dword ptr [0x1050f820], 1 */
  w32((uint32_t)(0x1050f820), (0x1u));
  /* 104f284b jmp 0x104f2872 */
  goto L_104f2872;
L_104f284d:;
  /* 104f284d push 0 */
  push32((uint32_t)(0x0u));
  /* 104f284f push 0 */
  push32((uint32_t)(0x0u));
  /* 104f2851 push 1 */
  push32((uint32_t)(0x1u));
  /* 104f2853 push 0 */
  push32((uint32_t)(0x0u));
  /* 104f2855 call dword ptr [0x10512264] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512264))), 0x104f285bu);
  /* 104f285b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104f285d je 0x104f286b */
  if (C.zf) goto L_104f286b;
  /* 104f285f mov dword ptr [0x1050f820], 2 */
  w32((uint32_t)(0x1050f820), (0x2u));
  /* 104f2869 jmp 0x104f2872 */
  goto L_104f2872;
L_104f286b:;
  /* 104f286b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f286d jmp 0x104f2991 */
  goto L_104f2991;
L_104f2872:;
  /* 104f2872 cmp dword ptr [0x1050f820], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1050f820))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2879 jne 0x104f2896 */
  if (!C.zf) goto L_104f2896;
  /* 104f287b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f287e push eax */
  push32((uint32_t)(EAX));
  /* 104f287f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f2882 push ecx */
  push32((uint32_t)(ECX));
  /* 104f2883 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f2886 push edx */
  push32((uint32_t)(EDX));
  /* 104f2887 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f288a push eax */
  push32((uint32_t)(EAX));
  /* 104f288b call dword ptr [0x10512264] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512264))), 0x104f2891u);
  /* 104f2891 jmp 0x104f2991 */
  goto L_104f2991;
L_104f2896:;
  /* 104f2896 cmp dword ptr [0x1050f820], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1050f820))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f289d jne 0x104f298f */
  if (!C.zf) goto L_104f298f;
  /* 104f28a3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f28a7 jne 0x104f28b2 */
  if (!C.zf) goto L_104f28b2;
  /* 104f28a9 mov ecx, dword ptr [0x1050f6d0] */
  ECX = (r32((uint32_t)(0x1050f6d0)));
  /* 104f28af mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_104f28b2:;
  /* 104f28b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 104f28b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 104f28b6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f28b9 push edx */
  push32((uint32_t)(EDX));
  /* 104f28ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f28bd push eax */
  push32((uint32_t)(EAX));
  /* 104f28be call dword ptr [0x1051224c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1051224c))), 0x104f28c4u);
  /* 104f28c4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 104f28c7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f28cb jne 0x104f28d4 */
  if (!C.zf) goto L_104f28d4;
  /* 104f28cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f28cf jmp 0x104f2991 */
  goto L_104f2991;
L_104f28d4:;
  /* 104f28d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104f28db mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104f28de shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 104f28e0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f28e3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 104f28e5 call 0x104e63c0 */
  push32(0x104f28eau); f_104e63c0();
  /* 104f28ea mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 104f28ed mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 104f28f0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 104f28f3 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 104f28f6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 104f28fd jmp 0x104f2916 */
  goto L_104f2916;
  /* 104f28ff mov eax, 1 */
  EAX = (0x1u);
  /* 104f2904 ret  */
  ESPCHK(0x104f2800u, _esp0);
  ESP += 4; return;
  /* 104f2905 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 104f2908 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 104f290f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_104f2916:;
  /* 104f2916 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f291a jne 0x104f2920 */
  if (!C.zf) goto L_104f2920;
  /* 104f291c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f291e jmp 0x104f2991 */
  goto L_104f2991;
L_104f2920:;
  /* 104f2920 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104f2923 push edx */
  push32((uint32_t)(EDX));
  /* 104f2924 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 104f2927 push eax */
  push32((uint32_t)(EAX));
  /* 104f2928 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f292b push ecx */
  push32((uint32_t)(ECX));
  /* 104f292c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f292f push edx */
  push32((uint32_t)(EDX));
  /* 104f2930 call dword ptr [0x1051224c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1051224c))), 0x104f2936u);
  /* 104f2936 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104f2938 jne 0x104f293e */
  if (!C.zf) goto L_104f293e;
  /* 104f293a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f293c jmp 0x104f2991 */
  goto L_104f2991;
L_104f293e:;
  /* 104f293e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2942 jne 0x104f2966 */
  if (!C.zf) goto L_104f2966;
  /* 104f2944 push 0 */
  push32((uint32_t)(0x0u));
  /* 104f2946 push 0 */
  push32((uint32_t)(0x0u));
  /* 104f2948 push 0 */
  push32((uint32_t)(0x0u));
  /* 104f294a push 0 */
  push32((uint32_t)(0x0u));
  /* 104f294c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 104f294e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 104f2951 push eax */
  push32((uint32_t)(EAX));
  /* 104f2952 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 104f2957 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 104f295a push ecx */
  push32((uint32_t)(ECX));
  /* 104f295b call dword ptr [0x105122f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122f4))), 0x104f2961u);
  /* 104f2961 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 104f2964 jmp 0x104f298a */
  goto L_104f298a;
L_104f2966:;
  /* 104f2966 push 0 */
  push32((uint32_t)(0x0u));
  /* 104f2968 push 0 */
  push32((uint32_t)(0x0u));
  /* 104f296a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f296d push edx */
  push32((uint32_t)(EDX));
  /* 104f296e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f2971 push eax */
  push32((uint32_t)(EAX));
  /* 104f2972 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 104f2974 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104f2977 push ecx */
  push32((uint32_t)(ECX));
  /* 104f2978 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 104f297d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104f2980 push edx */
  push32((uint32_t)(EDX));
  /* 104f2981 call dword ptr [0x105122f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122f4))), 0x104f2987u);
  /* 104f2987 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_104f298a:;
  /* 104f298a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104f298d jmp 0x104f2991 */
  goto L_104f2991;
L_104f298f:;
  /* 104f298f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104f2991:;
  /* 104f2991 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 104f2994 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104f2997 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 104f299e pop edi */
  EDI = (pop32());
  /* 104f299f pop esi */
  ESI = (pop32());
  /* 104f29a0 pop ebx */
  EBX = (pop32());
  /* 104f29a1 mov esp, ebp */
  ESP = (EBP);
  /* 104f29a3 pop ebp */
  EBP = (pop32());
  /* 104f29a4 ret  */
  ESPCHK(0x104f2800u, _esp0);
  ESP += 4; return;
}

/* FUN_100129b0 @ 0x104f29b0 (11 bytes, 6 insns) */
void f_104f29b0(void) {
  FTRACE(0x104f29b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104f29b0 push ebp */
  push32((uint32_t)(EBP));
  /* 104f29b1 mov ebp, esp */
  EBP = (ESP);
  /* 104f29b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f29b6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f29b9 pop ebp */
  EBP = (pop32());
  /* 104f29ba ret  */
  ESPCHK(0x104f29b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100129c0 @ 0x104f29c0 (147 bytes, 43 insns) */
void f_104f29c0(void) {
  FTRACE(0x104f29c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104f29c0 push ebp */
  push32((uint32_t)(EBP));
  /* 104f29c1 mov ebp, esp */
  EBP = (ESP);
  /* 104f29c3 push ecx */
  push32((uint32_t)(ECX));
  /* 104f29c4 cmp dword ptr [0x1050f6c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f6c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f29cb jne 0x104f29e7 */
  if (!C.zf) goto L_104f29e7;
  /* 104f29cd cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f29d1 jl 0x104f29e2 */
  if ((C.sf!=C.of)) goto L_104f29e2;
  /* 104f29d3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f29d7 jg 0x104f29e2 */
  if ((!C.zf&&C.sf==C.of)) goto L_104f29e2;
  /* 104f29d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f29dc add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f29df mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_104f29e2:;
  /* 104f29e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f29e5 jmp 0x104f2a4f */
  goto L_104f2a4f;
L_104f29e7:;
  /* 104f29e7 push 0x1050f84c */
  push32((uint32_t)(0x1050f84cu));
  /* 104f29ec call dword ptr [0x1051229c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1051229c))), 0x104f29f2u);
  /* 104f29f2 cmp dword ptr [0x1050f83c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f83c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f29f9 je 0x104f2a19 */
  if (C.zf) goto L_104f2a19;
  /* 104f29fb push 0x1050f84c */
  push32((uint32_t)(0x1050f84cu));
  /* 104f2a00 call dword ptr [0x1051228c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1051228c))), 0x104f2a06u);
  /* 104f2a06 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 104f2a08 call 0x104e6c20 */
  push32(0x104f2a0du); f_104e6c20();
  /* 104f2a0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f2a10 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 104f2a17 jmp 0x104f2a20 */
  goto L_104f2a20;
L_104f2a19:;
  /* 104f2a19 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_104f2a20:;
  /* 104f2a20 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f2a23 push ecx */
  push32((uint32_t)(ECX));
  /* 104f2a24 call 0x104f2a60 */
  push32(0x104f2a29u); f_104f2a60();
  /* 104f2a29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f2a2c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 104f2a2f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2a33 je 0x104f2a41 */
  if (C.zf) goto L_104f2a41;
  /* 104f2a35 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 104f2a37 call 0x104e6cc0 */
  push32(0x104f2a3cu); f_104e6cc0();
  /* 104f2a3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f2a3f jmp 0x104f2a4c */
  goto L_104f2a4c;
L_104f2a41:;
  /* 104f2a41 push 0x1050f84c */
  push32((uint32_t)(0x1050f84cu));
  /* 104f2a46 call dword ptr [0x1051228c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1051228c))), 0x104f2a4cu);
L_104f2a4c:;
  /* 104f2a4c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_104f2a4f:;
  /* 104f2a4f mov esp, ebp */
  ESP = (EBP);
  /* 104f2a51 pop ebp */
  EBP = (pop32());
  /* 104f2a52 ret  */
  ESPCHK(0x104f29c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012a60 @ 0x104f2a60 (299 bytes, 91 insns) */
void f_104f2a60(void) {
  FTRACE(0x104f2a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104f2a60 push ebp */
  push32((uint32_t)(EBP));
  /* 104f2a61 mov ebp, esp */
  EBP = (ESP);
  /* 104f2a63 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f2a66 cmp dword ptr [0x1050f6c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f6c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2a6d jne 0x104f2a8c */
  if (!C.zf) goto L_104f2a8c;
  /* 104f2a6f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2a73 jl 0x104f2a84 */
  if ((C.sf!=C.of)) goto L_104f2a84;
  /* 104f2a75 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2a79 jg 0x104f2a84 */
  if ((!C.zf&&C.sf==C.of)) goto L_104f2a84;
  /* 104f2a7b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f2a7e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f2a81 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_104f2a84:;
  /* 104f2a84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f2a87 jmp 0x104f2b87 */
  goto L_104f2b87;
L_104f2a8c:;
  /* 104f2a8c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2a93 jge 0x104f2ad3 */
  if ((C.sf==C.of)) goto L_104f2ad3;
  /* 104f2a95 cmp dword ptr [0x1050dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1050dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2a9c jle 0x104f2ab1 */
  if ((C.zf||C.sf!=C.of)) goto L_104f2ab1;
  /* 104f2a9e push 1 */
  push32((uint32_t)(0x1u));
  /* 104f2aa0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f2aa3 push ecx */
  push32((uint32_t)(ECX));
  /* 104f2aa4 call 0x104e9230 */
  push32(0x104f2aa9u); f_104e9230();
  /* 104f2aa9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f2aac mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 104f2aaf jmp 0x104f2ac5 */
  goto L_104f2ac5;
L_104f2ab1:;
  /* 104f2ab1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f2ab4 mov eax, dword ptr [0x1050dc98] */
  EAX = (r32((uint32_t)(0x1050dc98)));
  /* 104f2ab9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104f2abb mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 104f2abf and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 104f2ac2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_104f2ac5:;
  /* 104f2ac5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2ac9 jne 0x104f2ad3 */
  if (!C.zf) goto L_104f2ad3;
  /* 104f2acb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f2ace jmp 0x104f2b87 */
  goto L_104f2b87;
L_104f2ad3:;
  /* 104f2ad3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f2ad6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 104f2ad9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 104f2adf and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 104f2ae5 mov eax, dword ptr [0x1050dc98] */
  EAX = (r32((uint32_t)(0x1050dc98)));
  /* 104f2aea xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104f2aec mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 104f2af0 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 104f2af6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104f2af8 je 0x104f2b1c */
  if (C.zf) goto L_104f2b1c;
  /* 104f2afa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f2afd sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 104f2b00 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 104f2b06 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 104f2b09 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 104f2b0c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 104f2b0f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 104f2b13 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 104f2b1a jmp 0x104f2b2d */
  goto L_104f2b2d;
L_104f2b1c:;
  /* 104f2b1c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 104f2b1f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 104f2b22 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 104f2b26 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_104f2b2d:;
  /* 104f2b2d push 1 */
  push32((uint32_t)(0x1u));
  /* 104f2b2f push 0 */
  push32((uint32_t)(0x0u));
  /* 104f2b31 push 3 */
  push32((uint32_t)(0x3u));
  /* 104f2b33 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 104f2b36 push edx */
  push32((uint32_t)(EDX));
  /* 104f2b37 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f2b3a push eax */
  push32((uint32_t)(EAX));
  /* 104f2b3b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 104f2b3e push ecx */
  push32((uint32_t)(ECX));
  /* 104f2b3f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 104f2b44 mov edx, dword ptr [0x1050f6c0] */
  EDX = (r32((uint32_t)(0x1050f6c0)));
  /* 104f2b4a push edx */
  push32((uint32_t)(EDX));
  /* 104f2b4b call 0x104eb610 */
  push32(0x104f2b50u); f_104eb610();
  /* 104f2b50 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f2b53 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104f2b56 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2b5a jne 0x104f2b61 */
  if (!C.zf) goto L_104f2b61;
  /* 104f2b5c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f2b5f jmp 0x104f2b87 */
  goto L_104f2b87;
L_104f2b61:;
  /* 104f2b61 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2b65 jne 0x104f2b71 */
  if (!C.zf) goto L_104f2b71;
  /* 104f2b67 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f2b6a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104f2b6f jmp 0x104f2b87 */
  goto L_104f2b87;
L_104f2b71:;
  /* 104f2b71 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f2b74 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104f2b79 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 104f2b7c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 104f2b82 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 104f2b85 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_104f2b87:;
  /* 104f2b87 mov esp, ebp */
  ESP = (EBP);
  /* 104f2b89 pop ebp */
  EBP = (pop32());
  /* 104f2b8a ret  */
  ESPCHK(0x104f2a60u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x104f2b90 (52 bytes, 19 insns) */
void f_104f2b90(void) {
  FTRACE(0x104f2b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104f2b90 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 104f2b94 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 104f2b98 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104f2b9a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 104f2b9e jne 0x104f2ba9 */
  if (!C.zf) goto L_104f2ba9;
  /* 104f2ba0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 104f2ba4 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 104f2ba6 ret 0x10 */
  ESPCHK(0x104f2b90u, _esp0);
  ESP += 20; return;
L_104f2ba9:;
  /* 104f2ba9 push ebx */
  push32((uint32_t)(EBX));
  /* 104f2baa mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 104f2bac mov ebx, eax */
  EBX = (EAX);
  /* 104f2bae mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 104f2bb2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 104f2bb6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f2bb8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 104f2bbc mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 104f2bbe add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f2bc0 pop ebx */
  EBX = (pop32());
  /* 104f2bc1 ret 0x10 */
  ESPCHK(0x104f2b90u, _esp0);
  ESP += 20; return;
}

/* FUN_10012bd0 @ 0x104f2bd0 (46 bytes, 18 insns) */
void f_104f2bd0(void) {
  FTRACE(0x104f2bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104f2bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 104f2bd1 mov ebp, esp */
  EBP = (ESP);
  /* 104f2bd3 push ecx */
  push32((uint32_t)(ECX));
  /* 104f2bd4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 104f2bd6 call 0x104e6c20 */
  push32(0x104f2bdbu); f_104e6c20();
  /* 104f2bdb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f2bde mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f2be1 push eax */
  push32((uint32_t)(EAX));
  /* 104f2be2 call 0x104f2c00 */
  push32(0x104f2be7u); f_104f2c00();
  /* 104f2be7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f2bea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104f2bed push 0xc */
  push32((uint32_t)(0xcu));
  /* 104f2bef call 0x104e6cc0 */
  push32(0x104f2bf4u); f_104e6cc0();
  /* 104f2bf4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f2bf7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f2bfa mov esp, ebp */
  ESP = (EBP);
  /* 104f2bfc pop ebp */
  EBP = (pop32());
  /* 104f2bfd ret  */
  ESPCHK(0x104f2bd0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x104f2c00 (198 bytes, 69 insns) */
void f_104f2c00(void) {
  FTRACE(0x104f2c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104f2c00 push ebp */
  push32((uint32_t)(EBP));
  /* 104f2c01 mov ebp, esp */
  EBP = (ESP);
  /* 104f2c03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f2c06 mov eax, dword ptr [0x1050f4dc] */
  EAX = (r32((uint32_t)(0x1050f4dc)));
  /* 104f2c0b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104f2c0e cmp dword ptr [0x10510fe0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10510fe0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2c15 jne 0x104f2c1e */
  if (!C.zf) goto L_104f2c1e;
  /* 104f2c17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f2c19 jmp 0x104f2cc2 */
  goto L_104f2cc2;
L_104f2c1e:;
  /* 104f2c1e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2c22 jne 0x104f2c46 */
  if (!C.zf) goto L_104f2c46;
  /* 104f2c24 cmp dword ptr [0x1050f4e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f4e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2c2b je 0x104f2c46 */
  if (C.zf) goto L_104f2c46;
  /* 104f2c2d call 0x104f2d20 */
  push32(0x104f2c32u); f_104f2d20();
  /* 104f2c32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104f2c34 je 0x104f2c3d */
  if (C.zf) goto L_104f2c3d;
  /* 104f2c36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f2c38 jmp 0x104f2cc2 */
  goto L_104f2cc2;
L_104f2c3d:;
  /* 104f2c3d mov ecx, dword ptr [0x1050f4dc] */
  ECX = (r32((uint32_t)(0x1050f4dc)));
  /* 104f2c43 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_104f2c46:;
  /* 104f2c46 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2c4a je 0x104f2cc0 */
  if (C.zf) goto L_104f2cc0;
  /* 104f2c4c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2c50 je 0x104f2cc0 */
  if (C.zf) goto L_104f2cc0;
  /* 104f2c52 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f2c55 push edx */
  push32((uint32_t)(EDX));
  /* 104f2c56 call 0x104e6050 */
  push32(0x104f2c5bu); f_104e6050();
  /* 104f2c5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f2c5e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104f2c61:;
  /* 104f2c61 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104f2c64 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2c67 je 0x104f2cc0 */
  if (C.zf) goto L_104f2cc0;
  /* 104f2c69 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104f2c6c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104f2c6e push edx */
  push32((uint32_t)(EDX));
  /* 104f2c6f call 0x104e6050 */
  push32(0x104f2c74u); f_104e6050();
  /* 104f2c74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f2c77 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2c7a jbe 0x104f2cb5 */
  if ((C.cf||C.zf)) goto L_104f2cb5;
  /* 104f2c7c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104f2c7f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104f2c81 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f2c84 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 104f2c88 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2c8b jne 0x104f2cb5 */
  if (!C.zf) goto L_104f2cb5;
  /* 104f2c8d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f2c90 push ecx */
  push32((uint32_t)(ECX));
  /* 104f2c91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f2c94 push edx */
  push32((uint32_t)(EDX));
  /* 104f2c95 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104f2c98 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104f2c9a push ecx */
  push32((uint32_t)(ECX));
  /* 104f2c9b call 0x104f2cd0 */
  push32(0x104f2ca0u); f_104f2cd0();
  /* 104f2ca0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f2ca3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104f2ca5 jne 0x104f2cb5 */
  if (!C.zf) goto L_104f2cb5;
  /* 104f2ca7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104f2caa mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104f2cac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f2caf lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 104f2cb3 jmp 0x104f2cc2 */
  goto L_104f2cc2;
L_104f2cb5:;
  /* 104f2cb5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104f2cb8 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f2cbb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 104f2cbe jmp 0x104f2c61 */
  goto L_104f2c61;
L_104f2cc0:;
  /* 104f2cc0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104f2cc2:;
  /* 104f2cc2 mov esp, ebp */
  ESP = (EBP);
  /* 104f2cc4 pop ebp */
  EBP = (pop32());
  /* 104f2cc5 ret  */
  ESPCHK(0x104f2c00u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x104f2cd0 (79 bytes, 32 insns) */
void f_104f2cd0(void) {
  FTRACE(0x104f2cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104f2cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 104f2cd1 mov ebp, esp */
  EBP = (ESP);
  /* 104f2cd3 push ecx */
  push32((uint32_t)(ECX));
  /* 104f2cd4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2cd8 jne 0x104f2cde */
  if (!C.zf) goto L_104f2cde;
  /* 104f2cda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f2cdc jmp 0x104f2d1b */
  goto L_104f2d1b;
L_104f2cde:;
  /* 104f2cde mov eax, dword ptr [0x10510ba4] */
  EAX = (r32((uint32_t)(0x10510ba4)));
  /* 104f2ce3 push eax */
  push32((uint32_t)(EAX));
  /* 104f2ce4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f2ce7 push ecx */
  push32((uint32_t)(ECX));
  /* 104f2ce8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f2ceb push edx */
  push32((uint32_t)(EDX));
  /* 104f2cec mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f2cef push eax */
  push32((uint32_t)(EAX));
  /* 104f2cf0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f2cf3 push ecx */
  push32((uint32_t)(ECX));
  /* 104f2cf4 push 1 */
  push32((uint32_t)(0x1u));
  /* 104f2cf6 mov edx, dword ptr [0x10510e44] */
  EDX = (r32((uint32_t)(0x10510e44)));
  /* 104f2cfc push edx */
  push32((uint32_t)(EDX));
  /* 104f2cfd call 0x104f2dd0 */
  push32(0x104f2d02u); f_104f2dd0();
  /* 104f2d02 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f2d05 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104f2d08 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2d0c jne 0x104f2d15 */
  if (!C.zf) goto L_104f2d15;
  /* 104f2d0e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 104f2d13 jmp 0x104f2d1b */
  goto L_104f2d1b;
L_104f2d15:;
  /* 104f2d15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f2d18 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_104f2d1b:;
  /* 104f2d1b mov esp, ebp */
  ESP = (EBP);
  /* 104f2d1d pop ebp */
  EBP = (pop32());
  /* 104f2d1e ret  */
  ESPCHK(0x104f2cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d20 @ 0x104f2d20 (174 bytes, 66 insns) */
void f_104f2d20(void) {
  FTRACE(0x104f2d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104f2d20 push ebp */
  push32((uint32_t)(EBP));
  /* 104f2d21 mov ebp, esp */
  EBP = (ESP);
  /* 104f2d23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f2d26 mov eax, dword ptr [0x1050f4e4] */
  EAX = (r32((uint32_t)(0x1050f4e4)));
  /* 104f2d2b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104f2d2e:;
  /* 104f2d2e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f2d31 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2d34 je 0x104f2dc8 */
  if (C.zf) goto L_104f2dc8;
  /* 104f2d3a push 0 */
  push32((uint32_t)(0x0u));
  /* 104f2d3c push 0 */
  push32((uint32_t)(0x0u));
  /* 104f2d3e push 0 */
  push32((uint32_t)(0x0u));
  /* 104f2d40 push 0 */
  push32((uint32_t)(0x0u));
  /* 104f2d42 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 104f2d44 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f2d47 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104f2d49 push eax */
  push32((uint32_t)(EAX));
  /* 104f2d4a push 0 */
  push32((uint32_t)(0x0u));
  /* 104f2d4c push 1 */
  push32((uint32_t)(0x1u));
  /* 104f2d4e call dword ptr [0x105122f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122f4))), 0x104f2d54u);
  /* 104f2d54 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104f2d57 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2d5b jne 0x104f2d62 */
  if (!C.zf) goto L_104f2d62;
  /* 104f2d5d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104f2d60 jmp 0x104f2dca */
  goto L_104f2dca;
L_104f2d62:;
  /* 104f2d62 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 104f2d64 push 0x1050b974 */
  push32((uint32_t)(0x1050b974u));
  /* 104f2d69 push 2 */
  push32((uint32_t)(0x2u));
  /* 104f2d6b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f2d6e push ecx */
  push32((uint32_t)(ECX));
  /* 104f2d6f call 0x104e3220 */
  push32(0x104f2d74u); f_104e3220();
  /* 104f2d74 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f2d77 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104f2d7a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2d7e jne 0x104f2d85 */
  if (!C.zf) goto L_104f2d85;
  /* 104f2d80 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104f2d83 jmp 0x104f2dca */
  goto L_104f2dca;
L_104f2d85:;
  /* 104f2d85 push 0 */
  push32((uint32_t)(0x0u));
  /* 104f2d87 push 0 */
  push32((uint32_t)(0x0u));
  /* 104f2d89 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f2d8c push edx */
  push32((uint32_t)(EDX));
  /* 104f2d8d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104f2d90 push eax */
  push32((uint32_t)(EAX));
  /* 104f2d91 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 104f2d93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f2d96 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104f2d98 push edx */
  push32((uint32_t)(EDX));
  /* 104f2d99 push 0 */
  push32((uint32_t)(0x0u));
  /* 104f2d9b push 1 */
  push32((uint32_t)(0x1u));
  /* 104f2d9d call dword ptr [0x105122f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122f4))), 0x104f2da3u);
  /* 104f2da3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104f2da5 jne 0x104f2dac */
  if (!C.zf) goto L_104f2dac;
  /* 104f2da7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104f2daa jmp 0x104f2dca */
  goto L_104f2dca;
L_104f2dac:;
  /* 104f2dac push 0 */
  push32((uint32_t)(0x0u));
  /* 104f2dae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104f2db1 push eax */
  push32((uint32_t)(EAX));
  /* 104f2db2 call 0x104f3220 */
  push32(0x104f2db7u); f_104f3220();
  /* 104f2db7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f2dba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f2dbd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f2dc0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104f2dc3 jmp 0x104f2d2e */
  goto L_104f2d2e;
L_104f2dc8:;
  /* 104f2dc8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104f2dca:;
  /* 104f2dca mov esp, ebp */
  ESP = (EBP);
  /* 104f2dcc pop ebp */
  EBP = (pop32());
  /* 104f2dcd ret  */
  ESPCHK(0x104f2d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10012dd0 @ 0x104f2dd0 (970 bytes, 340 insns) */
void f_104f2dd0(void) {
  FTRACE(0x104f2dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104f2dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 104f2dd1 mov ebp, esp */
  EBP = (ESP);
  /* 104f2dd3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 104f2dd5 push 0x1050b9c8 */
  push32((uint32_t)(0x1050b9c8u));
  /* 104f2dda push 0x104ec328 */
  push32((uint32_t)(0x104ec328u));
  /* 104f2ddf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 104f2de5 push eax */
  push32((uint32_t)(EAX));
  /* 104f2de6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 104f2ded add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f2df0 push ebx */
  push32((uint32_t)(EBX));
  /* 104f2df1 push esi */
  push32((uint32_t)(ESI));
  /* 104f2df2 push edi */
  push32((uint32_t)(EDI));
  /* 104f2df3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 104f2df6 cmp dword ptr [0x1050f824], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f824))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2dfd jne 0x104f2e56 */
  if (!C.zf) goto L_104f2e56;
  /* 104f2dff push 1 */
  push32((uint32_t)(0x1u));
  /* 104f2e01 push 0x1050b024 */
  push32((uint32_t)(0x1050b024u));
  /* 104f2e06 push 1 */
  push32((uint32_t)(0x1u));
  /* 104f2e08 push 0x1050b024 */
  push32((uint32_t)(0x1050b024u));
  /* 104f2e0d push 0 */
  push32((uint32_t)(0x0u));
  /* 104f2e0f push 0 */
  push32((uint32_t)(0x0u));
  /* 104f2e11 call dword ptr [0x10512244] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512244))), 0x104f2e17u);
  /* 104f2e17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104f2e19 je 0x104f2e27 */
  if (C.zf) goto L_104f2e27;
  /* 104f2e1b mov dword ptr [0x1050f824], 1 */
  w32((uint32_t)(0x1050f824), (0x1u));
  /* 104f2e25 jmp 0x104f2e56 */
  goto L_104f2e56;
L_104f2e27:;
  /* 104f2e27 push 1 */
  push32((uint32_t)(0x1u));
  /* 104f2e29 push 0x1050b020 */
  push32((uint32_t)(0x1050b020u));
  /* 104f2e2e push 1 */
  push32((uint32_t)(0x1u));
  /* 104f2e30 push 0x1050b020 */
  push32((uint32_t)(0x1050b020u));
  /* 104f2e35 push 0 */
  push32((uint32_t)(0x0u));
  /* 104f2e37 push 0 */
  push32((uint32_t)(0x0u));
  /* 104f2e39 call dword ptr [0x10512248] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512248))), 0x104f2e3fu);
  /* 104f2e3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104f2e41 je 0x104f2e4f */
  if (C.zf) goto L_104f2e4f;
  /* 104f2e43 mov dword ptr [0x1050f824], 2 */
  w32((uint32_t)(0x1050f824), (0x2u));
  /* 104f2e4d jmp 0x104f2e56 */
  goto L_104f2e56;
L_104f2e4f:;
  /* 104f2e4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f2e51 jmp 0x104f31b4 */
  goto L_104f31b4;
L_104f2e56:;
  /* 104f2e56 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2e5a jle 0x104f2e6f */
  if ((C.zf||C.sf!=C.of)) goto L_104f2e6f;
  /* 104f2e5c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f2e5f push eax */
  push32((uint32_t)(EAX));
  /* 104f2e60 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f2e63 push ecx */
  push32((uint32_t)(ECX));
  /* 104f2e64 call 0x104f31d0 */
  push32(0x104f2e69u); f_104f31d0();
  /* 104f2e69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f2e6c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_104f2e6f:;
  /* 104f2e6f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2e73 jle 0x104f2e88 */
  if ((C.zf||C.sf!=C.of)) goto L_104f2e88;
  /* 104f2e75 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 104f2e78 push edx */
  push32((uint32_t)(EDX));
  /* 104f2e79 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104f2e7c push eax */
  push32((uint32_t)(EAX));
  /* 104f2e7d call 0x104f31d0 */
  push32(0x104f2e82u); f_104f31d0();
  /* 104f2e82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f2e85 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_104f2e88:;
  /* 104f2e88 cmp dword ptr [0x1050f824], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1050f824))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2e8f jne 0x104f2eb4 */
  if (!C.zf) goto L_104f2eb4;
  /* 104f2e91 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 104f2e94 push ecx */
  push32((uint32_t)(ECX));
  /* 104f2e95 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104f2e98 push edx */
  push32((uint32_t)(EDX));
  /* 104f2e99 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f2e9c push eax */
  push32((uint32_t)(EAX));
  /* 104f2e9d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f2ea0 push ecx */
  push32((uint32_t)(ECX));
  /* 104f2ea1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f2ea4 push edx */
  push32((uint32_t)(EDX));
  /* 104f2ea5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f2ea8 push eax */
  push32((uint32_t)(EAX));
  /* 104f2ea9 call dword ptr [0x10512248] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512248))), 0x104f2eafu);
  /* 104f2eaf jmp 0x104f31b4 */
  goto L_104f31b4;
L_104f2eb4:;
  /* 104f2eb4 cmp dword ptr [0x1050f824], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1050f824))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2ebb jne 0x104f31b2 */
  if (!C.zf) goto L_104f31b2;
  /* 104f2ec1 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2ec5 jne 0x104f2ed0 */
  if (!C.zf) goto L_104f2ed0;
  /* 104f2ec7 mov ecx, dword ptr [0x1050f6d0] */
  ECX = (r32((uint32_t)(0x1050f6d0)));
  /* 104f2ecd mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_104f2ed0:;
  /* 104f2ed0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2ed4 je 0x104f2ee0 */
  if (C.zf) goto L_104f2ee0;
  /* 104f2ed6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2eda jne 0x104f305c */
  if (!C.zf) goto L_104f305c;
L_104f2ee0:;
  /* 104f2ee0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f2ee3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2ee6 jne 0x104f2ef2 */
  if (!C.zf) goto L_104f2ef2;
  /* 104f2ee8 mov eax, 2 */
  EAX = (0x2u);
  /* 104f2eed jmp 0x104f31b4 */
  goto L_104f31b4;
L_104f2ef2:;
  /* 104f2ef2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2ef6 jle 0x104f2f02 */
  if ((C.zf||C.sf!=C.of)) goto L_104f2f02;
  /* 104f2ef8 mov eax, 1 */
  EAX = (0x1u);
  /* 104f2efd jmp 0x104f31b4 */
  goto L_104f31b4;
L_104f2f02:;
  /* 104f2f02 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2f06 jle 0x104f2f12 */
  if ((C.zf||C.sf!=C.of)) goto L_104f2f12;
  /* 104f2f08 mov eax, 3 */
  EAX = (0x3u);
  /* 104f2f0d jmp 0x104f31b4 */
  goto L_104f31b4;
L_104f2f12:;
  /* 104f2f12 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 104f2f15 push eax */
  push32((uint32_t)(EAX));
  /* 104f2f16 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 104f2f19 push ecx */
  push32((uint32_t)(ECX));
  /* 104f2f1a call dword ptr [0x10512334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512334))), 0x104f2f20u);
  /* 104f2f20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104f2f22 jne 0x104f2f2b */
  if (!C.zf) goto L_104f2f2b;
  /* 104f2f24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f2f26 jmp 0x104f31b4 */
  goto L_104f31b4;
L_104f2f2b:;
  /* 104f2f2b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2f2f jne 0x104f2f37 */
  if (!C.zf) goto L_104f2f37;
  /* 104f2f31 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2f35 je 0x104f2f64 */
  if (C.zf) goto L_104f2f64;
L_104f2f37:;
  /* 104f2f37 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2f3b jne 0x104f2f43 */
  if (!C.zf) goto L_104f2f43;
  /* 104f2f3d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2f41 je 0x104f2f64 */
  if (C.zf) goto L_104f2f64;
L_104f2f43:;
  /* 104f2f43 push 0x1050b988 */
  push32((uint32_t)(0x1050b988u));
  /* 104f2f48 push 0 */
  push32((uint32_t)(0x0u));
  /* 104f2f4a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 104f2f4f push 0x1050b980 */
  push32((uint32_t)(0x1050b980u));
  /* 104f2f54 push 2 */
  push32((uint32_t)(0x2u));
  /* 104f2f56 call 0x104e22e0 */
  push32(0x104f2f5bu); f_104e22e0();
  /* 104f2f5b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f2f5e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2f61 jne 0x104f2f64 */
  if (!C.zf) goto L_104f2f64;
  /* 104f2f63 int3  */
  x86_unimpl("int3 @ 0x104f2f63");
L_104f2f64:;
  /* 104f2f64 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104f2f66 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104f2f68 jne 0x104f2f2b */
  if (!C.zf) goto L_104f2f2b;
  /* 104f2f6a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2f6e jle 0x104f2fe3 */
  if ((C.zf||C.sf!=C.of)) goto L_104f2fe3;
  /* 104f2f70 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2f74 jae 0x104f2f80 */
  if (!C.cf) goto L_104f2f80;
  /* 104f2f76 mov eax, 3 */
  EAX = (0x3u);
  /* 104f2f7b jmp 0x104f31b4 */
  goto L_104f31b4;
L_104f2f80:;
  /* 104f2f80 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 104f2f83 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 104f2f86 jmp 0x104f2f91 */
  goto L_104f2f91;
L_104f2f88:;
  /* 104f2f88 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 104f2f8b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f2f8e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_104f2f91:;
  /* 104f2f91 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 104f2f94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f2f96 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104f2f98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104f2f9a je 0x104f2fd9 */
  if (C.zf) goto L_104f2fd9;
  /* 104f2f9c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 104f2f9f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104f2fa1 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 104f2fa4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104f2fa6 je 0x104f2fd9 */
  if (C.zf) goto L_104f2fd9;
  /* 104f2fa8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f2fab xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104f2fad mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 104f2faf mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 104f2fb2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f2fb4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104f2fb6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2fb8 jl 0x104f2fd7 */
  if ((C.sf!=C.of)) goto L_104f2fd7;
  /* 104f2fba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f2fbd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104f2fbf mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104f2fc1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 104f2fc4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104f2fc6 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 104f2fc9 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2fcb jg 0x104f2fd7 */
  if ((!C.zf&&C.sf==C.of)) goto L_104f2fd7;
  /* 104f2fcd mov eax, 2 */
  EAX = (0x2u);
  /* 104f2fd2 jmp 0x104f31b4 */
  goto L_104f31b4;
L_104f2fd7:;
  /* 104f2fd7 jmp 0x104f2f88 */
  goto L_104f2f88;
L_104f2fd9:;
  /* 104f2fd9 mov eax, 3 */
  EAX = (0x3u);
  /* 104f2fde jmp 0x104f31b4 */
  goto L_104f31b4;
L_104f2fe3:;
  /* 104f2fe3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2fe7 jle 0x104f305c */
  if ((C.zf||C.sf!=C.of)) goto L_104f305c;
  /* 104f2fe9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f2fed jae 0x104f2ff9 */
  if (!C.cf) goto L_104f2ff9;
  /* 104f2fef mov eax, 1 */
  EAX = (0x1u);
  /* 104f2ff4 jmp 0x104f31b4 */
  goto L_104f31b4;
L_104f2ff9:;
  /* 104f2ff9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 104f2ffc mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 104f2fff jmp 0x104f300a */
  goto L_104f300a;
L_104f3001:;
  /* 104f3001 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 104f3004 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f3007 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_104f300a:;
  /* 104f300a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 104f300d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104f300f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104f3011 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104f3013 je 0x104f3052 */
  if (C.zf) goto L_104f3052;
  /* 104f3015 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 104f3018 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104f301a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 104f301d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104f301f je 0x104f3052 */
  if (C.zf) goto L_104f3052;
  /* 104f3021 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104f3024 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f3026 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104f3028 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 104f302b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104f302d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104f302f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f3031 jl 0x104f3050 */
  if ((C.sf!=C.of)) goto L_104f3050;
  /* 104f3033 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104f3036 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104f3038 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 104f303a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 104f303d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f303f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 104f3042 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f3044 jg 0x104f3050 */
  if ((!C.zf&&C.sf==C.of)) goto L_104f3050;
  /* 104f3046 mov eax, 2 */
  EAX = (0x2u);
  /* 104f304b jmp 0x104f31b4 */
  goto L_104f31b4;
L_104f3050:;
  /* 104f3050 jmp 0x104f3001 */
  goto L_104f3001;
L_104f3052:;
  /* 104f3052 mov eax, 1 */
  EAX = (0x1u);
  /* 104f3057 jmp 0x104f31b4 */
  goto L_104f31b4;
L_104f305c:;
  /* 104f305c push 0 */
  push32((uint32_t)(0x0u));
  /* 104f305e push 0 */
  push32((uint32_t)(0x0u));
  /* 104f3060 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f3063 push ecx */
  push32((uint32_t)(ECX));
  /* 104f3064 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f3067 push edx */
  push32((uint32_t)(EDX));
  /* 104f3068 push 9 */
  push32((uint32_t)(0x9u));
  /* 104f306a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 104f306d push eax */
  push32((uint32_t)(EAX));
  /* 104f306e call dword ptr [0x1051233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1051233c))), 0x104f3074u);
  /* 104f3074 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 104f3077 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f307b jne 0x104f3084 */
  if (!C.zf) goto L_104f3084;
  /* 104f307d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f307f jmp 0x104f31b4 */
  goto L_104f31b4;
L_104f3084:;
  /* 104f3084 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104f308b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104f308e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 104f3090 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f3093 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 104f3095 call 0x104e63c0 */
  push32(0x104f309au); f_104e63c0();
  /* 104f309a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 104f309d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 104f30a0 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 104f30a3 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 104f30a6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 104f30ad jmp 0x104f30c6 */
  goto L_104f30c6;
  /* 104f30af mov eax, 1 */
  EAX = (0x1u);
  /* 104f30b4 ret  */
  ESPCHK(0x104f2dd0u, _esp0);
  ESP += 4; return;
  /* 104f30b5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 104f30b8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 104f30bf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_104f30c6:;
  /* 104f30c6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f30ca jne 0x104f30d3 */
  if (!C.zf) goto L_104f30d3;
  /* 104f30cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f30ce jmp 0x104f31b4 */
  goto L_104f31b4;
L_104f30d3:;
  /* 104f30d3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104f30d6 push edx */
  push32((uint32_t)(EDX));
  /* 104f30d7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104f30da push eax */
  push32((uint32_t)(EAX));
  /* 104f30db mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104f30de push ecx */
  push32((uint32_t)(ECX));
  /* 104f30df mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104f30e2 push edx */
  push32((uint32_t)(EDX));
  /* 104f30e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 104f30e5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 104f30e8 push eax */
  push32((uint32_t)(EAX));
  /* 104f30e9 call dword ptr [0x1051233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1051233c))), 0x104f30efu);
  /* 104f30ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104f30f1 jne 0x104f30fa */
  if (!C.zf) goto L_104f30fa;
  /* 104f30f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f30f5 jmp 0x104f31b4 */
  goto L_104f31b4;
L_104f30fa:;
  /* 104f30fa push 0 */
  push32((uint32_t)(0x0u));
  /* 104f30fc push 0 */
  push32((uint32_t)(0x0u));
  /* 104f30fe mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 104f3101 push ecx */
  push32((uint32_t)(ECX));
  /* 104f3102 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104f3105 push edx */
  push32((uint32_t)(EDX));
  /* 104f3106 push 9 */
  push32((uint32_t)(0x9u));
  /* 104f3108 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 104f310b push eax */
  push32((uint32_t)(EAX));
  /* 104f310c call dword ptr [0x1051233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1051233c))), 0x104f3112u);
  /* 104f3112 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 104f3115 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f3119 jne 0x104f3122 */
  if (!C.zf) goto L_104f3122;
  /* 104f311b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f311d jmp 0x104f31b4 */
  goto L_104f31b4;
L_104f3122:;
  /* 104f3122 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 104f3129 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 104f312c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 104f312e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f3131 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 104f3133 call 0x104e63c0 */
  push32(0x104f3138u); f_104e63c0();
  /* 104f3138 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 104f313b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 104f313e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 104f3141 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 104f3144 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 104f314b jmp 0x104f3164 */
  goto L_104f3164;
  /* 104f314d mov eax, 1 */
  EAX = (0x1u);
  /* 104f3152 ret  */
  ESPCHK(0x104f2dd0u, _esp0);
  ESP += 4; return;
  /* 104f3153 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 104f3156 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 104f315d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_104f3164:;
  /* 104f3164 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f3168 jne 0x104f316e */
  if (!C.zf) goto L_104f316e;
  /* 104f316a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f316c jmp 0x104f31b4 */
  goto L_104f31b4;
L_104f316e:;
  /* 104f316e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 104f3171 push edx */
  push32((uint32_t)(EDX));
  /* 104f3172 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 104f3175 push eax */
  push32((uint32_t)(EAX));
  /* 104f3176 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 104f3179 push ecx */
  push32((uint32_t)(ECX));
  /* 104f317a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104f317d push edx */
  push32((uint32_t)(EDX));
  /* 104f317e push 1 */
  push32((uint32_t)(0x1u));
  /* 104f3180 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 104f3183 push eax */
  push32((uint32_t)(EAX));
  /* 104f3184 call dword ptr [0x1051233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1051233c))), 0x104f318au);
  /* 104f318a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104f318c jne 0x104f3192 */
  if (!C.zf) goto L_104f3192;
  /* 104f318e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f3190 jmp 0x104f31b4 */
  goto L_104f31b4;
L_104f3192:;
  /* 104f3192 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104f3195 push ecx */
  push32((uint32_t)(ECX));
  /* 104f3196 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 104f3199 push edx */
  push32((uint32_t)(EDX));
  /* 104f319a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104f319d push eax */
  push32((uint32_t)(EAX));
  /* 104f319e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104f31a1 push ecx */
  push32((uint32_t)(ECX));
  /* 104f31a2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f31a5 push edx */
  push32((uint32_t)(EDX));
  /* 104f31a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f31a9 push eax */
  push32((uint32_t)(EAX));
  /* 104f31aa call dword ptr [0x10512244] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512244))), 0x104f31b0u);
  /* 104f31b0 jmp 0x104f31b4 */
  goto L_104f31b4;
L_104f31b2:;
  /* 104f31b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104f31b4:;
  /* 104f31b4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 104f31b7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104f31ba mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 104f31c1 pop edi */
  EDI = (pop32());
  /* 104f31c2 pop esi */
  ESI = (pop32());
  /* 104f31c3 pop ebx */
  EBX = (pop32());
  /* 104f31c4 mov esp, ebp */
  ESP = (EBP);
  /* 104f31c6 pop ebp */
  EBP = (pop32());
  /* 104f31c7 ret  */
  ESPCHK(0x104f2dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_100131d0 @ 0x104f31d0 (80 bytes, 32 insns) */
void f_104f31d0(void) {
  FTRACE(0x104f31d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104f31d0 push ebp */
  push32((uint32_t)(EBP));
  /* 104f31d1 mov ebp, esp */
  EBP = (ESP);
  /* 104f31d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f31d6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f31d9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104f31dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f31df mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_104f31e2:;
  /* 104f31e2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104f31e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104f31e8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f31eb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104f31ee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104f31f0 je 0x104f3207 */
  if (C.zf) goto L_104f3207;
  /* 104f31f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f31f5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104f31f8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104f31fa je 0x104f3207 */
  if (C.zf) goto L_104f3207;
  /* 104f31fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f31ff add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f3202 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104f3205 jmp 0x104f31e2 */
  goto L_104f31e2;
L_104f3207:;
  /* 104f3207 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f320a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104f320d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104f320f jne 0x104f3219 */
  if (!C.zf) goto L_104f3219;
  /* 104f3211 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f3214 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f3217 jmp 0x104f321c */
  goto L_104f321c;
L_104f3219:;
  /* 104f3219 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_104f321c:;
  /* 104f321c mov esp, ebp */
  ESP = (EBP);
  /* 104f321e pop ebp */
  EBP = (pop32());
  /* 104f321f ret  */
  ESPCHK(0x104f31d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013220 @ 0x104f3220 (736 bytes, 224 insns) */
void f_104f3220(void) {
  FTRACE(0x104f3220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104f3220 push ebp */
  push32((uint32_t)(EBP));
  /* 104f3221 mov ebp, esp */
  EBP = (ESP);
  /* 104f3223 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f3226 push esi */
  push32((uint32_t)(ESI));
  /* 104f3227 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f322b je 0x104f324c */
  if (C.zf) goto L_104f324c;
  /* 104f322d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 104f322f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f3232 push eax */
  push32((uint32_t)(EAX));
  /* 104f3233 call 0x104f3670 */
  push32(0x104f3238u); f_104f3670();
  /* 104f3238 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f323b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 104f323e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f3242 je 0x104f324c */
  if (C.zf) goto L_104f324c;
  /* 104f3244 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f3247 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f324a jne 0x104f3254 */
  if (!C.zf) goto L_104f3254;
L_104f324c:;
  /* 104f324c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104f324f jmp 0x104f34fb */
  goto L_104f34fb;
L_104f3254:;
  /* 104f3254 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104f3257 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 104f325b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 104f325d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f325f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 104f3260 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 104f3263 mov ecx, dword ptr [0x1050f4dc] */
  ECX = (r32((uint32_t)(0x1050f4dc)));
  /* 104f3269 cmp ecx, dword ptr [0x1050f4e0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1050f4e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f326f jne 0x104f3285 */
  if (!C.zf) goto L_104f3285;
  /* 104f3271 mov edx, dword ptr [0x1050f4dc] */
  EDX = (r32((uint32_t)(0x1050f4dc)));
  /* 104f3277 push edx */
  push32((uint32_t)(EDX));
  /* 104f3278 call 0x104f3580 */
  push32(0x104f327du); f_104f3580();
  /* 104f327d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f3280 mov dword ptr [0x1050f4dc], eax */
  w32((uint32_t)(0x1050f4dc), (EAX));
L_104f3285:;
  /* 104f3285 cmp dword ptr [0x1050f4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f328c jne 0x104f3345 */
  if (!C.zf) goto L_104f3345;
  /* 104f3292 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f3296 je 0x104f32b7 */
  if (C.zf) goto L_104f32b7;
  /* 104f3298 cmp dword ptr [0x1050f4e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f4e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f329f je 0x104f32b7 */
  if (C.zf) goto L_104f32b7;
  /* 104f32a1 call 0x104f2d20 */
  push32(0x104f32a6u); f_104f2d20();
  /* 104f32a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104f32a8 je 0x104f32b2 */
  if (C.zf) goto L_104f32b2;
  /* 104f32aa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104f32ad jmp 0x104f34fb */
  goto L_104f34fb;
L_104f32b2:;
  /* 104f32b2 jmp 0x104f3345 */
  goto L_104f3345;
L_104f32b7:;
  /* 104f32b7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f32bb je 0x104f32c4 */
  if (C.zf) goto L_104f32c4;
  /* 104f32bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f32bf jmp 0x104f34fb */
  goto L_104f34fb;
L_104f32c4:;
  /* 104f32c4 cmp dword ptr [0x1050f4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f32cb jne 0x104f3304 */
  if (!C.zf) goto L_104f3304;
  /* 104f32cd push 0x87 */
  push32((uint32_t)(0x87u));
  /* 104f32d2 push 0x1050b9e0 */
  push32((uint32_t)(0x1050b9e0u));
  /* 104f32d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 104f32d9 push 4 */
  push32((uint32_t)(0x4u));
  /* 104f32db call 0x104e3220 */
  push32(0x104f32e0u); f_104e3220();
  /* 104f32e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f32e3 mov dword ptr [0x1050f4dc], eax */
  w32((uint32_t)(0x1050f4dc), (EAX));
  /* 104f32e8 cmp dword ptr [0x1050f4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f32ef jne 0x104f32f9 */
  if (!C.zf) goto L_104f32f9;
  /* 104f32f1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104f32f4 jmp 0x104f34fb */
  goto L_104f34fb;
L_104f32f9:;
  /* 104f32f9 mov eax, dword ptr [0x1050f4dc] */
  EAX = (r32((uint32_t)(0x1050f4dc)));
  /* 104f32fe mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_104f3304:;
  /* 104f3304 cmp dword ptr [0x1050f4e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f4e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f330b jne 0x104f3345 */
  if (!C.zf) goto L_104f3345;
  /* 104f330d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 104f3312 push 0x1050b9e0 */
  push32((uint32_t)(0x1050b9e0u));
  /* 104f3317 push 2 */
  push32((uint32_t)(0x2u));
  /* 104f3319 push 4 */
  push32((uint32_t)(0x4u));
  /* 104f331b call 0x104e3220 */
  push32(0x104f3320u); f_104e3220();
  /* 104f3320 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f3323 mov dword ptr [0x1050f4e4], eax */
  w32((uint32_t)(0x1050f4e4), (EAX));
  /* 104f3328 cmp dword ptr [0x1050f4e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f4e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f332f jne 0x104f3339 */
  if (!C.zf) goto L_104f3339;
  /* 104f3331 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104f3334 jmp 0x104f34fb */
  goto L_104f34fb;
L_104f3339:;
  /* 104f3339 mov ecx, dword ptr [0x1050f4e4] */
  ECX = (r32((uint32_t)(0x1050f4e4)));
  /* 104f333f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_104f3345:;
  /* 104f3345 mov edx, dword ptr [0x1050f4dc] */
  EDX = (r32((uint32_t)(0x1050f4dc)));
  /* 104f334b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 104f334e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104f3351 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f3354 push eax */
  push32((uint32_t)(EAX));
  /* 104f3355 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f3358 push ecx */
  push32((uint32_t)(ECX));
  /* 104f3359 call 0x104f3500 */
  push32(0x104f335eu); f_104f3500();
  /* 104f335e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f3361 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104f3364 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f3368 jl 0x104f3401 */
  if ((C.sf!=C.of)) goto L_104f3401;
  /* 104f336e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f3371 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f3374 je 0x104f3401 */
  if (C.zf) goto L_104f3401;
  /* 104f337a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f337e je 0x104f33f3 */
  if (C.zf) goto L_104f33f3;
  /* 104f3380 push 2 */
  push32((uint32_t)(0x2u));
  /* 104f3382 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104f3385 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f3388 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 104f338b push edx */
  push32((uint32_t)(EDX));
  /* 104f338c call 0x104e3cb0 */
  push32(0x104f3391u); f_104e3cb0();
  /* 104f3391 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f3394 jmp 0x104f339f */
  goto L_104f339f;
L_104f3396:;
  /* 104f3396 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104f3399 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f339c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_104f339f:;
  /* 104f339f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104f33a2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f33a5 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f33a9 je 0x104f33c0 */
  if (C.zf) goto L_104f33c0;
  /* 104f33ab mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104f33ae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f33b1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104f33b4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 104f33b7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 104f33bb mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 104f33be jmp 0x104f3396 */
  goto L_104f3396;
L_104f33c0:;
  /* 104f33c0 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 104f33c5 push 0x1050b9e0 */
  push32((uint32_t)(0x1050b9e0u));
  /* 104f33ca push 2 */
  push32((uint32_t)(0x2u));
  /* 104f33cc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104f33cf shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 104f33d2 push eax */
  push32((uint32_t)(EAX));
  /* 104f33d3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f33d6 push ecx */
  push32((uint32_t)(ECX));
  /* 104f33d7 call 0x104e36b0 */
  push32(0x104f33dcu); f_104e36b0();
  /* 104f33dc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f33df mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104f33e2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f33e6 je 0x104f33f1 */
  if (C.zf) goto L_104f33f1;
  /* 104f33e8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f33eb mov dword ptr [0x1050f4dc], edx */
  w32((uint32_t)(0x1050f4dc), (EDX));
L_104f33f1:;
  /* 104f33f1 jmp 0x104f33ff */
  goto L_104f33ff;
L_104f33f3:;
  /* 104f33f3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104f33f6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f33f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f33fc mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_104f33ff:;
  /* 104f33ff jmp 0x104f3474 */
  goto L_104f3474;
L_104f3401:;
  /* 104f3401 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f3405 jne 0x104f346d */
  if (!C.zf) goto L_104f346d;
  /* 104f3407 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f340b jge 0x104f3415 */
  if ((C.sf==C.of)) goto L_104f3415;
  /* 104f340d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104f3410 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 104f3412 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_104f3415:;
  /* 104f3415 push 0xce */
  push32((uint32_t)(0xceu));
  /* 104f341a push 0x1050b9e0 */
  push32((uint32_t)(0x1050b9e0u));
  /* 104f341f push 2 */
  push32((uint32_t)(0x2u));
  /* 104f3421 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104f3424 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 104f342b push edx */
  push32((uint32_t)(EDX));
  /* 104f342c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f342f push eax */
  push32((uint32_t)(EAX));
  /* 104f3430 call 0x104e36b0 */
  push32(0x104f3435u); f_104e36b0();
  /* 104f3435 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f3438 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104f343b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f343f jne 0x104f3449 */
  if (!C.zf) goto L_104f3449;
  /* 104f3441 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104f3444 jmp 0x104f34fb */
  goto L_104f34fb;
L_104f3449:;
  /* 104f3449 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104f344c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f344f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f3452 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 104f3455 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104f3458 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f345b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 104f3463 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f3466 mov dword ptr [0x1050f4dc], eax */
  w32((uint32_t)(0x1050f4dc), (EAX));
  /* 104f346b jmp 0x104f3474 */
  goto L_104f3474;
L_104f346d:;
  /* 104f346d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f346f jmp 0x104f34fb */
  goto L_104f34fb;
L_104f3474:;
  /* 104f3474 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f3478 je 0x104f34f9 */
  if (C.zf) goto L_104f34f9;
  /* 104f347a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 104f347f push 0x1050b9e0 */
  push32((uint32_t)(0x1050b9e0u));
  /* 104f3484 push 2 */
  push32((uint32_t)(0x2u));
  /* 104f3486 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f3489 push ecx */
  push32((uint32_t)(ECX));
  /* 104f348a call 0x104e6050 */
  push32(0x104f348fu); f_104e6050();
  /* 104f348f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f3492 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f3495 push eax */
  push32((uint32_t)(EAX));
  /* 104f3496 call 0x104e3220 */
  push32(0x104f349bu); f_104e3220();
  /* 104f349b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f349e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 104f34a1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f34a5 je 0x104f34f9 */
  if (C.zf) goto L_104f34f9;
  /* 104f34a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f34aa push edx */
  push32((uint32_t)(EDX));
  /* 104f34ab mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104f34ae push eax */
  push32((uint32_t)(EAX));
  /* 104f34af call 0x104e61d0 */
  push32(0x104f34b4u); f_104e61d0();
  /* 104f34b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f34b7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104f34ba sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f34bd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104f34c0 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f34c2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104f34c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f34c8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 104f34cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f34ce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f34d1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104f34d4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104f34d7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 104f34d9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f34db not edx */
  EDX = (~(EDX));
  /* 104f34dd and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 104f34e0 push edx */
  push32((uint32_t)(EDX));
  /* 104f34e1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104f34e4 push eax */
  push32((uint32_t)(EAX));
  /* 104f34e5 call dword ptr [0x10512240] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512240))), 0x104f34ebu);
  /* 104f34eb push 2 */
  push32((uint32_t)(0x2u));
  /* 104f34ed mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104f34f0 push ecx */
  push32((uint32_t)(ECX));
  /* 104f34f1 call 0x104e3cb0 */
  push32(0x104f34f6u); f_104e3cb0();
  /* 104f34f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104f34f9:;
  /* 104f34f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104f34fb:;
  /* 104f34fb pop esi */
  ESI = (pop32());
  /* 104f34fc mov esp, ebp */
  ESP = (EBP);
  /* 104f34fe pop ebp */
  EBP = (pop32());
  /* 104f34ff ret  */
  ESPCHK(0x104f3220u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x104f3500 (124 bytes, 47 insns) */
void f_104f3500(void) {
  FTRACE(0x104f3500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104f3500 push ebp */
  push32((uint32_t)(EBP));
  /* 104f3501 mov ebp, esp */
  EBP = (ESP);
  /* 104f3503 push ecx */
  push32((uint32_t)(ECX));
  /* 104f3504 mov eax, dword ptr [0x1050f4dc] */
  EAX = (r32((uint32_t)(0x1050f4dc)));
  /* 104f3509 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104f350c jmp 0x104f3517 */
  goto L_104f3517;
L_104f350e:;
  /* 104f350e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f3511 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f3514 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_104f3517:;
  /* 104f3517 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f351a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f351d je 0x104f356a */
  if (C.zf) goto L_104f356a;
  /* 104f351f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f3522 push eax */
  push32((uint32_t)(EAX));
  /* 104f3523 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f3526 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104f3528 push edx */
  push32((uint32_t)(EDX));
  /* 104f3529 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f352c push eax */
  push32((uint32_t)(EAX));
  /* 104f352d call 0x104f2cd0 */
  push32(0x104f3532u); f_104f2cd0();
  /* 104f3532 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f3535 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104f3537 jne 0x104f3568 */
  if (!C.zf) goto L_104f3568;
  /* 104f3539 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f353c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104f353e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f3541 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 104f3545 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f3548 je 0x104f355a */
  if (C.zf) goto L_104f355a;
  /* 104f354a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f354d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104f354f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f3552 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 104f3556 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104f3558 jne 0x104f3568 */
  if (!C.zf) goto L_104f3568;
L_104f355a:;
  /* 104f355a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f355d sub eax, dword ptr [0x1050f4dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1050f4dc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f3563 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 104f3566 jmp 0x104f3578 */
  goto L_104f3578;
L_104f3568:;
  /* 104f3568 jmp 0x104f350e */
  goto L_104f350e;
L_104f356a:;
  /* 104f356a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f356d sub eax, dword ptr [0x1050f4dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1050f4dc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f3573 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 104f3576 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_104f3578:;
  /* 104f3578 mov esp, ebp */
  ESP = (EBP);
  /* 104f357a pop ebp */
  EBP = (pop32());
  /* 104f357b ret  */
  ESPCHK(0x104f3500u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x104f3580 (238 bytes, 80 insns) */
void f_104f3580(void) {
  FTRACE(0x104f3580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104f3580 push ebp */
  push32((uint32_t)(EBP));
  /* 104f3581 mov ebp, esp */
  EBP = (ESP);
  /* 104f3583 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f3586 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 104f358d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f3590 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104f3593 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f3597 jne 0x104f35a0 */
  if (!C.zf) goto L_104f35a0;
  /* 104f3599 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f359b jmp 0x104f366a */
  goto L_104f366a;
L_104f35a0:;
  /* 104f35a0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f35a3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104f35a5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f35a8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f35ab mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104f35ae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104f35b0 je 0x104f35bd */
  if (C.zf) goto L_104f35bd;
  /* 104f35b2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104f35b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f35b8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 104f35bb jmp 0x104f35a0 */
  goto L_104f35a0;
L_104f35bd:;
  /* 104f35bd push 0x146 */
  push32((uint32_t)(0x146u));
  /* 104f35c2 push 0x1050b9e0 */
  push32((uint32_t)(0x1050b9e0u));
  /* 104f35c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 104f35c9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104f35cc lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 104f35d3 push eax */
  push32((uint32_t)(EAX));
  /* 104f35d4 call 0x104e3220 */
  push32(0x104f35d9u); f_104e3220();
  /* 104f35d9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f35dc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104f35df mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104f35e2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104f35e5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f35e9 jne 0x104f35f5 */
  if (!C.zf) goto L_104f35f5;
  /* 104f35eb push 9 */
  push32((uint32_t)(0x9u));
  /* 104f35ed call 0x104e2190 */
  push32(0x104f35f2u); f_104e2190();
  /* 104f35f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104f35f5:;
  /* 104f35f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f35f8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_104f35fb:;
  /* 104f35fb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f35fe cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f3601 je 0x104f365e */
  if (C.zf) goto L_104f365e;
  /* 104f3603 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 104f3608 push 0x1050b9e0 */
  push32((uint32_t)(0x1050b9e0u));
  /* 104f360d push 2 */
  push32((uint32_t)(0x2u));
  /* 104f360f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f3612 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104f3614 push edx */
  push32((uint32_t)(EDX));
  /* 104f3615 call 0x104e6050 */
  push32(0x104f361au); f_104e6050();
  /* 104f361a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f361d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f3620 push eax */
  push32((uint32_t)(EAX));
  /* 104f3621 call 0x104e3220 */
  push32(0x104f3626u); f_104e3220();
  /* 104f3626 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f3629 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104f362c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 104f362e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104f3631 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f3634 je 0x104f364a */
  if (C.zf) goto L_104f364a;
  /* 104f3636 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f3639 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104f363b push ecx */
  push32((uint32_t)(ECX));
  /* 104f363c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104f363f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104f3641 push eax */
  push32((uint32_t)(EAX));
  /* 104f3642 call 0x104e61d0 */
  push32(0x104f3647u); f_104e61d0();
  /* 104f3647 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104f364a:;
  /* 104f364a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104f364d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f3650 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104f3653 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104f3656 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f3659 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 104f365c jmp 0x104f35fb */
  goto L_104f35fb;
L_104f365e:;
  /* 104f365e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104f3661 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 104f3667 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_104f366a:;
  /* 104f366a mov esp, ebp */
  ESP = (EBP);
  /* 104f366c pop ebp */
  EBP = (pop32());
  /* 104f366d ret  */
  ESPCHK(0x104f3580u, _esp0);
  ESP += 4; return;
}

/* FUN_10013670 @ 0x104f3670 (237 bytes, 81 insns) */
void f_104f3670(void) {
  FTRACE(0x104f3670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104f3670 push ebp */
  push32((uint32_t)(EBP));
  /* 104f3671 mov ebp, esp */
  EBP = (ESP);
  /* 104f3673 push ecx */
  push32((uint32_t)(ECX));
  /* 104f3674 cmp dword ptr [0x10510c2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10510c2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f367b jne 0x104f3692 */
  if (!C.zf) goto L_104f3692;
  /* 104f367d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104f3680 push eax */
  push32((uint32_t)(EAX));
  /* 104f3681 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f3684 push ecx */
  push32((uint32_t)(ECX));
  /* 104f3685 call 0x104f3770 */
  push32(0x104f368au); f_104f3770();
  /* 104f368a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f368d jmp 0x104f3759 */
  goto L_104f3759;
L_104f3692:;
  /* 104f3692 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 104f3694 call 0x104e6c20 */
  push32(0x104f3699u); f_104e6c20();
  /* 104f3699 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f369c jmp 0x104f36a7 */
  goto L_104f36a7;
L_104f369e:;
  /* 104f369e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f36a1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f36a4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_104f36a7:;
  /* 104f36a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f36aa movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 104f36ae mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 104f36b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f36b5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 104f36bb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104f36bd je 0x104f373b */
  if (C.zf) goto L_104f373b;
  /* 104f36bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f36c2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104f36c7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104f36c9 mov cl, byte ptr [eax + 0x10510d41] */
  CL = (r8((uint32_t)(EAX + 0x10510d41)));
  /* 104f36cf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 104f36d2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104f36d4 je 0x104f3726 */
  if (C.zf) goto L_104f3726;
  /* 104f36d6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f36d9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f36dc mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 104f36df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f36e2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104f36e4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 104f36e6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104f36e8 jne 0x104f36f8 */
  if (!C.zf) goto L_104f36f8;
  /* 104f36ea push 0x19 */
  push32((uint32_t)(0x19u));
  /* 104f36ec call 0x104e6cc0 */
  push32(0x104f36f1u); f_104e6cc0();
  /* 104f36f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f36f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f36f6 jmp 0x104f3759 */
  goto L_104f3759;
L_104f36f8:;
  /* 104f36f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f36fb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 104f3701 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 104f3704 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f3707 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104f3709 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 104f370b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 104f370d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f3710 jne 0x104f3724 */
  if (!C.zf) goto L_104f3724;
  /* 104f3712 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 104f3714 call 0x104e6cc0 */
  push32(0x104f3719u); f_104e6cc0();
  /* 104f3719 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f371c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f371f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104f3722 jmp 0x104f3759 */
  goto L_104f3759;
L_104f3724:;
  /* 104f3724 jmp 0x104f3736 */
  goto L_104f3736;
L_104f3726:;
  /* 104f3726 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f3729 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 104f372f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f3732 jne 0x104f3736 */
  if (!C.zf) goto L_104f3736;
  /* 104f3734 jmp 0x104f373b */
  goto L_104f373b;
L_104f3736:;
  /* 104f3736 jmp 0x104f369e */
  goto L_104f369e;
L_104f373b:;
  /* 104f373b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 104f373d call 0x104e6cc0 */
  push32(0x104f3742u); f_104e6cc0();
  /* 104f3742 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104f3745 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104f3748 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104f374d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104f3750 jne 0x104f3757 */
  if (!C.zf) goto L_104f3757;
  /* 104f3752 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104f3755 jmp 0x104f3759 */
  goto L_104f3759;
L_104f3757:;
  /* 104f3757 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104f3759:;
  /* 104f3759 mov esp, ebp */
  ESP = (EBP);
  /* 104f375b pop ebp */
  EBP = (pop32());
  /* 104f375c ret  */
  ESPCHK(0x104f3670u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x104f3770 (193 bytes, 87 insns) */
void f_104f3770(void) {
  FTRACE(0x104f3770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104f3770 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f3772 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 104f3776 push ebx */
  push32((uint32_t)(EBX));
  /* 104f3777 mov ebx, eax */
  EBX = (EAX);
  /* 104f3779 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 104f377c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 104f3780 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 104f3786 je 0x104f379b */
  if (C.zf) goto L_104f379b;
L_104f3788:;
  /* 104f3788 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 104f378a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 104f378b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104f378d je 0x104f3760 */
  if (C.zf) { jmp_ind(0x104f3760u); return; }
  /* 104f378f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 104f3791 je 0x104f37e4 */
  if (C.zf) goto L_104f37e4;
  /* 104f3793 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 104f3799 jne 0x104f3788 */
  if (!C.zf) goto L_104f3788;
L_104f379b:;
  /* 104f379b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 104f379d push edi */
  push32((uint32_t)(EDI));
  /* 104f379e mov eax, ebx */
  EAX = (EBX);
  /* 104f37a0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 104f37a3 push esi */
  push32((uint32_t)(ESI));
  /* 104f37a4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_104f37a6:;
  /* 104f37a6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 104f37a8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 104f37ad mov eax, ecx */
  EAX = (ECX);
  /* 104f37af mov esi, edi */
  ESI = (EDI);
  /* 104f37b1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 104f37b3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 104f37b5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 104f37b7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 104f37ba xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104f37bd xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 104f37bf xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 104f37c1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104f37c4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 104f37ca jne 0x104f37e8 */
  if (!C.zf) goto L_104f37e8;
  /* 104f37cc and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 104f37d1 je 0x104f37a6 */
  if (C.zf) goto L_104f37a6;
  /* 104f37d3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 104f37d8 jne 0x104f37e2 */
  if (!C.zf) goto L_104f37e2;
  /* 104f37da and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 104f37e0 jne 0x104f37a6 */
  if (!C.zf) goto L_104f37a6;
L_104f37e2:;
  /* 104f37e2 pop esi */
  ESI = (pop32());
  /* 104f37e3 pop edi */
  EDI = (pop32());
L_104f37e4:;
  /* 104f37e4 pop ebx */
  EBX = (pop32());
  /* 104f37e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104f37e7 ret  */
  ESPCHK(0x104f3770u, _esp0);
  ESP += 4; return;
L_104f37e8:;
  /* 104f37e8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 104f37eb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104f37ed je 0x104f3825 */
  if (C.zf) goto L_104f3825;
  /* 104f37ef test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 104f37f1 je 0x104f37e2 */
  if (C.zf) goto L_104f37e2;
  /* 104f37f3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104f37f5 je 0x104f381e */
  if (C.zf) goto L_104f381e;
  /* 104f37f7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 104f37f9 je 0x104f37e2 */
  if (C.zf) goto L_104f37e2;
  /* 104f37fb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 104f37fe cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104f3800 je 0x104f3817 */
  if (C.zf) goto L_104f3817;
  /* 104f3802 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 104f3804 je 0x104f37e2 */
  if (C.zf) goto L_104f37e2;
  /* 104f3806 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104f3808 je 0x104f3810 */
  if (C.zf) goto L_104f3810;
  /* 104f380a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 104f380c je 0x104f37e2 */
  if (C.zf) goto L_104f37e2;
  /* 104f380e jmp 0x104f37a6 */
  goto L_104f37a6;
L_104f3810:;
  /* 104f3810 pop esi */
  ESI = (pop32());
  /* 104f3811 pop edi */
  EDI = (pop32());
  /* 104f3812 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 104f3815 pop ebx */
  EBX = (pop32());
  /* 104f3816 ret  */
  ESPCHK(0x104f3770u, _esp0);
  ESP += 4; return;
L_104f3817:;
  /* 104f3817 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 104f381a pop esi */
  ESI = (pop32());
  /* 104f381b pop edi */
  EDI = (pop32());
  /* 104f381c pop ebx */
  EBX = (pop32());
  /* 104f381d ret  */
  ESPCHK(0x104f3770u, _esp0);
  ESP += 4; return;
L_104f381e:;
  /* 104f381e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 104f3821 pop esi */
  ESI = (pop32());
  /* 104f3822 pop edi */
  EDI = (pop32());
  /* 104f3823 pop ebx */
  EBX = (pop32());
  /* 104f3824 ret  */
  ESPCHK(0x104f3770u, _esp0);
  ESP += 4; return;
L_104f3825:;
  /* 104f3825 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 104f3828 pop esi */
  ESI = (pop32());
  /* 104f3829 pop edi */
  EDI = (pop32());
  /* 104f382a pop ebx */
  EBX = (pop32());
  /* 104f382b ret  */
  ESPCHK(0x104f3770u, _esp0);
  ESP += 4; return;
  /* 104f382c jmp dword ptr [0x10512278] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10512278)))); return;
}

/* RtlUnwind @ 0x104f397c (6 bytes, 1 insns) */
void f_104f397c(void) {
  FTRACE(0x104f397cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104f397c jmp dword ptr [0x10512354] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10512354)))); return;
}

