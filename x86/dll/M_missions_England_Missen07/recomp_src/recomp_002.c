#include "recomp.h"

/* FUN_10010960 @ 0x10530960 (289 bytes, 97 insns) */
void f_10530960(void) {
  FTRACE(0x10530960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10530960 push ebp */
  push32((uint32_t)(EBP));
  /* 10530961 mov ebp, esp */
  EBP = (ESP);
  /* 10530963 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10530966 push esi */
  push32((uint32_t)(ESI));
  /* 10530967 mov eax, dword ptr [0x1054ec98] */
  EAX = (r32((uint32_t)(0x1054ec98)));
  /* 1053096c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1053096f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10530976 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1053097d jmp 0x10530988 */
  goto L_10530988;
L_1053097f:;
  /* 1053097f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10530982 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10530985 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10530988:;
  /* 10530988 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1053098c jae 0x105309c1 */
  if (!C.cf) goto L_105309c1;
  /* 1053098e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10530991 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10530994 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10530997 push ecx */
  push32((uint32_t)(ECX));
  /* 10530998 call 0x10526a40 */
  push32(0x1053099du); f_10526a40();
  /* 1053099d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105309a0 mov esi, eax */
  ESI = (EAX);
  /* 105309a2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105309a5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105309a8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 105309ac push ecx */
  push32((uint32_t)(ECX));
  /* 105309ad call 0x10526a40 */
  push32(0x105309b2u); f_10526a40();
  /* 105309b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105309b5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105309b8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 105309bc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 105309bf jmp 0x1053097f */
  goto L_1053097f;
L_105309c1:;
  /* 105309c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105309c4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105309c7 push eax */
  push32((uint32_t)(EAX));
  /* 105309c8 call 0x10523bf0 */
  push32(0x105309cdu); f_10523bf0();
  /* 105309cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105309d0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105309d3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105309d7 je 0x10530a79 */
  if (C.zf) goto L_10530a79;
  /* 105309dd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105309e0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 105309e3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 105309ea jmp 0x105309f5 */
  goto L_105309f5;
L_105309ec:;
  /* 105309ec mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105309ef add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105309f2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_105309f5:;
  /* 105309f5 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105309f9 jae 0x10530a6a */
  if (!C.cf) goto L_10530a6a;
  /* 105309fb mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105309fe mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10530a01 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10530a04 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10530a07 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10530a0a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10530a0d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10530a10 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10530a13 push ecx */
  push32((uint32_t)(ECX));
  /* 10530a14 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10530a17 push edx */
  push32((uint32_t)(EDX));
  /* 10530a18 call 0x10526bc0 */
  push32(0x10530a1du); f_10526bc0();
  /* 10530a1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10530a20 push eax */
  push32((uint32_t)(EAX));
  /* 10530a21 call 0x10526a40 */
  push32(0x10530a26u); f_10526a40();
  /* 10530a26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10530a29 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10530a2c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10530a2e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10530a31 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10530a34 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10530a37 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10530a3a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10530a3d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10530a40 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10530a43 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10530a46 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 10530a4a push eax */
  push32((uint32_t)(EAX));
  /* 10530a4b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10530a4e push ecx */
  push32((uint32_t)(ECX));
  /* 10530a4f call 0x10526bc0 */
  push32(0x10530a54u); f_10526bc0();
  /* 10530a54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10530a57 push eax */
  push32((uint32_t)(EAX));
  /* 10530a58 call 0x10526a40 */
  push32(0x10530a5du); f_10526a40();
  /* 10530a5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10530a60 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10530a63 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10530a65 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10530a68 jmp 0x105309ec */
  goto L_105309ec;
L_10530a6a:;
  /* 10530a6a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10530a6d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10530a70 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10530a73 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10530a76 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10530a79:;
  /* 10530a79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10530a7c pop esi */
  ESI = (pop32());
  /* 10530a7d mov esp, ebp */
  ESP = (EBP);
  /* 10530a7f pop ebp */
  EBP = (pop32());
  /* 10530a80 ret  */
  ESPCHK(0x10530960u, _esp0);
  ESP += 4; return;
}

/* FUN_10010a90 @ 0x10530a90 (291 bytes, 97 insns) */
void f_10530a90(void) {
  FTRACE(0x10530a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10530a90 push ebp */
  push32((uint32_t)(EBP));
  /* 10530a91 mov ebp, esp */
  EBP = (ESP);
  /* 10530a93 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10530a96 push esi */
  push32((uint32_t)(ESI));
  /* 10530a97 mov eax, dword ptr [0x1054ec98] */
  EAX = (r32((uint32_t)(0x1054ec98)));
  /* 10530a9c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10530a9f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10530aa6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10530aad jmp 0x10530ab8 */
  goto L_10530ab8;
L_10530aaf:;
  /* 10530aaf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10530ab2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10530ab5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10530ab8:;
  /* 10530ab8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10530abc jae 0x10530af2 */
  if (!C.cf) goto L_10530af2;
  /* 10530abe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10530ac1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10530ac4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10530ac8 push ecx */
  push32((uint32_t)(ECX));
  /* 10530ac9 call 0x10526a40 */
  push32(0x10530aceu); f_10526a40();
  /* 10530ace add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10530ad1 mov esi, eax */
  ESI = (EAX);
  /* 10530ad3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10530ad6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10530ad9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 10530add push ecx */
  push32((uint32_t)(ECX));
  /* 10530ade call 0x10526a40 */
  push32(0x10530ae3u); f_10526a40();
  /* 10530ae3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10530ae6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10530ae9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10530aed mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10530af0 jmp 0x10530aaf */
  goto L_10530aaf;
L_10530af2:;
  /* 10530af2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10530af5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10530af8 push eax */
  push32((uint32_t)(EAX));
  /* 10530af9 call 0x10523bf0 */
  push32(0x10530afeu); f_10523bf0();
  /* 10530afe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10530b01 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10530b04 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10530b08 je 0x10530bab */
  if (C.zf) goto L_10530bab;
  /* 10530b0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10530b11 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10530b14 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10530b1b jmp 0x10530b26 */
  goto L_10530b26;
L_10530b1d:;
  /* 10530b1d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10530b20 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10530b23 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10530b26:;
  /* 10530b26 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10530b2a jae 0x10530b9c */
  if (!C.cf) goto L_10530b9c;
  /* 10530b2c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10530b2f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10530b32 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10530b35 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10530b38 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10530b3b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10530b3e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10530b41 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10530b45 push ecx */
  push32((uint32_t)(ECX));
  /* 10530b46 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10530b49 push edx */
  push32((uint32_t)(EDX));
  /* 10530b4a call 0x10526bc0 */
  push32(0x10530b4fu); f_10526bc0();
  /* 10530b4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10530b52 push eax */
  push32((uint32_t)(EAX));
  /* 10530b53 call 0x10526a40 */
  push32(0x10530b58u); f_10526a40();
  /* 10530b58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10530b5b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10530b5e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10530b60 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10530b63 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10530b66 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10530b69 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10530b6c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10530b6f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10530b72 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10530b75 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10530b78 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10530b7c push eax */
  push32((uint32_t)(EAX));
  /* 10530b7d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10530b80 push ecx */
  push32((uint32_t)(ECX));
  /* 10530b81 call 0x10526bc0 */
  push32(0x10530b86u); f_10526bc0();
  /* 10530b86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10530b89 push eax */
  push32((uint32_t)(EAX));
  /* 10530b8a call 0x10526a40 */
  push32(0x10530b8fu); f_10526a40();
  /* 10530b8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10530b92 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10530b95 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10530b97 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10530b9a jmp 0x10530b1d */
  goto L_10530b1d;
L_10530b9c:;
  /* 10530b9c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10530b9f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10530ba2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10530ba5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10530ba8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10530bab:;
  /* 10530bab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10530bae pop esi */
  ESI = (pop32());
  /* 10530baf mov esp, ebp */
  ESP = (EBP);
  /* 10530bb1 pop ebp */
  EBP = (pop32());
  /* 10530bb2 ret  */
  ESPCHK(0x10530a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10010bc0 @ 0x10530bc0 (878 bytes, 273 insns) */
void f_10530bc0(void) {
  FTRACE(0x10530bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10530bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10530bc1 mov ebp, esp */
  EBP = (ESP);
  /* 10530bc3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10530bc6 push esi */
  push32((uint32_t)(ESI));
  /* 10530bc7 mov eax, dword ptr [0x1054ec98] */
  EAX = (r32((uint32_t)(0x1054ec98)));
  /* 10530bcc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10530bcf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10530bd6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10530bdd jmp 0x10530be8 */
  goto L_10530be8;
L_10530bdf:;
  /* 10530bdf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10530be2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10530be5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10530be8:;
  /* 10530be8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10530bec jae 0x10530c21 */
  if (!C.cf) goto L_10530c21;
  /* 10530bee mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10530bf1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10530bf4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10530bf7 push ecx */
  push32((uint32_t)(ECX));
  /* 10530bf8 call 0x10526a40 */
  push32(0x10530bfdu); f_10526a40();
  /* 10530bfd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10530c00 mov esi, eax */
  ESI = (EAX);
  /* 10530c02 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10530c05 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10530c08 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 10530c0c push ecx */
  push32((uint32_t)(ECX));
  /* 10530c0d call 0x10526a40 */
  push32(0x10530c12u); f_10526a40();
  /* 10530c12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10530c15 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10530c18 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10530c1c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10530c1f jmp 0x10530bdf */
  goto L_10530bdf;
L_10530c21:;
  /* 10530c21 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10530c28 jmp 0x10530c33 */
  goto L_10530c33;
L_10530c2a:;
  /* 10530c2a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10530c2d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10530c30 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10530c33:;
  /* 10530c33 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10530c37 jae 0x10530c6d */
  if (!C.cf) goto L_10530c6d;
  /* 10530c39 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10530c3c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10530c3f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10530c43 push eax */
  push32((uint32_t)(EAX));
  /* 10530c44 call 0x10526a40 */
  push32(0x10530c49u); f_10526a40();
  /* 10530c49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10530c4c mov esi, eax */
  ESI = (EAX);
  /* 10530c4e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10530c51 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10530c54 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10530c58 push eax */
  push32((uint32_t)(EAX));
  /* 10530c59 call 0x10526a40 */
  push32(0x10530c5eu); f_10526a40();
  /* 10530c5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10530c61 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10530c64 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10530c68 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10530c6b jmp 0x10530c2a */
  goto L_10530c2a;
L_10530c6d:;
  /* 10530c6d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10530c70 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10530c76 push eax */
  push32((uint32_t)(EAX));
  /* 10530c77 call 0x10526a40 */
  push32(0x10530c7cu); f_10526a40();
  /* 10530c7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10530c7f mov esi, eax */
  ESI = (EAX);
  /* 10530c81 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10530c84 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 10530c8a push edx */
  push32((uint32_t)(EDX));
  /* 10530c8b call 0x10526a40 */
  push32(0x10530c90u); f_10526a40();
  /* 10530c90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10530c93 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10530c96 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10530c9a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10530c9d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10530ca0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10530ca6 push edx */
  push32((uint32_t)(EDX));
  /* 10530ca7 call 0x10526a40 */
  push32(0x10530cacu); f_10526a40();
  /* 10530cac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10530caf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10530cb2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10530cb6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10530cb9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10530cbc mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 10530cc2 push ecx */
  push32((uint32_t)(ECX));
  /* 10530cc3 call 0x10526a40 */
  push32(0x10530cc8u); f_10526a40();
  /* 10530cc8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10530ccb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10530cce lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10530cd2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10530cd5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10530cd8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 10530cde push edx */
  push32((uint32_t)(EDX));
  /* 10530cdf call 0x10526a40 */
  push32(0x10530ce4u); f_10526a40();
  /* 10530ce4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10530ce7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10530cea lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10530cee mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10530cf1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10530cf4 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10530cf9 push eax */
  push32((uint32_t)(EAX));
  /* 10530cfa call 0x10523bf0 */
  push32(0x10530cffu); f_10523bf0();
  /* 10530cff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10530d02 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10530d05 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10530d09 je 0x10530f26 */
  if (C.zf) goto L_10530f26;
  /* 10530d0f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10530d12 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10530d15 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10530d18 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10530d1e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10530d21 push 0xac */
  push32((uint32_t)(0xacu));
  /* 10530d26 mov eax, dword ptr [0x1054ec98] */
  EAX = (r32((uint32_t)(0x1054ec98)));
  /* 10530d2b push eax */
  push32((uint32_t)(EAX));
  /* 10530d2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10530d2f push ecx */
  push32((uint32_t)(ECX));
  /* 10530d30 call 0x1052a4f0 */
  push32(0x10530d35u); f_1052a4f0();
  /* 10530d35 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10530d38 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10530d3f jmp 0x10530d4a */
  goto L_10530d4a;
L_10530d41:;
  /* 10530d41 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10530d44 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10530d47 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10530d4a:;
  /* 10530d4a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10530d4e jae 0x10530dbe */
  if (!C.cf) goto L_10530dbe;
  /* 10530d50 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10530d53 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10530d56 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10530d59 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10530d5c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10530d5f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10530d62 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10530d65 push edx */
  push32((uint32_t)(EDX));
  /* 10530d66 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10530d69 push eax */
  push32((uint32_t)(EAX));
  /* 10530d6a call 0x10526bc0 */
  push32(0x10530d6fu); f_10526bc0();
  /* 10530d6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10530d72 push eax */
  push32((uint32_t)(EAX));
  /* 10530d73 call 0x10526a40 */
  push32(0x10530d78u); f_10526a40();
  /* 10530d78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10530d7b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10530d7e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10530d82 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10530d85 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10530d88 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10530d8b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10530d8e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 10530d92 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10530d95 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10530d98 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 10530d9c push edx */
  push32((uint32_t)(EDX));
  /* 10530d9d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10530da0 push eax */
  push32((uint32_t)(EAX));
  /* 10530da1 call 0x10526bc0 */
  push32(0x10530da6u); f_10526bc0();
  /* 10530da6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10530da9 push eax */
  push32((uint32_t)(EAX));
  /* 10530daa call 0x10526a40 */
  push32(0x10530dafu); f_10526a40();
  /* 10530daf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10530db2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10530db5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10530db9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10530dbc jmp 0x10530d41 */
  goto L_10530d41;
L_10530dbe:;
  /* 10530dbe mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10530dc5 jmp 0x10530dd0 */
  goto L_10530dd0;
L_10530dc7:;
  /* 10530dc7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10530dca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10530dcd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10530dd0:;
  /* 10530dd0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10530dd4 jae 0x10530e46 */
  if (!C.cf) goto L_10530e46;
  /* 10530dd6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10530dd9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10530ddc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10530ddf mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 10530de3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10530de6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10530de9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10530ded push eax */
  push32((uint32_t)(EAX));
  /* 10530dee mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10530df1 push ecx */
  push32((uint32_t)(ECX));
  /* 10530df2 call 0x10526bc0 */
  push32(0x10530df7u); f_10526bc0();
  /* 10530df7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10530dfa push eax */
  push32((uint32_t)(EAX));
  /* 10530dfb call 0x10526a40 */
  push32(0x10530e00u); f_10526a40();
  /* 10530e00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10530e03 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10530e06 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10530e0a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10530e0d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10530e10 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10530e13 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10530e16 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 10530e1a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10530e1d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10530e20 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10530e24 push eax */
  push32((uint32_t)(EAX));
  /* 10530e25 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10530e28 push ecx */
  push32((uint32_t)(ECX));
  /* 10530e29 call 0x10526bc0 */
  push32(0x10530e2eu); f_10526bc0();
  /* 10530e2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10530e31 push eax */
  push32((uint32_t)(EAX));
  /* 10530e32 call 0x10526a40 */
  push32(0x10530e37u); f_10526a40();
  /* 10530e37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10530e3a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10530e3d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10530e41 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10530e44 jmp 0x10530dc7 */
  goto L_10530dc7;
L_10530e46:;
  /* 10530e46 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10530e49 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10530e4c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 10530e52 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10530e55 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 10530e5b push ecx */
  push32((uint32_t)(ECX));
  /* 10530e5c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10530e5f push edx */
  push32((uint32_t)(EDX));
  /* 10530e60 call 0x10526bc0 */
  push32(0x10530e65u); f_10526bc0();
  /* 10530e65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10530e68 push eax */
  push32((uint32_t)(EAX));
  /* 10530e69 call 0x10526a40 */
  push32(0x10530e6eu); f_10526a40();
  /* 10530e6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10530e71 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10530e74 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10530e78 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10530e7b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10530e7e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10530e81 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 10530e87 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10530e8a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10530e90 push eax */
  push32((uint32_t)(EAX));
  /* 10530e91 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10530e94 push ecx */
  push32((uint32_t)(ECX));
  /* 10530e95 call 0x10526bc0 */
  push32(0x10530e9au); f_10526bc0();
  /* 10530e9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10530e9d push eax */
  push32((uint32_t)(EAX));
  /* 10530e9e call 0x10526a40 */
  push32(0x10530ea3u); f_10526a40();
  /* 10530ea3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10530ea6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10530ea9 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10530ead mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10530eb0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10530eb3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10530eb6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 10530ebc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10530ebf mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 10530ec5 push ecx */
  push32((uint32_t)(ECX));
  /* 10530ec6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10530ec9 push edx */
  push32((uint32_t)(EDX));
  /* 10530eca call 0x10526bc0 */
  push32(0x10530ecfu); f_10526bc0();
  /* 10530ecf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10530ed2 push eax */
  push32((uint32_t)(EAX));
  /* 10530ed3 call 0x10526a40 */
  push32(0x10530ed8u); f_10526a40();
  /* 10530ed8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10530edb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10530ede lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10530ee2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10530ee5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10530ee8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10530eeb mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 10530ef1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10530ef4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 10530efa push eax */
  push32((uint32_t)(EAX));
  /* 10530efb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10530efe push ecx */
  push32((uint32_t)(ECX));
  /* 10530eff call 0x10526bc0 */
  push32(0x10530f04u); f_10526bc0();
  /* 10530f04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10530f07 push eax */
  push32((uint32_t)(EAX));
  /* 10530f08 call 0x10526a40 */
  push32(0x10530f0du); f_10526a40();
  /* 10530f0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10530f10 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10530f13 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10530f17 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10530f1a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10530f1d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10530f20 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_10530f26:;
  /* 10530f26 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10530f29 pop esi */
  ESI = (pop32());
  /* 10530f2a mov esp, ebp */
  ESP = (EBP);
  /* 10530f2c pop ebp */
  EBP = (pop32());
  /* 10530f2d ret  */
  ESPCHK(0x10530bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f30 @ 0x10530f30 (31 bytes, 15 insns) */
void f_10530f30(void) {
  FTRACE(0x10530f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10530f30 push ebp */
  push32((uint32_t)(EBP));
  /* 10530f31 mov ebp, esp */
  EBP = (ESP);
  /* 10530f33 push 0 */
  push32((uint32_t)(0x0u));
  /* 10530f35 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10530f38 push eax */
  push32((uint32_t)(EAX));
  /* 10530f39 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10530f3c push ecx */
  push32((uint32_t)(ECX));
  /* 10530f3d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10530f40 push edx */
  push32((uint32_t)(EDX));
  /* 10530f41 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10530f44 push eax */
  push32((uint32_t)(EAX));
  /* 10530f45 call 0x10530f50 */
  push32(0x10530f4au); f_10530f50();
  /* 10530f4a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10530f4d pop ebp */
  EBP = (pop32());
  /* 10530f4e ret  */
  ESPCHK(0x10530f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f50 @ 0x10530f50 (393 bytes, 123 insns) */
void f_10530f50(void) {
  FTRACE(0x10530f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10530f50 push ebp */
  push32((uint32_t)(EBP));
  /* 10530f51 mov ebp, esp */
  EBP = (ESP);
  /* 10530f53 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10530f56 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10530f5a jne 0x10530f66 */
  if (!C.zf) goto L_10530f66;
  /* 10530f5c mov eax, dword ptr [0x1054ec98] */
  EAX = (r32((uint32_t)(0x1054ec98)));
  /* 10530f61 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10530f64 jmp 0x10530f6c */
  goto L_10530f6c;
L_10530f66:;
  /* 10530f66 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10530f69 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10530f6c:;
  /* 10530f6c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10530f6f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10530f72 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10530f75 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10530f78 push 0x1054f8bc */
  push32((uint32_t)(0x1054f8bcu));
  /* 10530f7d call dword ptr [0x10552364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552364))), 0x10530f83u);
  /* 10530f83 cmp dword ptr [0x1054f8ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f8ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10530f8a je 0x10530faa */
  if (C.zf) goto L_10530faa;
  /* 10530f8c push 0x1054f8bc */
  push32((uint32_t)(0x1054f8bcu));
  /* 10530f91 call dword ptr [0x10552354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552354))), 0x10530f97u);
  /* 10530f97 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10530f99 call 0x10527610 */
  push32(0x10530f9eu); f_10527610();
  /* 10530f9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10530fa1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10530fa8 jmp 0x10530fb1 */
  goto L_10530fb1;
L_10530faa:;
  /* 10530faa mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10530fb1:;
  /* 10530fb1 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10530fb5 jbe 0x105310a2 */
  if ((C.cf||C.zf)) goto L_105310a2;
  /* 10530fbb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10530fbe mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10530fc0 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 10530fc3 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10530fc7 je 0x10530fd1 */
  if (C.zf) goto L_10530fd1;
  /* 10530fc9 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10530fcd je 0x10530fd6 */
  if (C.zf) goto L_10530fd6;
  /* 10530fcf jmp 0x10531030 */
  goto L_10531030;
L_10530fd1:;
  /* 10530fd1 jmp 0x105310a2 */
  goto L_105310a2;
L_10530fd6:;
  /* 10530fd6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10530fd9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10530fdc mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10530fdf mov dword ptr [0x1054f898], 0 */
  w32((uint32_t)(0x1054f898), (0x0u));
  /* 10530fe9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10530fec movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10530fef cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10530ff2 jne 0x10531007 */
  if (!C.zf) goto L_10531007;
  /* 10530ff4 mov dword ptr [0x1054f898], 1 */
  w32((uint32_t)(0x1054f898), (0x1u));
  /* 10530ffe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10531001 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10531004 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10531007:;
  /* 10531007 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1053100a push ecx */
  push32((uint32_t)(ECX));
  /* 1053100b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 1053100e push edx */
  push32((uint32_t)(EDX));
  /* 1053100f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10531012 push eax */
  push32((uint32_t)(EAX));
  /* 10531013 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10531016 push ecx */
  push32((uint32_t)(ECX));
  /* 10531017 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1053101a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1053101c push eax */
  push32((uint32_t)(EAX));
  /* 1053101d call 0x105310e0 */
  push32(0x10531022u); f_105310e0();
  /* 10531022 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10531025 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10531028 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1053102b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1053102e jmp 0x1053109d */
  goto L_1053109d;
L_10531030:;
  /* 10531030 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10531033 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10531035 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10531037 mov ecx, dword ptr [0x1054dc98] */
  ECX = (r32((uint32_t)(0x1054dc98)));
  /* 1053103d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1053103f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10531043 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10531049 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1053104b je 0x10531078 */
  if (C.zf) goto L_10531078;
  /* 1053104d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10531051 jbe 0x10531078 */
  if ((C.cf||C.zf)) goto L_10531078;
  /* 10531053 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10531056 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10531059 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1053105b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1053105d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10531060 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10531063 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10531066 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10531069 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1053106c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1053106f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10531072 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10531075 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10531078:;
  /* 10531078 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1053107b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1053107e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10531080 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10531082 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10531085 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10531088 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1053108b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1053108e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10531091 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10531094 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10531097 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1053109a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1053109d:;
  /* 1053109d jmp 0x10530fb1 */
  goto L_10530fb1;
L_105310a2:;
  /* 105310a2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105310a6 je 0x105310b4 */
  if (C.zf) goto L_105310b4;
  /* 105310a8 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 105310aa call 0x105276b0 */
  push32(0x105310afu); f_105276b0();
  /* 105310af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105310b2 jmp 0x105310bf */
  goto L_105310bf;
L_105310b4:;
  /* 105310b4 push 0x1054f8bc */
  push32((uint32_t)(0x1054f8bcu));
  /* 105310b9 call dword ptr [0x10552354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552354))), 0x105310bfu);
L_105310bf:;
  /* 105310bf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105310c3 jbe 0x105310d3 */
  if ((C.cf||C.zf)) goto L_105310d3;
  /* 105310c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105310c8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 105310cb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105310ce sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105310d1 jmp 0x105310d5 */
  goto L_105310d5;
L_105310d3:;
  /* 105310d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105310d5:;
  /* 105310d5 mov esp, ebp */
  ESP = (EBP);
  /* 105310d7 pop ebp */
  EBP = (pop32());
  /* 105310d8 ret  */
  ESPCHK(0x10530f50u, _esp0);
  ESP += 4; return;
}

/* FUN_100110e0 @ 0x105310e0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_105310e0(void) {
  FTRACE(0x105310e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105310e0 push ebp */
  push32((uint32_t)(EBP));
  /* 105310e1 mov ebp, esp */
  EBP = (ESP);
  /* 105310e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105310e6 push esi */
  push32((uint32_t)(ESI));
  /* 105310e7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 105310eb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105310ee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105310f1 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105310f4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105310f7 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105310fb ja 0x10531648 */
  if ((!C.cf&&!C.zf)) goto L_10531648;
  /* 10531101 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10531104 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10531106 mov dl, byte ptr [eax + 0x105316a9] */
  DL = (r8((uint32_t)(EAX + 0x105316a9)));
  /* 1053110c jmp dword ptr [edx*4 + 0x1053164d] */
  switch (EDX) {
    case 0: goto L_10531626;
    case 1: goto L_10531135;
    case 2: goto L_1053117b;
    case 3: goto L_105312c8;
    case 4: goto L_105312f0;
    case 5: goto L_1053138f;
    case 6: goto L_105313fb;
    case 7: goto L_10531424;
    case 8: goto L_10531465;
    case 9: goto L_10531547;
    case 10: goto L_105315ae;
    case 11: goto L_105315fb;
    case 12: goto L_10531113;
    case 13: goto L_10531158;
    case 14: goto L_1053119e;
    case 15: goto L_1053129e;
    case 16: goto L_10531335;
    case 17: goto L_10531362;
    case 18: goto L_105313b7;
    case 19: goto L_1053143b;
    case 20: goto L_105314e9;
    case 21: goto L_10531578;
    case 22: goto L_10531648;
    default: x86_unimpl("switch@0x1053110c out of table"); return;
  }
L_10531113:;
  /* 10531113 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10531116 push ecx */
  push32((uint32_t)(ECX));
  /* 10531117 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1053111a push edx */
  push32((uint32_t)(EDX));
  /* 1053111b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1053111e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10531121 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10531124 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10531127 push eax */
  push32((uint32_t)(EAX));
  /* 10531128 call 0x10531700 */
  push32(0x1053112du); f_10531700();
  /* 1053112d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10531130 jmp 0x10531648 */
  goto L_10531648;
L_10531135:;
  /* 10531135 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10531138 push ecx */
  push32((uint32_t)(ECX));
  /* 10531139 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1053113c push edx */
  push32((uint32_t)(EDX));
  /* 1053113d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10531140 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10531143 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10531146 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 1053114a push eax */
  push32((uint32_t)(EAX));
  /* 1053114b call 0x10531700 */
  push32(0x10531150u); f_10531700();
  /* 10531150 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10531153 jmp 0x10531648 */
  goto L_10531648;
L_10531158:;
  /* 10531158 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1053115b push ecx */
  push32((uint32_t)(ECX));
  /* 1053115c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1053115f push edx */
  push32((uint32_t)(EDX));
  /* 10531160 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10531163 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10531166 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10531169 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 1053116d push eax */
  push32((uint32_t)(EAX));
  /* 1053116e call 0x10531700 */
  push32(0x10531173u); f_10531700();
  /* 10531173 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10531176 jmp 0x10531648 */
  goto L_10531648;
L_1053117b:;
  /* 1053117b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1053117e push ecx */
  push32((uint32_t)(ECX));
  /* 1053117f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10531182 push edx */
  push32((uint32_t)(EDX));
  /* 10531183 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10531186 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10531189 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1053118c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10531190 push eax */
  push32((uint32_t)(EAX));
  /* 10531191 call 0x10531700 */
  push32(0x10531196u); f_10531700();
  /* 10531196 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10531199 jmp 0x10531648 */
  goto L_10531648;
L_1053119e:;
  /* 1053119e cmp dword ptr [0x1054f898], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f898))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105311a5 je 0x10531226 */
  if (C.zf) goto L_10531226;
  /* 105311a7 mov dword ptr [0x1054f898], 0 */
  w32((uint32_t)(0x1054f898), (0x0u));
  /* 105311b1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 105311b4 push ecx */
  push32((uint32_t)(ECX));
  /* 105311b5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105311b8 push edx */
  push32((uint32_t)(EDX));
  /* 105311b9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105311bc push eax */
  push32((uint32_t)(EAX));
  /* 105311bd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105311c0 push ecx */
  push32((uint32_t)(ECX));
  /* 105311c1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105311c4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 105311ca push eax */
  push32((uint32_t)(EAX));
  /* 105311cb call 0x105318b0 */
  push32(0x105311d0u); f_105318b0();
  /* 105311d0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105311d3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105311d6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105311d9 jne 0x105311e0 */
  if (!C.zf) goto L_105311e0;
  /* 105311db jmp 0x10531648 */
  goto L_10531648;
L_105311e0:;
  /* 105311e0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105311e3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105311e5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 105311e8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105311eb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105311ed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105311f0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105311f3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 105311f5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105311f8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105311fa sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105311fd mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10531200 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10531202 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10531205 push ecx */
  push32((uint32_t)(ECX));
  /* 10531206 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10531209 push edx */
  push32((uint32_t)(EDX));
  /* 1053120a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1053120d push eax */
  push32((uint32_t)(EAX));
  /* 1053120e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10531211 push ecx */
  push32((uint32_t)(ECX));
  /* 10531212 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10531215 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 1053121b push eax */
  push32((uint32_t)(EAX));
  /* 1053121c call 0x105318b0 */
  push32(0x10531221u); f_105318b0();
  /* 10531221 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10531224 jmp 0x10531299 */
  goto L_10531299;
L_10531226:;
  /* 10531226 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10531229 push ecx */
  push32((uint32_t)(ECX));
  /* 1053122a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1053122d push edx */
  push32((uint32_t)(EDX));
  /* 1053122e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10531231 push eax */
  push32((uint32_t)(EAX));
  /* 10531232 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10531235 push ecx */
  push32((uint32_t)(ECX));
  /* 10531236 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10531239 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 1053123f push eax */
  push32((uint32_t)(EAX));
  /* 10531240 call 0x105318b0 */
  push32(0x10531245u); f_105318b0();
  /* 10531245 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10531248 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1053124b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1053124e jne 0x10531255 */
  if (!C.zf) goto L_10531255;
  /* 10531250 jmp 0x10531648 */
  goto L_10531648;
L_10531255:;
  /* 10531255 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10531258 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1053125a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 1053125d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10531260 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10531262 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10531265 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10531268 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1053126a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1053126d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1053126f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10531272 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10531275 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10531277 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1053127a push ecx */
  push32((uint32_t)(ECX));
  /* 1053127b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1053127e push edx */
  push32((uint32_t)(EDX));
  /* 1053127f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10531282 push eax */
  push32((uint32_t)(EAX));
  /* 10531283 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10531286 push ecx */
  push32((uint32_t)(ECX));
  /* 10531287 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1053128a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10531290 push eax */
  push32((uint32_t)(EAX));
  /* 10531291 call 0x105318b0 */
  push32(0x10531296u); f_105318b0();
  /* 10531296 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10531299:;
  /* 10531299 jmp 0x10531648 */
  goto L_10531648;
L_1053129e:;
  /* 1053129e mov ecx, dword ptr [0x1054f898] */
  ECX = (r32((uint32_t)(0x1054f898)));
  /* 105312a4 mov dword ptr [0x1054f8a8], ecx */
  w32((uint32_t)(0x1054f8a8), (ECX));
  /* 105312aa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105312ad push edx */
  push32((uint32_t)(EDX));
  /* 105312ae mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105312b1 push eax */
  push32((uint32_t)(EAX));
  /* 105312b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 105312b4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105312b7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 105312ba push edx */
  push32((uint32_t)(EDX));
  /* 105312bb call 0x10531750 */
  push32(0x105312c0u); f_10531750();
  /* 105312c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105312c3 jmp 0x10531648 */
  goto L_10531648;
L_105312c8:;
  /* 105312c8 mov eax, dword ptr [0x1054f898] */
  EAX = (r32((uint32_t)(0x1054f898)));
  /* 105312cd mov dword ptr [0x1054f8a8], eax */
  w32((uint32_t)(0x1054f8a8), (EAX));
  /* 105312d2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105312d5 push ecx */
  push32((uint32_t)(ECX));
  /* 105312d6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105312d9 push edx */
  push32((uint32_t)(EDX));
  /* 105312da push 2 */
  push32((uint32_t)(0x2u));
  /* 105312dc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105312df mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 105312e2 push ecx */
  push32((uint32_t)(ECX));
  /* 105312e3 call 0x10531750 */
  push32(0x105312e8u); f_10531750();
  /* 105312e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105312eb jmp 0x10531648 */
  goto L_10531648;
L_105312f0:;
  /* 105312f0 mov edx, dword ptr [0x1054f898] */
  EDX = (r32((uint32_t)(0x1054f898)));
  /* 105312f6 mov dword ptr [0x1054f8a8], edx */
  w32((uint32_t)(0x1054f8a8), (EDX));
  /* 105312fc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105312ff mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 10531302 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10531303 mov ecx, 0xc */
  ECX = (0xcu);
  /* 10531308 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1053130a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1053130d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10531311 jne 0x1053131a */
  if (!C.zf) goto L_1053131a;
  /* 10531313 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_1053131a:;
  /* 1053131a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1053131d push edx */
  push32((uint32_t)(EDX));
  /* 1053131e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10531321 push eax */
  push32((uint32_t)(EAX));
  /* 10531322 push 2 */
  push32((uint32_t)(0x2u));
  /* 10531324 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10531327 push ecx */
  push32((uint32_t)(ECX));
  /* 10531328 call 0x10531750 */
  push32(0x1053132du); f_10531750();
  /* 1053132d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10531330 jmp 0x10531648 */
  goto L_10531648;
L_10531335:;
  /* 10531335 mov edx, dword ptr [0x1054f898] */
  EDX = (r32((uint32_t)(0x1054f898)));
  /* 1053133b mov dword ptr [0x1054f8a8], edx */
  w32((uint32_t)(0x1054f8a8), (EDX));
  /* 10531341 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10531344 push eax */
  push32((uint32_t)(EAX));
  /* 10531345 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10531348 push ecx */
  push32((uint32_t)(ECX));
  /* 10531349 push 3 */
  push32((uint32_t)(0x3u));
  /* 1053134b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1053134e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10531351 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10531354 push eax */
  push32((uint32_t)(EAX));
  /* 10531355 call 0x10531750 */
  push32(0x1053135au); f_10531750();
  /* 1053135a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1053135d jmp 0x10531648 */
  goto L_10531648;
L_10531362:;
  /* 10531362 mov ecx, dword ptr [0x1054f898] */
  ECX = (r32((uint32_t)(0x1054f898)));
  /* 10531368 mov dword ptr [0x1054f8a8], ecx */
  w32((uint32_t)(0x1054f8a8), (ECX));
  /* 1053136e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10531371 push edx */
  push32((uint32_t)(EDX));
  /* 10531372 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10531375 push eax */
  push32((uint32_t)(EAX));
  /* 10531376 push 2 */
  push32((uint32_t)(0x2u));
  /* 10531378 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1053137b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1053137e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10531381 push edx */
  push32((uint32_t)(EDX));
  /* 10531382 call 0x10531750 */
  push32(0x10531387u); f_10531750();
  /* 10531387 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1053138a jmp 0x10531648 */
  goto L_10531648;
L_1053138f:;
  /* 1053138f mov eax, dword ptr [0x1054f898] */
  EAX = (r32((uint32_t)(0x1054f898)));
  /* 10531394 mov dword ptr [0x1054f8a8], eax */
  w32((uint32_t)(0x1054f8a8), (EAX));
  /* 10531399 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1053139c push ecx */
  push32((uint32_t)(ECX));
  /* 1053139d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105313a0 push edx */
  push32((uint32_t)(EDX));
  /* 105313a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 105313a3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105313a6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 105313a9 push ecx */
  push32((uint32_t)(ECX));
  /* 105313aa call 0x10531750 */
  push32(0x105313afu); f_10531750();
  /* 105313af add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105313b2 jmp 0x10531648 */
  goto L_10531648;
L_105313b7:;
  /* 105313b7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105313ba cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105313be jg 0x105313dc */
  if ((!C.zf&&C.sf==C.of)) goto L_105313dc;
  /* 105313c0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105313c3 push eax */
  push32((uint32_t)(EAX));
  /* 105313c4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105313c7 push ecx */
  push32((uint32_t)(ECX));
  /* 105313c8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105313cb mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 105313d1 push eax */
  push32((uint32_t)(EAX));
  /* 105313d2 call 0x10531700 */
  push32(0x105313d7u); f_10531700();
  /* 105313d7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105313da jmp 0x105313f6 */
  goto L_105313f6;
L_105313dc:;
  /* 105313dc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105313df push ecx */
  push32((uint32_t)(ECX));
  /* 105313e0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105313e3 push edx */
  push32((uint32_t)(EDX));
  /* 105313e4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 105313e7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 105313ed push ecx */
  push32((uint32_t)(ECX));
  /* 105313ee call 0x10531700 */
  push32(0x105313f3u); f_10531700();
  /* 105313f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105313f6:;
  /* 105313f6 jmp 0x10531648 */
  goto L_10531648;
L_105313fb:;
  /* 105313fb mov edx, dword ptr [0x1054f898] */
  EDX = (r32((uint32_t)(0x1054f898)));
  /* 10531401 mov dword ptr [0x1054f8a8], edx */
  w32((uint32_t)(0x1054f8a8), (EDX));
  /* 10531407 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1053140a push eax */
  push32((uint32_t)(EAX));
  /* 1053140b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1053140e push ecx */
  push32((uint32_t)(ECX));
  /* 1053140f push 2 */
  push32((uint32_t)(0x2u));
  /* 10531411 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10531414 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10531416 push eax */
  push32((uint32_t)(EAX));
  /* 10531417 call 0x10531750 */
  push32(0x1053141cu); f_10531750();
  /* 1053141c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1053141f jmp 0x10531648 */
  goto L_10531648;
L_10531424:;
  /* 10531424 mov ecx, dword ptr [0x1054f898] */
  ECX = (r32((uint32_t)(0x1054f898)));
  /* 1053142a mov dword ptr [0x1054f8a8], ecx */
  w32((uint32_t)(0x1054f8a8), (ECX));
  /* 10531430 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10531433 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10531436 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10531439 jmp 0x1053148d */
  goto L_1053148d;
L_1053143b:;
  /* 1053143b mov ecx, dword ptr [0x1054f898] */
  ECX = (r32((uint32_t)(0x1054f898)));
  /* 10531441 mov dword ptr [0x1054f8a8], ecx */
  w32((uint32_t)(0x1054f8a8), (ECX));
  /* 10531447 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1053144a push edx */
  push32((uint32_t)(EDX));
  /* 1053144b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1053144e push eax */
  push32((uint32_t)(EAX));
  /* 1053144f push 1 */
  push32((uint32_t)(0x1u));
  /* 10531451 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10531454 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10531457 push edx */
  push32((uint32_t)(EDX));
  /* 10531458 call 0x10531750 */
  push32(0x1053145du); f_10531750();
  /* 1053145d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10531460 jmp 0x10531648 */
  goto L_10531648;
L_10531465:;
  /* 10531465 mov eax, dword ptr [0x1054f898] */
  EAX = (r32((uint32_t)(0x1054f898)));
  /* 1053146a mov dword ptr [0x1054f8a8], eax */
  w32((uint32_t)(0x1054f8a8), (EAX));
  /* 1053146f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10531472 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10531476 jne 0x10531481 */
  if (!C.zf) goto L_10531481;
  /* 10531478 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 1053147f jmp 0x1053148d */
  goto L_1053148d;
L_10531481:;
  /* 10531481 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10531484 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10531487 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1053148a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1053148d:;
  /* 1053148d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10531490 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10531493 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10531496 jge 0x105314a1 */
  if ((C.sf==C.of)) goto L_105314a1;
  /* 10531498 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1053149f jmp 0x105314ce */
  goto L_105314ce;
L_105314a1:;
  /* 105314a1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105314a4 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 105314a7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 105314a8 mov ecx, 7 */
  ECX = (0x7u);
  /* 105314ad idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 105314af mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105314b2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105314b5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 105314b8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 105314b9 mov ecx, 7 */
  ECX = (0x7u);
  /* 105314be idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 105314c0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105314c3 jl 0x105314ce */
  if ((C.sf!=C.of)) goto L_105314ce;
  /* 105314c5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105314c8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105314cb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_105314ce:;
  /* 105314ce mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105314d1 push eax */
  push32((uint32_t)(EAX));
  /* 105314d2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105314d5 push ecx */
  push32((uint32_t)(ECX));
  /* 105314d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 105314d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105314db push edx */
  push32((uint32_t)(EDX));
  /* 105314dc call 0x10531750 */
  push32(0x105314e1u); f_10531750();
  /* 105314e1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105314e4 jmp 0x10531648 */
  goto L_10531648;
L_105314e9:;
  /* 105314e9 cmp dword ptr [0x1054f898], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f898))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105314f0 je 0x10531520 */
  if (C.zf) goto L_10531520;
  /* 105314f2 mov dword ptr [0x1054f898], 0 */
  w32((uint32_t)(0x1054f898), (0x0u));
  /* 105314fc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 105314ff push eax */
  push32((uint32_t)(EAX));
  /* 10531500 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10531503 push ecx */
  push32((uint32_t)(ECX));
  /* 10531504 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10531507 push edx */
  push32((uint32_t)(EDX));
  /* 10531508 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1053150b push eax */
  push32((uint32_t)(EAX));
  /* 1053150c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1053150f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 10531515 push edx */
  push32((uint32_t)(EDX));
  /* 10531516 call 0x105318b0 */
  push32(0x1053151bu); f_105318b0();
  /* 1053151b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1053151e jmp 0x10531542 */
  goto L_10531542;
L_10531520:;
  /* 10531520 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10531523 push eax */
  push32((uint32_t)(EAX));
  /* 10531524 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10531527 push ecx */
  push32((uint32_t)(ECX));
  /* 10531528 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1053152b push edx */
  push32((uint32_t)(EDX));
  /* 1053152c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1053152f push eax */
  push32((uint32_t)(EAX));
  /* 10531530 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10531533 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10531539 push edx */
  push32((uint32_t)(EDX));
  /* 1053153a call 0x105318b0 */
  push32(0x1053153fu); f_105318b0();
  /* 1053153f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10531542:;
  /* 10531542 jmp 0x10531648 */
  goto L_10531648;
L_10531547:;
  /* 10531547 mov dword ptr [0x1054f898], 0 */
  w32((uint32_t)(0x1054f898), (0x0u));
  /* 10531551 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10531554 push eax */
  push32((uint32_t)(EAX));
  /* 10531555 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10531558 push ecx */
  push32((uint32_t)(ECX));
  /* 10531559 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1053155c push edx */
  push32((uint32_t)(EDX));
  /* 1053155d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10531560 push eax */
  push32((uint32_t)(EAX));
  /* 10531561 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10531564 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 1053156a push edx */
  push32((uint32_t)(EDX));
  /* 1053156b call 0x105318b0 */
  push32(0x10531570u); f_105318b0();
  /* 10531570 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10531573 jmp 0x10531648 */
  goto L_10531648;
L_10531578:;
  /* 10531578 mov eax, dword ptr [0x1054f898] */
  EAX = (r32((uint32_t)(0x1054f898)));
  /* 1053157d mov dword ptr [0x1054f8a8], eax */
  w32((uint32_t)(0x1054f8a8), (EAX));
  /* 10531582 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10531585 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10531588 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10531589 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 1053158e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10531590 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10531593 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10531596 push edx */
  push32((uint32_t)(EDX));
  /* 10531597 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1053159a push eax */
  push32((uint32_t)(EAX));
  /* 1053159b push 2 */
  push32((uint32_t)(0x2u));
  /* 1053159d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105315a0 push ecx */
  push32((uint32_t)(ECX));
  /* 105315a1 call 0x10531750 */
  push32(0x105315a6u); f_10531750();
  /* 105315a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105315a9 jmp 0x10531648 */
  goto L_10531648;
L_105315ae:;
  /* 105315ae mov edx, dword ptr [0x1054f898] */
  EDX = (r32((uint32_t)(0x1054f898)));
  /* 105315b4 mov dword ptr [0x1054f8a8], edx */
  w32((uint32_t)(0x1054f8a8), (EDX));
  /* 105315ba mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105315bd mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 105315c0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 105315c1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 105315c6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 105315c8 mov ecx, eax */
  ECX = (EAX);
  /* 105315ca add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105315cd imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105315d0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105315d3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 105315d6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 105315d7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 105315dc idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 105315de add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105315e0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105315e3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105315e6 push eax */
  push32((uint32_t)(EAX));
  /* 105315e7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105315ea push ecx */
  push32((uint32_t)(ECX));
  /* 105315eb push 4 */
  push32((uint32_t)(0x4u));
  /* 105315ed mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105315f0 push edx */
  push32((uint32_t)(EDX));
  /* 105315f1 call 0x10531750 */
  push32(0x105315f6u); f_10531750();
  /* 105315f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105315f9 jmp 0x10531648 */
  goto L_10531648;
L_105315fb:;
  /* 105315fb call 0x10532710 */
  push32(0x10531600u); f_10532710();
  /* 10531600 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10531603 push eax */
  push32((uint32_t)(EAX));
  /* 10531604 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10531607 push ecx */
  push32((uint32_t)(ECX));
  /* 10531608 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1053160b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1053160d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10531611 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 10531614 mov ecx, dword ptr [eax*4 + 0x1054ee1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1054ee1c)));
  /* 1053161b push ecx */
  push32((uint32_t)(ECX));
  /* 1053161c call 0x10531700 */
  push32(0x10531621u); f_10531700();
  /* 10531621 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10531624 jmp 0x10531648 */
  goto L_10531648;
L_10531626:;
  /* 10531626 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10531629 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1053162b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 1053162e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10531631 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10531633 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10531636 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10531639 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1053163b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1053163e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10531640 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10531643 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10531646 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10531648:;
  /* 10531648 pop esi */
  ESI = (pop32());
  /* 10531649 mov esp, ebp */
  ESP = (EBP);
  /* 1053164b pop ebp */
  EBP = (pop32());
  /* 1053164c ret  */
  ESPCHK(0x105310e0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x10531700 (72 bytes, 30 insns) */
void f_10531700(void) {
  FTRACE(0x10531700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10531700 push ebp */
  push32((uint32_t)(EBP));
  /* 10531701 mov ebp, esp */
  EBP = (ESP);
L_10531703:;
  /* 10531703 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10531706 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10531709 je 0x10531746 */
  if (C.zf) goto L_10531746;
  /* 1053170b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1053170e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10531711 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10531713 je 0x10531746 */
  if (C.zf) goto L_10531746;
  /* 10531715 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10531718 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1053171a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1053171d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1053171f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10531721 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10531724 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10531726 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10531729 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1053172c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1053172e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10531731 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10531734 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10531737 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1053173a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1053173c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1053173f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10531742 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10531744 jmp 0x10531703 */
  goto L_10531703;
L_10531746:;
  /* 10531746 pop ebp */
  EBP = (pop32());
  /* 10531747 ret  */
  ESPCHK(0x10531700u, _esp0);
  ESP += 4; return;
}

/* FUN_10011750 @ 0x10531750 (173 bytes, 64 insns) */
void f_10531750(void) {
  FTRACE(0x10531750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10531750 push ebp */
  push32((uint32_t)(EBP));
  /* 10531751 mov ebp, esp */
  EBP = (ESP);
  /* 10531753 push ecx */
  push32((uint32_t)(ECX));
  /* 10531754 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1053175b cmp dword ptr [0x1054f8a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f8a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10531762 je 0x1053177a */
  if (C.zf) goto L_1053177a;
  /* 10531764 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10531767 push eax */
  push32((uint32_t)(EAX));
  /* 10531768 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1053176b push ecx */
  push32((uint32_t)(ECX));
  /* 1053176c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1053176f push edx */
  push32((uint32_t)(EDX));
  /* 10531770 call 0x10531800 */
  push32(0x10531775u); f_10531800();
  /* 10531775 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10531778 jmp 0x105317f9 */
  goto L_105317f9;
L_1053177a:;
  /* 1053177a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1053177d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10531780 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10531782 jae 0x105317f0 */
  if (!C.cf) goto L_105317f0;
  /* 10531784 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10531787 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1053178a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1053178d jmp 0x10531798 */
  goto L_10531798;
L_1053178f:;
  /* 1053178f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10531792 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10531795 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10531798:;
  /* 10531798 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1053179b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1053179e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105317a0 je 0x105317d4 */
  if (C.zf) goto L_105317d4;
  /* 105317a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105317a5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 105317a6 mov ecx, 0xa */
  ECX = (0xau);
  /* 105317ab idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 105317ad add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105317b0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105317b3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105317b5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105317b8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 105317bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105317be cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 105317bf mov ecx, 0xa */
  ECX = (0xau);
  /* 105317c4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 105317c6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 105317c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105317cc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105317cf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105317d2 jmp 0x1053178f */
  goto L_1053178f;
L_105317d4:;
  /* 105317d4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105317d7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105317d9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105317dc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105317df mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 105317e1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105317e4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105317e6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105317e9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105317ec mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 105317ee jmp 0x105317f9 */
  goto L_105317f9;
L_105317f0:;
  /* 105317f0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105317f3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_105317f9:;
  /* 105317f9 mov esp, ebp */
  ESP = (EBP);
  /* 105317fb pop ebp */
  EBP = (pop32());
  /* 105317fc ret  */
  ESPCHK(0x10531750u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x10531800 (172 bytes, 65 insns) */
void f_10531800(void) {
  FTRACE(0x10531800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10531800 push ebp */
  push32((uint32_t)(EBP));
  /* 10531801 mov ebp, esp */
  EBP = (ESP);
  /* 10531803 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10531806 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10531809 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1053180b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1053180e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10531811 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10531814 jbe 0x1053185b */
  if ((C.cf||C.zf)) goto L_1053185b;
L_10531816:;
  /* 10531816 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10531819 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1053181a mov ecx, 0xa */
  ECX = (0xau);
  /* 1053181f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10531821 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10531824 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10531827 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10531829 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1053182c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1053182f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10531832 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10531835 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10531837 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1053183a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1053183d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1053183f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10531842 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10531843 mov ecx, 0xa */
  ECX = (0xau);
  /* 10531848 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1053184a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1053184d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10531851 jle 0x1053185b */
  if ((C.zf||C.sf!=C.of)) goto L_1053185b;
  /* 10531853 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10531856 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10531859 ja 0x10531816 */
  if ((!C.cf&&!C.zf)) goto L_10531816;
L_1053185b:;
  /* 1053185b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1053185e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10531860 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10531863 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10531866 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10531869 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1053186b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1053186e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10531871 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10531874:;
  /* 10531874 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10531877 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10531879 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1053187c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1053187f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10531882 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10531884 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10531886 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10531889 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1053188c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1053188f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10531892 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10531895 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10531897 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1053189a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1053189d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105318a0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105318a3 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105318a6 jb 0x10531874 */
  if (C.cf) goto L_10531874;
  /* 105318a8 mov esp, ebp */
  ESP = (EBP);
  /* 105318aa pop ebp */
  EBP = (pop32());
  /* 105318ab ret  */
  ESPCHK(0x10531800u, _esp0);
  ESP += 4; return;
}

/* FUN_100118b0 @ 0x105318b0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_105318b0(void) {
  FTRACE(0x105318b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105318b0 push ebp */
  push32((uint32_t)(EBP));
  /* 105318b1 mov ebp, esp */
  EBP = (ESP);
  /* 105318b3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_105318b6:;
  /* 105318b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105318b9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105318bc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105318be je 0x10531d2c */
  if (C.zf) goto L_10531d2c;
  /* 105318c4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105318c7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105318ca je 0x10531d2c */
  if (C.zf) goto L_10531d2c;
  /* 105318d0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 105318d4 mov dword ptr [0x1054f8a8], 0 */
  w32((uint32_t)(0x1054f8a8), (0x0u));
  /* 105318de mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 105318e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105318e8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105318eb jmp 0x105318f6 */
  goto L_105318f6;
L_105318ed:;
  /* 105318ed mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105318f0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105318f3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_105318f6:;
  /* 105318f6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105318f9 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 105318fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105318ff movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10531902 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10531905 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10531908 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1053190b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1053190d jne 0x10531911 */
  if (!C.zf) goto L_10531911;
  /* 1053190f jmp 0x105318ed */
  goto L_105318ed;
L_10531911:;
  /* 10531911 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10531914 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10531917 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1053191a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1053191d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10531920 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10531923 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10531926 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10531929 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1053192c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10531930 ja 0x10531c80 */
  if ((!C.cf&&!C.zf)) goto L_10531c80;
  /* 10531936 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10531939 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1053193b mov al, byte ptr [ecx + 0x10531d5c] */
  AL = (r8((uint32_t)(ECX + 0x10531d5c)));
  /* 10531941 jmp dword ptr [eax*4 + 0x10531d30] */
  switch (EAX) {
    case 0: goto L_10531b9f;
    case 1: goto L_10531a83;
    case 2: goto L_10531a0e;
    case 3: goto L_10531948;
    case 4: goto L_10531986;
    case 5: goto L_105319e7;
    case 6: goto L_10531a35;
    case 7: goto L_10531a5c;
    case 8: goto L_10531aca;
    case 9: goto L_105319c4;
    case 10: goto L_10531c80;
    default: x86_unimpl("switch@0x10531941 out of table"); return;
  }
L_10531948:;
  /* 10531948 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1053194b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1053194e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10531951 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10531954 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10531957 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1053195b ja 0x10531981 */
  if ((!C.cf&&!C.zf)) goto L_10531981;
  /* 1053195d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10531960 jmp dword ptr [ecx*4 + 0x10531daf] */
  switch (ECX) {
    case 0: goto L_10531967;
    case 1: goto L_10531971;
    case 2: goto L_10531977;
    case 3: goto L_1053197d;
    case 4: goto L_105319a5;
    case 5: goto L_105319af;
    case 6: goto L_105319b5;
    case 7: goto L_105319bb;
    default: x86_unimpl("switch@0x10531960 out of table"); return;
  }
L_10531967:;
  /* 10531967 mov dword ptr [0x1054f8a8], 1 */
  w32((uint32_t)(0x1054f8a8), (0x1u));
L_10531971:;
  /* 10531971 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 10531975 jmp 0x10531981 */
  goto L_10531981;
L_10531977:;
  /* 10531977 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 1053197b jmp 0x10531981 */
  goto L_10531981;
L_1053197d:;
  /* 1053197d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_10531981:;
  /* 10531981 jmp 0x10531c80 */
  goto L_10531c80;
L_10531986:;
  /* 10531986 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10531989 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1053198c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1053198f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10531992 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10531995 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10531999 ja 0x105319bf */
  if ((!C.cf&&!C.zf)) goto L_105319bf;
  /* 1053199b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1053199e jmp dword ptr [ecx*4 + 0x10531dbf] */
  switch (ECX) {
    case 0: goto L_105319a5;
    case 1: goto L_105319af;
    case 2: goto L_105319b5;
    case 3: goto L_105319bb;
    default: x86_unimpl("switch@0x1053199e out of table"); return;
  }
L_105319a5:;
  /* 105319a5 mov dword ptr [0x1054f8a8], 1 */
  w32((uint32_t)(0x1054f8a8), (0x1u));
L_105319af:;
  /* 105319af mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 105319b3 jmp 0x105319bf */
  goto L_105319bf;
L_105319b5:;
  /* 105319b5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 105319b9 jmp 0x105319bf */
  goto L_105319bf;
L_105319bb:;
  /* 105319bb mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_105319bf:;
  /* 105319bf jmp 0x10531c80 */
  goto L_10531c80;
L_105319c4:;
  /* 105319c4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105319c7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 105319ca cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105319ce je 0x105319d8 */
  if (C.zf) goto L_105319d8;
  /* 105319d0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105319d4 je 0x105319de */
  if (C.zf) goto L_105319de;
  /* 105319d6 jmp 0x105319e2 */
  goto L_105319e2;
L_105319d8:;
  /* 105319d8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 105319dc jmp 0x105319e2 */
  goto L_105319e2;
L_105319de:;
  /* 105319de mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_105319e2:;
  /* 105319e2 jmp 0x10531c80 */
  goto L_10531c80;
L_105319e7:;
  /* 105319e7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105319ea mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 105319ed cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105319f1 je 0x105319fb */
  if (C.zf) goto L_105319fb;
  /* 105319f3 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105319f7 je 0x10531a05 */
  if (C.zf) goto L_10531a05;
  /* 105319f9 jmp 0x10531a09 */
  goto L_10531a09;
L_105319fb:;
  /* 105319fb mov dword ptr [0x1054f8a8], 1 */
  w32((uint32_t)(0x1054f8a8), (0x1u));
L_10531a05:;
  /* 10531a05 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_10531a09:;
  /* 10531a09 jmp 0x10531c80 */
  goto L_10531c80;
L_10531a0e:;
  /* 10531a0e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10531a11 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10531a14 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10531a18 je 0x10531a22 */
  if (C.zf) goto L_10531a22;
  /* 10531a1a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10531a1e je 0x10531a2c */
  if (C.zf) goto L_10531a2c;
  /* 10531a20 jmp 0x10531a30 */
  goto L_10531a30;
L_10531a22:;
  /* 10531a22 mov dword ptr [0x1054f8a8], 1 */
  w32((uint32_t)(0x1054f8a8), (0x1u));
L_10531a2c:;
  /* 10531a2c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_10531a30:;
  /* 10531a30 jmp 0x10531c80 */
  goto L_10531c80;
L_10531a35:;
  /* 10531a35 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10531a38 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 10531a3b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10531a3f je 0x10531a49 */
  if (C.zf) goto L_10531a49;
  /* 10531a41 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10531a45 je 0x10531a53 */
  if (C.zf) goto L_10531a53;
  /* 10531a47 jmp 0x10531a57 */
  goto L_10531a57;
L_10531a49:;
  /* 10531a49 mov dword ptr [0x1054f8a8], 1 */
  w32((uint32_t)(0x1054f8a8), (0x1u));
L_10531a53:;
  /* 10531a53 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_10531a57:;
  /* 10531a57 jmp 0x10531c80 */
  goto L_10531c80;
L_10531a5c:;
  /* 10531a5c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10531a5f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10531a62 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10531a66 je 0x10531a70 */
  if (C.zf) goto L_10531a70;
  /* 10531a68 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10531a6c je 0x10531a7a */
  if (C.zf) goto L_10531a7a;
  /* 10531a6e jmp 0x10531a7e */
  goto L_10531a7e;
L_10531a70:;
  /* 10531a70 mov dword ptr [0x1054f8a8], 1 */
  w32((uint32_t)(0x1054f8a8), (0x1u));
L_10531a7a:;
  /* 10531a7a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_10531a7e:;
  /* 10531a7e jmp 0x10531c80 */
  goto L_10531c80;
L_10531a83:;
  /* 10531a83 push 0x1054b98c */
  push32((uint32_t)(0x1054b98cu));
  /* 10531a88 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10531a8b push ecx */
  push32((uint32_t)(ECX));
  /* 10531a8c call 0x105322e0 */
  push32(0x10531a91u); f_105322e0();
  /* 10531a91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10531a94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10531a96 jne 0x10531aa3 */
  if (!C.zf) goto L_10531aa3;
  /* 10531a98 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10531a9b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10531a9e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10531aa1 jmp 0x10531ac1 */
  goto L_10531ac1;
L_10531aa3:;
  /* 10531aa3 push 0x1054b988 */
  push32((uint32_t)(0x1054b988u));
  /* 10531aa8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10531aab push eax */
  push32((uint32_t)(EAX));
  /* 10531aac call 0x105322e0 */
  push32(0x10531ab1u); f_105322e0();
  /* 10531ab1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10531ab4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10531ab6 jne 0x10531ac1 */
  if (!C.zf) goto L_10531ac1;
  /* 10531ab8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10531abb add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10531abe mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10531ac1:;
  /* 10531ac1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 10531ac5 jmp 0x10531c80 */
  goto L_10531c80;
L_10531aca:;
  /* 10531aca mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10531acd cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10531ad1 jg 0x10531ae1 */
  if ((!C.zf&&C.sf==C.of)) goto L_10531ae1;
  /* 10531ad3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10531ad6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 10531adc mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10531adf jmp 0x10531aed */
  goto L_10531aed;
L_10531ae1:;
  /* 10531ae1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10531ae4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10531aea mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10531aed:;
  /* 10531aed cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10531af1 jle 0x10531b94 */
  if ((C.zf||C.sf!=C.of)) goto L_10531b94;
  /* 10531af7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10531afa cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10531afd jbe 0x10531b94 */
  if ((C.cf||C.zf)) goto L_10531b94;
  /* 10531b03 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10531b06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10531b08 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10531b0a mov ecx, dword ptr [0x1054dc98] */
  ECX = (r32((uint32_t)(0x1054dc98)));
  /* 10531b10 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10531b12 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10531b16 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10531b1c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10531b1e je 0x10531b57 */
  if (C.zf) goto L_10531b57;
  /* 10531b20 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10531b23 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10531b26 jbe 0x10531b57 */
  if ((C.cf||C.zf)) goto L_10531b57;
  /* 10531b28 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10531b2b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10531b2d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10531b30 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10531b32 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10531b34 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10531b37 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10531b39 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10531b3c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10531b3f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10531b41 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10531b44 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10531b47 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10531b4a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10531b4d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10531b4f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10531b52 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10531b55 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10531b57:;
  /* 10531b57 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10531b5a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10531b5c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10531b5f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10531b61 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10531b63 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10531b66 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10531b68 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10531b6b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10531b6e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10531b70 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10531b73 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10531b76 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10531b79 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10531b7c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10531b7e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10531b81 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10531b84 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10531b86 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10531b89 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10531b8c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10531b8f jmp 0x10531aed */
  goto L_10531aed;
L_10531b94:;
  /* 10531b94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10531b97 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10531b9a jmp 0x105318b6 */
  goto L_105318b6;
L_10531b9f:;
  /* 10531b9f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10531ba2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10531ba5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10531ba7 je 0x10531c72 */
  if (C.zf) goto L_10531c72;
  /* 10531bad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10531bb0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10531bb3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10531bb6:;
  /* 10531bb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10531bb9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10531bbc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10531bbe je 0x10531c70 */
  if (C.zf) goto L_10531c70;
  /* 10531bc4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10531bc7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10531bca je 0x10531c70 */
  if (C.zf) goto L_10531c70;
  /* 10531bd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10531bd3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10531bd6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10531bd9 jne 0x10531be9 */
  if (!C.zf) goto L_10531be9;
  /* 10531bdb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10531bde add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10531be1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10531be4 jmp 0x10531c70 */
  goto L_10531c70;
L_10531be9:;
  /* 10531be9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10531bec xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10531bee mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10531bf0 mov edx, dword ptr [0x1054dc98] */
  EDX = (r32((uint32_t)(0x1054dc98)));
  /* 10531bf6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10531bf8 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10531bfc and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10531c01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10531c03 je 0x10531c3c */
  if (C.zf) goto L_10531c3c;
  /* 10531c05 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10531c08 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10531c0b jbe 0x10531c3c */
  if ((C.cf||C.zf)) goto L_10531c3c;
  /* 10531c0d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10531c10 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10531c12 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10531c15 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10531c17 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10531c19 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10531c1c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10531c1e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10531c21 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10531c24 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10531c26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10531c29 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10531c2c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10531c2f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10531c32 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10531c34 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10531c37 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10531c3a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10531c3c:;
  /* 10531c3c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10531c3f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10531c41 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10531c44 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10531c46 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10531c48 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10531c4b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10531c4d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10531c50 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10531c53 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10531c55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10531c58 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10531c5b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10531c5e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10531c61 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10531c63 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10531c66 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10531c69 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10531c6b jmp 0x10531bb6 */
  goto L_10531bb6;
L_10531c70:;
  /* 10531c70 jmp 0x10531c7b */
  goto L_10531c7b;
L_10531c72:;
  /* 10531c72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10531c75 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10531c78 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10531c7b:;
  /* 10531c7b jmp 0x105318b6 */
  goto L_105318b6;
L_10531c80:;
  /* 10531c80 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10531c84 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10531c86 je 0x10531cac */
  if (C.zf) goto L_10531cac;
  /* 10531c88 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10531c8b push edx */
  push32((uint32_t)(EDX));
  /* 10531c8c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10531c8f push eax */
  push32((uint32_t)(EAX));
  /* 10531c90 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10531c93 push ecx */
  push32((uint32_t)(ECX));
  /* 10531c94 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10531c97 push edx */
  push32((uint32_t)(EDX));
  /* 10531c98 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10531c9b push eax */
  push32((uint32_t)(EAX));
  /* 10531c9c call 0x105310e0 */
  push32(0x10531ca1u); f_105310e0();
  /* 10531ca1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10531ca4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10531ca7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10531caa jmp 0x10531d27 */
  goto L_10531d27;
L_10531cac:;
  /* 10531cac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10531caf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10531cb1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10531cb3 mov ecx, dword ptr [0x1054dc98] */
  ECX = (r32((uint32_t)(0x1054dc98)));
  /* 10531cb9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10531cbb mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10531cbf and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10531cc5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10531cc7 je 0x10531cf8 */
  if (C.zf) goto L_10531cf8;
  /* 10531cc9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10531ccc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10531cce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10531cd1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10531cd3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10531cd5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10531cd8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10531cda add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10531cdd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10531ce0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10531ce2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10531ce5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10531ce8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10531ceb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10531cee mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10531cf0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10531cf3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10531cf6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10531cf8:;
  /* 10531cf8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10531cfb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10531cfd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10531d00 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10531d02 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10531d04 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10531d07 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10531d09 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10531d0c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10531d0f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10531d11 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10531d14 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10531d17 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10531d1a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10531d1d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10531d1f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10531d22 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10531d25 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10531d27:;
  /* 10531d27 jmp 0x105318b6 */
  goto L_105318b6;
L_10531d2c:;
  /* 10531d2c mov esp, ebp */
  ESP = (EBP);
  /* 10531d2e pop ebp */
  EBP = (pop32());
  /* 10531d2f ret  */
  ESPCHK(0x105318b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011dd0 @ 0x10531dd0 (650 bytes, 178 insns) */
void f_10531dd0(void) {
  FTRACE(0x10531dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10531dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10531dd1 mov ebp, esp */
  EBP = (ESP);
  /* 10531dd3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10531dd9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10531ddd jne 0x10531f39 */
  if (!C.zf) goto L_10531f39;
  /* 10531de3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10531de6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 10531dec lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 10531df2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10531df5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10531dfc mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 10531e06 push 0 */
  push32((uint32_t)(0x0u));
  /* 10531e08 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10531e0e push edx */
  push32((uint32_t)(EDX));
  /* 10531e0f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10531e12 push eax */
  push32((uint32_t)(EAX));
  /* 10531e13 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10531e16 push ecx */
  push32((uint32_t)(ECX));
  /* 10531e17 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10531e1a push edx */
  push32((uint32_t)(EDX));
  /* 10531e1b call 0x105331f0 */
  push32(0x10531e20u); f_105331f0();
  /* 10531e20 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10531e23 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10531e26 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10531e2a jne 0x10531ebf */
  if (!C.zf) goto L_10531ebf;
  /* 10531e30 call dword ptr [0x10552390] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552390))), 0x10531e36u);
  /* 10531e36 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10531e39 je 0x10531e40 */
  if (C.zf) goto L_10531e40;
  /* 10531e3b jmp 0x10531f1d */
  goto L_10531f1d;
L_10531e40:;
  /* 10531e40 push 0 */
  push32((uint32_t)(0x0u));
  /* 10531e42 push 0 */
  push32((uint32_t)(0x0u));
  /* 10531e44 push 0 */
  push32((uint32_t)(0x0u));
  /* 10531e46 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10531e49 push eax */
  push32((uint32_t)(EAX));
  /* 10531e4a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10531e4d push ecx */
  push32((uint32_t)(ECX));
  /* 10531e4e call 0x105331f0 */
  push32(0x10531e53u); f_105331f0();
  /* 10531e53 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10531e56 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 10531e5c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10531e63 jne 0x10531e6a */
  if (!C.zf) goto L_10531e6a;
  /* 10531e65 jmp 0x10531f1d */
  goto L_10531f1d;
L_10531e6a:;
  /* 10531e6a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 10531e6c push 0x1054b994 */
  push32((uint32_t)(0x1054b994u));
  /* 10531e71 push 2 */
  push32((uint32_t)(0x2u));
  /* 10531e73 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10531e79 push edx */
  push32((uint32_t)(EDX));
  /* 10531e7a call 0x10523c10 */
  push32(0x10531e7fu); f_10523c10();
  /* 10531e7f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10531e82 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10531e85 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10531e89 jne 0x10531e90 */
  if (!C.zf) goto L_10531e90;
  /* 10531e8b jmp 0x10531f1d */
  goto L_10531f1d;
L_10531e90:;
  /* 10531e90 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10531e97 push 0 */
  push32((uint32_t)(0x0u));
  /* 10531e99 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 10531e9f push eax */
  push32((uint32_t)(EAX));
  /* 10531ea0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10531ea3 push ecx */
  push32((uint32_t)(ECX));
  /* 10531ea4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10531ea7 push edx */
  push32((uint32_t)(EDX));
  /* 10531ea8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10531eab push eax */
  push32((uint32_t)(EAX));
  /* 10531eac call 0x105331f0 */
  push32(0x10531eb1u); f_105331f0();
  /* 10531eb1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10531eb4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10531eb7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10531ebb jne 0x10531ebf */
  if (!C.zf) goto L_10531ebf;
  /* 10531ebd jmp 0x10531f1d */
  goto L_10531f1d;
L_10531ebf:;
  /* 10531ebf push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10531ec1 push 0x1054b994 */
  push32((uint32_t)(0x1054b994u));
  /* 10531ec6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10531ec8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10531ecb push ecx */
  push32((uint32_t)(ECX));
  /* 10531ecc call 0x10523c10 */
  push32(0x10531ed1u); f_10523c10();
  /* 10531ed1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10531ed4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 10531eda mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10531edc mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10531ee2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10531ee5 jne 0x10531ee9 */
  if (!C.zf) goto L_10531ee9;
  /* 10531ee7 jmp 0x10531f1d */
  goto L_10531f1d;
L_10531ee9:;
  /* 10531ee9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10531eec push ecx */
  push32((uint32_t)(ECX));
  /* 10531eed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10531ef0 push edx */
  push32((uint32_t)(EDX));
  /* 10531ef1 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10531ef7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10531ef9 push ecx */
  push32((uint32_t)(ECX));
  /* 10531efa call 0x10527430 */
  push32(0x10531effu); f_10527430();
  /* 10531eff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10531f02 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10531f06 je 0x10531f16 */
  if (C.zf) goto L_10531f16;
  /* 10531f08 push 2 */
  push32((uint32_t)(0x2u));
  /* 10531f0a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10531f0d push edx */
  push32((uint32_t)(EDX));
  /* 10531f0e call 0x105246a0 */
  push32(0x10531f13u); f_105246a0();
  /* 10531f13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10531f16:;
  /* 10531f16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10531f18 jmp 0x10532056 */
  goto L_10532056;
L_10531f1d:;
  /* 10531f1d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10531f21 je 0x10531f31 */
  if (C.zf) goto L_10531f31;
  /* 10531f23 push 2 */
  push32((uint32_t)(0x2u));
  /* 10531f25 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10531f28 push eax */
  push32((uint32_t)(EAX));
  /* 10531f29 call 0x105246a0 */
  push32(0x10531f2eu); f_105246a0();
  /* 10531f2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10531f31:;
  /* 10531f31 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10531f34 jmp 0x10532056 */
  goto L_10532056;
L_10531f39:;
  /* 10531f39 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10531f3d jne 0x10532053 */
  if (!C.zf) goto L_10532053;
  /* 10531f43 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 10531f4d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10531f50 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 10531f56 push 0 */
  push32((uint32_t)(0x0u));
  /* 10531f58 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10531f5e push edx */
  push32((uint32_t)(EDX));
  /* 10531f5f push 0x1054f7c0 */
  push32((uint32_t)(0x1054f7c0u));
  /* 10531f64 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10531f67 push eax */
  push32((uint32_t)(EAX));
  /* 10531f68 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10531f6b push ecx */
  push32((uint32_t)(ECX));
  /* 10531f6c call 0x10533050 */
  push32(0x10531f71u); f_10533050();
  /* 10531f71 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10531f74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10531f76 jne 0x10531f80 */
  if (!C.zf) goto L_10531f80;
  /* 10531f78 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10531f7b jmp 0x10532056 */
  goto L_10532056;
L_10531f80:;
  /* 10531f80 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10531f86 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10531f89 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 10531f93 jmp 0x10531fa4 */
  goto L_10531fa4;
L_10531f95:;
  /* 10531f95 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10531f9b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10531f9e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_10531fa4:;
  /* 10531fa4 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10531fab jge 0x1053204f */
  if ((C.sf==C.of)) goto L_1053204f;
  /* 10531fb1 cmp dword ptr [0x1054dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1054dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10531fb8 jle 0x10531feb */
  if ((C.zf||C.sf!=C.of)) goto L_10531feb;
  /* 10531fba push 4 */
  push32((uint32_t)(0x4u));
  /* 10531fbc mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10531fc2 mov dl, byte ptr [ecx*2 + 0x1054f7c0] */
  DL = (r8((uint32_t)(ECX*2 + 0x1054f7c0)));
  /* 10531fc9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10531fcf mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10531fd5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10531fda push eax */
  push32((uint32_t)(EAX));
  /* 10531fdb call 0x10529c20 */
  push32(0x10531fe0u); f_10529c20();
  /* 10531fe0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10531fe3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 10531fe9 jmp 0x1053201e */
  goto L_1053201e;
L_10531feb:;
  /* 10531feb mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10531ff1 mov dl, byte ptr [ecx*2 + 0x1054f7c0] */
  DL = (r8((uint32_t)(ECX*2 + 0x1054f7c0)));
  /* 10531ff8 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10531ffe mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10532004 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10532009 mov ecx, dword ptr [0x1054dc98] */
  ECX = (r32((uint32_t)(0x1054dc98)));
  /* 1053200f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10532011 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10532015 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10532018 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_1053201e:;
  /* 1053201e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10532025 je 0x10532048 */
  if (C.zf) goto L_10532048;
  /* 10532027 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1053202d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10532030 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10532033 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 1053203a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1053203e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10532044 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10532046 jmp 0x1053204a */
  goto L_1053204a;
L_10532048:;
  /* 10532048 jmp 0x1053204f */
  goto L_1053204f;
L_1053204a:;
  /* 1053204a jmp 0x10531f95 */
  goto L_10531f95;
L_1053204f:;
  /* 1053204f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10532051 jmp 0x10532056 */
  goto L_10532056;
L_10532053:;
  /* 10532053 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10532056:;
  /* 10532056 mov esp, ebp */
  ESP = (EBP);
  /* 10532058 pop ebp */
  EBP = (pop32());
  /* 10532059 ret  */
  ESPCHK(0x10531dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012060 @ 0x10532060 (10 bytes, 5 insns) */
void f_10532060(void) {
  FTRACE(0x10532060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10532060 push ebp */
  push32((uint32_t)(EBP));
  /* 10532061 mov ebp, esp */
  EBP = (ESP);
  /* 10532063 mov eax, dword ptr [0x1054ed88] */
  EAX = (r32((uint32_t)(0x1054ed88)));
  /* 10532068 pop ebp */
  EBP = (pop32());
  /* 10532069 ret  */
  ESPCHK(0x10532060u, _esp0);
  ESP += 4; return;
}

/* FUN_10012070 @ 0x10532070 (575 bytes, 196 insns) */
void f_10532070(void) {
  FTRACE(0x10532070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10532070 push ebp */
  push32((uint32_t)(EBP));
  /* 10532071 mov ebp, esp */
  EBP = (ESP);
  /* 10532073 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10532075 push 0x1054b9a0 */
  push32((uint32_t)(0x1054b9a0u));
  /* 1053207a push 0x1052cd18 */
  push32((uint32_t)(0x1052cd18u));
  /* 1053207f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10532085 push eax */
  push32((uint32_t)(EAX));
  /* 10532086 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1053208d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10532090 push ebx */
  push32((uint32_t)(EBX));
  /* 10532091 push esi */
  push32((uint32_t)(ESI));
  /* 10532092 push edi */
  push32((uint32_t)(EDI));
  /* 10532093 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10532096 cmp dword ptr [0x1054f7cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f7cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1053209d jne 0x105320ee */
  if (!C.zf) goto L_105320ee;
  /* 1053209f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 105320a2 push eax */
  push32((uint32_t)(EAX));
  /* 105320a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 105320a5 push 0x1054b0d4 */
  push32((uint32_t)(0x1054b0d4u));
  /* 105320aa push 1 */
  push32((uint32_t)(0x1u));
  /* 105320ac call dword ptr [0x105522f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105522f4))), 0x105320b2u);
  /* 105320b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105320b4 je 0x105320c2 */
  if (C.zf) goto L_105320c2;
  /* 105320b6 mov dword ptr [0x1054f7cc], 1 */
  w32((uint32_t)(0x1054f7cc), (0x1u));
  /* 105320c0 jmp 0x105320ee */
  goto L_105320ee;
L_105320c2:;
  /* 105320c2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 105320c5 push ecx */
  push32((uint32_t)(ECX));
  /* 105320c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 105320c8 push 0x1054b0d0 */
  push32((uint32_t)(0x1054b0d0u));
  /* 105320cd push 1 */
  push32((uint32_t)(0x1u));
  /* 105320cf push 0 */
  push32((uint32_t)(0x0u));
  /* 105320d1 call dword ptr [0x10552304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552304))), 0x105320d7u);
  /* 105320d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105320d9 je 0x105320e7 */
  if (C.zf) goto L_105320e7;
  /* 105320db mov dword ptr [0x1054f7cc], 2 */
  w32((uint32_t)(0x1054f7cc), (0x2u));
  /* 105320e5 jmp 0x105320ee */
  goto L_105320ee;
L_105320e7:;
  /* 105320e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105320e9 jmp 0x105322c9 */
  goto L_105322c9;
L_105320ee:;
  /* 105320ee cmp dword ptr [0x1054f7cc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1054f7cc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105320f5 jne 0x10532112 */
  if (!C.zf) goto L_10532112;
  /* 105320f7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105320fa push edx */
  push32((uint32_t)(EDX));
  /* 105320fb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105320fe push eax */
  push32((uint32_t)(EAX));
  /* 105320ff mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10532102 push ecx */
  push32((uint32_t)(ECX));
  /* 10532103 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10532106 push edx */
  push32((uint32_t)(EDX));
  /* 10532107 call dword ptr [0x105522f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105522f4))), 0x1053210du);
  /* 1053210d jmp 0x105322c9 */
  goto L_105322c9;
L_10532112:;
  /* 10532112 cmp dword ptr [0x1054f7cc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1054f7cc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10532119 jne 0x105322c7 */
  if (!C.zf) goto L_105322c7;
  /* 1053211f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10532123 jne 0x1053212d */
  if (!C.zf) goto L_1053212d;
  /* 10532125 mov eax, dword ptr [0x1054f740] */
  EAX = (r32((uint32_t)(0x1054f740)));
  /* 1053212a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_1053212d:;
  /* 1053212d push 0 */
  push32((uint32_t)(0x0u));
  /* 1053212f push 0 */
  push32((uint32_t)(0x0u));
  /* 10532131 push 0 */
  push32((uint32_t)(0x0u));
  /* 10532133 push 0 */
  push32((uint32_t)(0x0u));
  /* 10532135 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10532138 push ecx */
  push32((uint32_t)(ECX));
  /* 10532139 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1053213c push edx */
  push32((uint32_t)(EDX));
  /* 1053213d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10532142 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10532145 push eax */
  push32((uint32_t)(EAX));
  /* 10532146 call dword ptr [0x105523b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105523b8))), 0x1053214cu);
  /* 1053214c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1053214f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10532153 jne 0x1053215c */
  if (!C.zf) goto L_1053215c;
  /* 10532155 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10532157 jmp 0x105322c9 */
  goto L_105322c9;
L_1053215c:;
  /* 1053215c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10532163 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10532166 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10532169 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1053216b call 0x10526db0 */
  push32(0x10532170u); f_10526db0();
  /* 10532170 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 10532173 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10532176 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10532179 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1053217c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1053217f push edx */
  push32((uint32_t)(EDX));
  /* 10532180 push 0 */
  push32((uint32_t)(0x0u));
  /* 10532182 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10532185 push eax */
  push32((uint32_t)(EAX));
  /* 10532186 call 0x10527980 */
  push32(0x1053218bu); f_10527980();
  /* 1053218b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1053218e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10532195 jmp 0x105321ae */
  goto L_105321ae;
  /* 10532197 mov eax, 1 */
  EAX = (0x1u);
  /* 1053219c ret  */
  ESPCHK(0x10532070u, _esp0);
  ESP += 4; return;
  /* 1053219d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 105321a0 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 105321a7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_105321ae:;
  /* 105321ae cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105321b2 jne 0x105321bb */
  if (!C.zf) goto L_105321bb;
  /* 105321b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105321b6 jmp 0x105322c9 */
  goto L_105322c9;
L_105321bb:;
  /* 105321bb push 0 */
  push32((uint32_t)(0x0u));
  /* 105321bd push 0 */
  push32((uint32_t)(0x0u));
  /* 105321bf mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 105321c2 push ecx */
  push32((uint32_t)(ECX));
  /* 105321c3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105321c6 push edx */
  push32((uint32_t)(EDX));
  /* 105321c7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105321ca push eax */
  push32((uint32_t)(EAX));
  /* 105321cb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105321ce push ecx */
  push32((uint32_t)(ECX));
  /* 105321cf push 0x220 */
  push32((uint32_t)(0x220u));
  /* 105321d4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105321d7 push edx */
  push32((uint32_t)(EDX));
  /* 105321d8 call dword ptr [0x105523b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105523b8))), 0x105321deu);
  /* 105321de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105321e0 jne 0x105321e9 */
  if (!C.zf) goto L_105321e9;
  /* 105321e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105321e4 jmp 0x105322c9 */
  goto L_105322c9;
L_105321e9:;
  /* 105321e9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 105321f0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 105321f3 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 105321f7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105321fa and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 105321fc call 0x10526db0 */
  push32(0x10532201u); f_10526db0();
  /* 10532201 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 10532204 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10532207 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1053220a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1053220d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10532214 jmp 0x1053222d */
  goto L_1053222d;
  /* 10532216 mov eax, 1 */
  EAX = (0x1u);
  /* 1053221b ret  */
  ESPCHK(0x10532070u, _esp0);
  ESP += 4; return;
  /* 1053221c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1053221f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10532226 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1053222d:;
  /* 1053222d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10532231 jne 0x1053223a */
  if (!C.zf) goto L_1053223a;
  /* 10532233 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10532235 jmp 0x105322c9 */
  goto L_105322c9;
L_1053223a:;
  /* 1053223a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1053223e jne 0x10532249 */
  if (!C.zf) goto L_10532249;
  /* 10532240 mov edx, dword ptr [0x1054f730] */
  EDX = (r32((uint32_t)(0x1054f730)));
  /* 10532246 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_10532249:;
  /* 10532249 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1053224c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1053224f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 10532255 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10532258 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1053225b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 10532262 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10532265 push ecx */
  push32((uint32_t)(ECX));
  /* 10532266 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10532269 push edx */
  push32((uint32_t)(EDX));
  /* 1053226a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1053226d push eax */
  push32((uint32_t)(EAX));
  /* 1053226e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10532271 push ecx */
  push32((uint32_t)(ECX));
  /* 10532272 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10532275 push edx */
  push32((uint32_t)(EDX));
  /* 10532276 call dword ptr [0x10552304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552304))), 0x1053227cu);
  /* 1053227c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1053227f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10532282 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10532285 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10532287 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 1053228c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10532292 je 0x105322a8 */
  if (C.zf) goto L_105322a8;
  /* 10532294 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10532297 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1053229a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1053229c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 105322a0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105322a6 je 0x105322ac */
  if (C.zf) goto L_105322ac;
L_105322a8:;
  /* 105322a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105322aa jmp 0x105322c9 */
  goto L_105322c9;
L_105322ac:;
  /* 105322ac mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105322af shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 105322b1 push eax */
  push32((uint32_t)(EAX));
  /* 105322b2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105322b5 push ecx */
  push32((uint32_t)(ECX));
  /* 105322b6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105322b9 push edx */
  push32((uint32_t)(EDX));
  /* 105322ba call 0x1052bb00 */
  push32(0x105322bfu); f_1052bb00();
  /* 105322bf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105322c2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 105322c5 jmp 0x105322c9 */
  goto L_105322c9;
L_105322c7:;
  /* 105322c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105322c9:;
  /* 105322c9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 105322cc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105322cf mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 105322d6 pop edi */
  EDI = (pop32());
  /* 105322d7 pop esi */
  ESI = (pop32());
  /* 105322d8 pop ebx */
  EBX = (pop32());
  /* 105322d9 mov esp, ebp */
  ESP = (EBP);
  /* 105322db pop ebp */
  EBP = (pop32());
  /* 105322dc ret  */
  ESPCHK(0x10532070u, _esp0);
  ESP += 4; return;
}

/* FUN_100122e0 @ 0x105322e0 (208 bytes, 85 insns) */
void f_105322e0(void) {
  FTRACE(0x105322e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105322e0 push ebp */
  push32((uint32_t)(EBP));
  /* 105322e1 mov ebp, esp */
  EBP = (ESP);
  /* 105322e3 push edi */
  push32((uint32_t)(EDI));
  /* 105322e4 push esi */
  push32((uint32_t)(ESI));
  /* 105322e5 push ebx */
  push32((uint32_t)(EBX));
  /* 105322e6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 105322e9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 105322ec lea eax, [0x1054f728] */
  EAX = ((uint32_t)(0x1054f728));
  /* 105322f2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105322f6 jne 0x10532333 */
  if (!C.zf) goto L_10532333;
  /* 105322f8 mov al, 0xff */
  AL = (0xffu);
  /* 105322fa mov edi, edi */
  EDI = (EDI);
L_105322fc:;
  /* 105322fc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 105322fe je 0x1053232e */
  if (C.zf) goto L_1053232e;
  /* 10532300 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10532302 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10532303 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 10532305 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10532306 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10532308 je 0x105322fc */
  if (C.zf) goto L_105322fc;
  /* 1053230a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1053230c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1053230e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10532310 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10532313 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10532315 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10532317 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 10532319 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1053231b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1053231d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1053231f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10532322 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10532324 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10532326 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10532328 je 0x105322fc */
  if (C.zf) goto L_105322fc;
  /* 1053232a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1053232c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_1053232e:;
  /* 1053232e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 10532331 jmp 0x105323ab */
  goto L_105323ab;
L_10532333:;
  /* 10532333 lock inc dword ptr [0x1054f8bc] */
  x86_unimpl("lock inc @ 0x10532333");
  /* 1053233a cmp dword ptr [0x1054f8ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f8ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10532341 jg 0x10532347 */
  if ((!C.zf&&C.sf==C.of)) goto L_10532347;
  /* 10532343 push 0 */
  push32((uint32_t)(0x0u));
  /* 10532345 jmp 0x1053235c */
  goto L_1053235c;
L_10532347:;
  /* 10532347 lock dec dword ptr [0x1054f8bc] */
  x86_unimpl("lock dec @ 0x10532347");
  /* 1053234e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10532350 call 0x10527610 */
  push32(0x10532355u); f_10527610();
  /* 10532355 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_1053235c:;
  /* 1053235c mov eax, 0xff */
  EAX = (0xffu);
  /* 10532361 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10532363 nop  */
  /* nop */
L_10532364:;
  /* 10532364 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10532366 je 0x1053238f */
  if (C.zf) goto L_1053238f;
  /* 10532368 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1053236a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1053236b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1053236d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1053236e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10532370 je 0x10532364 */
  if (C.zf) goto L_10532364;
  /* 10532372 push eax */
  push32((uint32_t)(EAX));
  /* 10532373 push ebx */
  push32((uint32_t)(EBX));
  /* 10532374 call 0x10533450 */
  push32(0x10532379u); f_10533450();
  /* 10532379 mov ebx, eax */
  EBX = (EAX);
  /* 1053237b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1053237e call 0x10533450 */
  push32(0x10532383u); f_10533450();
  /* 10532383 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10532386 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10532388 je 0x10532364 */
  if (C.zf) goto L_10532364;
  /* 1053238a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1053238c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1053238f:;
  /* 1053238f mov ebx, eax */
  EBX = (EAX);
  /* 10532391 pop eax */
  EAX = (pop32());
  /* 10532392 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10532394 jne 0x1053239f */
  if (!C.zf) goto L_1053239f;
  /* 10532396 lock dec dword ptr [0x1054f8bc] */
  x86_unimpl("lock dec @ 0x10532396");
  /* 1053239d jmp 0x105323a9 */
  goto L_105323a9;
L_1053239f:;
  /* 1053239f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 105323a1 call 0x105276b0 */
  push32(0x105323a6u); f_105276b0();
  /* 105323a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105323a9:;
  /* 105323a9 mov eax, ebx */
  EAX = (EBX);
L_105323ab:;
  /* 105323ab pop ebx */
  EBX = (pop32());
  /* 105323ac pop esi */
  ESI = (pop32());
  /* 105323ad pop edi */
  EDI = (pop32());
  /* 105323ae leave  */
  ESP = EBP;
  EBP = pop32();
  /* 105323af ret  */
  ESPCHK(0x105322e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100123b0 @ 0x105323b0 (257 bytes, 103 insns) */
void f_105323b0(void) {
  FTRACE(0x105323b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105323b0 push ebp */
  push32((uint32_t)(EBP));
  /* 105323b1 mov ebp, esp */
  EBP = (ESP);
  /* 105323b3 push edi */
  push32((uint32_t)(EDI));
  /* 105323b4 push esi */
  push32((uint32_t)(ESI));
  /* 105323b5 push ebx */
  push32((uint32_t)(EBX));
  /* 105323b6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105323b9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105323bb je 0x105324aa */
  if (C.zf) goto L_105324aa;
  /* 105323c1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 105323c4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 105323c7 lea eax, [0x1054f728] */
  EAX = ((uint32_t)(0x1054f728));
  /* 105323cd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105323d1 jne 0x10532421 */
  if (!C.zf) goto L_10532421;
  /* 105323d3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 105323d5 mov bl, 0x5a */
  BL = (0x5au);
  /* 105323d7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 105323d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_105323dc:;
  /* 105323dc mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 105323de or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 105323e0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 105323e2 je 0x10532405 */
  if (C.zf) goto L_10532405;
  /* 105323e4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 105323e6 je 0x10532405 */
  if (C.zf) goto L_10532405;
  /* 105323e8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 105323e9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 105323ea cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105323ec jb 0x105323f4 */
  if (C.cf) goto L_105323f4;
  /* 105323ee cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105323f0 ja 0x105323f4 */
  if ((!C.cf&&!C.zf)) goto L_105323f4;
  /* 105323f2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_105323f4:;
  /* 105323f4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105323f6 jb 0x105323fe */
  if (C.cf) goto L_105323fe;
  /* 105323f8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105323fa ja 0x105323fe */
  if ((!C.cf&&!C.zf)) goto L_105323fe;
  /* 105323fc add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_105323fe:;
  /* 105323fe cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10532400 jne 0x1053240f */
  if (!C.zf) goto L_1053240f;
  /* 10532402 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10532403 jne 0x105323dc */
  if (!C.zf) goto L_105323dc;
L_10532405:;
  /* 10532405 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10532407 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10532409 je 0x105324aa */
  if (C.zf) goto L_105324aa;
L_1053240f:;
  /* 1053240f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10532414 jb 0x105324aa */
  if (C.cf) goto L_105324aa;
  /* 1053241a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1053241c jmp 0x105324aa */
  goto L_105324aa;
L_10532421:;
  /* 10532421 lock inc dword ptr [0x1054f8bc] */
  x86_unimpl("lock inc @ 0x10532421");
  /* 10532428 cmp dword ptr [0x1054f8ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f8ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1053242f jg 0x10532435 */
  if ((!C.zf&&C.sf==C.of)) goto L_10532435;
  /* 10532431 push 0 */
  push32((uint32_t)(0x0u));
  /* 10532433 jmp 0x1053244e */
  goto L_1053244e;
L_10532435:;
  /* 10532435 lock dec dword ptr [0x1054f8bc] */
  x86_unimpl("lock dec @ 0x10532435");
  /* 1053243c mov ebx, ecx */
  EBX = (ECX);
  /* 1053243e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10532440 call 0x10527610 */
  push32(0x10532445u); f_10527610();
  /* 10532445 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 1053244c mov ecx, ebx */
  ECX = (EBX);
L_1053244e:;
  /* 1053244e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10532450 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10532452 mov edi, edi */
  EDI = (EDI);
L_10532454:;
  /* 10532454 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10532456 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10532458 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1053245a je 0x1053247f */
  if (C.zf) goto L_1053247f;
  /* 1053245c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1053245e je 0x1053247f */
  if (C.zf) goto L_1053247f;
  /* 10532460 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10532461 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10532462 push ecx */
  push32((uint32_t)(ECX));
  /* 10532463 push eax */
  push32((uint32_t)(EAX));
  /* 10532464 push ebx */
  push32((uint32_t)(EBX));
  /* 10532465 call 0x10533450 */
  push32(0x1053246au); f_10533450();
  /* 1053246a mov ebx, eax */
  EBX = (EAX);
  /* 1053246c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1053246f call 0x10533450 */
  push32(0x10532474u); f_10533450();
  /* 10532474 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10532477 pop ecx */
  ECX = (pop32());
  /* 10532478 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1053247a jne 0x10532485 */
  if (!C.zf) goto L_10532485;
  /* 1053247c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1053247d jne 0x10532454 */
  if (!C.zf) goto L_10532454;
L_1053247f:;
  /* 1053247f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10532481 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10532483 je 0x1053248e */
  if (C.zf) goto L_1053248e;
L_10532485:;
  /* 10532485 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 1053248a jb 0x1053248e */
  if (C.cf) goto L_1053248e;
  /* 1053248c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_1053248e:;
  /* 1053248e pop eax */
  EAX = (pop32());
  /* 1053248f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10532491 jne 0x1053249c */
  if (!C.zf) goto L_1053249c;
  /* 10532493 lock dec dword ptr [0x1054f8bc] */
  x86_unimpl("lock dec @ 0x10532493");
  /* 1053249a jmp 0x105324aa */
  goto L_105324aa;
L_1053249c:;
  /* 1053249c mov ebx, ecx */
  EBX = (ECX);
  /* 1053249e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 105324a0 call 0x105276b0 */
  push32(0x105324a5u); f_105276b0();
  /* 105324a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105324a8 mov ecx, ebx */
  ECX = (EBX);
L_105324aa:;
  /* 105324aa mov eax, ecx */
  EAX = (ECX);
  /* 105324ac pop ebx */
  EBX = (pop32());
  /* 105324ad pop esi */
  ESI = (pop32());
  /* 105324ae pop edi */
  EDI = (pop32());
  /* 105324af leave  */
  ESP = EBP;
  EBP = pop32();
  /* 105324b0 ret  */
  ESPCHK(0x105323b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100124c0 @ 0x105324c0 (255 bytes, 88 insns) */
void f_105324c0(void) {
  FTRACE(0x105324c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105324c0 push ebp */
  push32((uint32_t)(EBP));
  /* 105324c1 mov ebp, esp */
  EBP = (ESP);
  /* 105324c3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_105324c6:;
  /* 105324c6 cmp dword ptr [0x1054dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1054dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105324cd jle 0x105324e6 */
  if ((C.zf||C.sf!=C.of)) goto L_105324e6;
  /* 105324cf push 8 */
  push32((uint32_t)(0x8u));
  /* 105324d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105324d4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105324d6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 105324d8 push ecx */
  push32((uint32_t)(ECX));
  /* 105324d9 call 0x10529c20 */
  push32(0x105324deu); f_10529c20();
  /* 105324de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105324e1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 105324e4 jmp 0x105324ff */
  goto L_105324ff;
L_105324e6:;
  /* 105324e6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105324e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105324eb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105324ed mov ecx, dword ptr [0x1054dc98] */
  ECX = (r32((uint32_t)(0x1054dc98)));
  /* 105324f3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105324f5 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 105324f9 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 105324fc mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_105324ff:;
  /* 105324ff cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10532503 je 0x10532510 */
  if (C.zf) goto L_10532510;
  /* 10532505 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10532508 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1053250b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1053250e jmp 0x105324c6 */
  goto L_105324c6;
L_10532510:;
  /* 10532510 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10532513 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10532515 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10532517 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1053251a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1053251d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10532520 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10532523 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10532526 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10532529 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1053252d je 0x10532535 */
  if (C.zf) goto L_10532535;
  /* 1053252f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10532533 jne 0x10532548 */
  if (!C.zf) goto L_10532548;
L_10532535:;
  /* 10532535 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10532538 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1053253a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1053253c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1053253f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10532542 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10532545 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10532548:;
  /* 10532548 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1053254f:;
  /* 1053254f cmp dword ptr [0x1054dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1054dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10532556 jle 0x1053256b */
  if ((C.zf||C.sf!=C.of)) goto L_1053256b;
  /* 10532558 push 4 */
  push32((uint32_t)(0x4u));
  /* 1053255a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1053255d push edx */
  push32((uint32_t)(EDX));
  /* 1053255e call 0x10529c20 */
  push32(0x10532563u); f_10529c20();
  /* 10532563 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10532566 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10532569 jmp 0x10532580 */
  goto L_10532580;
L_1053256b:;
  /* 1053256b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1053256e mov ecx, dword ptr [0x1054dc98] */
  ECX = (r32((uint32_t)(0x1054dc98)));
  /* 10532574 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10532576 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1053257a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1053257d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10532580:;
  /* 10532580 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10532584 je 0x105325ab */
  if (C.zf) goto L_105325ab;
  /* 10532586 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10532589 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1053258c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1053258f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 10532593 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10532596 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10532599 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1053259b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1053259d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105325a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105325a3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105325a6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 105325a9 jmp 0x1053254f */
  goto L_1053254f;
L_105325ab:;
  /* 105325ab cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105325af jne 0x105325b8 */
  if (!C.zf) goto L_105325b8;
  /* 105325b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105325b4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 105325b6 jmp 0x105325bb */
  goto L_105325bb;
L_105325b8:;
  /* 105325b8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_105325bb:;
  /* 105325bb mov esp, ebp */
  ESP = (EBP);
  /* 105325bd pop ebp */
  EBP = (pop32());
  /* 105325be ret  */
  ESPCHK(0x105324c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100125c0 @ 0x105325c0 (17 bytes, 8 insns) */
void f_105325c0(void) {
  FTRACE(0x105325c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105325c0 push ebp */
  push32((uint32_t)(EBP));
  /* 105325c1 mov ebp, esp */
  EBP = (ESP);
  /* 105325c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105325c6 push eax */
  push32((uint32_t)(EAX));
  /* 105325c7 call 0x105324c0 */
  push32(0x105325ccu); f_105324c0();
  /* 105325cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105325cf pop ebp */
  EBP = (pop32());
  /* 105325d0 ret  */
  ESPCHK(0x105325c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100125e0 @ 0x105325e0 (297 bytes, 106 insns) */
void f_105325e0(void) {
  FTRACE(0x105325e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105325e0 push ebp */
  push32((uint32_t)(EBP));
  /* 105325e1 mov ebp, esp */
  EBP = (ESP);
  /* 105325e3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105325e6 push esi */
  push32((uint32_t)(ESI));
L_105325e7:;
  /* 105325e7 cmp dword ptr [0x1054dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1054dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105325ee jle 0x10532607 */
  if ((C.zf||C.sf!=C.of)) goto L_10532607;
  /* 105325f0 push 8 */
  push32((uint32_t)(0x8u));
  /* 105325f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105325f5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105325f7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 105325f9 push ecx */
  push32((uint32_t)(ECX));
  /* 105325fa call 0x10529c20 */
  push32(0x105325ffu); f_10529c20();
  /* 105325ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10532602 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10532605 jmp 0x10532620 */
  goto L_10532620;
L_10532607:;
  /* 10532607 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1053260a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1053260c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1053260e mov ecx, dword ptr [0x1054dc98] */
  ECX = (r32((uint32_t)(0x1054dc98)));
  /* 10532614 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10532616 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1053261a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1053261d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10532620:;
  /* 10532620 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10532624 je 0x10532631 */
  if (C.zf) goto L_10532631;
  /* 10532626 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10532629 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1053262c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1053262f jmp 0x105325e7 */
  goto L_105325e7;
L_10532631:;
  /* 10532631 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10532634 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10532636 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10532638 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1053263b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1053263e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10532641 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10532644 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10532647 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1053264a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1053264e je 0x10532656 */
  if (C.zf) goto L_10532656;
  /* 10532650 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10532654 jne 0x10532669 */
  if (!C.zf) goto L_10532669;
L_10532656:;
  /* 10532656 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10532659 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1053265b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1053265d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10532660 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10532663 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10532666 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10532669:;
  /* 10532669 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10532670 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10532677:;
  /* 10532677 cmp dword ptr [0x1054dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1054dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1053267e jle 0x10532693 */
  if ((C.zf||C.sf!=C.of)) goto L_10532693;
  /* 10532680 push 4 */
  push32((uint32_t)(0x4u));
  /* 10532682 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10532685 push edx */
  push32((uint32_t)(EDX));
  /* 10532686 call 0x10529c20 */
  push32(0x1053268bu); f_10529c20();
  /* 1053268b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1053268e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10532691 jmp 0x105326a8 */
  goto L_105326a8;
L_10532693:;
  /* 10532693 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10532696 mov ecx, dword ptr [0x1054dc98] */
  ECX = (r32((uint32_t)(0x1054dc98)));
  /* 1053269c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1053269e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 105326a2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 105326a5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_105326a8:;
  /* 105326a8 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105326ac je 0x105326e9 */
  if (C.zf) goto L_105326e9;
  /* 105326ae push 0 */
  push32((uint32_t)(0x0u));
  /* 105326b0 push 0xa */
  push32((uint32_t)(0xau));
  /* 105326b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105326b5 push eax */
  push32((uint32_t)(EAX));
  /* 105326b6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105326b9 push ecx */
  push32((uint32_t)(ECX));
  /* 105326ba call 0x10533580 */
  push32(0x105326bfu); f_10533580();
  /* 105326bf mov ecx, eax */
  ECX = (EAX);
  /* 105326c1 mov esi, edx */
  ESI = (EDX);
  /* 105326c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105326c6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105326c9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 105326ca add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105326cc adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 105326ce mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105326d1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 105326d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105326d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105326d9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105326db mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105326de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105326e1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105326e4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 105326e7 jmp 0x10532677 */
  goto L_10532677;
L_105326e9:;
  /* 105326e9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105326ed jne 0x105326fe */
  if (!C.zf) goto L_105326fe;
  /* 105326ef mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105326f2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 105326f4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105326f7 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105326fa neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 105326fc jmp 0x10532704 */
  goto L_10532704;
L_105326fe:;
  /* 105326fe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10532701 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_10532704:;
  /* 10532704 pop esi */
  ESI = (pop32());
  /* 10532705 mov esp, ebp */
  ESP = (EBP);
  /* 10532707 pop ebp */
  EBP = (pop32());
  /* 10532708 ret  */
  ESPCHK(0x105325e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012710 @ 0x10532710 (61 bytes, 18 insns) */
void f_10532710(void) {
  FTRACE(0x10532710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10532710 push ebp */
  push32((uint32_t)(EBP));
  /* 10532711 mov ebp, esp */
  EBP = (ESP);
  /* 10532713 cmp dword ptr [0x1054f888], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f888))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1053271a jne 0x1053274b */
  if (!C.zf) goto L_1053274b;
  /* 1053271c push 0xb */
  push32((uint32_t)(0xbu));
  /* 1053271e call 0x10527610 */
  push32(0x10532723u); f_10527610();
  /* 10532723 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10532726 cmp dword ptr [0x1054f888], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f888))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1053272d jne 0x10532741 */
  if (!C.zf) goto L_10532741;
  /* 1053272f call 0x10532770 */
  push32(0x10532734u); f_10532770();
  /* 10532734 mov eax, dword ptr [0x1054f888] */
  EAX = (r32((uint32_t)(0x1054f888)));
  /* 10532739 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1053273c mov dword ptr [0x1054f888], eax */
  w32((uint32_t)(0x1054f888), (EAX));
L_10532741:;
  /* 10532741 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10532743 call 0x105276b0 */
  push32(0x10532748u); f_105276b0();
  /* 10532748 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1053274b:;
  /* 1053274b pop ebp */
  EBP = (pop32());
  /* 1053274c ret  */
  ESPCHK(0x10532710u, _esp0);
  ESP += 4; return;
}

/* FUN_10012750 @ 0x10532750 (30 bytes, 11 insns) */
void f_10532750(void) {
  FTRACE(0x10532750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10532750 push ebp */
  push32((uint32_t)(EBP));
  /* 10532751 mov ebp, esp */
  EBP = (ESP);
  /* 10532753 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10532755 call 0x10527610 */
  push32(0x1053275au); f_10527610();
  /* 1053275a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1053275d call 0x10532770 */
  push32(0x10532762u); f_10532770();
  /* 10532762 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10532764 call 0x105276b0 */
  push32(0x10532769u); f_105276b0();
  /* 10532769 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1053276c pop ebp */
  EBP = (pop32());
  /* 1053276d ret  */
  ESPCHK(0x10532750u, _esp0);
  ESP += 4; return;
}

/* FUN_10012770 @ 0x10532770 (939 bytes, 266 insns) */
void f_10532770(void) {
  FTRACE(0x10532770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10532770 push ebp */
  push32((uint32_t)(EBP));
  /* 10532771 mov ebp, esp */
  EBP = (ESP);
  /* 10532773 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10532776 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1053277d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1053277f call 0x10527610 */
  push32(0x10532784u); f_10527610();
  /* 10532784 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10532787 mov dword ptr [0x1054f7d0], 0 */
  w32((uint32_t)(0x1054f7d0), (0x0u));
  /* 10532791 mov dword ptr [0x1054ee38], 0xffffffff */
  w32((uint32_t)(0x1054ee38), (0xffffffffu));
  /* 1053279b mov eax, dword ptr [0x1054ee38] */
  EAX = (r32((uint32_t)(0x1054ee38)));
  /* 105327a0 mov dword ptr [0x1054ee28], eax */
  w32((uint32_t)(0x1054ee28), (EAX));
  /* 105327a5 push 0x1054ba00 */
  push32((uint32_t)(0x1054ba00u));
  /* 105327aa call 0x105335f0 */
  push32(0x105327afu); f_105335f0();
  /* 105327af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105327b2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105327b5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105327b9 jne 0x105328f3 */
  if (!C.zf) goto L_105328f3;
  /* 105327bf push 0xc */
  push32((uint32_t)(0xcu));
  /* 105327c1 call 0x105276b0 */
  push32(0x105327c6u); f_105276b0();
  /* 105327c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105327c9 push 0x1054f7d8 */
  push32((uint32_t)(0x1054f7d8u));
  /* 105327ce call dword ptr [0x105522b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105522b8))), 0x105327d4u);
  /* 105327d4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105327d7 je 0x105328ee */
  if (C.zf) goto L_105328ee;
  /* 105327dd mov dword ptr [0x1054f7d0], 1 */
  w32((uint32_t)(0x1054f7d0), (0x1u));
  /* 105327e7 mov ecx, dword ptr [0x1054f7d8] */
  ECX = (r32((uint32_t)(0x1054f7d8)));
  /* 105327ed imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105327f0 mov dword ptr [0x1054ed90], ecx */
  w32((uint32_t)(0x1054ed90), (ECX));
  /* 105327f6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105327f8 mov dx, word ptr [0x1054f81e] */
  DX = (r16((uint32_t)(0x1054f81e)));
  /* 105327ff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10532801 je 0x10532819 */
  if (C.zf) goto L_10532819;
  /* 10532803 mov eax, dword ptr [0x1054f82c] */
  EAX = (r32((uint32_t)(0x1054f82c)));
  /* 10532808 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1053280b mov ecx, dword ptr [0x1054ed90] */
  ECX = (r32((uint32_t)(0x1054ed90)));
  /* 10532811 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10532813 mov dword ptr [0x1054ed90], ecx */
  w32((uint32_t)(0x1054ed90), (ECX));
L_10532819:;
  /* 10532819 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1053281b mov dx, word ptr [0x1054f872] */
  DX = (r16((uint32_t)(0x1054f872)));
  /* 10532822 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10532824 je 0x1053284e */
  if (C.zf) goto L_1053284e;
  /* 10532826 cmp dword ptr [0x1054f880], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f880))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1053282d je 0x1053284e */
  if (C.zf) goto L_1053284e;
  /* 1053282f mov dword ptr [0x1054ed94], 1 */
  w32((uint32_t)(0x1054ed94), (0x1u));
  /* 10532839 mov eax, dword ptr [0x1054f880] */
  EAX = (r32((uint32_t)(0x1054f880)));
  /* 1053283e sub eax, dword ptr [0x1054f82c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1054f82c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10532844 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10532847 mov dword ptr [0x1054ed98], eax */
  w32((uint32_t)(0x1054ed98), (EAX));
  /* 1053284c jmp 0x10532862 */
  goto L_10532862;
L_1053284e:;
  /* 1053284e mov dword ptr [0x1054ed94], 0 */
  w32((uint32_t)(0x1054ed94), (0x0u));
  /* 10532858 mov dword ptr [0x1054ed98], 0 */
  w32((uint32_t)(0x1054ed98), (0x0u));
L_10532862:;
  /* 10532862 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10532865 push ecx */
  push32((uint32_t)(ECX));
  /* 10532866 push 0 */
  push32((uint32_t)(0x0u));
  /* 10532868 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1053286a mov edx, dword ptr [0x1054ee1c] */
  EDX = (r32((uint32_t)(0x1054ee1c)));
  /* 10532870 push edx */
  push32((uint32_t)(EDX));
  /* 10532871 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10532873 push 0x1054f7dc */
  push32((uint32_t)(0x1054f7dcu));
  /* 10532878 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1053287d mov eax, dword ptr [0x1054f740] */
  EAX = (r32((uint32_t)(0x1054f740)));
  /* 10532882 push eax */
  push32((uint32_t)(EAX));
  /* 10532883 call dword ptr [0x105523b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105523b8))), 0x10532889u);
  /* 10532889 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1053288b je 0x1053289f */
  if (C.zf) goto L_1053289f;
  /* 1053288d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10532891 jne 0x1053289f */
  if (!C.zf) goto L_1053289f;
  /* 10532893 mov ecx, dword ptr [0x1054ee1c] */
  ECX = (r32((uint32_t)(0x1054ee1c)));
  /* 10532899 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 1053289d jmp 0x105328a8 */
  goto L_105328a8;
L_1053289f:;
  /* 1053289f mov edx, dword ptr [0x1054ee1c] */
  EDX = (r32((uint32_t)(0x1054ee1c)));
  /* 105328a5 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_105328a8:;
  /* 105328a8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 105328ab push eax */
  push32((uint32_t)(EAX));
  /* 105328ac push 0 */
  push32((uint32_t)(0x0u));
  /* 105328ae push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 105328b0 mov ecx, dword ptr [0x1054ee20] */
  ECX = (r32((uint32_t)(0x1054ee20)));
  /* 105328b6 push ecx */
  push32((uint32_t)(ECX));
  /* 105328b7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 105328b9 push 0x1054f830 */
  push32((uint32_t)(0x1054f830u));
  /* 105328be push 0x220 */
  push32((uint32_t)(0x220u));
  /* 105328c3 mov edx, dword ptr [0x1054f740] */
  EDX = (r32((uint32_t)(0x1054f740)));
  /* 105328c9 push edx */
  push32((uint32_t)(EDX));
  /* 105328ca call dword ptr [0x105523b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105523b8))), 0x105328d0u);
  /* 105328d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105328d2 je 0x105328e5 */
  if (C.zf) goto L_105328e5;
  /* 105328d4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105328d8 jne 0x105328e5 */
  if (!C.zf) goto L_105328e5;
  /* 105328da mov eax, dword ptr [0x1054ee20] */
  EAX = (r32((uint32_t)(0x1054ee20)));
  /* 105328df mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 105328e3 jmp 0x105328ee */
  goto L_105328ee;
L_105328e5:;
  /* 105328e5 mov ecx, dword ptr [0x1054ee20] */
  ECX = (r32((uint32_t)(0x1054ee20)));
  /* 105328eb mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_105328ee:;
  /* 105328ee jmp 0x10532b17 */
  goto L_10532b17;
L_105328f3:;
  /* 105328f3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105328f6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 105328f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105328fb je 0x1053291d */
  if (C.zf) goto L_1053291d;
  /* 105328fd cmp dword ptr [0x1054f884], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f884))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10532904 je 0x1053292c */
  if (C.zf) goto L_1053292c;
  /* 10532906 mov ecx, dword ptr [0x1054f884] */
  ECX = (r32((uint32_t)(0x1054f884)));
  /* 1053290c push ecx */
  push32((uint32_t)(ECX));
  /* 1053290d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10532910 push edx */
  push32((uint32_t)(EDX));
  /* 10532911 call 0x1052f8a0 */
  push32(0x10532916u); f_1052f8a0();
  /* 10532916 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10532919 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1053291b jne 0x1053292c */
  if (!C.zf) goto L_1053292c;
L_1053291d:;
  /* 1053291d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1053291f call 0x105276b0 */
  push32(0x10532924u); f_105276b0();
  /* 10532924 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10532927 jmp 0x10532b17 */
  goto L_10532b17;
L_1053292c:;
  /* 1053292c push 2 */
  push32((uint32_t)(0x2u));
  /* 1053292e mov eax, dword ptr [0x1054f884] */
  EAX = (r32((uint32_t)(0x1054f884)));
  /* 10532933 push eax */
  push32((uint32_t)(EAX));
  /* 10532934 call 0x105246a0 */
  push32(0x10532939u); f_105246a0();
  /* 10532939 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1053293c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 10532941 push 0x1054b9f8 */
  push32((uint32_t)(0x1054b9f8u));
  /* 10532946 push 2 */
  push32((uint32_t)(0x2u));
  /* 10532948 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1053294b push ecx */
  push32((uint32_t)(ECX));
  /* 1053294c call 0x10526a40 */
  push32(0x10532951u); f_10526a40();
  /* 10532951 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10532954 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10532957 push eax */
  push32((uint32_t)(EAX));
  /* 10532958 call 0x10523c10 */
  push32(0x1053295du); f_10523c10();
  /* 1053295d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10532960 mov dword ptr [0x1054f884], eax */
  w32((uint32_t)(0x1054f884), (EAX));
  /* 10532965 cmp dword ptr [0x1054f884], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f884))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1053296c jne 0x1053297d */
  if (!C.zf) goto L_1053297d;
  /* 1053296e push 0xc */
  push32((uint32_t)(0xcu));
  /* 10532970 call 0x105276b0 */
  push32(0x10532975u); f_105276b0();
  /* 10532975 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10532978 jmp 0x10532b17 */
  goto L_10532b17;
L_1053297d:;
  /* 1053297d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10532980 push edx */
  push32((uint32_t)(EDX));
  /* 10532981 mov eax, dword ptr [0x1054f884] */
  EAX = (r32((uint32_t)(0x1054f884)));
  /* 10532986 push eax */
  push32((uint32_t)(EAX));
  /* 10532987 call 0x10526bc0 */
  push32(0x1053298cu); f_10526bc0();
  /* 1053298c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1053298f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10532991 call 0x105276b0 */
  push32(0x10532996u); f_105276b0();
  /* 10532996 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10532999 push 3 */
  push32((uint32_t)(0x3u));
  /* 1053299b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1053299e push ecx */
  push32((uint32_t)(ECX));
  /* 1053299f mov edx, dword ptr [0x1054ee1c] */
  EDX = (r32((uint32_t)(0x1054ee1c)));
  /* 105329a5 push edx */
  push32((uint32_t)(EDX));
  /* 105329a6 call 0x10527430 */
  push32(0x105329abu); f_10527430();
  /* 105329ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105329ae mov eax, dword ptr [0x1054ee1c] */
  EAX = (r32((uint32_t)(0x1054ee1c)));
  /* 105329b3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 105329b7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105329ba add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105329bd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105329c0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105329c3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 105329c6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105329c9 jne 0x105329dd */
  if (!C.zf) goto L_105329dd;
  /* 105329cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105329ce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105329d1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105329d4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105329d7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105329da mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_105329dd:;
  /* 105329dd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105329e0 push eax */
  push32((uint32_t)(EAX));
  /* 105329e1 call 0x105324c0 */
  push32(0x105329e6u); f_105324c0();
  /* 105329e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105329e9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105329ef mov dword ptr [0x1054ed90], eax */
  w32((uint32_t)(0x1054ed90), (EAX));
L_105329f4:;
  /* 105329f4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105329f7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 105329fa cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105329fd je 0x10532a15 */
  if (C.zf) goto L_10532a15;
  /* 105329ff mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10532a02 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10532a05 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10532a08 jl 0x10532a20 */
  if ((C.sf!=C.of)) goto L_10532a20;
  /* 10532a0a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10532a0d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10532a10 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10532a13 jg 0x10532a20 */
  if ((!C.zf&&C.sf==C.of)) goto L_10532a20;
L_10532a15:;
  /* 10532a15 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10532a18 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10532a1b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10532a1e jmp 0x105329f4 */
  goto L_105329f4;
L_10532a20:;
  /* 10532a20 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10532a23 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10532a26 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10532a29 jne 0x10532ac5 */
  if (!C.zf) goto L_10532ac5;
  /* 10532a2f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10532a32 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10532a35 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10532a38 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10532a3b push edx */
  push32((uint32_t)(EDX));
  /* 10532a3c call 0x105324c0 */
  push32(0x10532a41u); f_105324c0();
  /* 10532a41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10532a44 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10532a47 mov ecx, dword ptr [0x1054ed90] */
  ECX = (r32((uint32_t)(0x1054ed90)));
  /* 10532a4d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10532a4f mov dword ptr [0x1054ed90], ecx */
  w32((uint32_t)(0x1054ed90), (ECX));
L_10532a55:;
  /* 10532a55 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10532a58 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10532a5b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10532a5e jl 0x10532a76 */
  if ((C.sf!=C.of)) goto L_10532a76;
  /* 10532a60 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10532a63 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10532a66 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10532a69 jg 0x10532a76 */
  if ((!C.zf&&C.sf==C.of)) goto L_10532a76;
  /* 10532a6b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10532a6e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10532a71 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10532a74 jmp 0x10532a55 */
  goto L_10532a55;
L_10532a76:;
  /* 10532a76 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10532a79 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10532a7c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10532a7f jne 0x10532ac5 */
  if (!C.zf) goto L_10532ac5;
  /* 10532a81 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10532a84 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10532a87 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10532a8a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10532a8d push ecx */
  push32((uint32_t)(ECX));
  /* 10532a8e call 0x105324c0 */
  push32(0x10532a93u); f_105324c0();
  /* 10532a93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10532a96 mov edx, dword ptr [0x1054ed90] */
  EDX = (r32((uint32_t)(0x1054ed90)));
  /* 10532a9c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10532a9e mov dword ptr [0x1054ed90], edx */
  w32((uint32_t)(0x1054ed90), (EDX));
L_10532aa4:;
  /* 10532aa4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10532aa7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10532aaa cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10532aad jl 0x10532ac5 */
  if ((C.sf!=C.of)) goto L_10532ac5;
  /* 10532aaf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10532ab2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10532ab5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10532ab8 jg 0x10532ac5 */
  if ((!C.zf&&C.sf==C.of)) goto L_10532ac5;
  /* 10532aba mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10532abd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10532ac0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10532ac3 jmp 0x10532aa4 */
  goto L_10532aa4;
L_10532ac5:;
  /* 10532ac5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10532ac9 je 0x10532ad9 */
  if (C.zf) goto L_10532ad9;
  /* 10532acb mov edx, dword ptr [0x1054ed90] */
  EDX = (r32((uint32_t)(0x1054ed90)));
  /* 10532ad1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10532ad3 mov dword ptr [0x1054ed90], edx */
  w32((uint32_t)(0x1054ed90), (EDX));
L_10532ad9:;
  /* 10532ad9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10532adc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10532adf mov dword ptr [0x1054ed94], ecx */
  w32((uint32_t)(0x1054ed94), (ECX));
  /* 10532ae5 cmp dword ptr [0x1054ed94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054ed94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10532aec je 0x10532b0e */
  if (C.zf) goto L_10532b0e;
  /* 10532aee push 3 */
  push32((uint32_t)(0x3u));
  /* 10532af0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10532af3 push edx */
  push32((uint32_t)(EDX));
  /* 10532af4 mov eax, dword ptr [0x1054ee20] */
  EAX = (r32((uint32_t)(0x1054ee20)));
  /* 10532af9 push eax */
  push32((uint32_t)(EAX));
  /* 10532afa call 0x10527430 */
  push32(0x10532affu); f_10527430();
  /* 10532aff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10532b02 mov ecx, dword ptr [0x1054ee20] */
  ECX = (r32((uint32_t)(0x1054ee20)));
  /* 10532b08 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 10532b0c jmp 0x10532b17 */
  goto L_10532b17;
L_10532b0e:;
  /* 10532b0e mov edx, dword ptr [0x1054ee20] */
  EDX = (r32((uint32_t)(0x1054ee20)));
  /* 10532b14 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10532b17:;
  /* 10532b17 mov esp, ebp */
  ESP = (EBP);
  /* 10532b19 pop ebp */
  EBP = (pop32());
  /* 10532b1a ret  */
  ESPCHK(0x10532770u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b20 @ 0x10532b20 (46 bytes, 18 insns) */
void f_10532b20(void) {
  FTRACE(0x10532b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10532b20 push ebp */
  push32((uint32_t)(EBP));
  /* 10532b21 mov ebp, esp */
  EBP = (ESP);
  /* 10532b23 push ecx */
  push32((uint32_t)(ECX));
  /* 10532b24 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10532b26 call 0x10527610 */
  push32(0x10532b2bu); f_10527610();
  /* 10532b2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10532b2e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10532b31 push eax */
  push32((uint32_t)(EAX));
  /* 10532b32 call 0x10532b50 */
  push32(0x10532b37u); f_10532b50();
  /* 10532b37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10532b3a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10532b3d push 0xb */
  push32((uint32_t)(0xbu));
  /* 10532b3f call 0x105276b0 */
  push32(0x10532b44u); f_105276b0();
  /* 10532b44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10532b47 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10532b4a mov esp, ebp */
  ESP = (EBP);
  /* 10532b4c pop ebp */
  EBP = (pop32());
  /* 10532b4d ret  */
  ESPCHK(0x10532b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b50 @ 0x10532b50 (762 bytes, 246 insns) */
void f_10532b50(void) {
  FTRACE(0x10532b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10532b50 push ebp */
  push32((uint32_t)(EBP));
  /* 10532b51 mov ebp, esp */
  EBP = (ESP);
  /* 10532b53 push ecx */
  push32((uint32_t)(ECX));
  /* 10532b54 cmp dword ptr [0x1054ed94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054ed94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10532b5b jne 0x10532b64 */
  if (!C.zf) goto L_10532b64;
  /* 10532b5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10532b5f jmp 0x10532e46 */
  goto L_10532e46;
L_10532b64:;
  /* 10532b64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10532b67 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10532b6a cmp ecx, dword ptr [0x1054ee28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1054ee28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10532b70 jne 0x10532b84 */
  if (!C.zf) goto L_10532b84;
  /* 10532b72 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10532b75 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10532b78 cmp eax, dword ptr [0x1054ee38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1054ee38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10532b7e je 0x10532d4b */
  if (C.zf) goto L_10532d4b;
L_10532b84:;
  /* 10532b84 cmp dword ptr [0x1054f7d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f7d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10532b8b je 0x10532d05 */
  if (C.zf) goto L_10532d05;
  /* 10532b91 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10532b93 mov cx, word ptr [0x1054f870] */
  CX = (r16((uint32_t)(0x1054f870)));
  /* 10532b9a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10532b9c jne 0x10532bf9 */
  if (!C.zf) goto L_10532bf9;
  /* 10532b9e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10532ba0 mov dx, word ptr [0x1054f87e] */
  DX = (r16((uint32_t)(0x1054f87e)));
  /* 10532ba7 push edx */
  push32((uint32_t)(EDX));
  /* 10532ba8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10532baa mov ax, word ptr [0x1054f87c] */
  AX = (r16((uint32_t)(0x1054f87c)));
  /* 10532bb0 push eax */
  push32((uint32_t)(EAX));
  /* 10532bb1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10532bb3 mov cx, word ptr [0x1054f87a] */
  CX = (r16((uint32_t)(0x1054f87a)));
  /* 10532bba push ecx */
  push32((uint32_t)(ECX));
  /* 10532bbb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10532bbd mov dx, word ptr [0x1054f878] */
  DX = (r16((uint32_t)(0x1054f878)));
  /* 10532bc4 push edx */
  push32((uint32_t)(EDX));
  /* 10532bc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10532bc7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10532bc9 mov ax, word ptr [0x1054f874] */
  AX = (r16((uint32_t)(0x1054f874)));
  /* 10532bcf push eax */
  push32((uint32_t)(EAX));
  /* 10532bd0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10532bd2 mov cx, word ptr [0x1054f876] */
  CX = (r16((uint32_t)(0x1054f876)));
  /* 10532bd9 push ecx */
  push32((uint32_t)(ECX));
  /* 10532bda xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10532bdc mov dx, word ptr [0x1054f872] */
  DX = (r16((uint32_t)(0x1054f872)));
  /* 10532be3 push edx */
  push32((uint32_t)(EDX));
  /* 10532be4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10532be7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10532bea push ecx */
  push32((uint32_t)(ECX));
  /* 10532beb push 1 */
  push32((uint32_t)(0x1u));
  /* 10532bed push 1 */
  push32((uint32_t)(0x1u));
  /* 10532bef call 0x10532e50 */
  push32(0x10532bf4u); f_10532e50();
  /* 10532bf4 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10532bf7 jmp 0x10532c4a */
  goto L_10532c4a;
L_10532bf9:;
  /* 10532bf9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10532bfb mov dx, word ptr [0x1054f87e] */
  DX = (r16((uint32_t)(0x1054f87e)));
  /* 10532c02 push edx */
  push32((uint32_t)(EDX));
  /* 10532c03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10532c05 mov ax, word ptr [0x1054f87c] */
  AX = (r16((uint32_t)(0x1054f87c)));
  /* 10532c0b push eax */
  push32((uint32_t)(EAX));
  /* 10532c0c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10532c0e mov cx, word ptr [0x1054f87a] */
  CX = (r16((uint32_t)(0x1054f87a)));
  /* 10532c15 push ecx */
  push32((uint32_t)(ECX));
  /* 10532c16 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10532c18 mov dx, word ptr [0x1054f878] */
  DX = (r16((uint32_t)(0x1054f878)));
  /* 10532c1f push edx */
  push32((uint32_t)(EDX));
  /* 10532c20 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10532c22 mov ax, word ptr [0x1054f876] */
  AX = (r16((uint32_t)(0x1054f876)));
  /* 10532c28 push eax */
  push32((uint32_t)(EAX));
  /* 10532c29 push 0 */
  push32((uint32_t)(0x0u));
  /* 10532c2b push 0 */
  push32((uint32_t)(0x0u));
  /* 10532c2d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10532c2f mov cx, word ptr [0x1054f872] */
  CX = (r16((uint32_t)(0x1054f872)));
  /* 10532c36 push ecx */
  push32((uint32_t)(ECX));
  /* 10532c37 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10532c3a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10532c3d push eax */
  push32((uint32_t)(EAX));
  /* 10532c3e push 0 */
  push32((uint32_t)(0x0u));
  /* 10532c40 push 1 */
  push32((uint32_t)(0x1u));
  /* 10532c42 call 0x10532e50 */
  push32(0x10532c47u); f_10532e50();
  /* 10532c47 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10532c4a:;
  /* 10532c4a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10532c4c mov cx, word ptr [0x1054f81c] */
  CX = (r16((uint32_t)(0x1054f81c)));
  /* 10532c53 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10532c55 jne 0x10532cb2 */
  if (!C.zf) goto L_10532cb2;
  /* 10532c57 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10532c59 mov dx, word ptr [0x1054f82a] */
  DX = (r16((uint32_t)(0x1054f82a)));
  /* 10532c60 push edx */
  push32((uint32_t)(EDX));
  /* 10532c61 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10532c63 mov ax, word ptr [0x1054f828] */
  AX = (r16((uint32_t)(0x1054f828)));
  /* 10532c69 push eax */
  push32((uint32_t)(EAX));
  /* 10532c6a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10532c6c mov cx, word ptr [0x1054f826] */
  CX = (r16((uint32_t)(0x1054f826)));
  /* 10532c73 push ecx */
  push32((uint32_t)(ECX));
  /* 10532c74 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10532c76 mov dx, word ptr [0x1054f824] */
  DX = (r16((uint32_t)(0x1054f824)));
  /* 10532c7d push edx */
  push32((uint32_t)(EDX));
  /* 10532c7e push 0 */
  push32((uint32_t)(0x0u));
  /* 10532c80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10532c82 mov ax, word ptr [0x1054f820] */
  AX = (r16((uint32_t)(0x1054f820)));
  /* 10532c88 push eax */
  push32((uint32_t)(EAX));
  /* 10532c89 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10532c8b mov cx, word ptr [0x1054f822] */
  CX = (r16((uint32_t)(0x1054f822)));
  /* 10532c92 push ecx */
  push32((uint32_t)(ECX));
  /* 10532c93 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10532c95 mov dx, word ptr [0x1054f81e] */
  DX = (r16((uint32_t)(0x1054f81e)));
  /* 10532c9c push edx */
  push32((uint32_t)(EDX));
  /* 10532c9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10532ca0 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10532ca3 push ecx */
  push32((uint32_t)(ECX));
  /* 10532ca4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10532ca6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10532ca8 call 0x10532e50 */
  push32(0x10532cadu); f_10532e50();
  /* 10532cad add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10532cb0 jmp 0x10532d03 */
  goto L_10532d03;
L_10532cb2:;
  /* 10532cb2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10532cb4 mov dx, word ptr [0x1054f82a] */
  DX = (r16((uint32_t)(0x1054f82a)));
  /* 10532cbb push edx */
  push32((uint32_t)(EDX));
  /* 10532cbc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10532cbe mov ax, word ptr [0x1054f828] */
  AX = (r16((uint32_t)(0x1054f828)));
  /* 10532cc4 push eax */
  push32((uint32_t)(EAX));
  /* 10532cc5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10532cc7 mov cx, word ptr [0x1054f826] */
  CX = (r16((uint32_t)(0x1054f826)));
  /* 10532cce push ecx */
  push32((uint32_t)(ECX));
  /* 10532ccf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10532cd1 mov dx, word ptr [0x1054f824] */
  DX = (r16((uint32_t)(0x1054f824)));
  /* 10532cd8 push edx */
  push32((uint32_t)(EDX));
  /* 10532cd9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10532cdb mov ax, word ptr [0x1054f822] */
  AX = (r16((uint32_t)(0x1054f822)));
  /* 10532ce1 push eax */
  push32((uint32_t)(EAX));
  /* 10532ce2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10532ce4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10532ce6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10532ce8 mov cx, word ptr [0x1054f81e] */
  CX = (r16((uint32_t)(0x1054f81e)));
  /* 10532cef push ecx */
  push32((uint32_t)(ECX));
  /* 10532cf0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10532cf3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10532cf6 push eax */
  push32((uint32_t)(EAX));
  /* 10532cf7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10532cf9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10532cfb call 0x10532e50 */
  push32(0x10532d00u); f_10532e50();
  /* 10532d00 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10532d03:;
  /* 10532d03 jmp 0x10532d4b */
  goto L_10532d4b;
L_10532d05:;
  /* 10532d05 push 0 */
  push32((uint32_t)(0x0u));
  /* 10532d07 push 0 */
  push32((uint32_t)(0x0u));
  /* 10532d09 push 0 */
  push32((uint32_t)(0x0u));
  /* 10532d0b push 2 */
  push32((uint32_t)(0x2u));
  /* 10532d0d push 0 */
  push32((uint32_t)(0x0u));
  /* 10532d0f push 0 */
  push32((uint32_t)(0x0u));
  /* 10532d11 push 1 */
  push32((uint32_t)(0x1u));
  /* 10532d13 push 4 */
  push32((uint32_t)(0x4u));
  /* 10532d15 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10532d18 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10532d1b push edx */
  push32((uint32_t)(EDX));
  /* 10532d1c push 1 */
  push32((uint32_t)(0x1u));
  /* 10532d1e push 1 */
  push32((uint32_t)(0x1u));
  /* 10532d20 call 0x10532e50 */
  push32(0x10532d25u); f_10532e50();
  /* 10532d25 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10532d28 push 0 */
  push32((uint32_t)(0x0u));
  /* 10532d2a push 0 */
  push32((uint32_t)(0x0u));
  /* 10532d2c push 0 */
  push32((uint32_t)(0x0u));
  /* 10532d2e push 2 */
  push32((uint32_t)(0x2u));
  /* 10532d30 push 0 */
  push32((uint32_t)(0x0u));
  /* 10532d32 push 0 */
  push32((uint32_t)(0x0u));
  /* 10532d34 push 5 */
  push32((uint32_t)(0x5u));
  /* 10532d36 push 0xa */
  push32((uint32_t)(0xau));
  /* 10532d38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10532d3b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10532d3e push ecx */
  push32((uint32_t)(ECX));
  /* 10532d3f push 1 */
  push32((uint32_t)(0x1u));
  /* 10532d41 push 0 */
  push32((uint32_t)(0x0u));
  /* 10532d43 call 0x10532e50 */
  push32(0x10532d48u); f_10532e50();
  /* 10532d48 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10532d4b:;
  /* 10532d4b mov edx, dword ptr [0x1054ee2c] */
  EDX = (r32((uint32_t)(0x1054ee2c)));
  /* 10532d51 cmp edx, dword ptr [0x1054ee3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1054ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10532d57 jge 0x10532da4 */
  if ((C.sf==C.of)) goto L_10532da4;
  /* 10532d59 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10532d5c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10532d5f cmp ecx, dword ptr [0x1054ee2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1054ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10532d65 jl 0x10532d75 */
  if ((C.sf!=C.of)) goto L_10532d75;
  /* 10532d67 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10532d6a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10532d6d cmp eax, dword ptr [0x1054ee3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1054ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10532d73 jle 0x10532d7c */
  if ((C.zf||C.sf!=C.of)) goto L_10532d7c;
L_10532d75:;
  /* 10532d75 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10532d77 jmp 0x10532e46 */
  goto L_10532e46;
L_10532d7c:;
  /* 10532d7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10532d7f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10532d82 cmp edx, dword ptr [0x1054ee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1054ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10532d88 jle 0x10532da2 */
  if ((C.zf||C.sf!=C.of)) goto L_10532da2;
  /* 10532d8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10532d8d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10532d90 cmp ecx, dword ptr [0x1054ee3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1054ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10532d96 jge 0x10532da2 */
  if ((C.sf==C.of)) goto L_10532da2;
  /* 10532d98 mov eax, 1 */
  EAX = (0x1u);
  /* 10532d9d jmp 0x10532e46 */
  goto L_10532e46;
L_10532da2:;
  /* 10532da2 jmp 0x10532de7 */
  goto L_10532de7;
L_10532da4:;
  /* 10532da4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10532da7 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10532daa cmp eax, dword ptr [0x1054ee3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1054ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10532db0 jl 0x10532dc0 */
  if ((C.sf!=C.of)) goto L_10532dc0;
  /* 10532db2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10532db5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10532db8 cmp edx, dword ptr [0x1054ee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1054ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10532dbe jle 0x10532dc7 */
  if ((C.zf||C.sf!=C.of)) goto L_10532dc7;
L_10532dc0:;
  /* 10532dc0 mov eax, 1 */
  EAX = (0x1u);
  /* 10532dc5 jmp 0x10532e46 */
  goto L_10532e46;
L_10532dc7:;
  /* 10532dc7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10532dca mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10532dcd cmp ecx, dword ptr [0x1054ee3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1054ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10532dd3 jle 0x10532de7 */
  if ((C.zf||C.sf!=C.of)) goto L_10532de7;
  /* 10532dd5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10532dd8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10532ddb cmp eax, dword ptr [0x1054ee2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1054ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10532de1 jge 0x10532de7 */
  if ((C.sf==C.of)) goto L_10532de7;
  /* 10532de3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10532de5 jmp 0x10532e46 */
  goto L_10532e46;
L_10532de7:;
  /* 10532de7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10532dea mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10532ded imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10532df0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10532df3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10532df5 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10532df7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10532dfa mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10532dfd imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10532e03 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10532e05 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10532e0b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10532e0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10532e11 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10532e14 cmp edx, dword ptr [0x1054ee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1054ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10532e1a jne 0x10532e32 */
  if (!C.zf) goto L_10532e32;
  /* 10532e1c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10532e1f cmp eax, dword ptr [0x1054ee30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1054ee30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10532e25 jl 0x10532e2e */
  if ((C.sf!=C.of)) goto L_10532e2e;
  /* 10532e27 mov eax, 1 */
  EAX = (0x1u);
  /* 10532e2c jmp 0x10532e46 */
  goto L_10532e46;
L_10532e2e:;
  /* 10532e2e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10532e30 jmp 0x10532e46 */
  goto L_10532e46;
L_10532e32:;
  /* 10532e32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10532e35 cmp ecx, dword ptr [0x1054ee40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1054ee40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10532e3b jge 0x10532e44 */
  if ((C.sf==C.of)) goto L_10532e44;
  /* 10532e3d mov eax, 1 */
  EAX = (0x1u);
  /* 10532e42 jmp 0x10532e46 */
  goto L_10532e46;
L_10532e44:;
  /* 10532e44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10532e46:;
  /* 10532e46 mov esp, ebp */
  ESP = (EBP);
  /* 10532e48 pop ebp */
  EBP = (pop32());
  /* 10532e49 ret  */
  ESPCHK(0x10532b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10012e50 @ 0x10532e50 (504 bytes, 145 insns) */
void f_10532e50(void) {
  FTRACE(0x10532e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10532e50 push ebp */
  push32((uint32_t)(EBP));
  /* 10532e51 mov ebp, esp */
  EBP = (ESP);
  /* 10532e53 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10532e56 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10532e5a jne 0x10532f2c */
  if (!C.zf) goto L_10532f2c;
  /* 10532e60 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10532e63 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10532e66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10532e68 jne 0x10532e79 */
  if (!C.zf) goto L_10532e79;
  /* 10532e6a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10532e6d mov edx, dword ptr [ecx*4 + 0x1054ee4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1054ee4c)));
  /* 10532e74 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10532e77 jmp 0x10532e86 */
  goto L_10532e86;
L_10532e79:;
  /* 10532e79 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10532e7c mov ecx, dword ptr [eax*4 + 0x1054ee80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1054ee80)));
  /* 10532e83 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10532e86:;
  /* 10532e86 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10532e89 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10532e8c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10532e8f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10532e92 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10532e95 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10532e9b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10532e9e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10532ea0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10532ea3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10532ea6 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10532ea9 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 10532ead cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10532eae mov ecx, 7 */
  ECX = (0x7u);
  /* 10532eb3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10532eb5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10532eb8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10532ebb cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10532ebe jge 0x10532ed9 */
  if ((C.sf==C.of)) goto L_10532ed9;
  /* 10532ec0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10532ec3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10532ec6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10532ec9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10532ecc imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10532ecf add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10532ed2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10532ed4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10532ed7 jmp 0x10532eed */
  goto L_10532eed;
L_10532ed9:;
  /* 10532ed9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10532edc sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10532edf mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10532ee2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10532ee5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10532ee8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10532eea mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10532eed:;
  /* 10532eed cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10532ef1 jne 0x10532f2a */
  if (!C.zf) goto L_10532f2a;
  /* 10532ef3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10532ef6 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10532ef9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10532efb jne 0x10532f0c */
  if (!C.zf) goto L_10532f0c;
  /* 10532efd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10532f00 mov eax, dword ptr [edx*4 + 0x1054ee50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1054ee50)));
  /* 10532f07 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10532f0a jmp 0x10532f19 */
  goto L_10532f19;
L_10532f0c:;
  /* 10532f0c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10532f0f mov edx, dword ptr [ecx*4 + 0x1054ee84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1054ee84)));
  /* 10532f16 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10532f19:;
  /* 10532f19 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10532f1c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10532f1f jle 0x10532f2a */
  if ((C.zf||C.sf!=C.of)) goto L_10532f2a;
  /* 10532f21 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10532f24 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10532f27 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10532f2a:;
  /* 10532f2a jmp 0x10532f61 */
  goto L_10532f61;
L_10532f2c:;
  /* 10532f2c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10532f2f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10532f32 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10532f34 jne 0x10532f45 */
  if (!C.zf) goto L_10532f45;
  /* 10532f36 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10532f39 mov ecx, dword ptr [eax*4 + 0x1054ee4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1054ee4c)));
  /* 10532f40 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10532f43 jmp 0x10532f52 */
  goto L_10532f52;
L_10532f45:;
  /* 10532f45 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10532f48 mov eax, dword ptr [edx*4 + 0x1054ee80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1054ee80)));
  /* 10532f4f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10532f52:;
  /* 10532f52 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10532f55 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10532f58 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10532f5b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10532f5e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10532f61:;
  /* 10532f61 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10532f65 jne 0x10532fa1 */
  if (!C.zf) goto L_10532fa1;
  /* 10532f67 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10532f6a mov dword ptr [0x1054ee2c], eax */
  w32((uint32_t)(0x1054ee2c), (EAX));
  /* 10532f6f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10532f72 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10532f75 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10532f78 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10532f7a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10532f7d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10532f80 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10532f82 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10532f88 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10532f8b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10532f8d mov dword ptr [0x1054ee30], ecx */
  w32((uint32_t)(0x1054ee30), (ECX));
  /* 10532f93 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10532f96 mov dword ptr [0x1054ee28], edx */
  w32((uint32_t)(0x1054ee28), (EDX));
  /* 10532f9c jmp 0x10533044 */
  goto L_10533044;
L_10532fa1:;
  /* 10532fa1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10532fa4 mov dword ptr [0x1054ee3c], eax */
  w32((uint32_t)(0x1054ee3c), (EAX));
  /* 10532fa9 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10532fac imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10532faf mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10532fb2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10532fb4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10532fb7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10532fba add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10532fbc imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10532fc2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10532fc5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10532fc7 mov dword ptr [0x1054ee40], ecx */
  w32((uint32_t)(0x1054ee40), (ECX));
  /* 10532fcd mov edx, dword ptr [0x1054ed98] */
  EDX = (r32((uint32_t)(0x1054ed98)));
  /* 10532fd3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10532fd9 mov eax, dword ptr [0x1054ee40] */
  EAX = (r32((uint32_t)(0x1054ee40)));
  /* 10532fde add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10532fe0 mov dword ptr [0x1054ee40], eax */
  w32((uint32_t)(0x1054ee40), (EAX));
  /* 10532fe5 cmp dword ptr [0x1054ee40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054ee40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10532fec jge 0x10533011 */
  if ((C.sf==C.of)) goto L_10533011;
  /* 10532fee mov ecx, dword ptr [0x1054ee40] */
  ECX = (r32((uint32_t)(0x1054ee40)));
  /* 10532ff4 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10532ffa mov dword ptr [0x1054ee40], ecx */
  w32((uint32_t)(0x1054ee40), (ECX));
  /* 10533000 mov edx, dword ptr [0x1054ee3c] */
  EDX = (r32((uint32_t)(0x1054ee3c)));
  /* 10533006 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10533009 mov dword ptr [0x1054ee3c], edx */
  w32((uint32_t)(0x1054ee3c), (EDX));
  /* 1053300f jmp 0x1053303b */
  goto L_1053303b;
L_10533011:;
  /* 10533011 cmp dword ptr [0x1054ee40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x1054ee40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1053301b jl 0x1053303b */
  if ((C.sf!=C.of)) goto L_1053303b;
  /* 1053301d mov eax, dword ptr [0x1054ee40] */
  EAX = (r32((uint32_t)(0x1054ee40)));
  /* 10533022 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10533027 mov dword ptr [0x1054ee40], eax */
  w32((uint32_t)(0x1054ee40), (EAX));
  /* 1053302c mov ecx, dword ptr [0x1054ee3c] */
  ECX = (r32((uint32_t)(0x1054ee3c)));
  /* 10533032 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10533035 mov dword ptr [0x1054ee3c], ecx */
  w32((uint32_t)(0x1054ee3c), (ECX));
L_1053303b:;
  /* 1053303b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1053303e mov dword ptr [0x1054ee38], edx */
  w32((uint32_t)(0x1054ee38), (EDX));
L_10533044:;
  /* 10533044 mov esp, ebp */
  ESP = (EBP);
  /* 10533046 pop ebp */
  EBP = (pop32());
  /* 10533047 ret  */
  ESPCHK(0x10532e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10013050 @ 0x10533050 (382 bytes, 135 insns) */
void f_10533050(void) {
  FTRACE(0x10533050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10533050 push ebp */
  push32((uint32_t)(EBP));
  /* 10533051 mov ebp, esp */
  EBP = (ESP);
  /* 10533053 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10533055 push 0x1054ba08 */
  push32((uint32_t)(0x1054ba08u));
  /* 1053305a push 0x1052cd18 */
  push32((uint32_t)(0x1052cd18u));
  /* 1053305f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10533065 push eax */
  push32((uint32_t)(EAX));
  /* 10533066 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1053306d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10533070 push ebx */
  push32((uint32_t)(EBX));
  /* 10533071 push esi */
  push32((uint32_t)(ESI));
  /* 10533072 push edi */
  push32((uint32_t)(EDI));
  /* 10533073 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10533076 cmp dword ptr [0x1054f88c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f88c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1053307d jne 0x105330c2 */
  if (!C.zf) goto L_105330c2;
  /* 1053307f push 0 */
  push32((uint32_t)(0x0u));
  /* 10533081 push 0 */
  push32((uint32_t)(0x0u));
  /* 10533083 push 1 */
  push32((uint32_t)(0x1u));
  /* 10533085 push 0 */
  push32((uint32_t)(0x0u));
  /* 10533087 call dword ptr [0x105522b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105522b4))), 0x1053308du);
  /* 1053308d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1053308f je 0x1053309d */
  if (C.zf) goto L_1053309d;
  /* 10533091 mov dword ptr [0x1054f88c], 1 */
  w32((uint32_t)(0x1054f88c), (0x1u));
  /* 1053309b jmp 0x105330c2 */
  goto L_105330c2;
L_1053309d:;
  /* 1053309d push 0 */
  push32((uint32_t)(0x0u));
  /* 1053309f push 0 */
  push32((uint32_t)(0x0u));
  /* 105330a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 105330a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 105330a5 call dword ptr [0x105522cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105522cc))), 0x105330abu);
  /* 105330ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105330ad je 0x105330bb */
  if (C.zf) goto L_105330bb;
  /* 105330af mov dword ptr [0x1054f88c], 2 */
  w32((uint32_t)(0x1054f88c), (0x2u));
  /* 105330b9 jmp 0x105330c2 */
  goto L_105330c2;
L_105330bb:;
  /* 105330bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105330bd jmp 0x105331d1 */
  goto L_105331d1;
L_105330c2:;
  /* 105330c2 cmp dword ptr [0x1054f88c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1054f88c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105330c9 jne 0x105330e6 */
  if (!C.zf) goto L_105330e6;
  /* 105330cb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105330ce push eax */
  push32((uint32_t)(EAX));
  /* 105330cf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105330d2 push ecx */
  push32((uint32_t)(ECX));
  /* 105330d3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105330d6 push edx */
  push32((uint32_t)(EDX));
  /* 105330d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105330da push eax */
  push32((uint32_t)(EAX));
  /* 105330db call dword ptr [0x105522b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105522b4))), 0x105330e1u);
  /* 105330e1 jmp 0x105331d1 */
  goto L_105331d1;
L_105330e6:;
  /* 105330e6 cmp dword ptr [0x1054f88c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1054f88c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105330ed jne 0x105331cf */
  if (!C.zf) goto L_105331cf;
  /* 105330f3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105330f7 jne 0x10533102 */
  if (!C.zf) goto L_10533102;
  /* 105330f9 mov ecx, dword ptr [0x1054f740] */
  ECX = (r32((uint32_t)(0x1054f740)));
  /* 105330ff mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10533102:;
  /* 10533102 push 0 */
  push32((uint32_t)(0x0u));
  /* 10533104 push 0 */
  push32((uint32_t)(0x0u));
  /* 10533106 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10533109 push edx */
  push32((uint32_t)(EDX));
  /* 1053310a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1053310d push eax */
  push32((uint32_t)(EAX));
  /* 1053310e call dword ptr [0x105522cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105522cc))), 0x10533114u);
  /* 10533114 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10533117 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1053311b jne 0x10533124 */
  if (!C.zf) goto L_10533124;
  /* 1053311d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1053311f jmp 0x105331d1 */
  goto L_105331d1;
L_10533124:;
  /* 10533124 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1053312b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1053312e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10533131 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10533133 call 0x10526db0 */
  push32(0x10533138u); f_10526db0();
  /* 10533138 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 1053313b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1053313e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10533141 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10533144 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1053314b jmp 0x10533164 */
  goto L_10533164;
  /* 1053314d mov eax, 1 */
  EAX = (0x1u);
  /* 10533152 ret  */
  ESPCHK(0x10533050u, _esp0);
  ESP += 4; return;
  /* 10533153 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10533156 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1053315d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10533164:;
  /* 10533164 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10533168 jne 0x1053316e */
  if (!C.zf) goto L_1053316e;
  /* 1053316a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1053316c jmp 0x105331d1 */
  goto L_105331d1;
L_1053316e:;
  /* 1053316e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10533171 push edx */
  push32((uint32_t)(EDX));
  /* 10533172 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10533175 push eax */
  push32((uint32_t)(EAX));
  /* 10533176 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10533179 push ecx */
  push32((uint32_t)(ECX));
  /* 1053317a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1053317d push edx */
  push32((uint32_t)(EDX));
  /* 1053317e call dword ptr [0x105522cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105522cc))), 0x10533184u);
  /* 10533184 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10533186 jne 0x1053318c */
  if (!C.zf) goto L_1053318c;
  /* 10533188 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1053318a jmp 0x105331d1 */
  goto L_105331d1;
L_1053318c:;
  /* 1053318c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10533190 jne 0x105331ad */
  if (!C.zf) goto L_105331ad;
  /* 10533192 push 0 */
  push32((uint32_t)(0x0u));
  /* 10533194 push 0 */
  push32((uint32_t)(0x0u));
  /* 10533196 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10533198 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1053319b push eax */
  push32((uint32_t)(EAX));
  /* 1053319c push 1 */
  push32((uint32_t)(0x1u));
  /* 1053319e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 105331a1 push ecx */
  push32((uint32_t)(ECX));
  /* 105331a2 call dword ptr [0x105522fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105522fc))), 0x105331a8u);
  /* 105331a8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 105331ab jmp 0x105331ca */
  goto L_105331ca;
L_105331ad:;
  /* 105331ad mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105331b0 push edx */
  push32((uint32_t)(EDX));
  /* 105331b1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105331b4 push eax */
  push32((uint32_t)(EAX));
  /* 105331b5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 105331b7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105331ba push ecx */
  push32((uint32_t)(ECX));
  /* 105331bb push 1 */
  push32((uint32_t)(0x1u));
  /* 105331bd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105331c0 push edx */
  push32((uint32_t)(EDX));
  /* 105331c1 call dword ptr [0x105522fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105522fc))), 0x105331c7u);
  /* 105331c7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_105331ca:;
  /* 105331ca mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 105331cd jmp 0x105331d1 */
  goto L_105331d1;
L_105331cf:;
  /* 105331cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105331d1:;
  /* 105331d1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 105331d4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105331d7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 105331de pop edi */
  EDI = (pop32());
  /* 105331df pop esi */
  ESI = (pop32());
  /* 105331e0 pop ebx */
  EBX = (pop32());
  /* 105331e1 mov esp, ebp */
  ESP = (EBP);
  /* 105331e3 pop ebp */
  EBP = (pop32());
  /* 105331e4 ret  */
  ESPCHK(0x10533050u, _esp0);
  ESP += 4; return;
}

/* FUN_100131f0 @ 0x105331f0 (398 bytes, 140 insns) */
void f_105331f0(void) {
  FTRACE(0x105331f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105331f0 push ebp */
  push32((uint32_t)(EBP));
  /* 105331f1 mov ebp, esp */
  EBP = (ESP);
  /* 105331f3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 105331f5 push 0x1054ba18 */
  push32((uint32_t)(0x1054ba18u));
  /* 105331fa push 0x1052cd18 */
  push32((uint32_t)(0x1052cd18u));
  /* 105331ff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10533205 push eax */
  push32((uint32_t)(EAX));
  /* 10533206 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1053320d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10533210 push ebx */
  push32((uint32_t)(EBX));
  /* 10533211 push esi */
  push32((uint32_t)(ESI));
  /* 10533212 push edi */
  push32((uint32_t)(EDI));
  /* 10533213 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10533216 cmp dword ptr [0x1054f890], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f890))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1053321d jne 0x10533262 */
  if (!C.zf) goto L_10533262;
  /* 1053321f push 0 */
  push32((uint32_t)(0x0u));
  /* 10533221 push 0 */
  push32((uint32_t)(0x0u));
  /* 10533223 push 1 */
  push32((uint32_t)(0x1u));
  /* 10533225 push 0 */
  push32((uint32_t)(0x0u));
  /* 10533227 call dword ptr [0x105522b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105522b4))), 0x1053322du);
  /* 1053322d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1053322f je 0x1053323d */
  if (C.zf) goto L_1053323d;
  /* 10533231 mov dword ptr [0x1054f890], 1 */
  w32((uint32_t)(0x1054f890), (0x1u));
  /* 1053323b jmp 0x10533262 */
  goto L_10533262;
L_1053323d:;
  /* 1053323d push 0 */
  push32((uint32_t)(0x0u));
  /* 1053323f push 0 */
  push32((uint32_t)(0x0u));
  /* 10533241 push 1 */
  push32((uint32_t)(0x1u));
  /* 10533243 push 0 */
  push32((uint32_t)(0x0u));
  /* 10533245 call dword ptr [0x105522cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105522cc))), 0x1053324bu);
  /* 1053324b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1053324d je 0x1053325b */
  if (C.zf) goto L_1053325b;
  /* 1053324f mov dword ptr [0x1054f890], 2 */
  w32((uint32_t)(0x1054f890), (0x2u));
  /* 10533259 jmp 0x10533262 */
  goto L_10533262;
L_1053325b:;
  /* 1053325b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1053325d jmp 0x10533381 */
  goto L_10533381;
L_10533262:;
  /* 10533262 cmp dword ptr [0x1054f890], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1054f890))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10533269 jne 0x10533286 */
  if (!C.zf) goto L_10533286;
  /* 1053326b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1053326e push eax */
  push32((uint32_t)(EAX));
  /* 1053326f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10533272 push ecx */
  push32((uint32_t)(ECX));
  /* 10533273 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10533276 push edx */
  push32((uint32_t)(EDX));
  /* 10533277 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1053327a push eax */
  push32((uint32_t)(EAX));
  /* 1053327b call dword ptr [0x105522cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105522cc))), 0x10533281u);
  /* 10533281 jmp 0x10533381 */
  goto L_10533381;
L_10533286:;
  /* 10533286 cmp dword ptr [0x1054f890], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1054f890))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1053328d jne 0x1053337f */
  if (!C.zf) goto L_1053337f;
  /* 10533293 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10533297 jne 0x105332a2 */
  if (!C.zf) goto L_105332a2;
  /* 10533299 mov ecx, dword ptr [0x1054f740] */
  ECX = (r32((uint32_t)(0x1054f740)));
  /* 1053329f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_105332a2:;
  /* 105332a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 105332a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 105332a6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105332a9 push edx */
  push32((uint32_t)(EDX));
  /* 105332aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105332ad push eax */
  push32((uint32_t)(EAX));
  /* 105332ae call dword ptr [0x105522b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105522b4))), 0x105332b4u);
  /* 105332b4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 105332b7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105332bb jne 0x105332c4 */
  if (!C.zf) goto L_105332c4;
  /* 105332bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105332bf jmp 0x10533381 */
  goto L_10533381;
L_105332c4:;
  /* 105332c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105332cb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105332ce shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 105332d0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105332d3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 105332d5 call 0x10526db0 */
  push32(0x105332dau); f_10526db0();
  /* 105332da mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 105332dd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 105332e0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 105332e3 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 105332e6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 105332ed jmp 0x10533306 */
  goto L_10533306;
  /* 105332ef mov eax, 1 */
  EAX = (0x1u);
  /* 105332f4 ret  */
  ESPCHK(0x105331f0u, _esp0);
  ESP += 4; return;
  /* 105332f5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 105332f8 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 105332ff mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10533306:;
  /* 10533306 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1053330a jne 0x10533310 */
  if (!C.zf) goto L_10533310;
  /* 1053330c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1053330e jmp 0x10533381 */
  goto L_10533381;
L_10533310:;
  /* 10533310 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10533313 push edx */
  push32((uint32_t)(EDX));
  /* 10533314 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10533317 push eax */
  push32((uint32_t)(EAX));
  /* 10533318 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1053331b push ecx */
  push32((uint32_t)(ECX));
  /* 1053331c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1053331f push edx */
  push32((uint32_t)(EDX));
  /* 10533320 call dword ptr [0x105522b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105522b4))), 0x10533326u);
  /* 10533326 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10533328 jne 0x1053332e */
  if (!C.zf) goto L_1053332e;
  /* 1053332a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1053332c jmp 0x10533381 */
  goto L_10533381;
L_1053332e:;
  /* 1053332e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10533332 jne 0x10533356 */
  if (!C.zf) goto L_10533356;
  /* 10533334 push 0 */
  push32((uint32_t)(0x0u));
  /* 10533336 push 0 */
  push32((uint32_t)(0x0u));
  /* 10533338 push 0 */
  push32((uint32_t)(0x0u));
  /* 1053333a push 0 */
  push32((uint32_t)(0x0u));
  /* 1053333c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1053333e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10533341 push eax */
  push32((uint32_t)(EAX));
  /* 10533342 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10533347 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1053334a push ecx */
  push32((uint32_t)(ECX));
  /* 1053334b call dword ptr [0x105523b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105523b8))), 0x10533351u);
  /* 10533351 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10533354 jmp 0x1053337a */
  goto L_1053337a;
L_10533356:;
  /* 10533356 push 0 */
  push32((uint32_t)(0x0u));
  /* 10533358 push 0 */
  push32((uint32_t)(0x0u));
  /* 1053335a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1053335d push edx */
  push32((uint32_t)(EDX));
  /* 1053335e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10533361 push eax */
  push32((uint32_t)(EAX));
  /* 10533362 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10533364 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10533367 push ecx */
  push32((uint32_t)(ECX));
  /* 10533368 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1053336d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10533370 push edx */
  push32((uint32_t)(EDX));
  /* 10533371 call dword ptr [0x105523b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105523b8))), 0x10533377u);
  /* 10533377 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1053337a:;
  /* 1053337a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1053337d jmp 0x10533381 */
  goto L_10533381;
L_1053337f:;
  /* 1053337f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10533381:;
  /* 10533381 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10533384 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10533387 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1053338e pop edi */
  EDI = (pop32());
  /* 1053338f pop esi */
  ESI = (pop32());
  /* 10533390 pop ebx */
  EBX = (pop32());
  /* 10533391 mov esp, ebp */
  ESP = (EBP);
  /* 10533393 pop ebp */
  EBP = (pop32());
  /* 10533394 ret  */
  ESPCHK(0x105331f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100133a0 @ 0x105333a0 (11 bytes, 6 insns) */
void f_105333a0(void) {
  FTRACE(0x105333a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105333a0 push ebp */
  push32((uint32_t)(EBP));
  /* 105333a1 mov ebp, esp */
  EBP = (ESP);
  /* 105333a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105333a6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105333a9 pop ebp */
  EBP = (pop32());
  /* 105333aa ret  */
  ESPCHK(0x105333a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100133b0 @ 0x105333b0 (147 bytes, 43 insns) */
void f_105333b0(void) {
  FTRACE(0x105333b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105333b0 push ebp */
  push32((uint32_t)(EBP));
  /* 105333b1 mov ebp, esp */
  EBP = (ESP);
  /* 105333b3 push ecx */
  push32((uint32_t)(ECX));
  /* 105333b4 cmp dword ptr [0x1054f730], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f730))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105333bb jne 0x105333d7 */
  if (!C.zf) goto L_105333d7;
  /* 105333bd cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105333c1 jl 0x105333d2 */
  if ((C.sf!=C.of)) goto L_105333d2;
  /* 105333c3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105333c7 jg 0x105333d2 */
  if ((!C.zf&&C.sf==C.of)) goto L_105333d2;
  /* 105333c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105333cc add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105333cf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_105333d2:;
  /* 105333d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105333d5 jmp 0x1053343f */
  goto L_1053343f;
L_105333d7:;
  /* 105333d7 push 0x1054f8bc */
  push32((uint32_t)(0x1054f8bcu));
  /* 105333dc call dword ptr [0x10552364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552364))), 0x105333e2u);
  /* 105333e2 cmp dword ptr [0x1054f8ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f8ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105333e9 je 0x10533409 */
  if (C.zf) goto L_10533409;
  /* 105333eb push 0x1054f8bc */
  push32((uint32_t)(0x1054f8bcu));
  /* 105333f0 call dword ptr [0x10552354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552354))), 0x105333f6u);
  /* 105333f6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 105333f8 call 0x10527610 */
  push32(0x105333fdu); f_10527610();
  /* 105333fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10533400 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10533407 jmp 0x10533410 */
  goto L_10533410;
L_10533409:;
  /* 10533409 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10533410:;
  /* 10533410 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10533413 push ecx */
  push32((uint32_t)(ECX));
  /* 10533414 call 0x10533450 */
  push32(0x10533419u); f_10533450();
  /* 10533419 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1053341c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1053341f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10533423 je 0x10533431 */
  if (C.zf) goto L_10533431;
  /* 10533425 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10533427 call 0x105276b0 */
  push32(0x1053342cu); f_105276b0();
  /* 1053342c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1053342f jmp 0x1053343c */
  goto L_1053343c;
L_10533431:;
  /* 10533431 push 0x1054f8bc */
  push32((uint32_t)(0x1054f8bcu));
  /* 10533436 call dword ptr [0x10552354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552354))), 0x1053343cu);
L_1053343c:;
  /* 1053343c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1053343f:;
  /* 1053343f mov esp, ebp */
  ESP = (EBP);
  /* 10533441 pop ebp */
  EBP = (pop32());
  /* 10533442 ret  */
  ESPCHK(0x105333b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013450 @ 0x10533450 (299 bytes, 91 insns) */
void f_10533450(void) {
  FTRACE(0x10533450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10533450 push ebp */
  push32((uint32_t)(EBP));
  /* 10533451 mov ebp, esp */
  EBP = (ESP);
  /* 10533453 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10533456 cmp dword ptr [0x1054f730], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f730))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1053345d jne 0x1053347c */
  if (!C.zf) goto L_1053347c;
  /* 1053345f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10533463 jl 0x10533474 */
  if ((C.sf!=C.of)) goto L_10533474;
  /* 10533465 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10533469 jg 0x10533474 */
  if ((!C.zf&&C.sf==C.of)) goto L_10533474;
  /* 1053346b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1053346e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10533471 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10533474:;
  /* 10533474 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10533477 jmp 0x10533577 */
  goto L_10533577;
L_1053347c:;
  /* 1053347c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10533483 jge 0x105334c3 */
  if ((C.sf==C.of)) goto L_105334c3;
  /* 10533485 cmp dword ptr [0x1054dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1054dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1053348c jle 0x105334a1 */
  if ((C.zf||C.sf!=C.of)) goto L_105334a1;
  /* 1053348e push 1 */
  push32((uint32_t)(0x1u));
  /* 10533490 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10533493 push ecx */
  push32((uint32_t)(ECX));
  /* 10533494 call 0x10529c20 */
  push32(0x10533499u); f_10529c20();
  /* 10533499 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1053349c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1053349f jmp 0x105334b5 */
  goto L_105334b5;
L_105334a1:;
  /* 105334a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105334a4 mov eax, dword ptr [0x1054dc98] */
  EAX = (r32((uint32_t)(0x1054dc98)));
  /* 105334a9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105334ab mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 105334af and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 105334b2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_105334b5:;
  /* 105334b5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105334b9 jne 0x105334c3 */
  if (!C.zf) goto L_105334c3;
  /* 105334bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105334be jmp 0x10533577 */
  goto L_10533577;
L_105334c3:;
  /* 105334c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105334c6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 105334c9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 105334cf and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 105334d5 mov eax, dword ptr [0x1054dc98] */
  EAX = (r32((uint32_t)(0x1054dc98)));
  /* 105334da xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105334dc mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 105334e0 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 105334e6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105334e8 je 0x1053350c */
  if (C.zf) goto L_1053350c;
  /* 105334ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105334ed sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 105334f0 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 105334f6 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 105334f9 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 105334fc mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 105334ff mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 10533503 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1053350a jmp 0x1053351d */
  goto L_1053351d;
L_1053350c:;
  /* 1053350c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1053350f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10533512 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 10533516 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_1053351d:;
  /* 1053351d push 1 */
  push32((uint32_t)(0x1u));
  /* 1053351f push 0 */
  push32((uint32_t)(0x0u));
  /* 10533521 push 3 */
  push32((uint32_t)(0x3u));
  /* 10533523 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10533526 push edx */
  push32((uint32_t)(EDX));
  /* 10533527 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1053352a push eax */
  push32((uint32_t)(EAX));
  /* 1053352b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 1053352e push ecx */
  push32((uint32_t)(ECX));
  /* 1053352f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10533534 mov edx, dword ptr [0x1054f730] */
  EDX = (r32((uint32_t)(0x1054f730)));
  /* 1053353a push edx */
  push32((uint32_t)(EDX));
  /* 1053353b call 0x1052c000 */
  push32(0x10533540u); f_1052c000();
  /* 10533540 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10533543 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10533546 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1053354a jne 0x10533551 */
  if (!C.zf) goto L_10533551;
  /* 1053354c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1053354f jmp 0x10533577 */
  goto L_10533577;
L_10533551:;
  /* 10533551 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10533555 jne 0x10533561 */
  if (!C.zf) goto L_10533561;
  /* 10533557 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1053355a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1053355f jmp 0x10533577 */
  goto L_10533577;
L_10533561:;
  /* 10533561 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10533564 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10533569 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 1053356c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10533572 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10533575 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_10533577:;
  /* 10533577 mov esp, ebp */
  ESP = (EBP);
  /* 10533579 pop ebp */
  EBP = (pop32());
  /* 1053357a ret  */
  ESPCHK(0x10533450u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x10533580 (52 bytes, 19 insns) */
void f_10533580(void) {
  FTRACE(0x10533580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10533580 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10533584 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10533588 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1053358a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1053358e jne 0x10533599 */
  if (!C.zf) goto L_10533599;
  /* 10533590 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10533594 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10533596 ret 0x10 */
  ESPCHK(0x10533580u, _esp0);
  ESP += 20; return;
L_10533599:;
  /* 10533599 push ebx */
  push32((uint32_t)(EBX));
  /* 1053359a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1053359c mov ebx, eax */
  EBX = (EAX);
  /* 1053359e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 105335a2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 105335a6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 105335a8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 105335ac mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 105335ae add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105335b0 pop ebx */
  EBX = (pop32());
  /* 105335b1 ret 0x10 */
  ESPCHK(0x10533580u, _esp0);
  ESP += 20; return;
}

/* FUN_100135c0 @ 0x105335c0 (46 bytes, 18 insns) */
void f_105335c0(void) {
  FTRACE(0x105335c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105335c0 push ebp */
  push32((uint32_t)(EBP));
  /* 105335c1 mov ebp, esp */
  EBP = (ESP);
  /* 105335c3 push ecx */
  push32((uint32_t)(ECX));
  /* 105335c4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 105335c6 call 0x10527610 */
  push32(0x105335cbu); f_10527610();
  /* 105335cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105335ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105335d1 push eax */
  push32((uint32_t)(EAX));
  /* 105335d2 call 0x105335f0 */
  push32(0x105335d7u); f_105335f0();
  /* 105335d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105335da mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105335dd push 0xc */
  push32((uint32_t)(0xcu));
  /* 105335df call 0x105276b0 */
  push32(0x105335e4u); f_105276b0();
  /* 105335e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105335e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105335ea mov esp, ebp */
  ESP = (EBP);
  /* 105335ec pop ebp */
  EBP = (pop32());
  /* 105335ed ret  */
  ESPCHK(0x105335c0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x105335f0 (198 bytes, 69 insns) */
void f_105335f0(void) {
  FTRACE(0x105335f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105335f0 push ebp */
  push32((uint32_t)(EBP));
  /* 105335f1 mov ebp, esp */
  EBP = (ESP);
  /* 105335f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105335f6 mov eax, dword ptr [0x1054f550] */
  EAX = (r32((uint32_t)(0x1054f550)));
  /* 105335fb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105335fe cmp dword ptr [0x10551040], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10551040))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10533605 jne 0x1053360e */
  if (!C.zf) goto L_1053360e;
  /* 10533607 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10533609 jmp 0x105336b2 */
  goto L_105336b2;
L_1053360e:;
  /* 1053360e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10533612 jne 0x10533636 */
  if (!C.zf) goto L_10533636;
  /* 10533614 cmp dword ptr [0x1054f558], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f558))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1053361b je 0x10533636 */
  if (C.zf) goto L_10533636;
  /* 1053361d call 0x10533710 */
  push32(0x10533622u); f_10533710();
  /* 10533622 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10533624 je 0x1053362d */
  if (C.zf) goto L_1053362d;
  /* 10533626 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10533628 jmp 0x105336b2 */
  goto L_105336b2;
L_1053362d:;
  /* 1053362d mov ecx, dword ptr [0x1054f550] */
  ECX = (r32((uint32_t)(0x1054f550)));
  /* 10533633 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10533636:;
  /* 10533636 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1053363a je 0x105336b0 */
  if (C.zf) goto L_105336b0;
  /* 1053363c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10533640 je 0x105336b0 */
  if (C.zf) goto L_105336b0;
  /* 10533642 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10533645 push edx */
  push32((uint32_t)(EDX));
  /* 10533646 call 0x10526a40 */
  push32(0x1053364bu); f_10526a40();
  /* 1053364b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1053364e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10533651:;
  /* 10533651 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10533654 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10533657 je 0x105336b0 */
  if (C.zf) goto L_105336b0;
  /* 10533659 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1053365c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1053365e push edx */
  push32((uint32_t)(EDX));
  /* 1053365f call 0x10526a40 */
  push32(0x10533664u); f_10526a40();
  /* 10533664 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10533667 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1053366a jbe 0x105336a5 */
  if ((C.cf||C.zf)) goto L_105336a5;
  /* 1053366c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1053366f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10533671 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10533674 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 10533678 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1053367b jne 0x105336a5 */
  if (!C.zf) goto L_105336a5;
  /* 1053367d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10533680 push ecx */
  push32((uint32_t)(ECX));
  /* 10533681 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10533684 push edx */
  push32((uint32_t)(EDX));
  /* 10533685 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10533688 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1053368a push ecx */
  push32((uint32_t)(ECX));
  /* 1053368b call 0x105336c0 */
  push32(0x10533690u); f_105336c0();
  /* 10533690 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10533693 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10533695 jne 0x105336a5 */
  if (!C.zf) goto L_105336a5;
  /* 10533697 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1053369a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1053369c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1053369f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 105336a3 jmp 0x105336b2 */
  goto L_105336b2;
L_105336a5:;
  /* 105336a5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105336a8 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105336ab mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 105336ae jmp 0x10533651 */
  goto L_10533651;
L_105336b0:;
  /* 105336b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105336b2:;
  /* 105336b2 mov esp, ebp */
  ESP = (EBP);
  /* 105336b4 pop ebp */
  EBP = (pop32());
  /* 105336b5 ret  */
  ESPCHK(0x105335f0u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x105336c0 (79 bytes, 32 insns) */
void f_105336c0(void) {
  FTRACE(0x105336c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105336c0 push ebp */
  push32((uint32_t)(EBP));
  /* 105336c1 mov ebp, esp */
  EBP = (ESP);
  /* 105336c3 push ecx */
  push32((uint32_t)(ECX));
  /* 105336c4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105336c8 jne 0x105336ce */
  if (!C.zf) goto L_105336ce;
  /* 105336ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105336cc jmp 0x1053370b */
  goto L_1053370b;
L_105336ce:;
  /* 105336ce mov eax, dword ptr [0x10550c04] */
  EAX = (r32((uint32_t)(0x10550c04)));
  /* 105336d3 push eax */
  push32((uint32_t)(EAX));
  /* 105336d4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105336d7 push ecx */
  push32((uint32_t)(ECX));
  /* 105336d8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105336db push edx */
  push32((uint32_t)(EDX));
  /* 105336dc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105336df push eax */
  push32((uint32_t)(EAX));
  /* 105336e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105336e3 push ecx */
  push32((uint32_t)(ECX));
  /* 105336e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 105336e6 mov edx, dword ptr [0x10550ea4] */
  EDX = (r32((uint32_t)(0x10550ea4)));
  /* 105336ec push edx */
  push32((uint32_t)(EDX));
  /* 105336ed call 0x105337c0 */
  push32(0x105336f2u); f_105337c0();
  /* 105336f2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105336f5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105336f8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105336fc jne 0x10533705 */
  if (!C.zf) goto L_10533705;
  /* 105336fe mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 10533703 jmp 0x1053370b */
  goto L_1053370b;
L_10533705:;
  /* 10533705 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10533708 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1053370b:;
  /* 1053370b mov esp, ebp */
  ESP = (EBP);
  /* 1053370d pop ebp */
  EBP = (pop32());
  /* 1053370e ret  */
  ESPCHK(0x105336c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013710 @ 0x10533710 (174 bytes, 66 insns) */
void f_10533710(void) {
  FTRACE(0x10533710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10533710 push ebp */
  push32((uint32_t)(EBP));
  /* 10533711 mov ebp, esp */
  EBP = (ESP);
  /* 10533713 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10533716 mov eax, dword ptr [0x1054f558] */
  EAX = (r32((uint32_t)(0x1054f558)));
  /* 1053371b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1053371e:;
  /* 1053371e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10533721 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10533724 je 0x105337b8 */
  if (C.zf) goto L_105337b8;
  /* 1053372a push 0 */
  push32((uint32_t)(0x0u));
  /* 1053372c push 0 */
  push32((uint32_t)(0x0u));
  /* 1053372e push 0 */
  push32((uint32_t)(0x0u));
  /* 10533730 push 0 */
  push32((uint32_t)(0x0u));
  /* 10533732 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10533734 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10533737 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10533739 push eax */
  push32((uint32_t)(EAX));
  /* 1053373a push 0 */
  push32((uint32_t)(0x0u));
  /* 1053373c push 1 */
  push32((uint32_t)(0x1u));
  /* 1053373e call dword ptr [0x105523b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105523b8))), 0x10533744u);
  /* 10533744 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10533747 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1053374b jne 0x10533752 */
  if (!C.zf) goto L_10533752;
  /* 1053374d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10533750 jmp 0x105337ba */
  goto L_105337ba;
L_10533752:;
  /* 10533752 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10533754 push 0x1054ba24 */
  push32((uint32_t)(0x1054ba24u));
  /* 10533759 push 2 */
  push32((uint32_t)(0x2u));
  /* 1053375b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1053375e push ecx */
  push32((uint32_t)(ECX));
  /* 1053375f call 0x10523c10 */
  push32(0x10533764u); f_10523c10();
  /* 10533764 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10533767 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1053376a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1053376e jne 0x10533775 */
  if (!C.zf) goto L_10533775;
  /* 10533770 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10533773 jmp 0x105337ba */
  goto L_105337ba;
L_10533775:;
  /* 10533775 push 0 */
  push32((uint32_t)(0x0u));
  /* 10533777 push 0 */
  push32((uint32_t)(0x0u));
  /* 10533779 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1053377c push edx */
  push32((uint32_t)(EDX));
  /* 1053377d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10533780 push eax */
  push32((uint32_t)(EAX));
  /* 10533781 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10533783 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10533786 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10533788 push edx */
  push32((uint32_t)(EDX));
  /* 10533789 push 0 */
  push32((uint32_t)(0x0u));
  /* 1053378b push 1 */
  push32((uint32_t)(0x1u));
  /* 1053378d call dword ptr [0x105523b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105523b8))), 0x10533793u);
  /* 10533793 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10533795 jne 0x1053379c */
  if (!C.zf) goto L_1053379c;
  /* 10533797 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1053379a jmp 0x105337ba */
  goto L_105337ba;
L_1053379c:;
  /* 1053379c push 0 */
  push32((uint32_t)(0x0u));
  /* 1053379e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105337a1 push eax */
  push32((uint32_t)(EAX));
  /* 105337a2 call 0x10533c10 */
  push32(0x105337a7u); f_10533c10();
  /* 105337a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105337aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105337ad add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105337b0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105337b3 jmp 0x1053371e */
  goto L_1053371e;
L_105337b8:;
  /* 105337b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105337ba:;
  /* 105337ba mov esp, ebp */
  ESP = (EBP);
  /* 105337bc pop ebp */
  EBP = (pop32());
  /* 105337bd ret  */
  ESPCHK(0x10533710u, _esp0);
  ESP += 4; return;
}

/* FUN_100137c0 @ 0x105337c0 (970 bytes, 340 insns) */
void f_105337c0(void) {
  FTRACE(0x105337c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105337c0 push ebp */
  push32((uint32_t)(EBP));
  /* 105337c1 mov ebp, esp */
  EBP = (ESP);
  /* 105337c3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 105337c5 push 0x1054ba78 */
  push32((uint32_t)(0x1054ba78u));
  /* 105337ca push 0x1052cd18 */
  push32((uint32_t)(0x1052cd18u));
  /* 105337cf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 105337d5 push eax */
  push32((uint32_t)(EAX));
  /* 105337d6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 105337dd add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105337e0 push ebx */
  push32((uint32_t)(EBX));
  /* 105337e1 push esi */
  push32((uint32_t)(ESI));
  /* 105337e2 push edi */
  push32((uint32_t)(EDI));
  /* 105337e3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 105337e6 cmp dword ptr [0x1054f894], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f894))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105337ed jne 0x10533846 */
  if (!C.zf) goto L_10533846;
  /* 105337ef push 1 */
  push32((uint32_t)(0x1u));
  /* 105337f1 push 0x1054b0d4 */
  push32((uint32_t)(0x1054b0d4u));
  /* 105337f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 105337f8 push 0x1054b0d4 */
  push32((uint32_t)(0x1054b0d4u));
  /* 105337fd push 0 */
  push32((uint32_t)(0x0u));
  /* 105337ff push 0 */
  push32((uint32_t)(0x0u));
  /* 10533801 call dword ptr [0x105522b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105522b0))), 0x10533807u);
  /* 10533807 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10533809 je 0x10533817 */
  if (C.zf) goto L_10533817;
  /* 1053380b mov dword ptr [0x1054f894], 1 */
  w32((uint32_t)(0x1054f894), (0x1u));
  /* 10533815 jmp 0x10533846 */
  goto L_10533846;
L_10533817:;
  /* 10533817 push 1 */
  push32((uint32_t)(0x1u));
  /* 10533819 push 0x1054b0d0 */
  push32((uint32_t)(0x1054b0d0u));
  /* 1053381e push 1 */
  push32((uint32_t)(0x1u));
  /* 10533820 push 0x1054b0d0 */
  push32((uint32_t)(0x1054b0d0u));
  /* 10533825 push 0 */
  push32((uint32_t)(0x0u));
  /* 10533827 push 0 */
  push32((uint32_t)(0x0u));
  /* 10533829 call dword ptr [0x105522bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105522bc))), 0x1053382fu);
  /* 1053382f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10533831 je 0x1053383f */
  if (C.zf) goto L_1053383f;
  /* 10533833 mov dword ptr [0x1054f894], 2 */
  w32((uint32_t)(0x1054f894), (0x2u));
  /* 1053383d jmp 0x10533846 */
  goto L_10533846;
L_1053383f:;
  /* 1053383f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10533841 jmp 0x10533ba4 */
  goto L_10533ba4;
L_10533846:;
  /* 10533846 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1053384a jle 0x1053385f */
  if ((C.zf||C.sf!=C.of)) goto L_1053385f;
  /* 1053384c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1053384f push eax */
  push32((uint32_t)(EAX));
  /* 10533850 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10533853 push ecx */
  push32((uint32_t)(ECX));
  /* 10533854 call 0x10533bc0 */
  push32(0x10533859u); f_10533bc0();
  /* 10533859 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1053385c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1053385f:;
  /* 1053385f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10533863 jle 0x10533878 */
  if ((C.zf||C.sf!=C.of)) goto L_10533878;
  /* 10533865 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10533868 push edx */
  push32((uint32_t)(EDX));
  /* 10533869 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1053386c push eax */
  push32((uint32_t)(EAX));
  /* 1053386d call 0x10533bc0 */
  push32(0x10533872u); f_10533bc0();
  /* 10533872 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10533875 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_10533878:;
  /* 10533878 cmp dword ptr [0x1054f894], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1054f894))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1053387f jne 0x105338a4 */
  if (!C.zf) goto L_105338a4;
  /* 10533881 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10533884 push ecx */
  push32((uint32_t)(ECX));
  /* 10533885 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10533888 push edx */
  push32((uint32_t)(EDX));
  /* 10533889 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1053388c push eax */
  push32((uint32_t)(EAX));
  /* 1053388d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10533890 push ecx */
  push32((uint32_t)(ECX));
  /* 10533891 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10533894 push edx */
  push32((uint32_t)(EDX));
  /* 10533895 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10533898 push eax */
  push32((uint32_t)(EAX));
  /* 10533899 call dword ptr [0x105522bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105522bc))), 0x1053389fu);
  /* 1053389f jmp 0x10533ba4 */
  goto L_10533ba4;
L_105338a4:;
  /* 105338a4 cmp dword ptr [0x1054f894], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1054f894))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105338ab jne 0x10533ba2 */
  if (!C.zf) goto L_10533ba2;
  /* 105338b1 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105338b5 jne 0x105338c0 */
  if (!C.zf) goto L_105338c0;
  /* 105338b7 mov ecx, dword ptr [0x1054f740] */
  ECX = (r32((uint32_t)(0x1054f740)));
  /* 105338bd mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_105338c0:;
  /* 105338c0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105338c4 je 0x105338d0 */
  if (C.zf) goto L_105338d0;
  /* 105338c6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105338ca jne 0x10533a4c */
  if (!C.zf) goto L_10533a4c;
L_105338d0:;
  /* 105338d0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105338d3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105338d6 jne 0x105338e2 */
  if (!C.zf) goto L_105338e2;
  /* 105338d8 mov eax, 2 */
  EAX = (0x2u);
  /* 105338dd jmp 0x10533ba4 */
  goto L_10533ba4;
L_105338e2:;
  /* 105338e2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105338e6 jle 0x105338f2 */
  if ((C.zf||C.sf!=C.of)) goto L_105338f2;
  /* 105338e8 mov eax, 1 */
  EAX = (0x1u);
  /* 105338ed jmp 0x10533ba4 */
  goto L_10533ba4;
L_105338f2:;
  /* 105338f2 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105338f6 jle 0x10533902 */
  if ((C.zf||C.sf!=C.of)) goto L_10533902;
  /* 105338f8 mov eax, 3 */
  EAX = (0x3u);
  /* 105338fd jmp 0x10533ba4 */
  goto L_10533ba4;
L_10533902:;
  /* 10533902 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 10533905 push eax */
  push32((uint32_t)(EAX));
  /* 10533906 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10533909 push ecx */
  push32((uint32_t)(ECX));
  /* 1053390a call dword ptr [0x10552308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552308))), 0x10533910u);
  /* 10533910 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10533912 jne 0x1053391b */
  if (!C.zf) goto L_1053391b;
  /* 10533914 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10533916 jmp 0x10533ba4 */
  goto L_10533ba4;
L_1053391b:;
  /* 1053391b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1053391f jne 0x10533927 */
  if (!C.zf) goto L_10533927;
  /* 10533921 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10533925 je 0x10533954 */
  if (C.zf) goto L_10533954;
L_10533927:;
  /* 10533927 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1053392b jne 0x10533933 */
  if (!C.zf) goto L_10533933;
  /* 1053392d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10533931 je 0x10533954 */
  if (C.zf) goto L_10533954;
L_10533933:;
  /* 10533933 push 0x1054ba38 */
  push32((uint32_t)(0x1054ba38u));
  /* 10533938 push 0 */
  push32((uint32_t)(0x0u));
  /* 1053393a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 1053393f push 0x1054ba30 */
  push32((uint32_t)(0x1054ba30u));
  /* 10533944 push 2 */
  push32((uint32_t)(0x2u));
  /* 10533946 call 0x10522cd0 */
  push32(0x1053394bu); f_10522cd0();
  /* 1053394b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1053394e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10533951 jne 0x10533954 */
  if (!C.zf) goto L_10533954;
  /* 10533953 int3  */
  x86_unimpl("int3 @ 0x10533953");
L_10533954:;
  /* 10533954 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10533956 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10533958 jne 0x1053391b */
  if (!C.zf) goto L_1053391b;
  /* 1053395a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1053395e jle 0x105339d3 */
  if ((C.zf||C.sf!=C.of)) goto L_105339d3;
  /* 10533960 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10533964 jae 0x10533970 */
  if (!C.cf) goto L_10533970;
  /* 10533966 mov eax, 3 */
  EAX = (0x3u);
  /* 1053396b jmp 0x10533ba4 */
  goto L_10533ba4;
L_10533970:;
  /* 10533970 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 10533973 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 10533976 jmp 0x10533981 */
  goto L_10533981;
L_10533978:;
  /* 10533978 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1053397b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1053397e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_10533981:;
  /* 10533981 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10533984 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10533986 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10533988 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1053398a je 0x105339c9 */
  if (C.zf) goto L_105339c9;
  /* 1053398c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1053398f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10533991 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10533994 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10533996 je 0x105339c9 */
  if (C.zf) goto L_105339c9;
  /* 10533998 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1053399b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1053399d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1053399f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 105339a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105339a4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105339a6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105339a8 jl 0x105339c7 */
  if ((C.sf!=C.of)) goto L_105339c7;
  /* 105339aa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105339ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105339af mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105339b1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 105339b4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105339b6 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 105339b9 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105339bb jg 0x105339c7 */
  if ((!C.zf&&C.sf==C.of)) goto L_105339c7;
  /* 105339bd mov eax, 2 */
  EAX = (0x2u);
  /* 105339c2 jmp 0x10533ba4 */
  goto L_10533ba4;
L_105339c7:;
  /* 105339c7 jmp 0x10533978 */
  goto L_10533978;
L_105339c9:;
  /* 105339c9 mov eax, 3 */
  EAX = (0x3u);
  /* 105339ce jmp 0x10533ba4 */
  goto L_10533ba4;
L_105339d3:;
  /* 105339d3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105339d7 jle 0x10533a4c */
  if ((C.zf||C.sf!=C.of)) goto L_10533a4c;
  /* 105339d9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105339dd jae 0x105339e9 */
  if (!C.cf) goto L_105339e9;
  /* 105339df mov eax, 1 */
  EAX = (0x1u);
  /* 105339e4 jmp 0x10533ba4 */
  goto L_10533ba4;
L_105339e9:;
  /* 105339e9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 105339ec mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 105339ef jmp 0x105339fa */
  goto L_105339fa;
L_105339f1:;
  /* 105339f1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 105339f4 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105339f7 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_105339fa:;
  /* 105339fa mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 105339fd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105339ff mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10533a01 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10533a03 je 0x10533a42 */
  if (C.zf) goto L_10533a42;
  /* 10533a05 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10533a08 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10533a0a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10533a0d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10533a0f je 0x10533a42 */
  if (C.zf) goto L_10533a42;
  /* 10533a11 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10533a14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10533a16 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10533a18 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10533a1b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10533a1d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10533a1f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10533a21 jl 0x10533a40 */
  if ((C.sf!=C.of)) goto L_10533a40;
  /* 10533a23 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10533a26 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10533a28 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10533a2a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10533a2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10533a2f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10533a32 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10533a34 jg 0x10533a40 */
  if ((!C.zf&&C.sf==C.of)) goto L_10533a40;
  /* 10533a36 mov eax, 2 */
  EAX = (0x2u);
  /* 10533a3b jmp 0x10533ba4 */
  goto L_10533ba4;
L_10533a40:;
  /* 10533a40 jmp 0x105339f1 */
  goto L_105339f1;
L_10533a42:;
  /* 10533a42 mov eax, 1 */
  EAX = (0x1u);
  /* 10533a47 jmp 0x10533ba4 */
  goto L_10533ba4;
L_10533a4c:;
  /* 10533a4c push 0 */
  push32((uint32_t)(0x0u));
  /* 10533a4e push 0 */
  push32((uint32_t)(0x0u));
  /* 10533a50 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10533a53 push ecx */
  push32((uint32_t)(ECX));
  /* 10533a54 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10533a57 push edx */
  push32((uint32_t)(EDX));
  /* 10533a58 push 9 */
  push32((uint32_t)(0x9u));
  /* 10533a5a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10533a5d push eax */
  push32((uint32_t)(EAX));
  /* 10533a5e call dword ptr [0x105522fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105522fc))), 0x10533a64u);
  /* 10533a64 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10533a67 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10533a6b jne 0x10533a74 */
  if (!C.zf) goto L_10533a74;
  /* 10533a6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10533a6f jmp 0x10533ba4 */
  goto L_10533ba4;
L_10533a74:;
  /* 10533a74 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10533a7b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10533a7e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10533a80 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10533a83 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10533a85 call 0x10526db0 */
  push32(0x10533a8au); f_10526db0();
  /* 10533a8a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 10533a8d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10533a90 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 10533a93 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10533a96 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10533a9d jmp 0x10533ab6 */
  goto L_10533ab6;
  /* 10533a9f mov eax, 1 */
  EAX = (0x1u);
  /* 10533aa4 ret  */
  ESPCHK(0x105337c0u, _esp0);
  ESP += 4; return;
  /* 10533aa5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10533aa8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10533aaf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10533ab6:;
  /* 10533ab6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10533aba jne 0x10533ac3 */
  if (!C.zf) goto L_10533ac3;
  /* 10533abc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10533abe jmp 0x10533ba4 */
  goto L_10533ba4;
L_10533ac3:;
  /* 10533ac3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10533ac6 push edx */
  push32((uint32_t)(EDX));
  /* 10533ac7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10533aca push eax */
  push32((uint32_t)(EAX));
  /* 10533acb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10533ace push ecx */
  push32((uint32_t)(ECX));
  /* 10533acf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10533ad2 push edx */
  push32((uint32_t)(EDX));
  /* 10533ad3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10533ad5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10533ad8 push eax */
  push32((uint32_t)(EAX));
  /* 10533ad9 call dword ptr [0x105522fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105522fc))), 0x10533adfu);
  /* 10533adf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10533ae1 jne 0x10533aea */
  if (!C.zf) goto L_10533aea;
  /* 10533ae3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10533ae5 jmp 0x10533ba4 */
  goto L_10533ba4;
L_10533aea:;
  /* 10533aea push 0 */
  push32((uint32_t)(0x0u));
  /* 10533aec push 0 */
  push32((uint32_t)(0x0u));
  /* 10533aee mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10533af1 push ecx */
  push32((uint32_t)(ECX));
  /* 10533af2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10533af5 push edx */
  push32((uint32_t)(EDX));
  /* 10533af6 push 9 */
  push32((uint32_t)(0x9u));
  /* 10533af8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10533afb push eax */
  push32((uint32_t)(EAX));
  /* 10533afc call dword ptr [0x105522fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105522fc))), 0x10533b02u);
  /* 10533b02 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10533b05 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10533b09 jne 0x10533b12 */
  if (!C.zf) goto L_10533b12;
  /* 10533b0b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10533b0d jmp 0x10533ba4 */
  goto L_10533ba4;
L_10533b12:;
  /* 10533b12 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10533b19 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10533b1c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10533b1e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10533b21 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10533b23 call 0x10526db0 */
  push32(0x10533b28u); f_10526db0();
  /* 10533b28 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 10533b2b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10533b2e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 10533b31 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10533b34 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10533b3b jmp 0x10533b54 */
  goto L_10533b54;
  /* 10533b3d mov eax, 1 */
  EAX = (0x1u);
  /* 10533b42 ret  */
  ESPCHK(0x105337c0u, _esp0);
  ESP += 4; return;
  /* 10533b43 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10533b46 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10533b4d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10533b54:;
  /* 10533b54 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10533b58 jne 0x10533b5e */
  if (!C.zf) goto L_10533b5e;
  /* 10533b5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10533b5c jmp 0x10533ba4 */
  goto L_10533ba4;
L_10533b5e:;
  /* 10533b5e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10533b61 push edx */
  push32((uint32_t)(EDX));
  /* 10533b62 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10533b65 push eax */
  push32((uint32_t)(EAX));
  /* 10533b66 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10533b69 push ecx */
  push32((uint32_t)(ECX));
  /* 10533b6a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10533b6d push edx */
  push32((uint32_t)(EDX));
  /* 10533b6e push 1 */
  push32((uint32_t)(0x1u));
  /* 10533b70 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10533b73 push eax */
  push32((uint32_t)(EAX));
  /* 10533b74 call dword ptr [0x105522fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105522fc))), 0x10533b7au);
  /* 10533b7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10533b7c jne 0x10533b82 */
  if (!C.zf) goto L_10533b82;
  /* 10533b7e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10533b80 jmp 0x10533ba4 */
  goto L_10533ba4;
L_10533b82:;
  /* 10533b82 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10533b85 push ecx */
  push32((uint32_t)(ECX));
  /* 10533b86 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10533b89 push edx */
  push32((uint32_t)(EDX));
  /* 10533b8a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10533b8d push eax */
  push32((uint32_t)(EAX));
  /* 10533b8e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10533b91 push ecx */
  push32((uint32_t)(ECX));
  /* 10533b92 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10533b95 push edx */
  push32((uint32_t)(EDX));
  /* 10533b96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10533b99 push eax */
  push32((uint32_t)(EAX));
  /* 10533b9a call dword ptr [0x105522b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105522b0))), 0x10533ba0u);
  /* 10533ba0 jmp 0x10533ba4 */
  goto L_10533ba4;
L_10533ba2:;
  /* 10533ba2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10533ba4:;
  /* 10533ba4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 10533ba7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10533baa mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10533bb1 pop edi */
  EDI = (pop32());
  /* 10533bb2 pop esi */
  ESI = (pop32());
  /* 10533bb3 pop ebx */
  EBX = (pop32());
  /* 10533bb4 mov esp, ebp */
  ESP = (EBP);
  /* 10533bb6 pop ebp */
  EBP = (pop32());
  /* 10533bb7 ret  */
  ESPCHK(0x105337c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013bc0 @ 0x10533bc0 (80 bytes, 32 insns) */
void f_10533bc0(void) {
  FTRACE(0x10533bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10533bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10533bc1 mov ebp, esp */
  EBP = (ESP);
  /* 10533bc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10533bc6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10533bc9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10533bcc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10533bcf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10533bd2:;
  /* 10533bd2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10533bd5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10533bd8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10533bdb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10533bde test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10533be0 je 0x10533bf7 */
  if (C.zf) goto L_10533bf7;
  /* 10533be2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10533be5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10533be8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10533bea je 0x10533bf7 */
  if (C.zf) goto L_10533bf7;
  /* 10533bec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10533bef add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10533bf2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10533bf5 jmp 0x10533bd2 */
  goto L_10533bd2;
L_10533bf7:;
  /* 10533bf7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10533bfa movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10533bfd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10533bff jne 0x10533c09 */
  if (!C.zf) goto L_10533c09;
  /* 10533c01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10533c04 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10533c07 jmp 0x10533c0c */
  goto L_10533c0c;
L_10533c09:;
  /* 10533c09 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10533c0c:;
  /* 10533c0c mov esp, ebp */
  ESP = (EBP);
  /* 10533c0e pop ebp */
  EBP = (pop32());
  /* 10533c0f ret  */
  ESPCHK(0x10533bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013c10 @ 0x10533c10 (736 bytes, 224 insns) */
void f_10533c10(void) {
  FTRACE(0x10533c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10533c10 push ebp */
  push32((uint32_t)(EBP));
  /* 10533c11 mov ebp, esp */
  EBP = (ESP);
  /* 10533c13 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10533c16 push esi */
  push32((uint32_t)(ESI));
  /* 10533c17 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10533c1b je 0x10533c3c */
  if (C.zf) goto L_10533c3c;
  /* 10533c1d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10533c1f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10533c22 push eax */
  push32((uint32_t)(EAX));
  /* 10533c23 call 0x10534060 */
  push32(0x10533c28u); f_10534060();
  /* 10533c28 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10533c2b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10533c2e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10533c32 je 0x10533c3c */
  if (C.zf) goto L_10533c3c;
  /* 10533c34 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10533c37 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10533c3a jne 0x10533c44 */
  if (!C.zf) goto L_10533c44;
L_10533c3c:;
  /* 10533c3c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10533c3f jmp 0x10533eeb */
  goto L_10533eeb;
L_10533c44:;
  /* 10533c44 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10533c47 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10533c4b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10533c4d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10533c4f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10533c50 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10533c53 mov ecx, dword ptr [0x1054f550] */
  ECX = (r32((uint32_t)(0x1054f550)));
  /* 10533c59 cmp ecx, dword ptr [0x1054f554] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1054f554))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10533c5f jne 0x10533c75 */
  if (!C.zf) goto L_10533c75;
  /* 10533c61 mov edx, dword ptr [0x1054f550] */
  EDX = (r32((uint32_t)(0x1054f550)));
  /* 10533c67 push edx */
  push32((uint32_t)(EDX));
  /* 10533c68 call 0x10533f70 */
  push32(0x10533c6du); f_10533f70();
  /* 10533c6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10533c70 mov dword ptr [0x1054f550], eax */
  w32((uint32_t)(0x1054f550), (EAX));
L_10533c75:;
  /* 10533c75 cmp dword ptr [0x1054f550], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f550))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10533c7c jne 0x10533d35 */
  if (!C.zf) goto L_10533d35;
  /* 10533c82 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10533c86 je 0x10533ca7 */
  if (C.zf) goto L_10533ca7;
  /* 10533c88 cmp dword ptr [0x1054f558], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f558))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10533c8f je 0x10533ca7 */
  if (C.zf) goto L_10533ca7;
  /* 10533c91 call 0x10533710 */
  push32(0x10533c96u); f_10533710();
  /* 10533c96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10533c98 je 0x10533ca2 */
  if (C.zf) goto L_10533ca2;
  /* 10533c9a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10533c9d jmp 0x10533eeb */
  goto L_10533eeb;
L_10533ca2:;
  /* 10533ca2 jmp 0x10533d35 */
  goto L_10533d35;
L_10533ca7:;
  /* 10533ca7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10533cab je 0x10533cb4 */
  if (C.zf) goto L_10533cb4;
  /* 10533cad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10533caf jmp 0x10533eeb */
  goto L_10533eeb;
L_10533cb4:;
  /* 10533cb4 cmp dword ptr [0x1054f550], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f550))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10533cbb jne 0x10533cf4 */
  if (!C.zf) goto L_10533cf4;
  /* 10533cbd push 0x87 */
  push32((uint32_t)(0x87u));
  /* 10533cc2 push 0x1054ba90 */
  push32((uint32_t)(0x1054ba90u));
  /* 10533cc7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10533cc9 push 4 */
  push32((uint32_t)(0x4u));
  /* 10533ccb call 0x10523c10 */
  push32(0x10533cd0u); f_10523c10();
  /* 10533cd0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10533cd3 mov dword ptr [0x1054f550], eax */
  w32((uint32_t)(0x1054f550), (EAX));
  /* 10533cd8 cmp dword ptr [0x1054f550], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f550))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10533cdf jne 0x10533ce9 */
  if (!C.zf) goto L_10533ce9;
  /* 10533ce1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10533ce4 jmp 0x10533eeb */
  goto L_10533eeb;
L_10533ce9:;
  /* 10533ce9 mov eax, dword ptr [0x1054f550] */
  EAX = (r32((uint32_t)(0x1054f550)));
  /* 10533cee mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10533cf4:;
  /* 10533cf4 cmp dword ptr [0x1054f558], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f558))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10533cfb jne 0x10533d35 */
  if (!C.zf) goto L_10533d35;
  /* 10533cfd push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 10533d02 push 0x1054ba90 */
  push32((uint32_t)(0x1054ba90u));
  /* 10533d07 push 2 */
  push32((uint32_t)(0x2u));
  /* 10533d09 push 4 */
  push32((uint32_t)(0x4u));
  /* 10533d0b call 0x10523c10 */
  push32(0x10533d10u); f_10523c10();
  /* 10533d10 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10533d13 mov dword ptr [0x1054f558], eax */
  w32((uint32_t)(0x1054f558), (EAX));
  /* 10533d18 cmp dword ptr [0x1054f558], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f558))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10533d1f jne 0x10533d29 */
  if (!C.zf) goto L_10533d29;
  /* 10533d21 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10533d24 jmp 0x10533eeb */
  goto L_10533eeb;
L_10533d29:;
  /* 10533d29 mov ecx, dword ptr [0x1054f558] */
  ECX = (r32((uint32_t)(0x1054f558)));
  /* 10533d2f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_10533d35:;
  /* 10533d35 mov edx, dword ptr [0x1054f550] */
  EDX = (r32((uint32_t)(0x1054f550)));
  /* 10533d3b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10533d3e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10533d41 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10533d44 push eax */
  push32((uint32_t)(EAX));
  /* 10533d45 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10533d48 push ecx */
  push32((uint32_t)(ECX));
  /* 10533d49 call 0x10533ef0 */
  push32(0x10533d4eu); f_10533ef0();
  /* 10533d4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10533d51 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10533d54 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10533d58 jl 0x10533df1 */
  if ((C.sf!=C.of)) goto L_10533df1;
  /* 10533d5e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10533d61 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10533d64 je 0x10533df1 */
  if (C.zf) goto L_10533df1;
  /* 10533d6a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10533d6e je 0x10533de3 */
  if (C.zf) goto L_10533de3;
  /* 10533d70 push 2 */
  push32((uint32_t)(0x2u));
  /* 10533d72 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10533d75 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10533d78 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10533d7b push edx */
  push32((uint32_t)(EDX));
  /* 10533d7c call 0x105246a0 */
  push32(0x10533d81u); f_105246a0();
  /* 10533d81 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10533d84 jmp 0x10533d8f */
  goto L_10533d8f;
L_10533d86:;
  /* 10533d86 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10533d89 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10533d8c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10533d8f:;
  /* 10533d8f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10533d92 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10533d95 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10533d99 je 0x10533db0 */
  if (C.zf) goto L_10533db0;
  /* 10533d9b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10533d9e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10533da1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10533da4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10533da7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 10533dab mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10533dae jmp 0x10533d86 */
  goto L_10533d86;
L_10533db0:;
  /* 10533db0 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 10533db5 push 0x1054ba90 */
  push32((uint32_t)(0x1054ba90u));
  /* 10533dba push 2 */
  push32((uint32_t)(0x2u));
  /* 10533dbc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10533dbf shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10533dc2 push eax */
  push32((uint32_t)(EAX));
  /* 10533dc3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10533dc6 push ecx */
  push32((uint32_t)(ECX));
  /* 10533dc7 call 0x105240a0 */
  push32(0x10533dccu); f_105240a0();
  /* 10533dcc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10533dcf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10533dd2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10533dd6 je 0x10533de1 */
  if (C.zf) goto L_10533de1;
  /* 10533dd8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10533ddb mov dword ptr [0x1054f550], edx */
  w32((uint32_t)(0x1054f550), (EDX));
L_10533de1:;
  /* 10533de1 jmp 0x10533def */
  goto L_10533def;
L_10533de3:;
  /* 10533de3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10533de6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10533de9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10533dec mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_10533def:;
  /* 10533def jmp 0x10533e64 */
  goto L_10533e64;
L_10533df1:;
  /* 10533df1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10533df5 jne 0x10533e5d */
  if (!C.zf) goto L_10533e5d;
  /* 10533df7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10533dfb jge 0x10533e05 */
  if ((C.sf==C.of)) goto L_10533e05;
  /* 10533dfd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10533e00 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10533e02 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10533e05:;
  /* 10533e05 push 0xce */
  push32((uint32_t)(0xceu));
  /* 10533e0a push 0x1054ba90 */
  push32((uint32_t)(0x1054ba90u));
  /* 10533e0f push 2 */
  push32((uint32_t)(0x2u));
  /* 10533e11 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10533e14 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 10533e1b push edx */
  push32((uint32_t)(EDX));
  /* 10533e1c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10533e1f push eax */
  push32((uint32_t)(EAX));
  /* 10533e20 call 0x105240a0 */
  push32(0x10533e25u); f_105240a0();
  /* 10533e25 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10533e28 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10533e2b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10533e2f jne 0x10533e39 */
  if (!C.zf) goto L_10533e39;
  /* 10533e31 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10533e34 jmp 0x10533eeb */
  goto L_10533eeb;
L_10533e39:;
  /* 10533e39 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10533e3c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10533e3f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10533e42 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 10533e45 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10533e48 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10533e4b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 10533e53 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10533e56 mov dword ptr [0x1054f550], eax */
  w32((uint32_t)(0x1054f550), (EAX));
  /* 10533e5b jmp 0x10533e64 */
  goto L_10533e64;
L_10533e5d:;
  /* 10533e5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10533e5f jmp 0x10533eeb */
  goto L_10533eeb;
L_10533e64:;
  /* 10533e64 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10533e68 je 0x10533ee9 */
  if (C.zf) goto L_10533ee9;
  /* 10533e6a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 10533e6f push 0x1054ba90 */
  push32((uint32_t)(0x1054ba90u));
  /* 10533e74 push 2 */
  push32((uint32_t)(0x2u));
  /* 10533e76 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10533e79 push ecx */
  push32((uint32_t)(ECX));
  /* 10533e7a call 0x10526a40 */
  push32(0x10533e7fu); f_10526a40();
  /* 10533e7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10533e82 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10533e85 push eax */
  push32((uint32_t)(EAX));
  /* 10533e86 call 0x10523c10 */
  push32(0x10533e8bu); f_10523c10();
  /* 10533e8b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10533e8e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10533e91 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10533e95 je 0x10533ee9 */
  if (C.zf) goto L_10533ee9;
  /* 10533e97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10533e9a push edx */
  push32((uint32_t)(EDX));
  /* 10533e9b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10533e9e push eax */
  push32((uint32_t)(EAX));
  /* 10533e9f call 0x10526bc0 */
  push32(0x10533ea4u); f_10526bc0();
  /* 10533ea4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10533ea7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10533eaa sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10533ead mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10533eb0 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10533eb2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10533eb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10533eb8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10533ebb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10533ebe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10533ec1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10533ec4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10533ec7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10533ec9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10533ecb not edx */
  EDX = (~(EDX));
  /* 10533ecd and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10533ed0 push edx */
  push32((uint32_t)(EDX));
  /* 10533ed1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10533ed4 push eax */
  push32((uint32_t)(EAX));
  /* 10533ed5 call dword ptr [0x105522ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x105522ac))), 0x10533edbu);
  /* 10533edb push 2 */
  push32((uint32_t)(0x2u));
  /* 10533edd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10533ee0 push ecx */
  push32((uint32_t)(ECX));
  /* 10533ee1 call 0x105246a0 */
  push32(0x10533ee6u); f_105246a0();
  /* 10533ee6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10533ee9:;
  /* 10533ee9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10533eeb:;
  /* 10533eeb pop esi */
  ESI = (pop32());
  /* 10533eec mov esp, ebp */
  ESP = (EBP);
  /* 10533eee pop ebp */
  EBP = (pop32());
  /* 10533eef ret  */
  ESPCHK(0x10533c10u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x10533ef0 (124 bytes, 47 insns) */
void f_10533ef0(void) {
  FTRACE(0x10533ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10533ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 10533ef1 mov ebp, esp */
  EBP = (ESP);
  /* 10533ef3 push ecx */
  push32((uint32_t)(ECX));
  /* 10533ef4 mov eax, dword ptr [0x1054f550] */
  EAX = (r32((uint32_t)(0x1054f550)));
  /* 10533ef9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10533efc jmp 0x10533f07 */
  goto L_10533f07;
L_10533efe:;
  /* 10533efe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10533f01 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10533f04 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10533f07:;
  /* 10533f07 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10533f0a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10533f0d je 0x10533f5a */
  if (C.zf) goto L_10533f5a;
  /* 10533f0f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10533f12 push eax */
  push32((uint32_t)(EAX));
  /* 10533f13 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10533f16 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10533f18 push edx */
  push32((uint32_t)(EDX));
  /* 10533f19 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10533f1c push eax */
  push32((uint32_t)(EAX));
  /* 10533f1d call 0x105336c0 */
  push32(0x10533f22u); f_105336c0();
  /* 10533f22 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10533f25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10533f27 jne 0x10533f58 */
  if (!C.zf) goto L_10533f58;
  /* 10533f29 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10533f2c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10533f2e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10533f31 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 10533f35 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10533f38 je 0x10533f4a */
  if (C.zf) goto L_10533f4a;
  /* 10533f3a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10533f3d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10533f3f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10533f42 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 10533f46 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10533f48 jne 0x10533f58 */
  if (!C.zf) goto L_10533f58;
L_10533f4a:;
  /* 10533f4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10533f4d sub eax, dword ptr [0x1054f550] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1054f550))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10533f53 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10533f56 jmp 0x10533f68 */
  goto L_10533f68;
L_10533f58:;
  /* 10533f58 jmp 0x10533efe */
  goto L_10533efe;
L_10533f5a:;
  /* 10533f5a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10533f5d sub eax, dword ptr [0x1054f550] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1054f550))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10533f63 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10533f66 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_10533f68:;
  /* 10533f68 mov esp, ebp */
  ESP = (EBP);
  /* 10533f6a pop ebp */
  EBP = (pop32());
  /* 10533f6b ret  */
  ESPCHK(0x10533ef0u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x10533f70 (238 bytes, 80 insns) */
void f_10533f70(void) {
  FTRACE(0x10533f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10533f70 push ebp */
  push32((uint32_t)(EBP));
  /* 10533f71 mov ebp, esp */
  EBP = (ESP);
  /* 10533f73 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10533f76 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10533f7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10533f80 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10533f83 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10533f87 jne 0x10533f90 */
  if (!C.zf) goto L_10533f90;
  /* 10533f89 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10533f8b jmp 0x1053405a */
  goto L_1053405a;
L_10533f90:;
  /* 10533f90 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10533f93 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10533f95 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10533f98 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10533f9b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10533f9e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10533fa0 je 0x10533fad */
  if (C.zf) goto L_10533fad;
  /* 10533fa2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10533fa5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10533fa8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10533fab jmp 0x10533f90 */
  goto L_10533f90;
L_10533fad:;
  /* 10533fad push 0x146 */
  push32((uint32_t)(0x146u));
  /* 10533fb2 push 0x1054ba90 */
  push32((uint32_t)(0x1054ba90u));
  /* 10533fb7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10533fb9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10533fbc lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 10533fc3 push eax */
  push32((uint32_t)(EAX));
  /* 10533fc4 call 0x10523c10 */
  push32(0x10533fc9u); f_10523c10();
  /* 10533fc9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10533fcc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10533fcf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10533fd2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10533fd5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10533fd9 jne 0x10533fe5 */
  if (!C.zf) goto L_10533fe5;
  /* 10533fdb push 9 */
  push32((uint32_t)(0x9u));
  /* 10533fdd call 0x10522b80 */
  push32(0x10533fe2u); f_10522b80();
  /* 10533fe2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10533fe5:;
  /* 10533fe5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10533fe8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10533feb:;
  /* 10533feb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10533fee cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10533ff1 je 0x1053404e */
  if (C.zf) goto L_1053404e;
  /* 10533ff3 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 10533ff8 push 0x1054ba90 */
  push32((uint32_t)(0x1054ba90u));
  /* 10533ffd push 2 */
  push32((uint32_t)(0x2u));
  /* 10533fff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10534002 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10534004 push edx */
  push32((uint32_t)(EDX));
  /* 10534005 call 0x10526a40 */
  push32(0x1053400au); f_10526a40();
  /* 1053400a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1053400d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10534010 push eax */
  push32((uint32_t)(EAX));
  /* 10534011 call 0x10523c10 */
  push32(0x10534016u); f_10523c10();
  /* 10534016 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10534019 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1053401c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1053401e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10534021 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10534024 je 0x1053403a */
  if (C.zf) goto L_1053403a;
  /* 10534026 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10534029 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1053402b push ecx */
  push32((uint32_t)(ECX));
  /* 1053402c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1053402f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10534031 push eax */
  push32((uint32_t)(EAX));
  /* 10534032 call 0x10526bc0 */
  push32(0x10534037u); f_10526bc0();
  /* 10534037 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1053403a:;
  /* 1053403a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1053403d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10534040 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10534043 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10534046 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10534049 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1053404c jmp 0x10533feb */
  goto L_10533feb;
L_1053404e:;
  /* 1053404e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10534051 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10534057 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1053405a:;
  /* 1053405a mov esp, ebp */
  ESP = (EBP);
  /* 1053405c pop ebp */
  EBP = (pop32());
  /* 1053405d ret  */
  ESPCHK(0x10533f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10014060 @ 0x10534060 (237 bytes, 81 insns) */
void f_10534060(void) {
  FTRACE(0x10534060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10534060 push ebp */
  push32((uint32_t)(EBP));
  /* 10534061 mov ebp, esp */
  EBP = (ESP);
  /* 10534063 push ecx */
  push32((uint32_t)(ECX));
  /* 10534064 cmp dword ptr [0x10550c8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10550c8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1053406b jne 0x10534082 */
  if (!C.zf) goto L_10534082;
  /* 1053406d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10534070 push eax */
  push32((uint32_t)(EAX));
  /* 10534071 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10534074 push ecx */
  push32((uint32_t)(ECX));
  /* 10534075 call 0x10534160 */
  push32(0x1053407au); f_10534160();
  /* 1053407a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1053407d jmp 0x10534149 */
  goto L_10534149;
L_10534082:;
  /* 10534082 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10534084 call 0x10527610 */
  push32(0x10534089u); f_10527610();
  /* 10534089 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1053408c jmp 0x10534097 */
  goto L_10534097;
L_1053408e:;
  /* 1053408e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10534091 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10534094 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10534097:;
  /* 10534097 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1053409a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 1053409e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 105340a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105340a5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 105340ab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105340ad je 0x1053412b */
  if (C.zf) goto L_1053412b;
  /* 105340af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105340b2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 105340b7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105340b9 mov cl, byte ptr [eax + 0x10550da1] */
  CL = (r8((uint32_t)(EAX + 0x10550da1)));
  /* 105340bf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 105340c2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105340c4 je 0x10534116 */
  if (C.zf) goto L_10534116;
  /* 105340c6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105340c9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105340cc mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 105340cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105340d2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105340d4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 105340d6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105340d8 jne 0x105340e8 */
  if (!C.zf) goto L_105340e8;
  /* 105340da push 0x19 */
  push32((uint32_t)(0x19u));
  /* 105340dc call 0x105276b0 */
  push32(0x105340e1u); f_105276b0();
  /* 105340e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105340e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105340e6 jmp 0x10534149 */
  goto L_10534149;
L_105340e8:;
  /* 105340e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105340eb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 105340f1 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 105340f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105340f7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105340f9 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 105340fb or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 105340fd cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10534100 jne 0x10534114 */
  if (!C.zf) goto L_10534114;
  /* 10534102 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10534104 call 0x105276b0 */
  push32(0x10534109u); f_105276b0();
  /* 10534109 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1053410c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1053410f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10534112 jmp 0x10534149 */
  goto L_10534149;
L_10534114:;
  /* 10534114 jmp 0x10534126 */
  goto L_10534126;
L_10534116:;
  /* 10534116 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10534119 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1053411f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10534122 jne 0x10534126 */
  if (!C.zf) goto L_10534126;
  /* 10534124 jmp 0x1053412b */
  goto L_1053412b;
L_10534126:;
  /* 10534126 jmp 0x1053408e */
  goto L_1053408e;
L_1053412b:;
  /* 1053412b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1053412d call 0x105276b0 */
  push32(0x10534132u); f_105276b0();
  /* 10534132 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10534135 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10534138 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1053413d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10534140 jne 0x10534147 */
  if (!C.zf) goto L_10534147;
  /* 10534142 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10534145 jmp 0x10534149 */
  goto L_10534149;
L_10534147:;
  /* 10534147 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10534149:;
  /* 10534149 mov esp, ebp */
  ESP = (EBP);
  /* 1053414b pop ebp */
  EBP = (pop32());
  /* 1053414c ret  */
  ESPCHK(0x10534060u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x10534160 (193 bytes, 87 insns) */
void f_10534160(void) {
  FTRACE(0x10534160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10534160 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10534162 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10534166 push ebx */
  push32((uint32_t)(EBX));
  /* 10534167 mov ebx, eax */
  EBX = (EAX);
  /* 10534169 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1053416c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10534170 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10534176 je 0x1053418b */
  if (C.zf) goto L_1053418b;
L_10534178:;
  /* 10534178 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 1053417a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1053417b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1053417d je 0x10534150 */
  if (C.zf) { jmp_ind(0x10534150u); return; }
  /* 1053417f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10534181 je 0x105341d4 */
  if (C.zf) goto L_105341d4;
  /* 10534183 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10534189 jne 0x10534178 */
  if (!C.zf) goto L_10534178;
L_1053418b:;
  /* 1053418b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 1053418d push edi */
  push32((uint32_t)(EDI));
  /* 1053418e mov eax, ebx */
  EAX = (EBX);
  /* 10534190 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 10534193 push esi */
  push32((uint32_t)(ESI));
  /* 10534194 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_10534196:;
  /* 10534196 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10534198 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 1053419d mov eax, ecx */
  EAX = (ECX);
  /* 1053419f mov esi, edi */
  ESI = (EDI);
  /* 105341a1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 105341a3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 105341a5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 105341a7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 105341aa xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105341ad xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 105341af xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 105341b1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105341b4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 105341ba jne 0x105341d8 */
  if (!C.zf) goto L_105341d8;
  /* 105341bc and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 105341c1 je 0x10534196 */
  if (C.zf) goto L_10534196;
  /* 105341c3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 105341c8 jne 0x105341d2 */
  if (!C.zf) goto L_105341d2;
  /* 105341ca and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 105341d0 jne 0x10534196 */
  if (!C.zf) goto L_10534196;
L_105341d2:;
  /* 105341d2 pop esi */
  ESI = (pop32());
  /* 105341d3 pop edi */
  EDI = (pop32());
L_105341d4:;
  /* 105341d4 pop ebx */
  EBX = (pop32());
  /* 105341d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105341d7 ret  */
  ESPCHK(0x10534160u, _esp0);
  ESP += 4; return;
L_105341d8:;
  /* 105341d8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 105341db cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105341dd je 0x10534215 */
  if (C.zf) goto L_10534215;
  /* 105341df test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 105341e1 je 0x105341d2 */
  if (C.zf) goto L_105341d2;
  /* 105341e3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105341e5 je 0x1053420e */
  if (C.zf) goto L_1053420e;
  /* 105341e7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 105341e9 je 0x105341d2 */
  if (C.zf) goto L_105341d2;
  /* 105341eb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 105341ee cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105341f0 je 0x10534207 */
  if (C.zf) goto L_10534207;
  /* 105341f2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 105341f4 je 0x105341d2 */
  if (C.zf) goto L_105341d2;
  /* 105341f6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105341f8 je 0x10534200 */
  if (C.zf) goto L_10534200;
  /* 105341fa test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 105341fc je 0x105341d2 */
  if (C.zf) goto L_105341d2;
  /* 105341fe jmp 0x10534196 */
  goto L_10534196;
L_10534200:;
  /* 10534200 pop esi */
  ESI = (pop32());
  /* 10534201 pop edi */
  EDI = (pop32());
  /* 10534202 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 10534205 pop ebx */
  EBX = (pop32());
  /* 10534206 ret  */
  ESPCHK(0x10534160u, _esp0);
  ESP += 4; return;
L_10534207:;
  /* 10534207 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 1053420a pop esi */
  ESI = (pop32());
  /* 1053420b pop edi */
  EDI = (pop32());
  /* 1053420c pop ebx */
  EBX = (pop32());
  /* 1053420d ret  */
  ESPCHK(0x10534160u, _esp0);
  ESP += 4; return;
L_1053420e:;
  /* 1053420e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 10534211 pop esi */
  ESI = (pop32());
  /* 10534212 pop edi */
  EDI = (pop32());
  /* 10534213 pop ebx */
  EBX = (pop32());
  /* 10534214 ret  */
  ESPCHK(0x10534160u, _esp0);
  ESP += 4; return;
L_10534215:;
  /* 10534215 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 10534218 pop esi */
  ESI = (pop32());
  /* 10534219 pop edi */
  EDI = (pop32());
  /* 1053421a pop ebx */
  EBX = (pop32());
  /* 1053421b ret  */
  ESPCHK(0x10534160u, _esp0);
  ESP += 4; return;
  /* 1053421c jmp dword ptr [0x10552340] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10552340)))); return;
}

/* RtlUnwind @ 0x1053436c (6 bytes, 1 insns) */
void f_1053436c(void) {
  FTRACE(0x1053436cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1053436c jmp dword ptr [0x105522e4] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x105522e4)))); return;
}

