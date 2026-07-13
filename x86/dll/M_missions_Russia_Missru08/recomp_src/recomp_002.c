#include "recomp.h"

/* FUN_1000fd70 @ 0x10b4fd70 (289 bytes, 97 insns) */
void f_10b4fd70(void) {
  FTRACE(0x10b4fd70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4fd70 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4fd71 mov ebp, esp */
  EBP = (ESP);
  /* 10b4fd73 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4fd76 push esi */
  push32((uint32_t)(ESI));
  /* 10b4fd77 mov eax, dword ptr [0x10b6dc98] */
  EAX = (r32((uint32_t)(0x10b6dc98)));
  /* 10b4fd7c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b4fd7f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10b4fd86 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10b4fd8d jmp 0x10b4fd98 */
  goto L_10b4fd98;
L_10b4fd8f:;
  /* 10b4fd8f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b4fd92 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4fd95 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10b4fd98:;
  /* 10b4fd98 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4fd9c jae 0x10b4fdd1 */
  if (!C.cf) goto L_10b4fdd1;
  /* 10b4fd9e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b4fda1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4fda4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10b4fda7 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4fda8 call 0x10b45e50 */
  push32(0x10b4fdadu); f_10b45e50();
  /* 10b4fdad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4fdb0 mov esi, eax */
  ESI = (EAX);
  /* 10b4fdb2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b4fdb5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4fdb8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 10b4fdbc push ecx */
  push32((uint32_t)(ECX));
  /* 10b4fdbd call 0x10b45e50 */
  push32(0x10b4fdc2u); f_10b45e50();
  /* 10b4fdc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4fdc5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4fdc8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10b4fdcc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10b4fdcf jmp 0x10b4fd8f */
  goto L_10b4fd8f;
L_10b4fdd1:;
  /* 10b4fdd1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4fdd4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4fdd7 push eax */
  push32((uint32_t)(EAX));
  /* 10b4fdd8 call 0x10b43000 */
  push32(0x10b4fdddu); f_10b43000();
  /* 10b4fddd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4fde0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b4fde3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4fde7 je 0x10b4fe89 */
  if (C.zf) goto L_10b4fe89;
  /* 10b4fded mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4fdf0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10b4fdf3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10b4fdfa jmp 0x10b4fe05 */
  goto L_10b4fe05;
L_10b4fdfc:;
  /* 10b4fdfc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b4fdff add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4fe02 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10b4fe05:;
  /* 10b4fe05 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4fe09 jae 0x10b4fe7a */
  if (!C.cf) goto L_10b4fe7a;
  /* 10b4fe0b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b4fe0e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10b4fe11 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b4fe14 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4fe17 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10b4fe1a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b4fe1d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4fe20 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10b4fe23 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4fe24 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b4fe27 push edx */
  push32((uint32_t)(EDX));
  /* 10b4fe28 call 0x10b45fd0 */
  push32(0x10b4fe2du); f_10b45fd0();
  /* 10b4fe2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4fe30 push eax */
  push32((uint32_t)(EAX));
  /* 10b4fe31 call 0x10b45e50 */
  push32(0x10b4fe36u); f_10b45e50();
  /* 10b4fe36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4fe39 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b4fe3c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4fe3e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10b4fe41 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b4fe44 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10b4fe47 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b4fe4a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4fe4d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10b4fe50 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b4fe53 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4fe56 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 10b4fe5a push eax */
  push32((uint32_t)(EAX));
  /* 10b4fe5b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b4fe5e push ecx */
  push32((uint32_t)(ECX));
  /* 10b4fe5f call 0x10b45fd0 */
  push32(0x10b4fe64u); f_10b45fd0();
  /* 10b4fe64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4fe67 push eax */
  push32((uint32_t)(EAX));
  /* 10b4fe68 call 0x10b45e50 */
  push32(0x10b4fe6du); f_10b45e50();
  /* 10b4fe6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4fe70 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b4fe73 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4fe75 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10b4fe78 jmp 0x10b4fdfc */
  goto L_10b4fdfc;
L_10b4fe7a:;
  /* 10b4fe7a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b4fe7d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10b4fe80 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b4fe83 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4fe86 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10b4fe89:;
  /* 10b4fe89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4fe8c pop esi */
  ESI = (pop32());
  /* 10b4fe8d mov esp, ebp */
  ESP = (EBP);
  /* 10b4fe8f pop ebp */
  EBP = (pop32());
  /* 10b4fe90 ret  */
  ESPCHK(0x10b4fd70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fea0 @ 0x10b4fea0 (291 bytes, 97 insns) */
void f_10b4fea0(void) {
  FTRACE(0x10b4fea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4fea0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4fea1 mov ebp, esp */
  EBP = (ESP);
  /* 10b4fea3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4fea6 push esi */
  push32((uint32_t)(ESI));
  /* 10b4fea7 mov eax, dword ptr [0x10b6dc98] */
  EAX = (r32((uint32_t)(0x10b6dc98)));
  /* 10b4feac mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b4feaf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10b4feb6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10b4febd jmp 0x10b4fec8 */
  goto L_10b4fec8;
L_10b4febf:;
  /* 10b4febf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b4fec2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4fec5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10b4fec8:;
  /* 10b4fec8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4fecc jae 0x10b4ff02 */
  if (!C.cf) goto L_10b4ff02;
  /* 10b4fece mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b4fed1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4fed4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10b4fed8 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4fed9 call 0x10b45e50 */
  push32(0x10b4fedeu); f_10b45e50();
  /* 10b4fede add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4fee1 mov esi, eax */
  ESI = (EAX);
  /* 10b4fee3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b4fee6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4fee9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 10b4feed push ecx */
  push32((uint32_t)(ECX));
  /* 10b4feee call 0x10b45e50 */
  push32(0x10b4fef3u); f_10b45e50();
  /* 10b4fef3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4fef6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4fef9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10b4fefd mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10b4ff00 jmp 0x10b4febf */
  goto L_10b4febf;
L_10b4ff02:;
  /* 10b4ff02 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4ff05 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ff08 push eax */
  push32((uint32_t)(EAX));
  /* 10b4ff09 call 0x10b43000 */
  push32(0x10b4ff0eu); f_10b43000();
  /* 10b4ff0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ff11 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b4ff14 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4ff18 je 0x10b4ffbb */
  if (C.zf) goto L_10b4ffbb;
  /* 10b4ff1e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4ff21 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10b4ff24 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10b4ff2b jmp 0x10b4ff36 */
  goto L_10b4ff36;
L_10b4ff2d:;
  /* 10b4ff2d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b4ff30 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ff33 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10b4ff36:;
  /* 10b4ff36 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4ff3a jae 0x10b4ffac */
  if (!C.cf) goto L_10b4ffac;
  /* 10b4ff3c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b4ff3f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10b4ff42 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b4ff45 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ff48 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10b4ff4b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b4ff4e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4ff51 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10b4ff55 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4ff56 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b4ff59 push edx */
  push32((uint32_t)(EDX));
  /* 10b4ff5a call 0x10b45fd0 */
  push32(0x10b4ff5fu); f_10b45fd0();
  /* 10b4ff5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ff62 push eax */
  push32((uint32_t)(EAX));
  /* 10b4ff63 call 0x10b45e50 */
  push32(0x10b4ff68u); f_10b45e50();
  /* 10b4ff68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ff6b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b4ff6e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ff70 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10b4ff73 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b4ff76 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10b4ff79 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b4ff7c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ff7f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10b4ff82 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b4ff85 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4ff88 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10b4ff8c push eax */
  push32((uint32_t)(EAX));
  /* 10b4ff8d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b4ff90 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4ff91 call 0x10b45fd0 */
  push32(0x10b4ff96u); f_10b45fd0();
  /* 10b4ff96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ff99 push eax */
  push32((uint32_t)(EAX));
  /* 10b4ff9a call 0x10b45e50 */
  push32(0x10b4ff9fu); f_10b45e50();
  /* 10b4ff9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ffa2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b4ffa5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ffa7 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10b4ffaa jmp 0x10b4ff2d */
  goto L_10b4ff2d;
L_10b4ffac:;
  /* 10b4ffac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b4ffaf mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10b4ffb2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b4ffb5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ffb8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10b4ffbb:;
  /* 10b4ffbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4ffbe pop esi */
  ESI = (pop32());
  /* 10b4ffbf mov esp, ebp */
  ESP = (EBP);
  /* 10b4ffc1 pop ebp */
  EBP = (pop32());
  /* 10b4ffc2 ret  */
  ESPCHK(0x10b4fea0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ffd0 @ 0x10b4ffd0 (878 bytes, 273 insns) */
void f_10b4ffd0(void) {
  FTRACE(0x10b4ffd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4ffd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4ffd1 mov ebp, esp */
  EBP = (ESP);
  /* 10b4ffd3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4ffd6 push esi */
  push32((uint32_t)(ESI));
  /* 10b4ffd7 mov eax, dword ptr [0x10b6dc98] */
  EAX = (r32((uint32_t)(0x10b6dc98)));
  /* 10b4ffdc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b4ffdf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10b4ffe6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10b4ffed jmp 0x10b4fff8 */
  goto L_10b4fff8;
L_10b4ffef:;
  /* 10b4ffef mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b4fff2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4fff5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10b4fff8:;
  /* 10b4fff8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4fffc jae 0x10b50031 */
  if (!C.cf) goto L_10b50031;
  /* 10b4fffe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b50001 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b50004 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10b50007 push ecx */
  push32((uint32_t)(ECX));
  /* 10b50008 call 0x10b45e50 */
  push32(0x10b5000du); f_10b45e50();
  /* 10b5000d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50010 mov esi, eax */
  ESI = (EAX);
  /* 10b50012 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b50015 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b50018 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 10b5001c push ecx */
  push32((uint32_t)(ECX));
  /* 10b5001d call 0x10b45e50 */
  push32(0x10b50022u); f_10b45e50();
  /* 10b50022 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50025 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50028 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10b5002c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10b5002f jmp 0x10b4ffef */
  goto L_10b4ffef;
L_10b50031:;
  /* 10b50031 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10b50038 jmp 0x10b50043 */
  goto L_10b50043;
L_10b5003a:;
  /* 10b5003a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b5003d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50040 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10b50043:;
  /* 10b50043 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b50047 jae 0x10b5007d */
  if (!C.cf) goto L_10b5007d;
  /* 10b50049 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b5004c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b5004f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10b50053 push eax */
  push32((uint32_t)(EAX));
  /* 10b50054 call 0x10b45e50 */
  push32(0x10b50059u); f_10b45e50();
  /* 10b50059 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b5005c mov esi, eax */
  ESI = (EAX);
  /* 10b5005e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b50061 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b50064 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10b50068 push eax */
  push32((uint32_t)(EAX));
  /* 10b50069 call 0x10b45e50 */
  push32(0x10b5006eu); f_10b45e50();
  /* 10b5006e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50071 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50074 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10b50078 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b5007b jmp 0x10b5003a */
  goto L_10b5003a;
L_10b5007d:;
  /* 10b5007d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b50080 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10b50086 push eax */
  push32((uint32_t)(EAX));
  /* 10b50087 call 0x10b45e50 */
  push32(0x10b5008cu); f_10b45e50();
  /* 10b5008c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b5008f mov esi, eax */
  ESI = (EAX);
  /* 10b50091 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b50094 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 10b5009a push edx */
  push32((uint32_t)(EDX));
  /* 10b5009b call 0x10b45e50 */
  push32(0x10b500a0u); f_10b45e50();
  /* 10b500a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b500a3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b500a6 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10b500aa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b500ad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b500b0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10b500b6 push edx */
  push32((uint32_t)(EDX));
  /* 10b500b7 call 0x10b45e50 */
  push32(0x10b500bcu); f_10b45e50();
  /* 10b500bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b500bf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b500c2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10b500c6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10b500c9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b500cc mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 10b500d2 push ecx */
  push32((uint32_t)(ECX));
  /* 10b500d3 call 0x10b45e50 */
  push32(0x10b500d8u); f_10b45e50();
  /* 10b500d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b500db mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b500de lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10b500e2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b500e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b500e8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 10b500ee push edx */
  push32((uint32_t)(EDX));
  /* 10b500ef call 0x10b45e50 */
  push32(0x10b500f4u); f_10b45e50();
  /* 10b500f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b500f7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b500fa lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10b500fe mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10b50101 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b50104 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50109 push eax */
  push32((uint32_t)(EAX));
  /* 10b5010a call 0x10b43000 */
  push32(0x10b5010fu); f_10b43000();
  /* 10b5010f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50112 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b50115 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b50119 je 0x10b50336 */
  if (C.zf) goto L_10b50336;
  /* 10b5011f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b50122 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10b50125 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b50128 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b5012e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10b50131 push 0xac */
  push32((uint32_t)(0xacu));
  /* 10b50136 mov eax, dword ptr [0x10b6dc98] */
  EAX = (r32((uint32_t)(0x10b6dc98)));
  /* 10b5013b push eax */
  push32((uint32_t)(EAX));
  /* 10b5013c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b5013f push ecx */
  push32((uint32_t)(ECX));
  /* 10b50140 call 0x10b49900 */
  push32(0x10b50145u); f_10b49900();
  /* 10b50145 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50148 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10b5014f jmp 0x10b5015a */
  goto L_10b5015a;
L_10b50151:;
  /* 10b50151 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b50154 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50157 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10b5015a:;
  /* 10b5015a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b5015e jae 0x10b501ce */
  if (!C.cf) goto L_10b501ce;
  /* 10b50160 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b50163 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b50166 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b50169 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10b5016c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b5016f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b50172 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10b50175 push edx */
  push32((uint32_t)(EDX));
  /* 10b50176 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b50179 push eax */
  push32((uint32_t)(EAX));
  /* 10b5017a call 0x10b45fd0 */
  push32(0x10b5017fu); f_10b45fd0();
  /* 10b5017f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50182 push eax */
  push32((uint32_t)(EAX));
  /* 10b50183 call 0x10b45e50 */
  push32(0x10b50188u); f_10b45e50();
  /* 10b50188 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b5018b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b5018e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10b50192 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10b50195 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b50198 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b5019b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b5019e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 10b501a2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b501a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b501a8 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 10b501ac push edx */
  push32((uint32_t)(EDX));
  /* 10b501ad mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b501b0 push eax */
  push32((uint32_t)(EAX));
  /* 10b501b1 call 0x10b45fd0 */
  push32(0x10b501b6u); f_10b45fd0();
  /* 10b501b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b501b9 push eax */
  push32((uint32_t)(EAX));
  /* 10b501ba call 0x10b45e50 */
  push32(0x10b501bfu); f_10b45e50();
  /* 10b501bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b501c2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b501c5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10b501c9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10b501cc jmp 0x10b50151 */
  goto L_10b50151;
L_10b501ce:;
  /* 10b501ce mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10b501d5 jmp 0x10b501e0 */
  goto L_10b501e0;
L_10b501d7:;
  /* 10b501d7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b501da add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b501dd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10b501e0:;
  /* 10b501e0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b501e4 jae 0x10b50256 */
  if (!C.cf) goto L_10b50256;
  /* 10b501e6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b501e9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b501ec mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b501ef mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 10b501f3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b501f6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b501f9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10b501fd push eax */
  push32((uint32_t)(EAX));
  /* 10b501fe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b50201 push ecx */
  push32((uint32_t)(ECX));
  /* 10b50202 call 0x10b45fd0 */
  push32(0x10b50207u); f_10b45fd0();
  /* 10b50207 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b5020a push eax */
  push32((uint32_t)(EAX));
  /* 10b5020b call 0x10b45e50 */
  push32(0x10b50210u); f_10b45e50();
  /* 10b50210 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50213 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b50216 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10b5021a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10b5021d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b50220 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b50223 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b50226 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 10b5022a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b5022d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b50230 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10b50234 push eax */
  push32((uint32_t)(EAX));
  /* 10b50235 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b50238 push ecx */
  push32((uint32_t)(ECX));
  /* 10b50239 call 0x10b45fd0 */
  push32(0x10b5023eu); f_10b45fd0();
  /* 10b5023e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50241 push eax */
  push32((uint32_t)(EAX));
  /* 10b50242 call 0x10b45e50 */
  push32(0x10b50247u); f_10b45e50();
  /* 10b50247 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b5024a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b5024d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10b50251 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10b50254 jmp 0x10b501d7 */
  goto L_10b501d7;
L_10b50256:;
  /* 10b50256 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b50259 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b5025c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 10b50262 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b50265 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 10b5026b push ecx */
  push32((uint32_t)(ECX));
  /* 10b5026c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b5026f push edx */
  push32((uint32_t)(EDX));
  /* 10b50270 call 0x10b45fd0 */
  push32(0x10b50275u); f_10b45fd0();
  /* 10b50275 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50278 push eax */
  push32((uint32_t)(EAX));
  /* 10b50279 call 0x10b45e50 */
  push32(0x10b5027eu); f_10b45e50();
  /* 10b5027e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50281 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b50284 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10b50288 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10b5028b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b5028e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b50291 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 10b50297 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b5029a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10b502a0 push eax */
  push32((uint32_t)(EAX));
  /* 10b502a1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b502a4 push ecx */
  push32((uint32_t)(ECX));
  /* 10b502a5 call 0x10b45fd0 */
  push32(0x10b502aau); f_10b45fd0();
  /* 10b502aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b502ad push eax */
  push32((uint32_t)(EAX));
  /* 10b502ae call 0x10b45e50 */
  push32(0x10b502b3u); f_10b45e50();
  /* 10b502b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b502b6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b502b9 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10b502bd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10b502c0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b502c3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b502c6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 10b502cc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b502cf mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 10b502d5 push ecx */
  push32((uint32_t)(ECX));
  /* 10b502d6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b502d9 push edx */
  push32((uint32_t)(EDX));
  /* 10b502da call 0x10b45fd0 */
  push32(0x10b502dfu); f_10b45fd0();
  /* 10b502df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b502e2 push eax */
  push32((uint32_t)(EAX));
  /* 10b502e3 call 0x10b45e50 */
  push32(0x10b502e8u); f_10b45e50();
  /* 10b502e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b502eb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b502ee lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10b502f2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10b502f5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b502f8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b502fb mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 10b50301 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b50304 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 10b5030a push eax */
  push32((uint32_t)(EAX));
  /* 10b5030b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b5030e push ecx */
  push32((uint32_t)(ECX));
  /* 10b5030f call 0x10b45fd0 */
  push32(0x10b50314u); f_10b45fd0();
  /* 10b50314 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50317 push eax */
  push32((uint32_t)(EAX));
  /* 10b50318 call 0x10b45e50 */
  push32(0x10b5031du); f_10b45e50();
  /* 10b5031d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50320 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b50323 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10b50327 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10b5032a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b5032d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b50330 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_10b50336:;
  /* 10b50336 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b50339 pop esi */
  ESI = (pop32());
  /* 10b5033a mov esp, ebp */
  ESP = (EBP);
  /* 10b5033c pop ebp */
  EBP = (pop32());
  /* 10b5033d ret  */
  ESPCHK(0x10b4ffd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010340 @ 0x10b50340 (31 bytes, 15 insns) */
void f_10b50340(void) {
  FTRACE(0x10b50340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b50340 push ebp */
  push32((uint32_t)(EBP));
  /* 10b50341 mov ebp, esp */
  EBP = (ESP);
  /* 10b50343 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b50345 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b50348 push eax */
  push32((uint32_t)(EAX));
  /* 10b50349 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b5034c push ecx */
  push32((uint32_t)(ECX));
  /* 10b5034d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b50350 push edx */
  push32((uint32_t)(EDX));
  /* 10b50351 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b50354 push eax */
  push32((uint32_t)(EAX));
  /* 10b50355 call 0x10b50360 */
  push32(0x10b5035au); f_10b50360();
  /* 10b5035a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b5035d pop ebp */
  EBP = (pop32());
  /* 10b5035e ret  */
  ESPCHK(0x10b50340u, _esp0);
  ESP += 4; return;
}

/* FUN_10010360 @ 0x10b50360 (393 bytes, 123 insns) */
void f_10b50360(void) {
  FTRACE(0x10b50360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b50360 push ebp */
  push32((uint32_t)(EBP));
  /* 10b50361 mov ebp, esp */
  EBP = (ESP);
  /* 10b50363 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b50366 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b5036a jne 0x10b50376 */
  if (!C.zf) goto L_10b50376;
  /* 10b5036c mov eax, dword ptr [0x10b6dc98] */
  EAX = (r32((uint32_t)(0x10b6dc98)));
  /* 10b50371 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10b50374 jmp 0x10b5037c */
  goto L_10b5037c;
L_10b50376:;
  /* 10b50376 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b50379 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10b5037c:;
  /* 10b5037c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b5037f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b50382 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b50385 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b50388 push 0x10b6e7e4 */
  push32((uint32_t)(0x10b6e7e4u));
  /* 10b5038d call dword ptr [0x10b702d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702d0))), 0x10b50393u);
  /* 10b50393 cmp dword ptr [0x10b6e7d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e7d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b5039a je 0x10b503ba */
  if (C.zf) goto L_10b503ba;
  /* 10b5039c push 0x10b6e7e4 */
  push32((uint32_t)(0x10b6e7e4u));
  /* 10b503a1 call dword ptr [0x10b702c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702c0))), 0x10b503a7u);
  /* 10b503a7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10b503a9 call 0x10b46a20 */
  push32(0x10b503aeu); f_10b46a20();
  /* 10b503ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b503b1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10b503b8 jmp 0x10b503c1 */
  goto L_10b503c1;
L_10b503ba:;
  /* 10b503ba mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10b503c1:;
  /* 10b503c1 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b503c5 jbe 0x10b504b2 */
  if ((C.cf||C.zf)) goto L_10b504b2;
  /* 10b503cb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b503ce mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10b503d0 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 10b503d3 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b503d7 je 0x10b503e1 */
  if (C.zf) goto L_10b503e1;
  /* 10b503d9 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b503dd je 0x10b503e6 */
  if (C.zf) goto L_10b503e6;
  /* 10b503df jmp 0x10b50440 */
  goto L_10b50440;
L_10b503e1:;
  /* 10b503e1 jmp 0x10b504b2 */
  goto L_10b504b2;
L_10b503e6:;
  /* 10b503e6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b503e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b503ec mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10b503ef mov dword ptr [0x10b6e7c0], 0 */
  w32((uint32_t)(0x10b6e7c0), (0x0u));
  /* 10b503f9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b503fc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10b503ff cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b50402 jne 0x10b50417 */
  if (!C.zf) goto L_10b50417;
  /* 10b50404 mov dword ptr [0x10b6e7c0], 1 */
  w32((uint32_t)(0x10b6e7c0), (0x1u));
  /* 10b5040e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b50411 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50414 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10b50417:;
  /* 10b50417 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b5041a push ecx */
  push32((uint32_t)(ECX));
  /* 10b5041b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10b5041e push edx */
  push32((uint32_t)(EDX));
  /* 10b5041f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10b50422 push eax */
  push32((uint32_t)(EAX));
  /* 10b50423 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b50426 push ecx */
  push32((uint32_t)(ECX));
  /* 10b50427 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b5042a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b5042c push eax */
  push32((uint32_t)(EAX));
  /* 10b5042d call 0x10b504f0 */
  push32(0x10b50432u); f_10b504f0();
  /* 10b50432 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50435 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b50438 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b5043b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10b5043e jmp 0x10b504ad */
  goto L_10b504ad;
L_10b50440:;
  /* 10b50440 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b50443 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b50445 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b50447 mov ecx, dword ptr [0x10b6cc98] */
  ECX = (r32((uint32_t)(0x10b6cc98)));
  /* 10b5044d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b5044f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10b50453 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10b50459 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b5045b je 0x10b50488 */
  if (C.zf) goto L_10b50488;
  /* 10b5045d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b50461 jbe 0x10b50488 */
  if ((C.cf||C.zf)) goto L_10b50488;
  /* 10b50463 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b50466 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b50469 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10b5046b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10b5046d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b50470 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50473 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10b50476 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b50479 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b5047c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10b5047f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b50482 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b50485 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10b50488:;
  /* 10b50488 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b5048b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b5048e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10b50490 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10b50492 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b50495 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50498 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10b5049b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b5049e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b504a1 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10b504a4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b504a7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b504aa mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10b504ad:;
  /* 10b504ad jmp 0x10b503c1 */
  goto L_10b503c1;
L_10b504b2:;
  /* 10b504b2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b504b6 je 0x10b504c4 */
  if (C.zf) goto L_10b504c4;
  /* 10b504b8 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10b504ba call 0x10b46ac0 */
  push32(0x10b504bfu); f_10b46ac0();
  /* 10b504bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b504c2 jmp 0x10b504cf */
  goto L_10b504cf;
L_10b504c4:;
  /* 10b504c4 push 0x10b6e7e4 */
  push32((uint32_t)(0x10b6e7e4u));
  /* 10b504c9 call dword ptr [0x10b702c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702c0))), 0x10b504cfu);
L_10b504cf:;
  /* 10b504cf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b504d3 jbe 0x10b504e3 */
  if ((C.cf||C.zf)) goto L_10b504e3;
  /* 10b504d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b504d8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10b504db mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b504de sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b504e1 jmp 0x10b504e5 */
  goto L_10b504e5;
L_10b504e3:;
  /* 10b504e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b504e5:;
  /* 10b504e5 mov esp, ebp */
  ESP = (EBP);
  /* 10b504e7 pop ebp */
  EBP = (pop32());
  /* 10b504e8 ret  */
  ESPCHK(0x10b50360u, _esp0);
  ESP += 4; return;
}

/* FUN_100104f0 @ 0x10b504f0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_10b504f0(void) {
  FTRACE(0x10b504f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b504f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b504f1 mov ebp, esp */
  EBP = (ESP);
  /* 10b504f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b504f6 push esi */
  push32((uint32_t)(ESI));
  /* 10b504f7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 10b504fb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b504fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b50501 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b50504 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b50507 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b5050b ja 0x10b50a58 */
  if ((!C.cf&&!C.zf)) goto L_10b50a58;
  /* 10b50511 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b50514 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b50516 mov dl, byte ptr [eax + 0x10b50ab9] */
  DL = (r8((uint32_t)(EAX + 0x10b50ab9)));
  /* 10b5051c jmp dword ptr [edx*4 + 0x10b50a5d] */
  switch (EDX) {
    case 0: goto L_10b50a36;
    case 1: goto L_10b50545;
    case 2: goto L_10b5058b;
    case 3: goto L_10b506d8;
    case 4: goto L_10b50700;
    case 5: goto L_10b5079f;
    case 6: goto L_10b5080b;
    case 7: goto L_10b50834;
    case 8: goto L_10b50875;
    case 9: goto L_10b50957;
    case 10: goto L_10b509be;
    case 11: goto L_10b50a0b;
    case 12: goto L_10b50523;
    case 13: goto L_10b50568;
    case 14: goto L_10b505ae;
    case 15: goto L_10b506ae;
    case 16: goto L_10b50745;
    case 17: goto L_10b50772;
    case 18: goto L_10b507c7;
    case 19: goto L_10b5084b;
    case 20: goto L_10b508f9;
    case 21: goto L_10b50988;
    case 22: goto L_10b50a58;
    default: x86_unimpl("switch@0x10b5051c out of table"); return;
  }
L_10b50523:;
  /* 10b50523 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b50526 push ecx */
  push32((uint32_t)(ECX));
  /* 10b50527 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b5052a push edx */
  push32((uint32_t)(EDX));
  /* 10b5052b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b5052e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10b50531 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b50534 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10b50537 push eax */
  push32((uint32_t)(EAX));
  /* 10b50538 call 0x10b50b10 */
  push32(0x10b5053du); f_10b50b10();
  /* 10b5053d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50540 jmp 0x10b50a58 */
  goto L_10b50a58;
L_10b50545:;
  /* 10b50545 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b50548 push ecx */
  push32((uint32_t)(ECX));
  /* 10b50549 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b5054c push edx */
  push32((uint32_t)(EDX));
  /* 10b5054d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b50550 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10b50553 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b50556 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 10b5055a push eax */
  push32((uint32_t)(EAX));
  /* 10b5055b call 0x10b50b10 */
  push32(0x10b50560u); f_10b50b10();
  /* 10b50560 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50563 jmp 0x10b50a58 */
  goto L_10b50a58;
L_10b50568:;
  /* 10b50568 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b5056b push ecx */
  push32((uint32_t)(ECX));
  /* 10b5056c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b5056f push edx */
  push32((uint32_t)(EDX));
  /* 10b50570 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b50573 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10b50576 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b50579 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10b5057d push eax */
  push32((uint32_t)(EAX));
  /* 10b5057e call 0x10b50b10 */
  push32(0x10b50583u); f_10b50b10();
  /* 10b50583 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50586 jmp 0x10b50a58 */
  goto L_10b50a58;
L_10b5058b:;
  /* 10b5058b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b5058e push ecx */
  push32((uint32_t)(ECX));
  /* 10b5058f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b50592 push edx */
  push32((uint32_t)(EDX));
  /* 10b50593 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b50596 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10b50599 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b5059c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10b505a0 push eax */
  push32((uint32_t)(EAX));
  /* 10b505a1 call 0x10b50b10 */
  push32(0x10b505a6u); f_10b50b10();
  /* 10b505a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b505a9 jmp 0x10b50a58 */
  goto L_10b50a58;
L_10b505ae:;
  /* 10b505ae cmp dword ptr [0x10b6e7c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e7c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b505b5 je 0x10b50636 */
  if (C.zf) goto L_10b50636;
  /* 10b505b7 mov dword ptr [0x10b6e7c0], 0 */
  w32((uint32_t)(0x10b6e7c0), (0x0u));
  /* 10b505c1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b505c4 push ecx */
  push32((uint32_t)(ECX));
  /* 10b505c5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b505c8 push edx */
  push32((uint32_t)(EDX));
  /* 10b505c9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b505cc push eax */
  push32((uint32_t)(EAX));
  /* 10b505cd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b505d0 push ecx */
  push32((uint32_t)(ECX));
  /* 10b505d1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b505d4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 10b505da push eax */
  push32((uint32_t)(EAX));
  /* 10b505db call 0x10b50cc0 */
  push32(0x10b505e0u); f_10b50cc0();
  /* 10b505e0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b505e3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b505e6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b505e9 jne 0x10b505f0 */
  if (!C.zf) goto L_10b505f0;
  /* 10b505eb jmp 0x10b50a58 */
  goto L_10b50a58;
L_10b505f0:;
  /* 10b505f0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b505f3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b505f5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 10b505f8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b505fb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b505fd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50600 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b50603 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10b50605 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b50608 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b5060a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b5060d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b50610 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10b50612 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b50615 push ecx */
  push32((uint32_t)(ECX));
  /* 10b50616 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b50619 push edx */
  push32((uint32_t)(EDX));
  /* 10b5061a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b5061d push eax */
  push32((uint32_t)(EAX));
  /* 10b5061e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b50621 push ecx */
  push32((uint32_t)(ECX));
  /* 10b50622 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b50625 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10b5062b push eax */
  push32((uint32_t)(EAX));
  /* 10b5062c call 0x10b50cc0 */
  push32(0x10b50631u); f_10b50cc0();
  /* 10b50631 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50634 jmp 0x10b506a9 */
  goto L_10b506a9;
L_10b50636:;
  /* 10b50636 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b50639 push ecx */
  push32((uint32_t)(ECX));
  /* 10b5063a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b5063d push edx */
  push32((uint32_t)(EDX));
  /* 10b5063e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b50641 push eax */
  push32((uint32_t)(EAX));
  /* 10b50642 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b50645 push ecx */
  push32((uint32_t)(ECX));
  /* 10b50646 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b50649 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 10b5064f push eax */
  push32((uint32_t)(EAX));
  /* 10b50650 call 0x10b50cc0 */
  push32(0x10b50655u); f_10b50cc0();
  /* 10b50655 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50658 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b5065b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b5065e jne 0x10b50665 */
  if (!C.zf) goto L_10b50665;
  /* 10b50660 jmp 0x10b50a58 */
  goto L_10b50a58;
L_10b50665:;
  /* 10b50665 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b50668 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b5066a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 10b5066d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b50670 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b50672 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50675 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b50678 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10b5067a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b5067d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b5067f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b50682 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b50685 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10b50687 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b5068a push ecx */
  push32((uint32_t)(ECX));
  /* 10b5068b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b5068e push edx */
  push32((uint32_t)(EDX));
  /* 10b5068f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b50692 push eax */
  push32((uint32_t)(EAX));
  /* 10b50693 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b50696 push ecx */
  push32((uint32_t)(ECX));
  /* 10b50697 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b5069a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10b506a0 push eax */
  push32((uint32_t)(EAX));
  /* 10b506a1 call 0x10b50cc0 */
  push32(0x10b506a6u); f_10b50cc0();
  /* 10b506a6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b506a9:;
  /* 10b506a9 jmp 0x10b50a58 */
  goto L_10b50a58;
L_10b506ae:;
  /* 10b506ae mov ecx, dword ptr [0x10b6e7c0] */
  ECX = (r32((uint32_t)(0x10b6e7c0)));
  /* 10b506b4 mov dword ptr [0x10b6e7d0], ecx */
  w32((uint32_t)(0x10b6e7d0), (ECX));
  /* 10b506ba mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b506bd push edx */
  push32((uint32_t)(EDX));
  /* 10b506be mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b506c1 push eax */
  push32((uint32_t)(EAX));
  /* 10b506c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b506c4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b506c7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10b506ca push edx */
  push32((uint32_t)(EDX));
  /* 10b506cb call 0x10b50b60 */
  push32(0x10b506d0u); f_10b50b60();
  /* 10b506d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b506d3 jmp 0x10b50a58 */
  goto L_10b50a58;
L_10b506d8:;
  /* 10b506d8 mov eax, dword ptr [0x10b6e7c0] */
  EAX = (r32((uint32_t)(0x10b6e7c0)));
  /* 10b506dd mov dword ptr [0x10b6e7d0], eax */
  w32((uint32_t)(0x10b6e7d0), (EAX));
  /* 10b506e2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b506e5 push ecx */
  push32((uint32_t)(ECX));
  /* 10b506e6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b506e9 push edx */
  push32((uint32_t)(EDX));
  /* 10b506ea push 2 */
  push32((uint32_t)(0x2u));
  /* 10b506ec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b506ef mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10b506f2 push ecx */
  push32((uint32_t)(ECX));
  /* 10b506f3 call 0x10b50b60 */
  push32(0x10b506f8u); f_10b50b60();
  /* 10b506f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b506fb jmp 0x10b50a58 */
  goto L_10b50a58;
L_10b50700:;
  /* 10b50700 mov edx, dword ptr [0x10b6e7c0] */
  EDX = (r32((uint32_t)(0x10b6e7c0)));
  /* 10b50706 mov dword ptr [0x10b6e7d0], edx */
  w32((uint32_t)(0x10b6e7d0), (EDX));
  /* 10b5070c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b5070f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 10b50712 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10b50713 mov ecx, 0xc */
  ECX = (0xcu);
  /* 10b50718 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10b5071a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b5071d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b50721 jne 0x10b5072a */
  if (!C.zf) goto L_10b5072a;
  /* 10b50723 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_10b5072a:;
  /* 10b5072a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b5072d push edx */
  push32((uint32_t)(EDX));
  /* 10b5072e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b50731 push eax */
  push32((uint32_t)(EAX));
  /* 10b50732 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b50734 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b50737 push ecx */
  push32((uint32_t)(ECX));
  /* 10b50738 call 0x10b50b60 */
  push32(0x10b5073du); f_10b50b60();
  /* 10b5073d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50740 jmp 0x10b50a58 */
  goto L_10b50a58;
L_10b50745:;
  /* 10b50745 mov edx, dword ptr [0x10b6e7c0] */
  EDX = (r32((uint32_t)(0x10b6e7c0)));
  /* 10b5074b mov dword ptr [0x10b6e7d0], edx */
  w32((uint32_t)(0x10b6e7d0), (EDX));
  /* 10b50751 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b50754 push eax */
  push32((uint32_t)(EAX));
  /* 10b50755 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b50758 push ecx */
  push32((uint32_t)(ECX));
  /* 10b50759 push 3 */
  push32((uint32_t)(0x3u));
  /* 10b5075b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b5075e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10b50761 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50764 push eax */
  push32((uint32_t)(EAX));
  /* 10b50765 call 0x10b50b60 */
  push32(0x10b5076au); f_10b50b60();
  /* 10b5076a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b5076d jmp 0x10b50a58 */
  goto L_10b50a58;
L_10b50772:;
  /* 10b50772 mov ecx, dword ptr [0x10b6e7c0] */
  ECX = (r32((uint32_t)(0x10b6e7c0)));
  /* 10b50778 mov dword ptr [0x10b6e7d0], ecx */
  w32((uint32_t)(0x10b6e7d0), (ECX));
  /* 10b5077e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b50781 push edx */
  push32((uint32_t)(EDX));
  /* 10b50782 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b50785 push eax */
  push32((uint32_t)(EAX));
  /* 10b50786 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b50788 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b5078b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10b5078e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50791 push edx */
  push32((uint32_t)(EDX));
  /* 10b50792 call 0x10b50b60 */
  push32(0x10b50797u); f_10b50b60();
  /* 10b50797 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b5079a jmp 0x10b50a58 */
  goto L_10b50a58;
L_10b5079f:;
  /* 10b5079f mov eax, dword ptr [0x10b6e7c0] */
  EAX = (r32((uint32_t)(0x10b6e7c0)));
  /* 10b507a4 mov dword ptr [0x10b6e7d0], eax */
  w32((uint32_t)(0x10b6e7d0), (EAX));
  /* 10b507a9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b507ac push ecx */
  push32((uint32_t)(ECX));
  /* 10b507ad mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b507b0 push edx */
  push32((uint32_t)(EDX));
  /* 10b507b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b507b3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b507b6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10b507b9 push ecx */
  push32((uint32_t)(ECX));
  /* 10b507ba call 0x10b50b60 */
  push32(0x10b507bfu); f_10b50b60();
  /* 10b507bf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b507c2 jmp 0x10b50a58 */
  goto L_10b50a58;
L_10b507c7:;
  /* 10b507c7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b507ca cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b507ce jg 0x10b507ec */
  if ((!C.zf&&C.sf==C.of)) goto L_10b507ec;
  /* 10b507d0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b507d3 push eax */
  push32((uint32_t)(EAX));
  /* 10b507d4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b507d7 push ecx */
  push32((uint32_t)(ECX));
  /* 10b507d8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b507db mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10b507e1 push eax */
  push32((uint32_t)(EAX));
  /* 10b507e2 call 0x10b50b10 */
  push32(0x10b507e7u); f_10b50b10();
  /* 10b507e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b507ea jmp 0x10b50806 */
  goto L_10b50806;
L_10b507ec:;
  /* 10b507ec mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b507ef push ecx */
  push32((uint32_t)(ECX));
  /* 10b507f0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b507f3 push edx */
  push32((uint32_t)(EDX));
  /* 10b507f4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b507f7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 10b507fd push ecx */
  push32((uint32_t)(ECX));
  /* 10b507fe call 0x10b50b10 */
  push32(0x10b50803u); f_10b50b10();
  /* 10b50803 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b50806:;
  /* 10b50806 jmp 0x10b50a58 */
  goto L_10b50a58;
L_10b5080b:;
  /* 10b5080b mov edx, dword ptr [0x10b6e7c0] */
  EDX = (r32((uint32_t)(0x10b6e7c0)));
  /* 10b50811 mov dword ptr [0x10b6e7d0], edx */
  w32((uint32_t)(0x10b6e7d0), (EDX));
  /* 10b50817 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b5081a push eax */
  push32((uint32_t)(EAX));
  /* 10b5081b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b5081e push ecx */
  push32((uint32_t)(ECX));
  /* 10b5081f push 2 */
  push32((uint32_t)(0x2u));
  /* 10b50821 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b50824 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b50826 push eax */
  push32((uint32_t)(EAX));
  /* 10b50827 call 0x10b50b60 */
  push32(0x10b5082cu); f_10b50b60();
  /* 10b5082c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b5082f jmp 0x10b50a58 */
  goto L_10b50a58;
L_10b50834:;
  /* 10b50834 mov ecx, dword ptr [0x10b6e7c0] */
  ECX = (r32((uint32_t)(0x10b6e7c0)));
  /* 10b5083a mov dword ptr [0x10b6e7d0], ecx */
  w32((uint32_t)(0x10b6e7d0), (ECX));
  /* 10b50840 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b50843 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10b50846 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b50849 jmp 0x10b5089d */
  goto L_10b5089d;
L_10b5084b:;
  /* 10b5084b mov ecx, dword ptr [0x10b6e7c0] */
  ECX = (r32((uint32_t)(0x10b6e7c0)));
  /* 10b50851 mov dword ptr [0x10b6e7d0], ecx */
  w32((uint32_t)(0x10b6e7d0), (ECX));
  /* 10b50857 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b5085a push edx */
  push32((uint32_t)(EDX));
  /* 10b5085b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b5085e push eax */
  push32((uint32_t)(EAX));
  /* 10b5085f push 1 */
  push32((uint32_t)(0x1u));
  /* 10b50861 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b50864 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10b50867 push edx */
  push32((uint32_t)(EDX));
  /* 10b50868 call 0x10b50b60 */
  push32(0x10b5086du); f_10b50b60();
  /* 10b5086d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50870 jmp 0x10b50a58 */
  goto L_10b50a58;
L_10b50875:;
  /* 10b50875 mov eax, dword ptr [0x10b6e7c0] */
  EAX = (r32((uint32_t)(0x10b6e7c0)));
  /* 10b5087a mov dword ptr [0x10b6e7d0], eax */
  w32((uint32_t)(0x10b6e7d0), (EAX));
  /* 10b5087f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b50882 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b50886 jne 0x10b50891 */
  if (!C.zf) goto L_10b50891;
  /* 10b50888 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 10b5088f jmp 0x10b5089d */
  goto L_10b5089d;
L_10b50891:;
  /* 10b50891 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b50894 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10b50897 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b5089a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10b5089d:;
  /* 10b5089d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b508a0 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10b508a3 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b508a6 jge 0x10b508b1 */
  if ((C.sf==C.of)) goto L_10b508b1;
  /* 10b508a8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b508af jmp 0x10b508de */
  goto L_10b508de;
L_10b508b1:;
  /* 10b508b1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b508b4 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10b508b7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10b508b8 mov ecx, 7 */
  ECX = (0x7u);
  /* 10b508bd idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10b508bf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b508c2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b508c5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10b508c8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10b508c9 mov ecx, 7 */
  ECX = (0x7u);
  /* 10b508ce idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10b508d0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b508d3 jl 0x10b508de */
  if ((C.sf!=C.of)) goto L_10b508de;
  /* 10b508d5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b508d8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b508db mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10b508de:;
  /* 10b508de mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b508e1 push eax */
  push32((uint32_t)(EAX));
  /* 10b508e2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b508e5 push ecx */
  push32((uint32_t)(ECX));
  /* 10b508e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b508e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b508eb push edx */
  push32((uint32_t)(EDX));
  /* 10b508ec call 0x10b50b60 */
  push32(0x10b508f1u); f_10b50b60();
  /* 10b508f1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b508f4 jmp 0x10b50a58 */
  goto L_10b50a58;
L_10b508f9:;
  /* 10b508f9 cmp dword ptr [0x10b6e7c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e7c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b50900 je 0x10b50930 */
  if (C.zf) goto L_10b50930;
  /* 10b50902 mov dword ptr [0x10b6e7c0], 0 */
  w32((uint32_t)(0x10b6e7c0), (0x0u));
  /* 10b5090c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b5090f push eax */
  push32((uint32_t)(EAX));
  /* 10b50910 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b50913 push ecx */
  push32((uint32_t)(ECX));
  /* 10b50914 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b50917 push edx */
  push32((uint32_t)(EDX));
  /* 10b50918 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b5091b push eax */
  push32((uint32_t)(EAX));
  /* 10b5091c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b5091f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 10b50925 push edx */
  push32((uint32_t)(EDX));
  /* 10b50926 call 0x10b50cc0 */
  push32(0x10b5092bu); f_10b50cc0();
  /* 10b5092b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b5092e jmp 0x10b50952 */
  goto L_10b50952;
L_10b50930:;
  /* 10b50930 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b50933 push eax */
  push32((uint32_t)(EAX));
  /* 10b50934 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b50937 push ecx */
  push32((uint32_t)(ECX));
  /* 10b50938 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b5093b push edx */
  push32((uint32_t)(EDX));
  /* 10b5093c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b5093f push eax */
  push32((uint32_t)(EAX));
  /* 10b50940 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b50943 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10b50949 push edx */
  push32((uint32_t)(EDX));
  /* 10b5094a call 0x10b50cc0 */
  push32(0x10b5094fu); f_10b50cc0();
  /* 10b5094f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b50952:;
  /* 10b50952 jmp 0x10b50a58 */
  goto L_10b50a58;
L_10b50957:;
  /* 10b50957 mov dword ptr [0x10b6e7c0], 0 */
  w32((uint32_t)(0x10b6e7c0), (0x0u));
  /* 10b50961 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b50964 push eax */
  push32((uint32_t)(EAX));
  /* 10b50965 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b50968 push ecx */
  push32((uint32_t)(ECX));
  /* 10b50969 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b5096c push edx */
  push32((uint32_t)(EDX));
  /* 10b5096d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b50970 push eax */
  push32((uint32_t)(EAX));
  /* 10b50971 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b50974 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 10b5097a push edx */
  push32((uint32_t)(EDX));
  /* 10b5097b call 0x10b50cc0 */
  push32(0x10b50980u); f_10b50cc0();
  /* 10b50980 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50983 jmp 0x10b50a58 */
  goto L_10b50a58;
L_10b50988:;
  /* 10b50988 mov eax, dword ptr [0x10b6e7c0] */
  EAX = (r32((uint32_t)(0x10b6e7c0)));
  /* 10b5098d mov dword ptr [0x10b6e7d0], eax */
  w32((uint32_t)(0x10b6e7d0), (EAX));
  /* 10b50992 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b50995 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10b50998 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10b50999 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10b5099e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10b509a0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b509a3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b509a6 push edx */
  push32((uint32_t)(EDX));
  /* 10b509a7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b509aa push eax */
  push32((uint32_t)(EAX));
  /* 10b509ab push 2 */
  push32((uint32_t)(0x2u));
  /* 10b509ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b509b0 push ecx */
  push32((uint32_t)(ECX));
  /* 10b509b1 call 0x10b50b60 */
  push32(0x10b509b6u); f_10b50b60();
  /* 10b509b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b509b9 jmp 0x10b50a58 */
  goto L_10b50a58;
L_10b509be:;
  /* 10b509be mov edx, dword ptr [0x10b6e7c0] */
  EDX = (r32((uint32_t)(0x10b6e7c0)));
  /* 10b509c4 mov dword ptr [0x10b6e7d0], edx */
  w32((uint32_t)(0x10b6e7d0), (EDX));
  /* 10b509ca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b509cd mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 10b509d0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10b509d1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10b509d6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10b509d8 mov ecx, eax */
  ECX = (EAX);
  /* 10b509da add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b509dd imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b509e0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b509e3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10b509e6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10b509e7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 10b509ec idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10b509ee add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b509f0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b509f3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b509f6 push eax */
  push32((uint32_t)(EAX));
  /* 10b509f7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b509fa push ecx */
  push32((uint32_t)(ECX));
  /* 10b509fb push 4 */
  push32((uint32_t)(0x4u));
  /* 10b509fd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b50a00 push edx */
  push32((uint32_t)(EDX));
  /* 10b50a01 call 0x10b50b60 */
  push32(0x10b50a06u); f_10b50b60();
  /* 10b50a06 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50a09 jmp 0x10b50a58 */
  goto L_10b50a58;
L_10b50a0b:;
  /* 10b50a0b call 0x10b51b20 */
  push32(0x10b50a10u); f_10b51b20();
  /* 10b50a10 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b50a13 push eax */
  push32((uint32_t)(EAX));
  /* 10b50a14 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b50a17 push ecx */
  push32((uint32_t)(ECX));
  /* 10b50a18 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b50a1b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b50a1d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b50a21 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 10b50a24 mov ecx, dword ptr [eax*4 + 0x10b6de1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10b6de1c)));
  /* 10b50a2b push ecx */
  push32((uint32_t)(ECX));
  /* 10b50a2c call 0x10b50b10 */
  push32(0x10b50a31u); f_10b50b10();
  /* 10b50a31 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50a34 jmp 0x10b50a58 */
  goto L_10b50a58;
L_10b50a36:;
  /* 10b50a36 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b50a39 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b50a3b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 10b50a3e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b50a41 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b50a43 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50a46 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b50a49 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10b50a4b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b50a4e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b50a50 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b50a53 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b50a56 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10b50a58:;
  /* 10b50a58 pop esi */
  ESI = (pop32());
  /* 10b50a59 mov esp, ebp */
  ESP = (EBP);
  /* 10b50a5b pop ebp */
  EBP = (pop32());
  /* 10b50a5c ret  */
  ESPCHK(0x10b504f0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x10b50b10 (72 bytes, 30 insns) */
void f_10b50b10(void) {
  FTRACE(0x10b50b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b50b10 push ebp */
  push32((uint32_t)(EBP));
  /* 10b50b11 mov ebp, esp */
  EBP = (ESP);
L_10b50b13:;
  /* 10b50b13 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b50b16 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b50b19 je 0x10b50b56 */
  if (C.zf) goto L_10b50b56;
  /* 10b50b1b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b50b1e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10b50b21 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b50b23 je 0x10b50b56 */
  if (C.zf) goto L_10b50b56;
  /* 10b50b25 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b50b28 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b50b2a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b50b2d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b50b2f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10b50b31 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b50b34 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b50b36 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50b39 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b50b3c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10b50b3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b50b41 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50b44 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10b50b47 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b50b4a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b50b4c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b50b4f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b50b52 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10b50b54 jmp 0x10b50b13 */
  goto L_10b50b13;
L_10b50b56:;
  /* 10b50b56 pop ebp */
  EBP = (pop32());
  /* 10b50b57 ret  */
  ESPCHK(0x10b50b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10010b60 @ 0x10b50b60 (173 bytes, 64 insns) */
void f_10b50b60(void) {
  FTRACE(0x10b50b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b50b60 push ebp */
  push32((uint32_t)(EBP));
  /* 10b50b61 mov ebp, esp */
  EBP = (ESP);
  /* 10b50b63 push ecx */
  push32((uint32_t)(ECX));
  /* 10b50b64 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b50b6b cmp dword ptr [0x10b6e7d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e7d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b50b72 je 0x10b50b8a */
  if (C.zf) goto L_10b50b8a;
  /* 10b50b74 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b50b77 push eax */
  push32((uint32_t)(EAX));
  /* 10b50b78 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b50b7b push ecx */
  push32((uint32_t)(ECX));
  /* 10b50b7c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b50b7f push edx */
  push32((uint32_t)(EDX));
  /* 10b50b80 call 0x10b50c10 */
  push32(0x10b50b85u); f_10b50c10();
  /* 10b50b85 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50b88 jmp 0x10b50c09 */
  goto L_10b50c09;
L_10b50b8a:;
  /* 10b50b8a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b50b8d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b50b90 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b50b92 jae 0x10b50c00 */
  if (!C.cf) goto L_10b50c00;
  /* 10b50b94 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b50b97 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b50b9a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10b50b9d jmp 0x10b50ba8 */
  goto L_10b50ba8;
L_10b50b9f:;
  /* 10b50b9f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b50ba2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b50ba5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10b50ba8:;
  /* 10b50ba8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b50bab add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50bae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b50bb0 je 0x10b50be4 */
  if (C.zf) goto L_10b50be4;
  /* 10b50bb2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b50bb5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10b50bb6 mov ecx, 0xa */
  ECX = (0xau);
  /* 10b50bbb idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10b50bbd add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50bc0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b50bc3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b50bc5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b50bc8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 10b50bcb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b50bce cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10b50bcf mov ecx, 0xa */
  ECX = (0xau);
  /* 10b50bd4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10b50bd6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10b50bd9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b50bdc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50bdf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b50be2 jmp 0x10b50b9f */
  goto L_10b50b9f;
L_10b50be4:;
  /* 10b50be4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b50be7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b50be9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50bec mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b50bef mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10b50bf1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b50bf4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b50bf6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b50bf9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b50bfc mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10b50bfe jmp 0x10b50c09 */
  goto L_10b50c09;
L_10b50c00:;
  /* 10b50c00 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b50c03 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10b50c09:;
  /* 10b50c09 mov esp, ebp */
  ESP = (EBP);
  /* 10b50c0b pop ebp */
  EBP = (pop32());
  /* 10b50c0c ret  */
  ESPCHK(0x10b50b60u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x10b50c10 (172 bytes, 65 insns) */
void f_10b50c10(void) {
  FTRACE(0x10b50c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b50c10 push ebp */
  push32((uint32_t)(EBP));
  /* 10b50c11 mov ebp, esp */
  EBP = (ESP);
  /* 10b50c13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b50c16 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b50c19 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b50c1b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b50c1e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b50c21 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b50c24 jbe 0x10b50c6b */
  if ((C.cf||C.zf)) goto L_10b50c6b;
L_10b50c26:;
  /* 10b50c26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b50c29 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10b50c2a mov ecx, 0xa */
  ECX = (0xau);
  /* 10b50c2f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10b50c31 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50c34 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b50c37 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10b50c39 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b50c3c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50c3f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b50c42 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b50c45 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b50c47 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b50c4a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b50c4d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10b50c4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b50c52 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10b50c53 mov ecx, 0xa */
  ECX = (0xau);
  /* 10b50c58 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10b50c5a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10b50c5d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b50c61 jle 0x10b50c6b */
  if ((C.zf||C.sf!=C.of)) goto L_10b50c6b;
  /* 10b50c63 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b50c66 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b50c69 ja 0x10b50c26 */
  if ((!C.cf&&!C.zf)) goto L_10b50c26;
L_10b50c6b:;
  /* 10b50c6b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b50c6e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b50c70 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b50c73 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b50c76 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b50c79 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10b50c7b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b50c7e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b50c81 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10b50c84:;
  /* 10b50c84 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b50c87 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b50c89 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 10b50c8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b50c8f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b50c92 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b50c94 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10b50c96 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b50c99 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b50c9c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b50c9f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b50ca2 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10b50ca5 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10b50ca7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b50caa add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50cad mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b50cb0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b50cb3 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b50cb6 jb 0x10b50c84 */
  if (C.cf) goto L_10b50c84;
  /* 10b50cb8 mov esp, ebp */
  ESP = (EBP);
  /* 10b50cba pop ebp */
  EBP = (pop32());
  /* 10b50cbb ret  */
  ESPCHK(0x10b50c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10010cc0 @ 0x10b50cc0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_10b50cc0(void) {
  FTRACE(0x10b50cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b50cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b50cc1 mov ebp, esp */
  EBP = (ESP);
  /* 10b50cc3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10b50cc6:;
  /* 10b50cc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b50cc9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b50ccc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b50cce je 0x10b5113c */
  if (C.zf) goto L_10b5113c;
  /* 10b50cd4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b50cd7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b50cda je 0x10b5113c */
  if (C.zf) goto L_10b5113c;
  /* 10b50ce0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 10b50ce4 mov dword ptr [0x10b6e7d0], 0 */
  w32((uint32_t)(0x10b6e7d0), (0x0u));
  /* 10b50cee mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10b50cf5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b50cf8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b50cfb jmp 0x10b50d06 */
  goto L_10b50d06;
L_10b50cfd:;
  /* 10b50cfd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b50d00 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50d03 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10b50d06:;
  /* 10b50d06 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b50d09 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10b50d0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b50d0f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10b50d12 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b50d15 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50d18 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b50d1b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b50d1d jne 0x10b50d21 */
  if (!C.zf) goto L_10b50d21;
  /* 10b50d1f jmp 0x10b50cfd */
  goto L_10b50cfd;
L_10b50d21:;
  /* 10b50d21 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b50d24 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b50d27 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b50d2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b50d2d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b50d30 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10b50d33 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b50d36 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b50d39 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10b50d3c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b50d40 ja 0x10b51090 */
  if ((!C.cf&&!C.zf)) goto L_10b51090;
  /* 10b50d46 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b50d49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b50d4b mov al, byte ptr [ecx + 0x10b5116c] */
  AL = (r8((uint32_t)(ECX + 0x10b5116c)));
  /* 10b50d51 jmp dword ptr [eax*4 + 0x10b51140] */
  switch (EAX) {
    case 0: goto L_10b50faf;
    case 1: goto L_10b50e93;
    case 2: goto L_10b50e1e;
    case 3: goto L_10b50d58;
    case 4: goto L_10b50d96;
    case 5: goto L_10b50df7;
    case 6: goto L_10b50e45;
    case 7: goto L_10b50e6c;
    case 8: goto L_10b50eda;
    case 9: goto L_10b50dd4;
    case 10: goto L_10b51090;
    default: x86_unimpl("switch@0x10b50d51 out of table"); return;
  }
L_10b50d58:;
  /* 10b50d58 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b50d5b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10b50d5e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b50d61 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b50d64 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10b50d67 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b50d6b ja 0x10b50d91 */
  if ((!C.cf&&!C.zf)) goto L_10b50d91;
  /* 10b50d6d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b50d70 jmp dword ptr [ecx*4 + 0x10b511bf] */
  switch (ECX) {
    case 0: goto L_10b50d77;
    case 1: goto L_10b50d81;
    case 2: goto L_10b50d87;
    case 3: goto L_10b50d8d;
    case 4: goto L_10b50db5;
    case 5: goto L_10b50dbf;
    case 6: goto L_10b50dc5;
    case 7: goto L_10b50dcb;
    default: x86_unimpl("switch@0x10b50d70 out of table"); return;
  }
L_10b50d77:;
  /* 10b50d77 mov dword ptr [0x10b6e7d0], 1 */
  w32((uint32_t)(0x10b6e7d0), (0x1u));
L_10b50d81:;
  /* 10b50d81 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 10b50d85 jmp 0x10b50d91 */
  goto L_10b50d91;
L_10b50d87:;
  /* 10b50d87 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 10b50d8b jmp 0x10b50d91 */
  goto L_10b50d91;
L_10b50d8d:;
  /* 10b50d8d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_10b50d91:;
  /* 10b50d91 jmp 0x10b51090 */
  goto L_10b51090;
L_10b50d96:;
  /* 10b50d96 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b50d99 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10b50d9c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b50d9f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b50da2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10b50da5 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b50da9 ja 0x10b50dcf */
  if ((!C.cf&&!C.zf)) goto L_10b50dcf;
  /* 10b50dab mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b50dae jmp dword ptr [ecx*4 + 0x10b511cf] */
  switch (ECX) {
    case 0: goto L_10b50db5;
    case 1: goto L_10b50dbf;
    case 2: goto L_10b50dc5;
    case 3: goto L_10b50dcb;
    default: x86_unimpl("switch@0x10b50dae out of table"); return;
  }
L_10b50db5:;
  /* 10b50db5 mov dword ptr [0x10b6e7d0], 1 */
  w32((uint32_t)(0x10b6e7d0), (0x1u));
L_10b50dbf:;
  /* 10b50dbf mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 10b50dc3 jmp 0x10b50dcf */
  goto L_10b50dcf;
L_10b50dc5:;
  /* 10b50dc5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 10b50dc9 jmp 0x10b50dcf */
  goto L_10b50dcf;
L_10b50dcb:;
  /* 10b50dcb mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_10b50dcf:;
  /* 10b50dcf jmp 0x10b51090 */
  goto L_10b51090;
L_10b50dd4:;
  /* 10b50dd4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b50dd7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10b50dda cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b50dde je 0x10b50de8 */
  if (C.zf) goto L_10b50de8;
  /* 10b50de0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b50de4 je 0x10b50dee */
  if (C.zf) goto L_10b50dee;
  /* 10b50de6 jmp 0x10b50df2 */
  goto L_10b50df2;
L_10b50de8:;
  /* 10b50de8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 10b50dec jmp 0x10b50df2 */
  goto L_10b50df2;
L_10b50dee:;
  /* 10b50dee mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_10b50df2:;
  /* 10b50df2 jmp 0x10b51090 */
  goto L_10b51090;
L_10b50df7:;
  /* 10b50df7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b50dfa mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10b50dfd cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b50e01 je 0x10b50e0b */
  if (C.zf) goto L_10b50e0b;
  /* 10b50e03 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b50e07 je 0x10b50e15 */
  if (C.zf) goto L_10b50e15;
  /* 10b50e09 jmp 0x10b50e19 */
  goto L_10b50e19;
L_10b50e0b:;
  /* 10b50e0b mov dword ptr [0x10b6e7d0], 1 */
  w32((uint32_t)(0x10b6e7d0), (0x1u));
L_10b50e15:;
  /* 10b50e15 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_10b50e19:;
  /* 10b50e19 jmp 0x10b51090 */
  goto L_10b51090;
L_10b50e1e:;
  /* 10b50e1e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b50e21 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10b50e24 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b50e28 je 0x10b50e32 */
  if (C.zf) goto L_10b50e32;
  /* 10b50e2a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b50e2e je 0x10b50e3c */
  if (C.zf) goto L_10b50e3c;
  /* 10b50e30 jmp 0x10b50e40 */
  goto L_10b50e40;
L_10b50e32:;
  /* 10b50e32 mov dword ptr [0x10b6e7d0], 1 */
  w32((uint32_t)(0x10b6e7d0), (0x1u));
L_10b50e3c:;
  /* 10b50e3c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_10b50e40:;
  /* 10b50e40 jmp 0x10b51090 */
  goto L_10b51090;
L_10b50e45:;
  /* 10b50e45 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b50e48 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 10b50e4b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b50e4f je 0x10b50e59 */
  if (C.zf) goto L_10b50e59;
  /* 10b50e51 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b50e55 je 0x10b50e63 */
  if (C.zf) goto L_10b50e63;
  /* 10b50e57 jmp 0x10b50e67 */
  goto L_10b50e67;
L_10b50e59:;
  /* 10b50e59 mov dword ptr [0x10b6e7d0], 1 */
  w32((uint32_t)(0x10b6e7d0), (0x1u));
L_10b50e63:;
  /* 10b50e63 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_10b50e67:;
  /* 10b50e67 jmp 0x10b51090 */
  goto L_10b51090;
L_10b50e6c:;
  /* 10b50e6c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b50e6f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10b50e72 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b50e76 je 0x10b50e80 */
  if (C.zf) goto L_10b50e80;
  /* 10b50e78 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b50e7c je 0x10b50e8a */
  if (C.zf) goto L_10b50e8a;
  /* 10b50e7e jmp 0x10b50e8e */
  goto L_10b50e8e;
L_10b50e80:;
  /* 10b50e80 mov dword ptr [0x10b6e7d0], 1 */
  w32((uint32_t)(0x10b6e7d0), (0x1u));
L_10b50e8a:;
  /* 10b50e8a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_10b50e8e:;
  /* 10b50e8e jmp 0x10b51090 */
  goto L_10b51090;
L_10b50e93:;
  /* 10b50e93 push 0x10b6a88c */
  push32((uint32_t)(0x10b6a88cu));
  /* 10b50e98 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b50e9b push ecx */
  push32((uint32_t)(ECX));
  /* 10b50e9c call 0x10b516f0 */
  push32(0x10b50ea1u); f_10b516f0();
  /* 10b50ea1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50ea4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b50ea6 jne 0x10b50eb3 */
  if (!C.zf) goto L_10b50eb3;
  /* 10b50ea8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b50eab add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50eae mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b50eb1 jmp 0x10b50ed1 */
  goto L_10b50ed1;
L_10b50eb3:;
  /* 10b50eb3 push 0x10b6a888 */
  push32((uint32_t)(0x10b6a888u));
  /* 10b50eb8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b50ebb push eax */
  push32((uint32_t)(EAX));
  /* 10b50ebc call 0x10b516f0 */
  push32(0x10b50ec1u); f_10b516f0();
  /* 10b50ec1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50ec4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b50ec6 jne 0x10b50ed1 */
  if (!C.zf) goto L_10b50ed1;
  /* 10b50ec8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b50ecb add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50ece mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10b50ed1:;
  /* 10b50ed1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 10b50ed5 jmp 0x10b51090 */
  goto L_10b51090;
L_10b50eda:;
  /* 10b50eda mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b50edd cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b50ee1 jg 0x10b50ef1 */
  if ((!C.zf&&C.sf==C.of)) goto L_10b50ef1;
  /* 10b50ee3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b50ee6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 10b50eec mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10b50eef jmp 0x10b50efd */
  goto L_10b50efd;
L_10b50ef1:;
  /* 10b50ef1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b50ef4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10b50efa mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10b50efd:;
  /* 10b50efd cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b50f01 jle 0x10b50fa4 */
  if ((C.zf||C.sf!=C.of)) goto L_10b50fa4;
  /* 10b50f07 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b50f0a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b50f0d jbe 0x10b50fa4 */
  if ((C.cf||C.zf)) goto L_10b50fa4;
  /* 10b50f13 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b50f16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b50f18 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b50f1a mov ecx, dword ptr [0x10b6cc98] */
  ECX = (r32((uint32_t)(0x10b6cc98)));
  /* 10b50f20 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b50f22 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10b50f26 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10b50f2c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b50f2e je 0x10b50f67 */
  if (C.zf) goto L_10b50f67;
  /* 10b50f30 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b50f33 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b50f36 jbe 0x10b50f67 */
  if ((C.cf||C.zf)) goto L_10b50f67;
  /* 10b50f38 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b50f3b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b50f3d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b50f40 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10b50f42 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10b50f44 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b50f47 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b50f49 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50f4c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b50f4f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10b50f51 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b50f54 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50f57 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10b50f5a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b50f5d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b50f5f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b50f62 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b50f65 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10b50f67:;
  /* 10b50f67 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b50f6a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b50f6c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b50f6f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b50f71 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10b50f73 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b50f76 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b50f78 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50f7b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b50f7e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10b50f80 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b50f83 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50f86 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10b50f89 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b50f8c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b50f8e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b50f91 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b50f94 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10b50f96 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b50f99 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b50f9c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10b50f9f jmp 0x10b50efd */
  goto L_10b50efd;
L_10b50fa4:;
  /* 10b50fa4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b50fa7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10b50faa jmp 0x10b50cc6 */
  goto L_10b50cc6;
L_10b50faf:;
  /* 10b50faf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b50fb2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10b50fb5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b50fb7 je 0x10b51082 */
  if (C.zf) goto L_10b51082;
  /* 10b50fbd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b50fc0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50fc3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10b50fc6:;
  /* 10b50fc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b50fc9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b50fcc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b50fce je 0x10b51080 */
  if (C.zf) goto L_10b51080;
  /* 10b50fd4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b50fd7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b50fda je 0x10b51080 */
  if (C.zf) goto L_10b51080;
  /* 10b50fe0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b50fe3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b50fe6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b50fe9 jne 0x10b50ff9 */
  if (!C.zf) goto L_10b50ff9;
  /* 10b50feb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b50fee add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b50ff1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10b50ff4 jmp 0x10b51080 */
  goto L_10b51080;
L_10b50ff9:;
  /* 10b50ff9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b50ffc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b50ffe mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10b51000 mov edx, dword ptr [0x10b6cc98] */
  EDX = (r32((uint32_t)(0x10b6cc98)));
  /* 10b51006 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b51008 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10b5100c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10b51011 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b51013 je 0x10b5104c */
  if (C.zf) goto L_10b5104c;
  /* 10b51015 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b51018 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b5101b jbe 0x10b5104c */
  if ((C.cf||C.zf)) goto L_10b5104c;
  /* 10b5101d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b51020 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b51022 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b51025 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10b51027 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10b51029 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b5102c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b5102e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51031 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b51034 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10b51036 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b51039 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b5103c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10b5103f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b51042 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b51044 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b51047 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b5104a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10b5104c:;
  /* 10b5104c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b5104f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b51051 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b51054 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10b51056 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10b51058 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b5105b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b5105d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51060 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b51063 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10b51065 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b51068 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b5106b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10b5106e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b51071 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b51073 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b51076 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b51079 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10b5107b jmp 0x10b50fc6 */
  goto L_10b50fc6;
L_10b51080:;
  /* 10b51080 jmp 0x10b5108b */
  goto L_10b5108b;
L_10b51082:;
  /* 10b51082 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b51085 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51088 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10b5108b:;
  /* 10b5108b jmp 0x10b50cc6 */
  goto L_10b50cc6;
L_10b51090:;
  /* 10b51090 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10b51094 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b51096 je 0x10b510bc */
  if (C.zf) goto L_10b510bc;
  /* 10b51098 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b5109b push edx */
  push32((uint32_t)(EDX));
  /* 10b5109c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b5109f push eax */
  push32((uint32_t)(EAX));
  /* 10b510a0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b510a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b510a4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b510a7 push edx */
  push32((uint32_t)(EDX));
  /* 10b510a8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10b510ab push eax */
  push32((uint32_t)(EAX));
  /* 10b510ac call 0x10b504f0 */
  push32(0x10b510b1u); f_10b504f0();
  /* 10b510b1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b510b4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b510b7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10b510ba jmp 0x10b51137 */
  goto L_10b51137;
L_10b510bc:;
  /* 10b510bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b510bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b510c1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b510c3 mov ecx, dword ptr [0x10b6cc98] */
  ECX = (r32((uint32_t)(0x10b6cc98)));
  /* 10b510c9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b510cb mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10b510cf and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10b510d5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b510d7 je 0x10b51108 */
  if (C.zf) goto L_10b51108;
  /* 10b510d9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b510dc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b510de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b510e1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b510e3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10b510e5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b510e8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b510ea add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b510ed mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b510f0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10b510f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b510f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b510f8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10b510fb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b510fe mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b51100 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b51103 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b51106 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10b51108:;
  /* 10b51108 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b5110b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b5110d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b51110 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10b51112 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10b51114 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b51117 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b51119 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b5111c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b5111f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10b51121 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b51124 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51127 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10b5112a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b5112d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b5112f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b51132 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b51135 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10b51137:;
  /* 10b51137 jmp 0x10b50cc6 */
  goto L_10b50cc6;
L_10b5113c:;
  /* 10b5113c mov esp, ebp */
  ESP = (EBP);
  /* 10b5113e pop ebp */
  EBP = (pop32());
  /* 10b5113f ret  */
  ESPCHK(0x10b50cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_100111e0 @ 0x10b511e0 (650 bytes, 178 insns) */
void f_10b511e0(void) {
  FTRACE(0x10b511e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b511e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b511e1 mov ebp, esp */
  EBP = (ESP);
  /* 10b511e3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b511e9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b511ed jne 0x10b51349 */
  if (!C.zf) goto L_10b51349;
  /* 10b511f3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b511f6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 10b511fc lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 10b51202 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b51205 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b5120c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 10b51216 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b51218 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10b5121e push edx */
  push32((uint32_t)(EDX));
  /* 10b5121f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b51222 push eax */
  push32((uint32_t)(EAX));
  /* 10b51223 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b51226 push ecx */
  push32((uint32_t)(ECX));
  /* 10b51227 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b5122a push edx */
  push32((uint32_t)(EDX));
  /* 10b5122b call 0x10b52600 */
  push32(0x10b51230u); f_10b52600();
  /* 10b51230 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51233 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b51236 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b5123a jne 0x10b512cf */
  if (!C.zf) goto L_10b512cf;
  /* 10b51240 call dword ptr [0x10b702fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702fc))), 0x10b51246u);
  /* 10b51246 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b51249 je 0x10b51250 */
  if (C.zf) goto L_10b51250;
  /* 10b5124b jmp 0x10b5132d */
  goto L_10b5132d;
L_10b51250:;
  /* 10b51250 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b51252 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b51254 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b51256 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b51259 push eax */
  push32((uint32_t)(EAX));
  /* 10b5125a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b5125d push ecx */
  push32((uint32_t)(ECX));
  /* 10b5125e call 0x10b52600 */
  push32(0x10b51263u); f_10b52600();
  /* 10b51263 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51266 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 10b5126c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b51273 jne 0x10b5127a */
  if (!C.zf) goto L_10b5127a;
  /* 10b51275 jmp 0x10b5132d */
  goto L_10b5132d;
L_10b5127a:;
  /* 10b5127a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 10b5127c push 0x10b6a894 */
  push32((uint32_t)(0x10b6a894u));
  /* 10b51281 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b51283 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10b51289 push edx */
  push32((uint32_t)(EDX));
  /* 10b5128a call 0x10b43020 */
  push32(0x10b5128fu); f_10b43020();
  /* 10b5128f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51292 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b51295 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b51299 jne 0x10b512a0 */
  if (!C.zf) goto L_10b512a0;
  /* 10b5129b jmp 0x10b5132d */
  goto L_10b5132d;
L_10b512a0:;
  /* 10b512a0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10b512a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b512a9 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 10b512af push eax */
  push32((uint32_t)(EAX));
  /* 10b512b0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b512b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b512b4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b512b7 push edx */
  push32((uint32_t)(EDX));
  /* 10b512b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b512bb push eax */
  push32((uint32_t)(EAX));
  /* 10b512bc call 0x10b52600 */
  push32(0x10b512c1u); f_10b52600();
  /* 10b512c1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b512c4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b512c7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b512cb jne 0x10b512cf */
  if (!C.zf) goto L_10b512cf;
  /* 10b512cd jmp 0x10b5132d */
  goto L_10b5132d;
L_10b512cf:;
  /* 10b512cf push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10b512d1 push 0x10b6a894 */
  push32((uint32_t)(0x10b6a894u));
  /* 10b512d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b512d8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b512db push ecx */
  push32((uint32_t)(ECX));
  /* 10b512dc call 0x10b43020 */
  push32(0x10b512e1u); f_10b43020();
  /* 10b512e1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b512e4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 10b512ea mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10b512ec mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10b512f2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b512f5 jne 0x10b512f9 */
  if (!C.zf) goto L_10b512f9;
  /* 10b512f7 jmp 0x10b5132d */
  goto L_10b5132d;
L_10b512f9:;
  /* 10b512f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b512fc push ecx */
  push32((uint32_t)(ECX));
  /* 10b512fd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b51300 push edx */
  push32((uint32_t)(EDX));
  /* 10b51301 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10b51307 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b51309 push ecx */
  push32((uint32_t)(ECX));
  /* 10b5130a call 0x10b46840 */
  push32(0x10b5130fu); f_10b46840();
  /* 10b5130f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51312 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b51316 je 0x10b51326 */
  if (C.zf) goto L_10b51326;
  /* 10b51318 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b5131a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b5131d push edx */
  push32((uint32_t)(EDX));
  /* 10b5131e call 0x10b43ab0 */
  push32(0x10b51323u); f_10b43ab0();
  /* 10b51323 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b51326:;
  /* 10b51326 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b51328 jmp 0x10b51466 */
  goto L_10b51466;
L_10b5132d:;
  /* 10b5132d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b51331 je 0x10b51341 */
  if (C.zf) goto L_10b51341;
  /* 10b51333 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b51335 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b51338 push eax */
  push32((uint32_t)(EAX));
  /* 10b51339 call 0x10b43ab0 */
  push32(0x10b5133eu); f_10b43ab0();
  /* 10b5133e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b51341:;
  /* 10b51341 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b51344 jmp 0x10b51466 */
  goto L_10b51466;
L_10b51349:;
  /* 10b51349 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b5134d jne 0x10b51463 */
  if (!C.zf) goto L_10b51463;
  /* 10b51353 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 10b5135d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b51360 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 10b51366 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b51368 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10b5136e push edx */
  push32((uint32_t)(EDX));
  /* 10b5136f push 0x10b6e6e8 */
  push32((uint32_t)(0x10b6e6e8u));
  /* 10b51374 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b51377 push eax */
  push32((uint32_t)(EAX));
  /* 10b51378 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b5137b push ecx */
  push32((uint32_t)(ECX));
  /* 10b5137c call 0x10b52460 */
  push32(0x10b51381u); f_10b52460();
  /* 10b51381 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51384 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b51386 jne 0x10b51390 */
  if (!C.zf) goto L_10b51390;
  /* 10b51388 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b5138b jmp 0x10b51466 */
  goto L_10b51466;
L_10b51390:;
  /* 10b51390 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10b51396 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10b51399 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 10b513a3 jmp 0x10b513b4 */
  goto L_10b513b4;
L_10b513a5:;
  /* 10b513a5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10b513ab add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b513ae mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_10b513b4:;
  /* 10b513b4 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b513bb jge 0x10b5145f */
  if ((C.sf==C.of)) goto L_10b5145f;
  /* 10b513c1 cmp dword ptr [0x10b6cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b6cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b513c8 jle 0x10b513fb */
  if ((C.zf||C.sf!=C.of)) goto L_10b513fb;
  /* 10b513ca push 4 */
  push32((uint32_t)(0x4u));
  /* 10b513cc mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10b513d2 mov dl, byte ptr [ecx*2 + 0x10b6e6e8] */
  DL = (r8((uint32_t)(ECX*2 + 0x10b6e6e8)));
  /* 10b513d9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10b513df mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10b513e5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b513ea push eax */
  push32((uint32_t)(EAX));
  /* 10b513eb call 0x10b49030 */
  push32(0x10b513f0u); f_10b49030();
  /* 10b513f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b513f3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 10b513f9 jmp 0x10b5142e */
  goto L_10b5142e;
L_10b513fb:;
  /* 10b513fb mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10b51401 mov dl, byte ptr [ecx*2 + 0x10b6e6e8] */
  DL = (r8((uint32_t)(ECX*2 + 0x10b6e6e8)));
  /* 10b51408 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10b5140e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10b51414 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b51419 mov ecx, dword ptr [0x10b6cc98] */
  ECX = (r32((uint32_t)(0x10b6cc98)));
  /* 10b5141f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b51421 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10b51425 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10b51428 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_10b5142e:;
  /* 10b5142e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b51435 je 0x10b51458 */
  if (C.zf) goto L_10b51458;
  /* 10b51437 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10b5143d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b51440 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b51443 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 10b5144a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10b5144e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10b51454 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10b51456 jmp 0x10b5145a */
  goto L_10b5145a;
L_10b51458:;
  /* 10b51458 jmp 0x10b5145f */
  goto L_10b5145f;
L_10b5145a:;
  /* 10b5145a jmp 0x10b513a5 */
  goto L_10b513a5;
L_10b5145f:;
  /* 10b5145f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b51461 jmp 0x10b51466 */
  goto L_10b51466;
L_10b51463:;
  /* 10b51463 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10b51466:;
  /* 10b51466 mov esp, ebp */
  ESP = (EBP);
  /* 10b51468 pop ebp */
  EBP = (pop32());
  /* 10b51469 ret  */
  ESPCHK(0x10b511e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011470 @ 0x10b51470 (10 bytes, 5 insns) */
void f_10b51470(void) {
  FTRACE(0x10b51470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b51470 push ebp */
  push32((uint32_t)(EBP));
  /* 10b51471 mov ebp, esp */
  EBP = (ESP);
  /* 10b51473 mov eax, dword ptr [0x10b6dd88] */
  EAX = (r32((uint32_t)(0x10b6dd88)));
  /* 10b51478 pop ebp */
  EBP = (pop32());
  /* 10b51479 ret  */
  ESPCHK(0x10b51470u, _esp0);
  ESP += 4; return;
}

/* FUN_10011480 @ 0x10b51480 (575 bytes, 196 insns) */
void f_10b51480(void) {
  FTRACE(0x10b51480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b51480 push ebp */
  push32((uint32_t)(EBP));
  /* 10b51481 mov ebp, esp */
  EBP = (ESP);
  /* 10b51483 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10b51485 push 0x10b6a8a0 */
  push32((uint32_t)(0x10b6a8a0u));
  /* 10b5148a push 0x10b4c128 */
  push32((uint32_t)(0x10b4c128u));
  /* 10b5148f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10b51495 push eax */
  push32((uint32_t)(EAX));
  /* 10b51496 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10b5149d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b514a0 push ebx */
  push32((uint32_t)(EBX));
  /* 10b514a1 push esi */
  push32((uint32_t)(ESI));
  /* 10b514a2 push edi */
  push32((uint32_t)(EDI));
  /* 10b514a3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10b514a6 cmp dword ptr [0x10b6e6f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e6f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b514ad jne 0x10b514fe */
  if (!C.zf) goto L_10b514fe;
  /* 10b514af lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10b514b2 push eax */
  push32((uint32_t)(EAX));
  /* 10b514b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b514b5 push 0x10b69fd0 */
  push32((uint32_t)(0x10b69fd0u));
  /* 10b514ba push 1 */
  push32((uint32_t)(0x1u));
  /* 10b514bc call dword ptr [0x10b702a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702a8))), 0x10b514c2u);
  /* 10b514c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b514c4 je 0x10b514d2 */
  if (C.zf) goto L_10b514d2;
  /* 10b514c6 mov dword ptr [0x10b6e6f4], 1 */
  w32((uint32_t)(0x10b6e6f4), (0x1u));
  /* 10b514d0 jmp 0x10b514fe */
  goto L_10b514fe;
L_10b514d2:;
  /* 10b514d2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 10b514d5 push ecx */
  push32((uint32_t)(ECX));
  /* 10b514d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b514d8 push 0x10b69fcc */
  push32((uint32_t)(0x10b69fccu));
  /* 10b514dd push 1 */
  push32((uint32_t)(0x1u));
  /* 10b514df push 0 */
  push32((uint32_t)(0x0u));
  /* 10b514e1 call dword ptr [0x10b7030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b7030c))), 0x10b514e7u);
  /* 10b514e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b514e9 je 0x10b514f7 */
  if (C.zf) goto L_10b514f7;
  /* 10b514eb mov dword ptr [0x10b6e6f4], 2 */
  w32((uint32_t)(0x10b6e6f4), (0x2u));
  /* 10b514f5 jmp 0x10b514fe */
  goto L_10b514fe;
L_10b514f7:;
  /* 10b514f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b514f9 jmp 0x10b516d9 */
  goto L_10b516d9;
L_10b514fe:;
  /* 10b514fe cmp dword ptr [0x10b6e6f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e6f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b51505 jne 0x10b51522 */
  if (!C.zf) goto L_10b51522;
  /* 10b51507 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b5150a push edx */
  push32((uint32_t)(EDX));
  /* 10b5150b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b5150e push eax */
  push32((uint32_t)(EAX));
  /* 10b5150f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b51512 push ecx */
  push32((uint32_t)(ECX));
  /* 10b51513 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b51516 push edx */
  push32((uint32_t)(EDX));
  /* 10b51517 call dword ptr [0x10b702a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702a8))), 0x10b5151du);
  /* 10b5151d jmp 0x10b516d9 */
  goto L_10b516d9;
L_10b51522:;
  /* 10b51522 cmp dword ptr [0x10b6e6f4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e6f4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b51529 jne 0x10b516d7 */
  if (!C.zf) goto L_10b516d7;
  /* 10b5152f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b51533 jne 0x10b5153d */
  if (!C.zf) goto L_10b5153d;
  /* 10b51535 mov eax, dword ptr [0x10b6e668] */
  EAX = (r32((uint32_t)(0x10b6e668)));
  /* 10b5153a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_10b5153d:;
  /* 10b5153d push 0 */
  push32((uint32_t)(0x0u));
  /* 10b5153f push 0 */
  push32((uint32_t)(0x0u));
  /* 10b51541 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b51543 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b51545 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b51548 push ecx */
  push32((uint32_t)(ECX));
  /* 10b51549 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b5154c push edx */
  push32((uint32_t)(EDX));
  /* 10b5154d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10b51552 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b51555 push eax */
  push32((uint32_t)(EAX));
  /* 10b51556 call dword ptr [0x10b70328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70328))), 0x10b5155cu);
  /* 10b5155c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10b5155f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b51563 jne 0x10b5156c */
  if (!C.zf) goto L_10b5156c;
  /* 10b51565 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b51567 jmp 0x10b516d9 */
  goto L_10b516d9;
L_10b5156c:;
  /* 10b5156c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b51573 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b51576 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51579 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10b5157b call 0x10b461c0 */
  push32(0x10b51580u); f_10b461c0();
  /* 10b51580 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 10b51583 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10b51586 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b51589 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10b5158c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b5158f push edx */
  push32((uint32_t)(EDX));
  /* 10b51590 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b51592 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b51595 push eax */
  push32((uint32_t)(EAX));
  /* 10b51596 call 0x10b46d90 */
  push32(0x10b5159bu); f_10b46d90();
  /* 10b5159b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b5159e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10b515a5 jmp 0x10b515be */
  goto L_10b515be;
  /* 10b515a7 mov eax, 1 */
  EAX = (0x1u);
  /* 10b515ac ret  */
  ESPCHK(0x10b51480u, _esp0);
  ESP += 4; return;
  /* 10b515ad mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10b515b0 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10b515b7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10b515be:;
  /* 10b515be cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b515c2 jne 0x10b515cb */
  if (!C.zf) goto L_10b515cb;
  /* 10b515c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b515c6 jmp 0x10b516d9 */
  goto L_10b516d9;
L_10b515cb:;
  /* 10b515cb push 0 */
  push32((uint32_t)(0x0u));
  /* 10b515cd push 0 */
  push32((uint32_t)(0x0u));
  /* 10b515cf mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b515d2 push ecx */
  push32((uint32_t)(ECX));
  /* 10b515d3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b515d6 push edx */
  push32((uint32_t)(EDX));
  /* 10b515d7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b515da push eax */
  push32((uint32_t)(EAX));
  /* 10b515db mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b515de push ecx */
  push32((uint32_t)(ECX));
  /* 10b515df push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10b515e4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b515e7 push edx */
  push32((uint32_t)(EDX));
  /* 10b515e8 call dword ptr [0x10b70328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70328))), 0x10b515eeu);
  /* 10b515ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b515f0 jne 0x10b515f9 */
  if (!C.zf) goto L_10b515f9;
  /* 10b515f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b515f4 jmp 0x10b516d9 */
  goto L_10b516d9;
L_10b515f9:;
  /* 10b515f9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10b51600 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b51603 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 10b51607 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b5160a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10b5160c call 0x10b461c0 */
  push32(0x10b51611u); f_10b461c0();
  /* 10b51611 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 10b51614 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10b51617 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10b5161a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10b5161d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10b51624 jmp 0x10b5163d */
  goto L_10b5163d;
  /* 10b51626 mov eax, 1 */
  EAX = (0x1u);
  /* 10b5162b ret  */
  ESPCHK(0x10b51480u, _esp0);
  ESP += 4; return;
  /* 10b5162c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10b5162f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10b51636 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10b5163d:;
  /* 10b5163d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b51641 jne 0x10b5164a */
  if (!C.zf) goto L_10b5164a;
  /* 10b51643 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b51645 jmp 0x10b516d9 */
  goto L_10b516d9;
L_10b5164a:;
  /* 10b5164a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b5164e jne 0x10b51659 */
  if (!C.zf) goto L_10b51659;
  /* 10b51650 mov edx, dword ptr [0x10b6e658] */
  EDX = (r32((uint32_t)(0x10b6e658)));
  /* 10b51656 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_10b51659:;
  /* 10b51659 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b5165c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b5165f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 10b51665 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b51668 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b5166b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 10b51672 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b51675 push ecx */
  push32((uint32_t)(ECX));
  /* 10b51676 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b51679 push edx */
  push32((uint32_t)(EDX));
  /* 10b5167a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b5167d push eax */
  push32((uint32_t)(EAX));
  /* 10b5167e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b51681 push ecx */
  push32((uint32_t)(ECX));
  /* 10b51682 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10b51685 push edx */
  push32((uint32_t)(EDX));
  /* 10b51686 call dword ptr [0x10b7030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b7030c))), 0x10b5168cu);
  /* 10b5168c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10b5168f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b51692 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b51695 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b51697 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 10b5169c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b516a2 je 0x10b516b8 */
  if (C.zf) goto L_10b516b8;
  /* 10b516a4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b516a7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b516aa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b516ac mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10b516b0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b516b6 je 0x10b516bc */
  if (C.zf) goto L_10b516bc;
L_10b516b8:;
  /* 10b516b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b516ba jmp 0x10b516d9 */
  goto L_10b516d9;
L_10b516bc:;
  /* 10b516bc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b516bf shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10b516c1 push eax */
  push32((uint32_t)(EAX));
  /* 10b516c2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b516c5 push ecx */
  push32((uint32_t)(ECX));
  /* 10b516c6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b516c9 push edx */
  push32((uint32_t)(EDX));
  /* 10b516ca call 0x10b4af10 */
  push32(0x10b516cfu); f_10b4af10();
  /* 10b516cf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b516d2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b516d5 jmp 0x10b516d9 */
  goto L_10b516d9;
L_10b516d7:;
  /* 10b516d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b516d9:;
  /* 10b516d9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 10b516dc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b516df mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10b516e6 pop edi */
  EDI = (pop32());
  /* 10b516e7 pop esi */
  ESI = (pop32());
  /* 10b516e8 pop ebx */
  EBX = (pop32());
  /* 10b516e9 mov esp, ebp */
  ESP = (EBP);
  /* 10b516eb pop ebp */
  EBP = (pop32());
  /* 10b516ec ret  */
  ESPCHK(0x10b51480u, _esp0);
  ESP += 4; return;
}

/* FUN_100116f0 @ 0x10b516f0 (208 bytes, 85 insns) */
void f_10b516f0(void) {
  FTRACE(0x10b516f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b516f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b516f1 mov ebp, esp */
  EBP = (ESP);
  /* 10b516f3 push edi */
  push32((uint32_t)(EDI));
  /* 10b516f4 push esi */
  push32((uint32_t)(ESI));
  /* 10b516f5 push ebx */
  push32((uint32_t)(EBX));
  /* 10b516f6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10b516f9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10b516fc lea eax, [0x10b6e650] */
  EAX = ((uint32_t)(0x10b6e650));
  /* 10b51702 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b51706 jne 0x10b51743 */
  if (!C.zf) goto L_10b51743;
  /* 10b51708 mov al, 0xff */
  AL = (0xffu);
  /* 10b5170a mov edi, edi */
  EDI = (EDI);
L_10b5170c:;
  /* 10b5170c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10b5170e je 0x10b5173e */
  if (C.zf) goto L_10b5173e;
  /* 10b51710 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b51712 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10b51713 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 10b51715 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10b51716 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b51718 je 0x10b5170c */
  if (C.zf) goto L_10b5170c;
  /* 10b5171a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10b5171c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b5171e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10b51720 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10b51723 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10b51725 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10b51727 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 10b51729 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10b5172b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b5172d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10b5172f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10b51732 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10b51734 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10b51736 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b51738 je 0x10b5170c */
  if (C.zf) goto L_10b5170c;
  /* 10b5173a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10b5173c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_10b5173e:;
  /* 10b5173e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 10b51741 jmp 0x10b517bb */
  goto L_10b517bb;
L_10b51743:;
  /* 10b51743 lock inc dword ptr [0x10b6e7e4] */
  x86_unimpl("lock inc @ 0x10b51743");
  /* 10b5174a cmp dword ptr [0x10b6e7d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e7d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b51751 jg 0x10b51757 */
  if ((!C.zf&&C.sf==C.of)) goto L_10b51757;
  /* 10b51753 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b51755 jmp 0x10b5176c */
  goto L_10b5176c;
L_10b51757:;
  /* 10b51757 lock dec dword ptr [0x10b6e7e4] */
  x86_unimpl("lock dec @ 0x10b51757");
  /* 10b5175e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10b51760 call 0x10b46a20 */
  push32(0x10b51765u); f_10b46a20();
  /* 10b51765 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_10b5176c:;
  /* 10b5176c mov eax, 0xff */
  EAX = (0xffu);
  /* 10b51771 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10b51773 nop  */
  /* nop */
L_10b51774:;
  /* 10b51774 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10b51776 je 0x10b5179f */
  if (C.zf) goto L_10b5179f;
  /* 10b51778 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b5177a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10b5177b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10b5177d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10b5177e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b51780 je 0x10b51774 */
  if (C.zf) goto L_10b51774;
  /* 10b51782 push eax */
  push32((uint32_t)(EAX));
  /* 10b51783 push ebx */
  push32((uint32_t)(EBX));
  /* 10b51784 call 0x10b52860 */
  push32(0x10b51789u); f_10b52860();
  /* 10b51789 mov ebx, eax */
  EBX = (EAX);
  /* 10b5178b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b5178e call 0x10b52860 */
  push32(0x10b51793u); f_10b52860();
  /* 10b51793 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51796 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b51798 je 0x10b51774 */
  if (C.zf) goto L_10b51774;
  /* 10b5179a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b5179c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10b5179f:;
  /* 10b5179f mov ebx, eax */
  EBX = (EAX);
  /* 10b517a1 pop eax */
  EAX = (pop32());
  /* 10b517a2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b517a4 jne 0x10b517af */
  if (!C.zf) goto L_10b517af;
  /* 10b517a6 lock dec dword ptr [0x10b6e7e4] */
  x86_unimpl("lock dec @ 0x10b517a6");
  /* 10b517ad jmp 0x10b517b9 */
  goto L_10b517b9;
L_10b517af:;
  /* 10b517af push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10b517b1 call 0x10b46ac0 */
  push32(0x10b517b6u); f_10b46ac0();
  /* 10b517b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b517b9:;
  /* 10b517b9 mov eax, ebx */
  EAX = (EBX);
L_10b517bb:;
  /* 10b517bb pop ebx */
  EBX = (pop32());
  /* 10b517bc pop esi */
  ESI = (pop32());
  /* 10b517bd pop edi */
  EDI = (pop32());
  /* 10b517be leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b517bf ret  */
  ESPCHK(0x10b516f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100117c0 @ 0x10b517c0 (257 bytes, 103 insns) */
void f_10b517c0(void) {
  FTRACE(0x10b517c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b517c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b517c1 mov ebp, esp */
  EBP = (ESP);
  /* 10b517c3 push edi */
  push32((uint32_t)(EDI));
  /* 10b517c4 push esi */
  push32((uint32_t)(ESI));
  /* 10b517c5 push ebx */
  push32((uint32_t)(EBX));
  /* 10b517c6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b517c9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b517cb je 0x10b518ba */
  if (C.zf) goto L_10b518ba;
  /* 10b517d1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10b517d4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10b517d7 lea eax, [0x10b6e650] */
  EAX = ((uint32_t)(0x10b6e650));
  /* 10b517dd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b517e1 jne 0x10b51831 */
  if (!C.zf) goto L_10b51831;
  /* 10b517e3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 10b517e5 mov bl, 0x5a */
  BL = (0x5au);
  /* 10b517e7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 10b517e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10b517ec:;
  /* 10b517ec mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 10b517ee or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10b517f0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 10b517f2 je 0x10b51815 */
  if (C.zf) goto L_10b51815;
  /* 10b517f4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10b517f6 je 0x10b51815 */
  if (C.zf) goto L_10b51815;
  /* 10b517f8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10b517f9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10b517fa cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b517fc jb 0x10b51804 */
  if (C.cf) goto L_10b51804;
  /* 10b517fe cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b51800 ja 0x10b51804 */
  if ((!C.cf&&!C.zf)) goto L_10b51804;
  /* 10b51802 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_10b51804:;
  /* 10b51804 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b51806 jb 0x10b5180e */
  if (C.cf) goto L_10b5180e;
  /* 10b51808 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b5180a ja 0x10b5180e */
  if ((!C.cf&&!C.zf)) goto L_10b5180e;
  /* 10b5180c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_10b5180e:;
  /* 10b5180e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b51810 jne 0x10b5181f */
  if (!C.zf) goto L_10b5181f;
  /* 10b51812 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10b51813 jne 0x10b517ec */
  if (!C.zf) goto L_10b517ec;
L_10b51815:;
  /* 10b51815 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b51817 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b51819 je 0x10b518ba */
  if (C.zf) goto L_10b518ba;
L_10b5181f:;
  /* 10b5181f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10b51824 jb 0x10b518ba */
  if (C.cf) goto L_10b518ba;
  /* 10b5182a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b5182c jmp 0x10b518ba */
  goto L_10b518ba;
L_10b51831:;
  /* 10b51831 lock inc dword ptr [0x10b6e7e4] */
  x86_unimpl("lock inc @ 0x10b51831");
  /* 10b51838 cmp dword ptr [0x10b6e7d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e7d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b5183f jg 0x10b51845 */
  if ((!C.zf&&C.sf==C.of)) goto L_10b51845;
  /* 10b51841 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b51843 jmp 0x10b5185e */
  goto L_10b5185e;
L_10b51845:;
  /* 10b51845 lock dec dword ptr [0x10b6e7e4] */
  x86_unimpl("lock dec @ 0x10b51845");
  /* 10b5184c mov ebx, ecx */
  EBX = (ECX);
  /* 10b5184e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10b51850 call 0x10b46a20 */
  push32(0x10b51855u); f_10b46a20();
  /* 10b51855 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 10b5185c mov ecx, ebx */
  ECX = (EBX);
L_10b5185e:;
  /* 10b5185e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b51860 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10b51862 mov edi, edi */
  EDI = (EDI);
L_10b51864:;
  /* 10b51864 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b51866 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b51868 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10b5186a je 0x10b5188f */
  if (C.zf) goto L_10b5188f;
  /* 10b5186c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10b5186e je 0x10b5188f */
  if (C.zf) goto L_10b5188f;
  /* 10b51870 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10b51871 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10b51872 push ecx */
  push32((uint32_t)(ECX));
  /* 10b51873 push eax */
  push32((uint32_t)(EAX));
  /* 10b51874 push ebx */
  push32((uint32_t)(EBX));
  /* 10b51875 call 0x10b52860 */
  push32(0x10b5187au); f_10b52860();
  /* 10b5187a mov ebx, eax */
  EBX = (EAX);
  /* 10b5187c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b5187f call 0x10b52860 */
  push32(0x10b51884u); f_10b52860();
  /* 10b51884 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51887 pop ecx */
  ECX = (pop32());
  /* 10b51888 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b5188a jne 0x10b51895 */
  if (!C.zf) goto L_10b51895;
  /* 10b5188c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10b5188d jne 0x10b51864 */
  if (!C.zf) goto L_10b51864;
L_10b5188f:;
  /* 10b5188f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b51891 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b51893 je 0x10b5189e */
  if (C.zf) goto L_10b5189e;
L_10b51895:;
  /* 10b51895 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10b5189a jb 0x10b5189e */
  if (C.cf) goto L_10b5189e;
  /* 10b5189c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_10b5189e:;
  /* 10b5189e pop eax */
  EAX = (pop32());
  /* 10b5189f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b518a1 jne 0x10b518ac */
  if (!C.zf) goto L_10b518ac;
  /* 10b518a3 lock dec dword ptr [0x10b6e7e4] */
  x86_unimpl("lock dec @ 0x10b518a3");
  /* 10b518aa jmp 0x10b518ba */
  goto L_10b518ba;
L_10b518ac:;
  /* 10b518ac mov ebx, ecx */
  EBX = (ECX);
  /* 10b518ae push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10b518b0 call 0x10b46ac0 */
  push32(0x10b518b5u); f_10b46ac0();
  /* 10b518b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b518b8 mov ecx, ebx */
  ECX = (EBX);
L_10b518ba:;
  /* 10b518ba mov eax, ecx */
  EAX = (ECX);
  /* 10b518bc pop ebx */
  EBX = (pop32());
  /* 10b518bd pop esi */
  ESI = (pop32());
  /* 10b518be pop edi */
  EDI = (pop32());
  /* 10b518bf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b518c0 ret  */
  ESPCHK(0x10b517c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100118d0 @ 0x10b518d0 (255 bytes, 88 insns) */
void f_10b518d0(void) {
  FTRACE(0x10b518d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b518d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b518d1 mov ebp, esp */
  EBP = (ESP);
  /* 10b518d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10b518d6:;
  /* 10b518d6 cmp dword ptr [0x10b6cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b6cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b518dd jle 0x10b518f6 */
  if ((C.zf||C.sf!=C.of)) goto L_10b518f6;
  /* 10b518df push 8 */
  push32((uint32_t)(0x8u));
  /* 10b518e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b518e4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b518e6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10b518e8 push ecx */
  push32((uint32_t)(ECX));
  /* 10b518e9 call 0x10b49030 */
  push32(0x10b518eeu); f_10b49030();
  /* 10b518ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b518f1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10b518f4 jmp 0x10b5190f */
  goto L_10b5190f;
L_10b518f6:;
  /* 10b518f6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b518f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b518fb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b518fd mov ecx, dword ptr [0x10b6cc98] */
  ECX = (r32((uint32_t)(0x10b6cc98)));
  /* 10b51903 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b51905 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10b51909 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10b5190c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10b5190f:;
  /* 10b5190f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b51913 je 0x10b51920 */
  if (C.zf) goto L_10b51920;
  /* 10b51915 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b51918 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b5191b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10b5191e jmp 0x10b518d6 */
  goto L_10b518d6;
L_10b51920:;
  /* 10b51920 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b51923 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b51925 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10b51927 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b5192a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b5192d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51930 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10b51933 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b51936 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b51939 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b5193d je 0x10b51945 */
  if (C.zf) goto L_10b51945;
  /* 10b5193f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b51943 jne 0x10b51958 */
  if (!C.zf) goto L_10b51958;
L_10b51945:;
  /* 10b51945 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b51948 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b5194a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b5194c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b5194f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b51952 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51955 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10b51958:;
  /* 10b51958 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10b5195f:;
  /* 10b5195f cmp dword ptr [0x10b6cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b6cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b51966 jle 0x10b5197b */
  if ((C.zf||C.sf!=C.of)) goto L_10b5197b;
  /* 10b51968 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b5196a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b5196d push edx */
  push32((uint32_t)(EDX));
  /* 10b5196e call 0x10b49030 */
  push32(0x10b51973u); f_10b49030();
  /* 10b51973 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51976 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10b51979 jmp 0x10b51990 */
  goto L_10b51990;
L_10b5197b:;
  /* 10b5197b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b5197e mov ecx, dword ptr [0x10b6cc98] */
  ECX = (r32((uint32_t)(0x10b6cc98)));
  /* 10b51984 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b51986 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10b5198a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10b5198d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10b51990:;
  /* 10b51990 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b51994 je 0x10b519bb */
  if (C.zf) goto L_10b519bb;
  /* 10b51996 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b51999 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b5199c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b5199f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 10b519a3 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10b519a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b519a9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b519ab mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10b519ad mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b519b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b519b3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b519b6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10b519b9 jmp 0x10b5195f */
  goto L_10b5195f;
L_10b519bb:;
  /* 10b519bb cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b519bf jne 0x10b519c8 */
  if (!C.zf) goto L_10b519c8;
  /* 10b519c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b519c4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b519c6 jmp 0x10b519cb */
  goto L_10b519cb;
L_10b519c8:;
  /* 10b519c8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10b519cb:;
  /* 10b519cb mov esp, ebp */
  ESP = (EBP);
  /* 10b519cd pop ebp */
  EBP = (pop32());
  /* 10b519ce ret  */
  ESPCHK(0x10b518d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100119d0 @ 0x10b519d0 (17 bytes, 8 insns) */
void f_10b519d0(void) {
  FTRACE(0x10b519d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b519d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b519d1 mov ebp, esp */
  EBP = (ESP);
  /* 10b519d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b519d6 push eax */
  push32((uint32_t)(EAX));
  /* 10b519d7 call 0x10b518d0 */
  push32(0x10b519dcu); f_10b518d0();
  /* 10b519dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b519df pop ebp */
  EBP = (pop32());
  /* 10b519e0 ret  */
  ESPCHK(0x10b519d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100119f0 @ 0x10b519f0 (297 bytes, 106 insns) */
void f_10b519f0(void) {
  FTRACE(0x10b519f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b519f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b519f1 mov ebp, esp */
  EBP = (ESP);
  /* 10b519f3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b519f6 push esi */
  push32((uint32_t)(ESI));
L_10b519f7:;
  /* 10b519f7 cmp dword ptr [0x10b6cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b6cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b519fe jle 0x10b51a17 */
  if ((C.zf||C.sf!=C.of)) goto L_10b51a17;
  /* 10b51a00 push 8 */
  push32((uint32_t)(0x8u));
  /* 10b51a02 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b51a05 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b51a07 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10b51a09 push ecx */
  push32((uint32_t)(ECX));
  /* 10b51a0a call 0x10b49030 */
  push32(0x10b51a0fu); f_10b49030();
  /* 10b51a0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51a12 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10b51a15 jmp 0x10b51a30 */
  goto L_10b51a30;
L_10b51a17:;
  /* 10b51a17 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b51a1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b51a1c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b51a1e mov ecx, dword ptr [0x10b6cc98] */
  ECX = (r32((uint32_t)(0x10b6cc98)));
  /* 10b51a24 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b51a26 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10b51a2a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10b51a2d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10b51a30:;
  /* 10b51a30 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b51a34 je 0x10b51a41 */
  if (C.zf) goto L_10b51a41;
  /* 10b51a36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b51a39 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51a3c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10b51a3f jmp 0x10b519f7 */
  goto L_10b519f7;
L_10b51a41:;
  /* 10b51a41 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b51a44 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b51a46 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10b51a48 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b51a4b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b51a4e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51a51 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10b51a54 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b51a57 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10b51a5a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b51a5e je 0x10b51a66 */
  if (C.zf) goto L_10b51a66;
  /* 10b51a60 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b51a64 jne 0x10b51a79 */
  if (!C.zf) goto L_10b51a79;
L_10b51a66:;
  /* 10b51a66 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b51a69 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b51a6b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b51a6d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b51a70 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b51a73 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51a76 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10b51a79:;
  /* 10b51a79 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10b51a80 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10b51a87:;
  /* 10b51a87 cmp dword ptr [0x10b6cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b6cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b51a8e jle 0x10b51aa3 */
  if ((C.zf||C.sf!=C.of)) goto L_10b51aa3;
  /* 10b51a90 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b51a92 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b51a95 push edx */
  push32((uint32_t)(EDX));
  /* 10b51a96 call 0x10b49030 */
  push32(0x10b51a9bu); f_10b49030();
  /* 10b51a9b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51a9e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10b51aa1 jmp 0x10b51ab8 */
  goto L_10b51ab8;
L_10b51aa3:;
  /* 10b51aa3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b51aa6 mov ecx, dword ptr [0x10b6cc98] */
  ECX = (r32((uint32_t)(0x10b6cc98)));
  /* 10b51aac xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b51aae mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10b51ab2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10b51ab5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_10b51ab8:;
  /* 10b51ab8 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b51abc je 0x10b51af9 */
  if (C.zf) goto L_10b51af9;
  /* 10b51abe push 0 */
  push32((uint32_t)(0x0u));
  /* 10b51ac0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10b51ac2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b51ac5 push eax */
  push32((uint32_t)(EAX));
  /* 10b51ac6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b51ac9 push ecx */
  push32((uint32_t)(ECX));
  /* 10b51aca call 0x10b52990 */
  push32(0x10b51acfu); f_10b52990();
  /* 10b51acf mov ecx, eax */
  ECX = (EAX);
  /* 10b51ad1 mov esi, edx */
  ESI = (EDX);
  /* 10b51ad3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b51ad6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b51ad9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10b51ada add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51adc adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51ade mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b51ae1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 10b51ae4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b51ae7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b51ae9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b51aeb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b51aee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b51af1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51af4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10b51af7 jmp 0x10b51a87 */
  goto L_10b51a87;
L_10b51af9:;
  /* 10b51af9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b51afd jne 0x10b51b0e */
  if (!C.zf) goto L_10b51b0e;
  /* 10b51aff mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b51b02 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b51b04 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b51b07 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51b0a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b51b0c jmp 0x10b51b14 */
  goto L_10b51b14;
L_10b51b0e:;
  /* 10b51b0e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b51b11 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_10b51b14:;
  /* 10b51b14 pop esi */
  ESI = (pop32());
  /* 10b51b15 mov esp, ebp */
  ESP = (EBP);
  /* 10b51b17 pop ebp */
  EBP = (pop32());
  /* 10b51b18 ret  */
  ESPCHK(0x10b519f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011b20 @ 0x10b51b20 (61 bytes, 18 insns) */
void f_10b51b20(void) {
  FTRACE(0x10b51b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b51b20 push ebp */
  push32((uint32_t)(EBP));
  /* 10b51b21 mov ebp, esp */
  EBP = (ESP);
  /* 10b51b23 cmp dword ptr [0x10b6e7b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e7b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b51b2a jne 0x10b51b5b */
  if (!C.zf) goto L_10b51b5b;
  /* 10b51b2c push 0xb */
  push32((uint32_t)(0xbu));
  /* 10b51b2e call 0x10b46a20 */
  push32(0x10b51b33u); f_10b46a20();
  /* 10b51b33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51b36 cmp dword ptr [0x10b6e7b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e7b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b51b3d jne 0x10b51b51 */
  if (!C.zf) goto L_10b51b51;
  /* 10b51b3f call 0x10b51b80 */
  push32(0x10b51b44u); f_10b51b80();
  /* 10b51b44 mov eax, dword ptr [0x10b6e7b0] */
  EAX = (r32((uint32_t)(0x10b6e7b0)));
  /* 10b51b49 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51b4c mov dword ptr [0x10b6e7b0], eax */
  w32((uint32_t)(0x10b6e7b0), (EAX));
L_10b51b51:;
  /* 10b51b51 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10b51b53 call 0x10b46ac0 */
  push32(0x10b51b58u); f_10b46ac0();
  /* 10b51b58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b51b5b:;
  /* 10b51b5b pop ebp */
  EBP = (pop32());
  /* 10b51b5c ret  */
  ESPCHK(0x10b51b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10011b60 @ 0x10b51b60 (30 bytes, 11 insns) */
void f_10b51b60(void) {
  FTRACE(0x10b51b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b51b60 push ebp */
  push32((uint32_t)(EBP));
  /* 10b51b61 mov ebp, esp */
  EBP = (ESP);
  /* 10b51b63 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10b51b65 call 0x10b46a20 */
  push32(0x10b51b6au); f_10b46a20();
  /* 10b51b6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51b6d call 0x10b51b80 */
  push32(0x10b51b72u); f_10b51b80();
  /* 10b51b72 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10b51b74 call 0x10b46ac0 */
  push32(0x10b51b79u); f_10b46ac0();
  /* 10b51b79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51b7c pop ebp */
  EBP = (pop32());
  /* 10b51b7d ret  */
  ESPCHK(0x10b51b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10011b80 @ 0x10b51b80 (939 bytes, 266 insns) */
void f_10b51b80(void) {
  FTRACE(0x10b51b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b51b80 push ebp */
  push32((uint32_t)(EBP));
  /* 10b51b81 mov ebp, esp */
  EBP = (ESP);
  /* 10b51b83 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b51b86 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b51b8d push 0xc */
  push32((uint32_t)(0xcu));
  /* 10b51b8f call 0x10b46a20 */
  push32(0x10b51b94u); f_10b46a20();
  /* 10b51b94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51b97 mov dword ptr [0x10b6e6f8], 0 */
  w32((uint32_t)(0x10b6e6f8), (0x0u));
  /* 10b51ba1 mov dword ptr [0x10b6de38], 0xffffffff */
  w32((uint32_t)(0x10b6de38), (0xffffffffu));
  /* 10b51bab mov eax, dword ptr [0x10b6de38] */
  EAX = (r32((uint32_t)(0x10b6de38)));
  /* 10b51bb0 mov dword ptr [0x10b6de28], eax */
  w32((uint32_t)(0x10b6de28), (EAX));
  /* 10b51bb5 push 0x10b6a900 */
  push32((uint32_t)(0x10b6a900u));
  /* 10b51bba call 0x10b52a00 */
  push32(0x10b51bbfu); f_10b52a00();
  /* 10b51bbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51bc2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b51bc5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b51bc9 jne 0x10b51d03 */
  if (!C.zf) goto L_10b51d03;
  /* 10b51bcf push 0xc */
  push32((uint32_t)(0xcu));
  /* 10b51bd1 call 0x10b46ac0 */
  push32(0x10b51bd6u); f_10b46ac0();
  /* 10b51bd6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51bd9 push 0x10b6e700 */
  push32((uint32_t)(0x10b6e700u));
  /* 10b51bde call dword ptr [0x10b7026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b7026c))), 0x10b51be4u);
  /* 10b51be4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b51be7 je 0x10b51cfe */
  if (C.zf) goto L_10b51cfe;
  /* 10b51bed mov dword ptr [0x10b6e6f8], 1 */
  w32((uint32_t)(0x10b6e6f8), (0x1u));
  /* 10b51bf7 mov ecx, dword ptr [0x10b6e700] */
  ECX = (r32((uint32_t)(0x10b6e700)));
  /* 10b51bfd imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b51c00 mov dword ptr [0x10b6dd90], ecx */
  w32((uint32_t)(0x10b6dd90), (ECX));
  /* 10b51c06 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b51c08 mov dx, word ptr [0x10b6e746] */
  DX = (r16((uint32_t)(0x10b6e746)));
  /* 10b51c0f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b51c11 je 0x10b51c29 */
  if (C.zf) goto L_10b51c29;
  /* 10b51c13 mov eax, dword ptr [0x10b6e754] */
  EAX = (r32((uint32_t)(0x10b6e754)));
  /* 10b51c18 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b51c1b mov ecx, dword ptr [0x10b6dd90] */
  ECX = (r32((uint32_t)(0x10b6dd90)));
  /* 10b51c21 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51c23 mov dword ptr [0x10b6dd90], ecx */
  w32((uint32_t)(0x10b6dd90), (ECX));
L_10b51c29:;
  /* 10b51c29 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b51c2b mov dx, word ptr [0x10b6e79a] */
  DX = (r16((uint32_t)(0x10b6e79a)));
  /* 10b51c32 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b51c34 je 0x10b51c5e */
  if (C.zf) goto L_10b51c5e;
  /* 10b51c36 cmp dword ptr [0x10b6e7a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e7a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b51c3d je 0x10b51c5e */
  if (C.zf) goto L_10b51c5e;
  /* 10b51c3f mov dword ptr [0x10b6dd94], 1 */
  w32((uint32_t)(0x10b6dd94), (0x1u));
  /* 10b51c49 mov eax, dword ptr [0x10b6e7a8] */
  EAX = (r32((uint32_t)(0x10b6e7a8)));
  /* 10b51c4e sub eax, dword ptr [0x10b6e754] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10b6e754))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b51c54 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b51c57 mov dword ptr [0x10b6dd98], eax */
  w32((uint32_t)(0x10b6dd98), (EAX));
  /* 10b51c5c jmp 0x10b51c72 */
  goto L_10b51c72;
L_10b51c5e:;
  /* 10b51c5e mov dword ptr [0x10b6dd94], 0 */
  w32((uint32_t)(0x10b6dd94), (0x0u));
  /* 10b51c68 mov dword ptr [0x10b6dd98], 0 */
  w32((uint32_t)(0x10b6dd98), (0x0u));
L_10b51c72:;
  /* 10b51c72 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10b51c75 push ecx */
  push32((uint32_t)(ECX));
  /* 10b51c76 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b51c78 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10b51c7a mov edx, dword ptr [0x10b6de1c] */
  EDX = (r32((uint32_t)(0x10b6de1c)));
  /* 10b51c80 push edx */
  push32((uint32_t)(EDX));
  /* 10b51c81 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10b51c83 push 0x10b6e704 */
  push32((uint32_t)(0x10b6e704u));
  /* 10b51c88 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10b51c8d mov eax, dword ptr [0x10b6e668] */
  EAX = (r32((uint32_t)(0x10b6e668)));
  /* 10b51c92 push eax */
  push32((uint32_t)(EAX));
  /* 10b51c93 call dword ptr [0x10b70328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70328))), 0x10b51c99u);
  /* 10b51c99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b51c9b je 0x10b51caf */
  if (C.zf) goto L_10b51caf;
  /* 10b51c9d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b51ca1 jne 0x10b51caf */
  if (!C.zf) goto L_10b51caf;
  /* 10b51ca3 mov ecx, dword ptr [0x10b6de1c] */
  ECX = (r32((uint32_t)(0x10b6de1c)));
  /* 10b51ca9 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 10b51cad jmp 0x10b51cb8 */
  goto L_10b51cb8;
L_10b51caf:;
  /* 10b51caf mov edx, dword ptr [0x10b6de1c] */
  EDX = (r32((uint32_t)(0x10b6de1c)));
  /* 10b51cb5 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10b51cb8:;
  /* 10b51cb8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10b51cbb push eax */
  push32((uint32_t)(EAX));
  /* 10b51cbc push 0 */
  push32((uint32_t)(0x0u));
  /* 10b51cbe push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10b51cc0 mov ecx, dword ptr [0x10b6de20] */
  ECX = (r32((uint32_t)(0x10b6de20)));
  /* 10b51cc6 push ecx */
  push32((uint32_t)(ECX));
  /* 10b51cc7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10b51cc9 push 0x10b6e758 */
  push32((uint32_t)(0x10b6e758u));
  /* 10b51cce push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10b51cd3 mov edx, dword ptr [0x10b6e668] */
  EDX = (r32((uint32_t)(0x10b6e668)));
  /* 10b51cd9 push edx */
  push32((uint32_t)(EDX));
  /* 10b51cda call dword ptr [0x10b70328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70328))), 0x10b51ce0u);
  /* 10b51ce0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b51ce2 je 0x10b51cf5 */
  if (C.zf) goto L_10b51cf5;
  /* 10b51ce4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b51ce8 jne 0x10b51cf5 */
  if (!C.zf) goto L_10b51cf5;
  /* 10b51cea mov eax, dword ptr [0x10b6de20] */
  EAX = (r32((uint32_t)(0x10b6de20)));
  /* 10b51cef mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 10b51cf3 jmp 0x10b51cfe */
  goto L_10b51cfe;
L_10b51cf5:;
  /* 10b51cf5 mov ecx, dword ptr [0x10b6de20] */
  ECX = (r32((uint32_t)(0x10b6de20)));
  /* 10b51cfb mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_10b51cfe:;
  /* 10b51cfe jmp 0x10b51f27 */
  goto L_10b51f27;
L_10b51d03:;
  /* 10b51d03 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b51d06 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10b51d09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b51d0b je 0x10b51d2d */
  if (C.zf) goto L_10b51d2d;
  /* 10b51d0d cmp dword ptr [0x10b6e7ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e7ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b51d14 je 0x10b51d3c */
  if (C.zf) goto L_10b51d3c;
  /* 10b51d16 mov ecx, dword ptr [0x10b6e7ac] */
  ECX = (r32((uint32_t)(0x10b6e7ac)));
  /* 10b51d1c push ecx */
  push32((uint32_t)(ECX));
  /* 10b51d1d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b51d20 push edx */
  push32((uint32_t)(EDX));
  /* 10b51d21 call 0x10b4ecb0 */
  push32(0x10b51d26u); f_10b4ecb0();
  /* 10b51d26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51d29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b51d2b jne 0x10b51d3c */
  if (!C.zf) goto L_10b51d3c;
L_10b51d2d:;
  /* 10b51d2d push 0xc */
  push32((uint32_t)(0xcu));
  /* 10b51d2f call 0x10b46ac0 */
  push32(0x10b51d34u); f_10b46ac0();
  /* 10b51d34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51d37 jmp 0x10b51f27 */
  goto L_10b51f27;
L_10b51d3c:;
  /* 10b51d3c push 2 */
  push32((uint32_t)(0x2u));
  /* 10b51d3e mov eax, dword ptr [0x10b6e7ac] */
  EAX = (r32((uint32_t)(0x10b6e7ac)));
  /* 10b51d43 push eax */
  push32((uint32_t)(EAX));
  /* 10b51d44 call 0x10b43ab0 */
  push32(0x10b51d49u); f_10b43ab0();
  /* 10b51d49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51d4c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 10b51d51 push 0x10b6a8f8 */
  push32((uint32_t)(0x10b6a8f8u));
  /* 10b51d56 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b51d58 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b51d5b push ecx */
  push32((uint32_t)(ECX));
  /* 10b51d5c call 0x10b45e50 */
  push32(0x10b51d61u); f_10b45e50();
  /* 10b51d61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51d64 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51d67 push eax */
  push32((uint32_t)(EAX));
  /* 10b51d68 call 0x10b43020 */
  push32(0x10b51d6du); f_10b43020();
  /* 10b51d6d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51d70 mov dword ptr [0x10b6e7ac], eax */
  w32((uint32_t)(0x10b6e7ac), (EAX));
  /* 10b51d75 cmp dword ptr [0x10b6e7ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e7ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b51d7c jne 0x10b51d8d */
  if (!C.zf) goto L_10b51d8d;
  /* 10b51d7e push 0xc */
  push32((uint32_t)(0xcu));
  /* 10b51d80 call 0x10b46ac0 */
  push32(0x10b51d85u); f_10b46ac0();
  /* 10b51d85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51d88 jmp 0x10b51f27 */
  goto L_10b51f27;
L_10b51d8d:;
  /* 10b51d8d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b51d90 push edx */
  push32((uint32_t)(EDX));
  /* 10b51d91 mov eax, dword ptr [0x10b6e7ac] */
  EAX = (r32((uint32_t)(0x10b6e7ac)));
  /* 10b51d96 push eax */
  push32((uint32_t)(EAX));
  /* 10b51d97 call 0x10b45fd0 */
  push32(0x10b51d9cu); f_10b45fd0();
  /* 10b51d9c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51d9f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10b51da1 call 0x10b46ac0 */
  push32(0x10b51da6u); f_10b46ac0();
  /* 10b51da6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51da9 push 3 */
  push32((uint32_t)(0x3u));
  /* 10b51dab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b51dae push ecx */
  push32((uint32_t)(ECX));
  /* 10b51daf mov edx, dword ptr [0x10b6de1c] */
  EDX = (r32((uint32_t)(0x10b6de1c)));
  /* 10b51db5 push edx */
  push32((uint32_t)(EDX));
  /* 10b51db6 call 0x10b46840 */
  push32(0x10b51dbbu); f_10b46840();
  /* 10b51dbb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51dbe mov eax, dword ptr [0x10b6de1c] */
  EAX = (r32((uint32_t)(0x10b6de1c)));
  /* 10b51dc3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 10b51dc7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b51dca add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51dcd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b51dd0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b51dd3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10b51dd6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b51dd9 jne 0x10b51ded */
  if (!C.zf) goto L_10b51ded;
  /* 10b51ddb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b51dde add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51de1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b51de4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b51de7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51dea mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10b51ded:;
  /* 10b51ded mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b51df0 push eax */
  push32((uint32_t)(EAX));
  /* 10b51df1 call 0x10b518d0 */
  push32(0x10b51df6u); f_10b518d0();
  /* 10b51df6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51df9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b51dff mov dword ptr [0x10b6dd90], eax */
  w32((uint32_t)(0x10b6dd90), (EAX));
L_10b51e04:;
  /* 10b51e04 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b51e07 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10b51e0a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b51e0d je 0x10b51e25 */
  if (C.zf) goto L_10b51e25;
  /* 10b51e0f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b51e12 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b51e15 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b51e18 jl 0x10b51e30 */
  if ((C.sf!=C.of)) goto L_10b51e30;
  /* 10b51e1a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b51e1d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10b51e20 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b51e23 jg 0x10b51e30 */
  if ((!C.zf&&C.sf==C.of)) goto L_10b51e30;
L_10b51e25:;
  /* 10b51e25 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b51e28 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51e2b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b51e2e jmp 0x10b51e04 */
  goto L_10b51e04;
L_10b51e30:;
  /* 10b51e30 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b51e33 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10b51e36 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b51e39 jne 0x10b51ed5 */
  if (!C.zf) goto L_10b51ed5;
  /* 10b51e3f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b51e42 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51e45 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b51e48 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b51e4b push edx */
  push32((uint32_t)(EDX));
  /* 10b51e4c call 0x10b518d0 */
  push32(0x10b51e51u); f_10b518d0();
  /* 10b51e51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51e54 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b51e57 mov ecx, dword ptr [0x10b6dd90] */
  ECX = (r32((uint32_t)(0x10b6dd90)));
  /* 10b51e5d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51e5f mov dword ptr [0x10b6dd90], ecx */
  w32((uint32_t)(0x10b6dd90), (ECX));
L_10b51e65:;
  /* 10b51e65 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b51e68 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10b51e6b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b51e6e jl 0x10b51e86 */
  if ((C.sf!=C.of)) goto L_10b51e86;
  /* 10b51e70 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b51e73 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10b51e76 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b51e79 jg 0x10b51e86 */
  if ((!C.zf&&C.sf==C.of)) goto L_10b51e86;
  /* 10b51e7b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b51e7e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51e81 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b51e84 jmp 0x10b51e65 */
  goto L_10b51e65;
L_10b51e86:;
  /* 10b51e86 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b51e89 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10b51e8c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b51e8f jne 0x10b51ed5 */
  if (!C.zf) goto L_10b51ed5;
  /* 10b51e91 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b51e94 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51e97 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b51e9a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b51e9d push ecx */
  push32((uint32_t)(ECX));
  /* 10b51e9e call 0x10b518d0 */
  push32(0x10b51ea3u); f_10b518d0();
  /* 10b51ea3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51ea6 mov edx, dword ptr [0x10b6dd90] */
  EDX = (r32((uint32_t)(0x10b6dd90)));
  /* 10b51eac add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51eae mov dword ptr [0x10b6dd90], edx */
  w32((uint32_t)(0x10b6dd90), (EDX));
L_10b51eb4:;
  /* 10b51eb4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b51eb7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b51eba cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b51ebd jl 0x10b51ed5 */
  if ((C.sf!=C.of)) goto L_10b51ed5;
  /* 10b51ebf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b51ec2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10b51ec5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b51ec8 jg 0x10b51ed5 */
  if ((!C.zf&&C.sf==C.of)) goto L_10b51ed5;
  /* 10b51eca mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b51ecd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51ed0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b51ed3 jmp 0x10b51eb4 */
  goto L_10b51eb4;
L_10b51ed5:;
  /* 10b51ed5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b51ed9 je 0x10b51ee9 */
  if (C.zf) goto L_10b51ee9;
  /* 10b51edb mov edx, dword ptr [0x10b6dd90] */
  EDX = (r32((uint32_t)(0x10b6dd90)));
  /* 10b51ee1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b51ee3 mov dword ptr [0x10b6dd90], edx */
  w32((uint32_t)(0x10b6dd90), (EDX));
L_10b51ee9:;
  /* 10b51ee9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b51eec movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b51eef mov dword ptr [0x10b6dd94], ecx */
  w32((uint32_t)(0x10b6dd94), (ECX));
  /* 10b51ef5 cmp dword ptr [0x10b6dd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6dd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b51efc je 0x10b51f1e */
  if (C.zf) goto L_10b51f1e;
  /* 10b51efe push 3 */
  push32((uint32_t)(0x3u));
  /* 10b51f00 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b51f03 push edx */
  push32((uint32_t)(EDX));
  /* 10b51f04 mov eax, dword ptr [0x10b6de20] */
  EAX = (r32((uint32_t)(0x10b6de20)));
  /* 10b51f09 push eax */
  push32((uint32_t)(EAX));
  /* 10b51f0a call 0x10b46840 */
  push32(0x10b51f0fu); f_10b46840();
  /* 10b51f0f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51f12 mov ecx, dword ptr [0x10b6de20] */
  ECX = (r32((uint32_t)(0x10b6de20)));
  /* 10b51f18 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 10b51f1c jmp 0x10b51f27 */
  goto L_10b51f27;
L_10b51f1e:;
  /* 10b51f1e mov edx, dword ptr [0x10b6de20] */
  EDX = (r32((uint32_t)(0x10b6de20)));
  /* 10b51f24 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10b51f27:;
  /* 10b51f27 mov esp, ebp */
  ESP = (EBP);
  /* 10b51f29 pop ebp */
  EBP = (pop32());
  /* 10b51f2a ret  */
  ESPCHK(0x10b51b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f30 @ 0x10b51f30 (46 bytes, 18 insns) */
void f_10b51f30(void) {
  FTRACE(0x10b51f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b51f30 push ebp */
  push32((uint32_t)(EBP));
  /* 10b51f31 mov ebp, esp */
  EBP = (ESP);
  /* 10b51f33 push ecx */
  push32((uint32_t)(ECX));
  /* 10b51f34 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10b51f36 call 0x10b46a20 */
  push32(0x10b51f3bu); f_10b46a20();
  /* 10b51f3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51f3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b51f41 push eax */
  push32((uint32_t)(EAX));
  /* 10b51f42 call 0x10b51f60 */
  push32(0x10b51f47u); f_10b51f60();
  /* 10b51f47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51f4a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b51f4d push 0xb */
  push32((uint32_t)(0xbu));
  /* 10b51f4f call 0x10b46ac0 */
  push32(0x10b51f54u); f_10b46ac0();
  /* 10b51f54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b51f57 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b51f5a mov esp, ebp */
  ESP = (EBP);
  /* 10b51f5c pop ebp */
  EBP = (pop32());
  /* 10b51f5d ret  */
  ESPCHK(0x10b51f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f60 @ 0x10b51f60 (762 bytes, 246 insns) */
void f_10b51f60(void) {
  FTRACE(0x10b51f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b51f60 push ebp */
  push32((uint32_t)(EBP));
  /* 10b51f61 mov ebp, esp */
  EBP = (ESP);
  /* 10b51f63 push ecx */
  push32((uint32_t)(ECX));
  /* 10b51f64 cmp dword ptr [0x10b6dd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6dd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b51f6b jne 0x10b51f74 */
  if (!C.zf) goto L_10b51f74;
  /* 10b51f6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b51f6f jmp 0x10b52256 */
  goto L_10b52256;
L_10b51f74:;
  /* 10b51f74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b51f77 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10b51f7a cmp ecx, dword ptr [0x10b6de28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10b6de28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b51f80 jne 0x10b51f94 */
  if (!C.zf) goto L_10b51f94;
  /* 10b51f82 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b51f85 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10b51f88 cmp eax, dword ptr [0x10b6de38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10b6de38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b51f8e je 0x10b5215b */
  if (C.zf) goto L_10b5215b;
L_10b51f94:;
  /* 10b51f94 cmp dword ptr [0x10b6e6f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e6f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b51f9b je 0x10b52115 */
  if (C.zf) goto L_10b52115;
  /* 10b51fa1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b51fa3 mov cx, word ptr [0x10b6e798] */
  CX = (r16((uint32_t)(0x10b6e798)));
  /* 10b51faa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b51fac jne 0x10b52009 */
  if (!C.zf) goto L_10b52009;
  /* 10b51fae xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b51fb0 mov dx, word ptr [0x10b6e7a6] */
  DX = (r16((uint32_t)(0x10b6e7a6)));
  /* 10b51fb7 push edx */
  push32((uint32_t)(EDX));
  /* 10b51fb8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b51fba mov ax, word ptr [0x10b6e7a4] */
  AX = (r16((uint32_t)(0x10b6e7a4)));
  /* 10b51fc0 push eax */
  push32((uint32_t)(EAX));
  /* 10b51fc1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b51fc3 mov cx, word ptr [0x10b6e7a2] */
  CX = (r16((uint32_t)(0x10b6e7a2)));
  /* 10b51fca push ecx */
  push32((uint32_t)(ECX));
  /* 10b51fcb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b51fcd mov dx, word ptr [0x10b6e7a0] */
  DX = (r16((uint32_t)(0x10b6e7a0)));
  /* 10b51fd4 push edx */
  push32((uint32_t)(EDX));
  /* 10b51fd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b51fd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b51fd9 mov ax, word ptr [0x10b6e79c] */
  AX = (r16((uint32_t)(0x10b6e79c)));
  /* 10b51fdf push eax */
  push32((uint32_t)(EAX));
  /* 10b51fe0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b51fe2 mov cx, word ptr [0x10b6e79e] */
  CX = (r16((uint32_t)(0x10b6e79e)));
  /* 10b51fe9 push ecx */
  push32((uint32_t)(ECX));
  /* 10b51fea xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b51fec mov dx, word ptr [0x10b6e79a] */
  DX = (r16((uint32_t)(0x10b6e79a)));
  /* 10b51ff3 push edx */
  push32((uint32_t)(EDX));
  /* 10b51ff4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b51ff7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10b51ffa push ecx */
  push32((uint32_t)(ECX));
  /* 10b51ffb push 1 */
  push32((uint32_t)(0x1u));
  /* 10b51ffd push 1 */
  push32((uint32_t)(0x1u));
  /* 10b51fff call 0x10b52260 */
  push32(0x10b52004u); f_10b52260();
  /* 10b52004 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b52007 jmp 0x10b5205a */
  goto L_10b5205a;
L_10b52009:;
  /* 10b52009 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b5200b mov dx, word ptr [0x10b6e7a6] */
  DX = (r16((uint32_t)(0x10b6e7a6)));
  /* 10b52012 push edx */
  push32((uint32_t)(EDX));
  /* 10b52013 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b52015 mov ax, word ptr [0x10b6e7a4] */
  AX = (r16((uint32_t)(0x10b6e7a4)));
  /* 10b5201b push eax */
  push32((uint32_t)(EAX));
  /* 10b5201c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b5201e mov cx, word ptr [0x10b6e7a2] */
  CX = (r16((uint32_t)(0x10b6e7a2)));
  /* 10b52025 push ecx */
  push32((uint32_t)(ECX));
  /* 10b52026 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b52028 mov dx, word ptr [0x10b6e7a0] */
  DX = (r16((uint32_t)(0x10b6e7a0)));
  /* 10b5202f push edx */
  push32((uint32_t)(EDX));
  /* 10b52030 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b52032 mov ax, word ptr [0x10b6e79e] */
  AX = (r16((uint32_t)(0x10b6e79e)));
  /* 10b52038 push eax */
  push32((uint32_t)(EAX));
  /* 10b52039 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b5203b push 0 */
  push32((uint32_t)(0x0u));
  /* 10b5203d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b5203f mov cx, word ptr [0x10b6e79a] */
  CX = (r16((uint32_t)(0x10b6e79a)));
  /* 10b52046 push ecx */
  push32((uint32_t)(ECX));
  /* 10b52047 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b5204a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10b5204d push eax */
  push32((uint32_t)(EAX));
  /* 10b5204e push 0 */
  push32((uint32_t)(0x0u));
  /* 10b52050 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b52052 call 0x10b52260 */
  push32(0x10b52057u); f_10b52260();
  /* 10b52057 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b5205a:;
  /* 10b5205a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b5205c mov cx, word ptr [0x10b6e744] */
  CX = (r16((uint32_t)(0x10b6e744)));
  /* 10b52063 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b52065 jne 0x10b520c2 */
  if (!C.zf) goto L_10b520c2;
  /* 10b52067 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b52069 mov dx, word ptr [0x10b6e752] */
  DX = (r16((uint32_t)(0x10b6e752)));
  /* 10b52070 push edx */
  push32((uint32_t)(EDX));
  /* 10b52071 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b52073 mov ax, word ptr [0x10b6e750] */
  AX = (r16((uint32_t)(0x10b6e750)));
  /* 10b52079 push eax */
  push32((uint32_t)(EAX));
  /* 10b5207a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b5207c mov cx, word ptr [0x10b6e74e] */
  CX = (r16((uint32_t)(0x10b6e74e)));
  /* 10b52083 push ecx */
  push32((uint32_t)(ECX));
  /* 10b52084 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b52086 mov dx, word ptr [0x10b6e74c] */
  DX = (r16((uint32_t)(0x10b6e74c)));
  /* 10b5208d push edx */
  push32((uint32_t)(EDX));
  /* 10b5208e push 0 */
  push32((uint32_t)(0x0u));
  /* 10b52090 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b52092 mov ax, word ptr [0x10b6e748] */
  AX = (r16((uint32_t)(0x10b6e748)));
  /* 10b52098 push eax */
  push32((uint32_t)(EAX));
  /* 10b52099 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b5209b mov cx, word ptr [0x10b6e74a] */
  CX = (r16((uint32_t)(0x10b6e74a)));
  /* 10b520a2 push ecx */
  push32((uint32_t)(ECX));
  /* 10b520a3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b520a5 mov dx, word ptr [0x10b6e746] */
  DX = (r16((uint32_t)(0x10b6e746)));
  /* 10b520ac push edx */
  push32((uint32_t)(EDX));
  /* 10b520ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b520b0 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10b520b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b520b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b520b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b520b8 call 0x10b52260 */
  push32(0x10b520bdu); f_10b52260();
  /* 10b520bd add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b520c0 jmp 0x10b52113 */
  goto L_10b52113;
L_10b520c2:;
  /* 10b520c2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b520c4 mov dx, word ptr [0x10b6e752] */
  DX = (r16((uint32_t)(0x10b6e752)));
  /* 10b520cb push edx */
  push32((uint32_t)(EDX));
  /* 10b520cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b520ce mov ax, word ptr [0x10b6e750] */
  AX = (r16((uint32_t)(0x10b6e750)));
  /* 10b520d4 push eax */
  push32((uint32_t)(EAX));
  /* 10b520d5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b520d7 mov cx, word ptr [0x10b6e74e] */
  CX = (r16((uint32_t)(0x10b6e74e)));
  /* 10b520de push ecx */
  push32((uint32_t)(ECX));
  /* 10b520df xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b520e1 mov dx, word ptr [0x10b6e74c] */
  DX = (r16((uint32_t)(0x10b6e74c)));
  /* 10b520e8 push edx */
  push32((uint32_t)(EDX));
  /* 10b520e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b520eb mov ax, word ptr [0x10b6e74a] */
  AX = (r16((uint32_t)(0x10b6e74a)));
  /* 10b520f1 push eax */
  push32((uint32_t)(EAX));
  /* 10b520f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b520f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b520f6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b520f8 mov cx, word ptr [0x10b6e746] */
  CX = (r16((uint32_t)(0x10b6e746)));
  /* 10b520ff push ecx */
  push32((uint32_t)(ECX));
  /* 10b52100 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b52103 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10b52106 push eax */
  push32((uint32_t)(EAX));
  /* 10b52107 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b52109 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b5210b call 0x10b52260 */
  push32(0x10b52110u); f_10b52260();
  /* 10b52110 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b52113:;
  /* 10b52113 jmp 0x10b5215b */
  goto L_10b5215b;
L_10b52115:;
  /* 10b52115 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b52117 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b52119 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b5211b push 2 */
  push32((uint32_t)(0x2u));
  /* 10b5211d push 0 */
  push32((uint32_t)(0x0u));
  /* 10b5211f push 0 */
  push32((uint32_t)(0x0u));
  /* 10b52121 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b52123 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b52125 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b52128 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10b5212b push edx */
  push32((uint32_t)(EDX));
  /* 10b5212c push 1 */
  push32((uint32_t)(0x1u));
  /* 10b5212e push 1 */
  push32((uint32_t)(0x1u));
  /* 10b52130 call 0x10b52260 */
  push32(0x10b52135u); f_10b52260();
  /* 10b52135 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b52138 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b5213a push 0 */
  push32((uint32_t)(0x0u));
  /* 10b5213c push 0 */
  push32((uint32_t)(0x0u));
  /* 10b5213e push 2 */
  push32((uint32_t)(0x2u));
  /* 10b52140 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b52142 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b52144 push 5 */
  push32((uint32_t)(0x5u));
  /* 10b52146 push 0xa */
  push32((uint32_t)(0xau));
  /* 10b52148 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b5214b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10b5214e push ecx */
  push32((uint32_t)(ECX));
  /* 10b5214f push 1 */
  push32((uint32_t)(0x1u));
  /* 10b52151 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b52153 call 0x10b52260 */
  push32(0x10b52158u); f_10b52260();
  /* 10b52158 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b5215b:;
  /* 10b5215b mov edx, dword ptr [0x10b6de2c] */
  EDX = (r32((uint32_t)(0x10b6de2c)));
  /* 10b52161 cmp edx, dword ptr [0x10b6de3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10b6de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b52167 jge 0x10b521b4 */
  if ((C.sf==C.of)) goto L_10b521b4;
  /* 10b52169 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b5216c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10b5216f cmp ecx, dword ptr [0x10b6de2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10b6de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b52175 jl 0x10b52185 */
  if ((C.sf!=C.of)) goto L_10b52185;
  /* 10b52177 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b5217a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10b5217d cmp eax, dword ptr [0x10b6de3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10b6de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b52183 jle 0x10b5218c */
  if ((C.zf||C.sf!=C.of)) goto L_10b5218c;
L_10b52185:;
  /* 10b52185 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b52187 jmp 0x10b52256 */
  goto L_10b52256;
L_10b5218c:;
  /* 10b5218c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b5218f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10b52192 cmp edx, dword ptr [0x10b6de2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10b6de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b52198 jle 0x10b521b2 */
  if ((C.zf||C.sf!=C.of)) goto L_10b521b2;
  /* 10b5219a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b5219d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10b521a0 cmp ecx, dword ptr [0x10b6de3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10b6de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b521a6 jge 0x10b521b2 */
  if ((C.sf==C.of)) goto L_10b521b2;
  /* 10b521a8 mov eax, 1 */
  EAX = (0x1u);
  /* 10b521ad jmp 0x10b52256 */
  goto L_10b52256;
L_10b521b2:;
  /* 10b521b2 jmp 0x10b521f7 */
  goto L_10b521f7;
L_10b521b4:;
  /* 10b521b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b521b7 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10b521ba cmp eax, dword ptr [0x10b6de3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10b6de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b521c0 jl 0x10b521d0 */
  if ((C.sf!=C.of)) goto L_10b521d0;
  /* 10b521c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b521c5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10b521c8 cmp edx, dword ptr [0x10b6de2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10b6de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b521ce jle 0x10b521d7 */
  if ((C.zf||C.sf!=C.of)) goto L_10b521d7;
L_10b521d0:;
  /* 10b521d0 mov eax, 1 */
  EAX = (0x1u);
  /* 10b521d5 jmp 0x10b52256 */
  goto L_10b52256;
L_10b521d7:;
  /* 10b521d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b521da mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10b521dd cmp ecx, dword ptr [0x10b6de3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10b6de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b521e3 jle 0x10b521f7 */
  if ((C.zf||C.sf!=C.of)) goto L_10b521f7;
  /* 10b521e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b521e8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10b521eb cmp eax, dword ptr [0x10b6de2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10b6de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b521f1 jge 0x10b521f7 */
  if ((C.sf==C.of)) goto L_10b521f7;
  /* 10b521f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b521f5 jmp 0x10b52256 */
  goto L_10b52256;
L_10b521f7:;
  /* 10b521f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b521fa mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b521fd imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b52200 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b52203 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b52205 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b52207 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b5220a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10b5220d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b52213 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b52215 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b5221b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b5221e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b52221 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10b52224 cmp edx, dword ptr [0x10b6de2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10b6de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b5222a jne 0x10b52242 */
  if (!C.zf) goto L_10b52242;
  /* 10b5222c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b5222f cmp eax, dword ptr [0x10b6de30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10b6de30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b52235 jl 0x10b5223e */
  if ((C.sf!=C.of)) goto L_10b5223e;
  /* 10b52237 mov eax, 1 */
  EAX = (0x1u);
  /* 10b5223c jmp 0x10b52256 */
  goto L_10b52256;
L_10b5223e:;
  /* 10b5223e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b52240 jmp 0x10b52256 */
  goto L_10b52256;
L_10b52242:;
  /* 10b52242 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b52245 cmp ecx, dword ptr [0x10b6de40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10b6de40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b5224b jge 0x10b52254 */
  if ((C.sf==C.of)) goto L_10b52254;
  /* 10b5224d mov eax, 1 */
  EAX = (0x1u);
  /* 10b52252 jmp 0x10b52256 */
  goto L_10b52256;
L_10b52254:;
  /* 10b52254 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b52256:;
  /* 10b52256 mov esp, ebp */
  ESP = (EBP);
  /* 10b52258 pop ebp */
  EBP = (pop32());
  /* 10b52259 ret  */
  ESPCHK(0x10b51f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10012260 @ 0x10b52260 (504 bytes, 145 insns) */
void f_10b52260(void) {
  FTRACE(0x10b52260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b52260 push ebp */
  push32((uint32_t)(EBP));
  /* 10b52261 mov ebp, esp */
  EBP = (ESP);
  /* 10b52263 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b52266 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b5226a jne 0x10b5233c */
  if (!C.zf) goto L_10b5233c;
  /* 10b52270 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b52273 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10b52276 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b52278 jne 0x10b52289 */
  if (!C.zf) goto L_10b52289;
  /* 10b5227a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b5227d mov edx, dword ptr [ecx*4 + 0x10b6de4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10b6de4c)));
  /* 10b52284 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10b52287 jmp 0x10b52296 */
  goto L_10b52296;
L_10b52289:;
  /* 10b52289 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b5228c mov ecx, dword ptr [eax*4 + 0x10b6de80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10b6de80)));
  /* 10b52293 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10b52296:;
  /* 10b52296 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b52299 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b5229c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10b5229f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b522a2 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b522a5 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b522ab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b522ae add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b522b0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b522b3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b522b6 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10b522b9 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 10b522bd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10b522be mov ecx, 7 */
  ECX = (0x7u);
  /* 10b522c3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10b522c5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b522c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b522cb cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b522ce jge 0x10b522e9 */
  if ((C.sf==C.of)) goto L_10b522e9;
  /* 10b522d0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10b522d3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b522d6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b522d9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b522dc imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b522df add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b522e2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b522e4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b522e7 jmp 0x10b522fd */
  goto L_10b522fd;
L_10b522e9:;
  /* 10b522e9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10b522ec sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b522ef mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b522f2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b522f5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b522f8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b522fa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10b522fd:;
  /* 10b522fd cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b52301 jne 0x10b5233a */
  if (!C.zf) goto L_10b5233a;
  /* 10b52303 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b52306 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10b52309 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b5230b jne 0x10b5231c */
  if (!C.zf) goto L_10b5231c;
  /* 10b5230d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b52310 mov eax, dword ptr [edx*4 + 0x10b6de50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10b6de50)));
  /* 10b52317 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10b5231a jmp 0x10b52329 */
  goto L_10b52329;
L_10b5231c:;
  /* 10b5231c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b5231f mov edx, dword ptr [ecx*4 + 0x10b6de84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10b6de84)));
  /* 10b52326 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10b52329:;
  /* 10b52329 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b5232c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b5232f jle 0x10b5233a */
  if ((C.zf||C.sf!=C.of)) goto L_10b5233a;
  /* 10b52331 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b52334 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b52337 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10b5233a:;
  /* 10b5233a jmp 0x10b52371 */
  goto L_10b52371;
L_10b5233c:;
  /* 10b5233c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b5233f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10b52342 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b52344 jne 0x10b52355 */
  if (!C.zf) goto L_10b52355;
  /* 10b52346 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b52349 mov ecx, dword ptr [eax*4 + 0x10b6de4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10b6de4c)));
  /* 10b52350 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10b52353 jmp 0x10b52362 */
  goto L_10b52362;
L_10b52355:;
  /* 10b52355 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b52358 mov eax, dword ptr [edx*4 + 0x10b6de80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10b6de80)));
  /* 10b5235f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10b52362:;
  /* 10b52362 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b52365 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b52368 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b5236b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b5236e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10b52371:;
  /* 10b52371 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b52375 jne 0x10b523b1 */
  if (!C.zf) goto L_10b523b1;
  /* 10b52377 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b5237a mov dword ptr [0x10b6de2c], eax */
  w32((uint32_t)(0x10b6de2c), (EAX));
  /* 10b5237f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10b52382 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b52385 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10b52388 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b5238a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b5238d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10b52390 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b52392 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b52398 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10b5239b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b5239d mov dword ptr [0x10b6de30], ecx */
  w32((uint32_t)(0x10b6de30), (ECX));
  /* 10b523a3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b523a6 mov dword ptr [0x10b6de28], edx */
  w32((uint32_t)(0x10b6de28), (EDX));
  /* 10b523ac jmp 0x10b52454 */
  goto L_10b52454;
L_10b523b1:;
  /* 10b523b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b523b4 mov dword ptr [0x10b6de3c], eax */
  w32((uint32_t)(0x10b6de3c), (EAX));
  /* 10b523b9 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10b523bc imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b523bf mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10b523c2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b523c4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b523c7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10b523ca add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b523cc imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b523d2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10b523d5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b523d7 mov dword ptr [0x10b6de40], ecx */
  w32((uint32_t)(0x10b6de40), (ECX));
  /* 10b523dd mov edx, dword ptr [0x10b6dd98] */
  EDX = (r32((uint32_t)(0x10b6dd98)));
  /* 10b523e3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b523e9 mov eax, dword ptr [0x10b6de40] */
  EAX = (r32((uint32_t)(0x10b6de40)));
  /* 10b523ee add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b523f0 mov dword ptr [0x10b6de40], eax */
  w32((uint32_t)(0x10b6de40), (EAX));
  /* 10b523f5 cmp dword ptr [0x10b6de40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6de40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b523fc jge 0x10b52421 */
  if ((C.sf==C.of)) goto L_10b52421;
  /* 10b523fe mov ecx, dword ptr [0x10b6de40] */
  ECX = (r32((uint32_t)(0x10b6de40)));
  /* 10b52404 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b5240a mov dword ptr [0x10b6de40], ecx */
  w32((uint32_t)(0x10b6de40), (ECX));
  /* 10b52410 mov edx, dword ptr [0x10b6de3c] */
  EDX = (r32((uint32_t)(0x10b6de3c)));
  /* 10b52416 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b52419 mov dword ptr [0x10b6de3c], edx */
  w32((uint32_t)(0x10b6de3c), (EDX));
  /* 10b5241f jmp 0x10b5244b */
  goto L_10b5244b;
L_10b52421:;
  /* 10b52421 cmp dword ptr [0x10b6de40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x10b6de40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b5242b jl 0x10b5244b */
  if ((C.sf!=C.of)) goto L_10b5244b;
  /* 10b5242d mov eax, dword ptr [0x10b6de40] */
  EAX = (r32((uint32_t)(0x10b6de40)));
  /* 10b52432 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b52437 mov dword ptr [0x10b6de40], eax */
  w32((uint32_t)(0x10b6de40), (EAX));
  /* 10b5243c mov ecx, dword ptr [0x10b6de3c] */
  ECX = (r32((uint32_t)(0x10b6de3c)));
  /* 10b52442 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b52445 mov dword ptr [0x10b6de3c], ecx */
  w32((uint32_t)(0x10b6de3c), (ECX));
L_10b5244b:;
  /* 10b5244b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b5244e mov dword ptr [0x10b6de38], edx */
  w32((uint32_t)(0x10b6de38), (EDX));
L_10b52454:;
  /* 10b52454 mov esp, ebp */
  ESP = (EBP);
  /* 10b52456 pop ebp */
  EBP = (pop32());
  /* 10b52457 ret  */
  ESPCHK(0x10b52260u, _esp0);
  ESP += 4; return;
}

/* FUN_10012460 @ 0x10b52460 (382 bytes, 135 insns) */
void f_10b52460(void) {
  FTRACE(0x10b52460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b52460 push ebp */
  push32((uint32_t)(EBP));
  /* 10b52461 mov ebp, esp */
  EBP = (ESP);
  /* 10b52463 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10b52465 push 0x10b6a908 */
  push32((uint32_t)(0x10b6a908u));
  /* 10b5246a push 0x10b4c128 */
  push32((uint32_t)(0x10b4c128u));
  /* 10b5246f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10b52475 push eax */
  push32((uint32_t)(EAX));
  /* 10b52476 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10b5247d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b52480 push ebx */
  push32((uint32_t)(EBX));
  /* 10b52481 push esi */
  push32((uint32_t)(ESI));
  /* 10b52482 push edi */
  push32((uint32_t)(EDI));
  /* 10b52483 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10b52486 cmp dword ptr [0x10b6e7b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e7b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b5248d jne 0x10b524d2 */
  if (!C.zf) goto L_10b524d2;
  /* 10b5248f push 0 */
  push32((uint32_t)(0x0u));
  /* 10b52491 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b52493 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b52495 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b52497 call dword ptr [0x10b70268] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70268))), 0x10b5249du);
  /* 10b5249d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b5249f je 0x10b524ad */
  if (C.zf) goto L_10b524ad;
  /* 10b524a1 mov dword ptr [0x10b6e7b4], 1 */
  w32((uint32_t)(0x10b6e7b4), (0x1u));
  /* 10b524ab jmp 0x10b524d2 */
  goto L_10b524d2;
L_10b524ad:;
  /* 10b524ad push 0 */
  push32((uint32_t)(0x0u));
  /* 10b524af push 0 */
  push32((uint32_t)(0x0u));
  /* 10b524b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b524b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b524b5 call dword ptr [0x10b70280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70280))), 0x10b524bbu);
  /* 10b524bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b524bd je 0x10b524cb */
  if (C.zf) goto L_10b524cb;
  /* 10b524bf mov dword ptr [0x10b6e7b4], 2 */
  w32((uint32_t)(0x10b6e7b4), (0x2u));
  /* 10b524c9 jmp 0x10b524d2 */
  goto L_10b524d2;
L_10b524cb:;
  /* 10b524cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b524cd jmp 0x10b525e1 */
  goto L_10b525e1;
L_10b524d2:;
  /* 10b524d2 cmp dword ptr [0x10b6e7b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e7b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b524d9 jne 0x10b524f6 */
  if (!C.zf) goto L_10b524f6;
  /* 10b524db mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b524de push eax */
  push32((uint32_t)(EAX));
  /* 10b524df mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b524e2 push ecx */
  push32((uint32_t)(ECX));
  /* 10b524e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b524e6 push edx */
  push32((uint32_t)(EDX));
  /* 10b524e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b524ea push eax */
  push32((uint32_t)(EAX));
  /* 10b524eb call dword ptr [0x10b70268] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70268))), 0x10b524f1u);
  /* 10b524f1 jmp 0x10b525e1 */
  goto L_10b525e1;
L_10b524f6:;
  /* 10b524f6 cmp dword ptr [0x10b6e7b4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e7b4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b524fd jne 0x10b525df */
  if (!C.zf) goto L_10b525df;
  /* 10b52503 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b52507 jne 0x10b52512 */
  if (!C.zf) goto L_10b52512;
  /* 10b52509 mov ecx, dword ptr [0x10b6e668] */
  ECX = (r32((uint32_t)(0x10b6e668)));
  /* 10b5250f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10b52512:;
  /* 10b52512 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b52514 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b52516 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b52519 push edx */
  push32((uint32_t)(EDX));
  /* 10b5251a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b5251d push eax */
  push32((uint32_t)(EAX));
  /* 10b5251e call dword ptr [0x10b70280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70280))), 0x10b52524u);
  /* 10b52524 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10b52527 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b5252b jne 0x10b52534 */
  if (!C.zf) goto L_10b52534;
  /* 10b5252d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b5252f jmp 0x10b525e1 */
  goto L_10b525e1;
L_10b52534:;
  /* 10b52534 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b5253b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b5253e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b52541 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10b52543 call 0x10b461c0 */
  push32(0x10b52548u); f_10b461c0();
  /* 10b52548 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 10b5254b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10b5254e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b52551 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10b52554 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10b5255b jmp 0x10b52574 */
  goto L_10b52574;
  /* 10b5255d mov eax, 1 */
  EAX = (0x1u);
  /* 10b52562 ret  */
  ESPCHK(0x10b52460u, _esp0);
  ESP += 4; return;
  /* 10b52563 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10b52566 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10b5256d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10b52574:;
  /* 10b52574 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b52578 jne 0x10b5257e */
  if (!C.zf) goto L_10b5257e;
  /* 10b5257a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b5257c jmp 0x10b525e1 */
  goto L_10b525e1;
L_10b5257e:;
  /* 10b5257e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b52581 push edx */
  push32((uint32_t)(EDX));
  /* 10b52582 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b52585 push eax */
  push32((uint32_t)(EAX));
  /* 10b52586 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b52589 push ecx */
  push32((uint32_t)(ECX));
  /* 10b5258a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b5258d push edx */
  push32((uint32_t)(EDX));
  /* 10b5258e call dword ptr [0x10b70280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70280))), 0x10b52594u);
  /* 10b52594 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b52596 jne 0x10b5259c */
  if (!C.zf) goto L_10b5259c;
  /* 10b52598 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b5259a jmp 0x10b525e1 */
  goto L_10b525e1;
L_10b5259c:;
  /* 10b5259c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b525a0 jne 0x10b525bd */
  if (!C.zf) goto L_10b525bd;
  /* 10b525a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b525a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b525a6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10b525a8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b525ab push eax */
  push32((uint32_t)(EAX));
  /* 10b525ac push 1 */
  push32((uint32_t)(0x1u));
  /* 10b525ae mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b525b1 push ecx */
  push32((uint32_t)(ECX));
  /* 10b525b2 call dword ptr [0x10b70370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70370))), 0x10b525b8u);
  /* 10b525b8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10b525bb jmp 0x10b525da */
  goto L_10b525da;
L_10b525bd:;
  /* 10b525bd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b525c0 push edx */
  push32((uint32_t)(EDX));
  /* 10b525c1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b525c4 push eax */
  push32((uint32_t)(EAX));
  /* 10b525c5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10b525c7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b525ca push ecx */
  push32((uint32_t)(ECX));
  /* 10b525cb push 1 */
  push32((uint32_t)(0x1u));
  /* 10b525cd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b525d0 push edx */
  push32((uint32_t)(EDX));
  /* 10b525d1 call dword ptr [0x10b70370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70370))), 0x10b525d7u);
  /* 10b525d7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10b525da:;
  /* 10b525da mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b525dd jmp 0x10b525e1 */
  goto L_10b525e1;
L_10b525df:;
  /* 10b525df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b525e1:;
  /* 10b525e1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10b525e4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b525e7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10b525ee pop edi */
  EDI = (pop32());
  /* 10b525ef pop esi */
  ESI = (pop32());
  /* 10b525f0 pop ebx */
  EBX = (pop32());
  /* 10b525f1 mov esp, ebp */
  ESP = (EBP);
  /* 10b525f3 pop ebp */
  EBP = (pop32());
  /* 10b525f4 ret  */
  ESPCHK(0x10b52460u, _esp0);
  ESP += 4; return;
}

/* FUN_10012600 @ 0x10b52600 (398 bytes, 140 insns) */
void f_10b52600(void) {
  FTRACE(0x10b52600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b52600 push ebp */
  push32((uint32_t)(EBP));
  /* 10b52601 mov ebp, esp */
  EBP = (ESP);
  /* 10b52603 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10b52605 push 0x10b6a918 */
  push32((uint32_t)(0x10b6a918u));
  /* 10b5260a push 0x10b4c128 */
  push32((uint32_t)(0x10b4c128u));
  /* 10b5260f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10b52615 push eax */
  push32((uint32_t)(EAX));
  /* 10b52616 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10b5261d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b52620 push ebx */
  push32((uint32_t)(EBX));
  /* 10b52621 push esi */
  push32((uint32_t)(ESI));
  /* 10b52622 push edi */
  push32((uint32_t)(EDI));
  /* 10b52623 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10b52626 cmp dword ptr [0x10b6e7b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e7b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b5262d jne 0x10b52672 */
  if (!C.zf) goto L_10b52672;
  /* 10b5262f push 0 */
  push32((uint32_t)(0x0u));
  /* 10b52631 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b52633 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b52635 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b52637 call dword ptr [0x10b70268] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70268))), 0x10b5263du);
  /* 10b5263d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b5263f je 0x10b5264d */
  if (C.zf) goto L_10b5264d;
  /* 10b52641 mov dword ptr [0x10b6e7b8], 1 */
  w32((uint32_t)(0x10b6e7b8), (0x1u));
  /* 10b5264b jmp 0x10b52672 */
  goto L_10b52672;
L_10b5264d:;
  /* 10b5264d push 0 */
  push32((uint32_t)(0x0u));
  /* 10b5264f push 0 */
  push32((uint32_t)(0x0u));
  /* 10b52651 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b52653 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b52655 call dword ptr [0x10b70280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70280))), 0x10b5265bu);
  /* 10b5265b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b5265d je 0x10b5266b */
  if (C.zf) goto L_10b5266b;
  /* 10b5265f mov dword ptr [0x10b6e7b8], 2 */
  w32((uint32_t)(0x10b6e7b8), (0x2u));
  /* 10b52669 jmp 0x10b52672 */
  goto L_10b52672;
L_10b5266b:;
  /* 10b5266b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b5266d jmp 0x10b52791 */
  goto L_10b52791;
L_10b52672:;
  /* 10b52672 cmp dword ptr [0x10b6e7b8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e7b8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b52679 jne 0x10b52696 */
  if (!C.zf) goto L_10b52696;
  /* 10b5267b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b5267e push eax */
  push32((uint32_t)(EAX));
  /* 10b5267f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b52682 push ecx */
  push32((uint32_t)(ECX));
  /* 10b52683 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b52686 push edx */
  push32((uint32_t)(EDX));
  /* 10b52687 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b5268a push eax */
  push32((uint32_t)(EAX));
  /* 10b5268b call dword ptr [0x10b70280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70280))), 0x10b52691u);
  /* 10b52691 jmp 0x10b52791 */
  goto L_10b52791;
L_10b52696:;
  /* 10b52696 cmp dword ptr [0x10b6e7b8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e7b8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b5269d jne 0x10b5278f */
  if (!C.zf) goto L_10b5278f;
  /* 10b526a3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b526a7 jne 0x10b526b2 */
  if (!C.zf) goto L_10b526b2;
  /* 10b526a9 mov ecx, dword ptr [0x10b6e668] */
  ECX = (r32((uint32_t)(0x10b6e668)));
  /* 10b526af mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10b526b2:;
  /* 10b526b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b526b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b526b6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b526b9 push edx */
  push32((uint32_t)(EDX));
  /* 10b526ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b526bd push eax */
  push32((uint32_t)(EAX));
  /* 10b526be call dword ptr [0x10b70268] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70268))), 0x10b526c4u);
  /* 10b526c4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10b526c7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b526cb jne 0x10b526d4 */
  if (!C.zf) goto L_10b526d4;
  /* 10b526cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b526cf jmp 0x10b52791 */
  goto L_10b52791;
L_10b526d4:;
  /* 10b526d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b526db mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b526de shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10b526e0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b526e3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10b526e5 call 0x10b461c0 */
  push32(0x10b526eau); f_10b461c0();
  /* 10b526ea mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 10b526ed mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10b526f0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b526f3 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10b526f6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10b526fd jmp 0x10b52716 */
  goto L_10b52716;
  /* 10b526ff mov eax, 1 */
  EAX = (0x1u);
  /* 10b52704 ret  */
  ESPCHK(0x10b52600u, _esp0);
  ESP += 4; return;
  /* 10b52705 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10b52708 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10b5270f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10b52716:;
  /* 10b52716 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b5271a jne 0x10b52720 */
  if (!C.zf) goto L_10b52720;
  /* 10b5271c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b5271e jmp 0x10b52791 */
  goto L_10b52791;
L_10b52720:;
  /* 10b52720 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b52723 push edx */
  push32((uint32_t)(EDX));
  /* 10b52724 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b52727 push eax */
  push32((uint32_t)(EAX));
  /* 10b52728 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b5272b push ecx */
  push32((uint32_t)(ECX));
  /* 10b5272c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b5272f push edx */
  push32((uint32_t)(EDX));
  /* 10b52730 call dword ptr [0x10b70268] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70268))), 0x10b52736u);
  /* 10b52736 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b52738 jne 0x10b5273e */
  if (!C.zf) goto L_10b5273e;
  /* 10b5273a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b5273c jmp 0x10b52791 */
  goto L_10b52791;
L_10b5273e:;
  /* 10b5273e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b52742 jne 0x10b52766 */
  if (!C.zf) goto L_10b52766;
  /* 10b52744 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b52746 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b52748 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b5274a push 0 */
  push32((uint32_t)(0x0u));
  /* 10b5274c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10b5274e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b52751 push eax */
  push32((uint32_t)(EAX));
  /* 10b52752 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10b52757 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b5275a push ecx */
  push32((uint32_t)(ECX));
  /* 10b5275b call dword ptr [0x10b70328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70328))), 0x10b52761u);
  /* 10b52761 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10b52764 jmp 0x10b5278a */
  goto L_10b5278a;
L_10b52766:;
  /* 10b52766 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b52768 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b5276a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b5276d push edx */
  push32((uint32_t)(EDX));
  /* 10b5276e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b52771 push eax */
  push32((uint32_t)(EAX));
  /* 10b52772 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10b52774 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b52777 push ecx */
  push32((uint32_t)(ECX));
  /* 10b52778 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10b5277d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b52780 push edx */
  push32((uint32_t)(EDX));
  /* 10b52781 call dword ptr [0x10b70328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70328))), 0x10b52787u);
  /* 10b52787 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10b5278a:;
  /* 10b5278a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b5278d jmp 0x10b52791 */
  goto L_10b52791;
L_10b5278f:;
  /* 10b5278f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b52791:;
  /* 10b52791 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10b52794 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b52797 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10b5279e pop edi */
  EDI = (pop32());
  /* 10b5279f pop esi */
  ESI = (pop32());
  /* 10b527a0 pop ebx */
  EBX = (pop32());
  /* 10b527a1 mov esp, ebp */
  ESP = (EBP);
  /* 10b527a3 pop ebp */
  EBP = (pop32());
  /* 10b527a4 ret  */
  ESPCHK(0x10b52600u, _esp0);
  ESP += 4; return;
}

/* FUN_100127b0 @ 0x10b527b0 (11 bytes, 6 insns) */
void f_10b527b0(void) {
  FTRACE(0x10b527b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b527b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b527b1 mov ebp, esp */
  EBP = (ESP);
  /* 10b527b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b527b6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b527b9 pop ebp */
  EBP = (pop32());
  /* 10b527ba ret  */
  ESPCHK(0x10b527b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100127c0 @ 0x10b527c0 (147 bytes, 43 insns) */
void f_10b527c0(void) {
  FTRACE(0x10b527c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b527c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b527c1 mov ebp, esp */
  EBP = (ESP);
  /* 10b527c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b527c4 cmp dword ptr [0x10b6e658], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e658))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b527cb jne 0x10b527e7 */
  if (!C.zf) goto L_10b527e7;
  /* 10b527cd cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b527d1 jl 0x10b527e2 */
  if ((C.sf!=C.of)) goto L_10b527e2;
  /* 10b527d3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b527d7 jg 0x10b527e2 */
  if ((!C.zf&&C.sf==C.of)) goto L_10b527e2;
  /* 10b527d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b527dc add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b527df mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10b527e2:;
  /* 10b527e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b527e5 jmp 0x10b5284f */
  goto L_10b5284f;
L_10b527e7:;
  /* 10b527e7 push 0x10b6e7e4 */
  push32((uint32_t)(0x10b6e7e4u));
  /* 10b527ec call dword ptr [0x10b702d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702d0))), 0x10b527f2u);
  /* 10b527f2 cmp dword ptr [0x10b6e7d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e7d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b527f9 je 0x10b52819 */
  if (C.zf) goto L_10b52819;
  /* 10b527fb push 0x10b6e7e4 */
  push32((uint32_t)(0x10b6e7e4u));
  /* 10b52800 call dword ptr [0x10b702c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702c0))), 0x10b52806u);
  /* 10b52806 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10b52808 call 0x10b46a20 */
  push32(0x10b5280du); f_10b46a20();
  /* 10b5280d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b52810 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10b52817 jmp 0x10b52820 */
  goto L_10b52820;
L_10b52819:;
  /* 10b52819 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10b52820:;
  /* 10b52820 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b52823 push ecx */
  push32((uint32_t)(ECX));
  /* 10b52824 call 0x10b52860 */
  push32(0x10b52829u); f_10b52860();
  /* 10b52829 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b5282c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10b5282f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b52833 je 0x10b52841 */
  if (C.zf) goto L_10b52841;
  /* 10b52835 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10b52837 call 0x10b46ac0 */
  push32(0x10b5283cu); f_10b46ac0();
  /* 10b5283c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b5283f jmp 0x10b5284c */
  goto L_10b5284c;
L_10b52841:;
  /* 10b52841 push 0x10b6e7e4 */
  push32((uint32_t)(0x10b6e7e4u));
  /* 10b52846 call dword ptr [0x10b702c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702c0))), 0x10b5284cu);
L_10b5284c:;
  /* 10b5284c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10b5284f:;
  /* 10b5284f mov esp, ebp */
  ESP = (EBP);
  /* 10b52851 pop ebp */
  EBP = (pop32());
  /* 10b52852 ret  */
  ESPCHK(0x10b527c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012860 @ 0x10b52860 (299 bytes, 91 insns) */
void f_10b52860(void) {
  FTRACE(0x10b52860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b52860 push ebp */
  push32((uint32_t)(EBP));
  /* 10b52861 mov ebp, esp */
  EBP = (ESP);
  /* 10b52863 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b52866 cmp dword ptr [0x10b6e658], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e658))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b5286d jne 0x10b5288c */
  if (!C.zf) goto L_10b5288c;
  /* 10b5286f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b52873 jl 0x10b52884 */
  if ((C.sf!=C.of)) goto L_10b52884;
  /* 10b52875 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b52879 jg 0x10b52884 */
  if ((!C.zf&&C.sf==C.of)) goto L_10b52884;
  /* 10b5287b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b5287e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b52881 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10b52884:;
  /* 10b52884 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b52887 jmp 0x10b52987 */
  goto L_10b52987;
L_10b5288c:;
  /* 10b5288c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b52893 jge 0x10b528d3 */
  if ((C.sf==C.of)) goto L_10b528d3;
  /* 10b52895 cmp dword ptr [0x10b6cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b6cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b5289c jle 0x10b528b1 */
  if ((C.zf||C.sf!=C.of)) goto L_10b528b1;
  /* 10b5289e push 1 */
  push32((uint32_t)(0x1u));
  /* 10b528a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b528a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b528a4 call 0x10b49030 */
  push32(0x10b528a9u); f_10b49030();
  /* 10b528a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b528ac mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10b528af jmp 0x10b528c5 */
  goto L_10b528c5;
L_10b528b1:;
  /* 10b528b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b528b4 mov eax, dword ptr [0x10b6cc98] */
  EAX = (r32((uint32_t)(0x10b6cc98)));
  /* 10b528b9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b528bb mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10b528bf and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10b528c2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10b528c5:;
  /* 10b528c5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b528c9 jne 0x10b528d3 */
  if (!C.zf) goto L_10b528d3;
  /* 10b528cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b528ce jmp 0x10b52987 */
  goto L_10b52987;
L_10b528d3:;
  /* 10b528d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b528d6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10b528d9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b528df and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b528e5 mov eax, dword ptr [0x10b6cc98] */
  EAX = (r32((uint32_t)(0x10b6cc98)));
  /* 10b528ea xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b528ec mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10b528f0 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10b528f6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b528f8 je 0x10b5291c */
  if (C.zf) goto L_10b5291c;
  /* 10b528fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b528fd sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10b52900 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b52906 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 10b52909 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10b5290c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 10b5290f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 10b52913 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10b5291a jmp 0x10b5292d */
  goto L_10b5292d;
L_10b5291c:;
  /* 10b5291c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10b5291f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10b52922 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 10b52926 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_10b5292d:;
  /* 10b5292d push 1 */
  push32((uint32_t)(0x1u));
  /* 10b5292f push 0 */
  push32((uint32_t)(0x0u));
  /* 10b52931 push 3 */
  push32((uint32_t)(0x3u));
  /* 10b52933 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10b52936 push edx */
  push32((uint32_t)(EDX));
  /* 10b52937 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b5293a push eax */
  push32((uint32_t)(EAX));
  /* 10b5293b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10b5293e push ecx */
  push32((uint32_t)(ECX));
  /* 10b5293f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10b52944 mov edx, dword ptr [0x10b6e658] */
  EDX = (r32((uint32_t)(0x10b6e658)));
  /* 10b5294a push edx */
  push32((uint32_t)(EDX));
  /* 10b5294b call 0x10b4b410 */
  push32(0x10b52950u); f_10b4b410();
  /* 10b52950 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b52953 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b52956 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b5295a jne 0x10b52961 */
  if (!C.zf) goto L_10b52961;
  /* 10b5295c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b5295f jmp 0x10b52987 */
  goto L_10b52987;
L_10b52961:;
  /* 10b52961 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b52965 jne 0x10b52971 */
  if (!C.zf) goto L_10b52971;
  /* 10b52967 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b5296a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b5296f jmp 0x10b52987 */
  goto L_10b52987;
L_10b52971:;
  /* 10b52971 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b52974 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b52979 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 10b5297c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10b52982 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10b52985 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_10b52987:;
  /* 10b52987 mov esp, ebp */
  ESP = (EBP);
  /* 10b52989 pop ebp */
  EBP = (pop32());
  /* 10b5298a ret  */
  ESPCHK(0x10b52860u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x10b52990 (52 bytes, 19 insns) */
void f_10b52990(void) {
  FTRACE(0x10b52990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b52990 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10b52994 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10b52998 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b5299a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10b5299e jne 0x10b529a9 */
  if (!C.zf) goto L_10b529a9;
  /* 10b529a0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10b529a4 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10b529a6 ret 0x10 */
  ESPCHK(0x10b52990u, _esp0);
  ESP += 20; return;
L_10b529a9:;
  /* 10b529a9 push ebx */
  push32((uint32_t)(EBX));
  /* 10b529aa mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10b529ac mov ebx, eax */
  EBX = (EAX);
  /* 10b529ae mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10b529b2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10b529b6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b529b8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10b529bc mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10b529be add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b529c0 pop ebx */
  EBX = (pop32());
  /* 10b529c1 ret 0x10 */
  ESPCHK(0x10b52990u, _esp0);
  ESP += 20; return;
}

/* FUN_100129d0 @ 0x10b529d0 (46 bytes, 18 insns) */
void f_10b529d0(void) {
  FTRACE(0x10b529d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b529d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b529d1 mov ebp, esp */
  EBP = (ESP);
  /* 10b529d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b529d4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10b529d6 call 0x10b46a20 */
  push32(0x10b529dbu); f_10b46a20();
  /* 10b529db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b529de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b529e1 push eax */
  push32((uint32_t)(EAX));
  /* 10b529e2 call 0x10b52a00 */
  push32(0x10b529e7u); f_10b52a00();
  /* 10b529e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b529ea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b529ed push 0xc */
  push32((uint32_t)(0xcu));
  /* 10b529ef call 0x10b46ac0 */
  push32(0x10b529f4u); f_10b46ac0();
  /* 10b529f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b529f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b529fa mov esp, ebp */
  ESP = (EBP);
  /* 10b529fc pop ebp */
  EBP = (pop32());
  /* 10b529fd ret  */
  ESPCHK(0x10b529d0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x10b52a00 (198 bytes, 69 insns) */
void f_10b52a00(void) {
  FTRACE(0x10b52a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b52a00 push ebp */
  push32((uint32_t)(EBP));
  /* 10b52a01 mov ebp, esp */
  EBP = (ESP);
  /* 10b52a03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b52a06 mov eax, dword ptr [0x10b6e474] */
  EAX = (r32((uint32_t)(0x10b6e474)));
  /* 10b52a0b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b52a0e cmp dword ptr [0x10b6ff80], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6ff80))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b52a15 jne 0x10b52a1e */
  if (!C.zf) goto L_10b52a1e;
  /* 10b52a17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b52a19 jmp 0x10b52ac2 */
  goto L_10b52ac2;
L_10b52a1e:;
  /* 10b52a1e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b52a22 jne 0x10b52a46 */
  if (!C.zf) goto L_10b52a46;
  /* 10b52a24 cmp dword ptr [0x10b6e47c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e47c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b52a2b je 0x10b52a46 */
  if (C.zf) goto L_10b52a46;
  /* 10b52a2d call 0x10b52b20 */
  push32(0x10b52a32u); f_10b52b20();
  /* 10b52a32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b52a34 je 0x10b52a3d */
  if (C.zf) goto L_10b52a3d;
  /* 10b52a36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b52a38 jmp 0x10b52ac2 */
  goto L_10b52ac2;
L_10b52a3d:;
  /* 10b52a3d mov ecx, dword ptr [0x10b6e474] */
  ECX = (r32((uint32_t)(0x10b6e474)));
  /* 10b52a43 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10b52a46:;
  /* 10b52a46 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b52a4a je 0x10b52ac0 */
  if (C.zf) goto L_10b52ac0;
  /* 10b52a4c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b52a50 je 0x10b52ac0 */
  if (C.zf) goto L_10b52ac0;
  /* 10b52a52 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b52a55 push edx */
  push32((uint32_t)(EDX));
  /* 10b52a56 call 0x10b45e50 */
  push32(0x10b52a5bu); f_10b45e50();
  /* 10b52a5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b52a5e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b52a61:;
  /* 10b52a61 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b52a64 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b52a67 je 0x10b52ac0 */
  if (C.zf) goto L_10b52ac0;
  /* 10b52a69 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b52a6c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b52a6e push edx */
  push32((uint32_t)(EDX));
  /* 10b52a6f call 0x10b45e50 */
  push32(0x10b52a74u); f_10b45e50();
  /* 10b52a74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b52a77 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b52a7a jbe 0x10b52ab5 */
  if ((C.cf||C.zf)) goto L_10b52ab5;
  /* 10b52a7c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b52a7f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b52a81 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b52a84 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 10b52a88 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b52a8b jne 0x10b52ab5 */
  if (!C.zf) goto L_10b52ab5;
  /* 10b52a8d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b52a90 push ecx */
  push32((uint32_t)(ECX));
  /* 10b52a91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b52a94 push edx */
  push32((uint32_t)(EDX));
  /* 10b52a95 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b52a98 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b52a9a push ecx */
  push32((uint32_t)(ECX));
  /* 10b52a9b call 0x10b52ad0 */
  push32(0x10b52aa0u); f_10b52ad0();
  /* 10b52aa0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b52aa3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b52aa5 jne 0x10b52ab5 */
  if (!C.zf) goto L_10b52ab5;
  /* 10b52aa7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b52aaa mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b52aac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b52aaf lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 10b52ab3 jmp 0x10b52ac2 */
  goto L_10b52ac2;
L_10b52ab5:;
  /* 10b52ab5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b52ab8 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b52abb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10b52abe jmp 0x10b52a61 */
  goto L_10b52a61;
L_10b52ac0:;
  /* 10b52ac0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b52ac2:;
  /* 10b52ac2 mov esp, ebp */
  ESP = (EBP);
  /* 10b52ac4 pop ebp */
  EBP = (pop32());
  /* 10b52ac5 ret  */
  ESPCHK(0x10b52a00u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x10b52ad0 (79 bytes, 32 insns) */
void f_10b52ad0(void) {
  FTRACE(0x10b52ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b52ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b52ad1 mov ebp, esp */
  EBP = (ESP);
  /* 10b52ad3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b52ad4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b52ad8 jne 0x10b52ade */
  if (!C.zf) goto L_10b52ade;
  /* 10b52ada xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b52adc jmp 0x10b52b1b */
  goto L_10b52b1b;
L_10b52ade:;
  /* 10b52ade mov eax, dword ptr [0x10b6fb44] */
  EAX = (r32((uint32_t)(0x10b6fb44)));
  /* 10b52ae3 push eax */
  push32((uint32_t)(EAX));
  /* 10b52ae4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b52ae7 push ecx */
  push32((uint32_t)(ECX));
  /* 10b52ae8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b52aeb push edx */
  push32((uint32_t)(EDX));
  /* 10b52aec mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b52aef push eax */
  push32((uint32_t)(EAX));
  /* 10b52af0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b52af3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b52af4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b52af6 mov edx, dword ptr [0x10b6fde4] */
  EDX = (r32((uint32_t)(0x10b6fde4)));
  /* 10b52afc push edx */
  push32((uint32_t)(EDX));
  /* 10b52afd call 0x10b52bd0 */
  push32(0x10b52b02u); f_10b52bd0();
  /* 10b52b02 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b52b05 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b52b08 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b52b0c jne 0x10b52b15 */
  if (!C.zf) goto L_10b52b15;
  /* 10b52b0e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 10b52b13 jmp 0x10b52b1b */
  goto L_10b52b1b;
L_10b52b15:;
  /* 10b52b15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b52b18 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10b52b1b:;
  /* 10b52b1b mov esp, ebp */
  ESP = (EBP);
  /* 10b52b1d pop ebp */
  EBP = (pop32());
  /* 10b52b1e ret  */
  ESPCHK(0x10b52ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b20 @ 0x10b52b20 (174 bytes, 66 insns) */
void f_10b52b20(void) {
  FTRACE(0x10b52b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b52b20 push ebp */
  push32((uint32_t)(EBP));
  /* 10b52b21 mov ebp, esp */
  EBP = (ESP);
  /* 10b52b23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b52b26 mov eax, dword ptr [0x10b6e47c] */
  EAX = (r32((uint32_t)(0x10b6e47c)));
  /* 10b52b2b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b52b2e:;
  /* 10b52b2e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b52b31 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b52b34 je 0x10b52bc8 */
  if (C.zf) goto L_10b52bc8;
  /* 10b52b3a push 0 */
  push32((uint32_t)(0x0u));
  /* 10b52b3c push 0 */
  push32((uint32_t)(0x0u));
  /* 10b52b3e push 0 */
  push32((uint32_t)(0x0u));
  /* 10b52b40 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b52b42 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10b52b44 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b52b47 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b52b49 push eax */
  push32((uint32_t)(EAX));
  /* 10b52b4a push 0 */
  push32((uint32_t)(0x0u));
  /* 10b52b4c push 1 */
  push32((uint32_t)(0x1u));
  /* 10b52b4e call dword ptr [0x10b70328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70328))), 0x10b52b54u);
  /* 10b52b54 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b52b57 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b52b5b jne 0x10b52b62 */
  if (!C.zf) goto L_10b52b62;
  /* 10b52b5d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b52b60 jmp 0x10b52bca */
  goto L_10b52bca;
L_10b52b62:;
  /* 10b52b62 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10b52b64 push 0x10b6a924 */
  push32((uint32_t)(0x10b6a924u));
  /* 10b52b69 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b52b6b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b52b6e push ecx */
  push32((uint32_t)(ECX));
  /* 10b52b6f call 0x10b43020 */
  push32(0x10b52b74u); f_10b43020();
  /* 10b52b74 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b52b77 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b52b7a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b52b7e jne 0x10b52b85 */
  if (!C.zf) goto L_10b52b85;
  /* 10b52b80 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b52b83 jmp 0x10b52bca */
  goto L_10b52bca;
L_10b52b85:;
  /* 10b52b85 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b52b87 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b52b89 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b52b8c push edx */
  push32((uint32_t)(EDX));
  /* 10b52b8d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b52b90 push eax */
  push32((uint32_t)(EAX));
  /* 10b52b91 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10b52b93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b52b96 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b52b98 push edx */
  push32((uint32_t)(EDX));
  /* 10b52b99 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b52b9b push 1 */
  push32((uint32_t)(0x1u));
  /* 10b52b9d call dword ptr [0x10b70328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70328))), 0x10b52ba3u);
  /* 10b52ba3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b52ba5 jne 0x10b52bac */
  if (!C.zf) goto L_10b52bac;
  /* 10b52ba7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b52baa jmp 0x10b52bca */
  goto L_10b52bca;
L_10b52bac:;
  /* 10b52bac push 0 */
  push32((uint32_t)(0x0u));
  /* 10b52bae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b52bb1 push eax */
  push32((uint32_t)(EAX));
  /* 10b52bb2 call 0x10b53020 */
  push32(0x10b52bb7u); f_10b53020();
  /* 10b52bb7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b52bba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b52bbd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b52bc0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b52bc3 jmp 0x10b52b2e */
  goto L_10b52b2e;
L_10b52bc8:;
  /* 10b52bc8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b52bca:;
  /* 10b52bca mov esp, ebp */
  ESP = (EBP);
  /* 10b52bcc pop ebp */
  EBP = (pop32());
  /* 10b52bcd ret  */
  ESPCHK(0x10b52b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10012bd0 @ 0x10b52bd0 (970 bytes, 340 insns) */
void f_10b52bd0(void) {
  FTRACE(0x10b52bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b52bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b52bd1 mov ebp, esp */
  EBP = (ESP);
  /* 10b52bd3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10b52bd5 push 0x10b6a978 */
  push32((uint32_t)(0x10b6a978u));
  /* 10b52bda push 0x10b4c128 */
  push32((uint32_t)(0x10b4c128u));
  /* 10b52bdf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10b52be5 push eax */
  push32((uint32_t)(EAX));
  /* 10b52be6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10b52bed add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b52bf0 push ebx */
  push32((uint32_t)(EBX));
  /* 10b52bf1 push esi */
  push32((uint32_t)(ESI));
  /* 10b52bf2 push edi */
  push32((uint32_t)(EDI));
  /* 10b52bf3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10b52bf6 cmp dword ptr [0x10b6e7bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e7bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b52bfd jne 0x10b52c56 */
  if (!C.zf) goto L_10b52c56;
  /* 10b52bff push 1 */
  push32((uint32_t)(0x1u));
  /* 10b52c01 push 0x10b69fd0 */
  push32((uint32_t)(0x10b69fd0u));
  /* 10b52c06 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b52c08 push 0x10b69fd0 */
  push32((uint32_t)(0x10b69fd0u));
  /* 10b52c0d push 0 */
  push32((uint32_t)(0x0u));
  /* 10b52c0f push 0 */
  push32((uint32_t)(0x0u));
  /* 10b52c11 call dword ptr [0x10b70260] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70260))), 0x10b52c17u);
  /* 10b52c17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b52c19 je 0x10b52c27 */
  if (C.zf) goto L_10b52c27;
  /* 10b52c1b mov dword ptr [0x10b6e7bc], 1 */
  w32((uint32_t)(0x10b6e7bc), (0x1u));
  /* 10b52c25 jmp 0x10b52c56 */
  goto L_10b52c56;
L_10b52c27:;
  /* 10b52c27 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b52c29 push 0x10b69fcc */
  push32((uint32_t)(0x10b69fccu));
  /* 10b52c2e push 1 */
  push32((uint32_t)(0x1u));
  /* 10b52c30 push 0x10b69fcc */
  push32((uint32_t)(0x10b69fccu));
  /* 10b52c35 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b52c37 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b52c39 call dword ptr [0x10b70264] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70264))), 0x10b52c3fu);
  /* 10b52c3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b52c41 je 0x10b52c4f */
  if (C.zf) goto L_10b52c4f;
  /* 10b52c43 mov dword ptr [0x10b6e7bc], 2 */
  w32((uint32_t)(0x10b6e7bc), (0x2u));
  /* 10b52c4d jmp 0x10b52c56 */
  goto L_10b52c56;
L_10b52c4f:;
  /* 10b52c4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b52c51 jmp 0x10b52fb4 */
  goto L_10b52fb4;
L_10b52c56:;
  /* 10b52c56 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b52c5a jle 0x10b52c6f */
  if ((C.zf||C.sf!=C.of)) goto L_10b52c6f;
  /* 10b52c5c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b52c5f push eax */
  push32((uint32_t)(EAX));
  /* 10b52c60 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b52c63 push ecx */
  push32((uint32_t)(ECX));
  /* 10b52c64 call 0x10b52fd0 */
  push32(0x10b52c69u); f_10b52fd0();
  /* 10b52c69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b52c6c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10b52c6f:;
  /* 10b52c6f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b52c73 jle 0x10b52c88 */
  if ((C.zf||C.sf!=C.of)) goto L_10b52c88;
  /* 10b52c75 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10b52c78 push edx */
  push32((uint32_t)(EDX));
  /* 10b52c79 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b52c7c push eax */
  push32((uint32_t)(EAX));
  /* 10b52c7d call 0x10b52fd0 */
  push32(0x10b52c82u); f_10b52fd0();
  /* 10b52c82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b52c85 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_10b52c88:;
  /* 10b52c88 cmp dword ptr [0x10b6e7bc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e7bc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b52c8f jne 0x10b52cb4 */
  if (!C.zf) goto L_10b52cb4;
  /* 10b52c91 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10b52c94 push ecx */
  push32((uint32_t)(ECX));
  /* 10b52c95 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b52c98 push edx */
  push32((uint32_t)(EDX));
  /* 10b52c99 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b52c9c push eax */
  push32((uint32_t)(EAX));
  /* 10b52c9d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b52ca0 push ecx */
  push32((uint32_t)(ECX));
  /* 10b52ca1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b52ca4 push edx */
  push32((uint32_t)(EDX));
  /* 10b52ca5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b52ca8 push eax */
  push32((uint32_t)(EAX));
  /* 10b52ca9 call dword ptr [0x10b70264] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70264))), 0x10b52cafu);
  /* 10b52caf jmp 0x10b52fb4 */
  goto L_10b52fb4;
L_10b52cb4:;
  /* 10b52cb4 cmp dword ptr [0x10b6e7bc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e7bc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b52cbb jne 0x10b52fb2 */
  if (!C.zf) goto L_10b52fb2;
  /* 10b52cc1 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b52cc5 jne 0x10b52cd0 */
  if (!C.zf) goto L_10b52cd0;
  /* 10b52cc7 mov ecx, dword ptr [0x10b6e668] */
  ECX = (r32((uint32_t)(0x10b6e668)));
  /* 10b52ccd mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_10b52cd0:;
  /* 10b52cd0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b52cd4 je 0x10b52ce0 */
  if (C.zf) goto L_10b52ce0;
  /* 10b52cd6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b52cda jne 0x10b52e5c */
  if (!C.zf) goto L_10b52e5c;
L_10b52ce0:;
  /* 10b52ce0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b52ce3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b52ce6 jne 0x10b52cf2 */
  if (!C.zf) goto L_10b52cf2;
  /* 10b52ce8 mov eax, 2 */
  EAX = (0x2u);
  /* 10b52ced jmp 0x10b52fb4 */
  goto L_10b52fb4;
L_10b52cf2:;
  /* 10b52cf2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b52cf6 jle 0x10b52d02 */
  if ((C.zf||C.sf!=C.of)) goto L_10b52d02;
  /* 10b52cf8 mov eax, 1 */
  EAX = (0x1u);
  /* 10b52cfd jmp 0x10b52fb4 */
  goto L_10b52fb4;
L_10b52d02:;
  /* 10b52d02 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b52d06 jle 0x10b52d12 */
  if ((C.zf||C.sf!=C.of)) goto L_10b52d12;
  /* 10b52d08 mov eax, 3 */
  EAX = (0x3u);
  /* 10b52d0d jmp 0x10b52fb4 */
  goto L_10b52fb4;
L_10b52d12:;
  /* 10b52d12 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 10b52d15 push eax */
  push32((uint32_t)(EAX));
  /* 10b52d16 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10b52d19 push ecx */
  push32((uint32_t)(ECX));
  /* 10b52d1a call dword ptr [0x10b70364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70364))), 0x10b52d20u);
  /* 10b52d20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b52d22 jne 0x10b52d2b */
  if (!C.zf) goto L_10b52d2b;
  /* 10b52d24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b52d26 jmp 0x10b52fb4 */
  goto L_10b52fb4;
L_10b52d2b:;
  /* 10b52d2b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b52d2f jne 0x10b52d37 */
  if (!C.zf) goto L_10b52d37;
  /* 10b52d31 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b52d35 je 0x10b52d64 */
  if (C.zf) goto L_10b52d64;
L_10b52d37:;
  /* 10b52d37 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b52d3b jne 0x10b52d43 */
  if (!C.zf) goto L_10b52d43;
  /* 10b52d3d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b52d41 je 0x10b52d64 */
  if (C.zf) goto L_10b52d64;
L_10b52d43:;
  /* 10b52d43 push 0x10b6a938 */
  push32((uint32_t)(0x10b6a938u));
  /* 10b52d48 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b52d4a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 10b52d4f push 0x10b6a930 */
  push32((uint32_t)(0x10b6a930u));
  /* 10b52d54 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b52d56 call 0x10b420e0 */
  push32(0x10b52d5bu); f_10b420e0();
  /* 10b52d5b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b52d5e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b52d61 jne 0x10b52d64 */
  if (!C.zf) goto L_10b52d64;
  /* 10b52d63 int3  */
  x86_unimpl("int3 @ 0x10b52d63");
L_10b52d64:;
  /* 10b52d64 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b52d66 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b52d68 jne 0x10b52d2b */
  if (!C.zf) goto L_10b52d2b;
  /* 10b52d6a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b52d6e jle 0x10b52de3 */
  if ((C.zf||C.sf!=C.of)) goto L_10b52de3;
  /* 10b52d70 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b52d74 jae 0x10b52d80 */
  if (!C.cf) goto L_10b52d80;
  /* 10b52d76 mov eax, 3 */
  EAX = (0x3u);
  /* 10b52d7b jmp 0x10b52fb4 */
  goto L_10b52fb4;
L_10b52d80:;
  /* 10b52d80 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 10b52d83 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 10b52d86 jmp 0x10b52d91 */
  goto L_10b52d91;
L_10b52d88:;
  /* 10b52d88 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10b52d8b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b52d8e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_10b52d91:;
  /* 10b52d91 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10b52d94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b52d96 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b52d98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b52d9a je 0x10b52dd9 */
  if (C.zf) goto L_10b52dd9;
  /* 10b52d9c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10b52d9f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b52da1 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10b52da4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b52da6 je 0x10b52dd9 */
  if (C.zf) goto L_10b52dd9;
  /* 10b52da8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b52dab xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b52dad mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10b52daf mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10b52db2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b52db4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b52db6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b52db8 jl 0x10b52dd7 */
  if ((C.sf!=C.of)) goto L_10b52dd7;
  /* 10b52dba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b52dbd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b52dbf mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10b52dc1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10b52dc4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b52dc6 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10b52dc9 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b52dcb jg 0x10b52dd7 */
  if ((!C.zf&&C.sf==C.of)) goto L_10b52dd7;
  /* 10b52dcd mov eax, 2 */
  EAX = (0x2u);
  /* 10b52dd2 jmp 0x10b52fb4 */
  goto L_10b52fb4;
L_10b52dd7:;
  /* 10b52dd7 jmp 0x10b52d88 */
  goto L_10b52d88;
L_10b52dd9:;
  /* 10b52dd9 mov eax, 3 */
  EAX = (0x3u);
  /* 10b52dde jmp 0x10b52fb4 */
  goto L_10b52fb4;
L_10b52de3:;
  /* 10b52de3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b52de7 jle 0x10b52e5c */
  if ((C.zf||C.sf!=C.of)) goto L_10b52e5c;
  /* 10b52de9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b52ded jae 0x10b52df9 */
  if (!C.cf) goto L_10b52df9;
  /* 10b52def mov eax, 1 */
  EAX = (0x1u);
  /* 10b52df4 jmp 0x10b52fb4 */
  goto L_10b52fb4;
L_10b52df9:;
  /* 10b52df9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 10b52dfc mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 10b52dff jmp 0x10b52e0a */
  goto L_10b52e0a;
L_10b52e01:;
  /* 10b52e01 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10b52e04 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b52e07 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_10b52e0a:;
  /* 10b52e0a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10b52e0d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b52e0f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10b52e11 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b52e13 je 0x10b52e52 */
  if (C.zf) goto L_10b52e52;
  /* 10b52e15 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10b52e18 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b52e1a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10b52e1d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b52e1f je 0x10b52e52 */
  if (C.zf) goto L_10b52e52;
  /* 10b52e21 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b52e24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b52e26 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b52e28 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10b52e2b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b52e2d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10b52e2f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b52e31 jl 0x10b52e50 */
  if ((C.sf!=C.of)) goto L_10b52e50;
  /* 10b52e33 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b52e36 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b52e38 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10b52e3a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10b52e3d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b52e3f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10b52e42 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b52e44 jg 0x10b52e50 */
  if ((!C.zf&&C.sf==C.of)) goto L_10b52e50;
  /* 10b52e46 mov eax, 2 */
  EAX = (0x2u);
  /* 10b52e4b jmp 0x10b52fb4 */
  goto L_10b52fb4;
L_10b52e50:;
  /* 10b52e50 jmp 0x10b52e01 */
  goto L_10b52e01;
L_10b52e52:;
  /* 10b52e52 mov eax, 1 */
  EAX = (0x1u);
  /* 10b52e57 jmp 0x10b52fb4 */
  goto L_10b52fb4;
L_10b52e5c:;
  /* 10b52e5c push 0 */
  push32((uint32_t)(0x0u));
  /* 10b52e5e push 0 */
  push32((uint32_t)(0x0u));
  /* 10b52e60 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b52e63 push ecx */
  push32((uint32_t)(ECX));
  /* 10b52e64 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b52e67 push edx */
  push32((uint32_t)(EDX));
  /* 10b52e68 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b52e6a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10b52e6d push eax */
  push32((uint32_t)(EAX));
  /* 10b52e6e call dword ptr [0x10b70370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70370))), 0x10b52e74u);
  /* 10b52e74 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10b52e77 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b52e7b jne 0x10b52e84 */
  if (!C.zf) goto L_10b52e84;
  /* 10b52e7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b52e7f jmp 0x10b52fb4 */
  goto L_10b52fb4;
L_10b52e84:;
  /* 10b52e84 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b52e8b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b52e8e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10b52e90 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b52e93 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10b52e95 call 0x10b461c0 */
  push32(0x10b52e9au); f_10b461c0();
  /* 10b52e9a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 10b52e9d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10b52ea0 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 10b52ea3 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10b52ea6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10b52ead jmp 0x10b52ec6 */
  goto L_10b52ec6;
  /* 10b52eaf mov eax, 1 */
  EAX = (0x1u);
  /* 10b52eb4 ret  */
  ESPCHK(0x10b52bd0u, _esp0);
  ESP += 4; return;
  /* 10b52eb5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10b52eb8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10b52ebf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10b52ec6:;
  /* 10b52ec6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b52eca jne 0x10b52ed3 */
  if (!C.zf) goto L_10b52ed3;
  /* 10b52ecc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b52ece jmp 0x10b52fb4 */
  goto L_10b52fb4;
L_10b52ed3:;
  /* 10b52ed3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b52ed6 push edx */
  push32((uint32_t)(EDX));
  /* 10b52ed7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b52eda push eax */
  push32((uint32_t)(EAX));
  /* 10b52edb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b52ede push ecx */
  push32((uint32_t)(ECX));
  /* 10b52edf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b52ee2 push edx */
  push32((uint32_t)(EDX));
  /* 10b52ee3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b52ee5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10b52ee8 push eax */
  push32((uint32_t)(EAX));
  /* 10b52ee9 call dword ptr [0x10b70370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70370))), 0x10b52eefu);
  /* 10b52eef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b52ef1 jne 0x10b52efa */
  if (!C.zf) goto L_10b52efa;
  /* 10b52ef3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b52ef5 jmp 0x10b52fb4 */
  goto L_10b52fb4;
L_10b52efa:;
  /* 10b52efa push 0 */
  push32((uint32_t)(0x0u));
  /* 10b52efc push 0 */
  push32((uint32_t)(0x0u));
  /* 10b52efe mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10b52f01 push ecx */
  push32((uint32_t)(ECX));
  /* 10b52f02 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b52f05 push edx */
  push32((uint32_t)(EDX));
  /* 10b52f06 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b52f08 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10b52f0b push eax */
  push32((uint32_t)(EAX));
  /* 10b52f0c call dword ptr [0x10b70370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70370))), 0x10b52f12u);
  /* 10b52f12 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10b52f15 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b52f19 jne 0x10b52f22 */
  if (!C.zf) goto L_10b52f22;
  /* 10b52f1b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b52f1d jmp 0x10b52fb4 */
  goto L_10b52fb4;
L_10b52f22:;
  /* 10b52f22 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10b52f29 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b52f2c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10b52f2e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b52f31 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10b52f33 call 0x10b461c0 */
  push32(0x10b52f38u); f_10b461c0();
  /* 10b52f38 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 10b52f3b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10b52f3e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 10b52f41 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10b52f44 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10b52f4b jmp 0x10b52f64 */
  goto L_10b52f64;
  /* 10b52f4d mov eax, 1 */
  EAX = (0x1u);
  /* 10b52f52 ret  */
  ESPCHK(0x10b52bd0u, _esp0);
  ESP += 4; return;
  /* 10b52f53 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10b52f56 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10b52f5d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10b52f64:;
  /* 10b52f64 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b52f68 jne 0x10b52f6e */
  if (!C.zf) goto L_10b52f6e;
  /* 10b52f6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b52f6c jmp 0x10b52fb4 */
  goto L_10b52fb4;
L_10b52f6e:;
  /* 10b52f6e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b52f71 push edx */
  push32((uint32_t)(EDX));
  /* 10b52f72 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b52f75 push eax */
  push32((uint32_t)(EAX));
  /* 10b52f76 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10b52f79 push ecx */
  push32((uint32_t)(ECX));
  /* 10b52f7a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b52f7d push edx */
  push32((uint32_t)(EDX));
  /* 10b52f7e push 1 */
  push32((uint32_t)(0x1u));
  /* 10b52f80 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10b52f83 push eax */
  push32((uint32_t)(EAX));
  /* 10b52f84 call dword ptr [0x10b70370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70370))), 0x10b52f8au);
  /* 10b52f8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b52f8c jne 0x10b52f92 */
  if (!C.zf) goto L_10b52f92;
  /* 10b52f8e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b52f90 jmp 0x10b52fb4 */
  goto L_10b52fb4;
L_10b52f92:;
  /* 10b52f92 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b52f95 push ecx */
  push32((uint32_t)(ECX));
  /* 10b52f96 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b52f99 push edx */
  push32((uint32_t)(EDX));
  /* 10b52f9a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b52f9d push eax */
  push32((uint32_t)(EAX));
  /* 10b52f9e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b52fa1 push ecx */
  push32((uint32_t)(ECX));
  /* 10b52fa2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b52fa5 push edx */
  push32((uint32_t)(EDX));
  /* 10b52fa6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b52fa9 push eax */
  push32((uint32_t)(EAX));
  /* 10b52faa call dword ptr [0x10b70260] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70260))), 0x10b52fb0u);
  /* 10b52fb0 jmp 0x10b52fb4 */
  goto L_10b52fb4;
L_10b52fb2:;
  /* 10b52fb2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b52fb4:;
  /* 10b52fb4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 10b52fb7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b52fba mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10b52fc1 pop edi */
  EDI = (pop32());
  /* 10b52fc2 pop esi */
  ESI = (pop32());
  /* 10b52fc3 pop ebx */
  EBX = (pop32());
  /* 10b52fc4 mov esp, ebp */
  ESP = (EBP);
  /* 10b52fc6 pop ebp */
  EBP = (pop32());
  /* 10b52fc7 ret  */
  ESPCHK(0x10b52bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012fd0 @ 0x10b52fd0 (80 bytes, 32 insns) */
void f_10b52fd0(void) {
  FTRACE(0x10b52fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b52fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b52fd1 mov ebp, esp */
  EBP = (ESP);
  /* 10b52fd3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b52fd6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b52fd9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b52fdc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b52fdf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10b52fe2:;
  /* 10b52fe2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b52fe5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b52fe8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b52feb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b52fee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b52ff0 je 0x10b53007 */
  if (C.zf) goto L_10b53007;
  /* 10b52ff2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b52ff5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10b52ff8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b52ffa je 0x10b53007 */
  if (C.zf) goto L_10b53007;
  /* 10b52ffc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b52fff add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b53002 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b53005 jmp 0x10b52fe2 */
  goto L_10b52fe2;
L_10b53007:;
  /* 10b53007 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b5300a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10b5300d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b5300f jne 0x10b53019 */
  if (!C.zf) goto L_10b53019;
  /* 10b53011 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b53014 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b53017 jmp 0x10b5301c */
  goto L_10b5301c;
L_10b53019:;
  /* 10b53019 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10b5301c:;
  /* 10b5301c mov esp, ebp */
  ESP = (EBP);
  /* 10b5301e pop ebp */
  EBP = (pop32());
  /* 10b5301f ret  */
  ESPCHK(0x10b52fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013020 @ 0x10b53020 (736 bytes, 224 insns) */
void f_10b53020(void) {
  FTRACE(0x10b53020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b53020 push ebp */
  push32((uint32_t)(EBP));
  /* 10b53021 mov ebp, esp */
  EBP = (ESP);
  /* 10b53023 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b53026 push esi */
  push32((uint32_t)(ESI));
  /* 10b53027 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b5302b je 0x10b5304c */
  if (C.zf) goto L_10b5304c;
  /* 10b5302d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10b5302f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b53032 push eax */
  push32((uint32_t)(EAX));
  /* 10b53033 call 0x10b53470 */
  push32(0x10b53038u); f_10b53470();
  /* 10b53038 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b5303b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10b5303e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b53042 je 0x10b5304c */
  if (C.zf) goto L_10b5304c;
  /* 10b53044 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b53047 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b5304a jne 0x10b53054 */
  if (!C.zf) goto L_10b53054;
L_10b5304c:;
  /* 10b5304c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b5304f jmp 0x10b532fb */
  goto L_10b532fb;
L_10b53054:;
  /* 10b53054 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b53057 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10b5305b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b5305d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b5305f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10b53060 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10b53063 mov ecx, dword ptr [0x10b6e474] */
  ECX = (r32((uint32_t)(0x10b6e474)));
  /* 10b53069 cmp ecx, dword ptr [0x10b6e478] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10b6e478))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b5306f jne 0x10b53085 */
  if (!C.zf) goto L_10b53085;
  /* 10b53071 mov edx, dword ptr [0x10b6e474] */
  EDX = (r32((uint32_t)(0x10b6e474)));
  /* 10b53077 push edx */
  push32((uint32_t)(EDX));
  /* 10b53078 call 0x10b53380 */
  push32(0x10b5307du); f_10b53380();
  /* 10b5307d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b53080 mov dword ptr [0x10b6e474], eax */
  w32((uint32_t)(0x10b6e474), (EAX));
L_10b53085:;
  /* 10b53085 cmp dword ptr [0x10b6e474], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e474))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b5308c jne 0x10b53145 */
  if (!C.zf) goto L_10b53145;
  /* 10b53092 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b53096 je 0x10b530b7 */
  if (C.zf) goto L_10b530b7;
  /* 10b53098 cmp dword ptr [0x10b6e47c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e47c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b5309f je 0x10b530b7 */
  if (C.zf) goto L_10b530b7;
  /* 10b530a1 call 0x10b52b20 */
  push32(0x10b530a6u); f_10b52b20();
  /* 10b530a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b530a8 je 0x10b530b2 */
  if (C.zf) goto L_10b530b2;
  /* 10b530aa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b530ad jmp 0x10b532fb */
  goto L_10b532fb;
L_10b530b2:;
  /* 10b530b2 jmp 0x10b53145 */
  goto L_10b53145;
L_10b530b7:;
  /* 10b530b7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b530bb je 0x10b530c4 */
  if (C.zf) goto L_10b530c4;
  /* 10b530bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b530bf jmp 0x10b532fb */
  goto L_10b532fb;
L_10b530c4:;
  /* 10b530c4 cmp dword ptr [0x10b6e474], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e474))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b530cb jne 0x10b53104 */
  if (!C.zf) goto L_10b53104;
  /* 10b530cd push 0x87 */
  push32((uint32_t)(0x87u));
  /* 10b530d2 push 0x10b6a990 */
  push32((uint32_t)(0x10b6a990u));
  /* 10b530d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b530d9 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b530db call 0x10b43020 */
  push32(0x10b530e0u); f_10b43020();
  /* 10b530e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b530e3 mov dword ptr [0x10b6e474], eax */
  w32((uint32_t)(0x10b6e474), (EAX));
  /* 10b530e8 cmp dword ptr [0x10b6e474], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e474))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b530ef jne 0x10b530f9 */
  if (!C.zf) goto L_10b530f9;
  /* 10b530f1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b530f4 jmp 0x10b532fb */
  goto L_10b532fb;
L_10b530f9:;
  /* 10b530f9 mov eax, dword ptr [0x10b6e474] */
  EAX = (r32((uint32_t)(0x10b6e474)));
  /* 10b530fe mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10b53104:;
  /* 10b53104 cmp dword ptr [0x10b6e47c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e47c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b5310b jne 0x10b53145 */
  if (!C.zf) goto L_10b53145;
  /* 10b5310d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 10b53112 push 0x10b6a990 */
  push32((uint32_t)(0x10b6a990u));
  /* 10b53117 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b53119 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b5311b call 0x10b43020 */
  push32(0x10b53120u); f_10b43020();
  /* 10b53120 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b53123 mov dword ptr [0x10b6e47c], eax */
  w32((uint32_t)(0x10b6e47c), (EAX));
  /* 10b53128 cmp dword ptr [0x10b6e47c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e47c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b5312f jne 0x10b53139 */
  if (!C.zf) goto L_10b53139;
  /* 10b53131 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b53134 jmp 0x10b532fb */
  goto L_10b532fb;
L_10b53139:;
  /* 10b53139 mov ecx, dword ptr [0x10b6e47c] */
  ECX = (r32((uint32_t)(0x10b6e47c)));
  /* 10b5313f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_10b53145:;
  /* 10b53145 mov edx, dword ptr [0x10b6e474] */
  EDX = (r32((uint32_t)(0x10b6e474)));
  /* 10b5314b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10b5314e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b53151 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b53154 push eax */
  push32((uint32_t)(EAX));
  /* 10b53155 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b53158 push ecx */
  push32((uint32_t)(ECX));
  /* 10b53159 call 0x10b53300 */
  push32(0x10b5315eu); f_10b53300();
  /* 10b5315e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b53161 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b53164 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b53168 jl 0x10b53201 */
  if ((C.sf!=C.of)) goto L_10b53201;
  /* 10b5316e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b53171 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b53174 je 0x10b53201 */
  if (C.zf) goto L_10b53201;
  /* 10b5317a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b5317e je 0x10b531f3 */
  if (C.zf) goto L_10b531f3;
  /* 10b53180 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b53182 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b53185 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b53188 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10b5318b push edx */
  push32((uint32_t)(EDX));
  /* 10b5318c call 0x10b43ab0 */
  push32(0x10b53191u); f_10b43ab0();
  /* 10b53191 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b53194 jmp 0x10b5319f */
  goto L_10b5319f;
L_10b53196:;
  /* 10b53196 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b53199 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b5319c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10b5319f:;
  /* 10b5319f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b531a2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b531a5 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b531a9 je 0x10b531c0 */
  if (C.zf) goto L_10b531c0;
  /* 10b531ab mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b531ae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b531b1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b531b4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10b531b7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 10b531bb mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10b531be jmp 0x10b53196 */
  goto L_10b53196;
L_10b531c0:;
  /* 10b531c0 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 10b531c5 push 0x10b6a990 */
  push32((uint32_t)(0x10b6a990u));
  /* 10b531ca push 2 */
  push32((uint32_t)(0x2u));
  /* 10b531cc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b531cf shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10b531d2 push eax */
  push32((uint32_t)(EAX));
  /* 10b531d3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b531d6 push ecx */
  push32((uint32_t)(ECX));
  /* 10b531d7 call 0x10b434b0 */
  push32(0x10b531dcu); f_10b434b0();
  /* 10b531dc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b531df mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b531e2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b531e6 je 0x10b531f1 */
  if (C.zf) goto L_10b531f1;
  /* 10b531e8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b531eb mov dword ptr [0x10b6e474], edx */
  w32((uint32_t)(0x10b6e474), (EDX));
L_10b531f1:;
  /* 10b531f1 jmp 0x10b531ff */
  goto L_10b531ff;
L_10b531f3:;
  /* 10b531f3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b531f6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b531f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b531fc mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_10b531ff:;
  /* 10b531ff jmp 0x10b53274 */
  goto L_10b53274;
L_10b53201:;
  /* 10b53201 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b53205 jne 0x10b5326d */
  if (!C.zf) goto L_10b5326d;
  /* 10b53207 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b5320b jge 0x10b53215 */
  if ((C.sf==C.of)) goto L_10b53215;
  /* 10b5320d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b53210 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b53212 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10b53215:;
  /* 10b53215 push 0xce */
  push32((uint32_t)(0xceu));
  /* 10b5321a push 0x10b6a990 */
  push32((uint32_t)(0x10b6a990u));
  /* 10b5321f push 2 */
  push32((uint32_t)(0x2u));
  /* 10b53221 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b53224 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 10b5322b push edx */
  push32((uint32_t)(EDX));
  /* 10b5322c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b5322f push eax */
  push32((uint32_t)(EAX));
  /* 10b53230 call 0x10b434b0 */
  push32(0x10b53235u); f_10b434b0();
  /* 10b53235 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b53238 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b5323b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b5323f jne 0x10b53249 */
  if (!C.zf) goto L_10b53249;
  /* 10b53241 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b53244 jmp 0x10b532fb */
  goto L_10b532fb;
L_10b53249:;
  /* 10b53249 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b5324c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b5324f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b53252 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 10b53255 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b53258 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b5325b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 10b53263 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b53266 mov dword ptr [0x10b6e474], eax */
  w32((uint32_t)(0x10b6e474), (EAX));
  /* 10b5326b jmp 0x10b53274 */
  goto L_10b53274;
L_10b5326d:;
  /* 10b5326d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b5326f jmp 0x10b532fb */
  goto L_10b532fb;
L_10b53274:;
  /* 10b53274 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b53278 je 0x10b532f9 */
  if (C.zf) goto L_10b532f9;
  /* 10b5327a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 10b5327f push 0x10b6a990 */
  push32((uint32_t)(0x10b6a990u));
  /* 10b53284 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b53286 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b53289 push ecx */
  push32((uint32_t)(ECX));
  /* 10b5328a call 0x10b45e50 */
  push32(0x10b5328fu); f_10b45e50();
  /* 10b5328f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b53292 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b53295 push eax */
  push32((uint32_t)(EAX));
  /* 10b53296 call 0x10b43020 */
  push32(0x10b5329bu); f_10b43020();
  /* 10b5329b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b5329e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10b532a1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b532a5 je 0x10b532f9 */
  if (C.zf) goto L_10b532f9;
  /* 10b532a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b532aa push edx */
  push32((uint32_t)(EDX));
  /* 10b532ab mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b532ae push eax */
  push32((uint32_t)(EAX));
  /* 10b532af call 0x10b45fd0 */
  push32(0x10b532b4u); f_10b45fd0();
  /* 10b532b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b532b7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b532ba sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b532bd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b532c0 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b532c2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b532c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b532c8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10b532cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b532ce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b532d1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b532d4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b532d7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b532d9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b532db not edx */
  EDX = (~(EDX));
  /* 10b532dd and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10b532e0 push edx */
  push32((uint32_t)(EDX));
  /* 10b532e1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b532e4 push eax */
  push32((uint32_t)(EAX));
  /* 10b532e5 call dword ptr [0x10b7025c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b7025c))), 0x10b532ebu);
  /* 10b532eb push 2 */
  push32((uint32_t)(0x2u));
  /* 10b532ed mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b532f0 push ecx */
  push32((uint32_t)(ECX));
  /* 10b532f1 call 0x10b43ab0 */
  push32(0x10b532f6u); f_10b43ab0();
  /* 10b532f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b532f9:;
  /* 10b532f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b532fb:;
  /* 10b532fb pop esi */
  ESI = (pop32());
  /* 10b532fc mov esp, ebp */
  ESP = (EBP);
  /* 10b532fe pop ebp */
  EBP = (pop32());
  /* 10b532ff ret  */
  ESPCHK(0x10b53020u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x10b53300 (124 bytes, 47 insns) */
void f_10b53300(void) {
  FTRACE(0x10b53300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b53300 push ebp */
  push32((uint32_t)(EBP));
  /* 10b53301 mov ebp, esp */
  EBP = (ESP);
  /* 10b53303 push ecx */
  push32((uint32_t)(ECX));
  /* 10b53304 mov eax, dword ptr [0x10b6e474] */
  EAX = (r32((uint32_t)(0x10b6e474)));
  /* 10b53309 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b5330c jmp 0x10b53317 */
  goto L_10b53317;
L_10b5330e:;
  /* 10b5330e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b53311 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b53314 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10b53317:;
  /* 10b53317 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b5331a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b5331d je 0x10b5336a */
  if (C.zf) goto L_10b5336a;
  /* 10b5331f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b53322 push eax */
  push32((uint32_t)(EAX));
  /* 10b53323 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b53326 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b53328 push edx */
  push32((uint32_t)(EDX));
  /* 10b53329 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b5332c push eax */
  push32((uint32_t)(EAX));
  /* 10b5332d call 0x10b52ad0 */
  push32(0x10b53332u); f_10b52ad0();
  /* 10b53332 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b53335 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b53337 jne 0x10b53368 */
  if (!C.zf) goto L_10b53368;
  /* 10b53339 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b5333c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b5333e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b53341 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 10b53345 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b53348 je 0x10b5335a */
  if (C.zf) goto L_10b5335a;
  /* 10b5334a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b5334d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b5334f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b53352 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 10b53356 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b53358 jne 0x10b53368 */
  if (!C.zf) goto L_10b53368;
L_10b5335a:;
  /* 10b5335a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b5335d sub eax, dword ptr [0x10b6e474] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10b6e474))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b53363 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10b53366 jmp 0x10b53378 */
  goto L_10b53378;
L_10b53368:;
  /* 10b53368 jmp 0x10b5330e */
  goto L_10b5330e;
L_10b5336a:;
  /* 10b5336a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b5336d sub eax, dword ptr [0x10b6e474] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10b6e474))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b53373 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10b53376 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_10b53378:;
  /* 10b53378 mov esp, ebp */
  ESP = (EBP);
  /* 10b5337a pop ebp */
  EBP = (pop32());
  /* 10b5337b ret  */
  ESPCHK(0x10b53300u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x10b53380 (238 bytes, 80 insns) */
void f_10b53380(void) {
  FTRACE(0x10b53380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b53380 push ebp */
  push32((uint32_t)(EBP));
  /* 10b53381 mov ebp, esp */
  EBP = (ESP);
  /* 10b53383 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b53386 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10b5338d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b53390 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b53393 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b53397 jne 0x10b533a0 */
  if (!C.zf) goto L_10b533a0;
  /* 10b53399 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b5339b jmp 0x10b5346a */
  goto L_10b5346a;
L_10b533a0:;
  /* 10b533a0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b533a3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b533a5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b533a8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b533ab mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b533ae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b533b0 je 0x10b533bd */
  if (C.zf) goto L_10b533bd;
  /* 10b533b2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b533b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b533b8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10b533bb jmp 0x10b533a0 */
  goto L_10b533a0;
L_10b533bd:;
  /* 10b533bd push 0x146 */
  push32((uint32_t)(0x146u));
  /* 10b533c2 push 0x10b6a990 */
  push32((uint32_t)(0x10b6a990u));
  /* 10b533c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b533c9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b533cc lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 10b533d3 push eax */
  push32((uint32_t)(EAX));
  /* 10b533d4 call 0x10b43020 */
  push32(0x10b533d9u); f_10b43020();
  /* 10b533d9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b533dc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b533df mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b533e2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b533e5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b533e9 jne 0x10b533f5 */
  if (!C.zf) goto L_10b533f5;
  /* 10b533eb push 9 */
  push32((uint32_t)(0x9u));
  /* 10b533ed call 0x10b41f90 */
  push32(0x10b533f2u); f_10b41f90();
  /* 10b533f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b533f5:;
  /* 10b533f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b533f8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10b533fb:;
  /* 10b533fb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b533fe cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b53401 je 0x10b5345e */
  if (C.zf) goto L_10b5345e;
  /* 10b53403 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 10b53408 push 0x10b6a990 */
  push32((uint32_t)(0x10b6a990u));
  /* 10b5340d push 2 */
  push32((uint32_t)(0x2u));
  /* 10b5340f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b53412 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b53414 push edx */
  push32((uint32_t)(EDX));
  /* 10b53415 call 0x10b45e50 */
  push32(0x10b5341au); f_10b45e50();
  /* 10b5341a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b5341d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b53420 push eax */
  push32((uint32_t)(EAX));
  /* 10b53421 call 0x10b43020 */
  push32(0x10b53426u); f_10b43020();
  /* 10b53426 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b53429 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b5342c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10b5342e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b53431 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b53434 je 0x10b5344a */
  if (C.zf) goto L_10b5344a;
  /* 10b53436 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b53439 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b5343b push ecx */
  push32((uint32_t)(ECX));
  /* 10b5343c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b5343f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b53441 push eax */
  push32((uint32_t)(EAX));
  /* 10b53442 call 0x10b45fd0 */
  push32(0x10b53447u); f_10b45fd0();
  /* 10b53447 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b5344a:;
  /* 10b5344a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b5344d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b53450 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b53453 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b53456 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b53459 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10b5345c jmp 0x10b533fb */
  goto L_10b533fb;
L_10b5345e:;
  /* 10b5345e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b53461 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10b53467 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10b5346a:;
  /* 10b5346a mov esp, ebp */
  ESP = (EBP);
  /* 10b5346c pop ebp */
  EBP = (pop32());
  /* 10b5346d ret  */
  ESPCHK(0x10b53380u, _esp0);
  ESP += 4; return;
}

/* FUN_10013470 @ 0x10b53470 (237 bytes, 81 insns) */
void f_10b53470(void) {
  FTRACE(0x10b53470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b53470 push ebp */
  push32((uint32_t)(EBP));
  /* 10b53471 mov ebp, esp */
  EBP = (ESP);
  /* 10b53473 push ecx */
  push32((uint32_t)(ECX));
  /* 10b53474 cmp dword ptr [0x10b6fbcc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6fbcc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b5347b jne 0x10b53492 */
  if (!C.zf) goto L_10b53492;
  /* 10b5347d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b53480 push eax */
  push32((uint32_t)(EAX));
  /* 10b53481 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b53484 push ecx */
  push32((uint32_t)(ECX));
  /* 10b53485 call 0x10b53570 */
  push32(0x10b5348au); f_10b53570();
  /* 10b5348a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b5348d jmp 0x10b53559 */
  goto L_10b53559;
L_10b53492:;
  /* 10b53492 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10b53494 call 0x10b46a20 */
  push32(0x10b53499u); f_10b46a20();
  /* 10b53499 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b5349c jmp 0x10b534a7 */
  goto L_10b534a7;
L_10b5349e:;
  /* 10b5349e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b534a1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b534a4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10b534a7:;
  /* 10b534a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b534aa movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 10b534ae mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 10b534b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b534b5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b534bb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b534bd je 0x10b5353b */
  if (C.zf) goto L_10b5353b;
  /* 10b534bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b534c2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b534c7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b534c9 mov cl, byte ptr [eax + 0x10b6fce1] */
  CL = (r8((uint32_t)(EAX + 0x10b6fce1)));
  /* 10b534cf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10b534d2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b534d4 je 0x10b53526 */
  if (C.zf) goto L_10b53526;
  /* 10b534d6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b534d9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b534dc mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10b534df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b534e2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b534e4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10b534e6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b534e8 jne 0x10b534f8 */
  if (!C.zf) goto L_10b534f8;
  /* 10b534ea push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10b534ec call 0x10b46ac0 */
  push32(0x10b534f1u); f_10b46ac0();
  /* 10b534f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b534f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b534f6 jmp 0x10b53559 */
  goto L_10b53559;
L_10b534f8:;
  /* 10b534f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b534fb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b53501 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10b53504 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b53507 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b53509 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10b5350b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10b5350d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b53510 jne 0x10b53524 */
  if (!C.zf) goto L_10b53524;
  /* 10b53512 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10b53514 call 0x10b46ac0 */
  push32(0x10b53519u); f_10b46ac0();
  /* 10b53519 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b5351c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b5351f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b53522 jmp 0x10b53559 */
  goto L_10b53559;
L_10b53524:;
  /* 10b53524 jmp 0x10b53536 */
  goto L_10b53536;
L_10b53526:;
  /* 10b53526 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b53529 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b5352f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b53532 jne 0x10b53536 */
  if (!C.zf) goto L_10b53536;
  /* 10b53534 jmp 0x10b5353b */
  goto L_10b5353b;
L_10b53536:;
  /* 10b53536 jmp 0x10b5349e */
  goto L_10b5349e;
L_10b5353b:;
  /* 10b5353b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10b5353d call 0x10b46ac0 */
  push32(0x10b53542u); f_10b46ac0();
  /* 10b53542 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b53545 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b53548 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b5354d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b53550 jne 0x10b53557 */
  if (!C.zf) goto L_10b53557;
  /* 10b53552 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b53555 jmp 0x10b53559 */
  goto L_10b53559;
L_10b53557:;
  /* 10b53557 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b53559:;
  /* 10b53559 mov esp, ebp */
  ESP = (EBP);
  /* 10b5355b pop ebp */
  EBP = (pop32());
  /* 10b5355c ret  */
  ESPCHK(0x10b53470u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x10b53570 (193 bytes, 87 insns) */
void f_10b53570(void) {
  FTRACE(0x10b53570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b53570 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b53572 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10b53576 push ebx */
  push32((uint32_t)(EBX));
  /* 10b53577 mov ebx, eax */
  EBX = (EAX);
  /* 10b53579 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10b5357c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10b53580 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10b53586 je 0x10b5359b */
  if (C.zf) goto L_10b5359b;
L_10b53588:;
  /* 10b53588 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 10b5358a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10b5358b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b5358d je 0x10b53560 */
  if (C.zf) { jmp_ind(0x10b53560u); return; }
  /* 10b5358f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10b53591 je 0x10b535e4 */
  if (C.zf) goto L_10b535e4;
  /* 10b53593 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10b53599 jne 0x10b53588 */
  if (!C.zf) goto L_10b53588;
L_10b5359b:;
  /* 10b5359b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 10b5359d push edi */
  push32((uint32_t)(EDI));
  /* 10b5359e mov eax, ebx */
  EAX = (EBX);
  /* 10b535a0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 10b535a3 push esi */
  push32((uint32_t)(ESI));
  /* 10b535a4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_10b535a6:;
  /* 10b535a6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10b535a8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 10b535ad mov eax, ecx */
  EAX = (ECX);
  /* 10b535af mov esi, edi */
  ESI = (EDI);
  /* 10b535b1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 10b535b3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b535b5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b535b7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10b535ba xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b535bd xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10b535bf xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10b535c1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b535c4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 10b535ca jne 0x10b535e8 */
  if (!C.zf) goto L_10b535e8;
  /* 10b535cc and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10b535d1 je 0x10b535a6 */
  if (C.zf) goto L_10b535a6;
  /* 10b535d3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10b535d8 jne 0x10b535e2 */
  if (!C.zf) goto L_10b535e2;
  /* 10b535da and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 10b535e0 jne 0x10b535a6 */
  if (!C.zf) goto L_10b535a6;
L_10b535e2:;
  /* 10b535e2 pop esi */
  ESI = (pop32());
  /* 10b535e3 pop edi */
  EDI = (pop32());
L_10b535e4:;
  /* 10b535e4 pop ebx */
  EBX = (pop32());
  /* 10b535e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b535e7 ret  */
  ESPCHK(0x10b53570u, _esp0);
  ESP += 4; return;
L_10b535e8:;
  /* 10b535e8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10b535eb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b535ed je 0x10b53625 */
  if (C.zf) goto L_10b53625;
  /* 10b535ef test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b535f1 je 0x10b535e2 */
  if (C.zf) goto L_10b535e2;
  /* 10b535f3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b535f5 je 0x10b5361e */
  if (C.zf) goto L_10b5361e;
  /* 10b535f7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10b535f9 je 0x10b535e2 */
  if (C.zf) goto L_10b535e2;
  /* 10b535fb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10b535fe cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b53600 je 0x10b53617 */
  if (C.zf) goto L_10b53617;
  /* 10b53602 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b53604 je 0x10b535e2 */
  if (C.zf) goto L_10b535e2;
  /* 10b53606 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b53608 je 0x10b53610 */
  if (C.zf) goto L_10b53610;
  /* 10b5360a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10b5360c je 0x10b535e2 */
  if (C.zf) goto L_10b535e2;
  /* 10b5360e jmp 0x10b535a6 */
  goto L_10b535a6;
L_10b53610:;
  /* 10b53610 pop esi */
  ESI = (pop32());
  /* 10b53611 pop edi */
  EDI = (pop32());
  /* 10b53612 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 10b53615 pop ebx */
  EBX = (pop32());
  /* 10b53616 ret  */
  ESPCHK(0x10b53570u, _esp0);
  ESP += 4; return;
L_10b53617:;
  /* 10b53617 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 10b5361a pop esi */
  ESI = (pop32());
  /* 10b5361b pop edi */
  EDI = (pop32());
  /* 10b5361c pop ebx */
  EBX = (pop32());
  /* 10b5361d ret  */
  ESPCHK(0x10b53570u, _esp0);
  ESP += 4; return;
L_10b5361e:;
  /* 10b5361e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 10b53621 pop esi */
  ESI = (pop32());
  /* 10b53622 pop edi */
  EDI = (pop32());
  /* 10b53623 pop ebx */
  EBX = (pop32());
  /* 10b53624 ret  */
  ESPCHK(0x10b53570u, _esp0);
  ESP += 4; return;
L_10b53625:;
  /* 10b53625 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 10b53628 pop esi */
  ESI = (pop32());
  /* 10b53629 pop edi */
  EDI = (pop32());
  /* 10b5362a pop ebx */
  EBX = (pop32());
  /* 10b5362b ret  */
  ESPCHK(0x10b53570u, _esp0);
  ESP += 4; return;
  /* 10b5362c jmp dword ptr [0x10b702ac] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10b702ac)))); return;
}

/* RtlUnwind @ 0x10b5377c (6 bytes, 1 insns) */
void f_10b5377c(void) {
  FTRACE(0x10b5377cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b5377c jmp dword ptr [0x10b70298] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10b70298)))); return;
}

