#include "recomp.h"

/* FUN_1000fdd0 @ 0x10d9fdd0 (878 bytes, 273 insns) */
void f_10d9fdd0(void) {
  FTRACE(0x10d9fdd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9fdd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9fdd1 mov ebp, esp */
  EBP = (ESP);
  /* 10d9fdd3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9fdd6 push esi */
  push32((uint32_t)(ESI));
  /* 10d9fdd7 mov eax, dword ptr [0x10dbdc98] */
  EAX = (r32((uint32_t)(0x10dbdc98)));
  /* 10d9fddc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d9fddf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10d9fde6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10d9fded jmp 0x10d9fdf8 */
  goto L_10d9fdf8;
L_10d9fdef:;
  /* 10d9fdef mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d9fdf2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9fdf5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10d9fdf8:;
  /* 10d9fdf8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9fdfc jae 0x10d9fe31 */
  if (!C.cf) goto L_10d9fe31;
  /* 10d9fdfe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d9fe01 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9fe04 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10d9fe07 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9fe08 call 0x10d95c50 */
  push32(0x10d9fe0du); f_10d95c50();
  /* 10d9fe0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9fe10 mov esi, eax */
  ESI = (EAX);
  /* 10d9fe12 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d9fe15 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9fe18 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 10d9fe1c push ecx */
  push32((uint32_t)(ECX));
  /* 10d9fe1d call 0x10d95c50 */
  push32(0x10d9fe22u); f_10d95c50();
  /* 10d9fe22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9fe25 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9fe28 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10d9fe2c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10d9fe2f jmp 0x10d9fdef */
  goto L_10d9fdef;
L_10d9fe31:;
  /* 10d9fe31 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10d9fe38 jmp 0x10d9fe43 */
  goto L_10d9fe43;
L_10d9fe3a:;
  /* 10d9fe3a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d9fe3d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9fe40 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10d9fe43:;
  /* 10d9fe43 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9fe47 jae 0x10d9fe7d */
  if (!C.cf) goto L_10d9fe7d;
  /* 10d9fe49 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d9fe4c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9fe4f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10d9fe53 push eax */
  push32((uint32_t)(EAX));
  /* 10d9fe54 call 0x10d95c50 */
  push32(0x10d9fe59u); f_10d95c50();
  /* 10d9fe59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9fe5c mov esi, eax */
  ESI = (EAX);
  /* 10d9fe5e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d9fe61 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9fe64 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10d9fe68 push eax */
  push32((uint32_t)(EAX));
  /* 10d9fe69 call 0x10d95c50 */
  push32(0x10d9fe6eu); f_10d95c50();
  /* 10d9fe6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9fe71 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9fe74 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10d9fe78 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d9fe7b jmp 0x10d9fe3a */
  goto L_10d9fe3a;
L_10d9fe7d:;
  /* 10d9fe7d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9fe80 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10d9fe86 push eax */
  push32((uint32_t)(EAX));
  /* 10d9fe87 call 0x10d95c50 */
  push32(0x10d9fe8cu); f_10d95c50();
  /* 10d9fe8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9fe8f mov esi, eax */
  ESI = (EAX);
  /* 10d9fe91 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9fe94 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 10d9fe9a push edx */
  push32((uint32_t)(EDX));
  /* 10d9fe9b call 0x10d95c50 */
  push32(0x10d9fea0u); f_10d95c50();
  /* 10d9fea0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9fea3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9fea6 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10d9feaa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d9fead mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9feb0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10d9feb6 push edx */
  push32((uint32_t)(EDX));
  /* 10d9feb7 call 0x10d95c50 */
  push32(0x10d9febcu); f_10d95c50();
  /* 10d9febc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9febf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9fec2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10d9fec6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10d9fec9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9fecc mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 10d9fed2 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9fed3 call 0x10d95c50 */
  push32(0x10d9fed8u); f_10d95c50();
  /* 10d9fed8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9fedb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9fede lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10d9fee2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d9fee5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9fee8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 10d9feee push edx */
  push32((uint32_t)(EDX));
  /* 10d9feef call 0x10d95c50 */
  push32(0x10d9fef4u); f_10d95c50();
  /* 10d9fef4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9fef7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9fefa lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10d9fefe mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10d9ff01 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9ff04 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9ff09 push eax */
  push32((uint32_t)(EAX));
  /* 10d9ff0a call 0x10d92e00 */
  push32(0x10d9ff0fu); f_10d92e00();
  /* 10d9ff0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9ff12 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d9ff15 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9ff19 je 0x10da0136 */
  if (C.zf) goto L_10da0136;
  /* 10d9ff1f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9ff22 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10d9ff25 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9ff28 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9ff2e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10d9ff31 push 0xac */
  push32((uint32_t)(0xacu));
  /* 10d9ff36 mov eax, dword ptr [0x10dbdc98] */
  EAX = (r32((uint32_t)(0x10dbdc98)));
  /* 10d9ff3b push eax */
  push32((uint32_t)(EAX));
  /* 10d9ff3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9ff3f push ecx */
  push32((uint32_t)(ECX));
  /* 10d9ff40 call 0x10d99700 */
  push32(0x10d9ff45u); f_10d99700();
  /* 10d9ff45 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9ff48 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10d9ff4f jmp 0x10d9ff5a */
  goto L_10d9ff5a;
L_10d9ff51:;
  /* 10d9ff51 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d9ff54 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9ff57 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10d9ff5a:;
  /* 10d9ff5a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9ff5e jae 0x10d9ffce */
  if (!C.cf) goto L_10d9ffce;
  /* 10d9ff60 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d9ff63 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d9ff66 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d9ff69 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10d9ff6c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d9ff6f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9ff72 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10d9ff75 push edx */
  push32((uint32_t)(EDX));
  /* 10d9ff76 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d9ff79 push eax */
  push32((uint32_t)(EAX));
  /* 10d9ff7a call 0x10d95dd0 */
  push32(0x10d9ff7fu); f_10d95dd0();
  /* 10d9ff7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9ff82 push eax */
  push32((uint32_t)(EAX));
  /* 10d9ff83 call 0x10d95c50 */
  push32(0x10d9ff88u); f_10d95c50();
  /* 10d9ff88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9ff8b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d9ff8e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10d9ff92 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10d9ff95 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d9ff98 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d9ff9b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d9ff9e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 10d9ffa2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d9ffa5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9ffa8 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 10d9ffac push edx */
  push32((uint32_t)(EDX));
  /* 10d9ffad mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d9ffb0 push eax */
  push32((uint32_t)(EAX));
  /* 10d9ffb1 call 0x10d95dd0 */
  push32(0x10d9ffb6u); f_10d95dd0();
  /* 10d9ffb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9ffb9 push eax */
  push32((uint32_t)(EAX));
  /* 10d9ffba call 0x10d95c50 */
  push32(0x10d9ffbfu); f_10d95c50();
  /* 10d9ffbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9ffc2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d9ffc5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10d9ffc9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10d9ffcc jmp 0x10d9ff51 */
  goto L_10d9ff51;
L_10d9ffce:;
  /* 10d9ffce mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10d9ffd5 jmp 0x10d9ffe0 */
  goto L_10d9ffe0;
L_10d9ffd7:;
  /* 10d9ffd7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d9ffda add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9ffdd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10d9ffe0:;
  /* 10d9ffe0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9ffe4 jae 0x10da0056 */
  if (!C.cf) goto L_10da0056;
  /* 10d9ffe6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d9ffe9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d9ffec mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d9ffef mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 10d9fff3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d9fff6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9fff9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10d9fffd push eax */
  push32((uint32_t)(EAX));
  /* 10d9fffe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10da0001 push ecx */
  push32((uint32_t)(ECX));
  /* 10da0002 call 0x10d95dd0 */
  push32(0x10da0007u); f_10d95dd0();
  /* 10da0007 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da000a push eax */
  push32((uint32_t)(EAX));
  /* 10da000b call 0x10d95c50 */
  push32(0x10da0010u); f_10d95c50();
  /* 10da0010 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da0013 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10da0016 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10da001a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10da001d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10da0020 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10da0023 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10da0026 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 10da002a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10da002d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da0030 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10da0034 push eax */
  push32((uint32_t)(EAX));
  /* 10da0035 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10da0038 push ecx */
  push32((uint32_t)(ECX));
  /* 10da0039 call 0x10d95dd0 */
  push32(0x10da003eu); f_10d95dd0();
  /* 10da003e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da0041 push eax */
  push32((uint32_t)(EAX));
  /* 10da0042 call 0x10d95c50 */
  push32(0x10da0047u); f_10d95c50();
  /* 10da0047 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da004a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10da004d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10da0051 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10da0054 jmp 0x10d9ffd7 */
  goto L_10d9ffd7;
L_10da0056:;
  /* 10da0056 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10da0059 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10da005c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 10da0062 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da0065 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 10da006b push ecx */
  push32((uint32_t)(ECX));
  /* 10da006c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10da006f push edx */
  push32((uint32_t)(EDX));
  /* 10da0070 call 0x10d95dd0 */
  push32(0x10da0075u); f_10d95dd0();
  /* 10da0075 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da0078 push eax */
  push32((uint32_t)(EAX));
  /* 10da0079 call 0x10d95c50 */
  push32(0x10da007eu); f_10d95c50();
  /* 10da007e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da0081 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10da0084 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10da0088 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10da008b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10da008e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10da0091 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 10da0097 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da009a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10da00a0 push eax */
  push32((uint32_t)(EAX));
  /* 10da00a1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10da00a4 push ecx */
  push32((uint32_t)(ECX));
  /* 10da00a5 call 0x10d95dd0 */
  push32(0x10da00aau); f_10d95dd0();
  /* 10da00aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da00ad push eax */
  push32((uint32_t)(EAX));
  /* 10da00ae call 0x10d95c50 */
  push32(0x10da00b3u); f_10d95c50();
  /* 10da00b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da00b6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10da00b9 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10da00bd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10da00c0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10da00c3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10da00c6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 10da00cc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da00cf mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 10da00d5 push ecx */
  push32((uint32_t)(ECX));
  /* 10da00d6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10da00d9 push edx */
  push32((uint32_t)(EDX));
  /* 10da00da call 0x10d95dd0 */
  push32(0x10da00dfu); f_10d95dd0();
  /* 10da00df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da00e2 push eax */
  push32((uint32_t)(EAX));
  /* 10da00e3 call 0x10d95c50 */
  push32(0x10da00e8u); f_10d95c50();
  /* 10da00e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da00eb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10da00ee lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10da00f2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10da00f5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10da00f8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10da00fb mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 10da0101 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da0104 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 10da010a push eax */
  push32((uint32_t)(EAX));
  /* 10da010b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10da010e push ecx */
  push32((uint32_t)(ECX));
  /* 10da010f call 0x10d95dd0 */
  push32(0x10da0114u); f_10d95dd0();
  /* 10da0114 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da0117 push eax */
  push32((uint32_t)(EAX));
  /* 10da0118 call 0x10d95c50 */
  push32(0x10da011du); f_10d95c50();
  /* 10da011d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da0120 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10da0123 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10da0127 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10da012a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10da012d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10da0130 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_10da0136:;
  /* 10da0136 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da0139 pop esi */
  ESI = (pop32());
  /* 10da013a mov esp, ebp */
  ESP = (EBP);
  /* 10da013c pop ebp */
  EBP = (pop32());
  /* 10da013d ret  */
  ESPCHK(0x10d9fdd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010140 @ 0x10da0140 (31 bytes, 15 insns) */
void f_10da0140(void) {
  FTRACE(0x10da0140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10da0140 push ebp */
  push32((uint32_t)(EBP));
  /* 10da0141 mov ebp, esp */
  EBP = (ESP);
  /* 10da0143 push 0 */
  push32((uint32_t)(0x0u));
  /* 10da0145 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da0148 push eax */
  push32((uint32_t)(EAX));
  /* 10da0149 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da014c push ecx */
  push32((uint32_t)(ECX));
  /* 10da014d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da0150 push edx */
  push32((uint32_t)(EDX));
  /* 10da0151 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da0154 push eax */
  push32((uint32_t)(EAX));
  /* 10da0155 call 0x10da0160 */
  push32(0x10da015au); f_10da0160();
  /* 10da015a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da015d pop ebp */
  EBP = (pop32());
  /* 10da015e ret  */
  ESPCHK(0x10da0140u, _esp0);
  ESP += 4; return;
}

/* FUN_10010160 @ 0x10da0160 (394 bytes, 123 insns) */
void f_10da0160(void) {
  FTRACE(0x10da0160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10da0160 push ebp */
  push32((uint32_t)(EBP));
  /* 10da0161 mov ebp, esp */
  EBP = (ESP);
  /* 10da0163 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da0166 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da0169 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10da016c push 0x10dbe81c */
  push32((uint32_t)(0x10dbe81cu));
  /* 10da0171 call dword ptr [0x10dc02a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02a4))), 0x10da0177u);
  /* 10da0177 cmp dword ptr [0x10dbe80c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe80c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da017e je 0x10da019e */
  if (C.zf) goto L_10da019e;
  /* 10da0180 push 0x10dbe81c */
  push32((uint32_t)(0x10dbe81cu));
  /* 10da0185 call dword ptr [0x10dc0294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0294))), 0x10da018bu);
  /* 10da018b push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10da018d call 0x10d96820 */
  push32(0x10da0192u); f_10d96820();
  /* 10da0192 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da0195 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10da019c jmp 0x10da01a5 */
  goto L_10da01a5;
L_10da019e:;
  /* 10da019e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10da01a5:;
  /* 10da01a5 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da01a9 jne 0x10da01b6 */
  if (!C.zf) goto L_10da01b6;
  /* 10da01ab mov ecx, dword ptr [0x10dbdc98] */
  ECX = (r32((uint32_t)(0x10dbdc98)));
  /* 10da01b1 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10da01b4 jmp 0x10da01bc */
  goto L_10da01bc;
L_10da01b6:;
  /* 10da01b6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10da01b9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10da01bc:;
  /* 10da01bc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10da01bf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10da01c2:;
  /* 10da01c2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da01c6 jbe 0x10da02b3 */
  if ((C.cf||C.zf)) goto L_10da02b3;
  /* 10da01cc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da01cf mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10da01d1 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 10da01d4 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10da01d8 je 0x10da01e2 */
  if (C.zf) goto L_10da01e2;
  /* 10da01da cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10da01de je 0x10da01e7 */
  if (C.zf) goto L_10da01e7;
  /* 10da01e0 jmp 0x10da0241 */
  goto L_10da0241;
L_10da01e2:;
  /* 10da01e2 jmp 0x10da02b3 */
  goto L_10da02b3;
L_10da01e7:;
  /* 10da01e7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da01ea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da01ed mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10da01f0 mov dword ptr [0x10dbe7f8], 0 */
  w32((uint32_t)(0x10dbe7f8), (0x0u));
  /* 10da01fa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da01fd movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10da0200 cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da0203 jne 0x10da0218 */
  if (!C.zf) goto L_10da0218;
  /* 10da0205 mov dword ptr [0x10dbe7f8], 1 */
  w32((uint32_t)(0x10dbe7f8), (0x1u));
  /* 10da020f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da0212 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da0215 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10da0218:;
  /* 10da0218 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da021b push ecx */
  push32((uint32_t)(ECX));
  /* 10da021c lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10da021f push edx */
  push32((uint32_t)(EDX));
  /* 10da0220 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10da0223 push eax */
  push32((uint32_t)(EAX));
  /* 10da0224 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da0227 push ecx */
  push32((uint32_t)(ECX));
  /* 10da0228 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da022b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10da022d push eax */
  push32((uint32_t)(EAX));
  /* 10da022e call 0x10da02f0 */
  push32(0x10da0233u); f_10da02f0();
  /* 10da0233 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da0236 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da0239 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da023c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10da023f jmp 0x10da02ae */
  goto L_10da02ae;
L_10da0241:;
  /* 10da0241 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da0244 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da0246 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10da0248 mov ecx, dword ptr [0x10dbcc98] */
  ECX = (r32((uint32_t)(0x10dbcc98)));
  /* 10da024e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10da0250 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10da0254 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10da025a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10da025c je 0x10da0289 */
  if (C.zf) goto L_10da0289;
  /* 10da025e cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da0262 jbe 0x10da0289 */
  if ((C.cf||C.zf)) goto L_10da0289;
  /* 10da0264 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da0267 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da026a mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10da026c mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10da026e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da0271 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da0274 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10da0277 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da027a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da027d mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10da0280 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da0283 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da0286 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10da0289:;
  /* 10da0289 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da028c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da028f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10da0291 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10da0293 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da0296 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da0299 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10da029c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da029f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da02a2 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10da02a5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da02a8 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da02ab mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10da02ae:;
  /* 10da02ae jmp 0x10da01c2 */
  goto L_10da01c2;
L_10da02b3:;
  /* 10da02b3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da02b7 je 0x10da02c5 */
  if (C.zf) goto L_10da02c5;
  /* 10da02b9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10da02bb call 0x10d968c0 */
  push32(0x10da02c0u); f_10d968c0();
  /* 10da02c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da02c3 jmp 0x10da02d0 */
  goto L_10da02d0;
L_10da02c5:;
  /* 10da02c5 push 0x10dbe81c */
  push32((uint32_t)(0x10dbe81cu));
  /* 10da02ca call dword ptr [0x10dc0294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0294))), 0x10da02d0u);
L_10da02d0:;
  /* 10da02d0 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da02d4 jbe 0x10da02e4 */
  if ((C.cf||C.zf)) goto L_10da02e4;
  /* 10da02d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da02d9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10da02dc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da02df sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da02e2 jmp 0x10da02e6 */
  goto L_10da02e6;
L_10da02e4:;
  /* 10da02e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10da02e6:;
  /* 10da02e6 mov esp, ebp */
  ESP = (EBP);
  /* 10da02e8 pop ebp */
  EBP = (pop32());
  /* 10da02e9 ret  */
  ESPCHK(0x10da0160u, _esp0);
  ESP += 4; return;
}

/* FUN_100102f0 @ 0x10da02f0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_10da02f0(void) {
  FTRACE(0x10da02f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10da02f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10da02f1 mov ebp, esp */
  EBP = (ESP);
  /* 10da02f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da02f6 push esi */
  push32((uint32_t)(ESI));
  /* 10da02f7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 10da02fb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10da02fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da0301 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da0304 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10da0307 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da030b ja 0x10da0858 */
  if ((!C.cf&&!C.zf)) goto L_10da0858;
  /* 10da0311 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da0314 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10da0316 mov dl, byte ptr [eax + 0x10da08b9] */
  DL = (r8((uint32_t)(EAX + 0x10da08b9)));
  /* 10da031c jmp dword ptr [edx*4 + 0x10da085d] */
  switch (EDX) {
    case 0: goto L_10da0836;
    case 1: goto L_10da0345;
    case 2: goto L_10da038b;
    case 3: goto L_10da04d8;
    case 4: goto L_10da0500;
    case 5: goto L_10da059f;
    case 6: goto L_10da060b;
    case 7: goto L_10da0634;
    case 8: goto L_10da0675;
    case 9: goto L_10da0757;
    case 10: goto L_10da07be;
    case 11: goto L_10da080b;
    case 12: goto L_10da0323;
    case 13: goto L_10da0368;
    case 14: goto L_10da03ae;
    case 15: goto L_10da04ae;
    case 16: goto L_10da0545;
    case 17: goto L_10da0572;
    case 18: goto L_10da05c7;
    case 19: goto L_10da064b;
    case 20: goto L_10da06f9;
    case 21: goto L_10da0788;
    case 22: goto L_10da0858;
    default: x86_unimpl("switch@0x10da031c out of table"); return;
  }
L_10da0323:;
  /* 10da0323 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da0326 push ecx */
  push32((uint32_t)(ECX));
  /* 10da0327 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da032a push edx */
  push32((uint32_t)(EDX));
  /* 10da032b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da032e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10da0331 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10da0334 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10da0337 push eax */
  push32((uint32_t)(EAX));
  /* 10da0338 call 0x10da0910 */
  push32(0x10da033du); f_10da0910();
  /* 10da033d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da0340 jmp 0x10da0858 */
  goto L_10da0858;
L_10da0345:;
  /* 10da0345 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da0348 push ecx */
  push32((uint32_t)(ECX));
  /* 10da0349 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da034c push edx */
  push32((uint32_t)(EDX));
  /* 10da034d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da0350 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10da0353 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10da0356 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 10da035a push eax */
  push32((uint32_t)(EAX));
  /* 10da035b call 0x10da0910 */
  push32(0x10da0360u); f_10da0910();
  /* 10da0360 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da0363 jmp 0x10da0858 */
  goto L_10da0858;
L_10da0368:;
  /* 10da0368 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da036b push ecx */
  push32((uint32_t)(ECX));
  /* 10da036c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da036f push edx */
  push32((uint32_t)(EDX));
  /* 10da0370 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da0373 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10da0376 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10da0379 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10da037d push eax */
  push32((uint32_t)(EAX));
  /* 10da037e call 0x10da0910 */
  push32(0x10da0383u); f_10da0910();
  /* 10da0383 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da0386 jmp 0x10da0858 */
  goto L_10da0858;
L_10da038b:;
  /* 10da038b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da038e push ecx */
  push32((uint32_t)(ECX));
  /* 10da038f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da0392 push edx */
  push32((uint32_t)(EDX));
  /* 10da0393 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da0396 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10da0399 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10da039c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10da03a0 push eax */
  push32((uint32_t)(EAX));
  /* 10da03a1 call 0x10da0910 */
  push32(0x10da03a6u); f_10da0910();
  /* 10da03a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da03a9 jmp 0x10da0858 */
  goto L_10da0858;
L_10da03ae:;
  /* 10da03ae cmp dword ptr [0x10dbe7f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe7f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da03b5 je 0x10da0436 */
  if (C.zf) goto L_10da0436;
  /* 10da03b7 mov dword ptr [0x10dbe7f8], 0 */
  w32((uint32_t)(0x10dbe7f8), (0x0u));
  /* 10da03c1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10da03c4 push ecx */
  push32((uint32_t)(ECX));
  /* 10da03c5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da03c8 push edx */
  push32((uint32_t)(EDX));
  /* 10da03c9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da03cc push eax */
  push32((uint32_t)(EAX));
  /* 10da03cd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da03d0 push ecx */
  push32((uint32_t)(ECX));
  /* 10da03d1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10da03d4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 10da03da push eax */
  push32((uint32_t)(EAX));
  /* 10da03db call 0x10da0ac0 */
  push32(0x10da03e0u); f_10da0ac0();
  /* 10da03e0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da03e3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da03e6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da03e9 jne 0x10da03f0 */
  if (!C.zf) goto L_10da03f0;
  /* 10da03eb jmp 0x10da0858 */
  goto L_10da0858;
L_10da03f0:;
  /* 10da03f0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da03f3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10da03f5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 10da03f8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da03fb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10da03fd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da0400 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da0403 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10da0405 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da0408 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10da040a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da040d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da0410 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10da0412 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10da0415 push ecx */
  push32((uint32_t)(ECX));
  /* 10da0416 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da0419 push edx */
  push32((uint32_t)(EDX));
  /* 10da041a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da041d push eax */
  push32((uint32_t)(EAX));
  /* 10da041e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da0421 push ecx */
  push32((uint32_t)(ECX));
  /* 10da0422 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10da0425 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10da042b push eax */
  push32((uint32_t)(EAX));
  /* 10da042c call 0x10da0ac0 */
  push32(0x10da0431u); f_10da0ac0();
  /* 10da0431 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da0434 jmp 0x10da04a9 */
  goto L_10da04a9;
L_10da0436:;
  /* 10da0436 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10da0439 push ecx */
  push32((uint32_t)(ECX));
  /* 10da043a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da043d push edx */
  push32((uint32_t)(EDX));
  /* 10da043e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da0441 push eax */
  push32((uint32_t)(EAX));
  /* 10da0442 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da0445 push ecx */
  push32((uint32_t)(ECX));
  /* 10da0446 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10da0449 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 10da044f push eax */
  push32((uint32_t)(EAX));
  /* 10da0450 call 0x10da0ac0 */
  push32(0x10da0455u); f_10da0ac0();
  /* 10da0455 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da0458 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da045b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da045e jne 0x10da0465 */
  if (!C.zf) goto L_10da0465;
  /* 10da0460 jmp 0x10da0858 */
  goto L_10da0858;
L_10da0465:;
  /* 10da0465 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da0468 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10da046a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 10da046d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da0470 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10da0472 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da0475 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da0478 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10da047a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da047d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10da047f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da0482 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da0485 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10da0487 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10da048a push ecx */
  push32((uint32_t)(ECX));
  /* 10da048b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da048e push edx */
  push32((uint32_t)(EDX));
  /* 10da048f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da0492 push eax */
  push32((uint32_t)(EAX));
  /* 10da0493 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da0496 push ecx */
  push32((uint32_t)(ECX));
  /* 10da0497 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10da049a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10da04a0 push eax */
  push32((uint32_t)(EAX));
  /* 10da04a1 call 0x10da0ac0 */
  push32(0x10da04a6u); f_10da0ac0();
  /* 10da04a6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10da04a9:;
  /* 10da04a9 jmp 0x10da0858 */
  goto L_10da0858;
L_10da04ae:;
  /* 10da04ae mov ecx, dword ptr [0x10dbe7f8] */
  ECX = (r32((uint32_t)(0x10dbe7f8)));
  /* 10da04b4 mov dword ptr [0x10dbe808], ecx */
  w32((uint32_t)(0x10dbe808), (ECX));
  /* 10da04ba mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da04bd push edx */
  push32((uint32_t)(EDX));
  /* 10da04be mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da04c1 push eax */
  push32((uint32_t)(EAX));
  /* 10da04c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10da04c4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da04c7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10da04ca push edx */
  push32((uint32_t)(EDX));
  /* 10da04cb call 0x10da0960 */
  push32(0x10da04d0u); f_10da0960();
  /* 10da04d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da04d3 jmp 0x10da0858 */
  goto L_10da0858;
L_10da04d8:;
  /* 10da04d8 mov eax, dword ptr [0x10dbe7f8] */
  EAX = (r32((uint32_t)(0x10dbe7f8)));
  /* 10da04dd mov dword ptr [0x10dbe808], eax */
  w32((uint32_t)(0x10dbe808), (EAX));
  /* 10da04e2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da04e5 push ecx */
  push32((uint32_t)(ECX));
  /* 10da04e6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da04e9 push edx */
  push32((uint32_t)(EDX));
  /* 10da04ea push 2 */
  push32((uint32_t)(0x2u));
  /* 10da04ec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da04ef mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10da04f2 push ecx */
  push32((uint32_t)(ECX));
  /* 10da04f3 call 0x10da0960 */
  push32(0x10da04f8u); f_10da0960();
  /* 10da04f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da04fb jmp 0x10da0858 */
  goto L_10da0858;
L_10da0500:;
  /* 10da0500 mov edx, dword ptr [0x10dbe7f8] */
  EDX = (r32((uint32_t)(0x10dbe7f8)));
  /* 10da0506 mov dword ptr [0x10dbe808], edx */
  w32((uint32_t)(0x10dbe808), (EDX));
  /* 10da050c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da050f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 10da0512 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10da0513 mov ecx, 0xc */
  ECX = (0xcu);
  /* 10da0518 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10da051a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10da051d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da0521 jne 0x10da052a */
  if (!C.zf) goto L_10da052a;
  /* 10da0523 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_10da052a:;
  /* 10da052a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da052d push edx */
  push32((uint32_t)(EDX));
  /* 10da052e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da0531 push eax */
  push32((uint32_t)(EAX));
  /* 10da0532 push 2 */
  push32((uint32_t)(0x2u));
  /* 10da0534 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da0537 push ecx */
  push32((uint32_t)(ECX));
  /* 10da0538 call 0x10da0960 */
  push32(0x10da053du); f_10da0960();
  /* 10da053d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da0540 jmp 0x10da0858 */
  goto L_10da0858;
L_10da0545:;
  /* 10da0545 mov edx, dword ptr [0x10dbe7f8] */
  EDX = (r32((uint32_t)(0x10dbe7f8)));
  /* 10da054b mov dword ptr [0x10dbe808], edx */
  w32((uint32_t)(0x10dbe808), (EDX));
  /* 10da0551 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da0554 push eax */
  push32((uint32_t)(EAX));
  /* 10da0555 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da0558 push ecx */
  push32((uint32_t)(ECX));
  /* 10da0559 push 3 */
  push32((uint32_t)(0x3u));
  /* 10da055b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da055e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10da0561 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da0564 push eax */
  push32((uint32_t)(EAX));
  /* 10da0565 call 0x10da0960 */
  push32(0x10da056au); f_10da0960();
  /* 10da056a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da056d jmp 0x10da0858 */
  goto L_10da0858;
L_10da0572:;
  /* 10da0572 mov ecx, dword ptr [0x10dbe7f8] */
  ECX = (r32((uint32_t)(0x10dbe7f8)));
  /* 10da0578 mov dword ptr [0x10dbe808], ecx */
  w32((uint32_t)(0x10dbe808), (ECX));
  /* 10da057e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da0581 push edx */
  push32((uint32_t)(EDX));
  /* 10da0582 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da0585 push eax */
  push32((uint32_t)(EAX));
  /* 10da0586 push 2 */
  push32((uint32_t)(0x2u));
  /* 10da0588 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da058b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10da058e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da0591 push edx */
  push32((uint32_t)(EDX));
  /* 10da0592 call 0x10da0960 */
  push32(0x10da0597u); f_10da0960();
  /* 10da0597 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da059a jmp 0x10da0858 */
  goto L_10da0858;
L_10da059f:;
  /* 10da059f mov eax, dword ptr [0x10dbe7f8] */
  EAX = (r32((uint32_t)(0x10dbe7f8)));
  /* 10da05a4 mov dword ptr [0x10dbe808], eax */
  w32((uint32_t)(0x10dbe808), (EAX));
  /* 10da05a9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da05ac push ecx */
  push32((uint32_t)(ECX));
  /* 10da05ad mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da05b0 push edx */
  push32((uint32_t)(EDX));
  /* 10da05b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10da05b3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da05b6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10da05b9 push ecx */
  push32((uint32_t)(ECX));
  /* 10da05ba call 0x10da0960 */
  push32(0x10da05bfu); f_10da0960();
  /* 10da05bf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da05c2 jmp 0x10da0858 */
  goto L_10da0858;
L_10da05c7:;
  /* 10da05c7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da05ca cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da05ce jg 0x10da05ec */
  if ((!C.zf&&C.sf==C.of)) goto L_10da05ec;
  /* 10da05d0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da05d3 push eax */
  push32((uint32_t)(EAX));
  /* 10da05d4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da05d7 push ecx */
  push32((uint32_t)(ECX));
  /* 10da05d8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10da05db mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10da05e1 push eax */
  push32((uint32_t)(EAX));
  /* 10da05e2 call 0x10da0910 */
  push32(0x10da05e7u); f_10da0910();
  /* 10da05e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da05ea jmp 0x10da0606 */
  goto L_10da0606;
L_10da05ec:;
  /* 10da05ec mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da05ef push ecx */
  push32((uint32_t)(ECX));
  /* 10da05f0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da05f3 push edx */
  push32((uint32_t)(EDX));
  /* 10da05f4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10da05f7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 10da05fd push ecx */
  push32((uint32_t)(ECX));
  /* 10da05fe call 0x10da0910 */
  push32(0x10da0603u); f_10da0910();
  /* 10da0603 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10da0606:;
  /* 10da0606 jmp 0x10da0858 */
  goto L_10da0858;
L_10da060b:;
  /* 10da060b mov edx, dword ptr [0x10dbe7f8] */
  EDX = (r32((uint32_t)(0x10dbe7f8)));
  /* 10da0611 mov dword ptr [0x10dbe808], edx */
  w32((uint32_t)(0x10dbe808), (EDX));
  /* 10da0617 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da061a push eax */
  push32((uint32_t)(EAX));
  /* 10da061b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da061e push ecx */
  push32((uint32_t)(ECX));
  /* 10da061f push 2 */
  push32((uint32_t)(0x2u));
  /* 10da0621 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da0624 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10da0626 push eax */
  push32((uint32_t)(EAX));
  /* 10da0627 call 0x10da0960 */
  push32(0x10da062cu); f_10da0960();
  /* 10da062c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da062f jmp 0x10da0858 */
  goto L_10da0858;
L_10da0634:;
  /* 10da0634 mov ecx, dword ptr [0x10dbe7f8] */
  ECX = (r32((uint32_t)(0x10dbe7f8)));
  /* 10da063a mov dword ptr [0x10dbe808], ecx */
  w32((uint32_t)(0x10dbe808), (ECX));
  /* 10da0640 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da0643 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10da0646 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10da0649 jmp 0x10da069d */
  goto L_10da069d;
L_10da064b:;
  /* 10da064b mov ecx, dword ptr [0x10dbe7f8] */
  ECX = (r32((uint32_t)(0x10dbe7f8)));
  /* 10da0651 mov dword ptr [0x10dbe808], ecx */
  w32((uint32_t)(0x10dbe808), (ECX));
  /* 10da0657 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da065a push edx */
  push32((uint32_t)(EDX));
  /* 10da065b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da065e push eax */
  push32((uint32_t)(EAX));
  /* 10da065f push 1 */
  push32((uint32_t)(0x1u));
  /* 10da0661 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da0664 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10da0667 push edx */
  push32((uint32_t)(EDX));
  /* 10da0668 call 0x10da0960 */
  push32(0x10da066du); f_10da0960();
  /* 10da066d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da0670 jmp 0x10da0858 */
  goto L_10da0858;
L_10da0675:;
  /* 10da0675 mov eax, dword ptr [0x10dbe7f8] */
  EAX = (r32((uint32_t)(0x10dbe7f8)));
  /* 10da067a mov dword ptr [0x10dbe808], eax */
  w32((uint32_t)(0x10dbe808), (EAX));
  /* 10da067f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da0682 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da0686 jne 0x10da0691 */
  if (!C.zf) goto L_10da0691;
  /* 10da0688 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 10da068f jmp 0x10da069d */
  goto L_10da069d;
L_10da0691:;
  /* 10da0691 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da0694 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10da0697 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da069a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10da069d:;
  /* 10da069d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da06a0 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10da06a3 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da06a6 jge 0x10da06b1 */
  if ((C.sf==C.of)) goto L_10da06b1;
  /* 10da06a8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10da06af jmp 0x10da06de */
  goto L_10da06de;
L_10da06b1:;
  /* 10da06b1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da06b4 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10da06b7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10da06b8 mov ecx, 7 */
  ECX = (0x7u);
  /* 10da06bd idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10da06bf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10da06c2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da06c5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10da06c8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10da06c9 mov ecx, 7 */
  ECX = (0x7u);
  /* 10da06ce idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10da06d0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da06d3 jl 0x10da06de */
  if ((C.sf!=C.of)) goto L_10da06de;
  /* 10da06d5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da06d8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da06db mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10da06de:;
  /* 10da06de mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da06e1 push eax */
  push32((uint32_t)(EAX));
  /* 10da06e2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da06e5 push ecx */
  push32((uint32_t)(ECX));
  /* 10da06e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10da06e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da06eb push edx */
  push32((uint32_t)(EDX));
  /* 10da06ec call 0x10da0960 */
  push32(0x10da06f1u); f_10da0960();
  /* 10da06f1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da06f4 jmp 0x10da0858 */
  goto L_10da0858;
L_10da06f9:;
  /* 10da06f9 cmp dword ptr [0x10dbe7f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe7f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da0700 je 0x10da0730 */
  if (C.zf) goto L_10da0730;
  /* 10da0702 mov dword ptr [0x10dbe7f8], 0 */
  w32((uint32_t)(0x10dbe7f8), (0x0u));
  /* 10da070c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10da070f push eax */
  push32((uint32_t)(EAX));
  /* 10da0710 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da0713 push ecx */
  push32((uint32_t)(ECX));
  /* 10da0714 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da0717 push edx */
  push32((uint32_t)(EDX));
  /* 10da0718 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da071b push eax */
  push32((uint32_t)(EAX));
  /* 10da071c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10da071f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 10da0725 push edx */
  push32((uint32_t)(EDX));
  /* 10da0726 call 0x10da0ac0 */
  push32(0x10da072bu); f_10da0ac0();
  /* 10da072b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da072e jmp 0x10da0752 */
  goto L_10da0752;
L_10da0730:;
  /* 10da0730 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10da0733 push eax */
  push32((uint32_t)(EAX));
  /* 10da0734 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da0737 push ecx */
  push32((uint32_t)(ECX));
  /* 10da0738 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da073b push edx */
  push32((uint32_t)(EDX));
  /* 10da073c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da073f push eax */
  push32((uint32_t)(EAX));
  /* 10da0740 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10da0743 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10da0749 push edx */
  push32((uint32_t)(EDX));
  /* 10da074a call 0x10da0ac0 */
  push32(0x10da074fu); f_10da0ac0();
  /* 10da074f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10da0752:;
  /* 10da0752 jmp 0x10da0858 */
  goto L_10da0858;
L_10da0757:;
  /* 10da0757 mov dword ptr [0x10dbe7f8], 0 */
  w32((uint32_t)(0x10dbe7f8), (0x0u));
  /* 10da0761 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10da0764 push eax */
  push32((uint32_t)(EAX));
  /* 10da0765 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da0768 push ecx */
  push32((uint32_t)(ECX));
  /* 10da0769 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da076c push edx */
  push32((uint32_t)(EDX));
  /* 10da076d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da0770 push eax */
  push32((uint32_t)(EAX));
  /* 10da0771 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10da0774 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 10da077a push edx */
  push32((uint32_t)(EDX));
  /* 10da077b call 0x10da0ac0 */
  push32(0x10da0780u); f_10da0ac0();
  /* 10da0780 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da0783 jmp 0x10da0858 */
  goto L_10da0858;
L_10da0788:;
  /* 10da0788 mov eax, dword ptr [0x10dbe7f8] */
  EAX = (r32((uint32_t)(0x10dbe7f8)));
  /* 10da078d mov dword ptr [0x10dbe808], eax */
  w32((uint32_t)(0x10dbe808), (EAX));
  /* 10da0792 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da0795 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10da0798 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10da0799 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10da079e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10da07a0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10da07a3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da07a6 push edx */
  push32((uint32_t)(EDX));
  /* 10da07a7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da07aa push eax */
  push32((uint32_t)(EAX));
  /* 10da07ab push 2 */
  push32((uint32_t)(0x2u));
  /* 10da07ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da07b0 push ecx */
  push32((uint32_t)(ECX));
  /* 10da07b1 call 0x10da0960 */
  push32(0x10da07b6u); f_10da0960();
  /* 10da07b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da07b9 jmp 0x10da0858 */
  goto L_10da0858;
L_10da07be:;
  /* 10da07be mov edx, dword ptr [0x10dbe7f8] */
  EDX = (r32((uint32_t)(0x10dbe7f8)));
  /* 10da07c4 mov dword ptr [0x10dbe808], edx */
  w32((uint32_t)(0x10dbe808), (EDX));
  /* 10da07ca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da07cd mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 10da07d0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10da07d1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10da07d6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10da07d8 mov ecx, eax */
  ECX = (EAX);
  /* 10da07da add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da07dd imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10da07e0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da07e3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10da07e6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10da07e7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 10da07ec idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10da07ee add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da07f0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10da07f3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da07f6 push eax */
  push32((uint32_t)(EAX));
  /* 10da07f7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da07fa push ecx */
  push32((uint32_t)(ECX));
  /* 10da07fb push 4 */
  push32((uint32_t)(0x4u));
  /* 10da07fd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da0800 push edx */
  push32((uint32_t)(EDX));
  /* 10da0801 call 0x10da0960 */
  push32(0x10da0806u); f_10da0960();
  /* 10da0806 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da0809 jmp 0x10da0858 */
  goto L_10da0858;
L_10da080b:;
  /* 10da080b call 0x10da1920 */
  push32(0x10da0810u); f_10da1920();
  /* 10da0810 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da0813 push eax */
  push32((uint32_t)(EAX));
  /* 10da0814 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da0817 push ecx */
  push32((uint32_t)(ECX));
  /* 10da0818 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da081b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da081d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da0821 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 10da0824 mov ecx, dword ptr [eax*4 + 0x10dbde1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10dbde1c)));
  /* 10da082b push ecx */
  push32((uint32_t)(ECX));
  /* 10da082c call 0x10da0910 */
  push32(0x10da0831u); f_10da0910();
  /* 10da0831 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da0834 jmp 0x10da0858 */
  goto L_10da0858;
L_10da0836:;
  /* 10da0836 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da0839 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10da083b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 10da083e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da0841 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10da0843 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da0846 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da0849 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10da084b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da084e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10da0850 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da0853 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da0856 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10da0858:;
  /* 10da0858 pop esi */
  ESI = (pop32());
  /* 10da0859 mov esp, ebp */
  ESP = (EBP);
  /* 10da085b pop ebp */
  EBP = (pop32());
  /* 10da085c ret  */
  ESPCHK(0x10da02f0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x10da0910 (72 bytes, 30 insns) */
void f_10da0910(void) {
  FTRACE(0x10da0910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10da0910 push ebp */
  push32((uint32_t)(EBP));
  /* 10da0911 mov ebp, esp */
  EBP = (ESP);
L_10da0913:;
  /* 10da0913 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da0916 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da0919 je 0x10da0956 */
  if (C.zf) goto L_10da0956;
  /* 10da091b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da091e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10da0921 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10da0923 je 0x10da0956 */
  if (C.zf) goto L_10da0956;
  /* 10da0925 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da0928 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10da092a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da092d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10da092f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10da0931 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da0934 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10da0936 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da0939 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da093c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10da093e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da0941 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da0944 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10da0947 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da094a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10da094c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da094f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da0952 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10da0954 jmp 0x10da0913 */
  goto L_10da0913;
L_10da0956:;
  /* 10da0956 pop ebp */
  EBP = (pop32());
  /* 10da0957 ret  */
  ESPCHK(0x10da0910u, _esp0);
  ESP += 4; return;
}

/* FUN_10010960 @ 0x10da0960 (173 bytes, 64 insns) */
void f_10da0960(void) {
  FTRACE(0x10da0960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10da0960 push ebp */
  push32((uint32_t)(EBP));
  /* 10da0961 mov ebp, esp */
  EBP = (ESP);
  /* 10da0963 push ecx */
  push32((uint32_t)(ECX));
  /* 10da0964 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10da096b cmp dword ptr [0x10dbe808], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe808))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da0972 je 0x10da098a */
  if (C.zf) goto L_10da098a;
  /* 10da0974 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da0977 push eax */
  push32((uint32_t)(EAX));
  /* 10da0978 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da097b push ecx */
  push32((uint32_t)(ECX));
  /* 10da097c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da097f push edx */
  push32((uint32_t)(EDX));
  /* 10da0980 call 0x10da0a10 */
  push32(0x10da0985u); f_10da0a10();
  /* 10da0985 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da0988 jmp 0x10da0a09 */
  goto L_10da0a09;
L_10da098a:;
  /* 10da098a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da098d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da0990 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da0992 jae 0x10da0a00 */
  if (!C.cf) goto L_10da0a00;
  /* 10da0994 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da0997 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da099a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10da099d jmp 0x10da09a8 */
  goto L_10da09a8;
L_10da099f:;
  /* 10da099f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da09a2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da09a5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10da09a8:;
  /* 10da09a8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da09ab add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da09ae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10da09b0 je 0x10da09e4 */
  if (C.zf) goto L_10da09e4;
  /* 10da09b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da09b5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10da09b6 mov ecx, 0xa */
  ECX = (0xau);
  /* 10da09bb idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10da09bd add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da09c0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da09c3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10da09c5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da09c8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 10da09cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da09ce cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10da09cf mov ecx, 0xa */
  ECX = (0xau);
  /* 10da09d4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10da09d6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10da09d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da09dc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da09df mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10da09e2 jmp 0x10da099f */
  goto L_10da099f;
L_10da09e4:;
  /* 10da09e4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da09e7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10da09e9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da09ec mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da09ef mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10da09f1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da09f4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10da09f6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da09f9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da09fc mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10da09fe jmp 0x10da0a09 */
  goto L_10da0a09;
L_10da0a00:;
  /* 10da0a00 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da0a03 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10da0a09:;
  /* 10da0a09 mov esp, ebp */
  ESP = (EBP);
  /* 10da0a0b pop ebp */
  EBP = (pop32());
  /* 10da0a0c ret  */
  ESPCHK(0x10da0960u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x10da0a10 (172 bytes, 65 insns) */
void f_10da0a10(void) {
  FTRACE(0x10da0a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10da0a10 push ebp */
  push32((uint32_t)(EBP));
  /* 10da0a11 mov ebp, esp */
  EBP = (ESP);
  /* 10da0a13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da0a16 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da0a19 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10da0a1b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10da0a1e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da0a21 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da0a24 jbe 0x10da0a6b */
  if ((C.cf||C.zf)) goto L_10da0a6b;
L_10da0a26:;
  /* 10da0a26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da0a29 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10da0a2a mov ecx, 0xa */
  ECX = (0xau);
  /* 10da0a2f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10da0a31 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da0a34 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da0a37 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10da0a39 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da0a3c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da0a3f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10da0a42 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da0a45 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10da0a47 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da0a4a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da0a4d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10da0a4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da0a52 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10da0a53 mov ecx, 0xa */
  ECX = (0xau);
  /* 10da0a58 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10da0a5a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10da0a5d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da0a61 jle 0x10da0a6b */
  if ((C.zf||C.sf!=C.of)) goto L_10da0a6b;
  /* 10da0a63 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da0a66 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da0a69 ja 0x10da0a26 */
  if ((!C.cf&&!C.zf)) goto L_10da0a26;
L_10da0a6b:;
  /* 10da0a6b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da0a6e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10da0a70 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10da0a73 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da0a76 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da0a79 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10da0a7b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da0a7e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da0a81 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10da0a84:;
  /* 10da0a84 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da0a87 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10da0a89 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 10da0a8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da0a8f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10da0a92 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10da0a94 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10da0a96 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da0a99 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da0a9c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10da0a9f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10da0aa2 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10da0aa5 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10da0aa7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10da0aaa add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da0aad mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10da0ab0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10da0ab3 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da0ab6 jb 0x10da0a84 */
  if (C.cf) goto L_10da0a84;
  /* 10da0ab8 mov esp, ebp */
  ESP = (EBP);
  /* 10da0aba pop ebp */
  EBP = (pop32());
  /* 10da0abb ret  */
  ESPCHK(0x10da0a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ac0 @ 0x10da0ac0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_10da0ac0(void) {
  FTRACE(0x10da0ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10da0ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 10da0ac1 mov ebp, esp */
  EBP = (ESP);
  /* 10da0ac3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10da0ac6:;
  /* 10da0ac6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da0ac9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10da0acc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10da0ace je 0x10da0f3c */
  if (C.zf) goto L_10da0f3c;
  /* 10da0ad4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da0ad7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da0ada je 0x10da0f3c */
  if (C.zf) goto L_10da0f3c;
  /* 10da0ae0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 10da0ae4 mov dword ptr [0x10dbe808], 0 */
  w32((uint32_t)(0x10dbe808), (0x0u));
  /* 10da0aee mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10da0af5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da0af8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10da0afb jmp 0x10da0b06 */
  goto L_10da0b06;
L_10da0afd:;
  /* 10da0afd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da0b00 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da0b03 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10da0b06:;
  /* 10da0b06 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da0b09 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10da0b0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da0b0f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10da0b12 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da0b15 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da0b18 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10da0b1b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da0b1d jne 0x10da0b21 */
  if (!C.zf) goto L_10da0b21;
  /* 10da0b1f jmp 0x10da0afd */
  goto L_10da0afd;
L_10da0b21:;
  /* 10da0b21 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da0b24 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da0b27 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10da0b2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da0b2d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10da0b30 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10da0b33 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10da0b36 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da0b39 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10da0b3c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da0b40 ja 0x10da0e90 */
  if ((!C.cf&&!C.zf)) goto L_10da0e90;
  /* 10da0b46 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10da0b49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da0b4b mov al, byte ptr [ecx + 0x10da0f6c] */
  AL = (r8((uint32_t)(ECX + 0x10da0f6c)));
  /* 10da0b51 jmp dword ptr [eax*4 + 0x10da0f40] */
  switch (EAX) {
    case 0: goto L_10da0daf;
    case 1: goto L_10da0c93;
    case 2: goto L_10da0c1e;
    case 3: goto L_10da0b58;
    case 4: goto L_10da0b96;
    case 5: goto L_10da0bf7;
    case 6: goto L_10da0c45;
    case 7: goto L_10da0c6c;
    case 8: goto L_10da0cda;
    case 9: goto L_10da0bd4;
    case 10: goto L_10da0e90;
    default: x86_unimpl("switch@0x10da0b51 out of table"); return;
  }
L_10da0b58:;
  /* 10da0b58 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da0b5b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10da0b5e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10da0b61 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da0b64 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10da0b67 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da0b6b ja 0x10da0b91 */
  if ((!C.cf&&!C.zf)) goto L_10da0b91;
  /* 10da0b6d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10da0b70 jmp dword ptr [ecx*4 + 0x10da0fbf] */
  switch (ECX) {
    case 0: goto L_10da0b77;
    case 1: goto L_10da0b81;
    case 2: goto L_10da0b87;
    case 3: goto L_10da0b8d;
    case 4: goto L_10da0bb5;
    case 5: goto L_10da0bbf;
    case 6: goto L_10da0bc5;
    case 7: goto L_10da0bcb;
    default: x86_unimpl("switch@0x10da0b70 out of table"); return;
  }
L_10da0b77:;
  /* 10da0b77 mov dword ptr [0x10dbe808], 1 */
  w32((uint32_t)(0x10dbe808), (0x1u));
L_10da0b81:;
  /* 10da0b81 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 10da0b85 jmp 0x10da0b91 */
  goto L_10da0b91;
L_10da0b87:;
  /* 10da0b87 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 10da0b8b jmp 0x10da0b91 */
  goto L_10da0b91;
L_10da0b8d:;
  /* 10da0b8d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_10da0b91:;
  /* 10da0b91 jmp 0x10da0e90 */
  goto L_10da0e90;
L_10da0b96:;
  /* 10da0b96 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da0b99 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10da0b9c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10da0b9f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da0ba2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10da0ba5 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da0ba9 ja 0x10da0bcf */
  if ((!C.cf&&!C.zf)) goto L_10da0bcf;
  /* 10da0bab mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10da0bae jmp dword ptr [ecx*4 + 0x10da0fcf] */
  switch (ECX) {
    case 0: goto L_10da0bb5;
    case 1: goto L_10da0bbf;
    case 2: goto L_10da0bc5;
    case 3: goto L_10da0bcb;
    default: x86_unimpl("switch@0x10da0bae out of table"); return;
  }
L_10da0bb5:;
  /* 10da0bb5 mov dword ptr [0x10dbe808], 1 */
  w32((uint32_t)(0x10dbe808), (0x1u));
L_10da0bbf:;
  /* 10da0bbf mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 10da0bc3 jmp 0x10da0bcf */
  goto L_10da0bcf;
L_10da0bc5:;
  /* 10da0bc5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 10da0bc9 jmp 0x10da0bcf */
  goto L_10da0bcf;
L_10da0bcb:;
  /* 10da0bcb mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_10da0bcf:;
  /* 10da0bcf jmp 0x10da0e90 */
  goto L_10da0e90;
L_10da0bd4:;
  /* 10da0bd4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da0bd7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10da0bda cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da0bde je 0x10da0be8 */
  if (C.zf) goto L_10da0be8;
  /* 10da0be0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da0be4 je 0x10da0bee */
  if (C.zf) goto L_10da0bee;
  /* 10da0be6 jmp 0x10da0bf2 */
  goto L_10da0bf2;
L_10da0be8:;
  /* 10da0be8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 10da0bec jmp 0x10da0bf2 */
  goto L_10da0bf2;
L_10da0bee:;
  /* 10da0bee mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_10da0bf2:;
  /* 10da0bf2 jmp 0x10da0e90 */
  goto L_10da0e90;
L_10da0bf7:;
  /* 10da0bf7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da0bfa mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10da0bfd cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da0c01 je 0x10da0c0b */
  if (C.zf) goto L_10da0c0b;
  /* 10da0c03 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da0c07 je 0x10da0c15 */
  if (C.zf) goto L_10da0c15;
  /* 10da0c09 jmp 0x10da0c19 */
  goto L_10da0c19;
L_10da0c0b:;
  /* 10da0c0b mov dword ptr [0x10dbe808], 1 */
  w32((uint32_t)(0x10dbe808), (0x1u));
L_10da0c15:;
  /* 10da0c15 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_10da0c19:;
  /* 10da0c19 jmp 0x10da0e90 */
  goto L_10da0e90;
L_10da0c1e:;
  /* 10da0c1e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da0c21 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10da0c24 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da0c28 je 0x10da0c32 */
  if (C.zf) goto L_10da0c32;
  /* 10da0c2a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da0c2e je 0x10da0c3c */
  if (C.zf) goto L_10da0c3c;
  /* 10da0c30 jmp 0x10da0c40 */
  goto L_10da0c40;
L_10da0c32:;
  /* 10da0c32 mov dword ptr [0x10dbe808], 1 */
  w32((uint32_t)(0x10dbe808), (0x1u));
L_10da0c3c:;
  /* 10da0c3c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_10da0c40:;
  /* 10da0c40 jmp 0x10da0e90 */
  goto L_10da0e90;
L_10da0c45:;
  /* 10da0c45 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da0c48 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 10da0c4b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da0c4f je 0x10da0c59 */
  if (C.zf) goto L_10da0c59;
  /* 10da0c51 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da0c55 je 0x10da0c63 */
  if (C.zf) goto L_10da0c63;
  /* 10da0c57 jmp 0x10da0c67 */
  goto L_10da0c67;
L_10da0c59:;
  /* 10da0c59 mov dword ptr [0x10dbe808], 1 */
  w32((uint32_t)(0x10dbe808), (0x1u));
L_10da0c63:;
  /* 10da0c63 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_10da0c67:;
  /* 10da0c67 jmp 0x10da0e90 */
  goto L_10da0e90;
L_10da0c6c:;
  /* 10da0c6c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da0c6f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10da0c72 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da0c76 je 0x10da0c80 */
  if (C.zf) goto L_10da0c80;
  /* 10da0c78 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da0c7c je 0x10da0c8a */
  if (C.zf) goto L_10da0c8a;
  /* 10da0c7e jmp 0x10da0c8e */
  goto L_10da0c8e;
L_10da0c80:;
  /* 10da0c80 mov dword ptr [0x10dbe808], 1 */
  w32((uint32_t)(0x10dbe808), (0x1u));
L_10da0c8a:;
  /* 10da0c8a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_10da0c8e:;
  /* 10da0c8e jmp 0x10da0e90 */
  goto L_10da0e90;
L_10da0c93:;
  /* 10da0c93 push 0x10dba85c */
  push32((uint32_t)(0x10dba85cu));
  /* 10da0c98 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da0c9b push ecx */
  push32((uint32_t)(ECX));
  /* 10da0c9c call 0x10da14f0 */
  push32(0x10da0ca1u); f_10da14f0();
  /* 10da0ca1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da0ca4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10da0ca6 jne 0x10da0cb3 */
  if (!C.zf) goto L_10da0cb3;
  /* 10da0ca8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da0cab add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da0cae mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10da0cb1 jmp 0x10da0cd1 */
  goto L_10da0cd1;
L_10da0cb3:;
  /* 10da0cb3 push 0x10dba858 */
  push32((uint32_t)(0x10dba858u));
  /* 10da0cb8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da0cbb push eax */
  push32((uint32_t)(EAX));
  /* 10da0cbc call 0x10da14f0 */
  push32(0x10da0cc1u); f_10da14f0();
  /* 10da0cc1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da0cc4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10da0cc6 jne 0x10da0cd1 */
  if (!C.zf) goto L_10da0cd1;
  /* 10da0cc8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da0ccb add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da0cce mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10da0cd1:;
  /* 10da0cd1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 10da0cd5 jmp 0x10da0e90 */
  goto L_10da0e90;
L_10da0cda:;
  /* 10da0cda mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da0cdd cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da0ce1 jg 0x10da0cf1 */
  if ((!C.zf&&C.sf==C.of)) goto L_10da0cf1;
  /* 10da0ce3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10da0ce6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 10da0cec mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10da0cef jmp 0x10da0cfd */
  goto L_10da0cfd;
L_10da0cf1:;
  /* 10da0cf1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10da0cf4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10da0cfa mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10da0cfd:;
  /* 10da0cfd cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da0d01 jle 0x10da0da4 */
  if ((C.zf||C.sf!=C.of)) goto L_10da0da4;
  /* 10da0d07 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da0d0a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da0d0d jbe 0x10da0da4 */
  if ((C.cf||C.zf)) goto L_10da0da4;
  /* 10da0d13 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10da0d16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da0d18 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10da0d1a mov ecx, dword ptr [0x10dbcc98] */
  ECX = (r32((uint32_t)(0x10dbcc98)));
  /* 10da0d20 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10da0d22 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10da0d26 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10da0d2c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10da0d2e je 0x10da0d67 */
  if (C.zf) goto L_10da0d67;
  /* 10da0d30 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da0d33 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da0d36 jbe 0x10da0d67 */
  if ((C.cf||C.zf)) goto L_10da0d67;
  /* 10da0d38 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da0d3b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10da0d3d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10da0d40 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10da0d42 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10da0d44 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da0d47 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10da0d49 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da0d4c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da0d4f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10da0d51 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10da0d54 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da0d57 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10da0d5a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da0d5d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10da0d5f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da0d62 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da0d65 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10da0d67:;
  /* 10da0d67 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da0d6a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10da0d6c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10da0d6f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10da0d71 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10da0d73 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da0d76 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10da0d78 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da0d7b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da0d7e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10da0d80 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10da0d83 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da0d86 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10da0d89 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da0d8c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10da0d8e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da0d91 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da0d94 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10da0d96 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da0d99 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da0d9c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10da0d9f jmp 0x10da0cfd */
  goto L_10da0cfd;
L_10da0da4:;
  /* 10da0da4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da0da7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10da0daa jmp 0x10da0ac6 */
  goto L_10da0ac6;
L_10da0daf:;
  /* 10da0daf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da0db2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10da0db5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10da0db7 je 0x10da0e82 */
  if (C.zf) goto L_10da0e82;
  /* 10da0dbd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da0dc0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da0dc3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10da0dc6:;
  /* 10da0dc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da0dc9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10da0dcc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10da0dce je 0x10da0e80 */
  if (C.zf) goto L_10da0e80;
  /* 10da0dd4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da0dd7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da0dda je 0x10da0e80 */
  if (C.zf) goto L_10da0e80;
  /* 10da0de0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da0de3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10da0de6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da0de9 jne 0x10da0df9 */
  if (!C.zf) goto L_10da0df9;
  /* 10da0deb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da0dee add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da0df1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10da0df4 jmp 0x10da0e80 */
  goto L_10da0e80;
L_10da0df9:;
  /* 10da0df9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da0dfc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10da0dfe mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10da0e00 mov edx, dword ptr [0x10dbcc98] */
  EDX = (r32((uint32_t)(0x10dbcc98)));
  /* 10da0e06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da0e08 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10da0e0c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10da0e11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10da0e13 je 0x10da0e4c */
  if (C.zf) goto L_10da0e4c;
  /* 10da0e15 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da0e18 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da0e1b jbe 0x10da0e4c */
  if ((C.cf||C.zf)) goto L_10da0e4c;
  /* 10da0e1d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da0e20 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10da0e22 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da0e25 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10da0e27 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10da0e29 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da0e2c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10da0e2e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da0e31 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da0e34 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10da0e36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da0e39 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da0e3c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10da0e3f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da0e42 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10da0e44 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da0e47 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da0e4a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10da0e4c:;
  /* 10da0e4c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da0e4f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10da0e51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da0e54 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10da0e56 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10da0e58 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da0e5b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10da0e5d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da0e60 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da0e63 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10da0e65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da0e68 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da0e6b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10da0e6e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da0e71 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10da0e73 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da0e76 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da0e79 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10da0e7b jmp 0x10da0dc6 */
  goto L_10da0dc6;
L_10da0e80:;
  /* 10da0e80 jmp 0x10da0e8b */
  goto L_10da0e8b;
L_10da0e82:;
  /* 10da0e82 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da0e85 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da0e88 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10da0e8b:;
  /* 10da0e8b jmp 0x10da0ac6 */
  goto L_10da0ac6;
L_10da0e90:;
  /* 10da0e90 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10da0e94 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10da0e96 je 0x10da0ebc */
  if (C.zf) goto L_10da0ebc;
  /* 10da0e98 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10da0e9b push edx */
  push32((uint32_t)(EDX));
  /* 10da0e9c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da0e9f push eax */
  push32((uint32_t)(EAX));
  /* 10da0ea0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da0ea3 push ecx */
  push32((uint32_t)(ECX));
  /* 10da0ea4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da0ea7 push edx */
  push32((uint32_t)(EDX));
  /* 10da0ea8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10da0eab push eax */
  push32((uint32_t)(EAX));
  /* 10da0eac call 0x10da02f0 */
  push32(0x10da0eb1u); f_10da02f0();
  /* 10da0eb1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da0eb4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da0eb7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10da0eba jmp 0x10da0f37 */
  goto L_10da0f37;
L_10da0ebc:;
  /* 10da0ebc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da0ebf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da0ec1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10da0ec3 mov ecx, dword ptr [0x10dbcc98] */
  ECX = (r32((uint32_t)(0x10dbcc98)));
  /* 10da0ec9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10da0ecb mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10da0ecf and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10da0ed5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10da0ed7 je 0x10da0f08 */
  if (C.zf) goto L_10da0f08;
  /* 10da0ed9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da0edc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10da0ede mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da0ee1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10da0ee3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10da0ee5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da0ee8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10da0eea add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da0eed mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da0ef0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10da0ef2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da0ef5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da0ef8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10da0efb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da0efe mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10da0f00 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da0f03 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da0f06 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10da0f08:;
  /* 10da0f08 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da0f0b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10da0f0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da0f10 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10da0f12 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10da0f14 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da0f17 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10da0f19 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da0f1c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da0f1f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10da0f21 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da0f24 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da0f27 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10da0f2a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da0f2d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10da0f2f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da0f32 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da0f35 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10da0f37:;
  /* 10da0f37 jmp 0x10da0ac6 */
  goto L_10da0ac6;
L_10da0f3c:;
  /* 10da0f3c mov esp, ebp */
  ESP = (EBP);
  /* 10da0f3e pop ebp */
  EBP = (pop32());
  /* 10da0f3f ret  */
  ESPCHK(0x10da0ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010fe0 @ 0x10da0fe0 (650 bytes, 178 insns) */
void f_10da0fe0(void) {
  FTRACE(0x10da0fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10da0fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 10da0fe1 mov ebp, esp */
  EBP = (ESP);
  /* 10da0fe3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da0fe9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da0fed jne 0x10da1149 */
  if (!C.zf) goto L_10da1149;
  /* 10da0ff3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da0ff6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 10da0ffc lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 10da1002 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10da1005 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10da100c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 10da1016 push 0 */
  push32((uint32_t)(0x0u));
  /* 10da1018 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10da101e push edx */
  push32((uint32_t)(EDX));
  /* 10da101f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da1022 push eax */
  push32((uint32_t)(EAX));
  /* 10da1023 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da1026 push ecx */
  push32((uint32_t)(ECX));
  /* 10da1027 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da102a push edx */
  push32((uint32_t)(EDX));
  /* 10da102b call 0x10da2400 */
  push32(0x10da1030u); f_10da2400();
  /* 10da1030 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da1033 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10da1036 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da103a jne 0x10da10cf */
  if (!C.zf) goto L_10da10cf;
  /* 10da1040 call dword ptr [0x10dc02d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02d0))), 0x10da1046u);
  /* 10da1046 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da1049 je 0x10da1050 */
  if (C.zf) goto L_10da1050;
  /* 10da104b jmp 0x10da112d */
  goto L_10da112d;
L_10da1050:;
  /* 10da1050 push 0 */
  push32((uint32_t)(0x0u));
  /* 10da1052 push 0 */
  push32((uint32_t)(0x0u));
  /* 10da1054 push 0 */
  push32((uint32_t)(0x0u));
  /* 10da1056 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da1059 push eax */
  push32((uint32_t)(EAX));
  /* 10da105a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da105d push ecx */
  push32((uint32_t)(ECX));
  /* 10da105e call 0x10da2400 */
  push32(0x10da1063u); f_10da2400();
  /* 10da1063 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da1066 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 10da106c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da1073 jne 0x10da107a */
  if (!C.zf) goto L_10da107a;
  /* 10da1075 jmp 0x10da112d */
  goto L_10da112d;
L_10da107a:;
  /* 10da107a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 10da107c push 0x10dba864 */
  push32((uint32_t)(0x10dba864u));
  /* 10da1081 push 2 */
  push32((uint32_t)(0x2u));
  /* 10da1083 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10da1089 push edx */
  push32((uint32_t)(EDX));
  /* 10da108a call 0x10d92e20 */
  push32(0x10da108fu); f_10d92e20();
  /* 10da108f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da1092 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10da1095 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da1099 jne 0x10da10a0 */
  if (!C.zf) goto L_10da10a0;
  /* 10da109b jmp 0x10da112d */
  goto L_10da112d;
L_10da10a0:;
  /* 10da10a0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10da10a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10da10a9 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 10da10af push eax */
  push32((uint32_t)(EAX));
  /* 10da10b0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da10b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10da10b4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da10b7 push edx */
  push32((uint32_t)(EDX));
  /* 10da10b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da10bb push eax */
  push32((uint32_t)(EAX));
  /* 10da10bc call 0x10da2400 */
  push32(0x10da10c1u); f_10da2400();
  /* 10da10c1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da10c4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10da10c7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da10cb jne 0x10da10cf */
  if (!C.zf) goto L_10da10cf;
  /* 10da10cd jmp 0x10da112d */
  goto L_10da112d;
L_10da10cf:;
  /* 10da10cf push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10da10d1 push 0x10dba864 */
  push32((uint32_t)(0x10dba864u));
  /* 10da10d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10da10d8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10da10db push ecx */
  push32((uint32_t)(ECX));
  /* 10da10dc call 0x10d92e20 */
  push32(0x10da10e1u); f_10d92e20();
  /* 10da10e1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da10e4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 10da10ea mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10da10ec mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10da10f2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da10f5 jne 0x10da10f9 */
  if (!C.zf) goto L_10da10f9;
  /* 10da10f7 jmp 0x10da112d */
  goto L_10da112d;
L_10da10f9:;
  /* 10da10f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10da10fc push ecx */
  push32((uint32_t)(ECX));
  /* 10da10fd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da1100 push edx */
  push32((uint32_t)(EDX));
  /* 10da1101 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10da1107 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10da1109 push ecx */
  push32((uint32_t)(ECX));
  /* 10da110a call 0x10d96640 */
  push32(0x10da110fu); f_10d96640();
  /* 10da110f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da1112 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da1116 je 0x10da1126 */
  if (C.zf) goto L_10da1126;
  /* 10da1118 push 2 */
  push32((uint32_t)(0x2u));
  /* 10da111a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da111d push edx */
  push32((uint32_t)(EDX));
  /* 10da111e call 0x10d938b0 */
  push32(0x10da1123u); f_10d938b0();
  /* 10da1123 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10da1126:;
  /* 10da1126 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da1128 jmp 0x10da1266 */
  goto L_10da1266;
L_10da112d:;
  /* 10da112d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da1131 je 0x10da1141 */
  if (C.zf) goto L_10da1141;
  /* 10da1133 push 2 */
  push32((uint32_t)(0x2u));
  /* 10da1135 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da1138 push eax */
  push32((uint32_t)(EAX));
  /* 10da1139 call 0x10d938b0 */
  push32(0x10da113eu); f_10d938b0();
  /* 10da113e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10da1141:;
  /* 10da1141 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10da1144 jmp 0x10da1266 */
  goto L_10da1266;
L_10da1149:;
  /* 10da1149 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da114d jne 0x10da1263 */
  if (!C.zf) goto L_10da1263;
  /* 10da1153 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 10da115d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da1160 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 10da1166 push 0 */
  push32((uint32_t)(0x0u));
  /* 10da1168 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10da116e push edx */
  push32((uint32_t)(EDX));
  /* 10da116f push 0x10dbe720 */
  push32((uint32_t)(0x10dbe720u));
  /* 10da1174 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da1177 push eax */
  push32((uint32_t)(EAX));
  /* 10da1178 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da117b push ecx */
  push32((uint32_t)(ECX));
  /* 10da117c call 0x10da2260 */
  push32(0x10da1181u); f_10da2260();
  /* 10da1181 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da1184 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10da1186 jne 0x10da1190 */
  if (!C.zf) goto L_10da1190;
  /* 10da1188 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10da118b jmp 0x10da1266 */
  goto L_10da1266;
L_10da1190:;
  /* 10da1190 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10da1196 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10da1199 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 10da11a3 jmp 0x10da11b4 */
  goto L_10da11b4;
L_10da11a5:;
  /* 10da11a5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10da11ab add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da11ae mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_10da11b4:;
  /* 10da11b4 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da11bb jge 0x10da125f */
  if ((C.sf==C.of)) goto L_10da125f;
  /* 10da11c1 cmp dword ptr [0x10dbcea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10dbcea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da11c8 jle 0x10da11fb */
  if ((C.zf||C.sf!=C.of)) goto L_10da11fb;
  /* 10da11ca push 4 */
  push32((uint32_t)(0x4u));
  /* 10da11cc mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10da11d2 mov dl, byte ptr [ecx*2 + 0x10dbe720] */
  DL = (r8((uint32_t)(ECX*2 + 0x10dbe720)));
  /* 10da11d9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10da11df mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10da11e5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10da11ea push eax */
  push32((uint32_t)(EAX));
  /* 10da11eb call 0x10d98e30 */
  push32(0x10da11f0u); f_10d98e30();
  /* 10da11f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da11f3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 10da11f9 jmp 0x10da122e */
  goto L_10da122e;
L_10da11fb:;
  /* 10da11fb mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10da1201 mov dl, byte ptr [ecx*2 + 0x10dbe720] */
  DL = (r8((uint32_t)(ECX*2 + 0x10dbe720)));
  /* 10da1208 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10da120e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10da1214 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10da1219 mov ecx, dword ptr [0x10dbcc98] */
  ECX = (r32((uint32_t)(0x10dbcc98)));
  /* 10da121f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10da1221 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10da1225 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10da1228 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_10da122e:;
  /* 10da122e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da1235 je 0x10da1258 */
  if (C.zf) goto L_10da1258;
  /* 10da1237 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10da123d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10da1240 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10da1243 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 10da124a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10da124e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10da1254 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10da1256 jmp 0x10da125a */
  goto L_10da125a;
L_10da1258:;
  /* 10da1258 jmp 0x10da125f */
  goto L_10da125f;
L_10da125a:;
  /* 10da125a jmp 0x10da11a5 */
  goto L_10da11a5;
L_10da125f:;
  /* 10da125f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da1261 jmp 0x10da1266 */
  goto L_10da1266;
L_10da1263:;
  /* 10da1263 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10da1266:;
  /* 10da1266 mov esp, ebp */
  ESP = (EBP);
  /* 10da1268 pop ebp */
  EBP = (pop32());
  /* 10da1269 ret  */
  ESPCHK(0x10da0fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011270 @ 0x10da1270 (10 bytes, 5 insns) */
void f_10da1270(void) {
  FTRACE(0x10da1270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10da1270 push ebp */
  push32((uint32_t)(EBP));
  /* 10da1271 mov ebp, esp */
  EBP = (ESP);
  /* 10da1273 mov eax, dword ptr [0x10dbdd88] */
  EAX = (r32((uint32_t)(0x10dbdd88)));
  /* 10da1278 pop ebp */
  EBP = (pop32());
  /* 10da1279 ret  */
  ESPCHK(0x10da1270u, _esp0);
  ESP += 4; return;
}

/* FUN_10011280 @ 0x10da1280 (575 bytes, 196 insns) */
void f_10da1280(void) {
  FTRACE(0x10da1280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10da1280 push ebp */
  push32((uint32_t)(EBP));
  /* 10da1281 mov ebp, esp */
  EBP = (ESP);
  /* 10da1283 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10da1285 push 0x10dba870 */
  push32((uint32_t)(0x10dba870u));
  /* 10da128a push 0x10d9bf28 */
  push32((uint32_t)(0x10d9bf28u));
  /* 10da128f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10da1295 push eax */
  push32((uint32_t)(EAX));
  /* 10da1296 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10da129d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da12a0 push ebx */
  push32((uint32_t)(EBX));
  /* 10da12a1 push esi */
  push32((uint32_t)(ESI));
  /* 10da12a2 push edi */
  push32((uint32_t)(EDI));
  /* 10da12a3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10da12a6 cmp dword ptr [0x10dbe72c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe72c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da12ad jne 0x10da12fe */
  if (!C.zf) goto L_10da12fe;
  /* 10da12af lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10da12b2 push eax */
  push32((uint32_t)(EAX));
  /* 10da12b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10da12b5 push 0x10db9fa0 */
  push32((uint32_t)(0x10db9fa0u));
  /* 10da12ba push 1 */
  push32((uint32_t)(0x1u));
  /* 10da12bc call dword ptr [0x10dc0350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0350))), 0x10da12c2u);
  /* 10da12c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10da12c4 je 0x10da12d2 */
  if (C.zf) goto L_10da12d2;
  /* 10da12c6 mov dword ptr [0x10dbe72c], 1 */
  w32((uint32_t)(0x10dbe72c), (0x1u));
  /* 10da12d0 jmp 0x10da12fe */
  goto L_10da12fe;
L_10da12d2:;
  /* 10da12d2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 10da12d5 push ecx */
  push32((uint32_t)(ECX));
  /* 10da12d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10da12d8 push 0x10db9f9c */
  push32((uint32_t)(0x10db9f9cu));
  /* 10da12dd push 1 */
  push32((uint32_t)(0x1u));
  /* 10da12df push 0 */
  push32((uint32_t)(0x0u));
  /* 10da12e1 call dword ptr [0x10dc034c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc034c))), 0x10da12e7u);
  /* 10da12e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10da12e9 je 0x10da12f7 */
  if (C.zf) goto L_10da12f7;
  /* 10da12eb mov dword ptr [0x10dbe72c], 2 */
  w32((uint32_t)(0x10dbe72c), (0x2u));
  /* 10da12f5 jmp 0x10da12fe */
  goto L_10da12fe;
L_10da12f7:;
  /* 10da12f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da12f9 jmp 0x10da14d9 */
  goto L_10da14d9;
L_10da12fe:;
  /* 10da12fe cmp dword ptr [0x10dbe72c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe72c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da1305 jne 0x10da1322 */
  if (!C.zf) goto L_10da1322;
  /* 10da1307 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da130a push edx */
  push32((uint32_t)(EDX));
  /* 10da130b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da130e push eax */
  push32((uint32_t)(EAX));
  /* 10da130f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da1312 push ecx */
  push32((uint32_t)(ECX));
  /* 10da1313 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da1316 push edx */
  push32((uint32_t)(EDX));
  /* 10da1317 call dword ptr [0x10dc0350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0350))), 0x10da131du);
  /* 10da131d jmp 0x10da14d9 */
  goto L_10da14d9;
L_10da1322:;
  /* 10da1322 cmp dword ptr [0x10dbe72c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe72c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da1329 jne 0x10da14d7 */
  if (!C.zf) goto L_10da14d7;
  /* 10da132f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da1333 jne 0x10da133d */
  if (!C.zf) goto L_10da133d;
  /* 10da1335 mov eax, dword ptr [0x10dbe6a0] */
  EAX = (r32((uint32_t)(0x10dbe6a0)));
  /* 10da133a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_10da133d:;
  /* 10da133d push 0 */
  push32((uint32_t)(0x0u));
  /* 10da133f push 0 */
  push32((uint32_t)(0x0u));
  /* 10da1341 push 0 */
  push32((uint32_t)(0x0u));
  /* 10da1343 push 0 */
  push32((uint32_t)(0x0u));
  /* 10da1345 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da1348 push ecx */
  push32((uint32_t)(ECX));
  /* 10da1349 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da134c push edx */
  push32((uint32_t)(EDX));
  /* 10da134d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10da1352 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10da1355 push eax */
  push32((uint32_t)(EAX));
  /* 10da1356 call dword ptr [0x10dc02fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02fc))), 0x10da135cu);
  /* 10da135c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10da135f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da1363 jne 0x10da136c */
  if (!C.zf) goto L_10da136c;
  /* 10da1365 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da1367 jmp 0x10da14d9 */
  goto L_10da14d9;
L_10da136c:;
  /* 10da136c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10da1373 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10da1376 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da1379 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10da137b call 0x10d95fc0 */
  push32(0x10da1380u); f_10d95fc0();
  /* 10da1380 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 10da1383 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10da1386 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10da1389 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10da138c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10da138f push edx */
  push32((uint32_t)(EDX));
  /* 10da1390 push 0 */
  push32((uint32_t)(0x0u));
  /* 10da1392 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10da1395 push eax */
  push32((uint32_t)(EAX));
  /* 10da1396 call 0x10d96b90 */
  push32(0x10da139bu); f_10d96b90();
  /* 10da139b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da139e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10da13a5 jmp 0x10da13be */
  goto L_10da13be;
  /* 10da13a7 mov eax, 1 */
  EAX = (0x1u);
  /* 10da13ac ret  */
  ESPCHK(0x10da1280u, _esp0);
  ESP += 4; return;
  /* 10da13ad mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10da13b0 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10da13b7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10da13be:;
  /* 10da13be cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da13c2 jne 0x10da13cb */
  if (!C.zf) goto L_10da13cb;
  /* 10da13c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da13c6 jmp 0x10da14d9 */
  goto L_10da14d9;
L_10da13cb:;
  /* 10da13cb push 0 */
  push32((uint32_t)(0x0u));
  /* 10da13cd push 0 */
  push32((uint32_t)(0x0u));
  /* 10da13cf mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10da13d2 push ecx */
  push32((uint32_t)(ECX));
  /* 10da13d3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10da13d6 push edx */
  push32((uint32_t)(EDX));
  /* 10da13d7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da13da push eax */
  push32((uint32_t)(EAX));
  /* 10da13db mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da13de push ecx */
  push32((uint32_t)(ECX));
  /* 10da13df push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10da13e4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10da13e7 push edx */
  push32((uint32_t)(EDX));
  /* 10da13e8 call dword ptr [0x10dc02fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02fc))), 0x10da13eeu);
  /* 10da13ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10da13f0 jne 0x10da13f9 */
  if (!C.zf) goto L_10da13f9;
  /* 10da13f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da13f4 jmp 0x10da14d9 */
  goto L_10da14d9;
L_10da13f9:;
  /* 10da13f9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10da1400 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10da1403 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 10da1407 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da140a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10da140c call 0x10d95fc0 */
  push32(0x10da1411u); f_10d95fc0();
  /* 10da1411 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 10da1414 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10da1417 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10da141a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10da141d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10da1424 jmp 0x10da143d */
  goto L_10da143d;
  /* 10da1426 mov eax, 1 */
  EAX = (0x1u);
  /* 10da142b ret  */
  ESPCHK(0x10da1280u, _esp0);
  ESP += 4; return;
  /* 10da142c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10da142f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10da1436 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10da143d:;
  /* 10da143d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da1441 jne 0x10da144a */
  if (!C.zf) goto L_10da144a;
  /* 10da1443 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da1445 jmp 0x10da14d9 */
  goto L_10da14d9;
L_10da144a:;
  /* 10da144a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da144e jne 0x10da1459 */
  if (!C.zf) goto L_10da1459;
  /* 10da1450 mov edx, dword ptr [0x10dbe690] */
  EDX = (r32((uint32_t)(0x10dbe690)));
  /* 10da1456 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_10da1459:;
  /* 10da1459 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da145c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10da145f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 10da1465 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da1468 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10da146b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 10da1472 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10da1475 push ecx */
  push32((uint32_t)(ECX));
  /* 10da1476 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10da1479 push edx */
  push32((uint32_t)(EDX));
  /* 10da147a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10da147d push eax */
  push32((uint32_t)(EAX));
  /* 10da147e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da1481 push ecx */
  push32((uint32_t)(ECX));
  /* 10da1482 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10da1485 push edx */
  push32((uint32_t)(EDX));
  /* 10da1486 call dword ptr [0x10dc034c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc034c))), 0x10da148cu);
  /* 10da148c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10da148f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da1492 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10da1495 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10da1497 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 10da149c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da14a2 je 0x10da14b8 */
  if (C.zf) goto L_10da14b8;
  /* 10da14a4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da14a7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10da14aa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10da14ac mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10da14b0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da14b6 je 0x10da14bc */
  if (C.zf) goto L_10da14bc;
L_10da14b8:;
  /* 10da14b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da14ba jmp 0x10da14d9 */
  goto L_10da14d9;
L_10da14bc:;
  /* 10da14bc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da14bf shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10da14c1 push eax */
  push32((uint32_t)(EAX));
  /* 10da14c2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10da14c5 push ecx */
  push32((uint32_t)(ECX));
  /* 10da14c6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da14c9 push edx */
  push32((uint32_t)(EDX));
  /* 10da14ca call 0x10d9ad10 */
  push32(0x10da14cfu); f_10d9ad10();
  /* 10da14cf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da14d2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10da14d5 jmp 0x10da14d9 */
  goto L_10da14d9;
L_10da14d7:;
  /* 10da14d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10da14d9:;
  /* 10da14d9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 10da14dc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10da14df mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10da14e6 pop edi */
  EDI = (pop32());
  /* 10da14e7 pop esi */
  ESI = (pop32());
  /* 10da14e8 pop ebx */
  EBX = (pop32());
  /* 10da14e9 mov esp, ebp */
  ESP = (EBP);
  /* 10da14eb pop ebp */
  EBP = (pop32());
  /* 10da14ec ret  */
  ESPCHK(0x10da1280u, _esp0);
  ESP += 4; return;
}

/* FUN_100114f0 @ 0x10da14f0 (208 bytes, 85 insns) */
void f_10da14f0(void) {
  FTRACE(0x10da14f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10da14f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10da14f1 mov ebp, esp */
  EBP = (ESP);
  /* 10da14f3 push edi */
  push32((uint32_t)(EDI));
  /* 10da14f4 push esi */
  push32((uint32_t)(ESI));
  /* 10da14f5 push ebx */
  push32((uint32_t)(EBX));
  /* 10da14f6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10da14f9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10da14fc lea eax, [0x10dbe688] */
  EAX = ((uint32_t)(0x10dbe688));
  /* 10da1502 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da1506 jne 0x10da1543 */
  if (!C.zf) goto L_10da1543;
  /* 10da1508 mov al, 0xff */
  AL = (0xffu);
  /* 10da150a mov edi, edi */
  EDI = (EDI);
L_10da150c:;
  /* 10da150c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10da150e je 0x10da153e */
  if (C.zf) goto L_10da153e;
  /* 10da1510 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10da1512 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10da1513 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 10da1515 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10da1516 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10da1518 je 0x10da150c */
  if (C.zf) goto L_10da150c;
  /* 10da151a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10da151c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10da151e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10da1520 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10da1523 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10da1525 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10da1527 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 10da1529 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10da152b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10da152d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10da152f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10da1532 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10da1534 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10da1536 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10da1538 je 0x10da150c */
  if (C.zf) goto L_10da150c;
  /* 10da153a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10da153c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_10da153e:;
  /* 10da153e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 10da1541 jmp 0x10da15bb */
  goto L_10da15bb;
L_10da1543:;
  /* 10da1543 lock inc dword ptr [0x10dbe81c] */
  x86_unimpl("lock inc @ 0x10da1543");
  /* 10da154a cmp dword ptr [0x10dbe80c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe80c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da1551 jg 0x10da1557 */
  if ((!C.zf&&C.sf==C.of)) goto L_10da1557;
  /* 10da1553 push 0 */
  push32((uint32_t)(0x0u));
  /* 10da1555 jmp 0x10da156c */
  goto L_10da156c;
L_10da1557:;
  /* 10da1557 lock dec dword ptr [0x10dbe81c] */
  x86_unimpl("lock dec @ 0x10da1557");
  /* 10da155e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10da1560 call 0x10d96820 */
  push32(0x10da1565u); f_10d96820();
  /* 10da1565 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_10da156c:;
  /* 10da156c mov eax, 0xff */
  EAX = (0xffu);
  /* 10da1571 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10da1573 nop  */
  /* nop */
L_10da1574:;
  /* 10da1574 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10da1576 je 0x10da159f */
  if (C.zf) goto L_10da159f;
  /* 10da1578 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10da157a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10da157b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10da157d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10da157e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10da1580 je 0x10da1574 */
  if (C.zf) goto L_10da1574;
  /* 10da1582 push eax */
  push32((uint32_t)(EAX));
  /* 10da1583 push ebx */
  push32((uint32_t)(EBX));
  /* 10da1584 call 0x10da2660 */
  push32(0x10da1589u); f_10da2660();
  /* 10da1589 mov ebx, eax */
  EBX = (EAX);
  /* 10da158b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da158e call 0x10da2660 */
  push32(0x10da1593u); f_10da2660();
  /* 10da1593 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da1596 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10da1598 je 0x10da1574 */
  if (C.zf) goto L_10da1574;
  /* 10da159a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da159c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10da159f:;
  /* 10da159f mov ebx, eax */
  EBX = (EAX);
  /* 10da15a1 pop eax */
  EAX = (pop32());
  /* 10da15a2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da15a4 jne 0x10da15af */
  if (!C.zf) goto L_10da15af;
  /* 10da15a6 lock dec dword ptr [0x10dbe81c] */
  x86_unimpl("lock dec @ 0x10da15a6");
  /* 10da15ad jmp 0x10da15b9 */
  goto L_10da15b9;
L_10da15af:;
  /* 10da15af push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10da15b1 call 0x10d968c0 */
  push32(0x10da15b6u); f_10d968c0();
  /* 10da15b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10da15b9:;
  /* 10da15b9 mov eax, ebx */
  EAX = (EBX);
L_10da15bb:;
  /* 10da15bb pop ebx */
  EBX = (pop32());
  /* 10da15bc pop esi */
  ESI = (pop32());
  /* 10da15bd pop edi */
  EDI = (pop32());
  /* 10da15be leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10da15bf ret  */
  ESPCHK(0x10da14f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100115c0 @ 0x10da15c0 (257 bytes, 103 insns) */
void f_10da15c0(void) {
  FTRACE(0x10da15c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10da15c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10da15c1 mov ebp, esp */
  EBP = (ESP);
  /* 10da15c3 push edi */
  push32((uint32_t)(EDI));
  /* 10da15c4 push esi */
  push32((uint32_t)(ESI));
  /* 10da15c5 push ebx */
  push32((uint32_t)(EBX));
  /* 10da15c6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da15c9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10da15cb je 0x10da16ba */
  if (C.zf) goto L_10da16ba;
  /* 10da15d1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10da15d4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10da15d7 lea eax, [0x10dbe688] */
  EAX = ((uint32_t)(0x10dbe688));
  /* 10da15dd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da15e1 jne 0x10da1631 */
  if (!C.zf) goto L_10da1631;
  /* 10da15e3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 10da15e5 mov bl, 0x5a */
  BL = (0x5au);
  /* 10da15e7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 10da15e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10da15ec:;
  /* 10da15ec mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 10da15ee or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10da15f0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 10da15f2 je 0x10da1615 */
  if (C.zf) goto L_10da1615;
  /* 10da15f4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10da15f6 je 0x10da1615 */
  if (C.zf) goto L_10da1615;
  /* 10da15f8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10da15f9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10da15fa cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10da15fc jb 0x10da1604 */
  if (C.cf) goto L_10da1604;
  /* 10da15fe cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10da1600 ja 0x10da1604 */
  if ((!C.cf&&!C.zf)) goto L_10da1604;
  /* 10da1602 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_10da1604:;
  /* 10da1604 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10da1606 jb 0x10da160e */
  if (C.cf) goto L_10da160e;
  /* 10da1608 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10da160a ja 0x10da160e */
  if ((!C.cf&&!C.zf)) goto L_10da160e;
  /* 10da160c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_10da160e:;
  /* 10da160e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10da1610 jne 0x10da161f */
  if (!C.zf) goto L_10da161f;
  /* 10da1612 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10da1613 jne 0x10da15ec */
  if (!C.zf) goto L_10da15ec;
L_10da1615:;
  /* 10da1615 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10da1617 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10da1619 je 0x10da16ba */
  if (C.zf) goto L_10da16ba;
L_10da161f:;
  /* 10da161f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10da1624 jb 0x10da16ba */
  if (C.cf) goto L_10da16ba;
  /* 10da162a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10da162c jmp 0x10da16ba */
  goto L_10da16ba;
L_10da1631:;
  /* 10da1631 lock inc dword ptr [0x10dbe81c] */
  x86_unimpl("lock inc @ 0x10da1631");
  /* 10da1638 cmp dword ptr [0x10dbe80c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe80c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da163f jg 0x10da1645 */
  if ((!C.zf&&C.sf==C.of)) goto L_10da1645;
  /* 10da1641 push 0 */
  push32((uint32_t)(0x0u));
  /* 10da1643 jmp 0x10da165e */
  goto L_10da165e;
L_10da1645:;
  /* 10da1645 lock dec dword ptr [0x10dbe81c] */
  x86_unimpl("lock dec @ 0x10da1645");
  /* 10da164c mov ebx, ecx */
  EBX = (ECX);
  /* 10da164e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10da1650 call 0x10d96820 */
  push32(0x10da1655u); f_10d96820();
  /* 10da1655 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 10da165c mov ecx, ebx */
  ECX = (EBX);
L_10da165e:;
  /* 10da165e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da1660 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10da1662 mov edi, edi */
  EDI = (EDI);
L_10da1664:;
  /* 10da1664 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10da1666 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da1668 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10da166a je 0x10da168f */
  if (C.zf) goto L_10da168f;
  /* 10da166c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10da166e je 0x10da168f */
  if (C.zf) goto L_10da168f;
  /* 10da1670 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10da1671 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10da1672 push ecx */
  push32((uint32_t)(ECX));
  /* 10da1673 push eax */
  push32((uint32_t)(EAX));
  /* 10da1674 push ebx */
  push32((uint32_t)(EBX));
  /* 10da1675 call 0x10da2660 */
  push32(0x10da167au); f_10da2660();
  /* 10da167a mov ebx, eax */
  EBX = (EAX);
  /* 10da167c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da167f call 0x10da2660 */
  push32(0x10da1684u); f_10da2660();
  /* 10da1684 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da1687 pop ecx */
  ECX = (pop32());
  /* 10da1688 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da168a jne 0x10da1695 */
  if (!C.zf) goto L_10da1695;
  /* 10da168c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10da168d jne 0x10da1664 */
  if (!C.zf) goto L_10da1664;
L_10da168f:;
  /* 10da168f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10da1691 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da1693 je 0x10da169e */
  if (C.zf) goto L_10da169e;
L_10da1695:;
  /* 10da1695 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10da169a jb 0x10da169e */
  if (C.cf) goto L_10da169e;
  /* 10da169c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_10da169e:;
  /* 10da169e pop eax */
  EAX = (pop32());
  /* 10da169f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da16a1 jne 0x10da16ac */
  if (!C.zf) goto L_10da16ac;
  /* 10da16a3 lock dec dword ptr [0x10dbe81c] */
  x86_unimpl("lock dec @ 0x10da16a3");
  /* 10da16aa jmp 0x10da16ba */
  goto L_10da16ba;
L_10da16ac:;
  /* 10da16ac mov ebx, ecx */
  EBX = (ECX);
  /* 10da16ae push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10da16b0 call 0x10d968c0 */
  push32(0x10da16b5u); f_10d968c0();
  /* 10da16b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da16b8 mov ecx, ebx */
  ECX = (EBX);
L_10da16ba:;
  /* 10da16ba mov eax, ecx */
  EAX = (ECX);
  /* 10da16bc pop ebx */
  EBX = (pop32());
  /* 10da16bd pop esi */
  ESI = (pop32());
  /* 10da16be pop edi */
  EDI = (pop32());
  /* 10da16bf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10da16c0 ret  */
  ESPCHK(0x10da15c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100116d0 @ 0x10da16d0 (255 bytes, 88 insns) */
void f_10da16d0(void) {
  FTRACE(0x10da16d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10da16d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10da16d1 mov ebp, esp */
  EBP = (ESP);
  /* 10da16d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10da16d6:;
  /* 10da16d6 cmp dword ptr [0x10dbcea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10dbcea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da16dd jle 0x10da16f6 */
  if ((C.zf||C.sf!=C.of)) goto L_10da16f6;
  /* 10da16df push 8 */
  push32((uint32_t)(0x8u));
  /* 10da16e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da16e4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10da16e6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10da16e8 push ecx */
  push32((uint32_t)(ECX));
  /* 10da16e9 call 0x10d98e30 */
  push32(0x10da16eeu); f_10d98e30();
  /* 10da16ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da16f1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10da16f4 jmp 0x10da170f */
  goto L_10da170f;
L_10da16f6:;
  /* 10da16f6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da16f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da16fb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10da16fd mov ecx, dword ptr [0x10dbcc98] */
  ECX = (r32((uint32_t)(0x10dbcc98)));
  /* 10da1703 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10da1705 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10da1709 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10da170c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10da170f:;
  /* 10da170f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da1713 je 0x10da1720 */
  if (C.zf) goto L_10da1720;
  /* 10da1715 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da1718 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da171b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10da171e jmp 0x10da16d6 */
  goto L_10da16d6;
L_10da1720:;
  /* 10da1720 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da1723 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10da1725 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10da1727 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10da172a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da172d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da1730 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10da1733 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da1736 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10da1739 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da173d je 0x10da1745 */
  if (C.zf) goto L_10da1745;
  /* 10da173f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da1743 jne 0x10da1758 */
  if (!C.zf) goto L_10da1758;
L_10da1745:;
  /* 10da1745 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da1748 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da174a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10da174c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10da174f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da1752 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da1755 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10da1758:;
  /* 10da1758 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10da175f:;
  /* 10da175f cmp dword ptr [0x10dbcea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10dbcea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da1766 jle 0x10da177b */
  if ((C.zf||C.sf!=C.of)) goto L_10da177b;
  /* 10da1768 push 4 */
  push32((uint32_t)(0x4u));
  /* 10da176a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da176d push edx */
  push32((uint32_t)(EDX));
  /* 10da176e call 0x10d98e30 */
  push32(0x10da1773u); f_10d98e30();
  /* 10da1773 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da1776 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10da1779 jmp 0x10da1790 */
  goto L_10da1790;
L_10da177b:;
  /* 10da177b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da177e mov ecx, dword ptr [0x10dbcc98] */
  ECX = (r32((uint32_t)(0x10dbcc98)));
  /* 10da1784 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10da1786 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10da178a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10da178d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10da1790:;
  /* 10da1790 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da1794 je 0x10da17bb */
  if (C.zf) goto L_10da17bb;
  /* 10da1796 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10da1799 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10da179c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da179f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 10da17a3 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10da17a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da17a9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10da17ab mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10da17ad mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10da17b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da17b3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da17b6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10da17b9 jmp 0x10da175f */
  goto L_10da175f;
L_10da17bb:;
  /* 10da17bb cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da17bf jne 0x10da17c8 */
  if (!C.zf) goto L_10da17c8;
  /* 10da17c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10da17c4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10da17c6 jmp 0x10da17cb */
  goto L_10da17cb;
L_10da17c8:;
  /* 10da17c8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10da17cb:;
  /* 10da17cb mov esp, ebp */
  ESP = (EBP);
  /* 10da17cd pop ebp */
  EBP = (pop32());
  /* 10da17ce ret  */
  ESPCHK(0x10da16d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100117d0 @ 0x10da17d0 (17 bytes, 8 insns) */
void f_10da17d0(void) {
  FTRACE(0x10da17d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10da17d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10da17d1 mov ebp, esp */
  EBP = (ESP);
  /* 10da17d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da17d6 push eax */
  push32((uint32_t)(EAX));
  /* 10da17d7 call 0x10da16d0 */
  push32(0x10da17dcu); f_10da16d0();
  /* 10da17dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da17df pop ebp */
  EBP = (pop32());
  /* 10da17e0 ret  */
  ESPCHK(0x10da17d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100117f0 @ 0x10da17f0 (297 bytes, 106 insns) */
void f_10da17f0(void) {
  FTRACE(0x10da17f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10da17f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10da17f1 mov ebp, esp */
  EBP = (ESP);
  /* 10da17f3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da17f6 push esi */
  push32((uint32_t)(ESI));
L_10da17f7:;
  /* 10da17f7 cmp dword ptr [0x10dbcea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10dbcea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da17fe jle 0x10da1817 */
  if ((C.zf||C.sf!=C.of)) goto L_10da1817;
  /* 10da1800 push 8 */
  push32((uint32_t)(0x8u));
  /* 10da1802 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da1805 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10da1807 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10da1809 push ecx */
  push32((uint32_t)(ECX));
  /* 10da180a call 0x10d98e30 */
  push32(0x10da180fu); f_10d98e30();
  /* 10da180f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da1812 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10da1815 jmp 0x10da1830 */
  goto L_10da1830;
L_10da1817:;
  /* 10da1817 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da181a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da181c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10da181e mov ecx, dword ptr [0x10dbcc98] */
  ECX = (r32((uint32_t)(0x10dbcc98)));
  /* 10da1824 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10da1826 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10da182a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10da182d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10da1830:;
  /* 10da1830 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da1834 je 0x10da1841 */
  if (C.zf) goto L_10da1841;
  /* 10da1836 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da1839 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da183c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10da183f jmp 0x10da17f7 */
  goto L_10da17f7;
L_10da1841:;
  /* 10da1841 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da1844 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10da1846 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10da1848 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10da184b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da184e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da1851 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10da1854 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da1857 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10da185a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da185e je 0x10da1866 */
  if (C.zf) goto L_10da1866;
  /* 10da1860 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da1864 jne 0x10da1879 */
  if (!C.zf) goto L_10da1879;
L_10da1866:;
  /* 10da1866 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da1869 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da186b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10da186d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10da1870 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da1873 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da1876 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10da1879:;
  /* 10da1879 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10da1880 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10da1887:;
  /* 10da1887 cmp dword ptr [0x10dbcea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10dbcea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da188e jle 0x10da18a3 */
  if ((C.zf||C.sf!=C.of)) goto L_10da18a3;
  /* 10da1890 push 4 */
  push32((uint32_t)(0x4u));
  /* 10da1892 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da1895 push edx */
  push32((uint32_t)(EDX));
  /* 10da1896 call 0x10d98e30 */
  push32(0x10da189bu); f_10d98e30();
  /* 10da189b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da189e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10da18a1 jmp 0x10da18b8 */
  goto L_10da18b8;
L_10da18a3:;
  /* 10da18a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da18a6 mov ecx, dword ptr [0x10dbcc98] */
  ECX = (r32((uint32_t)(0x10dbcc98)));
  /* 10da18ac xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10da18ae mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10da18b2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10da18b5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_10da18b8:;
  /* 10da18b8 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da18bc je 0x10da18f9 */
  if (C.zf) goto L_10da18f9;
  /* 10da18be push 0 */
  push32((uint32_t)(0x0u));
  /* 10da18c0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10da18c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10da18c5 push eax */
  push32((uint32_t)(EAX));
  /* 10da18c6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da18c9 push ecx */
  push32((uint32_t)(ECX));
  /* 10da18ca call 0x10da2790 */
  push32(0x10da18cfu); f_10da2790();
  /* 10da18cf mov ecx, eax */
  ECX = (EAX);
  /* 10da18d1 mov esi, edx */
  ESI = (EDX);
  /* 10da18d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da18d6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da18d9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10da18da add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da18dc adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10da18de mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10da18e1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 10da18e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da18e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da18e9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10da18eb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10da18ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da18f1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da18f4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10da18f7 jmp 0x10da1887 */
  goto L_10da1887;
L_10da18f9:;
  /* 10da18f9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da18fd jne 0x10da190e */
  if (!C.zf) goto L_10da190e;
  /* 10da18ff mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da1902 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10da1904 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10da1907 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da190a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10da190c jmp 0x10da1914 */
  goto L_10da1914;
L_10da190e:;
  /* 10da190e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da1911 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_10da1914:;
  /* 10da1914 pop esi */
  ESI = (pop32());
  /* 10da1915 mov esp, ebp */
  ESP = (EBP);
  /* 10da1917 pop ebp */
  EBP = (pop32());
  /* 10da1918 ret  */
  ESPCHK(0x10da17f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011920 @ 0x10da1920 (61 bytes, 18 insns) */
void f_10da1920(void) {
  FTRACE(0x10da1920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10da1920 push ebp */
  push32((uint32_t)(EBP));
  /* 10da1921 mov ebp, esp */
  EBP = (ESP);
  /* 10da1923 cmp dword ptr [0x10dbe7e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe7e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da192a jne 0x10da195b */
  if (!C.zf) goto L_10da195b;
  /* 10da192c push 0xb */
  push32((uint32_t)(0xbu));
  /* 10da192e call 0x10d96820 */
  push32(0x10da1933u); f_10d96820();
  /* 10da1933 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da1936 cmp dword ptr [0x10dbe7e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe7e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da193d jne 0x10da1951 */
  if (!C.zf) goto L_10da1951;
  /* 10da193f call 0x10da1980 */
  push32(0x10da1944u); f_10da1980();
  /* 10da1944 mov eax, dword ptr [0x10dbe7e8] */
  EAX = (r32((uint32_t)(0x10dbe7e8)));
  /* 10da1949 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da194c mov dword ptr [0x10dbe7e8], eax */
  w32((uint32_t)(0x10dbe7e8), (EAX));
L_10da1951:;
  /* 10da1951 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10da1953 call 0x10d968c0 */
  push32(0x10da1958u); f_10d968c0();
  /* 10da1958 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10da195b:;
  /* 10da195b pop ebp */
  EBP = (pop32());
  /* 10da195c ret  */
  ESPCHK(0x10da1920u, _esp0);
  ESP += 4; return;
}

/* FUN_10011960 @ 0x10da1960 (30 bytes, 11 insns) */
void f_10da1960(void) {
  FTRACE(0x10da1960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10da1960 push ebp */
  push32((uint32_t)(EBP));
  /* 10da1961 mov ebp, esp */
  EBP = (ESP);
  /* 10da1963 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10da1965 call 0x10d96820 */
  push32(0x10da196au); f_10d96820();
  /* 10da196a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da196d call 0x10da1980 */
  push32(0x10da1972u); f_10da1980();
  /* 10da1972 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10da1974 call 0x10d968c0 */
  push32(0x10da1979u); f_10d968c0();
  /* 10da1979 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da197c pop ebp */
  EBP = (pop32());
  /* 10da197d ret  */
  ESPCHK(0x10da1960u, _esp0);
  ESP += 4; return;
}

/* FUN_10011980 @ 0x10da1980 (939 bytes, 266 insns) */
void f_10da1980(void) {
  FTRACE(0x10da1980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10da1980 push ebp */
  push32((uint32_t)(EBP));
  /* 10da1981 mov ebp, esp */
  EBP = (ESP);
  /* 10da1983 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da1986 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10da198d push 0xc */
  push32((uint32_t)(0xcu));
  /* 10da198f call 0x10d96820 */
  push32(0x10da1994u); f_10d96820();
  /* 10da1994 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da1997 mov dword ptr [0x10dbe730], 0 */
  w32((uint32_t)(0x10dbe730), (0x0u));
  /* 10da19a1 mov dword ptr [0x10dbde38], 0xffffffff */
  w32((uint32_t)(0x10dbde38), (0xffffffffu));
  /* 10da19ab mov eax, dword ptr [0x10dbde38] */
  EAX = (r32((uint32_t)(0x10dbde38)));
  /* 10da19b0 mov dword ptr [0x10dbde28], eax */
  w32((uint32_t)(0x10dbde28), (EAX));
  /* 10da19b5 push 0x10dba8d0 */
  push32((uint32_t)(0x10dba8d0u));
  /* 10da19ba call 0x10da2800 */
  push32(0x10da19bfu); f_10da2800();
  /* 10da19bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da19c2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10da19c5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da19c9 jne 0x10da1b03 */
  if (!C.zf) goto L_10da1b03;
  /* 10da19cf push 0xc */
  push32((uint32_t)(0xcu));
  /* 10da19d1 call 0x10d968c0 */
  push32(0x10da19d6u); f_10d968c0();
  /* 10da19d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da19d9 push 0x10dbe738 */
  push32((uint32_t)(0x10dbe738u));
  /* 10da19de call dword ptr [0x10dc0250] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0250))), 0x10da19e4u);
  /* 10da19e4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da19e7 je 0x10da1afe */
  if (C.zf) goto L_10da1afe;
  /* 10da19ed mov dword ptr [0x10dbe730], 1 */
  w32((uint32_t)(0x10dbe730), (0x1u));
  /* 10da19f7 mov ecx, dword ptr [0x10dbe738] */
  ECX = (r32((uint32_t)(0x10dbe738)));
  /* 10da19fd imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10da1a00 mov dword ptr [0x10dbdd90], ecx */
  w32((uint32_t)(0x10dbdd90), (ECX));
  /* 10da1a06 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10da1a08 mov dx, word ptr [0x10dbe77e] */
  DX = (r16((uint32_t)(0x10dbe77e)));
  /* 10da1a0f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10da1a11 je 0x10da1a29 */
  if (C.zf) goto L_10da1a29;
  /* 10da1a13 mov eax, dword ptr [0x10dbe78c] */
  EAX = (r32((uint32_t)(0x10dbe78c)));
  /* 10da1a18 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10da1a1b mov ecx, dword ptr [0x10dbdd90] */
  ECX = (r32((uint32_t)(0x10dbdd90)));
  /* 10da1a21 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da1a23 mov dword ptr [0x10dbdd90], ecx */
  w32((uint32_t)(0x10dbdd90), (ECX));
L_10da1a29:;
  /* 10da1a29 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10da1a2b mov dx, word ptr [0x10dbe7d2] */
  DX = (r16((uint32_t)(0x10dbe7d2)));
  /* 10da1a32 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10da1a34 je 0x10da1a5e */
  if (C.zf) goto L_10da1a5e;
  /* 10da1a36 cmp dword ptr [0x10dbe7e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe7e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da1a3d je 0x10da1a5e */
  if (C.zf) goto L_10da1a5e;
  /* 10da1a3f mov dword ptr [0x10dbdd94], 1 */
  w32((uint32_t)(0x10dbdd94), (0x1u));
  /* 10da1a49 mov eax, dword ptr [0x10dbe7e0] */
  EAX = (r32((uint32_t)(0x10dbe7e0)));
  /* 10da1a4e sub eax, dword ptr [0x10dbe78c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10dbe78c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da1a54 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10da1a57 mov dword ptr [0x10dbdd98], eax */
  w32((uint32_t)(0x10dbdd98), (EAX));
  /* 10da1a5c jmp 0x10da1a72 */
  goto L_10da1a72;
L_10da1a5e:;
  /* 10da1a5e mov dword ptr [0x10dbdd94], 0 */
  w32((uint32_t)(0x10dbdd94), (0x0u));
  /* 10da1a68 mov dword ptr [0x10dbdd98], 0 */
  w32((uint32_t)(0x10dbdd98), (0x0u));
L_10da1a72:;
  /* 10da1a72 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10da1a75 push ecx */
  push32((uint32_t)(ECX));
  /* 10da1a76 push 0 */
  push32((uint32_t)(0x0u));
  /* 10da1a78 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10da1a7a mov edx, dword ptr [0x10dbde1c] */
  EDX = (r32((uint32_t)(0x10dbde1c)));
  /* 10da1a80 push edx */
  push32((uint32_t)(EDX));
  /* 10da1a81 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10da1a83 push 0x10dbe73c */
  push32((uint32_t)(0x10dbe73cu));
  /* 10da1a88 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10da1a8d mov eax, dword ptr [0x10dbe6a0] */
  EAX = (r32((uint32_t)(0x10dbe6a0)));
  /* 10da1a92 push eax */
  push32((uint32_t)(EAX));
  /* 10da1a93 call dword ptr [0x10dc02fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02fc))), 0x10da1a99u);
  /* 10da1a99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10da1a9b je 0x10da1aaf */
  if (C.zf) goto L_10da1aaf;
  /* 10da1a9d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da1aa1 jne 0x10da1aaf */
  if (!C.zf) goto L_10da1aaf;
  /* 10da1aa3 mov ecx, dword ptr [0x10dbde1c] */
  ECX = (r32((uint32_t)(0x10dbde1c)));
  /* 10da1aa9 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 10da1aad jmp 0x10da1ab8 */
  goto L_10da1ab8;
L_10da1aaf:;
  /* 10da1aaf mov edx, dword ptr [0x10dbde1c] */
  EDX = (r32((uint32_t)(0x10dbde1c)));
  /* 10da1ab5 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10da1ab8:;
  /* 10da1ab8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10da1abb push eax */
  push32((uint32_t)(EAX));
  /* 10da1abc push 0 */
  push32((uint32_t)(0x0u));
  /* 10da1abe push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10da1ac0 mov ecx, dword ptr [0x10dbde20] */
  ECX = (r32((uint32_t)(0x10dbde20)));
  /* 10da1ac6 push ecx */
  push32((uint32_t)(ECX));
  /* 10da1ac7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10da1ac9 push 0x10dbe790 */
  push32((uint32_t)(0x10dbe790u));
  /* 10da1ace push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10da1ad3 mov edx, dword ptr [0x10dbe6a0] */
  EDX = (r32((uint32_t)(0x10dbe6a0)));
  /* 10da1ad9 push edx */
  push32((uint32_t)(EDX));
  /* 10da1ada call dword ptr [0x10dc02fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02fc))), 0x10da1ae0u);
  /* 10da1ae0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10da1ae2 je 0x10da1af5 */
  if (C.zf) goto L_10da1af5;
  /* 10da1ae4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da1ae8 jne 0x10da1af5 */
  if (!C.zf) goto L_10da1af5;
  /* 10da1aea mov eax, dword ptr [0x10dbde20] */
  EAX = (r32((uint32_t)(0x10dbde20)));
  /* 10da1aef mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 10da1af3 jmp 0x10da1afe */
  goto L_10da1afe;
L_10da1af5:;
  /* 10da1af5 mov ecx, dword ptr [0x10dbde20] */
  ECX = (r32((uint32_t)(0x10dbde20)));
  /* 10da1afb mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_10da1afe:;
  /* 10da1afe jmp 0x10da1d27 */
  goto L_10da1d27;
L_10da1b03:;
  /* 10da1b03 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da1b06 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10da1b09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10da1b0b je 0x10da1b2d */
  if (C.zf) goto L_10da1b2d;
  /* 10da1b0d cmp dword ptr [0x10dbe7e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe7e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da1b14 je 0x10da1b3c */
  if (C.zf) goto L_10da1b3c;
  /* 10da1b16 mov ecx, dword ptr [0x10dbe7e4] */
  ECX = (r32((uint32_t)(0x10dbe7e4)));
  /* 10da1b1c push ecx */
  push32((uint32_t)(ECX));
  /* 10da1b1d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da1b20 push edx */
  push32((uint32_t)(EDX));
  /* 10da1b21 call 0x10d9eab0 */
  push32(0x10da1b26u); f_10d9eab0();
  /* 10da1b26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da1b29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10da1b2b jne 0x10da1b3c */
  if (!C.zf) goto L_10da1b3c;
L_10da1b2d:;
  /* 10da1b2d push 0xc */
  push32((uint32_t)(0xcu));
  /* 10da1b2f call 0x10d968c0 */
  push32(0x10da1b34u); f_10d968c0();
  /* 10da1b34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da1b37 jmp 0x10da1d27 */
  goto L_10da1d27;
L_10da1b3c:;
  /* 10da1b3c push 2 */
  push32((uint32_t)(0x2u));
  /* 10da1b3e mov eax, dword ptr [0x10dbe7e4] */
  EAX = (r32((uint32_t)(0x10dbe7e4)));
  /* 10da1b43 push eax */
  push32((uint32_t)(EAX));
  /* 10da1b44 call 0x10d938b0 */
  push32(0x10da1b49u); f_10d938b0();
  /* 10da1b49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da1b4c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 10da1b51 push 0x10dba8c8 */
  push32((uint32_t)(0x10dba8c8u));
  /* 10da1b56 push 2 */
  push32((uint32_t)(0x2u));
  /* 10da1b58 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da1b5b push ecx */
  push32((uint32_t)(ECX));
  /* 10da1b5c call 0x10d95c50 */
  push32(0x10da1b61u); f_10d95c50();
  /* 10da1b61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da1b64 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da1b67 push eax */
  push32((uint32_t)(EAX));
  /* 10da1b68 call 0x10d92e20 */
  push32(0x10da1b6du); f_10d92e20();
  /* 10da1b6d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da1b70 mov dword ptr [0x10dbe7e4], eax */
  w32((uint32_t)(0x10dbe7e4), (EAX));
  /* 10da1b75 cmp dword ptr [0x10dbe7e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe7e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da1b7c jne 0x10da1b8d */
  if (!C.zf) goto L_10da1b8d;
  /* 10da1b7e push 0xc */
  push32((uint32_t)(0xcu));
  /* 10da1b80 call 0x10d968c0 */
  push32(0x10da1b85u); f_10d968c0();
  /* 10da1b85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da1b88 jmp 0x10da1d27 */
  goto L_10da1d27;
L_10da1b8d:;
  /* 10da1b8d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da1b90 push edx */
  push32((uint32_t)(EDX));
  /* 10da1b91 mov eax, dword ptr [0x10dbe7e4] */
  EAX = (r32((uint32_t)(0x10dbe7e4)));
  /* 10da1b96 push eax */
  push32((uint32_t)(EAX));
  /* 10da1b97 call 0x10d95dd0 */
  push32(0x10da1b9cu); f_10d95dd0();
  /* 10da1b9c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da1b9f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10da1ba1 call 0x10d968c0 */
  push32(0x10da1ba6u); f_10d968c0();
  /* 10da1ba6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da1ba9 push 3 */
  push32((uint32_t)(0x3u));
  /* 10da1bab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da1bae push ecx */
  push32((uint32_t)(ECX));
  /* 10da1baf mov edx, dword ptr [0x10dbde1c] */
  EDX = (r32((uint32_t)(0x10dbde1c)));
  /* 10da1bb5 push edx */
  push32((uint32_t)(EDX));
  /* 10da1bb6 call 0x10d96640 */
  push32(0x10da1bbbu); f_10d96640();
  /* 10da1bbb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da1bbe mov eax, dword ptr [0x10dbde1c] */
  EAX = (r32((uint32_t)(0x10dbde1c)));
  /* 10da1bc3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 10da1bc7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da1bca add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da1bcd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10da1bd0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da1bd3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10da1bd6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da1bd9 jne 0x10da1bed */
  if (!C.zf) goto L_10da1bed;
  /* 10da1bdb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da1bde add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da1be1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10da1be4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da1be7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da1bea mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10da1bed:;
  /* 10da1bed mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da1bf0 push eax */
  push32((uint32_t)(EAX));
  /* 10da1bf1 call 0x10da16d0 */
  push32(0x10da1bf6u); f_10da16d0();
  /* 10da1bf6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da1bf9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10da1bff mov dword ptr [0x10dbdd90], eax */
  w32((uint32_t)(0x10dbdd90), (EAX));
L_10da1c04:;
  /* 10da1c04 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da1c07 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10da1c0a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da1c0d je 0x10da1c25 */
  if (C.zf) goto L_10da1c25;
  /* 10da1c0f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da1c12 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10da1c15 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da1c18 jl 0x10da1c30 */
  if ((C.sf!=C.of)) goto L_10da1c30;
  /* 10da1c1a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da1c1d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10da1c20 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da1c23 jg 0x10da1c30 */
  if ((!C.zf&&C.sf==C.of)) goto L_10da1c30;
L_10da1c25:;
  /* 10da1c25 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da1c28 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da1c2b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10da1c2e jmp 0x10da1c04 */
  goto L_10da1c04;
L_10da1c30:;
  /* 10da1c30 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da1c33 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10da1c36 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da1c39 jne 0x10da1cd5 */
  if (!C.zf) goto L_10da1cd5;
  /* 10da1c3f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da1c42 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da1c45 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10da1c48 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da1c4b push edx */
  push32((uint32_t)(EDX));
  /* 10da1c4c call 0x10da16d0 */
  push32(0x10da1c51u); f_10da16d0();
  /* 10da1c51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da1c54 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10da1c57 mov ecx, dword ptr [0x10dbdd90] */
  ECX = (r32((uint32_t)(0x10dbdd90)));
  /* 10da1c5d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da1c5f mov dword ptr [0x10dbdd90], ecx */
  w32((uint32_t)(0x10dbdd90), (ECX));
L_10da1c65:;
  /* 10da1c65 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da1c68 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10da1c6b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da1c6e jl 0x10da1c86 */
  if ((C.sf!=C.of)) goto L_10da1c86;
  /* 10da1c70 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da1c73 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10da1c76 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da1c79 jg 0x10da1c86 */
  if ((!C.zf&&C.sf==C.of)) goto L_10da1c86;
  /* 10da1c7b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da1c7e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da1c81 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10da1c84 jmp 0x10da1c65 */
  goto L_10da1c65;
L_10da1c86:;
  /* 10da1c86 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da1c89 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10da1c8c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da1c8f jne 0x10da1cd5 */
  if (!C.zf) goto L_10da1cd5;
  /* 10da1c91 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da1c94 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da1c97 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10da1c9a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da1c9d push ecx */
  push32((uint32_t)(ECX));
  /* 10da1c9e call 0x10da16d0 */
  push32(0x10da1ca3u); f_10da16d0();
  /* 10da1ca3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da1ca6 mov edx, dword ptr [0x10dbdd90] */
  EDX = (r32((uint32_t)(0x10dbdd90)));
  /* 10da1cac add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da1cae mov dword ptr [0x10dbdd90], edx */
  w32((uint32_t)(0x10dbdd90), (EDX));
L_10da1cb4:;
  /* 10da1cb4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da1cb7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10da1cba cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da1cbd jl 0x10da1cd5 */
  if ((C.sf!=C.of)) goto L_10da1cd5;
  /* 10da1cbf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da1cc2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10da1cc5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da1cc8 jg 0x10da1cd5 */
  if ((!C.zf&&C.sf==C.of)) goto L_10da1cd5;
  /* 10da1cca mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da1ccd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da1cd0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10da1cd3 jmp 0x10da1cb4 */
  goto L_10da1cb4;
L_10da1cd5:;
  /* 10da1cd5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da1cd9 je 0x10da1ce9 */
  if (C.zf) goto L_10da1ce9;
  /* 10da1cdb mov edx, dword ptr [0x10dbdd90] */
  EDX = (r32((uint32_t)(0x10dbdd90)));
  /* 10da1ce1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10da1ce3 mov dword ptr [0x10dbdd90], edx */
  w32((uint32_t)(0x10dbdd90), (EDX));
L_10da1ce9:;
  /* 10da1ce9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da1cec movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10da1cef mov dword ptr [0x10dbdd94], ecx */
  w32((uint32_t)(0x10dbdd94), (ECX));
  /* 10da1cf5 cmp dword ptr [0x10dbdd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbdd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da1cfc je 0x10da1d1e */
  if (C.zf) goto L_10da1d1e;
  /* 10da1cfe push 3 */
  push32((uint32_t)(0x3u));
  /* 10da1d00 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da1d03 push edx */
  push32((uint32_t)(EDX));
  /* 10da1d04 mov eax, dword ptr [0x10dbde20] */
  EAX = (r32((uint32_t)(0x10dbde20)));
  /* 10da1d09 push eax */
  push32((uint32_t)(EAX));
  /* 10da1d0a call 0x10d96640 */
  push32(0x10da1d0fu); f_10d96640();
  /* 10da1d0f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da1d12 mov ecx, dword ptr [0x10dbde20] */
  ECX = (r32((uint32_t)(0x10dbde20)));
  /* 10da1d18 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 10da1d1c jmp 0x10da1d27 */
  goto L_10da1d27;
L_10da1d1e:;
  /* 10da1d1e mov edx, dword ptr [0x10dbde20] */
  EDX = (r32((uint32_t)(0x10dbde20)));
  /* 10da1d24 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10da1d27:;
  /* 10da1d27 mov esp, ebp */
  ESP = (EBP);
  /* 10da1d29 pop ebp */
  EBP = (pop32());
  /* 10da1d2a ret  */
  ESPCHK(0x10da1980u, _esp0);
  ESP += 4; return;
}

/* FUN_10011d30 @ 0x10da1d30 (46 bytes, 18 insns) */
void f_10da1d30(void) {
  FTRACE(0x10da1d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10da1d30 push ebp */
  push32((uint32_t)(EBP));
  /* 10da1d31 mov ebp, esp */
  EBP = (ESP);
  /* 10da1d33 push ecx */
  push32((uint32_t)(ECX));
  /* 10da1d34 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10da1d36 call 0x10d96820 */
  push32(0x10da1d3bu); f_10d96820();
  /* 10da1d3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da1d3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da1d41 push eax */
  push32((uint32_t)(EAX));
  /* 10da1d42 call 0x10da1d60 */
  push32(0x10da1d47u); f_10da1d60();
  /* 10da1d47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da1d4a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10da1d4d push 0xb */
  push32((uint32_t)(0xbu));
  /* 10da1d4f call 0x10d968c0 */
  push32(0x10da1d54u); f_10d968c0();
  /* 10da1d54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da1d57 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da1d5a mov esp, ebp */
  ESP = (EBP);
  /* 10da1d5c pop ebp */
  EBP = (pop32());
  /* 10da1d5d ret  */
  ESPCHK(0x10da1d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10011d60 @ 0x10da1d60 (762 bytes, 246 insns) */
void f_10da1d60(void) {
  FTRACE(0x10da1d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10da1d60 push ebp */
  push32((uint32_t)(EBP));
  /* 10da1d61 mov ebp, esp */
  EBP = (ESP);
  /* 10da1d63 push ecx */
  push32((uint32_t)(ECX));
  /* 10da1d64 cmp dword ptr [0x10dbdd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbdd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da1d6b jne 0x10da1d74 */
  if (!C.zf) goto L_10da1d74;
  /* 10da1d6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da1d6f jmp 0x10da2056 */
  goto L_10da2056;
L_10da1d74:;
  /* 10da1d74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da1d77 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10da1d7a cmp ecx, dword ptr [0x10dbde28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10dbde28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da1d80 jne 0x10da1d94 */
  if (!C.zf) goto L_10da1d94;
  /* 10da1d82 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da1d85 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10da1d88 cmp eax, dword ptr [0x10dbde38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10dbde38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da1d8e je 0x10da1f5b */
  if (C.zf) goto L_10da1f5b;
L_10da1d94:;
  /* 10da1d94 cmp dword ptr [0x10dbe730], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe730))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da1d9b je 0x10da1f15 */
  if (C.zf) goto L_10da1f15;
  /* 10da1da1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10da1da3 mov cx, word ptr [0x10dbe7d0] */
  CX = (r16((uint32_t)(0x10dbe7d0)));
  /* 10da1daa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10da1dac jne 0x10da1e09 */
  if (!C.zf) goto L_10da1e09;
  /* 10da1dae xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10da1db0 mov dx, word ptr [0x10dbe7de] */
  DX = (r16((uint32_t)(0x10dbe7de)));
  /* 10da1db7 push edx */
  push32((uint32_t)(EDX));
  /* 10da1db8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da1dba mov ax, word ptr [0x10dbe7dc] */
  AX = (r16((uint32_t)(0x10dbe7dc)));
  /* 10da1dc0 push eax */
  push32((uint32_t)(EAX));
  /* 10da1dc1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10da1dc3 mov cx, word ptr [0x10dbe7da] */
  CX = (r16((uint32_t)(0x10dbe7da)));
  /* 10da1dca push ecx */
  push32((uint32_t)(ECX));
  /* 10da1dcb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10da1dcd mov dx, word ptr [0x10dbe7d8] */
  DX = (r16((uint32_t)(0x10dbe7d8)));
  /* 10da1dd4 push edx */
  push32((uint32_t)(EDX));
  /* 10da1dd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10da1dd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da1dd9 mov ax, word ptr [0x10dbe7d4] */
  AX = (r16((uint32_t)(0x10dbe7d4)));
  /* 10da1ddf push eax */
  push32((uint32_t)(EAX));
  /* 10da1de0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10da1de2 mov cx, word ptr [0x10dbe7d6] */
  CX = (r16((uint32_t)(0x10dbe7d6)));
  /* 10da1de9 push ecx */
  push32((uint32_t)(ECX));
  /* 10da1dea xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10da1dec mov dx, word ptr [0x10dbe7d2] */
  DX = (r16((uint32_t)(0x10dbe7d2)));
  /* 10da1df3 push edx */
  push32((uint32_t)(EDX));
  /* 10da1df4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da1df7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10da1dfa push ecx */
  push32((uint32_t)(ECX));
  /* 10da1dfb push 1 */
  push32((uint32_t)(0x1u));
  /* 10da1dfd push 1 */
  push32((uint32_t)(0x1u));
  /* 10da1dff call 0x10da2060 */
  push32(0x10da1e04u); f_10da2060();
  /* 10da1e04 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da1e07 jmp 0x10da1e5a */
  goto L_10da1e5a;
L_10da1e09:;
  /* 10da1e09 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10da1e0b mov dx, word ptr [0x10dbe7de] */
  DX = (r16((uint32_t)(0x10dbe7de)));
  /* 10da1e12 push edx */
  push32((uint32_t)(EDX));
  /* 10da1e13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da1e15 mov ax, word ptr [0x10dbe7dc] */
  AX = (r16((uint32_t)(0x10dbe7dc)));
  /* 10da1e1b push eax */
  push32((uint32_t)(EAX));
  /* 10da1e1c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10da1e1e mov cx, word ptr [0x10dbe7da] */
  CX = (r16((uint32_t)(0x10dbe7da)));
  /* 10da1e25 push ecx */
  push32((uint32_t)(ECX));
  /* 10da1e26 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10da1e28 mov dx, word ptr [0x10dbe7d8] */
  DX = (r16((uint32_t)(0x10dbe7d8)));
  /* 10da1e2f push edx */
  push32((uint32_t)(EDX));
  /* 10da1e30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da1e32 mov ax, word ptr [0x10dbe7d6] */
  AX = (r16((uint32_t)(0x10dbe7d6)));
  /* 10da1e38 push eax */
  push32((uint32_t)(EAX));
  /* 10da1e39 push 0 */
  push32((uint32_t)(0x0u));
  /* 10da1e3b push 0 */
  push32((uint32_t)(0x0u));
  /* 10da1e3d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10da1e3f mov cx, word ptr [0x10dbe7d2] */
  CX = (r16((uint32_t)(0x10dbe7d2)));
  /* 10da1e46 push ecx */
  push32((uint32_t)(ECX));
  /* 10da1e47 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da1e4a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10da1e4d push eax */
  push32((uint32_t)(EAX));
  /* 10da1e4e push 0 */
  push32((uint32_t)(0x0u));
  /* 10da1e50 push 1 */
  push32((uint32_t)(0x1u));
  /* 10da1e52 call 0x10da2060 */
  push32(0x10da1e57u); f_10da2060();
  /* 10da1e57 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10da1e5a:;
  /* 10da1e5a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10da1e5c mov cx, word ptr [0x10dbe77c] */
  CX = (r16((uint32_t)(0x10dbe77c)));
  /* 10da1e63 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10da1e65 jne 0x10da1ec2 */
  if (!C.zf) goto L_10da1ec2;
  /* 10da1e67 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10da1e69 mov dx, word ptr [0x10dbe78a] */
  DX = (r16((uint32_t)(0x10dbe78a)));
  /* 10da1e70 push edx */
  push32((uint32_t)(EDX));
  /* 10da1e71 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da1e73 mov ax, word ptr [0x10dbe788] */
  AX = (r16((uint32_t)(0x10dbe788)));
  /* 10da1e79 push eax */
  push32((uint32_t)(EAX));
  /* 10da1e7a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10da1e7c mov cx, word ptr [0x10dbe786] */
  CX = (r16((uint32_t)(0x10dbe786)));
  /* 10da1e83 push ecx */
  push32((uint32_t)(ECX));
  /* 10da1e84 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10da1e86 mov dx, word ptr [0x10dbe784] */
  DX = (r16((uint32_t)(0x10dbe784)));
  /* 10da1e8d push edx */
  push32((uint32_t)(EDX));
  /* 10da1e8e push 0 */
  push32((uint32_t)(0x0u));
  /* 10da1e90 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da1e92 mov ax, word ptr [0x10dbe780] */
  AX = (r16((uint32_t)(0x10dbe780)));
  /* 10da1e98 push eax */
  push32((uint32_t)(EAX));
  /* 10da1e99 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10da1e9b mov cx, word ptr [0x10dbe782] */
  CX = (r16((uint32_t)(0x10dbe782)));
  /* 10da1ea2 push ecx */
  push32((uint32_t)(ECX));
  /* 10da1ea3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10da1ea5 mov dx, word ptr [0x10dbe77e] */
  DX = (r16((uint32_t)(0x10dbe77e)));
  /* 10da1eac push edx */
  push32((uint32_t)(EDX));
  /* 10da1ead mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da1eb0 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10da1eb3 push ecx */
  push32((uint32_t)(ECX));
  /* 10da1eb4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10da1eb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10da1eb8 call 0x10da2060 */
  push32(0x10da1ebdu); f_10da2060();
  /* 10da1ebd add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da1ec0 jmp 0x10da1f13 */
  goto L_10da1f13;
L_10da1ec2:;
  /* 10da1ec2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10da1ec4 mov dx, word ptr [0x10dbe78a] */
  DX = (r16((uint32_t)(0x10dbe78a)));
  /* 10da1ecb push edx */
  push32((uint32_t)(EDX));
  /* 10da1ecc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da1ece mov ax, word ptr [0x10dbe788] */
  AX = (r16((uint32_t)(0x10dbe788)));
  /* 10da1ed4 push eax */
  push32((uint32_t)(EAX));
  /* 10da1ed5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10da1ed7 mov cx, word ptr [0x10dbe786] */
  CX = (r16((uint32_t)(0x10dbe786)));
  /* 10da1ede push ecx */
  push32((uint32_t)(ECX));
  /* 10da1edf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10da1ee1 mov dx, word ptr [0x10dbe784] */
  DX = (r16((uint32_t)(0x10dbe784)));
  /* 10da1ee8 push edx */
  push32((uint32_t)(EDX));
  /* 10da1ee9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da1eeb mov ax, word ptr [0x10dbe782] */
  AX = (r16((uint32_t)(0x10dbe782)));
  /* 10da1ef1 push eax */
  push32((uint32_t)(EAX));
  /* 10da1ef2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10da1ef4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10da1ef6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10da1ef8 mov cx, word ptr [0x10dbe77e] */
  CX = (r16((uint32_t)(0x10dbe77e)));
  /* 10da1eff push ecx */
  push32((uint32_t)(ECX));
  /* 10da1f00 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da1f03 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10da1f06 push eax */
  push32((uint32_t)(EAX));
  /* 10da1f07 push 0 */
  push32((uint32_t)(0x0u));
  /* 10da1f09 push 0 */
  push32((uint32_t)(0x0u));
  /* 10da1f0b call 0x10da2060 */
  push32(0x10da1f10u); f_10da2060();
  /* 10da1f10 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10da1f13:;
  /* 10da1f13 jmp 0x10da1f5b */
  goto L_10da1f5b;
L_10da1f15:;
  /* 10da1f15 push 0 */
  push32((uint32_t)(0x0u));
  /* 10da1f17 push 0 */
  push32((uint32_t)(0x0u));
  /* 10da1f19 push 0 */
  push32((uint32_t)(0x0u));
  /* 10da1f1b push 2 */
  push32((uint32_t)(0x2u));
  /* 10da1f1d push 0 */
  push32((uint32_t)(0x0u));
  /* 10da1f1f push 0 */
  push32((uint32_t)(0x0u));
  /* 10da1f21 push 1 */
  push32((uint32_t)(0x1u));
  /* 10da1f23 push 4 */
  push32((uint32_t)(0x4u));
  /* 10da1f25 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da1f28 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10da1f2b push edx */
  push32((uint32_t)(EDX));
  /* 10da1f2c push 1 */
  push32((uint32_t)(0x1u));
  /* 10da1f2e push 1 */
  push32((uint32_t)(0x1u));
  /* 10da1f30 call 0x10da2060 */
  push32(0x10da1f35u); f_10da2060();
  /* 10da1f35 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da1f38 push 0 */
  push32((uint32_t)(0x0u));
  /* 10da1f3a push 0 */
  push32((uint32_t)(0x0u));
  /* 10da1f3c push 0 */
  push32((uint32_t)(0x0u));
  /* 10da1f3e push 2 */
  push32((uint32_t)(0x2u));
  /* 10da1f40 push 0 */
  push32((uint32_t)(0x0u));
  /* 10da1f42 push 0 */
  push32((uint32_t)(0x0u));
  /* 10da1f44 push 5 */
  push32((uint32_t)(0x5u));
  /* 10da1f46 push 0xa */
  push32((uint32_t)(0xau));
  /* 10da1f48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da1f4b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10da1f4e push ecx */
  push32((uint32_t)(ECX));
  /* 10da1f4f push 1 */
  push32((uint32_t)(0x1u));
  /* 10da1f51 push 0 */
  push32((uint32_t)(0x0u));
  /* 10da1f53 call 0x10da2060 */
  push32(0x10da1f58u); f_10da2060();
  /* 10da1f58 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10da1f5b:;
  /* 10da1f5b mov edx, dword ptr [0x10dbde2c] */
  EDX = (r32((uint32_t)(0x10dbde2c)));
  /* 10da1f61 cmp edx, dword ptr [0x10dbde3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10dbde3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da1f67 jge 0x10da1fb4 */
  if ((C.sf==C.of)) goto L_10da1fb4;
  /* 10da1f69 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da1f6c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10da1f6f cmp ecx, dword ptr [0x10dbde2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10dbde2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da1f75 jl 0x10da1f85 */
  if ((C.sf!=C.of)) goto L_10da1f85;
  /* 10da1f77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da1f7a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10da1f7d cmp eax, dword ptr [0x10dbde3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10dbde3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da1f83 jle 0x10da1f8c */
  if ((C.zf||C.sf!=C.of)) goto L_10da1f8c;
L_10da1f85:;
  /* 10da1f85 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da1f87 jmp 0x10da2056 */
  goto L_10da2056;
L_10da1f8c:;
  /* 10da1f8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da1f8f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10da1f92 cmp edx, dword ptr [0x10dbde2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10dbde2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da1f98 jle 0x10da1fb2 */
  if ((C.zf||C.sf!=C.of)) goto L_10da1fb2;
  /* 10da1f9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da1f9d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10da1fa0 cmp ecx, dword ptr [0x10dbde3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10dbde3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da1fa6 jge 0x10da1fb2 */
  if ((C.sf==C.of)) goto L_10da1fb2;
  /* 10da1fa8 mov eax, 1 */
  EAX = (0x1u);
  /* 10da1fad jmp 0x10da2056 */
  goto L_10da2056;
L_10da1fb2:;
  /* 10da1fb2 jmp 0x10da1ff7 */
  goto L_10da1ff7;
L_10da1fb4:;
  /* 10da1fb4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da1fb7 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10da1fba cmp eax, dword ptr [0x10dbde3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10dbde3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da1fc0 jl 0x10da1fd0 */
  if ((C.sf!=C.of)) goto L_10da1fd0;
  /* 10da1fc2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da1fc5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10da1fc8 cmp edx, dword ptr [0x10dbde2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10dbde2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da1fce jle 0x10da1fd7 */
  if ((C.zf||C.sf!=C.of)) goto L_10da1fd7;
L_10da1fd0:;
  /* 10da1fd0 mov eax, 1 */
  EAX = (0x1u);
  /* 10da1fd5 jmp 0x10da2056 */
  goto L_10da2056;
L_10da1fd7:;
  /* 10da1fd7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da1fda mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10da1fdd cmp ecx, dword ptr [0x10dbde3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10dbde3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da1fe3 jle 0x10da1ff7 */
  if ((C.zf||C.sf!=C.of)) goto L_10da1ff7;
  /* 10da1fe5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da1fe8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10da1feb cmp eax, dword ptr [0x10dbde2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10dbde2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da1ff1 jge 0x10da1ff7 */
  if ((C.sf==C.of)) goto L_10da1ff7;
  /* 10da1ff3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da1ff5 jmp 0x10da2056 */
  goto L_10da2056;
L_10da1ff7:;
  /* 10da1ff7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da1ffa mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10da1ffd imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10da2000 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da2003 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10da2005 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da2007 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da200a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10da200d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10da2013 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da2015 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10da201b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10da201e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da2021 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10da2024 cmp edx, dword ptr [0x10dbde2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10dbde2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da202a jne 0x10da2042 */
  if (!C.zf) goto L_10da2042;
  /* 10da202c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da202f cmp eax, dword ptr [0x10dbde30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10dbde30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2035 jl 0x10da203e */
  if ((C.sf!=C.of)) goto L_10da203e;
  /* 10da2037 mov eax, 1 */
  EAX = (0x1u);
  /* 10da203c jmp 0x10da2056 */
  goto L_10da2056;
L_10da203e:;
  /* 10da203e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da2040 jmp 0x10da2056 */
  goto L_10da2056;
L_10da2042:;
  /* 10da2042 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da2045 cmp ecx, dword ptr [0x10dbde40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10dbde40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da204b jge 0x10da2054 */
  if ((C.sf==C.of)) goto L_10da2054;
  /* 10da204d mov eax, 1 */
  EAX = (0x1u);
  /* 10da2052 jmp 0x10da2056 */
  goto L_10da2056;
L_10da2054:;
  /* 10da2054 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10da2056:;
  /* 10da2056 mov esp, ebp */
  ESP = (EBP);
  /* 10da2058 pop ebp */
  EBP = (pop32());
  /* 10da2059 ret  */
  ESPCHK(0x10da1d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10012060 @ 0x10da2060 (504 bytes, 145 insns) */
void f_10da2060(void) {
  FTRACE(0x10da2060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10da2060 push ebp */
  push32((uint32_t)(EBP));
  /* 10da2061 mov ebp, esp */
  EBP = (ESP);
  /* 10da2063 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da2066 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da206a jne 0x10da213c */
  if (!C.zf) goto L_10da213c;
  /* 10da2070 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da2073 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10da2076 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10da2078 jne 0x10da2089 */
  if (!C.zf) goto L_10da2089;
  /* 10da207a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da207d mov edx, dword ptr [ecx*4 + 0x10dbde4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10dbde4c)));
  /* 10da2084 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10da2087 jmp 0x10da2096 */
  goto L_10da2096;
L_10da2089:;
  /* 10da2089 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da208c mov ecx, dword ptr [eax*4 + 0x10dbde80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10dbde80)));
  /* 10da2093 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10da2096:;
  /* 10da2096 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da2099 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da209c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10da209f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da20a2 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da20a5 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10da20ab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10da20ae add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da20b0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da20b3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da20b6 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10da20b9 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 10da20bd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10da20be mov ecx, 7 */
  ECX = (0x7u);
  /* 10da20c3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10da20c5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10da20c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da20cb cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da20ce jg 0x10da20e9 */
  if ((!C.zf&&C.sf==C.of)) goto L_10da20e9;
  /* 10da20d0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10da20d3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da20d6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10da20d9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da20dc imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10da20df add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da20e2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da20e4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10da20e7 jmp 0x10da20fd */
  goto L_10da20fd;
L_10da20e9:;
  /* 10da20e9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10da20ec sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da20ef mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10da20f2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10da20f5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da20f8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da20fa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10da20fd:;
  /* 10da20fd cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2101 jne 0x10da213a */
  if (!C.zf) goto L_10da213a;
  /* 10da2103 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da2106 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10da2109 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10da210b jne 0x10da211c */
  if (!C.zf) goto L_10da211c;
  /* 10da210d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da2110 mov eax, dword ptr [edx*4 + 0x10dbde50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10dbde50)));
  /* 10da2117 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10da211a jmp 0x10da2129 */
  goto L_10da2129;
L_10da211c:;
  /* 10da211c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da211f mov edx, dword ptr [ecx*4 + 0x10dbde84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10dbde84)));
  /* 10da2126 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10da2129:;
  /* 10da2129 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10da212c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da212f jle 0x10da213a */
  if ((C.zf||C.sf!=C.of)) goto L_10da213a;
  /* 10da2131 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10da2134 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da2137 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10da213a:;
  /* 10da213a jmp 0x10da2171 */
  goto L_10da2171;
L_10da213c:;
  /* 10da213c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da213f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10da2142 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10da2144 jne 0x10da2155 */
  if (!C.zf) goto L_10da2155;
  /* 10da2146 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da2149 mov ecx, dword ptr [eax*4 + 0x10dbde4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10dbde4c)));
  /* 10da2150 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10da2153 jmp 0x10da2162 */
  goto L_10da2162;
L_10da2155:;
  /* 10da2155 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da2158 mov eax, dword ptr [edx*4 + 0x10dbde80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10dbde80)));
  /* 10da215f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10da2162:;
  /* 10da2162 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10da2165 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10da2168 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10da216b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da216e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10da2171:;
  /* 10da2171 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2175 jne 0x10da21b1 */
  if (!C.zf) goto L_10da21b1;
  /* 10da2177 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10da217a mov dword ptr [0x10dbde2c], eax */
  w32((uint32_t)(0x10dbde2c), (EAX));
  /* 10da217f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10da2182 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10da2185 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10da2188 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da218a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10da218d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10da2190 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da2192 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10da2198 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10da219b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da219d mov dword ptr [0x10dbde30], ecx */
  w32((uint32_t)(0x10dbde30), (ECX));
  /* 10da21a3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da21a6 mov dword ptr [0x10dbde28], edx */
  w32((uint32_t)(0x10dbde28), (EDX));
  /* 10da21ac jmp 0x10da2254 */
  goto L_10da2254;
L_10da21b1:;
  /* 10da21b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10da21b4 mov dword ptr [0x10dbde3c], eax */
  w32((uint32_t)(0x10dbde3c), (EAX));
  /* 10da21b9 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10da21bc imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10da21bf mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10da21c2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da21c4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10da21c7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10da21ca add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da21cc imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10da21d2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10da21d5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da21d7 mov dword ptr [0x10dbde40], ecx */
  w32((uint32_t)(0x10dbde40), (ECX));
  /* 10da21dd mov edx, dword ptr [0x10dbdd98] */
  EDX = (r32((uint32_t)(0x10dbdd98)));
  /* 10da21e3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10da21e9 mov eax, dword ptr [0x10dbde40] */
  EAX = (r32((uint32_t)(0x10dbde40)));
  /* 10da21ee add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da21f0 mov dword ptr [0x10dbde40], eax */
  w32((uint32_t)(0x10dbde40), (EAX));
  /* 10da21f5 cmp dword ptr [0x10dbde40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbde40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da21fc jge 0x10da2221 */
  if ((C.sf==C.of)) goto L_10da2221;
  /* 10da21fe mov ecx, dword ptr [0x10dbde40] */
  ECX = (r32((uint32_t)(0x10dbde40)));
  /* 10da2204 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da220a mov dword ptr [0x10dbde40], ecx */
  w32((uint32_t)(0x10dbde40), (ECX));
  /* 10da2210 mov edx, dword ptr [0x10dbde3c] */
  EDX = (r32((uint32_t)(0x10dbde3c)));
  /* 10da2216 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da2219 mov dword ptr [0x10dbde3c], edx */
  w32((uint32_t)(0x10dbde3c), (EDX));
  /* 10da221f jmp 0x10da224b */
  goto L_10da224b;
L_10da2221:;
  /* 10da2221 cmp dword ptr [0x10dbde40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x10dbde40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da222b jl 0x10da224b */
  if ((C.sf!=C.of)) goto L_10da224b;
  /* 10da222d mov eax, dword ptr [0x10dbde40] */
  EAX = (r32((uint32_t)(0x10dbde40)));
  /* 10da2232 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da2237 mov dword ptr [0x10dbde40], eax */
  w32((uint32_t)(0x10dbde40), (EAX));
  /* 10da223c mov ecx, dword ptr [0x10dbde3c] */
  ECX = (r32((uint32_t)(0x10dbde3c)));
  /* 10da2242 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da2245 mov dword ptr [0x10dbde3c], ecx */
  w32((uint32_t)(0x10dbde3c), (ECX));
L_10da224b:;
  /* 10da224b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da224e mov dword ptr [0x10dbde38], edx */
  w32((uint32_t)(0x10dbde38), (EDX));
L_10da2254:;
  /* 10da2254 mov esp, ebp */
  ESP = (EBP);
  /* 10da2256 pop ebp */
  EBP = (pop32());
  /* 10da2257 ret  */
  ESPCHK(0x10da2060u, _esp0);
  ESP += 4; return;
}

/* FUN_10012260 @ 0x10da2260 (382 bytes, 135 insns) */
void f_10da2260(void) {
  FTRACE(0x10da2260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10da2260 push ebp */
  push32((uint32_t)(EBP));
  /* 10da2261 mov ebp, esp */
  EBP = (ESP);
  /* 10da2263 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10da2265 push 0x10dba8d8 */
  push32((uint32_t)(0x10dba8d8u));
  /* 10da226a push 0x10d9bf28 */
  push32((uint32_t)(0x10d9bf28u));
  /* 10da226f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10da2275 push eax */
  push32((uint32_t)(EAX));
  /* 10da2276 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10da227d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da2280 push ebx */
  push32((uint32_t)(EBX));
  /* 10da2281 push esi */
  push32((uint32_t)(ESI));
  /* 10da2282 push edi */
  push32((uint32_t)(EDI));
  /* 10da2283 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10da2286 cmp dword ptr [0x10dbe7ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe7ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da228d jne 0x10da22d2 */
  if (!C.zf) goto L_10da22d2;
  /* 10da228f push 0 */
  push32((uint32_t)(0x0u));
  /* 10da2291 push 0 */
  push32((uint32_t)(0x0u));
  /* 10da2293 push 1 */
  push32((uint32_t)(0x1u));
  /* 10da2295 push 0 */
  push32((uint32_t)(0x0u));
  /* 10da2297 call dword ptr [0x10dc024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc024c))), 0x10da229du);
  /* 10da229d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10da229f je 0x10da22ad */
  if (C.zf) goto L_10da22ad;
  /* 10da22a1 mov dword ptr [0x10dbe7ec], 1 */
  w32((uint32_t)(0x10dbe7ec), (0x1u));
  /* 10da22ab jmp 0x10da22d2 */
  goto L_10da22d2;
L_10da22ad:;
  /* 10da22ad push 0 */
  push32((uint32_t)(0x0u));
  /* 10da22af push 0 */
  push32((uint32_t)(0x0u));
  /* 10da22b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10da22b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10da22b5 call dword ptr [0x10dc0264] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0264))), 0x10da22bbu);
  /* 10da22bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10da22bd je 0x10da22cb */
  if (C.zf) goto L_10da22cb;
  /* 10da22bf mov dword ptr [0x10dbe7ec], 2 */
  w32((uint32_t)(0x10dbe7ec), (0x2u));
  /* 10da22c9 jmp 0x10da22d2 */
  goto L_10da22d2;
L_10da22cb:;
  /* 10da22cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da22cd jmp 0x10da23e1 */
  goto L_10da23e1;
L_10da22d2:;
  /* 10da22d2 cmp dword ptr [0x10dbe7ec], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe7ec))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da22d9 jne 0x10da22f6 */
  if (!C.zf) goto L_10da22f6;
  /* 10da22db mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da22de push eax */
  push32((uint32_t)(EAX));
  /* 10da22df mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da22e2 push ecx */
  push32((uint32_t)(ECX));
  /* 10da22e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da22e6 push edx */
  push32((uint32_t)(EDX));
  /* 10da22e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da22ea push eax */
  push32((uint32_t)(EAX));
  /* 10da22eb call dword ptr [0x10dc024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc024c))), 0x10da22f1u);
  /* 10da22f1 jmp 0x10da23e1 */
  goto L_10da23e1;
L_10da22f6:;
  /* 10da22f6 cmp dword ptr [0x10dbe7ec], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe7ec))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da22fd jne 0x10da23df */
  if (!C.zf) goto L_10da23df;
  /* 10da2303 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2307 jne 0x10da2312 */
  if (!C.zf) goto L_10da2312;
  /* 10da2309 mov ecx, dword ptr [0x10dbe6a0] */
  ECX = (r32((uint32_t)(0x10dbe6a0)));
  /* 10da230f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10da2312:;
  /* 10da2312 push 0 */
  push32((uint32_t)(0x0u));
  /* 10da2314 push 0 */
  push32((uint32_t)(0x0u));
  /* 10da2316 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da2319 push edx */
  push32((uint32_t)(EDX));
  /* 10da231a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da231d push eax */
  push32((uint32_t)(EAX));
  /* 10da231e call dword ptr [0x10dc0264] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0264))), 0x10da2324u);
  /* 10da2324 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10da2327 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da232b jne 0x10da2334 */
  if (!C.zf) goto L_10da2334;
  /* 10da232d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da232f jmp 0x10da23e1 */
  goto L_10da23e1;
L_10da2334:;
  /* 10da2334 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10da233b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10da233e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da2341 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10da2343 call 0x10d95fc0 */
  push32(0x10da2348u); f_10d95fc0();
  /* 10da2348 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 10da234b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10da234e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10da2351 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10da2354 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10da235b jmp 0x10da2374 */
  goto L_10da2374;
  /* 10da235d mov eax, 1 */
  EAX = (0x1u);
  /* 10da2362 ret  */
  ESPCHK(0x10da2260u, _esp0);
  ESP += 4; return;
  /* 10da2363 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10da2366 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10da236d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10da2374:;
  /* 10da2374 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2378 jne 0x10da237e */
  if (!C.zf) goto L_10da237e;
  /* 10da237a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da237c jmp 0x10da23e1 */
  goto L_10da23e1;
L_10da237e:;
  /* 10da237e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10da2381 push edx */
  push32((uint32_t)(EDX));
  /* 10da2382 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10da2385 push eax */
  push32((uint32_t)(EAX));
  /* 10da2386 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da2389 push ecx */
  push32((uint32_t)(ECX));
  /* 10da238a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da238d push edx */
  push32((uint32_t)(EDX));
  /* 10da238e call dword ptr [0x10dc0264] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0264))), 0x10da2394u);
  /* 10da2394 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10da2396 jne 0x10da239c */
  if (!C.zf) goto L_10da239c;
  /* 10da2398 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da239a jmp 0x10da23e1 */
  goto L_10da23e1;
L_10da239c:;
  /* 10da239c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da23a0 jne 0x10da23bd */
  if (!C.zf) goto L_10da23bd;
  /* 10da23a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10da23a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10da23a6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10da23a8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10da23ab push eax */
  push32((uint32_t)(EAX));
  /* 10da23ac push 1 */
  push32((uint32_t)(0x1u));
  /* 10da23ae mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10da23b1 push ecx */
  push32((uint32_t)(ECX));
  /* 10da23b2 call dword ptr [0x10dc0348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0348))), 0x10da23b8u);
  /* 10da23b8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10da23bb jmp 0x10da23da */
  goto L_10da23da;
L_10da23bd:;
  /* 10da23bd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da23c0 push edx */
  push32((uint32_t)(EDX));
  /* 10da23c1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da23c4 push eax */
  push32((uint32_t)(EAX));
  /* 10da23c5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10da23c7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10da23ca push ecx */
  push32((uint32_t)(ECX));
  /* 10da23cb push 1 */
  push32((uint32_t)(0x1u));
  /* 10da23cd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10da23d0 push edx */
  push32((uint32_t)(EDX));
  /* 10da23d1 call dword ptr [0x10dc0348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0348))), 0x10da23d7u);
  /* 10da23d7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10da23da:;
  /* 10da23da mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10da23dd jmp 0x10da23e1 */
  goto L_10da23e1;
L_10da23df:;
  /* 10da23df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10da23e1:;
  /* 10da23e1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10da23e4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10da23e7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10da23ee pop edi */
  EDI = (pop32());
  /* 10da23ef pop esi */
  ESI = (pop32());
  /* 10da23f0 pop ebx */
  EBX = (pop32());
  /* 10da23f1 mov esp, ebp */
  ESP = (EBP);
  /* 10da23f3 pop ebp */
  EBP = (pop32());
  /* 10da23f4 ret  */
  ESPCHK(0x10da2260u, _esp0);
  ESP += 4; return;
}

/* FUN_10012400 @ 0x10da2400 (398 bytes, 140 insns) */
void f_10da2400(void) {
  FTRACE(0x10da2400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10da2400 push ebp */
  push32((uint32_t)(EBP));
  /* 10da2401 mov ebp, esp */
  EBP = (ESP);
  /* 10da2403 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10da2405 push 0x10dba8e8 */
  push32((uint32_t)(0x10dba8e8u));
  /* 10da240a push 0x10d9bf28 */
  push32((uint32_t)(0x10d9bf28u));
  /* 10da240f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10da2415 push eax */
  push32((uint32_t)(EAX));
  /* 10da2416 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10da241d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da2420 push ebx */
  push32((uint32_t)(EBX));
  /* 10da2421 push esi */
  push32((uint32_t)(ESI));
  /* 10da2422 push edi */
  push32((uint32_t)(EDI));
  /* 10da2423 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10da2426 cmp dword ptr [0x10dbe7f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe7f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da242d jne 0x10da2472 */
  if (!C.zf) goto L_10da2472;
  /* 10da242f push 0 */
  push32((uint32_t)(0x0u));
  /* 10da2431 push 0 */
  push32((uint32_t)(0x0u));
  /* 10da2433 push 1 */
  push32((uint32_t)(0x1u));
  /* 10da2435 push 0 */
  push32((uint32_t)(0x0u));
  /* 10da2437 call dword ptr [0x10dc024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc024c))), 0x10da243du);
  /* 10da243d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10da243f je 0x10da244d */
  if (C.zf) goto L_10da244d;
  /* 10da2441 mov dword ptr [0x10dbe7f0], 1 */
  w32((uint32_t)(0x10dbe7f0), (0x1u));
  /* 10da244b jmp 0x10da2472 */
  goto L_10da2472;
L_10da244d:;
  /* 10da244d push 0 */
  push32((uint32_t)(0x0u));
  /* 10da244f push 0 */
  push32((uint32_t)(0x0u));
  /* 10da2451 push 1 */
  push32((uint32_t)(0x1u));
  /* 10da2453 push 0 */
  push32((uint32_t)(0x0u));
  /* 10da2455 call dword ptr [0x10dc0264] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0264))), 0x10da245bu);
  /* 10da245b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10da245d je 0x10da246b */
  if (C.zf) goto L_10da246b;
  /* 10da245f mov dword ptr [0x10dbe7f0], 2 */
  w32((uint32_t)(0x10dbe7f0), (0x2u));
  /* 10da2469 jmp 0x10da2472 */
  goto L_10da2472;
L_10da246b:;
  /* 10da246b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da246d jmp 0x10da2591 */
  goto L_10da2591;
L_10da2472:;
  /* 10da2472 cmp dword ptr [0x10dbe7f0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe7f0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2479 jne 0x10da2496 */
  if (!C.zf) goto L_10da2496;
  /* 10da247b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da247e push eax */
  push32((uint32_t)(EAX));
  /* 10da247f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da2482 push ecx */
  push32((uint32_t)(ECX));
  /* 10da2483 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da2486 push edx */
  push32((uint32_t)(EDX));
  /* 10da2487 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da248a push eax */
  push32((uint32_t)(EAX));
  /* 10da248b call dword ptr [0x10dc0264] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0264))), 0x10da2491u);
  /* 10da2491 jmp 0x10da2591 */
  goto L_10da2591;
L_10da2496:;
  /* 10da2496 cmp dword ptr [0x10dbe7f0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe7f0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da249d jne 0x10da258f */
  if (!C.zf) goto L_10da258f;
  /* 10da24a3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da24a7 jne 0x10da24b2 */
  if (!C.zf) goto L_10da24b2;
  /* 10da24a9 mov ecx, dword ptr [0x10dbe6a0] */
  ECX = (r32((uint32_t)(0x10dbe6a0)));
  /* 10da24af mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10da24b2:;
  /* 10da24b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10da24b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10da24b6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da24b9 push edx */
  push32((uint32_t)(EDX));
  /* 10da24ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da24bd push eax */
  push32((uint32_t)(EAX));
  /* 10da24be call dword ptr [0x10dc024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc024c))), 0x10da24c4u);
  /* 10da24c4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10da24c7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da24cb jne 0x10da24d4 */
  if (!C.zf) goto L_10da24d4;
  /* 10da24cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da24cf jmp 0x10da2591 */
  goto L_10da2591;
L_10da24d4:;
  /* 10da24d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10da24db mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10da24de shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10da24e0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da24e3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10da24e5 call 0x10d95fc0 */
  push32(0x10da24eau); f_10d95fc0();
  /* 10da24ea mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 10da24ed mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10da24f0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10da24f3 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10da24f6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10da24fd jmp 0x10da2516 */
  goto L_10da2516;
  /* 10da24ff mov eax, 1 */
  EAX = (0x1u);
  /* 10da2504 ret  */
  ESPCHK(0x10da2400u, _esp0);
  ESP += 4; return;
  /* 10da2505 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10da2508 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10da250f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10da2516:;
  /* 10da2516 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da251a jne 0x10da2520 */
  if (!C.zf) goto L_10da2520;
  /* 10da251c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da251e jmp 0x10da2591 */
  goto L_10da2591;
L_10da2520:;
  /* 10da2520 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10da2523 push edx */
  push32((uint32_t)(EDX));
  /* 10da2524 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10da2527 push eax */
  push32((uint32_t)(EAX));
  /* 10da2528 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da252b push ecx */
  push32((uint32_t)(ECX));
  /* 10da252c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da252f push edx */
  push32((uint32_t)(EDX));
  /* 10da2530 call dword ptr [0x10dc024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc024c))), 0x10da2536u);
  /* 10da2536 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10da2538 jne 0x10da253e */
  if (!C.zf) goto L_10da253e;
  /* 10da253a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da253c jmp 0x10da2591 */
  goto L_10da2591;
L_10da253e:;
  /* 10da253e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2542 jne 0x10da2566 */
  if (!C.zf) goto L_10da2566;
  /* 10da2544 push 0 */
  push32((uint32_t)(0x0u));
  /* 10da2546 push 0 */
  push32((uint32_t)(0x0u));
  /* 10da2548 push 0 */
  push32((uint32_t)(0x0u));
  /* 10da254a push 0 */
  push32((uint32_t)(0x0u));
  /* 10da254c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10da254e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10da2551 push eax */
  push32((uint32_t)(EAX));
  /* 10da2552 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10da2557 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10da255a push ecx */
  push32((uint32_t)(ECX));
  /* 10da255b call dword ptr [0x10dc02fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02fc))), 0x10da2561u);
  /* 10da2561 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10da2564 jmp 0x10da258a */
  goto L_10da258a;
L_10da2566:;
  /* 10da2566 push 0 */
  push32((uint32_t)(0x0u));
  /* 10da2568 push 0 */
  push32((uint32_t)(0x0u));
  /* 10da256a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da256d push edx */
  push32((uint32_t)(EDX));
  /* 10da256e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da2571 push eax */
  push32((uint32_t)(EAX));
  /* 10da2572 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10da2574 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10da2577 push ecx */
  push32((uint32_t)(ECX));
  /* 10da2578 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10da257d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10da2580 push edx */
  push32((uint32_t)(EDX));
  /* 10da2581 call dword ptr [0x10dc02fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02fc))), 0x10da2587u);
  /* 10da2587 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10da258a:;
  /* 10da258a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10da258d jmp 0x10da2591 */
  goto L_10da2591;
L_10da258f:;
  /* 10da258f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10da2591:;
  /* 10da2591 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10da2594 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10da2597 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10da259e pop edi */
  EDI = (pop32());
  /* 10da259f pop esi */
  ESI = (pop32());
  /* 10da25a0 pop ebx */
  EBX = (pop32());
  /* 10da25a1 mov esp, ebp */
  ESP = (EBP);
  /* 10da25a3 pop ebp */
  EBP = (pop32());
  /* 10da25a4 ret  */
  ESPCHK(0x10da2400u, _esp0);
  ESP += 4; return;
}

/* FUN_100125b0 @ 0x10da25b0 (11 bytes, 6 insns) */
void f_10da25b0(void) {
  FTRACE(0x10da25b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10da25b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10da25b1 mov ebp, esp */
  EBP = (ESP);
  /* 10da25b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da25b6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da25b9 pop ebp */
  EBP = (pop32());
  /* 10da25ba ret  */
  ESPCHK(0x10da25b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100125c0 @ 0x10da25c0 (147 bytes, 43 insns) */
void f_10da25c0(void) {
  FTRACE(0x10da25c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10da25c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10da25c1 mov ebp, esp */
  EBP = (ESP);
  /* 10da25c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10da25c4 cmp dword ptr [0x10dbe690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da25cb jne 0x10da25e7 */
  if (!C.zf) goto L_10da25e7;
  /* 10da25cd cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da25d1 jl 0x10da25e2 */
  if ((C.sf!=C.of)) goto L_10da25e2;
  /* 10da25d3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da25d7 jg 0x10da25e2 */
  if ((!C.zf&&C.sf==C.of)) goto L_10da25e2;
  /* 10da25d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da25dc add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da25df mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10da25e2:;
  /* 10da25e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da25e5 jmp 0x10da264f */
  goto L_10da264f;
L_10da25e7:;
  /* 10da25e7 push 0x10dbe81c */
  push32((uint32_t)(0x10dbe81cu));
  /* 10da25ec call dword ptr [0x10dc02a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02a4))), 0x10da25f2u);
  /* 10da25f2 cmp dword ptr [0x10dbe80c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe80c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da25f9 je 0x10da2619 */
  if (C.zf) goto L_10da2619;
  /* 10da25fb push 0x10dbe81c */
  push32((uint32_t)(0x10dbe81cu));
  /* 10da2600 call dword ptr [0x10dc0294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0294))), 0x10da2606u);
  /* 10da2606 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10da2608 call 0x10d96820 */
  push32(0x10da260du); f_10d96820();
  /* 10da260d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da2610 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10da2617 jmp 0x10da2620 */
  goto L_10da2620;
L_10da2619:;
  /* 10da2619 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10da2620:;
  /* 10da2620 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da2623 push ecx */
  push32((uint32_t)(ECX));
  /* 10da2624 call 0x10da2660 */
  push32(0x10da2629u); f_10da2660();
  /* 10da2629 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da262c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10da262f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2633 je 0x10da2641 */
  if (C.zf) goto L_10da2641;
  /* 10da2635 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10da2637 call 0x10d968c0 */
  push32(0x10da263cu); f_10d968c0();
  /* 10da263c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da263f jmp 0x10da264c */
  goto L_10da264c;
L_10da2641:;
  /* 10da2641 push 0x10dbe81c */
  push32((uint32_t)(0x10dbe81cu));
  /* 10da2646 call dword ptr [0x10dc0294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0294))), 0x10da264cu);
L_10da264c:;
  /* 10da264c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10da264f:;
  /* 10da264f mov esp, ebp */
  ESP = (EBP);
  /* 10da2651 pop ebp */
  EBP = (pop32());
  /* 10da2652 ret  */
  ESPCHK(0x10da25c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012660 @ 0x10da2660 (299 bytes, 91 insns) */
void f_10da2660(void) {
  FTRACE(0x10da2660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10da2660 push ebp */
  push32((uint32_t)(EBP));
  /* 10da2661 mov ebp, esp */
  EBP = (ESP);
  /* 10da2663 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da2666 cmp dword ptr [0x10dbe690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da266d jne 0x10da268c */
  if (!C.zf) goto L_10da268c;
  /* 10da266f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2673 jl 0x10da2684 */
  if ((C.sf!=C.of)) goto L_10da2684;
  /* 10da2675 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2679 jg 0x10da2684 */
  if ((!C.zf&&C.sf==C.of)) goto L_10da2684;
  /* 10da267b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da267e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da2681 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10da2684:;
  /* 10da2684 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da2687 jmp 0x10da2787 */
  goto L_10da2787;
L_10da268c:;
  /* 10da268c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2693 jge 0x10da26d3 */
  if ((C.sf==C.of)) goto L_10da26d3;
  /* 10da2695 cmp dword ptr [0x10dbcea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10dbcea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da269c jle 0x10da26b1 */
  if ((C.zf||C.sf!=C.of)) goto L_10da26b1;
  /* 10da269e push 1 */
  push32((uint32_t)(0x1u));
  /* 10da26a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da26a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10da26a4 call 0x10d98e30 */
  push32(0x10da26a9u); f_10d98e30();
  /* 10da26a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da26ac mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10da26af jmp 0x10da26c5 */
  goto L_10da26c5;
L_10da26b1:;
  /* 10da26b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da26b4 mov eax, dword ptr [0x10dbcc98] */
  EAX = (r32((uint32_t)(0x10dbcc98)));
  /* 10da26b9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10da26bb mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10da26bf and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10da26c2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10da26c5:;
  /* 10da26c5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da26c9 jne 0x10da26d3 */
  if (!C.zf) goto L_10da26d3;
  /* 10da26cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da26ce jmp 0x10da2787 */
  goto L_10da2787;
L_10da26d3:;
  /* 10da26d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da26d6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10da26d9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10da26df and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10da26e5 mov eax, dword ptr [0x10dbcc98] */
  EAX = (r32((uint32_t)(0x10dbcc98)));
  /* 10da26ea xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10da26ec mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10da26f0 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10da26f6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10da26f8 je 0x10da271c */
  if (C.zf) goto L_10da271c;
  /* 10da26fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da26fd sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10da2700 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10da2706 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 10da2709 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10da270c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 10da270f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 10da2713 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10da271a jmp 0x10da272d */
  goto L_10da272d;
L_10da271c:;
  /* 10da271c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10da271f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10da2722 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 10da2726 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_10da272d:;
  /* 10da272d push 1 */
  push32((uint32_t)(0x1u));
  /* 10da272f push 0 */
  push32((uint32_t)(0x0u));
  /* 10da2731 push 3 */
  push32((uint32_t)(0x3u));
  /* 10da2733 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10da2736 push edx */
  push32((uint32_t)(EDX));
  /* 10da2737 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da273a push eax */
  push32((uint32_t)(EAX));
  /* 10da273b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10da273e push ecx */
  push32((uint32_t)(ECX));
  /* 10da273f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10da2744 mov edx, dword ptr [0x10dbe690] */
  EDX = (r32((uint32_t)(0x10dbe690)));
  /* 10da274a push edx */
  push32((uint32_t)(EDX));
  /* 10da274b call 0x10d9b210 */
  push32(0x10da2750u); f_10d9b210();
  /* 10da2750 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da2753 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10da2756 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da275a jne 0x10da2761 */
  if (!C.zf) goto L_10da2761;
  /* 10da275c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da275f jmp 0x10da2787 */
  goto L_10da2787;
L_10da2761:;
  /* 10da2761 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2765 jne 0x10da2771 */
  if (!C.zf) goto L_10da2771;
  /* 10da2767 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da276a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10da276f jmp 0x10da2787 */
  goto L_10da2787;
L_10da2771:;
  /* 10da2771 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da2774 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10da2779 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 10da277c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10da2782 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10da2785 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_10da2787:;
  /* 10da2787 mov esp, ebp */
  ESP = (EBP);
  /* 10da2789 pop ebp */
  EBP = (pop32());
  /* 10da278a ret  */
  ESPCHK(0x10da2660u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x10da2790 (52 bytes, 19 insns) */
void f_10da2790(void) {
  FTRACE(0x10da2790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10da2790 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10da2794 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10da2798 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10da279a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10da279e jne 0x10da27a9 */
  if (!C.zf) goto L_10da27a9;
  /* 10da27a0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10da27a4 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10da27a6 ret 0x10 */
  ESPCHK(0x10da2790u, _esp0);
  ESP += 20; return;
L_10da27a9:;
  /* 10da27a9 push ebx */
  push32((uint32_t)(EBX));
  /* 10da27aa mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10da27ac mov ebx, eax */
  EBX = (EAX);
  /* 10da27ae mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10da27b2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10da27b6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da27b8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10da27bc mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10da27be add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da27c0 pop ebx */
  EBX = (pop32());
  /* 10da27c1 ret 0x10 */
  ESPCHK(0x10da2790u, _esp0);
  ESP += 20; return;
}

/* FUN_100127d0 @ 0x10da27d0 (46 bytes, 18 insns) */
void f_10da27d0(void) {
  FTRACE(0x10da27d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10da27d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10da27d1 mov ebp, esp */
  EBP = (ESP);
  /* 10da27d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10da27d4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10da27d6 call 0x10d96820 */
  push32(0x10da27dbu); f_10d96820();
  /* 10da27db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da27de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da27e1 push eax */
  push32((uint32_t)(EAX));
  /* 10da27e2 call 0x10da2800 */
  push32(0x10da27e7u); f_10da2800();
  /* 10da27e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da27ea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10da27ed push 0xc */
  push32((uint32_t)(0xcu));
  /* 10da27ef call 0x10d968c0 */
  push32(0x10da27f4u); f_10d968c0();
  /* 10da27f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da27f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da27fa mov esp, ebp */
  ESP = (EBP);
  /* 10da27fc pop ebp */
  EBP = (pop32());
  /* 10da27fd ret  */
  ESPCHK(0x10da27d0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x10da2800 (198 bytes, 69 insns) */
void f_10da2800(void) {
  FTRACE(0x10da2800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10da2800 push ebp */
  push32((uint32_t)(EBP));
  /* 10da2801 mov ebp, esp */
  EBP = (ESP);
  /* 10da2803 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da2806 mov eax, dword ptr [0x10dbe4ac] */
  EAX = (r32((uint32_t)(0x10dbe4ac)));
  /* 10da280b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10da280e cmp dword ptr [0x10dbffa0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbffa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2815 jne 0x10da281e */
  if (!C.zf) goto L_10da281e;
  /* 10da2817 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da2819 jmp 0x10da28c2 */
  goto L_10da28c2;
L_10da281e:;
  /* 10da281e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2822 jne 0x10da2846 */
  if (!C.zf) goto L_10da2846;
  /* 10da2824 cmp dword ptr [0x10dbe4b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe4b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da282b je 0x10da2846 */
  if (C.zf) goto L_10da2846;
  /* 10da282d call 0x10da2920 */
  push32(0x10da2832u); f_10da2920();
  /* 10da2832 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10da2834 je 0x10da283d */
  if (C.zf) goto L_10da283d;
  /* 10da2836 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da2838 jmp 0x10da28c2 */
  goto L_10da28c2;
L_10da283d:;
  /* 10da283d mov ecx, dword ptr [0x10dbe4ac] */
  ECX = (r32((uint32_t)(0x10dbe4ac)));
  /* 10da2843 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10da2846:;
  /* 10da2846 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da284a je 0x10da28c0 */
  if (C.zf) goto L_10da28c0;
  /* 10da284c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2850 je 0x10da28c0 */
  if (C.zf) goto L_10da28c0;
  /* 10da2852 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da2855 push edx */
  push32((uint32_t)(EDX));
  /* 10da2856 call 0x10d95c50 */
  push32(0x10da285bu); f_10d95c50();
  /* 10da285b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da285e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10da2861:;
  /* 10da2861 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10da2864 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2867 je 0x10da28c0 */
  if (C.zf) goto L_10da28c0;
  /* 10da2869 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10da286c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10da286e push edx */
  push32((uint32_t)(EDX));
  /* 10da286f call 0x10d95c50 */
  push32(0x10da2874u); f_10d95c50();
  /* 10da2874 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da2877 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da287a jbe 0x10da28b5 */
  if ((C.cf||C.zf)) goto L_10da28b5;
  /* 10da287c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10da287f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10da2881 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da2884 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 10da2888 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da288b jne 0x10da28b5 */
  if (!C.zf) goto L_10da28b5;
  /* 10da288d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da2890 push ecx */
  push32((uint32_t)(ECX));
  /* 10da2891 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da2894 push edx */
  push32((uint32_t)(EDX));
  /* 10da2895 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10da2898 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10da289a push ecx */
  push32((uint32_t)(ECX));
  /* 10da289b call 0x10da28d0 */
  push32(0x10da28a0u); f_10da28d0();
  /* 10da28a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da28a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10da28a5 jne 0x10da28b5 */
  if (!C.zf) goto L_10da28b5;
  /* 10da28a7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10da28aa mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10da28ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da28af lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 10da28b3 jmp 0x10da28c2 */
  goto L_10da28c2;
L_10da28b5:;
  /* 10da28b5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10da28b8 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da28bb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10da28be jmp 0x10da2861 */
  goto L_10da2861;
L_10da28c0:;
  /* 10da28c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10da28c2:;
  /* 10da28c2 mov esp, ebp */
  ESP = (EBP);
  /* 10da28c4 pop ebp */
  EBP = (pop32());
  /* 10da28c5 ret  */
  ESPCHK(0x10da2800u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x10da28d0 (79 bytes, 32 insns) */
void f_10da28d0(void) {
  FTRACE(0x10da28d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10da28d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10da28d1 mov ebp, esp */
  EBP = (ESP);
  /* 10da28d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10da28d4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da28d8 jne 0x10da28de */
  if (!C.zf) goto L_10da28de;
  /* 10da28da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da28dc jmp 0x10da291b */
  goto L_10da291b;
L_10da28de:;
  /* 10da28de mov eax, dword ptr [0x10dbfb64] */
  EAX = (r32((uint32_t)(0x10dbfb64)));
  /* 10da28e3 push eax */
  push32((uint32_t)(EAX));
  /* 10da28e4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da28e7 push ecx */
  push32((uint32_t)(ECX));
  /* 10da28e8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da28eb push edx */
  push32((uint32_t)(EDX));
  /* 10da28ec mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da28ef push eax */
  push32((uint32_t)(EAX));
  /* 10da28f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da28f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10da28f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10da28f6 mov edx, dword ptr [0x10dbfe04] */
  EDX = (r32((uint32_t)(0x10dbfe04)));
  /* 10da28fc push edx */
  push32((uint32_t)(EDX));
  /* 10da28fd call 0x10da29d0 */
  push32(0x10da2902u); f_10da29d0();
  /* 10da2902 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da2905 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10da2908 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da290c jne 0x10da2915 */
  if (!C.zf) goto L_10da2915;
  /* 10da290e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 10da2913 jmp 0x10da291b */
  goto L_10da291b;
L_10da2915:;
  /* 10da2915 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da2918 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10da291b:;
  /* 10da291b mov esp, ebp */
  ESP = (EBP);
  /* 10da291d pop ebp */
  EBP = (pop32());
  /* 10da291e ret  */
  ESPCHK(0x10da28d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012920 @ 0x10da2920 (174 bytes, 66 insns) */
void f_10da2920(void) {
  FTRACE(0x10da2920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10da2920 push ebp */
  push32((uint32_t)(EBP));
  /* 10da2921 mov ebp, esp */
  EBP = (ESP);
  /* 10da2923 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da2926 mov eax, dword ptr [0x10dbe4b4] */
  EAX = (r32((uint32_t)(0x10dbe4b4)));
  /* 10da292b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10da292e:;
  /* 10da292e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da2931 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2934 je 0x10da29c8 */
  if (C.zf) goto L_10da29c8;
  /* 10da293a push 0 */
  push32((uint32_t)(0x0u));
  /* 10da293c push 0 */
  push32((uint32_t)(0x0u));
  /* 10da293e push 0 */
  push32((uint32_t)(0x0u));
  /* 10da2940 push 0 */
  push32((uint32_t)(0x0u));
  /* 10da2942 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10da2944 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da2947 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10da2949 push eax */
  push32((uint32_t)(EAX));
  /* 10da294a push 0 */
  push32((uint32_t)(0x0u));
  /* 10da294c push 1 */
  push32((uint32_t)(0x1u));
  /* 10da294e call dword ptr [0x10dc02fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02fc))), 0x10da2954u);
  /* 10da2954 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10da2957 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da295b jne 0x10da2962 */
  if (!C.zf) goto L_10da2962;
  /* 10da295d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10da2960 jmp 0x10da29ca */
  goto L_10da29ca;
L_10da2962:;
  /* 10da2962 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10da2964 push 0x10dba8f4 */
  push32((uint32_t)(0x10dba8f4u));
  /* 10da2969 push 2 */
  push32((uint32_t)(0x2u));
  /* 10da296b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da296e push ecx */
  push32((uint32_t)(ECX));
  /* 10da296f call 0x10d92e20 */
  push32(0x10da2974u); f_10d92e20();
  /* 10da2974 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da2977 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10da297a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da297e jne 0x10da2985 */
  if (!C.zf) goto L_10da2985;
  /* 10da2980 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10da2983 jmp 0x10da29ca */
  goto L_10da29ca;
L_10da2985:;
  /* 10da2985 push 0 */
  push32((uint32_t)(0x0u));
  /* 10da2987 push 0 */
  push32((uint32_t)(0x0u));
  /* 10da2989 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da298c push edx */
  push32((uint32_t)(EDX));
  /* 10da298d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10da2990 push eax */
  push32((uint32_t)(EAX));
  /* 10da2991 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10da2993 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da2996 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10da2998 push edx */
  push32((uint32_t)(EDX));
  /* 10da2999 push 0 */
  push32((uint32_t)(0x0u));
  /* 10da299b push 1 */
  push32((uint32_t)(0x1u));
  /* 10da299d call dword ptr [0x10dc02fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02fc))), 0x10da29a3u);
  /* 10da29a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10da29a5 jne 0x10da29ac */
  if (!C.zf) goto L_10da29ac;
  /* 10da29a7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10da29aa jmp 0x10da29ca */
  goto L_10da29ca;
L_10da29ac:;
  /* 10da29ac push 0 */
  push32((uint32_t)(0x0u));
  /* 10da29ae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10da29b1 push eax */
  push32((uint32_t)(EAX));
  /* 10da29b2 call 0x10da2e20 */
  push32(0x10da29b7u); f_10da2e20();
  /* 10da29b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da29ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da29bd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da29c0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10da29c3 jmp 0x10da292e */
  goto L_10da292e;
L_10da29c8:;
  /* 10da29c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10da29ca:;
  /* 10da29ca mov esp, ebp */
  ESP = (EBP);
  /* 10da29cc pop ebp */
  EBP = (pop32());
  /* 10da29cd ret  */
  ESPCHK(0x10da2920u, _esp0);
  ESP += 4; return;
}

/* FUN_100129d0 @ 0x10da29d0 (970 bytes, 340 insns) */
void f_10da29d0(void) {
  FTRACE(0x10da29d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10da29d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10da29d1 mov ebp, esp */
  EBP = (ESP);
  /* 10da29d3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10da29d5 push 0x10dba948 */
  push32((uint32_t)(0x10dba948u));
  /* 10da29da push 0x10d9bf28 */
  push32((uint32_t)(0x10d9bf28u));
  /* 10da29df mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10da29e5 push eax */
  push32((uint32_t)(EAX));
  /* 10da29e6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10da29ed add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da29f0 push ebx */
  push32((uint32_t)(EBX));
  /* 10da29f1 push esi */
  push32((uint32_t)(ESI));
  /* 10da29f2 push edi */
  push32((uint32_t)(EDI));
  /* 10da29f3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10da29f6 cmp dword ptr [0x10dbe7f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe7f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da29fd jne 0x10da2a56 */
  if (!C.zf) goto L_10da2a56;
  /* 10da29ff push 1 */
  push32((uint32_t)(0x1u));
  /* 10da2a01 push 0x10db9fa0 */
  push32((uint32_t)(0x10db9fa0u));
  /* 10da2a06 push 1 */
  push32((uint32_t)(0x1u));
  /* 10da2a08 push 0x10db9fa0 */
  push32((uint32_t)(0x10db9fa0u));
  /* 10da2a0d push 0 */
  push32((uint32_t)(0x0u));
  /* 10da2a0f push 0 */
  push32((uint32_t)(0x0u));
  /* 10da2a11 call dword ptr [0x10dc0248] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0248))), 0x10da2a17u);
  /* 10da2a17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10da2a19 je 0x10da2a27 */
  if (C.zf) goto L_10da2a27;
  /* 10da2a1b mov dword ptr [0x10dbe7f4], 1 */
  w32((uint32_t)(0x10dbe7f4), (0x1u));
  /* 10da2a25 jmp 0x10da2a56 */
  goto L_10da2a56;
L_10da2a27:;
  /* 10da2a27 push 1 */
  push32((uint32_t)(0x1u));
  /* 10da2a29 push 0x10db9f9c */
  push32((uint32_t)(0x10db9f9cu));
  /* 10da2a2e push 1 */
  push32((uint32_t)(0x1u));
  /* 10da2a30 push 0x10db9f9c */
  push32((uint32_t)(0x10db9f9cu));
  /* 10da2a35 push 0 */
  push32((uint32_t)(0x0u));
  /* 10da2a37 push 0 */
  push32((uint32_t)(0x0u));
  /* 10da2a39 call dword ptr [0x10dc0254] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0254))), 0x10da2a3fu);
  /* 10da2a3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10da2a41 je 0x10da2a4f */
  if (C.zf) goto L_10da2a4f;
  /* 10da2a43 mov dword ptr [0x10dbe7f4], 2 */
  w32((uint32_t)(0x10dbe7f4), (0x2u));
  /* 10da2a4d jmp 0x10da2a56 */
  goto L_10da2a56;
L_10da2a4f:;
  /* 10da2a4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da2a51 jmp 0x10da2db4 */
  goto L_10da2db4;
L_10da2a56:;
  /* 10da2a56 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2a5a jle 0x10da2a6f */
  if ((C.zf||C.sf!=C.of)) goto L_10da2a6f;
  /* 10da2a5c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da2a5f push eax */
  push32((uint32_t)(EAX));
  /* 10da2a60 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da2a63 push ecx */
  push32((uint32_t)(ECX));
  /* 10da2a64 call 0x10da2dd0 */
  push32(0x10da2a69u); f_10da2dd0();
  /* 10da2a69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da2a6c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10da2a6f:;
  /* 10da2a6f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2a73 jle 0x10da2a88 */
  if ((C.zf||C.sf!=C.of)) goto L_10da2a88;
  /* 10da2a75 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10da2a78 push edx */
  push32((uint32_t)(EDX));
  /* 10da2a79 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10da2a7c push eax */
  push32((uint32_t)(EAX));
  /* 10da2a7d call 0x10da2dd0 */
  push32(0x10da2a82u); f_10da2dd0();
  /* 10da2a82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da2a85 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_10da2a88:;
  /* 10da2a88 cmp dword ptr [0x10dbe7f4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe7f4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2a8f jne 0x10da2ab4 */
  if (!C.zf) goto L_10da2ab4;
  /* 10da2a91 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10da2a94 push ecx */
  push32((uint32_t)(ECX));
  /* 10da2a95 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10da2a98 push edx */
  push32((uint32_t)(EDX));
  /* 10da2a99 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da2a9c push eax */
  push32((uint32_t)(EAX));
  /* 10da2a9d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da2aa0 push ecx */
  push32((uint32_t)(ECX));
  /* 10da2aa1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da2aa4 push edx */
  push32((uint32_t)(EDX));
  /* 10da2aa5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da2aa8 push eax */
  push32((uint32_t)(EAX));
  /* 10da2aa9 call dword ptr [0x10dc0254] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0254))), 0x10da2aafu);
  /* 10da2aaf jmp 0x10da2db4 */
  goto L_10da2db4;
L_10da2ab4:;
  /* 10da2ab4 cmp dword ptr [0x10dbe7f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe7f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2abb jne 0x10da2db2 */
  if (!C.zf) goto L_10da2db2;
  /* 10da2ac1 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2ac5 jne 0x10da2ad0 */
  if (!C.zf) goto L_10da2ad0;
  /* 10da2ac7 mov ecx, dword ptr [0x10dbe6a0] */
  ECX = (r32((uint32_t)(0x10dbe6a0)));
  /* 10da2acd mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_10da2ad0:;
  /* 10da2ad0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2ad4 je 0x10da2ae0 */
  if (C.zf) goto L_10da2ae0;
  /* 10da2ad6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2ada jne 0x10da2c5c */
  if (!C.zf) goto L_10da2c5c;
L_10da2ae0:;
  /* 10da2ae0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da2ae3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2ae6 jne 0x10da2af2 */
  if (!C.zf) goto L_10da2af2;
  /* 10da2ae8 mov eax, 2 */
  EAX = (0x2u);
  /* 10da2aed jmp 0x10da2db4 */
  goto L_10da2db4;
L_10da2af2:;
  /* 10da2af2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2af6 jle 0x10da2b02 */
  if ((C.zf||C.sf!=C.of)) goto L_10da2b02;
  /* 10da2af8 mov eax, 1 */
  EAX = (0x1u);
  /* 10da2afd jmp 0x10da2db4 */
  goto L_10da2db4;
L_10da2b02:;
  /* 10da2b02 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2b06 jle 0x10da2b12 */
  if ((C.zf||C.sf!=C.of)) goto L_10da2b12;
  /* 10da2b08 mov eax, 3 */
  EAX = (0x3u);
  /* 10da2b0d jmp 0x10da2db4 */
  goto L_10da2db4;
L_10da2b12:;
  /* 10da2b12 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 10da2b15 push eax */
  push32((uint32_t)(EAX));
  /* 10da2b16 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10da2b19 push ecx */
  push32((uint32_t)(ECX));
  /* 10da2b1a call dword ptr [0x10dc033c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc033c))), 0x10da2b20u);
  /* 10da2b20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10da2b22 jne 0x10da2b2b */
  if (!C.zf) goto L_10da2b2b;
  /* 10da2b24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da2b26 jmp 0x10da2db4 */
  goto L_10da2db4;
L_10da2b2b:;
  /* 10da2b2b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2b2f jne 0x10da2b37 */
  if (!C.zf) goto L_10da2b37;
  /* 10da2b31 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2b35 je 0x10da2b64 */
  if (C.zf) goto L_10da2b64;
L_10da2b37:;
  /* 10da2b37 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2b3b jne 0x10da2b43 */
  if (!C.zf) goto L_10da2b43;
  /* 10da2b3d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2b41 je 0x10da2b64 */
  if (C.zf) goto L_10da2b64;
L_10da2b43:;
  /* 10da2b43 push 0x10dba908 */
  push32((uint32_t)(0x10dba908u));
  /* 10da2b48 push 0 */
  push32((uint32_t)(0x0u));
  /* 10da2b4a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 10da2b4f push 0x10dba900 */
  push32((uint32_t)(0x10dba900u));
  /* 10da2b54 push 2 */
  push32((uint32_t)(0x2u));
  /* 10da2b56 call 0x10d91ee0 */
  push32(0x10da2b5bu); f_10d91ee0();
  /* 10da2b5b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da2b5e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2b61 jne 0x10da2b64 */
  if (!C.zf) goto L_10da2b64;
  /* 10da2b63 int3  */
  x86_unimpl("int3 @ 0x10da2b63");
L_10da2b64:;
  /* 10da2b64 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10da2b66 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10da2b68 jne 0x10da2b2b */
  if (!C.zf) goto L_10da2b2b;
  /* 10da2b6a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2b6e jle 0x10da2be3 */
  if ((C.zf||C.sf!=C.of)) goto L_10da2be3;
  /* 10da2b70 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2b74 jae 0x10da2b80 */
  if (!C.cf) goto L_10da2b80;
  /* 10da2b76 mov eax, 3 */
  EAX = (0x3u);
  /* 10da2b7b jmp 0x10da2db4 */
  goto L_10da2db4;
L_10da2b80:;
  /* 10da2b80 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 10da2b83 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 10da2b86 jmp 0x10da2b91 */
  goto L_10da2b91;
L_10da2b88:;
  /* 10da2b88 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10da2b8b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da2b8e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_10da2b91:;
  /* 10da2b91 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10da2b94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da2b96 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10da2b98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10da2b9a je 0x10da2bd9 */
  if (C.zf) goto L_10da2bd9;
  /* 10da2b9c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10da2b9f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10da2ba1 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10da2ba4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10da2ba6 je 0x10da2bd9 */
  if (C.zf) goto L_10da2bd9;
  /* 10da2ba8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da2bab xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10da2bad mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10da2baf mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10da2bb2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da2bb4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10da2bb6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2bb8 jl 0x10da2bd7 */
  if ((C.sf!=C.of)) goto L_10da2bd7;
  /* 10da2bba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da2bbd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10da2bbf mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10da2bc1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10da2bc4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10da2bc6 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10da2bc9 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2bcb jg 0x10da2bd7 */
  if ((!C.zf&&C.sf==C.of)) goto L_10da2bd7;
  /* 10da2bcd mov eax, 2 */
  EAX = (0x2u);
  /* 10da2bd2 jmp 0x10da2db4 */
  goto L_10da2db4;
L_10da2bd7:;
  /* 10da2bd7 jmp 0x10da2b88 */
  goto L_10da2b88;
L_10da2bd9:;
  /* 10da2bd9 mov eax, 3 */
  EAX = (0x3u);
  /* 10da2bde jmp 0x10da2db4 */
  goto L_10da2db4;
L_10da2be3:;
  /* 10da2be3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2be7 jle 0x10da2c5c */
  if ((C.zf||C.sf!=C.of)) goto L_10da2c5c;
  /* 10da2be9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2bed jae 0x10da2bf9 */
  if (!C.cf) goto L_10da2bf9;
  /* 10da2bef mov eax, 1 */
  EAX = (0x1u);
  /* 10da2bf4 jmp 0x10da2db4 */
  goto L_10da2db4;
L_10da2bf9:;
  /* 10da2bf9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 10da2bfc mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 10da2bff jmp 0x10da2c0a */
  goto L_10da2c0a;
L_10da2c01:;
  /* 10da2c01 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10da2c04 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da2c07 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_10da2c0a:;
  /* 10da2c0a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10da2c0d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10da2c0f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10da2c11 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10da2c13 je 0x10da2c52 */
  if (C.zf) goto L_10da2c52;
  /* 10da2c15 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10da2c18 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10da2c1a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10da2c1d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10da2c1f je 0x10da2c52 */
  if (C.zf) goto L_10da2c52;
  /* 10da2c21 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10da2c24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da2c26 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10da2c28 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10da2c2b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10da2c2d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10da2c2f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2c31 jl 0x10da2c50 */
  if ((C.sf!=C.of)) goto L_10da2c50;
  /* 10da2c33 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10da2c36 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10da2c38 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10da2c3a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10da2c3d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da2c3f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10da2c42 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2c44 jg 0x10da2c50 */
  if ((!C.zf&&C.sf==C.of)) goto L_10da2c50;
  /* 10da2c46 mov eax, 2 */
  EAX = (0x2u);
  /* 10da2c4b jmp 0x10da2db4 */
  goto L_10da2db4;
L_10da2c50:;
  /* 10da2c50 jmp 0x10da2c01 */
  goto L_10da2c01;
L_10da2c52:;
  /* 10da2c52 mov eax, 1 */
  EAX = (0x1u);
  /* 10da2c57 jmp 0x10da2db4 */
  goto L_10da2db4;
L_10da2c5c:;
  /* 10da2c5c push 0 */
  push32((uint32_t)(0x0u));
  /* 10da2c5e push 0 */
  push32((uint32_t)(0x0u));
  /* 10da2c60 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da2c63 push ecx */
  push32((uint32_t)(ECX));
  /* 10da2c64 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da2c67 push edx */
  push32((uint32_t)(EDX));
  /* 10da2c68 push 9 */
  push32((uint32_t)(0x9u));
  /* 10da2c6a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10da2c6d push eax */
  push32((uint32_t)(EAX));
  /* 10da2c6e call dword ptr [0x10dc0348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0348))), 0x10da2c74u);
  /* 10da2c74 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10da2c77 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2c7b jne 0x10da2c84 */
  if (!C.zf) goto L_10da2c84;
  /* 10da2c7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da2c7f jmp 0x10da2db4 */
  goto L_10da2db4;
L_10da2c84:;
  /* 10da2c84 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10da2c8b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10da2c8e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10da2c90 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da2c93 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10da2c95 call 0x10d95fc0 */
  push32(0x10da2c9au); f_10d95fc0();
  /* 10da2c9a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 10da2c9d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10da2ca0 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 10da2ca3 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10da2ca6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10da2cad jmp 0x10da2cc6 */
  goto L_10da2cc6;
  /* 10da2caf mov eax, 1 */
  EAX = (0x1u);
  /* 10da2cb4 ret  */
  ESPCHK(0x10da29d0u, _esp0);
  ESP += 4; return;
  /* 10da2cb5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10da2cb8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10da2cbf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10da2cc6:;
  /* 10da2cc6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2cca jne 0x10da2cd3 */
  if (!C.zf) goto L_10da2cd3;
  /* 10da2ccc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da2cce jmp 0x10da2db4 */
  goto L_10da2db4;
L_10da2cd3:;
  /* 10da2cd3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10da2cd6 push edx */
  push32((uint32_t)(EDX));
  /* 10da2cd7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10da2cda push eax */
  push32((uint32_t)(EAX));
  /* 10da2cdb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10da2cde push ecx */
  push32((uint32_t)(ECX));
  /* 10da2cdf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10da2ce2 push edx */
  push32((uint32_t)(EDX));
  /* 10da2ce3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10da2ce5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10da2ce8 push eax */
  push32((uint32_t)(EAX));
  /* 10da2ce9 call dword ptr [0x10dc0348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0348))), 0x10da2cefu);
  /* 10da2cef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10da2cf1 jne 0x10da2cfa */
  if (!C.zf) goto L_10da2cfa;
  /* 10da2cf3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da2cf5 jmp 0x10da2db4 */
  goto L_10da2db4;
L_10da2cfa:;
  /* 10da2cfa push 0 */
  push32((uint32_t)(0x0u));
  /* 10da2cfc push 0 */
  push32((uint32_t)(0x0u));
  /* 10da2cfe mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10da2d01 push ecx */
  push32((uint32_t)(ECX));
  /* 10da2d02 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10da2d05 push edx */
  push32((uint32_t)(EDX));
  /* 10da2d06 push 9 */
  push32((uint32_t)(0x9u));
  /* 10da2d08 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10da2d0b push eax */
  push32((uint32_t)(EAX));
  /* 10da2d0c call dword ptr [0x10dc0348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0348))), 0x10da2d12u);
  /* 10da2d12 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10da2d15 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2d19 jne 0x10da2d22 */
  if (!C.zf) goto L_10da2d22;
  /* 10da2d1b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da2d1d jmp 0x10da2db4 */
  goto L_10da2db4;
L_10da2d22:;
  /* 10da2d22 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10da2d29 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10da2d2c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10da2d2e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da2d31 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10da2d33 call 0x10d95fc0 */
  push32(0x10da2d38u); f_10d95fc0();
  /* 10da2d38 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 10da2d3b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10da2d3e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 10da2d41 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10da2d44 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10da2d4b jmp 0x10da2d64 */
  goto L_10da2d64;
  /* 10da2d4d mov eax, 1 */
  EAX = (0x1u);
  /* 10da2d52 ret  */
  ESPCHK(0x10da29d0u, _esp0);
  ESP += 4; return;
  /* 10da2d53 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10da2d56 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10da2d5d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10da2d64:;
  /* 10da2d64 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2d68 jne 0x10da2d6e */
  if (!C.zf) goto L_10da2d6e;
  /* 10da2d6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da2d6c jmp 0x10da2db4 */
  goto L_10da2db4;
L_10da2d6e:;
  /* 10da2d6e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10da2d71 push edx */
  push32((uint32_t)(EDX));
  /* 10da2d72 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10da2d75 push eax */
  push32((uint32_t)(EAX));
  /* 10da2d76 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10da2d79 push ecx */
  push32((uint32_t)(ECX));
  /* 10da2d7a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10da2d7d push edx */
  push32((uint32_t)(EDX));
  /* 10da2d7e push 1 */
  push32((uint32_t)(0x1u));
  /* 10da2d80 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10da2d83 push eax */
  push32((uint32_t)(EAX));
  /* 10da2d84 call dword ptr [0x10dc0348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0348))), 0x10da2d8au);
  /* 10da2d8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10da2d8c jne 0x10da2d92 */
  if (!C.zf) goto L_10da2d92;
  /* 10da2d8e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da2d90 jmp 0x10da2db4 */
  goto L_10da2db4;
L_10da2d92:;
  /* 10da2d92 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10da2d95 push ecx */
  push32((uint32_t)(ECX));
  /* 10da2d96 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10da2d99 push edx */
  push32((uint32_t)(EDX));
  /* 10da2d9a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10da2d9d push eax */
  push32((uint32_t)(EAX));
  /* 10da2d9e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10da2da1 push ecx */
  push32((uint32_t)(ECX));
  /* 10da2da2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da2da5 push edx */
  push32((uint32_t)(EDX));
  /* 10da2da6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da2da9 push eax */
  push32((uint32_t)(EAX));
  /* 10da2daa call dword ptr [0x10dc0248] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0248))), 0x10da2db0u);
  /* 10da2db0 jmp 0x10da2db4 */
  goto L_10da2db4;
L_10da2db2:;
  /* 10da2db2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10da2db4:;
  /* 10da2db4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 10da2db7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10da2dba mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10da2dc1 pop edi */
  EDI = (pop32());
  /* 10da2dc2 pop esi */
  ESI = (pop32());
  /* 10da2dc3 pop ebx */
  EBX = (pop32());
  /* 10da2dc4 mov esp, ebp */
  ESP = (EBP);
  /* 10da2dc6 pop ebp */
  EBP = (pop32());
  /* 10da2dc7 ret  */
  ESPCHK(0x10da29d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012dd0 @ 0x10da2dd0 (80 bytes, 32 insns) */
void f_10da2dd0(void) {
  FTRACE(0x10da2dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10da2dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10da2dd1 mov ebp, esp */
  EBP = (ESP);
  /* 10da2dd3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da2dd6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da2dd9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10da2ddc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da2ddf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10da2de2:;
  /* 10da2de2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10da2de5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10da2de8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da2deb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10da2dee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10da2df0 je 0x10da2e07 */
  if (C.zf) goto L_10da2e07;
  /* 10da2df2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da2df5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10da2df8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10da2dfa je 0x10da2e07 */
  if (C.zf) goto L_10da2e07;
  /* 10da2dfc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da2dff add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da2e02 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10da2e05 jmp 0x10da2de2 */
  goto L_10da2de2;
L_10da2e07:;
  /* 10da2e07 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da2e0a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10da2e0d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10da2e0f jne 0x10da2e19 */
  if (!C.zf) goto L_10da2e19;
  /* 10da2e11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da2e14 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da2e17 jmp 0x10da2e1c */
  goto L_10da2e1c;
L_10da2e19:;
  /* 10da2e19 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10da2e1c:;
  /* 10da2e1c mov esp, ebp */
  ESP = (EBP);
  /* 10da2e1e pop ebp */
  EBP = (pop32());
  /* 10da2e1f ret  */
  ESPCHK(0x10da2dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012e20 @ 0x10da2e20 (736 bytes, 224 insns) */
void f_10da2e20(void) {
  FTRACE(0x10da2e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10da2e20 push ebp */
  push32((uint32_t)(EBP));
  /* 10da2e21 mov ebp, esp */
  EBP = (ESP);
  /* 10da2e23 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da2e26 push esi */
  push32((uint32_t)(ESI));
  /* 10da2e27 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2e2b je 0x10da2e4c */
  if (C.zf) goto L_10da2e4c;
  /* 10da2e2d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10da2e2f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da2e32 push eax */
  push32((uint32_t)(EAX));
  /* 10da2e33 call 0x10da3270 */
  push32(0x10da2e38u); f_10da3270();
  /* 10da2e38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da2e3b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10da2e3e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2e42 je 0x10da2e4c */
  if (C.zf) goto L_10da2e4c;
  /* 10da2e44 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da2e47 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2e4a jne 0x10da2e54 */
  if (!C.zf) goto L_10da2e54;
L_10da2e4c:;
  /* 10da2e4c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10da2e4f jmp 0x10da30fb */
  goto L_10da30fb;
L_10da2e54:;
  /* 10da2e54 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10da2e57 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10da2e5b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10da2e5d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da2e5f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10da2e60 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10da2e63 mov ecx, dword ptr [0x10dbe4ac] */
  ECX = (r32((uint32_t)(0x10dbe4ac)));
  /* 10da2e69 cmp ecx, dword ptr [0x10dbe4b0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10dbe4b0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2e6f jne 0x10da2e85 */
  if (!C.zf) goto L_10da2e85;
  /* 10da2e71 mov edx, dword ptr [0x10dbe4ac] */
  EDX = (r32((uint32_t)(0x10dbe4ac)));
  /* 10da2e77 push edx */
  push32((uint32_t)(EDX));
  /* 10da2e78 call 0x10da3180 */
  push32(0x10da2e7du); f_10da3180();
  /* 10da2e7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da2e80 mov dword ptr [0x10dbe4ac], eax */
  w32((uint32_t)(0x10dbe4ac), (EAX));
L_10da2e85:;
  /* 10da2e85 cmp dword ptr [0x10dbe4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2e8c jne 0x10da2f45 */
  if (!C.zf) goto L_10da2f45;
  /* 10da2e92 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2e96 je 0x10da2eb7 */
  if (C.zf) goto L_10da2eb7;
  /* 10da2e98 cmp dword ptr [0x10dbe4b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe4b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2e9f je 0x10da2eb7 */
  if (C.zf) goto L_10da2eb7;
  /* 10da2ea1 call 0x10da2920 */
  push32(0x10da2ea6u); f_10da2920();
  /* 10da2ea6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10da2ea8 je 0x10da2eb2 */
  if (C.zf) goto L_10da2eb2;
  /* 10da2eaa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10da2ead jmp 0x10da30fb */
  goto L_10da30fb;
L_10da2eb2:;
  /* 10da2eb2 jmp 0x10da2f45 */
  goto L_10da2f45;
L_10da2eb7:;
  /* 10da2eb7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2ebb je 0x10da2ec4 */
  if (C.zf) goto L_10da2ec4;
  /* 10da2ebd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da2ebf jmp 0x10da30fb */
  goto L_10da30fb;
L_10da2ec4:;
  /* 10da2ec4 cmp dword ptr [0x10dbe4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2ecb jne 0x10da2f04 */
  if (!C.zf) goto L_10da2f04;
  /* 10da2ecd push 0x87 */
  push32((uint32_t)(0x87u));
  /* 10da2ed2 push 0x10dba960 */
  push32((uint32_t)(0x10dba960u));
  /* 10da2ed7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10da2ed9 push 4 */
  push32((uint32_t)(0x4u));
  /* 10da2edb call 0x10d92e20 */
  push32(0x10da2ee0u); f_10d92e20();
  /* 10da2ee0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da2ee3 mov dword ptr [0x10dbe4ac], eax */
  w32((uint32_t)(0x10dbe4ac), (EAX));
  /* 10da2ee8 cmp dword ptr [0x10dbe4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2eef jne 0x10da2ef9 */
  if (!C.zf) goto L_10da2ef9;
  /* 10da2ef1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10da2ef4 jmp 0x10da30fb */
  goto L_10da30fb;
L_10da2ef9:;
  /* 10da2ef9 mov eax, dword ptr [0x10dbe4ac] */
  EAX = (r32((uint32_t)(0x10dbe4ac)));
  /* 10da2efe mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10da2f04:;
  /* 10da2f04 cmp dword ptr [0x10dbe4b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe4b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2f0b jne 0x10da2f45 */
  if (!C.zf) goto L_10da2f45;
  /* 10da2f0d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 10da2f12 push 0x10dba960 */
  push32((uint32_t)(0x10dba960u));
  /* 10da2f17 push 2 */
  push32((uint32_t)(0x2u));
  /* 10da2f19 push 4 */
  push32((uint32_t)(0x4u));
  /* 10da2f1b call 0x10d92e20 */
  push32(0x10da2f20u); f_10d92e20();
  /* 10da2f20 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da2f23 mov dword ptr [0x10dbe4b4], eax */
  w32((uint32_t)(0x10dbe4b4), (EAX));
  /* 10da2f28 cmp dword ptr [0x10dbe4b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe4b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2f2f jne 0x10da2f39 */
  if (!C.zf) goto L_10da2f39;
  /* 10da2f31 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10da2f34 jmp 0x10da30fb */
  goto L_10da30fb;
L_10da2f39:;
  /* 10da2f39 mov ecx, dword ptr [0x10dbe4b4] */
  ECX = (r32((uint32_t)(0x10dbe4b4)));
  /* 10da2f3f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_10da2f45:;
  /* 10da2f45 mov edx, dword ptr [0x10dbe4ac] */
  EDX = (r32((uint32_t)(0x10dbe4ac)));
  /* 10da2f4b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10da2f4e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10da2f51 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da2f54 push eax */
  push32((uint32_t)(EAX));
  /* 10da2f55 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da2f58 push ecx */
  push32((uint32_t)(ECX));
  /* 10da2f59 call 0x10da3100 */
  push32(0x10da2f5eu); f_10da3100();
  /* 10da2f5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da2f61 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10da2f64 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2f68 jl 0x10da3001 */
  if ((C.sf!=C.of)) goto L_10da3001;
  /* 10da2f6e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da2f71 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2f74 je 0x10da3001 */
  if (C.zf) goto L_10da3001;
  /* 10da2f7a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2f7e je 0x10da2ff3 */
  if (C.zf) goto L_10da2ff3;
  /* 10da2f80 push 2 */
  push32((uint32_t)(0x2u));
  /* 10da2f82 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10da2f85 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da2f88 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10da2f8b push edx */
  push32((uint32_t)(EDX));
  /* 10da2f8c call 0x10d938b0 */
  push32(0x10da2f91u); f_10d938b0();
  /* 10da2f91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da2f94 jmp 0x10da2f9f */
  goto L_10da2f9f;
L_10da2f96:;
  /* 10da2f96 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10da2f99 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da2f9c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10da2f9f:;
  /* 10da2f9f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10da2fa2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da2fa5 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2fa9 je 0x10da2fc0 */
  if (C.zf) goto L_10da2fc0;
  /* 10da2fab mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10da2fae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da2fb1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10da2fb4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10da2fb7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 10da2fbb mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10da2fbe jmp 0x10da2f96 */
  goto L_10da2f96;
L_10da2fc0:;
  /* 10da2fc0 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 10da2fc5 push 0x10dba960 */
  push32((uint32_t)(0x10dba960u));
  /* 10da2fca push 2 */
  push32((uint32_t)(0x2u));
  /* 10da2fcc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10da2fcf shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10da2fd2 push eax */
  push32((uint32_t)(EAX));
  /* 10da2fd3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da2fd6 push ecx */
  push32((uint32_t)(ECX));
  /* 10da2fd7 call 0x10d932b0 */
  push32(0x10da2fdcu); f_10d932b0();
  /* 10da2fdc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da2fdf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10da2fe2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da2fe6 je 0x10da2ff1 */
  if (C.zf) goto L_10da2ff1;
  /* 10da2fe8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da2feb mov dword ptr [0x10dbe4ac], edx */
  w32((uint32_t)(0x10dbe4ac), (EDX));
L_10da2ff1:;
  /* 10da2ff1 jmp 0x10da2fff */
  goto L_10da2fff;
L_10da2ff3:;
  /* 10da2ff3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10da2ff6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da2ff9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da2ffc mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_10da2fff:;
  /* 10da2fff jmp 0x10da3074 */
  goto L_10da3074;
L_10da3001:;
  /* 10da3001 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da3005 jne 0x10da306d */
  if (!C.zf) goto L_10da306d;
  /* 10da3007 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da300b jge 0x10da3015 */
  if ((C.sf==C.of)) goto L_10da3015;
  /* 10da300d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10da3010 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10da3012 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10da3015:;
  /* 10da3015 push 0xce */
  push32((uint32_t)(0xceu));
  /* 10da301a push 0x10dba960 */
  push32((uint32_t)(0x10dba960u));
  /* 10da301f push 2 */
  push32((uint32_t)(0x2u));
  /* 10da3021 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10da3024 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 10da302b push edx */
  push32((uint32_t)(EDX));
  /* 10da302c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da302f push eax */
  push32((uint32_t)(EAX));
  /* 10da3030 call 0x10d932b0 */
  push32(0x10da3035u); f_10d932b0();
  /* 10da3035 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da3038 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10da303b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da303f jne 0x10da3049 */
  if (!C.zf) goto L_10da3049;
  /* 10da3041 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10da3044 jmp 0x10da30fb */
  goto L_10da30fb;
L_10da3049:;
  /* 10da3049 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10da304c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da304f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da3052 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 10da3055 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10da3058 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da305b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 10da3063 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da3066 mov dword ptr [0x10dbe4ac], eax */
  w32((uint32_t)(0x10dbe4ac), (EAX));
  /* 10da306b jmp 0x10da3074 */
  goto L_10da3074;
L_10da306d:;
  /* 10da306d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da306f jmp 0x10da30fb */
  goto L_10da30fb;
L_10da3074:;
  /* 10da3074 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da3078 je 0x10da30f9 */
  if (C.zf) goto L_10da30f9;
  /* 10da307a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 10da307f push 0x10dba960 */
  push32((uint32_t)(0x10dba960u));
  /* 10da3084 push 2 */
  push32((uint32_t)(0x2u));
  /* 10da3086 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da3089 push ecx */
  push32((uint32_t)(ECX));
  /* 10da308a call 0x10d95c50 */
  push32(0x10da308fu); f_10d95c50();
  /* 10da308f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da3092 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da3095 push eax */
  push32((uint32_t)(EAX));
  /* 10da3096 call 0x10d92e20 */
  push32(0x10da309bu); f_10d92e20();
  /* 10da309b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da309e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10da30a1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da30a5 je 0x10da30f9 */
  if (C.zf) goto L_10da30f9;
  /* 10da30a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da30aa push edx */
  push32((uint32_t)(EDX));
  /* 10da30ab mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10da30ae push eax */
  push32((uint32_t)(EAX));
  /* 10da30af call 0x10d95dd0 */
  push32(0x10da30b4u); f_10d95dd0();
  /* 10da30b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da30b7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10da30ba sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da30bd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10da30c0 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da30c2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10da30c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da30c8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10da30cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da30ce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da30d1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10da30d4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10da30d7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10da30d9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da30db not edx */
  EDX = (~(EDX));
  /* 10da30dd and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10da30e0 push edx */
  push32((uint32_t)(EDX));
  /* 10da30e1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10da30e4 push eax */
  push32((uint32_t)(EAX));
  /* 10da30e5 call dword ptr [0x10dc0244] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0244))), 0x10da30ebu);
  /* 10da30eb push 2 */
  push32((uint32_t)(0x2u));
  /* 10da30ed mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10da30f0 push ecx */
  push32((uint32_t)(ECX));
  /* 10da30f1 call 0x10d938b0 */
  push32(0x10da30f6u); f_10d938b0();
  /* 10da30f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10da30f9:;
  /* 10da30f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10da30fb:;
  /* 10da30fb pop esi */
  ESI = (pop32());
  /* 10da30fc mov esp, ebp */
  ESP = (EBP);
  /* 10da30fe pop ebp */
  EBP = (pop32());
  /* 10da30ff ret  */
  ESPCHK(0x10da2e20u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x10da3100 (124 bytes, 47 insns) */
void f_10da3100(void) {
  FTRACE(0x10da3100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10da3100 push ebp */
  push32((uint32_t)(EBP));
  /* 10da3101 mov ebp, esp */
  EBP = (ESP);
  /* 10da3103 push ecx */
  push32((uint32_t)(ECX));
  /* 10da3104 mov eax, dword ptr [0x10dbe4ac] */
  EAX = (r32((uint32_t)(0x10dbe4ac)));
  /* 10da3109 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10da310c jmp 0x10da3117 */
  goto L_10da3117;
L_10da310e:;
  /* 10da310e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da3111 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da3114 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10da3117:;
  /* 10da3117 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da311a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da311d je 0x10da316a */
  if (C.zf) goto L_10da316a;
  /* 10da311f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da3122 push eax */
  push32((uint32_t)(EAX));
  /* 10da3123 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da3126 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10da3128 push edx */
  push32((uint32_t)(EDX));
  /* 10da3129 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da312c push eax */
  push32((uint32_t)(EAX));
  /* 10da312d call 0x10da28d0 */
  push32(0x10da3132u); f_10da28d0();
  /* 10da3132 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da3135 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10da3137 jne 0x10da3168 */
  if (!C.zf) goto L_10da3168;
  /* 10da3139 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da313c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10da313e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da3141 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 10da3145 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da3148 je 0x10da315a */
  if (C.zf) goto L_10da315a;
  /* 10da314a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da314d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10da314f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da3152 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 10da3156 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10da3158 jne 0x10da3168 */
  if (!C.zf) goto L_10da3168;
L_10da315a:;
  /* 10da315a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da315d sub eax, dword ptr [0x10dbe4ac] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10dbe4ac))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da3163 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10da3166 jmp 0x10da3178 */
  goto L_10da3178;
L_10da3168:;
  /* 10da3168 jmp 0x10da310e */
  goto L_10da310e;
L_10da316a:;
  /* 10da316a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da316d sub eax, dword ptr [0x10dbe4ac] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10dbe4ac))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da3173 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10da3176 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_10da3178:;
  /* 10da3178 mov esp, ebp */
  ESP = (EBP);
  /* 10da317a pop ebp */
  EBP = (pop32());
  /* 10da317b ret  */
  ESPCHK(0x10da3100u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x10da3180 (238 bytes, 80 insns) */
void f_10da3180(void) {
  FTRACE(0x10da3180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10da3180 push ebp */
  push32((uint32_t)(EBP));
  /* 10da3181 mov ebp, esp */
  EBP = (ESP);
  /* 10da3183 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da3186 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10da318d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da3190 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10da3193 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da3197 jne 0x10da31a0 */
  if (!C.zf) goto L_10da31a0;
  /* 10da3199 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da319b jmp 0x10da326a */
  goto L_10da326a;
L_10da31a0:;
  /* 10da31a0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da31a3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10da31a5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da31a8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da31ab mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10da31ae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10da31b0 je 0x10da31bd */
  if (C.zf) goto L_10da31bd;
  /* 10da31b2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10da31b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da31b8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10da31bb jmp 0x10da31a0 */
  goto L_10da31a0;
L_10da31bd:;
  /* 10da31bd push 0x146 */
  push32((uint32_t)(0x146u));
  /* 10da31c2 push 0x10dba960 */
  push32((uint32_t)(0x10dba960u));
  /* 10da31c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10da31c9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10da31cc lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 10da31d3 push eax */
  push32((uint32_t)(EAX));
  /* 10da31d4 call 0x10d92e20 */
  push32(0x10da31d9u); f_10d92e20();
  /* 10da31d9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da31dc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10da31df mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10da31e2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10da31e5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da31e9 jne 0x10da31f5 */
  if (!C.zf) goto L_10da31f5;
  /* 10da31eb push 9 */
  push32((uint32_t)(0x9u));
  /* 10da31ed call 0x10d91d90 */
  push32(0x10da31f2u); f_10d91d90();
  /* 10da31f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10da31f5:;
  /* 10da31f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da31f8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10da31fb:;
  /* 10da31fb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da31fe cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da3201 je 0x10da325e */
  if (C.zf) goto L_10da325e;
  /* 10da3203 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 10da3208 push 0x10dba960 */
  push32((uint32_t)(0x10dba960u));
  /* 10da320d push 2 */
  push32((uint32_t)(0x2u));
  /* 10da320f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da3212 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10da3214 push edx */
  push32((uint32_t)(EDX));
  /* 10da3215 call 0x10d95c50 */
  push32(0x10da321au); f_10d95c50();
  /* 10da321a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da321d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da3220 push eax */
  push32((uint32_t)(EAX));
  /* 10da3221 call 0x10d92e20 */
  push32(0x10da3226u); f_10d92e20();
  /* 10da3226 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da3229 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10da322c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10da322e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10da3231 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da3234 je 0x10da324a */
  if (C.zf) goto L_10da324a;
  /* 10da3236 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da3239 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10da323b push ecx */
  push32((uint32_t)(ECX));
  /* 10da323c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10da323f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10da3241 push eax */
  push32((uint32_t)(EAX));
  /* 10da3242 call 0x10d95dd0 */
  push32(0x10da3247u); f_10d95dd0();
  /* 10da3247 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10da324a:;
  /* 10da324a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10da324d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da3250 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10da3253 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10da3256 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da3259 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10da325c jmp 0x10da31fb */
  goto L_10da31fb;
L_10da325e:;
  /* 10da325e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10da3261 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10da3267 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10da326a:;
  /* 10da326a mov esp, ebp */
  ESP = (EBP);
  /* 10da326c pop ebp */
  EBP = (pop32());
  /* 10da326d ret  */
  ESPCHK(0x10da3180u, _esp0);
  ESP += 4; return;
}

/* FUN_10013270 @ 0x10da3270 (237 bytes, 81 insns) */
void f_10da3270(void) {
  FTRACE(0x10da3270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10da3270 push ebp */
  push32((uint32_t)(EBP));
  /* 10da3271 mov ebp, esp */
  EBP = (ESP);
  /* 10da3273 push ecx */
  push32((uint32_t)(ECX));
  /* 10da3274 cmp dword ptr [0x10dbfbec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbfbec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da327b jne 0x10da3292 */
  if (!C.zf) goto L_10da3292;
  /* 10da327d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10da3280 push eax */
  push32((uint32_t)(EAX));
  /* 10da3281 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da3284 push ecx */
  push32((uint32_t)(ECX));
  /* 10da3285 call 0x10da3370 */
  push32(0x10da328au); f_10da3370();
  /* 10da328a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da328d jmp 0x10da3359 */
  goto L_10da3359;
L_10da3292:;
  /* 10da3292 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10da3294 call 0x10d96820 */
  push32(0x10da3299u); f_10d96820();
  /* 10da3299 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da329c jmp 0x10da32a7 */
  goto L_10da32a7;
L_10da329e:;
  /* 10da329e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da32a1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da32a4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10da32a7:;
  /* 10da32a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da32aa movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 10da32ae mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 10da32b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da32b5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10da32bb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10da32bd je 0x10da333b */
  if (C.zf) goto L_10da333b;
  /* 10da32bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da32c2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10da32c7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10da32c9 mov cl, byte ptr [eax + 0x10dbfd01] */
  CL = (r8((uint32_t)(EAX + 0x10dbfd01)));
  /* 10da32cf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10da32d2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10da32d4 je 0x10da3326 */
  if (C.zf) goto L_10da3326;
  /* 10da32d6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da32d9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da32dc mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10da32df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da32e2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10da32e4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10da32e6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10da32e8 jne 0x10da32f8 */
  if (!C.zf) goto L_10da32f8;
  /* 10da32ea push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10da32ec call 0x10d968c0 */
  push32(0x10da32f1u); f_10d968c0();
  /* 10da32f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da32f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da32f6 jmp 0x10da3359 */
  goto L_10da3359;
L_10da32f8:;
  /* 10da32f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da32fb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10da3301 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10da3304 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da3307 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10da3309 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10da330b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10da330d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da3310 jne 0x10da3324 */
  if (!C.zf) goto L_10da3324;
  /* 10da3312 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10da3314 call 0x10d968c0 */
  push32(0x10da3319u); f_10d968c0();
  /* 10da3319 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da331c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da331f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10da3322 jmp 0x10da3359 */
  goto L_10da3359;
L_10da3324:;
  /* 10da3324 jmp 0x10da3336 */
  goto L_10da3336;
L_10da3326:;
  /* 10da3326 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da3329 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10da332f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da3332 jne 0x10da3336 */
  if (!C.zf) goto L_10da3336;
  /* 10da3334 jmp 0x10da333b */
  goto L_10da333b;
L_10da3336:;
  /* 10da3336 jmp 0x10da329e */
  goto L_10da329e;
L_10da333b:;
  /* 10da333b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10da333d call 0x10d968c0 */
  push32(0x10da3342u); f_10d968c0();
  /* 10da3342 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10da3345 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10da3348 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10da334d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10da3350 jne 0x10da3357 */
  if (!C.zf) goto L_10da3357;
  /* 10da3352 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10da3355 jmp 0x10da3359 */
  goto L_10da3359;
L_10da3357:;
  /* 10da3357 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10da3359:;
  /* 10da3359 mov esp, ebp */
  ESP = (EBP);
  /* 10da335b pop ebp */
  EBP = (pop32());
  /* 10da335c ret  */
  ESPCHK(0x10da3270u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x10da3370 (193 bytes, 87 insns) */
void f_10da3370(void) {
  FTRACE(0x10da3370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10da3370 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da3372 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10da3376 push ebx */
  push32((uint32_t)(EBX));
  /* 10da3377 mov ebx, eax */
  EBX = (EAX);
  /* 10da3379 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10da337c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10da3380 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10da3386 je 0x10da339b */
  if (C.zf) goto L_10da339b;
L_10da3388:;
  /* 10da3388 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 10da338a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10da338b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10da338d je 0x10da3360 */
  if (C.zf) { jmp_ind(0x10da3360u); return; }
  /* 10da338f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10da3391 je 0x10da33e4 */
  if (C.zf) goto L_10da33e4;
  /* 10da3393 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10da3399 jne 0x10da3388 */
  if (!C.zf) goto L_10da3388;
L_10da339b:;
  /* 10da339b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 10da339d push edi */
  push32((uint32_t)(EDI));
  /* 10da339e mov eax, ebx */
  EAX = (EBX);
  /* 10da33a0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 10da33a3 push esi */
  push32((uint32_t)(ESI));
  /* 10da33a4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_10da33a6:;
  /* 10da33a6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10da33a8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 10da33ad mov eax, ecx */
  EAX = (ECX);
  /* 10da33af mov esi, edi */
  ESI = (EDI);
  /* 10da33b1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 10da33b3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10da33b5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10da33b7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10da33ba xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10da33bd xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10da33bf xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10da33c1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10da33c4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 10da33ca jne 0x10da33e8 */
  if (!C.zf) goto L_10da33e8;
  /* 10da33cc and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10da33d1 je 0x10da33a6 */
  if (C.zf) goto L_10da33a6;
  /* 10da33d3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10da33d8 jne 0x10da33e2 */
  if (!C.zf) goto L_10da33e2;
  /* 10da33da and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 10da33e0 jne 0x10da33a6 */
  if (!C.zf) goto L_10da33a6;
L_10da33e2:;
  /* 10da33e2 pop esi */
  ESI = (pop32());
  /* 10da33e3 pop edi */
  EDI = (pop32());
L_10da33e4:;
  /* 10da33e4 pop ebx */
  EBX = (pop32());
  /* 10da33e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10da33e7 ret  */
  ESPCHK(0x10da3370u, _esp0);
  ESP += 4; return;
L_10da33e8:;
  /* 10da33e8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10da33eb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10da33ed je 0x10da3425 */
  if (C.zf) goto L_10da3425;
  /* 10da33ef test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10da33f1 je 0x10da33e2 */
  if (C.zf) goto L_10da33e2;
  /* 10da33f3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10da33f5 je 0x10da341e */
  if (C.zf) goto L_10da341e;
  /* 10da33f7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10da33f9 je 0x10da33e2 */
  if (C.zf) goto L_10da33e2;
  /* 10da33fb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10da33fe cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10da3400 je 0x10da3417 */
  if (C.zf) goto L_10da3417;
  /* 10da3402 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10da3404 je 0x10da33e2 */
  if (C.zf) goto L_10da33e2;
  /* 10da3406 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10da3408 je 0x10da3410 */
  if (C.zf) goto L_10da3410;
  /* 10da340a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10da340c je 0x10da33e2 */
  if (C.zf) goto L_10da33e2;
  /* 10da340e jmp 0x10da33a6 */
  goto L_10da33a6;
L_10da3410:;
  /* 10da3410 pop esi */
  ESI = (pop32());
  /* 10da3411 pop edi */
  EDI = (pop32());
  /* 10da3412 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 10da3415 pop ebx */
  EBX = (pop32());
  /* 10da3416 ret  */
  ESPCHK(0x10da3370u, _esp0);
  ESP += 4; return;
L_10da3417:;
  /* 10da3417 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 10da341a pop esi */
  ESI = (pop32());
  /* 10da341b pop edi */
  EDI = (pop32());
  /* 10da341c pop ebx */
  EBX = (pop32());
  /* 10da341d ret  */
  ESPCHK(0x10da3370u, _esp0);
  ESP += 4; return;
L_10da341e:;
  /* 10da341e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 10da3421 pop esi */
  ESI = (pop32());
  /* 10da3422 pop edi */
  EDI = (pop32());
  /* 10da3423 pop ebx */
  EBX = (pop32());
  /* 10da3424 ret  */
  ESPCHK(0x10da3370u, _esp0);
  ESP += 4; return;
L_10da3425:;
  /* 10da3425 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 10da3428 pop esi */
  ESI = (pop32());
  /* 10da3429 pop edi */
  EDI = (pop32());
  /* 10da342a pop ebx */
  EBX = (pop32());
  /* 10da342b ret  */
  ESPCHK(0x10da3370u, _esp0);
  ESP += 4; return;
  /* 10da342c jmp dword ptr [0x10dc0280] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10dc0280)))); return;
}

/* RtlUnwind @ 0x10da357c (6 bytes, 1 insns) */
void f_10da357c(void) {
  FTRACE(0x10da357cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10da357c jmp dword ptr [0x10dc027c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10dc027c)))); return;
}

