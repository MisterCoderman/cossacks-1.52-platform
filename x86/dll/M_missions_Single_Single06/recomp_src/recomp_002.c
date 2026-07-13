#include "recomp.h"

/* FUN_1000fe20 @ 0x10d1fe20 (289 bytes, 97 insns) */
void f_10d1fe20(void) {
  FTRACE(0x10d1fe20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1fe20 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1fe21 mov ebp, esp */
  EBP = (ESP);
  /* 10d1fe23 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1fe26 push esi */
  push32((uint32_t)(ESI));
  /* 10d1fe27 mov eax, dword ptr [0x10d3dc98] */
  EAX = (r32((uint32_t)(0x10d3dc98)));
  /* 10d1fe2c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d1fe2f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10d1fe36 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10d1fe3d jmp 0x10d1fe48 */
  goto L_10d1fe48;
L_10d1fe3f:;
  /* 10d1fe3f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d1fe42 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1fe45 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10d1fe48:;
  /* 10d1fe48 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1fe4c jae 0x10d1fe81 */
  if (!C.cf) goto L_10d1fe81;
  /* 10d1fe4e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d1fe51 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1fe54 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10d1fe57 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1fe58 call 0x10d15f00 */
  push32(0x10d1fe5du); f_10d15f00();
  /* 10d1fe5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1fe60 mov esi, eax */
  ESI = (EAX);
  /* 10d1fe62 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d1fe65 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1fe68 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 10d1fe6c push ecx */
  push32((uint32_t)(ECX));
  /* 10d1fe6d call 0x10d15f00 */
  push32(0x10d1fe72u); f_10d15f00();
  /* 10d1fe72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1fe75 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1fe78 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10d1fe7c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10d1fe7f jmp 0x10d1fe3f */
  goto L_10d1fe3f;
L_10d1fe81:;
  /* 10d1fe81 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1fe84 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1fe87 push eax */
  push32((uint32_t)(EAX));
  /* 10d1fe88 call 0x10d130b0 */
  push32(0x10d1fe8du); f_10d130b0();
  /* 10d1fe8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1fe90 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d1fe93 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1fe97 je 0x10d1ff39 */
  if (C.zf) goto L_10d1ff39;
  /* 10d1fe9d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1fea0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10d1fea3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10d1feaa jmp 0x10d1feb5 */
  goto L_10d1feb5;
L_10d1feac:;
  /* 10d1feac mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d1feaf add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1feb2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10d1feb5:;
  /* 10d1feb5 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1feb9 jae 0x10d1ff2a */
  if (!C.cf) goto L_10d1ff2a;
  /* 10d1febb mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d1febe mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10d1fec1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d1fec4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1fec7 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10d1feca mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d1fecd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1fed0 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10d1fed3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1fed4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d1fed7 push edx */
  push32((uint32_t)(EDX));
  /* 10d1fed8 call 0x10d16080 */
  push32(0x10d1feddu); f_10d16080();
  /* 10d1fedd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1fee0 push eax */
  push32((uint32_t)(EAX));
  /* 10d1fee1 call 0x10d15f00 */
  push32(0x10d1fee6u); f_10d15f00();
  /* 10d1fee6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1fee9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d1feec add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1feee mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10d1fef1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d1fef4 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10d1fef7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d1fefa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1fefd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10d1ff00 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d1ff03 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1ff06 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 10d1ff0a push eax */
  push32((uint32_t)(EAX));
  /* 10d1ff0b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d1ff0e push ecx */
  push32((uint32_t)(ECX));
  /* 10d1ff0f call 0x10d16080 */
  push32(0x10d1ff14u); f_10d16080();
  /* 10d1ff14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1ff17 push eax */
  push32((uint32_t)(EAX));
  /* 10d1ff18 call 0x10d15f00 */
  push32(0x10d1ff1du); f_10d15f00();
  /* 10d1ff1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1ff20 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d1ff23 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1ff25 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10d1ff28 jmp 0x10d1feac */
  goto L_10d1feac;
L_10d1ff2a:;
  /* 10d1ff2a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d1ff2d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10d1ff30 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d1ff33 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1ff36 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10d1ff39:;
  /* 10d1ff39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1ff3c pop esi */
  ESI = (pop32());
  /* 10d1ff3d mov esp, ebp */
  ESP = (EBP);
  /* 10d1ff3f pop ebp */
  EBP = (pop32());
  /* 10d1ff40 ret  */
  ESPCHK(0x10d1fe20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ff50 @ 0x10d1ff50 (291 bytes, 97 insns) */
void f_10d1ff50(void) {
  FTRACE(0x10d1ff50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1ff50 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1ff51 mov ebp, esp */
  EBP = (ESP);
  /* 10d1ff53 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1ff56 push esi */
  push32((uint32_t)(ESI));
  /* 10d1ff57 mov eax, dword ptr [0x10d3dc98] */
  EAX = (r32((uint32_t)(0x10d3dc98)));
  /* 10d1ff5c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d1ff5f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10d1ff66 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10d1ff6d jmp 0x10d1ff78 */
  goto L_10d1ff78;
L_10d1ff6f:;
  /* 10d1ff6f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d1ff72 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1ff75 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10d1ff78:;
  /* 10d1ff78 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1ff7c jae 0x10d1ffb2 */
  if (!C.cf) goto L_10d1ffb2;
  /* 10d1ff7e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d1ff81 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1ff84 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10d1ff88 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1ff89 call 0x10d15f00 */
  push32(0x10d1ff8eu); f_10d15f00();
  /* 10d1ff8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1ff91 mov esi, eax */
  ESI = (EAX);
  /* 10d1ff93 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d1ff96 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1ff99 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 10d1ff9d push ecx */
  push32((uint32_t)(ECX));
  /* 10d1ff9e call 0x10d15f00 */
  push32(0x10d1ffa3u); f_10d15f00();
  /* 10d1ffa3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1ffa6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1ffa9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10d1ffad mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10d1ffb0 jmp 0x10d1ff6f */
  goto L_10d1ff6f;
L_10d1ffb2:;
  /* 10d1ffb2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1ffb5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1ffb8 push eax */
  push32((uint32_t)(EAX));
  /* 10d1ffb9 call 0x10d130b0 */
  push32(0x10d1ffbeu); f_10d130b0();
  /* 10d1ffbe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1ffc1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d1ffc4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1ffc8 je 0x10d2006b */
  if (C.zf) goto L_10d2006b;
  /* 10d1ffce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1ffd1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10d1ffd4 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10d1ffdb jmp 0x10d1ffe6 */
  goto L_10d1ffe6;
L_10d1ffdd:;
  /* 10d1ffdd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d1ffe0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1ffe3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10d1ffe6:;
  /* 10d1ffe6 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1ffea jae 0x10d2005c */
  if (!C.cf) goto L_10d2005c;
  /* 10d1ffec mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d1ffef mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10d1fff2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d1fff5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1fff8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10d1fffb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d1fffe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d20001 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10d20005 push ecx */
  push32((uint32_t)(ECX));
  /* 10d20006 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d20009 push edx */
  push32((uint32_t)(EDX));
  /* 10d2000a call 0x10d16080 */
  push32(0x10d2000fu); f_10d16080();
  /* 10d2000f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20012 push eax */
  push32((uint32_t)(EAX));
  /* 10d20013 call 0x10d15f00 */
  push32(0x10d20018u); f_10d15f00();
  /* 10d20018 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d2001b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d2001e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20020 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10d20023 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d20026 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10d20029 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d2002c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d2002f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10d20032 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d20035 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d20038 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10d2003c push eax */
  push32((uint32_t)(EAX));
  /* 10d2003d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d20040 push ecx */
  push32((uint32_t)(ECX));
  /* 10d20041 call 0x10d16080 */
  push32(0x10d20046u); f_10d16080();
  /* 10d20046 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20049 push eax */
  push32((uint32_t)(EAX));
  /* 10d2004a call 0x10d15f00 */
  push32(0x10d2004fu); f_10d15f00();
  /* 10d2004f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20052 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d20055 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20057 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10d2005a jmp 0x10d1ffdd */
  goto L_10d1ffdd;
L_10d2005c:;
  /* 10d2005c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d2005f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10d20062 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d20065 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20068 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10d2006b:;
  /* 10d2006b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d2006e pop esi */
  ESI = (pop32());
  /* 10d2006f mov esp, ebp */
  ESP = (EBP);
  /* 10d20071 pop ebp */
  EBP = (pop32());
  /* 10d20072 ret  */
  ESPCHK(0x10d1ff50u, _esp0);
  ESP += 4; return;
}

/* FUN_10010080 @ 0x10d20080 (878 bytes, 273 insns) */
void f_10d20080(void) {
  FTRACE(0x10d20080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d20080 push ebp */
  push32((uint32_t)(EBP));
  /* 10d20081 mov ebp, esp */
  EBP = (ESP);
  /* 10d20083 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d20086 push esi */
  push32((uint32_t)(ESI));
  /* 10d20087 mov eax, dword ptr [0x10d3dc98] */
  EAX = (r32((uint32_t)(0x10d3dc98)));
  /* 10d2008c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d2008f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10d20096 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10d2009d jmp 0x10d200a8 */
  goto L_10d200a8;
L_10d2009f:;
  /* 10d2009f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d200a2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d200a5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10d200a8:;
  /* 10d200a8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d200ac jae 0x10d200e1 */
  if (!C.cf) goto L_10d200e1;
  /* 10d200ae mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d200b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d200b4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10d200b7 push ecx */
  push32((uint32_t)(ECX));
  /* 10d200b8 call 0x10d15f00 */
  push32(0x10d200bdu); f_10d15f00();
  /* 10d200bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d200c0 mov esi, eax */
  ESI = (EAX);
  /* 10d200c2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d200c5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d200c8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 10d200cc push ecx */
  push32((uint32_t)(ECX));
  /* 10d200cd call 0x10d15f00 */
  push32(0x10d200d2u); f_10d15f00();
  /* 10d200d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d200d5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d200d8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10d200dc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10d200df jmp 0x10d2009f */
  goto L_10d2009f;
L_10d200e1:;
  /* 10d200e1 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10d200e8 jmp 0x10d200f3 */
  goto L_10d200f3;
L_10d200ea:;
  /* 10d200ea mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d200ed add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d200f0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10d200f3:;
  /* 10d200f3 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d200f7 jae 0x10d2012d */
  if (!C.cf) goto L_10d2012d;
  /* 10d200f9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d200fc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d200ff mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10d20103 push eax */
  push32((uint32_t)(EAX));
  /* 10d20104 call 0x10d15f00 */
  push32(0x10d20109u); f_10d15f00();
  /* 10d20109 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d2010c mov esi, eax */
  ESI = (EAX);
  /* 10d2010e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d20111 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d20114 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10d20118 push eax */
  push32((uint32_t)(EAX));
  /* 10d20119 call 0x10d15f00 */
  push32(0x10d2011eu); f_10d15f00();
  /* 10d2011e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20121 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20124 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10d20128 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d2012b jmp 0x10d200ea */
  goto L_10d200ea;
L_10d2012d:;
  /* 10d2012d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d20130 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10d20136 push eax */
  push32((uint32_t)(EAX));
  /* 10d20137 call 0x10d15f00 */
  push32(0x10d2013cu); f_10d15f00();
  /* 10d2013c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d2013f mov esi, eax */
  ESI = (EAX);
  /* 10d20141 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d20144 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 10d2014a push edx */
  push32((uint32_t)(EDX));
  /* 10d2014b call 0x10d15f00 */
  push32(0x10d20150u); f_10d15f00();
  /* 10d20150 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20153 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20156 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10d2015a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d2015d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d20160 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10d20166 push edx */
  push32((uint32_t)(EDX));
  /* 10d20167 call 0x10d15f00 */
  push32(0x10d2016cu); f_10d15f00();
  /* 10d2016c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d2016f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d20172 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10d20176 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10d20179 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d2017c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 10d20182 push ecx */
  push32((uint32_t)(ECX));
  /* 10d20183 call 0x10d15f00 */
  push32(0x10d20188u); f_10d15f00();
  /* 10d20188 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d2018b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d2018e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10d20192 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d20195 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d20198 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 10d2019e push edx */
  push32((uint32_t)(EDX));
  /* 10d2019f call 0x10d15f00 */
  push32(0x10d201a4u); f_10d15f00();
  /* 10d201a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d201a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d201aa lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10d201ae mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10d201b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d201b4 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d201b9 push eax */
  push32((uint32_t)(EAX));
  /* 10d201ba call 0x10d130b0 */
  push32(0x10d201bfu); f_10d130b0();
  /* 10d201bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d201c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d201c5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d201c9 je 0x10d203e6 */
  if (C.zf) goto L_10d203e6;
  /* 10d201cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d201d2 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10d201d5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d201d8 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d201de mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10d201e1 push 0xac */
  push32((uint32_t)(0xacu));
  /* 10d201e6 mov eax, dword ptr [0x10d3dc98] */
  EAX = (r32((uint32_t)(0x10d3dc98)));
  /* 10d201eb push eax */
  push32((uint32_t)(EAX));
  /* 10d201ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d201ef push ecx */
  push32((uint32_t)(ECX));
  /* 10d201f0 call 0x10d199b0 */
  push32(0x10d201f5u); f_10d199b0();
  /* 10d201f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d201f8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10d201ff jmp 0x10d2020a */
  goto L_10d2020a;
L_10d20201:;
  /* 10d20201 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d20204 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20207 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10d2020a:;
  /* 10d2020a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d2020e jae 0x10d2027e */
  if (!C.cf) goto L_10d2027e;
  /* 10d20210 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d20213 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d20216 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d20219 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10d2021c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d2021f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d20222 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10d20225 push edx */
  push32((uint32_t)(EDX));
  /* 10d20226 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d20229 push eax */
  push32((uint32_t)(EAX));
  /* 10d2022a call 0x10d16080 */
  push32(0x10d2022fu); f_10d16080();
  /* 10d2022f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20232 push eax */
  push32((uint32_t)(EAX));
  /* 10d20233 call 0x10d15f00 */
  push32(0x10d20238u); f_10d15f00();
  /* 10d20238 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d2023b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d2023e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10d20242 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10d20245 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d20248 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d2024b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d2024e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 10d20252 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d20255 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d20258 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 10d2025c push edx */
  push32((uint32_t)(EDX));
  /* 10d2025d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d20260 push eax */
  push32((uint32_t)(EAX));
  /* 10d20261 call 0x10d16080 */
  push32(0x10d20266u); f_10d16080();
  /* 10d20266 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20269 push eax */
  push32((uint32_t)(EAX));
  /* 10d2026a call 0x10d15f00 */
  push32(0x10d2026fu); f_10d15f00();
  /* 10d2026f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20272 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d20275 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10d20279 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10d2027c jmp 0x10d20201 */
  goto L_10d20201;
L_10d2027e:;
  /* 10d2027e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10d20285 jmp 0x10d20290 */
  goto L_10d20290;
L_10d20287:;
  /* 10d20287 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d2028a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d2028d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10d20290:;
  /* 10d20290 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d20294 jae 0x10d20306 */
  if (!C.cf) goto L_10d20306;
  /* 10d20296 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d20299 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d2029c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d2029f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 10d202a3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d202a6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d202a9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10d202ad push eax */
  push32((uint32_t)(EAX));
  /* 10d202ae mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d202b1 push ecx */
  push32((uint32_t)(ECX));
  /* 10d202b2 call 0x10d16080 */
  push32(0x10d202b7u); f_10d16080();
  /* 10d202b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d202ba push eax */
  push32((uint32_t)(EAX));
  /* 10d202bb call 0x10d15f00 */
  push32(0x10d202c0u); f_10d15f00();
  /* 10d202c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d202c3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d202c6 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10d202ca mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10d202cd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d202d0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d202d3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d202d6 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 10d202da mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d202dd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d202e0 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10d202e4 push eax */
  push32((uint32_t)(EAX));
  /* 10d202e5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d202e8 push ecx */
  push32((uint32_t)(ECX));
  /* 10d202e9 call 0x10d16080 */
  push32(0x10d202eeu); f_10d16080();
  /* 10d202ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d202f1 push eax */
  push32((uint32_t)(EAX));
  /* 10d202f2 call 0x10d15f00 */
  push32(0x10d202f7u); f_10d15f00();
  /* 10d202f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d202fa mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d202fd lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10d20301 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10d20304 jmp 0x10d20287 */
  goto L_10d20287;
L_10d20306:;
  /* 10d20306 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d20309 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d2030c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 10d20312 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d20315 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 10d2031b push ecx */
  push32((uint32_t)(ECX));
  /* 10d2031c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d2031f push edx */
  push32((uint32_t)(EDX));
  /* 10d20320 call 0x10d16080 */
  push32(0x10d20325u); f_10d16080();
  /* 10d20325 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20328 push eax */
  push32((uint32_t)(EAX));
  /* 10d20329 call 0x10d15f00 */
  push32(0x10d2032eu); f_10d15f00();
  /* 10d2032e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20331 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d20334 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10d20338 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10d2033b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d2033e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d20341 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 10d20347 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d2034a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10d20350 push eax */
  push32((uint32_t)(EAX));
  /* 10d20351 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d20354 push ecx */
  push32((uint32_t)(ECX));
  /* 10d20355 call 0x10d16080 */
  push32(0x10d2035au); f_10d16080();
  /* 10d2035a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d2035d push eax */
  push32((uint32_t)(EAX));
  /* 10d2035e call 0x10d15f00 */
  push32(0x10d20363u); f_10d15f00();
  /* 10d20363 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20366 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d20369 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10d2036d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10d20370 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d20373 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d20376 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 10d2037c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d2037f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 10d20385 push ecx */
  push32((uint32_t)(ECX));
  /* 10d20386 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d20389 push edx */
  push32((uint32_t)(EDX));
  /* 10d2038a call 0x10d16080 */
  push32(0x10d2038fu); f_10d16080();
  /* 10d2038f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20392 push eax */
  push32((uint32_t)(EAX));
  /* 10d20393 call 0x10d15f00 */
  push32(0x10d20398u); f_10d15f00();
  /* 10d20398 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d2039b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d2039e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10d203a2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10d203a5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d203a8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d203ab mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 10d203b1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d203b4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 10d203ba push eax */
  push32((uint32_t)(EAX));
  /* 10d203bb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d203be push ecx */
  push32((uint32_t)(ECX));
  /* 10d203bf call 0x10d16080 */
  push32(0x10d203c4u); f_10d16080();
  /* 10d203c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d203c7 push eax */
  push32((uint32_t)(EAX));
  /* 10d203c8 call 0x10d15f00 */
  push32(0x10d203cdu); f_10d15f00();
  /* 10d203cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d203d0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d203d3 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10d203d7 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10d203da mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d203dd mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d203e0 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_10d203e6:;
  /* 10d203e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d203e9 pop esi */
  ESI = (pop32());
  /* 10d203ea mov esp, ebp */
  ESP = (EBP);
  /* 10d203ec pop ebp */
  EBP = (pop32());
  /* 10d203ed ret  */
  ESPCHK(0x10d20080u, _esp0);
  ESP += 4; return;
}

/* FUN_100103f0 @ 0x10d203f0 (31 bytes, 15 insns) */
void f_10d203f0(void) {
  FTRACE(0x10d203f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d203f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d203f1 mov ebp, esp */
  EBP = (ESP);
  /* 10d203f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d203f5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d203f8 push eax */
  push32((uint32_t)(EAX));
  /* 10d203f9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d203fc push ecx */
  push32((uint32_t)(ECX));
  /* 10d203fd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d20400 push edx */
  push32((uint32_t)(EDX));
  /* 10d20401 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d20404 push eax */
  push32((uint32_t)(EAX));
  /* 10d20405 call 0x10d20410 */
  push32(0x10d2040au); f_10d20410();
  /* 10d2040a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d2040d pop ebp */
  EBP = (pop32());
  /* 10d2040e ret  */
  ESPCHK(0x10d203f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010410 @ 0x10d20410 (393 bytes, 123 insns) */
void f_10d20410(void) {
  FTRACE(0x10d20410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d20410 push ebp */
  push32((uint32_t)(EBP));
  /* 10d20411 mov ebp, esp */
  EBP = (ESP);
  /* 10d20413 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d20416 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d2041a jne 0x10d20426 */
  if (!C.zf) goto L_10d20426;
  /* 10d2041c mov eax, dword ptr [0x10d3dc98] */
  EAX = (r32((uint32_t)(0x10d3dc98)));
  /* 10d20421 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10d20424 jmp 0x10d2042c */
  goto L_10d2042c;
L_10d20426:;
  /* 10d20426 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d20429 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10d2042c:;
  /* 10d2042c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d2042f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d20432 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d20435 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d20438 push 0x10d3e7ac */
  push32((uint32_t)(0x10d3e7acu));
  /* 10d2043d call dword ptr [0x10d402a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402a4))), 0x10d20443u);
  /* 10d20443 cmp dword ptr [0x10d3e79c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e79c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d2044a je 0x10d2046a */
  if (C.zf) goto L_10d2046a;
  /* 10d2044c push 0x10d3e7ac */
  push32((uint32_t)(0x10d3e7acu));
  /* 10d20451 call dword ptr [0x10d40294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40294))), 0x10d20457u);
  /* 10d20457 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10d20459 call 0x10d16ad0 */
  push32(0x10d2045eu); f_10d16ad0();
  /* 10d2045e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20461 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10d20468 jmp 0x10d20471 */
  goto L_10d20471;
L_10d2046a:;
  /* 10d2046a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10d20471:;
  /* 10d20471 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d20475 jbe 0x10d20562 */
  if ((C.cf||C.zf)) goto L_10d20562;
  /* 10d2047b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d2047e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d20480 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 10d20483 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d20487 je 0x10d20491 */
  if (C.zf) goto L_10d20491;
  /* 10d20489 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d2048d je 0x10d20496 */
  if (C.zf) goto L_10d20496;
  /* 10d2048f jmp 0x10d204f0 */
  goto L_10d204f0;
L_10d20491:;
  /* 10d20491 jmp 0x10d20562 */
  goto L_10d20562;
L_10d20496:;
  /* 10d20496 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d20499 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d2049c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10d2049f mov dword ptr [0x10d3e788], 0 */
  w32((uint32_t)(0x10d3e788), (0x0u));
  /* 10d204a9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d204ac movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d204af cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d204b2 jne 0x10d204c7 */
  if (!C.zf) goto L_10d204c7;
  /* 10d204b4 mov dword ptr [0x10d3e788], 1 */
  w32((uint32_t)(0x10d3e788), (0x1u));
  /* 10d204be mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d204c1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d204c4 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10d204c7:;
  /* 10d204c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d204ca push ecx */
  push32((uint32_t)(ECX));
  /* 10d204cb lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10d204ce push edx */
  push32((uint32_t)(EDX));
  /* 10d204cf lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10d204d2 push eax */
  push32((uint32_t)(EAX));
  /* 10d204d3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d204d6 push ecx */
  push32((uint32_t)(ECX));
  /* 10d204d7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d204da mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d204dc push eax */
  push32((uint32_t)(EAX));
  /* 10d204dd call 0x10d205a0 */
  push32(0x10d204e2u); f_10d205a0();
  /* 10d204e2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d204e5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d204e8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d204eb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10d204ee jmp 0x10d2055d */
  goto L_10d2055d;
L_10d204f0:;
  /* 10d204f0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d204f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d204f5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d204f7 mov ecx, dword ptr [0x10d3cc98] */
  ECX = (r32((uint32_t)(0x10d3cc98)));
  /* 10d204fd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d204ff mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10d20503 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10d20509 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d2050b je 0x10d20538 */
  if (C.zf) goto L_10d20538;
  /* 10d2050d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d20511 jbe 0x10d20538 */
  if ((C.cf||C.zf)) goto L_10d20538;
  /* 10d20513 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d20516 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d20519 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d2051b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10d2051d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d20520 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20523 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10d20526 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d20529 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d2052c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10d2052f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d20532 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d20535 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10d20538:;
  /* 10d20538 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d2053b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d2053e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d20540 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10d20542 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d20545 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20548 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10d2054b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d2054e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20551 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10d20554 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d20557 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d2055a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10d2055d:;
  /* 10d2055d jmp 0x10d20471 */
  goto L_10d20471;
L_10d20562:;
  /* 10d20562 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d20566 je 0x10d20574 */
  if (C.zf) goto L_10d20574;
  /* 10d20568 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10d2056a call 0x10d16b70 */
  push32(0x10d2056fu); f_10d16b70();
  /* 10d2056f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20572 jmp 0x10d2057f */
  goto L_10d2057f;
L_10d20574:;
  /* 10d20574 push 0x10d3e7ac */
  push32((uint32_t)(0x10d3e7acu));
  /* 10d20579 call dword ptr [0x10d40294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40294))), 0x10d2057fu);
L_10d2057f:;
  /* 10d2057f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d20583 jbe 0x10d20593 */
  if ((C.cf||C.zf)) goto L_10d20593;
  /* 10d20585 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d20588 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10d2058b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d2058e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d20591 jmp 0x10d20595 */
  goto L_10d20595;
L_10d20593:;
  /* 10d20593 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d20595:;
  /* 10d20595 mov esp, ebp */
  ESP = (EBP);
  /* 10d20597 pop ebp */
  EBP = (pop32());
  /* 10d20598 ret  */
  ESPCHK(0x10d20410u, _esp0);
  ESP += 4; return;
}

/* FUN_100105a0 @ 0x10d205a0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_10d205a0(void) {
  FTRACE(0x10d205a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d205a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d205a1 mov ebp, esp */
  EBP = (ESP);
  /* 10d205a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d205a6 push esi */
  push32((uint32_t)(ESI));
  /* 10d205a7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 10d205ab mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d205ae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d205b1 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d205b4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d205b7 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d205bb ja 0x10d20b08 */
  if ((!C.cf&&!C.zf)) goto L_10d20b08;
  /* 10d205c1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d205c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d205c6 mov dl, byte ptr [eax + 0x10d20b69] */
  DL = (r8((uint32_t)(EAX + 0x10d20b69)));
  /* 10d205cc jmp dword ptr [edx*4 + 0x10d20b0d] */
  switch (EDX) {
    case 0: goto L_10d20ae6;
    case 1: goto L_10d205f5;
    case 2: goto L_10d2063b;
    case 3: goto L_10d20788;
    case 4: goto L_10d207b0;
    case 5: goto L_10d2084f;
    case 6: goto L_10d208bb;
    case 7: goto L_10d208e4;
    case 8: goto L_10d20925;
    case 9: goto L_10d20a07;
    case 10: goto L_10d20a6e;
    case 11: goto L_10d20abb;
    case 12: goto L_10d205d3;
    case 13: goto L_10d20618;
    case 14: goto L_10d2065e;
    case 15: goto L_10d2075e;
    case 16: goto L_10d207f5;
    case 17: goto L_10d20822;
    case 18: goto L_10d20877;
    case 19: goto L_10d208fb;
    case 20: goto L_10d209a9;
    case 21: goto L_10d20a38;
    case 22: goto L_10d20b08;
    default: x86_unimpl("switch@0x10d205cc out of table"); return;
  }
L_10d205d3:;
  /* 10d205d3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d205d6 push ecx */
  push32((uint32_t)(ECX));
  /* 10d205d7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d205da push edx */
  push32((uint32_t)(EDX));
  /* 10d205db mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d205de mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10d205e1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d205e4 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10d205e7 push eax */
  push32((uint32_t)(EAX));
  /* 10d205e8 call 0x10d20bc0 */
  push32(0x10d205edu); f_10d20bc0();
  /* 10d205ed add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d205f0 jmp 0x10d20b08 */
  goto L_10d20b08;
L_10d205f5:;
  /* 10d205f5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d205f8 push ecx */
  push32((uint32_t)(ECX));
  /* 10d205f9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d205fc push edx */
  push32((uint32_t)(EDX));
  /* 10d205fd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d20600 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10d20603 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d20606 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 10d2060a push eax */
  push32((uint32_t)(EAX));
  /* 10d2060b call 0x10d20bc0 */
  push32(0x10d20610u); f_10d20bc0();
  /* 10d20610 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20613 jmp 0x10d20b08 */
  goto L_10d20b08;
L_10d20618:;
  /* 10d20618 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d2061b push ecx */
  push32((uint32_t)(ECX));
  /* 10d2061c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d2061f push edx */
  push32((uint32_t)(EDX));
  /* 10d20620 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d20623 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d20626 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d20629 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10d2062d push eax */
  push32((uint32_t)(EAX));
  /* 10d2062e call 0x10d20bc0 */
  push32(0x10d20633u); f_10d20bc0();
  /* 10d20633 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20636 jmp 0x10d20b08 */
  goto L_10d20b08;
L_10d2063b:;
  /* 10d2063b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d2063e push ecx */
  push32((uint32_t)(ECX));
  /* 10d2063f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d20642 push edx */
  push32((uint32_t)(EDX));
  /* 10d20643 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d20646 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d20649 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d2064c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10d20650 push eax */
  push32((uint32_t)(EAX));
  /* 10d20651 call 0x10d20bc0 */
  push32(0x10d20656u); f_10d20bc0();
  /* 10d20656 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20659 jmp 0x10d20b08 */
  goto L_10d20b08;
L_10d2065e:;
  /* 10d2065e cmp dword ptr [0x10d3e788], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e788))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d20665 je 0x10d206e6 */
  if (C.zf) goto L_10d206e6;
  /* 10d20667 mov dword ptr [0x10d3e788], 0 */
  w32((uint32_t)(0x10d3e788), (0x0u));
  /* 10d20671 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d20674 push ecx */
  push32((uint32_t)(ECX));
  /* 10d20675 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d20678 push edx */
  push32((uint32_t)(EDX));
  /* 10d20679 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d2067c push eax */
  push32((uint32_t)(EAX));
  /* 10d2067d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d20680 push ecx */
  push32((uint32_t)(ECX));
  /* 10d20681 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d20684 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 10d2068a push eax */
  push32((uint32_t)(EAX));
  /* 10d2068b call 0x10d20d70 */
  push32(0x10d20690u); f_10d20d70();
  /* 10d20690 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20693 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d20696 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d20699 jne 0x10d206a0 */
  if (!C.zf) goto L_10d206a0;
  /* 10d2069b jmp 0x10d20b08 */
  goto L_10d20b08;
L_10d206a0:;
  /* 10d206a0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d206a3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d206a5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 10d206a8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d206ab mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d206ad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d206b0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d206b3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10d206b5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d206b8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d206ba sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d206bd mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d206c0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10d206c2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d206c5 push ecx */
  push32((uint32_t)(ECX));
  /* 10d206c6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d206c9 push edx */
  push32((uint32_t)(EDX));
  /* 10d206ca mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d206cd push eax */
  push32((uint32_t)(EAX));
  /* 10d206ce mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d206d1 push ecx */
  push32((uint32_t)(ECX));
  /* 10d206d2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d206d5 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10d206db push eax */
  push32((uint32_t)(EAX));
  /* 10d206dc call 0x10d20d70 */
  push32(0x10d206e1u); f_10d20d70();
  /* 10d206e1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d206e4 jmp 0x10d20759 */
  goto L_10d20759;
L_10d206e6:;
  /* 10d206e6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d206e9 push ecx */
  push32((uint32_t)(ECX));
  /* 10d206ea mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d206ed push edx */
  push32((uint32_t)(EDX));
  /* 10d206ee mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d206f1 push eax */
  push32((uint32_t)(EAX));
  /* 10d206f2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d206f5 push ecx */
  push32((uint32_t)(ECX));
  /* 10d206f6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d206f9 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 10d206ff push eax */
  push32((uint32_t)(EAX));
  /* 10d20700 call 0x10d20d70 */
  push32(0x10d20705u); f_10d20d70();
  /* 10d20705 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20708 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d2070b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d2070e jne 0x10d20715 */
  if (!C.zf) goto L_10d20715;
  /* 10d20710 jmp 0x10d20b08 */
  goto L_10d20b08;
L_10d20715:;
  /* 10d20715 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d20718 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d2071a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 10d2071d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d20720 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d20722 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20725 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d20728 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10d2072a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d2072d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d2072f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d20732 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d20735 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10d20737 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d2073a push ecx */
  push32((uint32_t)(ECX));
  /* 10d2073b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d2073e push edx */
  push32((uint32_t)(EDX));
  /* 10d2073f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d20742 push eax */
  push32((uint32_t)(EAX));
  /* 10d20743 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d20746 push ecx */
  push32((uint32_t)(ECX));
  /* 10d20747 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d2074a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10d20750 push eax */
  push32((uint32_t)(EAX));
  /* 10d20751 call 0x10d20d70 */
  push32(0x10d20756u); f_10d20d70();
  /* 10d20756 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d20759:;
  /* 10d20759 jmp 0x10d20b08 */
  goto L_10d20b08;
L_10d2075e:;
  /* 10d2075e mov ecx, dword ptr [0x10d3e788] */
  ECX = (r32((uint32_t)(0x10d3e788)));
  /* 10d20764 mov dword ptr [0x10d3e798], ecx */
  w32((uint32_t)(0x10d3e798), (ECX));
  /* 10d2076a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d2076d push edx */
  push32((uint32_t)(EDX));
  /* 10d2076e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d20771 push eax */
  push32((uint32_t)(EAX));
  /* 10d20772 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d20774 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d20777 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d2077a push edx */
  push32((uint32_t)(EDX));
  /* 10d2077b call 0x10d20c10 */
  push32(0x10d20780u); f_10d20c10();
  /* 10d20780 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20783 jmp 0x10d20b08 */
  goto L_10d20b08;
L_10d20788:;
  /* 10d20788 mov eax, dword ptr [0x10d3e788] */
  EAX = (r32((uint32_t)(0x10d3e788)));
  /* 10d2078d mov dword ptr [0x10d3e798], eax */
  w32((uint32_t)(0x10d3e798), (EAX));
  /* 10d20792 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d20795 push ecx */
  push32((uint32_t)(ECX));
  /* 10d20796 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d20799 push edx */
  push32((uint32_t)(EDX));
  /* 10d2079a push 2 */
  push32((uint32_t)(0x2u));
  /* 10d2079c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d2079f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10d207a2 push ecx */
  push32((uint32_t)(ECX));
  /* 10d207a3 call 0x10d20c10 */
  push32(0x10d207a8u); f_10d20c10();
  /* 10d207a8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d207ab jmp 0x10d20b08 */
  goto L_10d20b08;
L_10d207b0:;
  /* 10d207b0 mov edx, dword ptr [0x10d3e788] */
  EDX = (r32((uint32_t)(0x10d3e788)));
  /* 10d207b6 mov dword ptr [0x10d3e798], edx */
  w32((uint32_t)(0x10d3e798), (EDX));
  /* 10d207bc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d207bf mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 10d207c2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10d207c3 mov ecx, 0xc */
  ECX = (0xcu);
  /* 10d207c8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10d207ca mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d207cd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d207d1 jne 0x10d207da */
  if (!C.zf) goto L_10d207da;
  /* 10d207d3 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_10d207da:;
  /* 10d207da mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d207dd push edx */
  push32((uint32_t)(EDX));
  /* 10d207de mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d207e1 push eax */
  push32((uint32_t)(EAX));
  /* 10d207e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d207e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d207e7 push ecx */
  push32((uint32_t)(ECX));
  /* 10d207e8 call 0x10d20c10 */
  push32(0x10d207edu); f_10d20c10();
  /* 10d207ed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d207f0 jmp 0x10d20b08 */
  goto L_10d20b08;
L_10d207f5:;
  /* 10d207f5 mov edx, dword ptr [0x10d3e788] */
  EDX = (r32((uint32_t)(0x10d3e788)));
  /* 10d207fb mov dword ptr [0x10d3e798], edx */
  w32((uint32_t)(0x10d3e798), (EDX));
  /* 10d20801 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d20804 push eax */
  push32((uint32_t)(EAX));
  /* 10d20805 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d20808 push ecx */
  push32((uint32_t)(ECX));
  /* 10d20809 push 3 */
  push32((uint32_t)(0x3u));
  /* 10d2080b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d2080e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10d20811 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20814 push eax */
  push32((uint32_t)(EAX));
  /* 10d20815 call 0x10d20c10 */
  push32(0x10d2081au); f_10d20c10();
  /* 10d2081a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d2081d jmp 0x10d20b08 */
  goto L_10d20b08;
L_10d20822:;
  /* 10d20822 mov ecx, dword ptr [0x10d3e788] */
  ECX = (r32((uint32_t)(0x10d3e788)));
  /* 10d20828 mov dword ptr [0x10d3e798], ecx */
  w32((uint32_t)(0x10d3e798), (ECX));
  /* 10d2082e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d20831 push edx */
  push32((uint32_t)(EDX));
  /* 10d20832 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d20835 push eax */
  push32((uint32_t)(EAX));
  /* 10d20836 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d20838 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d2083b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10d2083e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20841 push edx */
  push32((uint32_t)(EDX));
  /* 10d20842 call 0x10d20c10 */
  push32(0x10d20847u); f_10d20c10();
  /* 10d20847 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d2084a jmp 0x10d20b08 */
  goto L_10d20b08;
L_10d2084f:;
  /* 10d2084f mov eax, dword ptr [0x10d3e788] */
  EAX = (r32((uint32_t)(0x10d3e788)));
  /* 10d20854 mov dword ptr [0x10d3e798], eax */
  w32((uint32_t)(0x10d3e798), (EAX));
  /* 10d20859 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d2085c push ecx */
  push32((uint32_t)(ECX));
  /* 10d2085d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d20860 push edx */
  push32((uint32_t)(EDX));
  /* 10d20861 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d20863 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d20866 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d20869 push ecx */
  push32((uint32_t)(ECX));
  /* 10d2086a call 0x10d20c10 */
  push32(0x10d2086fu); f_10d20c10();
  /* 10d2086f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20872 jmp 0x10d20b08 */
  goto L_10d20b08;
L_10d20877:;
  /* 10d20877 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d2087a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d2087e jg 0x10d2089c */
  if ((!C.zf&&C.sf==C.of)) goto L_10d2089c;
  /* 10d20880 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d20883 push eax */
  push32((uint32_t)(EAX));
  /* 10d20884 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d20887 push ecx */
  push32((uint32_t)(ECX));
  /* 10d20888 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d2088b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10d20891 push eax */
  push32((uint32_t)(EAX));
  /* 10d20892 call 0x10d20bc0 */
  push32(0x10d20897u); f_10d20bc0();
  /* 10d20897 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d2089a jmp 0x10d208b6 */
  goto L_10d208b6;
L_10d2089c:;
  /* 10d2089c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d2089f push ecx */
  push32((uint32_t)(ECX));
  /* 10d208a0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d208a3 push edx */
  push32((uint32_t)(EDX));
  /* 10d208a4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d208a7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 10d208ad push ecx */
  push32((uint32_t)(ECX));
  /* 10d208ae call 0x10d20bc0 */
  push32(0x10d208b3u); f_10d20bc0();
  /* 10d208b3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d208b6:;
  /* 10d208b6 jmp 0x10d20b08 */
  goto L_10d20b08;
L_10d208bb:;
  /* 10d208bb mov edx, dword ptr [0x10d3e788] */
  EDX = (r32((uint32_t)(0x10d3e788)));
  /* 10d208c1 mov dword ptr [0x10d3e798], edx */
  w32((uint32_t)(0x10d3e798), (EDX));
  /* 10d208c7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d208ca push eax */
  push32((uint32_t)(EAX));
  /* 10d208cb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d208ce push ecx */
  push32((uint32_t)(ECX));
  /* 10d208cf push 2 */
  push32((uint32_t)(0x2u));
  /* 10d208d1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d208d4 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d208d6 push eax */
  push32((uint32_t)(EAX));
  /* 10d208d7 call 0x10d20c10 */
  push32(0x10d208dcu); f_10d20c10();
  /* 10d208dc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d208df jmp 0x10d20b08 */
  goto L_10d20b08;
L_10d208e4:;
  /* 10d208e4 mov ecx, dword ptr [0x10d3e788] */
  ECX = (r32((uint32_t)(0x10d3e788)));
  /* 10d208ea mov dword ptr [0x10d3e798], ecx */
  w32((uint32_t)(0x10d3e798), (ECX));
  /* 10d208f0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d208f3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10d208f6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d208f9 jmp 0x10d2094d */
  goto L_10d2094d;
L_10d208fb:;
  /* 10d208fb mov ecx, dword ptr [0x10d3e788] */
  ECX = (r32((uint32_t)(0x10d3e788)));
  /* 10d20901 mov dword ptr [0x10d3e798], ecx */
  w32((uint32_t)(0x10d3e798), (ECX));
  /* 10d20907 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d2090a push edx */
  push32((uint32_t)(EDX));
  /* 10d2090b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d2090e push eax */
  push32((uint32_t)(EAX));
  /* 10d2090f push 1 */
  push32((uint32_t)(0x1u));
  /* 10d20911 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d20914 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10d20917 push edx */
  push32((uint32_t)(EDX));
  /* 10d20918 call 0x10d20c10 */
  push32(0x10d2091du); f_10d20c10();
  /* 10d2091d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20920 jmp 0x10d20b08 */
  goto L_10d20b08;
L_10d20925:;
  /* 10d20925 mov eax, dword ptr [0x10d3e788] */
  EAX = (r32((uint32_t)(0x10d3e788)));
  /* 10d2092a mov dword ptr [0x10d3e798], eax */
  w32((uint32_t)(0x10d3e798), (EAX));
  /* 10d2092f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d20932 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d20936 jne 0x10d20941 */
  if (!C.zf) goto L_10d20941;
  /* 10d20938 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 10d2093f jmp 0x10d2094d */
  goto L_10d2094d;
L_10d20941:;
  /* 10d20941 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d20944 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10d20947 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d2094a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10d2094d:;
  /* 10d2094d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d20950 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10d20953 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d20956 jge 0x10d20961 */
  if ((C.sf==C.of)) goto L_10d20961;
  /* 10d20958 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d2095f jmp 0x10d2098e */
  goto L_10d2098e;
L_10d20961:;
  /* 10d20961 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d20964 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10d20967 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10d20968 mov ecx, 7 */
  ECX = (0x7u);
  /* 10d2096d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10d2096f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d20972 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d20975 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10d20978 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10d20979 mov ecx, 7 */
  ECX = (0x7u);
  /* 10d2097e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10d20980 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d20983 jl 0x10d2098e */
  if ((C.sf!=C.of)) goto L_10d2098e;
  /* 10d20985 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d20988 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d2098b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10d2098e:;
  /* 10d2098e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d20991 push eax */
  push32((uint32_t)(EAX));
  /* 10d20992 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d20995 push ecx */
  push32((uint32_t)(ECX));
  /* 10d20996 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d20998 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d2099b push edx */
  push32((uint32_t)(EDX));
  /* 10d2099c call 0x10d20c10 */
  push32(0x10d209a1u); f_10d20c10();
  /* 10d209a1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d209a4 jmp 0x10d20b08 */
  goto L_10d20b08;
L_10d209a9:;
  /* 10d209a9 cmp dword ptr [0x10d3e788], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e788))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d209b0 je 0x10d209e0 */
  if (C.zf) goto L_10d209e0;
  /* 10d209b2 mov dword ptr [0x10d3e788], 0 */
  w32((uint32_t)(0x10d3e788), (0x0u));
  /* 10d209bc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d209bf push eax */
  push32((uint32_t)(EAX));
  /* 10d209c0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d209c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d209c4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d209c7 push edx */
  push32((uint32_t)(EDX));
  /* 10d209c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d209cb push eax */
  push32((uint32_t)(EAX));
  /* 10d209cc mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d209cf mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 10d209d5 push edx */
  push32((uint32_t)(EDX));
  /* 10d209d6 call 0x10d20d70 */
  push32(0x10d209dbu); f_10d20d70();
  /* 10d209db add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d209de jmp 0x10d20a02 */
  goto L_10d20a02;
L_10d209e0:;
  /* 10d209e0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d209e3 push eax */
  push32((uint32_t)(EAX));
  /* 10d209e4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d209e7 push ecx */
  push32((uint32_t)(ECX));
  /* 10d209e8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d209eb push edx */
  push32((uint32_t)(EDX));
  /* 10d209ec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d209ef push eax */
  push32((uint32_t)(EAX));
  /* 10d209f0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d209f3 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10d209f9 push edx */
  push32((uint32_t)(EDX));
  /* 10d209fa call 0x10d20d70 */
  push32(0x10d209ffu); f_10d20d70();
  /* 10d209ff add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d20a02:;
  /* 10d20a02 jmp 0x10d20b08 */
  goto L_10d20b08;
L_10d20a07:;
  /* 10d20a07 mov dword ptr [0x10d3e788], 0 */
  w32((uint32_t)(0x10d3e788), (0x0u));
  /* 10d20a11 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d20a14 push eax */
  push32((uint32_t)(EAX));
  /* 10d20a15 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d20a18 push ecx */
  push32((uint32_t)(ECX));
  /* 10d20a19 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d20a1c push edx */
  push32((uint32_t)(EDX));
  /* 10d20a1d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d20a20 push eax */
  push32((uint32_t)(EAX));
  /* 10d20a21 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d20a24 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 10d20a2a push edx */
  push32((uint32_t)(EDX));
  /* 10d20a2b call 0x10d20d70 */
  push32(0x10d20a30u); f_10d20d70();
  /* 10d20a30 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20a33 jmp 0x10d20b08 */
  goto L_10d20b08;
L_10d20a38:;
  /* 10d20a38 mov eax, dword ptr [0x10d3e788] */
  EAX = (r32((uint32_t)(0x10d3e788)));
  /* 10d20a3d mov dword ptr [0x10d3e798], eax */
  w32((uint32_t)(0x10d3e798), (EAX));
  /* 10d20a42 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d20a45 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10d20a48 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10d20a49 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10d20a4e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10d20a50 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d20a53 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d20a56 push edx */
  push32((uint32_t)(EDX));
  /* 10d20a57 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d20a5a push eax */
  push32((uint32_t)(EAX));
  /* 10d20a5b push 2 */
  push32((uint32_t)(0x2u));
  /* 10d20a5d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d20a60 push ecx */
  push32((uint32_t)(ECX));
  /* 10d20a61 call 0x10d20c10 */
  push32(0x10d20a66u); f_10d20c10();
  /* 10d20a66 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20a69 jmp 0x10d20b08 */
  goto L_10d20b08;
L_10d20a6e:;
  /* 10d20a6e mov edx, dword ptr [0x10d3e788] */
  EDX = (r32((uint32_t)(0x10d3e788)));
  /* 10d20a74 mov dword ptr [0x10d3e798], edx */
  w32((uint32_t)(0x10d3e798), (EDX));
  /* 10d20a7a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d20a7d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 10d20a80 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10d20a81 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10d20a86 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10d20a88 mov ecx, eax */
  ECX = (EAX);
  /* 10d20a8a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20a8d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d20a90 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d20a93 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d20a96 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10d20a97 mov esi, 0x64 */
  ESI = (0x64u);
  /* 10d20a9c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10d20a9e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20aa0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d20aa3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d20aa6 push eax */
  push32((uint32_t)(EAX));
  /* 10d20aa7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d20aaa push ecx */
  push32((uint32_t)(ECX));
  /* 10d20aab push 4 */
  push32((uint32_t)(0x4u));
  /* 10d20aad mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d20ab0 push edx */
  push32((uint32_t)(EDX));
  /* 10d20ab1 call 0x10d20c10 */
  push32(0x10d20ab6u); f_10d20c10();
  /* 10d20ab6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20ab9 jmp 0x10d20b08 */
  goto L_10d20b08;
L_10d20abb:;
  /* 10d20abb call 0x10d21bd0 */
  push32(0x10d20ac0u); f_10d21bd0();
  /* 10d20ac0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d20ac3 push eax */
  push32((uint32_t)(EAX));
  /* 10d20ac4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d20ac7 push ecx */
  push32((uint32_t)(ECX));
  /* 10d20ac8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d20acb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d20acd cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d20ad1 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 10d20ad4 mov ecx, dword ptr [eax*4 + 0x10d3de1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10d3de1c)));
  /* 10d20adb push ecx */
  push32((uint32_t)(ECX));
  /* 10d20adc call 0x10d20bc0 */
  push32(0x10d20ae1u); f_10d20bc0();
  /* 10d20ae1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20ae4 jmp 0x10d20b08 */
  goto L_10d20b08;
L_10d20ae6:;
  /* 10d20ae6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d20ae9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d20aeb mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 10d20aee mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d20af1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d20af3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20af6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d20af9 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10d20afb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d20afe mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d20b00 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d20b03 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d20b06 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10d20b08:;
  /* 10d20b08 pop esi */
  ESI = (pop32());
  /* 10d20b09 mov esp, ebp */
  ESP = (EBP);
  /* 10d20b0b pop ebp */
  EBP = (pop32());
  /* 10d20b0c ret  */
  ESPCHK(0x10d205a0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x10d20bc0 (72 bytes, 30 insns) */
void f_10d20bc0(void) {
  FTRACE(0x10d20bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d20bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d20bc1 mov ebp, esp */
  EBP = (ESP);
L_10d20bc3:;
  /* 10d20bc3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d20bc6 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d20bc9 je 0x10d20c06 */
  if (C.zf) goto L_10d20c06;
  /* 10d20bcb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d20bce movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d20bd1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d20bd3 je 0x10d20c06 */
  if (C.zf) goto L_10d20c06;
  /* 10d20bd5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d20bd8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d20bda mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d20bdd mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d20bdf mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10d20be1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d20be4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d20be6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20be9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d20bec mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10d20bee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d20bf1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20bf4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10d20bf7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d20bfa mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d20bfc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d20bff mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d20c02 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10d20c04 jmp 0x10d20bc3 */
  goto L_10d20bc3;
L_10d20c06:;
  /* 10d20c06 pop ebp */
  EBP = (pop32());
  /* 10d20c07 ret  */
  ESPCHK(0x10d20bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010c10 @ 0x10d20c10 (173 bytes, 64 insns) */
void f_10d20c10(void) {
  FTRACE(0x10d20c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d20c10 push ebp */
  push32((uint32_t)(EBP));
  /* 10d20c11 mov ebp, esp */
  EBP = (ESP);
  /* 10d20c13 push ecx */
  push32((uint32_t)(ECX));
  /* 10d20c14 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d20c1b cmp dword ptr [0x10d3e798], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e798))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d20c22 je 0x10d20c3a */
  if (C.zf) goto L_10d20c3a;
  /* 10d20c24 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d20c27 push eax */
  push32((uint32_t)(EAX));
  /* 10d20c28 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d20c2b push ecx */
  push32((uint32_t)(ECX));
  /* 10d20c2c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d20c2f push edx */
  push32((uint32_t)(EDX));
  /* 10d20c30 call 0x10d20cc0 */
  push32(0x10d20c35u); f_10d20cc0();
  /* 10d20c35 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20c38 jmp 0x10d20cb9 */
  goto L_10d20cb9;
L_10d20c3a:;
  /* 10d20c3a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d20c3d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d20c40 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d20c42 jae 0x10d20cb0 */
  if (!C.cf) goto L_10d20cb0;
  /* 10d20c44 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d20c47 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d20c4a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10d20c4d jmp 0x10d20c58 */
  goto L_10d20c58;
L_10d20c4f:;
  /* 10d20c4f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d20c52 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d20c55 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10d20c58:;
  /* 10d20c58 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d20c5b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20c5e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d20c60 je 0x10d20c94 */
  if (C.zf) goto L_10d20c94;
  /* 10d20c62 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d20c65 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10d20c66 mov ecx, 0xa */
  ECX = (0xau);
  /* 10d20c6b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10d20c6d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20c70 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d20c73 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d20c75 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d20c78 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 10d20c7b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d20c7e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10d20c7f mov ecx, 0xa */
  ECX = (0xau);
  /* 10d20c84 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10d20c86 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10d20c89 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d20c8c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20c8f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d20c92 jmp 0x10d20c4f */
  goto L_10d20c4f;
L_10d20c94:;
  /* 10d20c94 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d20c97 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d20c99 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20c9c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d20c9f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10d20ca1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d20ca4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d20ca6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d20ca9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d20cac mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10d20cae jmp 0x10d20cb9 */
  goto L_10d20cb9;
L_10d20cb0:;
  /* 10d20cb0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d20cb3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10d20cb9:;
  /* 10d20cb9 mov esp, ebp */
  ESP = (EBP);
  /* 10d20cbb pop ebp */
  EBP = (pop32());
  /* 10d20cbc ret  */
  ESPCHK(0x10d20c10u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x10d20cc0 (172 bytes, 65 insns) */
void f_10d20cc0(void) {
  FTRACE(0x10d20cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d20cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d20cc1 mov ebp, esp */
  EBP = (ESP);
  /* 10d20cc3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d20cc6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d20cc9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d20ccb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d20cce mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d20cd1 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d20cd4 jbe 0x10d20d1b */
  if ((C.cf||C.zf)) goto L_10d20d1b;
L_10d20cd6:;
  /* 10d20cd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d20cd9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10d20cda mov ecx, 0xa */
  ECX = (0xau);
  /* 10d20cdf idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10d20ce1 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20ce4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d20ce7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10d20ce9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d20cec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20cef mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d20cf2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d20cf5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d20cf7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d20cfa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d20cfd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10d20cff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d20d02 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10d20d03 mov ecx, 0xa */
  ECX = (0xau);
  /* 10d20d08 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10d20d0a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10d20d0d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d20d11 jle 0x10d20d1b */
  if ((C.zf||C.sf!=C.of)) goto L_10d20d1b;
  /* 10d20d13 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d20d16 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d20d19 ja 0x10d20cd6 */
  if ((!C.cf&&!C.zf)) goto L_10d20cd6;
L_10d20d1b:;
  /* 10d20d1b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d20d1e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d20d20 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d20d23 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d20d26 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d20d29 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10d20d2b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d20d2e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d20d31 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10d20d34:;
  /* 10d20d34 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d20d37 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d20d39 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 10d20d3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d20d3f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d20d42 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d20d44 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10d20d46 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d20d49 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d20d4c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d20d4f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d20d52 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10d20d55 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10d20d57 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d20d5a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20d5d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d20d60 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d20d63 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d20d66 jb 0x10d20d34 */
  if (C.cf) goto L_10d20d34;
  /* 10d20d68 mov esp, ebp */
  ESP = (EBP);
  /* 10d20d6a pop ebp */
  EBP = (pop32());
  /* 10d20d6b ret  */
  ESPCHK(0x10d20cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010d70 @ 0x10d20d70 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_10d20d70(void) {
  FTRACE(0x10d20d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d20d70 push ebp */
  push32((uint32_t)(EBP));
  /* 10d20d71 mov ebp, esp */
  EBP = (ESP);
  /* 10d20d73 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10d20d76:;
  /* 10d20d76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d20d79 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d20d7c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d20d7e je 0x10d211ec */
  if (C.zf) goto L_10d211ec;
  /* 10d20d84 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d20d87 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d20d8a je 0x10d211ec */
  if (C.zf) goto L_10d211ec;
  /* 10d20d90 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 10d20d94 mov dword ptr [0x10d3e798], 0 */
  w32((uint32_t)(0x10d3e798), (0x0u));
  /* 10d20d9e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10d20da5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d20da8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d20dab jmp 0x10d20db6 */
  goto L_10d20db6;
L_10d20dad:;
  /* 10d20dad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d20db0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20db3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10d20db6:;
  /* 10d20db6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d20db9 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d20dbc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d20dbf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d20dc2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d20dc5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20dc8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d20dcb cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d20dcd jne 0x10d20dd1 */
  if (!C.zf) goto L_10d20dd1;
  /* 10d20dcf jmp 0x10d20dad */
  goto L_10d20dad;
L_10d20dd1:;
  /* 10d20dd1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d20dd4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d20dd7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d20dda mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d20ddd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d20de0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10d20de3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d20de6 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d20de9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10d20dec cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d20df0 ja 0x10d21140 */
  if ((!C.cf&&!C.zf)) goto L_10d21140;
  /* 10d20df6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d20df9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d20dfb mov al, byte ptr [ecx + 0x10d2121c] */
  AL = (r8((uint32_t)(ECX + 0x10d2121c)));
  /* 10d20e01 jmp dword ptr [eax*4 + 0x10d211f0] */
  switch (EAX) {
    case 0: goto L_10d2105f;
    case 1: goto L_10d20f43;
    case 2: goto L_10d20ece;
    case 3: goto L_10d20e08;
    case 4: goto L_10d20e46;
    case 5: goto L_10d20ea7;
    case 6: goto L_10d20ef5;
    case 7: goto L_10d20f1c;
    case 8: goto L_10d20f8a;
    case 9: goto L_10d20e84;
    case 10: goto L_10d21140;
    default: x86_unimpl("switch@0x10d20e01 out of table"); return;
  }
L_10d20e08:;
  /* 10d20e08 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d20e0b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10d20e0e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d20e11 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d20e14 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10d20e17 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d20e1b ja 0x10d20e41 */
  if ((!C.cf&&!C.zf)) goto L_10d20e41;
  /* 10d20e1d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d20e20 jmp dword ptr [ecx*4 + 0x10d2126f] */
  switch (ECX) {
    case 0: goto L_10d20e27;
    case 1: goto L_10d20e31;
    case 2: goto L_10d20e37;
    case 3: goto L_10d20e3d;
    case 4: goto L_10d20e65;
    case 5: goto L_10d20e6f;
    case 6: goto L_10d20e75;
    case 7: goto L_10d20e7b;
    default: x86_unimpl("switch@0x10d20e20 out of table"); return;
  }
L_10d20e27:;
  /* 10d20e27 mov dword ptr [0x10d3e798], 1 */
  w32((uint32_t)(0x10d3e798), (0x1u));
L_10d20e31:;
  /* 10d20e31 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 10d20e35 jmp 0x10d20e41 */
  goto L_10d20e41;
L_10d20e37:;
  /* 10d20e37 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 10d20e3b jmp 0x10d20e41 */
  goto L_10d20e41;
L_10d20e3d:;
  /* 10d20e3d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_10d20e41:;
  /* 10d20e41 jmp 0x10d21140 */
  goto L_10d21140;
L_10d20e46:;
  /* 10d20e46 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d20e49 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10d20e4c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d20e4f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d20e52 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10d20e55 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d20e59 ja 0x10d20e7f */
  if ((!C.cf&&!C.zf)) goto L_10d20e7f;
  /* 10d20e5b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d20e5e jmp dword ptr [ecx*4 + 0x10d2127f] */
  switch (ECX) {
    case 0: goto L_10d20e65;
    case 1: goto L_10d20e6f;
    case 2: goto L_10d20e75;
    case 3: goto L_10d20e7b;
    default: x86_unimpl("switch@0x10d20e5e out of table"); return;
  }
L_10d20e65:;
  /* 10d20e65 mov dword ptr [0x10d3e798], 1 */
  w32((uint32_t)(0x10d3e798), (0x1u));
L_10d20e6f:;
  /* 10d20e6f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 10d20e73 jmp 0x10d20e7f */
  goto L_10d20e7f;
L_10d20e75:;
  /* 10d20e75 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 10d20e79 jmp 0x10d20e7f */
  goto L_10d20e7f;
L_10d20e7b:;
  /* 10d20e7b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_10d20e7f:;
  /* 10d20e7f jmp 0x10d21140 */
  goto L_10d21140;
L_10d20e84:;
  /* 10d20e84 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d20e87 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10d20e8a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d20e8e je 0x10d20e98 */
  if (C.zf) goto L_10d20e98;
  /* 10d20e90 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d20e94 je 0x10d20e9e */
  if (C.zf) goto L_10d20e9e;
  /* 10d20e96 jmp 0x10d20ea2 */
  goto L_10d20ea2;
L_10d20e98:;
  /* 10d20e98 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 10d20e9c jmp 0x10d20ea2 */
  goto L_10d20ea2;
L_10d20e9e:;
  /* 10d20e9e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_10d20ea2:;
  /* 10d20ea2 jmp 0x10d21140 */
  goto L_10d21140;
L_10d20ea7:;
  /* 10d20ea7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d20eaa mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10d20ead cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d20eb1 je 0x10d20ebb */
  if (C.zf) goto L_10d20ebb;
  /* 10d20eb3 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d20eb7 je 0x10d20ec5 */
  if (C.zf) goto L_10d20ec5;
  /* 10d20eb9 jmp 0x10d20ec9 */
  goto L_10d20ec9;
L_10d20ebb:;
  /* 10d20ebb mov dword ptr [0x10d3e798], 1 */
  w32((uint32_t)(0x10d3e798), (0x1u));
L_10d20ec5:;
  /* 10d20ec5 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_10d20ec9:;
  /* 10d20ec9 jmp 0x10d21140 */
  goto L_10d21140;
L_10d20ece:;
  /* 10d20ece mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d20ed1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10d20ed4 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d20ed8 je 0x10d20ee2 */
  if (C.zf) goto L_10d20ee2;
  /* 10d20eda cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d20ede je 0x10d20eec */
  if (C.zf) goto L_10d20eec;
  /* 10d20ee0 jmp 0x10d20ef0 */
  goto L_10d20ef0;
L_10d20ee2:;
  /* 10d20ee2 mov dword ptr [0x10d3e798], 1 */
  w32((uint32_t)(0x10d3e798), (0x1u));
L_10d20eec:;
  /* 10d20eec mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_10d20ef0:;
  /* 10d20ef0 jmp 0x10d21140 */
  goto L_10d21140;
L_10d20ef5:;
  /* 10d20ef5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d20ef8 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 10d20efb cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d20eff je 0x10d20f09 */
  if (C.zf) goto L_10d20f09;
  /* 10d20f01 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d20f05 je 0x10d20f13 */
  if (C.zf) goto L_10d20f13;
  /* 10d20f07 jmp 0x10d20f17 */
  goto L_10d20f17;
L_10d20f09:;
  /* 10d20f09 mov dword ptr [0x10d3e798], 1 */
  w32((uint32_t)(0x10d3e798), (0x1u));
L_10d20f13:;
  /* 10d20f13 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_10d20f17:;
  /* 10d20f17 jmp 0x10d21140 */
  goto L_10d21140;
L_10d20f1c:;
  /* 10d20f1c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d20f1f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10d20f22 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d20f26 je 0x10d20f30 */
  if (C.zf) goto L_10d20f30;
  /* 10d20f28 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d20f2c je 0x10d20f3a */
  if (C.zf) goto L_10d20f3a;
  /* 10d20f2e jmp 0x10d20f3e */
  goto L_10d20f3e;
L_10d20f30:;
  /* 10d20f30 mov dword ptr [0x10d3e798], 1 */
  w32((uint32_t)(0x10d3e798), (0x1u));
L_10d20f3a:;
  /* 10d20f3a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_10d20f3e:;
  /* 10d20f3e jmp 0x10d21140 */
  goto L_10d21140;
L_10d20f43:;
  /* 10d20f43 push 0x10d3a81c */
  push32((uint32_t)(0x10d3a81cu));
  /* 10d20f48 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d20f4b push ecx */
  push32((uint32_t)(ECX));
  /* 10d20f4c call 0x10d217a0 */
  push32(0x10d20f51u); f_10d217a0();
  /* 10d20f51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20f54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d20f56 jne 0x10d20f63 */
  if (!C.zf) goto L_10d20f63;
  /* 10d20f58 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d20f5b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20f5e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d20f61 jmp 0x10d20f81 */
  goto L_10d20f81;
L_10d20f63:;
  /* 10d20f63 push 0x10d3a818 */
  push32((uint32_t)(0x10d3a818u));
  /* 10d20f68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d20f6b push eax */
  push32((uint32_t)(EAX));
  /* 10d20f6c call 0x10d217a0 */
  push32(0x10d20f71u); f_10d217a0();
  /* 10d20f71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20f74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d20f76 jne 0x10d20f81 */
  if (!C.zf) goto L_10d20f81;
  /* 10d20f78 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d20f7b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20f7e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10d20f81:;
  /* 10d20f81 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 10d20f85 jmp 0x10d21140 */
  goto L_10d21140;
L_10d20f8a:;
  /* 10d20f8a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d20f8d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d20f91 jg 0x10d20fa1 */
  if ((!C.zf&&C.sf==C.of)) goto L_10d20fa1;
  /* 10d20f93 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d20f96 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 10d20f9c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10d20f9f jmp 0x10d20fad */
  goto L_10d20fad;
L_10d20fa1:;
  /* 10d20fa1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d20fa4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10d20faa mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10d20fad:;
  /* 10d20fad cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d20fb1 jle 0x10d21054 */
  if ((C.zf||C.sf!=C.of)) goto L_10d21054;
  /* 10d20fb7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d20fba cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d20fbd jbe 0x10d21054 */
  if ((C.cf||C.zf)) goto L_10d21054;
  /* 10d20fc3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d20fc6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d20fc8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d20fca mov ecx, dword ptr [0x10d3cc98] */
  ECX = (r32((uint32_t)(0x10d3cc98)));
  /* 10d20fd0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d20fd2 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10d20fd6 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10d20fdc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d20fde je 0x10d21017 */
  if (C.zf) goto L_10d21017;
  /* 10d20fe0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d20fe3 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d20fe6 jbe 0x10d21017 */
  if ((C.cf||C.zf)) goto L_10d21017;
  /* 10d20fe8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d20feb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d20fed mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d20ff0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10d20ff2 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10d20ff4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d20ff7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d20ff9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d20ffc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d20fff mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10d21001 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d21004 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21007 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10d2100a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d2100d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d2100f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d21012 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d21015 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10d21017:;
  /* 10d21017 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d2101a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d2101c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d2101f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d21021 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10d21023 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d21026 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d21028 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d2102b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d2102e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10d21030 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d21033 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21036 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10d21039 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d2103c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d2103e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d21041 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d21044 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10d21046 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d21049 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d2104c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10d2104f jmp 0x10d20fad */
  goto L_10d20fad;
L_10d21054:;
  /* 10d21054 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d21057 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10d2105a jmp 0x10d20d76 */
  goto L_10d20d76;
L_10d2105f:;
  /* 10d2105f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d21062 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10d21065 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d21067 je 0x10d21132 */
  if (C.zf) goto L_10d21132;
  /* 10d2106d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d21070 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21073 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10d21076:;
  /* 10d21076 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d21079 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d2107c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d2107e je 0x10d21130 */
  if (C.zf) goto L_10d21130;
  /* 10d21084 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d21087 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d2108a je 0x10d21130 */
  if (C.zf) goto L_10d21130;
  /* 10d21090 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d21093 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d21096 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d21099 jne 0x10d210a9 */
  if (!C.zf) goto L_10d210a9;
  /* 10d2109b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d2109e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d210a1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10d210a4 jmp 0x10d21130 */
  goto L_10d21130;
L_10d210a9:;
  /* 10d210a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d210ac xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d210ae mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10d210b0 mov edx, dword ptr [0x10d3cc98] */
  EDX = (r32((uint32_t)(0x10d3cc98)));
  /* 10d210b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d210b8 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10d210bc and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10d210c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d210c3 je 0x10d210fc */
  if (C.zf) goto L_10d210fc;
  /* 10d210c5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d210c8 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d210cb jbe 0x10d210fc */
  if ((C.cf||C.zf)) goto L_10d210fc;
  /* 10d210cd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d210d0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d210d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d210d5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d210d7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10d210d9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d210dc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d210de add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d210e1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d210e4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10d210e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d210e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d210ec mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10d210ef mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d210f2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d210f4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d210f7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d210fa mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10d210fc:;
  /* 10d210fc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d210ff mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d21101 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d21104 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10d21106 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10d21108 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d2110b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d2110d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21110 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d21113 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10d21115 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d21118 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d2111b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10d2111e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d21121 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d21123 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d21126 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d21129 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10d2112b jmp 0x10d21076 */
  goto L_10d21076;
L_10d21130:;
  /* 10d21130 jmp 0x10d2113b */
  goto L_10d2113b;
L_10d21132:;
  /* 10d21132 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d21135 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21138 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10d2113b:;
  /* 10d2113b jmp 0x10d20d76 */
  goto L_10d20d76;
L_10d21140:;
  /* 10d21140 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10d21144 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d21146 je 0x10d2116c */
  if (C.zf) goto L_10d2116c;
  /* 10d21148 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d2114b push edx */
  push32((uint32_t)(EDX));
  /* 10d2114c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d2114f push eax */
  push32((uint32_t)(EAX));
  /* 10d21150 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d21153 push ecx */
  push32((uint32_t)(ECX));
  /* 10d21154 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d21157 push edx */
  push32((uint32_t)(EDX));
  /* 10d21158 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10d2115b push eax */
  push32((uint32_t)(EAX));
  /* 10d2115c call 0x10d205a0 */
  push32(0x10d21161u); f_10d205a0();
  /* 10d21161 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21164 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d21167 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10d2116a jmp 0x10d211e7 */
  goto L_10d211e7;
L_10d2116c:;
  /* 10d2116c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d2116f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d21171 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d21173 mov ecx, dword ptr [0x10d3cc98] */
  ECX = (r32((uint32_t)(0x10d3cc98)));
  /* 10d21179 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d2117b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10d2117f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10d21185 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d21187 je 0x10d211b8 */
  if (C.zf) goto L_10d211b8;
  /* 10d21189 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d2118c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d2118e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d21191 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d21193 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10d21195 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d21198 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d2119a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d2119d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d211a0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10d211a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d211a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d211a8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10d211ab mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d211ae mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d211b0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d211b3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d211b6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10d211b8:;
  /* 10d211b8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d211bb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d211bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d211c0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d211c2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10d211c4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d211c7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d211c9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d211cc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d211cf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10d211d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d211d4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d211d7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10d211da mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d211dd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d211df sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d211e2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d211e5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10d211e7:;
  /* 10d211e7 jmp 0x10d20d76 */
  goto L_10d20d76;
L_10d211ec:;
  /* 10d211ec mov esp, ebp */
  ESP = (EBP);
  /* 10d211ee pop ebp */
  EBP = (pop32());
  /* 10d211ef ret  */
  ESPCHK(0x10d20d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10011290 @ 0x10d21290 (650 bytes, 178 insns) */
void f_10d21290(void) {
  FTRACE(0x10d21290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d21290 push ebp */
  push32((uint32_t)(EBP));
  /* 10d21291 mov ebp, esp */
  EBP = (ESP);
  /* 10d21293 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d21299 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d2129d jne 0x10d213f9 */
  if (!C.zf) goto L_10d213f9;
  /* 10d212a3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d212a6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 10d212ac lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 10d212b2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d212b5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d212bc mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 10d212c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d212c8 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10d212ce push edx */
  push32((uint32_t)(EDX));
  /* 10d212cf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d212d2 push eax */
  push32((uint32_t)(EAX));
  /* 10d212d3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d212d6 push ecx */
  push32((uint32_t)(ECX));
  /* 10d212d7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d212da push edx */
  push32((uint32_t)(EDX));
  /* 10d212db call 0x10d226b0 */
  push32(0x10d212e0u); f_10d226b0();
  /* 10d212e0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d212e3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d212e6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d212ea jne 0x10d2137f */
  if (!C.zf) goto L_10d2137f;
  /* 10d212f0 call dword ptr [0x10d402d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402d0))), 0x10d212f6u);
  /* 10d212f6 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d212f9 je 0x10d21300 */
  if (C.zf) goto L_10d21300;
  /* 10d212fb jmp 0x10d213dd */
  goto L_10d213dd;
L_10d21300:;
  /* 10d21300 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d21302 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d21304 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d21306 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d21309 push eax */
  push32((uint32_t)(EAX));
  /* 10d2130a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d2130d push ecx */
  push32((uint32_t)(ECX));
  /* 10d2130e call 0x10d226b0 */
  push32(0x10d21313u); f_10d226b0();
  /* 10d21313 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21316 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 10d2131c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d21323 jne 0x10d2132a */
  if (!C.zf) goto L_10d2132a;
  /* 10d21325 jmp 0x10d213dd */
  goto L_10d213dd;
L_10d2132a:;
  /* 10d2132a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 10d2132c push 0x10d3a824 */
  push32((uint32_t)(0x10d3a824u));
  /* 10d21331 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d21333 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10d21339 push edx */
  push32((uint32_t)(EDX));
  /* 10d2133a call 0x10d130d0 */
  push32(0x10d2133fu); f_10d130d0();
  /* 10d2133f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21342 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d21345 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d21349 jne 0x10d21350 */
  if (!C.zf) goto L_10d21350;
  /* 10d2134b jmp 0x10d213dd */
  goto L_10d213dd;
L_10d21350:;
  /* 10d21350 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10d21357 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d21359 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 10d2135f push eax */
  push32((uint32_t)(EAX));
  /* 10d21360 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d21363 push ecx */
  push32((uint32_t)(ECX));
  /* 10d21364 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d21367 push edx */
  push32((uint32_t)(EDX));
  /* 10d21368 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d2136b push eax */
  push32((uint32_t)(EAX));
  /* 10d2136c call 0x10d226b0 */
  push32(0x10d21371u); f_10d226b0();
  /* 10d21371 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21374 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d21377 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d2137b jne 0x10d2137f */
  if (!C.zf) goto L_10d2137f;
  /* 10d2137d jmp 0x10d213dd */
  goto L_10d213dd;
L_10d2137f:;
  /* 10d2137f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10d21381 push 0x10d3a824 */
  push32((uint32_t)(0x10d3a824u));
  /* 10d21386 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d21388 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d2138b push ecx */
  push32((uint32_t)(ECX));
  /* 10d2138c call 0x10d130d0 */
  push32(0x10d21391u); f_10d130d0();
  /* 10d21391 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21394 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 10d2139a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10d2139c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10d213a2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d213a5 jne 0x10d213a9 */
  if (!C.zf) goto L_10d213a9;
  /* 10d213a7 jmp 0x10d213dd */
  goto L_10d213dd;
L_10d213a9:;
  /* 10d213a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d213ac push ecx */
  push32((uint32_t)(ECX));
  /* 10d213ad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d213b0 push edx */
  push32((uint32_t)(EDX));
  /* 10d213b1 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10d213b7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d213b9 push ecx */
  push32((uint32_t)(ECX));
  /* 10d213ba call 0x10d168f0 */
  push32(0x10d213bfu); f_10d168f0();
  /* 10d213bf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d213c2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d213c6 je 0x10d213d6 */
  if (C.zf) goto L_10d213d6;
  /* 10d213c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d213ca mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d213cd push edx */
  push32((uint32_t)(EDX));
  /* 10d213ce call 0x10d13b60 */
  push32(0x10d213d3u); f_10d13b60();
  /* 10d213d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d213d6:;
  /* 10d213d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d213d8 jmp 0x10d21516 */
  goto L_10d21516;
L_10d213dd:;
  /* 10d213dd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d213e1 je 0x10d213f1 */
  if (C.zf) goto L_10d213f1;
  /* 10d213e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d213e5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d213e8 push eax */
  push32((uint32_t)(EAX));
  /* 10d213e9 call 0x10d13b60 */
  push32(0x10d213eeu); f_10d13b60();
  /* 10d213ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d213f1:;
  /* 10d213f1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d213f4 jmp 0x10d21516 */
  goto L_10d21516;
L_10d213f9:;
  /* 10d213f9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d213fd jne 0x10d21513 */
  if (!C.zf) goto L_10d21513;
  /* 10d21403 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 10d2140d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d21410 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 10d21416 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d21418 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10d2141e push edx */
  push32((uint32_t)(EDX));
  /* 10d2141f push 0x10d3e6b0 */
  push32((uint32_t)(0x10d3e6b0u));
  /* 10d21424 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d21427 push eax */
  push32((uint32_t)(EAX));
  /* 10d21428 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d2142b push ecx */
  push32((uint32_t)(ECX));
  /* 10d2142c call 0x10d22510 */
  push32(0x10d21431u); f_10d22510();
  /* 10d21431 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21434 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d21436 jne 0x10d21440 */
  if (!C.zf) goto L_10d21440;
  /* 10d21438 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d2143b jmp 0x10d21516 */
  goto L_10d21516;
L_10d21440:;
  /* 10d21440 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10d21446 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10d21449 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 10d21453 jmp 0x10d21464 */
  goto L_10d21464;
L_10d21455:;
  /* 10d21455 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10d2145b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d2145e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_10d21464:;
  /* 10d21464 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d2146b jge 0x10d2150f */
  if ((C.sf==C.of)) goto L_10d2150f;
  /* 10d21471 cmp dword ptr [0x10d3cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10d3cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d21478 jle 0x10d214ab */
  if ((C.zf||C.sf!=C.of)) goto L_10d214ab;
  /* 10d2147a push 4 */
  push32((uint32_t)(0x4u));
  /* 10d2147c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10d21482 mov dl, byte ptr [ecx*2 + 0x10d3e6b0] */
  DL = (r8((uint32_t)(ECX*2 + 0x10d3e6b0)));
  /* 10d21489 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10d2148f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10d21495 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d2149a push eax */
  push32((uint32_t)(EAX));
  /* 10d2149b call 0x10d190e0 */
  push32(0x10d214a0u); f_10d190e0();
  /* 10d214a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d214a3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 10d214a9 jmp 0x10d214de */
  goto L_10d214de;
L_10d214ab:;
  /* 10d214ab mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10d214b1 mov dl, byte ptr [ecx*2 + 0x10d3e6b0] */
  DL = (r8((uint32_t)(ECX*2 + 0x10d3e6b0)));
  /* 10d214b8 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10d214be mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10d214c4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d214c9 mov ecx, dword ptr [0x10d3cc98] */
  ECX = (r32((uint32_t)(0x10d3cc98)));
  /* 10d214cf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d214d1 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10d214d5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10d214d8 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_10d214de:;
  /* 10d214de cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d214e5 je 0x10d21508 */
  if (C.zf) goto L_10d21508;
  /* 10d214e7 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10d214ed movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d214f0 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d214f3 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 10d214fa lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10d214fe mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10d21504 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10d21506 jmp 0x10d2150a */
  goto L_10d2150a;
L_10d21508:;
  /* 10d21508 jmp 0x10d2150f */
  goto L_10d2150f;
L_10d2150a:;
  /* 10d2150a jmp 0x10d21455 */
  goto L_10d21455;
L_10d2150f:;
  /* 10d2150f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d21511 jmp 0x10d21516 */
  goto L_10d21516;
L_10d21513:;
  /* 10d21513 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10d21516:;
  /* 10d21516 mov esp, ebp */
  ESP = (EBP);
  /* 10d21518 pop ebp */
  EBP = (pop32());
  /* 10d21519 ret  */
  ESPCHK(0x10d21290u, _esp0);
  ESP += 4; return;
}

/* FUN_10011520 @ 0x10d21520 (10 bytes, 5 insns) */
void f_10d21520(void) {
  FTRACE(0x10d21520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d21520 push ebp */
  push32((uint32_t)(EBP));
  /* 10d21521 mov ebp, esp */
  EBP = (ESP);
  /* 10d21523 mov eax, dword ptr [0x10d3dd88] */
  EAX = (r32((uint32_t)(0x10d3dd88)));
  /* 10d21528 pop ebp */
  EBP = (pop32());
  /* 10d21529 ret  */
  ESPCHK(0x10d21520u, _esp0);
  ESP += 4; return;
}

/* FUN_10011530 @ 0x10d21530 (575 bytes, 196 insns) */
void f_10d21530(void) {
  FTRACE(0x10d21530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d21530 push ebp */
  push32((uint32_t)(EBP));
  /* 10d21531 mov ebp, esp */
  EBP = (ESP);
  /* 10d21533 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10d21535 push 0x10d3a830 */
  push32((uint32_t)(0x10d3a830u));
  /* 10d2153a push 0x10d1c1d8 */
  push32((uint32_t)(0x10d1c1d8u));
  /* 10d2153f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10d21545 push eax */
  push32((uint32_t)(EAX));
  /* 10d21546 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10d2154d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21550 push ebx */
  push32((uint32_t)(EBX));
  /* 10d21551 push esi */
  push32((uint32_t)(ESI));
  /* 10d21552 push edi */
  push32((uint32_t)(EDI));
  /* 10d21553 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10d21556 cmp dword ptr [0x10d3e6bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e6bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d2155d jne 0x10d215ae */
  if (!C.zf) goto L_10d215ae;
  /* 10d2155f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10d21562 push eax */
  push32((uint32_t)(EAX));
  /* 10d21563 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d21565 push 0x10d39f60 */
  push32((uint32_t)(0x10d39f60u));
  /* 10d2156a push 1 */
  push32((uint32_t)(0x1u));
  /* 10d2156c call dword ptr [0x10d40350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40350))), 0x10d21572u);
  /* 10d21572 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d21574 je 0x10d21582 */
  if (C.zf) goto L_10d21582;
  /* 10d21576 mov dword ptr [0x10d3e6bc], 1 */
  w32((uint32_t)(0x10d3e6bc), (0x1u));
  /* 10d21580 jmp 0x10d215ae */
  goto L_10d215ae;
L_10d21582:;
  /* 10d21582 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 10d21585 push ecx */
  push32((uint32_t)(ECX));
  /* 10d21586 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d21588 push 0x10d39f5c */
  push32((uint32_t)(0x10d39f5cu));
  /* 10d2158d push 1 */
  push32((uint32_t)(0x1u));
  /* 10d2158f push 0 */
  push32((uint32_t)(0x0u));
  /* 10d21591 call dword ptr [0x10d4034c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d4034c))), 0x10d21597u);
  /* 10d21597 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d21599 je 0x10d215a7 */
  if (C.zf) goto L_10d215a7;
  /* 10d2159b mov dword ptr [0x10d3e6bc], 2 */
  w32((uint32_t)(0x10d3e6bc), (0x2u));
  /* 10d215a5 jmp 0x10d215ae */
  goto L_10d215ae;
L_10d215a7:;
  /* 10d215a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d215a9 jmp 0x10d21789 */
  goto L_10d21789;
L_10d215ae:;
  /* 10d215ae cmp dword ptr [0x10d3e6bc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e6bc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d215b5 jne 0x10d215d2 */
  if (!C.zf) goto L_10d215d2;
  /* 10d215b7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d215ba push edx */
  push32((uint32_t)(EDX));
  /* 10d215bb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d215be push eax */
  push32((uint32_t)(EAX));
  /* 10d215bf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d215c2 push ecx */
  push32((uint32_t)(ECX));
  /* 10d215c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d215c6 push edx */
  push32((uint32_t)(EDX));
  /* 10d215c7 call dword ptr [0x10d40350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40350))), 0x10d215cdu);
  /* 10d215cd jmp 0x10d21789 */
  goto L_10d21789;
L_10d215d2:;
  /* 10d215d2 cmp dword ptr [0x10d3e6bc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e6bc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d215d9 jne 0x10d21787 */
  if (!C.zf) goto L_10d21787;
  /* 10d215df cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d215e3 jne 0x10d215ed */
  if (!C.zf) goto L_10d215ed;
  /* 10d215e5 mov eax, dword ptr [0x10d3e630] */
  EAX = (r32((uint32_t)(0x10d3e630)));
  /* 10d215ea mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_10d215ed:;
  /* 10d215ed push 0 */
  push32((uint32_t)(0x0u));
  /* 10d215ef push 0 */
  push32((uint32_t)(0x0u));
  /* 10d215f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d215f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d215f5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d215f8 push ecx */
  push32((uint32_t)(ECX));
  /* 10d215f9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d215fc push edx */
  push32((uint32_t)(EDX));
  /* 10d215fd push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10d21602 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d21605 push eax */
  push32((uint32_t)(EAX));
  /* 10d21606 call dword ptr [0x10d402fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402fc))), 0x10d2160cu);
  /* 10d2160c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10d2160f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d21613 jne 0x10d2161c */
  if (!C.zf) goto L_10d2161c;
  /* 10d21615 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d21617 jmp 0x10d21789 */
  goto L_10d21789;
L_10d2161c:;
  /* 10d2161c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d21623 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d21626 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21629 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10d2162b call 0x10d16270 */
  push32(0x10d21630u); f_10d16270();
  /* 10d21630 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 10d21633 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10d21636 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d21639 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10d2163c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d2163f push edx */
  push32((uint32_t)(EDX));
  /* 10d21640 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d21642 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d21645 push eax */
  push32((uint32_t)(EAX));
  /* 10d21646 call 0x10d16e40 */
  push32(0x10d2164bu); f_10d16e40();
  /* 10d2164b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d2164e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10d21655 jmp 0x10d2166e */
  goto L_10d2166e;
  /* 10d21657 mov eax, 1 */
  EAX = (0x1u);
  /* 10d2165c ret  */
  ESPCHK(0x10d21530u, _esp0);
  ESP += 4; return;
  /* 10d2165d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10d21660 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10d21667 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10d2166e:;
  /* 10d2166e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d21672 jne 0x10d2167b */
  if (!C.zf) goto L_10d2167b;
  /* 10d21674 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d21676 jmp 0x10d21789 */
  goto L_10d21789;
L_10d2167b:;
  /* 10d2167b push 0 */
  push32((uint32_t)(0x0u));
  /* 10d2167d push 0 */
  push32((uint32_t)(0x0u));
  /* 10d2167f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d21682 push ecx */
  push32((uint32_t)(ECX));
  /* 10d21683 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d21686 push edx */
  push32((uint32_t)(EDX));
  /* 10d21687 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d2168a push eax */
  push32((uint32_t)(EAX));
  /* 10d2168b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d2168e push ecx */
  push32((uint32_t)(ECX));
  /* 10d2168f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10d21694 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d21697 push edx */
  push32((uint32_t)(EDX));
  /* 10d21698 call dword ptr [0x10d402fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402fc))), 0x10d2169eu);
  /* 10d2169e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d216a0 jne 0x10d216a9 */
  if (!C.zf) goto L_10d216a9;
  /* 10d216a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d216a4 jmp 0x10d21789 */
  goto L_10d21789;
L_10d216a9:;
  /* 10d216a9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10d216b0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d216b3 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 10d216b7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d216ba and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10d216bc call 0x10d16270 */
  push32(0x10d216c1u); f_10d16270();
  /* 10d216c1 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 10d216c4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10d216c7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10d216ca mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10d216cd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10d216d4 jmp 0x10d216ed */
  goto L_10d216ed;
  /* 10d216d6 mov eax, 1 */
  EAX = (0x1u);
  /* 10d216db ret  */
  ESPCHK(0x10d21530u, _esp0);
  ESP += 4; return;
  /* 10d216dc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10d216df mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10d216e6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10d216ed:;
  /* 10d216ed cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d216f1 jne 0x10d216fa */
  if (!C.zf) goto L_10d216fa;
  /* 10d216f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d216f5 jmp 0x10d21789 */
  goto L_10d21789;
L_10d216fa:;
  /* 10d216fa cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d216fe jne 0x10d21709 */
  if (!C.zf) goto L_10d21709;
  /* 10d21700 mov edx, dword ptr [0x10d3e620] */
  EDX = (r32((uint32_t)(0x10d3e620)));
  /* 10d21706 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_10d21709:;
  /* 10d21709 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d2170c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d2170f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 10d21715 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d21718 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d2171b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 10d21722 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d21725 push ecx */
  push32((uint32_t)(ECX));
  /* 10d21726 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d21729 push edx */
  push32((uint32_t)(EDX));
  /* 10d2172a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d2172d push eax */
  push32((uint32_t)(EAX));
  /* 10d2172e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d21731 push ecx */
  push32((uint32_t)(ECX));
  /* 10d21732 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10d21735 push edx */
  push32((uint32_t)(EDX));
  /* 10d21736 call dword ptr [0x10d4034c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d4034c))), 0x10d2173cu);
  /* 10d2173c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10d2173f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d21742 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d21745 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d21747 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 10d2174c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d21752 je 0x10d21768 */
  if (C.zf) goto L_10d21768;
  /* 10d21754 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d21757 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d2175a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d2175c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10d21760 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d21766 je 0x10d2176c */
  if (C.zf) goto L_10d2176c;
L_10d21768:;
  /* 10d21768 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d2176a jmp 0x10d21789 */
  goto L_10d21789;
L_10d2176c:;
  /* 10d2176c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d2176f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10d21771 push eax */
  push32((uint32_t)(EAX));
  /* 10d21772 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d21775 push ecx */
  push32((uint32_t)(ECX));
  /* 10d21776 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d21779 push edx */
  push32((uint32_t)(EDX));
  /* 10d2177a call 0x10d1afc0 */
  push32(0x10d2177fu); f_10d1afc0();
  /* 10d2177f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21782 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d21785 jmp 0x10d21789 */
  goto L_10d21789;
L_10d21787:;
  /* 10d21787 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d21789:;
  /* 10d21789 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 10d2178c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d2178f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10d21796 pop edi */
  EDI = (pop32());
  /* 10d21797 pop esi */
  ESI = (pop32());
  /* 10d21798 pop ebx */
  EBX = (pop32());
  /* 10d21799 mov esp, ebp */
  ESP = (EBP);
  /* 10d2179b pop ebp */
  EBP = (pop32());
  /* 10d2179c ret  */
  ESPCHK(0x10d21530u, _esp0);
  ESP += 4; return;
}

/* FUN_100117a0 @ 0x10d217a0 (208 bytes, 85 insns) */
void f_10d217a0(void) {
  FTRACE(0x10d217a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d217a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d217a1 mov ebp, esp */
  EBP = (ESP);
  /* 10d217a3 push edi */
  push32((uint32_t)(EDI));
  /* 10d217a4 push esi */
  push32((uint32_t)(ESI));
  /* 10d217a5 push ebx */
  push32((uint32_t)(EBX));
  /* 10d217a6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10d217a9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10d217ac lea eax, [0x10d3e618] */
  EAX = ((uint32_t)(0x10d3e618));
  /* 10d217b2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d217b6 jne 0x10d217f3 */
  if (!C.zf) goto L_10d217f3;
  /* 10d217b8 mov al, 0xff */
  AL = (0xffu);
  /* 10d217ba mov edi, edi */
  EDI = (EDI);
L_10d217bc:;
  /* 10d217bc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10d217be je 0x10d217ee */
  if (C.zf) goto L_10d217ee;
  /* 10d217c0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10d217c2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10d217c3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 10d217c5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10d217c6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d217c8 je 0x10d217bc */
  if (C.zf) goto L_10d217bc;
  /* 10d217ca sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10d217cc cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d217ce sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10d217d0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10d217d3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10d217d5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10d217d7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 10d217d9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10d217db cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d217dd sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10d217df and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10d217e2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10d217e4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10d217e6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d217e8 je 0x10d217bc */
  if (C.zf) goto L_10d217bc;
  /* 10d217ea sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10d217ec sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_10d217ee:;
  /* 10d217ee movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 10d217f1 jmp 0x10d2186b */
  goto L_10d2186b;
L_10d217f3:;
  /* 10d217f3 lock inc dword ptr [0x10d3e7ac] */
  x86_unimpl("lock inc @ 0x10d217f3");
  /* 10d217fa cmp dword ptr [0x10d3e79c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e79c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d21801 jg 0x10d21807 */
  if ((!C.zf&&C.sf==C.of)) goto L_10d21807;
  /* 10d21803 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d21805 jmp 0x10d2181c */
  goto L_10d2181c;
L_10d21807:;
  /* 10d21807 lock dec dword ptr [0x10d3e7ac] */
  x86_unimpl("lock dec @ 0x10d21807");
  /* 10d2180e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10d21810 call 0x10d16ad0 */
  push32(0x10d21815u); f_10d16ad0();
  /* 10d21815 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_10d2181c:;
  /* 10d2181c mov eax, 0xff */
  EAX = (0xffu);
  /* 10d21821 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10d21823 nop  */
  /* nop */
L_10d21824:;
  /* 10d21824 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10d21826 je 0x10d2184f */
  if (C.zf) goto L_10d2184f;
  /* 10d21828 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10d2182a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10d2182b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10d2182d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10d2182e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d21830 je 0x10d21824 */
  if (C.zf) goto L_10d21824;
  /* 10d21832 push eax */
  push32((uint32_t)(EAX));
  /* 10d21833 push ebx */
  push32((uint32_t)(EBX));
  /* 10d21834 call 0x10d22910 */
  push32(0x10d21839u); f_10d22910();
  /* 10d21839 mov ebx, eax */
  EBX = (EAX);
  /* 10d2183b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d2183e call 0x10d22910 */
  push32(0x10d21843u); f_10d22910();
  /* 10d21843 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21846 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d21848 je 0x10d21824 */
  if (C.zf) goto L_10d21824;
  /* 10d2184a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d2184c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10d2184f:;
  /* 10d2184f mov ebx, eax */
  EBX = (EAX);
  /* 10d21851 pop eax */
  EAX = (pop32());
  /* 10d21852 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d21854 jne 0x10d2185f */
  if (!C.zf) goto L_10d2185f;
  /* 10d21856 lock dec dword ptr [0x10d3e7ac] */
  x86_unimpl("lock dec @ 0x10d21856");
  /* 10d2185d jmp 0x10d21869 */
  goto L_10d21869;
L_10d2185f:;
  /* 10d2185f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10d21861 call 0x10d16b70 */
  push32(0x10d21866u); f_10d16b70();
  /* 10d21866 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d21869:;
  /* 10d21869 mov eax, ebx */
  EAX = (EBX);
L_10d2186b:;
  /* 10d2186b pop ebx */
  EBX = (pop32());
  /* 10d2186c pop esi */
  ESI = (pop32());
  /* 10d2186d pop edi */
  EDI = (pop32());
  /* 10d2186e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d2186f ret  */
  ESPCHK(0x10d217a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011870 @ 0x10d21870 (257 bytes, 103 insns) */
void f_10d21870(void) {
  FTRACE(0x10d21870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d21870 push ebp */
  push32((uint32_t)(EBP));
  /* 10d21871 mov ebp, esp */
  EBP = (ESP);
  /* 10d21873 push edi */
  push32((uint32_t)(EDI));
  /* 10d21874 push esi */
  push32((uint32_t)(ESI));
  /* 10d21875 push ebx */
  push32((uint32_t)(EBX));
  /* 10d21876 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d21879 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d2187b je 0x10d2196a */
  if (C.zf) goto L_10d2196a;
  /* 10d21881 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10d21884 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10d21887 lea eax, [0x10d3e618] */
  EAX = ((uint32_t)(0x10d3e618));
  /* 10d2188d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d21891 jne 0x10d218e1 */
  if (!C.zf) goto L_10d218e1;
  /* 10d21893 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 10d21895 mov bl, 0x5a */
  BL = (0x5au);
  /* 10d21897 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 10d21899 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10d2189c:;
  /* 10d2189c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 10d2189e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10d218a0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 10d218a2 je 0x10d218c5 */
  if (C.zf) goto L_10d218c5;
  /* 10d218a4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10d218a6 je 0x10d218c5 */
  if (C.zf) goto L_10d218c5;
  /* 10d218a8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10d218a9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10d218aa cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d218ac jb 0x10d218b4 */
  if (C.cf) goto L_10d218b4;
  /* 10d218ae cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d218b0 ja 0x10d218b4 */
  if ((!C.cf&&!C.zf)) goto L_10d218b4;
  /* 10d218b2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_10d218b4:;
  /* 10d218b4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d218b6 jb 0x10d218be */
  if (C.cf) goto L_10d218be;
  /* 10d218b8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d218ba ja 0x10d218be */
  if ((!C.cf&&!C.zf)) goto L_10d218be;
  /* 10d218bc add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_10d218be:;
  /* 10d218be cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d218c0 jne 0x10d218cf */
  if (!C.zf) goto L_10d218cf;
  /* 10d218c2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10d218c3 jne 0x10d2189c */
  if (!C.zf) goto L_10d2189c;
L_10d218c5:;
  /* 10d218c5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d218c7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d218c9 je 0x10d2196a */
  if (C.zf) goto L_10d2196a;
L_10d218cf:;
  /* 10d218cf mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10d218d4 jb 0x10d2196a */
  if (C.cf) goto L_10d2196a;
  /* 10d218da neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d218dc jmp 0x10d2196a */
  goto L_10d2196a;
L_10d218e1:;
  /* 10d218e1 lock inc dword ptr [0x10d3e7ac] */
  x86_unimpl("lock inc @ 0x10d218e1");
  /* 10d218e8 cmp dword ptr [0x10d3e79c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e79c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d218ef jg 0x10d218f5 */
  if ((!C.zf&&C.sf==C.of)) goto L_10d218f5;
  /* 10d218f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d218f3 jmp 0x10d2190e */
  goto L_10d2190e;
L_10d218f5:;
  /* 10d218f5 lock dec dword ptr [0x10d3e7ac] */
  x86_unimpl("lock dec @ 0x10d218f5");
  /* 10d218fc mov ebx, ecx */
  EBX = (ECX);
  /* 10d218fe push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10d21900 call 0x10d16ad0 */
  push32(0x10d21905u); f_10d16ad0();
  /* 10d21905 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 10d2190c mov ecx, ebx */
  ECX = (EBX);
L_10d2190e:;
  /* 10d2190e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d21910 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10d21912 mov edi, edi */
  EDI = (EDI);
L_10d21914:;
  /* 10d21914 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10d21916 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d21918 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10d2191a je 0x10d2193f */
  if (C.zf) goto L_10d2193f;
  /* 10d2191c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10d2191e je 0x10d2193f */
  if (C.zf) goto L_10d2193f;
  /* 10d21920 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10d21921 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10d21922 push ecx */
  push32((uint32_t)(ECX));
  /* 10d21923 push eax */
  push32((uint32_t)(EAX));
  /* 10d21924 push ebx */
  push32((uint32_t)(EBX));
  /* 10d21925 call 0x10d22910 */
  push32(0x10d2192au); f_10d22910();
  /* 10d2192a mov ebx, eax */
  EBX = (EAX);
  /* 10d2192c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d2192f call 0x10d22910 */
  push32(0x10d21934u); f_10d22910();
  /* 10d21934 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21937 pop ecx */
  ECX = (pop32());
  /* 10d21938 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d2193a jne 0x10d21945 */
  if (!C.zf) goto L_10d21945;
  /* 10d2193c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10d2193d jne 0x10d21914 */
  if (!C.zf) goto L_10d21914;
L_10d2193f:;
  /* 10d2193f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d21941 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d21943 je 0x10d2194e */
  if (C.zf) goto L_10d2194e;
L_10d21945:;
  /* 10d21945 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10d2194a jb 0x10d2194e */
  if (C.cf) goto L_10d2194e;
  /* 10d2194c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_10d2194e:;
  /* 10d2194e pop eax */
  EAX = (pop32());
  /* 10d2194f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d21951 jne 0x10d2195c */
  if (!C.zf) goto L_10d2195c;
  /* 10d21953 lock dec dword ptr [0x10d3e7ac] */
  x86_unimpl("lock dec @ 0x10d21953");
  /* 10d2195a jmp 0x10d2196a */
  goto L_10d2196a;
L_10d2195c:;
  /* 10d2195c mov ebx, ecx */
  EBX = (ECX);
  /* 10d2195e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10d21960 call 0x10d16b70 */
  push32(0x10d21965u); f_10d16b70();
  /* 10d21965 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21968 mov ecx, ebx */
  ECX = (EBX);
L_10d2196a:;
  /* 10d2196a mov eax, ecx */
  EAX = (ECX);
  /* 10d2196c pop ebx */
  EBX = (pop32());
  /* 10d2196d pop esi */
  ESI = (pop32());
  /* 10d2196e pop edi */
  EDI = (pop32());
  /* 10d2196f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d21970 ret  */
  ESPCHK(0x10d21870u, _esp0);
  ESP += 4; return;
}

/* FUN_10011980 @ 0x10d21980 (255 bytes, 88 insns) */
void f_10d21980(void) {
  FTRACE(0x10d21980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d21980 push ebp */
  push32((uint32_t)(EBP));
  /* 10d21981 mov ebp, esp */
  EBP = (ESP);
  /* 10d21983 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10d21986:;
  /* 10d21986 cmp dword ptr [0x10d3cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10d3cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d2198d jle 0x10d219a6 */
  if ((C.zf||C.sf!=C.of)) goto L_10d219a6;
  /* 10d2198f push 8 */
  push32((uint32_t)(0x8u));
  /* 10d21991 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d21994 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d21996 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10d21998 push ecx */
  push32((uint32_t)(ECX));
  /* 10d21999 call 0x10d190e0 */
  push32(0x10d2199eu); f_10d190e0();
  /* 10d2199e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d219a1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10d219a4 jmp 0x10d219bf */
  goto L_10d219bf;
L_10d219a6:;
  /* 10d219a6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d219a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d219ab mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d219ad mov ecx, dword ptr [0x10d3cc98] */
  ECX = (r32((uint32_t)(0x10d3cc98)));
  /* 10d219b3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d219b5 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10d219b9 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10d219bc mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10d219bf:;
  /* 10d219bf cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d219c3 je 0x10d219d0 */
  if (C.zf) goto L_10d219d0;
  /* 10d219c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d219c8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d219cb mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10d219ce jmp 0x10d21986 */
  goto L_10d21986;
L_10d219d0:;
  /* 10d219d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d219d3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d219d5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d219d7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d219da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d219dd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d219e0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10d219e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d219e6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d219e9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d219ed je 0x10d219f5 */
  if (C.zf) goto L_10d219f5;
  /* 10d219ef cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d219f3 jne 0x10d21a08 */
  if (!C.zf) goto L_10d21a08;
L_10d219f5:;
  /* 10d219f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d219f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d219fa mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d219fc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d219ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d21a02 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21a05 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10d21a08:;
  /* 10d21a08 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10d21a0f:;
  /* 10d21a0f cmp dword ptr [0x10d3cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10d3cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d21a16 jle 0x10d21a2b */
  if ((C.zf||C.sf!=C.of)) goto L_10d21a2b;
  /* 10d21a18 push 4 */
  push32((uint32_t)(0x4u));
  /* 10d21a1a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d21a1d push edx */
  push32((uint32_t)(EDX));
  /* 10d21a1e call 0x10d190e0 */
  push32(0x10d21a23u); f_10d190e0();
  /* 10d21a23 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21a26 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10d21a29 jmp 0x10d21a40 */
  goto L_10d21a40;
L_10d21a2b:;
  /* 10d21a2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d21a2e mov ecx, dword ptr [0x10d3cc98] */
  ECX = (r32((uint32_t)(0x10d3cc98)));
  /* 10d21a34 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d21a36 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10d21a3a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10d21a3d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10d21a40:;
  /* 10d21a40 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d21a44 je 0x10d21a6b */
  if (C.zf) goto L_10d21a6b;
  /* 10d21a46 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d21a49 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d21a4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d21a4f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 10d21a53 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10d21a56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d21a59 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d21a5b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10d21a5d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d21a60 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d21a63 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21a66 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10d21a69 jmp 0x10d21a0f */
  goto L_10d21a0f;
L_10d21a6b:;
  /* 10d21a6b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d21a6f jne 0x10d21a78 */
  if (!C.zf) goto L_10d21a78;
  /* 10d21a71 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d21a74 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d21a76 jmp 0x10d21a7b */
  goto L_10d21a7b;
L_10d21a78:;
  /* 10d21a78 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10d21a7b:;
  /* 10d21a7b mov esp, ebp */
  ESP = (EBP);
  /* 10d21a7d pop ebp */
  EBP = (pop32());
  /* 10d21a7e ret  */
  ESPCHK(0x10d21980u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a80 @ 0x10d21a80 (17 bytes, 8 insns) */
void f_10d21a80(void) {
  FTRACE(0x10d21a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d21a80 push ebp */
  push32((uint32_t)(EBP));
  /* 10d21a81 mov ebp, esp */
  EBP = (ESP);
  /* 10d21a83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d21a86 push eax */
  push32((uint32_t)(EAX));
  /* 10d21a87 call 0x10d21980 */
  push32(0x10d21a8cu); f_10d21980();
  /* 10d21a8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21a8f pop ebp */
  EBP = (pop32());
  /* 10d21a90 ret  */
  ESPCHK(0x10d21a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10011aa0 @ 0x10d21aa0 (297 bytes, 106 insns) */
void f_10d21aa0(void) {
  FTRACE(0x10d21aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d21aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d21aa1 mov ebp, esp */
  EBP = (ESP);
  /* 10d21aa3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d21aa6 push esi */
  push32((uint32_t)(ESI));
L_10d21aa7:;
  /* 10d21aa7 cmp dword ptr [0x10d3cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10d3cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d21aae jle 0x10d21ac7 */
  if ((C.zf||C.sf!=C.of)) goto L_10d21ac7;
  /* 10d21ab0 push 8 */
  push32((uint32_t)(0x8u));
  /* 10d21ab2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d21ab5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d21ab7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10d21ab9 push ecx */
  push32((uint32_t)(ECX));
  /* 10d21aba call 0x10d190e0 */
  push32(0x10d21abfu); f_10d190e0();
  /* 10d21abf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21ac2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10d21ac5 jmp 0x10d21ae0 */
  goto L_10d21ae0;
L_10d21ac7:;
  /* 10d21ac7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d21aca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d21acc mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d21ace mov ecx, dword ptr [0x10d3cc98] */
  ECX = (r32((uint32_t)(0x10d3cc98)));
  /* 10d21ad4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d21ad6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10d21ada and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10d21add mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10d21ae0:;
  /* 10d21ae0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d21ae4 je 0x10d21af1 */
  if (C.zf) goto L_10d21af1;
  /* 10d21ae6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d21ae9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21aec mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10d21aef jmp 0x10d21aa7 */
  goto L_10d21aa7;
L_10d21af1:;
  /* 10d21af1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d21af4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d21af6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d21af8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d21afb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d21afe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21b01 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10d21b04 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d21b07 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10d21b0a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d21b0e je 0x10d21b16 */
  if (C.zf) goto L_10d21b16;
  /* 10d21b10 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d21b14 jne 0x10d21b29 */
  if (!C.zf) goto L_10d21b29;
L_10d21b16:;
  /* 10d21b16 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d21b19 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d21b1b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d21b1d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d21b20 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d21b23 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21b26 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10d21b29:;
  /* 10d21b29 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10d21b30 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10d21b37:;
  /* 10d21b37 cmp dword ptr [0x10d3cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10d3cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d21b3e jle 0x10d21b53 */
  if ((C.zf||C.sf!=C.of)) goto L_10d21b53;
  /* 10d21b40 push 4 */
  push32((uint32_t)(0x4u));
  /* 10d21b42 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d21b45 push edx */
  push32((uint32_t)(EDX));
  /* 10d21b46 call 0x10d190e0 */
  push32(0x10d21b4bu); f_10d190e0();
  /* 10d21b4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21b4e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10d21b51 jmp 0x10d21b68 */
  goto L_10d21b68;
L_10d21b53:;
  /* 10d21b53 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d21b56 mov ecx, dword ptr [0x10d3cc98] */
  ECX = (r32((uint32_t)(0x10d3cc98)));
  /* 10d21b5c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d21b5e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10d21b62 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10d21b65 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_10d21b68:;
  /* 10d21b68 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d21b6c je 0x10d21ba9 */
  if (C.zf) goto L_10d21ba9;
  /* 10d21b6e push 0 */
  push32((uint32_t)(0x0u));
  /* 10d21b70 push 0xa */
  push32((uint32_t)(0xau));
  /* 10d21b72 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d21b75 push eax */
  push32((uint32_t)(EAX));
  /* 10d21b76 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d21b79 push ecx */
  push32((uint32_t)(ECX));
  /* 10d21b7a call 0x10d22a40 */
  push32(0x10d21b7fu); f_10d22a40();
  /* 10d21b7f mov ecx, eax */
  ECX = (EAX);
  /* 10d21b81 mov esi, edx */
  ESI = (EDX);
  /* 10d21b83 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d21b86 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d21b89 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10d21b8a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21b8c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21b8e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d21b91 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 10d21b94 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d21b97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d21b99 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d21b9b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d21b9e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d21ba1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21ba4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10d21ba7 jmp 0x10d21b37 */
  goto L_10d21b37;
L_10d21ba9:;
  /* 10d21ba9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d21bad jne 0x10d21bbe */
  if (!C.zf) goto L_10d21bbe;
  /* 10d21baf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d21bb2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d21bb4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d21bb7 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21bba neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d21bbc jmp 0x10d21bc4 */
  goto L_10d21bc4;
L_10d21bbe:;
  /* 10d21bbe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d21bc1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_10d21bc4:;
  /* 10d21bc4 pop esi */
  ESI = (pop32());
  /* 10d21bc5 mov esp, ebp */
  ESP = (EBP);
  /* 10d21bc7 pop ebp */
  EBP = (pop32());
  /* 10d21bc8 ret  */
  ESPCHK(0x10d21aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011bd0 @ 0x10d21bd0 (61 bytes, 18 insns) */
void f_10d21bd0(void) {
  FTRACE(0x10d21bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d21bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d21bd1 mov ebp, esp */
  EBP = (ESP);
  /* 10d21bd3 cmp dword ptr [0x10d3e778], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e778))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d21bda jne 0x10d21c0b */
  if (!C.zf) goto L_10d21c0b;
  /* 10d21bdc push 0xb */
  push32((uint32_t)(0xbu));
  /* 10d21bde call 0x10d16ad0 */
  push32(0x10d21be3u); f_10d16ad0();
  /* 10d21be3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21be6 cmp dword ptr [0x10d3e778], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e778))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d21bed jne 0x10d21c01 */
  if (!C.zf) goto L_10d21c01;
  /* 10d21bef call 0x10d21c30 */
  push32(0x10d21bf4u); f_10d21c30();
  /* 10d21bf4 mov eax, dword ptr [0x10d3e778] */
  EAX = (r32((uint32_t)(0x10d3e778)));
  /* 10d21bf9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21bfc mov dword ptr [0x10d3e778], eax */
  w32((uint32_t)(0x10d3e778), (EAX));
L_10d21c01:;
  /* 10d21c01 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10d21c03 call 0x10d16b70 */
  push32(0x10d21c08u); f_10d16b70();
  /* 10d21c08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d21c0b:;
  /* 10d21c0b pop ebp */
  EBP = (pop32());
  /* 10d21c0c ret  */
  ESPCHK(0x10d21bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011c10 @ 0x10d21c10 (30 bytes, 11 insns) */
void f_10d21c10(void) {
  FTRACE(0x10d21c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d21c10 push ebp */
  push32((uint32_t)(EBP));
  /* 10d21c11 mov ebp, esp */
  EBP = (ESP);
  /* 10d21c13 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10d21c15 call 0x10d16ad0 */
  push32(0x10d21c1au); f_10d16ad0();
  /* 10d21c1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21c1d call 0x10d21c30 */
  push32(0x10d21c22u); f_10d21c30();
  /* 10d21c22 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10d21c24 call 0x10d16b70 */
  push32(0x10d21c29u); f_10d16b70();
  /* 10d21c29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21c2c pop ebp */
  EBP = (pop32());
  /* 10d21c2d ret  */
  ESPCHK(0x10d21c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10011c30 @ 0x10d21c30 (939 bytes, 266 insns) */
void f_10d21c30(void) {
  FTRACE(0x10d21c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d21c30 push ebp */
  push32((uint32_t)(EBP));
  /* 10d21c31 mov ebp, esp */
  EBP = (ESP);
  /* 10d21c33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d21c36 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d21c3d push 0xc */
  push32((uint32_t)(0xcu));
  /* 10d21c3f call 0x10d16ad0 */
  push32(0x10d21c44u); f_10d16ad0();
  /* 10d21c44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21c47 mov dword ptr [0x10d3e6c0], 0 */
  w32((uint32_t)(0x10d3e6c0), (0x0u));
  /* 10d21c51 mov dword ptr [0x10d3de38], 0xffffffff */
  w32((uint32_t)(0x10d3de38), (0xffffffffu));
  /* 10d21c5b mov eax, dword ptr [0x10d3de38] */
  EAX = (r32((uint32_t)(0x10d3de38)));
  /* 10d21c60 mov dword ptr [0x10d3de28], eax */
  w32((uint32_t)(0x10d3de28), (EAX));
  /* 10d21c65 push 0x10d3a890 */
  push32((uint32_t)(0x10d3a890u));
  /* 10d21c6a call 0x10d22ab0 */
  push32(0x10d21c6fu); f_10d22ab0();
  /* 10d21c6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21c72 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d21c75 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d21c79 jne 0x10d21db3 */
  if (!C.zf) goto L_10d21db3;
  /* 10d21c7f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10d21c81 call 0x10d16b70 */
  push32(0x10d21c86u); f_10d16b70();
  /* 10d21c86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21c89 push 0x10d3e6c8 */
  push32((uint32_t)(0x10d3e6c8u));
  /* 10d21c8e call dword ptr [0x10d40250] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40250))), 0x10d21c94u);
  /* 10d21c94 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d21c97 je 0x10d21dae */
  if (C.zf) goto L_10d21dae;
  /* 10d21c9d mov dword ptr [0x10d3e6c0], 1 */
  w32((uint32_t)(0x10d3e6c0), (0x1u));
  /* 10d21ca7 mov ecx, dword ptr [0x10d3e6c8] */
  ECX = (r32((uint32_t)(0x10d3e6c8)));
  /* 10d21cad imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d21cb0 mov dword ptr [0x10d3dd90], ecx */
  w32((uint32_t)(0x10d3dd90), (ECX));
  /* 10d21cb6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d21cb8 mov dx, word ptr [0x10d3e70e] */
  DX = (r16((uint32_t)(0x10d3e70e)));
  /* 10d21cbf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d21cc1 je 0x10d21cd9 */
  if (C.zf) goto L_10d21cd9;
  /* 10d21cc3 mov eax, dword ptr [0x10d3e71c] */
  EAX = (r32((uint32_t)(0x10d3e71c)));
  /* 10d21cc8 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d21ccb mov ecx, dword ptr [0x10d3dd90] */
  ECX = (r32((uint32_t)(0x10d3dd90)));
  /* 10d21cd1 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21cd3 mov dword ptr [0x10d3dd90], ecx */
  w32((uint32_t)(0x10d3dd90), (ECX));
L_10d21cd9:;
  /* 10d21cd9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d21cdb mov dx, word ptr [0x10d3e762] */
  DX = (r16((uint32_t)(0x10d3e762)));
  /* 10d21ce2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d21ce4 je 0x10d21d0e */
  if (C.zf) goto L_10d21d0e;
  /* 10d21ce6 cmp dword ptr [0x10d3e770], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e770))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d21ced je 0x10d21d0e */
  if (C.zf) goto L_10d21d0e;
  /* 10d21cef mov dword ptr [0x10d3dd94], 1 */
  w32((uint32_t)(0x10d3dd94), (0x1u));
  /* 10d21cf9 mov eax, dword ptr [0x10d3e770] */
  EAX = (r32((uint32_t)(0x10d3e770)));
  /* 10d21cfe sub eax, dword ptr [0x10d3e71c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10d3e71c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d21d04 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d21d07 mov dword ptr [0x10d3dd98], eax */
  w32((uint32_t)(0x10d3dd98), (EAX));
  /* 10d21d0c jmp 0x10d21d22 */
  goto L_10d21d22;
L_10d21d0e:;
  /* 10d21d0e mov dword ptr [0x10d3dd94], 0 */
  w32((uint32_t)(0x10d3dd94), (0x0u));
  /* 10d21d18 mov dword ptr [0x10d3dd98], 0 */
  w32((uint32_t)(0x10d3dd98), (0x0u));
L_10d21d22:;
  /* 10d21d22 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10d21d25 push ecx */
  push32((uint32_t)(ECX));
  /* 10d21d26 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d21d28 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10d21d2a mov edx, dword ptr [0x10d3de1c] */
  EDX = (r32((uint32_t)(0x10d3de1c)));
  /* 10d21d30 push edx */
  push32((uint32_t)(EDX));
  /* 10d21d31 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10d21d33 push 0x10d3e6cc */
  push32((uint32_t)(0x10d3e6ccu));
  /* 10d21d38 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10d21d3d mov eax, dword ptr [0x10d3e630] */
  EAX = (r32((uint32_t)(0x10d3e630)));
  /* 10d21d42 push eax */
  push32((uint32_t)(EAX));
  /* 10d21d43 call dword ptr [0x10d402fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402fc))), 0x10d21d49u);
  /* 10d21d49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d21d4b je 0x10d21d5f */
  if (C.zf) goto L_10d21d5f;
  /* 10d21d4d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d21d51 jne 0x10d21d5f */
  if (!C.zf) goto L_10d21d5f;
  /* 10d21d53 mov ecx, dword ptr [0x10d3de1c] */
  ECX = (r32((uint32_t)(0x10d3de1c)));
  /* 10d21d59 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 10d21d5d jmp 0x10d21d68 */
  goto L_10d21d68;
L_10d21d5f:;
  /* 10d21d5f mov edx, dword ptr [0x10d3de1c] */
  EDX = (r32((uint32_t)(0x10d3de1c)));
  /* 10d21d65 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10d21d68:;
  /* 10d21d68 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10d21d6b push eax */
  push32((uint32_t)(EAX));
  /* 10d21d6c push 0 */
  push32((uint32_t)(0x0u));
  /* 10d21d6e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10d21d70 mov ecx, dword ptr [0x10d3de20] */
  ECX = (r32((uint32_t)(0x10d3de20)));
  /* 10d21d76 push ecx */
  push32((uint32_t)(ECX));
  /* 10d21d77 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10d21d79 push 0x10d3e720 */
  push32((uint32_t)(0x10d3e720u));
  /* 10d21d7e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10d21d83 mov edx, dword ptr [0x10d3e630] */
  EDX = (r32((uint32_t)(0x10d3e630)));
  /* 10d21d89 push edx */
  push32((uint32_t)(EDX));
  /* 10d21d8a call dword ptr [0x10d402fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402fc))), 0x10d21d90u);
  /* 10d21d90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d21d92 je 0x10d21da5 */
  if (C.zf) goto L_10d21da5;
  /* 10d21d94 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d21d98 jne 0x10d21da5 */
  if (!C.zf) goto L_10d21da5;
  /* 10d21d9a mov eax, dword ptr [0x10d3de20] */
  EAX = (r32((uint32_t)(0x10d3de20)));
  /* 10d21d9f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 10d21da3 jmp 0x10d21dae */
  goto L_10d21dae;
L_10d21da5:;
  /* 10d21da5 mov ecx, dword ptr [0x10d3de20] */
  ECX = (r32((uint32_t)(0x10d3de20)));
  /* 10d21dab mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_10d21dae:;
  /* 10d21dae jmp 0x10d21fd7 */
  goto L_10d21fd7;
L_10d21db3:;
  /* 10d21db3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d21db6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d21db9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d21dbb je 0x10d21ddd */
  if (C.zf) goto L_10d21ddd;
  /* 10d21dbd cmp dword ptr [0x10d3e774], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e774))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d21dc4 je 0x10d21dec */
  if (C.zf) goto L_10d21dec;
  /* 10d21dc6 mov ecx, dword ptr [0x10d3e774] */
  ECX = (r32((uint32_t)(0x10d3e774)));
  /* 10d21dcc push ecx */
  push32((uint32_t)(ECX));
  /* 10d21dcd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d21dd0 push edx */
  push32((uint32_t)(EDX));
  /* 10d21dd1 call 0x10d1ed60 */
  push32(0x10d21dd6u); f_10d1ed60();
  /* 10d21dd6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21dd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d21ddb jne 0x10d21dec */
  if (!C.zf) goto L_10d21dec;
L_10d21ddd:;
  /* 10d21ddd push 0xc */
  push32((uint32_t)(0xcu));
  /* 10d21ddf call 0x10d16b70 */
  push32(0x10d21de4u); f_10d16b70();
  /* 10d21de4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21de7 jmp 0x10d21fd7 */
  goto L_10d21fd7;
L_10d21dec:;
  /* 10d21dec push 2 */
  push32((uint32_t)(0x2u));
  /* 10d21dee mov eax, dword ptr [0x10d3e774] */
  EAX = (r32((uint32_t)(0x10d3e774)));
  /* 10d21df3 push eax */
  push32((uint32_t)(EAX));
  /* 10d21df4 call 0x10d13b60 */
  push32(0x10d21df9u); f_10d13b60();
  /* 10d21df9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21dfc push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 10d21e01 push 0x10d3a888 */
  push32((uint32_t)(0x10d3a888u));
  /* 10d21e06 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d21e08 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d21e0b push ecx */
  push32((uint32_t)(ECX));
  /* 10d21e0c call 0x10d15f00 */
  push32(0x10d21e11u); f_10d15f00();
  /* 10d21e11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21e14 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21e17 push eax */
  push32((uint32_t)(EAX));
  /* 10d21e18 call 0x10d130d0 */
  push32(0x10d21e1du); f_10d130d0();
  /* 10d21e1d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21e20 mov dword ptr [0x10d3e774], eax */
  w32((uint32_t)(0x10d3e774), (EAX));
  /* 10d21e25 cmp dword ptr [0x10d3e774], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e774))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d21e2c jne 0x10d21e3d */
  if (!C.zf) goto L_10d21e3d;
  /* 10d21e2e push 0xc */
  push32((uint32_t)(0xcu));
  /* 10d21e30 call 0x10d16b70 */
  push32(0x10d21e35u); f_10d16b70();
  /* 10d21e35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21e38 jmp 0x10d21fd7 */
  goto L_10d21fd7;
L_10d21e3d:;
  /* 10d21e3d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d21e40 push edx */
  push32((uint32_t)(EDX));
  /* 10d21e41 mov eax, dword ptr [0x10d3e774] */
  EAX = (r32((uint32_t)(0x10d3e774)));
  /* 10d21e46 push eax */
  push32((uint32_t)(EAX));
  /* 10d21e47 call 0x10d16080 */
  push32(0x10d21e4cu); f_10d16080();
  /* 10d21e4c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21e4f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10d21e51 call 0x10d16b70 */
  push32(0x10d21e56u); f_10d16b70();
  /* 10d21e56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21e59 push 3 */
  push32((uint32_t)(0x3u));
  /* 10d21e5b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d21e5e push ecx */
  push32((uint32_t)(ECX));
  /* 10d21e5f mov edx, dword ptr [0x10d3de1c] */
  EDX = (r32((uint32_t)(0x10d3de1c)));
  /* 10d21e65 push edx */
  push32((uint32_t)(EDX));
  /* 10d21e66 call 0x10d168f0 */
  push32(0x10d21e6bu); f_10d168f0();
  /* 10d21e6b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21e6e mov eax, dword ptr [0x10d3de1c] */
  EAX = (r32((uint32_t)(0x10d3de1c)));
  /* 10d21e73 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 10d21e77 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d21e7a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21e7d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d21e80 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d21e83 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d21e86 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d21e89 jne 0x10d21e9d */
  if (!C.zf) goto L_10d21e9d;
  /* 10d21e8b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d21e8e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21e91 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d21e94 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d21e97 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21e9a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10d21e9d:;
  /* 10d21e9d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d21ea0 push eax */
  push32((uint32_t)(EAX));
  /* 10d21ea1 call 0x10d21980 */
  push32(0x10d21ea6u); f_10d21980();
  /* 10d21ea6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21ea9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d21eaf mov dword ptr [0x10d3dd90], eax */
  w32((uint32_t)(0x10d3dd90), (EAX));
L_10d21eb4:;
  /* 10d21eb4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d21eb7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d21eba cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d21ebd je 0x10d21ed5 */
  if (C.zf) goto L_10d21ed5;
  /* 10d21ebf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d21ec2 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d21ec5 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d21ec8 jl 0x10d21ee0 */
  if ((C.sf!=C.of)) goto L_10d21ee0;
  /* 10d21eca mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d21ecd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d21ed0 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d21ed3 jg 0x10d21ee0 */
  if ((!C.zf&&C.sf==C.of)) goto L_10d21ee0;
L_10d21ed5:;
  /* 10d21ed5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d21ed8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21edb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d21ede jmp 0x10d21eb4 */
  goto L_10d21eb4;
L_10d21ee0:;
  /* 10d21ee0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d21ee3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d21ee6 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d21ee9 jne 0x10d21f85 */
  if (!C.zf) goto L_10d21f85;
  /* 10d21eef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d21ef2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21ef5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d21ef8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d21efb push edx */
  push32((uint32_t)(EDX));
  /* 10d21efc call 0x10d21980 */
  push32(0x10d21f01u); f_10d21980();
  /* 10d21f01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21f04 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d21f07 mov ecx, dword ptr [0x10d3dd90] */
  ECX = (r32((uint32_t)(0x10d3dd90)));
  /* 10d21f0d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21f0f mov dword ptr [0x10d3dd90], ecx */
  w32((uint32_t)(0x10d3dd90), (ECX));
L_10d21f15:;
  /* 10d21f15 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d21f18 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d21f1b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d21f1e jl 0x10d21f36 */
  if ((C.sf!=C.of)) goto L_10d21f36;
  /* 10d21f20 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d21f23 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d21f26 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d21f29 jg 0x10d21f36 */
  if ((!C.zf&&C.sf==C.of)) goto L_10d21f36;
  /* 10d21f2b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d21f2e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21f31 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d21f34 jmp 0x10d21f15 */
  goto L_10d21f15;
L_10d21f36:;
  /* 10d21f36 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d21f39 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d21f3c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d21f3f jne 0x10d21f85 */
  if (!C.zf) goto L_10d21f85;
  /* 10d21f41 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d21f44 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21f47 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d21f4a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d21f4d push ecx */
  push32((uint32_t)(ECX));
  /* 10d21f4e call 0x10d21980 */
  push32(0x10d21f53u); f_10d21980();
  /* 10d21f53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21f56 mov edx, dword ptr [0x10d3dd90] */
  EDX = (r32((uint32_t)(0x10d3dd90)));
  /* 10d21f5c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21f5e mov dword ptr [0x10d3dd90], edx */
  w32((uint32_t)(0x10d3dd90), (EDX));
L_10d21f64:;
  /* 10d21f64 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d21f67 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d21f6a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d21f6d jl 0x10d21f85 */
  if ((C.sf!=C.of)) goto L_10d21f85;
  /* 10d21f6f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d21f72 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d21f75 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d21f78 jg 0x10d21f85 */
  if ((!C.zf&&C.sf==C.of)) goto L_10d21f85;
  /* 10d21f7a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d21f7d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21f80 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d21f83 jmp 0x10d21f64 */
  goto L_10d21f64;
L_10d21f85:;
  /* 10d21f85 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d21f89 je 0x10d21f99 */
  if (C.zf) goto L_10d21f99;
  /* 10d21f8b mov edx, dword ptr [0x10d3dd90] */
  EDX = (r32((uint32_t)(0x10d3dd90)));
  /* 10d21f91 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d21f93 mov dword ptr [0x10d3dd90], edx */
  w32((uint32_t)(0x10d3dd90), (EDX));
L_10d21f99:;
  /* 10d21f99 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d21f9c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d21f9f mov dword ptr [0x10d3dd94], ecx */
  w32((uint32_t)(0x10d3dd94), (ECX));
  /* 10d21fa5 cmp dword ptr [0x10d3dd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3dd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d21fac je 0x10d21fce */
  if (C.zf) goto L_10d21fce;
  /* 10d21fae push 3 */
  push32((uint32_t)(0x3u));
  /* 10d21fb0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d21fb3 push edx */
  push32((uint32_t)(EDX));
  /* 10d21fb4 mov eax, dword ptr [0x10d3de20] */
  EAX = (r32((uint32_t)(0x10d3de20)));
  /* 10d21fb9 push eax */
  push32((uint32_t)(EAX));
  /* 10d21fba call 0x10d168f0 */
  push32(0x10d21fbfu); f_10d168f0();
  /* 10d21fbf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21fc2 mov ecx, dword ptr [0x10d3de20] */
  ECX = (r32((uint32_t)(0x10d3de20)));
  /* 10d21fc8 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 10d21fcc jmp 0x10d21fd7 */
  goto L_10d21fd7;
L_10d21fce:;
  /* 10d21fce mov edx, dword ptr [0x10d3de20] */
  EDX = (r32((uint32_t)(0x10d3de20)));
  /* 10d21fd4 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10d21fd7:;
  /* 10d21fd7 mov esp, ebp */
  ESP = (EBP);
  /* 10d21fd9 pop ebp */
  EBP = (pop32());
  /* 10d21fda ret  */
  ESPCHK(0x10d21c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10011fe0 @ 0x10d21fe0 (46 bytes, 18 insns) */
void f_10d21fe0(void) {
  FTRACE(0x10d21fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d21fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d21fe1 mov ebp, esp */
  EBP = (ESP);
  /* 10d21fe3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d21fe4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10d21fe6 call 0x10d16ad0 */
  push32(0x10d21febu); f_10d16ad0();
  /* 10d21feb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21fee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d21ff1 push eax */
  push32((uint32_t)(EAX));
  /* 10d21ff2 call 0x10d22010 */
  push32(0x10d21ff7u); f_10d22010();
  /* 10d21ff7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d21ffa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d21ffd push 0xb */
  push32((uint32_t)(0xbu));
  /* 10d21fff call 0x10d16b70 */
  push32(0x10d22004u); f_10d16b70();
  /* 10d22004 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d22007 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d2200a mov esp, ebp */
  ESP = (EBP);
  /* 10d2200c pop ebp */
  EBP = (pop32());
  /* 10d2200d ret  */
  ESPCHK(0x10d21fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012010 @ 0x10d22010 (762 bytes, 246 insns) */
void f_10d22010(void) {
  FTRACE(0x10d22010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d22010 push ebp */
  push32((uint32_t)(EBP));
  /* 10d22011 mov ebp, esp */
  EBP = (ESP);
  /* 10d22013 push ecx */
  push32((uint32_t)(ECX));
  /* 10d22014 cmp dword ptr [0x10d3dd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3dd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d2201b jne 0x10d22024 */
  if (!C.zf) goto L_10d22024;
  /* 10d2201d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d2201f jmp 0x10d22306 */
  goto L_10d22306;
L_10d22024:;
  /* 10d22024 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d22027 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10d2202a cmp ecx, dword ptr [0x10d3de28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10d3de28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22030 jne 0x10d22044 */
  if (!C.zf) goto L_10d22044;
  /* 10d22032 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d22035 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d22038 cmp eax, dword ptr [0x10d3de38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10d3de38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d2203e je 0x10d2220b */
  if (C.zf) goto L_10d2220b;
L_10d22044:;
  /* 10d22044 cmp dword ptr [0x10d3e6c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e6c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d2204b je 0x10d221c5 */
  if (C.zf) goto L_10d221c5;
  /* 10d22051 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d22053 mov cx, word ptr [0x10d3e760] */
  CX = (r16((uint32_t)(0x10d3e760)));
  /* 10d2205a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d2205c jne 0x10d220b9 */
  if (!C.zf) goto L_10d220b9;
  /* 10d2205e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d22060 mov dx, word ptr [0x10d3e76e] */
  DX = (r16((uint32_t)(0x10d3e76e)));
  /* 10d22067 push edx */
  push32((uint32_t)(EDX));
  /* 10d22068 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d2206a mov ax, word ptr [0x10d3e76c] */
  AX = (r16((uint32_t)(0x10d3e76c)));
  /* 10d22070 push eax */
  push32((uint32_t)(EAX));
  /* 10d22071 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d22073 mov cx, word ptr [0x10d3e76a] */
  CX = (r16((uint32_t)(0x10d3e76a)));
  /* 10d2207a push ecx */
  push32((uint32_t)(ECX));
  /* 10d2207b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d2207d mov dx, word ptr [0x10d3e768] */
  DX = (r16((uint32_t)(0x10d3e768)));
  /* 10d22084 push edx */
  push32((uint32_t)(EDX));
  /* 10d22085 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d22087 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d22089 mov ax, word ptr [0x10d3e764] */
  AX = (r16((uint32_t)(0x10d3e764)));
  /* 10d2208f push eax */
  push32((uint32_t)(EAX));
  /* 10d22090 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d22092 mov cx, word ptr [0x10d3e766] */
  CX = (r16((uint32_t)(0x10d3e766)));
  /* 10d22099 push ecx */
  push32((uint32_t)(ECX));
  /* 10d2209a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d2209c mov dx, word ptr [0x10d3e762] */
  DX = (r16((uint32_t)(0x10d3e762)));
  /* 10d220a3 push edx */
  push32((uint32_t)(EDX));
  /* 10d220a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d220a7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10d220aa push ecx */
  push32((uint32_t)(ECX));
  /* 10d220ab push 1 */
  push32((uint32_t)(0x1u));
  /* 10d220ad push 1 */
  push32((uint32_t)(0x1u));
  /* 10d220af call 0x10d22310 */
  push32(0x10d220b4u); f_10d22310();
  /* 10d220b4 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d220b7 jmp 0x10d2210a */
  goto L_10d2210a;
L_10d220b9:;
  /* 10d220b9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d220bb mov dx, word ptr [0x10d3e76e] */
  DX = (r16((uint32_t)(0x10d3e76e)));
  /* 10d220c2 push edx */
  push32((uint32_t)(EDX));
  /* 10d220c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d220c5 mov ax, word ptr [0x10d3e76c] */
  AX = (r16((uint32_t)(0x10d3e76c)));
  /* 10d220cb push eax */
  push32((uint32_t)(EAX));
  /* 10d220cc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d220ce mov cx, word ptr [0x10d3e76a] */
  CX = (r16((uint32_t)(0x10d3e76a)));
  /* 10d220d5 push ecx */
  push32((uint32_t)(ECX));
  /* 10d220d6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d220d8 mov dx, word ptr [0x10d3e768] */
  DX = (r16((uint32_t)(0x10d3e768)));
  /* 10d220df push edx */
  push32((uint32_t)(EDX));
  /* 10d220e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d220e2 mov ax, word ptr [0x10d3e766] */
  AX = (r16((uint32_t)(0x10d3e766)));
  /* 10d220e8 push eax */
  push32((uint32_t)(EAX));
  /* 10d220e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d220eb push 0 */
  push32((uint32_t)(0x0u));
  /* 10d220ed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d220ef mov cx, word ptr [0x10d3e762] */
  CX = (r16((uint32_t)(0x10d3e762)));
  /* 10d220f6 push ecx */
  push32((uint32_t)(ECX));
  /* 10d220f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d220fa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d220fd push eax */
  push32((uint32_t)(EAX));
  /* 10d220fe push 0 */
  push32((uint32_t)(0x0u));
  /* 10d22100 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d22102 call 0x10d22310 */
  push32(0x10d22107u); f_10d22310();
  /* 10d22107 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d2210a:;
  /* 10d2210a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d2210c mov cx, word ptr [0x10d3e70c] */
  CX = (r16((uint32_t)(0x10d3e70c)));
  /* 10d22113 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d22115 jne 0x10d22172 */
  if (!C.zf) goto L_10d22172;
  /* 10d22117 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d22119 mov dx, word ptr [0x10d3e71a] */
  DX = (r16((uint32_t)(0x10d3e71a)));
  /* 10d22120 push edx */
  push32((uint32_t)(EDX));
  /* 10d22121 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d22123 mov ax, word ptr [0x10d3e718] */
  AX = (r16((uint32_t)(0x10d3e718)));
  /* 10d22129 push eax */
  push32((uint32_t)(EAX));
  /* 10d2212a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d2212c mov cx, word ptr [0x10d3e716] */
  CX = (r16((uint32_t)(0x10d3e716)));
  /* 10d22133 push ecx */
  push32((uint32_t)(ECX));
  /* 10d22134 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d22136 mov dx, word ptr [0x10d3e714] */
  DX = (r16((uint32_t)(0x10d3e714)));
  /* 10d2213d push edx */
  push32((uint32_t)(EDX));
  /* 10d2213e push 0 */
  push32((uint32_t)(0x0u));
  /* 10d22140 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d22142 mov ax, word ptr [0x10d3e710] */
  AX = (r16((uint32_t)(0x10d3e710)));
  /* 10d22148 push eax */
  push32((uint32_t)(EAX));
  /* 10d22149 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d2214b mov cx, word ptr [0x10d3e712] */
  CX = (r16((uint32_t)(0x10d3e712)));
  /* 10d22152 push ecx */
  push32((uint32_t)(ECX));
  /* 10d22153 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d22155 mov dx, word ptr [0x10d3e70e] */
  DX = (r16((uint32_t)(0x10d3e70e)));
  /* 10d2215c push edx */
  push32((uint32_t)(EDX));
  /* 10d2215d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d22160 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10d22163 push ecx */
  push32((uint32_t)(ECX));
  /* 10d22164 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d22166 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d22168 call 0x10d22310 */
  push32(0x10d2216du); f_10d22310();
  /* 10d2216d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d22170 jmp 0x10d221c3 */
  goto L_10d221c3;
L_10d22172:;
  /* 10d22172 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d22174 mov dx, word ptr [0x10d3e71a] */
  DX = (r16((uint32_t)(0x10d3e71a)));
  /* 10d2217b push edx */
  push32((uint32_t)(EDX));
  /* 10d2217c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d2217e mov ax, word ptr [0x10d3e718] */
  AX = (r16((uint32_t)(0x10d3e718)));
  /* 10d22184 push eax */
  push32((uint32_t)(EAX));
  /* 10d22185 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d22187 mov cx, word ptr [0x10d3e716] */
  CX = (r16((uint32_t)(0x10d3e716)));
  /* 10d2218e push ecx */
  push32((uint32_t)(ECX));
  /* 10d2218f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d22191 mov dx, word ptr [0x10d3e714] */
  DX = (r16((uint32_t)(0x10d3e714)));
  /* 10d22198 push edx */
  push32((uint32_t)(EDX));
  /* 10d22199 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d2219b mov ax, word ptr [0x10d3e712] */
  AX = (r16((uint32_t)(0x10d3e712)));
  /* 10d221a1 push eax */
  push32((uint32_t)(EAX));
  /* 10d221a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d221a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d221a6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d221a8 mov cx, word ptr [0x10d3e70e] */
  CX = (r16((uint32_t)(0x10d3e70e)));
  /* 10d221af push ecx */
  push32((uint32_t)(ECX));
  /* 10d221b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d221b3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d221b6 push eax */
  push32((uint32_t)(EAX));
  /* 10d221b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d221b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d221bb call 0x10d22310 */
  push32(0x10d221c0u); f_10d22310();
  /* 10d221c0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d221c3:;
  /* 10d221c3 jmp 0x10d2220b */
  goto L_10d2220b;
L_10d221c5:;
  /* 10d221c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d221c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d221c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d221cb push 2 */
  push32((uint32_t)(0x2u));
  /* 10d221cd push 0 */
  push32((uint32_t)(0x0u));
  /* 10d221cf push 0 */
  push32((uint32_t)(0x0u));
  /* 10d221d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d221d3 push 4 */
  push32((uint32_t)(0x4u));
  /* 10d221d5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d221d8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10d221db push edx */
  push32((uint32_t)(EDX));
  /* 10d221dc push 1 */
  push32((uint32_t)(0x1u));
  /* 10d221de push 1 */
  push32((uint32_t)(0x1u));
  /* 10d221e0 call 0x10d22310 */
  push32(0x10d221e5u); f_10d22310();
  /* 10d221e5 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d221e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d221ea push 0 */
  push32((uint32_t)(0x0u));
  /* 10d221ec push 0 */
  push32((uint32_t)(0x0u));
  /* 10d221ee push 2 */
  push32((uint32_t)(0x2u));
  /* 10d221f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d221f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d221f4 push 5 */
  push32((uint32_t)(0x5u));
  /* 10d221f6 push 0xa */
  push32((uint32_t)(0xau));
  /* 10d221f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d221fb mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10d221fe push ecx */
  push32((uint32_t)(ECX));
  /* 10d221ff push 1 */
  push32((uint32_t)(0x1u));
  /* 10d22201 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d22203 call 0x10d22310 */
  push32(0x10d22208u); f_10d22310();
  /* 10d22208 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d2220b:;
  /* 10d2220b mov edx, dword ptr [0x10d3de2c] */
  EDX = (r32((uint32_t)(0x10d3de2c)));
  /* 10d22211 cmp edx, dword ptr [0x10d3de3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10d3de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22217 jge 0x10d22264 */
  if ((C.sf==C.of)) goto L_10d22264;
  /* 10d22219 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d2221c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10d2221f cmp ecx, dword ptr [0x10d3de2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10d3de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22225 jl 0x10d22235 */
  if ((C.sf!=C.of)) goto L_10d22235;
  /* 10d22227 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d2222a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10d2222d cmp eax, dword ptr [0x10d3de3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10d3de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22233 jle 0x10d2223c */
  if ((C.zf||C.sf!=C.of)) goto L_10d2223c;
L_10d22235:;
  /* 10d22235 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d22237 jmp 0x10d22306 */
  goto L_10d22306;
L_10d2223c:;
  /* 10d2223c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d2223f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10d22242 cmp edx, dword ptr [0x10d3de2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10d3de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22248 jle 0x10d22262 */
  if ((C.zf||C.sf!=C.of)) goto L_10d22262;
  /* 10d2224a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d2224d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10d22250 cmp ecx, dword ptr [0x10d3de3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10d3de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22256 jge 0x10d22262 */
  if ((C.sf==C.of)) goto L_10d22262;
  /* 10d22258 mov eax, 1 */
  EAX = (0x1u);
  /* 10d2225d jmp 0x10d22306 */
  goto L_10d22306;
L_10d22262:;
  /* 10d22262 jmp 0x10d222a7 */
  goto L_10d222a7;
L_10d22264:;
  /* 10d22264 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d22267 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10d2226a cmp eax, dword ptr [0x10d3de3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10d3de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22270 jl 0x10d22280 */
  if ((C.sf!=C.of)) goto L_10d22280;
  /* 10d22272 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d22275 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10d22278 cmp edx, dword ptr [0x10d3de2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10d3de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d2227e jle 0x10d22287 */
  if ((C.zf||C.sf!=C.of)) goto L_10d22287;
L_10d22280:;
  /* 10d22280 mov eax, 1 */
  EAX = (0x1u);
  /* 10d22285 jmp 0x10d22306 */
  goto L_10d22306;
L_10d22287:;
  /* 10d22287 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d2228a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10d2228d cmp ecx, dword ptr [0x10d3de3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10d3de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22293 jle 0x10d222a7 */
  if ((C.zf||C.sf!=C.of)) goto L_10d222a7;
  /* 10d22295 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d22298 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10d2229b cmp eax, dword ptr [0x10d3de2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10d3de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d222a1 jge 0x10d222a7 */
  if ((C.sf==C.of)) goto L_10d222a7;
  /* 10d222a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d222a5 jmp 0x10d22306 */
  goto L_10d22306;
L_10d222a7:;
  /* 10d222a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d222aa mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d222ad imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d222b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d222b3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d222b5 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d222b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d222ba mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10d222bd imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d222c3 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d222c5 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d222cb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d222ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d222d1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10d222d4 cmp edx, dword ptr [0x10d3de2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10d3de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d222da jne 0x10d222f2 */
  if (!C.zf) goto L_10d222f2;
  /* 10d222dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d222df cmp eax, dword ptr [0x10d3de30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10d3de30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d222e5 jl 0x10d222ee */
  if ((C.sf!=C.of)) goto L_10d222ee;
  /* 10d222e7 mov eax, 1 */
  EAX = (0x1u);
  /* 10d222ec jmp 0x10d22306 */
  goto L_10d22306;
L_10d222ee:;
  /* 10d222ee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d222f0 jmp 0x10d22306 */
  goto L_10d22306;
L_10d222f2:;
  /* 10d222f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d222f5 cmp ecx, dword ptr [0x10d3de40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10d3de40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d222fb jge 0x10d22304 */
  if ((C.sf==C.of)) goto L_10d22304;
  /* 10d222fd mov eax, 1 */
  EAX = (0x1u);
  /* 10d22302 jmp 0x10d22306 */
  goto L_10d22306;
L_10d22304:;
  /* 10d22304 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d22306:;
  /* 10d22306 mov esp, ebp */
  ESP = (EBP);
  /* 10d22308 pop ebp */
  EBP = (pop32());
  /* 10d22309 ret  */
  ESPCHK(0x10d22010u, _esp0);
  ESP += 4; return;
}

/* FUN_10012310 @ 0x10d22310 (504 bytes, 145 insns) */
void f_10d22310(void) {
  FTRACE(0x10d22310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d22310 push ebp */
  push32((uint32_t)(EBP));
  /* 10d22311 mov ebp, esp */
  EBP = (ESP);
  /* 10d22313 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d22316 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d2231a jne 0x10d223ec */
  if (!C.zf) goto L_10d223ec;
  /* 10d22320 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d22323 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10d22326 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d22328 jne 0x10d22339 */
  if (!C.zf) goto L_10d22339;
  /* 10d2232a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d2232d mov edx, dword ptr [ecx*4 + 0x10d3de4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10d3de4c)));
  /* 10d22334 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10d22337 jmp 0x10d22346 */
  goto L_10d22346;
L_10d22339:;
  /* 10d22339 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d2233c mov ecx, dword ptr [eax*4 + 0x10d3de80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10d3de80)));
  /* 10d22343 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10d22346:;
  /* 10d22346 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d22349 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d2234c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10d2234f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d22352 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d22355 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d2235b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d2235e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d22360 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d22363 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d22366 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10d22369 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 10d2236d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10d2236e mov ecx, 7 */
  ECX = (0x7u);
  /* 10d22373 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10d22375 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d22378 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d2237b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d2237e jge 0x10d22399 */
  if ((C.sf==C.of)) goto L_10d22399;
  /* 10d22380 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10d22383 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d22386 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d22389 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d2238c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d2238f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d22392 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d22394 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d22397 jmp 0x10d223ad */
  goto L_10d223ad;
L_10d22399:;
  /* 10d22399 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10d2239c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d2239f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d223a2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d223a5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d223a8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d223aa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10d223ad:;
  /* 10d223ad cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d223b1 jne 0x10d223ea */
  if (!C.zf) goto L_10d223ea;
  /* 10d223b3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d223b6 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10d223b9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d223bb jne 0x10d223cc */
  if (!C.zf) goto L_10d223cc;
  /* 10d223bd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d223c0 mov eax, dword ptr [edx*4 + 0x10d3de50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10d3de50)));
  /* 10d223c7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10d223ca jmp 0x10d223d9 */
  goto L_10d223d9;
L_10d223cc:;
  /* 10d223cc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d223cf mov edx, dword ptr [ecx*4 + 0x10d3de84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10d3de84)));
  /* 10d223d6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10d223d9:;
  /* 10d223d9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d223dc cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d223df jle 0x10d223ea */
  if ((C.zf||C.sf!=C.of)) goto L_10d223ea;
  /* 10d223e1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d223e4 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d223e7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10d223ea:;
  /* 10d223ea jmp 0x10d22421 */
  goto L_10d22421;
L_10d223ec:;
  /* 10d223ec mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d223ef and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10d223f2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d223f4 jne 0x10d22405 */
  if (!C.zf) goto L_10d22405;
  /* 10d223f6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d223f9 mov ecx, dword ptr [eax*4 + 0x10d3de4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10d3de4c)));
  /* 10d22400 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10d22403 jmp 0x10d22412 */
  goto L_10d22412;
L_10d22405:;
  /* 10d22405 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d22408 mov eax, dword ptr [edx*4 + 0x10d3de80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10d3de80)));
  /* 10d2240f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10d22412:;
  /* 10d22412 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d22415 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d22418 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d2241b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d2241e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10d22421:;
  /* 10d22421 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22425 jne 0x10d22461 */
  if (!C.zf) goto L_10d22461;
  /* 10d22427 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d2242a mov dword ptr [0x10d3de2c], eax */
  w32((uint32_t)(0x10d3de2c), (EAX));
  /* 10d2242f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10d22432 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d22435 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10d22438 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d2243a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d2243d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10d22440 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d22442 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d22448 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10d2244b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d2244d mov dword ptr [0x10d3de30], ecx */
  w32((uint32_t)(0x10d3de30), (ECX));
  /* 10d22453 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d22456 mov dword ptr [0x10d3de28], edx */
  w32((uint32_t)(0x10d3de28), (EDX));
  /* 10d2245c jmp 0x10d22504 */
  goto L_10d22504;
L_10d22461:;
  /* 10d22461 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d22464 mov dword ptr [0x10d3de3c], eax */
  w32((uint32_t)(0x10d3de3c), (EAX));
  /* 10d22469 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10d2246c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d2246f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10d22472 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d22474 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d22477 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10d2247a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d2247c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d22482 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10d22485 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d22487 mov dword ptr [0x10d3de40], ecx */
  w32((uint32_t)(0x10d3de40), (ECX));
  /* 10d2248d mov edx, dword ptr [0x10d3dd98] */
  EDX = (r32((uint32_t)(0x10d3dd98)));
  /* 10d22493 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d22499 mov eax, dword ptr [0x10d3de40] */
  EAX = (r32((uint32_t)(0x10d3de40)));
  /* 10d2249e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d224a0 mov dword ptr [0x10d3de40], eax */
  w32((uint32_t)(0x10d3de40), (EAX));
  /* 10d224a5 cmp dword ptr [0x10d3de40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3de40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d224ac jge 0x10d224d1 */
  if ((C.sf==C.of)) goto L_10d224d1;
  /* 10d224ae mov ecx, dword ptr [0x10d3de40] */
  ECX = (r32((uint32_t)(0x10d3de40)));
  /* 10d224b4 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d224ba mov dword ptr [0x10d3de40], ecx */
  w32((uint32_t)(0x10d3de40), (ECX));
  /* 10d224c0 mov edx, dword ptr [0x10d3de3c] */
  EDX = (r32((uint32_t)(0x10d3de3c)));
  /* 10d224c6 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d224c9 mov dword ptr [0x10d3de3c], edx */
  w32((uint32_t)(0x10d3de3c), (EDX));
  /* 10d224cf jmp 0x10d224fb */
  goto L_10d224fb;
L_10d224d1:;
  /* 10d224d1 cmp dword ptr [0x10d3de40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x10d3de40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d224db jl 0x10d224fb */
  if ((C.sf!=C.of)) goto L_10d224fb;
  /* 10d224dd mov eax, dword ptr [0x10d3de40] */
  EAX = (r32((uint32_t)(0x10d3de40)));
  /* 10d224e2 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d224e7 mov dword ptr [0x10d3de40], eax */
  w32((uint32_t)(0x10d3de40), (EAX));
  /* 10d224ec mov ecx, dword ptr [0x10d3de3c] */
  ECX = (r32((uint32_t)(0x10d3de3c)));
  /* 10d224f2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d224f5 mov dword ptr [0x10d3de3c], ecx */
  w32((uint32_t)(0x10d3de3c), (ECX));
L_10d224fb:;
  /* 10d224fb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d224fe mov dword ptr [0x10d3de38], edx */
  w32((uint32_t)(0x10d3de38), (EDX));
L_10d22504:;
  /* 10d22504 mov esp, ebp */
  ESP = (EBP);
  /* 10d22506 pop ebp */
  EBP = (pop32());
  /* 10d22507 ret  */
  ESPCHK(0x10d22310u, _esp0);
  ESP += 4; return;
}

/* FUN_10012510 @ 0x10d22510 (382 bytes, 135 insns) */
void f_10d22510(void) {
  FTRACE(0x10d22510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d22510 push ebp */
  push32((uint32_t)(EBP));
  /* 10d22511 mov ebp, esp */
  EBP = (ESP);
  /* 10d22513 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10d22515 push 0x10d3a898 */
  push32((uint32_t)(0x10d3a898u));
  /* 10d2251a push 0x10d1c1d8 */
  push32((uint32_t)(0x10d1c1d8u));
  /* 10d2251f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10d22525 push eax */
  push32((uint32_t)(EAX));
  /* 10d22526 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10d2252d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d22530 push ebx */
  push32((uint32_t)(EBX));
  /* 10d22531 push esi */
  push32((uint32_t)(ESI));
  /* 10d22532 push edi */
  push32((uint32_t)(EDI));
  /* 10d22533 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10d22536 cmp dword ptr [0x10d3e77c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e77c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d2253d jne 0x10d22582 */
  if (!C.zf) goto L_10d22582;
  /* 10d2253f push 0 */
  push32((uint32_t)(0x0u));
  /* 10d22541 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d22543 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d22545 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d22547 call dword ptr [0x10d4024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d4024c))), 0x10d2254du);
  /* 10d2254d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d2254f je 0x10d2255d */
  if (C.zf) goto L_10d2255d;
  /* 10d22551 mov dword ptr [0x10d3e77c], 1 */
  w32((uint32_t)(0x10d3e77c), (0x1u));
  /* 10d2255b jmp 0x10d22582 */
  goto L_10d22582;
L_10d2255d:;
  /* 10d2255d push 0 */
  push32((uint32_t)(0x0u));
  /* 10d2255f push 0 */
  push32((uint32_t)(0x0u));
  /* 10d22561 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d22563 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d22565 call dword ptr [0x10d40264] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40264))), 0x10d2256bu);
  /* 10d2256b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d2256d je 0x10d2257b */
  if (C.zf) goto L_10d2257b;
  /* 10d2256f mov dword ptr [0x10d3e77c], 2 */
  w32((uint32_t)(0x10d3e77c), (0x2u));
  /* 10d22579 jmp 0x10d22582 */
  goto L_10d22582;
L_10d2257b:;
  /* 10d2257b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d2257d jmp 0x10d22691 */
  goto L_10d22691;
L_10d22582:;
  /* 10d22582 cmp dword ptr [0x10d3e77c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e77c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22589 jne 0x10d225a6 */
  if (!C.zf) goto L_10d225a6;
  /* 10d2258b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d2258e push eax */
  push32((uint32_t)(EAX));
  /* 10d2258f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d22592 push ecx */
  push32((uint32_t)(ECX));
  /* 10d22593 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d22596 push edx */
  push32((uint32_t)(EDX));
  /* 10d22597 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d2259a push eax */
  push32((uint32_t)(EAX));
  /* 10d2259b call dword ptr [0x10d4024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d4024c))), 0x10d225a1u);
  /* 10d225a1 jmp 0x10d22691 */
  goto L_10d22691;
L_10d225a6:;
  /* 10d225a6 cmp dword ptr [0x10d3e77c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e77c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d225ad jne 0x10d2268f */
  if (!C.zf) goto L_10d2268f;
  /* 10d225b3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d225b7 jne 0x10d225c2 */
  if (!C.zf) goto L_10d225c2;
  /* 10d225b9 mov ecx, dword ptr [0x10d3e630] */
  ECX = (r32((uint32_t)(0x10d3e630)));
  /* 10d225bf mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10d225c2:;
  /* 10d225c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d225c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d225c6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d225c9 push edx */
  push32((uint32_t)(EDX));
  /* 10d225ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d225cd push eax */
  push32((uint32_t)(EAX));
  /* 10d225ce call dword ptr [0x10d40264] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40264))), 0x10d225d4u);
  /* 10d225d4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10d225d7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d225db jne 0x10d225e4 */
  if (!C.zf) goto L_10d225e4;
  /* 10d225dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d225df jmp 0x10d22691 */
  goto L_10d22691;
L_10d225e4:;
  /* 10d225e4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d225eb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d225ee add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d225f1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10d225f3 call 0x10d16270 */
  push32(0x10d225f8u); f_10d16270();
  /* 10d225f8 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 10d225fb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10d225fe mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d22601 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10d22604 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10d2260b jmp 0x10d22624 */
  goto L_10d22624;
  /* 10d2260d mov eax, 1 */
  EAX = (0x1u);
  /* 10d22612 ret  */
  ESPCHK(0x10d22510u, _esp0);
  ESP += 4; return;
  /* 10d22613 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10d22616 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10d2261d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10d22624:;
  /* 10d22624 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22628 jne 0x10d2262e */
  if (!C.zf) goto L_10d2262e;
  /* 10d2262a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d2262c jmp 0x10d22691 */
  goto L_10d22691;
L_10d2262e:;
  /* 10d2262e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d22631 push edx */
  push32((uint32_t)(EDX));
  /* 10d22632 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d22635 push eax */
  push32((uint32_t)(EAX));
  /* 10d22636 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d22639 push ecx */
  push32((uint32_t)(ECX));
  /* 10d2263a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d2263d push edx */
  push32((uint32_t)(EDX));
  /* 10d2263e call dword ptr [0x10d40264] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40264))), 0x10d22644u);
  /* 10d22644 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d22646 jne 0x10d2264c */
  if (!C.zf) goto L_10d2264c;
  /* 10d22648 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d2264a jmp 0x10d22691 */
  goto L_10d22691;
L_10d2264c:;
  /* 10d2264c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22650 jne 0x10d2266d */
  if (!C.zf) goto L_10d2266d;
  /* 10d22652 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d22654 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d22656 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10d22658 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d2265b push eax */
  push32((uint32_t)(EAX));
  /* 10d2265c push 1 */
  push32((uint32_t)(0x1u));
  /* 10d2265e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d22661 push ecx */
  push32((uint32_t)(ECX));
  /* 10d22662 call dword ptr [0x10d40348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40348))), 0x10d22668u);
  /* 10d22668 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10d2266b jmp 0x10d2268a */
  goto L_10d2268a;
L_10d2266d:;
  /* 10d2266d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d22670 push edx */
  push32((uint32_t)(EDX));
  /* 10d22671 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d22674 push eax */
  push32((uint32_t)(EAX));
  /* 10d22675 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10d22677 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d2267a push ecx */
  push32((uint32_t)(ECX));
  /* 10d2267b push 1 */
  push32((uint32_t)(0x1u));
  /* 10d2267d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d22680 push edx */
  push32((uint32_t)(EDX));
  /* 10d22681 call dword ptr [0x10d40348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40348))), 0x10d22687u);
  /* 10d22687 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10d2268a:;
  /* 10d2268a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d2268d jmp 0x10d22691 */
  goto L_10d22691;
L_10d2268f:;
  /* 10d2268f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d22691:;
  /* 10d22691 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10d22694 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d22697 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10d2269e pop edi */
  EDI = (pop32());
  /* 10d2269f pop esi */
  ESI = (pop32());
  /* 10d226a0 pop ebx */
  EBX = (pop32());
  /* 10d226a1 mov esp, ebp */
  ESP = (EBP);
  /* 10d226a3 pop ebp */
  EBP = (pop32());
  /* 10d226a4 ret  */
  ESPCHK(0x10d22510u, _esp0);
  ESP += 4; return;
}

/* FUN_100126b0 @ 0x10d226b0 (398 bytes, 140 insns) */
void f_10d226b0(void) {
  FTRACE(0x10d226b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d226b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d226b1 mov ebp, esp */
  EBP = (ESP);
  /* 10d226b3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10d226b5 push 0x10d3a8a8 */
  push32((uint32_t)(0x10d3a8a8u));
  /* 10d226ba push 0x10d1c1d8 */
  push32((uint32_t)(0x10d1c1d8u));
  /* 10d226bf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10d226c5 push eax */
  push32((uint32_t)(EAX));
  /* 10d226c6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10d226cd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d226d0 push ebx */
  push32((uint32_t)(EBX));
  /* 10d226d1 push esi */
  push32((uint32_t)(ESI));
  /* 10d226d2 push edi */
  push32((uint32_t)(EDI));
  /* 10d226d3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10d226d6 cmp dword ptr [0x10d3e780], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e780))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d226dd jne 0x10d22722 */
  if (!C.zf) goto L_10d22722;
  /* 10d226df push 0 */
  push32((uint32_t)(0x0u));
  /* 10d226e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d226e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d226e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d226e7 call dword ptr [0x10d4024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d4024c))), 0x10d226edu);
  /* 10d226ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d226ef je 0x10d226fd */
  if (C.zf) goto L_10d226fd;
  /* 10d226f1 mov dword ptr [0x10d3e780], 1 */
  w32((uint32_t)(0x10d3e780), (0x1u));
  /* 10d226fb jmp 0x10d22722 */
  goto L_10d22722;
L_10d226fd:;
  /* 10d226fd push 0 */
  push32((uint32_t)(0x0u));
  /* 10d226ff push 0 */
  push32((uint32_t)(0x0u));
  /* 10d22701 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d22703 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d22705 call dword ptr [0x10d40264] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40264))), 0x10d2270bu);
  /* 10d2270b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d2270d je 0x10d2271b */
  if (C.zf) goto L_10d2271b;
  /* 10d2270f mov dword ptr [0x10d3e780], 2 */
  w32((uint32_t)(0x10d3e780), (0x2u));
  /* 10d22719 jmp 0x10d22722 */
  goto L_10d22722;
L_10d2271b:;
  /* 10d2271b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d2271d jmp 0x10d22841 */
  goto L_10d22841;
L_10d22722:;
  /* 10d22722 cmp dword ptr [0x10d3e780], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e780))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22729 jne 0x10d22746 */
  if (!C.zf) goto L_10d22746;
  /* 10d2272b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d2272e push eax */
  push32((uint32_t)(EAX));
  /* 10d2272f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d22732 push ecx */
  push32((uint32_t)(ECX));
  /* 10d22733 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d22736 push edx */
  push32((uint32_t)(EDX));
  /* 10d22737 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d2273a push eax */
  push32((uint32_t)(EAX));
  /* 10d2273b call dword ptr [0x10d40264] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40264))), 0x10d22741u);
  /* 10d22741 jmp 0x10d22841 */
  goto L_10d22841;
L_10d22746:;
  /* 10d22746 cmp dword ptr [0x10d3e780], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e780))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d2274d jne 0x10d2283f */
  if (!C.zf) goto L_10d2283f;
  /* 10d22753 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22757 jne 0x10d22762 */
  if (!C.zf) goto L_10d22762;
  /* 10d22759 mov ecx, dword ptr [0x10d3e630] */
  ECX = (r32((uint32_t)(0x10d3e630)));
  /* 10d2275f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10d22762:;
  /* 10d22762 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d22764 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d22766 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d22769 push edx */
  push32((uint32_t)(EDX));
  /* 10d2276a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d2276d push eax */
  push32((uint32_t)(EAX));
  /* 10d2276e call dword ptr [0x10d4024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d4024c))), 0x10d22774u);
  /* 10d22774 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10d22777 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d2277b jne 0x10d22784 */
  if (!C.zf) goto L_10d22784;
  /* 10d2277d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d2277f jmp 0x10d22841 */
  goto L_10d22841;
L_10d22784:;
  /* 10d22784 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d2278b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d2278e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10d22790 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d22793 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10d22795 call 0x10d16270 */
  push32(0x10d2279au); f_10d16270();
  /* 10d2279a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 10d2279d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10d227a0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d227a3 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10d227a6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10d227ad jmp 0x10d227c6 */
  goto L_10d227c6;
  /* 10d227af mov eax, 1 */
  EAX = (0x1u);
  /* 10d227b4 ret  */
  ESPCHK(0x10d226b0u, _esp0);
  ESP += 4; return;
  /* 10d227b5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10d227b8 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10d227bf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10d227c6:;
  /* 10d227c6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d227ca jne 0x10d227d0 */
  if (!C.zf) goto L_10d227d0;
  /* 10d227cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d227ce jmp 0x10d22841 */
  goto L_10d22841;
L_10d227d0:;
  /* 10d227d0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d227d3 push edx */
  push32((uint32_t)(EDX));
  /* 10d227d4 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d227d7 push eax */
  push32((uint32_t)(EAX));
  /* 10d227d8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d227db push ecx */
  push32((uint32_t)(ECX));
  /* 10d227dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d227df push edx */
  push32((uint32_t)(EDX));
  /* 10d227e0 call dword ptr [0x10d4024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d4024c))), 0x10d227e6u);
  /* 10d227e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d227e8 jne 0x10d227ee */
  if (!C.zf) goto L_10d227ee;
  /* 10d227ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d227ec jmp 0x10d22841 */
  goto L_10d22841;
L_10d227ee:;
  /* 10d227ee cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d227f2 jne 0x10d22816 */
  if (!C.zf) goto L_10d22816;
  /* 10d227f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d227f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d227f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d227fa push 0 */
  push32((uint32_t)(0x0u));
  /* 10d227fc push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10d227fe mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d22801 push eax */
  push32((uint32_t)(EAX));
  /* 10d22802 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10d22807 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d2280a push ecx */
  push32((uint32_t)(ECX));
  /* 10d2280b call dword ptr [0x10d402fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402fc))), 0x10d22811u);
  /* 10d22811 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10d22814 jmp 0x10d2283a */
  goto L_10d2283a;
L_10d22816:;
  /* 10d22816 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d22818 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d2281a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d2281d push edx */
  push32((uint32_t)(EDX));
  /* 10d2281e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d22821 push eax */
  push32((uint32_t)(EAX));
  /* 10d22822 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10d22824 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d22827 push ecx */
  push32((uint32_t)(ECX));
  /* 10d22828 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10d2282d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d22830 push edx */
  push32((uint32_t)(EDX));
  /* 10d22831 call dword ptr [0x10d402fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402fc))), 0x10d22837u);
  /* 10d22837 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10d2283a:;
  /* 10d2283a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d2283d jmp 0x10d22841 */
  goto L_10d22841;
L_10d2283f:;
  /* 10d2283f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d22841:;
  /* 10d22841 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10d22844 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d22847 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10d2284e pop edi */
  EDI = (pop32());
  /* 10d2284f pop esi */
  ESI = (pop32());
  /* 10d22850 pop ebx */
  EBX = (pop32());
  /* 10d22851 mov esp, ebp */
  ESP = (EBP);
  /* 10d22853 pop ebp */
  EBP = (pop32());
  /* 10d22854 ret  */
  ESPCHK(0x10d226b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012860 @ 0x10d22860 (11 bytes, 6 insns) */
void f_10d22860(void) {
  FTRACE(0x10d22860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d22860 push ebp */
  push32((uint32_t)(EBP));
  /* 10d22861 mov ebp, esp */
  EBP = (ESP);
  /* 10d22863 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d22866 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d22869 pop ebp */
  EBP = (pop32());
  /* 10d2286a ret  */
  ESPCHK(0x10d22860u, _esp0);
  ESP += 4; return;
}

/* FUN_10012870 @ 0x10d22870 (147 bytes, 43 insns) */
void f_10d22870(void) {
  FTRACE(0x10d22870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d22870 push ebp */
  push32((uint32_t)(EBP));
  /* 10d22871 mov ebp, esp */
  EBP = (ESP);
  /* 10d22873 push ecx */
  push32((uint32_t)(ECX));
  /* 10d22874 cmp dword ptr [0x10d3e620], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e620))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d2287b jne 0x10d22897 */
  if (!C.zf) goto L_10d22897;
  /* 10d2287d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22881 jl 0x10d22892 */
  if ((C.sf!=C.of)) goto L_10d22892;
  /* 10d22883 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22887 jg 0x10d22892 */
  if ((!C.zf&&C.sf==C.of)) goto L_10d22892;
  /* 10d22889 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d2288c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d2288f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10d22892:;
  /* 10d22892 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d22895 jmp 0x10d228ff */
  goto L_10d228ff;
L_10d22897:;
  /* 10d22897 push 0x10d3e7ac */
  push32((uint32_t)(0x10d3e7acu));
  /* 10d2289c call dword ptr [0x10d402a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402a4))), 0x10d228a2u);
  /* 10d228a2 cmp dword ptr [0x10d3e79c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e79c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d228a9 je 0x10d228c9 */
  if (C.zf) goto L_10d228c9;
  /* 10d228ab push 0x10d3e7ac */
  push32((uint32_t)(0x10d3e7acu));
  /* 10d228b0 call dword ptr [0x10d40294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40294))), 0x10d228b6u);
  /* 10d228b6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10d228b8 call 0x10d16ad0 */
  push32(0x10d228bdu); f_10d16ad0();
  /* 10d228bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d228c0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10d228c7 jmp 0x10d228d0 */
  goto L_10d228d0;
L_10d228c9:;
  /* 10d228c9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10d228d0:;
  /* 10d228d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d228d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d228d4 call 0x10d22910 */
  push32(0x10d228d9u); f_10d22910();
  /* 10d228d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d228dc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10d228df cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d228e3 je 0x10d228f1 */
  if (C.zf) goto L_10d228f1;
  /* 10d228e5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10d228e7 call 0x10d16b70 */
  push32(0x10d228ecu); f_10d16b70();
  /* 10d228ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d228ef jmp 0x10d228fc */
  goto L_10d228fc;
L_10d228f1:;
  /* 10d228f1 push 0x10d3e7ac */
  push32((uint32_t)(0x10d3e7acu));
  /* 10d228f6 call dword ptr [0x10d40294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40294))), 0x10d228fcu);
L_10d228fc:;
  /* 10d228fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10d228ff:;
  /* 10d228ff mov esp, ebp */
  ESP = (EBP);
  /* 10d22901 pop ebp */
  EBP = (pop32());
  /* 10d22902 ret  */
  ESPCHK(0x10d22870u, _esp0);
  ESP += 4; return;
}

/* FUN_10012910 @ 0x10d22910 (299 bytes, 91 insns) */
void f_10d22910(void) {
  FTRACE(0x10d22910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d22910 push ebp */
  push32((uint32_t)(EBP));
  /* 10d22911 mov ebp, esp */
  EBP = (ESP);
  /* 10d22913 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d22916 cmp dword ptr [0x10d3e620], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e620))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d2291d jne 0x10d2293c */
  if (!C.zf) goto L_10d2293c;
  /* 10d2291f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22923 jl 0x10d22934 */
  if ((C.sf!=C.of)) goto L_10d22934;
  /* 10d22925 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22929 jg 0x10d22934 */
  if ((!C.zf&&C.sf==C.of)) goto L_10d22934;
  /* 10d2292b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d2292e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d22931 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10d22934:;
  /* 10d22934 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d22937 jmp 0x10d22a37 */
  goto L_10d22a37;
L_10d2293c:;
  /* 10d2293c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22943 jge 0x10d22983 */
  if ((C.sf==C.of)) goto L_10d22983;
  /* 10d22945 cmp dword ptr [0x10d3cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10d3cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d2294c jle 0x10d22961 */
  if ((C.zf||C.sf!=C.of)) goto L_10d22961;
  /* 10d2294e push 1 */
  push32((uint32_t)(0x1u));
  /* 10d22950 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d22953 push ecx */
  push32((uint32_t)(ECX));
  /* 10d22954 call 0x10d190e0 */
  push32(0x10d22959u); f_10d190e0();
  /* 10d22959 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d2295c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10d2295f jmp 0x10d22975 */
  goto L_10d22975;
L_10d22961:;
  /* 10d22961 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d22964 mov eax, dword ptr [0x10d3cc98] */
  EAX = (r32((uint32_t)(0x10d3cc98)));
  /* 10d22969 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d2296b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10d2296f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10d22972 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10d22975:;
  /* 10d22975 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22979 jne 0x10d22983 */
  if (!C.zf) goto L_10d22983;
  /* 10d2297b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d2297e jmp 0x10d22a37 */
  goto L_10d22a37;
L_10d22983:;
  /* 10d22983 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d22986 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10d22989 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d2298f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d22995 mov eax, dword ptr [0x10d3cc98] */
  EAX = (r32((uint32_t)(0x10d3cc98)));
  /* 10d2299a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d2299c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10d229a0 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10d229a6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d229a8 je 0x10d229cc */
  if (C.zf) goto L_10d229cc;
  /* 10d229aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d229ad sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10d229b0 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d229b6 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 10d229b9 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10d229bc mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 10d229bf mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 10d229c3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10d229ca jmp 0x10d229dd */
  goto L_10d229dd;
L_10d229cc:;
  /* 10d229cc mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10d229cf mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10d229d2 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 10d229d6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_10d229dd:;
  /* 10d229dd push 1 */
  push32((uint32_t)(0x1u));
  /* 10d229df push 0 */
  push32((uint32_t)(0x0u));
  /* 10d229e1 push 3 */
  push32((uint32_t)(0x3u));
  /* 10d229e3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10d229e6 push edx */
  push32((uint32_t)(EDX));
  /* 10d229e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d229ea push eax */
  push32((uint32_t)(EAX));
  /* 10d229eb lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10d229ee push ecx */
  push32((uint32_t)(ECX));
  /* 10d229ef push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10d229f4 mov edx, dword ptr [0x10d3e620] */
  EDX = (r32((uint32_t)(0x10d3e620)));
  /* 10d229fa push edx */
  push32((uint32_t)(EDX));
  /* 10d229fb call 0x10d1b4c0 */
  push32(0x10d22a00u); f_10d1b4c0();
  /* 10d22a00 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d22a03 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d22a06 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22a0a jne 0x10d22a11 */
  if (!C.zf) goto L_10d22a11;
  /* 10d22a0c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d22a0f jmp 0x10d22a37 */
  goto L_10d22a37;
L_10d22a11:;
  /* 10d22a11 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22a15 jne 0x10d22a21 */
  if (!C.zf) goto L_10d22a21;
  /* 10d22a17 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d22a1a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d22a1f jmp 0x10d22a37 */
  goto L_10d22a37;
L_10d22a21:;
  /* 10d22a21 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d22a24 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d22a29 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 10d22a2c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d22a32 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10d22a35 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_10d22a37:;
  /* 10d22a37 mov esp, ebp */
  ESP = (EBP);
  /* 10d22a39 pop ebp */
  EBP = (pop32());
  /* 10d22a3a ret  */
  ESPCHK(0x10d22910u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x10d22a40 (52 bytes, 19 insns) */
void f_10d22a40(void) {
  FTRACE(0x10d22a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d22a40 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10d22a44 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10d22a48 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d22a4a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10d22a4e jne 0x10d22a59 */
  if (!C.zf) goto L_10d22a59;
  /* 10d22a50 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10d22a54 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10d22a56 ret 0x10 */
  ESPCHK(0x10d22a40u, _esp0);
  ESP += 20; return;
L_10d22a59:;
  /* 10d22a59 push ebx */
  push32((uint32_t)(EBX));
  /* 10d22a5a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10d22a5c mov ebx, eax */
  EBX = (EAX);
  /* 10d22a5e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10d22a62 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10d22a66 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d22a68 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10d22a6c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10d22a6e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d22a70 pop ebx */
  EBX = (pop32());
  /* 10d22a71 ret 0x10 */
  ESPCHK(0x10d22a40u, _esp0);
  ESP += 20; return;
}

/* FUN_10012a80 @ 0x10d22a80 (46 bytes, 18 insns) */
void f_10d22a80(void) {
  FTRACE(0x10d22a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d22a80 push ebp */
  push32((uint32_t)(EBP));
  /* 10d22a81 mov ebp, esp */
  EBP = (ESP);
  /* 10d22a83 push ecx */
  push32((uint32_t)(ECX));
  /* 10d22a84 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10d22a86 call 0x10d16ad0 */
  push32(0x10d22a8bu); f_10d16ad0();
  /* 10d22a8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d22a8e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d22a91 push eax */
  push32((uint32_t)(EAX));
  /* 10d22a92 call 0x10d22ab0 */
  push32(0x10d22a97u); f_10d22ab0();
  /* 10d22a97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d22a9a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d22a9d push 0xc */
  push32((uint32_t)(0xcu));
  /* 10d22a9f call 0x10d16b70 */
  push32(0x10d22aa4u); f_10d16b70();
  /* 10d22aa4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d22aa7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d22aaa mov esp, ebp */
  ESP = (EBP);
  /* 10d22aac pop ebp */
  EBP = (pop32());
  /* 10d22aad ret  */
  ESPCHK(0x10d22a80u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x10d22ab0 (198 bytes, 69 insns) */
void f_10d22ab0(void) {
  FTRACE(0x10d22ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d22ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d22ab1 mov ebp, esp */
  EBP = (ESP);
  /* 10d22ab3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d22ab6 mov eax, dword ptr [0x10d3e43c] */
  EAX = (r32((uint32_t)(0x10d3e43c)));
  /* 10d22abb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d22abe cmp dword ptr [0x10d3ff40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3ff40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22ac5 jne 0x10d22ace */
  if (!C.zf) goto L_10d22ace;
  /* 10d22ac7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d22ac9 jmp 0x10d22b72 */
  goto L_10d22b72;
L_10d22ace:;
  /* 10d22ace cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22ad2 jne 0x10d22af6 */
  if (!C.zf) goto L_10d22af6;
  /* 10d22ad4 cmp dword ptr [0x10d3e444], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e444))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22adb je 0x10d22af6 */
  if (C.zf) goto L_10d22af6;
  /* 10d22add call 0x10d22bd0 */
  push32(0x10d22ae2u); f_10d22bd0();
  /* 10d22ae2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d22ae4 je 0x10d22aed */
  if (C.zf) goto L_10d22aed;
  /* 10d22ae6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d22ae8 jmp 0x10d22b72 */
  goto L_10d22b72;
L_10d22aed:;
  /* 10d22aed mov ecx, dword ptr [0x10d3e43c] */
  ECX = (r32((uint32_t)(0x10d3e43c)));
  /* 10d22af3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10d22af6:;
  /* 10d22af6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22afa je 0x10d22b70 */
  if (C.zf) goto L_10d22b70;
  /* 10d22afc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22b00 je 0x10d22b70 */
  if (C.zf) goto L_10d22b70;
  /* 10d22b02 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d22b05 push edx */
  push32((uint32_t)(EDX));
  /* 10d22b06 call 0x10d15f00 */
  push32(0x10d22b0bu); f_10d15f00();
  /* 10d22b0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d22b0e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d22b11:;
  /* 10d22b11 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d22b14 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22b17 je 0x10d22b70 */
  if (C.zf) goto L_10d22b70;
  /* 10d22b19 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d22b1c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d22b1e push edx */
  push32((uint32_t)(EDX));
  /* 10d22b1f call 0x10d15f00 */
  push32(0x10d22b24u); f_10d15f00();
  /* 10d22b24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d22b27 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22b2a jbe 0x10d22b65 */
  if ((C.cf||C.zf)) goto L_10d22b65;
  /* 10d22b2c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d22b2f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d22b31 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d22b34 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 10d22b38 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22b3b jne 0x10d22b65 */
  if (!C.zf) goto L_10d22b65;
  /* 10d22b3d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d22b40 push ecx */
  push32((uint32_t)(ECX));
  /* 10d22b41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d22b44 push edx */
  push32((uint32_t)(EDX));
  /* 10d22b45 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d22b48 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d22b4a push ecx */
  push32((uint32_t)(ECX));
  /* 10d22b4b call 0x10d22b80 */
  push32(0x10d22b50u); f_10d22b80();
  /* 10d22b50 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d22b53 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d22b55 jne 0x10d22b65 */
  if (!C.zf) goto L_10d22b65;
  /* 10d22b57 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d22b5a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d22b5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d22b5f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 10d22b63 jmp 0x10d22b72 */
  goto L_10d22b72;
L_10d22b65:;
  /* 10d22b65 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d22b68 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d22b6b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10d22b6e jmp 0x10d22b11 */
  goto L_10d22b11;
L_10d22b70:;
  /* 10d22b70 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d22b72:;
  /* 10d22b72 mov esp, ebp */
  ESP = (EBP);
  /* 10d22b74 pop ebp */
  EBP = (pop32());
  /* 10d22b75 ret  */
  ESPCHK(0x10d22ab0u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x10d22b80 (79 bytes, 32 insns) */
void f_10d22b80(void) {
  FTRACE(0x10d22b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d22b80 push ebp */
  push32((uint32_t)(EBP));
  /* 10d22b81 mov ebp, esp */
  EBP = (ESP);
  /* 10d22b83 push ecx */
  push32((uint32_t)(ECX));
  /* 10d22b84 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22b88 jne 0x10d22b8e */
  if (!C.zf) goto L_10d22b8e;
  /* 10d22b8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d22b8c jmp 0x10d22bcb */
  goto L_10d22bcb;
L_10d22b8e:;
  /* 10d22b8e mov eax, dword ptr [0x10d3fb04] */
  EAX = (r32((uint32_t)(0x10d3fb04)));
  /* 10d22b93 push eax */
  push32((uint32_t)(EAX));
  /* 10d22b94 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d22b97 push ecx */
  push32((uint32_t)(ECX));
  /* 10d22b98 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d22b9b push edx */
  push32((uint32_t)(EDX));
  /* 10d22b9c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d22b9f push eax */
  push32((uint32_t)(EAX));
  /* 10d22ba0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d22ba3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d22ba4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d22ba6 mov edx, dword ptr [0x10d3fda4] */
  EDX = (r32((uint32_t)(0x10d3fda4)));
  /* 10d22bac push edx */
  push32((uint32_t)(EDX));
  /* 10d22bad call 0x10d22c80 */
  push32(0x10d22bb2u); f_10d22c80();
  /* 10d22bb2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d22bb5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d22bb8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22bbc jne 0x10d22bc5 */
  if (!C.zf) goto L_10d22bc5;
  /* 10d22bbe mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 10d22bc3 jmp 0x10d22bcb */
  goto L_10d22bcb;
L_10d22bc5:;
  /* 10d22bc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d22bc8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10d22bcb:;
  /* 10d22bcb mov esp, ebp */
  ESP = (EBP);
  /* 10d22bcd pop ebp */
  EBP = (pop32());
  /* 10d22bce ret  */
  ESPCHK(0x10d22b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10012bd0 @ 0x10d22bd0 (174 bytes, 66 insns) */
void f_10d22bd0(void) {
  FTRACE(0x10d22bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d22bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d22bd1 mov ebp, esp */
  EBP = (ESP);
  /* 10d22bd3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d22bd6 mov eax, dword ptr [0x10d3e444] */
  EAX = (r32((uint32_t)(0x10d3e444)));
  /* 10d22bdb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d22bde:;
  /* 10d22bde mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d22be1 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22be4 je 0x10d22c78 */
  if (C.zf) goto L_10d22c78;
  /* 10d22bea push 0 */
  push32((uint32_t)(0x0u));
  /* 10d22bec push 0 */
  push32((uint32_t)(0x0u));
  /* 10d22bee push 0 */
  push32((uint32_t)(0x0u));
  /* 10d22bf0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d22bf2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10d22bf4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d22bf7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d22bf9 push eax */
  push32((uint32_t)(EAX));
  /* 10d22bfa push 0 */
  push32((uint32_t)(0x0u));
  /* 10d22bfc push 1 */
  push32((uint32_t)(0x1u));
  /* 10d22bfe call dword ptr [0x10d402fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402fc))), 0x10d22c04u);
  /* 10d22c04 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d22c07 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22c0b jne 0x10d22c12 */
  if (!C.zf) goto L_10d22c12;
  /* 10d22c0d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d22c10 jmp 0x10d22c7a */
  goto L_10d22c7a;
L_10d22c12:;
  /* 10d22c12 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10d22c14 push 0x10d3a8b4 */
  push32((uint32_t)(0x10d3a8b4u));
  /* 10d22c19 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d22c1b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d22c1e push ecx */
  push32((uint32_t)(ECX));
  /* 10d22c1f call 0x10d130d0 */
  push32(0x10d22c24u); f_10d130d0();
  /* 10d22c24 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d22c27 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d22c2a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22c2e jne 0x10d22c35 */
  if (!C.zf) goto L_10d22c35;
  /* 10d22c30 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d22c33 jmp 0x10d22c7a */
  goto L_10d22c7a;
L_10d22c35:;
  /* 10d22c35 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d22c37 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d22c39 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d22c3c push edx */
  push32((uint32_t)(EDX));
  /* 10d22c3d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d22c40 push eax */
  push32((uint32_t)(EAX));
  /* 10d22c41 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10d22c43 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d22c46 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d22c48 push edx */
  push32((uint32_t)(EDX));
  /* 10d22c49 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d22c4b push 1 */
  push32((uint32_t)(0x1u));
  /* 10d22c4d call dword ptr [0x10d402fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402fc))), 0x10d22c53u);
  /* 10d22c53 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d22c55 jne 0x10d22c5c */
  if (!C.zf) goto L_10d22c5c;
  /* 10d22c57 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d22c5a jmp 0x10d22c7a */
  goto L_10d22c7a;
L_10d22c5c:;
  /* 10d22c5c push 0 */
  push32((uint32_t)(0x0u));
  /* 10d22c5e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d22c61 push eax */
  push32((uint32_t)(EAX));
  /* 10d22c62 call 0x10d230d0 */
  push32(0x10d22c67u); f_10d230d0();
  /* 10d22c67 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d22c6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d22c6d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d22c70 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d22c73 jmp 0x10d22bde */
  goto L_10d22bde;
L_10d22c78:;
  /* 10d22c78 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d22c7a:;
  /* 10d22c7a mov esp, ebp */
  ESP = (EBP);
  /* 10d22c7c pop ebp */
  EBP = (pop32());
  /* 10d22c7d ret  */
  ESPCHK(0x10d22bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012c80 @ 0x10d22c80 (970 bytes, 340 insns) */
void f_10d22c80(void) {
  FTRACE(0x10d22c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d22c80 push ebp */
  push32((uint32_t)(EBP));
  /* 10d22c81 mov ebp, esp */
  EBP = (ESP);
  /* 10d22c83 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10d22c85 push 0x10d3a908 */
  push32((uint32_t)(0x10d3a908u));
  /* 10d22c8a push 0x10d1c1d8 */
  push32((uint32_t)(0x10d1c1d8u));
  /* 10d22c8f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10d22c95 push eax */
  push32((uint32_t)(EAX));
  /* 10d22c96 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10d22c9d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d22ca0 push ebx */
  push32((uint32_t)(EBX));
  /* 10d22ca1 push esi */
  push32((uint32_t)(ESI));
  /* 10d22ca2 push edi */
  push32((uint32_t)(EDI));
  /* 10d22ca3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10d22ca6 cmp dword ptr [0x10d3e784], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e784))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22cad jne 0x10d22d06 */
  if (!C.zf) goto L_10d22d06;
  /* 10d22caf push 1 */
  push32((uint32_t)(0x1u));
  /* 10d22cb1 push 0x10d39f60 */
  push32((uint32_t)(0x10d39f60u));
  /* 10d22cb6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d22cb8 push 0x10d39f60 */
  push32((uint32_t)(0x10d39f60u));
  /* 10d22cbd push 0 */
  push32((uint32_t)(0x0u));
  /* 10d22cbf push 0 */
  push32((uint32_t)(0x0u));
  /* 10d22cc1 call dword ptr [0x10d40248] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40248))), 0x10d22cc7u);
  /* 10d22cc7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d22cc9 je 0x10d22cd7 */
  if (C.zf) goto L_10d22cd7;
  /* 10d22ccb mov dword ptr [0x10d3e784], 1 */
  w32((uint32_t)(0x10d3e784), (0x1u));
  /* 10d22cd5 jmp 0x10d22d06 */
  goto L_10d22d06;
L_10d22cd7:;
  /* 10d22cd7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d22cd9 push 0x10d39f5c */
  push32((uint32_t)(0x10d39f5cu));
  /* 10d22cde push 1 */
  push32((uint32_t)(0x1u));
  /* 10d22ce0 push 0x10d39f5c */
  push32((uint32_t)(0x10d39f5cu));
  /* 10d22ce5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d22ce7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d22ce9 call dword ptr [0x10d40254] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40254))), 0x10d22cefu);
  /* 10d22cef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d22cf1 je 0x10d22cff */
  if (C.zf) goto L_10d22cff;
  /* 10d22cf3 mov dword ptr [0x10d3e784], 2 */
  w32((uint32_t)(0x10d3e784), (0x2u));
  /* 10d22cfd jmp 0x10d22d06 */
  goto L_10d22d06;
L_10d22cff:;
  /* 10d22cff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d22d01 jmp 0x10d23064 */
  goto L_10d23064;
L_10d22d06:;
  /* 10d22d06 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22d0a jle 0x10d22d1f */
  if ((C.zf||C.sf!=C.of)) goto L_10d22d1f;
  /* 10d22d0c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d22d0f push eax */
  push32((uint32_t)(EAX));
  /* 10d22d10 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d22d13 push ecx */
  push32((uint32_t)(ECX));
  /* 10d22d14 call 0x10d23080 */
  push32(0x10d22d19u); f_10d23080();
  /* 10d22d19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d22d1c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10d22d1f:;
  /* 10d22d1f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22d23 jle 0x10d22d38 */
  if ((C.zf||C.sf!=C.of)) goto L_10d22d38;
  /* 10d22d25 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10d22d28 push edx */
  push32((uint32_t)(EDX));
  /* 10d22d29 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d22d2c push eax */
  push32((uint32_t)(EAX));
  /* 10d22d2d call 0x10d23080 */
  push32(0x10d22d32u); f_10d23080();
  /* 10d22d32 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d22d35 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_10d22d38:;
  /* 10d22d38 cmp dword ptr [0x10d3e784], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e784))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22d3f jne 0x10d22d64 */
  if (!C.zf) goto L_10d22d64;
  /* 10d22d41 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10d22d44 push ecx */
  push32((uint32_t)(ECX));
  /* 10d22d45 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d22d48 push edx */
  push32((uint32_t)(EDX));
  /* 10d22d49 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d22d4c push eax */
  push32((uint32_t)(EAX));
  /* 10d22d4d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d22d50 push ecx */
  push32((uint32_t)(ECX));
  /* 10d22d51 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d22d54 push edx */
  push32((uint32_t)(EDX));
  /* 10d22d55 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d22d58 push eax */
  push32((uint32_t)(EAX));
  /* 10d22d59 call dword ptr [0x10d40254] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40254))), 0x10d22d5fu);
  /* 10d22d5f jmp 0x10d23064 */
  goto L_10d23064;
L_10d22d64:;
  /* 10d22d64 cmp dword ptr [0x10d3e784], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e784))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22d6b jne 0x10d23062 */
  if (!C.zf) goto L_10d23062;
  /* 10d22d71 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22d75 jne 0x10d22d80 */
  if (!C.zf) goto L_10d22d80;
  /* 10d22d77 mov ecx, dword ptr [0x10d3e630] */
  ECX = (r32((uint32_t)(0x10d3e630)));
  /* 10d22d7d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_10d22d80:;
  /* 10d22d80 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22d84 je 0x10d22d90 */
  if (C.zf) goto L_10d22d90;
  /* 10d22d86 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22d8a jne 0x10d22f0c */
  if (!C.zf) goto L_10d22f0c;
L_10d22d90:;
  /* 10d22d90 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d22d93 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22d96 jne 0x10d22da2 */
  if (!C.zf) goto L_10d22da2;
  /* 10d22d98 mov eax, 2 */
  EAX = (0x2u);
  /* 10d22d9d jmp 0x10d23064 */
  goto L_10d23064;
L_10d22da2:;
  /* 10d22da2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22da6 jle 0x10d22db2 */
  if ((C.zf||C.sf!=C.of)) goto L_10d22db2;
  /* 10d22da8 mov eax, 1 */
  EAX = (0x1u);
  /* 10d22dad jmp 0x10d23064 */
  goto L_10d23064;
L_10d22db2:;
  /* 10d22db2 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22db6 jle 0x10d22dc2 */
  if ((C.zf||C.sf!=C.of)) goto L_10d22dc2;
  /* 10d22db8 mov eax, 3 */
  EAX = (0x3u);
  /* 10d22dbd jmp 0x10d23064 */
  goto L_10d23064;
L_10d22dc2:;
  /* 10d22dc2 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 10d22dc5 push eax */
  push32((uint32_t)(EAX));
  /* 10d22dc6 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10d22dc9 push ecx */
  push32((uint32_t)(ECX));
  /* 10d22dca call dword ptr [0x10d4033c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d4033c))), 0x10d22dd0u);
  /* 10d22dd0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d22dd2 jne 0x10d22ddb */
  if (!C.zf) goto L_10d22ddb;
  /* 10d22dd4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d22dd6 jmp 0x10d23064 */
  goto L_10d23064;
L_10d22ddb:;
  /* 10d22ddb cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22ddf jne 0x10d22de7 */
  if (!C.zf) goto L_10d22de7;
  /* 10d22de1 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22de5 je 0x10d22e14 */
  if (C.zf) goto L_10d22e14;
L_10d22de7:;
  /* 10d22de7 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22deb jne 0x10d22df3 */
  if (!C.zf) goto L_10d22df3;
  /* 10d22ded cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22df1 je 0x10d22e14 */
  if (C.zf) goto L_10d22e14;
L_10d22df3:;
  /* 10d22df3 push 0x10d3a8c8 */
  push32((uint32_t)(0x10d3a8c8u));
  /* 10d22df8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d22dfa push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 10d22dff push 0x10d3a8c0 */
  push32((uint32_t)(0x10d3a8c0u));
  /* 10d22e04 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d22e06 call 0x10d12190 */
  push32(0x10d22e0bu); f_10d12190();
  /* 10d22e0b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d22e0e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22e11 jne 0x10d22e14 */
  if (!C.zf) goto L_10d22e14;
  /* 10d22e13 int3  */
  x86_unimpl("int3 @ 0x10d22e13");
L_10d22e14:;
  /* 10d22e14 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d22e16 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d22e18 jne 0x10d22ddb */
  if (!C.zf) goto L_10d22ddb;
  /* 10d22e1a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22e1e jle 0x10d22e93 */
  if ((C.zf||C.sf!=C.of)) goto L_10d22e93;
  /* 10d22e20 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22e24 jae 0x10d22e30 */
  if (!C.cf) goto L_10d22e30;
  /* 10d22e26 mov eax, 3 */
  EAX = (0x3u);
  /* 10d22e2b jmp 0x10d23064 */
  goto L_10d23064;
L_10d22e30:;
  /* 10d22e30 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 10d22e33 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 10d22e36 jmp 0x10d22e41 */
  goto L_10d22e41;
L_10d22e38:;
  /* 10d22e38 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10d22e3b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d22e3e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_10d22e41:;
  /* 10d22e41 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10d22e44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d22e46 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d22e48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d22e4a je 0x10d22e89 */
  if (C.zf) goto L_10d22e89;
  /* 10d22e4c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10d22e4f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d22e51 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10d22e54 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d22e56 je 0x10d22e89 */
  if (C.zf) goto L_10d22e89;
  /* 10d22e58 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d22e5b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d22e5d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10d22e5f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10d22e62 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d22e64 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d22e66 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22e68 jl 0x10d22e87 */
  if ((C.sf!=C.of)) goto L_10d22e87;
  /* 10d22e6a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d22e6d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d22e6f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d22e71 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10d22e74 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d22e76 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10d22e79 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22e7b jg 0x10d22e87 */
  if ((!C.zf&&C.sf==C.of)) goto L_10d22e87;
  /* 10d22e7d mov eax, 2 */
  EAX = (0x2u);
  /* 10d22e82 jmp 0x10d23064 */
  goto L_10d23064;
L_10d22e87:;
  /* 10d22e87 jmp 0x10d22e38 */
  goto L_10d22e38;
L_10d22e89:;
  /* 10d22e89 mov eax, 3 */
  EAX = (0x3u);
  /* 10d22e8e jmp 0x10d23064 */
  goto L_10d23064;
L_10d22e93:;
  /* 10d22e93 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22e97 jle 0x10d22f0c */
  if ((C.zf||C.sf!=C.of)) goto L_10d22f0c;
  /* 10d22e99 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22e9d jae 0x10d22ea9 */
  if (!C.cf) goto L_10d22ea9;
  /* 10d22e9f mov eax, 1 */
  EAX = (0x1u);
  /* 10d22ea4 jmp 0x10d23064 */
  goto L_10d23064;
L_10d22ea9:;
  /* 10d22ea9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 10d22eac mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 10d22eaf jmp 0x10d22eba */
  goto L_10d22eba;
L_10d22eb1:;
  /* 10d22eb1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10d22eb4 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d22eb7 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_10d22eba:;
  /* 10d22eba mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10d22ebd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d22ebf mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d22ec1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d22ec3 je 0x10d22f02 */
  if (C.zf) goto L_10d22f02;
  /* 10d22ec5 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10d22ec8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d22eca mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10d22ecd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d22ecf je 0x10d22f02 */
  if (C.zf) goto L_10d22f02;
  /* 10d22ed1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d22ed4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d22ed6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d22ed8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10d22edb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d22edd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d22edf cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22ee1 jl 0x10d22f00 */
  if ((C.sf!=C.of)) goto L_10d22f00;
  /* 10d22ee3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d22ee6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d22ee8 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10d22eea mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10d22eed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d22eef mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10d22ef2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22ef4 jg 0x10d22f00 */
  if ((!C.zf&&C.sf==C.of)) goto L_10d22f00;
  /* 10d22ef6 mov eax, 2 */
  EAX = (0x2u);
  /* 10d22efb jmp 0x10d23064 */
  goto L_10d23064;
L_10d22f00:;
  /* 10d22f00 jmp 0x10d22eb1 */
  goto L_10d22eb1;
L_10d22f02:;
  /* 10d22f02 mov eax, 1 */
  EAX = (0x1u);
  /* 10d22f07 jmp 0x10d23064 */
  goto L_10d23064;
L_10d22f0c:;
  /* 10d22f0c push 0 */
  push32((uint32_t)(0x0u));
  /* 10d22f0e push 0 */
  push32((uint32_t)(0x0u));
  /* 10d22f10 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d22f13 push ecx */
  push32((uint32_t)(ECX));
  /* 10d22f14 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d22f17 push edx */
  push32((uint32_t)(EDX));
  /* 10d22f18 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d22f1a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10d22f1d push eax */
  push32((uint32_t)(EAX));
  /* 10d22f1e call dword ptr [0x10d40348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40348))), 0x10d22f24u);
  /* 10d22f24 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10d22f27 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22f2b jne 0x10d22f34 */
  if (!C.zf) goto L_10d22f34;
  /* 10d22f2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d22f2f jmp 0x10d23064 */
  goto L_10d23064;
L_10d22f34:;
  /* 10d22f34 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d22f3b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d22f3e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10d22f40 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d22f43 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10d22f45 call 0x10d16270 */
  push32(0x10d22f4au); f_10d16270();
  /* 10d22f4a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 10d22f4d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10d22f50 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 10d22f53 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10d22f56 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10d22f5d jmp 0x10d22f76 */
  goto L_10d22f76;
  /* 10d22f5f mov eax, 1 */
  EAX = (0x1u);
  /* 10d22f64 ret  */
  ESPCHK(0x10d22c80u, _esp0);
  ESP += 4; return;
  /* 10d22f65 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10d22f68 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10d22f6f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10d22f76:;
  /* 10d22f76 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22f7a jne 0x10d22f83 */
  if (!C.zf) goto L_10d22f83;
  /* 10d22f7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d22f7e jmp 0x10d23064 */
  goto L_10d23064;
L_10d22f83:;
  /* 10d22f83 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d22f86 push edx */
  push32((uint32_t)(EDX));
  /* 10d22f87 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d22f8a push eax */
  push32((uint32_t)(EAX));
  /* 10d22f8b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d22f8e push ecx */
  push32((uint32_t)(ECX));
  /* 10d22f8f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d22f92 push edx */
  push32((uint32_t)(EDX));
  /* 10d22f93 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d22f95 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10d22f98 push eax */
  push32((uint32_t)(EAX));
  /* 10d22f99 call dword ptr [0x10d40348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40348))), 0x10d22f9fu);
  /* 10d22f9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d22fa1 jne 0x10d22faa */
  if (!C.zf) goto L_10d22faa;
  /* 10d22fa3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d22fa5 jmp 0x10d23064 */
  goto L_10d23064;
L_10d22faa:;
  /* 10d22faa push 0 */
  push32((uint32_t)(0x0u));
  /* 10d22fac push 0 */
  push32((uint32_t)(0x0u));
  /* 10d22fae mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10d22fb1 push ecx */
  push32((uint32_t)(ECX));
  /* 10d22fb2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d22fb5 push edx */
  push32((uint32_t)(EDX));
  /* 10d22fb6 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d22fb8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10d22fbb push eax */
  push32((uint32_t)(EAX));
  /* 10d22fbc call dword ptr [0x10d40348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40348))), 0x10d22fc2u);
  /* 10d22fc2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10d22fc5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d22fc9 jne 0x10d22fd2 */
  if (!C.zf) goto L_10d22fd2;
  /* 10d22fcb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d22fcd jmp 0x10d23064 */
  goto L_10d23064;
L_10d22fd2:;
  /* 10d22fd2 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10d22fd9 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d22fdc shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10d22fde add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d22fe1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10d22fe3 call 0x10d16270 */
  push32(0x10d22fe8u); f_10d16270();
  /* 10d22fe8 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 10d22feb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10d22fee mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 10d22ff1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10d22ff4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10d22ffb jmp 0x10d23014 */
  goto L_10d23014;
  /* 10d22ffd mov eax, 1 */
  EAX = (0x1u);
  /* 10d23002 ret  */
  ESPCHK(0x10d22c80u, _esp0);
  ESP += 4; return;
  /* 10d23003 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10d23006 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10d2300d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10d23014:;
  /* 10d23014 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d23018 jne 0x10d2301e */
  if (!C.zf) goto L_10d2301e;
  /* 10d2301a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d2301c jmp 0x10d23064 */
  goto L_10d23064;
L_10d2301e:;
  /* 10d2301e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d23021 push edx */
  push32((uint32_t)(EDX));
  /* 10d23022 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d23025 push eax */
  push32((uint32_t)(EAX));
  /* 10d23026 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10d23029 push ecx */
  push32((uint32_t)(ECX));
  /* 10d2302a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d2302d push edx */
  push32((uint32_t)(EDX));
  /* 10d2302e push 1 */
  push32((uint32_t)(0x1u));
  /* 10d23030 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10d23033 push eax */
  push32((uint32_t)(EAX));
  /* 10d23034 call dword ptr [0x10d40348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40348))), 0x10d2303au);
  /* 10d2303a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d2303c jne 0x10d23042 */
  if (!C.zf) goto L_10d23042;
  /* 10d2303e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d23040 jmp 0x10d23064 */
  goto L_10d23064;
L_10d23042:;
  /* 10d23042 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d23045 push ecx */
  push32((uint32_t)(ECX));
  /* 10d23046 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d23049 push edx */
  push32((uint32_t)(EDX));
  /* 10d2304a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d2304d push eax */
  push32((uint32_t)(EAX));
  /* 10d2304e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d23051 push ecx */
  push32((uint32_t)(ECX));
  /* 10d23052 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d23055 push edx */
  push32((uint32_t)(EDX));
  /* 10d23056 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d23059 push eax */
  push32((uint32_t)(EAX));
  /* 10d2305a call dword ptr [0x10d40248] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40248))), 0x10d23060u);
  /* 10d23060 jmp 0x10d23064 */
  goto L_10d23064;
L_10d23062:;
  /* 10d23062 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d23064:;
  /* 10d23064 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 10d23067 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d2306a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10d23071 pop edi */
  EDI = (pop32());
  /* 10d23072 pop esi */
  ESI = (pop32());
  /* 10d23073 pop ebx */
  EBX = (pop32());
  /* 10d23074 mov esp, ebp */
  ESP = (EBP);
  /* 10d23076 pop ebp */
  EBP = (pop32());
  /* 10d23077 ret  */
  ESPCHK(0x10d22c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10013080 @ 0x10d23080 (80 bytes, 32 insns) */
void f_10d23080(void) {
  FTRACE(0x10d23080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d23080 push ebp */
  push32((uint32_t)(EBP));
  /* 10d23081 mov ebp, esp */
  EBP = (ESP);
  /* 10d23083 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d23086 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d23089 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d2308c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d2308f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10d23092:;
  /* 10d23092 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d23095 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d23098 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d2309b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d2309e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d230a0 je 0x10d230b7 */
  if (C.zf) goto L_10d230b7;
  /* 10d230a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d230a5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d230a8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d230aa je 0x10d230b7 */
  if (C.zf) goto L_10d230b7;
  /* 10d230ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d230af add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d230b2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d230b5 jmp 0x10d23092 */
  goto L_10d23092;
L_10d230b7:;
  /* 10d230b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d230ba movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d230bd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d230bf jne 0x10d230c9 */
  if (!C.zf) goto L_10d230c9;
  /* 10d230c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d230c4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d230c7 jmp 0x10d230cc */
  goto L_10d230cc;
L_10d230c9:;
  /* 10d230c9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10d230cc:;
  /* 10d230cc mov esp, ebp */
  ESP = (EBP);
  /* 10d230ce pop ebp */
  EBP = (pop32());
  /* 10d230cf ret  */
  ESPCHK(0x10d23080u, _esp0);
  ESP += 4; return;
}

/* FUN_100130d0 @ 0x10d230d0 (736 bytes, 224 insns) */
void f_10d230d0(void) {
  FTRACE(0x10d230d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d230d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d230d1 mov ebp, esp */
  EBP = (ESP);
  /* 10d230d3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d230d6 push esi */
  push32((uint32_t)(ESI));
  /* 10d230d7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d230db je 0x10d230fc */
  if (C.zf) goto L_10d230fc;
  /* 10d230dd push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10d230df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d230e2 push eax */
  push32((uint32_t)(EAX));
  /* 10d230e3 call 0x10d23520 */
  push32(0x10d230e8u); f_10d23520();
  /* 10d230e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d230eb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10d230ee cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d230f2 je 0x10d230fc */
  if (C.zf) goto L_10d230fc;
  /* 10d230f4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d230f7 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d230fa jne 0x10d23104 */
  if (!C.zf) goto L_10d23104;
L_10d230fc:;
  /* 10d230fc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d230ff jmp 0x10d233ab */
  goto L_10d233ab;
L_10d23104:;
  /* 10d23104 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d23107 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10d2310b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d2310d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d2310f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10d23110 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10d23113 mov ecx, dword ptr [0x10d3e43c] */
  ECX = (r32((uint32_t)(0x10d3e43c)));
  /* 10d23119 cmp ecx, dword ptr [0x10d3e440] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10d3e440))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d2311f jne 0x10d23135 */
  if (!C.zf) goto L_10d23135;
  /* 10d23121 mov edx, dword ptr [0x10d3e43c] */
  EDX = (r32((uint32_t)(0x10d3e43c)));
  /* 10d23127 push edx */
  push32((uint32_t)(EDX));
  /* 10d23128 call 0x10d23430 */
  push32(0x10d2312du); f_10d23430();
  /* 10d2312d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d23130 mov dword ptr [0x10d3e43c], eax */
  w32((uint32_t)(0x10d3e43c), (EAX));
L_10d23135:;
  /* 10d23135 cmp dword ptr [0x10d3e43c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e43c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d2313c jne 0x10d231f5 */
  if (!C.zf) goto L_10d231f5;
  /* 10d23142 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d23146 je 0x10d23167 */
  if (C.zf) goto L_10d23167;
  /* 10d23148 cmp dword ptr [0x10d3e444], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e444))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d2314f je 0x10d23167 */
  if (C.zf) goto L_10d23167;
  /* 10d23151 call 0x10d22bd0 */
  push32(0x10d23156u); f_10d22bd0();
  /* 10d23156 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d23158 je 0x10d23162 */
  if (C.zf) goto L_10d23162;
  /* 10d2315a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d2315d jmp 0x10d233ab */
  goto L_10d233ab;
L_10d23162:;
  /* 10d23162 jmp 0x10d231f5 */
  goto L_10d231f5;
L_10d23167:;
  /* 10d23167 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d2316b je 0x10d23174 */
  if (C.zf) goto L_10d23174;
  /* 10d2316d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d2316f jmp 0x10d233ab */
  goto L_10d233ab;
L_10d23174:;
  /* 10d23174 cmp dword ptr [0x10d3e43c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e43c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d2317b jne 0x10d231b4 */
  if (!C.zf) goto L_10d231b4;
  /* 10d2317d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 10d23182 push 0x10d3a920 */
  push32((uint32_t)(0x10d3a920u));
  /* 10d23187 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d23189 push 4 */
  push32((uint32_t)(0x4u));
  /* 10d2318b call 0x10d130d0 */
  push32(0x10d23190u); f_10d130d0();
  /* 10d23190 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d23193 mov dword ptr [0x10d3e43c], eax */
  w32((uint32_t)(0x10d3e43c), (EAX));
  /* 10d23198 cmp dword ptr [0x10d3e43c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e43c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d2319f jne 0x10d231a9 */
  if (!C.zf) goto L_10d231a9;
  /* 10d231a1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d231a4 jmp 0x10d233ab */
  goto L_10d233ab;
L_10d231a9:;
  /* 10d231a9 mov eax, dword ptr [0x10d3e43c] */
  EAX = (r32((uint32_t)(0x10d3e43c)));
  /* 10d231ae mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10d231b4:;
  /* 10d231b4 cmp dword ptr [0x10d3e444], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e444))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d231bb jne 0x10d231f5 */
  if (!C.zf) goto L_10d231f5;
  /* 10d231bd push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 10d231c2 push 0x10d3a920 */
  push32((uint32_t)(0x10d3a920u));
  /* 10d231c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d231c9 push 4 */
  push32((uint32_t)(0x4u));
  /* 10d231cb call 0x10d130d0 */
  push32(0x10d231d0u); f_10d130d0();
  /* 10d231d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d231d3 mov dword ptr [0x10d3e444], eax */
  w32((uint32_t)(0x10d3e444), (EAX));
  /* 10d231d8 cmp dword ptr [0x10d3e444], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e444))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d231df jne 0x10d231e9 */
  if (!C.zf) goto L_10d231e9;
  /* 10d231e1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d231e4 jmp 0x10d233ab */
  goto L_10d233ab;
L_10d231e9:;
  /* 10d231e9 mov ecx, dword ptr [0x10d3e444] */
  ECX = (r32((uint32_t)(0x10d3e444)));
  /* 10d231ef mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_10d231f5:;
  /* 10d231f5 mov edx, dword ptr [0x10d3e43c] */
  EDX = (r32((uint32_t)(0x10d3e43c)));
  /* 10d231fb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10d231fe mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d23201 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d23204 push eax */
  push32((uint32_t)(EAX));
  /* 10d23205 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d23208 push ecx */
  push32((uint32_t)(ECX));
  /* 10d23209 call 0x10d233b0 */
  push32(0x10d2320eu); f_10d233b0();
  /* 10d2320e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d23211 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d23214 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d23218 jl 0x10d232b1 */
  if ((C.sf!=C.of)) goto L_10d232b1;
  /* 10d2321e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d23221 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d23224 je 0x10d232b1 */
  if (C.zf) goto L_10d232b1;
  /* 10d2322a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d2322e je 0x10d232a3 */
  if (C.zf) goto L_10d232a3;
  /* 10d23230 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d23232 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d23235 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d23238 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10d2323b push edx */
  push32((uint32_t)(EDX));
  /* 10d2323c call 0x10d13b60 */
  push32(0x10d23241u); f_10d13b60();
  /* 10d23241 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d23244 jmp 0x10d2324f */
  goto L_10d2324f;
L_10d23246:;
  /* 10d23246 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d23249 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d2324c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10d2324f:;
  /* 10d2324f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d23252 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d23255 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d23259 je 0x10d23270 */
  if (C.zf) goto L_10d23270;
  /* 10d2325b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d2325e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d23261 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d23264 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10d23267 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 10d2326b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10d2326e jmp 0x10d23246 */
  goto L_10d23246;
L_10d23270:;
  /* 10d23270 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 10d23275 push 0x10d3a920 */
  push32((uint32_t)(0x10d3a920u));
  /* 10d2327a push 2 */
  push32((uint32_t)(0x2u));
  /* 10d2327c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d2327f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10d23282 push eax */
  push32((uint32_t)(EAX));
  /* 10d23283 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d23286 push ecx */
  push32((uint32_t)(ECX));
  /* 10d23287 call 0x10d13560 */
  push32(0x10d2328cu); f_10d13560();
  /* 10d2328c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d2328f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d23292 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d23296 je 0x10d232a1 */
  if (C.zf) goto L_10d232a1;
  /* 10d23298 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d2329b mov dword ptr [0x10d3e43c], edx */
  w32((uint32_t)(0x10d3e43c), (EDX));
L_10d232a1:;
  /* 10d232a1 jmp 0x10d232af */
  goto L_10d232af;
L_10d232a3:;
  /* 10d232a3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d232a6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d232a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d232ac mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_10d232af:;
  /* 10d232af jmp 0x10d23324 */
  goto L_10d23324;
L_10d232b1:;
  /* 10d232b1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d232b5 jne 0x10d2331d */
  if (!C.zf) goto L_10d2331d;
  /* 10d232b7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d232bb jge 0x10d232c5 */
  if ((C.sf==C.of)) goto L_10d232c5;
  /* 10d232bd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d232c0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d232c2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10d232c5:;
  /* 10d232c5 push 0xce */
  push32((uint32_t)(0xceu));
  /* 10d232ca push 0x10d3a920 */
  push32((uint32_t)(0x10d3a920u));
  /* 10d232cf push 2 */
  push32((uint32_t)(0x2u));
  /* 10d232d1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d232d4 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 10d232db push edx */
  push32((uint32_t)(EDX));
  /* 10d232dc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d232df push eax */
  push32((uint32_t)(EAX));
  /* 10d232e0 call 0x10d13560 */
  push32(0x10d232e5u); f_10d13560();
  /* 10d232e5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d232e8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d232eb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d232ef jne 0x10d232f9 */
  if (!C.zf) goto L_10d232f9;
  /* 10d232f1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d232f4 jmp 0x10d233ab */
  goto L_10d233ab;
L_10d232f9:;
  /* 10d232f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d232fc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d232ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d23302 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 10d23305 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d23308 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d2330b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 10d23313 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d23316 mov dword ptr [0x10d3e43c], eax */
  w32((uint32_t)(0x10d3e43c), (EAX));
  /* 10d2331b jmp 0x10d23324 */
  goto L_10d23324;
L_10d2331d:;
  /* 10d2331d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d2331f jmp 0x10d233ab */
  goto L_10d233ab;
L_10d23324:;
  /* 10d23324 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d23328 je 0x10d233a9 */
  if (C.zf) goto L_10d233a9;
  /* 10d2332a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 10d2332f push 0x10d3a920 */
  push32((uint32_t)(0x10d3a920u));
  /* 10d23334 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d23336 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d23339 push ecx */
  push32((uint32_t)(ECX));
  /* 10d2333a call 0x10d15f00 */
  push32(0x10d2333fu); f_10d15f00();
  /* 10d2333f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d23342 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d23345 push eax */
  push32((uint32_t)(EAX));
  /* 10d23346 call 0x10d130d0 */
  push32(0x10d2334bu); f_10d130d0();
  /* 10d2334b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d2334e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10d23351 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d23355 je 0x10d233a9 */
  if (C.zf) goto L_10d233a9;
  /* 10d23357 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d2335a push edx */
  push32((uint32_t)(EDX));
  /* 10d2335b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d2335e push eax */
  push32((uint32_t)(EAX));
  /* 10d2335f call 0x10d16080 */
  push32(0x10d23364u); f_10d16080();
  /* 10d23364 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d23367 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d2336a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d2336d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d23370 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d23372 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d23375 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d23378 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10d2337b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d2337e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d23381 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d23384 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d23387 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d23389 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d2338b not edx */
  EDX = (~(EDX));
  /* 10d2338d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10d23390 push edx */
  push32((uint32_t)(EDX));
  /* 10d23391 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d23394 push eax */
  push32((uint32_t)(EAX));
  /* 10d23395 call dword ptr [0x10d40244] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40244))), 0x10d2339bu);
  /* 10d2339b push 2 */
  push32((uint32_t)(0x2u));
  /* 10d2339d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d233a0 push ecx */
  push32((uint32_t)(ECX));
  /* 10d233a1 call 0x10d13b60 */
  push32(0x10d233a6u); f_10d13b60();
  /* 10d233a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d233a9:;
  /* 10d233a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d233ab:;
  /* 10d233ab pop esi */
  ESI = (pop32());
  /* 10d233ac mov esp, ebp */
  ESP = (EBP);
  /* 10d233ae pop ebp */
  EBP = (pop32());
  /* 10d233af ret  */
  ESPCHK(0x10d230d0u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x10d233b0 (124 bytes, 47 insns) */
void f_10d233b0(void) {
  FTRACE(0x10d233b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d233b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d233b1 mov ebp, esp */
  EBP = (ESP);
  /* 10d233b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d233b4 mov eax, dword ptr [0x10d3e43c] */
  EAX = (r32((uint32_t)(0x10d3e43c)));
  /* 10d233b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d233bc jmp 0x10d233c7 */
  goto L_10d233c7;
L_10d233be:;
  /* 10d233be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d233c1 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d233c4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10d233c7:;
  /* 10d233c7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d233ca cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d233cd je 0x10d2341a */
  if (C.zf) goto L_10d2341a;
  /* 10d233cf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d233d2 push eax */
  push32((uint32_t)(EAX));
  /* 10d233d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d233d6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d233d8 push edx */
  push32((uint32_t)(EDX));
  /* 10d233d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d233dc push eax */
  push32((uint32_t)(EAX));
  /* 10d233dd call 0x10d22b80 */
  push32(0x10d233e2u); f_10d22b80();
  /* 10d233e2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d233e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d233e7 jne 0x10d23418 */
  if (!C.zf) goto L_10d23418;
  /* 10d233e9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d233ec mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d233ee mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d233f1 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 10d233f5 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d233f8 je 0x10d2340a */
  if (C.zf) goto L_10d2340a;
  /* 10d233fa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d233fd mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d233ff mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d23402 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 10d23406 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d23408 jne 0x10d23418 */
  if (!C.zf) goto L_10d23418;
L_10d2340a:;
  /* 10d2340a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d2340d sub eax, dword ptr [0x10d3e43c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10d3e43c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d23413 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10d23416 jmp 0x10d23428 */
  goto L_10d23428;
L_10d23418:;
  /* 10d23418 jmp 0x10d233be */
  goto L_10d233be;
L_10d2341a:;
  /* 10d2341a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d2341d sub eax, dword ptr [0x10d3e43c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10d3e43c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d23423 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10d23426 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_10d23428:;
  /* 10d23428 mov esp, ebp */
  ESP = (EBP);
  /* 10d2342a pop ebp */
  EBP = (pop32());
  /* 10d2342b ret  */
  ESPCHK(0x10d233b0u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x10d23430 (238 bytes, 80 insns) */
void f_10d23430(void) {
  FTRACE(0x10d23430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d23430 push ebp */
  push32((uint32_t)(EBP));
  /* 10d23431 mov ebp, esp */
  EBP = (ESP);
  /* 10d23433 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d23436 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10d2343d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d23440 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d23443 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d23447 jne 0x10d23450 */
  if (!C.zf) goto L_10d23450;
  /* 10d23449 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d2344b jmp 0x10d2351a */
  goto L_10d2351a;
L_10d23450:;
  /* 10d23450 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d23453 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d23455 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d23458 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d2345b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d2345e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d23460 je 0x10d2346d */
  if (C.zf) goto L_10d2346d;
  /* 10d23462 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d23465 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d23468 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10d2346b jmp 0x10d23450 */
  goto L_10d23450;
L_10d2346d:;
  /* 10d2346d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 10d23472 push 0x10d3a920 */
  push32((uint32_t)(0x10d3a920u));
  /* 10d23477 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d23479 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d2347c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 10d23483 push eax */
  push32((uint32_t)(EAX));
  /* 10d23484 call 0x10d130d0 */
  push32(0x10d23489u); f_10d130d0();
  /* 10d23489 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d2348c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d2348f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d23492 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d23495 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d23499 jne 0x10d234a5 */
  if (!C.zf) goto L_10d234a5;
  /* 10d2349b push 9 */
  push32((uint32_t)(0x9u));
  /* 10d2349d call 0x10d12040 */
  push32(0x10d234a2u); f_10d12040();
  /* 10d234a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d234a5:;
  /* 10d234a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d234a8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10d234ab:;
  /* 10d234ab mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d234ae cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d234b1 je 0x10d2350e */
  if (C.zf) goto L_10d2350e;
  /* 10d234b3 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 10d234b8 push 0x10d3a920 */
  push32((uint32_t)(0x10d3a920u));
  /* 10d234bd push 2 */
  push32((uint32_t)(0x2u));
  /* 10d234bf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d234c2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d234c4 push edx */
  push32((uint32_t)(EDX));
  /* 10d234c5 call 0x10d15f00 */
  push32(0x10d234cau); f_10d15f00();
  /* 10d234ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d234cd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d234d0 push eax */
  push32((uint32_t)(EAX));
  /* 10d234d1 call 0x10d130d0 */
  push32(0x10d234d6u); f_10d130d0();
  /* 10d234d6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d234d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d234dc mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10d234de mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d234e1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d234e4 je 0x10d234fa */
  if (C.zf) goto L_10d234fa;
  /* 10d234e6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d234e9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d234eb push ecx */
  push32((uint32_t)(ECX));
  /* 10d234ec mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d234ef mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d234f1 push eax */
  push32((uint32_t)(EAX));
  /* 10d234f2 call 0x10d16080 */
  push32(0x10d234f7u); f_10d16080();
  /* 10d234f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d234fa:;
  /* 10d234fa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d234fd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d23500 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d23503 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d23506 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d23509 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10d2350c jmp 0x10d234ab */
  goto L_10d234ab;
L_10d2350e:;
  /* 10d2350e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d23511 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10d23517 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10d2351a:;
  /* 10d2351a mov esp, ebp */
  ESP = (EBP);
  /* 10d2351c pop ebp */
  EBP = (pop32());
  /* 10d2351d ret  */
  ESPCHK(0x10d23430u, _esp0);
  ESP += 4; return;
}

/* FUN_10013520 @ 0x10d23520 (237 bytes, 81 insns) */
void f_10d23520(void) {
  FTRACE(0x10d23520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d23520 push ebp */
  push32((uint32_t)(EBP));
  /* 10d23521 mov ebp, esp */
  EBP = (ESP);
  /* 10d23523 push ecx */
  push32((uint32_t)(ECX));
  /* 10d23524 cmp dword ptr [0x10d3fb8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3fb8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d2352b jne 0x10d23542 */
  if (!C.zf) goto L_10d23542;
  /* 10d2352d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d23530 push eax */
  push32((uint32_t)(EAX));
  /* 10d23531 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d23534 push ecx */
  push32((uint32_t)(ECX));
  /* 10d23535 call 0x10d23620 */
  push32(0x10d2353au); f_10d23620();
  /* 10d2353a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d2353d jmp 0x10d23609 */
  goto L_10d23609;
L_10d23542:;
  /* 10d23542 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10d23544 call 0x10d16ad0 */
  push32(0x10d23549u); f_10d16ad0();
  /* 10d23549 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d2354c jmp 0x10d23557 */
  goto L_10d23557;
L_10d2354e:;
  /* 10d2354e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d23551 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d23554 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10d23557:;
  /* 10d23557 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d2355a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 10d2355e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 10d23562 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d23565 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d2356b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d2356d je 0x10d235eb */
  if (C.zf) goto L_10d235eb;
  /* 10d2356f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d23572 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d23577 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d23579 mov cl, byte ptr [eax + 0x10d3fca1] */
  CL = (r8((uint32_t)(EAX + 0x10d3fca1)));
  /* 10d2357f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10d23582 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d23584 je 0x10d235d6 */
  if (C.zf) goto L_10d235d6;
  /* 10d23586 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d23589 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d2358c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10d2358f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d23592 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d23594 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10d23596 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d23598 jne 0x10d235a8 */
  if (!C.zf) goto L_10d235a8;
  /* 10d2359a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10d2359c call 0x10d16b70 */
  push32(0x10d235a1u); f_10d16b70();
  /* 10d235a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d235a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d235a6 jmp 0x10d23609 */
  goto L_10d23609;
L_10d235a8:;
  /* 10d235a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d235ab and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d235b1 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10d235b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d235b7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d235b9 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10d235bb or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10d235bd cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d235c0 jne 0x10d235d4 */
  if (!C.zf) goto L_10d235d4;
  /* 10d235c2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10d235c4 call 0x10d16b70 */
  push32(0x10d235c9u); f_10d16b70();
  /* 10d235c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d235cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d235cf sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d235d2 jmp 0x10d23609 */
  goto L_10d23609;
L_10d235d4:;
  /* 10d235d4 jmp 0x10d235e6 */
  goto L_10d235e6;
L_10d235d6:;
  /* 10d235d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d235d9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d235df cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d235e2 jne 0x10d235e6 */
  if (!C.zf) goto L_10d235e6;
  /* 10d235e4 jmp 0x10d235eb */
  goto L_10d235eb;
L_10d235e6:;
  /* 10d235e6 jmp 0x10d2354e */
  goto L_10d2354e;
L_10d235eb:;
  /* 10d235eb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10d235ed call 0x10d16b70 */
  push32(0x10d235f2u); f_10d16b70();
  /* 10d235f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d235f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d235f8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d235fd cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d23600 jne 0x10d23607 */
  if (!C.zf) goto L_10d23607;
  /* 10d23602 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d23605 jmp 0x10d23609 */
  goto L_10d23609;
L_10d23607:;
  /* 10d23607 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d23609:;
  /* 10d23609 mov esp, ebp */
  ESP = (EBP);
  /* 10d2360b pop ebp */
  EBP = (pop32());
  /* 10d2360c ret  */
  ESPCHK(0x10d23520u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x10d23620 (193 bytes, 87 insns) */
void f_10d23620(void) {
  FTRACE(0x10d23620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d23620 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d23622 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10d23626 push ebx */
  push32((uint32_t)(EBX));
  /* 10d23627 mov ebx, eax */
  EBX = (EAX);
  /* 10d23629 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10d2362c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10d23630 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10d23636 je 0x10d2364b */
  if (C.zf) goto L_10d2364b;
L_10d23638:;
  /* 10d23638 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 10d2363a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10d2363b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d2363d je 0x10d23610 */
  if (C.zf) { jmp_ind(0x10d23610u); return; }
  /* 10d2363f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10d23641 je 0x10d23694 */
  if (C.zf) goto L_10d23694;
  /* 10d23643 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10d23649 jne 0x10d23638 */
  if (!C.zf) goto L_10d23638;
L_10d2364b:;
  /* 10d2364b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 10d2364d push edi */
  push32((uint32_t)(EDI));
  /* 10d2364e mov eax, ebx */
  EAX = (EBX);
  /* 10d23650 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 10d23653 push esi */
  push32((uint32_t)(ESI));
  /* 10d23654 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_10d23656:;
  /* 10d23656 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10d23658 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 10d2365d mov eax, ecx */
  EAX = (ECX);
  /* 10d2365f mov esi, edi */
  ESI = (EDI);
  /* 10d23661 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 10d23663 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10d23665 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10d23667 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d2366a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d2366d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10d2366f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10d23671 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d23674 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 10d2367a jne 0x10d23698 */
  if (!C.zf) goto L_10d23698;
  /* 10d2367c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10d23681 je 0x10d23656 */
  if (C.zf) goto L_10d23656;
  /* 10d23683 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10d23688 jne 0x10d23692 */
  if (!C.zf) goto L_10d23692;
  /* 10d2368a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 10d23690 jne 0x10d23656 */
  if (!C.zf) goto L_10d23656;
L_10d23692:;
  /* 10d23692 pop esi */
  ESI = (pop32());
  /* 10d23693 pop edi */
  EDI = (pop32());
L_10d23694:;
  /* 10d23694 pop ebx */
  EBX = (pop32());
  /* 10d23695 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d23697 ret  */
  ESPCHK(0x10d23620u, _esp0);
  ESP += 4; return;
L_10d23698:;
  /* 10d23698 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10d2369b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d2369d je 0x10d236d5 */
  if (C.zf) goto L_10d236d5;
  /* 10d2369f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10d236a1 je 0x10d23692 */
  if (C.zf) goto L_10d23692;
  /* 10d236a3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d236a5 je 0x10d236ce */
  if (C.zf) goto L_10d236ce;
  /* 10d236a7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10d236a9 je 0x10d23692 */
  if (C.zf) goto L_10d23692;
  /* 10d236ab shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10d236ae cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d236b0 je 0x10d236c7 */
  if (C.zf) goto L_10d236c7;
  /* 10d236b2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10d236b4 je 0x10d23692 */
  if (C.zf) goto L_10d23692;
  /* 10d236b6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d236b8 je 0x10d236c0 */
  if (C.zf) goto L_10d236c0;
  /* 10d236ba test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10d236bc je 0x10d23692 */
  if (C.zf) goto L_10d23692;
  /* 10d236be jmp 0x10d23656 */
  goto L_10d23656;
L_10d236c0:;
  /* 10d236c0 pop esi */
  ESI = (pop32());
  /* 10d236c1 pop edi */
  EDI = (pop32());
  /* 10d236c2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 10d236c5 pop ebx */
  EBX = (pop32());
  /* 10d236c6 ret  */
  ESPCHK(0x10d23620u, _esp0);
  ESP += 4; return;
L_10d236c7:;
  /* 10d236c7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 10d236ca pop esi */
  ESI = (pop32());
  /* 10d236cb pop edi */
  EDI = (pop32());
  /* 10d236cc pop ebx */
  EBX = (pop32());
  /* 10d236cd ret  */
  ESPCHK(0x10d23620u, _esp0);
  ESP += 4; return;
L_10d236ce:;
  /* 10d236ce lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 10d236d1 pop esi */
  ESI = (pop32());
  /* 10d236d2 pop edi */
  EDI = (pop32());
  /* 10d236d3 pop ebx */
  EBX = (pop32());
  /* 10d236d4 ret  */
  ESPCHK(0x10d23620u, _esp0);
  ESP += 4; return;
L_10d236d5:;
  /* 10d236d5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 10d236d8 pop esi */
  ESI = (pop32());
  /* 10d236d9 pop edi */
  EDI = (pop32());
  /* 10d236da pop ebx */
  EBX = (pop32());
  /* 10d236db ret  */
  ESPCHK(0x10d23620u, _esp0);
  ESP += 4; return;
  /* 10d236dc jmp dword ptr [0x10d40280] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10d40280)))); return;
}

/* RtlUnwind @ 0x10d2382c (6 bytes, 1 insns) */
void f_10d2382c(void) {
  FTRACE(0x10d2382cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d2382c jmp dword ptr [0x10d4027c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10d4027c)))); return;
}

