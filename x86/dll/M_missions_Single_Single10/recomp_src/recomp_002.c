#include "recomp.h"

/* FUN_1000fab0 @ 0x10e1fab0 (878 bytes, 273 insns) */
void f_10e1fab0(void) {
  FTRACE(0x10e1fab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1fab0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1fab1 mov ebp, esp */
  EBP = (ESP);
  /* 10e1fab3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1fab6 push esi */
  push32((uint32_t)(ESI));
  /* 10e1fab7 mov eax, dword ptr [0x10e3dc98] */
  EAX = (r32((uint32_t)(0x10e3dc98)));
  /* 10e1fabc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e1fabf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10e1fac6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10e1facd jmp 0x10e1fad8 */
  goto L_10e1fad8;
L_10e1facf:;
  /* 10e1facf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1fad2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1fad5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10e1fad8:;
  /* 10e1fad8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1fadc jae 0x10e1fb11 */
  if (!C.cf) goto L_10e1fb11;
  /* 10e1fade mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1fae1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1fae4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10e1fae7 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1fae8 call 0x10e15930 */
  push32(0x10e1faedu); f_10e15930();
  /* 10e1faed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1faf0 mov esi, eax */
  ESI = (EAX);
  /* 10e1faf2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1faf5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1faf8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 10e1fafc push ecx */
  push32((uint32_t)(ECX));
  /* 10e1fafd call 0x10e15930 */
  push32(0x10e1fb02u); f_10e15930();
  /* 10e1fb02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1fb05 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1fb08 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10e1fb0c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10e1fb0f jmp 0x10e1facf */
  goto L_10e1facf;
L_10e1fb11:;
  /* 10e1fb11 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10e1fb18 jmp 0x10e1fb23 */
  goto L_10e1fb23;
L_10e1fb1a:;
  /* 10e1fb1a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1fb1d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1fb20 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10e1fb23:;
  /* 10e1fb23 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1fb27 jae 0x10e1fb5d */
  if (!C.cf) goto L_10e1fb5d;
  /* 10e1fb29 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1fb2c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1fb2f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10e1fb33 push eax */
  push32((uint32_t)(EAX));
  /* 10e1fb34 call 0x10e15930 */
  push32(0x10e1fb39u); f_10e15930();
  /* 10e1fb39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1fb3c mov esi, eax */
  ESI = (EAX);
  /* 10e1fb3e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1fb41 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1fb44 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10e1fb48 push eax */
  push32((uint32_t)(EAX));
  /* 10e1fb49 call 0x10e15930 */
  push32(0x10e1fb4eu); f_10e15930();
  /* 10e1fb4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1fb51 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1fb54 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10e1fb58 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e1fb5b jmp 0x10e1fb1a */
  goto L_10e1fb1a;
L_10e1fb5d:;
  /* 10e1fb5d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1fb60 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10e1fb66 push eax */
  push32((uint32_t)(EAX));
  /* 10e1fb67 call 0x10e15930 */
  push32(0x10e1fb6cu); f_10e15930();
  /* 10e1fb6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1fb6f mov esi, eax */
  ESI = (EAX);
  /* 10e1fb71 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1fb74 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 10e1fb7a push edx */
  push32((uint32_t)(EDX));
  /* 10e1fb7b call 0x10e15930 */
  push32(0x10e1fb80u); f_10e15930();
  /* 10e1fb80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1fb83 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1fb86 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10e1fb8a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e1fb8d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1fb90 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10e1fb96 push edx */
  push32((uint32_t)(EDX));
  /* 10e1fb97 call 0x10e15930 */
  push32(0x10e1fb9cu); f_10e15930();
  /* 10e1fb9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1fb9f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1fba2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10e1fba6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10e1fba9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1fbac mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 10e1fbb2 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1fbb3 call 0x10e15930 */
  push32(0x10e1fbb8u); f_10e15930();
  /* 10e1fbb8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1fbbb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1fbbe lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10e1fbc2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e1fbc5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1fbc8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 10e1fbce push edx */
  push32((uint32_t)(EDX));
  /* 10e1fbcf call 0x10e15930 */
  push32(0x10e1fbd4u); f_10e15930();
  /* 10e1fbd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1fbd7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1fbda lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10e1fbde mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10e1fbe1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1fbe4 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1fbe9 push eax */
  push32((uint32_t)(EAX));
  /* 10e1fbea call 0x10e12ae0 */
  push32(0x10e1fbefu); f_10e12ae0();
  /* 10e1fbef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1fbf2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e1fbf5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1fbf9 je 0x10e1fe16 */
  if (C.zf) goto L_10e1fe16;
  /* 10e1fbff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1fc02 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10e1fc05 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1fc08 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1fc0e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10e1fc11 push 0xac */
  push32((uint32_t)(0xacu));
  /* 10e1fc16 mov eax, dword ptr [0x10e3dc98] */
  EAX = (r32((uint32_t)(0x10e3dc98)));
  /* 10e1fc1b push eax */
  push32((uint32_t)(EAX));
  /* 10e1fc1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1fc1f push ecx */
  push32((uint32_t)(ECX));
  /* 10e1fc20 call 0x10e193e0 */
  push32(0x10e1fc25u); f_10e193e0();
  /* 10e1fc25 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1fc28 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10e1fc2f jmp 0x10e1fc3a */
  goto L_10e1fc3a;
L_10e1fc31:;
  /* 10e1fc31 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1fc34 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1fc37 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10e1fc3a:;
  /* 10e1fc3a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1fc3e jae 0x10e1fcae */
  if (!C.cf) goto L_10e1fcae;
  /* 10e1fc40 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1fc43 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e1fc46 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e1fc49 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10e1fc4c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1fc4f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1fc52 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10e1fc55 push edx */
  push32((uint32_t)(EDX));
  /* 10e1fc56 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e1fc59 push eax */
  push32((uint32_t)(EAX));
  /* 10e1fc5a call 0x10e15ab0 */
  push32(0x10e1fc5fu); f_10e15ab0();
  /* 10e1fc5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1fc62 push eax */
  push32((uint32_t)(EAX));
  /* 10e1fc63 call 0x10e15930 */
  push32(0x10e1fc68u); f_10e15930();
  /* 10e1fc68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1fc6b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e1fc6e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10e1fc72 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10e1fc75 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1fc78 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e1fc7b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e1fc7e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 10e1fc82 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1fc85 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1fc88 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 10e1fc8c push edx */
  push32((uint32_t)(EDX));
  /* 10e1fc8d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e1fc90 push eax */
  push32((uint32_t)(EAX));
  /* 10e1fc91 call 0x10e15ab0 */
  push32(0x10e1fc96u); f_10e15ab0();
  /* 10e1fc96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1fc99 push eax */
  push32((uint32_t)(EAX));
  /* 10e1fc9a call 0x10e15930 */
  push32(0x10e1fc9fu); f_10e15930();
  /* 10e1fc9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1fca2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e1fca5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10e1fca9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10e1fcac jmp 0x10e1fc31 */
  goto L_10e1fc31;
L_10e1fcae:;
  /* 10e1fcae mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10e1fcb5 jmp 0x10e1fcc0 */
  goto L_10e1fcc0;
L_10e1fcb7:;
  /* 10e1fcb7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1fcba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1fcbd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10e1fcc0:;
  /* 10e1fcc0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1fcc4 jae 0x10e1fd36 */
  if (!C.cf) goto L_10e1fd36;
  /* 10e1fcc6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1fcc9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e1fccc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e1fccf mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 10e1fcd3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1fcd6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1fcd9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10e1fcdd push eax */
  push32((uint32_t)(EAX));
  /* 10e1fcde mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e1fce1 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1fce2 call 0x10e15ab0 */
  push32(0x10e1fce7u); f_10e15ab0();
  /* 10e1fce7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1fcea push eax */
  push32((uint32_t)(EAX));
  /* 10e1fceb call 0x10e15930 */
  push32(0x10e1fcf0u); f_10e15930();
  /* 10e1fcf0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1fcf3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e1fcf6 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10e1fcfa mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10e1fcfd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1fd00 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e1fd03 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e1fd06 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 10e1fd0a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1fd0d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1fd10 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10e1fd14 push eax */
  push32((uint32_t)(EAX));
  /* 10e1fd15 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e1fd18 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1fd19 call 0x10e15ab0 */
  push32(0x10e1fd1eu); f_10e15ab0();
  /* 10e1fd1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1fd21 push eax */
  push32((uint32_t)(EAX));
  /* 10e1fd22 call 0x10e15930 */
  push32(0x10e1fd27u); f_10e15930();
  /* 10e1fd27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1fd2a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e1fd2d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10e1fd31 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10e1fd34 jmp 0x10e1fcb7 */
  goto L_10e1fcb7;
L_10e1fd36:;
  /* 10e1fd36 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e1fd39 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e1fd3c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 10e1fd42 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1fd45 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 10e1fd4b push ecx */
  push32((uint32_t)(ECX));
  /* 10e1fd4c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e1fd4f push edx */
  push32((uint32_t)(EDX));
  /* 10e1fd50 call 0x10e15ab0 */
  push32(0x10e1fd55u); f_10e15ab0();
  /* 10e1fd55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1fd58 push eax */
  push32((uint32_t)(EAX));
  /* 10e1fd59 call 0x10e15930 */
  push32(0x10e1fd5eu); f_10e15930();
  /* 10e1fd5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1fd61 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e1fd64 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10e1fd68 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10e1fd6b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e1fd6e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e1fd71 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 10e1fd77 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1fd7a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10e1fd80 push eax */
  push32((uint32_t)(EAX));
  /* 10e1fd81 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e1fd84 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1fd85 call 0x10e15ab0 */
  push32(0x10e1fd8au); f_10e15ab0();
  /* 10e1fd8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1fd8d push eax */
  push32((uint32_t)(EAX));
  /* 10e1fd8e call 0x10e15930 */
  push32(0x10e1fd93u); f_10e15930();
  /* 10e1fd93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1fd96 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e1fd99 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10e1fd9d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10e1fda0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e1fda3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e1fda6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 10e1fdac mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1fdaf mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 10e1fdb5 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1fdb6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e1fdb9 push edx */
  push32((uint32_t)(EDX));
  /* 10e1fdba call 0x10e15ab0 */
  push32(0x10e1fdbfu); f_10e15ab0();
  /* 10e1fdbf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1fdc2 push eax */
  push32((uint32_t)(EAX));
  /* 10e1fdc3 call 0x10e15930 */
  push32(0x10e1fdc8u); f_10e15930();
  /* 10e1fdc8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1fdcb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e1fdce lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10e1fdd2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10e1fdd5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e1fdd8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e1fddb mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 10e1fde1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1fde4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 10e1fdea push eax */
  push32((uint32_t)(EAX));
  /* 10e1fdeb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e1fdee push ecx */
  push32((uint32_t)(ECX));
  /* 10e1fdef call 0x10e15ab0 */
  push32(0x10e1fdf4u); f_10e15ab0();
  /* 10e1fdf4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1fdf7 push eax */
  push32((uint32_t)(EAX));
  /* 10e1fdf8 call 0x10e15930 */
  push32(0x10e1fdfdu); f_10e15930();
  /* 10e1fdfd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1fe00 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e1fe03 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10e1fe07 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10e1fe0a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e1fe0d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e1fe10 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_10e1fe16:;
  /* 10e1fe16 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1fe19 pop esi */
  ESI = (pop32());
  /* 10e1fe1a mov esp, ebp */
  ESP = (EBP);
  /* 10e1fe1c pop ebp */
  EBP = (pop32());
  /* 10e1fe1d ret  */
  ESPCHK(0x10e1fab0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fe20 @ 0x10e1fe20 (31 bytes, 15 insns) */
void f_10e1fe20(void) {
  FTRACE(0x10e1fe20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1fe20 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1fe21 mov ebp, esp */
  EBP = (ESP);
  /* 10e1fe23 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1fe25 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e1fe28 push eax */
  push32((uint32_t)(EAX));
  /* 10e1fe29 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e1fe2c push ecx */
  push32((uint32_t)(ECX));
  /* 10e1fe2d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1fe30 push edx */
  push32((uint32_t)(EDX));
  /* 10e1fe31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1fe34 push eax */
  push32((uint32_t)(EAX));
  /* 10e1fe35 call 0x10e1fe40 */
  push32(0x10e1fe3au); f_10e1fe40();
  /* 10e1fe3a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1fe3d pop ebp */
  EBP = (pop32());
  /* 10e1fe3e ret  */
  ESPCHK(0x10e1fe20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fe40 @ 0x10e1fe40 (394 bytes, 123 insns) */
void f_10e1fe40(void) {
  FTRACE(0x10e1fe40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1fe40 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1fe41 mov ebp, esp */
  EBP = (ESP);
  /* 10e1fe43 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1fe46 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1fe49 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e1fe4c push 0x10e3e794 */
  push32((uint32_t)(0x10e3e794u));
  /* 10e1fe51 call dword ptr [0x10e40270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40270))), 0x10e1fe57u);
  /* 10e1fe57 cmp dword ptr [0x10e3e784], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e784))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1fe5e je 0x10e1fe7e */
  if (C.zf) goto L_10e1fe7e;
  /* 10e1fe60 push 0x10e3e794 */
  push32((uint32_t)(0x10e3e794u));
  /* 10e1fe65 call dword ptr [0x10e40260] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40260))), 0x10e1fe6bu);
  /* 10e1fe6b push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10e1fe6d call 0x10e16500 */
  push32(0x10e1fe72u); f_10e16500();
  /* 10e1fe72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1fe75 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10e1fe7c jmp 0x10e1fe85 */
  goto L_10e1fe85;
L_10e1fe7e:;
  /* 10e1fe7e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10e1fe85:;
  /* 10e1fe85 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1fe89 jne 0x10e1fe96 */
  if (!C.zf) goto L_10e1fe96;
  /* 10e1fe8b mov ecx, dword ptr [0x10e3dc98] */
  ECX = (r32((uint32_t)(0x10e3dc98)));
  /* 10e1fe91 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10e1fe94 jmp 0x10e1fe9c */
  goto L_10e1fe9c;
L_10e1fe96:;
  /* 10e1fe96 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e1fe99 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10e1fe9c:;
  /* 10e1fe9c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1fe9f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e1fea2:;
  /* 10e1fea2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1fea6 jbe 0x10e1ff93 */
  if ((C.cf||C.zf)) goto L_10e1ff93;
  /* 10e1feac mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e1feaf mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e1feb1 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 10e1feb4 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e1feb8 je 0x10e1fec2 */
  if (C.zf) goto L_10e1fec2;
  /* 10e1feba cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e1febe je 0x10e1fec7 */
  if (C.zf) goto L_10e1fec7;
  /* 10e1fec0 jmp 0x10e1ff21 */
  goto L_10e1ff21;
L_10e1fec2:;
  /* 10e1fec2 jmp 0x10e1ff93 */
  goto L_10e1ff93;
L_10e1fec7:;
  /* 10e1fec7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e1feca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1fecd mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10e1fed0 mov dword ptr [0x10e3e770], 0 */
  w32((uint32_t)(0x10e3e770), (0x0u));
  /* 10e1feda mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e1fedd movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e1fee0 cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1fee3 jne 0x10e1fef8 */
  if (!C.zf) goto L_10e1fef8;
  /* 10e1fee5 mov dword ptr [0x10e3e770], 1 */
  w32((uint32_t)(0x10e3e770), (0x1u));
  /* 10e1feef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e1fef2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1fef5 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10e1fef8:;
  /* 10e1fef8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1fefb push ecx */
  push32((uint32_t)(ECX));
  /* 10e1fefc lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10e1feff push edx */
  push32((uint32_t)(EDX));
  /* 10e1ff00 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10e1ff03 push eax */
  push32((uint32_t)(EAX));
  /* 10e1ff04 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e1ff07 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1ff08 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e1ff0b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e1ff0d push eax */
  push32((uint32_t)(EAX));
  /* 10e1ff0e call 0x10e1ffd0 */
  push32(0x10e1ff13u); f_10e1ffd0();
  /* 10e1ff13 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1ff16 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e1ff19 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1ff1c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10e1ff1f jmp 0x10e1ff8e */
  goto L_10e1ff8e;
L_10e1ff21:;
  /* 10e1ff21 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e1ff24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1ff26 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e1ff28 mov ecx, dword ptr [0x10e3cc98] */
  ECX = (r32((uint32_t)(0x10e3cc98)));
  /* 10e1ff2e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e1ff30 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10e1ff34 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10e1ff3a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e1ff3c je 0x10e1ff69 */
  if (C.zf) goto L_10e1ff69;
  /* 10e1ff3e cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1ff42 jbe 0x10e1ff69 */
  if ((C.cf||C.zf)) goto L_10e1ff69;
  /* 10e1ff44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1ff47 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e1ff4a mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e1ff4c mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10e1ff4e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1ff51 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1ff54 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10e1ff57 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e1ff5a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1ff5d mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10e1ff60 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1ff63 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1ff66 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10e1ff69:;
  /* 10e1ff69 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1ff6c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e1ff6f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e1ff71 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10e1ff73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1ff76 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1ff79 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10e1ff7c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e1ff7f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1ff82 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10e1ff85 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1ff88 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1ff8b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10e1ff8e:;
  /* 10e1ff8e jmp 0x10e1fea2 */
  goto L_10e1fea2;
L_10e1ff93:;
  /* 10e1ff93 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1ff97 je 0x10e1ffa5 */
  if (C.zf) goto L_10e1ffa5;
  /* 10e1ff99 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10e1ff9b call 0x10e165a0 */
  push32(0x10e1ffa0u); f_10e165a0();
  /* 10e1ffa0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1ffa3 jmp 0x10e1ffb0 */
  goto L_10e1ffb0;
L_10e1ffa5:;
  /* 10e1ffa5 push 0x10e3e794 */
  push32((uint32_t)(0x10e3e794u));
  /* 10e1ffaa call dword ptr [0x10e40260] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40260))), 0x10e1ffb0u);
L_10e1ffb0:;
  /* 10e1ffb0 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1ffb4 jbe 0x10e1ffc4 */
  if ((C.cf||C.zf)) goto L_10e1ffc4;
  /* 10e1ffb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1ffb9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10e1ffbc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1ffbf sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1ffc2 jmp 0x10e1ffc6 */
  goto L_10e1ffc6;
L_10e1ffc4:;
  /* 10e1ffc4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e1ffc6:;
  /* 10e1ffc6 mov esp, ebp */
  ESP = (EBP);
  /* 10e1ffc8 pop ebp */
  EBP = (pop32());
  /* 10e1ffc9 ret  */
  ESPCHK(0x10e1fe40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ffd0 @ 0x10e1ffd0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_10e1ffd0(void) {
  FTRACE(0x10e1ffd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1ffd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1ffd1 mov ebp, esp */
  EBP = (ESP);
  /* 10e1ffd3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1ffd6 push esi */
  push32((uint32_t)(ESI));
  /* 10e1ffd7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 10e1ffdb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e1ffde mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1ffe1 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1ffe4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e1ffe7 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1ffeb ja 0x10e20538 */
  if ((!C.cf&&!C.zf)) goto L_10e20538;
  /* 10e1fff1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1fff4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e1fff6 mov dl, byte ptr [eax + 0x10e20599] */
  DL = (r8((uint32_t)(EAX + 0x10e20599)));
  /* 10e1fffc jmp dword ptr [edx*4 + 0x10e2053d] */
  switch (EDX) {
    case 0: goto L_10e20516;
    case 1: goto L_10e20025;
    case 2: goto L_10e2006b;
    case 3: goto L_10e201b8;
    case 4: goto L_10e201e0;
    case 5: goto L_10e2027f;
    case 6: goto L_10e202eb;
    case 7: goto L_10e20314;
    case 8: goto L_10e20355;
    case 9: goto L_10e20437;
    case 10: goto L_10e2049e;
    case 11: goto L_10e204eb;
    case 12: goto L_10e20003;
    case 13: goto L_10e20048;
    case 14: goto L_10e2008e;
    case 15: goto L_10e2018e;
    case 16: goto L_10e20225;
    case 17: goto L_10e20252;
    case 18: goto L_10e202a7;
    case 19: goto L_10e2032b;
    case 20: goto L_10e203d9;
    case 21: goto L_10e20468;
    case 22: goto L_10e20538;
    default: x86_unimpl("switch@0x10e1fffc out of table"); return;
  }
L_10e20003:;
  /* 10e20003 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e20006 push ecx */
  push32((uint32_t)(ECX));
  /* 10e20007 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e2000a push edx */
  push32((uint32_t)(EDX));
  /* 10e2000b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e2000e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10e20011 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e20014 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10e20017 push eax */
  push32((uint32_t)(EAX));
  /* 10e20018 call 0x10e205f0 */
  push32(0x10e2001du); f_10e205f0();
  /* 10e2001d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e20020 jmp 0x10e20538 */
  goto L_10e20538;
L_10e20025:;
  /* 10e20025 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e20028 push ecx */
  push32((uint32_t)(ECX));
  /* 10e20029 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e2002c push edx */
  push32((uint32_t)(EDX));
  /* 10e2002d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e20030 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10e20033 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e20036 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 10e2003a push eax */
  push32((uint32_t)(EAX));
  /* 10e2003b call 0x10e205f0 */
  push32(0x10e20040u); f_10e205f0();
  /* 10e20040 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e20043 jmp 0x10e20538 */
  goto L_10e20538;
L_10e20048:;
  /* 10e20048 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e2004b push ecx */
  push32((uint32_t)(ECX));
  /* 10e2004c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e2004f push edx */
  push32((uint32_t)(EDX));
  /* 10e20050 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e20053 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e20056 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e20059 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10e2005d push eax */
  push32((uint32_t)(EAX));
  /* 10e2005e call 0x10e205f0 */
  push32(0x10e20063u); f_10e205f0();
  /* 10e20063 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e20066 jmp 0x10e20538 */
  goto L_10e20538;
L_10e2006b:;
  /* 10e2006b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e2006e push ecx */
  push32((uint32_t)(ECX));
  /* 10e2006f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e20072 push edx */
  push32((uint32_t)(EDX));
  /* 10e20073 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e20076 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e20079 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e2007c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10e20080 push eax */
  push32((uint32_t)(EAX));
  /* 10e20081 call 0x10e205f0 */
  push32(0x10e20086u); f_10e205f0();
  /* 10e20086 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e20089 jmp 0x10e20538 */
  goto L_10e20538;
L_10e2008e:;
  /* 10e2008e cmp dword ptr [0x10e3e770], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e770))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e20095 je 0x10e20116 */
  if (C.zf) goto L_10e20116;
  /* 10e20097 mov dword ptr [0x10e3e770], 0 */
  w32((uint32_t)(0x10e3e770), (0x0u));
  /* 10e200a1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e200a4 push ecx */
  push32((uint32_t)(ECX));
  /* 10e200a5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e200a8 push edx */
  push32((uint32_t)(EDX));
  /* 10e200a9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e200ac push eax */
  push32((uint32_t)(EAX));
  /* 10e200ad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e200b0 push ecx */
  push32((uint32_t)(ECX));
  /* 10e200b1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e200b4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 10e200ba push eax */
  push32((uint32_t)(EAX));
  /* 10e200bb call 0x10e207a0 */
  push32(0x10e200c0u); f_10e207a0();
  /* 10e200c0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e200c3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e200c6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e200c9 jne 0x10e200d0 */
  if (!C.zf) goto L_10e200d0;
  /* 10e200cb jmp 0x10e20538 */
  goto L_10e20538;
L_10e200d0:;
  /* 10e200d0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e200d3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e200d5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 10e200d8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e200db mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e200dd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e200e0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e200e3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10e200e5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e200e8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e200ea sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e200ed mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e200f0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10e200f2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e200f5 push ecx */
  push32((uint32_t)(ECX));
  /* 10e200f6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e200f9 push edx */
  push32((uint32_t)(EDX));
  /* 10e200fa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e200fd push eax */
  push32((uint32_t)(EAX));
  /* 10e200fe mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e20101 push ecx */
  push32((uint32_t)(ECX));
  /* 10e20102 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e20105 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10e2010b push eax */
  push32((uint32_t)(EAX));
  /* 10e2010c call 0x10e207a0 */
  push32(0x10e20111u); f_10e207a0();
  /* 10e20111 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e20114 jmp 0x10e20189 */
  goto L_10e20189;
L_10e20116:;
  /* 10e20116 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e20119 push ecx */
  push32((uint32_t)(ECX));
  /* 10e2011a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e2011d push edx */
  push32((uint32_t)(EDX));
  /* 10e2011e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e20121 push eax */
  push32((uint32_t)(EAX));
  /* 10e20122 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e20125 push ecx */
  push32((uint32_t)(ECX));
  /* 10e20126 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e20129 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 10e2012f push eax */
  push32((uint32_t)(EAX));
  /* 10e20130 call 0x10e207a0 */
  push32(0x10e20135u); f_10e207a0();
  /* 10e20135 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e20138 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e2013b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e2013e jne 0x10e20145 */
  if (!C.zf) goto L_10e20145;
  /* 10e20140 jmp 0x10e20538 */
  goto L_10e20538;
L_10e20145:;
  /* 10e20145 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e20148 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e2014a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 10e2014d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e20150 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e20152 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e20155 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e20158 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10e2015a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e2015d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e2015f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e20162 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e20165 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10e20167 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e2016a push ecx */
  push32((uint32_t)(ECX));
  /* 10e2016b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e2016e push edx */
  push32((uint32_t)(EDX));
  /* 10e2016f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e20172 push eax */
  push32((uint32_t)(EAX));
  /* 10e20173 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e20176 push ecx */
  push32((uint32_t)(ECX));
  /* 10e20177 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e2017a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10e20180 push eax */
  push32((uint32_t)(EAX));
  /* 10e20181 call 0x10e207a0 */
  push32(0x10e20186u); f_10e207a0();
  /* 10e20186 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e20189:;
  /* 10e20189 jmp 0x10e20538 */
  goto L_10e20538;
L_10e2018e:;
  /* 10e2018e mov ecx, dword ptr [0x10e3e770] */
  ECX = (r32((uint32_t)(0x10e3e770)));
  /* 10e20194 mov dword ptr [0x10e3e780], ecx */
  w32((uint32_t)(0x10e3e780), (ECX));
  /* 10e2019a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e2019d push edx */
  push32((uint32_t)(EDX));
  /* 10e2019e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e201a1 push eax */
  push32((uint32_t)(EAX));
  /* 10e201a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e201a4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e201a7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e201aa push edx */
  push32((uint32_t)(EDX));
  /* 10e201ab call 0x10e20640 */
  push32(0x10e201b0u); f_10e20640();
  /* 10e201b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e201b3 jmp 0x10e20538 */
  goto L_10e20538;
L_10e201b8:;
  /* 10e201b8 mov eax, dword ptr [0x10e3e770] */
  EAX = (r32((uint32_t)(0x10e3e770)));
  /* 10e201bd mov dword ptr [0x10e3e780], eax */
  w32((uint32_t)(0x10e3e780), (EAX));
  /* 10e201c2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e201c5 push ecx */
  push32((uint32_t)(ECX));
  /* 10e201c6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e201c9 push edx */
  push32((uint32_t)(EDX));
  /* 10e201ca push 2 */
  push32((uint32_t)(0x2u));
  /* 10e201cc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e201cf mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10e201d2 push ecx */
  push32((uint32_t)(ECX));
  /* 10e201d3 call 0x10e20640 */
  push32(0x10e201d8u); f_10e20640();
  /* 10e201d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e201db jmp 0x10e20538 */
  goto L_10e20538;
L_10e201e0:;
  /* 10e201e0 mov edx, dword ptr [0x10e3e770] */
  EDX = (r32((uint32_t)(0x10e3e770)));
  /* 10e201e6 mov dword ptr [0x10e3e780], edx */
  w32((uint32_t)(0x10e3e780), (EDX));
  /* 10e201ec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e201ef mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 10e201f2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10e201f3 mov ecx, 0xc */
  ECX = (0xcu);
  /* 10e201f8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10e201fa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e201fd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e20201 jne 0x10e2020a */
  if (!C.zf) goto L_10e2020a;
  /* 10e20203 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_10e2020a:;
  /* 10e2020a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e2020d push edx */
  push32((uint32_t)(EDX));
  /* 10e2020e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e20211 push eax */
  push32((uint32_t)(EAX));
  /* 10e20212 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e20214 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e20217 push ecx */
  push32((uint32_t)(ECX));
  /* 10e20218 call 0x10e20640 */
  push32(0x10e2021du); f_10e20640();
  /* 10e2021d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e20220 jmp 0x10e20538 */
  goto L_10e20538;
L_10e20225:;
  /* 10e20225 mov edx, dword ptr [0x10e3e770] */
  EDX = (r32((uint32_t)(0x10e3e770)));
  /* 10e2022b mov dword ptr [0x10e3e780], edx */
  w32((uint32_t)(0x10e3e780), (EDX));
  /* 10e20231 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e20234 push eax */
  push32((uint32_t)(EAX));
  /* 10e20235 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e20238 push ecx */
  push32((uint32_t)(ECX));
  /* 10e20239 push 3 */
  push32((uint32_t)(0x3u));
  /* 10e2023b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e2023e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10e20241 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e20244 push eax */
  push32((uint32_t)(EAX));
  /* 10e20245 call 0x10e20640 */
  push32(0x10e2024au); f_10e20640();
  /* 10e2024a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e2024d jmp 0x10e20538 */
  goto L_10e20538;
L_10e20252:;
  /* 10e20252 mov ecx, dword ptr [0x10e3e770] */
  ECX = (r32((uint32_t)(0x10e3e770)));
  /* 10e20258 mov dword ptr [0x10e3e780], ecx */
  w32((uint32_t)(0x10e3e780), (ECX));
  /* 10e2025e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e20261 push edx */
  push32((uint32_t)(EDX));
  /* 10e20262 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e20265 push eax */
  push32((uint32_t)(EAX));
  /* 10e20266 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e20268 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e2026b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10e2026e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e20271 push edx */
  push32((uint32_t)(EDX));
  /* 10e20272 call 0x10e20640 */
  push32(0x10e20277u); f_10e20640();
  /* 10e20277 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e2027a jmp 0x10e20538 */
  goto L_10e20538;
L_10e2027f:;
  /* 10e2027f mov eax, dword ptr [0x10e3e770] */
  EAX = (r32((uint32_t)(0x10e3e770)));
  /* 10e20284 mov dword ptr [0x10e3e780], eax */
  w32((uint32_t)(0x10e3e780), (EAX));
  /* 10e20289 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e2028c push ecx */
  push32((uint32_t)(ECX));
  /* 10e2028d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e20290 push edx */
  push32((uint32_t)(EDX));
  /* 10e20291 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e20293 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e20296 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e20299 push ecx */
  push32((uint32_t)(ECX));
  /* 10e2029a call 0x10e20640 */
  push32(0x10e2029fu); f_10e20640();
  /* 10e2029f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e202a2 jmp 0x10e20538 */
  goto L_10e20538;
L_10e202a7:;
  /* 10e202a7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e202aa cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e202ae jg 0x10e202cc */
  if ((!C.zf&&C.sf==C.of)) goto L_10e202cc;
  /* 10e202b0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e202b3 push eax */
  push32((uint32_t)(EAX));
  /* 10e202b4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e202b7 push ecx */
  push32((uint32_t)(ECX));
  /* 10e202b8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e202bb mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10e202c1 push eax */
  push32((uint32_t)(EAX));
  /* 10e202c2 call 0x10e205f0 */
  push32(0x10e202c7u); f_10e205f0();
  /* 10e202c7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e202ca jmp 0x10e202e6 */
  goto L_10e202e6;
L_10e202cc:;
  /* 10e202cc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e202cf push ecx */
  push32((uint32_t)(ECX));
  /* 10e202d0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e202d3 push edx */
  push32((uint32_t)(EDX));
  /* 10e202d4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e202d7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 10e202dd push ecx */
  push32((uint32_t)(ECX));
  /* 10e202de call 0x10e205f0 */
  push32(0x10e202e3u); f_10e205f0();
  /* 10e202e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e202e6:;
  /* 10e202e6 jmp 0x10e20538 */
  goto L_10e20538;
L_10e202eb:;
  /* 10e202eb mov edx, dword ptr [0x10e3e770] */
  EDX = (r32((uint32_t)(0x10e3e770)));
  /* 10e202f1 mov dword ptr [0x10e3e780], edx */
  w32((uint32_t)(0x10e3e780), (EDX));
  /* 10e202f7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e202fa push eax */
  push32((uint32_t)(EAX));
  /* 10e202fb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e202fe push ecx */
  push32((uint32_t)(ECX));
  /* 10e202ff push 2 */
  push32((uint32_t)(0x2u));
  /* 10e20301 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e20304 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e20306 push eax */
  push32((uint32_t)(EAX));
  /* 10e20307 call 0x10e20640 */
  push32(0x10e2030cu); f_10e20640();
  /* 10e2030c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e2030f jmp 0x10e20538 */
  goto L_10e20538;
L_10e20314:;
  /* 10e20314 mov ecx, dword ptr [0x10e3e770] */
  ECX = (r32((uint32_t)(0x10e3e770)));
  /* 10e2031a mov dword ptr [0x10e3e780], ecx */
  w32((uint32_t)(0x10e3e780), (ECX));
  /* 10e20320 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e20323 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10e20326 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e20329 jmp 0x10e2037d */
  goto L_10e2037d;
L_10e2032b:;
  /* 10e2032b mov ecx, dword ptr [0x10e3e770] */
  ECX = (r32((uint32_t)(0x10e3e770)));
  /* 10e20331 mov dword ptr [0x10e3e780], ecx */
  w32((uint32_t)(0x10e3e780), (ECX));
  /* 10e20337 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e2033a push edx */
  push32((uint32_t)(EDX));
  /* 10e2033b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e2033e push eax */
  push32((uint32_t)(EAX));
  /* 10e2033f push 1 */
  push32((uint32_t)(0x1u));
  /* 10e20341 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e20344 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10e20347 push edx */
  push32((uint32_t)(EDX));
  /* 10e20348 call 0x10e20640 */
  push32(0x10e2034du); f_10e20640();
  /* 10e2034d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e20350 jmp 0x10e20538 */
  goto L_10e20538;
L_10e20355:;
  /* 10e20355 mov eax, dword ptr [0x10e3e770] */
  EAX = (r32((uint32_t)(0x10e3e770)));
  /* 10e2035a mov dword ptr [0x10e3e780], eax */
  w32((uint32_t)(0x10e3e780), (EAX));
  /* 10e2035f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e20362 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e20366 jne 0x10e20371 */
  if (!C.zf) goto L_10e20371;
  /* 10e20368 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 10e2036f jmp 0x10e2037d */
  goto L_10e2037d;
L_10e20371:;
  /* 10e20371 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e20374 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10e20377 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e2037a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10e2037d:;
  /* 10e2037d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e20380 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10e20383 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e20386 jge 0x10e20391 */
  if ((C.sf==C.of)) goto L_10e20391;
  /* 10e20388 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e2038f jmp 0x10e203be */
  goto L_10e203be;
L_10e20391:;
  /* 10e20391 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e20394 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10e20397 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10e20398 mov ecx, 7 */
  ECX = (0x7u);
  /* 10e2039d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10e2039f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e203a2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e203a5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10e203a8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10e203a9 mov ecx, 7 */
  ECX = (0x7u);
  /* 10e203ae idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10e203b0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e203b3 jl 0x10e203be */
  if ((C.sf!=C.of)) goto L_10e203be;
  /* 10e203b5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e203b8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e203bb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10e203be:;
  /* 10e203be mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e203c1 push eax */
  push32((uint32_t)(EAX));
  /* 10e203c2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e203c5 push ecx */
  push32((uint32_t)(ECX));
  /* 10e203c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e203c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e203cb push edx */
  push32((uint32_t)(EDX));
  /* 10e203cc call 0x10e20640 */
  push32(0x10e203d1u); f_10e20640();
  /* 10e203d1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e203d4 jmp 0x10e20538 */
  goto L_10e20538;
L_10e203d9:;
  /* 10e203d9 cmp dword ptr [0x10e3e770], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e770))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e203e0 je 0x10e20410 */
  if (C.zf) goto L_10e20410;
  /* 10e203e2 mov dword ptr [0x10e3e770], 0 */
  w32((uint32_t)(0x10e3e770), (0x0u));
  /* 10e203ec mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e203ef push eax */
  push32((uint32_t)(EAX));
  /* 10e203f0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e203f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e203f4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e203f7 push edx */
  push32((uint32_t)(EDX));
  /* 10e203f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e203fb push eax */
  push32((uint32_t)(EAX));
  /* 10e203fc mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e203ff mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 10e20405 push edx */
  push32((uint32_t)(EDX));
  /* 10e20406 call 0x10e207a0 */
  push32(0x10e2040bu); f_10e207a0();
  /* 10e2040b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e2040e jmp 0x10e20432 */
  goto L_10e20432;
L_10e20410:;
  /* 10e20410 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e20413 push eax */
  push32((uint32_t)(EAX));
  /* 10e20414 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e20417 push ecx */
  push32((uint32_t)(ECX));
  /* 10e20418 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e2041b push edx */
  push32((uint32_t)(EDX));
  /* 10e2041c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e2041f push eax */
  push32((uint32_t)(EAX));
  /* 10e20420 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e20423 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10e20429 push edx */
  push32((uint32_t)(EDX));
  /* 10e2042a call 0x10e207a0 */
  push32(0x10e2042fu); f_10e207a0();
  /* 10e2042f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e20432:;
  /* 10e20432 jmp 0x10e20538 */
  goto L_10e20538;
L_10e20437:;
  /* 10e20437 mov dword ptr [0x10e3e770], 0 */
  w32((uint32_t)(0x10e3e770), (0x0u));
  /* 10e20441 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e20444 push eax */
  push32((uint32_t)(EAX));
  /* 10e20445 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e20448 push ecx */
  push32((uint32_t)(ECX));
  /* 10e20449 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e2044c push edx */
  push32((uint32_t)(EDX));
  /* 10e2044d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e20450 push eax */
  push32((uint32_t)(EAX));
  /* 10e20451 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e20454 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 10e2045a push edx */
  push32((uint32_t)(EDX));
  /* 10e2045b call 0x10e207a0 */
  push32(0x10e20460u); f_10e207a0();
  /* 10e20460 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e20463 jmp 0x10e20538 */
  goto L_10e20538;
L_10e20468:;
  /* 10e20468 mov eax, dword ptr [0x10e3e770] */
  EAX = (r32((uint32_t)(0x10e3e770)));
  /* 10e2046d mov dword ptr [0x10e3e780], eax */
  w32((uint32_t)(0x10e3e780), (EAX));
  /* 10e20472 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e20475 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10e20478 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10e20479 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10e2047e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10e20480 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e20483 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e20486 push edx */
  push32((uint32_t)(EDX));
  /* 10e20487 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e2048a push eax */
  push32((uint32_t)(EAX));
  /* 10e2048b push 2 */
  push32((uint32_t)(0x2u));
  /* 10e2048d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e20490 push ecx */
  push32((uint32_t)(ECX));
  /* 10e20491 call 0x10e20640 */
  push32(0x10e20496u); f_10e20640();
  /* 10e20496 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e20499 jmp 0x10e20538 */
  goto L_10e20538;
L_10e2049e:;
  /* 10e2049e mov edx, dword ptr [0x10e3e770] */
  EDX = (r32((uint32_t)(0x10e3e770)));
  /* 10e204a4 mov dword ptr [0x10e3e780], edx */
  w32((uint32_t)(0x10e3e780), (EDX));
  /* 10e204aa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e204ad mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 10e204b0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10e204b1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10e204b6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10e204b8 mov ecx, eax */
  ECX = (EAX);
  /* 10e204ba add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e204bd imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e204c0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e204c3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e204c6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10e204c7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 10e204cc idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10e204ce add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e204d0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e204d3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e204d6 push eax */
  push32((uint32_t)(EAX));
  /* 10e204d7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e204da push ecx */
  push32((uint32_t)(ECX));
  /* 10e204db push 4 */
  push32((uint32_t)(0x4u));
  /* 10e204dd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e204e0 push edx */
  push32((uint32_t)(EDX));
  /* 10e204e1 call 0x10e20640 */
  push32(0x10e204e6u); f_10e20640();
  /* 10e204e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e204e9 jmp 0x10e20538 */
  goto L_10e20538;
L_10e204eb:;
  /* 10e204eb call 0x10e21600 */
  push32(0x10e204f0u); f_10e21600();
  /* 10e204f0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e204f3 push eax */
  push32((uint32_t)(EAX));
  /* 10e204f4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e204f7 push ecx */
  push32((uint32_t)(ECX));
  /* 10e204f8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e204fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e204fd cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e20501 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 10e20504 mov ecx, dword ptr [eax*4 + 0x10e3de1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10e3de1c)));
  /* 10e2050b push ecx */
  push32((uint32_t)(ECX));
  /* 10e2050c call 0x10e205f0 */
  push32(0x10e20511u); f_10e205f0();
  /* 10e20511 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e20514 jmp 0x10e20538 */
  goto L_10e20538;
L_10e20516:;
  /* 10e20516 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e20519 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e2051b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 10e2051e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e20521 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e20523 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e20526 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e20529 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10e2052b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e2052e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e20530 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e20533 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e20536 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10e20538:;
  /* 10e20538 pop esi */
  ESI = (pop32());
  /* 10e20539 mov esp, ebp */
  ESP = (EBP);
  /* 10e2053b pop ebp */
  EBP = (pop32());
  /* 10e2053c ret  */
  ESPCHK(0x10e1ffd0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x10e205f0 (72 bytes, 30 insns) */
void f_10e205f0(void) {
  FTRACE(0x10e205f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e205f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e205f1 mov ebp, esp */
  EBP = (ESP);
L_10e205f3:;
  /* 10e205f3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e205f6 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e205f9 je 0x10e20636 */
  if (C.zf) goto L_10e20636;
  /* 10e205fb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e205fe movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e20601 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e20603 je 0x10e20636 */
  if (C.zf) goto L_10e20636;
  /* 10e20605 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e20608 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e2060a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e2060d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e2060f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10e20611 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e20614 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e20616 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e20619 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e2061c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10e2061e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e20621 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e20624 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10e20627 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e2062a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e2062c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e2062f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e20632 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10e20634 jmp 0x10e205f3 */
  goto L_10e205f3;
L_10e20636:;
  /* 10e20636 pop ebp */
  EBP = (pop32());
  /* 10e20637 ret  */
  ESPCHK(0x10e205f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010640 @ 0x10e20640 (173 bytes, 64 insns) */
void f_10e20640(void) {
  FTRACE(0x10e20640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e20640 push ebp */
  push32((uint32_t)(EBP));
  /* 10e20641 mov ebp, esp */
  EBP = (ESP);
  /* 10e20643 push ecx */
  push32((uint32_t)(ECX));
  /* 10e20644 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e2064b cmp dword ptr [0x10e3e780], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e780))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e20652 je 0x10e2066a */
  if (C.zf) goto L_10e2066a;
  /* 10e20654 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e20657 push eax */
  push32((uint32_t)(EAX));
  /* 10e20658 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e2065b push ecx */
  push32((uint32_t)(ECX));
  /* 10e2065c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e2065f push edx */
  push32((uint32_t)(EDX));
  /* 10e20660 call 0x10e206f0 */
  push32(0x10e20665u); f_10e206f0();
  /* 10e20665 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e20668 jmp 0x10e206e9 */
  goto L_10e206e9;
L_10e2066a:;
  /* 10e2066a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e2066d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e20670 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e20672 jae 0x10e206e0 */
  if (!C.cf) goto L_10e206e0;
  /* 10e20674 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e20677 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e2067a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10e2067d jmp 0x10e20688 */
  goto L_10e20688;
L_10e2067f:;
  /* 10e2067f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e20682 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e20685 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10e20688:;
  /* 10e20688 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e2068b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e2068e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e20690 je 0x10e206c4 */
  if (C.zf) goto L_10e206c4;
  /* 10e20692 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e20695 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10e20696 mov ecx, 0xa */
  ECX = (0xau);
  /* 10e2069b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10e2069d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e206a0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e206a3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e206a5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e206a8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 10e206ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e206ae cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10e206af mov ecx, 0xa */
  ECX = (0xau);
  /* 10e206b4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10e206b6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10e206b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e206bc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e206bf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e206c2 jmp 0x10e2067f */
  goto L_10e2067f;
L_10e206c4:;
  /* 10e206c4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e206c7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e206c9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e206cc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e206cf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10e206d1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e206d4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e206d6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e206d9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e206dc mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10e206de jmp 0x10e206e9 */
  goto L_10e206e9;
L_10e206e0:;
  /* 10e206e0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e206e3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10e206e9:;
  /* 10e206e9 mov esp, ebp */
  ESP = (EBP);
  /* 10e206eb pop ebp */
  EBP = (pop32());
  /* 10e206ec ret  */
  ESPCHK(0x10e20640u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x10e206f0 (172 bytes, 65 insns) */
void f_10e206f0(void) {
  FTRACE(0x10e206f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e206f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e206f1 mov ebp, esp */
  EBP = (ESP);
  /* 10e206f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e206f6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e206f9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e206fb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e206fe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e20701 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e20704 jbe 0x10e2074b */
  if ((C.cf||C.zf)) goto L_10e2074b;
L_10e20706:;
  /* 10e20706 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e20709 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10e2070a mov ecx, 0xa */
  ECX = (0xau);
  /* 10e2070f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10e20711 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e20714 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e20717 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10e20719 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e2071c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e2071f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e20722 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e20725 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e20727 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e2072a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e2072d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10e2072f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e20732 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10e20733 mov ecx, 0xa */
  ECX = (0xau);
  /* 10e20738 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10e2073a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10e2073d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e20741 jle 0x10e2074b */
  if ((C.zf||C.sf!=C.of)) goto L_10e2074b;
  /* 10e20743 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e20746 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e20749 ja 0x10e20706 */
  if ((!C.cf&&!C.zf)) goto L_10e20706;
L_10e2074b:;
  /* 10e2074b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e2074e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e20750 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e20753 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e20756 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e20759 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10e2075b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e2075e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e20761 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10e20764:;
  /* 10e20764 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e20767 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e20769 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 10e2076c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e2076f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e20772 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e20774 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10e20776 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e20779 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e2077c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e2077f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e20782 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10e20785 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10e20787 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e2078a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e2078d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e20790 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e20793 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e20796 jb 0x10e20764 */
  if (C.cf) goto L_10e20764;
  /* 10e20798 mov esp, ebp */
  ESP = (EBP);
  /* 10e2079a pop ebp */
  EBP = (pop32());
  /* 10e2079b ret  */
  ESPCHK(0x10e206f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100107a0 @ 0x10e207a0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_10e207a0(void) {
  FTRACE(0x10e207a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e207a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e207a1 mov ebp, esp */
  EBP = (ESP);
  /* 10e207a3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10e207a6:;
  /* 10e207a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e207a9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e207ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e207ae je 0x10e20c1c */
  if (C.zf) goto L_10e20c1c;
  /* 10e207b4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e207b7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e207ba je 0x10e20c1c */
  if (C.zf) goto L_10e20c1c;
  /* 10e207c0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 10e207c4 mov dword ptr [0x10e3e780], 0 */
  w32((uint32_t)(0x10e3e780), (0x0u));
  /* 10e207ce mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10e207d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e207d8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e207db jmp 0x10e207e6 */
  goto L_10e207e6;
L_10e207dd:;
  /* 10e207dd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e207e0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e207e3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10e207e6:;
  /* 10e207e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e207e9 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e207ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e207ef movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e207f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e207f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e207f8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e207fb cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e207fd jne 0x10e20801 */
  if (!C.zf) goto L_10e20801;
  /* 10e207ff jmp 0x10e207dd */
  goto L_10e207dd;
L_10e20801:;
  /* 10e20801 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e20804 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e20807 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e2080a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e2080d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e20810 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10e20813 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e20816 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e20819 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10e2081c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e20820 ja 0x10e20b70 */
  if ((!C.cf&&!C.zf)) goto L_10e20b70;
  /* 10e20826 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e20829 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e2082b mov al, byte ptr [ecx + 0x10e20c4c] */
  AL = (r8((uint32_t)(ECX + 0x10e20c4c)));
  /* 10e20831 jmp dword ptr [eax*4 + 0x10e20c20] */
  switch (EAX) {
    case 0: goto L_10e20a8f;
    case 1: goto L_10e20973;
    case 2: goto L_10e208fe;
    case 3: goto L_10e20838;
    case 4: goto L_10e20876;
    case 5: goto L_10e208d7;
    case 6: goto L_10e20925;
    case 7: goto L_10e2094c;
    case 8: goto L_10e209ba;
    case 9: goto L_10e208b4;
    case 10: goto L_10e20b70;
    default: x86_unimpl("switch@0x10e20831 out of table"); return;
  }
L_10e20838:;
  /* 10e20838 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e2083b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10e2083e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e20841 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e20844 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10e20847 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e2084b ja 0x10e20871 */
  if ((!C.cf&&!C.zf)) goto L_10e20871;
  /* 10e2084d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e20850 jmp dword ptr [ecx*4 + 0x10e20c9f] */
  switch (ECX) {
    case 0: goto L_10e20857;
    case 1: goto L_10e20861;
    case 2: goto L_10e20867;
    case 3: goto L_10e2086d;
    case 4: goto L_10e20895;
    case 5: goto L_10e2089f;
    case 6: goto L_10e208a5;
    case 7: goto L_10e208ab;
    default: x86_unimpl("switch@0x10e20850 out of table"); return;
  }
L_10e20857:;
  /* 10e20857 mov dword ptr [0x10e3e780], 1 */
  w32((uint32_t)(0x10e3e780), (0x1u));
L_10e20861:;
  /* 10e20861 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 10e20865 jmp 0x10e20871 */
  goto L_10e20871;
L_10e20867:;
  /* 10e20867 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 10e2086b jmp 0x10e20871 */
  goto L_10e20871;
L_10e2086d:;
  /* 10e2086d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_10e20871:;
  /* 10e20871 jmp 0x10e20b70 */
  goto L_10e20b70;
L_10e20876:;
  /* 10e20876 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e20879 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10e2087c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e2087f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e20882 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10e20885 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e20889 ja 0x10e208af */
  if ((!C.cf&&!C.zf)) goto L_10e208af;
  /* 10e2088b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e2088e jmp dword ptr [ecx*4 + 0x10e20caf] */
  switch (ECX) {
    case 0: goto L_10e20895;
    case 1: goto L_10e2089f;
    case 2: goto L_10e208a5;
    case 3: goto L_10e208ab;
    default: x86_unimpl("switch@0x10e2088e out of table"); return;
  }
L_10e20895:;
  /* 10e20895 mov dword ptr [0x10e3e780], 1 */
  w32((uint32_t)(0x10e3e780), (0x1u));
L_10e2089f:;
  /* 10e2089f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 10e208a3 jmp 0x10e208af */
  goto L_10e208af;
L_10e208a5:;
  /* 10e208a5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 10e208a9 jmp 0x10e208af */
  goto L_10e208af;
L_10e208ab:;
  /* 10e208ab mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_10e208af:;
  /* 10e208af jmp 0x10e20b70 */
  goto L_10e20b70;
L_10e208b4:;
  /* 10e208b4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e208b7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10e208ba cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e208be je 0x10e208c8 */
  if (C.zf) goto L_10e208c8;
  /* 10e208c0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e208c4 je 0x10e208ce */
  if (C.zf) goto L_10e208ce;
  /* 10e208c6 jmp 0x10e208d2 */
  goto L_10e208d2;
L_10e208c8:;
  /* 10e208c8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 10e208cc jmp 0x10e208d2 */
  goto L_10e208d2;
L_10e208ce:;
  /* 10e208ce mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_10e208d2:;
  /* 10e208d2 jmp 0x10e20b70 */
  goto L_10e20b70;
L_10e208d7:;
  /* 10e208d7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e208da mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10e208dd cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e208e1 je 0x10e208eb */
  if (C.zf) goto L_10e208eb;
  /* 10e208e3 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e208e7 je 0x10e208f5 */
  if (C.zf) goto L_10e208f5;
  /* 10e208e9 jmp 0x10e208f9 */
  goto L_10e208f9;
L_10e208eb:;
  /* 10e208eb mov dword ptr [0x10e3e780], 1 */
  w32((uint32_t)(0x10e3e780), (0x1u));
L_10e208f5:;
  /* 10e208f5 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_10e208f9:;
  /* 10e208f9 jmp 0x10e20b70 */
  goto L_10e20b70;
L_10e208fe:;
  /* 10e208fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e20901 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10e20904 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e20908 je 0x10e20912 */
  if (C.zf) goto L_10e20912;
  /* 10e2090a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e2090e je 0x10e2091c */
  if (C.zf) goto L_10e2091c;
  /* 10e20910 jmp 0x10e20920 */
  goto L_10e20920;
L_10e20912:;
  /* 10e20912 mov dword ptr [0x10e3e780], 1 */
  w32((uint32_t)(0x10e3e780), (0x1u));
L_10e2091c:;
  /* 10e2091c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_10e20920:;
  /* 10e20920 jmp 0x10e20b70 */
  goto L_10e20b70;
L_10e20925:;
  /* 10e20925 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e20928 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 10e2092b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e2092f je 0x10e20939 */
  if (C.zf) goto L_10e20939;
  /* 10e20931 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e20935 je 0x10e20943 */
  if (C.zf) goto L_10e20943;
  /* 10e20937 jmp 0x10e20947 */
  goto L_10e20947;
L_10e20939:;
  /* 10e20939 mov dword ptr [0x10e3e780], 1 */
  w32((uint32_t)(0x10e3e780), (0x1u));
L_10e20943:;
  /* 10e20943 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_10e20947:;
  /* 10e20947 jmp 0x10e20b70 */
  goto L_10e20b70;
L_10e2094c:;
  /* 10e2094c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e2094f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10e20952 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e20956 je 0x10e20960 */
  if (C.zf) goto L_10e20960;
  /* 10e20958 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e2095c je 0x10e2096a */
  if (C.zf) goto L_10e2096a;
  /* 10e2095e jmp 0x10e2096e */
  goto L_10e2096e;
L_10e20960:;
  /* 10e20960 mov dword ptr [0x10e3e780], 1 */
  w32((uint32_t)(0x10e3e780), (0x1u));
L_10e2096a:;
  /* 10e2096a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_10e2096e:;
  /* 10e2096e jmp 0x10e20b70 */
  goto L_10e20b70;
L_10e20973:;
  /* 10e20973 push 0x10e3a7f4 */
  push32((uint32_t)(0x10e3a7f4u));
  /* 10e20978 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e2097b push ecx */
  push32((uint32_t)(ECX));
  /* 10e2097c call 0x10e211d0 */
  push32(0x10e20981u); f_10e211d0();
  /* 10e20981 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e20984 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e20986 jne 0x10e20993 */
  if (!C.zf) goto L_10e20993;
  /* 10e20988 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e2098b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e2098e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e20991 jmp 0x10e209b1 */
  goto L_10e209b1;
L_10e20993:;
  /* 10e20993 push 0x10e3a7f0 */
  push32((uint32_t)(0x10e3a7f0u));
  /* 10e20998 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e2099b push eax */
  push32((uint32_t)(EAX));
  /* 10e2099c call 0x10e211d0 */
  push32(0x10e209a1u); f_10e211d0();
  /* 10e209a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e209a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e209a6 jne 0x10e209b1 */
  if (!C.zf) goto L_10e209b1;
  /* 10e209a8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e209ab add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e209ae mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10e209b1:;
  /* 10e209b1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 10e209b5 jmp 0x10e20b70 */
  goto L_10e20b70;
L_10e209ba:;
  /* 10e209ba mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e209bd cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e209c1 jg 0x10e209d1 */
  if ((!C.zf&&C.sf==C.of)) goto L_10e209d1;
  /* 10e209c3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e209c6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 10e209cc mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10e209cf jmp 0x10e209dd */
  goto L_10e209dd;
L_10e209d1:;
  /* 10e209d1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e209d4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10e209da mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10e209dd:;
  /* 10e209dd cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e209e1 jle 0x10e20a84 */
  if ((C.zf||C.sf!=C.of)) goto L_10e20a84;
  /* 10e209e7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e209ea cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e209ed jbe 0x10e20a84 */
  if ((C.cf||C.zf)) goto L_10e20a84;
  /* 10e209f3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e209f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e209f8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e209fa mov ecx, dword ptr [0x10e3cc98] */
  ECX = (r32((uint32_t)(0x10e3cc98)));
  /* 10e20a00 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e20a02 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10e20a06 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10e20a0c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e20a0e je 0x10e20a47 */
  if (C.zf) goto L_10e20a47;
  /* 10e20a10 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e20a13 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e20a16 jbe 0x10e20a47 */
  if ((C.cf||C.zf)) goto L_10e20a47;
  /* 10e20a18 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e20a1b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e20a1d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e20a20 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10e20a22 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10e20a24 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e20a27 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e20a29 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e20a2c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e20a2f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10e20a31 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e20a34 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e20a37 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10e20a3a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e20a3d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e20a3f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e20a42 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e20a45 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10e20a47:;
  /* 10e20a47 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e20a4a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e20a4c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e20a4f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e20a51 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10e20a53 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e20a56 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e20a58 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e20a5b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e20a5e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10e20a60 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e20a63 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e20a66 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10e20a69 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e20a6c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e20a6e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e20a71 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e20a74 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10e20a76 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e20a79 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e20a7c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10e20a7f jmp 0x10e209dd */
  goto L_10e209dd;
L_10e20a84:;
  /* 10e20a84 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e20a87 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10e20a8a jmp 0x10e207a6 */
  goto L_10e207a6;
L_10e20a8f:;
  /* 10e20a8f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e20a92 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10e20a95 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e20a97 je 0x10e20b62 */
  if (C.zf) goto L_10e20b62;
  /* 10e20a9d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e20aa0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e20aa3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10e20aa6:;
  /* 10e20aa6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e20aa9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e20aac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e20aae je 0x10e20b60 */
  if (C.zf) goto L_10e20b60;
  /* 10e20ab4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e20ab7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e20aba je 0x10e20b60 */
  if (C.zf) goto L_10e20b60;
  /* 10e20ac0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e20ac3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e20ac6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e20ac9 jne 0x10e20ad9 */
  if (!C.zf) goto L_10e20ad9;
  /* 10e20acb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e20ace add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e20ad1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10e20ad4 jmp 0x10e20b60 */
  goto L_10e20b60;
L_10e20ad9:;
  /* 10e20ad9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e20adc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e20ade mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10e20ae0 mov edx, dword ptr [0x10e3cc98] */
  EDX = (r32((uint32_t)(0x10e3cc98)));
  /* 10e20ae6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e20ae8 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10e20aec and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10e20af1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e20af3 je 0x10e20b2c */
  if (C.zf) goto L_10e20b2c;
  /* 10e20af5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e20af8 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e20afb jbe 0x10e20b2c */
  if ((C.cf||C.zf)) goto L_10e20b2c;
  /* 10e20afd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e20b00 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e20b02 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e20b05 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e20b07 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10e20b09 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e20b0c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e20b0e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e20b11 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e20b14 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10e20b16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e20b19 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e20b1c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10e20b1f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e20b22 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e20b24 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e20b27 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e20b2a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10e20b2c:;
  /* 10e20b2c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e20b2f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e20b31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e20b34 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10e20b36 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10e20b38 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e20b3b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e20b3d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e20b40 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e20b43 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10e20b45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e20b48 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e20b4b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10e20b4e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e20b51 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e20b53 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e20b56 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e20b59 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10e20b5b jmp 0x10e20aa6 */
  goto L_10e20aa6;
L_10e20b60:;
  /* 10e20b60 jmp 0x10e20b6b */
  goto L_10e20b6b;
L_10e20b62:;
  /* 10e20b62 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e20b65 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e20b68 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10e20b6b:;
  /* 10e20b6b jmp 0x10e207a6 */
  goto L_10e207a6;
L_10e20b70:;
  /* 10e20b70 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10e20b74 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e20b76 je 0x10e20b9c */
  if (C.zf) goto L_10e20b9c;
  /* 10e20b78 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e20b7b push edx */
  push32((uint32_t)(EDX));
  /* 10e20b7c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e20b7f push eax */
  push32((uint32_t)(EAX));
  /* 10e20b80 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e20b83 push ecx */
  push32((uint32_t)(ECX));
  /* 10e20b84 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e20b87 push edx */
  push32((uint32_t)(EDX));
  /* 10e20b88 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10e20b8b push eax */
  push32((uint32_t)(EAX));
  /* 10e20b8c call 0x10e1ffd0 */
  push32(0x10e20b91u); f_10e1ffd0();
  /* 10e20b91 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e20b94 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e20b97 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10e20b9a jmp 0x10e20c17 */
  goto L_10e20c17;
L_10e20b9c:;
  /* 10e20b9c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e20b9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e20ba1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e20ba3 mov ecx, dword ptr [0x10e3cc98] */
  ECX = (r32((uint32_t)(0x10e3cc98)));
  /* 10e20ba9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e20bab mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10e20baf and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10e20bb5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e20bb7 je 0x10e20be8 */
  if (C.zf) goto L_10e20be8;
  /* 10e20bb9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e20bbc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e20bbe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e20bc1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e20bc3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10e20bc5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e20bc8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e20bca add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e20bcd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e20bd0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10e20bd2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e20bd5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e20bd8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10e20bdb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e20bde mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e20be0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e20be3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e20be6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10e20be8:;
  /* 10e20be8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e20beb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e20bed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e20bf0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e20bf2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10e20bf4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e20bf7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e20bf9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e20bfc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e20bff mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10e20c01 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e20c04 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e20c07 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10e20c0a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e20c0d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e20c0f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e20c12 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e20c15 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10e20c17:;
  /* 10e20c17 jmp 0x10e207a6 */
  goto L_10e207a6;
L_10e20c1c:;
  /* 10e20c1c mov esp, ebp */
  ESP = (EBP);
  /* 10e20c1e pop ebp */
  EBP = (pop32());
  /* 10e20c1f ret  */
  ESPCHK(0x10e207a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010cc0 @ 0x10e20cc0 (650 bytes, 178 insns) */
void f_10e20cc0(void) {
  FTRACE(0x10e20cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e20cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e20cc1 mov ebp, esp */
  EBP = (ESP);
  /* 10e20cc3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e20cc9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e20ccd jne 0x10e20e29 */
  if (!C.zf) goto L_10e20e29;
  /* 10e20cd3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e20cd6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 10e20cdc lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 10e20ce2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e20ce5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e20cec mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 10e20cf6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e20cf8 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10e20cfe push edx */
  push32((uint32_t)(EDX));
  /* 10e20cff mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e20d02 push eax */
  push32((uint32_t)(EAX));
  /* 10e20d03 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e20d06 push ecx */
  push32((uint32_t)(ECX));
  /* 10e20d07 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e20d0a push edx */
  push32((uint32_t)(EDX));
  /* 10e20d0b call 0x10e220e0 */
  push32(0x10e20d10u); f_10e220e0();
  /* 10e20d10 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e20d13 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e20d16 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e20d1a jne 0x10e20daf */
  if (!C.zf) goto L_10e20daf;
  /* 10e20d20 call dword ptr [0x10e4029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e4029c))), 0x10e20d26u);
  /* 10e20d26 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e20d29 je 0x10e20d30 */
  if (C.zf) goto L_10e20d30;
  /* 10e20d2b jmp 0x10e20e0d */
  goto L_10e20e0d;
L_10e20d30:;
  /* 10e20d30 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e20d32 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e20d34 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e20d36 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e20d39 push eax */
  push32((uint32_t)(EAX));
  /* 10e20d3a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e20d3d push ecx */
  push32((uint32_t)(ECX));
  /* 10e20d3e call 0x10e220e0 */
  push32(0x10e20d43u); f_10e220e0();
  /* 10e20d43 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e20d46 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 10e20d4c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e20d53 jne 0x10e20d5a */
  if (!C.zf) goto L_10e20d5a;
  /* 10e20d55 jmp 0x10e20e0d */
  goto L_10e20e0d;
L_10e20d5a:;
  /* 10e20d5a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 10e20d5c push 0x10e3a7fc */
  push32((uint32_t)(0x10e3a7fcu));
  /* 10e20d61 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e20d63 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10e20d69 push edx */
  push32((uint32_t)(EDX));
  /* 10e20d6a call 0x10e12b00 */
  push32(0x10e20d6fu); f_10e12b00();
  /* 10e20d6f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e20d72 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e20d75 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e20d79 jne 0x10e20d80 */
  if (!C.zf) goto L_10e20d80;
  /* 10e20d7b jmp 0x10e20e0d */
  goto L_10e20e0d;
L_10e20d80:;
  /* 10e20d80 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10e20d87 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e20d89 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 10e20d8f push eax */
  push32((uint32_t)(EAX));
  /* 10e20d90 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e20d93 push ecx */
  push32((uint32_t)(ECX));
  /* 10e20d94 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e20d97 push edx */
  push32((uint32_t)(EDX));
  /* 10e20d98 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e20d9b push eax */
  push32((uint32_t)(EAX));
  /* 10e20d9c call 0x10e220e0 */
  push32(0x10e20da1u); f_10e220e0();
  /* 10e20da1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e20da4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e20da7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e20dab jne 0x10e20daf */
  if (!C.zf) goto L_10e20daf;
  /* 10e20dad jmp 0x10e20e0d */
  goto L_10e20e0d;
L_10e20daf:;
  /* 10e20daf push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10e20db1 push 0x10e3a7fc */
  push32((uint32_t)(0x10e3a7fcu));
  /* 10e20db6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e20db8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e20dbb push ecx */
  push32((uint32_t)(ECX));
  /* 10e20dbc call 0x10e12b00 */
  push32(0x10e20dc1u); f_10e12b00();
  /* 10e20dc1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e20dc4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 10e20dca mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10e20dcc mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10e20dd2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e20dd5 jne 0x10e20dd9 */
  if (!C.zf) goto L_10e20dd9;
  /* 10e20dd7 jmp 0x10e20e0d */
  goto L_10e20e0d;
L_10e20dd9:;
  /* 10e20dd9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e20ddc push ecx */
  push32((uint32_t)(ECX));
  /* 10e20ddd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e20de0 push edx */
  push32((uint32_t)(EDX));
  /* 10e20de1 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10e20de7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e20de9 push ecx */
  push32((uint32_t)(ECX));
  /* 10e20dea call 0x10e16320 */
  push32(0x10e20defu); f_10e16320();
  /* 10e20def add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e20df2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e20df6 je 0x10e20e06 */
  if (C.zf) goto L_10e20e06;
  /* 10e20df8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e20dfa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e20dfd push edx */
  push32((uint32_t)(EDX));
  /* 10e20dfe call 0x10e13590 */
  push32(0x10e20e03u); f_10e13590();
  /* 10e20e03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e20e06:;
  /* 10e20e06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e20e08 jmp 0x10e20f46 */
  goto L_10e20f46;
L_10e20e0d:;
  /* 10e20e0d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e20e11 je 0x10e20e21 */
  if (C.zf) goto L_10e20e21;
  /* 10e20e13 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e20e15 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e20e18 push eax */
  push32((uint32_t)(EAX));
  /* 10e20e19 call 0x10e13590 */
  push32(0x10e20e1eu); f_10e13590();
  /* 10e20e1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e20e21:;
  /* 10e20e21 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e20e24 jmp 0x10e20f46 */
  goto L_10e20f46;
L_10e20e29:;
  /* 10e20e29 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e20e2d jne 0x10e20f43 */
  if (!C.zf) goto L_10e20f43;
  /* 10e20e33 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 10e20e3d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e20e40 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 10e20e46 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e20e48 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10e20e4e push edx */
  push32((uint32_t)(EDX));
  /* 10e20e4f push 0x10e3e698 */
  push32((uint32_t)(0x10e3e698u));
  /* 10e20e54 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e20e57 push eax */
  push32((uint32_t)(EAX));
  /* 10e20e58 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e20e5b push ecx */
  push32((uint32_t)(ECX));
  /* 10e20e5c call 0x10e21f40 */
  push32(0x10e20e61u); f_10e21f40();
  /* 10e20e61 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e20e64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e20e66 jne 0x10e20e70 */
  if (!C.zf) goto L_10e20e70;
  /* 10e20e68 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e20e6b jmp 0x10e20f46 */
  goto L_10e20f46;
L_10e20e70:;
  /* 10e20e70 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10e20e76 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10e20e79 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 10e20e83 jmp 0x10e20e94 */
  goto L_10e20e94;
L_10e20e85:;
  /* 10e20e85 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10e20e8b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e20e8e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_10e20e94:;
  /* 10e20e94 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e20e9b jge 0x10e20f3f */
  if ((C.sf==C.of)) goto L_10e20f3f;
  /* 10e20ea1 cmp dword ptr [0x10e3cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10e3cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e20ea8 jle 0x10e20edb */
  if ((C.zf||C.sf!=C.of)) goto L_10e20edb;
  /* 10e20eaa push 4 */
  push32((uint32_t)(0x4u));
  /* 10e20eac mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10e20eb2 mov dl, byte ptr [ecx*2 + 0x10e3e698] */
  DL = (r8((uint32_t)(ECX*2 + 0x10e3e698)));
  /* 10e20eb9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10e20ebf mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10e20ec5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e20eca push eax */
  push32((uint32_t)(EAX));
  /* 10e20ecb call 0x10e18b10 */
  push32(0x10e20ed0u); f_10e18b10();
  /* 10e20ed0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e20ed3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 10e20ed9 jmp 0x10e20f0e */
  goto L_10e20f0e;
L_10e20edb:;
  /* 10e20edb mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10e20ee1 mov dl, byte ptr [ecx*2 + 0x10e3e698] */
  DL = (r8((uint32_t)(ECX*2 + 0x10e3e698)));
  /* 10e20ee8 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10e20eee mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10e20ef4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e20ef9 mov ecx, dword ptr [0x10e3cc98] */
  ECX = (r32((uint32_t)(0x10e3cc98)));
  /* 10e20eff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e20f01 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10e20f05 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10e20f08 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_10e20f0e:;
  /* 10e20f0e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e20f15 je 0x10e20f38 */
  if (C.zf) goto L_10e20f38;
  /* 10e20f17 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10e20f1d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e20f20 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e20f23 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 10e20f2a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10e20f2e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10e20f34 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10e20f36 jmp 0x10e20f3a */
  goto L_10e20f3a;
L_10e20f38:;
  /* 10e20f38 jmp 0x10e20f3f */
  goto L_10e20f3f;
L_10e20f3a:;
  /* 10e20f3a jmp 0x10e20e85 */
  goto L_10e20e85;
L_10e20f3f:;
  /* 10e20f3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e20f41 jmp 0x10e20f46 */
  goto L_10e20f46;
L_10e20f43:;
  /* 10e20f43 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10e20f46:;
  /* 10e20f46 mov esp, ebp */
  ESP = (EBP);
  /* 10e20f48 pop ebp */
  EBP = (pop32());
  /* 10e20f49 ret  */
  ESPCHK(0x10e20cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f50 @ 0x10e20f50 (10 bytes, 5 insns) */
void f_10e20f50(void) {
  FTRACE(0x10e20f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e20f50 push ebp */
  push32((uint32_t)(EBP));
  /* 10e20f51 mov ebp, esp */
  EBP = (ESP);
  /* 10e20f53 mov eax, dword ptr [0x10e3dd88] */
  EAX = (r32((uint32_t)(0x10e3dd88)));
  /* 10e20f58 pop ebp */
  EBP = (pop32());
  /* 10e20f59 ret  */
  ESPCHK(0x10e20f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f60 @ 0x10e20f60 (575 bytes, 196 insns) */
void f_10e20f60(void) {
  FTRACE(0x10e20f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e20f60 push ebp */
  push32((uint32_t)(EBP));
  /* 10e20f61 mov ebp, esp */
  EBP = (ESP);
  /* 10e20f63 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10e20f65 push 0x10e3a808 */
  push32((uint32_t)(0x10e3a808u));
  /* 10e20f6a push 0x10e1bc08 */
  push32((uint32_t)(0x10e1bc08u));
  /* 10e20f6f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10e20f75 push eax */
  push32((uint32_t)(EAX));
  /* 10e20f76 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10e20f7d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e20f80 push ebx */
  push32((uint32_t)(EBX));
  /* 10e20f81 push esi */
  push32((uint32_t)(ESI));
  /* 10e20f82 push edi */
  push32((uint32_t)(EDI));
  /* 10e20f83 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10e20f86 cmp dword ptr [0x10e3e6a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e6a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e20f8d jne 0x10e20fde */
  if (!C.zf) goto L_10e20fde;
  /* 10e20f8f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10e20f92 push eax */
  push32((uint32_t)(EAX));
  /* 10e20f93 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e20f95 push 0x10e39f38 */
  push32((uint32_t)(0x10e39f38u));
  /* 10e20f9a push 1 */
  push32((uint32_t)(0x1u));
  /* 10e20f9c call dword ptr [0x10e4031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e4031c))), 0x10e20fa2u);
  /* 10e20fa2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e20fa4 je 0x10e20fb2 */
  if (C.zf) goto L_10e20fb2;
  /* 10e20fa6 mov dword ptr [0x10e3e6a4], 1 */
  w32((uint32_t)(0x10e3e6a4), (0x1u));
  /* 10e20fb0 jmp 0x10e20fde */
  goto L_10e20fde;
L_10e20fb2:;
  /* 10e20fb2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 10e20fb5 push ecx */
  push32((uint32_t)(ECX));
  /* 10e20fb6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e20fb8 push 0x10e39f34 */
  push32((uint32_t)(0x10e39f34u));
  /* 10e20fbd push 1 */
  push32((uint32_t)(0x1u));
  /* 10e20fbf push 0 */
  push32((uint32_t)(0x0u));
  /* 10e20fc1 call dword ptr [0x10e40318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40318))), 0x10e20fc7u);
  /* 10e20fc7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e20fc9 je 0x10e20fd7 */
  if (C.zf) goto L_10e20fd7;
  /* 10e20fcb mov dword ptr [0x10e3e6a4], 2 */
  w32((uint32_t)(0x10e3e6a4), (0x2u));
  /* 10e20fd5 jmp 0x10e20fde */
  goto L_10e20fde;
L_10e20fd7:;
  /* 10e20fd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e20fd9 jmp 0x10e211b9 */
  goto L_10e211b9;
L_10e20fde:;
  /* 10e20fde cmp dword ptr [0x10e3e6a4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e6a4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e20fe5 jne 0x10e21002 */
  if (!C.zf) goto L_10e21002;
  /* 10e20fe7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e20fea push edx */
  push32((uint32_t)(EDX));
  /* 10e20feb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e20fee push eax */
  push32((uint32_t)(EAX));
  /* 10e20fef mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e20ff2 push ecx */
  push32((uint32_t)(ECX));
  /* 10e20ff3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e20ff6 push edx */
  push32((uint32_t)(EDX));
  /* 10e20ff7 call dword ptr [0x10e4031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e4031c))), 0x10e20ffdu);
  /* 10e20ffd jmp 0x10e211b9 */
  goto L_10e211b9;
L_10e21002:;
  /* 10e21002 cmp dword ptr [0x10e3e6a4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e6a4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e21009 jne 0x10e211b7 */
  if (!C.zf) goto L_10e211b7;
  /* 10e2100f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e21013 jne 0x10e2101d */
  if (!C.zf) goto L_10e2101d;
  /* 10e21015 mov eax, dword ptr [0x10e3e618] */
  EAX = (r32((uint32_t)(0x10e3e618)));
  /* 10e2101a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_10e2101d:;
  /* 10e2101d push 0 */
  push32((uint32_t)(0x0u));
  /* 10e2101f push 0 */
  push32((uint32_t)(0x0u));
  /* 10e21021 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e21023 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e21025 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e21028 push ecx */
  push32((uint32_t)(ECX));
  /* 10e21029 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e2102c push edx */
  push32((uint32_t)(EDX));
  /* 10e2102d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10e21032 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e21035 push eax */
  push32((uint32_t)(EAX));
  /* 10e21036 call dword ptr [0x10e40224] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40224))), 0x10e2103cu);
  /* 10e2103c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10e2103f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e21043 jne 0x10e2104c */
  if (!C.zf) goto L_10e2104c;
  /* 10e21045 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e21047 jmp 0x10e211b9 */
  goto L_10e211b9;
L_10e2104c:;
  /* 10e2104c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e21053 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e21056 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e21059 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10e2105b call 0x10e15ca0 */
  push32(0x10e21060u); f_10e15ca0();
  /* 10e21060 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 10e21063 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10e21066 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e21069 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10e2106c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e2106f push edx */
  push32((uint32_t)(EDX));
  /* 10e21070 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e21072 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e21075 push eax */
  push32((uint32_t)(EAX));
  /* 10e21076 call 0x10e16870 */
  push32(0x10e2107bu); f_10e16870();
  /* 10e2107b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e2107e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10e21085 jmp 0x10e2109e */
  goto L_10e2109e;
  /* 10e21087 mov eax, 1 */
  EAX = (0x1u);
  /* 10e2108c ret  */
  ESPCHK(0x10e20f60u, _esp0);
  ESP += 4; return;
  /* 10e2108d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10e21090 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10e21097 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10e2109e:;
  /* 10e2109e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e210a2 jne 0x10e210ab */
  if (!C.zf) goto L_10e210ab;
  /* 10e210a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e210a6 jmp 0x10e211b9 */
  goto L_10e211b9;
L_10e210ab:;
  /* 10e210ab push 0 */
  push32((uint32_t)(0x0u));
  /* 10e210ad push 0 */
  push32((uint32_t)(0x0u));
  /* 10e210af mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e210b2 push ecx */
  push32((uint32_t)(ECX));
  /* 10e210b3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e210b6 push edx */
  push32((uint32_t)(EDX));
  /* 10e210b7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e210ba push eax */
  push32((uint32_t)(EAX));
  /* 10e210bb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e210be push ecx */
  push32((uint32_t)(ECX));
  /* 10e210bf push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10e210c4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e210c7 push edx */
  push32((uint32_t)(EDX));
  /* 10e210c8 call dword ptr [0x10e40224] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40224))), 0x10e210ceu);
  /* 10e210ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e210d0 jne 0x10e210d9 */
  if (!C.zf) goto L_10e210d9;
  /* 10e210d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e210d4 jmp 0x10e211b9 */
  goto L_10e211b9;
L_10e210d9:;
  /* 10e210d9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10e210e0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e210e3 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 10e210e7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e210ea and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10e210ec call 0x10e15ca0 */
  push32(0x10e210f1u); f_10e15ca0();
  /* 10e210f1 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 10e210f4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10e210f7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10e210fa mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10e210fd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10e21104 jmp 0x10e2111d */
  goto L_10e2111d;
  /* 10e21106 mov eax, 1 */
  EAX = (0x1u);
  /* 10e2110b ret  */
  ESPCHK(0x10e20f60u, _esp0);
  ESP += 4; return;
  /* 10e2110c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10e2110f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10e21116 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10e2111d:;
  /* 10e2111d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e21121 jne 0x10e2112a */
  if (!C.zf) goto L_10e2112a;
  /* 10e21123 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e21125 jmp 0x10e211b9 */
  goto L_10e211b9;
L_10e2112a:;
  /* 10e2112a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e2112e jne 0x10e21139 */
  if (!C.zf) goto L_10e21139;
  /* 10e21130 mov edx, dword ptr [0x10e3e608] */
  EDX = (r32((uint32_t)(0x10e3e608)));
  /* 10e21136 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_10e21139:;
  /* 10e21139 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e2113c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e2113f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 10e21145 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e21148 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e2114b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 10e21152 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e21155 push ecx */
  push32((uint32_t)(ECX));
  /* 10e21156 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e21159 push edx */
  push32((uint32_t)(EDX));
  /* 10e2115a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e2115d push eax */
  push32((uint32_t)(EAX));
  /* 10e2115e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e21161 push ecx */
  push32((uint32_t)(ECX));
  /* 10e21162 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10e21165 push edx */
  push32((uint32_t)(EDX));
  /* 10e21166 call dword ptr [0x10e40318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40318))), 0x10e2116cu);
  /* 10e2116c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10e2116f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e21172 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e21175 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e21177 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 10e2117c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e21182 je 0x10e21198 */
  if (C.zf) goto L_10e21198;
  /* 10e21184 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e21187 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e2118a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e2118c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10e21190 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e21196 je 0x10e2119c */
  if (C.zf) goto L_10e2119c;
L_10e21198:;
  /* 10e21198 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e2119a jmp 0x10e211b9 */
  goto L_10e211b9;
L_10e2119c:;
  /* 10e2119c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e2119f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10e211a1 push eax */
  push32((uint32_t)(EAX));
  /* 10e211a2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e211a5 push ecx */
  push32((uint32_t)(ECX));
  /* 10e211a6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e211a9 push edx */
  push32((uint32_t)(EDX));
  /* 10e211aa call 0x10e1a9f0 */
  push32(0x10e211afu); f_10e1a9f0();
  /* 10e211af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e211b2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e211b5 jmp 0x10e211b9 */
  goto L_10e211b9;
L_10e211b7:;
  /* 10e211b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e211b9:;
  /* 10e211b9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 10e211bc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e211bf mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10e211c6 pop edi */
  EDI = (pop32());
  /* 10e211c7 pop esi */
  ESI = (pop32());
  /* 10e211c8 pop ebx */
  EBX = (pop32());
  /* 10e211c9 mov esp, ebp */
  ESP = (EBP);
  /* 10e211cb pop ebp */
  EBP = (pop32());
  /* 10e211cc ret  */
  ESPCHK(0x10e20f60u, _esp0);
  ESP += 4; return;
}

/* FUN_100111d0 @ 0x10e211d0 (208 bytes, 85 insns) */
void f_10e211d0(void) {
  FTRACE(0x10e211d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e211d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e211d1 mov ebp, esp */
  EBP = (ESP);
  /* 10e211d3 push edi */
  push32((uint32_t)(EDI));
  /* 10e211d4 push esi */
  push32((uint32_t)(ESI));
  /* 10e211d5 push ebx */
  push32((uint32_t)(EBX));
  /* 10e211d6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10e211d9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10e211dc lea eax, [0x10e3e600] */
  EAX = ((uint32_t)(0x10e3e600));
  /* 10e211e2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e211e6 jne 0x10e21223 */
  if (!C.zf) goto L_10e21223;
  /* 10e211e8 mov al, 0xff */
  AL = (0xffu);
  /* 10e211ea mov edi, edi */
  EDI = (EDI);
L_10e211ec:;
  /* 10e211ec or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10e211ee je 0x10e2121e */
  if (C.zf) goto L_10e2121e;
  /* 10e211f0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10e211f2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10e211f3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 10e211f5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10e211f6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e211f8 je 0x10e211ec */
  if (C.zf) goto L_10e211ec;
  /* 10e211fa sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10e211fc cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e211fe sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10e21200 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10e21203 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10e21205 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10e21207 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 10e21209 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10e2120b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e2120d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10e2120f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10e21212 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10e21214 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10e21216 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e21218 je 0x10e211ec */
  if (C.zf) goto L_10e211ec;
  /* 10e2121a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10e2121c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_10e2121e:;
  /* 10e2121e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 10e21221 jmp 0x10e2129b */
  goto L_10e2129b;
L_10e21223:;
  /* 10e21223 lock inc dword ptr [0x10e3e794] */
  x86_unimpl("lock inc @ 0x10e21223");
  /* 10e2122a cmp dword ptr [0x10e3e784], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e784))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e21231 jg 0x10e21237 */
  if ((!C.zf&&C.sf==C.of)) goto L_10e21237;
  /* 10e21233 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e21235 jmp 0x10e2124c */
  goto L_10e2124c;
L_10e21237:;
  /* 10e21237 lock dec dword ptr [0x10e3e794] */
  x86_unimpl("lock dec @ 0x10e21237");
  /* 10e2123e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10e21240 call 0x10e16500 */
  push32(0x10e21245u); f_10e16500();
  /* 10e21245 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_10e2124c:;
  /* 10e2124c mov eax, 0xff */
  EAX = (0xffu);
  /* 10e21251 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10e21253 nop  */
  /* nop */
L_10e21254:;
  /* 10e21254 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10e21256 je 0x10e2127f */
  if (C.zf) goto L_10e2127f;
  /* 10e21258 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10e2125a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10e2125b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10e2125d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10e2125e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e21260 je 0x10e21254 */
  if (C.zf) goto L_10e21254;
  /* 10e21262 push eax */
  push32((uint32_t)(EAX));
  /* 10e21263 push ebx */
  push32((uint32_t)(EBX));
  /* 10e21264 call 0x10e22340 */
  push32(0x10e21269u); f_10e22340();
  /* 10e21269 mov ebx, eax */
  EBX = (EAX);
  /* 10e2126b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e2126e call 0x10e22340 */
  push32(0x10e21273u); f_10e22340();
  /* 10e21273 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e21276 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e21278 je 0x10e21254 */
  if (C.zf) goto L_10e21254;
  /* 10e2127a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e2127c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10e2127f:;
  /* 10e2127f mov ebx, eax */
  EBX = (EAX);
  /* 10e21281 pop eax */
  EAX = (pop32());
  /* 10e21282 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e21284 jne 0x10e2128f */
  if (!C.zf) goto L_10e2128f;
  /* 10e21286 lock dec dword ptr [0x10e3e794] */
  x86_unimpl("lock dec @ 0x10e21286");
  /* 10e2128d jmp 0x10e21299 */
  goto L_10e21299;
L_10e2128f:;
  /* 10e2128f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10e21291 call 0x10e165a0 */
  push32(0x10e21296u); f_10e165a0();
  /* 10e21296 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e21299:;
  /* 10e21299 mov eax, ebx */
  EAX = (EBX);
L_10e2129b:;
  /* 10e2129b pop ebx */
  EBX = (pop32());
  /* 10e2129c pop esi */
  ESI = (pop32());
  /* 10e2129d pop edi */
  EDI = (pop32());
  /* 10e2129e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e2129f ret  */
  ESPCHK(0x10e211d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100112a0 @ 0x10e212a0 (257 bytes, 103 insns) */
void f_10e212a0(void) {
  FTRACE(0x10e212a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e212a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e212a1 mov ebp, esp */
  EBP = (ESP);
  /* 10e212a3 push edi */
  push32((uint32_t)(EDI));
  /* 10e212a4 push esi */
  push32((uint32_t)(ESI));
  /* 10e212a5 push ebx */
  push32((uint32_t)(EBX));
  /* 10e212a6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e212a9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e212ab je 0x10e2139a */
  if (C.zf) goto L_10e2139a;
  /* 10e212b1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10e212b4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10e212b7 lea eax, [0x10e3e600] */
  EAX = ((uint32_t)(0x10e3e600));
  /* 10e212bd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e212c1 jne 0x10e21311 */
  if (!C.zf) goto L_10e21311;
  /* 10e212c3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 10e212c5 mov bl, 0x5a */
  BL = (0x5au);
  /* 10e212c7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 10e212c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10e212cc:;
  /* 10e212cc mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 10e212ce or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10e212d0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 10e212d2 je 0x10e212f5 */
  if (C.zf) goto L_10e212f5;
  /* 10e212d4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10e212d6 je 0x10e212f5 */
  if (C.zf) goto L_10e212f5;
  /* 10e212d8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10e212d9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10e212da cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e212dc jb 0x10e212e4 */
  if (C.cf) goto L_10e212e4;
  /* 10e212de cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e212e0 ja 0x10e212e4 */
  if ((!C.cf&&!C.zf)) goto L_10e212e4;
  /* 10e212e2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_10e212e4:;
  /* 10e212e4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e212e6 jb 0x10e212ee */
  if (C.cf) goto L_10e212ee;
  /* 10e212e8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e212ea ja 0x10e212ee */
  if ((!C.cf&&!C.zf)) goto L_10e212ee;
  /* 10e212ec add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_10e212ee:;
  /* 10e212ee cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e212f0 jne 0x10e212ff */
  if (!C.zf) goto L_10e212ff;
  /* 10e212f2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10e212f3 jne 0x10e212cc */
  if (!C.zf) goto L_10e212cc;
L_10e212f5:;
  /* 10e212f5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e212f7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e212f9 je 0x10e2139a */
  if (C.zf) goto L_10e2139a;
L_10e212ff:;
  /* 10e212ff mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10e21304 jb 0x10e2139a */
  if (C.cf) goto L_10e2139a;
  /* 10e2130a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e2130c jmp 0x10e2139a */
  goto L_10e2139a;
L_10e21311:;
  /* 10e21311 lock inc dword ptr [0x10e3e794] */
  x86_unimpl("lock inc @ 0x10e21311");
  /* 10e21318 cmp dword ptr [0x10e3e784], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e784))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e2131f jg 0x10e21325 */
  if ((!C.zf&&C.sf==C.of)) goto L_10e21325;
  /* 10e21321 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e21323 jmp 0x10e2133e */
  goto L_10e2133e;
L_10e21325:;
  /* 10e21325 lock dec dword ptr [0x10e3e794] */
  x86_unimpl("lock dec @ 0x10e21325");
  /* 10e2132c mov ebx, ecx */
  EBX = (ECX);
  /* 10e2132e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10e21330 call 0x10e16500 */
  push32(0x10e21335u); f_10e16500();
  /* 10e21335 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 10e2133c mov ecx, ebx */
  ECX = (EBX);
L_10e2133e:;
  /* 10e2133e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e21340 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10e21342 mov edi, edi */
  EDI = (EDI);
L_10e21344:;
  /* 10e21344 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10e21346 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e21348 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10e2134a je 0x10e2136f */
  if (C.zf) goto L_10e2136f;
  /* 10e2134c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10e2134e je 0x10e2136f */
  if (C.zf) goto L_10e2136f;
  /* 10e21350 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10e21351 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10e21352 push ecx */
  push32((uint32_t)(ECX));
  /* 10e21353 push eax */
  push32((uint32_t)(EAX));
  /* 10e21354 push ebx */
  push32((uint32_t)(EBX));
  /* 10e21355 call 0x10e22340 */
  push32(0x10e2135au); f_10e22340();
  /* 10e2135a mov ebx, eax */
  EBX = (EAX);
  /* 10e2135c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e2135f call 0x10e22340 */
  push32(0x10e21364u); f_10e22340();
  /* 10e21364 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e21367 pop ecx */
  ECX = (pop32());
  /* 10e21368 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e2136a jne 0x10e21375 */
  if (!C.zf) goto L_10e21375;
  /* 10e2136c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10e2136d jne 0x10e21344 */
  if (!C.zf) goto L_10e21344;
L_10e2136f:;
  /* 10e2136f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e21371 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e21373 je 0x10e2137e */
  if (C.zf) goto L_10e2137e;
L_10e21375:;
  /* 10e21375 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10e2137a jb 0x10e2137e */
  if (C.cf) goto L_10e2137e;
  /* 10e2137c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_10e2137e:;
  /* 10e2137e pop eax */
  EAX = (pop32());
  /* 10e2137f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e21381 jne 0x10e2138c */
  if (!C.zf) goto L_10e2138c;
  /* 10e21383 lock dec dword ptr [0x10e3e794] */
  x86_unimpl("lock dec @ 0x10e21383");
  /* 10e2138a jmp 0x10e2139a */
  goto L_10e2139a;
L_10e2138c:;
  /* 10e2138c mov ebx, ecx */
  EBX = (ECX);
  /* 10e2138e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10e21390 call 0x10e165a0 */
  push32(0x10e21395u); f_10e165a0();
  /* 10e21395 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e21398 mov ecx, ebx */
  ECX = (EBX);
L_10e2139a:;
  /* 10e2139a mov eax, ecx */
  EAX = (ECX);
  /* 10e2139c pop ebx */
  EBX = (pop32());
  /* 10e2139d pop esi */
  ESI = (pop32());
  /* 10e2139e pop edi */
  EDI = (pop32());
  /* 10e2139f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e213a0 ret  */
  ESPCHK(0x10e212a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100113b0 @ 0x10e213b0 (255 bytes, 88 insns) */
void f_10e213b0(void) {
  FTRACE(0x10e213b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e213b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e213b1 mov ebp, esp */
  EBP = (ESP);
  /* 10e213b3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10e213b6:;
  /* 10e213b6 cmp dword ptr [0x10e3cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10e3cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e213bd jle 0x10e213d6 */
  if ((C.zf||C.sf!=C.of)) goto L_10e213d6;
  /* 10e213bf push 8 */
  push32((uint32_t)(0x8u));
  /* 10e213c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e213c4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e213c6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10e213c8 push ecx */
  push32((uint32_t)(ECX));
  /* 10e213c9 call 0x10e18b10 */
  push32(0x10e213ceu); f_10e18b10();
  /* 10e213ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e213d1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10e213d4 jmp 0x10e213ef */
  goto L_10e213ef;
L_10e213d6:;
  /* 10e213d6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e213d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e213db mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e213dd mov ecx, dword ptr [0x10e3cc98] */
  ECX = (r32((uint32_t)(0x10e3cc98)));
  /* 10e213e3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e213e5 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10e213e9 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10e213ec mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10e213ef:;
  /* 10e213ef cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e213f3 je 0x10e21400 */
  if (C.zf) goto L_10e21400;
  /* 10e213f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e213f8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e213fb mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10e213fe jmp 0x10e213b6 */
  goto L_10e213b6;
L_10e21400:;
  /* 10e21400 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e21403 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e21405 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e21407 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e2140a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e2140d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e21410 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10e21413 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e21416 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e21419 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e2141d je 0x10e21425 */
  if (C.zf) goto L_10e21425;
  /* 10e2141f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e21423 jne 0x10e21438 */
  if (!C.zf) goto L_10e21438;
L_10e21425:;
  /* 10e21425 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e21428 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e2142a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e2142c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e2142f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e21432 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e21435 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10e21438:;
  /* 10e21438 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10e2143f:;
  /* 10e2143f cmp dword ptr [0x10e3cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10e3cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e21446 jle 0x10e2145b */
  if ((C.zf||C.sf!=C.of)) goto L_10e2145b;
  /* 10e21448 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e2144a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e2144d push edx */
  push32((uint32_t)(EDX));
  /* 10e2144e call 0x10e18b10 */
  push32(0x10e21453u); f_10e18b10();
  /* 10e21453 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e21456 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10e21459 jmp 0x10e21470 */
  goto L_10e21470;
L_10e2145b:;
  /* 10e2145b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e2145e mov ecx, dword ptr [0x10e3cc98] */
  ECX = (r32((uint32_t)(0x10e3cc98)));
  /* 10e21464 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e21466 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10e2146a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10e2146d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10e21470:;
  /* 10e21470 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e21474 je 0x10e2149b */
  if (C.zf) goto L_10e2149b;
  /* 10e21476 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e21479 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e2147c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e2147f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 10e21483 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10e21486 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e21489 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e2148b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10e2148d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e21490 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e21493 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e21496 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10e21499 jmp 0x10e2143f */
  goto L_10e2143f;
L_10e2149b:;
  /* 10e2149b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e2149f jne 0x10e214a8 */
  if (!C.zf) goto L_10e214a8;
  /* 10e214a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e214a4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e214a6 jmp 0x10e214ab */
  goto L_10e214ab;
L_10e214a8:;
  /* 10e214a8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10e214ab:;
  /* 10e214ab mov esp, ebp */
  ESP = (EBP);
  /* 10e214ad pop ebp */
  EBP = (pop32());
  /* 10e214ae ret  */
  ESPCHK(0x10e213b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100114b0 @ 0x10e214b0 (17 bytes, 8 insns) */
void f_10e214b0(void) {
  FTRACE(0x10e214b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e214b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e214b1 mov ebp, esp */
  EBP = (ESP);
  /* 10e214b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e214b6 push eax */
  push32((uint32_t)(EAX));
  /* 10e214b7 call 0x10e213b0 */
  push32(0x10e214bcu); f_10e213b0();
  /* 10e214bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e214bf pop ebp */
  EBP = (pop32());
  /* 10e214c0 ret  */
  ESPCHK(0x10e214b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100114d0 @ 0x10e214d0 (297 bytes, 106 insns) */
void f_10e214d0(void) {
  FTRACE(0x10e214d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e214d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e214d1 mov ebp, esp */
  EBP = (ESP);
  /* 10e214d3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e214d6 push esi */
  push32((uint32_t)(ESI));
L_10e214d7:;
  /* 10e214d7 cmp dword ptr [0x10e3cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10e3cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e214de jle 0x10e214f7 */
  if ((C.zf||C.sf!=C.of)) goto L_10e214f7;
  /* 10e214e0 push 8 */
  push32((uint32_t)(0x8u));
  /* 10e214e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e214e5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e214e7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10e214e9 push ecx */
  push32((uint32_t)(ECX));
  /* 10e214ea call 0x10e18b10 */
  push32(0x10e214efu); f_10e18b10();
  /* 10e214ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e214f2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10e214f5 jmp 0x10e21510 */
  goto L_10e21510;
L_10e214f7:;
  /* 10e214f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e214fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e214fc mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e214fe mov ecx, dword ptr [0x10e3cc98] */
  ECX = (r32((uint32_t)(0x10e3cc98)));
  /* 10e21504 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e21506 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10e2150a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10e2150d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10e21510:;
  /* 10e21510 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e21514 je 0x10e21521 */
  if (C.zf) goto L_10e21521;
  /* 10e21516 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e21519 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e2151c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10e2151f jmp 0x10e214d7 */
  goto L_10e214d7;
L_10e21521:;
  /* 10e21521 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e21524 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e21526 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e21528 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e2152b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e2152e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e21531 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10e21534 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e21537 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10e2153a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e2153e je 0x10e21546 */
  if (C.zf) goto L_10e21546;
  /* 10e21540 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e21544 jne 0x10e21559 */
  if (!C.zf) goto L_10e21559;
L_10e21546:;
  /* 10e21546 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e21549 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e2154b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e2154d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e21550 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e21553 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e21556 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10e21559:;
  /* 10e21559 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10e21560 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10e21567:;
  /* 10e21567 cmp dword ptr [0x10e3cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10e3cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e2156e jle 0x10e21583 */
  if ((C.zf||C.sf!=C.of)) goto L_10e21583;
  /* 10e21570 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e21572 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e21575 push edx */
  push32((uint32_t)(EDX));
  /* 10e21576 call 0x10e18b10 */
  push32(0x10e2157bu); f_10e18b10();
  /* 10e2157b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e2157e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10e21581 jmp 0x10e21598 */
  goto L_10e21598;
L_10e21583:;
  /* 10e21583 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e21586 mov ecx, dword ptr [0x10e3cc98] */
  ECX = (r32((uint32_t)(0x10e3cc98)));
  /* 10e2158c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e2158e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10e21592 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10e21595 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_10e21598:;
  /* 10e21598 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e2159c je 0x10e215d9 */
  if (C.zf) goto L_10e215d9;
  /* 10e2159e push 0 */
  push32((uint32_t)(0x0u));
  /* 10e215a0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10e215a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e215a5 push eax */
  push32((uint32_t)(EAX));
  /* 10e215a6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e215a9 push ecx */
  push32((uint32_t)(ECX));
  /* 10e215aa call 0x10e22470 */
  push32(0x10e215afu); f_10e22470();
  /* 10e215af mov ecx, eax */
  ECX = (EAX);
  /* 10e215b1 mov esi, edx */
  ESI = (EDX);
  /* 10e215b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e215b6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e215b9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10e215ba add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e215bc adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10e215be mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e215c1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 10e215c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e215c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e215c9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e215cb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e215ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e215d1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e215d4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10e215d7 jmp 0x10e21567 */
  goto L_10e21567;
L_10e215d9:;
  /* 10e215d9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e215dd jne 0x10e215ee */
  if (!C.zf) goto L_10e215ee;
  /* 10e215df mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e215e2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e215e4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e215e7 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e215ea neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e215ec jmp 0x10e215f4 */
  goto L_10e215f4;
L_10e215ee:;
  /* 10e215ee mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e215f1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_10e215f4:;
  /* 10e215f4 pop esi */
  ESI = (pop32());
  /* 10e215f5 mov esp, ebp */
  ESP = (EBP);
  /* 10e215f7 pop ebp */
  EBP = (pop32());
  /* 10e215f8 ret  */
  ESPCHK(0x10e214d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011600 @ 0x10e21600 (61 bytes, 18 insns) */
void f_10e21600(void) {
  FTRACE(0x10e21600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e21600 push ebp */
  push32((uint32_t)(EBP));
  /* 10e21601 mov ebp, esp */
  EBP = (ESP);
  /* 10e21603 cmp dword ptr [0x10e3e760], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e760))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e2160a jne 0x10e2163b */
  if (!C.zf) goto L_10e2163b;
  /* 10e2160c push 0xb */
  push32((uint32_t)(0xbu));
  /* 10e2160e call 0x10e16500 */
  push32(0x10e21613u); f_10e16500();
  /* 10e21613 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e21616 cmp dword ptr [0x10e3e760], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e760))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e2161d jne 0x10e21631 */
  if (!C.zf) goto L_10e21631;
  /* 10e2161f call 0x10e21660 */
  push32(0x10e21624u); f_10e21660();
  /* 10e21624 mov eax, dword ptr [0x10e3e760] */
  EAX = (r32((uint32_t)(0x10e3e760)));
  /* 10e21629 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e2162c mov dword ptr [0x10e3e760], eax */
  w32((uint32_t)(0x10e3e760), (EAX));
L_10e21631:;
  /* 10e21631 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10e21633 call 0x10e165a0 */
  push32(0x10e21638u); f_10e165a0();
  /* 10e21638 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e2163b:;
  /* 10e2163b pop ebp */
  EBP = (pop32());
  /* 10e2163c ret  */
  ESPCHK(0x10e21600u, _esp0);
  ESP += 4; return;
}

/* FUN_10011640 @ 0x10e21640 (30 bytes, 11 insns) */
void f_10e21640(void) {
  FTRACE(0x10e21640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e21640 push ebp */
  push32((uint32_t)(EBP));
  /* 10e21641 mov ebp, esp */
  EBP = (ESP);
  /* 10e21643 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10e21645 call 0x10e16500 */
  push32(0x10e2164au); f_10e16500();
  /* 10e2164a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e2164d call 0x10e21660 */
  push32(0x10e21652u); f_10e21660();
  /* 10e21652 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10e21654 call 0x10e165a0 */
  push32(0x10e21659u); f_10e165a0();
  /* 10e21659 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e2165c pop ebp */
  EBP = (pop32());
  /* 10e2165d ret  */
  ESPCHK(0x10e21640u, _esp0);
  ESP += 4; return;
}

/* FUN_10011660 @ 0x10e21660 (939 bytes, 266 insns) */
void f_10e21660(void) {
  FTRACE(0x10e21660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e21660 push ebp */
  push32((uint32_t)(EBP));
  /* 10e21661 mov ebp, esp */
  EBP = (ESP);
  /* 10e21663 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e21666 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e2166d push 0xc */
  push32((uint32_t)(0xcu));
  /* 10e2166f call 0x10e16500 */
  push32(0x10e21674u); f_10e16500();
  /* 10e21674 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e21677 mov dword ptr [0x10e3e6a8], 0 */
  w32((uint32_t)(0x10e3e6a8), (0x0u));
  /* 10e21681 mov dword ptr [0x10e3de38], 0xffffffff */
  w32((uint32_t)(0x10e3de38), (0xffffffffu));
  /* 10e2168b mov eax, dword ptr [0x10e3de38] */
  EAX = (r32((uint32_t)(0x10e3de38)));
  /* 10e21690 mov dword ptr [0x10e3de28], eax */
  w32((uint32_t)(0x10e3de28), (EAX));
  /* 10e21695 push 0x10e3a868 */
  push32((uint32_t)(0x10e3a868u));
  /* 10e2169a call 0x10e224e0 */
  push32(0x10e2169fu); f_10e224e0();
  /* 10e2169f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e216a2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e216a5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e216a9 jne 0x10e217e3 */
  if (!C.zf) goto L_10e217e3;
  /* 10e216af push 0xc */
  push32((uint32_t)(0xcu));
  /* 10e216b1 call 0x10e165a0 */
  push32(0x10e216b6u); f_10e165a0();
  /* 10e216b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e216b9 push 0x10e3e6b0 */
  push32((uint32_t)(0x10e3e6b0u));
  /* 10e216be call dword ptr [0x10e40234] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40234))), 0x10e216c4u);
  /* 10e216c4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e216c7 je 0x10e217de */
  if (C.zf) goto L_10e217de;
  /* 10e216cd mov dword ptr [0x10e3e6a8], 1 */
  w32((uint32_t)(0x10e3e6a8), (0x1u));
  /* 10e216d7 mov ecx, dword ptr [0x10e3e6b0] */
  ECX = (r32((uint32_t)(0x10e3e6b0)));
  /* 10e216dd imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e216e0 mov dword ptr [0x10e3dd90], ecx */
  w32((uint32_t)(0x10e3dd90), (ECX));
  /* 10e216e6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e216e8 mov dx, word ptr [0x10e3e6f6] */
  DX = (r16((uint32_t)(0x10e3e6f6)));
  /* 10e216ef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e216f1 je 0x10e21709 */
  if (C.zf) goto L_10e21709;
  /* 10e216f3 mov eax, dword ptr [0x10e3e704] */
  EAX = (r32((uint32_t)(0x10e3e704)));
  /* 10e216f8 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e216fb mov ecx, dword ptr [0x10e3dd90] */
  ECX = (r32((uint32_t)(0x10e3dd90)));
  /* 10e21701 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e21703 mov dword ptr [0x10e3dd90], ecx */
  w32((uint32_t)(0x10e3dd90), (ECX));
L_10e21709:;
  /* 10e21709 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e2170b mov dx, word ptr [0x10e3e74a] */
  DX = (r16((uint32_t)(0x10e3e74a)));
  /* 10e21712 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e21714 je 0x10e2173e */
  if (C.zf) goto L_10e2173e;
  /* 10e21716 cmp dword ptr [0x10e3e758], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e758))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e2171d je 0x10e2173e */
  if (C.zf) goto L_10e2173e;
  /* 10e2171f mov dword ptr [0x10e3dd94], 1 */
  w32((uint32_t)(0x10e3dd94), (0x1u));
  /* 10e21729 mov eax, dword ptr [0x10e3e758] */
  EAX = (r32((uint32_t)(0x10e3e758)));
  /* 10e2172e sub eax, dword ptr [0x10e3e704] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e3e704))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e21734 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e21737 mov dword ptr [0x10e3dd98], eax */
  w32((uint32_t)(0x10e3dd98), (EAX));
  /* 10e2173c jmp 0x10e21752 */
  goto L_10e21752;
L_10e2173e:;
  /* 10e2173e mov dword ptr [0x10e3dd94], 0 */
  w32((uint32_t)(0x10e3dd94), (0x0u));
  /* 10e21748 mov dword ptr [0x10e3dd98], 0 */
  w32((uint32_t)(0x10e3dd98), (0x0u));
L_10e21752:;
  /* 10e21752 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10e21755 push ecx */
  push32((uint32_t)(ECX));
  /* 10e21756 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e21758 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10e2175a mov edx, dword ptr [0x10e3de1c] */
  EDX = (r32((uint32_t)(0x10e3de1c)));
  /* 10e21760 push edx */
  push32((uint32_t)(EDX));
  /* 10e21761 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10e21763 push 0x10e3e6b4 */
  push32((uint32_t)(0x10e3e6b4u));
  /* 10e21768 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10e2176d mov eax, dword ptr [0x10e3e618] */
  EAX = (r32((uint32_t)(0x10e3e618)));
  /* 10e21772 push eax */
  push32((uint32_t)(EAX));
  /* 10e21773 call dword ptr [0x10e40224] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40224))), 0x10e21779u);
  /* 10e21779 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e2177b je 0x10e2178f */
  if (C.zf) goto L_10e2178f;
  /* 10e2177d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e21781 jne 0x10e2178f */
  if (!C.zf) goto L_10e2178f;
  /* 10e21783 mov ecx, dword ptr [0x10e3de1c] */
  ECX = (r32((uint32_t)(0x10e3de1c)));
  /* 10e21789 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 10e2178d jmp 0x10e21798 */
  goto L_10e21798;
L_10e2178f:;
  /* 10e2178f mov edx, dword ptr [0x10e3de1c] */
  EDX = (r32((uint32_t)(0x10e3de1c)));
  /* 10e21795 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10e21798:;
  /* 10e21798 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10e2179b push eax */
  push32((uint32_t)(EAX));
  /* 10e2179c push 0 */
  push32((uint32_t)(0x0u));
  /* 10e2179e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10e217a0 mov ecx, dword ptr [0x10e3de20] */
  ECX = (r32((uint32_t)(0x10e3de20)));
  /* 10e217a6 push ecx */
  push32((uint32_t)(ECX));
  /* 10e217a7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10e217a9 push 0x10e3e708 */
  push32((uint32_t)(0x10e3e708u));
  /* 10e217ae push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10e217b3 mov edx, dword ptr [0x10e3e618] */
  EDX = (r32((uint32_t)(0x10e3e618)));
  /* 10e217b9 push edx */
  push32((uint32_t)(EDX));
  /* 10e217ba call dword ptr [0x10e40224] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40224))), 0x10e217c0u);
  /* 10e217c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e217c2 je 0x10e217d5 */
  if (C.zf) goto L_10e217d5;
  /* 10e217c4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e217c8 jne 0x10e217d5 */
  if (!C.zf) goto L_10e217d5;
  /* 10e217ca mov eax, dword ptr [0x10e3de20] */
  EAX = (r32((uint32_t)(0x10e3de20)));
  /* 10e217cf mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 10e217d3 jmp 0x10e217de */
  goto L_10e217de;
L_10e217d5:;
  /* 10e217d5 mov ecx, dword ptr [0x10e3de20] */
  ECX = (r32((uint32_t)(0x10e3de20)));
  /* 10e217db mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_10e217de:;
  /* 10e217de jmp 0x10e21a07 */
  goto L_10e21a07;
L_10e217e3:;
  /* 10e217e3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e217e6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e217e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e217eb je 0x10e2180d */
  if (C.zf) goto L_10e2180d;
  /* 10e217ed cmp dword ptr [0x10e3e75c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e75c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e217f4 je 0x10e2181c */
  if (C.zf) goto L_10e2181c;
  /* 10e217f6 mov ecx, dword ptr [0x10e3e75c] */
  ECX = (r32((uint32_t)(0x10e3e75c)));
  /* 10e217fc push ecx */
  push32((uint32_t)(ECX));
  /* 10e217fd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e21800 push edx */
  push32((uint32_t)(EDX));
  /* 10e21801 call 0x10e1e790 */
  push32(0x10e21806u); f_10e1e790();
  /* 10e21806 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e21809 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e2180b jne 0x10e2181c */
  if (!C.zf) goto L_10e2181c;
L_10e2180d:;
  /* 10e2180d push 0xc */
  push32((uint32_t)(0xcu));
  /* 10e2180f call 0x10e165a0 */
  push32(0x10e21814u); f_10e165a0();
  /* 10e21814 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e21817 jmp 0x10e21a07 */
  goto L_10e21a07;
L_10e2181c:;
  /* 10e2181c push 2 */
  push32((uint32_t)(0x2u));
  /* 10e2181e mov eax, dword ptr [0x10e3e75c] */
  EAX = (r32((uint32_t)(0x10e3e75c)));
  /* 10e21823 push eax */
  push32((uint32_t)(EAX));
  /* 10e21824 call 0x10e13590 */
  push32(0x10e21829u); f_10e13590();
  /* 10e21829 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e2182c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 10e21831 push 0x10e3a860 */
  push32((uint32_t)(0x10e3a860u));
  /* 10e21836 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e21838 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e2183b push ecx */
  push32((uint32_t)(ECX));
  /* 10e2183c call 0x10e15930 */
  push32(0x10e21841u); f_10e15930();
  /* 10e21841 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e21844 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e21847 push eax */
  push32((uint32_t)(EAX));
  /* 10e21848 call 0x10e12b00 */
  push32(0x10e2184du); f_10e12b00();
  /* 10e2184d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e21850 mov dword ptr [0x10e3e75c], eax */
  w32((uint32_t)(0x10e3e75c), (EAX));
  /* 10e21855 cmp dword ptr [0x10e3e75c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e75c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e2185c jne 0x10e2186d */
  if (!C.zf) goto L_10e2186d;
  /* 10e2185e push 0xc */
  push32((uint32_t)(0xcu));
  /* 10e21860 call 0x10e165a0 */
  push32(0x10e21865u); f_10e165a0();
  /* 10e21865 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e21868 jmp 0x10e21a07 */
  goto L_10e21a07;
L_10e2186d:;
  /* 10e2186d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e21870 push edx */
  push32((uint32_t)(EDX));
  /* 10e21871 mov eax, dword ptr [0x10e3e75c] */
  EAX = (r32((uint32_t)(0x10e3e75c)));
  /* 10e21876 push eax */
  push32((uint32_t)(EAX));
  /* 10e21877 call 0x10e15ab0 */
  push32(0x10e2187cu); f_10e15ab0();
  /* 10e2187c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e2187f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10e21881 call 0x10e165a0 */
  push32(0x10e21886u); f_10e165a0();
  /* 10e21886 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e21889 push 3 */
  push32((uint32_t)(0x3u));
  /* 10e2188b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e2188e push ecx */
  push32((uint32_t)(ECX));
  /* 10e2188f mov edx, dword ptr [0x10e3de1c] */
  EDX = (r32((uint32_t)(0x10e3de1c)));
  /* 10e21895 push edx */
  push32((uint32_t)(EDX));
  /* 10e21896 call 0x10e16320 */
  push32(0x10e2189bu); f_10e16320();
  /* 10e2189b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e2189e mov eax, dword ptr [0x10e3de1c] */
  EAX = (r32((uint32_t)(0x10e3de1c)));
  /* 10e218a3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 10e218a7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e218aa add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e218ad mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e218b0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e218b3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e218b6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e218b9 jne 0x10e218cd */
  if (!C.zf) goto L_10e218cd;
  /* 10e218bb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e218be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e218c1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e218c4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e218c7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e218ca mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10e218cd:;
  /* 10e218cd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e218d0 push eax */
  push32((uint32_t)(EAX));
  /* 10e218d1 call 0x10e213b0 */
  push32(0x10e218d6u); f_10e213b0();
  /* 10e218d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e218d9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e218df mov dword ptr [0x10e3dd90], eax */
  w32((uint32_t)(0x10e3dd90), (EAX));
L_10e218e4:;
  /* 10e218e4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e218e7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e218ea cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e218ed je 0x10e21905 */
  if (C.zf) goto L_10e21905;
  /* 10e218ef mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e218f2 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e218f5 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e218f8 jl 0x10e21910 */
  if ((C.sf!=C.of)) goto L_10e21910;
  /* 10e218fa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e218fd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e21900 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e21903 jg 0x10e21910 */
  if ((!C.zf&&C.sf==C.of)) goto L_10e21910;
L_10e21905:;
  /* 10e21905 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e21908 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e2190b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e2190e jmp 0x10e218e4 */
  goto L_10e218e4;
L_10e21910:;
  /* 10e21910 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e21913 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e21916 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e21919 jne 0x10e219b5 */
  if (!C.zf) goto L_10e219b5;
  /* 10e2191f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e21922 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e21925 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e21928 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e2192b push edx */
  push32((uint32_t)(EDX));
  /* 10e2192c call 0x10e213b0 */
  push32(0x10e21931u); f_10e213b0();
  /* 10e21931 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e21934 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e21937 mov ecx, dword ptr [0x10e3dd90] */
  ECX = (r32((uint32_t)(0x10e3dd90)));
  /* 10e2193d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e2193f mov dword ptr [0x10e3dd90], ecx */
  w32((uint32_t)(0x10e3dd90), (ECX));
L_10e21945:;
  /* 10e21945 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e21948 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e2194b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e2194e jl 0x10e21966 */
  if ((C.sf!=C.of)) goto L_10e21966;
  /* 10e21950 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e21953 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e21956 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e21959 jg 0x10e21966 */
  if ((!C.zf&&C.sf==C.of)) goto L_10e21966;
  /* 10e2195b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e2195e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e21961 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e21964 jmp 0x10e21945 */
  goto L_10e21945;
L_10e21966:;
  /* 10e21966 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e21969 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e2196c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e2196f jne 0x10e219b5 */
  if (!C.zf) goto L_10e219b5;
  /* 10e21971 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e21974 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e21977 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e2197a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e2197d push ecx */
  push32((uint32_t)(ECX));
  /* 10e2197e call 0x10e213b0 */
  push32(0x10e21983u); f_10e213b0();
  /* 10e21983 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e21986 mov edx, dword ptr [0x10e3dd90] */
  EDX = (r32((uint32_t)(0x10e3dd90)));
  /* 10e2198c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e2198e mov dword ptr [0x10e3dd90], edx */
  w32((uint32_t)(0x10e3dd90), (EDX));
L_10e21994:;
  /* 10e21994 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e21997 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e2199a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e2199d jl 0x10e219b5 */
  if ((C.sf!=C.of)) goto L_10e219b5;
  /* 10e2199f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e219a2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e219a5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e219a8 jg 0x10e219b5 */
  if ((!C.zf&&C.sf==C.of)) goto L_10e219b5;
  /* 10e219aa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e219ad add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e219b0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e219b3 jmp 0x10e21994 */
  goto L_10e21994;
L_10e219b5:;
  /* 10e219b5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e219b9 je 0x10e219c9 */
  if (C.zf) goto L_10e219c9;
  /* 10e219bb mov edx, dword ptr [0x10e3dd90] */
  EDX = (r32((uint32_t)(0x10e3dd90)));
  /* 10e219c1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e219c3 mov dword ptr [0x10e3dd90], edx */
  w32((uint32_t)(0x10e3dd90), (EDX));
L_10e219c9:;
  /* 10e219c9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e219cc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e219cf mov dword ptr [0x10e3dd94], ecx */
  w32((uint32_t)(0x10e3dd94), (ECX));
  /* 10e219d5 cmp dword ptr [0x10e3dd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3dd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e219dc je 0x10e219fe */
  if (C.zf) goto L_10e219fe;
  /* 10e219de push 3 */
  push32((uint32_t)(0x3u));
  /* 10e219e0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e219e3 push edx */
  push32((uint32_t)(EDX));
  /* 10e219e4 mov eax, dword ptr [0x10e3de20] */
  EAX = (r32((uint32_t)(0x10e3de20)));
  /* 10e219e9 push eax */
  push32((uint32_t)(EAX));
  /* 10e219ea call 0x10e16320 */
  push32(0x10e219efu); f_10e16320();
  /* 10e219ef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e219f2 mov ecx, dword ptr [0x10e3de20] */
  ECX = (r32((uint32_t)(0x10e3de20)));
  /* 10e219f8 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 10e219fc jmp 0x10e21a07 */
  goto L_10e21a07;
L_10e219fe:;
  /* 10e219fe mov edx, dword ptr [0x10e3de20] */
  EDX = (r32((uint32_t)(0x10e3de20)));
  /* 10e21a04 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10e21a07:;
  /* 10e21a07 mov esp, ebp */
  ESP = (EBP);
  /* 10e21a09 pop ebp */
  EBP = (pop32());
  /* 10e21a0a ret  */
  ESPCHK(0x10e21660u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a10 @ 0x10e21a10 (46 bytes, 18 insns) */
void f_10e21a10(void) {
  FTRACE(0x10e21a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e21a10 push ebp */
  push32((uint32_t)(EBP));
  /* 10e21a11 mov ebp, esp */
  EBP = (ESP);
  /* 10e21a13 push ecx */
  push32((uint32_t)(ECX));
  /* 10e21a14 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10e21a16 call 0x10e16500 */
  push32(0x10e21a1bu); f_10e16500();
  /* 10e21a1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e21a1e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e21a21 push eax */
  push32((uint32_t)(EAX));
  /* 10e21a22 call 0x10e21a40 */
  push32(0x10e21a27u); f_10e21a40();
  /* 10e21a27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e21a2a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e21a2d push 0xb */
  push32((uint32_t)(0xbu));
  /* 10e21a2f call 0x10e165a0 */
  push32(0x10e21a34u); f_10e165a0();
  /* 10e21a34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e21a37 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e21a3a mov esp, ebp */
  ESP = (EBP);
  /* 10e21a3c pop ebp */
  EBP = (pop32());
  /* 10e21a3d ret  */
  ESPCHK(0x10e21a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a40 @ 0x10e21a40 (762 bytes, 246 insns) */
void f_10e21a40(void) {
  FTRACE(0x10e21a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e21a40 push ebp */
  push32((uint32_t)(EBP));
  /* 10e21a41 mov ebp, esp */
  EBP = (ESP);
  /* 10e21a43 push ecx */
  push32((uint32_t)(ECX));
  /* 10e21a44 cmp dword ptr [0x10e3dd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3dd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e21a4b jne 0x10e21a54 */
  if (!C.zf) goto L_10e21a54;
  /* 10e21a4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e21a4f jmp 0x10e21d36 */
  goto L_10e21d36;
L_10e21a54:;
  /* 10e21a54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e21a57 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10e21a5a cmp ecx, dword ptr [0x10e3de28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10e3de28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e21a60 jne 0x10e21a74 */
  if (!C.zf) goto L_10e21a74;
  /* 10e21a62 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e21a65 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e21a68 cmp eax, dword ptr [0x10e3de38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e3de38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e21a6e je 0x10e21c3b */
  if (C.zf) goto L_10e21c3b;
L_10e21a74:;
  /* 10e21a74 cmp dword ptr [0x10e3e6a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e6a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e21a7b je 0x10e21bf5 */
  if (C.zf) goto L_10e21bf5;
  /* 10e21a81 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e21a83 mov cx, word ptr [0x10e3e748] */
  CX = (r16((uint32_t)(0x10e3e748)));
  /* 10e21a8a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e21a8c jne 0x10e21ae9 */
  if (!C.zf) goto L_10e21ae9;
  /* 10e21a8e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e21a90 mov dx, word ptr [0x10e3e756] */
  DX = (r16((uint32_t)(0x10e3e756)));
  /* 10e21a97 push edx */
  push32((uint32_t)(EDX));
  /* 10e21a98 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e21a9a mov ax, word ptr [0x10e3e754] */
  AX = (r16((uint32_t)(0x10e3e754)));
  /* 10e21aa0 push eax */
  push32((uint32_t)(EAX));
  /* 10e21aa1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e21aa3 mov cx, word ptr [0x10e3e752] */
  CX = (r16((uint32_t)(0x10e3e752)));
  /* 10e21aaa push ecx */
  push32((uint32_t)(ECX));
  /* 10e21aab xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e21aad mov dx, word ptr [0x10e3e750] */
  DX = (r16((uint32_t)(0x10e3e750)));
  /* 10e21ab4 push edx */
  push32((uint32_t)(EDX));
  /* 10e21ab5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e21ab7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e21ab9 mov ax, word ptr [0x10e3e74c] */
  AX = (r16((uint32_t)(0x10e3e74c)));
  /* 10e21abf push eax */
  push32((uint32_t)(EAX));
  /* 10e21ac0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e21ac2 mov cx, word ptr [0x10e3e74e] */
  CX = (r16((uint32_t)(0x10e3e74e)));
  /* 10e21ac9 push ecx */
  push32((uint32_t)(ECX));
  /* 10e21aca xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e21acc mov dx, word ptr [0x10e3e74a] */
  DX = (r16((uint32_t)(0x10e3e74a)));
  /* 10e21ad3 push edx */
  push32((uint32_t)(EDX));
  /* 10e21ad4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e21ad7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10e21ada push ecx */
  push32((uint32_t)(ECX));
  /* 10e21adb push 1 */
  push32((uint32_t)(0x1u));
  /* 10e21add push 1 */
  push32((uint32_t)(0x1u));
  /* 10e21adf call 0x10e21d40 */
  push32(0x10e21ae4u); f_10e21d40();
  /* 10e21ae4 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e21ae7 jmp 0x10e21b3a */
  goto L_10e21b3a;
L_10e21ae9:;
  /* 10e21ae9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e21aeb mov dx, word ptr [0x10e3e756] */
  DX = (r16((uint32_t)(0x10e3e756)));
  /* 10e21af2 push edx */
  push32((uint32_t)(EDX));
  /* 10e21af3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e21af5 mov ax, word ptr [0x10e3e754] */
  AX = (r16((uint32_t)(0x10e3e754)));
  /* 10e21afb push eax */
  push32((uint32_t)(EAX));
  /* 10e21afc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e21afe mov cx, word ptr [0x10e3e752] */
  CX = (r16((uint32_t)(0x10e3e752)));
  /* 10e21b05 push ecx */
  push32((uint32_t)(ECX));
  /* 10e21b06 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e21b08 mov dx, word ptr [0x10e3e750] */
  DX = (r16((uint32_t)(0x10e3e750)));
  /* 10e21b0f push edx */
  push32((uint32_t)(EDX));
  /* 10e21b10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e21b12 mov ax, word ptr [0x10e3e74e] */
  AX = (r16((uint32_t)(0x10e3e74e)));
  /* 10e21b18 push eax */
  push32((uint32_t)(EAX));
  /* 10e21b19 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e21b1b push 0 */
  push32((uint32_t)(0x0u));
  /* 10e21b1d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e21b1f mov cx, word ptr [0x10e3e74a] */
  CX = (r16((uint32_t)(0x10e3e74a)));
  /* 10e21b26 push ecx */
  push32((uint32_t)(ECX));
  /* 10e21b27 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e21b2a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e21b2d push eax */
  push32((uint32_t)(EAX));
  /* 10e21b2e push 0 */
  push32((uint32_t)(0x0u));
  /* 10e21b30 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e21b32 call 0x10e21d40 */
  push32(0x10e21b37u); f_10e21d40();
  /* 10e21b37 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e21b3a:;
  /* 10e21b3a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e21b3c mov cx, word ptr [0x10e3e6f4] */
  CX = (r16((uint32_t)(0x10e3e6f4)));
  /* 10e21b43 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e21b45 jne 0x10e21ba2 */
  if (!C.zf) goto L_10e21ba2;
  /* 10e21b47 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e21b49 mov dx, word ptr [0x10e3e702] */
  DX = (r16((uint32_t)(0x10e3e702)));
  /* 10e21b50 push edx */
  push32((uint32_t)(EDX));
  /* 10e21b51 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e21b53 mov ax, word ptr [0x10e3e700] */
  AX = (r16((uint32_t)(0x10e3e700)));
  /* 10e21b59 push eax */
  push32((uint32_t)(EAX));
  /* 10e21b5a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e21b5c mov cx, word ptr [0x10e3e6fe] */
  CX = (r16((uint32_t)(0x10e3e6fe)));
  /* 10e21b63 push ecx */
  push32((uint32_t)(ECX));
  /* 10e21b64 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e21b66 mov dx, word ptr [0x10e3e6fc] */
  DX = (r16((uint32_t)(0x10e3e6fc)));
  /* 10e21b6d push edx */
  push32((uint32_t)(EDX));
  /* 10e21b6e push 0 */
  push32((uint32_t)(0x0u));
  /* 10e21b70 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e21b72 mov ax, word ptr [0x10e3e6f8] */
  AX = (r16((uint32_t)(0x10e3e6f8)));
  /* 10e21b78 push eax */
  push32((uint32_t)(EAX));
  /* 10e21b79 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e21b7b mov cx, word ptr [0x10e3e6fa] */
  CX = (r16((uint32_t)(0x10e3e6fa)));
  /* 10e21b82 push ecx */
  push32((uint32_t)(ECX));
  /* 10e21b83 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e21b85 mov dx, word ptr [0x10e3e6f6] */
  DX = (r16((uint32_t)(0x10e3e6f6)));
  /* 10e21b8c push edx */
  push32((uint32_t)(EDX));
  /* 10e21b8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e21b90 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10e21b93 push ecx */
  push32((uint32_t)(ECX));
  /* 10e21b94 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e21b96 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e21b98 call 0x10e21d40 */
  push32(0x10e21b9du); f_10e21d40();
  /* 10e21b9d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e21ba0 jmp 0x10e21bf3 */
  goto L_10e21bf3;
L_10e21ba2:;
  /* 10e21ba2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e21ba4 mov dx, word ptr [0x10e3e702] */
  DX = (r16((uint32_t)(0x10e3e702)));
  /* 10e21bab push edx */
  push32((uint32_t)(EDX));
  /* 10e21bac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e21bae mov ax, word ptr [0x10e3e700] */
  AX = (r16((uint32_t)(0x10e3e700)));
  /* 10e21bb4 push eax */
  push32((uint32_t)(EAX));
  /* 10e21bb5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e21bb7 mov cx, word ptr [0x10e3e6fe] */
  CX = (r16((uint32_t)(0x10e3e6fe)));
  /* 10e21bbe push ecx */
  push32((uint32_t)(ECX));
  /* 10e21bbf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e21bc1 mov dx, word ptr [0x10e3e6fc] */
  DX = (r16((uint32_t)(0x10e3e6fc)));
  /* 10e21bc8 push edx */
  push32((uint32_t)(EDX));
  /* 10e21bc9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e21bcb mov ax, word ptr [0x10e3e6fa] */
  AX = (r16((uint32_t)(0x10e3e6fa)));
  /* 10e21bd1 push eax */
  push32((uint32_t)(EAX));
  /* 10e21bd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e21bd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e21bd6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e21bd8 mov cx, word ptr [0x10e3e6f6] */
  CX = (r16((uint32_t)(0x10e3e6f6)));
  /* 10e21bdf push ecx */
  push32((uint32_t)(ECX));
  /* 10e21be0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e21be3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e21be6 push eax */
  push32((uint32_t)(EAX));
  /* 10e21be7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e21be9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e21beb call 0x10e21d40 */
  push32(0x10e21bf0u); f_10e21d40();
  /* 10e21bf0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e21bf3:;
  /* 10e21bf3 jmp 0x10e21c3b */
  goto L_10e21c3b;
L_10e21bf5:;
  /* 10e21bf5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e21bf7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e21bf9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e21bfb push 2 */
  push32((uint32_t)(0x2u));
  /* 10e21bfd push 0 */
  push32((uint32_t)(0x0u));
  /* 10e21bff push 0 */
  push32((uint32_t)(0x0u));
  /* 10e21c01 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e21c03 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e21c05 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e21c08 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10e21c0b push edx */
  push32((uint32_t)(EDX));
  /* 10e21c0c push 1 */
  push32((uint32_t)(0x1u));
  /* 10e21c0e push 1 */
  push32((uint32_t)(0x1u));
  /* 10e21c10 call 0x10e21d40 */
  push32(0x10e21c15u); f_10e21d40();
  /* 10e21c15 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e21c18 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e21c1a push 0 */
  push32((uint32_t)(0x0u));
  /* 10e21c1c push 0 */
  push32((uint32_t)(0x0u));
  /* 10e21c1e push 2 */
  push32((uint32_t)(0x2u));
  /* 10e21c20 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e21c22 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e21c24 push 5 */
  push32((uint32_t)(0x5u));
  /* 10e21c26 push 0xa */
  push32((uint32_t)(0xau));
  /* 10e21c28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e21c2b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10e21c2e push ecx */
  push32((uint32_t)(ECX));
  /* 10e21c2f push 1 */
  push32((uint32_t)(0x1u));
  /* 10e21c31 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e21c33 call 0x10e21d40 */
  push32(0x10e21c38u); f_10e21d40();
  /* 10e21c38 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e21c3b:;
  /* 10e21c3b mov edx, dword ptr [0x10e3de2c] */
  EDX = (r32((uint32_t)(0x10e3de2c)));
  /* 10e21c41 cmp edx, dword ptr [0x10e3de3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10e3de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e21c47 jge 0x10e21c94 */
  if ((C.sf==C.of)) goto L_10e21c94;
  /* 10e21c49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e21c4c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10e21c4f cmp ecx, dword ptr [0x10e3de2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10e3de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e21c55 jl 0x10e21c65 */
  if ((C.sf!=C.of)) goto L_10e21c65;
  /* 10e21c57 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e21c5a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10e21c5d cmp eax, dword ptr [0x10e3de3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e3de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e21c63 jle 0x10e21c6c */
  if ((C.zf||C.sf!=C.of)) goto L_10e21c6c;
L_10e21c65:;
  /* 10e21c65 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e21c67 jmp 0x10e21d36 */
  goto L_10e21d36;
L_10e21c6c:;
  /* 10e21c6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e21c6f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10e21c72 cmp edx, dword ptr [0x10e3de2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10e3de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e21c78 jle 0x10e21c92 */
  if ((C.zf||C.sf!=C.of)) goto L_10e21c92;
  /* 10e21c7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e21c7d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10e21c80 cmp ecx, dword ptr [0x10e3de3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10e3de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e21c86 jge 0x10e21c92 */
  if ((C.sf==C.of)) goto L_10e21c92;
  /* 10e21c88 mov eax, 1 */
  EAX = (0x1u);
  /* 10e21c8d jmp 0x10e21d36 */
  goto L_10e21d36;
L_10e21c92:;
  /* 10e21c92 jmp 0x10e21cd7 */
  goto L_10e21cd7;
L_10e21c94:;
  /* 10e21c94 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e21c97 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10e21c9a cmp eax, dword ptr [0x10e3de3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e3de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e21ca0 jl 0x10e21cb0 */
  if ((C.sf!=C.of)) goto L_10e21cb0;
  /* 10e21ca2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e21ca5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10e21ca8 cmp edx, dword ptr [0x10e3de2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10e3de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e21cae jle 0x10e21cb7 */
  if ((C.zf||C.sf!=C.of)) goto L_10e21cb7;
L_10e21cb0:;
  /* 10e21cb0 mov eax, 1 */
  EAX = (0x1u);
  /* 10e21cb5 jmp 0x10e21d36 */
  goto L_10e21d36;
L_10e21cb7:;
  /* 10e21cb7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e21cba mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10e21cbd cmp ecx, dword ptr [0x10e3de3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10e3de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e21cc3 jle 0x10e21cd7 */
  if ((C.zf||C.sf!=C.of)) goto L_10e21cd7;
  /* 10e21cc5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e21cc8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10e21ccb cmp eax, dword ptr [0x10e3de2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e3de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e21cd1 jge 0x10e21cd7 */
  if ((C.sf==C.of)) goto L_10e21cd7;
  /* 10e21cd3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e21cd5 jmp 0x10e21d36 */
  goto L_10e21d36;
L_10e21cd7:;
  /* 10e21cd7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e21cda mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e21cdd imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e21ce0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e21ce3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e21ce5 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e21ce7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e21cea mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10e21ced imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e21cf3 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e21cf5 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e21cfb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e21cfe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e21d01 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10e21d04 cmp edx, dword ptr [0x10e3de2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10e3de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e21d0a jne 0x10e21d22 */
  if (!C.zf) goto L_10e21d22;
  /* 10e21d0c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e21d0f cmp eax, dword ptr [0x10e3de30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e3de30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e21d15 jl 0x10e21d1e */
  if ((C.sf!=C.of)) goto L_10e21d1e;
  /* 10e21d17 mov eax, 1 */
  EAX = (0x1u);
  /* 10e21d1c jmp 0x10e21d36 */
  goto L_10e21d36;
L_10e21d1e:;
  /* 10e21d1e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e21d20 jmp 0x10e21d36 */
  goto L_10e21d36;
L_10e21d22:;
  /* 10e21d22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e21d25 cmp ecx, dword ptr [0x10e3de40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10e3de40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e21d2b jge 0x10e21d34 */
  if ((C.sf==C.of)) goto L_10e21d34;
  /* 10e21d2d mov eax, 1 */
  EAX = (0x1u);
  /* 10e21d32 jmp 0x10e21d36 */
  goto L_10e21d36;
L_10e21d34:;
  /* 10e21d34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e21d36:;
  /* 10e21d36 mov esp, ebp */
  ESP = (EBP);
  /* 10e21d38 pop ebp */
  EBP = (pop32());
  /* 10e21d39 ret  */
  ESPCHK(0x10e21a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10011d40 @ 0x10e21d40 (504 bytes, 145 insns) */
void f_10e21d40(void) {
  FTRACE(0x10e21d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e21d40 push ebp */
  push32((uint32_t)(EBP));
  /* 10e21d41 mov ebp, esp */
  EBP = (ESP);
  /* 10e21d43 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e21d46 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e21d4a jne 0x10e21e1c */
  if (!C.zf) goto L_10e21e1c;
  /* 10e21d50 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e21d53 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10e21d56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e21d58 jne 0x10e21d69 */
  if (!C.zf) goto L_10e21d69;
  /* 10e21d5a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e21d5d mov edx, dword ptr [ecx*4 + 0x10e3de4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10e3de4c)));
  /* 10e21d64 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10e21d67 jmp 0x10e21d76 */
  goto L_10e21d76;
L_10e21d69:;
  /* 10e21d69 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e21d6c mov ecx, dword ptr [eax*4 + 0x10e3de80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10e3de80)));
  /* 10e21d73 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10e21d76:;
  /* 10e21d76 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e21d79 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e21d7c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10e21d7f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e21d82 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e21d85 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e21d8b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e21d8e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e21d90 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e21d93 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e21d96 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10e21d99 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 10e21d9d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10e21d9e mov ecx, 7 */
  ECX = (0x7u);
  /* 10e21da3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10e21da5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e21da8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e21dab cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e21dae jg 0x10e21dc9 */
  if ((!C.zf&&C.sf==C.of)) goto L_10e21dc9;
  /* 10e21db0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10e21db3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e21db6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e21db9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e21dbc imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e21dbf add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e21dc2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e21dc4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e21dc7 jmp 0x10e21ddd */
  goto L_10e21ddd;
L_10e21dc9:;
  /* 10e21dc9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10e21dcc sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e21dcf mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e21dd2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e21dd5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e21dd8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e21dda mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10e21ddd:;
  /* 10e21ddd cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e21de1 jne 0x10e21e1a */
  if (!C.zf) goto L_10e21e1a;
  /* 10e21de3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e21de6 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10e21de9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e21deb jne 0x10e21dfc */
  if (!C.zf) goto L_10e21dfc;
  /* 10e21ded mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e21df0 mov eax, dword ptr [edx*4 + 0x10e3de50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10e3de50)));
  /* 10e21df7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10e21dfa jmp 0x10e21e09 */
  goto L_10e21e09;
L_10e21dfc:;
  /* 10e21dfc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e21dff mov edx, dword ptr [ecx*4 + 0x10e3de84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10e3de84)));
  /* 10e21e06 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10e21e09:;
  /* 10e21e09 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e21e0c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e21e0f jle 0x10e21e1a */
  if ((C.zf||C.sf!=C.of)) goto L_10e21e1a;
  /* 10e21e11 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e21e14 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e21e17 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10e21e1a:;
  /* 10e21e1a jmp 0x10e21e51 */
  goto L_10e21e51;
L_10e21e1c:;
  /* 10e21e1c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e21e1f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10e21e22 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e21e24 jne 0x10e21e35 */
  if (!C.zf) goto L_10e21e35;
  /* 10e21e26 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e21e29 mov ecx, dword ptr [eax*4 + 0x10e3de4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10e3de4c)));
  /* 10e21e30 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10e21e33 jmp 0x10e21e42 */
  goto L_10e21e42;
L_10e21e35:;
  /* 10e21e35 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e21e38 mov eax, dword ptr [edx*4 + 0x10e3de80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10e3de80)));
  /* 10e21e3f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10e21e42:;
  /* 10e21e42 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e21e45 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e21e48 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e21e4b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e21e4e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10e21e51:;
  /* 10e21e51 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e21e55 jne 0x10e21e91 */
  if (!C.zf) goto L_10e21e91;
  /* 10e21e57 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e21e5a mov dword ptr [0x10e3de2c], eax */
  w32((uint32_t)(0x10e3de2c), (EAX));
  /* 10e21e5f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10e21e62 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e21e65 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10e21e68 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e21e6a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e21e6d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10e21e70 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e21e72 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e21e78 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10e21e7b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e21e7d mov dword ptr [0x10e3de30], ecx */
  w32((uint32_t)(0x10e3de30), (ECX));
  /* 10e21e83 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e21e86 mov dword ptr [0x10e3de28], edx */
  w32((uint32_t)(0x10e3de28), (EDX));
  /* 10e21e8c jmp 0x10e21f34 */
  goto L_10e21f34;
L_10e21e91:;
  /* 10e21e91 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e21e94 mov dword ptr [0x10e3de3c], eax */
  w32((uint32_t)(0x10e3de3c), (EAX));
  /* 10e21e99 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10e21e9c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e21e9f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10e21ea2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e21ea4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e21ea7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10e21eaa add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e21eac imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e21eb2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10e21eb5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e21eb7 mov dword ptr [0x10e3de40], ecx */
  w32((uint32_t)(0x10e3de40), (ECX));
  /* 10e21ebd mov edx, dword ptr [0x10e3dd98] */
  EDX = (r32((uint32_t)(0x10e3dd98)));
  /* 10e21ec3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e21ec9 mov eax, dword ptr [0x10e3de40] */
  EAX = (r32((uint32_t)(0x10e3de40)));
  /* 10e21ece add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e21ed0 mov dword ptr [0x10e3de40], eax */
  w32((uint32_t)(0x10e3de40), (EAX));
  /* 10e21ed5 cmp dword ptr [0x10e3de40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3de40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e21edc jge 0x10e21f01 */
  if ((C.sf==C.of)) goto L_10e21f01;
  /* 10e21ede mov ecx, dword ptr [0x10e3de40] */
  ECX = (r32((uint32_t)(0x10e3de40)));
  /* 10e21ee4 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e21eea mov dword ptr [0x10e3de40], ecx */
  w32((uint32_t)(0x10e3de40), (ECX));
  /* 10e21ef0 mov edx, dword ptr [0x10e3de3c] */
  EDX = (r32((uint32_t)(0x10e3de3c)));
  /* 10e21ef6 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e21ef9 mov dword ptr [0x10e3de3c], edx */
  w32((uint32_t)(0x10e3de3c), (EDX));
  /* 10e21eff jmp 0x10e21f2b */
  goto L_10e21f2b;
L_10e21f01:;
  /* 10e21f01 cmp dword ptr [0x10e3de40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x10e3de40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e21f0b jl 0x10e21f2b */
  if ((C.sf!=C.of)) goto L_10e21f2b;
  /* 10e21f0d mov eax, dword ptr [0x10e3de40] */
  EAX = (r32((uint32_t)(0x10e3de40)));
  /* 10e21f12 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e21f17 mov dword ptr [0x10e3de40], eax */
  w32((uint32_t)(0x10e3de40), (EAX));
  /* 10e21f1c mov ecx, dword ptr [0x10e3de3c] */
  ECX = (r32((uint32_t)(0x10e3de3c)));
  /* 10e21f22 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e21f25 mov dword ptr [0x10e3de3c], ecx */
  w32((uint32_t)(0x10e3de3c), (ECX));
L_10e21f2b:;
  /* 10e21f2b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e21f2e mov dword ptr [0x10e3de38], edx */
  w32((uint32_t)(0x10e3de38), (EDX));
L_10e21f34:;
  /* 10e21f34 mov esp, ebp */
  ESP = (EBP);
  /* 10e21f36 pop ebp */
  EBP = (pop32());
  /* 10e21f37 ret  */
  ESPCHK(0x10e21d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f40 @ 0x10e21f40 (382 bytes, 135 insns) */
void f_10e21f40(void) {
  FTRACE(0x10e21f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e21f40 push ebp */
  push32((uint32_t)(EBP));
  /* 10e21f41 mov ebp, esp */
  EBP = (ESP);
  /* 10e21f43 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10e21f45 push 0x10e3a870 */
  push32((uint32_t)(0x10e3a870u));
  /* 10e21f4a push 0x10e1bc08 */
  push32((uint32_t)(0x10e1bc08u));
  /* 10e21f4f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10e21f55 push eax */
  push32((uint32_t)(EAX));
  /* 10e21f56 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10e21f5d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e21f60 push ebx */
  push32((uint32_t)(EBX));
  /* 10e21f61 push esi */
  push32((uint32_t)(ESI));
  /* 10e21f62 push edi */
  push32((uint32_t)(EDI));
  /* 10e21f63 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10e21f66 cmp dword ptr [0x10e3e764], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e764))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e21f6d jne 0x10e21fb2 */
  if (!C.zf) goto L_10e21fb2;
  /* 10e21f6f push 0 */
  push32((uint32_t)(0x0u));
  /* 10e21f71 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e21f73 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e21f75 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e21f77 call dword ptr [0x10e40230] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40230))), 0x10e21f7du);
  /* 10e21f7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e21f7f je 0x10e21f8d */
  if (C.zf) goto L_10e21f8d;
  /* 10e21f81 mov dword ptr [0x10e3e764], 1 */
  w32((uint32_t)(0x10e3e764), (0x1u));
  /* 10e21f8b jmp 0x10e21fb2 */
  goto L_10e21fb2;
L_10e21f8d:;
  /* 10e21f8d push 0 */
  push32((uint32_t)(0x0u));
  /* 10e21f8f push 0 */
  push32((uint32_t)(0x0u));
  /* 10e21f91 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e21f93 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e21f95 call dword ptr [0x10e40248] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40248))), 0x10e21f9bu);
  /* 10e21f9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e21f9d je 0x10e21fab */
  if (C.zf) goto L_10e21fab;
  /* 10e21f9f mov dword ptr [0x10e3e764], 2 */
  w32((uint32_t)(0x10e3e764), (0x2u));
  /* 10e21fa9 jmp 0x10e21fb2 */
  goto L_10e21fb2;
L_10e21fab:;
  /* 10e21fab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e21fad jmp 0x10e220c1 */
  goto L_10e220c1;
L_10e21fb2:;
  /* 10e21fb2 cmp dword ptr [0x10e3e764], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e764))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e21fb9 jne 0x10e21fd6 */
  if (!C.zf) goto L_10e21fd6;
  /* 10e21fbb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e21fbe push eax */
  push32((uint32_t)(EAX));
  /* 10e21fbf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e21fc2 push ecx */
  push32((uint32_t)(ECX));
  /* 10e21fc3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e21fc6 push edx */
  push32((uint32_t)(EDX));
  /* 10e21fc7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e21fca push eax */
  push32((uint32_t)(EAX));
  /* 10e21fcb call dword ptr [0x10e40230] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40230))), 0x10e21fd1u);
  /* 10e21fd1 jmp 0x10e220c1 */
  goto L_10e220c1;
L_10e21fd6:;
  /* 10e21fd6 cmp dword ptr [0x10e3e764], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e764))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e21fdd jne 0x10e220bf */
  if (!C.zf) goto L_10e220bf;
  /* 10e21fe3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e21fe7 jne 0x10e21ff2 */
  if (!C.zf) goto L_10e21ff2;
  /* 10e21fe9 mov ecx, dword ptr [0x10e3e618] */
  ECX = (r32((uint32_t)(0x10e3e618)));
  /* 10e21fef mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10e21ff2:;
  /* 10e21ff2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e21ff4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e21ff6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e21ff9 push edx */
  push32((uint32_t)(EDX));
  /* 10e21ffa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e21ffd push eax */
  push32((uint32_t)(EAX));
  /* 10e21ffe call dword ptr [0x10e40248] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40248))), 0x10e22004u);
  /* 10e22004 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10e22007 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e2200b jne 0x10e22014 */
  if (!C.zf) goto L_10e22014;
  /* 10e2200d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e2200f jmp 0x10e220c1 */
  goto L_10e220c1;
L_10e22014:;
  /* 10e22014 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e2201b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e2201e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e22021 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10e22023 call 0x10e15ca0 */
  push32(0x10e22028u); f_10e15ca0();
  /* 10e22028 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 10e2202b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10e2202e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e22031 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10e22034 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10e2203b jmp 0x10e22054 */
  goto L_10e22054;
  /* 10e2203d mov eax, 1 */
  EAX = (0x1u);
  /* 10e22042 ret  */
  ESPCHK(0x10e21f40u, _esp0);
  ESP += 4; return;
  /* 10e22043 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10e22046 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10e2204d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10e22054:;
  /* 10e22054 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e22058 jne 0x10e2205e */
  if (!C.zf) goto L_10e2205e;
  /* 10e2205a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e2205c jmp 0x10e220c1 */
  goto L_10e220c1;
L_10e2205e:;
  /* 10e2205e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e22061 push edx */
  push32((uint32_t)(EDX));
  /* 10e22062 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e22065 push eax */
  push32((uint32_t)(EAX));
  /* 10e22066 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e22069 push ecx */
  push32((uint32_t)(ECX));
  /* 10e2206a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e2206d push edx */
  push32((uint32_t)(EDX));
  /* 10e2206e call dword ptr [0x10e40248] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40248))), 0x10e22074u);
  /* 10e22074 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e22076 jne 0x10e2207c */
  if (!C.zf) goto L_10e2207c;
  /* 10e22078 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e2207a jmp 0x10e220c1 */
  goto L_10e220c1;
L_10e2207c:;
  /* 10e2207c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e22080 jne 0x10e2209d */
  if (!C.zf) goto L_10e2209d;
  /* 10e22082 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e22084 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e22086 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10e22088 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e2208b push eax */
  push32((uint32_t)(EAX));
  /* 10e2208c push 1 */
  push32((uint32_t)(0x1u));
  /* 10e2208e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e22091 push ecx */
  push32((uint32_t)(ECX));
  /* 10e22092 call dword ptr [0x10e40314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40314))), 0x10e22098u);
  /* 10e22098 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10e2209b jmp 0x10e220ba */
  goto L_10e220ba;
L_10e2209d:;
  /* 10e2209d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e220a0 push edx */
  push32((uint32_t)(EDX));
  /* 10e220a1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e220a4 push eax */
  push32((uint32_t)(EAX));
  /* 10e220a5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10e220a7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e220aa push ecx */
  push32((uint32_t)(ECX));
  /* 10e220ab push 1 */
  push32((uint32_t)(0x1u));
  /* 10e220ad mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e220b0 push edx */
  push32((uint32_t)(EDX));
  /* 10e220b1 call dword ptr [0x10e40314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40314))), 0x10e220b7u);
  /* 10e220b7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10e220ba:;
  /* 10e220ba mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e220bd jmp 0x10e220c1 */
  goto L_10e220c1;
L_10e220bf:;
  /* 10e220bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e220c1:;
  /* 10e220c1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10e220c4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e220c7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10e220ce pop edi */
  EDI = (pop32());
  /* 10e220cf pop esi */
  ESI = (pop32());
  /* 10e220d0 pop ebx */
  EBX = (pop32());
  /* 10e220d1 mov esp, ebp */
  ESP = (EBP);
  /* 10e220d3 pop ebp */
  EBP = (pop32());
  /* 10e220d4 ret  */
  ESPCHK(0x10e21f40u, _esp0);
  ESP += 4; return;
}

/* FUN_100120e0 @ 0x10e220e0 (398 bytes, 140 insns) */
void f_10e220e0(void) {
  FTRACE(0x10e220e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e220e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e220e1 mov ebp, esp */
  EBP = (ESP);
  /* 10e220e3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10e220e5 push 0x10e3a880 */
  push32((uint32_t)(0x10e3a880u));
  /* 10e220ea push 0x10e1bc08 */
  push32((uint32_t)(0x10e1bc08u));
  /* 10e220ef mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10e220f5 push eax */
  push32((uint32_t)(EAX));
  /* 10e220f6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10e220fd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e22100 push ebx */
  push32((uint32_t)(EBX));
  /* 10e22101 push esi */
  push32((uint32_t)(ESI));
  /* 10e22102 push edi */
  push32((uint32_t)(EDI));
  /* 10e22103 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10e22106 cmp dword ptr [0x10e3e768], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e768))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e2210d jne 0x10e22152 */
  if (!C.zf) goto L_10e22152;
  /* 10e2210f push 0 */
  push32((uint32_t)(0x0u));
  /* 10e22111 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e22113 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e22115 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e22117 call dword ptr [0x10e40230] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40230))), 0x10e2211du);
  /* 10e2211d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e2211f je 0x10e2212d */
  if (C.zf) goto L_10e2212d;
  /* 10e22121 mov dword ptr [0x10e3e768], 1 */
  w32((uint32_t)(0x10e3e768), (0x1u));
  /* 10e2212b jmp 0x10e22152 */
  goto L_10e22152;
L_10e2212d:;
  /* 10e2212d push 0 */
  push32((uint32_t)(0x0u));
  /* 10e2212f push 0 */
  push32((uint32_t)(0x0u));
  /* 10e22131 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e22133 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e22135 call dword ptr [0x10e40248] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40248))), 0x10e2213bu);
  /* 10e2213b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e2213d je 0x10e2214b */
  if (C.zf) goto L_10e2214b;
  /* 10e2213f mov dword ptr [0x10e3e768], 2 */
  w32((uint32_t)(0x10e3e768), (0x2u));
  /* 10e22149 jmp 0x10e22152 */
  goto L_10e22152;
L_10e2214b:;
  /* 10e2214b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e2214d jmp 0x10e22271 */
  goto L_10e22271;
L_10e22152:;
  /* 10e22152 cmp dword ptr [0x10e3e768], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e768))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e22159 jne 0x10e22176 */
  if (!C.zf) goto L_10e22176;
  /* 10e2215b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e2215e push eax */
  push32((uint32_t)(EAX));
  /* 10e2215f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e22162 push ecx */
  push32((uint32_t)(ECX));
  /* 10e22163 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e22166 push edx */
  push32((uint32_t)(EDX));
  /* 10e22167 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e2216a push eax */
  push32((uint32_t)(EAX));
  /* 10e2216b call dword ptr [0x10e40248] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40248))), 0x10e22171u);
  /* 10e22171 jmp 0x10e22271 */
  goto L_10e22271;
L_10e22176:;
  /* 10e22176 cmp dword ptr [0x10e3e768], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e768))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e2217d jne 0x10e2226f */
  if (!C.zf) goto L_10e2226f;
  /* 10e22183 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e22187 jne 0x10e22192 */
  if (!C.zf) goto L_10e22192;
  /* 10e22189 mov ecx, dword ptr [0x10e3e618] */
  ECX = (r32((uint32_t)(0x10e3e618)));
  /* 10e2218f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10e22192:;
  /* 10e22192 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e22194 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e22196 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e22199 push edx */
  push32((uint32_t)(EDX));
  /* 10e2219a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e2219d push eax */
  push32((uint32_t)(EAX));
  /* 10e2219e call dword ptr [0x10e40230] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40230))), 0x10e221a4u);
  /* 10e221a4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10e221a7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e221ab jne 0x10e221b4 */
  if (!C.zf) goto L_10e221b4;
  /* 10e221ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e221af jmp 0x10e22271 */
  goto L_10e22271;
L_10e221b4:;
  /* 10e221b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e221bb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e221be shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10e221c0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e221c3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10e221c5 call 0x10e15ca0 */
  push32(0x10e221cau); f_10e15ca0();
  /* 10e221ca mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 10e221cd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10e221d0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e221d3 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10e221d6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10e221dd jmp 0x10e221f6 */
  goto L_10e221f6;
  /* 10e221df mov eax, 1 */
  EAX = (0x1u);
  /* 10e221e4 ret  */
  ESPCHK(0x10e220e0u, _esp0);
  ESP += 4; return;
  /* 10e221e5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10e221e8 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10e221ef mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10e221f6:;
  /* 10e221f6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e221fa jne 0x10e22200 */
  if (!C.zf) goto L_10e22200;
  /* 10e221fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e221fe jmp 0x10e22271 */
  goto L_10e22271;
L_10e22200:;
  /* 10e22200 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e22203 push edx */
  push32((uint32_t)(EDX));
  /* 10e22204 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e22207 push eax */
  push32((uint32_t)(EAX));
  /* 10e22208 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e2220b push ecx */
  push32((uint32_t)(ECX));
  /* 10e2220c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e2220f push edx */
  push32((uint32_t)(EDX));
  /* 10e22210 call dword ptr [0x10e40230] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40230))), 0x10e22216u);
  /* 10e22216 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e22218 jne 0x10e2221e */
  if (!C.zf) goto L_10e2221e;
  /* 10e2221a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e2221c jmp 0x10e22271 */
  goto L_10e22271;
L_10e2221e:;
  /* 10e2221e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e22222 jne 0x10e22246 */
  if (!C.zf) goto L_10e22246;
  /* 10e22224 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e22226 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e22228 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e2222a push 0 */
  push32((uint32_t)(0x0u));
  /* 10e2222c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10e2222e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e22231 push eax */
  push32((uint32_t)(EAX));
  /* 10e22232 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10e22237 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e2223a push ecx */
  push32((uint32_t)(ECX));
  /* 10e2223b call dword ptr [0x10e40224] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40224))), 0x10e22241u);
  /* 10e22241 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10e22244 jmp 0x10e2226a */
  goto L_10e2226a;
L_10e22246:;
  /* 10e22246 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e22248 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e2224a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e2224d push edx */
  push32((uint32_t)(EDX));
  /* 10e2224e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e22251 push eax */
  push32((uint32_t)(EAX));
  /* 10e22252 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10e22254 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e22257 push ecx */
  push32((uint32_t)(ECX));
  /* 10e22258 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10e2225d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e22260 push edx */
  push32((uint32_t)(EDX));
  /* 10e22261 call dword ptr [0x10e40224] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40224))), 0x10e22267u);
  /* 10e22267 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10e2226a:;
  /* 10e2226a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e2226d jmp 0x10e22271 */
  goto L_10e22271;
L_10e2226f:;
  /* 10e2226f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e22271:;
  /* 10e22271 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10e22274 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e22277 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10e2227e pop edi */
  EDI = (pop32());
  /* 10e2227f pop esi */
  ESI = (pop32());
  /* 10e22280 pop ebx */
  EBX = (pop32());
  /* 10e22281 mov esp, ebp */
  ESP = (EBP);
  /* 10e22283 pop ebp */
  EBP = (pop32());
  /* 10e22284 ret  */
  ESPCHK(0x10e220e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012290 @ 0x10e22290 (11 bytes, 6 insns) */
void f_10e22290(void) {
  FTRACE(0x10e22290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e22290 push ebp */
  push32((uint32_t)(EBP));
  /* 10e22291 mov ebp, esp */
  EBP = (ESP);
  /* 10e22293 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e22296 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e22299 pop ebp */
  EBP = (pop32());
  /* 10e2229a ret  */
  ESPCHK(0x10e22290u, _esp0);
  ESP += 4; return;
}

/* FUN_100122a0 @ 0x10e222a0 (147 bytes, 43 insns) */
void f_10e222a0(void) {
  FTRACE(0x10e222a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e222a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e222a1 mov ebp, esp */
  EBP = (ESP);
  /* 10e222a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e222a4 cmp dword ptr [0x10e3e608], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e608))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e222ab jne 0x10e222c7 */
  if (!C.zf) goto L_10e222c7;
  /* 10e222ad cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e222b1 jl 0x10e222c2 */
  if ((C.sf!=C.of)) goto L_10e222c2;
  /* 10e222b3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e222b7 jg 0x10e222c2 */
  if ((!C.zf&&C.sf==C.of)) goto L_10e222c2;
  /* 10e222b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e222bc add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e222bf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10e222c2:;
  /* 10e222c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e222c5 jmp 0x10e2232f */
  goto L_10e2232f;
L_10e222c7:;
  /* 10e222c7 push 0x10e3e794 */
  push32((uint32_t)(0x10e3e794u));
  /* 10e222cc call dword ptr [0x10e40270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40270))), 0x10e222d2u);
  /* 10e222d2 cmp dword ptr [0x10e3e784], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e784))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e222d9 je 0x10e222f9 */
  if (C.zf) goto L_10e222f9;
  /* 10e222db push 0x10e3e794 */
  push32((uint32_t)(0x10e3e794u));
  /* 10e222e0 call dword ptr [0x10e40260] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40260))), 0x10e222e6u);
  /* 10e222e6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10e222e8 call 0x10e16500 */
  push32(0x10e222edu); f_10e16500();
  /* 10e222ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e222f0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10e222f7 jmp 0x10e22300 */
  goto L_10e22300;
L_10e222f9:;
  /* 10e222f9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10e22300:;
  /* 10e22300 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e22303 push ecx */
  push32((uint32_t)(ECX));
  /* 10e22304 call 0x10e22340 */
  push32(0x10e22309u); f_10e22340();
  /* 10e22309 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e2230c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10e2230f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e22313 je 0x10e22321 */
  if (C.zf) goto L_10e22321;
  /* 10e22315 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10e22317 call 0x10e165a0 */
  push32(0x10e2231cu); f_10e165a0();
  /* 10e2231c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e2231f jmp 0x10e2232c */
  goto L_10e2232c;
L_10e22321:;
  /* 10e22321 push 0x10e3e794 */
  push32((uint32_t)(0x10e3e794u));
  /* 10e22326 call dword ptr [0x10e40260] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40260))), 0x10e2232cu);
L_10e2232c:;
  /* 10e2232c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10e2232f:;
  /* 10e2232f mov esp, ebp */
  ESP = (EBP);
  /* 10e22331 pop ebp */
  EBP = (pop32());
  /* 10e22332 ret  */
  ESPCHK(0x10e222a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012340 @ 0x10e22340 (299 bytes, 91 insns) */
void f_10e22340(void) {
  FTRACE(0x10e22340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e22340 push ebp */
  push32((uint32_t)(EBP));
  /* 10e22341 mov ebp, esp */
  EBP = (ESP);
  /* 10e22343 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e22346 cmp dword ptr [0x10e3e608], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e608))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e2234d jne 0x10e2236c */
  if (!C.zf) goto L_10e2236c;
  /* 10e2234f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e22353 jl 0x10e22364 */
  if ((C.sf!=C.of)) goto L_10e22364;
  /* 10e22355 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e22359 jg 0x10e22364 */
  if ((!C.zf&&C.sf==C.of)) goto L_10e22364;
  /* 10e2235b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e2235e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e22361 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10e22364:;
  /* 10e22364 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e22367 jmp 0x10e22467 */
  goto L_10e22467;
L_10e2236c:;
  /* 10e2236c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e22373 jge 0x10e223b3 */
  if ((C.sf==C.of)) goto L_10e223b3;
  /* 10e22375 cmp dword ptr [0x10e3cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10e3cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e2237c jle 0x10e22391 */
  if ((C.zf||C.sf!=C.of)) goto L_10e22391;
  /* 10e2237e push 1 */
  push32((uint32_t)(0x1u));
  /* 10e22380 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e22383 push ecx */
  push32((uint32_t)(ECX));
  /* 10e22384 call 0x10e18b10 */
  push32(0x10e22389u); f_10e18b10();
  /* 10e22389 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e2238c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10e2238f jmp 0x10e223a5 */
  goto L_10e223a5;
L_10e22391:;
  /* 10e22391 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e22394 mov eax, dword ptr [0x10e3cc98] */
  EAX = (r32((uint32_t)(0x10e3cc98)));
  /* 10e22399 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e2239b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10e2239f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10e223a2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10e223a5:;
  /* 10e223a5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e223a9 jne 0x10e223b3 */
  if (!C.zf) goto L_10e223b3;
  /* 10e223ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e223ae jmp 0x10e22467 */
  goto L_10e22467;
L_10e223b3:;
  /* 10e223b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e223b6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10e223b9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e223bf and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e223c5 mov eax, dword ptr [0x10e3cc98] */
  EAX = (r32((uint32_t)(0x10e3cc98)));
  /* 10e223ca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e223cc mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10e223d0 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10e223d6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e223d8 je 0x10e223fc */
  if (C.zf) goto L_10e223fc;
  /* 10e223da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e223dd sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10e223e0 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e223e6 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 10e223e9 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10e223ec mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 10e223ef mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 10e223f3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10e223fa jmp 0x10e2240d */
  goto L_10e2240d;
L_10e223fc:;
  /* 10e223fc mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10e223ff mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10e22402 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 10e22406 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_10e2240d:;
  /* 10e2240d push 1 */
  push32((uint32_t)(0x1u));
  /* 10e2240f push 0 */
  push32((uint32_t)(0x0u));
  /* 10e22411 push 3 */
  push32((uint32_t)(0x3u));
  /* 10e22413 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10e22416 push edx */
  push32((uint32_t)(EDX));
  /* 10e22417 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e2241a push eax */
  push32((uint32_t)(EAX));
  /* 10e2241b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10e2241e push ecx */
  push32((uint32_t)(ECX));
  /* 10e2241f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10e22424 mov edx, dword ptr [0x10e3e608] */
  EDX = (r32((uint32_t)(0x10e3e608)));
  /* 10e2242a push edx */
  push32((uint32_t)(EDX));
  /* 10e2242b call 0x10e1aef0 */
  push32(0x10e22430u); f_10e1aef0();
  /* 10e22430 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e22433 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e22436 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e2243a jne 0x10e22441 */
  if (!C.zf) goto L_10e22441;
  /* 10e2243c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e2243f jmp 0x10e22467 */
  goto L_10e22467;
L_10e22441:;
  /* 10e22441 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e22445 jne 0x10e22451 */
  if (!C.zf) goto L_10e22451;
  /* 10e22447 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e2244a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e2244f jmp 0x10e22467 */
  goto L_10e22467;
L_10e22451:;
  /* 10e22451 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e22454 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e22459 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 10e2245c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e22462 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10e22465 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_10e22467:;
  /* 10e22467 mov esp, ebp */
  ESP = (EBP);
  /* 10e22469 pop ebp */
  EBP = (pop32());
  /* 10e2246a ret  */
  ESPCHK(0x10e22340u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x10e22470 (52 bytes, 19 insns) */
void f_10e22470(void) {
  FTRACE(0x10e22470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e22470 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10e22474 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10e22478 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e2247a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10e2247e jne 0x10e22489 */
  if (!C.zf) goto L_10e22489;
  /* 10e22480 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10e22484 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10e22486 ret 0x10 */
  ESPCHK(0x10e22470u, _esp0);
  ESP += 20; return;
L_10e22489:;
  /* 10e22489 push ebx */
  push32((uint32_t)(EBX));
  /* 10e2248a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10e2248c mov ebx, eax */
  EBX = (EAX);
  /* 10e2248e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10e22492 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10e22496 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e22498 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10e2249c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10e2249e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e224a0 pop ebx */
  EBX = (pop32());
  /* 10e224a1 ret 0x10 */
  ESPCHK(0x10e22470u, _esp0);
  ESP += 20; return;
}

/* FUN_100124b0 @ 0x10e224b0 (46 bytes, 18 insns) */
void f_10e224b0(void) {
  FTRACE(0x10e224b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e224b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e224b1 mov ebp, esp */
  EBP = (ESP);
  /* 10e224b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e224b4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10e224b6 call 0x10e16500 */
  push32(0x10e224bbu); f_10e16500();
  /* 10e224bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e224be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e224c1 push eax */
  push32((uint32_t)(EAX));
  /* 10e224c2 call 0x10e224e0 */
  push32(0x10e224c7u); f_10e224e0();
  /* 10e224c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e224ca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e224cd push 0xc */
  push32((uint32_t)(0xcu));
  /* 10e224cf call 0x10e165a0 */
  push32(0x10e224d4u); f_10e165a0();
  /* 10e224d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e224d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e224da mov esp, ebp */
  ESP = (EBP);
  /* 10e224dc pop ebp */
  EBP = (pop32());
  /* 10e224dd ret  */
  ESPCHK(0x10e224b0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x10e224e0 (198 bytes, 69 insns) */
void f_10e224e0(void) {
  FTRACE(0x10e224e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e224e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e224e1 mov ebp, esp */
  EBP = (ESP);
  /* 10e224e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e224e6 mov eax, dword ptr [0x10e3e428] */
  EAX = (r32((uint32_t)(0x10e3e428)));
  /* 10e224eb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e224ee cmp dword ptr [0x10e3ff20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3ff20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e224f5 jne 0x10e224fe */
  if (!C.zf) goto L_10e224fe;
  /* 10e224f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e224f9 jmp 0x10e225a2 */
  goto L_10e225a2;
L_10e224fe:;
  /* 10e224fe cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e22502 jne 0x10e22526 */
  if (!C.zf) goto L_10e22526;
  /* 10e22504 cmp dword ptr [0x10e3e430], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e430))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e2250b je 0x10e22526 */
  if (C.zf) goto L_10e22526;
  /* 10e2250d call 0x10e22600 */
  push32(0x10e22512u); f_10e22600();
  /* 10e22512 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e22514 je 0x10e2251d */
  if (C.zf) goto L_10e2251d;
  /* 10e22516 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e22518 jmp 0x10e225a2 */
  goto L_10e225a2;
L_10e2251d:;
  /* 10e2251d mov ecx, dword ptr [0x10e3e428] */
  ECX = (r32((uint32_t)(0x10e3e428)));
  /* 10e22523 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10e22526:;
  /* 10e22526 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e2252a je 0x10e225a0 */
  if (C.zf) goto L_10e225a0;
  /* 10e2252c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e22530 je 0x10e225a0 */
  if (C.zf) goto L_10e225a0;
  /* 10e22532 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e22535 push edx */
  push32((uint32_t)(EDX));
  /* 10e22536 call 0x10e15930 */
  push32(0x10e2253bu); f_10e15930();
  /* 10e2253b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e2253e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e22541:;
  /* 10e22541 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e22544 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e22547 je 0x10e225a0 */
  if (C.zf) goto L_10e225a0;
  /* 10e22549 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e2254c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e2254e push edx */
  push32((uint32_t)(EDX));
  /* 10e2254f call 0x10e15930 */
  push32(0x10e22554u); f_10e15930();
  /* 10e22554 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e22557 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e2255a jbe 0x10e22595 */
  if ((C.cf||C.zf)) goto L_10e22595;
  /* 10e2255c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e2255f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e22561 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e22564 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 10e22568 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e2256b jne 0x10e22595 */
  if (!C.zf) goto L_10e22595;
  /* 10e2256d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e22570 push ecx */
  push32((uint32_t)(ECX));
  /* 10e22571 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e22574 push edx */
  push32((uint32_t)(EDX));
  /* 10e22575 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e22578 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e2257a push ecx */
  push32((uint32_t)(ECX));
  /* 10e2257b call 0x10e225b0 */
  push32(0x10e22580u); f_10e225b0();
  /* 10e22580 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e22583 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e22585 jne 0x10e22595 */
  if (!C.zf) goto L_10e22595;
  /* 10e22587 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e2258a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e2258c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e2258f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 10e22593 jmp 0x10e225a2 */
  goto L_10e225a2;
L_10e22595:;
  /* 10e22595 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e22598 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e2259b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10e2259e jmp 0x10e22541 */
  goto L_10e22541;
L_10e225a0:;
  /* 10e225a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e225a2:;
  /* 10e225a2 mov esp, ebp */
  ESP = (EBP);
  /* 10e225a4 pop ebp */
  EBP = (pop32());
  /* 10e225a5 ret  */
  ESPCHK(0x10e224e0u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x10e225b0 (79 bytes, 32 insns) */
void f_10e225b0(void) {
  FTRACE(0x10e225b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e225b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e225b1 mov ebp, esp */
  EBP = (ESP);
  /* 10e225b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e225b4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e225b8 jne 0x10e225be */
  if (!C.zf) goto L_10e225be;
  /* 10e225ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e225bc jmp 0x10e225fb */
  goto L_10e225fb;
L_10e225be:;
  /* 10e225be mov eax, dword ptr [0x10e3fae4] */
  EAX = (r32((uint32_t)(0x10e3fae4)));
  /* 10e225c3 push eax */
  push32((uint32_t)(EAX));
  /* 10e225c4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e225c7 push ecx */
  push32((uint32_t)(ECX));
  /* 10e225c8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e225cb push edx */
  push32((uint32_t)(EDX));
  /* 10e225cc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e225cf push eax */
  push32((uint32_t)(EAX));
  /* 10e225d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e225d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e225d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e225d6 mov edx, dword ptr [0x10e3fd84] */
  EDX = (r32((uint32_t)(0x10e3fd84)));
  /* 10e225dc push edx */
  push32((uint32_t)(EDX));
  /* 10e225dd call 0x10e226b0 */
  push32(0x10e225e2u); f_10e226b0();
  /* 10e225e2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e225e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e225e8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e225ec jne 0x10e225f5 */
  if (!C.zf) goto L_10e225f5;
  /* 10e225ee mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 10e225f3 jmp 0x10e225fb */
  goto L_10e225fb;
L_10e225f5:;
  /* 10e225f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e225f8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10e225fb:;
  /* 10e225fb mov esp, ebp */
  ESP = (EBP);
  /* 10e225fd pop ebp */
  EBP = (pop32());
  /* 10e225fe ret  */
  ESPCHK(0x10e225b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012600 @ 0x10e22600 (174 bytes, 66 insns) */
void f_10e22600(void) {
  FTRACE(0x10e22600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e22600 push ebp */
  push32((uint32_t)(EBP));
  /* 10e22601 mov ebp, esp */
  EBP = (ESP);
  /* 10e22603 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e22606 mov eax, dword ptr [0x10e3e430] */
  EAX = (r32((uint32_t)(0x10e3e430)));
  /* 10e2260b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e2260e:;
  /* 10e2260e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e22611 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e22614 je 0x10e226a8 */
  if (C.zf) goto L_10e226a8;
  /* 10e2261a push 0 */
  push32((uint32_t)(0x0u));
  /* 10e2261c push 0 */
  push32((uint32_t)(0x0u));
  /* 10e2261e push 0 */
  push32((uint32_t)(0x0u));
  /* 10e22620 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e22622 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10e22624 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e22627 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e22629 push eax */
  push32((uint32_t)(EAX));
  /* 10e2262a push 0 */
  push32((uint32_t)(0x0u));
  /* 10e2262c push 1 */
  push32((uint32_t)(0x1u));
  /* 10e2262e call dword ptr [0x10e40224] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40224))), 0x10e22634u);
  /* 10e22634 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e22637 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e2263b jne 0x10e22642 */
  if (!C.zf) goto L_10e22642;
  /* 10e2263d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e22640 jmp 0x10e226aa */
  goto L_10e226aa;
L_10e22642:;
  /* 10e22642 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10e22644 push 0x10e3a88c */
  push32((uint32_t)(0x10e3a88cu));
  /* 10e22649 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e2264b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e2264e push ecx */
  push32((uint32_t)(ECX));
  /* 10e2264f call 0x10e12b00 */
  push32(0x10e22654u); f_10e12b00();
  /* 10e22654 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e22657 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e2265a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e2265e jne 0x10e22665 */
  if (!C.zf) goto L_10e22665;
  /* 10e22660 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e22663 jmp 0x10e226aa */
  goto L_10e226aa;
L_10e22665:;
  /* 10e22665 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e22667 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e22669 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e2266c push edx */
  push32((uint32_t)(EDX));
  /* 10e2266d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e22670 push eax */
  push32((uint32_t)(EAX));
  /* 10e22671 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10e22673 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e22676 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e22678 push edx */
  push32((uint32_t)(EDX));
  /* 10e22679 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e2267b push 1 */
  push32((uint32_t)(0x1u));
  /* 10e2267d call dword ptr [0x10e40224] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40224))), 0x10e22683u);
  /* 10e22683 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e22685 jne 0x10e2268c */
  if (!C.zf) goto L_10e2268c;
  /* 10e22687 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e2268a jmp 0x10e226aa */
  goto L_10e226aa;
L_10e2268c:;
  /* 10e2268c push 0 */
  push32((uint32_t)(0x0u));
  /* 10e2268e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e22691 push eax */
  push32((uint32_t)(EAX));
  /* 10e22692 call 0x10e22b00 */
  push32(0x10e22697u); f_10e22b00();
  /* 10e22697 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e2269a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e2269d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e226a0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e226a3 jmp 0x10e2260e */
  goto L_10e2260e;
L_10e226a8:;
  /* 10e226a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e226aa:;
  /* 10e226aa mov esp, ebp */
  ESP = (EBP);
  /* 10e226ac pop ebp */
  EBP = (pop32());
  /* 10e226ad ret  */
  ESPCHK(0x10e22600u, _esp0);
  ESP += 4; return;
}

/* FUN_100126b0 @ 0x10e226b0 (970 bytes, 340 insns) */
void f_10e226b0(void) {
  FTRACE(0x10e226b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e226b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e226b1 mov ebp, esp */
  EBP = (ESP);
  /* 10e226b3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10e226b5 push 0x10e3a8e0 */
  push32((uint32_t)(0x10e3a8e0u));
  /* 10e226ba push 0x10e1bc08 */
  push32((uint32_t)(0x10e1bc08u));
  /* 10e226bf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10e226c5 push eax */
  push32((uint32_t)(EAX));
  /* 10e226c6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10e226cd add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e226d0 push ebx */
  push32((uint32_t)(EBX));
  /* 10e226d1 push esi */
  push32((uint32_t)(ESI));
  /* 10e226d2 push edi */
  push32((uint32_t)(EDI));
  /* 10e226d3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10e226d6 cmp dword ptr [0x10e3e76c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e76c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e226dd jne 0x10e22736 */
  if (!C.zf) goto L_10e22736;
  /* 10e226df push 1 */
  push32((uint32_t)(0x1u));
  /* 10e226e1 push 0x10e39f38 */
  push32((uint32_t)(0x10e39f38u));
  /* 10e226e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e226e8 push 0x10e39f38 */
  push32((uint32_t)(0x10e39f38u));
  /* 10e226ed push 0 */
  push32((uint32_t)(0x0u));
  /* 10e226ef push 0 */
  push32((uint32_t)(0x0u));
  /* 10e226f1 call dword ptr [0x10e4022c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e4022c))), 0x10e226f7u);
  /* 10e226f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e226f9 je 0x10e22707 */
  if (C.zf) goto L_10e22707;
  /* 10e226fb mov dword ptr [0x10e3e76c], 1 */
  w32((uint32_t)(0x10e3e76c), (0x1u));
  /* 10e22705 jmp 0x10e22736 */
  goto L_10e22736;
L_10e22707:;
  /* 10e22707 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e22709 push 0x10e39f34 */
  push32((uint32_t)(0x10e39f34u));
  /* 10e2270e push 1 */
  push32((uint32_t)(0x1u));
  /* 10e22710 push 0x10e39f34 */
  push32((uint32_t)(0x10e39f34u));
  /* 10e22715 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e22717 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e22719 call dword ptr [0x10e40238] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40238))), 0x10e2271fu);
  /* 10e2271f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e22721 je 0x10e2272f */
  if (C.zf) goto L_10e2272f;
  /* 10e22723 mov dword ptr [0x10e3e76c], 2 */
  w32((uint32_t)(0x10e3e76c), (0x2u));
  /* 10e2272d jmp 0x10e22736 */
  goto L_10e22736;
L_10e2272f:;
  /* 10e2272f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e22731 jmp 0x10e22a94 */
  goto L_10e22a94;
L_10e22736:;
  /* 10e22736 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e2273a jle 0x10e2274f */
  if ((C.zf||C.sf!=C.of)) goto L_10e2274f;
  /* 10e2273c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e2273f push eax */
  push32((uint32_t)(EAX));
  /* 10e22740 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e22743 push ecx */
  push32((uint32_t)(ECX));
  /* 10e22744 call 0x10e22ab0 */
  push32(0x10e22749u); f_10e22ab0();
  /* 10e22749 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e2274c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10e2274f:;
  /* 10e2274f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e22753 jle 0x10e22768 */
  if ((C.zf||C.sf!=C.of)) goto L_10e22768;
  /* 10e22755 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10e22758 push edx */
  push32((uint32_t)(EDX));
  /* 10e22759 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e2275c push eax */
  push32((uint32_t)(EAX));
  /* 10e2275d call 0x10e22ab0 */
  push32(0x10e22762u); f_10e22ab0();
  /* 10e22762 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e22765 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_10e22768:;
  /* 10e22768 cmp dword ptr [0x10e3e76c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e76c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e2276f jne 0x10e22794 */
  if (!C.zf) goto L_10e22794;
  /* 10e22771 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10e22774 push ecx */
  push32((uint32_t)(ECX));
  /* 10e22775 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e22778 push edx */
  push32((uint32_t)(EDX));
  /* 10e22779 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e2277c push eax */
  push32((uint32_t)(EAX));
  /* 10e2277d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e22780 push ecx */
  push32((uint32_t)(ECX));
  /* 10e22781 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e22784 push edx */
  push32((uint32_t)(EDX));
  /* 10e22785 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e22788 push eax */
  push32((uint32_t)(EAX));
  /* 10e22789 call dword ptr [0x10e40238] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40238))), 0x10e2278fu);
  /* 10e2278f jmp 0x10e22a94 */
  goto L_10e22a94;
L_10e22794:;
  /* 10e22794 cmp dword ptr [0x10e3e76c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e76c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e2279b jne 0x10e22a92 */
  if (!C.zf) goto L_10e22a92;
  /* 10e227a1 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e227a5 jne 0x10e227b0 */
  if (!C.zf) goto L_10e227b0;
  /* 10e227a7 mov ecx, dword ptr [0x10e3e618] */
  ECX = (r32((uint32_t)(0x10e3e618)));
  /* 10e227ad mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_10e227b0:;
  /* 10e227b0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e227b4 je 0x10e227c0 */
  if (C.zf) goto L_10e227c0;
  /* 10e227b6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e227ba jne 0x10e2293c */
  if (!C.zf) goto L_10e2293c;
L_10e227c0:;
  /* 10e227c0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e227c3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e227c6 jne 0x10e227d2 */
  if (!C.zf) goto L_10e227d2;
  /* 10e227c8 mov eax, 2 */
  EAX = (0x2u);
  /* 10e227cd jmp 0x10e22a94 */
  goto L_10e22a94;
L_10e227d2:;
  /* 10e227d2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e227d6 jle 0x10e227e2 */
  if ((C.zf||C.sf!=C.of)) goto L_10e227e2;
  /* 10e227d8 mov eax, 1 */
  EAX = (0x1u);
  /* 10e227dd jmp 0x10e22a94 */
  goto L_10e22a94;
L_10e227e2:;
  /* 10e227e2 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e227e6 jle 0x10e227f2 */
  if ((C.zf||C.sf!=C.of)) goto L_10e227f2;
  /* 10e227e8 mov eax, 3 */
  EAX = (0x3u);
  /* 10e227ed jmp 0x10e22a94 */
  goto L_10e22a94;
L_10e227f2:;
  /* 10e227f2 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 10e227f5 push eax */
  push32((uint32_t)(EAX));
  /* 10e227f6 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10e227f9 push ecx */
  push32((uint32_t)(ECX));
  /* 10e227fa call dword ptr [0x10e40308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40308))), 0x10e22800u);
  /* 10e22800 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e22802 jne 0x10e2280b */
  if (!C.zf) goto L_10e2280b;
  /* 10e22804 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e22806 jmp 0x10e22a94 */
  goto L_10e22a94;
L_10e2280b:;
  /* 10e2280b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e2280f jne 0x10e22817 */
  if (!C.zf) goto L_10e22817;
  /* 10e22811 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e22815 je 0x10e22844 */
  if (C.zf) goto L_10e22844;
L_10e22817:;
  /* 10e22817 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e2281b jne 0x10e22823 */
  if (!C.zf) goto L_10e22823;
  /* 10e2281d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e22821 je 0x10e22844 */
  if (C.zf) goto L_10e22844;
L_10e22823:;
  /* 10e22823 push 0x10e3a8a0 */
  push32((uint32_t)(0x10e3a8a0u));
  /* 10e22828 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e2282a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 10e2282f push 0x10e3a898 */
  push32((uint32_t)(0x10e3a898u));
  /* 10e22834 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e22836 call 0x10e11bc0 */
  push32(0x10e2283bu); f_10e11bc0();
  /* 10e2283b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e2283e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e22841 jne 0x10e22844 */
  if (!C.zf) goto L_10e22844;
  /* 10e22843 int3  */
  x86_unimpl("int3 @ 0x10e22843");
L_10e22844:;
  /* 10e22844 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e22846 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e22848 jne 0x10e2280b */
  if (!C.zf) goto L_10e2280b;
  /* 10e2284a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e2284e jle 0x10e228c3 */
  if ((C.zf||C.sf!=C.of)) goto L_10e228c3;
  /* 10e22850 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e22854 jae 0x10e22860 */
  if (!C.cf) goto L_10e22860;
  /* 10e22856 mov eax, 3 */
  EAX = (0x3u);
  /* 10e2285b jmp 0x10e22a94 */
  goto L_10e22a94;
L_10e22860:;
  /* 10e22860 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 10e22863 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 10e22866 jmp 0x10e22871 */
  goto L_10e22871;
L_10e22868:;
  /* 10e22868 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10e2286b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e2286e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_10e22871:;
  /* 10e22871 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10e22874 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e22876 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e22878 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e2287a je 0x10e228b9 */
  if (C.zf) goto L_10e228b9;
  /* 10e2287c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10e2287f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e22881 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10e22884 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e22886 je 0x10e228b9 */
  if (C.zf) goto L_10e228b9;
  /* 10e22888 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e2288b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e2288d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10e2288f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10e22892 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e22894 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e22896 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e22898 jl 0x10e228b7 */
  if ((C.sf!=C.of)) goto L_10e228b7;
  /* 10e2289a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e2289d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e2289f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e228a1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10e228a4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e228a6 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10e228a9 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e228ab jg 0x10e228b7 */
  if ((!C.zf&&C.sf==C.of)) goto L_10e228b7;
  /* 10e228ad mov eax, 2 */
  EAX = (0x2u);
  /* 10e228b2 jmp 0x10e22a94 */
  goto L_10e22a94;
L_10e228b7:;
  /* 10e228b7 jmp 0x10e22868 */
  goto L_10e22868;
L_10e228b9:;
  /* 10e228b9 mov eax, 3 */
  EAX = (0x3u);
  /* 10e228be jmp 0x10e22a94 */
  goto L_10e22a94;
L_10e228c3:;
  /* 10e228c3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e228c7 jle 0x10e2293c */
  if ((C.zf||C.sf!=C.of)) goto L_10e2293c;
  /* 10e228c9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e228cd jae 0x10e228d9 */
  if (!C.cf) goto L_10e228d9;
  /* 10e228cf mov eax, 1 */
  EAX = (0x1u);
  /* 10e228d4 jmp 0x10e22a94 */
  goto L_10e22a94;
L_10e228d9:;
  /* 10e228d9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 10e228dc mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 10e228df jmp 0x10e228ea */
  goto L_10e228ea;
L_10e228e1:;
  /* 10e228e1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10e228e4 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e228e7 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_10e228ea:;
  /* 10e228ea mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10e228ed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e228ef mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e228f1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e228f3 je 0x10e22932 */
  if (C.zf) goto L_10e22932;
  /* 10e228f5 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10e228f8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e228fa mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10e228fd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e228ff je 0x10e22932 */
  if (C.zf) goto L_10e22932;
  /* 10e22901 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e22904 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e22906 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e22908 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10e2290b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e2290d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e2290f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e22911 jl 0x10e22930 */
  if ((C.sf!=C.of)) goto L_10e22930;
  /* 10e22913 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e22916 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e22918 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10e2291a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10e2291d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e2291f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10e22922 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e22924 jg 0x10e22930 */
  if ((!C.zf&&C.sf==C.of)) goto L_10e22930;
  /* 10e22926 mov eax, 2 */
  EAX = (0x2u);
  /* 10e2292b jmp 0x10e22a94 */
  goto L_10e22a94;
L_10e22930:;
  /* 10e22930 jmp 0x10e228e1 */
  goto L_10e228e1;
L_10e22932:;
  /* 10e22932 mov eax, 1 */
  EAX = (0x1u);
  /* 10e22937 jmp 0x10e22a94 */
  goto L_10e22a94;
L_10e2293c:;
  /* 10e2293c push 0 */
  push32((uint32_t)(0x0u));
  /* 10e2293e push 0 */
  push32((uint32_t)(0x0u));
  /* 10e22940 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e22943 push ecx */
  push32((uint32_t)(ECX));
  /* 10e22944 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e22947 push edx */
  push32((uint32_t)(EDX));
  /* 10e22948 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e2294a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10e2294d push eax */
  push32((uint32_t)(EAX));
  /* 10e2294e call dword ptr [0x10e40314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40314))), 0x10e22954u);
  /* 10e22954 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10e22957 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e2295b jne 0x10e22964 */
  if (!C.zf) goto L_10e22964;
  /* 10e2295d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e2295f jmp 0x10e22a94 */
  goto L_10e22a94;
L_10e22964:;
  /* 10e22964 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e2296b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e2296e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10e22970 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e22973 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10e22975 call 0x10e15ca0 */
  push32(0x10e2297au); f_10e15ca0();
  /* 10e2297a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 10e2297d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10e22980 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 10e22983 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10e22986 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10e2298d jmp 0x10e229a6 */
  goto L_10e229a6;
  /* 10e2298f mov eax, 1 */
  EAX = (0x1u);
  /* 10e22994 ret  */
  ESPCHK(0x10e226b0u, _esp0);
  ESP += 4; return;
  /* 10e22995 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10e22998 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10e2299f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10e229a6:;
  /* 10e229a6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e229aa jne 0x10e229b3 */
  if (!C.zf) goto L_10e229b3;
  /* 10e229ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e229ae jmp 0x10e22a94 */
  goto L_10e22a94;
L_10e229b3:;
  /* 10e229b3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e229b6 push edx */
  push32((uint32_t)(EDX));
  /* 10e229b7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e229ba push eax */
  push32((uint32_t)(EAX));
  /* 10e229bb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e229be push ecx */
  push32((uint32_t)(ECX));
  /* 10e229bf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e229c2 push edx */
  push32((uint32_t)(EDX));
  /* 10e229c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e229c5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10e229c8 push eax */
  push32((uint32_t)(EAX));
  /* 10e229c9 call dword ptr [0x10e40314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40314))), 0x10e229cfu);
  /* 10e229cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e229d1 jne 0x10e229da */
  if (!C.zf) goto L_10e229da;
  /* 10e229d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e229d5 jmp 0x10e22a94 */
  goto L_10e22a94;
L_10e229da:;
  /* 10e229da push 0 */
  push32((uint32_t)(0x0u));
  /* 10e229dc push 0 */
  push32((uint32_t)(0x0u));
  /* 10e229de mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10e229e1 push ecx */
  push32((uint32_t)(ECX));
  /* 10e229e2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e229e5 push edx */
  push32((uint32_t)(EDX));
  /* 10e229e6 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e229e8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10e229eb push eax */
  push32((uint32_t)(EAX));
  /* 10e229ec call dword ptr [0x10e40314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40314))), 0x10e229f2u);
  /* 10e229f2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10e229f5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e229f9 jne 0x10e22a02 */
  if (!C.zf) goto L_10e22a02;
  /* 10e229fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e229fd jmp 0x10e22a94 */
  goto L_10e22a94;
L_10e22a02:;
  /* 10e22a02 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10e22a09 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e22a0c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10e22a0e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e22a11 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10e22a13 call 0x10e15ca0 */
  push32(0x10e22a18u); f_10e15ca0();
  /* 10e22a18 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 10e22a1b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10e22a1e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 10e22a21 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10e22a24 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10e22a2b jmp 0x10e22a44 */
  goto L_10e22a44;
  /* 10e22a2d mov eax, 1 */
  EAX = (0x1u);
  /* 10e22a32 ret  */
  ESPCHK(0x10e226b0u, _esp0);
  ESP += 4; return;
  /* 10e22a33 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10e22a36 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10e22a3d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10e22a44:;
  /* 10e22a44 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e22a48 jne 0x10e22a4e */
  if (!C.zf) goto L_10e22a4e;
  /* 10e22a4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e22a4c jmp 0x10e22a94 */
  goto L_10e22a94;
L_10e22a4e:;
  /* 10e22a4e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e22a51 push edx */
  push32((uint32_t)(EDX));
  /* 10e22a52 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e22a55 push eax */
  push32((uint32_t)(EAX));
  /* 10e22a56 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10e22a59 push ecx */
  push32((uint32_t)(ECX));
  /* 10e22a5a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e22a5d push edx */
  push32((uint32_t)(EDX));
  /* 10e22a5e push 1 */
  push32((uint32_t)(0x1u));
  /* 10e22a60 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10e22a63 push eax */
  push32((uint32_t)(EAX));
  /* 10e22a64 call dword ptr [0x10e40314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40314))), 0x10e22a6au);
  /* 10e22a6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e22a6c jne 0x10e22a72 */
  if (!C.zf) goto L_10e22a72;
  /* 10e22a6e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e22a70 jmp 0x10e22a94 */
  goto L_10e22a94;
L_10e22a72:;
  /* 10e22a72 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e22a75 push ecx */
  push32((uint32_t)(ECX));
  /* 10e22a76 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e22a79 push edx */
  push32((uint32_t)(EDX));
  /* 10e22a7a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e22a7d push eax */
  push32((uint32_t)(EAX));
  /* 10e22a7e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e22a81 push ecx */
  push32((uint32_t)(ECX));
  /* 10e22a82 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e22a85 push edx */
  push32((uint32_t)(EDX));
  /* 10e22a86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e22a89 push eax */
  push32((uint32_t)(EAX));
  /* 10e22a8a call dword ptr [0x10e4022c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e4022c))), 0x10e22a90u);
  /* 10e22a90 jmp 0x10e22a94 */
  goto L_10e22a94;
L_10e22a92:;
  /* 10e22a92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e22a94:;
  /* 10e22a94 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 10e22a97 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e22a9a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10e22aa1 pop edi */
  EDI = (pop32());
  /* 10e22aa2 pop esi */
  ESI = (pop32());
  /* 10e22aa3 pop ebx */
  EBX = (pop32());
  /* 10e22aa4 mov esp, ebp */
  ESP = (EBP);
  /* 10e22aa6 pop ebp */
  EBP = (pop32());
  /* 10e22aa7 ret  */
  ESPCHK(0x10e226b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ab0 @ 0x10e22ab0 (80 bytes, 32 insns) */
void f_10e22ab0(void) {
  FTRACE(0x10e22ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e22ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e22ab1 mov ebp, esp */
  EBP = (ESP);
  /* 10e22ab3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e22ab6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e22ab9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e22abc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e22abf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10e22ac2:;
  /* 10e22ac2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e22ac5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e22ac8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e22acb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e22ace test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e22ad0 je 0x10e22ae7 */
  if (C.zf) goto L_10e22ae7;
  /* 10e22ad2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e22ad5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e22ad8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e22ada je 0x10e22ae7 */
  if (C.zf) goto L_10e22ae7;
  /* 10e22adc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e22adf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e22ae2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e22ae5 jmp 0x10e22ac2 */
  goto L_10e22ac2;
L_10e22ae7:;
  /* 10e22ae7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e22aea movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e22aed test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e22aef jne 0x10e22af9 */
  if (!C.zf) goto L_10e22af9;
  /* 10e22af1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e22af4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e22af7 jmp 0x10e22afc */
  goto L_10e22afc;
L_10e22af9:;
  /* 10e22af9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10e22afc:;
  /* 10e22afc mov esp, ebp */
  ESP = (EBP);
  /* 10e22afe pop ebp */
  EBP = (pop32());
  /* 10e22aff ret  */
  ESPCHK(0x10e22ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b00 @ 0x10e22b00 (736 bytes, 224 insns) */
void f_10e22b00(void) {
  FTRACE(0x10e22b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e22b00 push ebp */
  push32((uint32_t)(EBP));
  /* 10e22b01 mov ebp, esp */
  EBP = (ESP);
  /* 10e22b03 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e22b06 push esi */
  push32((uint32_t)(ESI));
  /* 10e22b07 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e22b0b je 0x10e22b2c */
  if (C.zf) goto L_10e22b2c;
  /* 10e22b0d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10e22b0f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e22b12 push eax */
  push32((uint32_t)(EAX));
  /* 10e22b13 call 0x10e22f50 */
  push32(0x10e22b18u); f_10e22f50();
  /* 10e22b18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e22b1b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10e22b1e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e22b22 je 0x10e22b2c */
  if (C.zf) goto L_10e22b2c;
  /* 10e22b24 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e22b27 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e22b2a jne 0x10e22b34 */
  if (!C.zf) goto L_10e22b34;
L_10e22b2c:;
  /* 10e22b2c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e22b2f jmp 0x10e22ddb */
  goto L_10e22ddb;
L_10e22b34:;
  /* 10e22b34 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e22b37 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10e22b3b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e22b3d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e22b3f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10e22b40 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10e22b43 mov ecx, dword ptr [0x10e3e428] */
  ECX = (r32((uint32_t)(0x10e3e428)));
  /* 10e22b49 cmp ecx, dword ptr [0x10e3e42c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10e3e42c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e22b4f jne 0x10e22b65 */
  if (!C.zf) goto L_10e22b65;
  /* 10e22b51 mov edx, dword ptr [0x10e3e428] */
  EDX = (r32((uint32_t)(0x10e3e428)));
  /* 10e22b57 push edx */
  push32((uint32_t)(EDX));
  /* 10e22b58 call 0x10e22e60 */
  push32(0x10e22b5du); f_10e22e60();
  /* 10e22b5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e22b60 mov dword ptr [0x10e3e428], eax */
  w32((uint32_t)(0x10e3e428), (EAX));
L_10e22b65:;
  /* 10e22b65 cmp dword ptr [0x10e3e428], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e428))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e22b6c jne 0x10e22c25 */
  if (!C.zf) goto L_10e22c25;
  /* 10e22b72 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e22b76 je 0x10e22b97 */
  if (C.zf) goto L_10e22b97;
  /* 10e22b78 cmp dword ptr [0x10e3e430], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e430))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e22b7f je 0x10e22b97 */
  if (C.zf) goto L_10e22b97;
  /* 10e22b81 call 0x10e22600 */
  push32(0x10e22b86u); f_10e22600();
  /* 10e22b86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e22b88 je 0x10e22b92 */
  if (C.zf) goto L_10e22b92;
  /* 10e22b8a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e22b8d jmp 0x10e22ddb */
  goto L_10e22ddb;
L_10e22b92:;
  /* 10e22b92 jmp 0x10e22c25 */
  goto L_10e22c25;
L_10e22b97:;
  /* 10e22b97 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e22b9b je 0x10e22ba4 */
  if (C.zf) goto L_10e22ba4;
  /* 10e22b9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e22b9f jmp 0x10e22ddb */
  goto L_10e22ddb;
L_10e22ba4:;
  /* 10e22ba4 cmp dword ptr [0x10e3e428], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e428))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e22bab jne 0x10e22be4 */
  if (!C.zf) goto L_10e22be4;
  /* 10e22bad push 0x87 */
  push32((uint32_t)(0x87u));
  /* 10e22bb2 push 0x10e3a8f8 */
  push32((uint32_t)(0x10e3a8f8u));
  /* 10e22bb7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e22bb9 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e22bbb call 0x10e12b00 */
  push32(0x10e22bc0u); f_10e12b00();
  /* 10e22bc0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e22bc3 mov dword ptr [0x10e3e428], eax */
  w32((uint32_t)(0x10e3e428), (EAX));
  /* 10e22bc8 cmp dword ptr [0x10e3e428], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e428))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e22bcf jne 0x10e22bd9 */
  if (!C.zf) goto L_10e22bd9;
  /* 10e22bd1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e22bd4 jmp 0x10e22ddb */
  goto L_10e22ddb;
L_10e22bd9:;
  /* 10e22bd9 mov eax, dword ptr [0x10e3e428] */
  EAX = (r32((uint32_t)(0x10e3e428)));
  /* 10e22bde mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10e22be4:;
  /* 10e22be4 cmp dword ptr [0x10e3e430], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e430))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e22beb jne 0x10e22c25 */
  if (!C.zf) goto L_10e22c25;
  /* 10e22bed push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 10e22bf2 push 0x10e3a8f8 */
  push32((uint32_t)(0x10e3a8f8u));
  /* 10e22bf7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e22bf9 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e22bfb call 0x10e12b00 */
  push32(0x10e22c00u); f_10e12b00();
  /* 10e22c00 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e22c03 mov dword ptr [0x10e3e430], eax */
  w32((uint32_t)(0x10e3e430), (EAX));
  /* 10e22c08 cmp dword ptr [0x10e3e430], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e430))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e22c0f jne 0x10e22c19 */
  if (!C.zf) goto L_10e22c19;
  /* 10e22c11 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e22c14 jmp 0x10e22ddb */
  goto L_10e22ddb;
L_10e22c19:;
  /* 10e22c19 mov ecx, dword ptr [0x10e3e430] */
  ECX = (r32((uint32_t)(0x10e3e430)));
  /* 10e22c1f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_10e22c25:;
  /* 10e22c25 mov edx, dword ptr [0x10e3e428] */
  EDX = (r32((uint32_t)(0x10e3e428)));
  /* 10e22c2b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10e22c2e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e22c31 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e22c34 push eax */
  push32((uint32_t)(EAX));
  /* 10e22c35 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e22c38 push ecx */
  push32((uint32_t)(ECX));
  /* 10e22c39 call 0x10e22de0 */
  push32(0x10e22c3eu); f_10e22de0();
  /* 10e22c3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e22c41 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e22c44 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e22c48 jl 0x10e22ce1 */
  if ((C.sf!=C.of)) goto L_10e22ce1;
  /* 10e22c4e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e22c51 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e22c54 je 0x10e22ce1 */
  if (C.zf) goto L_10e22ce1;
  /* 10e22c5a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e22c5e je 0x10e22cd3 */
  if (C.zf) goto L_10e22cd3;
  /* 10e22c60 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e22c62 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e22c65 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e22c68 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10e22c6b push edx */
  push32((uint32_t)(EDX));
  /* 10e22c6c call 0x10e13590 */
  push32(0x10e22c71u); f_10e13590();
  /* 10e22c71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e22c74 jmp 0x10e22c7f */
  goto L_10e22c7f;
L_10e22c76:;
  /* 10e22c76 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e22c79 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e22c7c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10e22c7f:;
  /* 10e22c7f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e22c82 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e22c85 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e22c89 je 0x10e22ca0 */
  if (C.zf) goto L_10e22ca0;
  /* 10e22c8b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e22c8e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e22c91 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e22c94 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10e22c97 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 10e22c9b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10e22c9e jmp 0x10e22c76 */
  goto L_10e22c76;
L_10e22ca0:;
  /* 10e22ca0 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 10e22ca5 push 0x10e3a8f8 */
  push32((uint32_t)(0x10e3a8f8u));
  /* 10e22caa push 2 */
  push32((uint32_t)(0x2u));
  /* 10e22cac mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e22caf shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10e22cb2 push eax */
  push32((uint32_t)(EAX));
  /* 10e22cb3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e22cb6 push ecx */
  push32((uint32_t)(ECX));
  /* 10e22cb7 call 0x10e12f90 */
  push32(0x10e22cbcu); f_10e12f90();
  /* 10e22cbc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e22cbf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e22cc2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e22cc6 je 0x10e22cd1 */
  if (C.zf) goto L_10e22cd1;
  /* 10e22cc8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e22ccb mov dword ptr [0x10e3e428], edx */
  w32((uint32_t)(0x10e3e428), (EDX));
L_10e22cd1:;
  /* 10e22cd1 jmp 0x10e22cdf */
  goto L_10e22cdf;
L_10e22cd3:;
  /* 10e22cd3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e22cd6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e22cd9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e22cdc mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_10e22cdf:;
  /* 10e22cdf jmp 0x10e22d54 */
  goto L_10e22d54;
L_10e22ce1:;
  /* 10e22ce1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e22ce5 jne 0x10e22d4d */
  if (!C.zf) goto L_10e22d4d;
  /* 10e22ce7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e22ceb jge 0x10e22cf5 */
  if ((C.sf==C.of)) goto L_10e22cf5;
  /* 10e22ced mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e22cf0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e22cf2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10e22cf5:;
  /* 10e22cf5 push 0xce */
  push32((uint32_t)(0xceu));
  /* 10e22cfa push 0x10e3a8f8 */
  push32((uint32_t)(0x10e3a8f8u));
  /* 10e22cff push 2 */
  push32((uint32_t)(0x2u));
  /* 10e22d01 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e22d04 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 10e22d0b push edx */
  push32((uint32_t)(EDX));
  /* 10e22d0c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e22d0f push eax */
  push32((uint32_t)(EAX));
  /* 10e22d10 call 0x10e12f90 */
  push32(0x10e22d15u); f_10e12f90();
  /* 10e22d15 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e22d18 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e22d1b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e22d1f jne 0x10e22d29 */
  if (!C.zf) goto L_10e22d29;
  /* 10e22d21 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e22d24 jmp 0x10e22ddb */
  goto L_10e22ddb;
L_10e22d29:;
  /* 10e22d29 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e22d2c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e22d2f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e22d32 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 10e22d35 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e22d38 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e22d3b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 10e22d43 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e22d46 mov dword ptr [0x10e3e428], eax */
  w32((uint32_t)(0x10e3e428), (EAX));
  /* 10e22d4b jmp 0x10e22d54 */
  goto L_10e22d54;
L_10e22d4d:;
  /* 10e22d4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e22d4f jmp 0x10e22ddb */
  goto L_10e22ddb;
L_10e22d54:;
  /* 10e22d54 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e22d58 je 0x10e22dd9 */
  if (C.zf) goto L_10e22dd9;
  /* 10e22d5a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 10e22d5f push 0x10e3a8f8 */
  push32((uint32_t)(0x10e3a8f8u));
  /* 10e22d64 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e22d66 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e22d69 push ecx */
  push32((uint32_t)(ECX));
  /* 10e22d6a call 0x10e15930 */
  push32(0x10e22d6fu); f_10e15930();
  /* 10e22d6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e22d72 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e22d75 push eax */
  push32((uint32_t)(EAX));
  /* 10e22d76 call 0x10e12b00 */
  push32(0x10e22d7bu); f_10e12b00();
  /* 10e22d7b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e22d7e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10e22d81 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e22d85 je 0x10e22dd9 */
  if (C.zf) goto L_10e22dd9;
  /* 10e22d87 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e22d8a push edx */
  push32((uint32_t)(EDX));
  /* 10e22d8b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e22d8e push eax */
  push32((uint32_t)(EAX));
  /* 10e22d8f call 0x10e15ab0 */
  push32(0x10e22d94u); f_10e15ab0();
  /* 10e22d94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e22d97 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e22d9a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e22d9d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e22da0 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e22da2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e22da5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e22da8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10e22dab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e22dae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e22db1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e22db4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e22db7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e22db9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e22dbb not edx */
  EDX = (~(EDX));
  /* 10e22dbd and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10e22dc0 push edx */
  push32((uint32_t)(EDX));
  /* 10e22dc1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e22dc4 push eax */
  push32((uint32_t)(EAX));
  /* 10e22dc5 call dword ptr [0x10e40228] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40228))), 0x10e22dcbu);
  /* 10e22dcb push 2 */
  push32((uint32_t)(0x2u));
  /* 10e22dcd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e22dd0 push ecx */
  push32((uint32_t)(ECX));
  /* 10e22dd1 call 0x10e13590 */
  push32(0x10e22dd6u); f_10e13590();
  /* 10e22dd6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e22dd9:;
  /* 10e22dd9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e22ddb:;
  /* 10e22ddb pop esi */
  ESI = (pop32());
  /* 10e22ddc mov esp, ebp */
  ESP = (EBP);
  /* 10e22dde pop ebp */
  EBP = (pop32());
  /* 10e22ddf ret  */
  ESPCHK(0x10e22b00u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x10e22de0 (124 bytes, 47 insns) */
void f_10e22de0(void) {
  FTRACE(0x10e22de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e22de0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e22de1 mov ebp, esp */
  EBP = (ESP);
  /* 10e22de3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e22de4 mov eax, dword ptr [0x10e3e428] */
  EAX = (r32((uint32_t)(0x10e3e428)));
  /* 10e22de9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e22dec jmp 0x10e22df7 */
  goto L_10e22df7;
L_10e22dee:;
  /* 10e22dee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e22df1 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e22df4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10e22df7:;
  /* 10e22df7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e22dfa cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e22dfd je 0x10e22e4a */
  if (C.zf) goto L_10e22e4a;
  /* 10e22dff mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e22e02 push eax */
  push32((uint32_t)(EAX));
  /* 10e22e03 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e22e06 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e22e08 push edx */
  push32((uint32_t)(EDX));
  /* 10e22e09 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e22e0c push eax */
  push32((uint32_t)(EAX));
  /* 10e22e0d call 0x10e225b0 */
  push32(0x10e22e12u); f_10e225b0();
  /* 10e22e12 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e22e15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e22e17 jne 0x10e22e48 */
  if (!C.zf) goto L_10e22e48;
  /* 10e22e19 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e22e1c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e22e1e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e22e21 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 10e22e25 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e22e28 je 0x10e22e3a */
  if (C.zf) goto L_10e22e3a;
  /* 10e22e2a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e22e2d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e22e2f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e22e32 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 10e22e36 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e22e38 jne 0x10e22e48 */
  if (!C.zf) goto L_10e22e48;
L_10e22e3a:;
  /* 10e22e3a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e22e3d sub eax, dword ptr [0x10e3e428] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e3e428))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e22e43 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10e22e46 jmp 0x10e22e58 */
  goto L_10e22e58;
L_10e22e48:;
  /* 10e22e48 jmp 0x10e22dee */
  goto L_10e22dee;
L_10e22e4a:;
  /* 10e22e4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e22e4d sub eax, dword ptr [0x10e3e428] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e3e428))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e22e53 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10e22e56 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_10e22e58:;
  /* 10e22e58 mov esp, ebp */
  ESP = (EBP);
  /* 10e22e5a pop ebp */
  EBP = (pop32());
  /* 10e22e5b ret  */
  ESPCHK(0x10e22de0u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x10e22e60 (238 bytes, 80 insns) */
void f_10e22e60(void) {
  FTRACE(0x10e22e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e22e60 push ebp */
  push32((uint32_t)(EBP));
  /* 10e22e61 mov ebp, esp */
  EBP = (ESP);
  /* 10e22e63 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e22e66 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10e22e6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e22e70 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e22e73 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e22e77 jne 0x10e22e80 */
  if (!C.zf) goto L_10e22e80;
  /* 10e22e79 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e22e7b jmp 0x10e22f4a */
  goto L_10e22f4a;
L_10e22e80:;
  /* 10e22e80 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e22e83 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e22e85 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e22e88 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e22e8b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e22e8e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e22e90 je 0x10e22e9d */
  if (C.zf) goto L_10e22e9d;
  /* 10e22e92 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e22e95 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e22e98 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10e22e9b jmp 0x10e22e80 */
  goto L_10e22e80;
L_10e22e9d:;
  /* 10e22e9d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 10e22ea2 push 0x10e3a8f8 */
  push32((uint32_t)(0x10e3a8f8u));
  /* 10e22ea7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e22ea9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e22eac lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 10e22eb3 push eax */
  push32((uint32_t)(EAX));
  /* 10e22eb4 call 0x10e12b00 */
  push32(0x10e22eb9u); f_10e12b00();
  /* 10e22eb9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e22ebc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e22ebf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e22ec2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e22ec5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e22ec9 jne 0x10e22ed5 */
  if (!C.zf) goto L_10e22ed5;
  /* 10e22ecb push 9 */
  push32((uint32_t)(0x9u));
  /* 10e22ecd call 0x10e11a70 */
  push32(0x10e22ed2u); f_10e11a70();
  /* 10e22ed2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e22ed5:;
  /* 10e22ed5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e22ed8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10e22edb:;
  /* 10e22edb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e22ede cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e22ee1 je 0x10e22f3e */
  if (C.zf) goto L_10e22f3e;
  /* 10e22ee3 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 10e22ee8 push 0x10e3a8f8 */
  push32((uint32_t)(0x10e3a8f8u));
  /* 10e22eed push 2 */
  push32((uint32_t)(0x2u));
  /* 10e22eef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e22ef2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e22ef4 push edx */
  push32((uint32_t)(EDX));
  /* 10e22ef5 call 0x10e15930 */
  push32(0x10e22efau); f_10e15930();
  /* 10e22efa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e22efd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e22f00 push eax */
  push32((uint32_t)(EAX));
  /* 10e22f01 call 0x10e12b00 */
  push32(0x10e22f06u); f_10e12b00();
  /* 10e22f06 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e22f09 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e22f0c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10e22f0e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e22f11 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e22f14 je 0x10e22f2a */
  if (C.zf) goto L_10e22f2a;
  /* 10e22f16 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e22f19 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e22f1b push ecx */
  push32((uint32_t)(ECX));
  /* 10e22f1c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e22f1f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e22f21 push eax */
  push32((uint32_t)(EAX));
  /* 10e22f22 call 0x10e15ab0 */
  push32(0x10e22f27u); f_10e15ab0();
  /* 10e22f27 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e22f2a:;
  /* 10e22f2a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e22f2d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e22f30 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e22f33 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e22f36 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e22f39 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10e22f3c jmp 0x10e22edb */
  goto L_10e22edb;
L_10e22f3e:;
  /* 10e22f3e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e22f41 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10e22f47 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10e22f4a:;
  /* 10e22f4a mov esp, ebp */
  ESP = (EBP);
  /* 10e22f4c pop ebp */
  EBP = (pop32());
  /* 10e22f4d ret  */
  ESPCHK(0x10e22e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f50 @ 0x10e22f50 (237 bytes, 81 insns) */
void f_10e22f50(void) {
  FTRACE(0x10e22f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e22f50 push ebp */
  push32((uint32_t)(EBP));
  /* 10e22f51 mov ebp, esp */
  EBP = (ESP);
  /* 10e22f53 push ecx */
  push32((uint32_t)(ECX));
  /* 10e22f54 cmp dword ptr [0x10e3fb6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3fb6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e22f5b jne 0x10e22f72 */
  if (!C.zf) goto L_10e22f72;
  /* 10e22f5d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e22f60 push eax */
  push32((uint32_t)(EAX));
  /* 10e22f61 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e22f64 push ecx */
  push32((uint32_t)(ECX));
  /* 10e22f65 call 0x10e23050 */
  push32(0x10e22f6au); f_10e23050();
  /* 10e22f6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e22f6d jmp 0x10e23039 */
  goto L_10e23039;
L_10e22f72:;
  /* 10e22f72 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10e22f74 call 0x10e16500 */
  push32(0x10e22f79u); f_10e16500();
  /* 10e22f79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e22f7c jmp 0x10e22f87 */
  goto L_10e22f87;
L_10e22f7e:;
  /* 10e22f7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e22f81 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e22f84 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10e22f87:;
  /* 10e22f87 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e22f8a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 10e22f8e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 10e22f92 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e22f95 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e22f9b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e22f9d je 0x10e2301b */
  if (C.zf) goto L_10e2301b;
  /* 10e22f9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e22fa2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e22fa7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e22fa9 mov cl, byte ptr [eax + 0x10e3fc81] */
  CL = (r8((uint32_t)(EAX + 0x10e3fc81)));
  /* 10e22faf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10e22fb2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e22fb4 je 0x10e23006 */
  if (C.zf) goto L_10e23006;
  /* 10e22fb6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e22fb9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e22fbc mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10e22fbf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e22fc2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e22fc4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10e22fc6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e22fc8 jne 0x10e22fd8 */
  if (!C.zf) goto L_10e22fd8;
  /* 10e22fca push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10e22fcc call 0x10e165a0 */
  push32(0x10e22fd1u); f_10e165a0();
  /* 10e22fd1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e22fd4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e22fd6 jmp 0x10e23039 */
  goto L_10e23039;
L_10e22fd8:;
  /* 10e22fd8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e22fdb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e22fe1 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10e22fe4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e22fe7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e22fe9 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10e22feb or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10e22fed cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e22ff0 jne 0x10e23004 */
  if (!C.zf) goto L_10e23004;
  /* 10e22ff2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10e22ff4 call 0x10e165a0 */
  push32(0x10e22ff9u); f_10e165a0();
  /* 10e22ff9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e22ffc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e22fff sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e23002 jmp 0x10e23039 */
  goto L_10e23039;
L_10e23004:;
  /* 10e23004 jmp 0x10e23016 */
  goto L_10e23016;
L_10e23006:;
  /* 10e23006 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e23009 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e2300f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e23012 jne 0x10e23016 */
  if (!C.zf) goto L_10e23016;
  /* 10e23014 jmp 0x10e2301b */
  goto L_10e2301b;
L_10e23016:;
  /* 10e23016 jmp 0x10e22f7e */
  goto L_10e22f7e;
L_10e2301b:;
  /* 10e2301b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10e2301d call 0x10e165a0 */
  push32(0x10e23022u); f_10e165a0();
  /* 10e23022 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e23025 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e23028 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e2302d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e23030 jne 0x10e23037 */
  if (!C.zf) goto L_10e23037;
  /* 10e23032 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e23035 jmp 0x10e23039 */
  goto L_10e23039;
L_10e23037:;
  /* 10e23037 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e23039:;
  /* 10e23039 mov esp, ebp */
  ESP = (EBP);
  /* 10e2303b pop ebp */
  EBP = (pop32());
  /* 10e2303c ret  */
  ESPCHK(0x10e22f50u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x10e23050 (193 bytes, 87 insns) */
void f_10e23050(void) {
  FTRACE(0x10e23050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e23050 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e23052 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10e23056 push ebx */
  push32((uint32_t)(EBX));
  /* 10e23057 mov ebx, eax */
  EBX = (EAX);
  /* 10e23059 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10e2305c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10e23060 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10e23066 je 0x10e2307b */
  if (C.zf) goto L_10e2307b;
L_10e23068:;
  /* 10e23068 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 10e2306a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10e2306b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e2306d je 0x10e23040 */
  if (C.zf) { jmp_ind(0x10e23040u); return; }
  /* 10e2306f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10e23071 je 0x10e230c4 */
  if (C.zf) goto L_10e230c4;
  /* 10e23073 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10e23079 jne 0x10e23068 */
  if (!C.zf) goto L_10e23068;
L_10e2307b:;
  /* 10e2307b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 10e2307d push edi */
  push32((uint32_t)(EDI));
  /* 10e2307e mov eax, ebx */
  EAX = (EBX);
  /* 10e23080 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 10e23083 push esi */
  push32((uint32_t)(ESI));
  /* 10e23084 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_10e23086:;
  /* 10e23086 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10e23088 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 10e2308d mov eax, ecx */
  EAX = (ECX);
  /* 10e2308f mov esi, edi */
  ESI = (EDI);
  /* 10e23091 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 10e23093 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10e23095 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10e23097 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e2309a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e2309d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10e2309f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10e230a1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e230a4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 10e230aa jne 0x10e230c8 */
  if (!C.zf) goto L_10e230c8;
  /* 10e230ac and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10e230b1 je 0x10e23086 */
  if (C.zf) goto L_10e23086;
  /* 10e230b3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10e230b8 jne 0x10e230c2 */
  if (!C.zf) goto L_10e230c2;
  /* 10e230ba and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 10e230c0 jne 0x10e23086 */
  if (!C.zf) goto L_10e23086;
L_10e230c2:;
  /* 10e230c2 pop esi */
  ESI = (pop32());
  /* 10e230c3 pop edi */
  EDI = (pop32());
L_10e230c4:;
  /* 10e230c4 pop ebx */
  EBX = (pop32());
  /* 10e230c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e230c7 ret  */
  ESPCHK(0x10e23050u, _esp0);
  ESP += 4; return;
L_10e230c8:;
  /* 10e230c8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10e230cb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e230cd je 0x10e23105 */
  if (C.zf) goto L_10e23105;
  /* 10e230cf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10e230d1 je 0x10e230c2 */
  if (C.zf) goto L_10e230c2;
  /* 10e230d3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e230d5 je 0x10e230fe */
  if (C.zf) goto L_10e230fe;
  /* 10e230d7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10e230d9 je 0x10e230c2 */
  if (C.zf) goto L_10e230c2;
  /* 10e230db shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10e230de cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e230e0 je 0x10e230f7 */
  if (C.zf) goto L_10e230f7;
  /* 10e230e2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10e230e4 je 0x10e230c2 */
  if (C.zf) goto L_10e230c2;
  /* 10e230e6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e230e8 je 0x10e230f0 */
  if (C.zf) goto L_10e230f0;
  /* 10e230ea test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10e230ec je 0x10e230c2 */
  if (C.zf) goto L_10e230c2;
  /* 10e230ee jmp 0x10e23086 */
  goto L_10e23086;
L_10e230f0:;
  /* 10e230f0 pop esi */
  ESI = (pop32());
  /* 10e230f1 pop edi */
  EDI = (pop32());
  /* 10e230f2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 10e230f5 pop ebx */
  EBX = (pop32());
  /* 10e230f6 ret  */
  ESPCHK(0x10e23050u, _esp0);
  ESP += 4; return;
L_10e230f7:;
  /* 10e230f7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 10e230fa pop esi */
  ESI = (pop32());
  /* 10e230fb pop edi */
  EDI = (pop32());
  /* 10e230fc pop ebx */
  EBX = (pop32());
  /* 10e230fd ret  */
  ESPCHK(0x10e23050u, _esp0);
  ESP += 4; return;
L_10e230fe:;
  /* 10e230fe lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 10e23101 pop esi */
  ESI = (pop32());
  /* 10e23102 pop edi */
  EDI = (pop32());
  /* 10e23103 pop ebx */
  EBX = (pop32());
  /* 10e23104 ret  */
  ESPCHK(0x10e23050u, _esp0);
  ESP += 4; return;
L_10e23105:;
  /* 10e23105 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 10e23108 pop esi */
  ESI = (pop32());
  /* 10e23109 pop edi */
  EDI = (pop32());
  /* 10e2310a pop ebx */
  EBX = (pop32());
  /* 10e2310b ret  */
  ESPCHK(0x10e23050u, _esp0);
  ESP += 4; return;
  /* 10e2310c jmp dword ptr [0x10e4024c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10e4024c)))); return;
}

/* RtlUnwind @ 0x10e2325c (6 bytes, 1 insns) */
void f_10e2325c(void) {
  FTRACE(0x10e2325cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e2325c jmp dword ptr [0x10e4032c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10e4032c)))); return;
}

