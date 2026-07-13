#include "recomp.h"

/* FUN_1000ff40 @ 0x10e9ff40 (878 bytes, 273 insns) */
void f_10e9ff40(void) {
  FTRACE(0x10e9ff40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9ff40 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9ff41 mov ebp, esp */
  EBP = (ESP);
  /* 10e9ff43 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9ff46 push esi */
  push32((uint32_t)(ESI));
  /* 10e9ff47 mov eax, dword ptr [0x10ebdca8] */
  EAX = (r32((uint32_t)(0x10ebdca8)));
  /* 10e9ff4c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e9ff4f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10e9ff56 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10e9ff5d jmp 0x10e9ff68 */
  goto L_10e9ff68;
L_10e9ff5f:;
  /* 10e9ff5f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e9ff62 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9ff65 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10e9ff68:;
  /* 10e9ff68 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9ff6c jae 0x10e9ffa1 */
  if (!C.cf) goto L_10e9ffa1;
  /* 10e9ff6e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e9ff71 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9ff74 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10e9ff77 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9ff78 call 0x10e95dc0 */
  push32(0x10e9ff7du); f_10e95dc0();
  /* 10e9ff7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9ff80 mov esi, eax */
  ESI = (EAX);
  /* 10e9ff82 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e9ff85 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9ff88 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 10e9ff8c push ecx */
  push32((uint32_t)(ECX));
  /* 10e9ff8d call 0x10e95dc0 */
  push32(0x10e9ff92u); f_10e95dc0();
  /* 10e9ff92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9ff95 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9ff98 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10e9ff9c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10e9ff9f jmp 0x10e9ff5f */
  goto L_10e9ff5f;
L_10e9ffa1:;
  /* 10e9ffa1 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10e9ffa8 jmp 0x10e9ffb3 */
  goto L_10e9ffb3;
L_10e9ffaa:;
  /* 10e9ffaa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e9ffad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9ffb0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10e9ffb3:;
  /* 10e9ffb3 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9ffb7 jae 0x10e9ffed */
  if (!C.cf) goto L_10e9ffed;
  /* 10e9ffb9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e9ffbc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9ffbf mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10e9ffc3 push eax */
  push32((uint32_t)(EAX));
  /* 10e9ffc4 call 0x10e95dc0 */
  push32(0x10e9ffc9u); f_10e95dc0();
  /* 10e9ffc9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9ffcc mov esi, eax */
  ESI = (EAX);
  /* 10e9ffce mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e9ffd1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9ffd4 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10e9ffd8 push eax */
  push32((uint32_t)(EAX));
  /* 10e9ffd9 call 0x10e95dc0 */
  push32(0x10e9ffdeu); f_10e95dc0();
  /* 10e9ffde add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9ffe1 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9ffe4 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10e9ffe8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e9ffeb jmp 0x10e9ffaa */
  goto L_10e9ffaa;
L_10e9ffed:;
  /* 10e9ffed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9fff0 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10e9fff6 push eax */
  push32((uint32_t)(EAX));
  /* 10e9fff7 call 0x10e95dc0 */
  push32(0x10e9fffcu); f_10e95dc0();
  /* 10e9fffc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9ffff mov esi, eax */
  ESI = (EAX);
  /* 10ea0001 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea0004 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 10ea000a push edx */
  push32((uint32_t)(EDX));
  /* 10ea000b call 0x10e95dc0 */
  push32(0x10ea0010u); f_10e95dc0();
  /* 10ea0010 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea0013 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea0016 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10ea001a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ea001d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea0020 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10ea0026 push edx */
  push32((uint32_t)(EDX));
  /* 10ea0027 call 0x10e95dc0 */
  push32(0x10ea002cu); f_10e95dc0();
  /* 10ea002c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea002f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ea0032 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10ea0036 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10ea0039 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea003c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 10ea0042 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea0043 call 0x10e95dc0 */
  push32(0x10ea0048u); f_10e95dc0();
  /* 10ea0048 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea004b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ea004e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10ea0052 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ea0055 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea0058 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 10ea005e push edx */
  push32((uint32_t)(EDX));
  /* 10ea005f call 0x10e95dc0 */
  push32(0x10ea0064u); f_10e95dc0();
  /* 10ea0064 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea0067 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ea006a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10ea006e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10ea0071 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ea0074 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea0079 push eax */
  push32((uint32_t)(EAX));
  /* 10ea007a call 0x10e92f70 */
  push32(0x10ea007fu); f_10e92f70();
  /* 10ea007f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea0082 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ea0085 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea0089 je 0x10ea02a6 */
  if (C.zf) goto L_10ea02a6;
  /* 10ea008f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea0092 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10ea0095 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea0098 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea009e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10ea00a1 push 0xac */
  push32((uint32_t)(0xacu));
  /* 10ea00a6 mov eax, dword ptr [0x10ebdca8] */
  EAX = (r32((uint32_t)(0x10ebdca8)));
  /* 10ea00ab push eax */
  push32((uint32_t)(EAX));
  /* 10ea00ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea00af push ecx */
  push32((uint32_t)(ECX));
  /* 10ea00b0 call 0x10e99870 */
  push32(0x10ea00b5u); f_10e99870();
  /* 10ea00b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea00b8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10ea00bf jmp 0x10ea00ca */
  goto L_10ea00ca;
L_10ea00c1:;
  /* 10ea00c1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ea00c4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea00c7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10ea00ca:;
  /* 10ea00ca cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea00ce jae 0x10ea013e */
  if (!C.cf) goto L_10ea013e;
  /* 10ea00d0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ea00d3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ea00d6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ea00d9 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10ea00dc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ea00df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea00e2 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10ea00e5 push edx */
  push32((uint32_t)(EDX));
  /* 10ea00e6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ea00e9 push eax */
  push32((uint32_t)(EAX));
  /* 10ea00ea call 0x10e95f40 */
  push32(0x10ea00efu); f_10e95f40();
  /* 10ea00ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea00f2 push eax */
  push32((uint32_t)(EAX));
  /* 10ea00f3 call 0x10e95dc0 */
  push32(0x10ea00f8u); f_10e95dc0();
  /* 10ea00f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea00fb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ea00fe lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10ea0102 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10ea0105 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ea0108 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ea010b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ea010e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 10ea0112 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ea0115 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea0118 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 10ea011c push edx */
  push32((uint32_t)(EDX));
  /* 10ea011d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ea0120 push eax */
  push32((uint32_t)(EAX));
  /* 10ea0121 call 0x10e95f40 */
  push32(0x10ea0126u); f_10e95f40();
  /* 10ea0126 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea0129 push eax */
  push32((uint32_t)(EAX));
  /* 10ea012a call 0x10e95dc0 */
  push32(0x10ea012fu); f_10e95dc0();
  /* 10ea012f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea0132 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ea0135 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10ea0139 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10ea013c jmp 0x10ea00c1 */
  goto L_10ea00c1;
L_10ea013e:;
  /* 10ea013e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10ea0145 jmp 0x10ea0150 */
  goto L_10ea0150;
L_10ea0147:;
  /* 10ea0147 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ea014a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea014d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10ea0150:;
  /* 10ea0150 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea0154 jae 0x10ea01c6 */
  if (!C.cf) goto L_10ea01c6;
  /* 10ea0156 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ea0159 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ea015c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ea015f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 10ea0163 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ea0166 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea0169 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10ea016d push eax */
  push32((uint32_t)(EAX));
  /* 10ea016e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ea0171 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea0172 call 0x10e95f40 */
  push32(0x10ea0177u); f_10e95f40();
  /* 10ea0177 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea017a push eax */
  push32((uint32_t)(EAX));
  /* 10ea017b call 0x10e95dc0 */
  push32(0x10ea0180u); f_10e95dc0();
  /* 10ea0180 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea0183 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ea0186 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10ea018a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10ea018d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ea0190 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ea0193 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ea0196 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 10ea019a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ea019d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea01a0 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10ea01a4 push eax */
  push32((uint32_t)(EAX));
  /* 10ea01a5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ea01a8 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea01a9 call 0x10e95f40 */
  push32(0x10ea01aeu); f_10e95f40();
  /* 10ea01ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea01b1 push eax */
  push32((uint32_t)(EAX));
  /* 10ea01b2 call 0x10e95dc0 */
  push32(0x10ea01b7u); f_10e95dc0();
  /* 10ea01b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea01ba mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ea01bd lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10ea01c1 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10ea01c4 jmp 0x10ea0147 */
  goto L_10ea0147;
L_10ea01c6:;
  /* 10ea01c6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ea01c9 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ea01cc mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 10ea01d2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea01d5 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 10ea01db push ecx */
  push32((uint32_t)(ECX));
  /* 10ea01dc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ea01df push edx */
  push32((uint32_t)(EDX));
  /* 10ea01e0 call 0x10e95f40 */
  push32(0x10ea01e5u); f_10e95f40();
  /* 10ea01e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea01e8 push eax */
  push32((uint32_t)(EAX));
  /* 10ea01e9 call 0x10e95dc0 */
  push32(0x10ea01eeu); f_10e95dc0();
  /* 10ea01ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea01f1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ea01f4 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10ea01f8 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10ea01fb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ea01fe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ea0201 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 10ea0207 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea020a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10ea0210 push eax */
  push32((uint32_t)(EAX));
  /* 10ea0211 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ea0214 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea0215 call 0x10e95f40 */
  push32(0x10ea021au); f_10e95f40();
  /* 10ea021a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea021d push eax */
  push32((uint32_t)(EAX));
  /* 10ea021e call 0x10e95dc0 */
  push32(0x10ea0223u); f_10e95dc0();
  /* 10ea0223 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea0226 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ea0229 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10ea022d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10ea0230 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ea0233 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ea0236 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 10ea023c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea023f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 10ea0245 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea0246 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ea0249 push edx */
  push32((uint32_t)(EDX));
  /* 10ea024a call 0x10e95f40 */
  push32(0x10ea024fu); f_10e95f40();
  /* 10ea024f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea0252 push eax */
  push32((uint32_t)(EAX));
  /* 10ea0253 call 0x10e95dc0 */
  push32(0x10ea0258u); f_10e95dc0();
  /* 10ea0258 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea025b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ea025e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10ea0262 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10ea0265 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ea0268 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ea026b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 10ea0271 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea0274 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 10ea027a push eax */
  push32((uint32_t)(EAX));
  /* 10ea027b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ea027e push ecx */
  push32((uint32_t)(ECX));
  /* 10ea027f call 0x10e95f40 */
  push32(0x10ea0284u); f_10e95f40();
  /* 10ea0284 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea0287 push eax */
  push32((uint32_t)(EAX));
  /* 10ea0288 call 0x10e95dc0 */
  push32(0x10ea028du); f_10e95dc0();
  /* 10ea028d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea0290 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ea0293 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10ea0297 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10ea029a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ea029d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ea02a0 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_10ea02a6:;
  /* 10ea02a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea02a9 pop esi */
  ESI = (pop32());
  /* 10ea02aa mov esp, ebp */
  ESP = (EBP);
  /* 10ea02ac pop ebp */
  EBP = (pop32());
  /* 10ea02ad ret  */
  ESPCHK(0x10e9ff40u, _esp0);
  ESP += 4; return;
}

/* FUN_100102b0 @ 0x10ea02b0 (31 bytes, 15 insns) */
void f_10ea02b0(void) {
  FTRACE(0x10ea02b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ea02b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ea02b1 mov ebp, esp */
  EBP = (ESP);
  /* 10ea02b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea02b5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea02b8 push eax */
  push32((uint32_t)(EAX));
  /* 10ea02b9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea02bc push ecx */
  push32((uint32_t)(ECX));
  /* 10ea02bd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea02c0 push edx */
  push32((uint32_t)(EDX));
  /* 10ea02c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea02c4 push eax */
  push32((uint32_t)(EAX));
  /* 10ea02c5 call 0x10ea02d0 */
  push32(0x10ea02cau); f_10ea02d0();
  /* 10ea02ca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea02cd pop ebp */
  EBP = (pop32());
  /* 10ea02ce ret  */
  ESPCHK(0x10ea02b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100102d0 @ 0x10ea02d0 (393 bytes, 123 insns) */
void f_10ea02d0(void) {
  FTRACE(0x10ea02d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ea02d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ea02d1 mov ebp, esp */
  EBP = (ESP);
  /* 10ea02d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea02d6 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea02da jne 0x10ea02e6 */
  if (!C.zf) goto L_10ea02e6;
  /* 10ea02dc mov eax, dword ptr [0x10ebdca8] */
  EAX = (r32((uint32_t)(0x10ebdca8)));
  /* 10ea02e1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10ea02e4 jmp 0x10ea02ec */
  goto L_10ea02ec;
L_10ea02e6:;
  /* 10ea02e6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ea02e9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10ea02ec:;
  /* 10ea02ec mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ea02ef mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ea02f2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea02f5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ea02f8 push 0x10ebe80c */
  push32((uint32_t)(0x10ebe80cu));
  /* 10ea02fd call dword ptr [0x10ec0304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0304))), 0x10ea0303u);
  /* 10ea0303 cmp dword ptr [0x10ebe7fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe7fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea030a je 0x10ea032a */
  if (C.zf) goto L_10ea032a;
  /* 10ea030c push 0x10ebe80c */
  push32((uint32_t)(0x10ebe80cu));
  /* 10ea0311 call dword ptr [0x10ec02f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02f4))), 0x10ea0317u);
  /* 10ea0317 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10ea0319 call 0x10e96990 */
  push32(0x10ea031eu); f_10e96990();
  /* 10ea031e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea0321 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10ea0328 jmp 0x10ea0331 */
  goto L_10ea0331;
L_10ea032a:;
  /* 10ea032a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10ea0331:;
  /* 10ea0331 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea0335 jbe 0x10ea0422 */
  if ((C.cf||C.zf)) goto L_10ea0422;
  /* 10ea033b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea033e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ea0340 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 10ea0343 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ea0347 je 0x10ea0351 */
  if (C.zf) goto L_10ea0351;
  /* 10ea0349 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ea034d je 0x10ea0356 */
  if (C.zf) goto L_10ea0356;
  /* 10ea034f jmp 0x10ea03b0 */
  goto L_10ea03b0;
L_10ea0351:;
  /* 10ea0351 jmp 0x10ea0422 */
  goto L_10ea0422;
L_10ea0356:;
  /* 10ea0356 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea0359 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea035c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10ea035f mov dword ptr [0x10ebe7e8], 0 */
  w32((uint32_t)(0x10ebe7e8), (0x0u));
  /* 10ea0369 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea036c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ea036f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea0372 jne 0x10ea0387 */
  if (!C.zf) goto L_10ea0387;
  /* 10ea0374 mov dword ptr [0x10ebe7e8], 1 */
  w32((uint32_t)(0x10ebe7e8), (0x1u));
  /* 10ea037e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea0381 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea0384 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10ea0387:;
  /* 10ea0387 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea038a push ecx */
  push32((uint32_t)(ECX));
  /* 10ea038b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10ea038e push edx */
  push32((uint32_t)(EDX));
  /* 10ea038f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10ea0392 push eax */
  push32((uint32_t)(EAX));
  /* 10ea0393 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea0396 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea0397 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea039a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ea039c push eax */
  push32((uint32_t)(EAX));
  /* 10ea039d call 0x10ea0460 */
  push32(0x10ea03a2u); f_10ea0460();
  /* 10ea03a2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea03a5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea03a8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea03ab mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10ea03ae jmp 0x10ea041d */
  goto L_10ea041d;
L_10ea03b0:;
  /* 10ea03b0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea03b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea03b5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ea03b7 mov ecx, dword ptr [0x10ebcca8] */
  ECX = (r32((uint32_t)(0x10ebcca8)));
  /* 10ea03bd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ea03bf mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10ea03c3 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10ea03c9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ea03cb je 0x10ea03f8 */
  if (C.zf) goto L_10ea03f8;
  /* 10ea03cd cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea03d1 jbe 0x10ea03f8 */
  if ((C.cf||C.zf)) goto L_10ea03f8;
  /* 10ea03d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea03d6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea03d9 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ea03db mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10ea03dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea03e0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea03e3 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ea03e6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea03e9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea03ec mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10ea03ef mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea03f2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea03f5 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10ea03f8:;
  /* 10ea03f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea03fb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea03fe mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ea0400 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10ea0402 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea0405 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea0408 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ea040b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea040e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea0411 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10ea0414 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea0417 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea041a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10ea041d:;
  /* 10ea041d jmp 0x10ea0331 */
  goto L_10ea0331;
L_10ea0422:;
  /* 10ea0422 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea0426 je 0x10ea0434 */
  if (C.zf) goto L_10ea0434;
  /* 10ea0428 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10ea042a call 0x10e96a30 */
  push32(0x10ea042fu); f_10e96a30();
  /* 10ea042f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea0432 jmp 0x10ea043f */
  goto L_10ea043f;
L_10ea0434:;
  /* 10ea0434 push 0x10ebe80c */
  push32((uint32_t)(0x10ebe80cu));
  /* 10ea0439 call dword ptr [0x10ec02f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02f4))), 0x10ea043fu);
L_10ea043f:;
  /* 10ea043f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea0443 jbe 0x10ea0453 */
  if ((C.cf||C.zf)) goto L_10ea0453;
  /* 10ea0445 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea0448 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10ea044b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea044e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea0451 jmp 0x10ea0455 */
  goto L_10ea0455;
L_10ea0453:;
  /* 10ea0453 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ea0455:;
  /* 10ea0455 mov esp, ebp */
  ESP = (EBP);
  /* 10ea0457 pop ebp */
  EBP = (pop32());
  /* 10ea0458 ret  */
  ESPCHK(0x10ea02d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010460 @ 0x10ea0460 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_10ea0460(void) {
  FTRACE(0x10ea0460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ea0460 push ebp */
  push32((uint32_t)(EBP));
  /* 10ea0461 mov ebp, esp */
  EBP = (ESP);
  /* 10ea0463 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea0466 push esi */
  push32((uint32_t)(ESI));
  /* 10ea0467 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 10ea046b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ea046e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea0471 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea0474 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ea0477 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea047b ja 0x10ea09c8 */
  if ((!C.cf&&!C.zf)) goto L_10ea09c8;
  /* 10ea0481 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea0484 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ea0486 mov dl, byte ptr [eax + 0x10ea0a29] */
  DL = (r8((uint32_t)(EAX + 0x10ea0a29)));
  /* 10ea048c jmp dword ptr [edx*4 + 0x10ea09cd] */
  switch (EDX) {
    case 0: goto L_10ea09a6;
    case 1: goto L_10ea04b5;
    case 2: goto L_10ea04fb;
    case 3: goto L_10ea0648;
    case 4: goto L_10ea0670;
    case 5: goto L_10ea070f;
    case 6: goto L_10ea077b;
    case 7: goto L_10ea07a4;
    case 8: goto L_10ea07e5;
    case 9: goto L_10ea08c7;
    case 10: goto L_10ea092e;
    case 11: goto L_10ea097b;
    case 12: goto L_10ea0493;
    case 13: goto L_10ea04d8;
    case 14: goto L_10ea051e;
    case 15: goto L_10ea061e;
    case 16: goto L_10ea06b5;
    case 17: goto L_10ea06e2;
    case 18: goto L_10ea0737;
    case 19: goto L_10ea07bb;
    case 20: goto L_10ea0869;
    case 21: goto L_10ea08f8;
    case 22: goto L_10ea09c8;
    default: x86_unimpl("switch@0x10ea048c out of table"); return;
  }
L_10ea0493:;
  /* 10ea0493 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea0496 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea0497 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea049a push edx */
  push32((uint32_t)(EDX));
  /* 10ea049b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea049e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10ea04a1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ea04a4 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10ea04a7 push eax */
  push32((uint32_t)(EAX));
  /* 10ea04a8 call 0x10ea0a80 */
  push32(0x10ea04adu); f_10ea0a80();
  /* 10ea04ad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea04b0 jmp 0x10ea09c8 */
  goto L_10ea09c8;
L_10ea04b5:;
  /* 10ea04b5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea04b8 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea04b9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea04bc push edx */
  push32((uint32_t)(EDX));
  /* 10ea04bd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea04c0 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10ea04c3 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ea04c6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 10ea04ca push eax */
  push32((uint32_t)(EAX));
  /* 10ea04cb call 0x10ea0a80 */
  push32(0x10ea04d0u); f_10ea0a80();
  /* 10ea04d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea04d3 jmp 0x10ea09c8 */
  goto L_10ea09c8;
L_10ea04d8:;
  /* 10ea04d8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea04db push ecx */
  push32((uint32_t)(ECX));
  /* 10ea04dc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea04df push edx */
  push32((uint32_t)(EDX));
  /* 10ea04e0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea04e3 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10ea04e6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ea04e9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10ea04ed push eax */
  push32((uint32_t)(EAX));
  /* 10ea04ee call 0x10ea0a80 */
  push32(0x10ea04f3u); f_10ea0a80();
  /* 10ea04f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea04f6 jmp 0x10ea09c8 */
  goto L_10ea09c8;
L_10ea04fb:;
  /* 10ea04fb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea04fe push ecx */
  push32((uint32_t)(ECX));
  /* 10ea04ff mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea0502 push edx */
  push32((uint32_t)(EDX));
  /* 10ea0503 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea0506 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10ea0509 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ea050c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10ea0510 push eax */
  push32((uint32_t)(EAX));
  /* 10ea0511 call 0x10ea0a80 */
  push32(0x10ea0516u); f_10ea0a80();
  /* 10ea0516 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea0519 jmp 0x10ea09c8 */
  goto L_10ea09c8;
L_10ea051e:;
  /* 10ea051e cmp dword ptr [0x10ebe7e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe7e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea0525 je 0x10ea05a6 */
  if (C.zf) goto L_10ea05a6;
  /* 10ea0527 mov dword ptr [0x10ebe7e8], 0 */
  w32((uint32_t)(0x10ebe7e8), (0x0u));
  /* 10ea0531 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ea0534 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea0535 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea0538 push edx */
  push32((uint32_t)(EDX));
  /* 10ea0539 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea053c push eax */
  push32((uint32_t)(EAX));
  /* 10ea053d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea0540 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea0541 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ea0544 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 10ea054a push eax */
  push32((uint32_t)(EAX));
  /* 10ea054b call 0x10ea0c30 */
  push32(0x10ea0550u); f_10ea0c30();
  /* 10ea0550 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea0553 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea0556 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea0559 jne 0x10ea0560 */
  if (!C.zf) goto L_10ea0560;
  /* 10ea055b jmp 0x10ea09c8 */
  goto L_10ea09c8;
L_10ea0560:;
  /* 10ea0560 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea0563 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ea0565 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 10ea0568 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea056b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ea056d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea0570 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea0573 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10ea0575 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea0578 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ea057a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea057d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea0580 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10ea0582 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ea0585 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea0586 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea0589 push edx */
  push32((uint32_t)(EDX));
  /* 10ea058a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea058d push eax */
  push32((uint32_t)(EAX));
  /* 10ea058e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea0591 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea0592 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ea0595 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10ea059b push eax */
  push32((uint32_t)(EAX));
  /* 10ea059c call 0x10ea0c30 */
  push32(0x10ea05a1u); f_10ea0c30();
  /* 10ea05a1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea05a4 jmp 0x10ea0619 */
  goto L_10ea0619;
L_10ea05a6:;
  /* 10ea05a6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ea05a9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea05aa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea05ad push edx */
  push32((uint32_t)(EDX));
  /* 10ea05ae mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea05b1 push eax */
  push32((uint32_t)(EAX));
  /* 10ea05b2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea05b5 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea05b6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ea05b9 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 10ea05bf push eax */
  push32((uint32_t)(EAX));
  /* 10ea05c0 call 0x10ea0c30 */
  push32(0x10ea05c5u); f_10ea0c30();
  /* 10ea05c5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea05c8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea05cb cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea05ce jne 0x10ea05d5 */
  if (!C.zf) goto L_10ea05d5;
  /* 10ea05d0 jmp 0x10ea09c8 */
  goto L_10ea09c8;
L_10ea05d5:;
  /* 10ea05d5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea05d8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ea05da mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 10ea05dd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea05e0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ea05e2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea05e5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea05e8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10ea05ea mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea05ed mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ea05ef sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea05f2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea05f5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10ea05f7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ea05fa push ecx */
  push32((uint32_t)(ECX));
  /* 10ea05fb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea05fe push edx */
  push32((uint32_t)(EDX));
  /* 10ea05ff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea0602 push eax */
  push32((uint32_t)(EAX));
  /* 10ea0603 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea0606 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea0607 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ea060a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10ea0610 push eax */
  push32((uint32_t)(EAX));
  /* 10ea0611 call 0x10ea0c30 */
  push32(0x10ea0616u); f_10ea0c30();
  /* 10ea0616 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ea0619:;
  /* 10ea0619 jmp 0x10ea09c8 */
  goto L_10ea09c8;
L_10ea061e:;
  /* 10ea061e mov ecx, dword ptr [0x10ebe7e8] */
  ECX = (r32((uint32_t)(0x10ebe7e8)));
  /* 10ea0624 mov dword ptr [0x10ebe7f8], ecx */
  w32((uint32_t)(0x10ebe7f8), (ECX));
  /* 10ea062a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea062d push edx */
  push32((uint32_t)(EDX));
  /* 10ea062e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea0631 push eax */
  push32((uint32_t)(EAX));
  /* 10ea0632 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ea0634 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea0637 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10ea063a push edx */
  push32((uint32_t)(EDX));
  /* 10ea063b call 0x10ea0ad0 */
  push32(0x10ea0640u); f_10ea0ad0();
  /* 10ea0640 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea0643 jmp 0x10ea09c8 */
  goto L_10ea09c8;
L_10ea0648:;
  /* 10ea0648 mov eax, dword ptr [0x10ebe7e8] */
  EAX = (r32((uint32_t)(0x10ebe7e8)));
  /* 10ea064d mov dword ptr [0x10ebe7f8], eax */
  w32((uint32_t)(0x10ebe7f8), (EAX));
  /* 10ea0652 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea0655 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea0656 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea0659 push edx */
  push32((uint32_t)(EDX));
  /* 10ea065a push 2 */
  push32((uint32_t)(0x2u));
  /* 10ea065c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea065f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10ea0662 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea0663 call 0x10ea0ad0 */
  push32(0x10ea0668u); f_10ea0ad0();
  /* 10ea0668 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea066b jmp 0x10ea09c8 */
  goto L_10ea09c8;
L_10ea0670:;
  /* 10ea0670 mov edx, dword ptr [0x10ebe7e8] */
  EDX = (r32((uint32_t)(0x10ebe7e8)));
  /* 10ea0676 mov dword ptr [0x10ebe7f8], edx */
  w32((uint32_t)(0x10ebe7f8), (EDX));
  /* 10ea067c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea067f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 10ea0682 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ea0683 mov ecx, 0xc */
  ECX = (0xcu);
  /* 10ea0688 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10ea068a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ea068d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea0691 jne 0x10ea069a */
  if (!C.zf) goto L_10ea069a;
  /* 10ea0693 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_10ea069a:;
  /* 10ea069a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea069d push edx */
  push32((uint32_t)(EDX));
  /* 10ea069e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea06a1 push eax */
  push32((uint32_t)(EAX));
  /* 10ea06a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ea06a4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea06a7 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea06a8 call 0x10ea0ad0 */
  push32(0x10ea06adu); f_10ea0ad0();
  /* 10ea06ad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea06b0 jmp 0x10ea09c8 */
  goto L_10ea09c8;
L_10ea06b5:;
  /* 10ea06b5 mov edx, dword ptr [0x10ebe7e8] */
  EDX = (r32((uint32_t)(0x10ebe7e8)));
  /* 10ea06bb mov dword ptr [0x10ebe7f8], edx */
  w32((uint32_t)(0x10ebe7f8), (EDX));
  /* 10ea06c1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea06c4 push eax */
  push32((uint32_t)(EAX));
  /* 10ea06c5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea06c8 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea06c9 push 3 */
  push32((uint32_t)(0x3u));
  /* 10ea06cb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea06ce mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10ea06d1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea06d4 push eax */
  push32((uint32_t)(EAX));
  /* 10ea06d5 call 0x10ea0ad0 */
  push32(0x10ea06dau); f_10ea0ad0();
  /* 10ea06da add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea06dd jmp 0x10ea09c8 */
  goto L_10ea09c8;
L_10ea06e2:;
  /* 10ea06e2 mov ecx, dword ptr [0x10ebe7e8] */
  ECX = (r32((uint32_t)(0x10ebe7e8)));
  /* 10ea06e8 mov dword ptr [0x10ebe7f8], ecx */
  w32((uint32_t)(0x10ebe7f8), (ECX));
  /* 10ea06ee mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea06f1 push edx */
  push32((uint32_t)(EDX));
  /* 10ea06f2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea06f5 push eax */
  push32((uint32_t)(EAX));
  /* 10ea06f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ea06f8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea06fb mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10ea06fe add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea0701 push edx */
  push32((uint32_t)(EDX));
  /* 10ea0702 call 0x10ea0ad0 */
  push32(0x10ea0707u); f_10ea0ad0();
  /* 10ea0707 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea070a jmp 0x10ea09c8 */
  goto L_10ea09c8;
L_10ea070f:;
  /* 10ea070f mov eax, dword ptr [0x10ebe7e8] */
  EAX = (r32((uint32_t)(0x10ebe7e8)));
  /* 10ea0714 mov dword ptr [0x10ebe7f8], eax */
  w32((uint32_t)(0x10ebe7f8), (EAX));
  /* 10ea0719 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea071c push ecx */
  push32((uint32_t)(ECX));
  /* 10ea071d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea0720 push edx */
  push32((uint32_t)(EDX));
  /* 10ea0721 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ea0723 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea0726 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ea0729 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea072a call 0x10ea0ad0 */
  push32(0x10ea072fu); f_10ea0ad0();
  /* 10ea072f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea0732 jmp 0x10ea09c8 */
  goto L_10ea09c8;
L_10ea0737:;
  /* 10ea0737 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea073a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea073e jg 0x10ea075c */
  if ((!C.zf&&C.sf==C.of)) goto L_10ea075c;
  /* 10ea0740 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea0743 push eax */
  push32((uint32_t)(EAX));
  /* 10ea0744 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea0747 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea0748 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ea074b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10ea0751 push eax */
  push32((uint32_t)(EAX));
  /* 10ea0752 call 0x10ea0a80 */
  push32(0x10ea0757u); f_10ea0a80();
  /* 10ea0757 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea075a jmp 0x10ea0776 */
  goto L_10ea0776;
L_10ea075c:;
  /* 10ea075c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea075f push ecx */
  push32((uint32_t)(ECX));
  /* 10ea0760 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea0763 push edx */
  push32((uint32_t)(EDX));
  /* 10ea0764 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ea0767 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 10ea076d push ecx */
  push32((uint32_t)(ECX));
  /* 10ea076e call 0x10ea0a80 */
  push32(0x10ea0773u); f_10ea0a80();
  /* 10ea0773 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ea0776:;
  /* 10ea0776 jmp 0x10ea09c8 */
  goto L_10ea09c8;
L_10ea077b:;
  /* 10ea077b mov edx, dword ptr [0x10ebe7e8] */
  EDX = (r32((uint32_t)(0x10ebe7e8)));
  /* 10ea0781 mov dword ptr [0x10ebe7f8], edx */
  w32((uint32_t)(0x10ebe7f8), (EDX));
  /* 10ea0787 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea078a push eax */
  push32((uint32_t)(EAX));
  /* 10ea078b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea078e push ecx */
  push32((uint32_t)(ECX));
  /* 10ea078f push 2 */
  push32((uint32_t)(0x2u));
  /* 10ea0791 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea0794 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ea0796 push eax */
  push32((uint32_t)(EAX));
  /* 10ea0797 call 0x10ea0ad0 */
  push32(0x10ea079cu); f_10ea0ad0();
  /* 10ea079c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea079f jmp 0x10ea09c8 */
  goto L_10ea09c8;
L_10ea07a4:;
  /* 10ea07a4 mov ecx, dword ptr [0x10ebe7e8] */
  ECX = (r32((uint32_t)(0x10ebe7e8)));
  /* 10ea07aa mov dword ptr [0x10ebe7f8], ecx */
  w32((uint32_t)(0x10ebe7f8), (ECX));
  /* 10ea07b0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea07b3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10ea07b6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ea07b9 jmp 0x10ea080d */
  goto L_10ea080d;
L_10ea07bb:;
  /* 10ea07bb mov ecx, dword ptr [0x10ebe7e8] */
  ECX = (r32((uint32_t)(0x10ebe7e8)));
  /* 10ea07c1 mov dword ptr [0x10ebe7f8], ecx */
  w32((uint32_t)(0x10ebe7f8), (ECX));
  /* 10ea07c7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea07ca push edx */
  push32((uint32_t)(EDX));
  /* 10ea07cb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea07ce push eax */
  push32((uint32_t)(EAX));
  /* 10ea07cf push 1 */
  push32((uint32_t)(0x1u));
  /* 10ea07d1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea07d4 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10ea07d7 push edx */
  push32((uint32_t)(EDX));
  /* 10ea07d8 call 0x10ea0ad0 */
  push32(0x10ea07ddu); f_10ea0ad0();
  /* 10ea07dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea07e0 jmp 0x10ea09c8 */
  goto L_10ea09c8;
L_10ea07e5:;
  /* 10ea07e5 mov eax, dword ptr [0x10ebe7e8] */
  EAX = (r32((uint32_t)(0x10ebe7e8)));
  /* 10ea07ea mov dword ptr [0x10ebe7f8], eax */
  w32((uint32_t)(0x10ebe7f8), (EAX));
  /* 10ea07ef mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea07f2 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea07f6 jne 0x10ea0801 */
  if (!C.zf) goto L_10ea0801;
  /* 10ea07f8 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 10ea07ff jmp 0x10ea080d */
  goto L_10ea080d;
L_10ea0801:;
  /* 10ea0801 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea0804 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10ea0807 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea080a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10ea080d:;
  /* 10ea080d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea0810 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10ea0813 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea0816 jge 0x10ea0821 */
  if ((C.sf==C.of)) goto L_10ea0821;
  /* 10ea0818 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ea081f jmp 0x10ea084e */
  goto L_10ea084e;
L_10ea0821:;
  /* 10ea0821 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea0824 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10ea0827 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ea0828 mov ecx, 7 */
  ECX = (0x7u);
  /* 10ea082d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10ea082f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ea0832 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea0835 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10ea0838 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ea0839 mov ecx, 7 */
  ECX = (0x7u);
  /* 10ea083e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10ea0840 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea0843 jl 0x10ea084e */
  if ((C.sf!=C.of)) goto L_10ea084e;
  /* 10ea0845 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea0848 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea084b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10ea084e:;
  /* 10ea084e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea0851 push eax */
  push32((uint32_t)(EAX));
  /* 10ea0852 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea0855 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea0856 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ea0858 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea085b push edx */
  push32((uint32_t)(EDX));
  /* 10ea085c call 0x10ea0ad0 */
  push32(0x10ea0861u); f_10ea0ad0();
  /* 10ea0861 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea0864 jmp 0x10ea09c8 */
  goto L_10ea09c8;
L_10ea0869:;
  /* 10ea0869 cmp dword ptr [0x10ebe7e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe7e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea0870 je 0x10ea08a0 */
  if (C.zf) goto L_10ea08a0;
  /* 10ea0872 mov dword ptr [0x10ebe7e8], 0 */
  w32((uint32_t)(0x10ebe7e8), (0x0u));
  /* 10ea087c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ea087f push eax */
  push32((uint32_t)(EAX));
  /* 10ea0880 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea0883 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea0884 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea0887 push edx */
  push32((uint32_t)(EDX));
  /* 10ea0888 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea088b push eax */
  push32((uint32_t)(EAX));
  /* 10ea088c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ea088f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 10ea0895 push edx */
  push32((uint32_t)(EDX));
  /* 10ea0896 call 0x10ea0c30 */
  push32(0x10ea089bu); f_10ea0c30();
  /* 10ea089b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea089e jmp 0x10ea08c2 */
  goto L_10ea08c2;
L_10ea08a0:;
  /* 10ea08a0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ea08a3 push eax */
  push32((uint32_t)(EAX));
  /* 10ea08a4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea08a7 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea08a8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea08ab push edx */
  push32((uint32_t)(EDX));
  /* 10ea08ac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea08af push eax */
  push32((uint32_t)(EAX));
  /* 10ea08b0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ea08b3 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10ea08b9 push edx */
  push32((uint32_t)(EDX));
  /* 10ea08ba call 0x10ea0c30 */
  push32(0x10ea08bfu); f_10ea0c30();
  /* 10ea08bf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ea08c2:;
  /* 10ea08c2 jmp 0x10ea09c8 */
  goto L_10ea09c8;
L_10ea08c7:;
  /* 10ea08c7 mov dword ptr [0x10ebe7e8], 0 */
  w32((uint32_t)(0x10ebe7e8), (0x0u));
  /* 10ea08d1 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ea08d4 push eax */
  push32((uint32_t)(EAX));
  /* 10ea08d5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea08d8 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea08d9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea08dc push edx */
  push32((uint32_t)(EDX));
  /* 10ea08dd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea08e0 push eax */
  push32((uint32_t)(EAX));
  /* 10ea08e1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ea08e4 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 10ea08ea push edx */
  push32((uint32_t)(EDX));
  /* 10ea08eb call 0x10ea0c30 */
  push32(0x10ea08f0u); f_10ea0c30();
  /* 10ea08f0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea08f3 jmp 0x10ea09c8 */
  goto L_10ea09c8;
L_10ea08f8:;
  /* 10ea08f8 mov eax, dword ptr [0x10ebe7e8] */
  EAX = (r32((uint32_t)(0x10ebe7e8)));
  /* 10ea08fd mov dword ptr [0x10ebe7f8], eax */
  w32((uint32_t)(0x10ebe7f8), (EAX));
  /* 10ea0902 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea0905 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10ea0908 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ea0909 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10ea090e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10ea0910 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ea0913 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea0916 push edx */
  push32((uint32_t)(EDX));
  /* 10ea0917 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea091a push eax */
  push32((uint32_t)(EAX));
  /* 10ea091b push 2 */
  push32((uint32_t)(0x2u));
  /* 10ea091d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea0920 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea0921 call 0x10ea0ad0 */
  push32(0x10ea0926u); f_10ea0ad0();
  /* 10ea0926 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea0929 jmp 0x10ea09c8 */
  goto L_10ea09c8;
L_10ea092e:;
  /* 10ea092e mov edx, dword ptr [0x10ebe7e8] */
  EDX = (r32((uint32_t)(0x10ebe7e8)));
  /* 10ea0934 mov dword ptr [0x10ebe7f8], edx */
  w32((uint32_t)(0x10ebe7f8), (EDX));
  /* 10ea093a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea093d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 10ea0940 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ea0941 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10ea0946 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10ea0948 mov ecx, eax */
  ECX = (EAX);
  /* 10ea094a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea094d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ea0950 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea0953 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10ea0956 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ea0957 mov esi, 0x64 */
  ESI = (0x64u);
  /* 10ea095c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10ea095e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea0960 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ea0963 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea0966 push eax */
  push32((uint32_t)(EAX));
  /* 10ea0967 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea096a push ecx */
  push32((uint32_t)(ECX));
  /* 10ea096b push 4 */
  push32((uint32_t)(0x4u));
  /* 10ea096d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea0970 push edx */
  push32((uint32_t)(EDX));
  /* 10ea0971 call 0x10ea0ad0 */
  push32(0x10ea0976u); f_10ea0ad0();
  /* 10ea0976 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea0979 jmp 0x10ea09c8 */
  goto L_10ea09c8;
L_10ea097b:;
  /* 10ea097b call 0x10ea1a90 */
  push32(0x10ea0980u); f_10ea1a90();
  /* 10ea0980 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea0983 push eax */
  push32((uint32_t)(EAX));
  /* 10ea0984 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea0987 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea0988 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea098b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea098d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea0991 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 10ea0994 mov ecx, dword ptr [eax*4 + 0x10ebde2c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10ebde2c)));
  /* 10ea099b push ecx */
  push32((uint32_t)(ECX));
  /* 10ea099c call 0x10ea0a80 */
  push32(0x10ea09a1u); f_10ea0a80();
  /* 10ea09a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea09a4 jmp 0x10ea09c8 */
  goto L_10ea09c8;
L_10ea09a6:;
  /* 10ea09a6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea09a9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ea09ab mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 10ea09ae mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea09b1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ea09b3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea09b6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea09b9 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10ea09bb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea09be mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ea09c0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea09c3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea09c6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10ea09c8:;
  /* 10ea09c8 pop esi */
  ESI = (pop32());
  /* 10ea09c9 mov esp, ebp */
  ESP = (EBP);
  /* 10ea09cb pop ebp */
  EBP = (pop32());
  /* 10ea09cc ret  */
  ESPCHK(0x10ea0460u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x10ea0a80 (72 bytes, 30 insns) */
void f_10ea0a80(void) {
  FTRACE(0x10ea0a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ea0a80 push ebp */
  push32((uint32_t)(EBP));
  /* 10ea0a81 mov ebp, esp */
  EBP = (ESP);
L_10ea0a83:;
  /* 10ea0a83 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea0a86 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea0a89 je 0x10ea0ac6 */
  if (C.zf) goto L_10ea0ac6;
  /* 10ea0a8b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea0a8e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ea0a91 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ea0a93 je 0x10ea0ac6 */
  if (C.zf) goto L_10ea0ac6;
  /* 10ea0a95 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea0a98 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ea0a9a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea0a9d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ea0a9f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10ea0aa1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea0aa4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ea0aa6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea0aa9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea0aac mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10ea0aae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea0ab1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea0ab4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10ea0ab7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea0aba mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ea0abc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea0abf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea0ac2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10ea0ac4 jmp 0x10ea0a83 */
  goto L_10ea0a83;
L_10ea0ac6:;
  /* 10ea0ac6 pop ebp */
  EBP = (pop32());
  /* 10ea0ac7 ret  */
  ESPCHK(0x10ea0a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ad0 @ 0x10ea0ad0 (173 bytes, 64 insns) */
void f_10ea0ad0(void) {
  FTRACE(0x10ea0ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ea0ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ea0ad1 mov ebp, esp */
  EBP = (ESP);
  /* 10ea0ad3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea0ad4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ea0adb cmp dword ptr [0x10ebe7f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe7f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea0ae2 je 0x10ea0afa */
  if (C.zf) goto L_10ea0afa;
  /* 10ea0ae4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea0ae7 push eax */
  push32((uint32_t)(EAX));
  /* 10ea0ae8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea0aeb push ecx */
  push32((uint32_t)(ECX));
  /* 10ea0aec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea0aef push edx */
  push32((uint32_t)(EDX));
  /* 10ea0af0 call 0x10ea0b80 */
  push32(0x10ea0af5u); f_10ea0b80();
  /* 10ea0af5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea0af8 jmp 0x10ea0b79 */
  goto L_10ea0b79;
L_10ea0afa:;
  /* 10ea0afa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea0afd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea0b00 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea0b02 jae 0x10ea0b70 */
  if (!C.cf) goto L_10ea0b70;
  /* 10ea0b04 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea0b07 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea0b0a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10ea0b0d jmp 0x10ea0b18 */
  goto L_10ea0b18;
L_10ea0b0f:;
  /* 10ea0b0f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea0b12 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea0b15 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10ea0b18:;
  /* 10ea0b18 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea0b1b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea0b1e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ea0b20 je 0x10ea0b54 */
  if (C.zf) goto L_10ea0b54;
  /* 10ea0b22 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea0b25 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ea0b26 mov ecx, 0xa */
  ECX = (0xau);
  /* 10ea0b2b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10ea0b2d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea0b30 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea0b33 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ea0b35 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea0b38 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 10ea0b3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea0b3e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ea0b3f mov ecx, 0xa */
  ECX = (0xau);
  /* 10ea0b44 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10ea0b46 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ea0b49 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea0b4c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea0b4f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ea0b52 jmp 0x10ea0b0f */
  goto L_10ea0b0f;
L_10ea0b54:;
  /* 10ea0b54 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea0b57 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ea0b59 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea0b5c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea0b5f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10ea0b61 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea0b64 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ea0b66 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea0b69 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea0b6c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10ea0b6e jmp 0x10ea0b79 */
  goto L_10ea0b79;
L_10ea0b70:;
  /* 10ea0b70 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea0b73 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10ea0b79:;
  /* 10ea0b79 mov esp, ebp */
  ESP = (EBP);
  /* 10ea0b7b pop ebp */
  EBP = (pop32());
  /* 10ea0b7c ret  */
  ESPCHK(0x10ea0ad0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x10ea0b80 (172 bytes, 65 insns) */
void f_10ea0b80(void) {
  FTRACE(0x10ea0b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ea0b80 push ebp */
  push32((uint32_t)(EBP));
  /* 10ea0b81 mov ebp, esp */
  EBP = (ESP);
  /* 10ea0b83 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea0b86 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea0b89 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ea0b8b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ea0b8e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea0b91 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea0b94 jbe 0x10ea0bdb */
  if ((C.cf||C.zf)) goto L_10ea0bdb;
L_10ea0b96:;
  /* 10ea0b96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea0b99 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ea0b9a mov ecx, 0xa */
  ECX = (0xau);
  /* 10ea0b9f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10ea0ba1 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea0ba4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea0ba7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10ea0ba9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea0bac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea0baf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ea0bb2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea0bb5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ea0bb7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea0bba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea0bbd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10ea0bbf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea0bc2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ea0bc3 mov ecx, 0xa */
  ECX = (0xau);
  /* 10ea0bc8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10ea0bca mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ea0bcd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea0bd1 jle 0x10ea0bdb */
  if ((C.zf||C.sf!=C.of)) goto L_10ea0bdb;
  /* 10ea0bd3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea0bd6 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea0bd9 ja 0x10ea0b96 */
  if ((!C.cf&&!C.zf)) goto L_10ea0b96;
L_10ea0bdb:;
  /* 10ea0bdb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea0bde mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ea0be0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ea0be3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea0be6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea0be9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10ea0beb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea0bee sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea0bf1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10ea0bf4:;
  /* 10ea0bf4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea0bf7 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ea0bf9 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 10ea0bfc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea0bff mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ea0c02 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ea0c04 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10ea0c06 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea0c09 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea0c0c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ea0c0f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ea0c12 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10ea0c15 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10ea0c17 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ea0c1a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea0c1d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ea0c20 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ea0c23 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea0c26 jb 0x10ea0bf4 */
  if (C.cf) goto L_10ea0bf4;
  /* 10ea0c28 mov esp, ebp */
  ESP = (EBP);
  /* 10ea0c2a pop ebp */
  EBP = (pop32());
  /* 10ea0c2b ret  */
  ESPCHK(0x10ea0b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10010c30 @ 0x10ea0c30 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_10ea0c30(void) {
  FTRACE(0x10ea0c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ea0c30 push ebp */
  push32((uint32_t)(EBP));
  /* 10ea0c31 mov ebp, esp */
  EBP = (ESP);
  /* 10ea0c33 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10ea0c36:;
  /* 10ea0c36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea0c39 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ea0c3c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ea0c3e je 0x10ea10ac */
  if (C.zf) goto L_10ea10ac;
  /* 10ea0c44 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea0c47 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea0c4a je 0x10ea10ac */
  if (C.zf) goto L_10ea10ac;
  /* 10ea0c50 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ea0c54 mov dword ptr [0x10ebe7f8], 0 */
  w32((uint32_t)(0x10ebe7f8), (0x0u));
  /* 10ea0c5e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10ea0c65 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea0c68 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ea0c6b jmp 0x10ea0c76 */
  goto L_10ea0c76;
L_10ea0c6d:;
  /* 10ea0c6d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea0c70 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea0c73 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10ea0c76:;
  /* 10ea0c76 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea0c79 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10ea0c7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea0c7f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ea0c82 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea0c85 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea0c88 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ea0c8b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea0c8d jne 0x10ea0c91 */
  if (!C.zf) goto L_10ea0c91;
  /* 10ea0c8f jmp 0x10ea0c6d */
  goto L_10ea0c6d;
L_10ea0c91:;
  /* 10ea0c91 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea0c94 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea0c97 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ea0c9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea0c9d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ea0ca0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10ea0ca3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ea0ca6 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea0ca9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10ea0cac cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea0cb0 ja 0x10ea1000 */
  if ((!C.cf&&!C.zf)) goto L_10ea1000;
  /* 10ea0cb6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ea0cb9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea0cbb mov al, byte ptr [ecx + 0x10ea10dc] */
  AL = (r8((uint32_t)(ECX + 0x10ea10dc)));
  /* 10ea0cc1 jmp dword ptr [eax*4 + 0x10ea10b0] */
  switch (EAX) {
    case 0: goto L_10ea0f1f;
    case 1: goto L_10ea0e03;
    case 2: goto L_10ea0d8e;
    case 3: goto L_10ea0cc8;
    case 4: goto L_10ea0d06;
    case 5: goto L_10ea0d67;
    case 6: goto L_10ea0db5;
    case 7: goto L_10ea0ddc;
    case 8: goto L_10ea0e4a;
    case 9: goto L_10ea0d44;
    case 10: goto L_10ea1000;
    default: x86_unimpl("switch@0x10ea0cc1 out of table"); return;
  }
L_10ea0cc8:;
  /* 10ea0cc8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea0ccb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10ea0cce mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ea0cd1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea0cd4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10ea0cd7 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea0cdb ja 0x10ea0d01 */
  if ((!C.cf&&!C.zf)) goto L_10ea0d01;
  /* 10ea0cdd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ea0ce0 jmp dword ptr [ecx*4 + 0x10ea112f] */
  switch (ECX) {
    case 0: goto L_10ea0ce7;
    case 1: goto L_10ea0cf1;
    case 2: goto L_10ea0cf7;
    case 3: goto L_10ea0cfd;
    case 4: goto L_10ea0d25;
    case 5: goto L_10ea0d2f;
    case 6: goto L_10ea0d35;
    case 7: goto L_10ea0d3b;
    default: x86_unimpl("switch@0x10ea0ce0 out of table"); return;
  }
L_10ea0ce7:;
  /* 10ea0ce7 mov dword ptr [0x10ebe7f8], 1 */
  w32((uint32_t)(0x10ebe7f8), (0x1u));
L_10ea0cf1:;
  /* 10ea0cf1 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 10ea0cf5 jmp 0x10ea0d01 */
  goto L_10ea0d01;
L_10ea0cf7:;
  /* 10ea0cf7 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 10ea0cfb jmp 0x10ea0d01 */
  goto L_10ea0d01;
L_10ea0cfd:;
  /* 10ea0cfd mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_10ea0d01:;
  /* 10ea0d01 jmp 0x10ea1000 */
  goto L_10ea1000;
L_10ea0d06:;
  /* 10ea0d06 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea0d09 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10ea0d0c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ea0d0f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea0d12 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10ea0d15 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea0d19 ja 0x10ea0d3f */
  if ((!C.cf&&!C.zf)) goto L_10ea0d3f;
  /* 10ea0d1b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ea0d1e jmp dword ptr [ecx*4 + 0x10ea113f] */
  switch (ECX) {
    case 0: goto L_10ea0d25;
    case 1: goto L_10ea0d2f;
    case 2: goto L_10ea0d35;
    case 3: goto L_10ea0d3b;
    default: x86_unimpl("switch@0x10ea0d1e out of table"); return;
  }
L_10ea0d25:;
  /* 10ea0d25 mov dword ptr [0x10ebe7f8], 1 */
  w32((uint32_t)(0x10ebe7f8), (0x1u));
L_10ea0d2f:;
  /* 10ea0d2f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 10ea0d33 jmp 0x10ea0d3f */
  goto L_10ea0d3f;
L_10ea0d35:;
  /* 10ea0d35 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 10ea0d39 jmp 0x10ea0d3f */
  goto L_10ea0d3f;
L_10ea0d3b:;
  /* 10ea0d3b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_10ea0d3f:;
  /* 10ea0d3f jmp 0x10ea1000 */
  goto L_10ea1000;
L_10ea0d44:;
  /* 10ea0d44 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea0d47 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10ea0d4a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea0d4e je 0x10ea0d58 */
  if (C.zf) goto L_10ea0d58;
  /* 10ea0d50 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea0d54 je 0x10ea0d5e */
  if (C.zf) goto L_10ea0d5e;
  /* 10ea0d56 jmp 0x10ea0d62 */
  goto L_10ea0d62;
L_10ea0d58:;
  /* 10ea0d58 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 10ea0d5c jmp 0x10ea0d62 */
  goto L_10ea0d62;
L_10ea0d5e:;
  /* 10ea0d5e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_10ea0d62:;
  /* 10ea0d62 jmp 0x10ea1000 */
  goto L_10ea1000;
L_10ea0d67:;
  /* 10ea0d67 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea0d6a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10ea0d6d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea0d71 je 0x10ea0d7b */
  if (C.zf) goto L_10ea0d7b;
  /* 10ea0d73 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea0d77 je 0x10ea0d85 */
  if (C.zf) goto L_10ea0d85;
  /* 10ea0d79 jmp 0x10ea0d89 */
  goto L_10ea0d89;
L_10ea0d7b:;
  /* 10ea0d7b mov dword ptr [0x10ebe7f8], 1 */
  w32((uint32_t)(0x10ebe7f8), (0x1u));
L_10ea0d85:;
  /* 10ea0d85 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_10ea0d89:;
  /* 10ea0d89 jmp 0x10ea1000 */
  goto L_10ea1000;
L_10ea0d8e:;
  /* 10ea0d8e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea0d91 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10ea0d94 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea0d98 je 0x10ea0da2 */
  if (C.zf) goto L_10ea0da2;
  /* 10ea0d9a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea0d9e je 0x10ea0dac */
  if (C.zf) goto L_10ea0dac;
  /* 10ea0da0 jmp 0x10ea0db0 */
  goto L_10ea0db0;
L_10ea0da2:;
  /* 10ea0da2 mov dword ptr [0x10ebe7f8], 1 */
  w32((uint32_t)(0x10ebe7f8), (0x1u));
L_10ea0dac:;
  /* 10ea0dac mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_10ea0db0:;
  /* 10ea0db0 jmp 0x10ea1000 */
  goto L_10ea1000;
L_10ea0db5:;
  /* 10ea0db5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea0db8 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 10ea0dbb cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea0dbf je 0x10ea0dc9 */
  if (C.zf) goto L_10ea0dc9;
  /* 10ea0dc1 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea0dc5 je 0x10ea0dd3 */
  if (C.zf) goto L_10ea0dd3;
  /* 10ea0dc7 jmp 0x10ea0dd7 */
  goto L_10ea0dd7;
L_10ea0dc9:;
  /* 10ea0dc9 mov dword ptr [0x10ebe7f8], 1 */
  w32((uint32_t)(0x10ebe7f8), (0x1u));
L_10ea0dd3:;
  /* 10ea0dd3 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_10ea0dd7:;
  /* 10ea0dd7 jmp 0x10ea1000 */
  goto L_10ea1000;
L_10ea0ddc:;
  /* 10ea0ddc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea0ddf mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10ea0de2 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea0de6 je 0x10ea0df0 */
  if (C.zf) goto L_10ea0df0;
  /* 10ea0de8 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea0dec je 0x10ea0dfa */
  if (C.zf) goto L_10ea0dfa;
  /* 10ea0dee jmp 0x10ea0dfe */
  goto L_10ea0dfe;
L_10ea0df0:;
  /* 10ea0df0 mov dword ptr [0x10ebe7f8], 1 */
  w32((uint32_t)(0x10ebe7f8), (0x1u));
L_10ea0dfa:;
  /* 10ea0dfa mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_10ea0dfe:;
  /* 10ea0dfe jmp 0x10ea1000 */
  goto L_10ea1000;
L_10ea0e03:;
  /* 10ea0e03 push 0x10eba834 */
  push32((uint32_t)(0x10eba834u));
  /* 10ea0e08 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea0e0b push ecx */
  push32((uint32_t)(ECX));
  /* 10ea0e0c call 0x10ea1660 */
  push32(0x10ea0e11u); f_10ea1660();
  /* 10ea0e11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea0e14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ea0e16 jne 0x10ea0e23 */
  if (!C.zf) goto L_10ea0e23;
  /* 10ea0e18 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea0e1b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea0e1e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ea0e21 jmp 0x10ea0e41 */
  goto L_10ea0e41;
L_10ea0e23:;
  /* 10ea0e23 push 0x10eba830 */
  push32((uint32_t)(0x10eba830u));
  /* 10ea0e28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea0e2b push eax */
  push32((uint32_t)(EAX));
  /* 10ea0e2c call 0x10ea1660 */
  push32(0x10ea0e31u); f_10ea1660();
  /* 10ea0e31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea0e34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ea0e36 jne 0x10ea0e41 */
  if (!C.zf) goto L_10ea0e41;
  /* 10ea0e38 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea0e3b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea0e3e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10ea0e41:;
  /* 10ea0e41 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 10ea0e45 jmp 0x10ea1000 */
  goto L_10ea1000;
L_10ea0e4a:;
  /* 10ea0e4a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea0e4d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea0e51 jg 0x10ea0e61 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ea0e61;
  /* 10ea0e53 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ea0e56 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 10ea0e5c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10ea0e5f jmp 0x10ea0e6d */
  goto L_10ea0e6d;
L_10ea0e61:;
  /* 10ea0e61 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ea0e64 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10ea0e6a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10ea0e6d:;
  /* 10ea0e6d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea0e71 jle 0x10ea0f14 */
  if ((C.zf||C.sf!=C.of)) goto L_10ea0f14;
  /* 10ea0e77 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea0e7a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea0e7d jbe 0x10ea0f14 */
  if ((C.cf||C.zf)) goto L_10ea0f14;
  /* 10ea0e83 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ea0e86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea0e88 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ea0e8a mov ecx, dword ptr [0x10ebcca8] */
  ECX = (r32((uint32_t)(0x10ebcca8)));
  /* 10ea0e90 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ea0e92 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10ea0e96 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10ea0e9c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ea0e9e je 0x10ea0ed7 */
  if (C.zf) goto L_10ea0ed7;
  /* 10ea0ea0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea0ea3 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea0ea6 jbe 0x10ea0ed7 */
  if ((C.cf||C.zf)) goto L_10ea0ed7;
  /* 10ea0ea8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea0eab mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ea0ead mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ea0eb0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ea0eb2 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10ea0eb4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea0eb7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ea0eb9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea0ebc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea0ebf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10ea0ec1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ea0ec4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea0ec7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10ea0eca mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea0ecd mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ea0ecf sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea0ed2 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea0ed5 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10ea0ed7:;
  /* 10ea0ed7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea0eda mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ea0edc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ea0edf mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ea0ee1 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10ea0ee3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea0ee6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ea0ee8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea0eeb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea0eee mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10ea0ef0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ea0ef3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea0ef6 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10ea0ef9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea0efc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ea0efe sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea0f01 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea0f04 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10ea0f06 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea0f09 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea0f0c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10ea0f0f jmp 0x10ea0e6d */
  goto L_10ea0e6d;
L_10ea0f14:;
  /* 10ea0f14 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea0f17 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ea0f1a jmp 0x10ea0c36 */
  goto L_10ea0c36;
L_10ea0f1f:;
  /* 10ea0f1f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea0f22 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10ea0f25 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ea0f27 je 0x10ea0ff2 */
  if (C.zf) goto L_10ea0ff2;
  /* 10ea0f2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea0f30 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea0f33 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10ea0f36:;
  /* 10ea0f36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea0f39 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ea0f3c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ea0f3e je 0x10ea0ff0 */
  if (C.zf) goto L_10ea0ff0;
  /* 10ea0f44 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea0f47 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea0f4a je 0x10ea0ff0 */
  if (C.zf) goto L_10ea0ff0;
  /* 10ea0f50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea0f53 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ea0f56 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea0f59 jne 0x10ea0f69 */
  if (!C.zf) goto L_10ea0f69;
  /* 10ea0f5b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea0f5e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea0f61 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10ea0f64 jmp 0x10ea0ff0 */
  goto L_10ea0ff0;
L_10ea0f69:;
  /* 10ea0f69 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea0f6c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ea0f6e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ea0f70 mov edx, dword ptr [0x10ebcca8] */
  EDX = (r32((uint32_t)(0x10ebcca8)));
  /* 10ea0f76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea0f78 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10ea0f7c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10ea0f81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ea0f83 je 0x10ea0fbc */
  if (C.zf) goto L_10ea0fbc;
  /* 10ea0f85 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea0f88 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea0f8b jbe 0x10ea0fbc */
  if ((C.cf||C.zf)) goto L_10ea0fbc;
  /* 10ea0f8d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea0f90 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ea0f92 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea0f95 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ea0f97 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10ea0f99 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea0f9c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ea0f9e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea0fa1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea0fa4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10ea0fa6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea0fa9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea0fac mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ea0faf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea0fb2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ea0fb4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea0fb7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea0fba mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10ea0fbc:;
  /* 10ea0fbc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea0fbf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ea0fc1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea0fc4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ea0fc6 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10ea0fc8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea0fcb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ea0fcd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea0fd0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea0fd3 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10ea0fd5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea0fd8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea0fdb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10ea0fde mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea0fe1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ea0fe3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea0fe6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea0fe9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10ea0feb jmp 0x10ea0f36 */
  goto L_10ea0f36;
L_10ea0ff0:;
  /* 10ea0ff0 jmp 0x10ea0ffb */
  goto L_10ea0ffb;
L_10ea0ff2:;
  /* 10ea0ff2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea0ff5 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea0ff8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10ea0ffb:;
  /* 10ea0ffb jmp 0x10ea0c36 */
  goto L_10ea0c36;
L_10ea1000:;
  /* 10ea1000 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10ea1004 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ea1006 je 0x10ea102c */
  if (C.zf) goto L_10ea102c;
  /* 10ea1008 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ea100b push edx */
  push32((uint32_t)(EDX));
  /* 10ea100c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea100f push eax */
  push32((uint32_t)(EAX));
  /* 10ea1010 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea1013 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea1014 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea1017 push edx */
  push32((uint32_t)(EDX));
  /* 10ea1018 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10ea101b push eax */
  push32((uint32_t)(EAX));
  /* 10ea101c call 0x10ea0460 */
  push32(0x10ea1021u); f_10ea0460();
  /* 10ea1021 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea1024 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea1027 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10ea102a jmp 0x10ea10a7 */
  goto L_10ea10a7;
L_10ea102c:;
  /* 10ea102c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea102f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea1031 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ea1033 mov ecx, dword ptr [0x10ebcca8] */
  ECX = (r32((uint32_t)(0x10ebcca8)));
  /* 10ea1039 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ea103b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10ea103f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10ea1045 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ea1047 je 0x10ea1078 */
  if (C.zf) goto L_10ea1078;
  /* 10ea1049 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea104c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ea104e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea1051 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ea1053 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10ea1055 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea1058 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ea105a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea105d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea1060 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10ea1062 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea1065 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea1068 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10ea106b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea106e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ea1070 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea1073 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea1076 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10ea1078:;
  /* 10ea1078 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea107b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ea107d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea1080 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ea1082 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10ea1084 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea1087 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ea1089 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea108c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea108f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10ea1091 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea1094 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea1097 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ea109a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea109d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ea109f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea10a2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea10a5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10ea10a7:;
  /* 10ea10a7 jmp 0x10ea0c36 */
  goto L_10ea0c36;
L_10ea10ac:;
  /* 10ea10ac mov esp, ebp */
  ESP = (EBP);
  /* 10ea10ae pop ebp */
  EBP = (pop32());
  /* 10ea10af ret  */
  ESPCHK(0x10ea0c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10011150 @ 0x10ea1150 (650 bytes, 178 insns) */
void f_10ea1150(void) {
  FTRACE(0x10ea1150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ea1150 push ebp */
  push32((uint32_t)(EBP));
  /* 10ea1151 mov ebp, esp */
  EBP = (ESP);
  /* 10ea1153 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea1159 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea115d jne 0x10ea12b9 */
  if (!C.zf) goto L_10ea12b9;
  /* 10ea1163 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea1166 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 10ea116c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 10ea1172 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ea1175 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ea117c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 10ea1186 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea1188 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10ea118e push edx */
  push32((uint32_t)(EDX));
  /* 10ea118f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea1192 push eax */
  push32((uint32_t)(EAX));
  /* 10ea1193 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea1196 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea1197 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea119a push edx */
  push32((uint32_t)(EDX));
  /* 10ea119b call 0x10ea2570 */
  push32(0x10ea11a0u); f_10ea2570();
  /* 10ea11a0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea11a3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ea11a6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea11aa jne 0x10ea123f */
  if (!C.zf) goto L_10ea123f;
  /* 10ea11b0 call dword ptr [0x10ec0330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0330))), 0x10ea11b6u);
  /* 10ea11b6 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea11b9 je 0x10ea11c0 */
  if (C.zf) goto L_10ea11c0;
  /* 10ea11bb jmp 0x10ea129d */
  goto L_10ea129d;
L_10ea11c0:;
  /* 10ea11c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea11c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea11c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea11c6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea11c9 push eax */
  push32((uint32_t)(EAX));
  /* 10ea11ca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea11cd push ecx */
  push32((uint32_t)(ECX));
  /* 10ea11ce call 0x10ea2570 */
  push32(0x10ea11d3u); f_10ea2570();
  /* 10ea11d3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea11d6 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 10ea11dc cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea11e3 jne 0x10ea11ea */
  if (!C.zf) goto L_10ea11ea;
  /* 10ea11e5 jmp 0x10ea129d */
  goto L_10ea129d;
L_10ea11ea:;
  /* 10ea11ea push 0x58 */
  push32((uint32_t)(0x58u));
  /* 10ea11ec push 0x10eba83c */
  push32((uint32_t)(0x10eba83cu));
  /* 10ea11f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ea11f3 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10ea11f9 push edx */
  push32((uint32_t)(EDX));
  /* 10ea11fa call 0x10e92f90 */
  push32(0x10ea11ffu); f_10e92f90();
  /* 10ea11ff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea1202 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ea1205 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea1209 jne 0x10ea1210 */
  if (!C.zf) goto L_10ea1210;
  /* 10ea120b jmp 0x10ea129d */
  goto L_10ea129d;
L_10ea1210:;
  /* 10ea1210 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10ea1217 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea1219 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 10ea121f push eax */
  push32((uint32_t)(EAX));
  /* 10ea1220 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea1223 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea1224 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea1227 push edx */
  push32((uint32_t)(EDX));
  /* 10ea1228 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea122b push eax */
  push32((uint32_t)(EAX));
  /* 10ea122c call 0x10ea2570 */
  push32(0x10ea1231u); f_10ea2570();
  /* 10ea1231 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea1234 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ea1237 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea123b jne 0x10ea123f */
  if (!C.zf) goto L_10ea123f;
  /* 10ea123d jmp 0x10ea129d */
  goto L_10ea129d;
L_10ea123f:;
  /* 10ea123f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10ea1241 push 0x10eba83c */
  push32((uint32_t)(0x10eba83cu));
  /* 10ea1246 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ea1248 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ea124b push ecx */
  push32((uint32_t)(ECX));
  /* 10ea124c call 0x10e92f90 */
  push32(0x10ea1251u); f_10e92f90();
  /* 10ea1251 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea1254 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 10ea125a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10ea125c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10ea1262 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea1265 jne 0x10ea1269 */
  if (!C.zf) goto L_10ea1269;
  /* 10ea1267 jmp 0x10ea129d */
  goto L_10ea129d;
L_10ea1269:;
  /* 10ea1269 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ea126c push ecx */
  push32((uint32_t)(ECX));
  /* 10ea126d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea1270 push edx */
  push32((uint32_t)(EDX));
  /* 10ea1271 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10ea1277 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ea1279 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea127a call 0x10e967b0 */
  push32(0x10ea127fu); f_10e967b0();
  /* 10ea127f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea1282 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea1286 je 0x10ea1296 */
  if (C.zf) goto L_10ea1296;
  /* 10ea1288 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ea128a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea128d push edx */
  push32((uint32_t)(EDX));
  /* 10ea128e call 0x10e93a20 */
  push32(0x10ea1293u); f_10e93a20();
  /* 10ea1293 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ea1296:;
  /* 10ea1296 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea1298 jmp 0x10ea13d6 */
  goto L_10ea13d6;
L_10ea129d:;
  /* 10ea129d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea12a1 je 0x10ea12b1 */
  if (C.zf) goto L_10ea12b1;
  /* 10ea12a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ea12a5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea12a8 push eax */
  push32((uint32_t)(EAX));
  /* 10ea12a9 call 0x10e93a20 */
  push32(0x10ea12aeu); f_10e93a20();
  /* 10ea12ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ea12b1:;
  /* 10ea12b1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ea12b4 jmp 0x10ea13d6 */
  goto L_10ea13d6;
L_10ea12b9:;
  /* 10ea12b9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea12bd jne 0x10ea13d3 */
  if (!C.zf) goto L_10ea13d3;
  /* 10ea12c3 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 10ea12cd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea12d0 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 10ea12d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea12d8 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10ea12de push edx */
  push32((uint32_t)(EDX));
  /* 10ea12df push 0x10ebe710 */
  push32((uint32_t)(0x10ebe710u));
  /* 10ea12e4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea12e7 push eax */
  push32((uint32_t)(EAX));
  /* 10ea12e8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea12eb push ecx */
  push32((uint32_t)(ECX));
  /* 10ea12ec call 0x10ea23d0 */
  push32(0x10ea12f1u); f_10ea23d0();
  /* 10ea12f1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea12f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ea12f6 jne 0x10ea1300 */
  if (!C.zf) goto L_10ea1300;
  /* 10ea12f8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ea12fb jmp 0x10ea13d6 */
  goto L_10ea13d6;
L_10ea1300:;
  /* 10ea1300 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10ea1306 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10ea1309 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 10ea1313 jmp 0x10ea1324 */
  goto L_10ea1324;
L_10ea1315:;
  /* 10ea1315 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10ea131b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea131e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_10ea1324:;
  /* 10ea1324 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea132b jge 0x10ea13cf */
  if ((C.sf==C.of)) goto L_10ea13cf;
  /* 10ea1331 cmp dword ptr [0x10ebceb4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10ebceb4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea1338 jle 0x10ea136b */
  if ((C.zf||C.sf!=C.of)) goto L_10ea136b;
  /* 10ea133a push 4 */
  push32((uint32_t)(0x4u));
  /* 10ea133c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10ea1342 mov dl, byte ptr [ecx*2 + 0x10ebe710] */
  DL = (r8((uint32_t)(ECX*2 + 0x10ebe710)));
  /* 10ea1349 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10ea134f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10ea1355 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ea135a push eax */
  push32((uint32_t)(EAX));
  /* 10ea135b call 0x10e98fa0 */
  push32(0x10ea1360u); f_10e98fa0();
  /* 10ea1360 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea1363 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 10ea1369 jmp 0x10ea139e */
  goto L_10ea139e;
L_10ea136b:;
  /* 10ea136b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10ea1371 mov dl, byte ptr [ecx*2 + 0x10ebe710] */
  DL = (r8((uint32_t)(ECX*2 + 0x10ebe710)));
  /* 10ea1378 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10ea137e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10ea1384 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ea1389 mov ecx, dword ptr [0x10ebcca8] */
  ECX = (r32((uint32_t)(0x10ebcca8)));
  /* 10ea138f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ea1391 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10ea1395 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10ea1398 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_10ea139e:;
  /* 10ea139e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea13a5 je 0x10ea13c8 */
  if (C.zf) goto L_10ea13c8;
  /* 10ea13a7 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10ea13ad movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ea13b0 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ea13b3 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 10ea13ba lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10ea13be mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10ea13c4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10ea13c6 jmp 0x10ea13ca */
  goto L_10ea13ca;
L_10ea13c8:;
  /* 10ea13c8 jmp 0x10ea13cf */
  goto L_10ea13cf;
L_10ea13ca:;
  /* 10ea13ca jmp 0x10ea1315 */
  goto L_10ea1315;
L_10ea13cf:;
  /* 10ea13cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea13d1 jmp 0x10ea13d6 */
  goto L_10ea13d6;
L_10ea13d3:;
  /* 10ea13d3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10ea13d6:;
  /* 10ea13d6 mov esp, ebp */
  ESP = (EBP);
  /* 10ea13d8 pop ebp */
  EBP = (pop32());
  /* 10ea13d9 ret  */
  ESPCHK(0x10ea1150u, _esp0);
  ESP += 4; return;
}

/* FUN_100113e0 @ 0x10ea13e0 (10 bytes, 5 insns) */
void f_10ea13e0(void) {
  FTRACE(0x10ea13e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ea13e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ea13e1 mov ebp, esp */
  EBP = (ESP);
  /* 10ea13e3 mov eax, dword ptr [0x10ebdd98] */
  EAX = (r32((uint32_t)(0x10ebdd98)));
  /* 10ea13e8 pop ebp */
  EBP = (pop32());
  /* 10ea13e9 ret  */
  ESPCHK(0x10ea13e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100113f0 @ 0x10ea13f0 (575 bytes, 196 insns) */
void f_10ea13f0(void) {
  FTRACE(0x10ea13f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ea13f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ea13f1 mov ebp, esp */
  EBP = (ESP);
  /* 10ea13f3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ea13f5 push 0x10eba848 */
  push32((uint32_t)(0x10eba848u));
  /* 10ea13fa push 0x10e9c098 */
  push32((uint32_t)(0x10e9c098u));
  /* 10ea13ff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10ea1405 push eax */
  push32((uint32_t)(EAX));
  /* 10ea1406 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10ea140d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea1410 push ebx */
  push32((uint32_t)(EBX));
  /* 10ea1411 push esi */
  push32((uint32_t)(ESI));
  /* 10ea1412 push edi */
  push32((uint32_t)(EDI));
  /* 10ea1413 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ea1416 cmp dword ptr [0x10ebe71c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe71c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea141d jne 0x10ea146e */
  if (!C.zf) goto L_10ea146e;
  /* 10ea141f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10ea1422 push eax */
  push32((uint32_t)(EAX));
  /* 10ea1423 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ea1425 push 0x10eb9f78 */
  push32((uint32_t)(0x10eb9f78u));
  /* 10ea142a push 1 */
  push32((uint32_t)(0x1u));
  /* 10ea142c call dword ptr [0x10ec02c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02c4))), 0x10ea1432u);
  /* 10ea1432 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ea1434 je 0x10ea1442 */
  if (C.zf) goto L_10ea1442;
  /* 10ea1436 mov dword ptr [0x10ebe71c], 1 */
  w32((uint32_t)(0x10ebe71c), (0x1u));
  /* 10ea1440 jmp 0x10ea146e */
  goto L_10ea146e;
L_10ea1442:;
  /* 10ea1442 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 10ea1445 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea1446 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ea1448 push 0x10eb9f74 */
  push32((uint32_t)(0x10eb9f74u));
  /* 10ea144d push 1 */
  push32((uint32_t)(0x1u));
  /* 10ea144f push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea1451 call dword ptr [0x10ec02c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02c8))), 0x10ea1457u);
  /* 10ea1457 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ea1459 je 0x10ea1467 */
  if (C.zf) goto L_10ea1467;
  /* 10ea145b mov dword ptr [0x10ebe71c], 2 */
  w32((uint32_t)(0x10ebe71c), (0x2u));
  /* 10ea1465 jmp 0x10ea146e */
  goto L_10ea146e;
L_10ea1467:;
  /* 10ea1467 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea1469 jmp 0x10ea1649 */
  goto L_10ea1649;
L_10ea146e:;
  /* 10ea146e cmp dword ptr [0x10ebe71c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe71c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea1475 jne 0x10ea1492 */
  if (!C.zf) goto L_10ea1492;
  /* 10ea1477 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea147a push edx */
  push32((uint32_t)(EDX));
  /* 10ea147b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea147e push eax */
  push32((uint32_t)(EAX));
  /* 10ea147f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea1482 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea1483 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea1486 push edx */
  push32((uint32_t)(EDX));
  /* 10ea1487 call dword ptr [0x10ec02c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02c4))), 0x10ea148du);
  /* 10ea148d jmp 0x10ea1649 */
  goto L_10ea1649;
L_10ea1492:;
  /* 10ea1492 cmp dword ptr [0x10ebe71c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe71c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea1499 jne 0x10ea1647 */
  if (!C.zf) goto L_10ea1647;
  /* 10ea149f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea14a3 jne 0x10ea14ad */
  if (!C.zf) goto L_10ea14ad;
  /* 10ea14a5 mov eax, dword ptr [0x10ebe690] */
  EAX = (r32((uint32_t)(0x10ebe690)));
  /* 10ea14aa mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_10ea14ad:;
  /* 10ea14ad push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea14af push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea14b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea14b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea14b5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea14b8 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea14b9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea14bc push edx */
  push32((uint32_t)(EDX));
  /* 10ea14bd push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10ea14c2 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ea14c5 push eax */
  push32((uint32_t)(EAX));
  /* 10ea14c6 call dword ptr [0x10ec035c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec035c))), 0x10ea14ccu);
  /* 10ea14cc mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10ea14cf cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea14d3 jne 0x10ea14dc */
  if (!C.zf) goto L_10ea14dc;
  /* 10ea14d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea14d7 jmp 0x10ea1649 */
  goto L_10ea1649;
L_10ea14dc:;
  /* 10ea14dc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ea14e3 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ea14e6 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea14e9 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10ea14eb call 0x10e96130 */
  push32(0x10ea14f0u); f_10e96130();
  /* 10ea14f0 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 10ea14f3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ea14f6 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ea14f9 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10ea14fc mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ea14ff push edx */
  push32((uint32_t)(EDX));
  /* 10ea1500 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea1502 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ea1505 push eax */
  push32((uint32_t)(EAX));
  /* 10ea1506 call 0x10e96d00 */
  push32(0x10ea150bu); f_10e96d00();
  /* 10ea150b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea150e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10ea1515 jmp 0x10ea152e */
  goto L_10ea152e;
  /* 10ea1517 mov eax, 1 */
  EAX = (0x1u);
  /* 10ea151c ret  */
  ESPCHK(0x10ea13f0u, _esp0);
  ESP += 4; return;
  /* 10ea151d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10ea1520 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10ea1527 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10ea152e:;
  /* 10ea152e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea1532 jne 0x10ea153b */
  if (!C.zf) goto L_10ea153b;
  /* 10ea1534 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea1536 jmp 0x10ea1649 */
  goto L_10ea1649;
L_10ea153b:;
  /* 10ea153b push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea153d push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea153f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ea1542 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea1543 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ea1546 push edx */
  push32((uint32_t)(EDX));
  /* 10ea1547 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea154a push eax */
  push32((uint32_t)(EAX));
  /* 10ea154b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea154e push ecx */
  push32((uint32_t)(ECX));
  /* 10ea154f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10ea1554 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ea1557 push edx */
  push32((uint32_t)(EDX));
  /* 10ea1558 call dword ptr [0x10ec035c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec035c))), 0x10ea155eu);
  /* 10ea155e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ea1560 jne 0x10ea1569 */
  if (!C.zf) goto L_10ea1569;
  /* 10ea1562 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea1564 jmp 0x10ea1649 */
  goto L_10ea1649;
L_10ea1569:;
  /* 10ea1569 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10ea1570 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ea1573 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 10ea1577 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea157a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10ea157c call 0x10e96130 */
  push32(0x10ea1581u); f_10e96130();
  /* 10ea1581 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 10ea1584 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ea1587 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10ea158a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10ea158d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10ea1594 jmp 0x10ea15ad */
  goto L_10ea15ad;
  /* 10ea1596 mov eax, 1 */
  EAX = (0x1u);
  /* 10ea159b ret  */
  ESPCHK(0x10ea13f0u, _esp0);
  ESP += 4; return;
  /* 10ea159c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10ea159f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10ea15a6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10ea15ad:;
  /* 10ea15ad cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea15b1 jne 0x10ea15ba */
  if (!C.zf) goto L_10ea15ba;
  /* 10ea15b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea15b5 jmp 0x10ea1649 */
  goto L_10ea1649;
L_10ea15ba:;
  /* 10ea15ba cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea15be jne 0x10ea15c9 */
  if (!C.zf) goto L_10ea15c9;
  /* 10ea15c0 mov edx, dword ptr [0x10ebe680] */
  EDX = (r32((uint32_t)(0x10ebe680)));
  /* 10ea15c6 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_10ea15c9:;
  /* 10ea15c9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea15cc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ea15cf mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 10ea15d5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea15d8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ea15db mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 10ea15e2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ea15e5 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea15e6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ea15e9 push edx */
  push32((uint32_t)(EDX));
  /* 10ea15ea mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ea15ed push eax */
  push32((uint32_t)(EAX));
  /* 10ea15ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea15f1 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea15f2 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ea15f5 push edx */
  push32((uint32_t)(EDX));
  /* 10ea15f6 call dword ptr [0x10ec02c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02c8))), 0x10ea15fcu);
  /* 10ea15fc mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10ea15ff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea1602 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ea1605 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ea1607 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 10ea160c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea1612 je 0x10ea1628 */
  if (C.zf) goto L_10ea1628;
  /* 10ea1614 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea1617 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ea161a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ea161c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10ea1620 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea1626 je 0x10ea162c */
  if (C.zf) goto L_10ea162c;
L_10ea1628:;
  /* 10ea1628 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea162a jmp 0x10ea1649 */
  goto L_10ea1649;
L_10ea162c:;
  /* 10ea162c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea162f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10ea1631 push eax */
  push32((uint32_t)(EAX));
  /* 10ea1632 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ea1635 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea1636 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea1639 push edx */
  push32((uint32_t)(EDX));
  /* 10ea163a call 0x10e9ae80 */
  push32(0x10ea163fu); f_10e9ae80();
  /* 10ea163f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea1642 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ea1645 jmp 0x10ea1649 */
  goto L_10ea1649;
L_10ea1647:;
  /* 10ea1647 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ea1649:;
  /* 10ea1649 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 10ea164c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ea164f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10ea1656 pop edi */
  EDI = (pop32());
  /* 10ea1657 pop esi */
  ESI = (pop32());
  /* 10ea1658 pop ebx */
  EBX = (pop32());
  /* 10ea1659 mov esp, ebp */
  ESP = (EBP);
  /* 10ea165b pop ebp */
  EBP = (pop32());
  /* 10ea165c ret  */
  ESPCHK(0x10ea13f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011660 @ 0x10ea1660 (208 bytes, 85 insns) */
void f_10ea1660(void) {
  FTRACE(0x10ea1660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ea1660 push ebp */
  push32((uint32_t)(EBP));
  /* 10ea1661 mov ebp, esp */
  EBP = (ESP);
  /* 10ea1663 push edi */
  push32((uint32_t)(EDI));
  /* 10ea1664 push esi */
  push32((uint32_t)(ESI));
  /* 10ea1665 push ebx */
  push32((uint32_t)(EBX));
  /* 10ea1666 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea1669 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea166c lea eax, [0x10ebe678] */
  EAX = ((uint32_t)(0x10ebe678));
  /* 10ea1672 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea1676 jne 0x10ea16b3 */
  if (!C.zf) goto L_10ea16b3;
  /* 10ea1678 mov al, 0xff */
  AL = (0xffu);
  /* 10ea167a mov edi, edi */
  EDI = (EDI);
L_10ea167c:;
  /* 10ea167c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10ea167e je 0x10ea16ae */
  if (C.zf) goto L_10ea16ae;
  /* 10ea1680 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10ea1682 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10ea1683 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 10ea1685 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10ea1686 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ea1688 je 0x10ea167c */
  if (C.zf) goto L_10ea167c;
  /* 10ea168a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10ea168c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ea168e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10ea1690 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10ea1693 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10ea1695 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10ea1697 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 10ea1699 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10ea169b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ea169d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10ea169f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10ea16a2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10ea16a4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10ea16a6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ea16a8 je 0x10ea167c */
  if (C.zf) goto L_10ea167c;
  /* 10ea16aa sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10ea16ac sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_10ea16ae:;
  /* 10ea16ae movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 10ea16b1 jmp 0x10ea172b */
  goto L_10ea172b;
L_10ea16b3:;
  /* 10ea16b3 lock inc dword ptr [0x10ebe80c] */
  x86_unimpl("lock inc @ 0x10ea16b3");
  /* 10ea16ba cmp dword ptr [0x10ebe7fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe7fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea16c1 jg 0x10ea16c7 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ea16c7;
  /* 10ea16c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea16c5 jmp 0x10ea16dc */
  goto L_10ea16dc;
L_10ea16c7:;
  /* 10ea16c7 lock dec dword ptr [0x10ebe80c] */
  x86_unimpl("lock dec @ 0x10ea16c7");
  /* 10ea16ce push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10ea16d0 call 0x10e96990 */
  push32(0x10ea16d5u); f_10e96990();
  /* 10ea16d5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_10ea16dc:;
  /* 10ea16dc mov eax, 0xff */
  EAX = (0xffu);
  /* 10ea16e1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10ea16e3 nop  */
  /* nop */
L_10ea16e4:;
  /* 10ea16e4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10ea16e6 je 0x10ea170f */
  if (C.zf) goto L_10ea170f;
  /* 10ea16e8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10ea16ea inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10ea16eb mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10ea16ed inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10ea16ee cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ea16f0 je 0x10ea16e4 */
  if (C.zf) goto L_10ea16e4;
  /* 10ea16f2 push eax */
  push32((uint32_t)(EAX));
  /* 10ea16f3 push ebx */
  push32((uint32_t)(EBX));
  /* 10ea16f4 call 0x10ea27d0 */
  push32(0x10ea16f9u); f_10ea27d0();
  /* 10ea16f9 mov ebx, eax */
  EBX = (EAX);
  /* 10ea16fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea16fe call 0x10ea27d0 */
  push32(0x10ea1703u); f_10ea27d0();
  /* 10ea1703 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea1706 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ea1708 je 0x10ea16e4 */
  if (C.zf) goto L_10ea16e4;
  /* 10ea170a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea170c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10ea170f:;
  /* 10ea170f mov ebx, eax */
  EBX = (EAX);
  /* 10ea1711 pop eax */
  EAX = (pop32());
  /* 10ea1712 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea1714 jne 0x10ea171f */
  if (!C.zf) goto L_10ea171f;
  /* 10ea1716 lock dec dword ptr [0x10ebe80c] */
  x86_unimpl("lock dec @ 0x10ea1716");
  /* 10ea171d jmp 0x10ea1729 */
  goto L_10ea1729;
L_10ea171f:;
  /* 10ea171f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10ea1721 call 0x10e96a30 */
  push32(0x10ea1726u); f_10e96a30();
  /* 10ea1726 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ea1729:;
  /* 10ea1729 mov eax, ebx */
  EAX = (EBX);
L_10ea172b:;
  /* 10ea172b pop ebx */
  EBX = (pop32());
  /* 10ea172c pop esi */
  ESI = (pop32());
  /* 10ea172d pop edi */
  EDI = (pop32());
  /* 10ea172e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ea172f ret  */
  ESPCHK(0x10ea1660u, _esp0);
  ESP += 4; return;
}

/* FUN_10011730 @ 0x10ea1730 (257 bytes, 103 insns) */
void f_10ea1730(void) {
  FTRACE(0x10ea1730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ea1730 push ebp */
  push32((uint32_t)(EBP));
  /* 10ea1731 mov ebp, esp */
  EBP = (ESP);
  /* 10ea1733 push edi */
  push32((uint32_t)(EDI));
  /* 10ea1734 push esi */
  push32((uint32_t)(ESI));
  /* 10ea1735 push ebx */
  push32((uint32_t)(EBX));
  /* 10ea1736 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea1739 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ea173b je 0x10ea182a */
  if (C.zf) goto L_10ea182a;
  /* 10ea1741 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea1744 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea1747 lea eax, [0x10ebe678] */
  EAX = ((uint32_t)(0x10ebe678));
  /* 10ea174d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea1751 jne 0x10ea17a1 */
  if (!C.zf) goto L_10ea17a1;
  /* 10ea1753 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 10ea1755 mov bl, 0x5a */
  BL = (0x5au);
  /* 10ea1757 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 10ea1759 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10ea175c:;
  /* 10ea175c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 10ea175e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10ea1760 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 10ea1762 je 0x10ea1785 */
  if (C.zf) goto L_10ea1785;
  /* 10ea1764 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10ea1766 je 0x10ea1785 */
  if (C.zf) goto L_10ea1785;
  /* 10ea1768 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10ea1769 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10ea176a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ea176c jb 0x10ea1774 */
  if (C.cf) goto L_10ea1774;
  /* 10ea176e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ea1770 ja 0x10ea1774 */
  if ((!C.cf&&!C.zf)) goto L_10ea1774;
  /* 10ea1772 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_10ea1774:;
  /* 10ea1774 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ea1776 jb 0x10ea177e */
  if (C.cf) goto L_10ea177e;
  /* 10ea1778 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ea177a ja 0x10ea177e */
  if ((!C.cf&&!C.zf)) goto L_10ea177e;
  /* 10ea177c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_10ea177e:;
  /* 10ea177e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ea1780 jne 0x10ea178f */
  if (!C.zf) goto L_10ea178f;
  /* 10ea1782 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10ea1783 jne 0x10ea175c */
  if (!C.zf) goto L_10ea175c;
L_10ea1785:;
  /* 10ea1785 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ea1787 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ea1789 je 0x10ea182a */
  if (C.zf) goto L_10ea182a;
L_10ea178f:;
  /* 10ea178f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10ea1794 jb 0x10ea182a */
  if (C.cf) goto L_10ea182a;
  /* 10ea179a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ea179c jmp 0x10ea182a */
  goto L_10ea182a;
L_10ea17a1:;
  /* 10ea17a1 lock inc dword ptr [0x10ebe80c] */
  x86_unimpl("lock inc @ 0x10ea17a1");
  /* 10ea17a8 cmp dword ptr [0x10ebe7fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe7fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea17af jg 0x10ea17b5 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ea17b5;
  /* 10ea17b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea17b3 jmp 0x10ea17ce */
  goto L_10ea17ce;
L_10ea17b5:;
  /* 10ea17b5 lock dec dword ptr [0x10ebe80c] */
  x86_unimpl("lock dec @ 0x10ea17b5");
  /* 10ea17bc mov ebx, ecx */
  EBX = (ECX);
  /* 10ea17be push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10ea17c0 call 0x10e96990 */
  push32(0x10ea17c5u); f_10e96990();
  /* 10ea17c5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 10ea17cc mov ecx, ebx */
  ECX = (EBX);
L_10ea17ce:;
  /* 10ea17ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea17d0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10ea17d2 mov edi, edi */
  EDI = (EDI);
L_10ea17d4:;
  /* 10ea17d4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10ea17d6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea17d8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10ea17da je 0x10ea17ff */
  if (C.zf) goto L_10ea17ff;
  /* 10ea17dc or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10ea17de je 0x10ea17ff */
  if (C.zf) goto L_10ea17ff;
  /* 10ea17e0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10ea17e1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10ea17e2 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea17e3 push eax */
  push32((uint32_t)(EAX));
  /* 10ea17e4 push ebx */
  push32((uint32_t)(EBX));
  /* 10ea17e5 call 0x10ea27d0 */
  push32(0x10ea17eau); f_10ea27d0();
  /* 10ea17ea mov ebx, eax */
  EBX = (EAX);
  /* 10ea17ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea17ef call 0x10ea27d0 */
  push32(0x10ea17f4u); f_10ea27d0();
  /* 10ea17f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea17f7 pop ecx */
  ECX = (pop32());
  /* 10ea17f8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea17fa jne 0x10ea1805 */
  if (!C.zf) goto L_10ea1805;
  /* 10ea17fc dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10ea17fd jne 0x10ea17d4 */
  if (!C.zf) goto L_10ea17d4;
L_10ea17ff:;
  /* 10ea17ff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ea1801 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea1803 je 0x10ea180e */
  if (C.zf) goto L_10ea180e;
L_10ea1805:;
  /* 10ea1805 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10ea180a jb 0x10ea180e */
  if (C.cf) goto L_10ea180e;
  /* 10ea180c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_10ea180e:;
  /* 10ea180e pop eax */
  EAX = (pop32());
  /* 10ea180f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea1811 jne 0x10ea181c */
  if (!C.zf) goto L_10ea181c;
  /* 10ea1813 lock dec dword ptr [0x10ebe80c] */
  x86_unimpl("lock dec @ 0x10ea1813");
  /* 10ea181a jmp 0x10ea182a */
  goto L_10ea182a;
L_10ea181c:;
  /* 10ea181c mov ebx, ecx */
  EBX = (ECX);
  /* 10ea181e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10ea1820 call 0x10e96a30 */
  push32(0x10ea1825u); f_10e96a30();
  /* 10ea1825 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea1828 mov ecx, ebx */
  ECX = (EBX);
L_10ea182a:;
  /* 10ea182a mov eax, ecx */
  EAX = (ECX);
  /* 10ea182c pop ebx */
  EBX = (pop32());
  /* 10ea182d pop esi */
  ESI = (pop32());
  /* 10ea182e pop edi */
  EDI = (pop32());
  /* 10ea182f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ea1830 ret  */
  ESPCHK(0x10ea1730u, _esp0);
  ESP += 4; return;
}

/* FUN_10011840 @ 0x10ea1840 (255 bytes, 88 insns) */
void f_10ea1840(void) {
  FTRACE(0x10ea1840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ea1840 push ebp */
  push32((uint32_t)(EBP));
  /* 10ea1841 mov ebp, esp */
  EBP = (ESP);
  /* 10ea1843 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10ea1846:;
  /* 10ea1846 cmp dword ptr [0x10ebceb4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10ebceb4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea184d jle 0x10ea1866 */
  if ((C.zf||C.sf!=C.of)) goto L_10ea1866;
  /* 10ea184f push 8 */
  push32((uint32_t)(0x8u));
  /* 10ea1851 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea1854 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ea1856 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ea1858 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea1859 call 0x10e98fa0 */
  push32(0x10ea185eu); f_10e98fa0();
  /* 10ea185e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea1861 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10ea1864 jmp 0x10ea187f */
  goto L_10ea187f;
L_10ea1866:;
  /* 10ea1866 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea1869 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea186b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ea186d mov ecx, dword ptr [0x10ebcca8] */
  ECX = (r32((uint32_t)(0x10ebcca8)));
  /* 10ea1873 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ea1875 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10ea1879 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10ea187c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10ea187f:;
  /* 10ea187f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea1883 je 0x10ea1890 */
  if (C.zf) goto L_10ea1890;
  /* 10ea1885 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea1888 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea188b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ea188e jmp 0x10ea1846 */
  goto L_10ea1846;
L_10ea1890:;
  /* 10ea1890 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea1893 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ea1895 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ea1897 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ea189a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea189d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea18a0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ea18a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea18a6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ea18a9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea18ad je 0x10ea18b5 */
  if (C.zf) goto L_10ea18b5;
  /* 10ea18af cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea18b3 jne 0x10ea18c8 */
  if (!C.zf) goto L_10ea18c8;
L_10ea18b5:;
  /* 10ea18b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea18b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea18ba mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ea18bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ea18bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea18c2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea18c5 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10ea18c8:;
  /* 10ea18c8 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10ea18cf:;
  /* 10ea18cf cmp dword ptr [0x10ebceb4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10ebceb4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea18d6 jle 0x10ea18eb */
  if ((C.zf||C.sf!=C.of)) goto L_10ea18eb;
  /* 10ea18d8 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ea18da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea18dd push edx */
  push32((uint32_t)(EDX));
  /* 10ea18de call 0x10e98fa0 */
  push32(0x10ea18e3u); f_10e98fa0();
  /* 10ea18e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea18e6 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10ea18e9 jmp 0x10ea1900 */
  goto L_10ea1900;
L_10ea18eb:;
  /* 10ea18eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea18ee mov ecx, dword ptr [0x10ebcca8] */
  ECX = (r32((uint32_t)(0x10ebcca8)));
  /* 10ea18f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ea18f6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10ea18fa and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10ea18fd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10ea1900:;
  /* 10ea1900 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea1904 je 0x10ea192b */
  if (C.zf) goto L_10ea192b;
  /* 10ea1906 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ea1909 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ea190c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea190f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 10ea1913 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10ea1916 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea1919 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ea191b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ea191d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ea1920 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea1923 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea1926 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10ea1929 jmp 0x10ea18cf */
  goto L_10ea18cf;
L_10ea192b:;
  /* 10ea192b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea192f jne 0x10ea1938 */
  if (!C.zf) goto L_10ea1938;
  /* 10ea1931 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ea1934 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ea1936 jmp 0x10ea193b */
  goto L_10ea193b;
L_10ea1938:;
  /* 10ea1938 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10ea193b:;
  /* 10ea193b mov esp, ebp */
  ESP = (EBP);
  /* 10ea193d pop ebp */
  EBP = (pop32());
  /* 10ea193e ret  */
  ESPCHK(0x10ea1840u, _esp0);
  ESP += 4; return;
}

/* FUN_10011940 @ 0x10ea1940 (17 bytes, 8 insns) */
void f_10ea1940(void) {
  FTRACE(0x10ea1940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ea1940 push ebp */
  push32((uint32_t)(EBP));
  /* 10ea1941 mov ebp, esp */
  EBP = (ESP);
  /* 10ea1943 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea1946 push eax */
  push32((uint32_t)(EAX));
  /* 10ea1947 call 0x10ea1840 */
  push32(0x10ea194cu); f_10ea1840();
  /* 10ea194c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea194f pop ebp */
  EBP = (pop32());
  /* 10ea1950 ret  */
  ESPCHK(0x10ea1940u, _esp0);
  ESP += 4; return;
}

/* FUN_10011960 @ 0x10ea1960 (297 bytes, 106 insns) */
void f_10ea1960(void) {
  FTRACE(0x10ea1960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ea1960 push ebp */
  push32((uint32_t)(EBP));
  /* 10ea1961 mov ebp, esp */
  EBP = (ESP);
  /* 10ea1963 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea1966 push esi */
  push32((uint32_t)(ESI));
L_10ea1967:;
  /* 10ea1967 cmp dword ptr [0x10ebceb4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10ebceb4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea196e jle 0x10ea1987 */
  if ((C.zf||C.sf!=C.of)) goto L_10ea1987;
  /* 10ea1970 push 8 */
  push32((uint32_t)(0x8u));
  /* 10ea1972 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea1975 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ea1977 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ea1979 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea197a call 0x10e98fa0 */
  push32(0x10ea197fu); f_10e98fa0();
  /* 10ea197f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea1982 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10ea1985 jmp 0x10ea19a0 */
  goto L_10ea19a0;
L_10ea1987:;
  /* 10ea1987 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea198a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea198c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ea198e mov ecx, dword ptr [0x10ebcca8] */
  ECX = (r32((uint32_t)(0x10ebcca8)));
  /* 10ea1994 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ea1996 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10ea199a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10ea199d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10ea19a0:;
  /* 10ea19a0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea19a4 je 0x10ea19b1 */
  if (C.zf) goto L_10ea19b1;
  /* 10ea19a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea19a9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea19ac mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ea19af jmp 0x10ea1967 */
  goto L_10ea1967;
L_10ea19b1:;
  /* 10ea19b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea19b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ea19b6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ea19b8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ea19bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea19be add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea19c1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ea19c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea19c7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10ea19ca cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea19ce je 0x10ea19d6 */
  if (C.zf) goto L_10ea19d6;
  /* 10ea19d0 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea19d4 jne 0x10ea19e9 */
  if (!C.zf) goto L_10ea19e9;
L_10ea19d6:;
  /* 10ea19d6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea19d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea19db mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ea19dd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ea19e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea19e3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea19e6 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10ea19e9:;
  /* 10ea19e9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10ea19f0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10ea19f7:;
  /* 10ea19f7 cmp dword ptr [0x10ebceb4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10ebceb4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea19fe jle 0x10ea1a13 */
  if ((C.zf||C.sf!=C.of)) goto L_10ea1a13;
  /* 10ea1a00 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ea1a02 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea1a05 push edx */
  push32((uint32_t)(EDX));
  /* 10ea1a06 call 0x10e98fa0 */
  push32(0x10ea1a0bu); f_10e98fa0();
  /* 10ea1a0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea1a0e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10ea1a11 jmp 0x10ea1a28 */
  goto L_10ea1a28;
L_10ea1a13:;
  /* 10ea1a13 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea1a16 mov ecx, dword ptr [0x10ebcca8] */
  ECX = (r32((uint32_t)(0x10ebcca8)));
  /* 10ea1a1c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ea1a1e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10ea1a22 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10ea1a25 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_10ea1a28:;
  /* 10ea1a28 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea1a2c je 0x10ea1a69 */
  if (C.zf) goto L_10ea1a69;
  /* 10ea1a2e push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea1a30 push 0xa */
  push32((uint32_t)(0xau));
  /* 10ea1a32 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ea1a35 push eax */
  push32((uint32_t)(EAX));
  /* 10ea1a36 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea1a39 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea1a3a call 0x10ea2900 */
  push32(0x10ea1a3fu); f_10ea2900();
  /* 10ea1a3f mov ecx, eax */
  ECX = (EAX);
  /* 10ea1a41 mov esi, edx */
  ESI = (EDX);
  /* 10ea1a43 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea1a46 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea1a49 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ea1a4a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea1a4c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea1a4e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ea1a51 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 10ea1a54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea1a57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea1a59 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ea1a5b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ea1a5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea1a61 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea1a64 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10ea1a67 jmp 0x10ea19f7 */
  goto L_10ea19f7;
L_10ea1a69:;
  /* 10ea1a69 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea1a6d jne 0x10ea1a7e */
  if (!C.zf) goto L_10ea1a7e;
  /* 10ea1a6f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea1a72 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ea1a74 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ea1a77 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea1a7a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ea1a7c jmp 0x10ea1a84 */
  goto L_10ea1a84;
L_10ea1a7e:;
  /* 10ea1a7e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea1a81 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_10ea1a84:;
  /* 10ea1a84 pop esi */
  ESI = (pop32());
  /* 10ea1a85 mov esp, ebp */
  ESP = (EBP);
  /* 10ea1a87 pop ebp */
  EBP = (pop32());
  /* 10ea1a88 ret  */
  ESPCHK(0x10ea1960u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a90 @ 0x10ea1a90 (61 bytes, 18 insns) */
void f_10ea1a90(void) {
  FTRACE(0x10ea1a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ea1a90 push ebp */
  push32((uint32_t)(EBP));
  /* 10ea1a91 mov ebp, esp */
  EBP = (ESP);
  /* 10ea1a93 cmp dword ptr [0x10ebe7d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe7d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea1a9a jne 0x10ea1acb */
  if (!C.zf) goto L_10ea1acb;
  /* 10ea1a9c push 0xb */
  push32((uint32_t)(0xbu));
  /* 10ea1a9e call 0x10e96990 */
  push32(0x10ea1aa3u); f_10e96990();
  /* 10ea1aa3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea1aa6 cmp dword ptr [0x10ebe7d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe7d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea1aad jne 0x10ea1ac1 */
  if (!C.zf) goto L_10ea1ac1;
  /* 10ea1aaf call 0x10ea1af0 */
  push32(0x10ea1ab4u); f_10ea1af0();
  /* 10ea1ab4 mov eax, dword ptr [0x10ebe7d8] */
  EAX = (r32((uint32_t)(0x10ebe7d8)));
  /* 10ea1ab9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea1abc mov dword ptr [0x10ebe7d8], eax */
  w32((uint32_t)(0x10ebe7d8), (EAX));
L_10ea1ac1:;
  /* 10ea1ac1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10ea1ac3 call 0x10e96a30 */
  push32(0x10ea1ac8u); f_10e96a30();
  /* 10ea1ac8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ea1acb:;
  /* 10ea1acb pop ebp */
  EBP = (pop32());
  /* 10ea1acc ret  */
  ESPCHK(0x10ea1a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ad0 @ 0x10ea1ad0 (30 bytes, 11 insns) */
void f_10ea1ad0(void) {
  FTRACE(0x10ea1ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ea1ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ea1ad1 mov ebp, esp */
  EBP = (ESP);
  /* 10ea1ad3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10ea1ad5 call 0x10e96990 */
  push32(0x10ea1adau); f_10e96990();
  /* 10ea1ada add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea1add call 0x10ea1af0 */
  push32(0x10ea1ae2u); f_10ea1af0();
  /* 10ea1ae2 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10ea1ae4 call 0x10e96a30 */
  push32(0x10ea1ae9u); f_10e96a30();
  /* 10ea1ae9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea1aec pop ebp */
  EBP = (pop32());
  /* 10ea1aed ret  */
  ESPCHK(0x10ea1ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011af0 @ 0x10ea1af0 (939 bytes, 266 insns) */
void f_10ea1af0(void) {
  FTRACE(0x10ea1af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ea1af0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ea1af1 mov ebp, esp */
  EBP = (ESP);
  /* 10ea1af3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea1af6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ea1afd push 0xc */
  push32((uint32_t)(0xcu));
  /* 10ea1aff call 0x10e96990 */
  push32(0x10ea1b04u); f_10e96990();
  /* 10ea1b04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea1b07 mov dword ptr [0x10ebe720], 0 */
  w32((uint32_t)(0x10ebe720), (0x0u));
  /* 10ea1b11 mov dword ptr [0x10ebde48], 0xffffffff */
  w32((uint32_t)(0x10ebde48), (0xffffffffu));
  /* 10ea1b1b mov eax, dword ptr [0x10ebde48] */
  EAX = (r32((uint32_t)(0x10ebde48)));
  /* 10ea1b20 mov dword ptr [0x10ebde38], eax */
  w32((uint32_t)(0x10ebde38), (EAX));
  /* 10ea1b25 push 0x10eba8a8 */
  push32((uint32_t)(0x10eba8a8u));
  /* 10ea1b2a call 0x10ea2970 */
  push32(0x10ea1b2fu); f_10ea2970();
  /* 10ea1b2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea1b32 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ea1b35 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea1b39 jne 0x10ea1c73 */
  if (!C.zf) goto L_10ea1c73;
  /* 10ea1b3f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10ea1b41 call 0x10e96a30 */
  push32(0x10ea1b46u); f_10e96a30();
  /* 10ea1b46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea1b49 push 0x10ebe728 */
  push32((uint32_t)(0x10ebe728u));
  /* 10ea1b4e call dword ptr [0x10ec0288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0288))), 0x10ea1b54u);
  /* 10ea1b54 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea1b57 je 0x10ea1c6e */
  if (C.zf) goto L_10ea1c6e;
  /* 10ea1b5d mov dword ptr [0x10ebe720], 1 */
  w32((uint32_t)(0x10ebe720), (0x1u));
  /* 10ea1b67 mov ecx, dword ptr [0x10ebe728] */
  ECX = (r32((uint32_t)(0x10ebe728)));
  /* 10ea1b6d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ea1b70 mov dword ptr [0x10ebdda0], ecx */
  w32((uint32_t)(0x10ebdda0), (ECX));
  /* 10ea1b76 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ea1b78 mov dx, word ptr [0x10ebe76e] */
  DX = (r16((uint32_t)(0x10ebe76e)));
  /* 10ea1b7f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ea1b81 je 0x10ea1b99 */
  if (C.zf) goto L_10ea1b99;
  /* 10ea1b83 mov eax, dword ptr [0x10ebe77c] */
  EAX = (r32((uint32_t)(0x10ebe77c)));
  /* 10ea1b88 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ea1b8b mov ecx, dword ptr [0x10ebdda0] */
  ECX = (r32((uint32_t)(0x10ebdda0)));
  /* 10ea1b91 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea1b93 mov dword ptr [0x10ebdda0], ecx */
  w32((uint32_t)(0x10ebdda0), (ECX));
L_10ea1b99:;
  /* 10ea1b99 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ea1b9b mov dx, word ptr [0x10ebe7c2] */
  DX = (r16((uint32_t)(0x10ebe7c2)));
  /* 10ea1ba2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ea1ba4 je 0x10ea1bce */
  if (C.zf) goto L_10ea1bce;
  /* 10ea1ba6 cmp dword ptr [0x10ebe7d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe7d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea1bad je 0x10ea1bce */
  if (C.zf) goto L_10ea1bce;
  /* 10ea1baf mov dword ptr [0x10ebdda4], 1 */
  w32((uint32_t)(0x10ebdda4), (0x1u));
  /* 10ea1bb9 mov eax, dword ptr [0x10ebe7d0] */
  EAX = (r32((uint32_t)(0x10ebe7d0)));
  /* 10ea1bbe sub eax, dword ptr [0x10ebe77c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10ebe77c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea1bc4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ea1bc7 mov dword ptr [0x10ebdda8], eax */
  w32((uint32_t)(0x10ebdda8), (EAX));
  /* 10ea1bcc jmp 0x10ea1be2 */
  goto L_10ea1be2;
L_10ea1bce:;
  /* 10ea1bce mov dword ptr [0x10ebdda4], 0 */
  w32((uint32_t)(0x10ebdda4), (0x0u));
  /* 10ea1bd8 mov dword ptr [0x10ebdda8], 0 */
  w32((uint32_t)(0x10ebdda8), (0x0u));
L_10ea1be2:;
  /* 10ea1be2 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10ea1be5 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea1be6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea1be8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10ea1bea mov edx, dword ptr [0x10ebde2c] */
  EDX = (r32((uint32_t)(0x10ebde2c)));
  /* 10ea1bf0 push edx */
  push32((uint32_t)(EDX));
  /* 10ea1bf1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ea1bf3 push 0x10ebe72c */
  push32((uint32_t)(0x10ebe72cu));
  /* 10ea1bf8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10ea1bfd mov eax, dword ptr [0x10ebe690] */
  EAX = (r32((uint32_t)(0x10ebe690)));
  /* 10ea1c02 push eax */
  push32((uint32_t)(EAX));
  /* 10ea1c03 call dword ptr [0x10ec035c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec035c))), 0x10ea1c09u);
  /* 10ea1c09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ea1c0b je 0x10ea1c1f */
  if (C.zf) goto L_10ea1c1f;
  /* 10ea1c0d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea1c11 jne 0x10ea1c1f */
  if (!C.zf) goto L_10ea1c1f;
  /* 10ea1c13 mov ecx, dword ptr [0x10ebde2c] */
  ECX = (r32((uint32_t)(0x10ebde2c)));
  /* 10ea1c19 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 10ea1c1d jmp 0x10ea1c28 */
  goto L_10ea1c28;
L_10ea1c1f:;
  /* 10ea1c1f mov edx, dword ptr [0x10ebde2c] */
  EDX = (r32((uint32_t)(0x10ebde2c)));
  /* 10ea1c25 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10ea1c28:;
  /* 10ea1c28 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10ea1c2b push eax */
  push32((uint32_t)(EAX));
  /* 10ea1c2c push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea1c2e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10ea1c30 mov ecx, dword ptr [0x10ebde30] */
  ECX = (r32((uint32_t)(0x10ebde30)));
  /* 10ea1c36 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea1c37 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ea1c39 push 0x10ebe780 */
  push32((uint32_t)(0x10ebe780u));
  /* 10ea1c3e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10ea1c43 mov edx, dword ptr [0x10ebe690] */
  EDX = (r32((uint32_t)(0x10ebe690)));
  /* 10ea1c49 push edx */
  push32((uint32_t)(EDX));
  /* 10ea1c4a call dword ptr [0x10ec035c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec035c))), 0x10ea1c50u);
  /* 10ea1c50 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ea1c52 je 0x10ea1c65 */
  if (C.zf) goto L_10ea1c65;
  /* 10ea1c54 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea1c58 jne 0x10ea1c65 */
  if (!C.zf) goto L_10ea1c65;
  /* 10ea1c5a mov eax, dword ptr [0x10ebde30] */
  EAX = (r32((uint32_t)(0x10ebde30)));
  /* 10ea1c5f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 10ea1c63 jmp 0x10ea1c6e */
  goto L_10ea1c6e;
L_10ea1c65:;
  /* 10ea1c65 mov ecx, dword ptr [0x10ebde30] */
  ECX = (r32((uint32_t)(0x10ebde30)));
  /* 10ea1c6b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_10ea1c6e:;
  /* 10ea1c6e jmp 0x10ea1e97 */
  goto L_10ea1e97;
L_10ea1c73:;
  /* 10ea1c73 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea1c76 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10ea1c79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ea1c7b je 0x10ea1c9d */
  if (C.zf) goto L_10ea1c9d;
  /* 10ea1c7d cmp dword ptr [0x10ebe7d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe7d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea1c84 je 0x10ea1cac */
  if (C.zf) goto L_10ea1cac;
  /* 10ea1c86 mov ecx, dword ptr [0x10ebe7d4] */
  ECX = (r32((uint32_t)(0x10ebe7d4)));
  /* 10ea1c8c push ecx */
  push32((uint32_t)(ECX));
  /* 10ea1c8d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea1c90 push edx */
  push32((uint32_t)(EDX));
  /* 10ea1c91 call 0x10e9ec20 */
  push32(0x10ea1c96u); f_10e9ec20();
  /* 10ea1c96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea1c99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ea1c9b jne 0x10ea1cac */
  if (!C.zf) goto L_10ea1cac;
L_10ea1c9d:;
  /* 10ea1c9d push 0xc */
  push32((uint32_t)(0xcu));
  /* 10ea1c9f call 0x10e96a30 */
  push32(0x10ea1ca4u); f_10e96a30();
  /* 10ea1ca4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea1ca7 jmp 0x10ea1e97 */
  goto L_10ea1e97;
L_10ea1cac:;
  /* 10ea1cac push 2 */
  push32((uint32_t)(0x2u));
  /* 10ea1cae mov eax, dword ptr [0x10ebe7d4] */
  EAX = (r32((uint32_t)(0x10ebe7d4)));
  /* 10ea1cb3 push eax */
  push32((uint32_t)(EAX));
  /* 10ea1cb4 call 0x10e93a20 */
  push32(0x10ea1cb9u); f_10e93a20();
  /* 10ea1cb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea1cbc push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 10ea1cc1 push 0x10eba8a0 */
  push32((uint32_t)(0x10eba8a0u));
  /* 10ea1cc6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ea1cc8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea1ccb push ecx */
  push32((uint32_t)(ECX));
  /* 10ea1ccc call 0x10e95dc0 */
  push32(0x10ea1cd1u); f_10e95dc0();
  /* 10ea1cd1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea1cd4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea1cd7 push eax */
  push32((uint32_t)(EAX));
  /* 10ea1cd8 call 0x10e92f90 */
  push32(0x10ea1cddu); f_10e92f90();
  /* 10ea1cdd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea1ce0 mov dword ptr [0x10ebe7d4], eax */
  w32((uint32_t)(0x10ebe7d4), (EAX));
  /* 10ea1ce5 cmp dword ptr [0x10ebe7d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe7d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea1cec jne 0x10ea1cfd */
  if (!C.zf) goto L_10ea1cfd;
  /* 10ea1cee push 0xc */
  push32((uint32_t)(0xcu));
  /* 10ea1cf0 call 0x10e96a30 */
  push32(0x10ea1cf5u); f_10e96a30();
  /* 10ea1cf5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea1cf8 jmp 0x10ea1e97 */
  goto L_10ea1e97;
L_10ea1cfd:;
  /* 10ea1cfd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea1d00 push edx */
  push32((uint32_t)(EDX));
  /* 10ea1d01 mov eax, dword ptr [0x10ebe7d4] */
  EAX = (r32((uint32_t)(0x10ebe7d4)));
  /* 10ea1d06 push eax */
  push32((uint32_t)(EAX));
  /* 10ea1d07 call 0x10e95f40 */
  push32(0x10ea1d0cu); f_10e95f40();
  /* 10ea1d0c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea1d0f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10ea1d11 call 0x10e96a30 */
  push32(0x10ea1d16u); f_10e96a30();
  /* 10ea1d16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea1d19 push 3 */
  push32((uint32_t)(0x3u));
  /* 10ea1d1b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea1d1e push ecx */
  push32((uint32_t)(ECX));
  /* 10ea1d1f mov edx, dword ptr [0x10ebde2c] */
  EDX = (r32((uint32_t)(0x10ebde2c)));
  /* 10ea1d25 push edx */
  push32((uint32_t)(EDX));
  /* 10ea1d26 call 0x10e967b0 */
  push32(0x10ea1d2bu); f_10e967b0();
  /* 10ea1d2b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea1d2e mov eax, dword ptr [0x10ebde2c] */
  EAX = (r32((uint32_t)(0x10ebde2c)));
  /* 10ea1d33 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 10ea1d37 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea1d3a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea1d3d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ea1d40 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea1d43 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10ea1d46 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea1d49 jne 0x10ea1d5d */
  if (!C.zf) goto L_10ea1d5d;
  /* 10ea1d4b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea1d4e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea1d51 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ea1d54 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea1d57 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea1d5a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10ea1d5d:;
  /* 10ea1d5d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea1d60 push eax */
  push32((uint32_t)(EAX));
  /* 10ea1d61 call 0x10ea1840 */
  push32(0x10ea1d66u); f_10ea1840();
  /* 10ea1d66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea1d69 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ea1d6f mov dword ptr [0x10ebdda0], eax */
  w32((uint32_t)(0x10ebdda0), (EAX));
L_10ea1d74:;
  /* 10ea1d74 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea1d77 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ea1d7a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea1d7d je 0x10ea1d95 */
  if (C.zf) goto L_10ea1d95;
  /* 10ea1d7f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea1d82 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ea1d85 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea1d88 jl 0x10ea1da0 */
  if ((C.sf!=C.of)) goto L_10ea1da0;
  /* 10ea1d8a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea1d8d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10ea1d90 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea1d93 jg 0x10ea1da0 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ea1da0;
L_10ea1d95:;
  /* 10ea1d95 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea1d98 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea1d9b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ea1d9e jmp 0x10ea1d74 */
  goto L_10ea1d74;
L_10ea1da0:;
  /* 10ea1da0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea1da3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10ea1da6 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea1da9 jne 0x10ea1e45 */
  if (!C.zf) goto L_10ea1e45;
  /* 10ea1daf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea1db2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea1db5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ea1db8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea1dbb push edx */
  push32((uint32_t)(EDX));
  /* 10ea1dbc call 0x10ea1840 */
  push32(0x10ea1dc1u); f_10ea1840();
  /* 10ea1dc1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea1dc4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ea1dc7 mov ecx, dword ptr [0x10ebdda0] */
  ECX = (r32((uint32_t)(0x10ebdda0)));
  /* 10ea1dcd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea1dcf mov dword ptr [0x10ebdda0], ecx */
  w32((uint32_t)(0x10ebdda0), (ECX));
L_10ea1dd5:;
  /* 10ea1dd5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea1dd8 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10ea1ddb cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea1dde jl 0x10ea1df6 */
  if ((C.sf!=C.of)) goto L_10ea1df6;
  /* 10ea1de0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea1de3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ea1de6 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea1de9 jg 0x10ea1df6 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ea1df6;
  /* 10ea1deb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea1dee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea1df1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ea1df4 jmp 0x10ea1dd5 */
  goto L_10ea1dd5;
L_10ea1df6:;
  /* 10ea1df6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea1df9 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ea1dfc cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea1dff jne 0x10ea1e45 */
  if (!C.zf) goto L_10ea1e45;
  /* 10ea1e01 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea1e04 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea1e07 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ea1e0a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea1e0d push ecx */
  push32((uint32_t)(ECX));
  /* 10ea1e0e call 0x10ea1840 */
  push32(0x10ea1e13u); f_10ea1840();
  /* 10ea1e13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea1e16 mov edx, dword ptr [0x10ebdda0] */
  EDX = (r32((uint32_t)(0x10ebdda0)));
  /* 10ea1e1c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea1e1e mov dword ptr [0x10ebdda0], edx */
  w32((uint32_t)(0x10ebdda0), (EDX));
L_10ea1e24:;
  /* 10ea1e24 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea1e27 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ea1e2a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea1e2d jl 0x10ea1e45 */
  if ((C.sf!=C.of)) goto L_10ea1e45;
  /* 10ea1e2f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea1e32 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10ea1e35 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea1e38 jg 0x10ea1e45 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ea1e45;
  /* 10ea1e3a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea1e3d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea1e40 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ea1e43 jmp 0x10ea1e24 */
  goto L_10ea1e24;
L_10ea1e45:;
  /* 10ea1e45 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea1e49 je 0x10ea1e59 */
  if (C.zf) goto L_10ea1e59;
  /* 10ea1e4b mov edx, dword ptr [0x10ebdda0] */
  EDX = (r32((uint32_t)(0x10ebdda0)));
  /* 10ea1e51 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ea1e53 mov dword ptr [0x10ebdda0], edx */
  w32((uint32_t)(0x10ebdda0), (EDX));
L_10ea1e59:;
  /* 10ea1e59 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea1e5c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ea1e5f mov dword ptr [0x10ebdda4], ecx */
  w32((uint32_t)(0x10ebdda4), (ECX));
  /* 10ea1e65 cmp dword ptr [0x10ebdda4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebdda4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea1e6c je 0x10ea1e8e */
  if (C.zf) goto L_10ea1e8e;
  /* 10ea1e6e push 3 */
  push32((uint32_t)(0x3u));
  /* 10ea1e70 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea1e73 push edx */
  push32((uint32_t)(EDX));
  /* 10ea1e74 mov eax, dword ptr [0x10ebde30] */
  EAX = (r32((uint32_t)(0x10ebde30)));
  /* 10ea1e79 push eax */
  push32((uint32_t)(EAX));
  /* 10ea1e7a call 0x10e967b0 */
  push32(0x10ea1e7fu); f_10e967b0();
  /* 10ea1e7f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea1e82 mov ecx, dword ptr [0x10ebde30] */
  ECX = (r32((uint32_t)(0x10ebde30)));
  /* 10ea1e88 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 10ea1e8c jmp 0x10ea1e97 */
  goto L_10ea1e97;
L_10ea1e8e:;
  /* 10ea1e8e mov edx, dword ptr [0x10ebde30] */
  EDX = (r32((uint32_t)(0x10ebde30)));
  /* 10ea1e94 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10ea1e97:;
  /* 10ea1e97 mov esp, ebp */
  ESP = (EBP);
  /* 10ea1e99 pop ebp */
  EBP = (pop32());
  /* 10ea1e9a ret  */
  ESPCHK(0x10ea1af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ea0 @ 0x10ea1ea0 (46 bytes, 18 insns) */
void f_10ea1ea0(void) {
  FTRACE(0x10ea1ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ea1ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ea1ea1 mov ebp, esp */
  EBP = (ESP);
  /* 10ea1ea3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea1ea4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10ea1ea6 call 0x10e96990 */
  push32(0x10ea1eabu); f_10e96990();
  /* 10ea1eab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea1eae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea1eb1 push eax */
  push32((uint32_t)(EAX));
  /* 10ea1eb2 call 0x10ea1ed0 */
  push32(0x10ea1eb7u); f_10ea1ed0();
  /* 10ea1eb7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea1eba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ea1ebd push 0xb */
  push32((uint32_t)(0xbu));
  /* 10ea1ebf call 0x10e96a30 */
  push32(0x10ea1ec4u); f_10e96a30();
  /* 10ea1ec4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea1ec7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea1eca mov esp, ebp */
  ESP = (EBP);
  /* 10ea1ecc pop ebp */
  EBP = (pop32());
  /* 10ea1ecd ret  */
  ESPCHK(0x10ea1ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ed0 @ 0x10ea1ed0 (762 bytes, 246 insns) */
void f_10ea1ed0(void) {
  FTRACE(0x10ea1ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ea1ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ea1ed1 mov ebp, esp */
  EBP = (ESP);
  /* 10ea1ed3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea1ed4 cmp dword ptr [0x10ebdda4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebdda4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea1edb jne 0x10ea1ee4 */
  if (!C.zf) goto L_10ea1ee4;
  /* 10ea1edd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea1edf jmp 0x10ea21c6 */
  goto L_10ea21c6;
L_10ea1ee4:;
  /* 10ea1ee4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea1ee7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10ea1eea cmp ecx, dword ptr [0x10ebde38] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10ebde38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea1ef0 jne 0x10ea1f04 */
  if (!C.zf) goto L_10ea1f04;
  /* 10ea1ef2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea1ef5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10ea1ef8 cmp eax, dword ptr [0x10ebde48] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10ebde48))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea1efe je 0x10ea20cb */
  if (C.zf) goto L_10ea20cb;
L_10ea1f04:;
  /* 10ea1f04 cmp dword ptr [0x10ebe720], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe720))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea1f0b je 0x10ea2085 */
  if (C.zf) goto L_10ea2085;
  /* 10ea1f11 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ea1f13 mov cx, word ptr [0x10ebe7c0] */
  CX = (r16((uint32_t)(0x10ebe7c0)));
  /* 10ea1f1a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ea1f1c jne 0x10ea1f79 */
  if (!C.zf) goto L_10ea1f79;
  /* 10ea1f1e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ea1f20 mov dx, word ptr [0x10ebe7ce] */
  DX = (r16((uint32_t)(0x10ebe7ce)));
  /* 10ea1f27 push edx */
  push32((uint32_t)(EDX));
  /* 10ea1f28 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea1f2a mov ax, word ptr [0x10ebe7cc] */
  AX = (r16((uint32_t)(0x10ebe7cc)));
  /* 10ea1f30 push eax */
  push32((uint32_t)(EAX));
  /* 10ea1f31 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ea1f33 mov cx, word ptr [0x10ebe7ca] */
  CX = (r16((uint32_t)(0x10ebe7ca)));
  /* 10ea1f3a push ecx */
  push32((uint32_t)(ECX));
  /* 10ea1f3b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ea1f3d mov dx, word ptr [0x10ebe7c8] */
  DX = (r16((uint32_t)(0x10ebe7c8)));
  /* 10ea1f44 push edx */
  push32((uint32_t)(EDX));
  /* 10ea1f45 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea1f47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea1f49 mov ax, word ptr [0x10ebe7c4] */
  AX = (r16((uint32_t)(0x10ebe7c4)));
  /* 10ea1f4f push eax */
  push32((uint32_t)(EAX));
  /* 10ea1f50 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ea1f52 mov cx, word ptr [0x10ebe7c6] */
  CX = (r16((uint32_t)(0x10ebe7c6)));
  /* 10ea1f59 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea1f5a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ea1f5c mov dx, word ptr [0x10ebe7c2] */
  DX = (r16((uint32_t)(0x10ebe7c2)));
  /* 10ea1f63 push edx */
  push32((uint32_t)(EDX));
  /* 10ea1f64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea1f67 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10ea1f6a push ecx */
  push32((uint32_t)(ECX));
  /* 10ea1f6b push 1 */
  push32((uint32_t)(0x1u));
  /* 10ea1f6d push 1 */
  push32((uint32_t)(0x1u));
  /* 10ea1f6f call 0x10ea21d0 */
  push32(0x10ea1f74u); f_10ea21d0();
  /* 10ea1f74 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea1f77 jmp 0x10ea1fca */
  goto L_10ea1fca;
L_10ea1f79:;
  /* 10ea1f79 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ea1f7b mov dx, word ptr [0x10ebe7ce] */
  DX = (r16((uint32_t)(0x10ebe7ce)));
  /* 10ea1f82 push edx */
  push32((uint32_t)(EDX));
  /* 10ea1f83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea1f85 mov ax, word ptr [0x10ebe7cc] */
  AX = (r16((uint32_t)(0x10ebe7cc)));
  /* 10ea1f8b push eax */
  push32((uint32_t)(EAX));
  /* 10ea1f8c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ea1f8e mov cx, word ptr [0x10ebe7ca] */
  CX = (r16((uint32_t)(0x10ebe7ca)));
  /* 10ea1f95 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea1f96 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ea1f98 mov dx, word ptr [0x10ebe7c8] */
  DX = (r16((uint32_t)(0x10ebe7c8)));
  /* 10ea1f9f push edx */
  push32((uint32_t)(EDX));
  /* 10ea1fa0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea1fa2 mov ax, word ptr [0x10ebe7c6] */
  AX = (r16((uint32_t)(0x10ebe7c6)));
  /* 10ea1fa8 push eax */
  push32((uint32_t)(EAX));
  /* 10ea1fa9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea1fab push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea1fad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ea1faf mov cx, word ptr [0x10ebe7c2] */
  CX = (r16((uint32_t)(0x10ebe7c2)));
  /* 10ea1fb6 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea1fb7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea1fba mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10ea1fbd push eax */
  push32((uint32_t)(EAX));
  /* 10ea1fbe push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea1fc0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ea1fc2 call 0x10ea21d0 */
  push32(0x10ea1fc7u); f_10ea21d0();
  /* 10ea1fc7 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ea1fca:;
  /* 10ea1fca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ea1fcc mov cx, word ptr [0x10ebe76c] */
  CX = (r16((uint32_t)(0x10ebe76c)));
  /* 10ea1fd3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ea1fd5 jne 0x10ea2032 */
  if (!C.zf) goto L_10ea2032;
  /* 10ea1fd7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ea1fd9 mov dx, word ptr [0x10ebe77a] */
  DX = (r16((uint32_t)(0x10ebe77a)));
  /* 10ea1fe0 push edx */
  push32((uint32_t)(EDX));
  /* 10ea1fe1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea1fe3 mov ax, word ptr [0x10ebe778] */
  AX = (r16((uint32_t)(0x10ebe778)));
  /* 10ea1fe9 push eax */
  push32((uint32_t)(EAX));
  /* 10ea1fea xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ea1fec mov cx, word ptr [0x10ebe776] */
  CX = (r16((uint32_t)(0x10ebe776)));
  /* 10ea1ff3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea1ff4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ea1ff6 mov dx, word ptr [0x10ebe774] */
  DX = (r16((uint32_t)(0x10ebe774)));
  /* 10ea1ffd push edx */
  push32((uint32_t)(EDX));
  /* 10ea1ffe push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea2000 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea2002 mov ax, word ptr [0x10ebe770] */
  AX = (r16((uint32_t)(0x10ebe770)));
  /* 10ea2008 push eax */
  push32((uint32_t)(EAX));
  /* 10ea2009 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ea200b mov cx, word ptr [0x10ebe772] */
  CX = (r16((uint32_t)(0x10ebe772)));
  /* 10ea2012 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea2013 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ea2015 mov dx, word ptr [0x10ebe76e] */
  DX = (r16((uint32_t)(0x10ebe76e)));
  /* 10ea201c push edx */
  push32((uint32_t)(EDX));
  /* 10ea201d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea2020 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10ea2023 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea2024 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ea2026 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea2028 call 0x10ea21d0 */
  push32(0x10ea202du); f_10ea21d0();
  /* 10ea202d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea2030 jmp 0x10ea2083 */
  goto L_10ea2083;
L_10ea2032:;
  /* 10ea2032 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ea2034 mov dx, word ptr [0x10ebe77a] */
  DX = (r16((uint32_t)(0x10ebe77a)));
  /* 10ea203b push edx */
  push32((uint32_t)(EDX));
  /* 10ea203c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea203e mov ax, word ptr [0x10ebe778] */
  AX = (r16((uint32_t)(0x10ebe778)));
  /* 10ea2044 push eax */
  push32((uint32_t)(EAX));
  /* 10ea2045 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ea2047 mov cx, word ptr [0x10ebe776] */
  CX = (r16((uint32_t)(0x10ebe776)));
  /* 10ea204e push ecx */
  push32((uint32_t)(ECX));
  /* 10ea204f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ea2051 mov dx, word ptr [0x10ebe774] */
  DX = (r16((uint32_t)(0x10ebe774)));
  /* 10ea2058 push edx */
  push32((uint32_t)(EDX));
  /* 10ea2059 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea205b mov ax, word ptr [0x10ebe772] */
  AX = (r16((uint32_t)(0x10ebe772)));
  /* 10ea2061 push eax */
  push32((uint32_t)(EAX));
  /* 10ea2062 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea2064 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea2066 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ea2068 mov cx, word ptr [0x10ebe76e] */
  CX = (r16((uint32_t)(0x10ebe76e)));
  /* 10ea206f push ecx */
  push32((uint32_t)(ECX));
  /* 10ea2070 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea2073 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10ea2076 push eax */
  push32((uint32_t)(EAX));
  /* 10ea2077 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea2079 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea207b call 0x10ea21d0 */
  push32(0x10ea2080u); f_10ea21d0();
  /* 10ea2080 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ea2083:;
  /* 10ea2083 jmp 0x10ea20cb */
  goto L_10ea20cb;
L_10ea2085:;
  /* 10ea2085 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea2087 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea2089 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea208b push 2 */
  push32((uint32_t)(0x2u));
  /* 10ea208d push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea208f push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea2091 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ea2093 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ea2095 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea2098 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10ea209b push edx */
  push32((uint32_t)(EDX));
  /* 10ea209c push 1 */
  push32((uint32_t)(0x1u));
  /* 10ea209e push 1 */
  push32((uint32_t)(0x1u));
  /* 10ea20a0 call 0x10ea21d0 */
  push32(0x10ea20a5u); f_10ea21d0();
  /* 10ea20a5 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea20a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea20aa push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea20ac push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea20ae push 2 */
  push32((uint32_t)(0x2u));
  /* 10ea20b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea20b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea20b4 push 5 */
  push32((uint32_t)(0x5u));
  /* 10ea20b6 push 0xa */
  push32((uint32_t)(0xau));
  /* 10ea20b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea20bb mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10ea20be push ecx */
  push32((uint32_t)(ECX));
  /* 10ea20bf push 1 */
  push32((uint32_t)(0x1u));
  /* 10ea20c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea20c3 call 0x10ea21d0 */
  push32(0x10ea20c8u); f_10ea21d0();
  /* 10ea20c8 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ea20cb:;
  /* 10ea20cb mov edx, dword ptr [0x10ebde3c] */
  EDX = (r32((uint32_t)(0x10ebde3c)));
  /* 10ea20d1 cmp edx, dword ptr [0x10ebde4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10ebde4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea20d7 jge 0x10ea2124 */
  if ((C.sf==C.of)) goto L_10ea2124;
  /* 10ea20d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea20dc mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10ea20df cmp ecx, dword ptr [0x10ebde3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10ebde3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea20e5 jl 0x10ea20f5 */
  if ((C.sf!=C.of)) goto L_10ea20f5;
  /* 10ea20e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea20ea mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10ea20ed cmp eax, dword ptr [0x10ebde4c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10ebde4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea20f3 jle 0x10ea20fc */
  if ((C.zf||C.sf!=C.of)) goto L_10ea20fc;
L_10ea20f5:;
  /* 10ea20f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea20f7 jmp 0x10ea21c6 */
  goto L_10ea21c6;
L_10ea20fc:;
  /* 10ea20fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea20ff mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10ea2102 cmp edx, dword ptr [0x10ebde3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10ebde3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea2108 jle 0x10ea2122 */
  if ((C.zf||C.sf!=C.of)) goto L_10ea2122;
  /* 10ea210a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea210d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10ea2110 cmp ecx, dword ptr [0x10ebde4c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10ebde4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea2116 jge 0x10ea2122 */
  if ((C.sf==C.of)) goto L_10ea2122;
  /* 10ea2118 mov eax, 1 */
  EAX = (0x1u);
  /* 10ea211d jmp 0x10ea21c6 */
  goto L_10ea21c6;
L_10ea2122:;
  /* 10ea2122 jmp 0x10ea2167 */
  goto L_10ea2167;
L_10ea2124:;
  /* 10ea2124 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea2127 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10ea212a cmp eax, dword ptr [0x10ebde4c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10ebde4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea2130 jl 0x10ea2140 */
  if ((C.sf!=C.of)) goto L_10ea2140;
  /* 10ea2132 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea2135 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10ea2138 cmp edx, dword ptr [0x10ebde3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10ebde3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea213e jle 0x10ea2147 */
  if ((C.zf||C.sf!=C.of)) goto L_10ea2147;
L_10ea2140:;
  /* 10ea2140 mov eax, 1 */
  EAX = (0x1u);
  /* 10ea2145 jmp 0x10ea21c6 */
  goto L_10ea21c6;
L_10ea2147:;
  /* 10ea2147 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea214a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10ea214d cmp ecx, dword ptr [0x10ebde4c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10ebde4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea2153 jle 0x10ea2167 */
  if ((C.zf||C.sf!=C.of)) goto L_10ea2167;
  /* 10ea2155 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea2158 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10ea215b cmp eax, dword ptr [0x10ebde3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10ebde3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea2161 jge 0x10ea2167 */
  if ((C.sf==C.of)) goto L_10ea2167;
  /* 10ea2163 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea2165 jmp 0x10ea21c6 */
  goto L_10ea21c6;
L_10ea2167:;
  /* 10ea2167 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea216a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ea216d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ea2170 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea2173 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ea2175 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea2177 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea217a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10ea217d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ea2183 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea2185 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ea218b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ea218e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea2191 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10ea2194 cmp edx, dword ptr [0x10ebde3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10ebde3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea219a jne 0x10ea21b2 */
  if (!C.zf) goto L_10ea21b2;
  /* 10ea219c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea219f cmp eax, dword ptr [0x10ebde40] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10ebde40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea21a5 jl 0x10ea21ae */
  if ((C.sf!=C.of)) goto L_10ea21ae;
  /* 10ea21a7 mov eax, 1 */
  EAX = (0x1u);
  /* 10ea21ac jmp 0x10ea21c6 */
  goto L_10ea21c6;
L_10ea21ae:;
  /* 10ea21ae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea21b0 jmp 0x10ea21c6 */
  goto L_10ea21c6;
L_10ea21b2:;
  /* 10ea21b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea21b5 cmp ecx, dword ptr [0x10ebde50] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10ebde50))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea21bb jge 0x10ea21c4 */
  if ((C.sf==C.of)) goto L_10ea21c4;
  /* 10ea21bd mov eax, 1 */
  EAX = (0x1u);
  /* 10ea21c2 jmp 0x10ea21c6 */
  goto L_10ea21c6;
L_10ea21c4:;
  /* 10ea21c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ea21c6:;
  /* 10ea21c6 mov esp, ebp */
  ESP = (EBP);
  /* 10ea21c8 pop ebp */
  EBP = (pop32());
  /* 10ea21c9 ret  */
  ESPCHK(0x10ea1ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_100121d0 @ 0x10ea21d0 (504 bytes, 145 insns) */
void f_10ea21d0(void) {
  FTRACE(0x10ea21d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ea21d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ea21d1 mov ebp, esp */
  EBP = (ESP);
  /* 10ea21d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea21d6 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea21da jne 0x10ea22ac */
  if (!C.zf) goto L_10ea22ac;
  /* 10ea21e0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea21e3 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10ea21e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ea21e8 jne 0x10ea21f9 */
  if (!C.zf) goto L_10ea21f9;
  /* 10ea21ea mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea21ed mov edx, dword ptr [ecx*4 + 0x10ebde5c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10ebde5c)));
  /* 10ea21f4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10ea21f7 jmp 0x10ea2206 */
  goto L_10ea2206;
L_10ea21f9:;
  /* 10ea21f9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea21fc mov ecx, dword ptr [eax*4 + 0x10ebde90] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10ebde90)));
  /* 10ea2203 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10ea2206:;
  /* 10ea2206 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea2209 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea220c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10ea220f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea2212 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea2215 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ea221b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ea221e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea2220 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea2223 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea2226 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10ea2229 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 10ea222d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ea222e mov ecx, 7 */
  ECX = (0x7u);
  /* 10ea2233 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10ea2235 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ea2238 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea223b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea223e jge 0x10ea2259 */
  if ((C.sf==C.of)) goto L_10ea2259;
  /* 10ea2240 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ea2243 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea2246 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ea2249 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea224c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ea224f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea2252 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea2254 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ea2257 jmp 0x10ea226d */
  goto L_10ea226d;
L_10ea2259:;
  /* 10ea2259 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ea225c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea225f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ea2262 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ea2265 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea2268 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea226a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10ea226d:;
  /* 10ea226d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea2271 jne 0x10ea22aa */
  if (!C.zf) goto L_10ea22aa;
  /* 10ea2273 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea2276 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10ea2279 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ea227b jne 0x10ea228c */
  if (!C.zf) goto L_10ea228c;
  /* 10ea227d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea2280 mov eax, dword ptr [edx*4 + 0x10ebde60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10ebde60)));
  /* 10ea2287 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10ea228a jmp 0x10ea2299 */
  goto L_10ea2299;
L_10ea228c:;
  /* 10ea228c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea228f mov edx, dword ptr [ecx*4 + 0x10ebde94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10ebde94)));
  /* 10ea2296 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10ea2299:;
  /* 10ea2299 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ea229c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea229f jle 0x10ea22aa */
  if ((C.zf||C.sf!=C.of)) goto L_10ea22aa;
  /* 10ea22a1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ea22a4 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea22a7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10ea22aa:;
  /* 10ea22aa jmp 0x10ea22e1 */
  goto L_10ea22e1;
L_10ea22ac:;
  /* 10ea22ac mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea22af and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10ea22b2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ea22b4 jne 0x10ea22c5 */
  if (!C.zf) goto L_10ea22c5;
  /* 10ea22b6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea22b9 mov ecx, dword ptr [eax*4 + 0x10ebde5c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10ebde5c)));
  /* 10ea22c0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10ea22c3 jmp 0x10ea22d2 */
  goto L_10ea22d2;
L_10ea22c5:;
  /* 10ea22c5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea22c8 mov eax, dword ptr [edx*4 + 0x10ebde90] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10ebde90)));
  /* 10ea22cf mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10ea22d2:;
  /* 10ea22d2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ea22d5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ea22d8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ea22db add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea22de mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10ea22e1:;
  /* 10ea22e1 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea22e5 jne 0x10ea2321 */
  if (!C.zf) goto L_10ea2321;
  /* 10ea22e7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ea22ea mov dword ptr [0x10ebde3c], eax */
  w32((uint32_t)(0x10ebde3c), (EAX));
  /* 10ea22ef mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10ea22f2 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ea22f5 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10ea22f8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea22fa imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ea22fd mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10ea2300 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea2302 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ea2308 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10ea230b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea230d mov dword ptr [0x10ebde40], ecx */
  w32((uint32_t)(0x10ebde40), (ECX));
  /* 10ea2313 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea2316 mov dword ptr [0x10ebde38], edx */
  w32((uint32_t)(0x10ebde38), (EDX));
  /* 10ea231c jmp 0x10ea23c4 */
  goto L_10ea23c4;
L_10ea2321:;
  /* 10ea2321 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ea2324 mov dword ptr [0x10ebde4c], eax */
  w32((uint32_t)(0x10ebde4c), (EAX));
  /* 10ea2329 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10ea232c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ea232f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10ea2332 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea2334 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ea2337 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10ea233a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea233c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ea2342 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10ea2345 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea2347 mov dword ptr [0x10ebde50], ecx */
  w32((uint32_t)(0x10ebde50), (ECX));
  /* 10ea234d mov edx, dword ptr [0x10ebdda8] */
  EDX = (r32((uint32_t)(0x10ebdda8)));
  /* 10ea2353 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ea2359 mov eax, dword ptr [0x10ebde50] */
  EAX = (r32((uint32_t)(0x10ebde50)));
  /* 10ea235e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea2360 mov dword ptr [0x10ebde50], eax */
  w32((uint32_t)(0x10ebde50), (EAX));
  /* 10ea2365 cmp dword ptr [0x10ebde50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebde50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea236c jge 0x10ea2391 */
  if ((C.sf==C.of)) goto L_10ea2391;
  /* 10ea236e mov ecx, dword ptr [0x10ebde50] */
  ECX = (r32((uint32_t)(0x10ebde50)));
  /* 10ea2374 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea237a mov dword ptr [0x10ebde50], ecx */
  w32((uint32_t)(0x10ebde50), (ECX));
  /* 10ea2380 mov edx, dword ptr [0x10ebde4c] */
  EDX = (r32((uint32_t)(0x10ebde4c)));
  /* 10ea2386 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea2389 mov dword ptr [0x10ebde4c], edx */
  w32((uint32_t)(0x10ebde4c), (EDX));
  /* 10ea238f jmp 0x10ea23bb */
  goto L_10ea23bb;
L_10ea2391:;
  /* 10ea2391 cmp dword ptr [0x10ebde50], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x10ebde50))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea239b jl 0x10ea23bb */
  if ((C.sf!=C.of)) goto L_10ea23bb;
  /* 10ea239d mov eax, dword ptr [0x10ebde50] */
  EAX = (r32((uint32_t)(0x10ebde50)));
  /* 10ea23a2 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea23a7 mov dword ptr [0x10ebde50], eax */
  w32((uint32_t)(0x10ebde50), (EAX));
  /* 10ea23ac mov ecx, dword ptr [0x10ebde4c] */
  ECX = (r32((uint32_t)(0x10ebde4c)));
  /* 10ea23b2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea23b5 mov dword ptr [0x10ebde4c], ecx */
  w32((uint32_t)(0x10ebde4c), (ECX));
L_10ea23bb:;
  /* 10ea23bb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea23be mov dword ptr [0x10ebde48], edx */
  w32((uint32_t)(0x10ebde48), (EDX));
L_10ea23c4:;
  /* 10ea23c4 mov esp, ebp */
  ESP = (EBP);
  /* 10ea23c6 pop ebp */
  EBP = (pop32());
  /* 10ea23c7 ret  */
  ESPCHK(0x10ea21d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100123d0 @ 0x10ea23d0 (382 bytes, 135 insns) */
void f_10ea23d0(void) {
  FTRACE(0x10ea23d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ea23d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ea23d1 mov ebp, esp */
  EBP = (ESP);
  /* 10ea23d3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ea23d5 push 0x10eba8b0 */
  push32((uint32_t)(0x10eba8b0u));
  /* 10ea23da push 0x10e9c098 */
  push32((uint32_t)(0x10e9c098u));
  /* 10ea23df mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10ea23e5 push eax */
  push32((uint32_t)(EAX));
  /* 10ea23e6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10ea23ed add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea23f0 push ebx */
  push32((uint32_t)(EBX));
  /* 10ea23f1 push esi */
  push32((uint32_t)(ESI));
  /* 10ea23f2 push edi */
  push32((uint32_t)(EDI));
  /* 10ea23f3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ea23f6 cmp dword ptr [0x10ebe7dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe7dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea23fd jne 0x10ea2442 */
  if (!C.zf) goto L_10ea2442;
  /* 10ea23ff push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea2401 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea2403 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ea2405 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea2407 call dword ptr [0x10ec0284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0284))), 0x10ea240du);
  /* 10ea240d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ea240f je 0x10ea241d */
  if (C.zf) goto L_10ea241d;
  /* 10ea2411 mov dword ptr [0x10ebe7dc], 1 */
  w32((uint32_t)(0x10ebe7dc), (0x1u));
  /* 10ea241b jmp 0x10ea2442 */
  goto L_10ea2442;
L_10ea241d:;
  /* 10ea241d push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea241f push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea2421 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ea2423 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea2425 call dword ptr [0x10ec029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec029c))), 0x10ea242bu);
  /* 10ea242b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ea242d je 0x10ea243b */
  if (C.zf) goto L_10ea243b;
  /* 10ea242f mov dword ptr [0x10ebe7dc], 2 */
  w32((uint32_t)(0x10ebe7dc), (0x2u));
  /* 10ea2439 jmp 0x10ea2442 */
  goto L_10ea2442;
L_10ea243b:;
  /* 10ea243b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea243d jmp 0x10ea2551 */
  goto L_10ea2551;
L_10ea2442:;
  /* 10ea2442 cmp dword ptr [0x10ebe7dc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe7dc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea2449 jne 0x10ea2466 */
  if (!C.zf) goto L_10ea2466;
  /* 10ea244b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea244e push eax */
  push32((uint32_t)(EAX));
  /* 10ea244f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea2452 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea2453 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea2456 push edx */
  push32((uint32_t)(EDX));
  /* 10ea2457 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea245a push eax */
  push32((uint32_t)(EAX));
  /* 10ea245b call dword ptr [0x10ec0284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0284))), 0x10ea2461u);
  /* 10ea2461 jmp 0x10ea2551 */
  goto L_10ea2551;
L_10ea2466:;
  /* 10ea2466 cmp dword ptr [0x10ebe7dc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe7dc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea246d jne 0x10ea254f */
  if (!C.zf) goto L_10ea254f;
  /* 10ea2473 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea2477 jne 0x10ea2482 */
  if (!C.zf) goto L_10ea2482;
  /* 10ea2479 mov ecx, dword ptr [0x10ebe690] */
  ECX = (r32((uint32_t)(0x10ebe690)));
  /* 10ea247f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10ea2482:;
  /* 10ea2482 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea2484 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea2486 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea2489 push edx */
  push32((uint32_t)(EDX));
  /* 10ea248a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea248d push eax */
  push32((uint32_t)(EAX));
  /* 10ea248e call dword ptr [0x10ec029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec029c))), 0x10ea2494u);
  /* 10ea2494 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10ea2497 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea249b jne 0x10ea24a4 */
  if (!C.zf) goto L_10ea24a4;
  /* 10ea249d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea249f jmp 0x10ea2551 */
  goto L_10ea2551;
L_10ea24a4:;
  /* 10ea24a4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ea24ab mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ea24ae add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea24b1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10ea24b3 call 0x10e96130 */
  push32(0x10ea24b8u); f_10e96130();
  /* 10ea24b8 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 10ea24bb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ea24be mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ea24c1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10ea24c4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10ea24cb jmp 0x10ea24e4 */
  goto L_10ea24e4;
  /* 10ea24cd mov eax, 1 */
  EAX = (0x1u);
  /* 10ea24d2 ret  */
  ESPCHK(0x10ea23d0u, _esp0);
  ESP += 4; return;
  /* 10ea24d3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10ea24d6 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10ea24dd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10ea24e4:;
  /* 10ea24e4 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea24e8 jne 0x10ea24ee */
  if (!C.zf) goto L_10ea24ee;
  /* 10ea24ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea24ec jmp 0x10ea2551 */
  goto L_10ea2551;
L_10ea24ee:;
  /* 10ea24ee mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ea24f1 push edx */
  push32((uint32_t)(EDX));
  /* 10ea24f2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ea24f5 push eax */
  push32((uint32_t)(EAX));
  /* 10ea24f6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea24f9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea24fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea24fd push edx */
  push32((uint32_t)(EDX));
  /* 10ea24fe call dword ptr [0x10ec029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec029c))), 0x10ea2504u);
  /* 10ea2504 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ea2506 jne 0x10ea250c */
  if (!C.zf) goto L_10ea250c;
  /* 10ea2508 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea250a jmp 0x10ea2551 */
  goto L_10ea2551;
L_10ea250c:;
  /* 10ea250c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea2510 jne 0x10ea252d */
  if (!C.zf) goto L_10ea252d;
  /* 10ea2512 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea2514 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea2516 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ea2518 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ea251b push eax */
  push32((uint32_t)(EAX));
  /* 10ea251c push 1 */
  push32((uint32_t)(0x1u));
  /* 10ea251e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ea2521 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea2522 call dword ptr [0x10ec02cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02cc))), 0x10ea2528u);
  /* 10ea2528 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10ea252b jmp 0x10ea254a */
  goto L_10ea254a;
L_10ea252d:;
  /* 10ea252d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea2530 push edx */
  push32((uint32_t)(EDX));
  /* 10ea2531 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea2534 push eax */
  push32((uint32_t)(EAX));
  /* 10ea2535 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ea2537 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ea253a push ecx */
  push32((uint32_t)(ECX));
  /* 10ea253b push 1 */
  push32((uint32_t)(0x1u));
  /* 10ea253d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ea2540 push edx */
  push32((uint32_t)(EDX));
  /* 10ea2541 call dword ptr [0x10ec02cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02cc))), 0x10ea2547u);
  /* 10ea2547 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10ea254a:;
  /* 10ea254a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ea254d jmp 0x10ea2551 */
  goto L_10ea2551;
L_10ea254f:;
  /* 10ea254f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ea2551:;
  /* 10ea2551 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10ea2554 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ea2557 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10ea255e pop edi */
  EDI = (pop32());
  /* 10ea255f pop esi */
  ESI = (pop32());
  /* 10ea2560 pop ebx */
  EBX = (pop32());
  /* 10ea2561 mov esp, ebp */
  ESP = (EBP);
  /* 10ea2563 pop ebp */
  EBP = (pop32());
  /* 10ea2564 ret  */
  ESPCHK(0x10ea23d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012570 @ 0x10ea2570 (398 bytes, 140 insns) */
void f_10ea2570(void) {
  FTRACE(0x10ea2570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ea2570 push ebp */
  push32((uint32_t)(EBP));
  /* 10ea2571 mov ebp, esp */
  EBP = (ESP);
  /* 10ea2573 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ea2575 push 0x10eba8c0 */
  push32((uint32_t)(0x10eba8c0u));
  /* 10ea257a push 0x10e9c098 */
  push32((uint32_t)(0x10e9c098u));
  /* 10ea257f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10ea2585 push eax */
  push32((uint32_t)(EAX));
  /* 10ea2586 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10ea258d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea2590 push ebx */
  push32((uint32_t)(EBX));
  /* 10ea2591 push esi */
  push32((uint32_t)(ESI));
  /* 10ea2592 push edi */
  push32((uint32_t)(EDI));
  /* 10ea2593 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ea2596 cmp dword ptr [0x10ebe7e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe7e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea259d jne 0x10ea25e2 */
  if (!C.zf) goto L_10ea25e2;
  /* 10ea259f push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea25a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea25a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ea25a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea25a7 call dword ptr [0x10ec0284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0284))), 0x10ea25adu);
  /* 10ea25ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ea25af je 0x10ea25bd */
  if (C.zf) goto L_10ea25bd;
  /* 10ea25b1 mov dword ptr [0x10ebe7e0], 1 */
  w32((uint32_t)(0x10ebe7e0), (0x1u));
  /* 10ea25bb jmp 0x10ea25e2 */
  goto L_10ea25e2;
L_10ea25bd:;
  /* 10ea25bd push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea25bf push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea25c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ea25c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea25c5 call dword ptr [0x10ec029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec029c))), 0x10ea25cbu);
  /* 10ea25cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ea25cd je 0x10ea25db */
  if (C.zf) goto L_10ea25db;
  /* 10ea25cf mov dword ptr [0x10ebe7e0], 2 */
  w32((uint32_t)(0x10ebe7e0), (0x2u));
  /* 10ea25d9 jmp 0x10ea25e2 */
  goto L_10ea25e2;
L_10ea25db:;
  /* 10ea25db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea25dd jmp 0x10ea2701 */
  goto L_10ea2701;
L_10ea25e2:;
  /* 10ea25e2 cmp dword ptr [0x10ebe7e0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe7e0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea25e9 jne 0x10ea2606 */
  if (!C.zf) goto L_10ea2606;
  /* 10ea25eb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea25ee push eax */
  push32((uint32_t)(EAX));
  /* 10ea25ef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea25f2 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea25f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea25f6 push edx */
  push32((uint32_t)(EDX));
  /* 10ea25f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea25fa push eax */
  push32((uint32_t)(EAX));
  /* 10ea25fb call dword ptr [0x10ec029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec029c))), 0x10ea2601u);
  /* 10ea2601 jmp 0x10ea2701 */
  goto L_10ea2701;
L_10ea2606:;
  /* 10ea2606 cmp dword ptr [0x10ebe7e0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe7e0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea260d jne 0x10ea26ff */
  if (!C.zf) goto L_10ea26ff;
  /* 10ea2613 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea2617 jne 0x10ea2622 */
  if (!C.zf) goto L_10ea2622;
  /* 10ea2619 mov ecx, dword ptr [0x10ebe690] */
  ECX = (r32((uint32_t)(0x10ebe690)));
  /* 10ea261f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10ea2622:;
  /* 10ea2622 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea2624 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea2626 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea2629 push edx */
  push32((uint32_t)(EDX));
  /* 10ea262a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea262d push eax */
  push32((uint32_t)(EAX));
  /* 10ea262e call dword ptr [0x10ec0284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0284))), 0x10ea2634u);
  /* 10ea2634 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10ea2637 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea263b jne 0x10ea2644 */
  if (!C.zf) goto L_10ea2644;
  /* 10ea263d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea263f jmp 0x10ea2701 */
  goto L_10ea2701;
L_10ea2644:;
  /* 10ea2644 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ea264b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ea264e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10ea2650 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea2653 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10ea2655 call 0x10e96130 */
  push32(0x10ea265au); f_10e96130();
  /* 10ea265a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 10ea265d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ea2660 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ea2663 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10ea2666 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10ea266d jmp 0x10ea2686 */
  goto L_10ea2686;
  /* 10ea266f mov eax, 1 */
  EAX = (0x1u);
  /* 10ea2674 ret  */
  ESPCHK(0x10ea2570u, _esp0);
  ESP += 4; return;
  /* 10ea2675 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10ea2678 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10ea267f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10ea2686:;
  /* 10ea2686 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea268a jne 0x10ea2690 */
  if (!C.zf) goto L_10ea2690;
  /* 10ea268c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea268e jmp 0x10ea2701 */
  goto L_10ea2701;
L_10ea2690:;
  /* 10ea2690 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ea2693 push edx */
  push32((uint32_t)(EDX));
  /* 10ea2694 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ea2697 push eax */
  push32((uint32_t)(EAX));
  /* 10ea2698 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea269b push ecx */
  push32((uint32_t)(ECX));
  /* 10ea269c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea269f push edx */
  push32((uint32_t)(EDX));
  /* 10ea26a0 call dword ptr [0x10ec0284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0284))), 0x10ea26a6u);
  /* 10ea26a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ea26a8 jne 0x10ea26ae */
  if (!C.zf) goto L_10ea26ae;
  /* 10ea26aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea26ac jmp 0x10ea2701 */
  goto L_10ea2701;
L_10ea26ae:;
  /* 10ea26ae cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea26b2 jne 0x10ea26d6 */
  if (!C.zf) goto L_10ea26d6;
  /* 10ea26b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea26b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea26b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea26ba push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea26bc push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ea26be mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ea26c1 push eax */
  push32((uint32_t)(EAX));
  /* 10ea26c2 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10ea26c7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ea26ca push ecx */
  push32((uint32_t)(ECX));
  /* 10ea26cb call dword ptr [0x10ec035c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec035c))), 0x10ea26d1u);
  /* 10ea26d1 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10ea26d4 jmp 0x10ea26fa */
  goto L_10ea26fa;
L_10ea26d6:;
  /* 10ea26d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea26d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea26da mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea26dd push edx */
  push32((uint32_t)(EDX));
  /* 10ea26de mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea26e1 push eax */
  push32((uint32_t)(EAX));
  /* 10ea26e2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ea26e4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ea26e7 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea26e8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10ea26ed mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ea26f0 push edx */
  push32((uint32_t)(EDX));
  /* 10ea26f1 call dword ptr [0x10ec035c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec035c))), 0x10ea26f7u);
  /* 10ea26f7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10ea26fa:;
  /* 10ea26fa mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ea26fd jmp 0x10ea2701 */
  goto L_10ea2701;
L_10ea26ff:;
  /* 10ea26ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ea2701:;
  /* 10ea2701 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10ea2704 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ea2707 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10ea270e pop edi */
  EDI = (pop32());
  /* 10ea270f pop esi */
  ESI = (pop32());
  /* 10ea2710 pop ebx */
  EBX = (pop32());
  /* 10ea2711 mov esp, ebp */
  ESP = (EBP);
  /* 10ea2713 pop ebp */
  EBP = (pop32());
  /* 10ea2714 ret  */
  ESPCHK(0x10ea2570u, _esp0);
  ESP += 4; return;
}

/* FUN_10012720 @ 0x10ea2720 (11 bytes, 6 insns) */
void f_10ea2720(void) {
  FTRACE(0x10ea2720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ea2720 push ebp */
  push32((uint32_t)(EBP));
  /* 10ea2721 mov ebp, esp */
  EBP = (ESP);
  /* 10ea2723 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea2726 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea2729 pop ebp */
  EBP = (pop32());
  /* 10ea272a ret  */
  ESPCHK(0x10ea2720u, _esp0);
  ESP += 4; return;
}

/* FUN_10012730 @ 0x10ea2730 (147 bytes, 43 insns) */
void f_10ea2730(void) {
  FTRACE(0x10ea2730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ea2730 push ebp */
  push32((uint32_t)(EBP));
  /* 10ea2731 mov ebp, esp */
  EBP = (ESP);
  /* 10ea2733 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea2734 cmp dword ptr [0x10ebe680], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe680))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea273b jne 0x10ea2757 */
  if (!C.zf) goto L_10ea2757;
  /* 10ea273d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea2741 jl 0x10ea2752 */
  if ((C.sf!=C.of)) goto L_10ea2752;
  /* 10ea2743 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea2747 jg 0x10ea2752 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ea2752;
  /* 10ea2749 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea274c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea274f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10ea2752:;
  /* 10ea2752 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea2755 jmp 0x10ea27bf */
  goto L_10ea27bf;
L_10ea2757:;
  /* 10ea2757 push 0x10ebe80c */
  push32((uint32_t)(0x10ebe80cu));
  /* 10ea275c call dword ptr [0x10ec0304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0304))), 0x10ea2762u);
  /* 10ea2762 cmp dword ptr [0x10ebe7fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe7fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea2769 je 0x10ea2789 */
  if (C.zf) goto L_10ea2789;
  /* 10ea276b push 0x10ebe80c */
  push32((uint32_t)(0x10ebe80cu));
  /* 10ea2770 call dword ptr [0x10ec02f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02f4))), 0x10ea2776u);
  /* 10ea2776 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10ea2778 call 0x10e96990 */
  push32(0x10ea277du); f_10e96990();
  /* 10ea277d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea2780 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10ea2787 jmp 0x10ea2790 */
  goto L_10ea2790;
L_10ea2789:;
  /* 10ea2789 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10ea2790:;
  /* 10ea2790 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea2793 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea2794 call 0x10ea27d0 */
  push32(0x10ea2799u); f_10ea27d0();
  /* 10ea2799 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea279c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ea279f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea27a3 je 0x10ea27b1 */
  if (C.zf) goto L_10ea27b1;
  /* 10ea27a5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10ea27a7 call 0x10e96a30 */
  push32(0x10ea27acu); f_10e96a30();
  /* 10ea27ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea27af jmp 0x10ea27bc */
  goto L_10ea27bc;
L_10ea27b1:;
  /* 10ea27b1 push 0x10ebe80c */
  push32((uint32_t)(0x10ebe80cu));
  /* 10ea27b6 call dword ptr [0x10ec02f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02f4))), 0x10ea27bcu);
L_10ea27bc:;
  /* 10ea27bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10ea27bf:;
  /* 10ea27bf mov esp, ebp */
  ESP = (EBP);
  /* 10ea27c1 pop ebp */
  EBP = (pop32());
  /* 10ea27c2 ret  */
  ESPCHK(0x10ea2730u, _esp0);
  ESP += 4; return;
}

/* FUN_100127d0 @ 0x10ea27d0 (299 bytes, 91 insns) */
void f_10ea27d0(void) {
  FTRACE(0x10ea27d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ea27d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ea27d1 mov ebp, esp */
  EBP = (ESP);
  /* 10ea27d3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea27d6 cmp dword ptr [0x10ebe680], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe680))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea27dd jne 0x10ea27fc */
  if (!C.zf) goto L_10ea27fc;
  /* 10ea27df cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea27e3 jl 0x10ea27f4 */
  if ((C.sf!=C.of)) goto L_10ea27f4;
  /* 10ea27e5 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea27e9 jg 0x10ea27f4 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ea27f4;
  /* 10ea27eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea27ee add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea27f1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10ea27f4:;
  /* 10ea27f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea27f7 jmp 0x10ea28f7 */
  goto L_10ea28f7;
L_10ea27fc:;
  /* 10ea27fc cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea2803 jge 0x10ea2843 */
  if ((C.sf==C.of)) goto L_10ea2843;
  /* 10ea2805 cmp dword ptr [0x10ebceb4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10ebceb4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea280c jle 0x10ea2821 */
  if ((C.zf||C.sf!=C.of)) goto L_10ea2821;
  /* 10ea280e push 1 */
  push32((uint32_t)(0x1u));
  /* 10ea2810 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea2813 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea2814 call 0x10e98fa0 */
  push32(0x10ea2819u); f_10e98fa0();
  /* 10ea2819 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea281c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10ea281f jmp 0x10ea2835 */
  goto L_10ea2835;
L_10ea2821:;
  /* 10ea2821 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea2824 mov eax, dword ptr [0x10ebcca8] */
  EAX = (r32((uint32_t)(0x10ebcca8)));
  /* 10ea2829 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ea282b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10ea282f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10ea2832 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10ea2835:;
  /* 10ea2835 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea2839 jne 0x10ea2843 */
  if (!C.zf) goto L_10ea2843;
  /* 10ea283b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea283e jmp 0x10ea28f7 */
  goto L_10ea28f7;
L_10ea2843:;
  /* 10ea2843 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea2846 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10ea2849 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ea284f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ea2855 mov eax, dword ptr [0x10ebcca8] */
  EAX = (r32((uint32_t)(0x10ebcca8)));
  /* 10ea285a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ea285c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10ea2860 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10ea2866 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ea2868 je 0x10ea288c */
  if (C.zf) goto L_10ea288c;
  /* 10ea286a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea286d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10ea2870 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ea2876 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 10ea2879 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10ea287c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 10ea287f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 10ea2883 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10ea288a jmp 0x10ea289d */
  goto L_10ea289d;
L_10ea288c:;
  /* 10ea288c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10ea288f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10ea2892 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 10ea2896 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_10ea289d:;
  /* 10ea289d push 1 */
  push32((uint32_t)(0x1u));
  /* 10ea289f push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea28a1 push 3 */
  push32((uint32_t)(0x3u));
  /* 10ea28a3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10ea28a6 push edx */
  push32((uint32_t)(EDX));
  /* 10ea28a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea28aa push eax */
  push32((uint32_t)(EAX));
  /* 10ea28ab lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10ea28ae push ecx */
  push32((uint32_t)(ECX));
  /* 10ea28af push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10ea28b4 mov edx, dword ptr [0x10ebe680] */
  EDX = (r32((uint32_t)(0x10ebe680)));
  /* 10ea28ba push edx */
  push32((uint32_t)(EDX));
  /* 10ea28bb call 0x10e9b380 */
  push32(0x10ea28c0u); f_10e9b380();
  /* 10ea28c0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea28c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ea28c6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea28ca jne 0x10ea28d1 */
  if (!C.zf) goto L_10ea28d1;
  /* 10ea28cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea28cf jmp 0x10ea28f7 */
  goto L_10ea28f7;
L_10ea28d1:;
  /* 10ea28d1 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea28d5 jne 0x10ea28e1 */
  if (!C.zf) goto L_10ea28e1;
  /* 10ea28d7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea28da and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ea28df jmp 0x10ea28f7 */
  goto L_10ea28f7;
L_10ea28e1:;
  /* 10ea28e1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea28e4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ea28e9 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 10ea28ec and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ea28f2 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10ea28f5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_10ea28f7:;
  /* 10ea28f7 mov esp, ebp */
  ESP = (EBP);
  /* 10ea28f9 pop ebp */
  EBP = (pop32());
  /* 10ea28fa ret  */
  ESPCHK(0x10ea27d0u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x10ea2900 (52 bytes, 19 insns) */
void f_10ea2900(void) {
  FTRACE(0x10ea2900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ea2900 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10ea2904 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10ea2908 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10ea290a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10ea290e jne 0x10ea2919 */
  if (!C.zf) goto L_10ea2919;
  /* 10ea2910 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10ea2914 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10ea2916 ret 0x10 */
  ESPCHK(0x10ea2900u, _esp0);
  ESP += 20; return;
L_10ea2919:;
  /* 10ea2919 push ebx */
  push32((uint32_t)(EBX));
  /* 10ea291a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10ea291c mov ebx, eax */
  EBX = (EAX);
  /* 10ea291e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10ea2922 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10ea2926 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea2928 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10ea292c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10ea292e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea2930 pop ebx */
  EBX = (pop32());
  /* 10ea2931 ret 0x10 */
  ESPCHK(0x10ea2900u, _esp0);
  ESP += 20; return;
}

/* FUN_10012940 @ 0x10ea2940 (46 bytes, 18 insns) */
void f_10ea2940(void) {
  FTRACE(0x10ea2940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ea2940 push ebp */
  push32((uint32_t)(EBP));
  /* 10ea2941 mov ebp, esp */
  EBP = (ESP);
  /* 10ea2943 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea2944 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10ea2946 call 0x10e96990 */
  push32(0x10ea294bu); f_10e96990();
  /* 10ea294b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea294e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea2951 push eax */
  push32((uint32_t)(EAX));
  /* 10ea2952 call 0x10ea2970 */
  push32(0x10ea2957u); f_10ea2970();
  /* 10ea2957 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea295a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ea295d push 0xc */
  push32((uint32_t)(0xcu));
  /* 10ea295f call 0x10e96a30 */
  push32(0x10ea2964u); f_10e96a30();
  /* 10ea2964 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea2967 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea296a mov esp, ebp */
  ESP = (EBP);
  /* 10ea296c pop ebp */
  EBP = (pop32());
  /* 10ea296d ret  */
  ESPCHK(0x10ea2940u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x10ea2970 (198 bytes, 69 insns) */
void f_10ea2970(void) {
  FTRACE(0x10ea2970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ea2970 push ebp */
  push32((uint32_t)(EBP));
  /* 10ea2971 mov ebp, esp */
  EBP = (ESP);
  /* 10ea2973 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea2976 mov eax, dword ptr [0x10ebe49c] */
  EAX = (r32((uint32_t)(0x10ebe49c)));
  /* 10ea297b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ea297e cmp dword ptr [0x10ebffa0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebffa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea2985 jne 0x10ea298e */
  if (!C.zf) goto L_10ea298e;
  /* 10ea2987 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea2989 jmp 0x10ea2a32 */
  goto L_10ea2a32;
L_10ea298e:;
  /* 10ea298e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea2992 jne 0x10ea29b6 */
  if (!C.zf) goto L_10ea29b6;
  /* 10ea2994 cmp dword ptr [0x10ebe4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea299b je 0x10ea29b6 */
  if (C.zf) goto L_10ea29b6;
  /* 10ea299d call 0x10ea2a90 */
  push32(0x10ea29a2u); f_10ea2a90();
  /* 10ea29a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ea29a4 je 0x10ea29ad */
  if (C.zf) goto L_10ea29ad;
  /* 10ea29a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea29a8 jmp 0x10ea2a32 */
  goto L_10ea2a32;
L_10ea29ad:;
  /* 10ea29ad mov ecx, dword ptr [0x10ebe49c] */
  ECX = (r32((uint32_t)(0x10ebe49c)));
  /* 10ea29b3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10ea29b6:;
  /* 10ea29b6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea29ba je 0x10ea2a30 */
  if (C.zf) goto L_10ea2a30;
  /* 10ea29bc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea29c0 je 0x10ea2a30 */
  if (C.zf) goto L_10ea2a30;
  /* 10ea29c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea29c5 push edx */
  push32((uint32_t)(EDX));
  /* 10ea29c6 call 0x10e95dc0 */
  push32(0x10ea29cbu); f_10e95dc0();
  /* 10ea29cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea29ce mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ea29d1:;
  /* 10ea29d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ea29d4 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea29d7 je 0x10ea2a30 */
  if (C.zf) goto L_10ea2a30;
  /* 10ea29d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ea29dc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ea29de push edx */
  push32((uint32_t)(EDX));
  /* 10ea29df call 0x10e95dc0 */
  push32(0x10ea29e4u); f_10e95dc0();
  /* 10ea29e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea29e7 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea29ea jbe 0x10ea2a25 */
  if ((C.cf||C.zf)) goto L_10ea2a25;
  /* 10ea29ec mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ea29ef mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ea29f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea29f4 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 10ea29f8 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea29fb jne 0x10ea2a25 */
  if (!C.zf) goto L_10ea2a25;
  /* 10ea29fd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea2a00 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea2a01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea2a04 push edx */
  push32((uint32_t)(EDX));
  /* 10ea2a05 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ea2a08 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ea2a0a push ecx */
  push32((uint32_t)(ECX));
  /* 10ea2a0b call 0x10ea2a40 */
  push32(0x10ea2a10u); f_10ea2a40();
  /* 10ea2a10 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea2a13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ea2a15 jne 0x10ea2a25 */
  if (!C.zf) goto L_10ea2a25;
  /* 10ea2a17 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ea2a1a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ea2a1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea2a1f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 10ea2a23 jmp 0x10ea2a32 */
  goto L_10ea2a32;
L_10ea2a25:;
  /* 10ea2a25 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ea2a28 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea2a2b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10ea2a2e jmp 0x10ea29d1 */
  goto L_10ea29d1;
L_10ea2a30:;
  /* 10ea2a30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ea2a32:;
  /* 10ea2a32 mov esp, ebp */
  ESP = (EBP);
  /* 10ea2a34 pop ebp */
  EBP = (pop32());
  /* 10ea2a35 ret  */
  ESPCHK(0x10ea2970u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x10ea2a40 (79 bytes, 32 insns) */
void f_10ea2a40(void) {
  FTRACE(0x10ea2a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ea2a40 push ebp */
  push32((uint32_t)(EBP));
  /* 10ea2a41 mov ebp, esp */
  EBP = (ESP);
  /* 10ea2a43 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea2a44 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea2a48 jne 0x10ea2a4e */
  if (!C.zf) goto L_10ea2a4e;
  /* 10ea2a4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea2a4c jmp 0x10ea2a8b */
  goto L_10ea2a8b;
L_10ea2a4e:;
  /* 10ea2a4e mov eax, dword ptr [0x10ebfb64] */
  EAX = (r32((uint32_t)(0x10ebfb64)));
  /* 10ea2a53 push eax */
  push32((uint32_t)(EAX));
  /* 10ea2a54 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea2a57 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea2a58 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea2a5b push edx */
  push32((uint32_t)(EDX));
  /* 10ea2a5c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea2a5f push eax */
  push32((uint32_t)(EAX));
  /* 10ea2a60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea2a63 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea2a64 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ea2a66 mov edx, dword ptr [0x10ebfe04] */
  EDX = (r32((uint32_t)(0x10ebfe04)));
  /* 10ea2a6c push edx */
  push32((uint32_t)(EDX));
  /* 10ea2a6d call 0x10ea2b40 */
  push32(0x10ea2a72u); f_10ea2b40();
  /* 10ea2a72 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea2a75 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ea2a78 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea2a7c jne 0x10ea2a85 */
  if (!C.zf) goto L_10ea2a85;
  /* 10ea2a7e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 10ea2a83 jmp 0x10ea2a8b */
  goto L_10ea2a8b;
L_10ea2a85:;
  /* 10ea2a85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea2a88 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10ea2a8b:;
  /* 10ea2a8b mov esp, ebp */
  ESP = (EBP);
  /* 10ea2a8d pop ebp */
  EBP = (pop32());
  /* 10ea2a8e ret  */
  ESPCHK(0x10ea2a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10012a90 @ 0x10ea2a90 (174 bytes, 66 insns) */
void f_10ea2a90(void) {
  FTRACE(0x10ea2a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ea2a90 push ebp */
  push32((uint32_t)(EBP));
  /* 10ea2a91 mov ebp, esp */
  EBP = (ESP);
  /* 10ea2a93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea2a96 mov eax, dword ptr [0x10ebe4a4] */
  EAX = (r32((uint32_t)(0x10ebe4a4)));
  /* 10ea2a9b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ea2a9e:;
  /* 10ea2a9e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea2aa1 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea2aa4 je 0x10ea2b38 */
  if (C.zf) goto L_10ea2b38;
  /* 10ea2aaa push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea2aac push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea2aae push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea2ab0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea2ab2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ea2ab4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea2ab7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ea2ab9 push eax */
  push32((uint32_t)(EAX));
  /* 10ea2aba push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea2abc push 1 */
  push32((uint32_t)(0x1u));
  /* 10ea2abe call dword ptr [0x10ec035c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec035c))), 0x10ea2ac4u);
  /* 10ea2ac4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ea2ac7 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea2acb jne 0x10ea2ad2 */
  if (!C.zf) goto L_10ea2ad2;
  /* 10ea2acd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ea2ad0 jmp 0x10ea2b3a */
  goto L_10ea2b3a;
L_10ea2ad2:;
  /* 10ea2ad2 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10ea2ad4 push 0x10eba8cc */
  push32((uint32_t)(0x10eba8ccu));
  /* 10ea2ad9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ea2adb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea2ade push ecx */
  push32((uint32_t)(ECX));
  /* 10ea2adf call 0x10e92f90 */
  push32(0x10ea2ae4u); f_10e92f90();
  /* 10ea2ae4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea2ae7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ea2aea cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea2aee jne 0x10ea2af5 */
  if (!C.zf) goto L_10ea2af5;
  /* 10ea2af0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ea2af3 jmp 0x10ea2b3a */
  goto L_10ea2b3a;
L_10ea2af5:;
  /* 10ea2af5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea2af7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea2af9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea2afc push edx */
  push32((uint32_t)(EDX));
  /* 10ea2afd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ea2b00 push eax */
  push32((uint32_t)(EAX));
  /* 10ea2b01 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ea2b03 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea2b06 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ea2b08 push edx */
  push32((uint32_t)(EDX));
  /* 10ea2b09 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea2b0b push 1 */
  push32((uint32_t)(0x1u));
  /* 10ea2b0d call dword ptr [0x10ec035c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec035c))), 0x10ea2b13u);
  /* 10ea2b13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ea2b15 jne 0x10ea2b1c */
  if (!C.zf) goto L_10ea2b1c;
  /* 10ea2b17 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ea2b1a jmp 0x10ea2b3a */
  goto L_10ea2b3a;
L_10ea2b1c:;
  /* 10ea2b1c push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea2b1e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ea2b21 push eax */
  push32((uint32_t)(EAX));
  /* 10ea2b22 call 0x10ea2f90 */
  push32(0x10ea2b27u); f_10ea2f90();
  /* 10ea2b27 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea2b2a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea2b2d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea2b30 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ea2b33 jmp 0x10ea2a9e */
  goto L_10ea2a9e;
L_10ea2b38:;
  /* 10ea2b38 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ea2b3a:;
  /* 10ea2b3a mov esp, ebp */
  ESP = (EBP);
  /* 10ea2b3c pop ebp */
  EBP = (pop32());
  /* 10ea2b3d ret  */
  ESPCHK(0x10ea2a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b40 @ 0x10ea2b40 (970 bytes, 340 insns) */
void f_10ea2b40(void) {
  FTRACE(0x10ea2b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ea2b40 push ebp */
  push32((uint32_t)(EBP));
  /* 10ea2b41 mov ebp, esp */
  EBP = (ESP);
  /* 10ea2b43 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ea2b45 push 0x10eba920 */
  push32((uint32_t)(0x10eba920u));
  /* 10ea2b4a push 0x10e9c098 */
  push32((uint32_t)(0x10e9c098u));
  /* 10ea2b4f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10ea2b55 push eax */
  push32((uint32_t)(EAX));
  /* 10ea2b56 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10ea2b5d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea2b60 push ebx */
  push32((uint32_t)(EBX));
  /* 10ea2b61 push esi */
  push32((uint32_t)(ESI));
  /* 10ea2b62 push edi */
  push32((uint32_t)(EDI));
  /* 10ea2b63 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ea2b66 cmp dword ptr [0x10ebe7e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe7e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea2b6d jne 0x10ea2bc6 */
  if (!C.zf) goto L_10ea2bc6;
  /* 10ea2b6f push 1 */
  push32((uint32_t)(0x1u));
  /* 10ea2b71 push 0x10eb9f78 */
  push32((uint32_t)(0x10eb9f78u));
  /* 10ea2b76 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ea2b78 push 0x10eb9f78 */
  push32((uint32_t)(0x10eb9f78u));
  /* 10ea2b7d push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea2b7f push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea2b81 call dword ptr [0x10ec027c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec027c))), 0x10ea2b87u);
  /* 10ea2b87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ea2b89 je 0x10ea2b97 */
  if (C.zf) goto L_10ea2b97;
  /* 10ea2b8b mov dword ptr [0x10ebe7e4], 1 */
  w32((uint32_t)(0x10ebe7e4), (0x1u));
  /* 10ea2b95 jmp 0x10ea2bc6 */
  goto L_10ea2bc6;
L_10ea2b97:;
  /* 10ea2b97 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ea2b99 push 0x10eb9f74 */
  push32((uint32_t)(0x10eb9f74u));
  /* 10ea2b9e push 1 */
  push32((uint32_t)(0x1u));
  /* 10ea2ba0 push 0x10eb9f74 */
  push32((uint32_t)(0x10eb9f74u));
  /* 10ea2ba5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea2ba7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea2ba9 call dword ptr [0x10ec0280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0280))), 0x10ea2bafu);
  /* 10ea2baf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ea2bb1 je 0x10ea2bbf */
  if (C.zf) goto L_10ea2bbf;
  /* 10ea2bb3 mov dword ptr [0x10ebe7e4], 2 */
  w32((uint32_t)(0x10ebe7e4), (0x2u));
  /* 10ea2bbd jmp 0x10ea2bc6 */
  goto L_10ea2bc6;
L_10ea2bbf:;
  /* 10ea2bbf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea2bc1 jmp 0x10ea2f24 */
  goto L_10ea2f24;
L_10ea2bc6:;
  /* 10ea2bc6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea2bca jle 0x10ea2bdf */
  if ((C.zf||C.sf!=C.of)) goto L_10ea2bdf;
  /* 10ea2bcc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea2bcf push eax */
  push32((uint32_t)(EAX));
  /* 10ea2bd0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea2bd3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea2bd4 call 0x10ea2f40 */
  push32(0x10ea2bd9u); f_10ea2f40();
  /* 10ea2bd9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea2bdc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10ea2bdf:;
  /* 10ea2bdf cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea2be3 jle 0x10ea2bf8 */
  if ((C.zf||C.sf!=C.of)) goto L_10ea2bf8;
  /* 10ea2be5 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ea2be8 push edx */
  push32((uint32_t)(EDX));
  /* 10ea2be9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ea2bec push eax */
  push32((uint32_t)(EAX));
  /* 10ea2bed call 0x10ea2f40 */
  push32(0x10ea2bf2u); f_10ea2f40();
  /* 10ea2bf2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea2bf5 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_10ea2bf8:;
  /* 10ea2bf8 cmp dword ptr [0x10ebe7e4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe7e4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea2bff jne 0x10ea2c24 */
  if (!C.zf) goto L_10ea2c24;
  /* 10ea2c01 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ea2c04 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea2c05 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ea2c08 push edx */
  push32((uint32_t)(EDX));
  /* 10ea2c09 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea2c0c push eax */
  push32((uint32_t)(EAX));
  /* 10ea2c0d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea2c10 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea2c11 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea2c14 push edx */
  push32((uint32_t)(EDX));
  /* 10ea2c15 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea2c18 push eax */
  push32((uint32_t)(EAX));
  /* 10ea2c19 call dword ptr [0x10ec0280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0280))), 0x10ea2c1fu);
  /* 10ea2c1f jmp 0x10ea2f24 */
  goto L_10ea2f24;
L_10ea2c24:;
  /* 10ea2c24 cmp dword ptr [0x10ebe7e4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe7e4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea2c2b jne 0x10ea2f22 */
  if (!C.zf) goto L_10ea2f22;
  /* 10ea2c31 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea2c35 jne 0x10ea2c40 */
  if (!C.zf) goto L_10ea2c40;
  /* 10ea2c37 mov ecx, dword ptr [0x10ebe690] */
  ECX = (r32((uint32_t)(0x10ebe690)));
  /* 10ea2c3d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_10ea2c40:;
  /* 10ea2c40 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea2c44 je 0x10ea2c50 */
  if (C.zf) goto L_10ea2c50;
  /* 10ea2c46 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea2c4a jne 0x10ea2dcc */
  if (!C.zf) goto L_10ea2dcc;
L_10ea2c50:;
  /* 10ea2c50 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea2c53 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea2c56 jne 0x10ea2c62 */
  if (!C.zf) goto L_10ea2c62;
  /* 10ea2c58 mov eax, 2 */
  EAX = (0x2u);
  /* 10ea2c5d jmp 0x10ea2f24 */
  goto L_10ea2f24;
L_10ea2c62:;
  /* 10ea2c62 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea2c66 jle 0x10ea2c72 */
  if ((C.zf||C.sf!=C.of)) goto L_10ea2c72;
  /* 10ea2c68 mov eax, 1 */
  EAX = (0x1u);
  /* 10ea2c6d jmp 0x10ea2f24 */
  goto L_10ea2f24;
L_10ea2c72:;
  /* 10ea2c72 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea2c76 jle 0x10ea2c82 */
  if ((C.zf||C.sf!=C.of)) goto L_10ea2c82;
  /* 10ea2c78 mov eax, 3 */
  EAX = (0x3u);
  /* 10ea2c7d jmp 0x10ea2f24 */
  goto L_10ea2f24;
L_10ea2c82:;
  /* 10ea2c82 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 10ea2c85 push eax */
  push32((uint32_t)(EAX));
  /* 10ea2c86 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10ea2c89 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea2c8a call dword ptr [0x10ec02d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02d8))), 0x10ea2c90u);
  /* 10ea2c90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ea2c92 jne 0x10ea2c9b */
  if (!C.zf) goto L_10ea2c9b;
  /* 10ea2c94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea2c96 jmp 0x10ea2f24 */
  goto L_10ea2f24;
L_10ea2c9b:;
  /* 10ea2c9b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea2c9f jne 0x10ea2ca7 */
  if (!C.zf) goto L_10ea2ca7;
  /* 10ea2ca1 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea2ca5 je 0x10ea2cd4 */
  if (C.zf) goto L_10ea2cd4;
L_10ea2ca7:;
  /* 10ea2ca7 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea2cab jne 0x10ea2cb3 */
  if (!C.zf) goto L_10ea2cb3;
  /* 10ea2cad cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea2cb1 je 0x10ea2cd4 */
  if (C.zf) goto L_10ea2cd4;
L_10ea2cb3:;
  /* 10ea2cb3 push 0x10eba8e0 */
  push32((uint32_t)(0x10eba8e0u));
  /* 10ea2cb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea2cba push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 10ea2cbf push 0x10eba8d8 */
  push32((uint32_t)(0x10eba8d8u));
  /* 10ea2cc4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ea2cc6 call 0x10e92050 */
  push32(0x10ea2ccbu); f_10e92050();
  /* 10ea2ccb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea2cce cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea2cd1 jne 0x10ea2cd4 */
  if (!C.zf) goto L_10ea2cd4;
  /* 10ea2cd3 int3  */
  x86_unimpl("int3 @ 0x10ea2cd3");
L_10ea2cd4:;
  /* 10ea2cd4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ea2cd6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ea2cd8 jne 0x10ea2c9b */
  if (!C.zf) goto L_10ea2c9b;
  /* 10ea2cda cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea2cde jle 0x10ea2d53 */
  if ((C.zf||C.sf!=C.of)) goto L_10ea2d53;
  /* 10ea2ce0 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea2ce4 jae 0x10ea2cf0 */
  if (!C.cf) goto L_10ea2cf0;
  /* 10ea2ce6 mov eax, 3 */
  EAX = (0x3u);
  /* 10ea2ceb jmp 0x10ea2f24 */
  goto L_10ea2f24;
L_10ea2cf0:;
  /* 10ea2cf0 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 10ea2cf3 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 10ea2cf6 jmp 0x10ea2d01 */
  goto L_10ea2d01;
L_10ea2cf8:;
  /* 10ea2cf8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10ea2cfb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea2cfe mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_10ea2d01:;
  /* 10ea2d01 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10ea2d04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea2d06 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ea2d08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ea2d0a je 0x10ea2d49 */
  if (C.zf) goto L_10ea2d49;
  /* 10ea2d0c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10ea2d0f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ea2d11 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10ea2d14 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ea2d16 je 0x10ea2d49 */
  if (C.zf) goto L_10ea2d49;
  /* 10ea2d18 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea2d1b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ea2d1d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ea2d1f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10ea2d22 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea2d24 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ea2d26 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea2d28 jl 0x10ea2d47 */
  if ((C.sf!=C.of)) goto L_10ea2d47;
  /* 10ea2d2a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea2d2d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ea2d2f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ea2d31 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10ea2d34 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ea2d36 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10ea2d39 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea2d3b jg 0x10ea2d47 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ea2d47;
  /* 10ea2d3d mov eax, 2 */
  EAX = (0x2u);
  /* 10ea2d42 jmp 0x10ea2f24 */
  goto L_10ea2f24;
L_10ea2d47:;
  /* 10ea2d47 jmp 0x10ea2cf8 */
  goto L_10ea2cf8;
L_10ea2d49:;
  /* 10ea2d49 mov eax, 3 */
  EAX = (0x3u);
  /* 10ea2d4e jmp 0x10ea2f24 */
  goto L_10ea2f24;
L_10ea2d53:;
  /* 10ea2d53 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea2d57 jle 0x10ea2dcc */
  if ((C.zf||C.sf!=C.of)) goto L_10ea2dcc;
  /* 10ea2d59 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea2d5d jae 0x10ea2d69 */
  if (!C.cf) goto L_10ea2d69;
  /* 10ea2d5f mov eax, 1 */
  EAX = (0x1u);
  /* 10ea2d64 jmp 0x10ea2f24 */
  goto L_10ea2f24;
L_10ea2d69:;
  /* 10ea2d69 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 10ea2d6c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 10ea2d6f jmp 0x10ea2d7a */
  goto L_10ea2d7a;
L_10ea2d71:;
  /* 10ea2d71 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10ea2d74 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea2d77 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_10ea2d7a:;
  /* 10ea2d7a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10ea2d7d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ea2d7f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ea2d81 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ea2d83 je 0x10ea2dc2 */
  if (C.zf) goto L_10ea2dc2;
  /* 10ea2d85 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10ea2d88 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ea2d8a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10ea2d8d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ea2d8f je 0x10ea2dc2 */
  if (C.zf) goto L_10ea2dc2;
  /* 10ea2d91 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ea2d94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea2d96 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ea2d98 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10ea2d9b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ea2d9d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ea2d9f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea2da1 jl 0x10ea2dc0 */
  if ((C.sf!=C.of)) goto L_10ea2dc0;
  /* 10ea2da3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ea2da6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ea2da8 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ea2daa mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10ea2dad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea2daf mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10ea2db2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea2db4 jg 0x10ea2dc0 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ea2dc0;
  /* 10ea2db6 mov eax, 2 */
  EAX = (0x2u);
  /* 10ea2dbb jmp 0x10ea2f24 */
  goto L_10ea2f24;
L_10ea2dc0:;
  /* 10ea2dc0 jmp 0x10ea2d71 */
  goto L_10ea2d71;
L_10ea2dc2:;
  /* 10ea2dc2 mov eax, 1 */
  EAX = (0x1u);
  /* 10ea2dc7 jmp 0x10ea2f24 */
  goto L_10ea2f24;
L_10ea2dcc:;
  /* 10ea2dcc push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea2dce push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea2dd0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea2dd3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea2dd4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea2dd7 push edx */
  push32((uint32_t)(EDX));
  /* 10ea2dd8 push 9 */
  push32((uint32_t)(0x9u));
  /* 10ea2dda mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10ea2ddd push eax */
  push32((uint32_t)(EAX));
  /* 10ea2dde call dword ptr [0x10ec02cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02cc))), 0x10ea2de4u);
  /* 10ea2de4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10ea2de7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea2deb jne 0x10ea2df4 */
  if (!C.zf) goto L_10ea2df4;
  /* 10ea2ded xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea2def jmp 0x10ea2f24 */
  goto L_10ea2f24;
L_10ea2df4:;
  /* 10ea2df4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ea2dfb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ea2dfe shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10ea2e00 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea2e03 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10ea2e05 call 0x10e96130 */
  push32(0x10ea2e0au); f_10e96130();
  /* 10ea2e0a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 10ea2e0d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ea2e10 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 10ea2e13 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10ea2e16 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10ea2e1d jmp 0x10ea2e36 */
  goto L_10ea2e36;
  /* 10ea2e1f mov eax, 1 */
  EAX = (0x1u);
  /* 10ea2e24 ret  */
  ESPCHK(0x10ea2b40u, _esp0);
  ESP += 4; return;
  /* 10ea2e25 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10ea2e28 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10ea2e2f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10ea2e36:;
  /* 10ea2e36 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea2e3a jne 0x10ea2e43 */
  if (!C.zf) goto L_10ea2e43;
  /* 10ea2e3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea2e3e jmp 0x10ea2f24 */
  goto L_10ea2f24;
L_10ea2e43:;
  /* 10ea2e43 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ea2e46 push edx */
  push32((uint32_t)(EDX));
  /* 10ea2e47 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ea2e4a push eax */
  push32((uint32_t)(EAX));
  /* 10ea2e4b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ea2e4e push ecx */
  push32((uint32_t)(ECX));
  /* 10ea2e4f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ea2e52 push edx */
  push32((uint32_t)(EDX));
  /* 10ea2e53 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ea2e55 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10ea2e58 push eax */
  push32((uint32_t)(EAX));
  /* 10ea2e59 call dword ptr [0x10ec02cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02cc))), 0x10ea2e5fu);
  /* 10ea2e5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ea2e61 jne 0x10ea2e6a */
  if (!C.zf) goto L_10ea2e6a;
  /* 10ea2e63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea2e65 jmp 0x10ea2f24 */
  goto L_10ea2f24;
L_10ea2e6a:;
  /* 10ea2e6a push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea2e6c push 0 */
  push32((uint32_t)(0x0u));
  /* 10ea2e6e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ea2e71 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea2e72 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ea2e75 push edx */
  push32((uint32_t)(EDX));
  /* 10ea2e76 push 9 */
  push32((uint32_t)(0x9u));
  /* 10ea2e78 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10ea2e7b push eax */
  push32((uint32_t)(EAX));
  /* 10ea2e7c call dword ptr [0x10ec02cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02cc))), 0x10ea2e82u);
  /* 10ea2e82 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10ea2e85 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea2e89 jne 0x10ea2e92 */
  if (!C.zf) goto L_10ea2e92;
  /* 10ea2e8b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea2e8d jmp 0x10ea2f24 */
  goto L_10ea2f24;
L_10ea2e92:;
  /* 10ea2e92 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10ea2e99 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ea2e9c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10ea2e9e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea2ea1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10ea2ea3 call 0x10e96130 */
  push32(0x10ea2ea8u); f_10e96130();
  /* 10ea2ea8 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 10ea2eab mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ea2eae mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 10ea2eb1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10ea2eb4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10ea2ebb jmp 0x10ea2ed4 */
  goto L_10ea2ed4;
  /* 10ea2ebd mov eax, 1 */
  EAX = (0x1u);
  /* 10ea2ec2 ret  */
  ESPCHK(0x10ea2b40u, _esp0);
  ESP += 4; return;
  /* 10ea2ec3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10ea2ec6 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10ea2ecd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10ea2ed4:;
  /* 10ea2ed4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea2ed8 jne 0x10ea2ede */
  if (!C.zf) goto L_10ea2ede;
  /* 10ea2eda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea2edc jmp 0x10ea2f24 */
  goto L_10ea2f24;
L_10ea2ede:;
  /* 10ea2ede mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ea2ee1 push edx */
  push32((uint32_t)(EDX));
  /* 10ea2ee2 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ea2ee5 push eax */
  push32((uint32_t)(EAX));
  /* 10ea2ee6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ea2ee9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea2eea mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ea2eed push edx */
  push32((uint32_t)(EDX));
  /* 10ea2eee push 1 */
  push32((uint32_t)(0x1u));
  /* 10ea2ef0 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10ea2ef3 push eax */
  push32((uint32_t)(EAX));
  /* 10ea2ef4 call dword ptr [0x10ec02cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02cc))), 0x10ea2efau);
  /* 10ea2efa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ea2efc jne 0x10ea2f02 */
  if (!C.zf) goto L_10ea2f02;
  /* 10ea2efe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea2f00 jmp 0x10ea2f24 */
  goto L_10ea2f24;
L_10ea2f02:;
  /* 10ea2f02 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ea2f05 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea2f06 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ea2f09 push edx */
  push32((uint32_t)(EDX));
  /* 10ea2f0a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ea2f0d push eax */
  push32((uint32_t)(EAX));
  /* 10ea2f0e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ea2f11 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea2f12 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea2f15 push edx */
  push32((uint32_t)(EDX));
  /* 10ea2f16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea2f19 push eax */
  push32((uint32_t)(EAX));
  /* 10ea2f1a call dword ptr [0x10ec027c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec027c))), 0x10ea2f20u);
  /* 10ea2f20 jmp 0x10ea2f24 */
  goto L_10ea2f24;
L_10ea2f22:;
  /* 10ea2f22 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ea2f24:;
  /* 10ea2f24 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 10ea2f27 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ea2f2a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10ea2f31 pop edi */
  EDI = (pop32());
  /* 10ea2f32 pop esi */
  ESI = (pop32());
  /* 10ea2f33 pop ebx */
  EBX = (pop32());
  /* 10ea2f34 mov esp, ebp */
  ESP = (EBP);
  /* 10ea2f36 pop ebp */
  EBP = (pop32());
  /* 10ea2f37 ret  */
  ESPCHK(0x10ea2b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f40 @ 0x10ea2f40 (80 bytes, 32 insns) */
void f_10ea2f40(void) {
  FTRACE(0x10ea2f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ea2f40 push ebp */
  push32((uint32_t)(EBP));
  /* 10ea2f41 mov ebp, esp */
  EBP = (ESP);
  /* 10ea2f43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea2f46 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea2f49 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ea2f4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea2f4f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10ea2f52:;
  /* 10ea2f52 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ea2f55 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ea2f58 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea2f5b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ea2f5e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ea2f60 je 0x10ea2f77 */
  if (C.zf) goto L_10ea2f77;
  /* 10ea2f62 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea2f65 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ea2f68 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ea2f6a je 0x10ea2f77 */
  if (C.zf) goto L_10ea2f77;
  /* 10ea2f6c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea2f6f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea2f72 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ea2f75 jmp 0x10ea2f52 */
  goto L_10ea2f52;
L_10ea2f77:;
  /* 10ea2f77 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea2f7a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ea2f7d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ea2f7f jne 0x10ea2f89 */
  if (!C.zf) goto L_10ea2f89;
  /* 10ea2f81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea2f84 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea2f87 jmp 0x10ea2f8c */
  goto L_10ea2f8c;
L_10ea2f89:;
  /* 10ea2f89 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10ea2f8c:;
  /* 10ea2f8c mov esp, ebp */
  ESP = (EBP);
  /* 10ea2f8e pop ebp */
  EBP = (pop32());
  /* 10ea2f8f ret  */
  ESPCHK(0x10ea2f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f90 @ 0x10ea2f90 (736 bytes, 224 insns) */
void f_10ea2f90(void) {
  FTRACE(0x10ea2f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ea2f90 push ebp */
  push32((uint32_t)(EBP));
  /* 10ea2f91 mov ebp, esp */
  EBP = (ESP);
  /* 10ea2f93 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea2f96 push esi */
  push32((uint32_t)(ESI));
  /* 10ea2f97 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea2f9b je 0x10ea2fbc */
  if (C.zf) goto L_10ea2fbc;
  /* 10ea2f9d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10ea2f9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea2fa2 push eax */
  push32((uint32_t)(EAX));
  /* 10ea2fa3 call 0x10ea33e0 */
  push32(0x10ea2fa8u); f_10ea33e0();
  /* 10ea2fa8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea2fab mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10ea2fae cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea2fb2 je 0x10ea2fbc */
  if (C.zf) goto L_10ea2fbc;
  /* 10ea2fb4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea2fb7 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea2fba jne 0x10ea2fc4 */
  if (!C.zf) goto L_10ea2fc4;
L_10ea2fbc:;
  /* 10ea2fbc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ea2fbf jmp 0x10ea326b */
  goto L_10ea326b;
L_10ea2fc4:;
  /* 10ea2fc4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ea2fc7 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10ea2fcb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ea2fcd sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea2fcf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10ea2fd0 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10ea2fd3 mov ecx, dword ptr [0x10ebe49c] */
  ECX = (r32((uint32_t)(0x10ebe49c)));
  /* 10ea2fd9 cmp ecx, dword ptr [0x10ebe4a0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10ebe4a0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea2fdf jne 0x10ea2ff5 */
  if (!C.zf) goto L_10ea2ff5;
  /* 10ea2fe1 mov edx, dword ptr [0x10ebe49c] */
  EDX = (r32((uint32_t)(0x10ebe49c)));
  /* 10ea2fe7 push edx */
  push32((uint32_t)(EDX));
  /* 10ea2fe8 call 0x10ea32f0 */
  push32(0x10ea2fedu); f_10ea32f0();
  /* 10ea2fed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea2ff0 mov dword ptr [0x10ebe49c], eax */
  w32((uint32_t)(0x10ebe49c), (EAX));
L_10ea2ff5:;
  /* 10ea2ff5 cmp dword ptr [0x10ebe49c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe49c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea2ffc jne 0x10ea30b5 */
  if (!C.zf) goto L_10ea30b5;
  /* 10ea3002 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea3006 je 0x10ea3027 */
  if (C.zf) goto L_10ea3027;
  /* 10ea3008 cmp dword ptr [0x10ebe4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea300f je 0x10ea3027 */
  if (C.zf) goto L_10ea3027;
  /* 10ea3011 call 0x10ea2a90 */
  push32(0x10ea3016u); f_10ea2a90();
  /* 10ea3016 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ea3018 je 0x10ea3022 */
  if (C.zf) goto L_10ea3022;
  /* 10ea301a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ea301d jmp 0x10ea326b */
  goto L_10ea326b;
L_10ea3022:;
  /* 10ea3022 jmp 0x10ea30b5 */
  goto L_10ea30b5;
L_10ea3027:;
  /* 10ea3027 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea302b je 0x10ea3034 */
  if (C.zf) goto L_10ea3034;
  /* 10ea302d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea302f jmp 0x10ea326b */
  goto L_10ea326b;
L_10ea3034:;
  /* 10ea3034 cmp dword ptr [0x10ebe49c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe49c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea303b jne 0x10ea3074 */
  if (!C.zf) goto L_10ea3074;
  /* 10ea303d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 10ea3042 push 0x10eba938 */
  push32((uint32_t)(0x10eba938u));
  /* 10ea3047 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ea3049 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ea304b call 0x10e92f90 */
  push32(0x10ea3050u); f_10e92f90();
  /* 10ea3050 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea3053 mov dword ptr [0x10ebe49c], eax */
  w32((uint32_t)(0x10ebe49c), (EAX));
  /* 10ea3058 cmp dword ptr [0x10ebe49c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe49c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea305f jne 0x10ea3069 */
  if (!C.zf) goto L_10ea3069;
  /* 10ea3061 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ea3064 jmp 0x10ea326b */
  goto L_10ea326b;
L_10ea3069:;
  /* 10ea3069 mov eax, dword ptr [0x10ebe49c] */
  EAX = (r32((uint32_t)(0x10ebe49c)));
  /* 10ea306e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10ea3074:;
  /* 10ea3074 cmp dword ptr [0x10ebe4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea307b jne 0x10ea30b5 */
  if (!C.zf) goto L_10ea30b5;
  /* 10ea307d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 10ea3082 push 0x10eba938 */
  push32((uint32_t)(0x10eba938u));
  /* 10ea3087 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ea3089 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ea308b call 0x10e92f90 */
  push32(0x10ea3090u); f_10e92f90();
  /* 10ea3090 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea3093 mov dword ptr [0x10ebe4a4], eax */
  w32((uint32_t)(0x10ebe4a4), (EAX));
  /* 10ea3098 cmp dword ptr [0x10ebe4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea309f jne 0x10ea30a9 */
  if (!C.zf) goto L_10ea30a9;
  /* 10ea30a1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ea30a4 jmp 0x10ea326b */
  goto L_10ea326b;
L_10ea30a9:;
  /* 10ea30a9 mov ecx, dword ptr [0x10ebe4a4] */
  ECX = (r32((uint32_t)(0x10ebe4a4)));
  /* 10ea30af mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_10ea30b5:;
  /* 10ea30b5 mov edx, dword ptr [0x10ebe49c] */
  EDX = (r32((uint32_t)(0x10ebe49c)));
  /* 10ea30bb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10ea30be mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ea30c1 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea30c4 push eax */
  push32((uint32_t)(EAX));
  /* 10ea30c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea30c8 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea30c9 call 0x10ea3270 */
  push32(0x10ea30ceu); f_10ea3270();
  /* 10ea30ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea30d1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ea30d4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea30d8 jl 0x10ea3171 */
  if ((C.sf!=C.of)) goto L_10ea3171;
  /* 10ea30de mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea30e1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea30e4 je 0x10ea3171 */
  if (C.zf) goto L_10ea3171;
  /* 10ea30ea cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea30ee je 0x10ea3163 */
  if (C.zf) goto L_10ea3163;
  /* 10ea30f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ea30f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ea30f5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea30f8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10ea30fb push edx */
  push32((uint32_t)(EDX));
  /* 10ea30fc call 0x10e93a20 */
  push32(0x10ea3101u); f_10e93a20();
  /* 10ea3101 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea3104 jmp 0x10ea310f */
  goto L_10ea310f;
L_10ea3106:;
  /* 10ea3106 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ea3109 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea310c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10ea310f:;
  /* 10ea310f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ea3112 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea3115 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea3119 je 0x10ea3130 */
  if (C.zf) goto L_10ea3130;
  /* 10ea311b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ea311e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea3121 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ea3124 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea3127 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 10ea312b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10ea312e jmp 0x10ea3106 */
  goto L_10ea3106;
L_10ea3130:;
  /* 10ea3130 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 10ea3135 push 0x10eba938 */
  push32((uint32_t)(0x10eba938u));
  /* 10ea313a push 2 */
  push32((uint32_t)(0x2u));
  /* 10ea313c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ea313f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10ea3142 push eax */
  push32((uint32_t)(EAX));
  /* 10ea3143 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea3146 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea3147 call 0x10e93420 */
  push32(0x10ea314cu); f_10e93420();
  /* 10ea314c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea314f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ea3152 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea3156 je 0x10ea3161 */
  if (C.zf) goto L_10ea3161;
  /* 10ea3158 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea315b mov dword ptr [0x10ebe49c], edx */
  w32((uint32_t)(0x10ebe49c), (EDX));
L_10ea3161:;
  /* 10ea3161 jmp 0x10ea316f */
  goto L_10ea316f;
L_10ea3163:;
  /* 10ea3163 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ea3166 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea3169 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea316c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_10ea316f:;
  /* 10ea316f jmp 0x10ea31e4 */
  goto L_10ea31e4;
L_10ea3171:;
  /* 10ea3171 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea3175 jne 0x10ea31dd */
  if (!C.zf) goto L_10ea31dd;
  /* 10ea3177 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea317b jge 0x10ea3185 */
  if ((C.sf==C.of)) goto L_10ea3185;
  /* 10ea317d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ea3180 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ea3182 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10ea3185:;
  /* 10ea3185 push 0xce */
  push32((uint32_t)(0xceu));
  /* 10ea318a push 0x10eba938 */
  push32((uint32_t)(0x10eba938u));
  /* 10ea318f push 2 */
  push32((uint32_t)(0x2u));
  /* 10ea3191 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ea3194 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 10ea319b push edx */
  push32((uint32_t)(EDX));
  /* 10ea319c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea319f push eax */
  push32((uint32_t)(EAX));
  /* 10ea31a0 call 0x10e93420 */
  push32(0x10ea31a5u); f_10e93420();
  /* 10ea31a5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea31a8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ea31ab cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea31af jne 0x10ea31b9 */
  if (!C.zf) goto L_10ea31b9;
  /* 10ea31b1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ea31b4 jmp 0x10ea326b */
  goto L_10ea326b;
L_10ea31b9:;
  /* 10ea31b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ea31bc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea31bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea31c2 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 10ea31c5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ea31c8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea31cb mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 10ea31d3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea31d6 mov dword ptr [0x10ebe49c], eax */
  w32((uint32_t)(0x10ebe49c), (EAX));
  /* 10ea31db jmp 0x10ea31e4 */
  goto L_10ea31e4;
L_10ea31dd:;
  /* 10ea31dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea31df jmp 0x10ea326b */
  goto L_10ea326b;
L_10ea31e4:;
  /* 10ea31e4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea31e8 je 0x10ea3269 */
  if (C.zf) goto L_10ea3269;
  /* 10ea31ea push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 10ea31ef push 0x10eba938 */
  push32((uint32_t)(0x10eba938u));
  /* 10ea31f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ea31f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea31f9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea31fa call 0x10e95dc0 */
  push32(0x10ea31ffu); f_10e95dc0();
  /* 10ea31ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea3202 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea3205 push eax */
  push32((uint32_t)(EAX));
  /* 10ea3206 call 0x10e92f90 */
  push32(0x10ea320bu); f_10e92f90();
  /* 10ea320b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea320e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10ea3211 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea3215 je 0x10ea3269 */
  if (C.zf) goto L_10ea3269;
  /* 10ea3217 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea321a push edx */
  push32((uint32_t)(EDX));
  /* 10ea321b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ea321e push eax */
  push32((uint32_t)(EAX));
  /* 10ea321f call 0x10e95f40 */
  push32(0x10ea3224u); f_10e95f40();
  /* 10ea3224 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea3227 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ea322a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea322d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ea3230 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea3232 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ea3235 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea3238 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10ea323b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea323e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea3241 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ea3244 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ea3247 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ea3249 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea324b not edx */
  EDX = (~(EDX));
  /* 10ea324d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10ea3250 push edx */
  push32((uint32_t)(EDX));
  /* 10ea3251 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ea3254 push eax */
  push32((uint32_t)(EAX));
  /* 10ea3255 call dword ptr [0x10ec0278] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0278))), 0x10ea325bu);
  /* 10ea325b push 2 */
  push32((uint32_t)(0x2u));
  /* 10ea325d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ea3260 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea3261 call 0x10e93a20 */
  push32(0x10ea3266u); f_10e93a20();
  /* 10ea3266 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ea3269:;
  /* 10ea3269 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ea326b:;
  /* 10ea326b pop esi */
  ESI = (pop32());
  /* 10ea326c mov esp, ebp */
  ESP = (EBP);
  /* 10ea326e pop ebp */
  EBP = (pop32());
  /* 10ea326f ret  */
  ESPCHK(0x10ea2f90u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x10ea3270 (124 bytes, 47 insns) */
void f_10ea3270(void) {
  FTRACE(0x10ea3270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ea3270 push ebp */
  push32((uint32_t)(EBP));
  /* 10ea3271 mov ebp, esp */
  EBP = (ESP);
  /* 10ea3273 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea3274 mov eax, dword ptr [0x10ebe49c] */
  EAX = (r32((uint32_t)(0x10ebe49c)));
  /* 10ea3279 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ea327c jmp 0x10ea3287 */
  goto L_10ea3287;
L_10ea327e:;
  /* 10ea327e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea3281 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea3284 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10ea3287:;
  /* 10ea3287 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea328a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea328d je 0x10ea32da */
  if (C.zf) goto L_10ea32da;
  /* 10ea328f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea3292 push eax */
  push32((uint32_t)(EAX));
  /* 10ea3293 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea3296 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ea3298 push edx */
  push32((uint32_t)(EDX));
  /* 10ea3299 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea329c push eax */
  push32((uint32_t)(EAX));
  /* 10ea329d call 0x10ea2a40 */
  push32(0x10ea32a2u); f_10ea2a40();
  /* 10ea32a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea32a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ea32a7 jne 0x10ea32d8 */
  if (!C.zf) goto L_10ea32d8;
  /* 10ea32a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea32ac mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ea32ae mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea32b1 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 10ea32b5 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea32b8 je 0x10ea32ca */
  if (C.zf) goto L_10ea32ca;
  /* 10ea32ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea32bd mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ea32bf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea32c2 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 10ea32c6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ea32c8 jne 0x10ea32d8 */
  if (!C.zf) goto L_10ea32d8;
L_10ea32ca:;
  /* 10ea32ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea32cd sub eax, dword ptr [0x10ebe49c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10ebe49c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea32d3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10ea32d6 jmp 0x10ea32e8 */
  goto L_10ea32e8;
L_10ea32d8:;
  /* 10ea32d8 jmp 0x10ea327e */
  goto L_10ea327e;
L_10ea32da:;
  /* 10ea32da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea32dd sub eax, dword ptr [0x10ebe49c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10ebe49c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea32e3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10ea32e6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_10ea32e8:;
  /* 10ea32e8 mov esp, ebp */
  ESP = (EBP);
  /* 10ea32ea pop ebp */
  EBP = (pop32());
  /* 10ea32eb ret  */
  ESPCHK(0x10ea3270u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x10ea32f0 (238 bytes, 80 insns) */
void f_10ea32f0(void) {
  FTRACE(0x10ea32f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ea32f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ea32f1 mov ebp, esp */
  EBP = (ESP);
  /* 10ea32f3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea32f6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10ea32fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea3300 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ea3303 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea3307 jne 0x10ea3310 */
  if (!C.zf) goto L_10ea3310;
  /* 10ea3309 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea330b jmp 0x10ea33da */
  goto L_10ea33da;
L_10ea3310:;
  /* 10ea3310 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea3313 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ea3315 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea3318 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea331b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ea331e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ea3320 je 0x10ea332d */
  if (C.zf) goto L_10ea332d;
  /* 10ea3322 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ea3325 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea3328 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10ea332b jmp 0x10ea3310 */
  goto L_10ea3310;
L_10ea332d:;
  /* 10ea332d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 10ea3332 push 0x10eba938 */
  push32((uint32_t)(0x10eba938u));
  /* 10ea3337 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ea3339 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ea333c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 10ea3343 push eax */
  push32((uint32_t)(EAX));
  /* 10ea3344 call 0x10e92f90 */
  push32(0x10ea3349u); f_10e92f90();
  /* 10ea3349 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea334c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ea334f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ea3352 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ea3355 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea3359 jne 0x10ea3365 */
  if (!C.zf) goto L_10ea3365;
  /* 10ea335b push 9 */
  push32((uint32_t)(0x9u));
  /* 10ea335d call 0x10e91f00 */
  push32(0x10ea3362u); f_10e91f00();
  /* 10ea3362 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ea3365:;
  /* 10ea3365 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea3368 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10ea336b:;
  /* 10ea336b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea336e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea3371 je 0x10ea33ce */
  if (C.zf) goto L_10ea33ce;
  /* 10ea3373 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 10ea3378 push 0x10eba938 */
  push32((uint32_t)(0x10eba938u));
  /* 10ea337d push 2 */
  push32((uint32_t)(0x2u));
  /* 10ea337f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea3382 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ea3384 push edx */
  push32((uint32_t)(EDX));
  /* 10ea3385 call 0x10e95dc0 */
  push32(0x10ea338au); f_10e95dc0();
  /* 10ea338a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea338d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea3390 push eax */
  push32((uint32_t)(EAX));
  /* 10ea3391 call 0x10e92f90 */
  push32(0x10ea3396u); f_10e92f90();
  /* 10ea3396 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea3399 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ea339c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10ea339e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ea33a1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea33a4 je 0x10ea33ba */
  if (C.zf) goto L_10ea33ba;
  /* 10ea33a6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea33a9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ea33ab push ecx */
  push32((uint32_t)(ECX));
  /* 10ea33ac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ea33af mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ea33b1 push eax */
  push32((uint32_t)(EAX));
  /* 10ea33b2 call 0x10e95f40 */
  push32(0x10ea33b7u); f_10e95f40();
  /* 10ea33b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ea33ba:;
  /* 10ea33ba mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ea33bd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea33c0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ea33c3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ea33c6 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea33c9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10ea33cc jmp 0x10ea336b */
  goto L_10ea336b;
L_10ea33ce:;
  /* 10ea33ce mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ea33d1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10ea33d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10ea33da:;
  /* 10ea33da mov esp, ebp */
  ESP = (EBP);
  /* 10ea33dc pop ebp */
  EBP = (pop32());
  /* 10ea33dd ret  */
  ESPCHK(0x10ea32f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100133e0 @ 0x10ea33e0 (237 bytes, 81 insns) */
void f_10ea33e0(void) {
  FTRACE(0x10ea33e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ea33e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ea33e1 mov ebp, esp */
  EBP = (ESP);
  /* 10ea33e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea33e4 cmp dword ptr [0x10ebfbec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebfbec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea33eb jne 0x10ea3402 */
  if (!C.zf) goto L_10ea3402;
  /* 10ea33ed mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ea33f0 push eax */
  push32((uint32_t)(EAX));
  /* 10ea33f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea33f4 push ecx */
  push32((uint32_t)(ECX));
  /* 10ea33f5 call 0x10ea34e0 */
  push32(0x10ea33fau); f_10ea34e0();
  /* 10ea33fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea33fd jmp 0x10ea34c9 */
  goto L_10ea34c9;
L_10ea3402:;
  /* 10ea3402 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10ea3404 call 0x10e96990 */
  push32(0x10ea3409u); f_10e96990();
  /* 10ea3409 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea340c jmp 0x10ea3417 */
  goto L_10ea3417;
L_10ea340e:;
  /* 10ea340e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea3411 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea3414 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10ea3417:;
  /* 10ea3417 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea341a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 10ea341e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 10ea3422 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea3425 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ea342b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ea342d je 0x10ea34ab */
  if (C.zf) goto L_10ea34ab;
  /* 10ea342f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea3432 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ea3437 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ea3439 mov cl, byte ptr [eax + 0x10ebfd01] */
  CL = (r8((uint32_t)(EAX + 0x10ebfd01)));
  /* 10ea343f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10ea3442 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ea3444 je 0x10ea3496 */
  if (C.zf) goto L_10ea3496;
  /* 10ea3446 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea3449 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea344c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10ea344f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea3452 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ea3454 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ea3456 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ea3458 jne 0x10ea3468 */
  if (!C.zf) goto L_10ea3468;
  /* 10ea345a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10ea345c call 0x10e96a30 */
  push32(0x10ea3461u); f_10e96a30();
  /* 10ea3461 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea3464 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea3466 jmp 0x10ea34c9 */
  goto L_10ea34c9;
L_10ea3468:;
  /* 10ea3468 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea346b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ea3471 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10ea3474 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea3477 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ea3479 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ea347b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10ea347d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea3480 jne 0x10ea3494 */
  if (!C.zf) goto L_10ea3494;
  /* 10ea3482 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10ea3484 call 0x10e96a30 */
  push32(0x10ea3489u); f_10e96a30();
  /* 10ea3489 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea348c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea348f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ea3492 jmp 0x10ea34c9 */
  goto L_10ea34c9;
L_10ea3494:;
  /* 10ea3494 jmp 0x10ea34a6 */
  goto L_10ea34a6;
L_10ea3496:;
  /* 10ea3496 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea3499 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ea349f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea34a2 jne 0x10ea34a6 */
  if (!C.zf) goto L_10ea34a6;
  /* 10ea34a4 jmp 0x10ea34ab */
  goto L_10ea34ab;
L_10ea34a6:;
  /* 10ea34a6 jmp 0x10ea340e */
  goto L_10ea340e;
L_10ea34ab:;
  /* 10ea34ab push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10ea34ad call 0x10e96a30 */
  push32(0x10ea34b2u); f_10e96a30();
  /* 10ea34b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea34b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ea34b8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ea34bd cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ea34c0 jne 0x10ea34c7 */
  if (!C.zf) goto L_10ea34c7;
  /* 10ea34c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ea34c5 jmp 0x10ea34c9 */
  goto L_10ea34c9;
L_10ea34c7:;
  /* 10ea34c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ea34c9:;
  /* 10ea34c9 mov esp, ebp */
  ESP = (EBP);
  /* 10ea34cb pop ebp */
  EBP = (pop32());
  /* 10ea34cc ret  */
  ESPCHK(0x10ea33e0u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x10ea34e0 (193 bytes, 87 insns) */
void f_10ea34e0(void) {
  FTRACE(0x10ea34e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ea34e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea34e2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10ea34e6 push ebx */
  push32((uint32_t)(EBX));
  /* 10ea34e7 mov ebx, eax */
  EBX = (EAX);
  /* 10ea34e9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10ea34ec mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10ea34f0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10ea34f6 je 0x10ea350b */
  if (C.zf) goto L_10ea350b;
L_10ea34f8:;
  /* 10ea34f8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 10ea34fa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10ea34fb cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ea34fd je 0x10ea34d0 */
  if (C.zf) { jmp_ind(0x10ea34d0u); return; }
  /* 10ea34ff test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10ea3501 je 0x10ea3554 */
  if (C.zf) goto L_10ea3554;
  /* 10ea3503 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10ea3509 jne 0x10ea34f8 */
  if (!C.zf) goto L_10ea34f8;
L_10ea350b:;
  /* 10ea350b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 10ea350d push edi */
  push32((uint32_t)(EDI));
  /* 10ea350e mov eax, ebx */
  EAX = (EBX);
  /* 10ea3510 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 10ea3513 push esi */
  push32((uint32_t)(ESI));
  /* 10ea3514 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_10ea3516:;
  /* 10ea3516 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10ea3518 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 10ea351d mov eax, ecx */
  EAX = (ECX);
  /* 10ea351f mov esi, edi */
  ESI = (EDI);
  /* 10ea3521 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 10ea3523 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea3525 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea3527 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ea352a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ea352d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10ea352f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10ea3531 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ea3534 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 10ea353a jne 0x10ea3558 */
  if (!C.zf) goto L_10ea3558;
  /* 10ea353c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10ea3541 je 0x10ea3516 */
  if (C.zf) goto L_10ea3516;
  /* 10ea3543 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10ea3548 jne 0x10ea3552 */
  if (!C.zf) goto L_10ea3552;
  /* 10ea354a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 10ea3550 jne 0x10ea3516 */
  if (!C.zf) goto L_10ea3516;
L_10ea3552:;
  /* 10ea3552 pop esi */
  ESI = (pop32());
  /* 10ea3553 pop edi */
  EDI = (pop32());
L_10ea3554:;
  /* 10ea3554 pop ebx */
  EBX = (pop32());
  /* 10ea3555 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ea3557 ret  */
  ESPCHK(0x10ea34e0u, _esp0);
  ESP += 4; return;
L_10ea3558:;
  /* 10ea3558 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10ea355b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ea355d je 0x10ea3595 */
  if (C.zf) goto L_10ea3595;
  /* 10ea355f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10ea3561 je 0x10ea3552 */
  if (C.zf) goto L_10ea3552;
  /* 10ea3563 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ea3565 je 0x10ea358e */
  if (C.zf) goto L_10ea358e;
  /* 10ea3567 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10ea3569 je 0x10ea3552 */
  if (C.zf) goto L_10ea3552;
  /* 10ea356b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10ea356e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ea3570 je 0x10ea3587 */
  if (C.zf) goto L_10ea3587;
  /* 10ea3572 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10ea3574 je 0x10ea3552 */
  if (C.zf) goto L_10ea3552;
  /* 10ea3576 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ea3578 je 0x10ea3580 */
  if (C.zf) goto L_10ea3580;
  /* 10ea357a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10ea357c je 0x10ea3552 */
  if (C.zf) goto L_10ea3552;
  /* 10ea357e jmp 0x10ea3516 */
  goto L_10ea3516;
L_10ea3580:;
  /* 10ea3580 pop esi */
  ESI = (pop32());
  /* 10ea3581 pop edi */
  EDI = (pop32());
  /* 10ea3582 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 10ea3585 pop ebx */
  EBX = (pop32());
  /* 10ea3586 ret  */
  ESPCHK(0x10ea34e0u, _esp0);
  ESP += 4; return;
L_10ea3587:;
  /* 10ea3587 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 10ea358a pop esi */
  ESI = (pop32());
  /* 10ea358b pop edi */
  EDI = (pop32());
  /* 10ea358c pop ebx */
  EBX = (pop32());
  /* 10ea358d ret  */
  ESPCHK(0x10ea34e0u, _esp0);
  ESP += 4; return;
L_10ea358e:;
  /* 10ea358e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 10ea3591 pop esi */
  ESI = (pop32());
  /* 10ea3592 pop edi */
  EDI = (pop32());
  /* 10ea3593 pop ebx */
  EBX = (pop32());
  /* 10ea3594 ret  */
  ESPCHK(0x10ea34e0u, _esp0);
  ESP += 4; return;
L_10ea3595:;
  /* 10ea3595 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 10ea3598 pop esi */
  ESI = (pop32());
  /* 10ea3599 pop edi */
  EDI = (pop32());
  /* 10ea359a pop ebx */
  EBX = (pop32());
  /* 10ea359b ret  */
  ESPCHK(0x10ea34e0u, _esp0);
  ESP += 4; return;
  /* 10ea359c jmp dword ptr [0x10ec02e0] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10ec02e0)))); return;
}

/* RtlUnwind @ 0x10ea36ec (6 bytes, 1 insns) */
void f_10ea36ec(void) {
  FTRACE(0x10ea36ecu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ea36ec jmp dword ptr [0x10ec02b4] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10ec02b4)))); return;
}

