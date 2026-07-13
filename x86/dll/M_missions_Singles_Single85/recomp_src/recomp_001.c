#include "recomp.h"

/* FUN_1000e0c0 @ 0x11e4e0c0 (10 bytes, 5 insns) */
void f_11e4e0c0(void) {
  FTRACE(0x11e4e0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e4e0c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e4e0c1 mov ebp, esp */
  EBP = (ESP);
  /* 11e4e0c3 mov eax, dword ptr [0x11e76b98] */
  EAX = (r32((uint32_t)(0x11e76b98)));
  /* 11e4e0c8 pop ebp */
  EBP = (pop32());
  /* 11e4e0c9 ret  */
  ESPCHK(0x11e4e0c0u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x11e4e0d0 (45 bytes, 19 insns) */
void f_11e4e0d0(void) {
  FTRACE(0x11e4e0d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e4e0d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e4e0d1 mov ebp, esp */
  EBP = (ESP);
  /* 11e4e0d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e4e0d4 mov eax, dword ptr [0x11e76b98] */
  EAX = (r32((uint32_t)(0x11e76b98)));
  /* 11e4e0d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e4e0dc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4e0e0 je 0x11e4e0f0 */
  if (C.zf) goto L_11e4e0f0;
  /* 11e4e0e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4e0e5 push ecx */
  push32((uint32_t)(ECX));
  /* 11e4e0e6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11e4e0e9u);
  /* 11e4e0e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4e0ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e4e0ee jne 0x11e4e0f4 */
  if (!C.zf) goto L_11e4e0f4;
L_11e4e0f0:;
  /* 11e4e0f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e4e0f2 jmp 0x11e4e0f9 */
  goto L_11e4e0f9;
L_11e4e0f4:;
  /* 11e4e0f4 mov eax, 1 */
  EAX = (0x1u);
L_11e4e0f9:;
  /* 11e4e0f9 mov esp, ebp */
  ESP = (EBP);
  /* 11e4e0fb pop ebp */
  EBP = (pop32());
  /* 11e4e0fc ret  */
  ESPCHK(0x11e4e0d0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x11e4e100 (88 bytes, 40 insns) */
void f_11e4e100(void) {
  FTRACE(0x11e4e100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e4e100 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11e4e104 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11e4e108 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e4e10a je 0x11e4e153 */
  if (C.zf) goto L_11e4e153;
  /* 11e4e10c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e4e10e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11e4e112 push edi */
  push32((uint32_t)(EDI));
  /* 11e4e113 mov edi, ecx */
  EDI = (ECX);
  /* 11e4e115 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4e118 jb 0x11e4e147 */
  if (C.cf) goto L_11e4e147;
  /* 11e4e11a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e4e11c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11e4e11f je 0x11e4e129 */
  if (C.zf) goto L_11e4e129;
  /* 11e4e121 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11e4e123:;
  /* 11e4e123 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11e4e125 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11e4e126 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11e4e127 jne 0x11e4e123 */
  if (!C.zf) goto L_11e4e123;
L_11e4e129:;
  /* 11e4e129 mov ecx, eax */
  ECX = (EAX);
  /* 11e4e12b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11e4e12e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4e130 mov ecx, eax */
  ECX = (EAX);
  /* 11e4e132 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11e4e135 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4e137 mov ecx, edx */
  ECX = (EDX);
  /* 11e4e139 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11e4e13c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e4e13f je 0x11e4e147 */
  if (C.zf) goto L_11e4e147;
  /* 11e4e141 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11e4e143 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e4e145 je 0x11e4e14d */
  if (C.zf) goto L_11e4e14d;
L_11e4e147:;
  /* 11e4e147 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11e4e149 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11e4e14a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11e4e14b jne 0x11e4e147 */
  if (!C.zf) goto L_11e4e147;
L_11e4e14d:;
  /* 11e4e14d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11e4e151 pop edi */
  EDI = (pop32());
  /* 11e4e152 ret  */
  ESPCHK(0x11e4e100u, _esp0);
  ESP += 4; return;
L_11e4e153:;
  /* 11e4e153 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11e4e157 ret  */
  ESPCHK(0x11e4e100u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e160 @ 0x11e4e160 (23 bytes, 10 insns) */
void f_11e4e160(void) {
  FTRACE(0x11e4e160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e4e160 push ebp */
  push32((uint32_t)(EBP));
  /* 11e4e161 mov ebp, esp */
  EBP = (ESP);
  /* 11e4e163 mov eax, dword ptr [0x11e76b94] */
  EAX = (r32((uint32_t)(0x11e76b94)));
  /* 11e4e168 push eax */
  push32((uint32_t)(EAX));
  /* 11e4e169 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4e16c push ecx */
  push32((uint32_t)(ECX));
  /* 11e4e16d call 0x11e4e180 */
  push32(0x11e4e172u); f_11e4e180();
  /* 11e4e172 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4e175 pop ebp */
  EBP = (pop32());
  /* 11e4e176 ret  */
  ESPCHK(0x11e4e160u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x11e4e180 (87 bytes, 34 insns) */
void f_11e4e180(void) {
  FTRACE(0x11e4e180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e4e180 push ebp */
  push32((uint32_t)(EBP));
  /* 11e4e181 mov ebp, esp */
  EBP = (ESP);
  /* 11e4e183 push ecx */
  push32((uint32_t)(ECX));
  /* 11e4e184 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4e188 jbe 0x11e4e18e */
  if ((C.cf||C.zf)) goto L_11e4e18e;
  /* 11e4e18a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e4e18c jmp 0x11e4e1d3 */
  goto L_11e4e1d3;
L_11e4e18e:;
  /* 11e4e18e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4e192 ja 0x11e4e1a5 */
  if ((!C.cf&&!C.zf)) goto L_11e4e1a5;
  /* 11e4e194 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4e197 push eax */
  push32((uint32_t)(EAX));
  /* 11e4e198 call 0x11e4e1e0 */
  push32(0x11e4e19du); f_11e4e1e0();
  /* 11e4e19d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4e1a0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e4e1a3 jmp 0x11e4e1ac */
  goto L_11e4e1ac;
L_11e4e1a5:;
  /* 11e4e1a5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11e4e1ac:;
  /* 11e4e1ac cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4e1b0 jne 0x11e4e1b8 */
  if (!C.zf) goto L_11e4e1b8;
  /* 11e4e1b2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4e1b6 jne 0x11e4e1bd */
  if (!C.zf) goto L_11e4e1bd;
L_11e4e1b8:;
  /* 11e4e1b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4e1bb jmp 0x11e4e1d3 */
  goto L_11e4e1d3;
L_11e4e1bd:;
  /* 11e4e1bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4e1c0 push ecx */
  push32((uint32_t)(ECX));
  /* 11e4e1c1 call 0x11e4e0d0 */
  push32(0x11e4e1c6u); f_11e4e0d0();
  /* 11e4e1c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4e1c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e4e1cb jne 0x11e4e1d1 */
  if (!C.zf) goto L_11e4e1d1;
  /* 11e4e1cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e4e1cf jmp 0x11e4e1d3 */
  goto L_11e4e1d3;
L_11e4e1d1:;
  /* 11e4e1d1 jmp 0x11e4e18e */
  goto L_11e4e18e;
L_11e4e1d3:;
  /* 11e4e1d3 mov esp, ebp */
  ESP = (EBP);
  /* 11e4e1d5 pop ebp */
  EBP = (pop32());
  /* 11e4e1d6 ret  */
  ESPCHK(0x11e4e180u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e1e0 @ 0x11e4e1e0 (109 bytes, 37 insns) */
void f_11e4e1e0(void) {
  FTRACE(0x11e4e1e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e4e1e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e4e1e1 mov ebp, esp */
  EBP = (ESP);
  /* 11e4e1e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e4e1e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4e1e7 cmp eax, dword ptr [0x11e74db4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11e74db4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4e1ed ja 0x11e4e21d */
  if ((!C.cf&&!C.zf)) goto L_11e4e21d;
  /* 11e4e1ef push 9 */
  push32((uint32_t)(0x9u));
  /* 11e4e1f1 call 0x11e4c670 */
  push32(0x11e4e1f6u); f_11e4c670();
  /* 11e4e1f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4e1f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4e1fc push ecx */
  push32((uint32_t)(ECX));
  /* 11e4e1fd call 0x11e4ed20 */
  push32(0x11e4e202u); f_11e4ed20();
  /* 11e4e202 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4e205 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e4e208 push 9 */
  push32((uint32_t)(0x9u));
  /* 11e4e20a call 0x11e4c710 */
  push32(0x11e4e20fu); f_11e4c710();
  /* 11e4e20f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4e212 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4e216 je 0x11e4e21d */
  if (C.zf) goto L_11e4e21d;
  /* 11e4e218 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4e21b jmp 0x11e4e249 */
  goto L_11e4e249;
L_11e4e21d:;
  /* 11e4e21d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4e221 jne 0x11e4e22a */
  if (!C.zf) goto L_11e4e22a;
  /* 11e4e223 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_11e4e22a:;
  /* 11e4e22a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4e22d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4e230 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11e4e233 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11e4e236 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4e239 push eax */
  push32((uint32_t)(EAX));
  /* 11e4e23a push 0 */
  push32((uint32_t)(0x0u));
  /* 11e4e23c mov ecx, dword ptr [0x11e7828c] */
  ECX = (r32((uint32_t)(0x11e7828c)));
  /* 11e4e242 push ecx */
  push32((uint32_t)(ECX));
  /* 11e4e243 call dword ptr [0x11e79344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e79344))), 0x11e4e249u);
L_11e4e249:;
  /* 11e4e249 mov esp, ebp */
  ESP = (EBP);
  /* 11e4e24b pop ebp */
  EBP = (pop32());
  /* 11e4e24c ret  */
  ESPCHK(0x11e4e1e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e250 @ 0x11e4e250 (10 bytes, 5 insns) */
void f_11e4e250(void) {
  FTRACE(0x11e4e250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e4e250 push ebp */
  push32((uint32_t)(EBP));
  /* 11e4e251 mov ebp, esp */
  EBP = (ESP);
  /* 11e4e253 mov eax, 1 */
  EAX = (0x1u);
  /* 11e4e258 pop ebp */
  EBP = (pop32());
  /* 11e4e259 ret  */
  ESPCHK(0x11e4e250u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e260 @ 0x11e4e260 (173 bytes, 59 insns) */
void f_11e4e260(void) {
  FTRACE(0x11e4e260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e4e260 push ebp */
  push32((uint32_t)(EBP));
  /* 11e4e261 mov ebp, esp */
  EBP = (ESP);
  /* 11e4e263 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4e266 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4e26a jbe 0x11e4e273 */
  if ((C.cf||C.zf)) goto L_11e4e273;
  /* 11e4e26c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e4e26e jmp 0x11e4e309 */
  goto L_11e4e309;
L_11e4e273:;
  /* 11e4e273 push 9 */
  push32((uint32_t)(0x9u));
  /* 11e4e275 call 0x11e4c670 */
  push32(0x11e4e27au); f_11e4c670();
  /* 11e4e27a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4e27d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4e280 push eax */
  push32((uint32_t)(EAX));
  /* 11e4e281 call 0x11e4e690 */
  push32(0x11e4e286u); f_11e4e690();
  /* 11e4e286 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4e289 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e4e28c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4e290 je 0x11e4e2d1 */
  if (C.zf) goto L_11e4e2d1;
  /* 11e4e292 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e4e299 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e4e29c cmp ecx, dword ptr [0x11e74db4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11e74db4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4e2a2 ja 0x11e4e2c2 */
  if ((!C.cf&&!C.zf)) goto L_11e4e2c2;
  /* 11e4e2a4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e4e2a7 push edx */
  push32((uint32_t)(EDX));
  /* 11e4e2a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4e2ab push eax */
  push32((uint32_t)(EAX));
  /* 11e4e2ac mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e4e2af push ecx */
  push32((uint32_t)(ECX));
  /* 11e4e2b0 call 0x11e4f560 */
  push32(0x11e4e2b5u); f_11e4f560();
  /* 11e4e2b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4e2b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e4e2ba je 0x11e4e2c2 */
  if (C.zf) goto L_11e4e2c2;
  /* 11e4e2bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4e2bf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11e4e2c2:;
  /* 11e4e2c2 push 9 */
  push32((uint32_t)(0x9u));
  /* 11e4e2c4 call 0x11e4c710 */
  push32(0x11e4e2c9u); f_11e4c710();
  /* 11e4e2c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4e2cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4e2cf jmp 0x11e4e309 */
  goto L_11e4e309;
L_11e4e2d1:;
  /* 11e4e2d1 push 9 */
  push32((uint32_t)(0x9u));
  /* 11e4e2d3 call 0x11e4c710 */
  push32(0x11e4e2d8u); f_11e4c710();
  /* 11e4e2d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4e2db cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4e2df jne 0x11e4e2e8 */
  if (!C.zf) goto L_11e4e2e8;
  /* 11e4e2e1 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11e4e2e8:;
  /* 11e4e2e8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e4e2eb add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4e2ee and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 11e4e2f0 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11e4e2f3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e4e2f6 push ecx */
  push32((uint32_t)(ECX));
  /* 11e4e2f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4e2fa push edx */
  push32((uint32_t)(EDX));
  /* 11e4e2fb push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11e4e2fd mov eax, dword ptr [0x11e7828c] */
  EAX = (r32((uint32_t)(0x11e7828c)));
  /* 11e4e302 push eax */
  push32((uint32_t)(EAX));
  /* 11e4e303 call dword ptr [0x11e79334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e79334))), 0x11e4e309u);
L_11e4e309:;
  /* 11e4e309 mov esp, ebp */
  ESP = (EBP);
  /* 11e4e30b pop ebp */
  EBP = (pop32());
  /* 11e4e30c ret  */
  ESPCHK(0x11e4e260u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e310 @ 0x11e4e310 (490 bytes, 165 insns) */
void f_11e4e310(void) {
  FTRACE(0x11e4e310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e4e310 push ebp */
  push32((uint32_t)(EBP));
  /* 11e4e311 mov ebp, esp */
  EBP = (ESP);
  /* 11e4e313 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4e316 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4e31a jne 0x11e4e32d */
  if (!C.zf) goto L_11e4e32d;
  /* 11e4e31c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e4e31f push eax */
  push32((uint32_t)(EAX));
  /* 11e4e320 call 0x11e4e160 */
  push32(0x11e4e325u); f_11e4e160();
  /* 11e4e325 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4e328 jmp 0x11e4e4f6 */
  goto L_11e4e4f6;
L_11e4e32d:;
  /* 11e4e32d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4e331 jne 0x11e4e346 */
  if (!C.zf) goto L_11e4e346;
  /* 11e4e333 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4e336 push ecx */
  push32((uint32_t)(ECX));
  /* 11e4e337 call 0x11e4e500 */
  push32(0x11e4e33cu); f_11e4e500();
  /* 11e4e33c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4e33f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e4e341 jmp 0x11e4e4f6 */
  goto L_11e4e4f6;
L_11e4e346:;
  /* 11e4e346 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11e4e34d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4e351 ja 0x11e4e4c9 */
  if ((!C.cf&&!C.zf)) goto L_11e4e4c9;
  /* 11e4e357 push 9 */
  push32((uint32_t)(0x9u));
  /* 11e4e359 call 0x11e4c670 */
  push32(0x11e4e35eu); f_11e4c670();
  /* 11e4e35e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4e361 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4e364 push edx */
  push32((uint32_t)(EDX));
  /* 11e4e365 call 0x11e4e690 */
  push32(0x11e4e36au); f_11e4e690();
  /* 11e4e36a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4e36d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e4e370 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4e374 je 0x11e4e48c */
  if (C.zf) goto L_11e4e48c;
  /* 11e4e37a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e4e37d cmp eax, dword ptr [0x11e74db4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11e74db4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4e383 ja 0x11e4e400 */
  if ((!C.cf&&!C.zf)) goto L_11e4e400;
  /* 11e4e385 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e4e388 push ecx */
  push32((uint32_t)(ECX));
  /* 11e4e389 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4e38c push edx */
  push32((uint32_t)(EDX));
  /* 11e4e38d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e4e390 push eax */
  push32((uint32_t)(EAX));
  /* 11e4e391 call 0x11e4f560 */
  push32(0x11e4e396u); f_11e4f560();
  /* 11e4e396 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4e399 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e4e39b je 0x11e4e3a5 */
  if (C.zf) goto L_11e4e3a5;
  /* 11e4e39d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4e3a0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e4e3a3 jmp 0x11e4e400 */
  goto L_11e4e400;
L_11e4e3a5:;
  /* 11e4e3a5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e4e3a8 push edx */
  push32((uint32_t)(EDX));
  /* 11e4e3a9 call 0x11e4ed20 */
  push32(0x11e4e3aeu); f_11e4ed20();
  /* 11e4e3ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4e3b1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e4e3b4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4e3b8 je 0x11e4e400 */
  if (C.zf) goto L_11e4e400;
  /* 11e4e3ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4e3bd mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 11e4e3c0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4e3c3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e4e3c6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4e3c9 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4e3cc jae 0x11e4e3d6 */
  if (!C.cf) goto L_11e4e3d6;
  /* 11e4e3ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4e3d1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11e4e3d4 jmp 0x11e4e3dc */
  goto L_11e4e3dc;
L_11e4e3d6:;
  /* 11e4e3d6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e4e3d9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11e4e3dc:;
  /* 11e4e3dc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e4e3df push edx */
  push32((uint32_t)(EDX));
  /* 11e4e3e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4e3e3 push eax */
  push32((uint32_t)(EAX));
  /* 11e4e3e4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e4e3e7 push ecx */
  push32((uint32_t)(ECX));
  /* 11e4e3e8 call 0x11e50c70 */
  push32(0x11e4e3edu); f_11e50c70();
  /* 11e4e3ed add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4e3f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4e3f3 push edx */
  push32((uint32_t)(EDX));
  /* 11e4e3f4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e4e3f7 push eax */
  push32((uint32_t)(EAX));
  /* 11e4e3f8 call 0x11e4e750 */
  push32(0x11e4e3fdu); f_11e4e750();
  /* 11e4e3fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e4e400:;
  /* 11e4e400 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4e404 jne 0x11e4e480 */
  if (!C.zf) goto L_11e4e480;
  /* 11e4e406 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4e40a jne 0x11e4e413 */
  if (!C.zf) goto L_11e4e413;
  /* 11e4e40c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11e4e413:;
  /* 11e4e413 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e4e416 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4e419 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 11e4e41c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11e4e41f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e4e422 push edx */
  push32((uint32_t)(EDX));
  /* 11e4e423 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e4e425 mov eax, dword ptr [0x11e7828c] */
  EAX = (r32((uint32_t)(0x11e7828c)));
  /* 11e4e42a push eax */
  push32((uint32_t)(EAX));
  /* 11e4e42b call dword ptr [0x11e79344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e79344))), 0x11e4e431u);
  /* 11e4e431 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e4e434 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4e438 je 0x11e4e480 */
  if (C.zf) goto L_11e4e480;
  /* 11e4e43a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4e43d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11e4e440 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4e443 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e4e446 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4e449 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4e44c jae 0x11e4e456 */
  if (!C.cf) goto L_11e4e456;
  /* 11e4e44e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4e451 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11e4e454 jmp 0x11e4e45c */
  goto L_11e4e45c;
L_11e4e456:;
  /* 11e4e456 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e4e459 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11e4e45c:;
  /* 11e4e45c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e4e45f push eax */
  push32((uint32_t)(EAX));
  /* 11e4e460 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4e463 push ecx */
  push32((uint32_t)(ECX));
  /* 11e4e464 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e4e467 push edx */
  push32((uint32_t)(EDX));
  /* 11e4e468 call 0x11e50c70 */
  push32(0x11e4e46du); f_11e50c70();
  /* 11e4e46d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4e470 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4e473 push eax */
  push32((uint32_t)(EAX));
  /* 11e4e474 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e4e477 push ecx */
  push32((uint32_t)(ECX));
  /* 11e4e478 call 0x11e4e750 */
  push32(0x11e4e47du); f_11e4e750();
  /* 11e4e47d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e4e480:;
  /* 11e4e480 push 9 */
  push32((uint32_t)(0x9u));
  /* 11e4e482 call 0x11e4c710 */
  push32(0x11e4e487u); f_11e4c710();
  /* 11e4e487 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4e48a jmp 0x11e4e4c9 */
  goto L_11e4e4c9;
L_11e4e48c:;
  /* 11e4e48c push 9 */
  push32((uint32_t)(0x9u));
  /* 11e4e48e call 0x11e4c710 */
  push32(0x11e4e493u); f_11e4c710();
  /* 11e4e493 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4e496 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4e49a jne 0x11e4e4a3 */
  if (!C.zf) goto L_11e4e4a3;
  /* 11e4e49c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11e4e4a3:;
  /* 11e4e4a3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e4e4a6 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4e4a9 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11e4e4ac mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11e4e4af mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e4e4b2 push eax */
  push32((uint32_t)(EAX));
  /* 11e4e4b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4e4b6 push ecx */
  push32((uint32_t)(ECX));
  /* 11e4e4b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e4e4b9 mov edx, dword ptr [0x11e7828c] */
  EDX = (r32((uint32_t)(0x11e7828c)));
  /* 11e4e4bf push edx */
  push32((uint32_t)(EDX));
  /* 11e4e4c0 call dword ptr [0x11e79334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e79334))), 0x11e4e4c6u);
  /* 11e4e4c6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11e4e4c9:;
  /* 11e4e4c9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4e4cd jne 0x11e4e4d8 */
  if (!C.zf) goto L_11e4e4d8;
  /* 11e4e4cf cmp dword ptr [0x11e76b94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e76b94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4e4d6 jne 0x11e4e4dd */
  if (!C.zf) goto L_11e4e4dd;
L_11e4e4d8:;
  /* 11e4e4d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e4e4db jmp 0x11e4e4f6 */
  goto L_11e4e4f6;
L_11e4e4dd:;
  /* 11e4e4dd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e4e4e0 push eax */
  push32((uint32_t)(EAX));
  /* 11e4e4e1 call 0x11e4e0d0 */
  push32(0x11e4e4e6u); f_11e4e0d0();
  /* 11e4e4e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4e4e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e4e4eb jne 0x11e4e4f1 */
  if (!C.zf) goto L_11e4e4f1;
  /* 11e4e4ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e4e4ef jmp 0x11e4e4f6 */
  goto L_11e4e4f6;
L_11e4e4f1:;
  /* 11e4e4f1 jmp 0x11e4e346 */
  goto L_11e4e346;
L_11e4e4f6:;
  /* 11e4e4f6 mov esp, ebp */
  ESP = (EBP);
  /* 11e4e4f8 pop ebp */
  EBP = (pop32());
  /* 11e4e4f9 ret  */
  ESPCHK(0x11e4e310u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e500 @ 0x11e4e500 (104 bytes, 38 insns) */
void f_11e4e500(void) {
  FTRACE(0x11e4e500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e4e500 push ebp */
  push32((uint32_t)(EBP));
  /* 11e4e501 mov ebp, esp */
  EBP = (ESP);
  /* 11e4e503 push ecx */
  push32((uint32_t)(ECX));
  /* 11e4e504 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4e508 jne 0x11e4e50c */
  if (!C.zf) goto L_11e4e50c;
  /* 11e4e50a jmp 0x11e4e564 */
  goto L_11e4e564;
L_11e4e50c:;
  /* 11e4e50c push 9 */
  push32((uint32_t)(0x9u));
  /* 11e4e50e call 0x11e4c670 */
  push32(0x11e4e513u); f_11e4c670();
  /* 11e4e513 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4e516 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4e519 push eax */
  push32((uint32_t)(EAX));
  /* 11e4e51a call 0x11e4e690 */
  push32(0x11e4e51fu); f_11e4e690();
  /* 11e4e51f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4e522 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e4e525 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4e529 je 0x11e4e547 */
  if (C.zf) goto L_11e4e547;
  /* 11e4e52b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4e52e push ecx */
  push32((uint32_t)(ECX));
  /* 11e4e52f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4e532 push edx */
  push32((uint32_t)(EDX));
  /* 11e4e533 call 0x11e4e750 */
  push32(0x11e4e538u); f_11e4e750();
  /* 11e4e538 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4e53b push 9 */
  push32((uint32_t)(0x9u));
  /* 11e4e53d call 0x11e4c710 */
  push32(0x11e4e542u); f_11e4c710();
  /* 11e4e542 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4e545 jmp 0x11e4e564 */
  goto L_11e4e564;
L_11e4e547:;
  /* 11e4e547 push 9 */
  push32((uint32_t)(0x9u));
  /* 11e4e549 call 0x11e4c710 */
  push32(0x11e4e54eu); f_11e4c710();
  /* 11e4e54e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4e551 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4e554 push eax */
  push32((uint32_t)(EAX));
  /* 11e4e555 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e4e557 mov ecx, dword ptr [0x11e7828c] */
  ECX = (r32((uint32_t)(0x11e7828c)));
  /* 11e4e55d push ecx */
  push32((uint32_t)(ECX));
  /* 11e4e55e call dword ptr [0x11e79358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e79358))), 0x11e4e564u);
L_11e4e564:;
  /* 11e4e564 mov esp, ebp */
  ESP = (EBP);
  /* 11e4e566 pop ebp */
  EBP = (pop32());
  /* 11e4e567 ret  */
  ESPCHK(0x11e4e500u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e570 @ 0x11e4e570 (116 bytes, 34 insns) */
void f_11e4e570(void) {
  FTRACE(0x11e4e570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e4e570 push ebp */
  push32((uint32_t)(EBP));
  /* 11e4e571 mov ebp, esp */
  EBP = (ESP);
  /* 11e4e573 push ecx */
  push32((uint32_t)(ECX));
  /* 11e4e574 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 11e4e57b push 9 */
  push32((uint32_t)(0x9u));
  /* 11e4e57d call 0x11e4c670 */
  push32(0x11e4e582u); f_11e4c670();
  /* 11e4e582 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4e585 call 0x11e4fc80 */
  push32(0x11e4e58au); f_11e4fc80();
  /* 11e4e58a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e4e58c jge 0x11e4e595 */
  if ((C.sf==C.of)) goto L_11e4e595;
  /* 11e4e58e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_11e4e595:;
  /* 11e4e595 push 9 */
  push32((uint32_t)(0x9u));
  /* 11e4e597 call 0x11e4c710 */
  push32(0x11e4e59cu); f_11e4c710();
  /* 11e4e59c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4e59f push 0 */
  push32((uint32_t)(0x0u));
  /* 11e4e5a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e4e5a3 mov eax, dword ptr [0x11e7828c] */
  EAX = (r32((uint32_t)(0x11e7828c)));
  /* 11e4e5a8 push eax */
  push32((uint32_t)(EAX));
  /* 11e4e5a9 call dword ptr [0x11e79378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e79378))), 0x11e4e5afu);
  /* 11e4e5af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e4e5b1 jne 0x11e4e5dd */
  if (!C.zf) goto L_11e4e5dd;
  /* 11e4e5b3 call dword ptr [0x11e793ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e793ac))), 0x11e4e5b9u);
  /* 11e4e5b9 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4e5bc jne 0x11e4e5d6 */
  if (!C.zf) goto L_11e4e5d6;
  /* 11e4e5be call 0x11e52650 */
  push32(0x11e4e5c3u); f_11e52650();
  /* 11e4e5c3 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 11e4e5c9 call 0x11e52640 */
  push32(0x11e4e5ceu); f_11e52640();
  /* 11e4e5ce mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 11e4e5d4 jmp 0x11e4e5dd */
  goto L_11e4e5dd;
L_11e4e5d6:;
  /* 11e4e5d6 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_11e4e5dd:;
  /* 11e4e5dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4e5e0 mov esp, ebp */
  ESP = (EBP);
  /* 11e4e5e2 pop ebp */
  EBP = (pop32());
  /* 11e4e5e3 ret  */
  ESPCHK(0x11e4e570u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e5f0 @ 0x11e4e5f0 (10 bytes, 5 insns) */
void f_11e4e5f0(void) {
  FTRACE(0x11e4e5f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e4e5f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e4e5f1 mov ebp, esp */
  EBP = (ESP);
  /* 11e4e5f3 call 0x11e4e570 */
  push32(0x11e4e5f8u); f_11e4e570();
  /* 11e4e5f8 pop ebp */
  EBP = (pop32());
  /* 11e4e5f9 ret  */
  ESPCHK(0x11e4e5f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e600 @ 0x11e4e600 (10 bytes, 5 insns) */
void f_11e4e600(void) {
  FTRACE(0x11e4e600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e4e600 push ebp */
  push32((uint32_t)(EBP));
  /* 11e4e601 mov ebp, esp */
  EBP = (ESP);
  /* 11e4e603 mov eax, dword ptr [0x11e74db4] */
  EAX = (r32((uint32_t)(0x11e74db4)));
  /* 11e4e608 pop ebp */
  EBP = (pop32());
  /* 11e4e609 ret  */
  ESPCHK(0x11e4e600u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e610 @ 0x11e4e610 (31 bytes, 11 insns) */
void f_11e4e610(void) {
  FTRACE(0x11e4e610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e4e610 push ebp */
  push32((uint32_t)(EBP));
  /* 11e4e611 mov ebp, esp */
  EBP = (ESP);
  /* 11e4e613 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4e61a jbe 0x11e4e620 */
  if ((C.cf||C.zf)) goto L_11e4e620;
  /* 11e4e61c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e4e61e jmp 0x11e4e62d */
  goto L_11e4e62d;
L_11e4e620:;
  /* 11e4e620 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4e623 mov dword ptr [0x11e74db4], eax */
  w32((uint32_t)(0x11e74db4), (EAX));
  /* 11e4e628 mov eax, 1 */
  EAX = (0x1u);
L_11e4e62d:;
  /* 11e4e62d pop ebp */
  EBP = (pop32());
  /* 11e4e62e ret  */
  ESPCHK(0x11e4e610u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e630 @ 0x11e4e630 (89 bytes, 20 insns) */
void f_11e4e630(void) {
  FTRACE(0x11e4e630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e4e630 push ebp */
  push32((uint32_t)(EBP));
  /* 11e4e631 mov ebp, esp */
  EBP = (ESP);
  /* 11e4e633 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 11e4e638 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e4e63a mov eax, dword ptr [0x11e7828c] */
  EAX = (r32((uint32_t)(0x11e7828c)));
  /* 11e4e63f push eax */
  push32((uint32_t)(EAX));
  /* 11e4e640 call dword ptr [0x11e79344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e79344))), 0x11e4e646u);
  /* 11e4e646 mov dword ptr [0x11e78288], eax */
  w32((uint32_t)(0x11e78288), (EAX));
  /* 11e4e64b cmp dword ptr [0x11e78288], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e78288))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4e652 jne 0x11e4e658 */
  if (!C.zf) goto L_11e4e658;
  /* 11e4e654 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e4e656 jmp 0x11e4e687 */
  goto L_11e4e687;
L_11e4e658:;
  /* 11e4e658 mov ecx, dword ptr [0x11e78288] */
  ECX = (r32((uint32_t)(0x11e78288)));
  /* 11e4e65e mov dword ptr [0x11e7827c], ecx */
  w32((uint32_t)(0x11e7827c), (ECX));
  /* 11e4e664 mov dword ptr [0x11e78280], 0 */
  w32((uint32_t)(0x11e78280), (0x0u));
  /* 11e4e66e mov dword ptr [0x11e78284], 0 */
  w32((uint32_t)(0x11e78284), (0x0u));
  /* 11e4e678 mov dword ptr [0x11e78268], 0x10 */
  w32((uint32_t)(0x11e78268), (0x10u));
  /* 11e4e682 mov eax, 1 */
  EAX = (0x1u);
L_11e4e687:;
  /* 11e4e687 pop ebp */
  EBP = (pop32());
  /* 11e4e688 ret  */
  ESPCHK(0x11e4e630u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e690 @ 0x11e4e690 (85 bytes, 29 insns) */
void f_11e4e690(void) {
  FTRACE(0x11e4e690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e4e690 push ebp */
  push32((uint32_t)(EBP));
  /* 11e4e691 mov ebp, esp */
  EBP = (ESP);
  /* 11e4e693 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4e696 mov eax, dword ptr [0x11e78284] */
  EAX = (r32((uint32_t)(0x11e78284)));
  /* 11e4e69b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e4e69e mov ecx, dword ptr [0x11e78288] */
  ECX = (r32((uint32_t)(0x11e78288)));
  /* 11e4e6a4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4e6a6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e4e6a9 mov edx, dword ptr [0x11e78288] */
  EDX = (r32((uint32_t)(0x11e78288)));
  /* 11e4e6af mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11e4e6b2:;
  /* 11e4e6b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e4e6b5 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4e6b8 jae 0x11e4e6df */
  if (!C.cf) goto L_11e4e6df;
  /* 11e4e6ba mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e4e6bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4e6c0 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4e6c3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e4e6c6 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4e6cd jae 0x11e4e6d4 */
  if (!C.cf) goto L_11e4e6d4;
  /* 11e4e6cf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e4e6d2 jmp 0x11e4e6e1 */
  goto L_11e4e6e1;
L_11e4e6d4:;
  /* 11e4e6d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e4e6d7 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4e6da mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e4e6dd jmp 0x11e4e6b2 */
  goto L_11e4e6b2;
L_11e4e6df:;
  /* 11e4e6df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e4e6e1:;
  /* 11e4e6e1 mov esp, ebp */
  ESP = (EBP);
  /* 11e4e6e3 pop ebp */
  EBP = (pop32());
  /* 11e4e6e4 ret  */
  ESPCHK(0x11e4e690u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e6f0 @ 0x11e4e6f0 (95 bytes, 33 insns) */
void f_11e4e6f0(void) {
  FTRACE(0x11e4e6f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e4e6f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e4e6f1 mov ebp, esp */
  EBP = (ESP);
  /* 11e4e6f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4e6f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4e6f9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e4e6fc sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4e6ff mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e4e702 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e4e705 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11e4e708 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e4e70b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11e4e710 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4e713 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11e4e715 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4e718 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11e4e71b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11e4e71d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e4e71f jne 0x11e4e741 */
  if (!C.zf) goto L_11e4e741;
  /* 11e4e721 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e4e724 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 11e4e727 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e4e729 jne 0x11e4e741 */
  if (!C.zf) goto L_11e4e741;
  /* 11e4e72b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e4e72e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 11e4e734 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e4e736 je 0x11e4e741 */
  if (C.zf) goto L_11e4e741;
  /* 11e4e738 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 11e4e73f jmp 0x11e4e748 */
  goto L_11e4e748;
L_11e4e741:;
  /* 11e4e741 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11e4e748:;
  /* 11e4e748 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e4e74b mov esp, ebp */
  ESP = (EBP);
  /* 11e4e74d pop ebp */
  EBP = (pop32());
  /* 11e4e74e ret  */
  ESPCHK(0x11e4e6f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e750 @ 0x11e4e750 (1485 bytes, 453 insns) */
void f_11e4e750(void) {
  FTRACE(0x11e4e750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e4e750 push ebp */
  push32((uint32_t)(EBP));
  /* 11e4e751 mov ebp, esp */
  EBP = (ESP);
  /* 11e4e753 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4e756 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4e759 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11e4e75c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 11e4e75f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4e762 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e4e765 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4e768 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11e4e76b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e4e76e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 11e4e771 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e4e774 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4e777 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e4e77d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e4e780 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 11e4e787 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e4e78a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e4e78d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4e790 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11e4e793 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e4e796 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e4e798 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4e79b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11e4e79e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e4e7a1 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4e7a4 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 11e4e7a7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e4e7aa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e4e7ac mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11e4e7af mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e4e7b2 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11e4e7b5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e4e7b8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e4e7bb and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11e4e7be test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e4e7c0 jne 0x11e4e8e8 */
  if (!C.zf) goto L_11e4e8e8;
  /* 11e4e7c6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e4e7c9 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11e4e7cc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4e7cf mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11e4e7d2 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4e7d6 jbe 0x11e4e7df */
  if ((C.cf||C.zf)) goto L_11e4e7df;
  /* 11e4e7d8 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_11e4e7df:;
  /* 11e4e7df mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e4e7e2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e4e7e5 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11e4e7e8 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4e7eb jne 0x11e4e8c1 */
  if (!C.zf) goto L_11e4e8c1;
  /* 11e4e7f1 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4e7f5 jae 0x11e4e856 */
  if (!C.cf) goto L_11e4e856;
  /* 11e4e7f7 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11e4e7fc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e4e7ff shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11e4e801 not eax */
  EAX = (~(EAX));
  /* 11e4e803 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4e806 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e4e809 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11e4e80d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e4e80f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4e812 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e4e815 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11e4e819 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e4e81c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4e81f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11e4e822 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11e4e825 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e4e828 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4e82b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11e4e82e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e4e831 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4e834 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11e4e838 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e4e83a jne 0x11e4e854 */
  if (!C.zf) goto L_11e4e854;
  /* 11e4e83c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11e4e841 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e4e844 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11e4e846 not eax */
  EAX = (~(EAX));
  /* 11e4e848 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4e84b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e4e84d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11e4e84f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4e852 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11e4e854:;
  /* 11e4e854 jmp 0x11e4e8c1 */
  goto L_11e4e8c1;
L_11e4e856:;
  /* 11e4e856 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e4e859 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4e85c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11e4e861 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e4e863 not edx */
  EDX = (~(EDX));
  /* 11e4e865 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4e868 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e4e86b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11e4e872 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11e4e874 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4e877 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e4e87a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 11e4e881 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e4e884 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4e887 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11e4e88a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11e4e88d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e4e890 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4e893 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11e4e896 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e4e899 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4e89c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11e4e8a0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e4e8a2 jne 0x11e4e8c1 */
  if (!C.zf) goto L_11e4e8c1;
  /* 11e4e8a4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e4e8a7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4e8aa mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11e4e8af shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e4e8b1 not edx */
  EDX = (~(EDX));
  /* 11e4e8b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4e8b6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11e4e8b9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11e4e8bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4e8be mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11e4e8c1:;
  /* 11e4e8c1 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e4e8c4 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11e4e8c7 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e4e8ca mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11e4e8cd mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11e4e8d0 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e4e8d3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e4e8d6 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e4e8d9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11e4e8dc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11e4e8df mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4e8e2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4e8e5 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_11e4e8e8:;
  /* 11e4e8e8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4e8eb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11e4e8ee sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4e8f1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11e4e8f4 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4e8f8 jbe 0x11e4e901 */
  if ((C.cf||C.zf)) goto L_11e4e901;
  /* 11e4e8fa mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_11e4e901:;
  /* 11e4e901 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e4e904 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11e4e907 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e4e909 jne 0x11e4ea65 */
  if (!C.zf) goto L_11e4ea65;
  /* 11e4e90f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e4e912 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4e915 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 11e4e918 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e4e91b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11e4e91e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4e921 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11e4e924 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4e928 jbe 0x11e4e931 */
  if ((C.cf||C.zf)) goto L_11e4e931;
  /* 11e4e92a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_11e4e931:;
  /* 11e4e931 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4e934 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4e937 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11e4e93a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4e93d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11e4e940 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4e943 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11e4e946 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4e94a jbe 0x11e4e953 */
  if ((C.cf||C.zf)) goto L_11e4e953;
  /* 11e4e94c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_11e4e953:;
  /* 11e4e953 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e4e956 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4e959 je 0x11e4ea5f */
  if (C.zf) goto L_11e4ea5f;
  /* 11e4e95f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11e4e962 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11e4e965 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e4e968 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4e96b jne 0x11e4ea41 */
  if (!C.zf) goto L_11e4ea41;
  /* 11e4e971 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4e975 jae 0x11e4e9d6 */
  if (!C.cf) goto L_11e4e9d6;
  /* 11e4e977 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11e4e97c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e4e97f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e4e981 not edx */
  EDX = (~(EDX));
  /* 11e4e983 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4e986 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e4e989 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11e4e98d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11e4e98f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4e992 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e4e995 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11e4e999 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e4e99c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4e99f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11e4e9a2 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11e4e9a5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e4e9a8 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4e9ab mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11e4e9ae mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e4e9b1 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4e9b4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11e4e9b8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e4e9ba jne 0x11e4e9d4 */
  if (!C.zf) goto L_11e4e9d4;
  /* 11e4e9bc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11e4e9c1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e4e9c4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e4e9c6 not edx */
  EDX = (~(EDX));
  /* 11e4e9c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4e9cb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e4e9cd and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11e4e9cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4e9d2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11e4e9d4:;
  /* 11e4e9d4 jmp 0x11e4ea41 */
  goto L_11e4ea41;
L_11e4e9d6:;
  /* 11e4e9d6 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e4e9d9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4e9dc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11e4e9e1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11e4e9e3 not eax */
  EAX = (~(EAX));
  /* 11e4e9e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4e9e8 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e4e9eb mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11e4e9f2 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e4e9f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4e9f7 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e4e9fa mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 11e4ea01 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e4ea04 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4ea07 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11e4ea0a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11e4ea0d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e4ea10 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4ea13 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11e4ea16 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e4ea19 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4ea1c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11e4ea20 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e4ea22 jne 0x11e4ea41 */
  if (!C.zf) goto L_11e4ea41;
  /* 11e4ea24 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e4ea27 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4ea2a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11e4ea2f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11e4ea31 not eax */
  EAX = (~(EAX));
  /* 11e4ea33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4ea36 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e4ea39 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11e4ea3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4ea3e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11e4ea41:;
  /* 11e4ea41 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11e4ea44 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11e4ea47 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11e4ea4a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11e4ea4d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11e4ea50 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11e4ea53 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11e4ea56 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11e4ea59 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11e4ea5c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_11e4ea5f:;
  /* 11e4ea5f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11e4ea62 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_11e4ea65:;
  /* 11e4ea65 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e4ea68 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11e4ea6b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e4ea6d jne 0x11e4ea7b */
  if (!C.zf) goto L_11e4ea7b;
  /* 11e4ea6f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e4ea72 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4ea75 je 0x11e4eb8b */
  if (C.zf) goto L_11e4eb8b;
L_11e4ea7b:;
  /* 11e4ea7b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e4ea7e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e4ea81 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 11e4ea84 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11e4ea87 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e4ea8a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e4ea8d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e4ea90 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11e4ea93 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e4ea96 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e4ea99 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11e4ea9c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e4ea9f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e4eaa2 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11e4eaa5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e4eaa8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e4eaab mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e4eaae mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11e4eab1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e4eab4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e4eab7 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e4eaba cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4eabd jne 0x11e4eb8b */
  if (!C.zf) goto L_11e4eb8b;
  /* 11e4eac3 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4eac7 jae 0x11e4eb24 */
  if (!C.cf) goto L_11e4eb24;
  /* 11e4eac9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e4eacc add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4eacf movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11e4ead3 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e4ead6 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4ead9 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11e4eadc add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11e4eadf mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e4eae2 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4eae5 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11e4eae8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e4eaea jne 0x11e4eb02 */
  if (!C.zf) goto L_11e4eb02;
  /* 11e4eaec mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11e4eaf1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e4eaf4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e4eaf6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4eaf9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e4eafb or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11e4eafd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4eb00 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11e4eb02:;
  /* 11e4eb02 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11e4eb07 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e4eb0a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11e4eb0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4eb0f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e4eb12 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11e4eb16 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e4eb18 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4eb1b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e4eb1e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11e4eb22 jmp 0x11e4eb8b */
  goto L_11e4eb8b;
L_11e4eb24:;
  /* 11e4eb24 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e4eb27 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4eb2a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11e4eb2e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e4eb31 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4eb34 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11e4eb37 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11e4eb3a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e4eb3d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4eb40 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11e4eb43 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e4eb45 jne 0x11e4eb62 */
  if (!C.zf) goto L_11e4eb62;
  /* 11e4eb47 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e4eb4a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4eb4d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11e4eb52 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e4eb54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4eb57 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11e4eb5a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11e4eb5c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4eb5f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11e4eb62:;
  /* 11e4eb62 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e4eb65 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4eb68 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11e4eb6d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11e4eb6f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4eb72 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e4eb75 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11e4eb7c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e4eb7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4eb81 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e4eb84 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_11e4eb8b:;
  /* 11e4eb8b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e4eb8e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4eb91 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11e4eb93 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e4eb96 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4eb99 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4eb9c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 11e4eb9f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e4eba2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e4eba4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4eba7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e4ebaa mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11e4ebac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e4ebaf cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4ebb2 jne 0x11e4ed19 */
  if (!C.zf) goto L_11e4ed19;
  /* 11e4ebb8 cmp dword ptr [0x11e78280], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e78280))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4ebbf je 0x11e4ed08 */
  if (C.zf) goto L_11e4ed08;
  /* 11e4ebc5 mov eax, dword ptr [0x11e78278] */
  EAX = (r32((uint32_t)(0x11e78278)));
  /* 11e4ebca shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 11e4ebcd mov ecx, dword ptr [0x11e78280] */
  ECX = (r32((uint32_t)(0x11e78280)));
  /* 11e4ebd3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11e4ebd6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4ebd8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11e4ebdb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11e4ebe0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11e4ebe5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e4ebe8 push eax */
  push32((uint32_t)(EAX));
  /* 11e4ebe9 call dword ptr [0x11e79354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e79354))), 0x11e4ebefu);
  /* 11e4ebef mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11e4ebf4 mov ecx, dword ptr [0x11e78278] */
  ECX = (r32((uint32_t)(0x11e78278)));
  /* 11e4ebfa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e4ebfc mov eax, dword ptr [0x11e78280] */
  EAX = (r32((uint32_t)(0x11e78280)));
  /* 11e4ec01 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11e4ec04 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11e4ec06 mov edx, dword ptr [0x11e78280] */
  EDX = (r32((uint32_t)(0x11e78280)));
  /* 11e4ec0c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11e4ec0f mov eax, dword ptr [0x11e78280] */
  EAX = (r32((uint32_t)(0x11e78280)));
  /* 11e4ec14 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11e4ec17 mov edx, dword ptr [0x11e78278] */
  EDX = (r32((uint32_t)(0x11e78278)));
  /* 11e4ec1d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 11e4ec28 mov eax, dword ptr [0x11e78280] */
  EAX = (r32((uint32_t)(0x11e78280)));
  /* 11e4ec2d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11e4ec30 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 11e4ec33 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11e4ec36 mov eax, dword ptr [0x11e78280] */
  EAX = (r32((uint32_t)(0x11e78280)));
  /* 11e4ec3b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11e4ec3e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 11e4ec41 mov edx, dword ptr [0x11e78280] */
  EDX = (r32((uint32_t)(0x11e78280)));
  /* 11e4ec47 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11e4ec4a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 11e4ec4e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e4ec50 jne 0x11e4ec66 */
  if (!C.zf) goto L_11e4ec66;
  /* 11e4ec52 mov edx, dword ptr [0x11e78280] */
  EDX = (r32((uint32_t)(0x11e78280)));
  /* 11e4ec58 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11e4ec5b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 11e4ec5d mov ecx, dword ptr [0x11e78280] */
  ECX = (r32((uint32_t)(0x11e78280)));
  /* 11e4ec63 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11e4ec66:;
  /* 11e4ec66 mov edx, dword ptr [0x11e78280] */
  EDX = (r32((uint32_t)(0x11e78280)));
  /* 11e4ec6c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4ec70 jne 0x11e4ed08 */
  if (!C.zf) goto L_11e4ed08;
  /* 11e4ec76 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11e4ec7b push 0 */
  push32((uint32_t)(0x0u));
  /* 11e4ec7d mov eax, dword ptr [0x11e78280] */
  EAX = (r32((uint32_t)(0x11e78280)));
  /* 11e4ec82 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11e4ec85 push ecx */
  push32((uint32_t)(ECX));
  /* 11e4ec86 call dword ptr [0x11e79354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e79354))), 0x11e4ec8cu);
  /* 11e4ec8c mov edx, dword ptr [0x11e78280] */
  EDX = (r32((uint32_t)(0x11e78280)));
  /* 11e4ec92 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11e4ec95 push eax */
  push32((uint32_t)(EAX));
  /* 11e4ec96 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e4ec98 mov ecx, dword ptr [0x11e7828c] */
  ECX = (r32((uint32_t)(0x11e7828c)));
  /* 11e4ec9e push ecx */
  push32((uint32_t)(ECX));
  /* 11e4ec9f call dword ptr [0x11e79358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e79358))), 0x11e4eca5u);
  /* 11e4eca5 mov edx, dword ptr [0x11e78284] */
  EDX = (r32((uint32_t)(0x11e78284)));
  /* 11e4ecab imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e4ecae mov eax, dword ptr [0x11e78288] */
  EAX = (r32((uint32_t)(0x11e78288)));
  /* 11e4ecb3 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4ecb5 mov ecx, dword ptr [0x11e78280] */
  ECX = (r32((uint32_t)(0x11e78280)));
  /* 11e4ecbb add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4ecbe sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4ecc0 push eax */
  push32((uint32_t)(EAX));
  /* 11e4ecc1 mov edx, dword ptr [0x11e78280] */
  EDX = (r32((uint32_t)(0x11e78280)));
  /* 11e4ecc7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4ecca push edx */
  push32((uint32_t)(EDX));
  /* 11e4eccb mov eax, dword ptr [0x11e78280] */
  EAX = (r32((uint32_t)(0x11e78280)));
  /* 11e4ecd0 push eax */
  push32((uint32_t)(EAX));
  /* 11e4ecd1 call 0x11e52660 */
  push32(0x11e4ecd6u); f_11e52660();
  /* 11e4ecd6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4ecd9 mov ecx, dword ptr [0x11e78284] */
  ECX = (r32((uint32_t)(0x11e78284)));
  /* 11e4ecdf sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4ece2 mov dword ptr [0x11e78284], ecx */
  w32((uint32_t)(0x11e78284), (ECX));
  /* 11e4ece8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4eceb cmp edx, dword ptr [0x11e78280] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11e78280))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4ecf1 jbe 0x11e4ecfc */
  if ((C.cf||C.zf)) goto L_11e4ecfc;
  /* 11e4ecf3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4ecf6 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4ecf9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11e4ecfc:;
  /* 11e4ecfc mov ecx, dword ptr [0x11e78288] */
  ECX = (r32((uint32_t)(0x11e78288)));
  /* 11e4ed02 mov dword ptr [0x11e7827c], ecx */
  w32((uint32_t)(0x11e7827c), (ECX));
L_11e4ed08:;
  /* 11e4ed08 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4ed0b mov dword ptr [0x11e78280], edx */
  w32((uint32_t)(0x11e78280), (EDX));
  /* 11e4ed11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4ed14 mov dword ptr [0x11e78278], eax */
  w32((uint32_t)(0x11e78278), (EAX));
L_11e4ed19:;
  /* 11e4ed19 mov esp, ebp */
  ESP = (EBP);
  /* 11e4ed1b pop ebp */
  EBP = (pop32());
  /* 11e4ed1c ret  */
  ESPCHK(0x11e4e750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed20 @ 0x11e4ed20 (1334 bytes, 427 insns) */
void f_11e4ed20(void) {
  FTRACE(0x11e4ed20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e4ed20 push ebp */
  push32((uint32_t)(EBP));
  /* 11e4ed21 mov ebp, esp */
  EBP = (ESP);
  /* 11e4ed23 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4ed26 push esi */
  push32((uint32_t)(ESI));
  /* 11e4ed27 mov eax, dword ptr [0x11e78284] */
  EAX = (r32((uint32_t)(0x11e78284)));
  /* 11e4ed2c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e4ed2f mov ecx, dword ptr [0x11e78288] */
  ECX = (r32((uint32_t)(0x11e78288)));
  /* 11e4ed35 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4ed37 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11e4ed3a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4ed3d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4ed40 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11e4ed43 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11e4ed46 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e4ed49 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11e4ed4c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4ed4f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11e4ed52 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4ed56 jge 0x11e4ed6c */
  if ((C.sf==C.of)) goto L_11e4ed6c;
  /* 11e4ed58 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e4ed5b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e4ed5e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e4ed60 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11e4ed63 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 11e4ed6a jmp 0x11e4ed81 */
  goto L_11e4ed81;
L_11e4ed6c:;
  /* 11e4ed6c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11e4ed73 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e4ed76 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4ed79 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e4ed7c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11e4ed7e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_11e4ed81:;
  /* 11e4ed81 mov ecx, dword ptr [0x11e7827c] */
  ECX = (r32((uint32_t)(0x11e7827c)));
  /* 11e4ed87 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_11e4ed8a:;
  /* 11e4ed8a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e4ed8d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4ed90 jae 0x11e4edb6 */
  if (!C.cf) goto L_11e4edb6;
  /* 11e4ed92 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e4ed95 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e4ed98 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 11e4ed9a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e4ed9d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11e4eda0 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 11e4eda3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e4eda5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e4eda7 je 0x11e4edab */
  if (C.zf) goto L_11e4edab;
  /* 11e4eda9 jmp 0x11e4edb6 */
  goto L_11e4edb6;
L_11e4edab:;
  /* 11e4edab mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e4edae add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4edb1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11e4edb4 jmp 0x11e4ed8a */
  goto L_11e4ed8a;
L_11e4edb6:;
  /* 11e4edb6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e4edb9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4edbc jne 0x11e4ee9d */
  if (!C.zf) goto L_11e4ee9d;
  /* 11e4edc2 mov eax, dword ptr [0x11e78288] */
  EAX = (r32((uint32_t)(0x11e78288)));
  /* 11e4edc7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11e4edca:;
  /* 11e4edca mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e4edcd cmp ecx, dword ptr [0x11e7827c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11e7827c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4edd3 jae 0x11e4edf9 */
  if (!C.cf) goto L_11e4edf9;
  /* 11e4edd5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e4edd8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e4eddb and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 11e4eddd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e4ede0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11e4ede3 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11e4ede6 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11e4ede8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e4edea je 0x11e4edee */
  if (C.zf) goto L_11e4edee;
  /* 11e4edec jmp 0x11e4edf9 */
  goto L_11e4edf9;
L_11e4edee:;
  /* 11e4edee mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e4edf1 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4edf4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11e4edf7 jmp 0x11e4edca */
  goto L_11e4edca;
L_11e4edf9:;
  /* 11e4edf9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e4edfc cmp ecx, dword ptr [0x11e7827c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11e7827c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4ee02 jne 0x11e4ee9d */
  if (!C.zf) goto L_11e4ee9d;
L_11e4ee08:;
  /* 11e4ee08 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e4ee0b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4ee0e jae 0x11e4ee26 */
  if (!C.cf) goto L_11e4ee26;
  /* 11e4ee10 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e4ee13 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4ee17 je 0x11e4ee1b */
  if (C.zf) goto L_11e4ee1b;
  /* 11e4ee19 jmp 0x11e4ee26 */
  goto L_11e4ee26;
L_11e4ee1b:;
  /* 11e4ee1b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e4ee1e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4ee21 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11e4ee24 jmp 0x11e4ee08 */
  goto L_11e4ee08;
L_11e4ee26:;
  /* 11e4ee26 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e4ee29 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4ee2c jne 0x11e4ee77 */
  if (!C.zf) goto L_11e4ee77;
  /* 11e4ee2e mov eax, dword ptr [0x11e78288] */
  EAX = (r32((uint32_t)(0x11e78288)));
  /* 11e4ee33 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11e4ee36:;
  /* 11e4ee36 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e4ee39 cmp ecx, dword ptr [0x11e7827c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11e7827c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4ee3f jae 0x11e4ee57 */
  if (!C.cf) goto L_11e4ee57;
  /* 11e4ee41 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e4ee44 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4ee48 je 0x11e4ee4c */
  if (C.zf) goto L_11e4ee4c;
  /* 11e4ee4a jmp 0x11e4ee57 */
  goto L_11e4ee57;
L_11e4ee4c:;
  /* 11e4ee4c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e4ee4f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4ee52 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11e4ee55 jmp 0x11e4ee36 */
  goto L_11e4ee36;
L_11e4ee57:;
  /* 11e4ee57 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e4ee5a cmp ecx, dword ptr [0x11e7827c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11e7827c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4ee60 jne 0x11e4ee77 */
  if (!C.zf) goto L_11e4ee77;
  /* 11e4ee62 call 0x11e4f260 */
  push32(0x11e4ee67u); f_11e4f260();
  /* 11e4ee67 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11e4ee6a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4ee6e jne 0x11e4ee77 */
  if (!C.zf) goto L_11e4ee77;
  /* 11e4ee70 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e4ee72 jmp 0x11e4f251 */
  goto L_11e4f251;
L_11e4ee77:;
  /* 11e4ee77 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e4ee7a push edx */
  push32((uint32_t)(EDX));
  /* 11e4ee7b call 0x11e4f370 */
  push32(0x11e4ee80u); f_11e4f370();
  /* 11e4ee80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4ee83 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e4ee86 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11e4ee89 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11e4ee8b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e4ee8e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11e4ee91 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4ee94 jne 0x11e4ee9d */
  if (!C.zf) goto L_11e4ee9d;
  /* 11e4ee96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e4ee98 jmp 0x11e4f251 */
  goto L_11e4f251;
L_11e4ee9d:;
  /* 11e4ee9d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e4eea0 mov dword ptr [0x11e7827c], edx */
  w32((uint32_t)(0x11e7827c), (EDX));
  /* 11e4eea6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e4eea9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11e4eeac mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 11e4eeaf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e4eeb2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e4eeb4 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11e4eeb7 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4eebb je 0x11e4eee0 */
  if (C.zf) goto L_11e4eee0;
  /* 11e4eebd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4eec0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e4eec3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e4eec6 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 11e4eeca mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4eecd mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e4eed0 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 11e4eed3 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 11e4eeda or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11e4eedc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e4eede jne 0x11e4ef15 */
  if (!C.zf) goto L_11e4ef15;
L_11e4eee0:;
  /* 11e4eee0 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_11e4eee7:;
  /* 11e4eee7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4eeea mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e4eeed mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e4eef0 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 11e4eef4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4eef7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e4eefa mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 11e4eefd and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 11e4ef04 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 11e4ef06 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e4ef08 jne 0x11e4ef15 */
  if (!C.zf) goto L_11e4ef15;
  /* 11e4ef0a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4ef0d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4ef10 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11e4ef13 jmp 0x11e4eee7 */
  goto L_11e4eee7;
L_11e4ef15:;
  /* 11e4ef15 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4ef18 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e4ef1e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e4ef21 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11e4ef28 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e4ef2b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11e4ef32 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4ef35 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e4ef38 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e4ef3b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 11e4ef3f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11e4ef42 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4ef46 jne 0x11e4ef62 */
  if (!C.zf) goto L_11e4ef62;
  /* 11e4ef48 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 11e4ef4f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4ef52 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e4ef55 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11e4ef58 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 11e4ef5f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_11e4ef62:;
  /* 11e4ef62 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4ef66 jl 0x11e4ef7b */
  if ((C.sf!=C.of)) goto L_11e4ef7b;
  /* 11e4ef68 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e4ef6b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11e4ef6d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11e4ef70 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e4ef73 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4ef76 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11e4ef79 jmp 0x11e4ef62 */
  goto L_11e4ef62;
L_11e4ef7b:;
  /* 11e4ef7b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e4ef7e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4ef81 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 11e4ef85 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11e4ef88 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e4ef8b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e4ef8d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4ef90 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e4ef93 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e4ef96 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11e4ef99 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4ef9c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11e4ef9f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4efa3 jle 0x11e4efac */
  if ((C.zf||C.sf!=C.of)) goto L_11e4efac;
  /* 11e4efa5 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_11e4efac:;
  /* 11e4efac mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e4efaf cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4efb2 je 0x11e4f1d0 */
  if (C.zf) goto L_11e4f1d0;
  /* 11e4efb8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e4efbb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e4efbe mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11e4efc1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4efc4 jne 0x11e4f09a */
  if (!C.zf) goto L_11e4f09a;
  /* 11e4efca cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4efce jge 0x11e4f02f */
  if ((C.sf==C.of)) goto L_11e4f02f;
  /* 11e4efd0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11e4efd5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e4efd8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11e4efda not eax */
  EAX = (~(EAX));
  /* 11e4efdc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4efdf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e4efe2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11e4efe6 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e4efe8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4efeb mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e4efee mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11e4eff2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e4eff5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4eff8 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11e4effb sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11e4effe mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e4f001 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f004 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11e4f007 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e4f00a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f00d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11e4f011 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e4f013 jne 0x11e4f02d */
  if (!C.zf) goto L_11e4f02d;
  /* 11e4f015 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11e4f01a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e4f01d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11e4f01f not eax */
  EAX = (~(EAX));
  /* 11e4f021 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e4f024 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e4f026 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11e4f028 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e4f02b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11e4f02d:;
  /* 11e4f02d jmp 0x11e4f09a */
  goto L_11e4f09a;
L_11e4f02f:;
  /* 11e4f02f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e4f032 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4f035 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11e4f03a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e4f03c not edx */
  EDX = (~(EDX));
  /* 11e4f03e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4f041 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e4f044 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11e4f04b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11e4f04d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4f050 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e4f053 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 11e4f05a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e4f05d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f060 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11e4f063 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11e4f066 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e4f069 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f06c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11e4f06f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e4f072 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f075 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11e4f079 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e4f07b jne 0x11e4f09a */
  if (!C.zf) goto L_11e4f09a;
  /* 11e4f07d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e4f080 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4f083 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11e4f088 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e4f08a not edx */
  EDX = (~(EDX));
  /* 11e4f08c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e4f08f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11e4f092 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11e4f094 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e4f097 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11e4f09a:;
  /* 11e4f09a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e4f09d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11e4f0a0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e4f0a3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11e4f0a6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11e4f0a9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e4f0ac mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e4f0af mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e4f0b2 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11e4f0b5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11e4f0b8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4f0bc je 0x11e4f1d0 */
  if (C.zf) goto L_11e4f1d0;
  /* 11e4f0c2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e4f0c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4f0c8 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 11e4f0cb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e4f0ce mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e4f0d1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e4f0d4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11e4f0d7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11e4f0da mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e4f0dd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e4f0e0 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11e4f0e3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e4f0e6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e4f0e9 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11e4f0ec mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e4f0ef mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11e4f0f2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e4f0f5 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11e4f0f8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e4f0fb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e4f0fe mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11e4f101 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4f104 jne 0x11e4f1d0 */
  if (!C.zf) goto L_11e4f1d0;
  /* 11e4f10a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4f10e jge 0x11e4f16a */
  if ((C.sf==C.of)) goto L_11e4f16a;
  /* 11e4f110 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e4f113 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f116 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11e4f11a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e4f11d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f120 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11e4f123 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11e4f125 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e4f128 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f12b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11e4f12e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e4f130 jne 0x11e4f148 */
  if (!C.zf) goto L_11e4f148;
  /* 11e4f132 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11e4f137 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e4f13a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11e4f13c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e4f13f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e4f141 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11e4f143 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e4f146 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11e4f148:;
  /* 11e4f148 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11e4f14d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e4f150 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e4f152 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4f155 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e4f158 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11e4f15c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11e4f15e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4f161 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e4f164 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11e4f168 jmp 0x11e4f1d0 */
  goto L_11e4f1d0;
L_11e4f16a:;
  /* 11e4f16a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e4f16d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f170 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11e4f174 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e4f177 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f17a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11e4f17d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11e4f17f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e4f182 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f185 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11e4f188 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e4f18a jne 0x11e4f1a7 */
  if (!C.zf) goto L_11e4f1a7;
  /* 11e4f18c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e4f18f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4f192 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11e4f197 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11e4f199 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e4f19c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e4f19f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11e4f1a1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e4f1a4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11e4f1a7:;
  /* 11e4f1a7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e4f1aa sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4f1ad mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11e4f1b2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e4f1b4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4f1b7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e4f1ba mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11e4f1c1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11e4f1c3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4f1c6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e4f1c9 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_11e4f1d0:;
  /* 11e4f1d0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4f1d4 je 0x11e4f1ea */
  if (C.zf) goto L_11e4f1ea;
  /* 11e4f1d6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e4f1d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e4f1dc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11e4f1de mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e4f1e1 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f1e4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e4f1e7 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_11e4f1ea:;
  /* 11e4f1ea mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e4f1ed add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f1f0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11e4f1f3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e4f1f6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f1f9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e4f1fc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11e4f1fe mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e4f201 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f204 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e4f207 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f20a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 11e4f20d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4f210 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e4f212 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4f215 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e4f217 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f21a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4f21d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11e4f21f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e4f221 jne 0x11e4f243 */
  if (!C.zf) goto L_11e4f243;
  /* 11e4f223 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e4f226 cmp eax, dword ptr [0x11e78280] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11e78280))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4f22c jne 0x11e4f243 */
  if (!C.zf) goto L_11e4f243;
  /* 11e4f22e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4f231 cmp ecx, dword ptr [0x11e78278] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11e78278))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4f237 jne 0x11e4f243 */
  if (!C.zf) goto L_11e4f243;
  /* 11e4f239 mov dword ptr [0x11e78280], 0 */
  w32((uint32_t)(0x11e78280), (0x0u));
L_11e4f243:;
  /* 11e4f243 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e4f246 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4f249 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11e4f24b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e4f24e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11e4f251:;
  /* 11e4f251 pop esi */
  ESI = (pop32());
  /* 11e4f252 mov esp, ebp */
  ESP = (EBP);
  /* 11e4f254 pop ebp */
  EBP = (pop32());
  /* 11e4f255 ret  */
  ESPCHK(0x11e4ed20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f260 @ 0x11e4f260 (271 bytes, 78 insns) */
void f_11e4f260(void) {
  FTRACE(0x11e4f260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e4f260 push ebp */
  push32((uint32_t)(EBP));
  /* 11e4f261 mov ebp, esp */
  EBP = (ESP);
  /* 11e4f263 push ecx */
  push32((uint32_t)(ECX));
  /* 11e4f264 mov eax, dword ptr [0x11e78284] */
  EAX = (r32((uint32_t)(0x11e78284)));
  /* 11e4f269 cmp eax, dword ptr [0x11e78268] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11e78268))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4f26f jne 0x11e4f2bb */
  if (!C.zf) goto L_11e4f2bb;
  /* 11e4f271 mov ecx, dword ptr [0x11e78268] */
  ECX = (r32((uint32_t)(0x11e78268)));
  /* 11e4f277 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f27a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e4f27d push ecx */
  push32((uint32_t)(ECX));
  /* 11e4f27e mov edx, dword ptr [0x11e78288] */
  EDX = (r32((uint32_t)(0x11e78288)));
  /* 11e4f284 push edx */
  push32((uint32_t)(EDX));
  /* 11e4f285 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e4f287 mov eax, dword ptr [0x11e7828c] */
  EAX = (r32((uint32_t)(0x11e7828c)));
  /* 11e4f28c push eax */
  push32((uint32_t)(EAX));
  /* 11e4f28d call dword ptr [0x11e79334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e79334))), 0x11e4f293u);
  /* 11e4f293 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e4f296 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4f29a jne 0x11e4f2a3 */
  if (!C.zf) goto L_11e4f2a3;
  /* 11e4f29c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e4f29e jmp 0x11e4f36b */
  goto L_11e4f36b;
L_11e4f2a3:;
  /* 11e4f2a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4f2a6 mov dword ptr [0x11e78288], ecx */
  w32((uint32_t)(0x11e78288), (ECX));
  /* 11e4f2ac mov edx, dword ptr [0x11e78268] */
  EDX = (r32((uint32_t)(0x11e78268)));
  /* 11e4f2b2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f2b5 mov dword ptr [0x11e78268], edx */
  w32((uint32_t)(0x11e78268), (EDX));
L_11e4f2bb:;
  /* 11e4f2bb mov eax, dword ptr [0x11e78284] */
  EAX = (r32((uint32_t)(0x11e78284)));
  /* 11e4f2c0 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e4f2c3 mov ecx, dword ptr [0x11e78288] */
  ECX = (r32((uint32_t)(0x11e78288)));
  /* 11e4f2c9 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f2cb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e4f2ce push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11e4f2d3 push 8 */
  push32((uint32_t)(0x8u));
  /* 11e4f2d5 mov edx, dword ptr [0x11e7828c] */
  EDX = (r32((uint32_t)(0x11e7828c)));
  /* 11e4f2db push edx */
  push32((uint32_t)(EDX));
  /* 11e4f2dc call dword ptr [0x11e79344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e79344))), 0x11e4f2e2u);
  /* 11e4f2e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4f2e5 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 11e4f2e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4f2eb cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4f2ef jne 0x11e4f2f5 */
  if (!C.zf) goto L_11e4f2f5;
  /* 11e4f2f1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e4f2f3 jmp 0x11e4f36b */
  goto L_11e4f36b;
L_11e4f2f5:;
  /* 11e4f2f5 push 4 */
  push32((uint32_t)(0x4u));
  /* 11e4f2f7 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11e4f2fc push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11e4f301 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e4f303 call dword ptr [0x11e79330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e79330))), 0x11e4f309u);
  /* 11e4f309 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4f30c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 11e4f30f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4f312 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4f316 jne 0x11e4f332 */
  if (!C.zf) goto L_11e4f332;
  /* 11e4f318 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4f31b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11e4f31e push ecx */
  push32((uint32_t)(ECX));
  /* 11e4f31f push 0 */
  push32((uint32_t)(0x0u));
  /* 11e4f321 mov edx, dword ptr [0x11e7828c] */
  EDX = (r32((uint32_t)(0x11e7828c)));
  /* 11e4f327 push edx */
  push32((uint32_t)(EDX));
  /* 11e4f328 call dword ptr [0x11e79358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e79358))), 0x11e4f32eu);
  /* 11e4f32e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e4f330 jmp 0x11e4f36b */
  goto L_11e4f36b;
L_11e4f332:;
  /* 11e4f332 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4f335 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11e4f33b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4f33e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11e4f345 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4f348 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 11e4f34f mov eax, dword ptr [0x11e78284] */
  EAX = (r32((uint32_t)(0x11e78284)));
  /* 11e4f354 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f357 mov dword ptr [0x11e78284], eax */
  w32((uint32_t)(0x11e78284), (EAX));
  /* 11e4f35c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4f35f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11e4f362 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 11e4f368 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11e4f36b:;
  /* 11e4f36b mov esp, ebp */
  ESP = (EBP);
  /* 11e4f36d pop ebp */
  EBP = (pop32());
  /* 11e4f36e ret  */
  ESPCHK(0x11e4f260u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f370 @ 0x11e4f370 (494 bytes, 149 insns) */
void f_11e4f370(void) {
  FTRACE(0x11e4f370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e4f370 push ebp */
  push32((uint32_t)(EBP));
  /* 11e4f371 mov ebp, esp */
  EBP = (ESP);
  /* 11e4f373 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4f376 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4f379 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11e4f37c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11e4f37f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4f382 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11e4f385 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e4f388 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_11e4f38f:;
  /* 11e4f38f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4f393 jl 0x11e4f3a8 */
  if ((C.sf!=C.of)) goto L_11e4f3a8;
  /* 11e4f395 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e4f398 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11e4f39a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e4f39d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e4f3a0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f3a3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11e4f3a6 jmp 0x11e4f38f */
  goto L_11e4f38f;
L_11e4f3a8:;
  /* 11e4f3a8 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e4f3ab imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e4f3b1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e4f3b4 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11e4f3bb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11e4f3be mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11e4f3c5 jmp 0x11e4f3d0 */
  goto L_11e4f3d0;
L_11e4f3c7:;
  /* 11e4f3c7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e4f3ca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f3cd mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_11e4f3d0:;
  /* 11e4f3d0 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4f3d4 jge 0x11e4f3f6 */
  if ((C.sf==C.of)) goto L_11e4f3f6;
  /* 11e4f3d6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e4f3d9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e4f3dc lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 11e4f3df mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11e4f3e2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e4f3e5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e4f3e8 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11e4f3eb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e4f3ee mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e4f3f1 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11e4f3f4 jmp 0x11e4f3c7 */
  goto L_11e4f3c7;
L_11e4f3f6:;
  /* 11e4f3f6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e4f3f9 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11e4f3fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4f3ff mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11e4f402 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f404 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11e4f407 push 4 */
  push32((uint32_t)(0x4u));
  /* 11e4f409 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11e4f40e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11e4f413 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e4f416 push edx */
  push32((uint32_t)(EDX));
  /* 11e4f417 call dword ptr [0x11e79330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e79330))), 0x11e4f41du);
  /* 11e4f41d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e4f41f jne 0x11e4f429 */
  if (!C.zf) goto L_11e4f429;
  /* 11e4f421 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e4f424 jmp 0x11e4f55a */
  goto L_11e4f55a;
L_11e4f429:;
  /* 11e4f429 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e4f42c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f431 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11e4f434 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e4f437 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e4f43a jmp 0x11e4f448 */
  goto L_11e4f448;
L_11e4f43c:;
  /* 11e4f43c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4f43f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f445 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11e4f448:;
  /* 11e4f448 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4f44b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4f44e ja 0x11e4f4ad */
  if ((!C.cf&&!C.zf)) goto L_11e4f4ad;
  /* 11e4f450 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4f453 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 11e4f45a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4f45d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 11e4f467 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4f46a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f46d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11e4f470 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e4f473 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 11e4f479 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e4f47c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f482 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e4f485 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11e4f488 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e4f48b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4f491 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e4f494 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11e4f497 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e4f49a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f49f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11e4f4a2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e4f4a5 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 11e4f4ab jmp 0x11e4f43c */
  goto L_11e4f43c;
L_11e4f4ad:;
  /* 11e4f4ad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e4f4b0 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f4b6 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11e4f4b9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e4f4bc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f4bf mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e4f4c2 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11e4f4c5 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e4f4c8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11e4f4cb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11e4f4ce mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e4f4d1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e4f4d4 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11e4f4d7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e4f4da add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f4dd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e4f4e0 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11e4f4e3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e4f4e6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11e4f4e9 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11e4f4ec mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e4f4ef mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e4f4f2 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11e4f4f5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e4f4f8 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e4f4fb mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 11e4f503 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e4f506 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e4f509 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 11e4f514 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e4f517 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 11e4f51b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e4f51e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 11e4f521 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11e4f524 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e4f527 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 11e4f52a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e4f52c jne 0x11e4f53d */
  if (!C.zf) goto L_11e4f53d;
  /* 11e4f52e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4f531 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e4f534 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11e4f537 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4f53a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11e4f53d:;
  /* 11e4f53d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11e4f542 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e4f545 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e4f547 not edx */
  EDX = (~(EDX));
  /* 11e4f549 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4f54c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11e4f54f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11e4f551 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4f554 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11e4f557 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_11e4f55a:;
  /* 11e4f55a mov esp, ebp */
  ESP = (EBP);
  /* 11e4f55c pop ebp */
  EBP = (pop32());
  /* 11e4f55d ret  */
  ESPCHK(0x11e4f370u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f560 @ 0x11e4f560 (1515 bytes, 489 insns) */
void f_11e4f560(void) {
  FTRACE(0x11e4f560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e4f560 push ebp */
  push32((uint32_t)(EBP));
  /* 11e4f561 mov ebp, esp */
  EBP = (ESP);
  /* 11e4f563 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4f566 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e4f569 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f56c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 11e4f56e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11e4f571 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4f574 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11e4f577 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11e4f57a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4f57d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e4f580 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4f583 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e4f586 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e4f589 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11e4f58c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e4f58f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4f592 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e4f598 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4f59b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11e4f5a2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11e4f5a5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e4f5a8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4f5ab mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11e4f5ae mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e4f5b1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e4f5b3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4f5b6 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11e4f5b9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e4f5bc add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f5bf mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11e4f5c2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e4f5c5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e4f5c7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11e4f5ca mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e4f5cd cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4f5d0 jle 0x11e4f886 */
  if ((C.zf||C.sf!=C.of)) goto L_11e4f886;
  /* 11e4f5d6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e4f5d9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11e4f5dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e4f5de jne 0x11e4f5eb */
  if (!C.zf) goto L_11e4f5eb;
  /* 11e4f5e0 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e4f5e3 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f5e6 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4f5e9 jle 0x11e4f5f2 */
  if ((C.zf||C.sf!=C.of)) goto L_11e4f5f2;
L_11e4f5eb:;
  /* 11e4f5eb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e4f5ed jmp 0x11e4fb47 */
  goto L_11e4fb47;
L_11e4f5f2:;
  /* 11e4f5f2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e4f5f5 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11e4f5f8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4f5fb mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11e4f5fe cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4f602 jbe 0x11e4f60b */
  if ((C.cf||C.zf)) goto L_11e4f60b;
  /* 11e4f604 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_11e4f60b:;
  /* 11e4f60b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e4f60e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e4f611 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e4f614 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4f617 jne 0x11e4f6ed */
  if (!C.zf) goto L_11e4f6ed;
  /* 11e4f61d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4f621 jae 0x11e4f682 */
  if (!C.cf) goto L_11e4f682;
  /* 11e4f623 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11e4f628 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e4f62b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e4f62d not edx */
  EDX = (~(EDX));
  /* 11e4f62f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4f632 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4f635 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11e4f639 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11e4f63b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4f63e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4f641 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11e4f645 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4f648 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f64b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11e4f64e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11e4f651 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4f654 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f657 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11e4f65a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4f65d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f660 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11e4f664 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e4f666 jne 0x11e4f680 */
  if (!C.zf) goto L_11e4f680;
  /* 11e4f668 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11e4f66d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e4f670 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e4f672 not edx */
  EDX = (~(EDX));
  /* 11e4f674 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4f677 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e4f679 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11e4f67b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4f67e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11e4f680:;
  /* 11e4f680 jmp 0x11e4f6ed */
  goto L_11e4f6ed;
L_11e4f682:;
  /* 11e4f682 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e4f685 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4f688 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11e4f68d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11e4f68f not eax */
  EAX = (~(EAX));
  /* 11e4f691 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4f694 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4f697 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11e4f69e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e4f6a0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4f6a3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4f6a6 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 11e4f6ad mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4f6b0 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f6b3 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11e4f6b6 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11e4f6b9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4f6bc add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f6bf mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11e4f6c2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4f6c5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f6c8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11e4f6cc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e4f6ce jne 0x11e4f6ed */
  if (!C.zf) goto L_11e4f6ed;
  /* 11e4f6d0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e4f6d3 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4f6d6 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11e4f6db shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11e4f6dd not eax */
  EAX = (~(EAX));
  /* 11e4f6df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4f6e2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e4f6e5 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11e4f6e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4f6ea mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11e4f6ed:;
  /* 11e4f6ed mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e4f6f0 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11e4f6f3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e4f6f6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11e4f6f9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11e4f6fc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e4f6ff mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11e4f702 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e4f705 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11e4f708 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11e4f70b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e4f70e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f711 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4f714 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11e4f717 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4f71b jle 0x11e4f867 */
  if ((C.zf||C.sf!=C.of)) goto L_11e4f867;
  /* 11e4f721 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e4f724 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f727 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11e4f72a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e4f72d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11e4f730 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4f733 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11e4f736 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4f73a jbe 0x11e4f743 */
  if ((C.cf||C.zf)) goto L_11e4f743;
  /* 11e4f73c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_11e4f743:;
  /* 11e4f743 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e4f746 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e4f749 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 11e4f74c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11e4f74f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e4f752 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e4f755 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e4f758 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11e4f75b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e4f75e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e4f761 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11e4f764 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e4f767 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e4f76a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11e4f76d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e4f770 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e4f773 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e4f776 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11e4f779 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e4f77c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e4f77f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e4f782 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4f785 jne 0x11e4f853 */
  if (!C.zf) goto L_11e4f853;
  /* 11e4f78b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4f78f jae 0x11e4f7ec */
  if (!C.cf) goto L_11e4f7ec;
  /* 11e4f791 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4f794 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f797 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11e4f79b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4f79e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f7a1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11e4f7a4 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11e4f7a7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4f7aa add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f7ad mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11e4f7b0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e4f7b2 jne 0x11e4f7ca */
  if (!C.zf) goto L_11e4f7ca;
  /* 11e4f7b4 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11e4f7b9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e4f7bc shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e4f7be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4f7c1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e4f7c3 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11e4f7c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4f7c8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11e4f7ca:;
  /* 11e4f7ca mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11e4f7cf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e4f7d2 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11e4f7d4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4f7d7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4f7da mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11e4f7de or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e4f7e0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4f7e3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4f7e6 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11e4f7ea jmp 0x11e4f853 */
  goto L_11e4f853;
L_11e4f7ec:;
  /* 11e4f7ec mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4f7ef add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f7f2 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11e4f7f6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4f7f9 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f7fc mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11e4f7ff add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11e4f802 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4f805 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f808 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11e4f80b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e4f80d jne 0x11e4f82a */
  if (!C.zf) goto L_11e4f82a;
  /* 11e4f80f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e4f812 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4f815 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11e4f81a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e4f81c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4f81f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11e4f822 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11e4f824 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4f827 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11e4f82a:;
  /* 11e4f82a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e4f82d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4f830 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11e4f835 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11e4f837 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4f83a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4f83d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11e4f844 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e4f846 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4f849 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4f84c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_11e4f853:;
  /* 11e4f853 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e4f856 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e4f859 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11e4f85b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e4f85e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f861 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e4f864 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_11e4f867:;
  /* 11e4f867 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e4f86a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f86d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e4f870 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11e4f872 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e4f875 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f878 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e4f87b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f87e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 11e4f881 jmp 0x11e4fb42 */
  goto L_11e4fb42;
L_11e4f886:;
  /* 11e4f886 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e4f889 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4f88c jge 0x11e4fb42 */
  if ((C.sf==C.of)) goto L_11e4fb42;
  /* 11e4f892 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e4f895 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f898 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e4f89b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11e4f89d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e4f8a0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f8a3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e4f8a6 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f8a9 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 11e4f8ac mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e4f8af add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f8b2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11e4f8b5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e4f8b8 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4f8bb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11e4f8be mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e4f8c1 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11e4f8c4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4f8c7 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11e4f8ca cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4f8ce jbe 0x11e4f8d7 */
  if ((C.cf||C.zf)) goto L_11e4f8d7;
  /* 11e4f8d0 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_11e4f8d7:;
  /* 11e4f8d7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e4f8da and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11e4f8dd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e4f8df jne 0x11e4fa20 */
  if (!C.zf) goto L_11e4fa20;
  /* 11e4f8e5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e4f8e8 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11e4f8eb sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4f8ee mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11e4f8f1 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4f8f5 jbe 0x11e4f8fe */
  if ((C.cf||C.zf)) goto L_11e4f8fe;
  /* 11e4f8f7 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_11e4f8fe:;
  /* 11e4f8fe mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e4f901 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e4f904 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e4f907 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4f90a jne 0x11e4f9e0 */
  if (!C.zf) goto L_11e4f9e0;
  /* 11e4f910 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4f914 jae 0x11e4f975 */
  if (!C.cf) goto L_11e4f975;
  /* 11e4f916 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11e4f91b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e4f91e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e4f920 not edx */
  EDX = (~(EDX));
  /* 11e4f922 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4f925 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4f928 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11e4f92c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11e4f92e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4f931 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4f934 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11e4f938 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4f93b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f93e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11e4f941 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11e4f944 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4f947 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f94a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11e4f94d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4f950 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f953 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11e4f957 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e4f959 jne 0x11e4f973 */
  if (!C.zf) goto L_11e4f973;
  /* 11e4f95b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11e4f960 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e4f963 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e4f965 not edx */
  EDX = (~(EDX));
  /* 11e4f967 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4f96a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e4f96c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11e4f96e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4f971 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11e4f973:;
  /* 11e4f973 jmp 0x11e4f9e0 */
  goto L_11e4f9e0;
L_11e4f975:;
  /* 11e4f975 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e4f978 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4f97b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11e4f980 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11e4f982 not eax */
  EAX = (~(EAX));
  /* 11e4f984 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4f987 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4f98a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11e4f991 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e4f993 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4f996 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4f999 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 11e4f9a0 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4f9a3 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f9a6 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11e4f9a9 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11e4f9ac mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4f9af add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f9b2 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11e4f9b5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4f9b8 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4f9bb movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11e4f9bf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e4f9c1 jne 0x11e4f9e0 */
  if (!C.zf) goto L_11e4f9e0;
  /* 11e4f9c3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e4f9c6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4f9c9 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11e4f9ce shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11e4f9d0 not eax */
  EAX = (~(EAX));
  /* 11e4f9d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4f9d5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e4f9d8 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11e4f9da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4f9dd mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11e4f9e0:;
  /* 11e4f9e0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e4f9e3 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11e4f9e6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e4f9e9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11e4f9ec mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11e4f9ef mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e4f9f2 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11e4f9f5 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e4f9f8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11e4f9fb mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11e4f9fe mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e4fa01 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4fa04 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11e4fa07 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e4fa0a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11e4fa0d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4fa10 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11e4fa13 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4fa17 jbe 0x11e4fa20 */
  if ((C.cf||C.zf)) goto L_11e4fa20;
  /* 11e4fa19 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_11e4fa20:;
  /* 11e4fa20 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e4fa23 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e4fa26 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 11e4fa29 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11e4fa2c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e4fa2f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e4fa32 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11e4fa35 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11e4fa38 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e4fa3b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e4fa3e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11e4fa41 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e4fa44 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e4fa47 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11e4fa4a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e4fa4d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11e4fa50 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e4fa53 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11e4fa56 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e4fa59 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e4fa5c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11e4fa5f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4fa62 jne 0x11e4fb2e */
  if (!C.zf) goto L_11e4fb2e;
  /* 11e4fa68 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4fa6c jae 0x11e4fac8 */
  if (!C.cf) goto L_11e4fac8;
  /* 11e4fa6e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4fa71 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4fa74 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11e4fa78 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4fa7b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4fa7e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11e4fa81 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11e4fa83 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4fa86 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4fa89 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11e4fa8c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e4fa8e jne 0x11e4faa6 */
  if (!C.zf) goto L_11e4faa6;
  /* 11e4fa90 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11e4fa95 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e4fa98 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11e4fa9a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4fa9d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e4fa9f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11e4faa1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4faa4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11e4faa6:;
  /* 11e4faa6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11e4faab mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e4faae shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e4fab0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4fab3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4fab6 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11e4faba or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11e4fabc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4fabf mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4fac2 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11e4fac6 jmp 0x11e4fb2e */
  goto L_11e4fb2e;
L_11e4fac8:;
  /* 11e4fac8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4facb add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4face movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11e4fad2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4fad5 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4fad8 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11e4fadb add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11e4fadd mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4fae0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4fae3 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11e4fae6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e4fae8 jne 0x11e4fb05 */
  if (!C.zf) goto L_11e4fb05;
  /* 11e4faea mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e4faed sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4faf0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11e4faf5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11e4faf7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4fafa mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e4fafd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11e4faff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e4fb02 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11e4fb05:;
  /* 11e4fb05 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e4fb08 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4fb0b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11e4fb10 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e4fb12 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4fb15 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4fb18 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11e4fb1f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11e4fb21 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4fb24 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e4fb27 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_11e4fb2e:;
  /* 11e4fb2e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e4fb31 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e4fb34 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11e4fb36 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e4fb39 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4fb3c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e4fb3f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_11e4fb42:;
  /* 11e4fb42 mov eax, 1 */
  EAX = (0x1u);
L_11e4fb47:;
  /* 11e4fb47 mov esp, ebp */
  ESP = (EBP);
  /* 11e4fb49 pop ebp */
  EBP = (pop32());
  /* 11e4fb4a ret  */
  ESPCHK(0x11e4f560u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb50 @ 0x11e4fb50 (304 bytes, 79 insns) */
void f_11e4fb50(void) {
  FTRACE(0x11e4fb50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e4fb50 push ebp */
  push32((uint32_t)(EBP));
  /* 11e4fb51 mov ebp, esp */
  EBP = (ESP);
  /* 11e4fb53 push ecx */
  push32((uint32_t)(ECX));
  /* 11e4fb54 cmp dword ptr [0x11e78280], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e78280))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4fb5b je 0x11e4fc7c */
  if (C.zf) goto L_11e4fc7c;
  /* 11e4fb61 mov eax, dword ptr [0x11e78278] */
  EAX = (r32((uint32_t)(0x11e78278)));
  /* 11e4fb66 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 11e4fb69 mov ecx, dword ptr [0x11e78280] */
  ECX = (r32((uint32_t)(0x11e78280)));
  /* 11e4fb6f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11e4fb72 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4fb74 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e4fb77 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11e4fb7c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11e4fb81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e4fb84 push eax */
  push32((uint32_t)(EAX));
  /* 11e4fb85 call dword ptr [0x11e79354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e79354))), 0x11e4fb8bu);
  /* 11e4fb8b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11e4fb90 mov ecx, dword ptr [0x11e78278] */
  ECX = (r32((uint32_t)(0x11e78278)));
  /* 11e4fb96 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e4fb98 mov eax, dword ptr [0x11e78280] */
  EAX = (r32((uint32_t)(0x11e78280)));
  /* 11e4fb9d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11e4fba0 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11e4fba2 mov edx, dword ptr [0x11e78280] */
  EDX = (r32((uint32_t)(0x11e78280)));
  /* 11e4fba8 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11e4fbab mov eax, dword ptr [0x11e78280] */
  EAX = (r32((uint32_t)(0x11e78280)));
  /* 11e4fbb0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11e4fbb3 mov edx, dword ptr [0x11e78278] */
  EDX = (r32((uint32_t)(0x11e78278)));
  /* 11e4fbb9 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 11e4fbc4 mov eax, dword ptr [0x11e78280] */
  EAX = (r32((uint32_t)(0x11e78280)));
  /* 11e4fbc9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11e4fbcc mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 11e4fbcf sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11e4fbd2 mov eax, dword ptr [0x11e78280] */
  EAX = (r32((uint32_t)(0x11e78280)));
  /* 11e4fbd7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11e4fbda mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 11e4fbdd mov edx, dword ptr [0x11e78280] */
  EDX = (r32((uint32_t)(0x11e78280)));
  /* 11e4fbe3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11e4fbe6 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 11e4fbea test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e4fbec jne 0x11e4fc02 */
  if (!C.zf) goto L_11e4fc02;
  /* 11e4fbee mov edx, dword ptr [0x11e78280] */
  EDX = (r32((uint32_t)(0x11e78280)));
  /* 11e4fbf4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11e4fbf7 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 11e4fbf9 mov ecx, dword ptr [0x11e78280] */
  ECX = (r32((uint32_t)(0x11e78280)));
  /* 11e4fbff mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11e4fc02:;
  /* 11e4fc02 mov edx, dword ptr [0x11e78280] */
  EDX = (r32((uint32_t)(0x11e78280)));
  /* 11e4fc08 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4fc0c jne 0x11e4fc72 */
  if (!C.zf) goto L_11e4fc72;
  /* 11e4fc0e cmp dword ptr [0x11e78284], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e78284))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4fc15 jle 0x11e4fc72 */
  if ((C.zf||C.sf!=C.of)) goto L_11e4fc72;
  /* 11e4fc17 mov eax, dword ptr [0x11e78280] */
  EAX = (r32((uint32_t)(0x11e78280)));
  /* 11e4fc1c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11e4fc1f push ecx */
  push32((uint32_t)(ECX));
  /* 11e4fc20 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e4fc22 mov edx, dword ptr [0x11e7828c] */
  EDX = (r32((uint32_t)(0x11e7828c)));
  /* 11e4fc28 push edx */
  push32((uint32_t)(EDX));
  /* 11e4fc29 call dword ptr [0x11e79358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e79358))), 0x11e4fc2fu);
  /* 11e4fc2f mov eax, dword ptr [0x11e78284] */
  EAX = (r32((uint32_t)(0x11e78284)));
  /* 11e4fc34 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e4fc37 mov ecx, dword ptr [0x11e78288] */
  ECX = (r32((uint32_t)(0x11e78288)));
  /* 11e4fc3d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4fc3f mov edx, dword ptr [0x11e78280] */
  EDX = (r32((uint32_t)(0x11e78280)));
  /* 11e4fc45 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4fc48 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4fc4a push ecx */
  push32((uint32_t)(ECX));
  /* 11e4fc4b mov eax, dword ptr [0x11e78280] */
  EAX = (r32((uint32_t)(0x11e78280)));
  /* 11e4fc50 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4fc53 push eax */
  push32((uint32_t)(EAX));
  /* 11e4fc54 mov ecx, dword ptr [0x11e78280] */
  ECX = (r32((uint32_t)(0x11e78280)));
  /* 11e4fc5a push ecx */
  push32((uint32_t)(ECX));
  /* 11e4fc5b call 0x11e52660 */
  push32(0x11e4fc60u); f_11e52660();
  /* 11e4fc60 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4fc63 mov edx, dword ptr [0x11e78284] */
  EDX = (r32((uint32_t)(0x11e78284)));
  /* 11e4fc69 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4fc6c mov dword ptr [0x11e78284], edx */
  w32((uint32_t)(0x11e78284), (EDX));
L_11e4fc72:;
  /* 11e4fc72 mov dword ptr [0x11e78280], 0 */
  w32((uint32_t)(0x11e78280), (0x0u));
L_11e4fc7c:;
  /* 11e4fc7c mov esp, ebp */
  ESP = (EBP);
  /* 11e4fc7e pop ebp */
  EBP = (pop32());
  /* 11e4fc7f ret  */
  ESPCHK(0x11e4fb50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc80 @ 0x11e4fc80 (1565 bytes, 343 insns) */
void f_11e4fc80(void) {
  FTRACE(0x11e4fc80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e4fc80 push ebp */
  push32((uint32_t)(EBP));
  /* 11e4fc81 mov ebp, esp */
  EBP = (ESP);
  /* 11e4fc83 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4fc89 mov eax, dword ptr [0x11e78284] */
  EAX = (r32((uint32_t)(0x11e78284)));
  /* 11e4fc8e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e4fc91 push eax */
  push32((uint32_t)(EAX));
  /* 11e4fc92 mov ecx, dword ptr [0x11e78288] */
  ECX = (r32((uint32_t)(0x11e78288)));
  /* 11e4fc98 push ecx */
  push32((uint32_t)(ECX));
  /* 11e4fc99 call dword ptr [0x11e793f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e793f0))), 0x11e4fc9fu);
  /* 11e4fc9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e4fca1 je 0x11e4fcab */
  if (C.zf) goto L_11e4fcab;
  /* 11e4fca3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e4fca6 jmp 0x11e50299 */
  goto L_11e50299;
L_11e4fcab:;
  /* 11e4fcab mov edx, dword ptr [0x11e78288] */
  EDX = (r32((uint32_t)(0x11e78288)));
  /* 11e4fcb1 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 11e4fcb7 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 11e4fcc1 jmp 0x11e4fcd2 */
  goto L_11e4fcd2;
L_11e4fcc3:;
  /* 11e4fcc3 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 11e4fcc9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4fccc mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_11e4fcd2:;
  /* 11e4fcd2 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 11e4fcd8 cmp ecx, dword ptr [0x11e78284] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11e78284))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4fcde jge 0x11e50297 */
  if ((C.sf==C.of)) goto L_11e50297;
  /* 11e4fce4 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11e4fcea mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11e4fced mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 11e4fcf3 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11e4fcf8 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 11e4fcfe push ecx */
  push32((uint32_t)(ECX));
  /* 11e4fcff call dword ptr [0x11e793f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e793f0))), 0x11e4fd05u);
  /* 11e4fd05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e4fd07 je 0x11e4fd13 */
  if (C.zf) goto L_11e4fd13;
  /* 11e4fd09 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 11e4fd0e jmp 0x11e50299 */
  goto L_11e50299;
L_11e4fd13:;
  /* 11e4fd13 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11e4fd19 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11e4fd1c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 11e4fd22 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 11e4fd28 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4fd2e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11e4fd31 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11e4fd37 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11e4fd3a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e4fd3d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 11e4fd47 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 11e4fd51 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11e4fd58 jmp 0x11e4fd63 */
  goto L_11e4fd63;
L_11e4fd5a:;
  /* 11e4fd5a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e4fd5d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4fd60 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11e4fd63:;
  /* 11e4fd63 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4fd67 jge 0x11e5025b */
  if ((C.sf==C.of)) goto L_11e5025b;
  /* 11e4fd6d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 11e4fd77 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 11e4fd81 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 11e4fd8b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 11e4fd95 jmp 0x11e4fda6 */
  goto L_11e4fda6;
L_11e4fd97:;
  /* 11e4fd97 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11e4fd9d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4fda0 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_11e4fda6:;
  /* 11e4fda6 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4fdad jge 0x11e4fdc2 */
  if ((C.sf==C.of)) goto L_11e4fdc2;
  /* 11e4fdaf mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11e4fdb5 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 11e4fdc0 jmp 0x11e4fd97 */
  goto L_11e4fd97;
L_11e4fdc2:;
  /* 11e4fdc2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4fdc6 jl 0x11e501fd */
  if ((C.sf!=C.of)) goto L_11e501fd;
  /* 11e4fdcc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11e4fdd1 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 11e4fdd7 push ecx */
  push32((uint32_t)(ECX));
  /* 11e4fdd8 call dword ptr [0x11e793f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e793f0))), 0x11e4fddeu);
  /* 11e4fdde test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e4fde0 je 0x11e4fdec */
  if (C.zf) goto L_11e4fdec;
  /* 11e4fde2 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 11e4fde7 jmp 0x11e50299 */
  goto L_11e50299;
L_11e4fdec:;
  /* 11e4fdec mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 11e4fdf2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11e4fdf5 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 11e4fdff jmp 0x11e4fe10 */
  goto L_11e4fe10;
L_11e4fe01:;
  /* 11e4fe01 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 11e4fe07 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4fe0a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_11e4fe10:;
  /* 11e4fe10 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4fe17 jge 0x11e4ff94 */
  if ((C.sf==C.of)) goto L_11e4ff94;
  /* 11e4fe1d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e4fe20 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4fe23 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 11e4fe29 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 11e4fe2f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4fe35 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 11e4fe3b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 11e4fe41 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4fe45 jne 0x11e4fe52 */
  if (!C.zf) goto L_11e4fe52;
  /* 11e4fe47 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 11e4fe4d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4fe50 je 0x11e4fe5c */
  if (C.zf) goto L_11e4fe5c;
L_11e4fe52:;
  /* 11e4fe52 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 11e4fe57 jmp 0x11e50299 */
  goto L_11e50299;
L_11e4fe5c:;
  /* 11e4fe5c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 11e4fe62 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e4fe64 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 11e4fe6a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 11e4fe70 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 11e4fe76 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 11e4fe7c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11e4fe7f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e4fe81 je 0x11e4feb9 */
  if (C.zf) goto L_11e4feb9;
  /* 11e4fe83 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 11e4fe89 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4fe8c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 11e4fe92 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4fe9c jle 0x11e4fea8 */
  if ((C.zf||C.sf!=C.of)) goto L_11e4fea8;
  /* 11e4fe9e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 11e4fea3 jmp 0x11e50299 */
  goto L_11e50299;
L_11e4fea8:;
  /* 11e4fea8 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 11e4feae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4feb1 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 11e4feb7 jmp 0x11e4fefb */
  goto L_11e4fefb;
L_11e4feb9:;
  /* 11e4feb9 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 11e4febf sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11e4fec2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e4fec5 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 11e4fecb cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4fed2 jle 0x11e4fede */
  if ((C.zf||C.sf!=C.of)) goto L_11e4fede;
  /* 11e4fed4 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_11e4fede:;
  /* 11e4fede mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11e4fee4 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 11e4feeb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4feee mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11e4fef4 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_11e4fefb:;
  /* 11e4fefb cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4ff02 jl 0x11e4ff1d */
  if ((C.sf!=C.of)) goto L_11e4ff1d;
  /* 11e4ff04 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 11e4ff0a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 11e4ff0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e4ff0f jne 0x11e4ff1d */
  if (!C.zf) goto L_11e4ff1d;
  /* 11e4ff11 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4ff1b jle 0x11e4ff27 */
  if ((C.zf||C.sf!=C.of)) goto L_11e4ff27;
L_11e4ff1d:;
  /* 11e4ff1d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 11e4ff22 jmp 0x11e50299 */
  goto L_11e50299;
L_11e4ff27:;
  /* 11e4ff27 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 11e4ff2d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4ff33 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11e4ff36 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4ff3c je 0x11e4ff48 */
  if (C.zf) goto L_11e4ff48;
  /* 11e4ff3e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 11e4ff43 jmp 0x11e50299 */
  goto L_11e50299;
L_11e4ff48:;
  /* 11e4ff48 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 11e4ff4e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4ff54 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 11e4ff5a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 11e4ff60 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4ff66 jb 0x11e4fe5c */
  if (C.cf) goto L_11e4fe5c;
  /* 11e4ff6c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 11e4ff72 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4ff78 je 0x11e4ff84 */
  if (C.zf) goto L_11e4ff84;
  /* 11e4ff7a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 11e4ff7f jmp 0x11e50299 */
  goto L_11e50299;
L_11e4ff84:;
  /* 11e4ff84 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e4ff87 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4ff8c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e4ff8f jmp 0x11e4fe01 */
  goto L_11e4fe01;
L_11e4ff94:;
  /* 11e4ff94 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e4ff97 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e4ff99 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4ff9f je 0x11e4ffab */
  if (C.zf) goto L_11e4ffab;
  /* 11e4ffa1 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 11e4ffa6 jmp 0x11e50299 */
  goto L_11e50299;
L_11e4ffab:;
  /* 11e4ffab mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e4ffae mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 11e4ffb4 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11e4ffbb jmp 0x11e4ffc6 */
  goto L_11e4ffc6;
L_11e4ffbd:;
  /* 11e4ffbd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e4ffc0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e4ffc3 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11e4ffc6:;
  /* 11e4ffc6 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e4ffca jge 0x11e501fd */
  if ((C.sf==C.of)) goto L_11e501fd;
  /* 11e4ffd0 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 11e4ffda mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 11e4ffe0 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_11e4ffe6:;
  /* 11e4ffe6 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 11e4ffec mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11e4ffef mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 11e4fff5 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11e4fffb cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e50001 je 0x11e5012a */
  if (C.zf) goto L_11e5012a;
  /* 11e50007 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e5000a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 11e50010 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e50017 je 0x11e5012a */
  if (C.zf) goto L_11e5012a;
  /* 11e5001d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11e50023 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e50029 jb 0x11e5003e */
  if (C.cf) goto L_11e5003e;
  /* 11e5002b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 11e50031 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e50036 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5003c jb 0x11e50048 */
  if (C.cf) goto L_11e50048;
L_11e5003e:;
  /* 11e5003e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 11e50043 jmp 0x11e50299 */
  goto L_11e50299;
L_11e50048:;
  /* 11e50048 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11e5004e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 11e50054 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 11e5005a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 11e50060 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e50063 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11e50066 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e50069 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5006e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_11e50074:;
  /* 11e50074 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e50077 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5007d je 0x11e5009e */
  if (C.zf) goto L_11e5009e;
  /* 11e5007f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e50082 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e50088 jne 0x11e5008c */
  if (!C.zf) goto L_11e5008c;
  /* 11e5008a jmp 0x11e5009e */
  goto L_11e5009e;
L_11e5008c:;
  /* 11e5008c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e5008f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e50091 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 11e50094 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e50097 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e50099 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11e5009c jmp 0x11e50074 */
  goto L_11e50074;
L_11e5009e:;
  /* 11e5009e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e500a1 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e500a7 jne 0x11e500b3 */
  if (!C.zf) goto L_11e500b3;
  /* 11e500a9 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 11e500ae jmp 0x11e50299 */
  goto L_11e50299;
L_11e500b3:;
  /* 11e500b3 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11e500b9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e500bb sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11e500be sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e500c1 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 11e500c7 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e500ce jle 0x11e500da */
  if ((C.zf||C.sf!=C.of)) goto L_11e500da;
  /* 11e500d0 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_11e500da:;
  /* 11e500da mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11e500e0 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e500e3 je 0x11e500ef */
  if (C.zf) goto L_11e500ef;
  /* 11e500e5 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 11e500ea jmp 0x11e50299 */
  goto L_11e50299;
L_11e500ef:;
  /* 11e500ef mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11e500f5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11e500f8 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e500fe je 0x11e5010a */
  if (C.zf) goto L_11e5010a;
  /* 11e50100 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 11e50105 jmp 0x11e50299 */
  goto L_11e50299;
L_11e5010a:;
  /* 11e5010a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11e50110 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 11e50116 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 11e5011c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5011f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 11e50125 jmp 0x11e4ffe6 */
  goto L_11e4ffe6;
L_11e5012a:;
  /* 11e5012a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e50131 je 0x11e501a1 */
  if (C.zf) goto L_11e501a1;
  /* 11e50133 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e50137 jge 0x11e5016b */
  if ((C.sf==C.of)) goto L_11e5016b;
  /* 11e50139 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11e5013e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e50141 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e50143 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 11e50149 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11e5014b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 11e50151 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11e50156 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e50159 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e5015b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 11e50161 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11e50163 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 11e50169 jmp 0x11e501a1 */
  goto L_11e501a1;
L_11e5016b:;
  /* 11e5016b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e5016e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e50171 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11e50176 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e50178 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 11e5017e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11e50180 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 11e50186 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e50189 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e5018c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11e50191 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e50193 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 11e50199 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11e5019b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_11e501a1:;
  /* 11e501a1 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 11e501a7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e501aa cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e501b0 jne 0x11e501c4 */
  if (!C.zf) goto L_11e501c4;
  /* 11e501b2 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e501b5 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 11e501bb cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e501c2 je 0x11e501ce */
  if (C.zf) goto L_11e501ce;
L_11e501c4:;
  /* 11e501c4 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 11e501c9 jmp 0x11e50299 */
  goto L_11e50299;
L_11e501ce:;
  /* 11e501ce mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 11e501d4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11e501d7 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e501dd je 0x11e501e9 */
  if (C.zf) goto L_11e501e9;
  /* 11e501df mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 11e501e4 jmp 0x11e50299 */
  goto L_11e50299;
L_11e501e9:;
  /* 11e501e9 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 11e501ef add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e501f2 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 11e501f8 jmp 0x11e4ffbd */
  goto L_11e4ffbd;
L_11e501fd:;
  /* 11e501fd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e50200 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 11e50206 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 11e5020c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e50210 jne 0x11e5022a */
  if (!C.zf) goto L_11e5022a;
  /* 11e50212 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e50215 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 11e5021b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 11e50221 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e50228 je 0x11e50231 */
  if (C.zf) goto L_11e50231;
L_11e5022a:;
  /* 11e5022a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 11e5022f jmp 0x11e50299 */
  goto L_11e50299;
L_11e50231:;
  /* 11e50231 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 11e50237 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5023d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 11e50243 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e50246 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5024b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11e5024e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e50251 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11e50253 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e50256 jmp 0x11e4fd5a */
  goto L_11e4fd5a;
L_11e5025b:;
  /* 11e5025b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11e50261 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 11e50267 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e50269 jne 0x11e5027c */
  if (!C.zf) goto L_11e5027c;
  /* 11e5026b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11e50271 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 11e50277 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5027a je 0x11e50283 */
  if (C.zf) goto L_11e50283;
L_11e5027c:;
  /* 11e5027c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 11e50281 jmp 0x11e50299 */
  goto L_11e50299;
L_11e50283:;
  /* 11e50283 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11e50289 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5028c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 11e50292 jmp 0x11e4fcc3 */
  goto L_11e4fcc3;
L_11e50297:;
  /* 11e50297 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e50299:;
  /* 11e50299 mov esp, ebp */
  ESP = (EBP);
  /* 11e5029b pop ebp */
  EBP = (pop32());
  /* 11e5029c ret  */
  ESPCHK(0x11e4fc80u, _esp0);
  ESP += 4; return;
}

/* FUN_100102a0 @ 0x11e502a0 (250 bytes, 92 insns) */
void f_11e502a0(void) {
  FTRACE(0x11e502a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e502a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e502a1 mov ebp, esp */
  EBP = (ESP);
  /* 11e502a3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e502a6 push ebx */
  push32((uint32_t)(EBX));
  /* 11e502a7 push esi */
  push32((uint32_t)(ESI));
  /* 11e502a8 push edi */
  push32((uint32_t)(EDI));
  /* 11e502a9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11e502ac mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11e502af lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11e502b2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_11e502b5:;
  /* 11e502b5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e502b9 jne 0x11e502d9 */
  if (!C.zf) goto L_11e502d9;
  /* 11e502bb push 0x11e71e84 */
  push32((uint32_t)(0x11e71e84u));
  /* 11e502c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e502c2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11e502c4 push 0x11e71e78 */
  push32((uint32_t)(0x11e71e78u));
  /* 11e502c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e502cb call 0x11e48dc0 */
  push32(0x11e502d0u); f_11e48dc0();
  /* 11e502d0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e502d3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e502d6 jne 0x11e502d9 */
  if (!C.zf) goto L_11e502d9;
  /* 11e502d8 int3  */
  x86_unimpl("int3 @ 0x11e502d8");
L_11e502d9:;
  /* 11e502d9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e502db test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e502dd jne 0x11e502b5 */
  if (!C.zf) goto L_11e502b5;
L_11e502df:;
  /* 11e502df cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e502e3 jne 0x11e50303 */
  if (!C.zf) goto L_11e50303;
  /* 11e502e5 push 0x11e71e68 */
  push32((uint32_t)(0x11e71e68u));
  /* 11e502ea push 0 */
  push32((uint32_t)(0x0u));
  /* 11e502ec push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11e502ee push 0x11e71e78 */
  push32((uint32_t)(0x11e71e78u));
  /* 11e502f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e502f5 call 0x11e48dc0 */
  push32(0x11e502fau); f_11e48dc0();
  /* 11e502fa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e502fd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e50300 jne 0x11e50303 */
  if (!C.zf) goto L_11e50303;
  /* 11e50302 int3  */
  x86_unimpl("int3 @ 0x11e50302");
L_11e50303:;
  /* 11e50303 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e50305 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e50307 jne 0x11e502df */
  if (!C.zf) goto L_11e502df;
  /* 11e50309 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e5030c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 11e50313 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e50316 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e50319 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11e5031c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e5031f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e50322 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11e50324 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e50327 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 11e5032e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e50331 push ecx */
  push32((uint32_t)(ECX));
  /* 11e50332 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e50335 push edx */
  push32((uint32_t)(EDX));
  /* 11e50336 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e50339 push eax */
  push32((uint32_t)(EAX));
  /* 11e5033a call 0x11e51700 */
  push32(0x11e5033fu); f_11e51700();
  /* 11e5033f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e50342 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11e50345 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e50348 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e5034b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e5034e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e50351 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11e50354 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e50357 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5035b jl 0x11e5037f */
  if ((C.sf!=C.of)) goto L_11e5037f;
  /* 11e5035d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e50360 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e50362 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11e50365 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e50367 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11e5036d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11e50370 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e50373 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e50375 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e50378 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e5037b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11e5037d jmp 0x11e50390 */
  goto L_11e50390;
L_11e5037f:;
  /* 11e5037f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e50382 push edx */
  push32((uint32_t)(EDX));
  /* 11e50383 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e50385 call 0x11e51480 */
  push32(0x11e5038au); f_11e51480();
  /* 11e5038a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5038d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_11e50390:;
  /* 11e50390 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e50393 pop edi */
  EDI = (pop32());
  /* 11e50394 pop esi */
  ESI = (pop32());
  /* 11e50395 pop ebx */
  EBX = (pop32());
  /* 11e50396 mov esp, ebp */
  ESP = (EBP);
  /* 11e50398 pop ebp */
  EBP = (pop32());
  /* 11e50399 ret  */
  ESPCHK(0x11e502a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100103a0 @ 0x11e503a0 (183 bytes, 58 insns) */
void f_11e503a0(void) {
  FTRACE(0x11e503a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e503a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e503a1 mov ebp, esp */
  EBP = (ESP);
  /* 11e503a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e503a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e503a9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e503ac cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e503b1 ja 0x11e503ca */
  if ((!C.cf&&!C.zf)) goto L_11e503ca;
  /* 11e503b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e503b6 mov edx, dword ptr [0x11e74db8] */
  EDX = (r32((uint32_t)(0x11e74db8)));
  /* 11e503bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e503be mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11e503c2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 11e503c5 jmp 0x11e50453 */
  goto L_11e50453;
L_11e503ca:;
  /* 11e503ca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e503cd sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11e503d0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11e503d6 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11e503dc mov edx, dword ptr [0x11e74db8] */
  EDX = (r32((uint32_t)(0x11e74db8)));
  /* 11e503e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e503e4 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11e503e8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11e503ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e503ef je 0x11e50413 */
  if (C.zf) goto L_11e50413;
  /* 11e503f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e503f4 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11e503f7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11e503fd mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 11e50400 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 11e50403 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 11e50406 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 11e5040a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 11e50411 jmp 0x11e50424 */
  goto L_11e50424;
L_11e50413:;
  /* 11e50413 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11e50416 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 11e50419 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 11e5041d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11e50424:;
  /* 11e50424 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e50426 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e50428 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e5042a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11e5042d push ecx */
  push32((uint32_t)(ECX));
  /* 11e5042e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e50431 push edx */
  push32((uint32_t)(EDX));
  /* 11e50432 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11e50435 push eax */
  push32((uint32_t)(EAX));
  /* 11e50436 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e50438 call 0x11e529a0 */
  push32(0x11e5043du); f_11e529a0();
  /* 11e5043d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e50440 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e50442 jne 0x11e50448 */
  if (!C.zf) goto L_11e50448;
  /* 11e50444 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e50446 jmp 0x11e50453 */
  goto L_11e50453;
L_11e50448:;
  /* 11e50448 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e5044b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e50450 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_11e50453:;
  /* 11e50453 mov esp, ebp */
  ESP = (EBP);
  /* 11e50455 pop ebp */
  EBP = (pop32());
  /* 11e50456 ret  */
  ESPCHK(0x11e503a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010460 @ 0x11e50460 (836 bytes, 238 insns) */
void f_11e50460(void) {
  FTRACE(0x11e50460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e50460 push ebp */
  push32((uint32_t)(EBP));
  /* 11e50461 mov ebp, esp */
  EBP = (ESP);
  /* 11e50463 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e50466 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11e50468 call 0x11e4c670 */
  push32(0x11e5046du); f_11e4c670();
  /* 11e5046d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e50470 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e50473 push eax */
  push32((uint32_t)(EAX));
  /* 11e50474 call 0x11e507b0 */
  push32(0x11e50479u); f_11e507b0();
  /* 11e50479 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5047c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11e5047f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e50482 cmp ecx, dword ptr [0x11e77fc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11e77fc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e50488 jne 0x11e5049b */
  if (!C.zf) goto L_11e5049b;
  /* 11e5048a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11e5048c call 0x11e4c710 */
  push32(0x11e50491u); f_11e4c710();
  /* 11e50491 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e50494 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e50496 jmp 0x11e507a0 */
  goto L_11e507a0;
L_11e5049b:;
  /* 11e5049b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5049f jne 0x11e504bc */
  if (!C.zf) goto L_11e504bc;
  /* 11e504a1 call 0x11e50890 */
  push32(0x11e504a6u); f_11e50890();
  /* 11e504a6 call 0x11e50910 */
  push32(0x11e504abu); f_11e50910();
  /* 11e504ab push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11e504ad call 0x11e4c710 */
  push32(0x11e504b2u); f_11e4c710();
  /* 11e504b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e504b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e504b7 jmp 0x11e507a0 */
  goto L_11e507a0;
L_11e504bc:;
  /* 11e504bc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e504c3 jmp 0x11e504ce */
  goto L_11e504ce;
L_11e504c5:;
  /* 11e504c5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e504c8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e504cb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11e504ce:;
  /* 11e504ce cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e504d2 jae 0x11e5061f */
  if (!C.cf) goto L_11e5061f;
  /* 11e504d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e504db imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e504de mov ecx, dword ptr [eax + 0x11e74fd8] */
  ECX = (r32((uint32_t)(EAX + 0x11e74fd8)));
  /* 11e504e4 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e504e7 jne 0x11e5061a */
  if (!C.zf) goto L_11e5061a;
  /* 11e504ed mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11e504f4 jmp 0x11e504ff */
  goto L_11e504ff;
L_11e504f6:;
  /* 11e504f6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e504f9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e504fc mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_11e504ff:;
  /* 11e504ff cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e50506 jae 0x11e50514 */
  if (!C.cf) goto L_11e50514;
  /* 11e50508 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e5050b mov byte ptr [eax + 0x11e78160], 0 */
  w8((uint32_t)(EAX + 0x11e78160), (0x0u));
  /* 11e50512 jmp 0x11e504f6 */
  goto L_11e504f6;
L_11e50514:;
  /* 11e50514 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11e5051b jmp 0x11e50526 */
  goto L_11e50526;
L_11e5051d:;
  /* 11e5051d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e50520 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e50523 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11e50526:;
  /* 11e50526 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5052a jae 0x11e505a7 */
  if (!C.cf) goto L_11e505a7;
  /* 11e5052c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e5052f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e50532 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e50535 lea ecx, [edx + eax*8 + 0x11e74fe8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x11e74fe8));
  /* 11e5053c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e5053f jmp 0x11e5054a */
  goto L_11e5054a;
L_11e50541:;
  /* 11e50541 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e50544 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e50547 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11e5054a:;
  /* 11e5054a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e5054d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e5054f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11e50551 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e50553 je 0x11e505a2 */
  if (C.zf) goto L_11e505a2;
  /* 11e50555 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e50558 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e5055a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11e5055d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e5055f je 0x11e505a2 */
  if (C.zf) goto L_11e505a2;
  /* 11e50561 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e50564 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e50566 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11e50568 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11e5056b jmp 0x11e50576 */
  goto L_11e50576;
L_11e5056d:;
  /* 11e5056d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e50570 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e50573 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11e50576:;
  /* 11e50576 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e50579 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e5057b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11e5057e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e50581 ja 0x11e505a0 */
  if ((!C.cf&&!C.zf)) goto L_11e505a0;
  /* 11e50583 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e50586 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e50589 mov dl, byte ptr [eax + 0x11e78161] */
  DL = (r8((uint32_t)(EAX + 0x11e78161)));
  /* 11e5058f or dl, byte ptr [ecx + 0x11e74fd0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x11e74fd0))); DL = (_r); fl_logic(_r,8); }
  /* 11e50595 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e50598 mov byte ptr [eax + 0x11e78161], dl */
  w8((uint32_t)(EAX + 0x11e78161), (DL));
  /* 11e5059e jmp 0x11e5056d */
  goto L_11e5056d;
L_11e505a0:;
  /* 11e505a0 jmp 0x11e50541 */
  goto L_11e50541;
L_11e505a2:;
  /* 11e505a2 jmp 0x11e5051d */
  goto L_11e5051d;
L_11e505a7:;
  /* 11e505a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e505aa mov dword ptr [0x11e77fc4], ecx */
  w32((uint32_t)(0x11e77fc4), (ECX));
  /* 11e505b0 mov dword ptr [0x11e7804c], 1 */
  w32((uint32_t)(0x11e7804c), (0x1u));
  /* 11e505ba mov edx, dword ptr [0x11e77fc4] */
  EDX = (r32((uint32_t)(0x11e77fc4)));
  /* 11e505c0 push edx */
  push32((uint32_t)(EDX));
  /* 11e505c1 call 0x11e50810 */
  push32(0x11e505c6u); f_11e50810();
  /* 11e505c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e505c9 mov dword ptr [0x11e78264], eax */
  w32((uint32_t)(0x11e78264), (EAX));
  /* 11e505ce mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11e505d5 jmp 0x11e505e0 */
  goto L_11e505e0;
L_11e505d7:;
  /* 11e505d7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e505da add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e505dd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11e505e0:;
  /* 11e505e0 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e505e4 jae 0x11e50604 */
  if (!C.cf) goto L_11e50604;
  /* 11e505e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e505e9 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e505ec mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e505ef mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e505f2 mov cx, word ptr [ecx + eax*2 + 0x11e74fdc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x11e74fdc)));
  /* 11e505fa mov word ptr [edx*2 + 0x11e78040], cx */
  w16((uint32_t)(EDX*2 + 0x11e78040), (CX));
  /* 11e50602 jmp 0x11e505d7 */
  goto L_11e505d7;
L_11e50604:;
  /* 11e50604 call 0x11e50910 */
  push32(0x11e50609u); f_11e50910();
  /* 11e50609 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11e5060b call 0x11e4c710 */
  push32(0x11e50610u); f_11e4c710();
  /* 11e50610 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e50613 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e50615 jmp 0x11e507a0 */
  goto L_11e507a0;
L_11e5061a:;
  /* 11e5061a jmp 0x11e504c5 */
  goto L_11e504c5;
L_11e5061f:;
  /* 11e5061f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 11e50622 push edx */
  push32((uint32_t)(EDX));
  /* 11e50623 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e50626 push eax */
  push32((uint32_t)(EAX));
  /* 11e50627 call dword ptr [0x11e79338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e79338))), 0x11e5062du);
  /* 11e5062d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e50630 jne 0x11e50772 */
  if (!C.zf) goto L_11e50772;
  /* 11e50636 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11e5063d jmp 0x11e50648 */
  goto L_11e50648;
L_11e5063f:;
  /* 11e5063f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e50642 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e50645 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_11e50648:;
  /* 11e50648 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5064f jae 0x11e5065d */
  if (!C.cf) goto L_11e5065d;
  /* 11e50651 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e50654 mov byte ptr [edx + 0x11e78160], 0 */
  w8((uint32_t)(EDX + 0x11e78160), (0x0u));
  /* 11e5065b jmp 0x11e5063f */
  goto L_11e5063f;
L_11e5065d:;
  /* 11e5065d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e50660 mov dword ptr [0x11e77fc4], eax */
  w32((uint32_t)(0x11e77fc4), (EAX));
  /* 11e50665 mov dword ptr [0x11e78264], 0 */
  w32((uint32_t)(0x11e78264), (0x0u));
  /* 11e5066f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e50673 jbe 0x11e5072e */
  if ((C.cf||C.zf)) goto L_11e5072e;
  /* 11e50679 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 11e5067c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11e5067f jmp 0x11e5068a */
  goto L_11e5068a;
L_11e50681:;
  /* 11e50681 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e50684 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e50687 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_11e5068a:;
  /* 11e5068a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e5068d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e5068f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11e50691 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e50693 je 0x11e506dc */
  if (C.zf) goto L_11e506dc;
  /* 11e50695 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e50698 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e5069a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11e5069d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e5069f je 0x11e506dc */
  if (C.zf) goto L_11e506dc;
  /* 11e506a1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e506a4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e506a6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11e506a8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11e506ab jmp 0x11e506b6 */
  goto L_11e506b6;
L_11e506ad:;
  /* 11e506ad mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e506b0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e506b3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11e506b6:;
  /* 11e506b6 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e506b9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e506bb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11e506be cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e506c1 ja 0x11e506da */
  if ((!C.cf&&!C.zf)) goto L_11e506da;
  /* 11e506c3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e506c6 mov cl, byte ptr [eax + 0x11e78161] */
  CL = (r8((uint32_t)(EAX + 0x11e78161)));
  /* 11e506cc or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 11e506cf mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e506d2 mov byte ptr [edx + 0x11e78161], cl */
  w8((uint32_t)(EDX + 0x11e78161), (CL));
  /* 11e506d8 jmp 0x11e506ad */
  goto L_11e506ad;
L_11e506da:;
  /* 11e506da jmp 0x11e50681 */
  goto L_11e50681;
L_11e506dc:;
  /* 11e506dc mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 11e506e3 jmp 0x11e506ee */
  goto L_11e506ee;
L_11e506e5:;
  /* 11e506e5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e506e8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e506eb mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11e506ee:;
  /* 11e506ee cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e506f5 jae 0x11e5070e */
  if (!C.cf) goto L_11e5070e;
  /* 11e506f7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e506fa mov dl, byte ptr [ecx + 0x11e78161] */
  DL = (r8((uint32_t)(ECX + 0x11e78161)));
  /* 11e50700 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 11e50703 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e50706 mov byte ptr [eax + 0x11e78161], dl */
  w8((uint32_t)(EAX + 0x11e78161), (DL));
  /* 11e5070c jmp 0x11e506e5 */
  goto L_11e506e5;
L_11e5070e:;
  /* 11e5070e mov ecx, dword ptr [0x11e77fc4] */
  ECX = (r32((uint32_t)(0x11e77fc4)));
  /* 11e50714 push ecx */
  push32((uint32_t)(ECX));
  /* 11e50715 call 0x11e50810 */
  push32(0x11e5071au); f_11e50810();
  /* 11e5071a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5071d mov dword ptr [0x11e78264], eax */
  w32((uint32_t)(0x11e78264), (EAX));
  /* 11e50722 mov dword ptr [0x11e7804c], 1 */
  w32((uint32_t)(0x11e7804c), (0x1u));
  /* 11e5072c jmp 0x11e50738 */
  goto L_11e50738;
L_11e5072e:;
  /* 11e5072e mov dword ptr [0x11e7804c], 0 */
  w32((uint32_t)(0x11e7804c), (0x0u));
L_11e50738:;
  /* 11e50738 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11e5073f jmp 0x11e5074a */
  goto L_11e5074a;
L_11e50741:;
  /* 11e50741 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e50744 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e50747 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11e5074a:;
  /* 11e5074a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5074e jae 0x11e5075f */
  if (!C.cf) goto L_11e5075f;
  /* 11e50750 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e50753 mov word ptr [eax*2 + 0x11e78040], 0 */
  w16((uint32_t)(EAX*2 + 0x11e78040), (0x0u));
  /* 11e5075d jmp 0x11e50741 */
  goto L_11e50741;
L_11e5075f:;
  /* 11e5075f call 0x11e50910 */
  push32(0x11e50764u); f_11e50910();
  /* 11e50764 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11e50766 call 0x11e4c710 */
  push32(0x11e5076bu); f_11e4c710();
  /* 11e5076b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5076e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e50770 jmp 0x11e507a0 */
  goto L_11e507a0;
L_11e50772:;
  /* 11e50772 cmp dword ptr [0x11e76b9c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e76b9c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e50779 je 0x11e50793 */
  if (C.zf) goto L_11e50793;
  /* 11e5077b call 0x11e50890 */
  push32(0x11e50780u); f_11e50890();
  /* 11e50780 call 0x11e50910 */
  push32(0x11e50785u); f_11e50910();
  /* 11e50785 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11e50787 call 0x11e4c710 */
  push32(0x11e5078cu); f_11e4c710();
  /* 11e5078c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5078f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e50791 jmp 0x11e507a0 */
  goto L_11e507a0;
L_11e50793:;
  /* 11e50793 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11e50795 call 0x11e4c710 */
  push32(0x11e5079au); f_11e4c710();
  /* 11e5079a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5079d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11e507a0:;
  /* 11e507a0 mov esp, ebp */
  ESP = (EBP);
  /* 11e507a2 pop ebp */
  EBP = (pop32());
  /* 11e507a3 ret  */
  ESPCHK(0x11e50460u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x11e507b0 (89 bytes, 21 insns) */
void f_11e507b0(void) {
  FTRACE(0x11e507b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e507b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e507b1 mov ebp, esp */
  EBP = (ESP);
  /* 11e507b3 mov dword ptr [0x11e76b9c], 0 */
  w32((uint32_t)(0x11e76b9c), (0x0u));
  /* 11e507bd cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e507c1 jne 0x11e507d5 */
  if (!C.zf) goto L_11e507d5;
  /* 11e507c3 mov dword ptr [0x11e76b9c], 1 */
  w32((uint32_t)(0x11e76b9c), (0x1u));
  /* 11e507cd call dword ptr [0x11e79324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e79324))), 0x11e507d3u);
  /* 11e507d3 jmp 0x11e50807 */
  goto L_11e50807;
L_11e507d5:;
  /* 11e507d5 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e507d9 jne 0x11e507ed */
  if (!C.zf) goto L_11e507ed;
  /* 11e507db mov dword ptr [0x11e76b9c], 1 */
  w32((uint32_t)(0x11e76b9c), (0x1u));
  /* 11e507e5 call dword ptr [0x11e79328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e79328))), 0x11e507ebu);
  /* 11e507eb jmp 0x11e50807 */
  goto L_11e50807;
L_11e507ed:;
  /* 11e507ed cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e507f1 jne 0x11e50804 */
  if (!C.zf) goto L_11e50804;
  /* 11e507f3 mov dword ptr [0x11e76b9c], 1 */
  w32((uint32_t)(0x11e76b9c), (0x1u));
  /* 11e507fd mov eax, dword ptr [0x11e76bb8] */
  EAX = (r32((uint32_t)(0x11e76bb8)));
  /* 11e50802 jmp 0x11e50807 */
  goto L_11e50807;
L_11e50804:;
  /* 11e50804 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11e50807:;
  /* 11e50807 pop ebp */
  EBP = (pop32());
  /* 11e50808 ret  */
  ESPCHK(0x11e507b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010810 @ 0x11e50810 (80 bytes, 26 insns) [1 switch table(s)] */
void f_11e50810(void) {
  FTRACE(0x11e50810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e50810 push ebp */
  push32((uint32_t)(EBP));
  /* 11e50811 mov ebp, esp */
  EBP = (ESP);
  /* 11e50813 push ecx */
  push32((uint32_t)(ECX));
  /* 11e50814 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e50817 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e5081a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e5081d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e50823 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e50826 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5082a ja 0x11e5085a */
  if ((!C.cf&&!C.zf)) goto L_11e5085a;
  /* 11e5082c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e5082f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e50831 mov dl, byte ptr [eax + 0x11e50874] */
  DL = (r8((uint32_t)(EAX + 0x11e50874)));
  /* 11e50837 jmp dword ptr [edx*4 + 0x11e50860] */
  switch (EDX) {
    case 0: goto L_11e5083e;
    case 1: goto L_11e50845;
    case 2: goto L_11e5084c;
    case 3: goto L_11e50853;
    case 4: goto L_11e5085a;
    default: x86_unimpl("switch@0x11e50837 out of table"); return;
  }
L_11e5083e:;
  /* 11e5083e mov eax, 0x411 */
  EAX = (0x411u);
  /* 11e50843 jmp 0x11e5085c */
  goto L_11e5085c;
L_11e50845:;
  /* 11e50845 mov eax, 0x804 */
  EAX = (0x804u);
  /* 11e5084a jmp 0x11e5085c */
  goto L_11e5085c;
L_11e5084c:;
  /* 11e5084c mov eax, 0x412 */
  EAX = (0x412u);
  /* 11e50851 jmp 0x11e5085c */
  goto L_11e5085c;
L_11e50853:;
  /* 11e50853 mov eax, 0x404 */
  EAX = (0x404u);
  /* 11e50858 jmp 0x11e5085c */
  goto L_11e5085c;
L_11e5085a:;
  /* 11e5085a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e5085c:;
  /* 11e5085c mov esp, ebp */
  ESP = (EBP);
  /* 11e5085e pop ebp */
  EBP = (pop32());
  /* 11e5085f ret  */
  ESPCHK(0x11e50810u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x11e50890 (116 bytes, 29 insns) */
void f_11e50890(void) {
  FTRACE(0x11e50890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e50890 push ebp */
  push32((uint32_t)(EBP));
  /* 11e50891 mov ebp, esp */
  EBP = (ESP);
  /* 11e50893 push ecx */
  push32((uint32_t)(ECX));
  /* 11e50894 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e5089b jmp 0x11e508a6 */
  goto L_11e508a6;
L_11e5089d:;
  /* 11e5089d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e508a0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e508a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11e508a6:;
  /* 11e508a6 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e508ad jge 0x11e508bb */
  if ((C.sf==C.of)) goto L_11e508bb;
  /* 11e508af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e508b2 mov byte ptr [ecx + 0x11e78160], 0 */
  w8((uint32_t)(ECX + 0x11e78160), (0x0u));
  /* 11e508b9 jmp 0x11e5089d */
  goto L_11e5089d;
L_11e508bb:;
  /* 11e508bb mov dword ptr [0x11e77fc4], 0 */
  w32((uint32_t)(0x11e77fc4), (0x0u));
  /* 11e508c5 mov dword ptr [0x11e7804c], 0 */
  w32((uint32_t)(0x11e7804c), (0x0u));
  /* 11e508cf mov dword ptr [0x11e78264], 0 */
  w32((uint32_t)(0x11e78264), (0x0u));
  /* 11e508d9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e508e0 jmp 0x11e508eb */
  goto L_11e508eb;
L_11e508e2:;
  /* 11e508e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e508e5 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e508e8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11e508eb:;
  /* 11e508eb cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e508ef jge 0x11e50900 */
  if ((C.sf==C.of)) goto L_11e50900;
  /* 11e508f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e508f4 mov word ptr [eax*2 + 0x11e78040], 0 */
  w16((uint32_t)(EAX*2 + 0x11e78040), (0x0u));
  /* 11e508fe jmp 0x11e508e2 */
  goto L_11e508e2;
L_11e50900:;
  /* 11e50900 mov esp, ebp */
  ESP = (EBP);
  /* 11e50902 pop ebp */
  EBP = (pop32());
  /* 11e50903 ret  */
  ESPCHK(0x11e50890u, _esp0);
  ESP += 4; return;
}

/* FUN_10010910 @ 0x11e50910 (770 bytes, 175 insns) */
void f_11e50910(void) {
  FTRACE(0x11e50910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e50910 push ebp */
  push32((uint32_t)(EBP));
  /* 11e50911 mov ebp, esp */
  EBP = (ESP);
  /* 11e50913 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e50919 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 11e5091f push eax */
  push32((uint32_t)(EAX));
  /* 11e50920 mov ecx, dword ptr [0x11e77fc4] */
  ECX = (r32((uint32_t)(0x11e77fc4)));
  /* 11e50926 push ecx */
  push32((uint32_t)(ECX));
  /* 11e50927 call dword ptr [0x11e79338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e79338))), 0x11e5092du);
  /* 11e5092d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e50930 jne 0x11e50b49 */
  if (!C.zf) goto L_11e50b49;
  /* 11e50936 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 11e50940 jmp 0x11e50951 */
  goto L_11e50951;
L_11e50942:;
  /* 11e50942 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11e50948 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5094b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_11e50951:;
  /* 11e50951 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5095b jae 0x11e50972 */
  if (!C.cf) goto L_11e50972;
  /* 11e5095d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11e50963 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 11e50969 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 11e50970 jmp 0x11e50942 */
  goto L_11e50942;
L_11e50972:;
  /* 11e50972 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 11e50979 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 11e5097f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e50982 jmp 0x11e5098d */
  goto L_11e5098d;
L_11e50984:;
  /* 11e50984 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e50987 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5098a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11e5098d:;
  /* 11e5098d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e50990 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e50992 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11e50994 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e50996 je 0x11e509d8 */
  if (C.zf) goto L_11e509d8;
  /* 11e50998 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e5099b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e5099d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11e5099f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 11e509a5 jmp 0x11e509b6 */
  goto L_11e509b6;
L_11e509a7:;
  /* 11e509a7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11e509ad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e509b0 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_11e509b6:;
  /* 11e509b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e509b9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e509bb mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11e509be cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e509c4 ja 0x11e509d6 */
  if ((!C.cf&&!C.zf)) goto L_11e509d6;
  /* 11e509c6 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11e509cc mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 11e509d4 jmp 0x11e509a7 */
  goto L_11e509a7;
L_11e509d6:;
  /* 11e509d6 jmp 0x11e50984 */
  goto L_11e50984;
L_11e509d8:;
  /* 11e509d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e509da mov eax, dword ptr [0x11e78264] */
  EAX = (r32((uint32_t)(0x11e78264)));
  /* 11e509df push eax */
  push32((uint32_t)(EAX));
  /* 11e509e0 mov ecx, dword ptr [0x11e77fc4] */
  ECX = (r32((uint32_t)(0x11e77fc4)));
  /* 11e509e6 push ecx */
  push32((uint32_t)(ECX));
  /* 11e509e7 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 11e509ed push edx */
  push32((uint32_t)(EDX));
  /* 11e509ee push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11e509f3 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 11e509f9 push eax */
  push32((uint32_t)(EAX));
  /* 11e509fa push 1 */
  push32((uint32_t)(0x1u));
  /* 11e509fc call 0x11e529a0 */
  push32(0x11e50a01u); f_11e529a0();
  /* 11e50a01 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e50a04 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e50a06 mov ecx, dword ptr [0x11e77fc4] */
  ECX = (r32((uint32_t)(0x11e77fc4)));
  /* 11e50a0c push ecx */
  push32((uint32_t)(ECX));
  /* 11e50a0d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11e50a12 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 11e50a18 push edx */
  push32((uint32_t)(EDX));
  /* 11e50a19 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11e50a1e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 11e50a24 push eax */
  push32((uint32_t)(EAX));
  /* 11e50a25 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11e50a2a mov ecx, dword ptr [0x11e78264] */
  ECX = (r32((uint32_t)(0x11e78264)));
  /* 11e50a30 push ecx */
  push32((uint32_t)(ECX));
  /* 11e50a31 call 0x11e52b60 */
  push32(0x11e50a36u); f_11e52b60();
  /* 11e50a36 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e50a39 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e50a3b mov edx, dword ptr [0x11e77fc4] */
  EDX = (r32((uint32_t)(0x11e77fc4)));
  /* 11e50a41 push edx */
  push32((uint32_t)(EDX));
  /* 11e50a42 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11e50a47 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 11e50a4d push eax */
  push32((uint32_t)(EAX));
  /* 11e50a4e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11e50a53 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 11e50a59 push ecx */
  push32((uint32_t)(ECX));
  /* 11e50a5a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11e50a5f mov edx, dword ptr [0x11e78264] */
  EDX = (r32((uint32_t)(0x11e78264)));
  /* 11e50a65 push edx */
  push32((uint32_t)(EDX));
  /* 11e50a66 call 0x11e52b60 */
  push32(0x11e50a6bu); f_11e52b60();
  /* 11e50a6b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e50a6e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 11e50a78 jmp 0x11e50a89 */
  goto L_11e50a89;
L_11e50a7a:;
  /* 11e50a7a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11e50a80 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e50a83 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_11e50a89:;
  /* 11e50a89 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e50a93 jae 0x11e50b44 */
  if (!C.cf) goto L_11e50b44;
  /* 11e50a99 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11e50a9f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e50aa1 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 11e50aa9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11e50aac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e50aae je 0x11e50ae6 */
  if (C.zf) goto L_11e50ae6;
  /* 11e50ab0 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11e50ab6 mov cl, byte ptr [eax + 0x11e78161] */
  CL = (r8((uint32_t)(EAX + 0x11e78161)));
  /* 11e50abc or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 11e50abf mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11e50ac5 mov byte ptr [edx + 0x11e78161], cl */
  w8((uint32_t)(EDX + 0x11e78161), (CL));
  /* 11e50acb mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11e50ad1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11e50ad7 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 11e50ade mov byte ptr [eax + 0x11e78060], dl */
  w8((uint32_t)(EAX + 0x11e78060), (DL));
  /* 11e50ae4 jmp 0x11e50b3f */
  goto L_11e50b3f;
L_11e50ae6:;
  /* 11e50ae6 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11e50aec xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e50aee mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 11e50af6 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11e50af9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e50afb je 0x11e50b32 */
  if (C.zf) goto L_11e50b32;
  /* 11e50afd mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11e50b03 mov al, byte ptr [edx + 0x11e78161] */
  AL = (r8((uint32_t)(EDX + 0x11e78161)));
  /* 11e50b09 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11e50b0b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11e50b11 mov byte ptr [ecx + 0x11e78161], al */
  w8((uint32_t)(ECX + 0x11e78161), (AL));
  /* 11e50b17 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11e50b1d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11e50b23 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 11e50b2a mov byte ptr [edx + 0x11e78060], cl */
  w8((uint32_t)(EDX + 0x11e78060), (CL));
  /* 11e50b30 jmp 0x11e50b3f */
  goto L_11e50b3f;
L_11e50b32:;
  /* 11e50b32 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11e50b38 mov byte ptr [edx + 0x11e78060], 0 */
  w8((uint32_t)(EDX + 0x11e78060), (0x0u));
L_11e50b3f:;
  /* 11e50b3f jmp 0x11e50a7a */
  goto L_11e50a7a;
L_11e50b44:;
  /* 11e50b44 jmp 0x11e50c0e */
  goto L_11e50c0e;
L_11e50b49:;
  /* 11e50b49 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 11e50b53 jmp 0x11e50b64 */
  goto L_11e50b64;
L_11e50b55:;
  /* 11e50b55 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11e50b5b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e50b5e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_11e50b64:;
  /* 11e50b64 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e50b6e jae 0x11e50c0e */
  if (!C.cf) goto L_11e50c0e;
  /* 11e50b74 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e50b7b jb 0x11e50bb8 */
  if (C.cf) goto L_11e50bb8;
  /* 11e50b7d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e50b84 ja 0x11e50bb8 */
  if ((!C.cf&&!C.zf)) goto L_11e50bb8;
  /* 11e50b86 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11e50b8c mov dl, byte ptr [ecx + 0x11e78161] */
  DL = (r8((uint32_t)(ECX + 0x11e78161)));
  /* 11e50b92 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 11e50b95 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11e50b9b mov byte ptr [eax + 0x11e78161], dl */
  w8((uint32_t)(EAX + 0x11e78161), (DL));
  /* 11e50ba1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11e50ba7 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e50baa mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11e50bb0 mov byte ptr [edx + 0x11e78060], cl */
  w8((uint32_t)(EDX + 0x11e78060), (CL));
  /* 11e50bb6 jmp 0x11e50c09 */
  goto L_11e50c09;
L_11e50bb8:;
  /* 11e50bb8 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e50bbf jb 0x11e50bfc */
  if (C.cf) goto L_11e50bfc;
  /* 11e50bc1 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e50bc8 ja 0x11e50bfc */
  if ((!C.cf&&!C.zf)) goto L_11e50bfc;
  /* 11e50bca mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11e50bd0 mov cl, byte ptr [eax + 0x11e78161] */
  CL = (r8((uint32_t)(EAX + 0x11e78161)));
  /* 11e50bd6 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11e50bd9 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11e50bdf mov byte ptr [edx + 0x11e78161], cl */
  w8((uint32_t)(EDX + 0x11e78161), (CL));
  /* 11e50be5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11e50beb sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e50bee mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11e50bf4 mov byte ptr [ecx + 0x11e78060], al */
  w8((uint32_t)(ECX + 0x11e78060), (AL));
  /* 11e50bfa jmp 0x11e50c09 */
  goto L_11e50c09;
L_11e50bfc:;
  /* 11e50bfc mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11e50c02 mov byte ptr [edx + 0x11e78060], 0 */
  w8((uint32_t)(EDX + 0x11e78060), (0x0u));
L_11e50c09:;
  /* 11e50c09 jmp 0x11e50b55 */
  goto L_11e50b55;
L_11e50c0e:;
  /* 11e50c0e mov esp, ebp */
  ESP = (EBP);
  /* 11e50c10 pop ebp */
  EBP = (pop32());
  /* 11e50c11 ret  */
  ESPCHK(0x11e50910u, _esp0);
  ESP += 4; return;
}

/* FUN_10010c20 @ 0x11e50c20 (23 bytes, 9 insns) */
void f_11e50c20(void) {
  FTRACE(0x11e50c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e50c20 push ebp */
  push32((uint32_t)(EBP));
  /* 11e50c21 mov ebp, esp */
  EBP = (ESP);
  /* 11e50c23 cmp dword ptr [0x11e7804c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e7804c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e50c2a je 0x11e50c33 */
  if (C.zf) goto L_11e50c33;
  /* 11e50c2c mov eax, dword ptr [0x11e77fc4] */
  EAX = (r32((uint32_t)(0x11e77fc4)));
  /* 11e50c31 jmp 0x11e50c35 */
  goto L_11e50c35;
L_11e50c33:;
  /* 11e50c33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e50c35:;
  /* 11e50c35 pop ebp */
  EBP = (pop32());
  /* 11e50c36 ret  */
  ESPCHK(0x11e50c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10010c40 @ 0x11e50c40 (34 bytes, 10 insns) */
void f_11e50c40(void) {
  FTRACE(0x11e50c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e50c40 push ebp */
  push32((uint32_t)(EBP));
  /* 11e50c41 mov ebp, esp */
  EBP = (ESP);
  /* 11e50c43 cmp dword ptr [0x11e78410], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e78410))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e50c4a jne 0x11e50c60 */
  if (!C.zf) goto L_11e50c60;
  /* 11e50c4c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 11e50c4e call 0x11e50460 */
  push32(0x11e50c53u); f_11e50460();
  /* 11e50c53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e50c56 mov dword ptr [0x11e78410], 1 */
  w32((uint32_t)(0x11e78410), (0x1u));
L_11e50c60:;
  /* 11e50c60 pop ebp */
  EBP = (pop32());
  /* 11e50c61 ret  */
  ESPCHK(0x11e50c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10010c70 @ 0x11e50c70 (664 bytes, 265 insns) [15 switch table(s)] */
void f_11e50c70(void) {
  FTRACE(0x11e50c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e50c70 push ebp */
  push32((uint32_t)(EBP));
  /* 11e50c71 mov ebp, esp */
  EBP = (ESP);
  /* 11e50c73 push edi */
  push32((uint32_t)(EDI));
  /* 11e50c74 push esi */
  push32((uint32_t)(ESI));
  /* 11e50c75 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11e50c78 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e50c7b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11e50c7e mov eax, ecx */
  EAX = (ECX);
  /* 11e50c80 mov edx, ecx */
  EDX = (ECX);
  /* 11e50c82 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e50c84 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e50c86 jbe 0x11e50c90 */
  if ((C.cf||C.zf)) goto L_11e50c90;
  /* 11e50c88 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e50c8a jb 0x11e50e08 */
  if (C.cf) goto L_11e50e08;
L_11e50c90:;
  /* 11e50c90 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11e50c96 jne 0x11e50cac */
  if (!C.zf) goto L_11e50cac;
  /* 11e50c98 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e50c9b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11e50c9e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e50ca1 jb 0x11e50ccc */
  if (C.cf) goto L_11e50ccc;
  /* 11e50ca3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11e50ca5 jmp dword ptr [edx*4 + 0x11e50db8] */
  switch (EDX) {
    case 0: goto L_11e50dc8;
    case 1: goto L_11e50dd0;
    case 2: goto L_11e50ddc;
    case 3: goto L_11e50df0;
    default: x86_unimpl("switch@0x11e50ca5 out of table"); return;
  }
L_11e50cac:;
  /* 11e50cac mov eax, edi */
  EAX = (EDI);
  /* 11e50cae mov edx, 3 */
  EDX = (0x3u);
  /* 11e50cb3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e50cb6 jb 0x11e50cc4 */
  if (C.cf) goto L_11e50cc4;
  /* 11e50cb8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11e50cbb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e50cbd jmp dword ptr [eax*4 + 0x11e50cd0] */
  switch (EAX) {
    case 1: goto L_11e50ce0;
    case 2: goto L_11e50d0c;
    case 3: goto L_11e50d30;
    default: x86_unimpl("switch@0x11e50cbd out of table"); return;
  }
L_11e50cc4:;
  /* 11e50cc4 jmp dword ptr [ecx*4 + 0x11e50dc8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11e50dc8)))); return;
  /* 11e50ccb nop  */
  /* nop */
L_11e50ccc:;
  /* 11e50ccc jmp dword ptr [ecx*4 + 0x11e50d4c] */
  switch (ECX) {
    case 0: goto L_11e50daf;
    case 1: goto L_11e50d9c;
    case 2: goto L_11e50d94;
    case 3: goto L_11e50d8c;
    case 4: goto L_11e50d84;
    case 5: goto L_11e50d7c;
    case 6: goto L_11e50d74;
    case 7: goto L_11e50d6c;
    default: x86_unimpl("switch@0x11e50ccc out of table"); return;
  }
  /* 11e50cd3 nop  */
  /* nop */
L_11e50ce0:;
  /* 11e50ce0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11e50ce2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e50ce4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11e50ce6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11e50ce9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11e50cec mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11e50cef shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e50cf2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11e50cf5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e50cf8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e50cfb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e50cfe jb 0x11e50ccc */
  if (C.cf) goto L_11e50ccc;
  /* 11e50d00 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11e50d02 jmp dword ptr [edx*4 + 0x11e50db8] */
  switch (EDX) {
    case 0: goto L_11e50dc8;
    case 1: goto L_11e50dd0;
    case 2: goto L_11e50ddc;
    case 3: goto L_11e50df0;
    default: x86_unimpl("switch@0x11e50d02 out of table"); return;
  }
  /* 11e50d09 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11e50d0c:;
  /* 11e50d0c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11e50d0e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e50d10 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11e50d12 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11e50d15 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e50d18 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11e50d1b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e50d1e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e50d21 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e50d24 jb 0x11e50ccc */
  if (C.cf) goto L_11e50ccc;
  /* 11e50d26 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11e50d28 jmp dword ptr [edx*4 + 0x11e50db8] */
  switch (EDX) {
    case 0: goto L_11e50dc8;
    case 1: goto L_11e50dd0;
    case 2: goto L_11e50ddc;
    case 3: goto L_11e50df0;
    default: x86_unimpl("switch@0x11e50d28 out of table"); return;
  }
  /* 11e50d2f nop  */
  /* nop */
L_11e50d30:;
  /* 11e50d30 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11e50d32 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e50d34 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11e50d36 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e50d37 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e50d3a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11e50d3b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e50d3e jb 0x11e50ccc */
  if (C.cf) goto L_11e50ccc;
  /* 11e50d40 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11e50d42 jmp dword ptr [edx*4 + 0x11e50db8] */
  switch (EDX) {
    case 0: goto L_11e50dc8;
    case 1: goto L_11e50dd0;
    case 2: goto L_11e50ddc;
    case 3: goto L_11e50df0;
    default: x86_unimpl("switch@0x11e50d42 out of table"); return;
  }
  /* 11e50d49 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11e50d6c:;
  /* 11e50d6c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11e50d70 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11e50d74:;
  /* 11e50d74 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11e50d78 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11e50d7c:;
  /* 11e50d7c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11e50d80 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11e50d84:;
  /* 11e50d84 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11e50d88 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11e50d8c:;
  /* 11e50d8c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11e50d90 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11e50d94:;
  /* 11e50d94 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11e50d98 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11e50d9c:;
  /* 11e50d9c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11e50da0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11e50da4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11e50dab add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e50dad add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11e50daf:;
  /* 11e50daf jmp dword ptr [edx*4 + 0x11e50db8] */
  switch (EDX) {
    case 0: goto L_11e50dc8;
    case 1: goto L_11e50dd0;
    case 2: goto L_11e50ddc;
    case 3: goto L_11e50df0;
    default: x86_unimpl("switch@0x11e50daf out of table"); return;
  }
  /* 11e50db6 mov edi, edi */
  EDI = (EDI);
L_11e50dc8:;
  /* 11e50dc8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e50dcb pop esi */
  ESI = (pop32());
  /* 11e50dcc pop edi */
  EDI = (pop32());
  /* 11e50dcd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e50dce ret  */
  ESPCHK(0x11e50c70u, _esp0);
  ESP += 4; return;
  /* 11e50dcf nop  */
  /* nop */
L_11e50dd0:;
  /* 11e50dd0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e50dd2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11e50dd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e50dd7 pop esi */
  ESI = (pop32());
  /* 11e50dd8 pop edi */
  EDI = (pop32());
  /* 11e50dd9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e50dda ret  */
  ESPCHK(0x11e50c70u, _esp0);
  ESP += 4; return;
  /* 11e50ddb nop  */
  /* nop */
L_11e50ddc:;
  /* 11e50ddc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e50dde mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11e50de0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11e50de3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11e50de6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e50de9 pop esi */
  ESI = (pop32());
  /* 11e50dea pop edi */
  EDI = (pop32());
  /* 11e50deb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e50dec ret  */
  ESPCHK(0x11e50c70u, _esp0);
  ESP += 4; return;
  /* 11e50ded lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11e50df0:;
  /* 11e50df0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e50df2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11e50df4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11e50df7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11e50dfa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11e50dfd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11e50e00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e50e03 pop esi */
  ESI = (pop32());
  /* 11e50e04 pop edi */
  EDI = (pop32());
  /* 11e50e05 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e50e06 ret  */
  ESPCHK(0x11e50c70u, _esp0);
  ESP += 4; return;
  /* 11e50e07 nop  */
  /* nop */
L_11e50e08:;
  /* 11e50e08 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11e50e0c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11e50e10 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11e50e16 jne 0x11e50e3c */
  if (!C.zf) goto L_11e50e3c;
  /* 11e50e18 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e50e1b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11e50e1e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e50e21 jb 0x11e50e30 */
  if (C.cf) goto L_11e50e30;
  /* 11e50e23 std  */
  C.df=1;
  /* 11e50e24 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11e50e26 cld  */
  C.df=0;
  /* 11e50e27 jmp dword ptr [edx*4 + 0x11e50f50] */
  switch (EDX) {
    case 0: goto L_11e50f60;
    case 1: goto L_11e50f68;
    case 2: goto L_11e50f78;
    case 3: goto L_11e50f8c;
    default: x86_unimpl("switch@0x11e50e27 out of table"); return;
  }
  /* 11e50e2e mov edi, edi */
  EDI = (EDI);
L_11e50e30:;
  /* 11e50e30 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e50e32 jmp dword ptr [ecx*4 + 0x11e50f00] */
  switch (ECX) {
    case 0: goto L_11e50f47;
    default: x86_unimpl("switch@0x11e50e32 out of table"); return;
  }
  /* 11e50e39 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11e50e3c:;
  /* 11e50e3c mov eax, edi */
  EAX = (EDI);
  /* 11e50e3e mov edx, 3 */
  EDX = (0x3u);
  /* 11e50e43 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e50e46 jb 0x11e50e54 */
  if (C.cf) goto L_11e50e54;
  /* 11e50e48 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11e50e4b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e50e4d jmp dword ptr [eax*4 + 0x11e50e58] */
  switch (EAX) {
    case 1: goto L_11e50e68;
    case 2: goto L_11e50e88;
    case 3: goto L_11e50eb0;
    default: x86_unimpl("switch@0x11e50e4d out of table"); return;
  }
L_11e50e54:;
  /* 11e50e54 jmp dword ptr [ecx*4 + 0x11e50f50] */
  switch (ECX) {
    case 0: goto L_11e50f60;
    case 1: goto L_11e50f68;
    case 2: goto L_11e50f78;
    case 3: goto L_11e50f8c;
    default: x86_unimpl("switch@0x11e50e54 out of table"); return;
  }
  /* 11e50e5b nop  */
  /* nop */
L_11e50e68:;
  /* 11e50e68 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11e50e6b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11e50e6d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11e50e70 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11e50e71 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e50e74 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11e50e75 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e50e78 jb 0x11e50e30 */
  if (C.cf) goto L_11e50e30;
  /* 11e50e7a std  */
  C.df=1;
  /* 11e50e7b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11e50e7d cld  */
  C.df=0;
  /* 11e50e7e jmp dword ptr [edx*4 + 0x11e50f50] */
  switch (EDX) {
    case 0: goto L_11e50f60;
    case 1: goto L_11e50f68;
    case 2: goto L_11e50f78;
    case 3: goto L_11e50f8c;
    default: x86_unimpl("switch@0x11e50e7e out of table"); return;
  }
  /* 11e50e85 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11e50e88:;
  /* 11e50e88 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11e50e8b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11e50e8d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11e50e90 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11e50e93 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e50e96 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11e50e99 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e50e9c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e50e9f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e50ea2 jb 0x11e50e30 */
  if (C.cf) goto L_11e50e30;
  /* 11e50ea4 std  */
  C.df=1;
  /* 11e50ea5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11e50ea7 cld  */
  C.df=0;
  /* 11e50ea8 jmp dword ptr [edx*4 + 0x11e50f50] */
  switch (EDX) {
    case 0: goto L_11e50f60;
    case 1: goto L_11e50f68;
    case 2: goto L_11e50f78;
    case 3: goto L_11e50f8c;
    default: x86_unimpl("switch@0x11e50ea8 out of table"); return;
  }
  /* 11e50eaf nop  */
  /* nop */
L_11e50eb0:;
  /* 11e50eb0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11e50eb3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11e50eb5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11e50eb8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11e50ebb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11e50ebe mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11e50ec1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e50ec4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11e50ec7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e50eca sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e50ecd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e50ed0 jb 0x11e50e30 */
  if (C.cf) goto L_11e50e30;
  /* 11e50ed6 std  */
  C.df=1;
  /* 11e50ed7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11e50ed9 cld  */
  C.df=0;
  /* 11e50eda jmp dword ptr [edx*4 + 0x11e50f50] */
  switch (EDX) {
    case 0: goto L_11e50f60;
    case 1: goto L_11e50f68;
    case 2: goto L_11e50f78;
    case 3: goto L_11e50f8c;
    default: x86_unimpl("switch@0x11e50eda out of table"); return;
  }
  /* 11e50ee1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11e50ee4 add al, 0xf */
  { uint32_t _a=(AL),_b=(0xfu),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11e50ee6 in eax, 0x11 */
  x86_unimpl("in @ 0x11e50ee6");
  /* 11e50ee8 or al, 0xf */
  { uint32_t _r=(AL)|(0xfu); AL = (_r); fl_logic(_r,8); }
  /* 11e50eea in eax, 0x11 */
  x86_unimpl("in @ 0x11e50eea");
  /* 11e50eec adc al, 0xf */
  { uint32_t _a=(AL),_b=(0xfu),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11e50eee in eax, 0x11 */
  x86_unimpl("in @ 0x11e50eee");
  /* 11e50ef0 sbb al, 0xf */
  { uint32_t _a=(AL),_b=(0xfu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11e50ef2 in eax, 0x11 */
  x86_unimpl("in @ 0x11e50ef2");
  /* 11e50ef4 and al, 0xf */
  { uint32_t _r=(AL)&(0xfu); AL = (_r); fl_logic(_r,8); }
  /* 11e50ef6 in eax, 0x11 */
  x86_unimpl("in @ 0x11e50ef6");
  /* 11e50ef8 sub al, 0xf */
  { uint32_t _a=(AL),_b=(0xfu),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11e50efa in eax, 0x11 */
  x86_unimpl("in @ 0x11e50efa");
  /* 11e50efc xor al, 0xf */
  { uint32_t _r=(AL)^(0xfu); AL = (_r); fl_logic(_r,8); }
  /* 11e50efe in eax, 0x11 */
  x86_unimpl("in @ 0x11e50efe");
  /* 11e50f04 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11e50f08 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11e50f0c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11e50f10 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11e50f14 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11e50f18 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11e50f1c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11e50f20 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11e50f24 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11e50f28 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11e50f2c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11e50f30 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11e50f34 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11e50f38 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11e50f3c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11e50f43 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e50f45 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11e50f47:;
  /* 11e50f47 jmp dword ptr [edx*4 + 0x11e50f50] */
  switch (EDX) {
    case 0: goto L_11e50f60;
    case 1: goto L_11e50f68;
    case 2: goto L_11e50f78;
    case 3: goto L_11e50f8c;
    default: x86_unimpl("switch@0x11e50f47 out of table"); return;
  }
  /* 11e50f4e mov edi, edi */
  EDI = (EDI);
L_11e50f60:;
  /* 11e50f60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e50f63 pop esi */
  ESI = (pop32());
  /* 11e50f64 pop edi */
  EDI = (pop32());
  /* 11e50f65 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e50f66 ret  */
  ESPCHK(0x11e50c70u, _esp0);
  ESP += 4; return;
  /* 11e50f67 nop  */
  /* nop */
L_11e50f68:;
  /* 11e50f68 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11e50f6b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11e50f6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e50f71 pop esi */
  ESI = (pop32());
  /* 11e50f72 pop edi */
  EDI = (pop32());
  /* 11e50f73 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e50f74 ret  */
  ESPCHK(0x11e50c70u, _esp0);
  ESP += 4; return;
  /* 11e50f75 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11e50f78:;
  /* 11e50f78 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11e50f7b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11e50f7e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11e50f81 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11e50f84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e50f87 pop esi */
  ESI = (pop32());
  /* 11e50f88 pop edi */
  EDI = (pop32());
  /* 11e50f89 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e50f8a ret  */
  ESPCHK(0x11e50c70u, _esp0);
  ESP += 4; return;
  /* 11e50f8b nop  */
  /* nop */
L_11e50f8c:;
  /* 11e50f8c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11e50f8f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11e50f92 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11e50f95 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11e50f98 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11e50f9b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11e50f9e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e50fa1 pop esi */
  ESI = (pop32());
  /* 11e50fa2 pop edi */
  EDI = (pop32());
  /* 11e50fa3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e50fa4 ret  */
  ESPCHK(0x11e50c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10010fb0 @ 0x11e50fb0 (255 bytes, 88 insns) */
void f_11e50fb0(void) {
  FTRACE(0x11e50fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e50fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e50fb1 mov ebp, esp */
  EBP = (ESP);
  /* 11e50fb3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11e50fb6:;
  /* 11e50fb6 cmp dword ptr [0x11e74fc4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e74fc4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e50fbd jle 0x11e50fd6 */
  if ((C.zf||C.sf!=C.of)) goto L_11e50fd6;
  /* 11e50fbf push 8 */
  push32((uint32_t)(0x8u));
  /* 11e50fc1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e50fc4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e50fc6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11e50fc8 push ecx */
  push32((uint32_t)(ECX));
  /* 11e50fc9 call 0x11e503a0 */
  push32(0x11e50fceu); f_11e503a0();
  /* 11e50fce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e50fd1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11e50fd4 jmp 0x11e50fef */
  goto L_11e50fef;
L_11e50fd6:;
  /* 11e50fd6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e50fd9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e50fdb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e50fdd mov ecx, dword ptr [0x11e74db8] */
  ECX = (r32((uint32_t)(0x11e74db8)));
  /* 11e50fe3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e50fe5 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11e50fe9 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11e50fec mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11e50fef:;
  /* 11e50fef cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e50ff3 je 0x11e51000 */
  if (C.zf) goto L_11e51000;
  /* 11e50ff5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e50ff8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e50ffb mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11e50ffe jmp 0x11e50fb6 */
  goto L_11e50fb6;
L_11e51000:;
  /* 11e51000 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e51003 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e51005 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11e51007 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e5100a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5100d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e51010 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11e51013 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e51016 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e51019 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5101d je 0x11e51025 */
  if (C.zf) goto L_11e51025;
  /* 11e5101f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e51023 jne 0x11e51038 */
  if (!C.zf) goto L_11e51038;
L_11e51025:;
  /* 11e51025 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e51028 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e5102a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e5102c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e5102f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e51032 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e51035 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11e51038:;
  /* 11e51038 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11e5103f:;
  /* 11e5103f cmp dword ptr [0x11e74fc4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e74fc4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e51046 jle 0x11e5105b */
  if ((C.zf||C.sf!=C.of)) goto L_11e5105b;
  /* 11e51048 push 4 */
  push32((uint32_t)(0x4u));
  /* 11e5104a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e5104d push edx */
  push32((uint32_t)(EDX));
  /* 11e5104e call 0x11e503a0 */
  push32(0x11e51053u); f_11e503a0();
  /* 11e51053 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e51056 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11e51059 jmp 0x11e51070 */
  goto L_11e51070;
L_11e5105b:;
  /* 11e5105b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e5105e mov ecx, dword ptr [0x11e74db8] */
  ECX = (r32((uint32_t)(0x11e74db8)));
  /* 11e51064 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e51066 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11e5106a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11e5106d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11e51070:;
  /* 11e51070 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e51074 je 0x11e5109b */
  if (C.zf) goto L_11e5109b;
  /* 11e51076 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e51079 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e5107c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e5107f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 11e51083 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11e51086 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e51089 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e5108b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11e5108d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e51090 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e51093 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e51096 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11e51099 jmp 0x11e5103f */
  goto L_11e5103f;
L_11e5109b:;
  /* 11e5109b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5109f jne 0x11e510a8 */
  if (!C.zf) goto L_11e510a8;
  /* 11e510a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e510a4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e510a6 jmp 0x11e510ab */
  goto L_11e510ab;
L_11e510a8:;
  /* 11e510a8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11e510ab:;
  /* 11e510ab mov esp, ebp */
  ESP = (EBP);
  /* 11e510ad pop ebp */
  EBP = (pop32());
  /* 11e510ae ret  */
  ESPCHK(0x11e50fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_100110b0 @ 0x11e510b0 (17 bytes, 8 insns) */
void f_11e510b0(void) {
  FTRACE(0x11e510b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e510b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e510b1 mov ebp, esp */
  EBP = (ESP);
  /* 11e510b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e510b6 push eax */
  push32((uint32_t)(EAX));
  /* 11e510b7 call 0x11e50fb0 */
  push32(0x11e510bcu); f_11e50fb0();
  /* 11e510bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e510bf pop ebp */
  EBP = (pop32());
  /* 11e510c0 ret  */
  ESPCHK(0x11e510b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100110d0 @ 0x11e510d0 (297 bytes, 106 insns) */
void f_11e510d0(void) {
  FTRACE(0x11e510d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e510d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e510d1 mov ebp, esp */
  EBP = (ESP);
  /* 11e510d3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e510d6 push esi */
  push32((uint32_t)(ESI));
L_11e510d7:;
  /* 11e510d7 cmp dword ptr [0x11e74fc4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e74fc4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e510de jle 0x11e510f7 */
  if ((C.zf||C.sf!=C.of)) goto L_11e510f7;
  /* 11e510e0 push 8 */
  push32((uint32_t)(0x8u));
  /* 11e510e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e510e5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e510e7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11e510e9 push ecx */
  push32((uint32_t)(ECX));
  /* 11e510ea call 0x11e503a0 */
  push32(0x11e510efu); f_11e503a0();
  /* 11e510ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e510f2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11e510f5 jmp 0x11e51110 */
  goto L_11e51110;
L_11e510f7:;
  /* 11e510f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e510fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e510fc mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e510fe mov ecx, dword ptr [0x11e74db8] */
  ECX = (r32((uint32_t)(0x11e74db8)));
  /* 11e51104 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e51106 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11e5110a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11e5110d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11e51110:;
  /* 11e51110 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e51114 je 0x11e51121 */
  if (C.zf) goto L_11e51121;
  /* 11e51116 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e51119 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5111c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11e5111f jmp 0x11e510d7 */
  goto L_11e510d7;
L_11e51121:;
  /* 11e51121 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e51124 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e51126 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11e51128 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e5112b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5112e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e51131 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11e51134 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e51137 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11e5113a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5113e je 0x11e51146 */
  if (C.zf) goto L_11e51146;
  /* 11e51140 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e51144 jne 0x11e51159 */
  if (!C.zf) goto L_11e51159;
L_11e51146:;
  /* 11e51146 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e51149 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e5114b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e5114d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e51150 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e51153 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e51156 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11e51159:;
  /* 11e51159 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11e51160 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11e51167:;
  /* 11e51167 cmp dword ptr [0x11e74fc4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e74fc4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5116e jle 0x11e51183 */
  if ((C.zf||C.sf!=C.of)) goto L_11e51183;
  /* 11e51170 push 4 */
  push32((uint32_t)(0x4u));
  /* 11e51172 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e51175 push edx */
  push32((uint32_t)(EDX));
  /* 11e51176 call 0x11e503a0 */
  push32(0x11e5117bu); f_11e503a0();
  /* 11e5117b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5117e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11e51181 jmp 0x11e51198 */
  goto L_11e51198;
L_11e51183:;
  /* 11e51183 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e51186 mov ecx, dword ptr [0x11e74db8] */
  ECX = (r32((uint32_t)(0x11e74db8)));
  /* 11e5118c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e5118e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11e51192 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11e51195 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_11e51198:;
  /* 11e51198 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5119c je 0x11e511d9 */
  if (C.zf) goto L_11e511d9;
  /* 11e5119e push 0 */
  push32((uint32_t)(0x0u));
  /* 11e511a0 push 0xa */
  push32((uint32_t)(0xau));
  /* 11e511a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e511a5 push eax */
  push32((uint32_t)(EAX));
  /* 11e511a6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e511a9 push ecx */
  push32((uint32_t)(ECX));
  /* 11e511aa call 0x11e52ec0 */
  push32(0x11e511afu); f_11e52ec0();
  /* 11e511af mov ecx, eax */
  ECX = (EAX);
  /* 11e511b1 mov esi, edx */
  ESI = (EDX);
  /* 11e511b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e511b6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e511b9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11e511ba add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e511bc adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e511be mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e511c1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 11e511c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e511c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e511c9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e511cb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e511ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e511d1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e511d4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11e511d7 jmp 0x11e51167 */
  goto L_11e51167;
L_11e511d9:;
  /* 11e511d9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e511dd jne 0x11e511ee */
  if (!C.zf) goto L_11e511ee;
  /* 11e511df mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e511e2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e511e4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e511e7 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e511ea neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e511ec jmp 0x11e511f4 */
  goto L_11e511f4;
L_11e511ee:;
  /* 11e511ee mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e511f1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_11e511f4:;
  /* 11e511f4 pop esi */
  ESI = (pop32());
  /* 11e511f5 mov esp, ebp */
  ESP = (EBP);
  /* 11e511f7 pop ebp */
  EBP = (pop32());
  /* 11e511f8 ret  */
  ESPCHK(0x11e510d0u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x11e51200 (129 bytes, 56 insns) */
void f_11e51200(void) {
  FTRACE(0x11e51200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e51200 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11e51204 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11e51208 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11e5120e jne 0x11e5124c */
  if (!C.zf) goto L_11e5124c;
L_11e51210:;
  /* 11e51210 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e51212 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e51214 jne 0x11e51244 */
  if (!C.zf) goto L_11e51244;
  /* 11e51216 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11e51218 je 0x11e51240 */
  if (C.zf) goto L_11e51240;
  /* 11e5121a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e5121d jne 0x11e51244 */
  if (!C.zf) goto L_11e51244;
  /* 11e5121f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11e51221 je 0x11e51240 */
  if (C.zf) goto L_11e51240;
  /* 11e51223 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11e51226 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e51229 jne 0x11e51244 */
  if (!C.zf) goto L_11e51244;
  /* 11e5122b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11e5122d je 0x11e51240 */
  if (C.zf) goto L_11e51240;
  /* 11e5122f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e51232 jne 0x11e51244 */
  if (!C.zf) goto L_11e51244;
  /* 11e51234 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e51237 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5123a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11e5123c jne 0x11e51210 */
  if (!C.zf) goto L_11e51210;
  /* 11e5123e mov edi, edi */
  EDI = (EDI);
L_11e51240:;
  /* 11e51240 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e51242 ret  */
  ESPCHK(0x11e51200u, _esp0);
  ESP += 4; return;
  /* 11e51243 nop  */
  /* nop */
L_11e51244:;
  /* 11e51244 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e51246 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11e51248 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11e51249 ret  */
  ESPCHK(0x11e51200u, _esp0);
  ESP += 4; return;
  /* 11e5124a mov edi, edi */
  EDI = (EDI);
L_11e5124c:;
  /* 11e5124c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 11e51252 je 0x11e51268 */
  if (C.zf) goto L_11e51268;
  /* 11e51254 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e51256 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11e51257 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e51259 jne 0x11e51244 */
  if (!C.zf) goto L_11e51244;
  /* 11e5125b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11e5125c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11e5125e je 0x11e51240 */
  if (C.zf) goto L_11e51240;
  /* 11e51260 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 11e51266 je 0x11e51210 */
  if (C.zf) goto L_11e51210;
L_11e51268:;
  /* 11e51268 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11e5126b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5126e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e51270 jne 0x11e51244 */
  if (!C.zf) goto L_11e51244;
  /* 11e51272 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11e51274 je 0x11e51240 */
  if (C.zf) goto L_11e51240;
  /* 11e51276 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e51279 jne 0x11e51244 */
  if (!C.zf) goto L_11e51244;
  /* 11e5127b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11e5127d je 0x11e51240 */
  if (C.zf) goto L_11e51240;
  /* 11e5127f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e51282 jmp 0x11e51210 */
  goto L_11e51210;
}

/* FUN_10011290 @ 0x11e51290 (46 bytes, 18 insns) */
void f_11e51290(void) {
  FTRACE(0x11e51290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e51290 push ebp */
  push32((uint32_t)(EBP));
  /* 11e51291 mov ebp, esp */
  EBP = (ESP);
  /* 11e51293 push ecx */
  push32((uint32_t)(ECX));
  /* 11e51294 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11e51296 call 0x11e4c670 */
  push32(0x11e5129bu); f_11e4c670();
  /* 11e5129b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5129e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e512a1 push eax */
  push32((uint32_t)(EAX));
  /* 11e512a2 call 0x11e512c0 */
  push32(0x11e512a7u); f_11e512c0();
  /* 11e512a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e512aa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e512ad push 0xc */
  push32((uint32_t)(0xcu));
  /* 11e512af call 0x11e4c710 */
  push32(0x11e512b4u); f_11e4c710();
  /* 11e512b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e512b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e512ba mov esp, ebp */
  ESP = (EBP);
  /* 11e512bc pop ebp */
  EBP = (pop32());
  /* 11e512bd ret  */
  ESPCHK(0x11e51290u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x11e512c0 (198 bytes, 69 insns) */
void f_11e512c0(void) {
  FTRACE(0x11e512c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e512c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e512c1 mov ebp, esp */
  EBP = (ESP);
  /* 11e512c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e512c6 mov eax, dword ptr [0x11e76910] */
  EAX = (r32((uint32_t)(0x11e76910)));
  /* 11e512cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e512ce cmp dword ptr [0x11e78400], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e78400))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e512d5 jne 0x11e512de */
  if (!C.zf) goto L_11e512de;
  /* 11e512d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e512d9 jmp 0x11e51382 */
  goto L_11e51382;
L_11e512de:;
  /* 11e512de cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e512e2 jne 0x11e51306 */
  if (!C.zf) goto L_11e51306;
  /* 11e512e4 cmp dword ptr [0x11e76918], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e76918))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e512eb je 0x11e51306 */
  if (C.zf) goto L_11e51306;
  /* 11e512ed call 0x11e52f50 */
  push32(0x11e512f2u); f_11e52f50();
  /* 11e512f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e512f4 je 0x11e512fd */
  if (C.zf) goto L_11e512fd;
  /* 11e512f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e512f8 jmp 0x11e51382 */
  goto L_11e51382;
L_11e512fd:;
  /* 11e512fd mov ecx, dword ptr [0x11e76910] */
  ECX = (r32((uint32_t)(0x11e76910)));
  /* 11e51303 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11e51306:;
  /* 11e51306 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5130a je 0x11e51380 */
  if (C.zf) goto L_11e51380;
  /* 11e5130c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e51310 je 0x11e51380 */
  if (C.zf) goto L_11e51380;
  /* 11e51312 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e51315 push edx */
  push32((uint32_t)(EDX));
  /* 11e51316 call 0x11e4d5a0 */
  push32(0x11e5131bu); f_11e4d5a0();
  /* 11e5131b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5131e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11e51321:;
  /* 11e51321 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e51324 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e51327 je 0x11e51380 */
  if (C.zf) goto L_11e51380;
  /* 11e51329 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e5132c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e5132e push edx */
  push32((uint32_t)(EDX));
  /* 11e5132f call 0x11e4d5a0 */
  push32(0x11e51334u); f_11e4d5a0();
  /* 11e51334 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e51337 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5133a jbe 0x11e51375 */
  if ((C.cf||C.zf)) goto L_11e51375;
  /* 11e5133c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e5133f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e51341 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e51344 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 11e51348 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5134b jne 0x11e51375 */
  if (!C.zf) goto L_11e51375;
  /* 11e5134d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e51350 push ecx */
  push32((uint32_t)(ECX));
  /* 11e51351 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e51354 push edx */
  push32((uint32_t)(EDX));
  /* 11e51355 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e51358 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e5135a push ecx */
  push32((uint32_t)(ECX));
  /* 11e5135b call 0x11e52f00 */
  push32(0x11e51360u); f_11e52f00();
  /* 11e51360 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e51363 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e51365 jne 0x11e51375 */
  if (!C.zf) goto L_11e51375;
  /* 11e51367 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e5136a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e5136c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e5136f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 11e51373 jmp 0x11e51382 */
  goto L_11e51382;
L_11e51375:;
  /* 11e51375 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e51378 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5137b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11e5137e jmp 0x11e51321 */
  goto L_11e51321;
L_11e51380:;
  /* 11e51380 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e51382:;
  /* 11e51382 mov esp, ebp */
  ESP = (EBP);
  /* 11e51384 pop ebp */
  EBP = (pop32());
  /* 11e51385 ret  */
  ESPCHK(0x11e512c0u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x11e51390 (104 bytes, 43 insns) */
void f_11e51390(void) {
  FTRACE(0x11e51390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e51390 push ebx */
  push32((uint32_t)(EBX));
  /* 11e51391 push esi */
  push32((uint32_t)(ESI));
  /* 11e51392 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 11e51396 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e51398 jne 0x11e513b2 */
  if (!C.zf) goto L_11e513b2;
  /* 11e5139a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 11e5139e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11e513a2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e513a4 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11e513a6 mov ebx, eax */
  EBX = (EAX);
  /* 11e513a8 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11e513ac div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11e513ae mov edx, ebx */
  EDX = (EBX);
  /* 11e513b0 jmp 0x11e513f3 */
  goto L_11e513f3;
L_11e513b2:;
  /* 11e513b2 mov ecx, eax */
  ECX = (EAX);
  /* 11e513b4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11e513b8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 11e513bc mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_11e513c0:;
  /* 11e513c0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11e513c2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 11e513c4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11e513c6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 11e513c8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e513ca jne 0x11e513c0 */
  if (!C.zf) goto L_11e513c0;
  /* 11e513cc div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11e513ce mov esi, eax */
  ESI = (EAX);
  /* 11e513d0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11e513d4 mov ecx, eax */
  ECX = (EAX);
  /* 11e513d6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11e513da mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11e513dc add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e513de jb 0x11e513ee */
  if (C.cf) goto L_11e513ee;
  /* 11e513e0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e513e4 ja 0x11e513ee */
  if ((!C.cf&&!C.zf)) goto L_11e513ee;
  /* 11e513e6 jb 0x11e513ef */
  if (C.cf) goto L_11e513ef;
  /* 11e513e8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e513ec jbe 0x11e513ef */
  if ((C.cf||C.zf)) goto L_11e513ef;
L_11e513ee:;
  /* 11e513ee dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_11e513ef:;
  /* 11e513ef xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e513f1 mov eax, esi */
  EAX = (ESI);
L_11e513f3:;
  /* 11e513f3 pop esi */
  ESI = (pop32());
  /* 11e513f4 pop ebx */
  EBX = (pop32());
  /* 11e513f5 ret 0x10 */
  ESPCHK(0x11e51390u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x11e51400 (117 bytes, 44 insns) */
void f_11e51400(void) {
  FTRACE(0x11e51400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e51400 push ebx */
  push32((uint32_t)(EBX));
  /* 11e51401 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11e51405 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e51407 jne 0x11e51421 */
  if (!C.zf) goto L_11e51421;
  /* 11e51409 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11e5140d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11e51411 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e51413 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11e51415 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11e51419 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11e5141b mov eax, edx */
  EAX = (EDX);
  /* 11e5141d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e5141f jmp 0x11e51471 */
  goto L_11e51471;
L_11e51421:;
  /* 11e51421 mov ecx, eax */
  ECX = (EAX);
  /* 11e51423 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 11e51427 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11e5142b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_11e5142f:;
  /* 11e5142f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11e51431 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 11e51433 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11e51435 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 11e51437 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e51439 jne 0x11e5142f */
  if (!C.zf) goto L_11e5142f;
  /* 11e5143b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11e5143d mov ecx, eax */
  ECX = (EAX);
  /* 11e5143f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11e51443 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 11e51444 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11e51448 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5144a jb 0x11e5145a */
  if (C.cf) goto L_11e5145a;
  /* 11e5144c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e51450 ja 0x11e5145a */
  if ((!C.cf&&!C.zf)) goto L_11e5145a;
  /* 11e51452 jb 0x11e51462 */
  if (C.cf) goto L_11e51462;
  /* 11e51454 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e51458 jbe 0x11e51462 */
  if ((C.cf||C.zf)) goto L_11e51462;
L_11e5145a:;
  /* 11e5145a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e5145e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11e51462:;
  /* 11e51462 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e51466 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e5146a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e5146c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e5146e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11e51471:;
  /* 11e51471 pop ebx */
  EBX = (pop32());
  /* 11e51472 ret 0x10 */
  ESPCHK(0x11e51400u, _esp0);
  ESP += 20; return;
}

/* FUN_10011480 @ 0x11e51480 (628 bytes, 214 insns) */
void f_11e51480(void) {
  FTRACE(0x11e51480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e51480 push ebp */
  push32((uint32_t)(EBP));
  /* 11e51481 mov ebp, esp */
  EBP = (ESP);
  /* 11e51483 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e51486 push ebx */
  push32((uint32_t)(EBX));
  /* 11e51487 push esi */
  push32((uint32_t)(ESI));
  /* 11e51488 push edi */
  push32((uint32_t)(EDI));
L_11e51489:;
  /* 11e51489 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5148d jne 0x11e514ad */
  if (!C.zf) goto L_11e514ad;
  /* 11e5148f push 0x11e71f28 */
  push32((uint32_t)(0x11e71f28u));
  /* 11e51494 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e51496 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 11e51498 push 0x11e71f1c */
  push32((uint32_t)(0x11e71f1cu));
  /* 11e5149d push 2 */
  push32((uint32_t)(0x2u));
  /* 11e5149f call 0x11e48dc0 */
  push32(0x11e514a4u); f_11e48dc0();
  /* 11e514a4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e514a7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e514aa jne 0x11e514ad */
  if (!C.zf) goto L_11e514ad;
  /* 11e514ac int3  */
  x86_unimpl("int3 @ 0x11e514ac");
L_11e514ad:;
  /* 11e514ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e514af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e514b1 jne 0x11e51489 */
  if (!C.zf) goto L_11e51489;
  /* 11e514b3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e514b6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e514b9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e514bc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11e514bf mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11e514c2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e514c5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11e514c8 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 11e514ce test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e514d0 je 0x11e514df */
  if (C.zf) goto L_11e514df;
  /* 11e514d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e514d5 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11e514d8 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 11e514db test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e514dd je 0x11e514f5 */
  if (C.zf) goto L_11e514f5;
L_11e514df:;
  /* 11e514df mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e514e2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11e514e5 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11e514e7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e514ea mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 11e514ed or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e514f0 jmp 0x11e516ed */
  goto L_11e516ed;
L_11e514f5:;
  /* 11e514f5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e514f8 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11e514fb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11e514fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e51500 je 0x11e5154c */
  if (C.zf) goto L_11e5154c;
  /* 11e51502 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e51505 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11e5150c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e5150f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11e51512 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11e51515 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e51517 je 0x11e51535 */
  if (C.zf) goto L_11e51535;
  /* 11e51519 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e5151c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e5151f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11e51522 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11e51524 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e51527 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11e5152a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 11e5152d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e51530 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11e51533 jmp 0x11e5154c */
  goto L_11e5154c;
L_11e51535:;
  /* 11e51535 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e51538 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11e5153b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11e5153e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e51541 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11e51544 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e51547 jmp 0x11e516ed */
  goto L_11e516ed;
L_11e5154c:;
  /* 11e5154c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e5154f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11e51552 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11e51555 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e51558 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11e5155b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e5155e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11e51561 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 11e51564 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e51567 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11e5156a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e5156d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11e51574 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e5157b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e5157e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11e51581 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e51584 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11e51587 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 11e5158d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e5158f jne 0x11e515bf */
  if (!C.zf) goto L_11e515bf;
  /* 11e51591 cmp dword ptr [ebp - 8], 0x11e75260 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x11e75260u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e51598 je 0x11e515a3 */
  if (C.zf) goto L_11e515a3;
  /* 11e5159a cmp dword ptr [ebp - 8], 0x11e75280 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x11e75280u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e515a1 jne 0x11e515b3 */
  if (!C.zf) goto L_11e515b3;
L_11e515a3:;
  /* 11e515a3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e515a6 push edx */
  push32((uint32_t)(EDX));
  /* 11e515a7 call 0x11e53530 */
  push32(0x11e515acu); f_11e53530();
  /* 11e515ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e515af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e515b1 jne 0x11e515bf */
  if (!C.zf) goto L_11e515bf;
L_11e515b3:;
  /* 11e515b3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e515b6 push eax */
  push32((uint32_t)(EAX));
  /* 11e515b7 call 0x11e53460 */
  push32(0x11e515bcu); f_11e53460();
  /* 11e515bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e515bf:;
  /* 11e515bf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e515c2 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11e515c5 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 11e515cb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e515cd je 0x11e516ab */
  if (C.zf) goto L_11e516ab;
L_11e515d3:;
  /* 11e515d3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e515d6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e515d9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11e515db sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e515de test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e515e0 jge 0x11e51603 */
  if ((C.sf==C.of)) goto L_11e51603;
  /* 11e515e2 push 0x11e71edc */
  push32((uint32_t)(0x11e71edcu));
  /* 11e515e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e515e9 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11e515ee push 0x11e71f1c */
  push32((uint32_t)(0x11e71f1cu));
  /* 11e515f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e515f5 call 0x11e48dc0 */
  push32(0x11e515fau); f_11e48dc0();
  /* 11e515fa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e515fd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e51600 jne 0x11e51603 */
  if (!C.zf) goto L_11e51603;
  /* 11e51602 int3  */
  x86_unimpl("int3 @ 0x11e51602");
L_11e51603:;
  /* 11e51603 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e51605 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e51607 jne 0x11e515d3 */
  if (!C.zf) goto L_11e515d3;
  /* 11e51609 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e5160c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e5160f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11e51611 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e51614 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e51617 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e5161a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11e5161d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e51620 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e51623 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11e51625 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e51628 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11e5162b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e5162e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e51631 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11e51634 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e51638 jle 0x11e51656 */
  if ((C.zf||C.sf!=C.of)) goto L_11e51656;
  /* 11e5163a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e5163d push ecx */
  push32((uint32_t)(ECX));
  /* 11e5163e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e51641 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11e51644 push eax */
  push32((uint32_t)(EAX));
  /* 11e51645 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e51648 push ecx */
  push32((uint32_t)(ECX));
  /* 11e51649 call 0x11e53150 */
  push32(0x11e5164eu); f_11e53150();
  /* 11e5164e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e51651 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e51654 jmp 0x11e5169e */
  goto L_11e5169e;
L_11e51656:;
  /* 11e51656 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5165a je 0x11e51679 */
  if (C.zf) goto L_11e51679;
  /* 11e5165c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e5165f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11e51662 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e51665 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11e51668 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e5166b mov ecx, dword ptr [edx*4 + 0x11e782c0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11e782c0)));
  /* 11e51672 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e51674 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11e51677 jmp 0x11e51680 */
  goto L_11e51680;
L_11e51679:;
  /* 11e51679 mov dword ptr [ebp - 0x14], 0x11e74a60 */
  w32((uint32_t)(EBP + -0x14), (0x11e74a60u));
L_11e51680:;
  /* 11e51680 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e51683 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 11e51687 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11e5168a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e5168c je 0x11e5169e */
  if (C.zf) goto L_11e5169e;
  /* 11e5168e push 2 */
  push32((uint32_t)(0x2u));
  /* 11e51690 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e51692 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e51695 push ecx */
  push32((uint32_t)(ECX));
  /* 11e51696 call 0x11e53000 */
  push32(0x11e5169bu); f_11e53000();
  /* 11e5169b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e5169e:;
  /* 11e5169e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e516a1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11e516a4 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 11e516a7 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11e516a9 jmp 0x11e516c9 */
  goto L_11e516c9;
L_11e516ab:;
  /* 11e516ab mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11e516b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e516b5 push edx */
  push32((uint32_t)(EDX));
  /* 11e516b6 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11e516b9 push eax */
  push32((uint32_t)(EAX));
  /* 11e516ba mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e516bd push ecx */
  push32((uint32_t)(ECX));
  /* 11e516be call 0x11e53150 */
  push32(0x11e516c3u); f_11e53150();
  /* 11e516c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e516c6 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11e516c9:;
  /* 11e516c9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e516cc cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e516cf je 0x11e516e5 */
  if (C.zf) goto L_11e516e5;
  /* 11e516d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e516d4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11e516d7 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11e516da mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e516dd mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 11e516e0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e516e3 jmp 0x11e516ed */
  goto L_11e516ed;
L_11e516e5:;
  /* 11e516e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e516e8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_11e516ed:;
  /* 11e516ed pop edi */
  EDI = (pop32());
  /* 11e516ee pop esi */
  ESI = (pop32());
  /* 11e516ef pop ebx */
  EBX = (pop32());
  /* 11e516f0 mov esp, ebp */
  ESP = (EBP);
  /* 11e516f2 pop ebp */
  EBP = (pop32());
  /* 11e516f3 ret  */
  ESPCHK(0x11e51480u, _esp0);
  ESP += 4; return;
}

/* FUN_10011700 @ 0x11e51700 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_11e51700(void) {
  FTRACE(0x11e51700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e51700 push ebp */
  push32((uint32_t)(EBP));
  /* 11e51701 mov ebp, esp */
  EBP = (ESP);
  /* 11e51703 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e51709 push ebx */
  push32((uint32_t)(EBX));
  /* 11e5170a push esi */
  push32((uint32_t)(ESI));
  /* 11e5170b push edi */
  push32((uint32_t)(EDI));
  /* 11e5170c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11e51713 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 11e5171d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_11e51724:;
  /* 11e51724 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e51727 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11e51729 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 11e5172c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11e51730 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e51733 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e51736 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11e51739 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e5173b je 0x11e52317 */
  if (C.zf) goto L_11e52317;
  /* 11e51741 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e51748 jl 0x11e52317 */
  if ((C.sf!=C.of)) goto L_11e52317;
  /* 11e5174e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11e51752 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e51755 jl 0x11e51776 */
  if ((C.sf!=C.of)) goto L_11e51776;
  /* 11e51757 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11e5175b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5175e jg 0x11e51776 */
  if ((!C.zf&&C.sf==C.of)) goto L_11e51776;
  /* 11e51760 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11e51764 movsx ecx, byte ptr [eax + 0x11e71f14] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x11e71f14))));
  /* 11e5176b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 11e5176e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 11e51774 jmp 0x11e51780 */
  goto L_11e51780;
L_11e51776:;
  /* 11e51776 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_11e51780:;
  /* 11e51780 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 11e51786 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11e51789 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e5178c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e5178f movsx edx, byte ptr [ecx + eax*8 + 0x11e71f34] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x11e71f34))));
  /* 11e51797 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11e5179a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11e5179d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e517a0 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 11e517a6 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e517ad ja 0x11e52312 */
  if ((!C.cf&&!C.zf)) goto L_11e52312;
  /* 11e517b3 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 11e517b9 jmp dword ptr [ecx*4 + 0x11e52324] */
  switch (ECX) {
    case 0: goto L_11e517c0;
    case 1: goto L_11e5185a;
    case 2: goto L_11e5189c;
    case 3: goto L_11e5190b;
    case 4: goto L_11e51963;
    case 5: goto L_11e51972;
    case 6: goto L_11e519be;
    case 7: goto L_11e51a51;
    case 8: goto L_11e518e8;
    case 9: goto L_11e518f3;
    case 10: goto L_11e518de;
    case 11: goto L_11e518d3;
    case 12: goto L_11e518fe;
    case 13: goto L_11e51906;
    default: x86_unimpl("switch@0x11e517b9 out of table"); return;
  }
L_11e517c0:;
  /* 11e517c0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11e517c7 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e517ca and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e517d0 mov eax, dword ptr [0x11e74db8] */
  EAX = (r32((uint32_t)(0x11e74db8)));
  /* 11e517d5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e517d7 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11e517db and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11e517e1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e517e3 je 0x11e5183d */
  if (C.zf) goto L_11e5183d;
  /* 11e517e5 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 11e517eb push edx */
  push32((uint32_t)(EDX));
  /* 11e517ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e517ef push eax */
  push32((uint32_t)(EAX));
  /* 11e517f0 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11e517f4 push ecx */
  push32((uint32_t)(ECX));
  /* 11e517f5 call 0x11e52430 */
  push32(0x11e517fau); f_11e52430();
  /* 11e517fa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e517fd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e51800 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e51802 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 11e51805 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e51808 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5180b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11e5180e:;
  /* 11e5180e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11e51812 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e51814 jne 0x11e51837 */
  if (!C.zf) goto L_11e51837;
  /* 11e51816 push 0x11e71fb4 */
  push32((uint32_t)(0x11e71fb4u));
  /* 11e5181b push 0 */
  push32((uint32_t)(0x0u));
  /* 11e5181d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 11e51822 push 0x11e71fa8 */
  push32((uint32_t)(0x11e71fa8u));
  /* 11e51827 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e51829 call 0x11e48dc0 */
  push32(0x11e5182eu); f_11e48dc0();
  /* 11e5182e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e51831 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e51834 jne 0x11e51837 */
  if (!C.zf) goto L_11e51837;
  /* 11e51836 int3  */
  x86_unimpl("int3 @ 0x11e51836");
L_11e51837:;
  /* 11e51837 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e51839 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e5183b jne 0x11e5180e */
  if (!C.zf) goto L_11e5180e;
L_11e5183d:;
  /* 11e5183d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 11e51843 push ecx */
  push32((uint32_t)(ECX));
  /* 11e51844 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e51847 push edx */
  push32((uint32_t)(EDX));
  /* 11e51848 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11e5184c push eax */
  push32((uint32_t)(EAX));
  /* 11e5184d call 0x11e52430 */
  push32(0x11e51852u); f_11e52430();
  /* 11e51852 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e51855 jmp 0x11e52312 */
  goto L_11e52312;
L_11e5185a:;
  /* 11e5185a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11e51861 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e51864 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 11e5186a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 11e51870 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 11e51876 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 11e5187c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11e5187f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e51886 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 11e51890 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11e51897 jmp 0x11e52312 */
  goto L_11e52312;
L_11e5189c:;
  /* 11e5189c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11e518a0 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 11e518a6 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 11e518ac sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e518af mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 11e518b5 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e518bc ja 0x11e51906 */
  if ((!C.cf&&!C.zf)) goto L_11e51906;
  /* 11e518be mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 11e518c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e518c6 mov al, byte ptr [ecx + 0x11e5235c] */
  AL = (r8((uint32_t)(ECX + 0x11e5235c)));
  /* 11e518cc jmp dword ptr [eax*4 + 0x11e52344] */
  switch (EAX) {
    case 0: goto L_11e518e8;
    case 1: goto L_11e518f3;
    case 2: goto L_11e518de;
    case 3: goto L_11e518d3;
    case 4: goto L_11e518fe;
    case 5: goto L_11e51906;
    default: x86_unimpl("switch@0x11e518cc out of table"); return;
  }
L_11e518d3:;
  /* 11e518d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e518d6 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11e518d9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e518dc jmp 0x11e51906 */
  goto L_11e51906;
L_11e518de:;
  /* 11e518de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e518e1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11e518e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e518e6 jmp 0x11e51906 */
  goto L_11e51906;
L_11e518e8:;
  /* 11e518e8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e518eb or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11e518ee mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e518f1 jmp 0x11e51906 */
  goto L_11e51906;
L_11e518f3:;
  /* 11e518f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e518f6 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 11e518f9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e518fc jmp 0x11e51906 */
  goto L_11e51906;
L_11e518fe:;
  /* 11e518fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e51901 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 11e51903 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11e51906:;
  /* 11e51906 jmp 0x11e52312 */
  goto L_11e52312;
L_11e5190b:;
  /* 11e5190b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11e5190f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e51912 jne 0x11e51947 */
  if (!C.zf) goto L_11e51947;
  /* 11e51914 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11e51917 push edx */
  push32((uint32_t)(EDX));
  /* 11e51918 call 0x11e52540 */
  push32(0x11e5191du); f_11e52540();
  /* 11e5191d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e51920 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 11e51926 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5192d jge 0x11e51945 */
  if ((C.sf==C.of)) goto L_11e51945;
  /* 11e5192f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e51932 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11e51934 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e51937 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 11e5193d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e5193f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_11e51945:;
  /* 11e51945 jmp 0x11e5195e */
  goto L_11e5195e;
L_11e51947:;
  /* 11e51947 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 11e5194d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e51950 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11e51954 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 11e51958 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_11e5195e:;
  /* 11e5195e jmp 0x11e52312 */
  goto L_11e52312;
L_11e51963:;
  /* 11e51963 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 11e5196d jmp 0x11e52312 */
  goto L_11e52312;
L_11e51972:;
  /* 11e51972 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11e51976 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e51979 jne 0x11e519a2 */
  if (!C.zf) goto L_11e519a2;
  /* 11e5197b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11e5197e push eax */
  push32((uint32_t)(EAX));
  /* 11e5197f call 0x11e52540 */
  push32(0x11e51984u); f_11e52540();
  /* 11e51984 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e51987 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 11e5198d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e51994 jge 0x11e519a0 */
  if ((C.sf==C.of)) goto L_11e519a0;
  /* 11e51996 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_11e519a0:;
  /* 11e519a0 jmp 0x11e519b9 */
  goto L_11e519b9;
L_11e519a2:;
  /* 11e519a2 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 11e519a8 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e519ab movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11e519af lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11e519b3 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_11e519b9:;
  /* 11e519b9 jmp 0x11e52312 */
  goto L_11e52312;
L_11e519be:;
  /* 11e519be movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11e519c2 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 11e519c8 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 11e519ce sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e519d1 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 11e519d7 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e519de ja 0x11e51a4c */
  if ((!C.cf&&!C.zf)) goto L_11e51a4c;
  /* 11e519e0 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 11e519e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e519e8 mov al, byte ptr [ecx + 0x11e52381] */
  AL = (r8((uint32_t)(ECX + 0x11e52381)));
  /* 11e519ee jmp dword ptr [eax*4 + 0x11e5236d] */
  switch (EAX) {
    case 0: goto L_11e51a00;
    case 1: goto L_11e51a39;
    case 2: goto L_11e519f5;
    case 3: goto L_11e51a43;
    case 4: goto L_11e51a4c;
    default: x86_unimpl("switch@0x11e519ee out of table"); return;
  }
L_11e519f5:;
  /* 11e519f5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e519f8 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 11e519fb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e519fe jmp 0x11e51a4c */
  goto L_11e51a4c;
L_11e51a00:;
  /* 11e51a00 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e51a03 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e51a06 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e51a09 jne 0x11e51a2b */
  if (!C.zf) goto L_11e51a2b;
  /* 11e51a0b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e51a0e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11e51a12 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e51a15 jne 0x11e51a2b */
  if (!C.zf) goto L_11e51a2b;
  /* 11e51a17 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e51a1a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e51a1d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11e51a20 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e51a23 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11e51a26 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e51a29 jmp 0x11e51a37 */
  goto L_11e51a37;
L_11e51a2b:;
  /* 11e51a2b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11e51a32 jmp 0x11e517c0 */
  goto L_11e517c0;
L_11e51a37:;
  /* 11e51a37 jmp 0x11e51a4c */
  goto L_11e51a4c;
L_11e51a39:;
  /* 11e51a39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e51a3c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11e51a3e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e51a41 jmp 0x11e51a4c */
  goto L_11e51a4c;
L_11e51a43:;
  /* 11e51a43 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e51a46 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11e51a49 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11e51a4c:;
  /* 11e51a4c jmp 0x11e52312 */
  goto L_11e52312;
L_11e51a51:;
  /* 11e51a51 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11e51a55 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 11e51a5b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 11e51a61 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e51a64 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 11e51a6a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e51a71 ja 0x11e52137 */
  if ((!C.cf&&!C.zf)) goto L_11e52137;
  /* 11e51a77 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 11e51a7d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e51a7f mov cl, byte ptr [edx + 0x11e523ec] */
  CL = (r8((uint32_t)(EDX + 0x11e523ec)));
  /* 11e51a85 jmp dword ptr [ecx*4 + 0x11e523b0] */
  switch (ECX) {
    case 0: goto L_11e51a8c;
    case 1: goto L_11e51d20;
    case 2: goto L_11e51bb0;
    case 3: goto L_11e51e59;
    case 4: goto L_11e51b1b;
    case 5: goto L_11e51aa1;
    case 6: goto L_11e51e2b;
    case 7: goto L_11e51d30;
    case 8: goto L_11e51cd5;
    case 9: goto L_11e51ea5;
    case 10: goto L_11e51e4f;
    case 11: goto L_11e51bc6;
    case 12: goto L_11e51e43;
    case 13: goto L_11e51e65;
    case 14: goto L_11e52137;
    default: x86_unimpl("switch@0x11e51a85 out of table"); return;
  }
L_11e51a8c:;
  /* 11e51a8c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e51a8f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 11e51a94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e51a96 jne 0x11e51aa1 */
  if (!C.zf) goto L_11e51aa1;
  /* 11e51a98 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e51a9b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11e51a9e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11e51aa1:;
  /* 11e51aa1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e51aa4 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 11e51aaa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e51aac je 0x11e51ae7 */
  if (C.zf) goto L_11e51ae7;
  /* 11e51aae lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11e51ab1 push eax */
  push32((uint32_t)(EAX));
  /* 11e51ab2 call 0x11e52580 */
  push32(0x11e51ab7u); f_11e52580();
  /* 11e51ab7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e51aba mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 11e51abe mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 11e51ac2 push ecx */
  push32((uint32_t)(ECX));
  /* 11e51ac3 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 11e51ac9 push edx */
  push32((uint32_t)(EDX));
  /* 11e51aca call 0x11e537a0 */
  push32(0x11e51acfu); f_11e537a0();
  /* 11e51acf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e51ad2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11e51ad5 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e51ad9 jge 0x11e51ae5 */
  if ((C.sf==C.of)) goto L_11e51ae5;
  /* 11e51adb mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_11e51ae5:;
  /* 11e51ae5 jmp 0x11e51b0d */
  goto L_11e51b0d;
L_11e51ae7:;
  /* 11e51ae7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11e51aea push eax */
  push32((uint32_t)(EAX));
  /* 11e51aeb call 0x11e52540 */
  push32(0x11e51af0u); f_11e52540();
  /* 11e51af0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e51af3 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 11e51afa mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 11e51b00 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 11e51b06 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_11e51b0d:;
  /* 11e51b0d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 11e51b13 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11e51b16 jmp 0x11e52137 */
  goto L_11e52137;
L_11e51b1b:;
  /* 11e51b1b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11e51b1e push eax */
  push32((uint32_t)(EAX));
  /* 11e51b1f call 0x11e52540 */
  push32(0x11e51b24u); f_11e52540();
  /* 11e51b24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e51b27 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 11e51b2d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e51b34 je 0x11e51b42 */
  if (C.zf) goto L_11e51b42;
  /* 11e51b36 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11e51b3c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e51b40 jne 0x11e51b5c */
  if (!C.zf) goto L_11e51b5c;
L_11e51b42:;
  /* 11e51b42 mov edx, dword ptr [0x11e750d0] */
  EDX = (r32((uint32_t)(0x11e750d0)));
  /* 11e51b48 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11e51b4b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e51b4e push eax */
  push32((uint32_t)(EAX));
  /* 11e51b4f call 0x11e4d5a0 */
  push32(0x11e51b54u); f_11e4d5a0();
  /* 11e51b54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e51b57 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11e51b5a jmp 0x11e51bab */
  goto L_11e51bab;
L_11e51b5c:;
  /* 11e51b5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e51b5f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 11e51b65 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e51b67 je 0x11e51b8c */
  if (C.zf) goto L_11e51b8c;
  /* 11e51b69 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11e51b6f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11e51b72 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11e51b75 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11e51b7b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 11e51b7e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11e51b80 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11e51b83 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 11e51b8a jmp 0x11e51bab */
  goto L_11e51bab;
L_11e51b8c:;
  /* 11e51b8c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11e51b93 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11e51b99 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11e51b9c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11e51b9f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11e51ba5 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 11e51ba8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11e51bab:;
  /* 11e51bab jmp 0x11e52137 */
  goto L_11e52137;
L_11e51bb0:;
  /* 11e51bb0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e51bb3 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 11e51bb9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e51bbb jne 0x11e51bc6 */
  if (!C.zf) goto L_11e51bc6;
  /* 11e51bbd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e51bc0 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11e51bc3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11e51bc6:;
  /* 11e51bc6 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e51bcd jne 0x11e51bdb */
  if (!C.zf) goto L_11e51bdb;
  /* 11e51bcf mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 11e51bd9 jmp 0x11e51be7 */
  goto L_11e51be7;
L_11e51bdb:;
  /* 11e51bdb mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 11e51be1 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_11e51be7:;
  /* 11e51be7 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 11e51bed mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 11e51bf3 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11e51bf6 push edx */
  push32((uint32_t)(EDX));
  /* 11e51bf7 call 0x11e52540 */
  push32(0x11e51bfcu); f_11e52540();
  /* 11e51bfc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e51bff mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11e51c02 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e51c05 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 11e51c0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e51c0c je 0x11e51c76 */
  if (C.zf) goto L_11e51c76;
  /* 11e51c0e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e51c12 jne 0x11e51c1d */
  if (!C.zf) goto L_11e51c1d;
  /* 11e51c14 mov ecx, dword ptr [0x11e750d4] */
  ECX = (r32((uint32_t)(0x11e750d4)));
  /* 11e51c1a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11e51c1d:;
  /* 11e51c1d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 11e51c24 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e51c27 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_11e51c2d:;
  /* 11e51c2d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 11e51c33 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 11e51c39 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e51c3c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 11e51c42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e51c44 je 0x11e51c66 */
  if (C.zf) goto L_11e51c66;
  /* 11e51c46 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 11e51c4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e51c4e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11e51c51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e51c53 je 0x11e51c66 */
  if (C.zf) goto L_11e51c66;
  /* 11e51c55 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 11e51c5b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e51c5e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 11e51c64 jmp 0x11e51c2d */
  goto L_11e51c2d;
L_11e51c66:;
  /* 11e51c66 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 11e51c6c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e51c6f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11e51c71 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11e51c74 jmp 0x11e51cd0 */
  goto L_11e51cd0;
L_11e51c76:;
  /* 11e51c76 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e51c7a jne 0x11e51c84 */
  if (!C.zf) goto L_11e51c84;
  /* 11e51c7c mov eax, dword ptr [0x11e750d0] */
  EAX = (r32((uint32_t)(0x11e750d0)));
  /* 11e51c81 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_11e51c84:;
  /* 11e51c84 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e51c87 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_11e51c8d:;
  /* 11e51c8d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 11e51c93 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 11e51c99 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e51c9c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 11e51ca2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e51ca4 je 0x11e51cc4 */
  if (C.zf) goto L_11e51cc4;
  /* 11e51ca6 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 11e51cac movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11e51caf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e51cb1 je 0x11e51cc4 */
  if (C.zf) goto L_11e51cc4;
  /* 11e51cb3 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 11e51cb9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e51cbc mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 11e51cc2 jmp 0x11e51c8d */
  goto L_11e51c8d;
L_11e51cc4:;
  /* 11e51cc4 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 11e51cca sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e51ccd mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_11e51cd0:;
  /* 11e51cd0 jmp 0x11e52137 */
  goto L_11e52137;
L_11e51cd5:;
  /* 11e51cd5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11e51cd8 push edx */
  push32((uint32_t)(EDX));
  /* 11e51cd9 call 0x11e52540 */
  push32(0x11e51cdeu); f_11e52540();
  /* 11e51cde add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e51ce1 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 11e51ce7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e51cea and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11e51ced test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e51cef je 0x11e51d03 */
  if (C.zf) goto L_11e51d03;
  /* 11e51cf1 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 11e51cf7 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 11e51cfe mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 11e51d01 jmp 0x11e51d11 */
  goto L_11e51d11;
L_11e51d03:;
  /* 11e51d03 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 11e51d09 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 11e51d0f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_11e51d11:;
  /* 11e51d11 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 11e51d1b jmp 0x11e52137 */
  goto L_11e52137;
L_11e51d20:;
  /* 11e51d20 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11e51d27 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 11e51d2a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 11e51d2d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_11e51d30:;
  /* 11e51d30 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e51d33 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 11e51d35 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e51d38 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 11e51d3e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11e51d41 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e51d48 jge 0x11e51d56 */
  if ((C.sf==C.of)) goto L_11e51d56;
  /* 11e51d4a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 11e51d54 jmp 0x11e51d72 */
  goto L_11e51d72;
L_11e51d56:;
  /* 11e51d56 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e51d5d jne 0x11e51d72 */
  if (!C.zf) goto L_11e51d72;
  /* 11e51d5f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11e51d63 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e51d66 jne 0x11e51d72 */
  if (!C.zf) goto L_11e51d72;
  /* 11e51d68 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_11e51d72:;
  /* 11e51d72 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e51d75 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e51d78 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11e51d7b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e51d7e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e51d81 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e51d83 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e51d86 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 11e51d8c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 11e51d92 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e51d95 push ecx */
  push32((uint32_t)(ECX));
  /* 11e51d96 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 11e51d9c push edx */
  push32((uint32_t)(EDX));
  /* 11e51d9d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11e51da1 push eax */
  push32((uint32_t)(EAX));
  /* 11e51da2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e51da5 push ecx */
  push32((uint32_t)(ECX));
  /* 11e51da6 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 11e51dac push edx */
  push32((uint32_t)(EDX));
  /* 11e51dad call dword ptr [0x11e754c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e754c0))), 0x11e51db3u);
  /* 11e51db3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e51db6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e51db9 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 11e51dbe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e51dc0 je 0x11e51dd8 */
  if (C.zf) goto L_11e51dd8;
  /* 11e51dc2 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e51dc9 jne 0x11e51dd8 */
  if (!C.zf) goto L_11e51dd8;
  /* 11e51dcb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e51dce push ecx */
  push32((uint32_t)(ECX));
  /* 11e51dcf call dword ptr [0x11e754cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e754cc))), 0x11e51dd5u);
  /* 11e51dd5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e51dd8:;
  /* 11e51dd8 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11e51ddc cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e51ddf jne 0x11e51dfa */
  if (!C.zf) goto L_11e51dfa;
  /* 11e51de1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e51de4 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 11e51de9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e51deb jne 0x11e51dfa */
  if (!C.zf) goto L_11e51dfa;
  /* 11e51ded mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e51df0 push ecx */
  push32((uint32_t)(ECX));
  /* 11e51df1 call dword ptr [0x11e754c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e754c4))), 0x11e51df7u);
  /* 11e51df7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e51dfa:;
  /* 11e51dfa mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e51dfd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11e51e00 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e51e03 jne 0x11e51e17 */
  if (!C.zf) goto L_11e51e17;
  /* 11e51e05 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e51e08 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11e51e0b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e51e0e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e51e11 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e51e14 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11e51e17:;
  /* 11e51e17 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e51e1a push eax */
  push32((uint32_t)(EAX));
  /* 11e51e1b call 0x11e4d5a0 */
  push32(0x11e51e20u); f_11e4d5a0();
  /* 11e51e20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e51e23 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11e51e26 jmp 0x11e52137 */
  goto L_11e52137;
L_11e51e2b:;
  /* 11e51e2b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e51e2e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 11e51e31 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e51e34 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 11e51e3e jmp 0x11e51ec5 */
  goto L_11e51ec5;
L_11e51e43:;
  /* 11e51e43 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 11e51e4d jmp 0x11e51ec5 */
  goto L_11e51ec5;
L_11e51e4f:;
  /* 11e51e4f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_11e51e59:;
  /* 11e51e59 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 11e51e63 jmp 0x11e51e6f */
  goto L_11e51e6f;
L_11e51e65:;
  /* 11e51e65 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_11e51e6f:;
  /* 11e51e6f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 11e51e79 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e51e7c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 11e51e82 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e51e84 je 0x11e51ea3 */
  if (C.zf) goto L_11e51ea3;
  /* 11e51e86 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 11e51e8d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 11e51e93 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e51e96 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 11e51e9c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_11e51ea3:;
  /* 11e51ea3 jmp 0x11e51ec5 */
  goto L_11e51ec5;
L_11e51ea5:;
  /* 11e51ea5 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 11e51eaf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e51eb2 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 11e51eb8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e51eba je 0x11e51ec5 */
  if (C.zf) goto L_11e51ec5;
  /* 11e51ebc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e51ebf or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11e51ec2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11e51ec5:;
  /* 11e51ec5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e51ec8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11e51ecd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e51ecf je 0x11e51eee */
  if (C.zf) goto L_11e51eee;
  /* 11e51ed1 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11e51ed4 push ecx */
  push32((uint32_t)(ECX));
  /* 11e51ed5 call 0x11e52560 */
  push32(0x11e51edau); f_11e52560();
  /* 11e51eda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e51edd mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11e51ee3 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 11e51ee9 jmp 0x11e51f7f */
  goto L_11e51f7f;
L_11e51eee:;
  /* 11e51eee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e51ef1 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11e51ef4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e51ef6 je 0x11e51f40 */
  if (C.zf) goto L_11e51f40;
  /* 11e51ef8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e51efb and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11e51efe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e51f00 je 0x11e51f20 */
  if (C.zf) goto L_11e51f20;
  /* 11e51f02 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11e51f05 push ecx */
  push32((uint32_t)(ECX));
  /* 11e51f06 call 0x11e52540 */
  push32(0x11e51f0bu); f_11e52540();
  /* 11e51f0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e51f0e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 11e51f11 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11e51f12 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11e51f18 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 11e51f1e jmp 0x11e51f3e */
  goto L_11e51f3e;
L_11e51f20:;
  /* 11e51f20 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11e51f23 push edx */
  push32((uint32_t)(EDX));
  /* 11e51f24 call 0x11e52540 */
  push32(0x11e51f29u); f_11e52540();
  /* 11e51f29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e51f2c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e51f31 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11e51f32 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11e51f38 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_11e51f3e:;
  /* 11e51f3e jmp 0x11e51f7f */
  goto L_11e51f7f;
L_11e51f40:;
  /* 11e51f40 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e51f43 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11e51f46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e51f48 je 0x11e51f65 */
  if (C.zf) goto L_11e51f65;
  /* 11e51f4a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11e51f4d push ecx */
  push32((uint32_t)(ECX));
  /* 11e51f4e call 0x11e52540 */
  push32(0x11e51f53u); f_11e52540();
  /* 11e51f53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e51f56 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11e51f57 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11e51f5d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 11e51f63 jmp 0x11e51f7f */
  goto L_11e51f7f;
L_11e51f65:;
  /* 11e51f65 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11e51f68 push edx */
  push32((uint32_t)(EDX));
  /* 11e51f69 call 0x11e52540 */
  push32(0x11e51f6eu); f_11e52540();
  /* 11e51f6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e51f71 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e51f73 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11e51f79 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_11e51f7f:;
  /* 11e51f7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e51f82 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 11e51f85 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e51f87 je 0x11e51fc7 */
  if (C.zf) goto L_11e51fc7;
  /* 11e51f89 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e51f90 jg 0x11e51fc7 */
  if ((!C.zf&&C.sf==C.of)) goto L_11e51fc7;
  /* 11e51f92 jl 0x11e51f9d */
  if ((C.sf!=C.of)) goto L_11e51f9d;
  /* 11e51f94 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e51f9b jae 0x11e51fc7 */
  if (!C.cf) goto L_11e51fc7;
L_11e51f9d:;
  /* 11e51f9d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 11e51fa3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e51fa5 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 11e51fab adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e51fae neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e51fb0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11e51fb6 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 11e51fbc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e51fbf or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11e51fc2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e51fc5 jmp 0x11e51fdf */
  goto L_11e51fdf;
L_11e51fc7:;
  /* 11e51fc7 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 11e51fcd mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11e51fd3 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 11e51fd9 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_11e51fdf:;
  /* 11e51fdf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e51fe2 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11e51fe8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e51fea jne 0x11e52007 */
  if (!C.zf) goto L_11e52007;
  /* 11e51fec mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11e51ff2 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 11e51ff8 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 11e51ffb mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11e52001 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_11e52007:;
  /* 11e52007 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5200e jge 0x11e5201c */
  if ((C.sf==C.of)) goto L_11e5201c;
  /* 11e52010 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 11e5201a jmp 0x11e52025 */
  goto L_11e52025;
L_11e5201c:;
  /* 11e5201c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e5201f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 11e52022 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11e52025:;
  /* 11e52025 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11e5202b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 11e52031 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e52033 jne 0x11e5203c */
  if (!C.zf) goto L_11e5203c;
  /* 11e52035 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11e5203c:;
  /* 11e5203c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 11e5203f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11e52042:;
  /* 11e52042 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 11e52048 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 11e5204e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e52051 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 11e52057 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e52059 jg 0x11e5206f */
  if ((!C.zf&&C.sf==C.of)) goto L_11e5206f;
  /* 11e5205b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11e52061 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 11e52067 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e52069 je 0x11e520f0 */
  if (C.zf) goto L_11e520f0;
L_11e5206f:;
  /* 11e5206f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 11e52075 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11e52076 push edx */
  push32((uint32_t)(EDX));
  /* 11e52077 push eax */
  push32((uint32_t)(EAX));
  /* 11e52078 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 11e5207e push edx */
  push32((uint32_t)(EDX));
  /* 11e5207f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11e52085 push eax */
  push32((uint32_t)(EAX));
  /* 11e52086 call 0x11e51400 */
  push32(0x11e5208bu); f_11e51400();
  /* 11e5208b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5208e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 11e52094 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 11e5209a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11e5209b push edx */
  push32((uint32_t)(EDX));
  /* 11e5209c push eax */
  push32((uint32_t)(EAX));
  /* 11e5209d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 11e520a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e520a4 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11e520aa push edx */
  push32((uint32_t)(EDX));
  /* 11e520ab call 0x11e51390 */
  push32(0x11e520b0u); f_11e51390();
  /* 11e520b0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11e520b6 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 11e520bc cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e520c3 jle 0x11e520d7 */
  if ((C.zf||C.sf!=C.of)) goto L_11e520d7;
  /* 11e520c5 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 11e520cb add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e520d1 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_11e520d7:;
  /* 11e520d7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e520da mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 11e520e0 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11e520e2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e520e5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e520e8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11e520eb jmp 0x11e52042 */
  goto L_11e52042;
L_11e520f0:;
  /* 11e520f0 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 11e520f3 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e520f6 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11e520f9 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e520fc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e520ff mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11e52102 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e52105 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 11e5210a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e5210c je 0x11e52137 */
  if (C.zf) goto L_11e52137;
  /* 11e5210e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e52111 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11e52114 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e52117 jne 0x11e5211f */
  if (!C.zf) goto L_11e5211f;
  /* 11e52119 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5211d jne 0x11e52137 */
  if (!C.zf) goto L_11e52137;
L_11e5211f:;
  /* 11e5211f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e52122 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e52125 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11e52128 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e5212b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 11e5212e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e52131 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e52134 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_11e52137:;
  /* 11e52137 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5213e jne 0x11e52312 */
  if (!C.zf) goto L_11e52312;
  /* 11e52144 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e52147 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11e5214a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e5214c je 0x11e5219d */
  if (C.zf) goto L_11e5219d;
  /* 11e5214e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e52151 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 11e52157 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e52159 je 0x11e5216b */
  if (C.zf) goto L_11e5216b;
  /* 11e5215b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 11e52162 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11e52169 jmp 0x11e5219d */
  goto L_11e5219d;
L_11e5216b:;
  /* 11e5216b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e5216e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11e52171 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e52173 je 0x11e52185 */
  if (C.zf) goto L_11e52185;
  /* 11e52175 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 11e5217c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11e52183 jmp 0x11e5219d */
  goto L_11e5219d;
L_11e52185:;
  /* 11e52185 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e52188 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 11e5218b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e5218d je 0x11e5219d */
  if (C.zf) goto L_11e5219d;
  /* 11e5218f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 11e52196 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_11e5219d:;
  /* 11e5219d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 11e521a3 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e521a6 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e521a9 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 11e521af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e521b2 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 11e521b5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e521b7 jne 0x11e521d5 */
  if (!C.zf) goto L_11e521d5;
  /* 11e521b9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11e521bf push eax */
  push32((uint32_t)(EAX));
  /* 11e521c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e521c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e521c4 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 11e521ca push edx */
  push32((uint32_t)(EDX));
  /* 11e521cb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11e521cd call 0x11e524b0 */
  push32(0x11e521d2u); f_11e524b0();
  /* 11e521d2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e521d5:;
  /* 11e521d5 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11e521db push eax */
  push32((uint32_t)(EAX));
  /* 11e521dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e521df push ecx */
  push32((uint32_t)(ECX));
  /* 11e521e0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e521e3 push edx */
  push32((uint32_t)(EDX));
  /* 11e521e4 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 11e521ea push eax */
  push32((uint32_t)(EAX));
  /* 11e521eb call 0x11e524f0 */
  push32(0x11e521f0u); f_11e524f0();
  /* 11e521f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e521f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e521f6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11e521f9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e521fb je 0x11e52223 */
  if (C.zf) goto L_11e52223;
  /* 11e521fd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e52200 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11e52203 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e52205 jne 0x11e52223 */
  if (!C.zf) goto L_11e52223;
  /* 11e52207 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11e5220d push eax */
  push32((uint32_t)(EAX));
  /* 11e5220e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e52211 push ecx */
  push32((uint32_t)(ECX));
  /* 11e52212 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 11e52218 push edx */
  push32((uint32_t)(EDX));
  /* 11e52219 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11e5221b call 0x11e524b0 */
  push32(0x11e52220u); f_11e524b0();
  /* 11e52220 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e52223:;
  /* 11e52223 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e52227 je 0x11e522d1 */
  if (C.zf) goto L_11e522d1;
  /* 11e5222d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e52231 jle 0x11e522d1 */
  if ((C.zf||C.sf!=C.of)) goto L_11e522d1;
  /* 11e52237 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e5223a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 11e52240 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e52243 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_11e52249:;
  /* 11e52249 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 11e5224f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 11e52255 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e52258 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 11e5225e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e52260 je 0x11e522cf */
  if (C.zf) goto L_11e522cf;
  /* 11e52262 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 11e52268 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11e5226b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 11e52272 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 11e52279 push eax */
  push32((uint32_t)(EAX));
  /* 11e5227a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 11e52280 push ecx */
  push32((uint32_t)(ECX));
  /* 11e52281 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 11e52287 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5228a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 11e52290 call 0x11e537a0 */
  push32(0x11e52295u); f_11e537a0();
  /* 11e52295 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e52298 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 11e5229e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e522a5 jg 0x11e522a9 */
  if ((!C.zf&&C.sf==C.of)) goto L_11e522a9;
  /* 11e522a7 jmp 0x11e522cf */
  goto L_11e522cf;
L_11e522a9:;
  /* 11e522a9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11e522af push eax */
  push32((uint32_t)(EAX));
  /* 11e522b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e522b3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e522b4 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 11e522ba push edx */
  push32((uint32_t)(EDX));
  /* 11e522bb lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 11e522c1 push eax */
  push32((uint32_t)(EAX));
  /* 11e522c2 call 0x11e524f0 */
  push32(0x11e522c7u); f_11e524f0();
  /* 11e522c7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e522ca jmp 0x11e52249 */
  goto L_11e52249;
L_11e522cf:;
  /* 11e522cf jmp 0x11e522ec */
  goto L_11e522ec;
L_11e522d1:;
  /* 11e522d1 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 11e522d7 push ecx */
  push32((uint32_t)(ECX));
  /* 11e522d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e522db push edx */
  push32((uint32_t)(EDX));
  /* 11e522dc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e522df push eax */
  push32((uint32_t)(EAX));
  /* 11e522e0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e522e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e522e4 call 0x11e524f0 */
  push32(0x11e522e9u); f_11e524f0();
  /* 11e522e9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e522ec:;
  /* 11e522ec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e522ef and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11e522f2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e522f4 je 0x11e52312 */
  if (C.zf) goto L_11e52312;
  /* 11e522f6 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11e522fc push eax */
  push32((uint32_t)(EAX));
  /* 11e522fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e52300 push ecx */
  push32((uint32_t)(ECX));
  /* 11e52301 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 11e52307 push edx */
  push32((uint32_t)(EDX));
  /* 11e52308 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11e5230a call 0x11e524b0 */
  push32(0x11e5230fu); f_11e524b0();
  /* 11e5230f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e52312:;
  /* 11e52312 jmp 0x11e51724 */
  goto L_11e51724;
L_11e52317:;
  /* 11e52317 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 11e5231d pop edi */
  EDI = (pop32());
  /* 11e5231e pop esi */
  ESI = (pop32());
  /* 11e5231f pop ebx */
  EBX = (pop32());
  /* 11e52320 mov esp, ebp */
  ESP = (EBP);
  /* 11e52322 pop ebp */
  EBP = (pop32());
  /* 11e52323 ret  */
  ESPCHK(0x11e51700u, _esp0);
  ESP += 4; return;
}

/* FUN_10012430 @ 0x11e52430 (119 bytes, 44 insns) */
void f_11e52430(void) {
  FTRACE(0x11e52430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e52430 push ebp */
  push32((uint32_t)(EBP));
  /* 11e52431 mov ebp, esp */
  EBP = (ESP);
  /* 11e52433 push ecx */
  push32((uint32_t)(ECX));
  /* 11e52434 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e52437 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11e5243a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e5243d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e52440 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11e52443 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e52446 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5244a jl 0x11e52472 */
  if ((C.sf!=C.of)) goto L_11e52472;
  /* 11e5244c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e5244f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e52451 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11e52454 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11e52456 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 11e5245a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11e52460 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e52463 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e52466 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e52468 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5246b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e5246e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11e52470 jmp 0x11e52485 */
  goto L_11e52485;
L_11e52472:;
  /* 11e52472 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e52475 push edx */
  push32((uint32_t)(EDX));
  /* 11e52476 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e52479 push eax */
  push32((uint32_t)(EAX));
  /* 11e5247a call 0x11e51480 */
  push32(0x11e5247fu); f_11e51480();
  /* 11e5247f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e52482 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11e52485:;
  /* 11e52485 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e52489 jne 0x11e52496 */
  if (!C.zf) goto L_11e52496;
  /* 11e5248b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e5248e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11e52494 jmp 0x11e524a3 */
  goto L_11e524a3;
L_11e52496:;
  /* 11e52496 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e52499 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e5249b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5249e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e524a1 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11e524a3:;
  /* 11e524a3 mov esp, ebp */
  ESP = (EBP);
  /* 11e524a5 pop ebp */
  EBP = (pop32());
  /* 11e524a6 ret  */
  ESPCHK(0x11e52430u, _esp0);
  ESP += 4; return;
}

/* FUN_100124b0 @ 0x11e524b0 (53 bytes, 23 insns) */
void f_11e524b0(void) {
  FTRACE(0x11e524b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e524b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e524b1 mov ebp, esp */
  EBP = (ESP);
L_11e524b3:;
  /* 11e524b3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e524b6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e524b9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e524bc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11e524bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e524c1 jle 0x11e524e3 */
  if ((C.zf||C.sf!=C.of)) goto L_11e524e3;
  /* 11e524c3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e524c6 push edx */
  push32((uint32_t)(EDX));
  /* 11e524c7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e524ca push eax */
  push32((uint32_t)(EAX));
  /* 11e524cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e524ce push ecx */
  push32((uint32_t)(ECX));
  /* 11e524cf call 0x11e52430 */
  push32(0x11e524d4u); f_11e52430();
  /* 11e524d4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e524d7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e524da cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e524dd jne 0x11e524e1 */
  if (!C.zf) goto L_11e524e1;
  /* 11e524df jmp 0x11e524e3 */
  goto L_11e524e3;
L_11e524e1:;
  /* 11e524e1 jmp 0x11e524b3 */
  goto L_11e524b3;
L_11e524e3:;
  /* 11e524e3 pop ebp */
  EBP = (pop32());
  /* 11e524e4 ret  */
  ESPCHK(0x11e524b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100124f0 @ 0x11e524f0 (74 bytes, 31 insns) */
void f_11e524f0(void) {
  FTRACE(0x11e524f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e524f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e524f1 mov ebp, esp */
  EBP = (ESP);
  /* 11e524f3 push ecx */
  push32((uint32_t)(ECX));
L_11e524f4:;
  /* 11e524f4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e524f7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e524fa sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e524fd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11e52500 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e52502 jle 0x11e52536 */
  if ((C.zf||C.sf!=C.of)) goto L_11e52536;
  /* 11e52504 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e52507 push edx */
  push32((uint32_t)(EDX));
  /* 11e52508 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e5250b push eax */
  push32((uint32_t)(EAX));
  /* 11e5250c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5250f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11e52512 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e52515 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e52518 push eax */
  push32((uint32_t)(EAX));
  /* 11e52519 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5251c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5251f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11e52522 call 0x11e52430 */
  push32(0x11e52527u); f_11e52430();
  /* 11e52527 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5252a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e5252d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e52530 jne 0x11e52534 */
  if (!C.zf) goto L_11e52534;
  /* 11e52532 jmp 0x11e52536 */
  goto L_11e52536;
L_11e52534:;
  /* 11e52534 jmp 0x11e524f4 */
  goto L_11e524f4;
L_11e52536:;
  /* 11e52536 mov esp, ebp */
  ESP = (EBP);
  /* 11e52538 pop ebp */
  EBP = (pop32());
  /* 11e52539 ret  */
  ESPCHK(0x11e524f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012540 @ 0x11e52540 (26 bytes, 12 insns) */
void f_11e52540(void) {
  FTRACE(0x11e52540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e52540 push ebp */
  push32((uint32_t)(EBP));
  /* 11e52541 mov ebp, esp */
  EBP = (ESP);
  /* 11e52543 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e52546 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e52548 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5254b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5254e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11e52550 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e52553 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e52555 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11e52558 pop ebp */
  EBP = (pop32());
  /* 11e52559 ret  */
  ESPCHK(0x11e52540u, _esp0);
  ESP += 4; return;
}

/* FUN_10012560 @ 0x11e52560 (31 bytes, 14 insns) */
void f_11e52560(void) {
  FTRACE(0x11e52560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e52560 push ebp */
  push32((uint32_t)(EBP));
  /* 11e52561 mov ebp, esp */
  EBP = (ESP);
  /* 11e52563 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e52566 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e52568 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5256b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5256e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11e52570 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e52573 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e52575 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e52578 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11e5257a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e5257d pop ebp */
  EBP = (pop32());
  /* 11e5257e ret  */
  ESPCHK(0x11e52560u, _esp0);
  ESP += 4; return;
}

/* FUN_10012580 @ 0x11e52580 (27 bytes, 12 insns) */
void f_11e52580(void) {
  FTRACE(0x11e52580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e52580 push ebp */
  push32((uint32_t)(EBP));
  /* 11e52581 mov ebp, esp */
  EBP = (ESP);
  /* 11e52583 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e52586 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e52588 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5258b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5258e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11e52590 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e52593 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e52595 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 11e52599 pop ebp */
  EBP = (pop32());
  /* 11e5259a ret  */
  ESPCHK(0x11e52580u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x11e525a0 (145 bytes, 42 insns) */
void f_11e525a0(void) {
  FTRACE(0x11e525a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e525a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e525a1 mov ebp, esp */
  EBP = (ESP);
  /* 11e525a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e525a4 call 0x11e52650 */
  push32(0x11e525a9u); f_11e52650();
  /* 11e525a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e525ac mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11e525ae mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e525b5 jmp 0x11e525c0 */
  goto L_11e525c0;
L_11e525b7:;
  /* 11e525b7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e525ba add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e525bd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11e525c0:;
  /* 11e525c0 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e525c4 jae 0x11e525ea */
  if (!C.cf) goto L_11e525ea;
  /* 11e525c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e525c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e525cc cmp ecx, dword ptr [eax*8 + 0x11e750d8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x11e750d8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e525d3 jne 0x11e525e8 */
  if (!C.zf) goto L_11e525e8;
  /* 11e525d5 call 0x11e52640 */
  push32(0x11e525dau); f_11e52640();
  /* 11e525da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e525dd mov ecx, dword ptr [edx*8 + 0x11e750dc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x11e750dc)));
  /* 11e525e4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11e525e6 jmp 0x11e5262d */
  goto L_11e5262d;
L_11e525e8:;
  /* 11e525e8 jmp 0x11e525b7 */
  goto L_11e525b7;
L_11e525ea:;
  /* 11e525ea cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e525ee jb 0x11e52603 */
  if (C.cf) goto L_11e52603;
  /* 11e525f0 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e525f4 ja 0x11e52603 */
  if ((!C.cf&&!C.zf)) goto L_11e52603;
  /* 11e525f6 call 0x11e52640 */
  push32(0x11e525fbu); f_11e52640();
  /* 11e525fb mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 11e52601 jmp 0x11e5262d */
  goto L_11e5262d;
L_11e52603:;
  /* 11e52603 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5260a jb 0x11e52622 */
  if (C.cf) goto L_11e52622;
  /* 11e5260c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e52613 ja 0x11e52622 */
  if ((!C.cf&&!C.zf)) goto L_11e52622;
  /* 11e52615 call 0x11e52640 */
  push32(0x11e5261au); f_11e52640();
  /* 11e5261a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 11e52620 jmp 0x11e5262d */
  goto L_11e5262d;
L_11e52622:;
  /* 11e52622 call 0x11e52640 */
  push32(0x11e52627u); f_11e52640();
  /* 11e52627 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_11e5262d:;
  /* 11e5262d mov esp, ebp */
  ESP = (EBP);
  /* 11e5262f pop ebp */
  EBP = (pop32());
  /* 11e52630 ret  */
  ESPCHK(0x11e525a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012640 @ 0x11e52640 (13 bytes, 6 insns) */
void f_11e52640(void) {
  FTRACE(0x11e52640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e52640 push ebp */
  push32((uint32_t)(EBP));
  /* 11e52641 mov ebp, esp */
  EBP = (ESP);
  /* 11e52643 call 0x11e489f0 */
  push32(0x11e52648u); f_11e489f0();
  /* 11e52648 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5264b pop ebp */
  EBP = (pop32());
  /* 11e5264c ret  */
  ESPCHK(0x11e52640u, _esp0);
  ESP += 4; return;
}

/* FUN_10012650 @ 0x11e52650 (13 bytes, 6 insns) */
void f_11e52650(void) {
  FTRACE(0x11e52650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e52650 push ebp */
  push32((uint32_t)(EBP));
  /* 11e52651 mov ebp, esp */
  EBP = (ESP);
  /* 11e52653 call 0x11e489f0 */
  push32(0x11e52658u); f_11e489f0();
  /* 11e52658 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5265b pop ebp */
  EBP = (pop32());
  /* 11e5265c ret  */
  ESPCHK(0x11e52650u, _esp0);
  ESP += 4; return;
}

/* FUN_10012660 @ 0x11e52660 (664 bytes, 265 insns) [15 switch table(s)] */
void f_11e52660(void) {
  FTRACE(0x11e52660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e52660 push ebp */
  push32((uint32_t)(EBP));
  /* 11e52661 mov ebp, esp */
  EBP = (ESP);
  /* 11e52663 push edi */
  push32((uint32_t)(EDI));
  /* 11e52664 push esi */
  push32((uint32_t)(ESI));
  /* 11e52665 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11e52668 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e5266b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5266e mov eax, ecx */
  EAX = (ECX);
  /* 11e52670 mov edx, ecx */
  EDX = (ECX);
  /* 11e52672 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e52674 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e52676 jbe 0x11e52680 */
  if ((C.cf||C.zf)) goto L_11e52680;
  /* 11e52678 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5267a jb 0x11e527f8 */
  if (C.cf) goto L_11e527f8;
L_11e52680:;
  /* 11e52680 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11e52686 jne 0x11e5269c */
  if (!C.zf) goto L_11e5269c;
  /* 11e52688 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e5268b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11e5268e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e52691 jb 0x11e526bc */
  if (C.cf) goto L_11e526bc;
  /* 11e52693 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11e52695 jmp dword ptr [edx*4 + 0x11e527a8] */
  switch (EDX) {
    case 0: goto L_11e527b8;
    case 1: goto L_11e527c0;
    case 2: goto L_11e527cc;
    case 3: goto L_11e527e0;
    default: x86_unimpl("switch@0x11e52695 out of table"); return;
  }
L_11e5269c:;
  /* 11e5269c mov eax, edi */
  EAX = (EDI);
  /* 11e5269e mov edx, 3 */
  EDX = (0x3u);
  /* 11e526a3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e526a6 jb 0x11e526b4 */
  if (C.cf) goto L_11e526b4;
  /* 11e526a8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11e526ab add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e526ad jmp dword ptr [eax*4 + 0x11e526c0] */
  switch (EAX) {
    case 1: goto L_11e526d0;
    case 2: goto L_11e526fc;
    case 3: goto L_11e52720;
    default: x86_unimpl("switch@0x11e526ad out of table"); return;
  }
L_11e526b4:;
  /* 11e526b4 jmp dword ptr [ecx*4 + 0x11e527b8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11e527b8)))); return;
  /* 11e526bb nop  */
  /* nop */
L_11e526bc:;
  /* 11e526bc jmp dword ptr [ecx*4 + 0x11e5273c] */
  switch (ECX) {
    case 0: goto L_11e5279f;
    case 1: goto L_11e5278c;
    case 2: goto L_11e52784;
    case 3: goto L_11e5277c;
    case 4: goto L_11e52774;
    case 5: goto L_11e5276c;
    case 6: goto L_11e52764;
    case 7: goto L_11e5275c;
    default: x86_unimpl("switch@0x11e526bc out of table"); return;
  }
  /* 11e526c3 nop  */
  /* nop */
L_11e526d0:;
  /* 11e526d0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11e526d2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e526d4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11e526d6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11e526d9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11e526dc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11e526df shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e526e2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11e526e5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e526e8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e526eb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e526ee jb 0x11e526bc */
  if (C.cf) goto L_11e526bc;
  /* 11e526f0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11e526f2 jmp dword ptr [edx*4 + 0x11e527a8] */
  switch (EDX) {
    case 0: goto L_11e527b8;
    case 1: goto L_11e527c0;
    case 2: goto L_11e527cc;
    case 3: goto L_11e527e0;
    default: x86_unimpl("switch@0x11e526f2 out of table"); return;
  }
  /* 11e526f9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11e526fc:;
  /* 11e526fc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11e526fe mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e52700 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11e52702 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11e52705 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e52708 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11e5270b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5270e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e52711 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e52714 jb 0x11e526bc */
  if (C.cf) goto L_11e526bc;
  /* 11e52716 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11e52718 jmp dword ptr [edx*4 + 0x11e527a8] */
  switch (EDX) {
    case 0: goto L_11e527b8;
    case 1: goto L_11e527c0;
    case 2: goto L_11e527cc;
    case 3: goto L_11e527e0;
    default: x86_unimpl("switch@0x11e52718 out of table"); return;
  }
  /* 11e5271f nop  */
  /* nop */
L_11e52720:;
  /* 11e52720 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11e52722 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e52724 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11e52726 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e52727 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e5272a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11e5272b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5272e jb 0x11e526bc */
  if (C.cf) goto L_11e526bc;
  /* 11e52730 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11e52732 jmp dword ptr [edx*4 + 0x11e527a8] */
  switch (EDX) {
    case 0: goto L_11e527b8;
    case 1: goto L_11e527c0;
    case 2: goto L_11e527cc;
    case 3: goto L_11e527e0;
    default: x86_unimpl("switch@0x11e52732 out of table"); return;
  }
  /* 11e52739 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11e5275c:;
  /* 11e5275c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11e52760 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11e52764:;
  /* 11e52764 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11e52768 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11e5276c:;
  /* 11e5276c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11e52770 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11e52774:;
  /* 11e52774 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11e52778 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11e5277c:;
  /* 11e5277c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11e52780 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11e52784:;
  /* 11e52784 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11e52788 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11e5278c:;
  /* 11e5278c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11e52790 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11e52794 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11e5279b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5279d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11e5279f:;
  /* 11e5279f jmp dword ptr [edx*4 + 0x11e527a8] */
  switch (EDX) {
    case 0: goto L_11e527b8;
    case 1: goto L_11e527c0;
    case 2: goto L_11e527cc;
    case 3: goto L_11e527e0;
    default: x86_unimpl("switch@0x11e5279f out of table"); return;
  }
  /* 11e527a6 mov edi, edi */
  EDI = (EDI);
L_11e527b8:;
  /* 11e527b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e527bb pop esi */
  ESI = (pop32());
  /* 11e527bc pop edi */
  EDI = (pop32());
  /* 11e527bd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e527be ret  */
  ESPCHK(0x11e52660u, _esp0);
  ESP += 4; return;
  /* 11e527bf nop  */
  /* nop */
L_11e527c0:;
  /* 11e527c0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e527c2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11e527c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e527c7 pop esi */
  ESI = (pop32());
  /* 11e527c8 pop edi */
  EDI = (pop32());
  /* 11e527c9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e527ca ret  */
  ESPCHK(0x11e52660u, _esp0);
  ESP += 4; return;
  /* 11e527cb nop  */
  /* nop */
L_11e527cc:;
  /* 11e527cc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e527ce mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11e527d0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11e527d3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11e527d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e527d9 pop esi */
  ESI = (pop32());
  /* 11e527da pop edi */
  EDI = (pop32());
  /* 11e527db leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e527dc ret  */
  ESPCHK(0x11e52660u, _esp0);
  ESP += 4; return;
  /* 11e527dd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11e527e0:;
  /* 11e527e0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e527e2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11e527e4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11e527e7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11e527ea mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11e527ed mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11e527f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e527f3 pop esi */
  ESI = (pop32());
  /* 11e527f4 pop edi */
  EDI = (pop32());
  /* 11e527f5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e527f6 ret  */
  ESPCHK(0x11e52660u, _esp0);
  ESP += 4; return;
  /* 11e527f7 nop  */
  /* nop */
L_11e527f8:;
  /* 11e527f8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11e527fc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11e52800 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11e52806 jne 0x11e5282c */
  if (!C.zf) goto L_11e5282c;
  /* 11e52808 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e5280b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11e5280e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e52811 jb 0x11e52820 */
  if (C.cf) goto L_11e52820;
  /* 11e52813 std  */
  C.df=1;
  /* 11e52814 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11e52816 cld  */
  C.df=0;
  /* 11e52817 jmp dword ptr [edx*4 + 0x11e52940] */
  switch (EDX) {
    case 0: goto L_11e52950;
    case 1: goto L_11e52958;
    case 2: goto L_11e52968;
    case 3: goto L_11e5297c;
    default: x86_unimpl("switch@0x11e52817 out of table"); return;
  }
  /* 11e5281e mov edi, edi */
  EDI = (EDI);
L_11e52820:;
  /* 11e52820 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e52822 jmp dword ptr [ecx*4 + 0x11e528f0] */
  switch (ECX) {
    case 0: goto L_11e52937;
    default: x86_unimpl("switch@0x11e52822 out of table"); return;
  }
  /* 11e52829 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11e5282c:;
  /* 11e5282c mov eax, edi */
  EAX = (EDI);
  /* 11e5282e mov edx, 3 */
  EDX = (0x3u);
  /* 11e52833 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e52836 jb 0x11e52844 */
  if (C.cf) goto L_11e52844;
  /* 11e52838 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11e5283b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e5283d jmp dword ptr [eax*4 + 0x11e52848] */
  switch (EAX) {
    case 1: goto L_11e52858;
    case 2: goto L_11e52878;
    case 3: goto L_11e528a0;
    default: x86_unimpl("switch@0x11e5283d out of table"); return;
  }
L_11e52844:;
  /* 11e52844 jmp dword ptr [ecx*4 + 0x11e52940] */
  switch (ECX) {
    case 0: goto L_11e52950;
    case 1: goto L_11e52958;
    case 2: goto L_11e52968;
    case 3: goto L_11e5297c;
    default: x86_unimpl("switch@0x11e52844 out of table"); return;
  }
  /* 11e5284b nop  */
  /* nop */
L_11e52858:;
  /* 11e52858 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11e5285b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11e5285d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11e52860 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11e52861 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e52864 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11e52865 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e52868 jb 0x11e52820 */
  if (C.cf) goto L_11e52820;
  /* 11e5286a std  */
  C.df=1;
  /* 11e5286b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11e5286d cld  */
  C.df=0;
  /* 11e5286e jmp dword ptr [edx*4 + 0x11e52940] */
  switch (EDX) {
    case 0: goto L_11e52950;
    case 1: goto L_11e52958;
    case 2: goto L_11e52968;
    case 3: goto L_11e5297c;
    default: x86_unimpl("switch@0x11e5286e out of table"); return;
  }
  /* 11e52875 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11e52878:;
  /* 11e52878 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11e5287b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11e5287d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11e52880 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11e52883 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e52886 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11e52889 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e5288c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e5288f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e52892 jb 0x11e52820 */
  if (C.cf) goto L_11e52820;
  /* 11e52894 std  */
  C.df=1;
  /* 11e52895 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11e52897 cld  */
  C.df=0;
  /* 11e52898 jmp dword ptr [edx*4 + 0x11e52940] */
  switch (EDX) {
    case 0: goto L_11e52950;
    case 1: goto L_11e52958;
    case 2: goto L_11e52968;
    case 3: goto L_11e5297c;
    default: x86_unimpl("switch@0x11e52898 out of table"); return;
  }
  /* 11e5289f nop  */
  /* nop */
L_11e528a0:;
  /* 11e528a0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11e528a3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11e528a5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11e528a8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11e528ab mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11e528ae mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11e528b1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e528b4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11e528b7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e528ba sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e528bd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e528c0 jb 0x11e52820 */
  if (C.cf) goto L_11e52820;
  /* 11e528c6 std  */
  C.df=1;
  /* 11e528c7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11e528c9 cld  */
  C.df=0;
  /* 11e528ca jmp dword ptr [edx*4 + 0x11e52940] */
  switch (EDX) {
    case 0: goto L_11e52950;
    case 1: goto L_11e52958;
    case 2: goto L_11e52968;
    case 3: goto L_11e5297c;
    default: x86_unimpl("switch@0x11e528ca out of table"); return;
  }
  /* 11e528d1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11e528d4 hlt  */
  x86_unimpl("hlt @ 0x11e528d4");
  /* 11e528d5 sub ch, ah */
  { uint32_t _a=(C.c.b.h),_b=(AH),_r=_a-_b; C.c.b.h = (_r); fl_sub(_a,_b,_r,8); }
  /* 11e528d7 adc esp, edi */
  { uint32_t _a=(ESP),_b=(EDI),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e528d9 sub ch, ah */
  { uint32_t _a=(C.c.b.h),_b=(AH),_r=_a-_b; C.c.b.h = (_r); fl_sub(_a,_b,_r,8); }
  /* 11e528db adc dword ptr [ecx + ebp], eax */
  { uint32_t _a=(r32((uint32_t)(ECX + EBP*1))),_b=(EAX),_r=_a+_b+C.cf; w32((uint32_t)(ECX + EBP*1), (_r)); fl_add(_a,_b,_r,32); }
  /* 11e528de in eax, 0x11 */
  x86_unimpl("in @ 0x11e528de");
  /* 11e528e0 or al, 0x29 */
  { uint32_t _r=(AL)|(0x29u); AL = (_r); fl_logic(_r,8); }
  /* 11e528e2 in eax, 0x11 */
  x86_unimpl("in @ 0x11e528e2");
  /* 11e528e4 adc al, 0x29 */
  { uint32_t _a=(AL),_b=(0x29u),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11e528e6 in eax, 0x11 */
  x86_unimpl("in @ 0x11e528e6");
  /* 11e528e8 sbb al, 0x29 */
  { uint32_t _a=(AL),_b=(0x29u),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11e528ea in eax, 0x11 */
  x86_unimpl("in @ 0x11e528ea");
  /* 11e528ec and al, 0x29 */
  { uint32_t _r=(AL)&(0x29u); AL = (_r); fl_logic(_r,8); }
  /* 11e528ee in eax, 0x11 */
  x86_unimpl("in @ 0x11e528ee");
  /* 11e528f4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11e528f8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11e528fc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11e52900 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11e52904 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11e52908 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11e5290c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11e52910 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11e52914 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11e52918 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11e5291c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11e52920 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11e52924 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11e52928 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11e5292c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11e52933 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e52935 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11e52937:;
  /* 11e52937 jmp dword ptr [edx*4 + 0x11e52940] */
  switch (EDX) {
    case 0: goto L_11e52950;
    case 1: goto L_11e52958;
    case 2: goto L_11e52968;
    case 3: goto L_11e5297c;
    default: x86_unimpl("switch@0x11e52937 out of table"); return;
  }
  /* 11e5293e mov edi, edi */
  EDI = (EDI);
L_11e52950:;
  /* 11e52950 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e52953 pop esi */
  ESI = (pop32());
  /* 11e52954 pop edi */
  EDI = (pop32());
  /* 11e52955 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e52956 ret  */
  ESPCHK(0x11e52660u, _esp0);
  ESP += 4; return;
  /* 11e52957 nop  */
  /* nop */
L_11e52958:;
  /* 11e52958 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11e5295b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11e5295e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e52961 pop esi */
  ESI = (pop32());
  /* 11e52962 pop edi */
  EDI = (pop32());
  /* 11e52963 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e52964 ret  */
  ESPCHK(0x11e52660u, _esp0);
  ESP += 4; return;
  /* 11e52965 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11e52968:;
  /* 11e52968 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11e5296b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11e5296e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11e52971 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11e52974 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e52977 pop esi */
  ESI = (pop32());
  /* 11e52978 pop edi */
  EDI = (pop32());
  /* 11e52979 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e5297a ret  */
  ESPCHK(0x11e52660u, _esp0);
  ESP += 4; return;
  /* 11e5297b nop  */
  /* nop */
L_11e5297c:;
  /* 11e5297c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11e5297f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11e52982 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11e52985 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11e52988 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11e5298b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11e5298e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e52991 pop esi */
  ESI = (pop32());
  /* 11e52992 pop edi */
  EDI = (pop32());
  /* 11e52993 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e52994 ret  */
  ESPCHK(0x11e52660u, _esp0);
  ESP += 4; return;
}

/* FUN_100129a0 @ 0x11e529a0 (421 bytes, 148 insns) */
void f_11e529a0(void) {
  FTRACE(0x11e529a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e529a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e529a1 mov ebp, esp */
  EBP = (ESP);
  /* 11e529a3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11e529a5 push 0x11e71fd0 */
  push32((uint32_t)(0x11e71fd0u));
  /* 11e529aa push 0x11e539b8 */
  push32((uint32_t)(0x11e539b8u));
  /* 11e529af mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11e529b5 push eax */
  push32((uint32_t)(EAX));
  /* 11e529b6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11e529bd add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e529c0 push ebx */
  push32((uint32_t)(EBX));
  /* 11e529c1 push esi */
  push32((uint32_t)(ESI));
  /* 11e529c2 push edi */
  push32((uint32_t)(EDI));
  /* 11e529c3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11e529c6 cmp dword ptr [0x11e76bc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e76bc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e529cd jne 0x11e52a1e */
  if (!C.zf) goto L_11e52a1e;
  /* 11e529cf lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11e529d2 push eax */
  push32((uint32_t)(EAX));
  /* 11e529d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e529d5 push 0x11e71fc8 */
  push32((uint32_t)(0x11e71fc8u));
  /* 11e529da push 1 */
  push32((uint32_t)(0x1u));
  /* 11e529dc call dword ptr [0x11e79318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e79318))), 0x11e529e2u);
  /* 11e529e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e529e4 je 0x11e529f2 */
  if (C.zf) goto L_11e529f2;
  /* 11e529e6 mov dword ptr [0x11e76bc0], 1 */
  w32((uint32_t)(0x11e76bc0), (0x1u));
  /* 11e529f0 jmp 0x11e52a1e */
  goto L_11e52a1e;
L_11e529f2:;
  /* 11e529f2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 11e529f5 push ecx */
  push32((uint32_t)(ECX));
  /* 11e529f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e529f8 push 0x11e71fc4 */
  push32((uint32_t)(0x11e71fc4u));
  /* 11e529fd push 1 */
  push32((uint32_t)(0x1u));
  /* 11e529ff push 0 */
  push32((uint32_t)(0x0u));
  /* 11e52a01 call dword ptr [0x11e7931c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e7931c))), 0x11e52a07u);
  /* 11e52a07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e52a09 je 0x11e52a17 */
  if (C.zf) goto L_11e52a17;
  /* 11e52a0b mov dword ptr [0x11e76bc0], 2 */
  w32((uint32_t)(0x11e76bc0), (0x2u));
  /* 11e52a15 jmp 0x11e52a1e */
  goto L_11e52a1e;
L_11e52a17:;
  /* 11e52a17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e52a19 jmp 0x11e52b48 */
  goto L_11e52b48;
L_11e52a1e:;
  /* 11e52a1e cmp dword ptr [0x11e76bc0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11e76bc0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e52a25 jne 0x11e52a55 */
  if (!C.zf) goto L_11e52a55;
  /* 11e52a27 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e52a2b jne 0x11e52a36 */
  if (!C.zf) goto L_11e52a36;
  /* 11e52a2d mov edx, dword ptr [0x11e76ba8] */
  EDX = (r32((uint32_t)(0x11e76ba8)));
  /* 11e52a33 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_11e52a36:;
  /* 11e52a36 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e52a39 push eax */
  push32((uint32_t)(EAX));
  /* 11e52a3a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e52a3d push ecx */
  push32((uint32_t)(ECX));
  /* 11e52a3e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e52a41 push edx */
  push32((uint32_t)(EDX));
  /* 11e52a42 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e52a45 push eax */
  push32((uint32_t)(EAX));
  /* 11e52a46 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e52a49 push ecx */
  push32((uint32_t)(ECX));
  /* 11e52a4a call dword ptr [0x11e7931c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e7931c))), 0x11e52a50u);
  /* 11e52a50 jmp 0x11e52b48 */
  goto L_11e52b48;
L_11e52a55:;
  /* 11e52a55 cmp dword ptr [0x11e76bc0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e76bc0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e52a5c jne 0x11e52b46 */
  if (!C.zf) goto L_11e52b46;
  /* 11e52a62 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e52a66 jne 0x11e52a71 */
  if (!C.zf) goto L_11e52a71;
  /* 11e52a68 mov edx, dword ptr [0x11e76bb8] */
  EDX = (r32((uint32_t)(0x11e76bb8)));
  /* 11e52a6e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_11e52a71:;
  /* 11e52a71 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e52a73 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e52a75 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e52a78 push eax */
  push32((uint32_t)(EAX));
  /* 11e52a79 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e52a7c push ecx */
  push32((uint32_t)(ECX));
  /* 11e52a7d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 11e52a80 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e52a82 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e52a84 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11e52a87 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e52a8a push edx */
  push32((uint32_t)(EDX));
  /* 11e52a8b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e52a8e push eax */
  push32((uint32_t)(EAX));
  /* 11e52a8f call dword ptr [0x11e7932c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e7932c))), 0x11e52a95u);
  /* 11e52a95 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11e52a98 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e52a9c jne 0x11e52aa5 */
  if (!C.zf) goto L_11e52aa5;
  /* 11e52a9e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e52aa0 jmp 0x11e52b48 */
  goto L_11e52b48;
L_11e52aa5:;
  /* 11e52aa5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e52aac mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e52aaf shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11e52ab1 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e52ab4 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11e52ab6 call 0x11e4d910 */
  push32(0x11e52abbu); f_11e4d910();
  /* 11e52abb mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 11e52abe mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11e52ac1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e52ac4 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11e52ac7 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e52aca shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11e52acc push edx */
  push32((uint32_t)(EDX));
  /* 11e52acd push 0 */
  push32((uint32_t)(0x0u));
  /* 11e52acf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e52ad2 push eax */
  push32((uint32_t)(EAX));
  /* 11e52ad3 call 0x11e4e100 */
  push32(0x11e52ad8u); f_11e4e100();
  /* 11e52ad8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e52adb mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11e52ae2 jmp 0x11e52afb */
  goto L_11e52afb;
  /* 11e52ae4 mov eax, 1 */
  EAX = (0x1u);
  /* 11e52ae9 ret  */
  ESPCHK(0x11e529a0u, _esp0);
  ESP += 4; return;
  /* 11e52aea mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11e52aed mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11e52af4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11e52afb:;
  /* 11e52afb cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e52aff jne 0x11e52b05 */
  if (!C.zf) goto L_11e52b05;
  /* 11e52b01 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e52b03 jmp 0x11e52b48 */
  goto L_11e52b48;
L_11e52b05:;
  /* 11e52b05 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e52b08 push ecx */
  push32((uint32_t)(ECX));
  /* 11e52b09 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e52b0c push edx */
  push32((uint32_t)(EDX));
  /* 11e52b0d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e52b10 push eax */
  push32((uint32_t)(EAX));
  /* 11e52b11 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e52b14 push ecx */
  push32((uint32_t)(ECX));
  /* 11e52b15 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e52b17 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e52b1a push edx */
  push32((uint32_t)(EDX));
  /* 11e52b1b call dword ptr [0x11e7932c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e7932c))), 0x11e52b21u);
  /* 11e52b21 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11e52b24 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e52b28 jne 0x11e52b2e */
  if (!C.zf) goto L_11e52b2e;
  /* 11e52b2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e52b2c jmp 0x11e52b48 */
  goto L_11e52b48;
L_11e52b2e:;
  /* 11e52b2e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e52b31 push eax */
  push32((uint32_t)(EAX));
  /* 11e52b32 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e52b35 push ecx */
  push32((uint32_t)(ECX));
  /* 11e52b36 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e52b39 push edx */
  push32((uint32_t)(EDX));
  /* 11e52b3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e52b3d push eax */
  push32((uint32_t)(EAX));
  /* 11e52b3e call dword ptr [0x11e79318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e79318))), 0x11e52b44u);
  /* 11e52b44 jmp 0x11e52b48 */
  goto L_11e52b48;
L_11e52b46:;
  /* 11e52b46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e52b48:;
  /* 11e52b48 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 11e52b4b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e52b4e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11e52b55 pop edi */
  EDI = (pop32());
  /* 11e52b56 pop esi */
  ESI = (pop32());
  /* 11e52b57 pop ebx */
  EBX = (pop32());
  /* 11e52b58 mov esp, ebp */
  ESP = (EBP);
  /* 11e52b5a pop ebp */
  EBP = (pop32());
  /* 11e52b5b ret  */
  ESPCHK(0x11e529a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b60 @ 0x11e52b60 (727 bytes, 263 insns) */
void f_11e52b60(void) {
  FTRACE(0x11e52b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e52b60 push ebp */
  push32((uint32_t)(EBP));
  /* 11e52b61 mov ebp, esp */
  EBP = (ESP);
  /* 11e52b63 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11e52b65 push 0x11e71fe0 */
  push32((uint32_t)(0x11e71fe0u));
  /* 11e52b6a push 0x11e539b8 */
  push32((uint32_t)(0x11e539b8u));
  /* 11e52b6f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11e52b75 push eax */
  push32((uint32_t)(EAX));
  /* 11e52b76 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11e52b7d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e52b80 push ebx */
  push32((uint32_t)(EBX));
  /* 11e52b81 push esi */
  push32((uint32_t)(ESI));
  /* 11e52b82 push edi */
  push32((uint32_t)(EDI));
  /* 11e52b83 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11e52b86 cmp dword ptr [0x11e76bc4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e76bc4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e52b8d jne 0x11e52be6 */
  if (!C.zf) goto L_11e52be6;
  /* 11e52b8f push 0 */
  push32((uint32_t)(0x0u));
  /* 11e52b91 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e52b93 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e52b95 push 0x11e71fc8 */
  push32((uint32_t)(0x11e71fc8u));
  /* 11e52b9a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11e52b9f push 0 */
  push32((uint32_t)(0x0u));
  /* 11e52ba1 call dword ptr [0x11e79310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e79310))), 0x11e52ba7u);
  /* 11e52ba7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e52ba9 je 0x11e52bb7 */
  if (C.zf) goto L_11e52bb7;
  /* 11e52bab mov dword ptr [0x11e76bc4], 1 */
  w32((uint32_t)(0x11e76bc4), (0x1u));
  /* 11e52bb5 jmp 0x11e52be6 */
  goto L_11e52be6;
L_11e52bb7:;
  /* 11e52bb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e52bb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e52bbb push 1 */
  push32((uint32_t)(0x1u));
  /* 11e52bbd push 0x11e71fc4 */
  push32((uint32_t)(0x11e71fc4u));
  /* 11e52bc2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11e52bc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e52bc9 call dword ptr [0x11e79320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e79320))), 0x11e52bcfu);
  /* 11e52bcf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e52bd1 je 0x11e52bdf */
  if (C.zf) goto L_11e52bdf;
  /* 11e52bd3 mov dword ptr [0x11e76bc4], 2 */
  w32((uint32_t)(0x11e76bc4), (0x2u));
  /* 11e52bdd jmp 0x11e52be6 */
  goto L_11e52be6;
L_11e52bdf:;
  /* 11e52bdf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e52be1 jmp 0x11e52e51 */
  goto L_11e52e51;
L_11e52be6:;
  /* 11e52be6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e52bea jle 0x11e52bff */
  if ((C.zf||C.sf!=C.of)) goto L_11e52bff;
  /* 11e52bec mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e52bef push eax */
  push32((uint32_t)(EAX));
  /* 11e52bf0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e52bf3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e52bf4 call 0x11e52e70 */
  push32(0x11e52bf9u); f_11e52e70();
  /* 11e52bf9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e52bfc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11e52bff:;
  /* 11e52bff cmp dword ptr [0x11e76bc4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11e76bc4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e52c06 jne 0x11e52c2b */
  if (!C.zf) goto L_11e52c2b;
  /* 11e52c08 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e52c0b push edx */
  push32((uint32_t)(EDX));
  /* 11e52c0c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e52c0f push eax */
  push32((uint32_t)(EAX));
  /* 11e52c10 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e52c13 push ecx */
  push32((uint32_t)(ECX));
  /* 11e52c14 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e52c17 push edx */
  push32((uint32_t)(EDX));
  /* 11e52c18 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e52c1b push eax */
  push32((uint32_t)(EAX));
  /* 11e52c1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e52c1f push ecx */
  push32((uint32_t)(ECX));
  /* 11e52c20 call dword ptr [0x11e79320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e79320))), 0x11e52c26u);
  /* 11e52c26 jmp 0x11e52e51 */
  goto L_11e52e51;
L_11e52c2b:;
  /* 11e52c2b cmp dword ptr [0x11e76bc4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e76bc4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e52c32 jne 0x11e52e4f */
  if (!C.zf) goto L_11e52e4f;
  /* 11e52c38 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e52c3c jne 0x11e52c47 */
  if (!C.zf) goto L_11e52c47;
  /* 11e52c3e mov edx, dword ptr [0x11e76bb8] */
  EDX = (r32((uint32_t)(0x11e76bb8)));
  /* 11e52c44 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_11e52c47:;
  /* 11e52c47 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e52c49 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e52c4b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e52c4e push eax */
  push32((uint32_t)(EAX));
  /* 11e52c4f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e52c52 push ecx */
  push32((uint32_t)(ECX));
  /* 11e52c53 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 11e52c56 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e52c58 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e52c5a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11e52c5d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e52c60 push edx */
  push32((uint32_t)(EDX));
  /* 11e52c61 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11e52c64 push eax */
  push32((uint32_t)(EAX));
  /* 11e52c65 call dword ptr [0x11e7932c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e7932c))), 0x11e52c6bu);
  /* 11e52c6b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11e52c6e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e52c72 jne 0x11e52c7b */
  if (!C.zf) goto L_11e52c7b;
  /* 11e52c74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e52c76 jmp 0x11e52e51 */
  goto L_11e52e51;
L_11e52c7b:;
  /* 11e52c7b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e52c82 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e52c85 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11e52c87 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e52c8a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11e52c8c call 0x11e4d910 */
  push32(0x11e52c91u); f_11e4d910();
  /* 11e52c91 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 11e52c94 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11e52c97 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e52c9a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11e52c9d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11e52ca4 jmp 0x11e52cbd */
  goto L_11e52cbd;
  /* 11e52ca6 mov eax, 1 */
  EAX = (0x1u);
  /* 11e52cab ret  */
  ESPCHK(0x11e52b60u, _esp0);
  ESP += 4; return;
  /* 11e52cac mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11e52caf mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11e52cb6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11e52cbd:;
  /* 11e52cbd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e52cc1 jne 0x11e52cca */
  if (!C.zf) goto L_11e52cca;
  /* 11e52cc3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e52cc5 jmp 0x11e52e51 */
  goto L_11e52e51;
L_11e52cca:;
  /* 11e52cca mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e52ccd push edx */
  push32((uint32_t)(EDX));
  /* 11e52cce mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e52cd1 push eax */
  push32((uint32_t)(EAX));
  /* 11e52cd2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e52cd5 push ecx */
  push32((uint32_t)(ECX));
  /* 11e52cd6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e52cd9 push edx */
  push32((uint32_t)(EDX));
  /* 11e52cda push 1 */
  push32((uint32_t)(0x1u));
  /* 11e52cdc mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11e52cdf push eax */
  push32((uint32_t)(EAX));
  /* 11e52ce0 call dword ptr [0x11e7932c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e7932c))), 0x11e52ce6u);
  /* 11e52ce6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e52ce8 jne 0x11e52cf1 */
  if (!C.zf) goto L_11e52cf1;
  /* 11e52cea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e52cec jmp 0x11e52e51 */
  goto L_11e52e51;
L_11e52cf1:;
  /* 11e52cf1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e52cf3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e52cf5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e52cf8 push ecx */
  push32((uint32_t)(ECX));
  /* 11e52cf9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e52cfc push edx */
  push32((uint32_t)(EDX));
  /* 11e52cfd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e52d00 push eax */
  push32((uint32_t)(EAX));
  /* 11e52d01 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e52d04 push ecx */
  push32((uint32_t)(ECX));
  /* 11e52d05 call dword ptr [0x11e79310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e79310))), 0x11e52d0bu);
  /* 11e52d0b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11e52d0e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e52d12 jne 0x11e52d1b */
  if (!C.zf) goto L_11e52d1b;
  /* 11e52d14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e52d16 jmp 0x11e52e51 */
  goto L_11e52e51;
L_11e52d1b:;
  /* 11e52d1b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e52d1e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 11e52d24 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e52d26 je 0x11e52d6b */
  if (C.zf) goto L_11e52d6b;
  /* 11e52d28 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e52d2c je 0x11e52d66 */
  if (C.zf) goto L_11e52d66;
  /* 11e52d2e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e52d31 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e52d34 jle 0x11e52d3d */
  if ((C.zf||C.sf!=C.of)) goto L_11e52d3d;
  /* 11e52d36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e52d38 jmp 0x11e52e51 */
  goto L_11e52e51;
L_11e52d3d:;
  /* 11e52d3d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e52d40 push ecx */
  push32((uint32_t)(ECX));
  /* 11e52d41 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e52d44 push edx */
  push32((uint32_t)(EDX));
  /* 11e52d45 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e52d48 push eax */
  push32((uint32_t)(EAX));
  /* 11e52d49 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e52d4c push ecx */
  push32((uint32_t)(ECX));
  /* 11e52d4d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e52d50 push edx */
  push32((uint32_t)(EDX));
  /* 11e52d51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e52d54 push eax */
  push32((uint32_t)(EAX));
  /* 11e52d55 call dword ptr [0x11e79310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e79310))), 0x11e52d5bu);
  /* 11e52d5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e52d5d jne 0x11e52d66 */
  if (!C.zf) goto L_11e52d66;
  /* 11e52d5f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e52d61 jmp 0x11e52e51 */
  goto L_11e52e51;
L_11e52d66:;
  /* 11e52d66 jmp 0x11e52e4a */
  goto L_11e52e4a;
L_11e52d6b:;
  /* 11e52d6b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e52d6e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11e52d71 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11e52d78 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e52d7b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11e52d7d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e52d80 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11e52d82 call 0x11e4d910 */
  push32(0x11e52d87u); f_11e4d910();
  /* 11e52d87 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 11e52d8a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11e52d8d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11e52d90 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11e52d93 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11e52d9a jmp 0x11e52db3 */
  goto L_11e52db3;
  /* 11e52d9c mov eax, 1 */
  EAX = (0x1u);
  /* 11e52da1 ret  */
  ESPCHK(0x11e52b60u, _esp0);
  ESP += 4; return;
  /* 11e52da2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11e52da5 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11e52dac mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11e52db3:;
  /* 11e52db3 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e52db7 jne 0x11e52dc0 */
  if (!C.zf) goto L_11e52dc0;
  /* 11e52db9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e52dbb jmp 0x11e52e51 */
  goto L_11e52e51;
L_11e52dc0:;
  /* 11e52dc0 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e52dc3 push eax */
  push32((uint32_t)(EAX));
  /* 11e52dc4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e52dc7 push ecx */
  push32((uint32_t)(ECX));
  /* 11e52dc8 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e52dcb push edx */
  push32((uint32_t)(EDX));
  /* 11e52dcc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e52dcf push eax */
  push32((uint32_t)(EAX));
  /* 11e52dd0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e52dd3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e52dd4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e52dd7 push edx */
  push32((uint32_t)(EDX));
  /* 11e52dd8 call dword ptr [0x11e79310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e79310))), 0x11e52ddeu);
  /* 11e52dde test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e52de0 jne 0x11e52de6 */
  if (!C.zf) goto L_11e52de6;
  /* 11e52de2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e52de4 jmp 0x11e52e51 */
  goto L_11e52e51;
L_11e52de6:;
  /* 11e52de6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e52dea jne 0x11e52e1a */
  if (!C.zf) goto L_11e52e1a;
  /* 11e52dec push 0 */
  push32((uint32_t)(0x0u));
  /* 11e52dee push 0 */
  push32((uint32_t)(0x0u));
  /* 11e52df0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e52df2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e52df4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e52df7 push eax */
  push32((uint32_t)(EAX));
  /* 11e52df8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e52dfb push ecx */
  push32((uint32_t)(ECX));
  /* 11e52dfc push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11e52e01 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 11e52e04 push edx */
  push32((uint32_t)(EDX));
  /* 11e52e05 call dword ptr [0x11e7936c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e7936c))), 0x11e52e0bu);
  /* 11e52e0b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11e52e0e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e52e12 jne 0x11e52e18 */
  if (!C.zf) goto L_11e52e18;
  /* 11e52e14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e52e16 jmp 0x11e52e51 */
  goto L_11e52e51;
L_11e52e18:;
  /* 11e52e18 jmp 0x11e52e4a */
  goto L_11e52e4a;
L_11e52e1a:;
  /* 11e52e1a push 0 */
  push32((uint32_t)(0x0u));
  /* 11e52e1c push 0 */
  push32((uint32_t)(0x0u));
  /* 11e52e1e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e52e21 push eax */
  push32((uint32_t)(EAX));
  /* 11e52e22 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e52e25 push ecx */
  push32((uint32_t)(ECX));
  /* 11e52e26 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e52e29 push edx */
  push32((uint32_t)(EDX));
  /* 11e52e2a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e52e2d push eax */
  push32((uint32_t)(EAX));
  /* 11e52e2e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11e52e33 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11e52e36 push ecx */
  push32((uint32_t)(ECX));
  /* 11e52e37 call dword ptr [0x11e7936c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e7936c))), 0x11e52e3du);
  /* 11e52e3d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11e52e40 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e52e44 jne 0x11e52e4a */
  if (!C.zf) goto L_11e52e4a;
  /* 11e52e46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e52e48 jmp 0x11e52e51 */
  goto L_11e52e51;
L_11e52e4a:;
  /* 11e52e4a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e52e4d jmp 0x11e52e51 */
  goto L_11e52e51;
L_11e52e4f:;
  /* 11e52e4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e52e51:;
  /* 11e52e51 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 11e52e54 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e52e57 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11e52e5e pop edi */
  EDI = (pop32());
  /* 11e52e5f pop esi */
  ESI = (pop32());
  /* 11e52e60 pop ebx */
  EBX = (pop32());
  /* 11e52e61 mov esp, ebp */
  ESP = (EBP);
  /* 11e52e63 pop ebp */
  EBP = (pop32());
  /* 11e52e64 ret  */
  ESPCHK(0x11e52b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10012e70 @ 0x11e52e70 (80 bytes, 32 insns) */
void f_11e52e70(void) {
  FTRACE(0x11e52e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e52e70 push ebp */
  push32((uint32_t)(EBP));
  /* 11e52e71 mov ebp, esp */
  EBP = (ESP);
  /* 11e52e73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e52e76 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e52e79 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e52e7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e52e7f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11e52e82:;
  /* 11e52e82 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e52e85 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e52e88 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e52e8b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e52e8e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e52e90 je 0x11e52ea7 */
  if (C.zf) goto L_11e52ea7;
  /* 11e52e92 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e52e95 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11e52e98 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e52e9a je 0x11e52ea7 */
  if (C.zf) goto L_11e52ea7;
  /* 11e52e9c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e52e9f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e52ea2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e52ea5 jmp 0x11e52e82 */
  goto L_11e52e82;
L_11e52ea7:;
  /* 11e52ea7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e52eaa movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11e52ead test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e52eaf jne 0x11e52eb9 */
  if (!C.zf) goto L_11e52eb9;
  /* 11e52eb1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e52eb4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e52eb7 jmp 0x11e52ebc */
  goto L_11e52ebc;
L_11e52eb9:;
  /* 11e52eb9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11e52ebc:;
  /* 11e52ebc mov esp, ebp */
  ESP = (EBP);
  /* 11e52ebe pop ebp */
  EBP = (pop32());
  /* 11e52ebf ret  */
  ESPCHK(0x11e52e70u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x11e52ec0 (52 bytes, 19 insns) */
void f_11e52ec0(void) {
  FTRACE(0x11e52ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e52ec0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11e52ec4 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11e52ec8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e52eca mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11e52ece jne 0x11e52ed9 */
  if (!C.zf) goto L_11e52ed9;
  /* 11e52ed0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11e52ed4 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11e52ed6 ret 0x10 */
  ESPCHK(0x11e52ec0u, _esp0);
  ESP += 20; return;
L_11e52ed9:;
  /* 11e52ed9 push ebx */
  push32((uint32_t)(EBX));
  /* 11e52eda mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11e52edc mov ebx, eax */
  EBX = (EAX);
  /* 11e52ede mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11e52ee2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11e52ee6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e52ee8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11e52eec mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11e52eee add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e52ef0 pop ebx */
  EBX = (pop32());
  /* 11e52ef1 ret 0x10 */
  ESPCHK(0x11e52ec0u, _esp0);
  ESP += 20; return;
}

/* __mbsnbicoll @ 0x11e52f00 (79 bytes, 32 insns) */
void f_11e52f00(void) {
  FTRACE(0x11e52f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e52f00 push ebp */
  push32((uint32_t)(EBP));
  /* 11e52f01 mov ebp, esp */
  EBP = (ESP);
  /* 11e52f03 push ecx */
  push32((uint32_t)(ECX));
  /* 11e52f04 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e52f08 jne 0x11e52f0e */
  if (!C.zf) goto L_11e52f0e;
  /* 11e52f0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e52f0c jmp 0x11e52f4b */
  goto L_11e52f4b;
L_11e52f0e:;
  /* 11e52f0e mov eax, dword ptr [0x11e77fc4] */
  EAX = (r32((uint32_t)(0x11e77fc4)));
  /* 11e52f13 push eax */
  push32((uint32_t)(EAX));
  /* 11e52f14 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e52f17 push ecx */
  push32((uint32_t)(ECX));
  /* 11e52f18 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e52f1b push edx */
  push32((uint32_t)(EDX));
  /* 11e52f1c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e52f1f push eax */
  push32((uint32_t)(EAX));
  /* 11e52f20 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e52f23 push ecx */
  push32((uint32_t)(ECX));
  /* 11e52f24 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e52f26 mov edx, dword ptr [0x11e78264] */
  EDX = (r32((uint32_t)(0x11e78264)));
  /* 11e52f2c push edx */
  push32((uint32_t)(EDX));
  /* 11e52f2d call 0x11e53a90 */
  push32(0x11e52f32u); f_11e53a90();
  /* 11e52f32 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e52f35 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e52f38 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e52f3c jne 0x11e52f45 */
  if (!C.zf) goto L_11e52f45;
  /* 11e52f3e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 11e52f43 jmp 0x11e52f4b */
  goto L_11e52f4b;
L_11e52f45:;
  /* 11e52f45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e52f48 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11e52f4b:;
  /* 11e52f4b mov esp, ebp */
  ESP = (EBP);
  /* 11e52f4d pop ebp */
  EBP = (pop32());
  /* 11e52f4e ret  */
  ESPCHK(0x11e52f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f50 @ 0x11e52f50 (174 bytes, 66 insns) */
void f_11e52f50(void) {
  FTRACE(0x11e52f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e52f50 push ebp */
  push32((uint32_t)(EBP));
  /* 11e52f51 mov ebp, esp */
  EBP = (ESP);
  /* 11e52f53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e52f56 mov eax, dword ptr [0x11e76918] */
  EAX = (r32((uint32_t)(0x11e76918)));
  /* 11e52f5b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11e52f5e:;
  /* 11e52f5e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e52f61 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e52f64 je 0x11e52ff8 */
  if (C.zf) goto L_11e52ff8;
  /* 11e52f6a push 0 */
  push32((uint32_t)(0x0u));
  /* 11e52f6c push 0 */
  push32((uint32_t)(0x0u));
  /* 11e52f6e push 0 */
  push32((uint32_t)(0x0u));
  /* 11e52f70 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e52f72 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11e52f74 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e52f77 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e52f79 push eax */
  push32((uint32_t)(EAX));
  /* 11e52f7a push 0 */
  push32((uint32_t)(0x0u));
  /* 11e52f7c push 1 */
  push32((uint32_t)(0x1u));
  /* 11e52f7e call dword ptr [0x11e7936c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e7936c))), 0x11e52f84u);
  /* 11e52f84 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e52f87 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e52f8b jne 0x11e52f92 */
  if (!C.zf) goto L_11e52f92;
  /* 11e52f8d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e52f90 jmp 0x11e52ffa */
  goto L_11e52ffa;
L_11e52f92:;
  /* 11e52f92 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11e52f94 push 0x11e71ff8 */
  push32((uint32_t)(0x11e71ff8u));
  /* 11e52f99 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e52f9b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e52f9e push ecx */
  push32((uint32_t)(ECX));
  /* 11e52f9f call 0x11e49a50 */
  push32(0x11e52fa4u); f_11e49a50();
  /* 11e52fa4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e52fa7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e52faa cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e52fae jne 0x11e52fb5 */
  if (!C.zf) goto L_11e52fb5;
  /* 11e52fb0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e52fb3 jmp 0x11e52ffa */
  goto L_11e52ffa;
L_11e52fb5:;
  /* 11e52fb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e52fb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e52fb9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e52fbc push edx */
  push32((uint32_t)(EDX));
  /* 11e52fbd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e52fc0 push eax */
  push32((uint32_t)(EAX));
  /* 11e52fc1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11e52fc3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e52fc6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e52fc8 push edx */
  push32((uint32_t)(EDX));
  /* 11e52fc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e52fcb push 1 */
  push32((uint32_t)(0x1u));
  /* 11e52fcd call dword ptr [0x11e7936c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e7936c))), 0x11e52fd3u);
  /* 11e52fd3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e52fd5 jne 0x11e52fdc */
  if (!C.zf) goto L_11e52fdc;
  /* 11e52fd7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e52fda jmp 0x11e52ffa */
  goto L_11e52ffa;
L_11e52fdc:;
  /* 11e52fdc push 0 */
  push32((uint32_t)(0x0u));
  /* 11e52fde mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e52fe1 push eax */
  push32((uint32_t)(EAX));
  /* 11e52fe2 call 0x11e53ee0 */
  push32(0x11e52fe7u); f_11e53ee0();
  /* 11e52fe7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e52fea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e52fed add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e52ff0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e52ff3 jmp 0x11e52f5e */
  goto L_11e52f5e;
L_11e52ff8:;
  /* 11e52ff8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e52ffa:;
  /* 11e52ffa mov esp, ebp */
  ESP = (EBP);
  /* 11e52ffc pop ebp */
  EBP = (pop32());
  /* 11e52ffd ret  */
  ESPCHK(0x11e52f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10013000 @ 0x11e53000 (130 bytes, 43 insns) */
void f_11e53000(void) {
  FTRACE(0x11e53000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e53000 push ebp */
  push32((uint32_t)(EBP));
  /* 11e53001 mov ebp, esp */
  EBP = (ESP);
  /* 11e53003 push ecx */
  push32((uint32_t)(ECX));
  /* 11e53004 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e53007 cmp eax, dword ptr [0x11e783fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11e783fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5300d jae 0x11e53031 */
  if (!C.cf) goto L_11e53031;
  /* 11e5300f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e53012 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11e53015 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e53018 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11e5301b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e5301e mov eax, dword ptr [ecx*4 + 0x11e782c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11e782c0)));
  /* 11e53025 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11e5302a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11e5302d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e5302f jne 0x11e5304c */
  if (!C.zf) goto L_11e5304c;
L_11e53031:;
  /* 11e53031 call 0x11e52640 */
  push32(0x11e53036u); f_11e52640();
  /* 11e53036 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11e5303c call 0x11e52650 */
  push32(0x11e53041u); f_11e52650();
  /* 11e53041 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11e53047 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e5304a jmp 0x11e5307e */
  goto L_11e5307e;
L_11e5304c:;
  /* 11e5304c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5304f push edx */
  push32((uint32_t)(EDX));
  /* 11e53050 call 0x11e54840 */
  push32(0x11e53055u); f_11e54840();
  /* 11e53055 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e53058 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e5305b push eax */
  push32((uint32_t)(EAX));
  /* 11e5305c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e5305f push ecx */
  push32((uint32_t)(ECX));
  /* 11e53060 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e53063 push edx */
  push32((uint32_t)(EDX));
  /* 11e53064 call 0x11e53090 */
  push32(0x11e53069u); f_11e53090();
  /* 11e53069 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5306c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e5306f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e53072 push eax */
  push32((uint32_t)(EAX));
  /* 11e53073 call 0x11e548d0 */
  push32(0x11e53078u); f_11e548d0();
  /* 11e53078 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5307b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11e5307e:;
  /* 11e5307e mov esp, ebp */
  ESP = (EBP);
  /* 11e53080 pop ebp */
  EBP = (pop32());
  /* 11e53081 ret  */
  ESPCHK(0x11e53000u, _esp0);
  ESP += 4; return;
}

/* FUN_10013090 @ 0x11e53090 (178 bytes, 56 insns) */
void f_11e53090(void) {
  FTRACE(0x11e53090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e53090 push ebp */
  push32((uint32_t)(EBP));
  /* 11e53091 mov ebp, esp */
  EBP = (ESP);
  /* 11e53093 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e53096 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e53099 push eax */
  push32((uint32_t)(EAX));
  /* 11e5309a call 0x11e546c0 */
  push32(0x11e5309fu); f_11e546c0();
  /* 11e5309f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e530a2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e530a5 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e530a9 jne 0x11e530be */
  if (!C.zf) goto L_11e530be;
  /* 11e530ab call 0x11e52640 */
  push32(0x11e530b0u); f_11e52640();
  /* 11e530b0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11e530b6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e530b9 jmp 0x11e5313e */
  goto L_11e5313e;
L_11e530be:;
  /* 11e530be mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e530c1 push ecx */
  push32((uint32_t)(ECX));
  /* 11e530c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e530c4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e530c7 push edx */
  push32((uint32_t)(EDX));
  /* 11e530c8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e530cb push eax */
  push32((uint32_t)(EAX));
  /* 11e530cc call dword ptr [0x11e7930c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e7930c))), 0x11e530d2u);
  /* 11e530d2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e530d5 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e530d9 jne 0x11e530e6 */
  if (!C.zf) goto L_11e530e6;
  /* 11e530db call dword ptr [0x11e793ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e793ac))), 0x11e530e1u);
  /* 11e530e1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e530e4 jmp 0x11e530ed */
  goto L_11e530ed;
L_11e530e6:;
  /* 11e530e6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11e530ed:;
  /* 11e530ed cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e530f1 je 0x11e53104 */
  if (C.zf) goto L_11e53104;
  /* 11e530f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e530f6 push ecx */
  push32((uint32_t)(ECX));
  /* 11e530f7 call 0x11e525a0 */
  push32(0x11e530fcu); f_11e525a0();
  /* 11e530fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e530ff or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e53102 jmp 0x11e5313e */
  goto L_11e5313e;
L_11e53104:;
  /* 11e53104 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e53107 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11e5310a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5310d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11e53110 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e53113 mov ecx, dword ptr [edx*4 + 0x11e782c0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11e782c0)));
  /* 11e5311a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 11e5311e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 11e53121 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e53124 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11e53127 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5312a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11e5312d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e53130 mov eax, dword ptr [eax*4 + 0x11e782c0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11e782c0)));
  /* 11e53137 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 11e5313b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11e5313e:;
  /* 11e5313e mov esp, ebp */
  ESP = (EBP);
  /* 11e53140 pop ebp */
  EBP = (pop32());
  /* 11e53141 ret  */
  ESPCHK(0x11e53090u, _esp0);
  ESP += 4; return;
}

/* FUN_10013150 @ 0x11e53150 (130 bytes, 43 insns) */
void f_11e53150(void) {
  FTRACE(0x11e53150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e53150 push ebp */
  push32((uint32_t)(EBP));
  /* 11e53151 mov ebp, esp */
  EBP = (ESP);
  /* 11e53153 push ecx */
  push32((uint32_t)(ECX));
  /* 11e53154 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e53157 cmp eax, dword ptr [0x11e783fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11e783fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5315d jae 0x11e53181 */
  if (!C.cf) goto L_11e53181;
  /* 11e5315f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e53162 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11e53165 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e53168 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11e5316b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e5316e mov eax, dword ptr [ecx*4 + 0x11e782c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11e782c0)));
  /* 11e53175 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11e5317a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11e5317d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e5317f jne 0x11e5319c */
  if (!C.zf) goto L_11e5319c;
L_11e53181:;
  /* 11e53181 call 0x11e52640 */
  push32(0x11e53186u); f_11e52640();
  /* 11e53186 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11e5318c call 0x11e52650 */
  push32(0x11e53191u); f_11e52650();
  /* 11e53191 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11e53197 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e5319a jmp 0x11e531ce */
  goto L_11e531ce;
L_11e5319c:;
  /* 11e5319c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5319f push edx */
  push32((uint32_t)(EDX));
  /* 11e531a0 call 0x11e54840 */
  push32(0x11e531a5u); f_11e54840();
  /* 11e531a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e531a8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e531ab push eax */
  push32((uint32_t)(EAX));
  /* 11e531ac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e531af push ecx */
  push32((uint32_t)(ECX));
  /* 11e531b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e531b3 push edx */
  push32((uint32_t)(EDX));
  /* 11e531b4 call 0x11e531e0 */
  push32(0x11e531b9u); f_11e531e0();
  /* 11e531b9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e531bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e531bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e531c2 push eax */
  push32((uint32_t)(EAX));
  /* 11e531c3 call 0x11e548d0 */
  push32(0x11e531c8u); f_11e548d0();
  /* 11e531c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e531cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11e531ce:;
  /* 11e531ce mov esp, ebp */
  ESP = (EBP);
  /* 11e531d0 pop ebp */
  EBP = (pop32());
  /* 11e531d1 ret  */
  ESPCHK(0x11e53150u, _esp0);
  ESP += 4; return;
}

/* FUN_100131e0 @ 0x11e531e0 (627 bytes, 182 insns) */
void f_11e531e0(void) {
  FTRACE(0x11e531e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e531e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e531e1 mov ebp, esp */
  EBP = (ESP);
  /* 11e531e3 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e531e9 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11e531f0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e531f3 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 11e531f9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e531fd jne 0x11e53206 */
  if (!C.zf) goto L_11e53206;
  /* 11e531ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e53201 jmp 0x11e5344f */
  goto L_11e5344f;
L_11e53206:;
  /* 11e53206 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e53209 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11e5320c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5320f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11e53212 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e53215 mov eax, dword ptr [ecx*4 + 0x11e782c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11e782c0)));
  /* 11e5321c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11e53221 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11e53224 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e53226 je 0x11e53238 */
  if (C.zf) goto L_11e53238;
  /* 11e53228 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e5322a push 0 */
  push32((uint32_t)(0x0u));
  /* 11e5322c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5322f push edx */
  push32((uint32_t)(EDX));
  /* 11e53230 call 0x11e53090 */
  push32(0x11e53235u); f_11e53090();
  /* 11e53235 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e53238:;
  /* 11e53238 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5323b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11e5323e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e53241 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11e53244 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e53247 mov edx, dword ptr [eax*4 + 0x11e782c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11e782c0)));
  /* 11e5324e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11e53253 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 11e53258 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e5325a je 0x11e5336c */
  if (C.zf) goto L_11e5336c;
  /* 11e53260 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e53263 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e53266 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11e5326d:;
  /* 11e5326d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e53270 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e53273 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e53276 jae 0x11e5336a */
  if (!C.cf) goto L_11e5336a;
  /* 11e5327c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 11e53282 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11e53285:;
  /* 11e53285 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e53288 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 11e5328e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e53290 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e53296 jge 0x11e532f7 */
  if ((C.sf==C.of)) goto L_11e532f7;
  /* 11e53298 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e5329b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e5329e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e532a1 jae 0x11e532f7 */
  if (!C.cf) goto L_11e532f7;
  /* 11e532a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e532a6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11e532a8 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 11e532ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e532b1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e532b4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e532b7 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 11e532be cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e532c1 jne 0x11e532e1 */
  if (!C.zf) goto L_11e532e1;
  /* 11e532c3 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 11e532c9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e532cc mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 11e532d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e532d5 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 11e532d8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e532db add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e532de mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11e532e1:;
  /* 11e532e1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e532e4 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 11e532ea mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11e532ec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e532ef add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e532f2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e532f5 jmp 0x11e53285 */
  goto L_11e53285;
L_11e532f7:;
  /* 11e532f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e532f9 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 11e532ff push edx */
  push32((uint32_t)(EDX));
  /* 11e53300 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e53303 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 11e53309 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e5330b push eax */
  push32((uint32_t)(EAX));
  /* 11e5330c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 11e53312 push edx */
  push32((uint32_t)(EDX));
  /* 11e53313 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e53316 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11e53319 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5331c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11e5331f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e53322 mov edx, dword ptr [eax*4 + 0x11e782c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11e782c0)));
  /* 11e53329 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 11e5332c push eax */
  push32((uint32_t)(EAX));
  /* 11e5332d call dword ptr [0x11e792d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e792d0))), 0x11e53333u);
  /* 11e53333 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e53335 je 0x11e5335a */
  if (C.zf) goto L_11e5335a;
  /* 11e53337 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e5333a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e53340 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11e53343 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e53346 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 11e5334c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e5334e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e53354 jge 0x11e53358 */
  if ((C.sf==C.of)) goto L_11e53358;
  /* 11e53356 jmp 0x11e5336a */
  goto L_11e5336a;
L_11e53358:;
  /* 11e53358 jmp 0x11e53365 */
  goto L_11e53365;
L_11e5335a:;
  /* 11e5335a call dword ptr [0x11e793ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e793ac))), 0x11e53360u);
  /* 11e53360 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e53363 jmp 0x11e5336a */
  goto L_11e5336a;
L_11e53365:;
  /* 11e53365 jmp 0x11e5326d */
  goto L_11e5326d;
L_11e5336a:;
  /* 11e5336a jmp 0x11e533bc */
  goto L_11e533bc;
L_11e5336c:;
  /* 11e5336c push 0 */
  push32((uint32_t)(0x0u));
  /* 11e5336e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 11e53374 push ecx */
  push32((uint32_t)(ECX));
  /* 11e53375 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e53378 push edx */
  push32((uint32_t)(EDX));
  /* 11e53379 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e5337c push eax */
  push32((uint32_t)(EAX));
  /* 11e5337d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e53380 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11e53383 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e53386 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11e53389 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e5338c mov eax, dword ptr [ecx*4 + 0x11e782c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11e782c0)));
  /* 11e53393 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 11e53396 push ecx */
  push32((uint32_t)(ECX));
  /* 11e53397 call dword ptr [0x11e792d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e792d0))), 0x11e5339du);
  /* 11e5339d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e5339f je 0x11e533b3 */
  if (C.zf) goto L_11e533b3;
  /* 11e533a1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11e533a8 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 11e533ae mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11e533b1 jmp 0x11e533bc */
  goto L_11e533bc;
L_11e533b3:;
  /* 11e533b3 call dword ptr [0x11e793ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e793ac))), 0x11e533b9u);
  /* 11e533b9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11e533bc:;
  /* 11e533bc cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e533c0 jne 0x11e53446 */
  if (!C.zf) goto L_11e53446;
  /* 11e533c6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e533ca je 0x11e533fa */
  if (C.zf) goto L_11e533fa;
  /* 11e533cc cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e533d0 jne 0x11e533e9 */
  if (!C.zf) goto L_11e533e9;
  /* 11e533d2 call 0x11e52640 */
  push32(0x11e533d7u); f_11e52640();
  /* 11e533d7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11e533dd call 0x11e52650 */
  push32(0x11e533e2u); f_11e52650();
  /* 11e533e2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e533e5 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11e533e7 jmp 0x11e533f5 */
  goto L_11e533f5;
L_11e533e9:;
  /* 11e533e9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e533ec push edx */
  push32((uint32_t)(EDX));
  /* 11e533ed call 0x11e525a0 */
  push32(0x11e533f2u); f_11e525a0();
  /* 11e533f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e533f5:;
  /* 11e533f5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e533f8 jmp 0x11e5344f */
  goto L_11e5344f;
L_11e533fa:;
  /* 11e533fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e533fd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11e53400 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e53403 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11e53406 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e53409 mov edx, dword ptr [eax*4 + 0x11e782c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11e782c0)));
  /* 11e53410 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11e53415 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11e53418 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e5341a je 0x11e5342b */
  if (C.zf) goto L_11e5342b;
  /* 11e5341c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e5341f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11e53422 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e53425 jne 0x11e5342b */
  if (!C.zf) goto L_11e5342b;
  /* 11e53427 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e53429 jmp 0x11e5344f */
  goto L_11e5344f;
L_11e5342b:;
  /* 11e5342b call 0x11e52640 */
  push32(0x11e53430u); f_11e52640();
  /* 11e53430 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 11e53436 call 0x11e52650 */
  push32(0x11e5343bu); f_11e52650();
  /* 11e5343b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11e53441 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e53444 jmp 0x11e5344f */
  goto L_11e5344f;
L_11e53446:;
  /* 11e53446 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e53449 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11e5344f:;
  /* 11e5344f mov esp, ebp */
  ESP = (EBP);
  /* 11e53451 pop ebp */
  EBP = (pop32());
  /* 11e53452 ret  */
  ESPCHK(0x11e531e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013460 @ 0x11e53460 (199 bytes, 68 insns) */
void f_11e53460(void) {
  FTRACE(0x11e53460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e53460 push ebp */
  push32((uint32_t)(EBP));
  /* 11e53461 mov ebp, esp */
  EBP = (ESP);
  /* 11e53463 push ecx */
  push32((uint32_t)(ECX));
  /* 11e53464 push ebx */
  push32((uint32_t)(EBX));
  /* 11e53465 push esi */
  push32((uint32_t)(ESI));
  /* 11e53466 push edi */
  push32((uint32_t)(EDI));
L_11e53467:;
  /* 11e53467 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5346b jne 0x11e5348b */
  if (!C.zf) goto L_11e5348b;
  /* 11e5346d push 0x11e71f28 */
  push32((uint32_t)(0x11e71f28u));
  /* 11e53472 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e53474 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 11e53476 push 0x11e72004 */
  push32((uint32_t)(0x11e72004u));
  /* 11e5347b push 2 */
  push32((uint32_t)(0x2u));
  /* 11e5347d call 0x11e48dc0 */
  push32(0x11e53482u); f_11e48dc0();
  /* 11e53482 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e53485 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e53488 jne 0x11e5348b */
  if (!C.zf) goto L_11e5348b;
  /* 11e5348a int3  */
  x86_unimpl("int3 @ 0x11e5348a");
L_11e5348b:;
  /* 11e5348b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e5348d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e5348f jne 0x11e53467 */
  if (!C.zf) goto L_11e53467;
  /* 11e53491 mov ecx, dword ptr [0x11e76bc8] */
  ECX = (r32((uint32_t)(0x11e76bc8)));
  /* 11e53497 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5349a mov dword ptr [0x11e76bc8], ecx */
  w32((uint32_t)(0x11e76bc8), (ECX));
  /* 11e534a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e534a3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e534a6 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 11e534a8 push 0x11e72004 */
  push32((uint32_t)(0x11e72004u));
  /* 11e534ad push 2 */
  push32((uint32_t)(0x2u));
  /* 11e534af push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11e534b4 call 0x11e49a50 */
  push32(0x11e534b9u); f_11e49a50();
  /* 11e534b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e534bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e534bf mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11e534c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e534c5 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e534c9 je 0x11e534e6 */
  if (C.zf) goto L_11e534e6;
  /* 11e534cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e534ce mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11e534d1 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11e534d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e534d7 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 11e534da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e534dd mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 11e534e4 jmp 0x11e5350b */
  goto L_11e5350b;
L_11e534e6:;
  /* 11e534e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e534e9 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11e534ec or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11e534ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e534f2 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11e534f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e534f8 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e534fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e534fe mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11e53501 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e53504 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_11e5350b:;
  /* 11e5350b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e5350e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e53511 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11e53514 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11e53516 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e53519 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11e53520 pop edi */
  EDI = (pop32());
  /* 11e53521 pop esi */
  ESI = (pop32());
  /* 11e53522 pop ebx */
  EBX = (pop32());
  /* 11e53523 mov esp, ebp */
  ESP = (EBP);
  /* 11e53525 pop ebp */
  EBP = (pop32());
  /* 11e53526 ret  */
  ESPCHK(0x11e53460u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x11e53530 (50 bytes, 17 insns) */
void f_11e53530(void) {
  FTRACE(0x11e53530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e53530 push ebp */
  push32((uint32_t)(EBP));
  /* 11e53531 mov ebp, esp */
  EBP = (ESP);
  /* 11e53533 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e53536 cmp eax, dword ptr [0x11e783fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11e783fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5353c jb 0x11e53542 */
  if (C.cf) goto L_11e53542;
  /* 11e5353e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e53540 jmp 0x11e53560 */
  goto L_11e53560;
L_11e53542:;
  /* 11e53542 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e53545 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11e53548 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5354b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11e5354e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e53551 mov eax, dword ptr [ecx*4 + 0x11e782c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11e782c0)));
  /* 11e53558 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11e5355d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_11e53560:;
  /* 11e53560 pop ebp */
  EBP = (pop32());
  /* 11e53561 ret  */
  ESPCHK(0x11e53530u, _esp0);
  ESP += 4; return;
}

/* FUN_10013570 @ 0x11e53570 (300 bytes, 80 insns) */
void f_11e53570(void) {
  FTRACE(0x11e53570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e53570 push ebp */
  push32((uint32_t)(EBP));
  /* 11e53571 mov ebp, esp */
  EBP = (ESP);
  /* 11e53573 push ecx */
  push32((uint32_t)(ECX));
  /* 11e53574 cmp dword ptr [0x11e77fc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e77fc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5357b jne 0x11e53589 */
  if (!C.zf) goto L_11e53589;
  /* 11e5357d mov dword ptr [0x11e77fc0], 0x200 */
  w32((uint32_t)(0x11e77fc0), (0x200u));
  /* 11e53587 jmp 0x11e5359c */
  goto L_11e5359c;
L_11e53589:;
  /* 11e53589 cmp dword ptr [0x11e77fc0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x11e77fc0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e53590 jge 0x11e5359c */
  if ((C.sf==C.of)) goto L_11e5359c;
  /* 11e53592 mov dword ptr [0x11e77fc0], 0x14 */
  w32((uint32_t)(0x11e77fc0), (0x14u));
L_11e5359c:;
  /* 11e5359c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 11e535a1 push 0x11e72010 */
  push32((uint32_t)(0x11e72010u));
  /* 11e535a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e535a8 push 4 */
  push32((uint32_t)(0x4u));
  /* 11e535aa mov eax, dword ptr [0x11e77fc0] */
  EAX = (r32((uint32_t)(0x11e77fc0)));
  /* 11e535af push eax */
  push32((uint32_t)(EAX));
  /* 11e535b0 call 0x11e49e60 */
  push32(0x11e535b5u); f_11e49e60();
  /* 11e535b5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e535b8 mov dword ptr [0x11e76c80], eax */
  w32((uint32_t)(0x11e76c80), (EAX));
  /* 11e535bd cmp dword ptr [0x11e76c80], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e76c80))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e535c4 jne 0x11e53605 */
  if (!C.zf) goto L_11e53605;
  /* 11e535c6 mov dword ptr [0x11e77fc0], 0x14 */
  w32((uint32_t)(0x11e77fc0), (0x14u));
  /* 11e535d0 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 11e535d5 push 0x11e72010 */
  push32((uint32_t)(0x11e72010u));
  /* 11e535da push 2 */
  push32((uint32_t)(0x2u));
  /* 11e535dc push 4 */
  push32((uint32_t)(0x4u));
  /* 11e535de mov ecx, dword ptr [0x11e77fc0] */
  ECX = (r32((uint32_t)(0x11e77fc0)));
  /* 11e535e4 push ecx */
  push32((uint32_t)(ECX));
  /* 11e535e5 call 0x11e49e60 */
  push32(0x11e535eau); f_11e49e60();
  /* 11e535ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e535ed mov dword ptr [0x11e76c80], eax */
  w32((uint32_t)(0x11e76c80), (EAX));
  /* 11e535f2 cmp dword ptr [0x11e76c80], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e76c80))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e535f9 jne 0x11e53605 */
  if (!C.zf) goto L_11e53605;
  /* 11e535fb push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11e535fd call 0x11e488d0 */
  push32(0x11e53602u); f_11e488d0();
  /* 11e53602 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e53605:;
  /* 11e53605 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e5360c jmp 0x11e53617 */
  goto L_11e53617;
L_11e5360e:;
  /* 11e5360e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e53611 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e53614 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11e53617:;
  /* 11e53617 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5361b jge 0x11e53636 */
  if ((C.sf==C.of)) goto L_11e53636;
  /* 11e5361d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e53620 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11e53623 add eax, 0x11e75240 */
  { uint32_t _a=(EAX),_b=(0x11e75240u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e53628 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e5362b mov edx, dword ptr [0x11e76c80] */
  EDX = (r32((uint32_t)(0x11e76c80)));
  /* 11e53631 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11e53634 jmp 0x11e5360e */
  goto L_11e5360e;
L_11e53636:;
  /* 11e53636 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e5363d jmp 0x11e53648 */
  goto L_11e53648;
L_11e5363f:;
  /* 11e5363f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e53642 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e53645 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11e53648:;
  /* 11e53648 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5364c jge 0x11e53698 */
  if ((C.sf==C.of)) goto L_11e53698;
  /* 11e5364e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e53651 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11e53654 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e53657 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11e5365a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e5365d mov eax, dword ptr [ecx*4 + 0x11e782c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11e782c0)));
  /* 11e53664 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e53668 je 0x11e53686 */
  if (C.zf) goto L_11e53686;
  /* 11e5366a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e5366d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11e53670 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e53673 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11e53676 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e53679 mov eax, dword ptr [ecx*4 + 0x11e782c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11e782c0)));
  /* 11e53680 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e53684 jne 0x11e53696 */
  if (!C.zf) goto L_11e53696;
L_11e53686:;
  /* 11e53686 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e53689 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11e5368c mov dword ptr [ecx + 0x11e75250], 0xffffffff */
  w32((uint32_t)(ECX + 0x11e75250), (0xffffffffu));
L_11e53696:;
  /* 11e53696 jmp 0x11e5363f */
  goto L_11e5363f;
L_11e53698:;
  /* 11e53698 mov esp, ebp */
  ESP = (EBP);
  /* 11e5369a pop ebp */
  EBP = (pop32());
  /* 11e5369b ret  */
  ESPCHK(0x11e53570u, _esp0);
  ESP += 4; return;
}

/* FUN_100136a0 @ 0x11e536a0 (26 bytes, 9 insns) */
void f_11e536a0(void) {
  FTRACE(0x11e536a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e536a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e536a1 mov ebp, esp */
  EBP = (ESP);
  /* 11e536a3 call 0x11e54b40 */
  push32(0x11e536a8u); f_11e54b40();
  /* 11e536a8 movsx eax, byte ptr [0x11e76928] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11e76928))));
  /* 11e536af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e536b1 je 0x11e536b8 */
  if (C.zf) goto L_11e536b8;
  /* 11e536b3 call 0x11e54900 */
  push32(0x11e536b8u); f_11e54900();
L_11e536b8:;
  /* 11e536b8 pop ebp */
  EBP = (pop32());
  /* 11e536b9 ret  */
  ESPCHK(0x11e536a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100136c0 @ 0x11e536c0 (61 bytes, 20 insns) */
void f_11e536c0(void) {
  FTRACE(0x11e536c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e536c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e536c1 mov ebp, esp */
  EBP = (ESP);
  /* 11e536c3 cmp dword ptr [ebp + 8], 0x11e75240 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11e75240u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e536ca jb 0x11e536ee */
  if (C.cf) goto L_11e536ee;
  /* 11e536cc cmp dword ptr [ebp + 8], 0x11e754a0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11e754a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e536d3 ja 0x11e536ee */
  if ((!C.cf&&!C.zf)) goto L_11e536ee;
  /* 11e536d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e536d8 sub eax, 0x11e75240 */
  { uint32_t _a=(EAX),_b=(0x11e75240u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e536dd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11e536e0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e536e3 push eax */
  push32((uint32_t)(EAX));
  /* 11e536e4 call 0x11e4c670 */
  push32(0x11e536e9u); f_11e4c670();
  /* 11e536e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e536ec jmp 0x11e536fb */
  goto L_11e536fb;
L_11e536ee:;
  /* 11e536ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e536f1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e536f4 push ecx */
  push32((uint32_t)(ECX));
  /* 11e536f5 call dword ptr [0x11e7934c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e7934c))), 0x11e536fbu);
L_11e536fb:;
  /* 11e536fb pop ebp */
  EBP = (pop32());
  /* 11e536fc ret  */
  ESPCHK(0x11e536c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013700 @ 0x11e53700 (41 bytes, 16 insns) */
void f_11e53700(void) {
  FTRACE(0x11e53700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e53700 push ebp */
  push32((uint32_t)(EBP));
  /* 11e53701 mov ebp, esp */
  EBP = (ESP);
  /* 11e53703 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e53707 jge 0x11e5371a */
  if ((C.sf==C.of)) goto L_11e5371a;
  /* 11e53709 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5370c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5370f push eax */
  push32((uint32_t)(EAX));
  /* 11e53710 call 0x11e4c670 */
  push32(0x11e53715u); f_11e4c670();
  /* 11e53715 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e53718 jmp 0x11e53727 */
  goto L_11e53727;
L_11e5371a:;
  /* 11e5371a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e5371d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e53720 push ecx */
  push32((uint32_t)(ECX));
  /* 11e53721 call dword ptr [0x11e7934c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e7934c))), 0x11e53727u);
L_11e53727:;
  /* 11e53727 pop ebp */
  EBP = (pop32());
  /* 11e53728 ret  */
  ESPCHK(0x11e53700u, _esp0);
  ESP += 4; return;
}

/* FUN_10013730 @ 0x11e53730 (61 bytes, 20 insns) */
void f_11e53730(void) {
  FTRACE(0x11e53730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e53730 push ebp */
  push32((uint32_t)(EBP));
  /* 11e53731 mov ebp, esp */
  EBP = (ESP);
  /* 11e53733 cmp dword ptr [ebp + 8], 0x11e75240 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11e75240u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5373a jb 0x11e5375e */
  if (C.cf) goto L_11e5375e;
  /* 11e5373c cmp dword ptr [ebp + 8], 0x11e754a0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11e754a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e53743 ja 0x11e5375e */
  if ((!C.cf&&!C.zf)) goto L_11e5375e;
  /* 11e53745 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e53748 sub eax, 0x11e75240 */
  { uint32_t _a=(EAX),_b=(0x11e75240u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e5374d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11e53750 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e53753 push eax */
  push32((uint32_t)(EAX));
  /* 11e53754 call 0x11e4c710 */
  push32(0x11e53759u); f_11e4c710();
  /* 11e53759 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5375c jmp 0x11e5376b */
  goto L_11e5376b;
L_11e5375e:;
  /* 11e5375e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e53761 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e53764 push ecx */
  push32((uint32_t)(ECX));
  /* 11e53765 call dword ptr [0x11e79348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e79348))), 0x11e5376bu);
L_11e5376b:;
  /* 11e5376b pop ebp */
  EBP = (pop32());
  /* 11e5376c ret  */
  ESPCHK(0x11e53730u, _esp0);
  ESP += 4; return;
}

/* FUN_10013770 @ 0x11e53770 (41 bytes, 16 insns) */
void f_11e53770(void) {
  FTRACE(0x11e53770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e53770 push ebp */
  push32((uint32_t)(EBP));
  /* 11e53771 mov ebp, esp */
  EBP = (ESP);
  /* 11e53773 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e53777 jge 0x11e5378a */
  if ((C.sf==C.of)) goto L_11e5378a;
  /* 11e53779 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5377c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5377f push eax */
  push32((uint32_t)(EAX));
  /* 11e53780 call 0x11e4c710 */
  push32(0x11e53785u); f_11e4c710();
  /* 11e53785 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e53788 jmp 0x11e53797 */
  goto L_11e53797;
L_11e5378a:;
  /* 11e5378a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e5378d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e53790 push ecx */
  push32((uint32_t)(ECX));
  /* 11e53791 call dword ptr [0x11e79348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e79348))), 0x11e53797u);
L_11e53797:;
  /* 11e53797 pop ebp */
  EBP = (pop32());
  /* 11e53798 ret  */
  ESPCHK(0x11e53770u, _esp0);
  ESP += 4; return;
}

/* FUN_100137a0 @ 0x11e537a0 (119 bytes, 34 insns) */
void f_11e537a0(void) {
  FTRACE(0x11e537a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e537a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e537a1 mov ebp, esp */
  EBP = (ESP);
  /* 11e537a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e537a6 push 0x11e76c7c */
  push32((uint32_t)(0x11e76c7cu));
  /* 11e537ab call dword ptr [0x11e793d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e793d0))), 0x11e537b1u);
  /* 11e537b1 cmp dword ptr [0x11e76c6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e76c6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e537b8 je 0x11e537d8 */
  if (C.zf) goto L_11e537d8;
  /* 11e537ba push 0x11e76c7c */
  push32((uint32_t)(0x11e76c7cu));
  /* 11e537bf call dword ptr [0x11e793c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e793c0))), 0x11e537c5u);
  /* 11e537c5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11e537c7 call 0x11e4c670 */
  push32(0x11e537ccu); f_11e4c670();
  /* 11e537cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e537cf mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11e537d6 jmp 0x11e537df */
  goto L_11e537df;
L_11e537d8:;
  /* 11e537d8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11e537df:;
  /* 11e537df mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 11e537e3 push eax */
  push32((uint32_t)(EAX));
  /* 11e537e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e537e7 push ecx */
  push32((uint32_t)(ECX));
  /* 11e537e8 call 0x11e53820 */
  push32(0x11e537edu); f_11e53820();
  /* 11e537ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e537f0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e537f3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e537f7 je 0x11e53805 */
  if (C.zf) goto L_11e53805;
  /* 11e537f9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11e537fb call 0x11e4c710 */
  push32(0x11e53800u); f_11e4c710();
  /* 11e53800 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e53803 jmp 0x11e53810 */
  goto L_11e53810;
L_11e53805:;
  /* 11e53805 push 0x11e76c7c */
  push32((uint32_t)(0x11e76c7cu));
  /* 11e5380a call dword ptr [0x11e793c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e793c0))), 0x11e53810u);
L_11e53810:;
  /* 11e53810 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e53813 mov esp, ebp */
  ESP = (EBP);
  /* 11e53815 pop ebp */
  EBP = (pop32());
  /* 11e53816 ret  */
  ESPCHK(0x11e537a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013820 @ 0x11e53820 (160 bytes, 50 insns) */
void f_11e53820(void) {
  FTRACE(0x11e53820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e53820 push ebp */
  push32((uint32_t)(EBP));
  /* 11e53821 mov ebp, esp */
  EBP = (ESP);
  /* 11e53823 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e53826 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5382a jne 0x11e53833 */
  if (!C.zf) goto L_11e53833;
  /* 11e5382c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e5382e jmp 0x11e538bc */
  goto L_11e538bc;
L_11e53833:;
  /* 11e53833 cmp dword ptr [0x11e76ba8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e76ba8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5383a jne 0x11e5386a */
  if (!C.zf) goto L_11e5386a;
  /* 11e5383c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e5383f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e53844 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e53849 jle 0x11e5385b */
  if ((C.zf||C.sf!=C.of)) goto L_11e5385b;
  /* 11e5384b call 0x11e52640 */
  push32(0x11e53850u); f_11e52640();
  /* 11e53850 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 11e53856 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e53859 jmp 0x11e538bc */
  goto L_11e538bc;
L_11e5385b:;
  /* 11e5385b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5385e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 11e53861 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11e53863 mov eax, 1 */
  EAX = (0x1u);
  /* 11e53868 jmp 0x11e538bc */
  goto L_11e538bc;
L_11e5386a:;
  /* 11e5386a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11e53871 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11e53874 push eax */
  push32((uint32_t)(EAX));
  /* 11e53875 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e53877 mov ecx, dword ptr [0x11e74fc4] */
  ECX = (r32((uint32_t)(0x11e74fc4)));
  /* 11e5387d push ecx */
  push32((uint32_t)(ECX));
  /* 11e5387e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e53881 push edx */
  push32((uint32_t)(EDX));
  /* 11e53882 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e53884 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 11e53887 push eax */
  push32((uint32_t)(EAX));
  /* 11e53888 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11e5388d mov ecx, dword ptr [0x11e76bb8] */
  ECX = (r32((uint32_t)(0x11e76bb8)));
  /* 11e53893 push ecx */
  push32((uint32_t)(ECX));
  /* 11e53894 call dword ptr [0x11e7936c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e7936c))), 0x11e5389au);
  /* 11e5389a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e5389d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e538a1 je 0x11e538a9 */
  if (C.zf) goto L_11e538a9;
  /* 11e538a3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e538a7 je 0x11e538b9 */
  if (C.zf) goto L_11e538b9;
L_11e538a9:;
  /* 11e538a9 call 0x11e52640 */
  push32(0x11e538aeu); f_11e52640();
  /* 11e538ae mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 11e538b4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e538b7 jmp 0x11e538bc */
  goto L_11e538bc;
L_11e538b9:;
  /* 11e538b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11e538bc:;
  /* 11e538bc mov esp, ebp */
  ESP = (EBP);
  /* 11e538be pop ebp */
  EBP = (pop32());
  /* 11e538bf ret  */
  ESPCHK(0x11e53820u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x11e538c0 (32 bytes, 18 insns) */
void f_11e538c0(void) {
  FTRACE(0x11e538c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e538c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e538c1 mov ebp, esp */
  EBP = (ESP);
  /* 11e538c3 push ebx */
  push32((uint32_t)(EBX));
  /* 11e538c4 push esi */
  push32((uint32_t)(ESI));
  /* 11e538c5 push edi */
  push32((uint32_t)(EDI));
  /* 11e538c6 push ebp */
  push32((uint32_t)(EBP));
  /* 11e538c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e538c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e538cb push 0x11e538d8 */
  push32((uint32_t)(0x11e538d8u));
  /* 11e538d0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11e538d3 call 0x11e5a1be */
  push32(0x11e538d8u); f_11e5a1be();
  /* 11e538d8 pop ebp */
  EBP = (pop32());
  /* 11e538d9 pop edi */
  EDI = (pop32());
  /* 11e538da pop esi */
  ESI = (pop32());
  /* 11e538db pop ebx */
  EBX = (pop32());
  /* 11e538dc mov esp, ebp */
  ESP = (EBP);
  /* 11e538de pop ebp */
  EBP = (pop32());
  /* 11e538df ret  */
  ESPCHK(0x11e538c0u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x11e53902 (104 bytes, 33 insns) */
void f_11e53902(void) {
  FTRACE(0x11e53902u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e53902 push ebx */
  push32((uint32_t)(EBX));
  /* 11e53903 push esi */
  push32((uint32_t)(ESI));
  /* 11e53904 push edi */
  push32((uint32_t)(EDI));
  /* 11e53905 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11e53909 push eax */
  push32((uint32_t)(EAX));
  /* 11e5390a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 11e5390c push 0x11e538e0 */
  push32((uint32_t)(0x11e538e0u));
  /* 11e53911 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 11e53918 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_11e5391f:;
  /* 11e5391f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 11e53923 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 11e53926 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11e53929 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5392c je 0x11e5395c */
  if (C.zf) goto L_11e5395c;
  /* 11e5392e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e53932 je 0x11e5395c */
  if (C.zf) goto L_11e5395c;
  /* 11e53934 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 11e53937 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 11e5393a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 11e5393e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11e53941 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e53946 jne 0x11e5395a */
  if (!C.zf) goto L_11e5395a;
  /* 11e53948 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11e5394d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 11e53951 call 0x11e53996 */
  push32(0x11e53956u); f_11e53996();
  /* 11e53956 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x11e5395au);
L_11e5395a:;
  /* 11e5395a jmp 0x11e5391f */
  goto L_11e5391f;
L_11e5395c:;
  /* 11e5395c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 11e53963 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e53966 pop edi */
  EDI = (pop32());
  /* 11e53967 pop esi */
  ESI = (pop32());
  /* 11e53968 pop ebx */
  EBX = (pop32());
  /* 11e53969 ret  */
  ESPCHK(0x11e53902u, _esp0);
  ESP += 4; return;
}

/* FUN_10013996 @ 0x11e53996 (24 bytes, 10 insns) */
void f_11e53996(void) {
  FTRACE(0x11e53996u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e53996 push ebx */
  push32((uint32_t)(EBX));
  /* 11e53997 push ecx */
  push32((uint32_t)(ECX));
  /* 11e53998 mov ebx, 0x11e754d8 */
  EBX = (0x11e754d8u);
  /* 11e5399d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e539a0 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11e539a3 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11e539a6 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 11e539a9 pop ecx */
  ECX = (pop32());
  /* 11e539aa pop ebx */
  EBX = (pop32());
  /* 11e539ab ret 4 */
  ESPCHK(0x11e53996u, _esp0);
  ESP += 8; return;
}

/* FUN_10013a75 @ 0x11e53a75 (27 bytes, 11 insns) */
void f_11e53a75(void) {
  FTRACE(0x11e53a75u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e53a75 push ebp */
  push32((uint32_t)(EBP));
  /* 11e53a76 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11e53a7a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 11e53a7c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11e53a7f push eax */
  push32((uint32_t)(EAX));
  /* 11e53a80 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 11e53a83 push eax */
  push32((uint32_t)(EAX));
  /* 11e53a84 call 0x11e53902 */
  push32(0x11e53a89u); f_11e53902();
  /* 11e53a89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e53a8c pop ebp */
  EBP = (pop32());
  /* 11e53a8d ret 4 */
  ESPCHK(0x11e53a75u, _esp0);
  ESP += 8; return;
}

/* FUN_10013a90 @ 0x11e53a90 (970 bytes, 340 insns) */
void f_11e53a90(void) {
  FTRACE(0x11e53a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e53a90 push ebp */
  push32((uint32_t)(EBP));
  /* 11e53a91 mov ebp, esp */
  EBP = (ESP);
  /* 11e53a93 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11e53a95 push 0x11e72060 */
  push32((uint32_t)(0x11e72060u));
  /* 11e53a9a push 0x11e539b8 */
  push32((uint32_t)(0x11e539b8u));
  /* 11e53a9f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11e53aa5 push eax */
  push32((uint32_t)(EAX));
  /* 11e53aa6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11e53aad add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e53ab0 push ebx */
  push32((uint32_t)(EBX));
  /* 11e53ab1 push esi */
  push32((uint32_t)(ESI));
  /* 11e53ab2 push edi */
  push32((uint32_t)(EDI));
  /* 11e53ab3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11e53ab6 cmp dword ptr [0x11e76bcc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e76bcc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e53abd jne 0x11e53b16 */
  if (!C.zf) goto L_11e53b16;
  /* 11e53abf push 1 */
  push32((uint32_t)(0x1u));
  /* 11e53ac1 push 0x11e71fc8 */
  push32((uint32_t)(0x11e71fc8u));
  /* 11e53ac6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e53ac8 push 0x11e71fc8 */
  push32((uint32_t)(0x11e71fc8u));
  /* 11e53acd push 0 */
  push32((uint32_t)(0x0u));
  /* 11e53acf push 0 */
  push32((uint32_t)(0x0u));
  /* 11e53ad1 call dword ptr [0x11e79300] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e79300))), 0x11e53ad7u);
  /* 11e53ad7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e53ad9 je 0x11e53ae7 */
  if (C.zf) goto L_11e53ae7;
  /* 11e53adb mov dword ptr [0x11e76bcc], 1 */
  w32((uint32_t)(0x11e76bcc), (0x1u));
  /* 11e53ae5 jmp 0x11e53b16 */
  goto L_11e53b16;
L_11e53ae7:;
  /* 11e53ae7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e53ae9 push 0x11e71fc4 */
  push32((uint32_t)(0x11e71fc4u));
  /* 11e53aee push 1 */
  push32((uint32_t)(0x1u));
  /* 11e53af0 push 0x11e71fc4 */
  push32((uint32_t)(0x11e71fc4u));
  /* 11e53af5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e53af7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e53af9 call dword ptr [0x11e79304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e79304))), 0x11e53affu);
  /* 11e53aff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e53b01 je 0x11e53b0f */
  if (C.zf) goto L_11e53b0f;
  /* 11e53b03 mov dword ptr [0x11e76bcc], 2 */
  w32((uint32_t)(0x11e76bcc), (0x2u));
  /* 11e53b0d jmp 0x11e53b16 */
  goto L_11e53b16;
L_11e53b0f:;
  /* 11e53b0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e53b11 jmp 0x11e53e74 */
  goto L_11e53e74;
L_11e53b16:;
  /* 11e53b16 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e53b1a jle 0x11e53b2f */
  if ((C.zf||C.sf!=C.of)) goto L_11e53b2f;
  /* 11e53b1c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e53b1f push eax */
  push32((uint32_t)(EAX));
  /* 11e53b20 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e53b23 push ecx */
  push32((uint32_t)(ECX));
  /* 11e53b24 call 0x11e53e90 */
  push32(0x11e53b29u); f_11e53e90();
  /* 11e53b29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e53b2c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11e53b2f:;
  /* 11e53b2f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e53b33 jle 0x11e53b48 */
  if ((C.zf||C.sf!=C.of)) goto L_11e53b48;
  /* 11e53b35 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e53b38 push edx */
  push32((uint32_t)(EDX));
  /* 11e53b39 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e53b3c push eax */
  push32((uint32_t)(EAX));
  /* 11e53b3d call 0x11e53e90 */
  push32(0x11e53b42u); f_11e53e90();
  /* 11e53b42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e53b45 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_11e53b48:;
  /* 11e53b48 cmp dword ptr [0x11e76bcc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11e76bcc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e53b4f jne 0x11e53b74 */
  if (!C.zf) goto L_11e53b74;
  /* 11e53b51 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e53b54 push ecx */
  push32((uint32_t)(ECX));
  /* 11e53b55 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e53b58 push edx */
  push32((uint32_t)(EDX));
  /* 11e53b59 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e53b5c push eax */
  push32((uint32_t)(EAX));
  /* 11e53b5d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e53b60 push ecx */
  push32((uint32_t)(ECX));
  /* 11e53b61 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e53b64 push edx */
  push32((uint32_t)(EDX));
  /* 11e53b65 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e53b68 push eax */
  push32((uint32_t)(EAX));
  /* 11e53b69 call dword ptr [0x11e79304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e79304))), 0x11e53b6fu);
  /* 11e53b6f jmp 0x11e53e74 */
  goto L_11e53e74;
L_11e53b74:;
  /* 11e53b74 cmp dword ptr [0x11e76bcc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e76bcc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e53b7b jne 0x11e53e72 */
  if (!C.zf) goto L_11e53e72;
  /* 11e53b81 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e53b85 jne 0x11e53b90 */
  if (!C.zf) goto L_11e53b90;
  /* 11e53b87 mov ecx, dword ptr [0x11e76bb8] */
  ECX = (r32((uint32_t)(0x11e76bb8)));
  /* 11e53b8d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_11e53b90:;
  /* 11e53b90 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e53b94 je 0x11e53ba0 */
  if (C.zf) goto L_11e53ba0;
  /* 11e53b96 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e53b9a jne 0x11e53d1c */
  if (!C.zf) goto L_11e53d1c;
L_11e53ba0:;
  /* 11e53ba0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e53ba3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e53ba6 jne 0x11e53bb2 */
  if (!C.zf) goto L_11e53bb2;
  /* 11e53ba8 mov eax, 2 */
  EAX = (0x2u);
  /* 11e53bad jmp 0x11e53e74 */
  goto L_11e53e74;
L_11e53bb2:;
  /* 11e53bb2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e53bb6 jle 0x11e53bc2 */
  if ((C.zf||C.sf!=C.of)) goto L_11e53bc2;
  /* 11e53bb8 mov eax, 1 */
  EAX = (0x1u);
  /* 11e53bbd jmp 0x11e53e74 */
  goto L_11e53e74;
L_11e53bc2:;
  /* 11e53bc2 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e53bc6 jle 0x11e53bd2 */
  if ((C.zf||C.sf!=C.of)) goto L_11e53bd2;
  /* 11e53bc8 mov eax, 3 */
  EAX = (0x3u);
  /* 11e53bcd jmp 0x11e53e74 */
  goto L_11e53e74;
L_11e53bd2:;
  /* 11e53bd2 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 11e53bd5 push eax */
  push32((uint32_t)(EAX));
  /* 11e53bd6 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11e53bd9 push ecx */
  push32((uint32_t)(ECX));
  /* 11e53bda call dword ptr [0x11e79338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e79338))), 0x11e53be0u);
  /* 11e53be0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e53be2 jne 0x11e53beb */
  if (!C.zf) goto L_11e53beb;
  /* 11e53be4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e53be6 jmp 0x11e53e74 */
  goto L_11e53e74;
L_11e53beb:;
  /* 11e53beb cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e53bef jne 0x11e53bf7 */
  if (!C.zf) goto L_11e53bf7;
  /* 11e53bf1 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e53bf5 je 0x11e53c24 */
  if (C.zf) goto L_11e53c24;
L_11e53bf7:;
  /* 11e53bf7 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e53bfb jne 0x11e53c03 */
  if (!C.zf) goto L_11e53c03;
  /* 11e53bfd cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e53c01 je 0x11e53c24 */
  if (C.zf) goto L_11e53c24;
L_11e53c03:;
  /* 11e53c03 push 0x11e72020 */
  push32((uint32_t)(0x11e72020u));
  /* 11e53c08 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e53c0a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 11e53c0f push 0x11e72018 */
  push32((uint32_t)(0x11e72018u));
  /* 11e53c14 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e53c16 call 0x11e48dc0 */
  push32(0x11e53c1bu); f_11e48dc0();
  /* 11e53c1b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e53c1e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e53c21 jne 0x11e53c24 */
  if (!C.zf) goto L_11e53c24;
  /* 11e53c23 int3  */
  x86_unimpl("int3 @ 0x11e53c23");
L_11e53c24:;
  /* 11e53c24 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e53c26 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e53c28 jne 0x11e53beb */
  if (!C.zf) goto L_11e53beb;
  /* 11e53c2a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e53c2e jle 0x11e53ca3 */
  if ((C.zf||C.sf!=C.of)) goto L_11e53ca3;
  /* 11e53c30 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e53c34 jae 0x11e53c40 */
  if (!C.cf) goto L_11e53c40;
  /* 11e53c36 mov eax, 3 */
  EAX = (0x3u);
  /* 11e53c3b jmp 0x11e53e74 */
  goto L_11e53e74;
L_11e53c40:;
  /* 11e53c40 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 11e53c43 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 11e53c46 jmp 0x11e53c51 */
  goto L_11e53c51;
L_11e53c48:;
  /* 11e53c48 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11e53c4b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e53c4e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_11e53c51:;
  /* 11e53c51 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11e53c54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e53c56 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e53c58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e53c5a je 0x11e53c99 */
  if (C.zf) goto L_11e53c99;
  /* 11e53c5c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11e53c5f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e53c61 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11e53c64 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e53c66 je 0x11e53c99 */
  if (C.zf) goto L_11e53c99;
  /* 11e53c68 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e53c6b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e53c6d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11e53c6f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11e53c72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e53c74 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e53c76 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e53c78 jl 0x11e53c97 */
  if ((C.sf!=C.of)) goto L_11e53c97;
  /* 11e53c7a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e53c7d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e53c7f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11e53c81 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11e53c84 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e53c86 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11e53c89 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e53c8b jg 0x11e53c97 */
  if ((!C.zf&&C.sf==C.of)) goto L_11e53c97;
  /* 11e53c8d mov eax, 2 */
  EAX = (0x2u);
  /* 11e53c92 jmp 0x11e53e74 */
  goto L_11e53e74;
L_11e53c97:;
  /* 11e53c97 jmp 0x11e53c48 */
  goto L_11e53c48;
L_11e53c99:;
  /* 11e53c99 mov eax, 3 */
  EAX = (0x3u);
  /* 11e53c9e jmp 0x11e53e74 */
  goto L_11e53e74;
L_11e53ca3:;
  /* 11e53ca3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e53ca7 jle 0x11e53d1c */
  if ((C.zf||C.sf!=C.of)) goto L_11e53d1c;
  /* 11e53ca9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e53cad jae 0x11e53cb9 */
  if (!C.cf) goto L_11e53cb9;
  /* 11e53caf mov eax, 1 */
  EAX = (0x1u);
  /* 11e53cb4 jmp 0x11e53e74 */
  goto L_11e53e74;
L_11e53cb9:;
  /* 11e53cb9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 11e53cbc mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 11e53cbf jmp 0x11e53cca */
  goto L_11e53cca;
L_11e53cc1:;
  /* 11e53cc1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11e53cc4 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e53cc7 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_11e53cca:;
  /* 11e53cca mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11e53ccd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e53ccf mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11e53cd1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e53cd3 je 0x11e53d12 */
  if (C.zf) goto L_11e53d12;
  /* 11e53cd5 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11e53cd8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e53cda mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11e53cdd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e53cdf je 0x11e53d12 */
  if (C.zf) goto L_11e53d12;
  /* 11e53ce1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e53ce4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e53ce6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e53ce8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11e53ceb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e53ced mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11e53cef cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e53cf1 jl 0x11e53d10 */
  if ((C.sf!=C.of)) goto L_11e53d10;
  /* 11e53cf3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e53cf6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e53cf8 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11e53cfa mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11e53cfd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e53cff mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11e53d02 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e53d04 jg 0x11e53d10 */
  if ((!C.zf&&C.sf==C.of)) goto L_11e53d10;
  /* 11e53d06 mov eax, 2 */
  EAX = (0x2u);
  /* 11e53d0b jmp 0x11e53e74 */
  goto L_11e53e74;
L_11e53d10:;
  /* 11e53d10 jmp 0x11e53cc1 */
  goto L_11e53cc1;
L_11e53d12:;
  /* 11e53d12 mov eax, 1 */
  EAX = (0x1u);
  /* 11e53d17 jmp 0x11e53e74 */
  goto L_11e53e74;
L_11e53d1c:;
  /* 11e53d1c push 0 */
  push32((uint32_t)(0x0u));
  /* 11e53d1e push 0 */
  push32((uint32_t)(0x0u));
  /* 11e53d20 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e53d23 push ecx */
  push32((uint32_t)(ECX));
  /* 11e53d24 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e53d27 push edx */
  push32((uint32_t)(EDX));
  /* 11e53d28 push 9 */
  push32((uint32_t)(0x9u));
  /* 11e53d2a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11e53d2d push eax */
  push32((uint32_t)(EAX));
  /* 11e53d2e call dword ptr [0x11e7932c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e7932c))), 0x11e53d34u);
  /* 11e53d34 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11e53d37 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e53d3b jne 0x11e53d44 */
  if (!C.zf) goto L_11e53d44;
  /* 11e53d3d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e53d3f jmp 0x11e53e74 */
  goto L_11e53e74;
L_11e53d44:;
  /* 11e53d44 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e53d4b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e53d4e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11e53d50 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e53d53 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11e53d55 call 0x11e4d910 */
  push32(0x11e53d5au); f_11e4d910();
  /* 11e53d5a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 11e53d5d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11e53d60 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11e53d63 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11e53d66 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11e53d6d jmp 0x11e53d86 */
  goto L_11e53d86;
  /* 11e53d6f mov eax, 1 */
  EAX = (0x1u);
  /* 11e53d74 ret  */
  ESPCHK(0x11e53a90u, _esp0);
  ESP += 4; return;
  /* 11e53d75 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11e53d78 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11e53d7f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11e53d86:;
  /* 11e53d86 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e53d8a jne 0x11e53d93 */
  if (!C.zf) goto L_11e53d93;
  /* 11e53d8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e53d8e jmp 0x11e53e74 */
  goto L_11e53e74;
L_11e53d93:;
  /* 11e53d93 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e53d96 push edx */
  push32((uint32_t)(EDX));
  /* 11e53d97 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e53d9a push eax */
  push32((uint32_t)(EAX));
  /* 11e53d9b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e53d9e push ecx */
  push32((uint32_t)(ECX));
  /* 11e53d9f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e53da2 push edx */
  push32((uint32_t)(EDX));
  /* 11e53da3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e53da5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11e53da8 push eax */
  push32((uint32_t)(EAX));
  /* 11e53da9 call dword ptr [0x11e7932c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e7932c))), 0x11e53dafu);
  /* 11e53daf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e53db1 jne 0x11e53dba */
  if (!C.zf) goto L_11e53dba;
  /* 11e53db3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e53db5 jmp 0x11e53e74 */
  goto L_11e53e74;
L_11e53dba:;
  /* 11e53dba push 0 */
  push32((uint32_t)(0x0u));
  /* 11e53dbc push 0 */
  push32((uint32_t)(0x0u));
  /* 11e53dbe mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e53dc1 push ecx */
  push32((uint32_t)(ECX));
  /* 11e53dc2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e53dc5 push edx */
  push32((uint32_t)(EDX));
  /* 11e53dc6 push 9 */
  push32((uint32_t)(0x9u));
  /* 11e53dc8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11e53dcb push eax */
  push32((uint32_t)(EAX));
  /* 11e53dcc call dword ptr [0x11e7932c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e7932c))), 0x11e53dd2u);
  /* 11e53dd2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11e53dd5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e53dd9 jne 0x11e53de2 */
  if (!C.zf) goto L_11e53de2;
  /* 11e53ddb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e53ddd jmp 0x11e53e74 */
  goto L_11e53e74;
L_11e53de2:;
  /* 11e53de2 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11e53de9 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e53dec shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11e53dee add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e53df1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11e53df3 call 0x11e4d910 */
  push32(0x11e53df8u); f_11e4d910();
  /* 11e53df8 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 11e53dfb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11e53dfe mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11e53e01 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11e53e04 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11e53e0b jmp 0x11e53e24 */
  goto L_11e53e24;
  /* 11e53e0d mov eax, 1 */
  EAX = (0x1u);
  /* 11e53e12 ret  */
  ESPCHK(0x11e53a90u, _esp0);
  ESP += 4; return;
  /* 11e53e13 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11e53e16 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11e53e1d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11e53e24:;
  /* 11e53e24 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e53e28 jne 0x11e53e2e */
  if (!C.zf) goto L_11e53e2e;
  /* 11e53e2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e53e2c jmp 0x11e53e74 */
  goto L_11e53e74;
L_11e53e2e:;
  /* 11e53e2e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e53e31 push edx */
  push32((uint32_t)(EDX));
  /* 11e53e32 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e53e35 push eax */
  push32((uint32_t)(EAX));
  /* 11e53e36 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e53e39 push ecx */
  push32((uint32_t)(ECX));
  /* 11e53e3a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e53e3d push edx */
  push32((uint32_t)(EDX));
  /* 11e53e3e push 1 */
  push32((uint32_t)(0x1u));
  /* 11e53e40 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11e53e43 push eax */
  push32((uint32_t)(EAX));
  /* 11e53e44 call dword ptr [0x11e7932c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e7932c))), 0x11e53e4au);
  /* 11e53e4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e53e4c jne 0x11e53e52 */
  if (!C.zf) goto L_11e53e52;
  /* 11e53e4e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e53e50 jmp 0x11e53e74 */
  goto L_11e53e74;
L_11e53e52:;
  /* 11e53e52 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e53e55 push ecx */
  push32((uint32_t)(ECX));
  /* 11e53e56 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e53e59 push edx */
  push32((uint32_t)(EDX));
  /* 11e53e5a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e53e5d push eax */
  push32((uint32_t)(EAX));
  /* 11e53e5e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e53e61 push ecx */
  push32((uint32_t)(ECX));
  /* 11e53e62 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e53e65 push edx */
  push32((uint32_t)(EDX));
  /* 11e53e66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e53e69 push eax */
  push32((uint32_t)(EAX));
  /* 11e53e6a call dword ptr [0x11e79300] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e79300))), 0x11e53e70u);
  /* 11e53e70 jmp 0x11e53e74 */
  goto L_11e53e74;
L_11e53e72:;
  /* 11e53e72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e53e74:;
  /* 11e53e74 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 11e53e77 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e53e7a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11e53e81 pop edi */
  EDI = (pop32());
  /* 11e53e82 pop esi */
  ESI = (pop32());
  /* 11e53e83 pop ebx */
  EBX = (pop32());
  /* 11e53e84 mov esp, ebp */
  ESP = (EBP);
  /* 11e53e86 pop ebp */
  EBP = (pop32());
  /* 11e53e87 ret  */
  ESPCHK(0x11e53a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10013e90 @ 0x11e53e90 (80 bytes, 32 insns) */
void f_11e53e90(void) {
  FTRACE(0x11e53e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e53e90 push ebp */
  push32((uint32_t)(EBP));
  /* 11e53e91 mov ebp, esp */
  EBP = (ESP);
  /* 11e53e93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e53e96 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e53e99 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e53e9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e53e9f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11e53ea2:;
  /* 11e53ea2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e53ea5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e53ea8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e53eab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e53eae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e53eb0 je 0x11e53ec7 */
  if (C.zf) goto L_11e53ec7;
  /* 11e53eb2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e53eb5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11e53eb8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e53eba je 0x11e53ec7 */
  if (C.zf) goto L_11e53ec7;
  /* 11e53ebc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e53ebf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e53ec2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e53ec5 jmp 0x11e53ea2 */
  goto L_11e53ea2;
L_11e53ec7:;
  /* 11e53ec7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e53eca movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11e53ecd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e53ecf jne 0x11e53ed9 */
  if (!C.zf) goto L_11e53ed9;
  /* 11e53ed1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e53ed4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e53ed7 jmp 0x11e53edc */
  goto L_11e53edc;
L_11e53ed9:;
  /* 11e53ed9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11e53edc:;
  /* 11e53edc mov esp, ebp */
  ESP = (EBP);
  /* 11e53ede pop ebp */
  EBP = (pop32());
  /* 11e53edf ret  */
  ESPCHK(0x11e53e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10013ee0 @ 0x11e53ee0 (736 bytes, 224 insns) */
void f_11e53ee0(void) {
  FTRACE(0x11e53ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e53ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e53ee1 mov ebp, esp */
  EBP = (ESP);
  /* 11e53ee3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e53ee6 push esi */
  push32((uint32_t)(ESI));
  /* 11e53ee7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e53eeb je 0x11e53f0c */
  if (C.zf) goto L_11e53f0c;
  /* 11e53eed push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11e53eef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e53ef2 push eax */
  push32((uint32_t)(EAX));
  /* 11e53ef3 call 0x11e556f0 */
  push32(0x11e53ef8u); f_11e556f0();
  /* 11e53ef8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e53efb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11e53efe cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e53f02 je 0x11e53f0c */
  if (C.zf) goto L_11e53f0c;
  /* 11e53f04 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e53f07 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e53f0a jne 0x11e53f14 */
  if (!C.zf) goto L_11e53f14;
L_11e53f0c:;
  /* 11e53f0c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e53f0f jmp 0x11e541bb */
  goto L_11e541bb;
L_11e53f14:;
  /* 11e53f14 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e53f17 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11e53f1b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e53f1d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e53f1f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11e53f20 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11e53f23 mov ecx, dword ptr [0x11e76910] */
  ECX = (r32((uint32_t)(0x11e76910)));
  /* 11e53f29 cmp ecx, dword ptr [0x11e76914] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11e76914))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e53f2f jne 0x11e53f45 */
  if (!C.zf) goto L_11e53f45;
  /* 11e53f31 mov edx, dword ptr [0x11e76910] */
  EDX = (r32((uint32_t)(0x11e76910)));
  /* 11e53f37 push edx */
  push32((uint32_t)(EDX));
  /* 11e53f38 call 0x11e54240 */
  push32(0x11e53f3du); f_11e54240();
  /* 11e53f3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e53f40 mov dword ptr [0x11e76910], eax */
  w32((uint32_t)(0x11e76910), (EAX));
L_11e53f45:;
  /* 11e53f45 cmp dword ptr [0x11e76910], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e76910))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e53f4c jne 0x11e54005 */
  if (!C.zf) goto L_11e54005;
  /* 11e53f52 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e53f56 je 0x11e53f77 */
  if (C.zf) goto L_11e53f77;
  /* 11e53f58 cmp dword ptr [0x11e76918], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e76918))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e53f5f je 0x11e53f77 */
  if (C.zf) goto L_11e53f77;
  /* 11e53f61 call 0x11e52f50 */
  push32(0x11e53f66u); f_11e52f50();
  /* 11e53f66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e53f68 je 0x11e53f72 */
  if (C.zf) goto L_11e53f72;
  /* 11e53f6a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e53f6d jmp 0x11e541bb */
  goto L_11e541bb;
L_11e53f72:;
  /* 11e53f72 jmp 0x11e54005 */
  goto L_11e54005;
L_11e53f77:;
  /* 11e53f77 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e53f7b je 0x11e53f84 */
  if (C.zf) goto L_11e53f84;
  /* 11e53f7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e53f7f jmp 0x11e541bb */
  goto L_11e541bb;
L_11e53f84:;
  /* 11e53f84 cmp dword ptr [0x11e76910], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e76910))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e53f8b jne 0x11e53fc4 */
  if (!C.zf) goto L_11e53fc4;
  /* 11e53f8d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 11e53f92 push 0x11e72078 */
  push32((uint32_t)(0x11e72078u));
  /* 11e53f97 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e53f99 push 4 */
  push32((uint32_t)(0x4u));
  /* 11e53f9b call 0x11e49a50 */
  push32(0x11e53fa0u); f_11e49a50();
  /* 11e53fa0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e53fa3 mov dword ptr [0x11e76910], eax */
  w32((uint32_t)(0x11e76910), (EAX));
  /* 11e53fa8 cmp dword ptr [0x11e76910], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e76910))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e53faf jne 0x11e53fb9 */
  if (!C.zf) goto L_11e53fb9;
  /* 11e53fb1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e53fb4 jmp 0x11e541bb */
  goto L_11e541bb;
L_11e53fb9:;
  /* 11e53fb9 mov eax, dword ptr [0x11e76910] */
  EAX = (r32((uint32_t)(0x11e76910)));
  /* 11e53fbe mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11e53fc4:;
  /* 11e53fc4 cmp dword ptr [0x11e76918], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e76918))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e53fcb jne 0x11e54005 */
  if (!C.zf) goto L_11e54005;
  /* 11e53fcd push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 11e53fd2 push 0x11e72078 */
  push32((uint32_t)(0x11e72078u));
  /* 11e53fd7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e53fd9 push 4 */
  push32((uint32_t)(0x4u));
  /* 11e53fdb call 0x11e49a50 */
  push32(0x11e53fe0u); f_11e49a50();
  /* 11e53fe0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e53fe3 mov dword ptr [0x11e76918], eax */
  w32((uint32_t)(0x11e76918), (EAX));
  /* 11e53fe8 cmp dword ptr [0x11e76918], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e76918))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e53fef jne 0x11e53ff9 */
  if (!C.zf) goto L_11e53ff9;
  /* 11e53ff1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e53ff4 jmp 0x11e541bb */
  goto L_11e541bb;
L_11e53ff9:;
  /* 11e53ff9 mov ecx, dword ptr [0x11e76918] */
  ECX = (r32((uint32_t)(0x11e76918)));
  /* 11e53fff mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_11e54005:;
  /* 11e54005 mov edx, dword ptr [0x11e76910] */
  EDX = (r32((uint32_t)(0x11e76910)));
  /* 11e5400b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11e5400e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e54011 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e54014 push eax */
  push32((uint32_t)(EAX));
  /* 11e54015 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e54018 push ecx */
  push32((uint32_t)(ECX));
  /* 11e54019 call 0x11e541c0 */
  push32(0x11e5401eu); f_11e541c0();
  /* 11e5401e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e54021 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e54024 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e54028 jl 0x11e540c1 */
  if ((C.sf!=C.of)) goto L_11e540c1;
  /* 11e5402e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e54031 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e54034 je 0x11e540c1 */
  if (C.zf) goto L_11e540c1;
  /* 11e5403a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5403e je 0x11e540b3 */
  if (C.zf) goto L_11e540b3;
  /* 11e54040 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e54042 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e54045 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e54048 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11e5404b push edx */
  push32((uint32_t)(EDX));
  /* 11e5404c call 0x11e4a4e0 */
  push32(0x11e54051u); f_11e4a4e0();
  /* 11e54051 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e54054 jmp 0x11e5405f */
  goto L_11e5405f;
L_11e54056:;
  /* 11e54056 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e54059 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5405c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11e5405f:;
  /* 11e5405f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e54062 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e54065 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e54069 je 0x11e54080 */
  if (C.zf) goto L_11e54080;
  /* 11e5406b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e5406e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e54071 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e54074 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11e54077 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 11e5407b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 11e5407e jmp 0x11e54056 */
  goto L_11e54056;
L_11e54080:;
  /* 11e54080 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 11e54085 push 0x11e72078 */
  push32((uint32_t)(0x11e72078u));
  /* 11e5408a push 2 */
  push32((uint32_t)(0x2u));
  /* 11e5408c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e5408f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11e54092 push eax */
  push32((uint32_t)(EAX));
  /* 11e54093 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e54096 push ecx */
  push32((uint32_t)(ECX));
  /* 11e54097 call 0x11e49ee0 */
  push32(0x11e5409cu); f_11e49ee0();
  /* 11e5409c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5409f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e540a2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e540a6 je 0x11e540b1 */
  if (C.zf) goto L_11e540b1;
  /* 11e540a8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e540ab mov dword ptr [0x11e76910], edx */
  w32((uint32_t)(0x11e76910), (EDX));
L_11e540b1:;
  /* 11e540b1 jmp 0x11e540bf */
  goto L_11e540bf;
L_11e540b3:;
  /* 11e540b3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e540b6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e540b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e540bc mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_11e540bf:;
  /* 11e540bf jmp 0x11e54134 */
  goto L_11e54134;
L_11e540c1:;
  /* 11e540c1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e540c5 jne 0x11e5412d */
  if (!C.zf) goto L_11e5412d;
  /* 11e540c7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e540cb jge 0x11e540d5 */
  if ((C.sf==C.of)) goto L_11e540d5;
  /* 11e540cd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e540d0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e540d2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11e540d5:;
  /* 11e540d5 push 0xce */
  push32((uint32_t)(0xceu));
  /* 11e540da push 0x11e72078 */
  push32((uint32_t)(0x11e72078u));
  /* 11e540df push 2 */
  push32((uint32_t)(0x2u));
  /* 11e540e1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e540e4 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 11e540eb push edx */
  push32((uint32_t)(EDX));
  /* 11e540ec mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e540ef push eax */
  push32((uint32_t)(EAX));
  /* 11e540f0 call 0x11e49ee0 */
  push32(0x11e540f5u); f_11e49ee0();
  /* 11e540f5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e540f8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e540fb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e540ff jne 0x11e54109 */
  if (!C.zf) goto L_11e54109;
  /* 11e54101 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e54104 jmp 0x11e541bb */
  goto L_11e541bb;
L_11e54109:;
  /* 11e54109 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e5410c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e5410f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e54112 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11e54115 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e54118 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e5411b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 11e54123 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e54126 mov dword ptr [0x11e76910], eax */
  w32((uint32_t)(0x11e76910), (EAX));
  /* 11e5412b jmp 0x11e54134 */
  goto L_11e54134;
L_11e5412d:;
  /* 11e5412d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e5412f jmp 0x11e541bb */
  goto L_11e541bb;
L_11e54134:;
  /* 11e54134 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e54138 je 0x11e541b9 */
  if (C.zf) goto L_11e541b9;
  /* 11e5413a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 11e5413f push 0x11e72078 */
  push32((uint32_t)(0x11e72078u));
  /* 11e54144 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e54146 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e54149 push ecx */
  push32((uint32_t)(ECX));
  /* 11e5414a call 0x11e4d5a0 */
  push32(0x11e5414fu); f_11e4d5a0();
  /* 11e5414f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e54152 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e54155 push eax */
  push32((uint32_t)(EAX));
  /* 11e54156 call 0x11e49a50 */
  push32(0x11e5415bu); f_11e49a50();
  /* 11e5415b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5415e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11e54161 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e54165 je 0x11e541b9 */
  if (C.zf) goto L_11e541b9;
  /* 11e54167 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5416a push edx */
  push32((uint32_t)(EDX));
  /* 11e5416b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e5416e push eax */
  push32((uint32_t)(EAX));
  /* 11e5416f call 0x11e4d720 */
  push32(0x11e54174u); f_11e4d720();
  /* 11e54174 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e54177 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e5417a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e5417d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e54180 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e54182 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e54185 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e54188 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11e5418b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e5418e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e54191 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e54194 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e54197 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e54199 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e5419b not edx */
  EDX = (~(EDX));
  /* 11e5419d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11e541a0 push edx */
  push32((uint32_t)(EDX));
  /* 11e541a1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e541a4 push eax */
  push32((uint32_t)(EAX));
  /* 11e541a5 call dword ptr [0x11e79308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e79308))), 0x11e541abu);
  /* 11e541ab push 2 */
  push32((uint32_t)(0x2u));
  /* 11e541ad mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e541b0 push ecx */
  push32((uint32_t)(ECX));
  /* 11e541b1 call 0x11e4a4e0 */
  push32(0x11e541b6u); f_11e4a4e0();
  /* 11e541b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e541b9:;
  /* 11e541b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e541bb:;
  /* 11e541bb pop esi */
  ESI = (pop32());
  /* 11e541bc mov esp, ebp */
  ESP = (EBP);
  /* 11e541be pop ebp */
  EBP = (pop32());
  /* 11e541bf ret  */
  ESPCHK(0x11e53ee0u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x11e541c0 (124 bytes, 47 insns) */
void f_11e541c0(void) {
  FTRACE(0x11e541c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e541c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e541c1 mov ebp, esp */
  EBP = (ESP);
  /* 11e541c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e541c4 mov eax, dword ptr [0x11e76910] */
  EAX = (r32((uint32_t)(0x11e76910)));
  /* 11e541c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e541cc jmp 0x11e541d7 */
  goto L_11e541d7;
L_11e541ce:;
  /* 11e541ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e541d1 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e541d4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11e541d7:;
  /* 11e541d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e541da cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e541dd je 0x11e5422a */
  if (C.zf) goto L_11e5422a;
  /* 11e541df mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e541e2 push eax */
  push32((uint32_t)(EAX));
  /* 11e541e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e541e6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e541e8 push edx */
  push32((uint32_t)(EDX));
  /* 11e541e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e541ec push eax */
  push32((uint32_t)(EAX));
  /* 11e541ed call 0x11e52f00 */
  push32(0x11e541f2u); f_11e52f00();
  /* 11e541f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e541f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e541f7 jne 0x11e54228 */
  if (!C.zf) goto L_11e54228;
  /* 11e541f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e541fc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e541fe mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e54201 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 11e54205 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e54208 je 0x11e5421a */
  if (C.zf) goto L_11e5421a;
  /* 11e5420a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e5420d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e5420f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e54212 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 11e54216 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e54218 jne 0x11e54228 */
  if (!C.zf) goto L_11e54228;
L_11e5421a:;
  /* 11e5421a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e5421d sub eax, dword ptr [0x11e76910] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11e76910))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e54223 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11e54226 jmp 0x11e54238 */
  goto L_11e54238;
L_11e54228:;
  /* 11e54228 jmp 0x11e541ce */
  goto L_11e541ce;
L_11e5422a:;
  /* 11e5422a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e5422d sub eax, dword ptr [0x11e76910] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11e76910))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e54233 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11e54236 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11e54238:;
  /* 11e54238 mov esp, ebp */
  ESP = (EBP);
  /* 11e5423a pop ebp */
  EBP = (pop32());
  /* 11e5423b ret  */
  ESPCHK(0x11e541c0u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x11e54240 (238 bytes, 80 insns) */
void f_11e54240(void) {
  FTRACE(0x11e54240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e54240 push ebp */
  push32((uint32_t)(EBP));
  /* 11e54241 mov ebp, esp */
  EBP = (ESP);
  /* 11e54243 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e54246 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11e5424d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e54250 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e54253 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e54257 jne 0x11e54260 */
  if (!C.zf) goto L_11e54260;
  /* 11e54259 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e5425b jmp 0x11e5432a */
  goto L_11e5432a;
L_11e54260:;
  /* 11e54260 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e54263 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e54265 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e54268 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5426b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e5426e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e54270 je 0x11e5427d */
  if (C.zf) goto L_11e5427d;
  /* 11e54272 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e54275 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e54278 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11e5427b jmp 0x11e54260 */
  goto L_11e54260;
L_11e5427d:;
  /* 11e5427d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 11e54282 push 0x11e72078 */
  push32((uint32_t)(0x11e72078u));
  /* 11e54287 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e54289 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e5428c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 11e54293 push eax */
  push32((uint32_t)(EAX));
  /* 11e54294 call 0x11e49a50 */
  push32(0x11e54299u); f_11e49a50();
  /* 11e54299 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5429c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e5429f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e542a2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e542a5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e542a9 jne 0x11e542b5 */
  if (!C.zf) goto L_11e542b5;
  /* 11e542ab push 9 */
  push32((uint32_t)(0x9u));
  /* 11e542ad call 0x11e488d0 */
  push32(0x11e542b2u); f_11e488d0();
  /* 11e542b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e542b5:;
  /* 11e542b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e542b8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11e542bb:;
  /* 11e542bb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e542be cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e542c1 je 0x11e5431e */
  if (C.zf) goto L_11e5431e;
  /* 11e542c3 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 11e542c8 push 0x11e72078 */
  push32((uint32_t)(0x11e72078u));
  /* 11e542cd push 2 */
  push32((uint32_t)(0x2u));
  /* 11e542cf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e542d2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e542d4 push edx */
  push32((uint32_t)(EDX));
  /* 11e542d5 call 0x11e4d5a0 */
  push32(0x11e542dau); f_11e4d5a0();
  /* 11e542da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e542dd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e542e0 push eax */
  push32((uint32_t)(EAX));
  /* 11e542e1 call 0x11e49a50 */
  push32(0x11e542e6u); f_11e49a50();
  /* 11e542e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e542e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e542ec mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11e542ee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e542f1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e542f4 je 0x11e5430a */
  if (C.zf) goto L_11e5430a;
  /* 11e542f6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e542f9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e542fb push ecx */
  push32((uint32_t)(ECX));
  /* 11e542fc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e542ff mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e54301 push eax */
  push32((uint32_t)(EAX));
  /* 11e54302 call 0x11e4d720 */
  push32(0x11e54307u); f_11e4d720();
  /* 11e54307 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e5430a:;
  /* 11e5430a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e5430d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e54310 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e54313 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e54316 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e54319 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11e5431c jmp 0x11e542bb */
  goto L_11e542bb;
L_11e5431e:;
  /* 11e5431e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e54321 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11e54327 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11e5432a:;
  /* 11e5432a mov esp, ebp */
  ESP = (EBP);
  /* 11e5432c pop ebp */
  EBP = (pop32());
  /* 11e5432d ret  */
  ESPCHK(0x11e54240u, _esp0);
  ESP += 4; return;
}

/* FUN_10014330 @ 0x11e54330 (482 bytes, 138 insns) */
void f_11e54330(void) {
  FTRACE(0x11e54330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e54330 push ebp */
  push32((uint32_t)(EBP));
  /* 11e54331 mov ebp, esp */
  EBP = (ESP);
  /* 11e54333 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e54336 push esi */
  push32((uint32_t)(ESI));
  /* 11e54337 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 11e5433e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11e54340 call 0x11e4c670 */
  push32(0x11e54345u); f_11e4c670();
  /* 11e54345 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e54348 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11e5434f jmp 0x11e5435a */
  goto L_11e5435a;
L_11e54351:;
  /* 11e54351 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e54354 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e54357 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11e5435a:;
  /* 11e5435a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5435e jge 0x11e54500 */
  if ((C.sf==C.of)) goto L_11e54500;
  /* 11e54364 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e54367 cmp dword ptr [ecx*4 + 0x11e782c0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11e782c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5436f je 0x11e54466 */
  if (C.zf) goto L_11e54466;
  /* 11e54375 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e54378 mov eax, dword ptr [edx*4 + 0x11e782c0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11e782c0)));
  /* 11e5437f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e54382 jmp 0x11e5438d */
  goto L_11e5438d;
L_11e54384:;
  /* 11e54384 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e54387 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5438a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11e5438d:;
  /* 11e5438d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e54390 mov eax, dword ptr [edx*4 + 0x11e782c0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11e782c0)));
  /* 11e54397 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5439c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5439f jae 0x11e54456 */
  if (!C.cf) goto L_11e54456;
  /* 11e543a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e543a8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11e543ac and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11e543af test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e543b1 jne 0x11e54451 */
  if (!C.zf) goto L_11e54451;
  /* 11e543b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e543ba cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e543be jne 0x11e543f9 */
  if (!C.zf) goto L_11e543f9;
  /* 11e543c0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11e543c2 call 0x11e4c670 */
  push32(0x11e543c7u); f_11e4c670();
  /* 11e543c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e543ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e543cd cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e543d1 jne 0x11e543ef */
  if (!C.zf) goto L_11e543ef;
  /* 11e543d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e543d6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e543d9 push edx */
  push32((uint32_t)(EDX));
  /* 11e543da call dword ptr [0x11e7935c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e7935c))), 0x11e543e0u);
  /* 11e543e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e543e3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11e543e6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e543e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e543ec mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_11e543ef:;
  /* 11e543ef push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11e543f1 call 0x11e4c710 */
  push32(0x11e543f6u); f_11e4c710();
  /* 11e543f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e543f9:;
  /* 11e543f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e543fc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e543ff push eax */
  push32((uint32_t)(EAX));
  /* 11e54400 call dword ptr [0x11e7934c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e7934c))), 0x11e54406u);
  /* 11e54406 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e54409 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11e5440d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11e54410 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e54412 je 0x11e54426 */
  if (C.zf) goto L_11e54426;
  /* 11e54414 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e54417 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5441a push eax */
  push32((uint32_t)(EAX));
  /* 11e5441b call dword ptr [0x11e79348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e79348))), 0x11e54421u);
  /* 11e54421 jmp 0x11e54384 */
  goto L_11e54384;
L_11e54426:;
  /* 11e54426 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e54429 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11e5442f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e54432 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11e54435 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e54438 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e5443b sub eax, dword ptr [edx*4 + 0x11e782c0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x11e782c0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e54442 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11e54443 mov esi, 0x24 */
  ESI = (0x24u);
  /* 11e54448 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11e5444a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5444c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e5444f jmp 0x11e54456 */
  goto L_11e54456;
L_11e54451:;
  /* 11e54451 jmp 0x11e54384 */
  goto L_11e54384;
L_11e54456:;
  /* 11e54456 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5445a je 0x11e54461 */
  if (C.zf) goto L_11e54461;
  /* 11e5445c jmp 0x11e54500 */
  goto L_11e54500;
L_11e54461:;
  /* 11e54461 jmp 0x11e544fb */
  goto L_11e544fb;
L_11e54466:;
  /* 11e54466 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 11e54468 push 0x11e72084 */
  push32((uint32_t)(0x11e72084u));
  /* 11e5446d push 2 */
  push32((uint32_t)(0x2u));
  /* 11e5446f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11e54474 call 0x11e49a50 */
  push32(0x11e54479u); f_11e49a50();
  /* 11e54479 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5447c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e5447f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e54483 je 0x11e544f9 */
  if (C.zf) goto L_11e544f9;
  /* 11e54485 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e54488 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e5448b mov dword ptr [eax*4 + 0x11e782c0], ecx */
  w32((uint32_t)(EAX*4 + 0x11e782c0), (ECX));
  /* 11e54492 mov edx, dword ptr [0x11e783fc] */
  EDX = (r32((uint32_t)(0x11e783fc)));
  /* 11e54498 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5449b mov dword ptr [0x11e783fc], edx */
  w32((uint32_t)(0x11e783fc), (EDX));
  /* 11e544a1 jmp 0x11e544ac */
  goto L_11e544ac;
L_11e544a3:;
  /* 11e544a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e544a6 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e544a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11e544ac:;
  /* 11e544ac mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e544af mov edx, dword ptr [ecx*4 + 0x11e782c0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11e782c0)));
  /* 11e544b6 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e544bc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e544bf jae 0x11e544e4 */
  if (!C.cf) goto L_11e544e4;
  /* 11e544c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e544c4 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11e544c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e544cb mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11e544d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e544d4 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11e544d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e544db mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11e544e2 jmp 0x11e544a3 */
  goto L_11e544a3;
L_11e544e4:;
  /* 11e544e4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e544e7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11e544ea mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e544ed mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e544f0 push edx */
  push32((uint32_t)(EDX));
  /* 11e544f1 call 0x11e54840 */
  push32(0x11e544f6u); f_11e54840();
  /* 11e544f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e544f9:;
  /* 11e544f9 jmp 0x11e54500 */
  goto L_11e54500;
L_11e544fb:;
  /* 11e544fb jmp 0x11e54351 */
  goto L_11e54351;
L_11e54500:;
  /* 11e54500 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11e54502 call 0x11e4c710 */
  push32(0x11e54507u); f_11e4c710();
  /* 11e54507 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5450a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e5450d pop esi */
  ESI = (pop32());
  /* 11e5450e mov esp, ebp */
  ESP = (EBP);
  /* 11e54510 pop ebp */
  EBP = (pop32());
  /* 11e54511 ret  */
  ESPCHK(0x11e54330u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x11e54520 (183 bytes, 57 insns) */
void f_11e54520(void) {
  FTRACE(0x11e54520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e54520 push ebp */
  push32((uint32_t)(EBP));
  /* 11e54521 mov ebp, esp */
  EBP = (ESP);
  /* 11e54523 push ecx */
  push32((uint32_t)(ECX));
  /* 11e54524 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e54527 cmp eax, dword ptr [0x11e783fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11e783fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5452d jae 0x11e545ba */
  if (!C.cf) goto L_11e545ba;
  /* 11e54533 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e54536 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11e54539 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5453c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11e5453f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e54542 mov eax, dword ptr [ecx*4 + 0x11e782c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11e782c0)));
  /* 11e54549 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5454d jne 0x11e545ba */
  if (!C.zf) goto L_11e545ba;
  /* 11e5454f cmp dword ptr [0x11e768e8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e768e8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e54556 jne 0x11e5459a */
  if (!C.zf) goto L_11e5459a;
  /* 11e54558 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5455b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e5455e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e54562 je 0x11e54572 */
  if (C.zf) goto L_11e54572;
  /* 11e54564 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e54568 je 0x11e54580 */
  if (C.zf) goto L_11e54580;
  /* 11e5456a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5456e je 0x11e5458e */
  if (C.zf) goto L_11e5458e;
  /* 11e54570 jmp 0x11e5459a */
  goto L_11e5459a;
L_11e54572:;
  /* 11e54572 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e54575 push edx */
  push32((uint32_t)(EDX));
  /* 11e54576 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11e54578 call dword ptr [0x11e792f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e792f8))), 0x11e5457eu);
  /* 11e5457e jmp 0x11e5459a */
  goto L_11e5459a;
L_11e54580:;
  /* 11e54580 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e54583 push eax */
  push32((uint32_t)(EAX));
  /* 11e54584 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11e54586 call dword ptr [0x11e792f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e792f8))), 0x11e5458cu);
  /* 11e5458c jmp 0x11e5459a */
  goto L_11e5459a;
L_11e5458e:;
  /* 11e5458e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e54591 push ecx */
  push32((uint32_t)(ECX));
  /* 11e54592 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11e54594 call dword ptr [0x11e792f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e792f8))), 0x11e5459au);
L_11e5459a:;
  /* 11e5459a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5459d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11e545a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e545a3 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11e545a6 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e545a9 mov ecx, dword ptr [edx*4 + 0x11e782c0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11e782c0)));
  /* 11e545b0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e545b3 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 11e545b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e545b8 jmp 0x11e545d3 */
  goto L_11e545d3;
L_11e545ba:;
  /* 11e545ba call 0x11e52640 */
  push32(0x11e545bfu); f_11e52640();
  /* 11e545bf mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11e545c5 call 0x11e52650 */
  push32(0x11e545cau); f_11e52650();
  /* 11e545ca mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11e545d0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11e545d3:;
  /* 11e545d3 mov esp, ebp */
  ESP = (EBP);
  /* 11e545d5 pop ebp */
  EBP = (pop32());
  /* 11e545d6 ret  */
  ESPCHK(0x11e54520u, _esp0);
  ESP += 4; return;
}

/* FUN_100145e0 @ 0x11e545e0 (216 bytes, 63 insns) */
void f_11e545e0(void) {
  FTRACE(0x11e545e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e545e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e545e1 mov ebp, esp */
  EBP = (ESP);
  /* 11e545e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e545e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e545e7 cmp eax, dword ptr [0x11e783fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11e783fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e545ed jae 0x11e5469b */
  if (!C.cf) goto L_11e5469b;
  /* 11e545f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e545f6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11e545f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e545fc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11e545ff imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e54602 mov eax, dword ptr [ecx*4 + 0x11e782c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11e782c0)));
  /* 11e54609 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11e5460e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11e54611 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e54613 je 0x11e5469b */
  if (C.zf) goto L_11e5469b;
  /* 11e54619 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5461c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11e5461f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e54622 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11e54625 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e54628 mov ecx, dword ptr [edx*4 + 0x11e782c0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11e782c0)));
  /* 11e5462f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e54633 je 0x11e5469b */
  if (C.zf) goto L_11e5469b;
  /* 11e54635 cmp dword ptr [0x11e768e8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e768e8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5463c jne 0x11e5467a */
  if (!C.zf) goto L_11e5467a;
  /* 11e5463e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e54641 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e54644 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e54648 je 0x11e54658 */
  if (C.zf) goto L_11e54658;
  /* 11e5464a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5464e je 0x11e54664 */
  if (C.zf) goto L_11e54664;
  /* 11e54650 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e54654 je 0x11e54670 */
  if (C.zf) goto L_11e54670;
  /* 11e54656 jmp 0x11e5467a */
  goto L_11e5467a;
L_11e54658:;
  /* 11e54658 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e5465a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11e5465c call dword ptr [0x11e792f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e792f8))), 0x11e54662u);
  /* 11e54662 jmp 0x11e5467a */
  goto L_11e5467a;
L_11e54664:;
  /* 11e54664 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e54666 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11e54668 call dword ptr [0x11e792f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e792f8))), 0x11e5466eu);
  /* 11e5466e jmp 0x11e5467a */
  goto L_11e5467a;
L_11e54670:;
  /* 11e54670 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e54672 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11e54674 call dword ptr [0x11e792f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e792f8))), 0x11e5467au);
L_11e5467a:;
  /* 11e5467a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5467d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11e54680 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e54683 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11e54686 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e54689 mov edx, dword ptr [eax*4 + 0x11e782c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11e782c0)));
  /* 11e54690 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 11e54697 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e54699 jmp 0x11e546b4 */
  goto L_11e546b4;
L_11e5469b:;
  /* 11e5469b call 0x11e52640 */
  push32(0x11e546a0u); f_11e52640();
  /* 11e546a0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11e546a6 call 0x11e52650 */
  push32(0x11e546abu); f_11e52650();
  /* 11e546ab mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11e546b1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11e546b4:;
  /* 11e546b4 mov esp, ebp */
  ESP = (EBP);
  /* 11e546b6 pop ebp */
  EBP = (pop32());
  /* 11e546b7 ret  */
  ESPCHK(0x11e545e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100146c0 @ 0x11e546c0 (102 bytes, 30 insns) */
void f_11e546c0(void) {
  FTRACE(0x11e546c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e546c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e546c1 mov ebp, esp */
  EBP = (ESP);
  /* 11e546c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e546c6 cmp eax, dword ptr [0x11e783fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11e783fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e546cc jae 0x11e5470b */
  if (!C.cf) goto L_11e5470b;
  /* 11e546ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e546d1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11e546d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e546d7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11e546da imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e546dd mov eax, dword ptr [ecx*4 + 0x11e782c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11e782c0)));
  /* 11e546e4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11e546e9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11e546ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e546ee je 0x11e5470b */
  if (C.zf) goto L_11e5470b;
  /* 11e546f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e546f3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11e546f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e546f9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11e546fc imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e546ff mov ecx, dword ptr [edx*4 + 0x11e782c0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11e782c0)));
  /* 11e54706 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 11e54709 jmp 0x11e54724 */
  goto L_11e54724;
L_11e5470b:;
  /* 11e5470b call 0x11e52640 */
  push32(0x11e54710u); f_11e52640();
  /* 11e54710 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11e54716 call 0x11e52650 */
  push32(0x11e5471bu); f_11e52650();
  /* 11e5471b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11e54721 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11e54724:;
  /* 11e54724 pop ebp */
  EBP = (pop32());
  /* 11e54725 ret  */
  ESPCHK(0x11e546c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014730 @ 0x11e54730 (260 bytes, 83 insns) */
void f_11e54730(void) {
  FTRACE(0x11e54730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e54730 push ebp */
  push32((uint32_t)(EBP));
  /* 11e54731 mov ebp, esp */
  EBP = (ESP);
  /* 11e54733 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e54736 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 11e5473a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e5473d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11e54740 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e54742 je 0x11e5474d */
  if (C.zf) goto L_11e5474d;
  /* 11e54744 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 11e54747 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11e5474a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_11e5474d:;
  /* 11e5474d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e54750 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 11e54756 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e54758 je 0x11e54762 */
  if (C.zf) goto L_11e54762;
  /* 11e5475a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11e5475d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 11e5475f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_11e54762:;
  /* 11e54762 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e54765 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 11e5476b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e5476d je 0x11e54778 */
  if (C.zf) goto L_11e54778;
  /* 11e5476f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11e54772 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 11e54775 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_11e54778:;
  /* 11e54778 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5477b push eax */
  push32((uint32_t)(EAX));
  /* 11e5477c call dword ptr [0x11e793e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e793e4))), 0x11e54782u);
  /* 11e54782 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e54785 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e54789 jne 0x11e547a2 */
  if (!C.zf) goto L_11e547a2;
  /* 11e5478b call dword ptr [0x11e793ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e793ac))), 0x11e54791u);
  /* 11e54791 push eax */
  push32((uint32_t)(EAX));
  /* 11e54792 call 0x11e525a0 */
  push32(0x11e54797u); f_11e525a0();
  /* 11e54797 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5479a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e5479d jmp 0x11e54830 */
  goto L_11e54830;
L_11e547a2:;
  /* 11e547a2 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e547a6 jne 0x11e547b3 */
  if (!C.zf) goto L_11e547b3;
  /* 11e547a8 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 11e547ab or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 11e547ae mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 11e547b1 jmp 0x11e547c2 */
  goto L_11e547c2;
L_11e547b3:;
  /* 11e547b3 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e547b7 jne 0x11e547c2 */
  if (!C.zf) goto L_11e547c2;
  /* 11e547b9 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11e547bc or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 11e547bf mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_11e547c2:;
  /* 11e547c2 call 0x11e54330 */
  push32(0x11e547c7u); f_11e54330();
  /* 11e547c7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e547ca cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e547ce jne 0x11e547eb */
  if (!C.zf) goto L_11e547eb;
  /* 11e547d0 call 0x11e52640 */
  push32(0x11e547d5u); f_11e52640();
  /* 11e547d5 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 11e547db call 0x11e52650 */
  push32(0x11e547e0u); f_11e52650();
  /* 11e547e0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11e547e6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e547e9 jmp 0x11e54830 */
  goto L_11e54830;
L_11e547eb:;
  /* 11e547eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e547ee push eax */
  push32((uint32_t)(EAX));
  /* 11e547ef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e547f2 push ecx */
  push32((uint32_t)(ECX));
  /* 11e547f3 call 0x11e54520 */
  push32(0x11e547f8u); f_11e54520();
  /* 11e547f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e547fb mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11e547fe or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 11e54801 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 11e54804 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e54807 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11e5480a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e5480d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11e54810 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e54813 mov edx, dword ptr [eax*4 + 0x11e782c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11e782c0)));
  /* 11e5481a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11e5481d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 11e54821 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e54824 push ecx */
  push32((uint32_t)(ECX));
  /* 11e54825 call 0x11e548d0 */
  push32(0x11e5482au); f_11e548d0();
  /* 11e5482a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5482d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11e54830:;
  /* 11e54830 mov esp, ebp */
  ESP = (EBP);
  /* 11e54832 pop ebp */
  EBP = (pop32());
  /* 11e54833 ret  */
  ESPCHK(0x11e54730u, _esp0);
  ESP += 4; return;
}

/* FUN_10014840 @ 0x11e54840 (134 bytes, 44 insns) */
void f_11e54840(void) {
  FTRACE(0x11e54840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e54840 push ebp */
  push32((uint32_t)(EBP));
  /* 11e54841 mov ebp, esp */
  EBP = (ESP);
  /* 11e54843 push ecx */
  push32((uint32_t)(ECX));
  /* 11e54844 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e54847 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11e5484a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5484d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11e54850 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e54853 mov edx, dword ptr [eax*4 + 0x11e782c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11e782c0)));
  /* 11e5485a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5485c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e5485f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e54862 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e54866 jne 0x11e548a1 */
  if (!C.zf) goto L_11e548a1;
  /* 11e54868 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11e5486a call 0x11e4c670 */
  push32(0x11e5486fu); f_11e4c670();
  /* 11e5486f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e54872 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e54875 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e54879 jne 0x11e54897 */
  if (!C.zf) goto L_11e54897;
  /* 11e5487b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e5487e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e54881 push edx */
  push32((uint32_t)(EDX));
  /* 11e54882 call dword ptr [0x11e7935c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e7935c))), 0x11e54888u);
  /* 11e54888 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e5488b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11e5488e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e54891 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e54894 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_11e54897:;
  /* 11e54897 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11e54899 call 0x11e4c710 */
  push32(0x11e5489eu); f_11e4c710();
  /* 11e5489e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e548a1:;
  /* 11e548a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e548a4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11e548a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e548aa and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11e548ad imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e548b0 mov edx, dword ptr [eax*4 + 0x11e782c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11e782c0)));
  /* 11e548b7 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 11e548bb push eax */
  push32((uint32_t)(EAX));
  /* 11e548bc call dword ptr [0x11e7934c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e7934c))), 0x11e548c2u);
  /* 11e548c2 mov esp, ebp */
  ESP = (EBP);
  /* 11e548c4 pop ebp */
  EBP = (pop32());
  /* 11e548c5 ret  */
  ESPCHK(0x11e54840u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x11e548d0 (38 bytes, 13 insns) */
void f_11e548d0(void) {
  FTRACE(0x11e548d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e548d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e548d1 mov ebp, esp */
  EBP = (ESP);
  /* 11e548d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e548d6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11e548d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e548dc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11e548df imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e548e2 mov edx, dword ptr [eax*4 + 0x11e782c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11e782c0)));
  /* 11e548e9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 11e548ed push eax */
  push32((uint32_t)(EAX));
  /* 11e548ee call dword ptr [0x11e79348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e79348))), 0x11e548f4u);
  /* 11e548f4 pop ebp */
  EBP = (pop32());
  /* 11e548f5 ret  */
  ESPCHK(0x11e548d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014900 @ 0x11e54900 (218 bytes, 63 insns) */
void f_11e54900(void) {
  FTRACE(0x11e54900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e54900 push ebp */
  push32((uint32_t)(EBP));
  /* 11e54901 mov ebp, esp */
  EBP = (ESP);
  /* 11e54903 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e54906 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e5490d push 2 */
  push32((uint32_t)(0x2u));
  /* 11e5490f call 0x11e4c670 */
  push32(0x11e54914u); f_11e4c670();
  /* 11e54914 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e54917 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 11e5491e jmp 0x11e54929 */
  goto L_11e54929;
L_11e54920:;
  /* 11e54920 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e54923 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e54926 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11e54929:;
  /* 11e54929 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e5492c cmp ecx, dword ptr [0x11e77fc0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11e77fc0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e54932 jge 0x11e549c9 */
  if ((C.sf==C.of)) goto L_11e549c9;
  /* 11e54938 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e5493b mov eax, dword ptr [0x11e76c80] */
  EAX = (r32((uint32_t)(0x11e76c80)));
  /* 11e54940 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e54944 je 0x11e549c4 */
  if (C.zf) goto L_11e549c4;
  /* 11e54946 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e54949 mov edx, dword ptr [0x11e76c80] */
  EDX = (r32((uint32_t)(0x11e76c80)));
  /* 11e5494f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11e54952 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11e54955 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 11e5495b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e5495d je 0x11e54981 */
  if (C.zf) goto L_11e54981;
  /* 11e5495f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e54962 mov eax, dword ptr [0x11e76c80] */
  EAX = (r32((uint32_t)(0x11e76c80)));
  /* 11e54967 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11e5496a push ecx */
  push32((uint32_t)(ECX));
  /* 11e5496b call 0x11e557e0 */
  push32(0x11e54970u); f_11e557e0();
  /* 11e54970 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e54973 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e54976 je 0x11e54981 */
  if (C.zf) goto L_11e54981;
  /* 11e54978 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e5497b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5497e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11e54981:;
  /* 11e54981 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e54985 jl 0x11e549c4 */
  if ((C.sf!=C.of)) goto L_11e549c4;
  /* 11e54987 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e5498a mov ecx, dword ptr [0x11e76c80] */
  ECX = (r32((uint32_t)(0x11e76c80)));
  /* 11e54990 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11e54993 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e54996 push edx */
  push32((uint32_t)(EDX));
  /* 11e54997 call dword ptr [0x11e793ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e793ec))), 0x11e5499du);
  /* 11e5499d push 2 */
  push32((uint32_t)(0x2u));
  /* 11e5499f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e549a2 mov ecx, dword ptr [0x11e76c80] */
  ECX = (r32((uint32_t)(0x11e76c80)));
  /* 11e549a8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11e549ab push edx */
  push32((uint32_t)(EDX));
  /* 11e549ac call 0x11e4a4e0 */
  push32(0x11e549b1u); f_11e4a4e0();
  /* 11e549b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e549b4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e549b7 mov ecx, dword ptr [0x11e76c80] */
  ECX = (r32((uint32_t)(0x11e76c80)));
  /* 11e549bd mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_11e549c4:;
  /* 11e549c4 jmp 0x11e54920 */
  goto L_11e54920;
L_11e549c9:;
  /* 11e549c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e549cb call 0x11e4c710 */
  push32(0x11e549d0u); f_11e4c710();
  /* 11e549d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e549d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e549d6 mov esp, ebp */
  ESP = (EBP);
  /* 11e549d8 pop ebp */
  EBP = (pop32());
  /* 11e549d9 ret  */
  ESPCHK(0x11e54900u, _esp0);
  ESP += 4; return;
}

/* FUN_100149e0 @ 0x11e549e0 (68 bytes, 26 insns) */
void f_11e549e0(void) {
  FTRACE(0x11e549e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e549e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e549e1 mov ebp, esp */
  EBP = (ESP);
  /* 11e549e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e549e4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e549e8 jne 0x11e549f6 */
  if (!C.zf) goto L_11e549f6;
  /* 11e549ea push 0 */
  push32((uint32_t)(0x0u));
  /* 11e549ec call 0x11e54b50 */
  push32(0x11e549f1u); f_11e54b50();
  /* 11e549f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e549f4 jmp 0x11e54a20 */
  goto L_11e54a20;
L_11e549f6:;
  /* 11e549f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e549f9 push eax */
  push32((uint32_t)(EAX));
  /* 11e549fa call 0x11e536c0 */
  push32(0x11e549ffu); f_11e536c0();
  /* 11e549ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e54a02 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e54a05 push ecx */
  push32((uint32_t)(ECX));
  /* 11e54a06 call 0x11e54a30 */
  push32(0x11e54a0bu); f_11e54a30();
  /* 11e54a0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e54a0e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e54a11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e54a14 push edx */
  push32((uint32_t)(EDX));
  /* 11e54a15 call 0x11e53730 */
  push32(0x11e54a1au); f_11e53730();
  /* 11e54a1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e54a1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11e54a20:;
  /* 11e54a20 mov esp, ebp */
  ESP = (EBP);
  /* 11e54a22 pop ebp */
  EBP = (pop32());
  /* 11e54a23 ret  */
  ESPCHK(0x11e549e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014a30 @ 0x11e54a30 (65 bytes, 26 insns) */
void f_11e54a30(void) {
  FTRACE(0x11e54a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e54a30 push ebp */
  push32((uint32_t)(EBP));
  /* 11e54a31 mov ebp, esp */
  EBP = (ESP);
  /* 11e54a33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e54a36 push eax */
  push32((uint32_t)(EAX));
  /* 11e54a37 call 0x11e54a80 */
  push32(0x11e54a3cu); f_11e54a80();
  /* 11e54a3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e54a3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e54a41 je 0x11e54a48 */
  if (C.zf) goto L_11e54a48;
  /* 11e54a43 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e54a46 jmp 0x11e54a6f */
  goto L_11e54a6f;
L_11e54a48:;
  /* 11e54a48 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e54a4b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11e54a4e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 11e54a54 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e54a56 je 0x11e54a6d */
  if (C.zf) goto L_11e54a6d;
  /* 11e54a58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e54a5b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11e54a5e push ecx */
  push32((uint32_t)(ECX));
  /* 11e54a5f call 0x11e55930 */
  push32(0x11e54a64u); f_11e55930();
  /* 11e54a64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e54a67 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e54a69 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e54a6b jmp 0x11e54a6f */
  goto L_11e54a6f;
L_11e54a6d:;
  /* 11e54a6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e54a6f:;
  /* 11e54a6f pop ebp */
  EBP = (pop32());
  /* 11e54a70 ret  */
  ESPCHK(0x11e54a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10014a80 @ 0x11e54a80 (183 bytes, 62 insns) */
void f_11e54a80(void) {
  FTRACE(0x11e54a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e54a80 push ebp */
  push32((uint32_t)(EBP));
  /* 11e54a81 mov ebp, esp */
  EBP = (ESP);
  /* 11e54a83 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e54a86 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e54a8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e54a90 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e54a93 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e54a96 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11e54a99 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11e54a9c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e54a9f jne 0x11e54b1b */
  if (!C.zf) goto L_11e54b1b;
  /* 11e54aa1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e54aa4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11e54aa7 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 11e54aad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e54aaf je 0x11e54b1b */
  if (C.zf) goto L_11e54b1b;
  /* 11e54ab1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e54ab4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e54ab7 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11e54ab9 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e54abc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e54abf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e54ac3 jle 0x11e54b1b */
  if ((C.zf||C.sf!=C.of)) goto L_11e54b1b;
  /* 11e54ac5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e54ac8 push edx */
  push32((uint32_t)(EDX));
  /* 11e54ac9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e54acc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11e54acf push ecx */
  push32((uint32_t)(ECX));
  /* 11e54ad0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e54ad3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11e54ad6 push eax */
  push32((uint32_t)(EAX));
  /* 11e54ad7 call 0x11e53150 */
  push32(0x11e54adcu); f_11e53150();
  /* 11e54adc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e54adf cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e54ae2 jne 0x11e54b05 */
  if (!C.zf) goto L_11e54b05;
  /* 11e54ae4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e54ae7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11e54aea and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 11e54af0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e54af2 je 0x11e54b03 */
  if (C.zf) goto L_11e54b03;
  /* 11e54af4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e54af7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11e54afa and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 11e54afd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e54b00 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_11e54b03:;
  /* 11e54b03 jmp 0x11e54b1b */
  goto L_11e54b1b;
L_11e54b05:;
  /* 11e54b05 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e54b08 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11e54b0b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11e54b0e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e54b11 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 11e54b14 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11e54b1b:;
  /* 11e54b1b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e54b1e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e54b21 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11e54b24 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11e54b26 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e54b29 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11e54b30 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e54b33 mov esp, ebp */
  ESP = (EBP);
  /* 11e54b35 pop ebp */
  EBP = (pop32());
  /* 11e54b36 ret  */
  ESPCHK(0x11e54a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10014b40 @ 0x11e54b40 (15 bytes, 7 insns) */
void f_11e54b40(void) {
  FTRACE(0x11e54b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e54b40 push ebp */
  push32((uint32_t)(EBP));
  /* 11e54b41 mov ebp, esp */
  EBP = (ESP);
  /* 11e54b43 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e54b45 call 0x11e54b50 */
  push32(0x11e54b4au); f_11e54b50();
  /* 11e54b4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e54b4d pop ebp */
  EBP = (pop32());
  /* 11e54b4e ret  */
  ESPCHK(0x11e54b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10014b50 @ 0x11e54b50 (319 bytes, 94 insns) */
void f_11e54b50(void) {
  FTRACE(0x11e54b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e54b50 push ebp */
  push32((uint32_t)(EBP));
  /* 11e54b51 mov ebp, esp */
  EBP = (ESP);
  /* 11e54b53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e54b56 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e54b5d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11e54b64 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e54b66 call 0x11e4c670 */
  push32(0x11e54b6bu); f_11e4c670();
  /* 11e54b6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e54b6e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11e54b75 jmp 0x11e54b80 */
  goto L_11e54b80;
L_11e54b77:;
  /* 11e54b77 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e54b7a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e54b7d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11e54b80:;
  /* 11e54b80 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e54b83 cmp ecx, dword ptr [0x11e77fc0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11e77fc0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e54b89 jge 0x11e54c73 */
  if ((C.sf==C.of)) goto L_11e54c73;
  /* 11e54b8f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e54b92 mov eax, dword ptr [0x11e76c80] */
  EAX = (r32((uint32_t)(0x11e76c80)));
  /* 11e54b97 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e54b9b je 0x11e54c6e */
  if (C.zf) goto L_11e54c6e;
  /* 11e54ba1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e54ba4 mov edx, dword ptr [0x11e76c80] */
  EDX = (r32((uint32_t)(0x11e76c80)));
  /* 11e54baa mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11e54bad mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11e54bb0 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 11e54bb6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e54bb8 je 0x11e54c6e */
  if (C.zf) goto L_11e54c6e;
  /* 11e54bbe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e54bc1 mov eax, dword ptr [0x11e76c80] */
  EAX = (r32((uint32_t)(0x11e76c80)));
  /* 11e54bc6 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11e54bc9 push ecx */
  push32((uint32_t)(ECX));
  /* 11e54bca mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e54bcd push edx */
  push32((uint32_t)(EDX));
  /* 11e54bce call 0x11e53700 */
  push32(0x11e54bd3u); f_11e53700();
  /* 11e54bd3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e54bd6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e54bd9 mov ecx, dword ptr [0x11e76c80] */
  ECX = (r32((uint32_t)(0x11e76c80)));
  /* 11e54bdf mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11e54be2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11e54be5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 11e54bea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e54bec je 0x11e54c55 */
  if (C.zf) goto L_11e54c55;
  /* 11e54bee cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e54bf2 jne 0x11e54c19 */
  if (!C.zf) goto L_11e54c19;
  /* 11e54bf4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e54bf7 mov edx, dword ptr [0x11e76c80] */
  EDX = (r32((uint32_t)(0x11e76c80)));
  /* 11e54bfd mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11e54c00 push eax */
  push32((uint32_t)(EAX));
  /* 11e54c01 call 0x11e54a30 */
  push32(0x11e54c06u); f_11e54a30();
  /* 11e54c06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e54c09 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e54c0c je 0x11e54c17 */
  if (C.zf) goto L_11e54c17;
  /* 11e54c0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e54c11 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e54c14 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11e54c17:;
  /* 11e54c17 jmp 0x11e54c55 */
  goto L_11e54c55;
L_11e54c19:;
  /* 11e54c19 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e54c1d jne 0x11e54c55 */
  if (!C.zf) goto L_11e54c55;
  /* 11e54c1f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e54c22 mov eax, dword ptr [0x11e76c80] */
  EAX = (r32((uint32_t)(0x11e76c80)));
  /* 11e54c27 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11e54c2a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11e54c2d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11e54c30 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e54c32 je 0x11e54c55 */
  if (C.zf) goto L_11e54c55;
  /* 11e54c34 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e54c37 mov ecx, dword ptr [0x11e76c80] */
  ECX = (r32((uint32_t)(0x11e76c80)));
  /* 11e54c3d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11e54c40 push edx */
  push32((uint32_t)(EDX));
  /* 11e54c41 call 0x11e54a30 */
  push32(0x11e54c46u); f_11e54a30();
  /* 11e54c46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e54c49 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e54c4c jne 0x11e54c55 */
  if (!C.zf) goto L_11e54c55;
  /* 11e54c4e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_11e54c55:;
  /* 11e54c55 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e54c58 mov ecx, dword ptr [0x11e76c80] */
  ECX = (r32((uint32_t)(0x11e76c80)));
  /* 11e54c5e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11e54c61 push edx */
  push32((uint32_t)(EDX));
  /* 11e54c62 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e54c65 push eax */
  push32((uint32_t)(EAX));
  /* 11e54c66 call 0x11e53770 */
  push32(0x11e54c6bu); f_11e53770();
  /* 11e54c6b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e54c6e:;
  /* 11e54c6e jmp 0x11e54b77 */
  goto L_11e54b77;
L_11e54c73:;
  /* 11e54c73 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e54c75 call 0x11e4c710 */
  push32(0x11e54c7au); f_11e4c710();
  /* 11e54c7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e54c7d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e54c81 jne 0x11e54c88 */
  if (!C.zf) goto L_11e54c88;
  /* 11e54c83 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e54c86 jmp 0x11e54c8b */
  goto L_11e54c8b;
L_11e54c88:;
  /* 11e54c88 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11e54c8b:;
  /* 11e54c8b mov esp, ebp */
  ESP = (EBP);
  /* 11e54c8d pop ebp */
  EBP = (pop32());
  /* 11e54c8e ret  */
  ESPCHK(0x11e54b50u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x11e54c90 (15 bytes, 7 insns) */
void f_11e54c90(void) {
  FTRACE(0x11e54c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e54c90 push ebp */
  push32((uint32_t)(EBP));
  /* 11e54c91 mov ebp, esp */
  EBP = (ESP);
  /* 11e54c93 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e54c95 call 0x11e488d0 */
  push32(0x11e54c9au); f_11e488d0();
  /* 11e54c9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e54c9d pop ebp */
  EBP = (pop32());
  /* 11e54c9e ret  */
  ESPCHK(0x11e54c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10014ca0 @ 0x11e54ca0 (1007 bytes, 269 insns) */
void f_11e54ca0(void) {
  FTRACE(0x11e54ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e54ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e54ca1 mov ebp, esp */
  EBP = (ESP);
  /* 11e54ca3 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e54ca9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e54cad jl 0x11e54cb5 */
  if ((C.sf!=C.of)) goto L_11e54cb5;
  /* 11e54caf cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e54cb3 jle 0x11e54cbc */
  if ((C.zf||C.sf!=C.of)) goto L_11e54cbc;
L_11e54cb5:;
  /* 11e54cb5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e54cb7 jmp 0x11e5508b */
  goto L_11e5508b;
L_11e54cbc:;
  /* 11e54cbc push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11e54cbe call 0x11e4c670 */
  push32(0x11e54cc3u); f_11e4c670();
  /* 11e54cc3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e54cc6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11e54ccd mov eax, dword ptr [0x11e76c6c] */
  EAX = (r32((uint32_t)(0x11e76c6c)));
  /* 11e54cd2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e54cd5 mov dword ptr [0x11e76c6c], eax */
  w32((uint32_t)(0x11e76c6c), (EAX));
L_11e54cda:;
  /* 11e54cda cmp dword ptr [0x11e76c7c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e76c7c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e54ce1 je 0x11e54ced */
  if (C.zf) goto L_11e54ced;
  /* 11e54ce3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e54ce5 call dword ptr [0x11e792f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e792f4))), 0x11e54cebu);
  /* 11e54ceb jmp 0x11e54cda */
  goto L_11e54cda;
L_11e54ced:;
  /* 11e54ced cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e54cf1 je 0x11e54d31 */
  if (C.zf) goto L_11e54d31;
  /* 11e54cf3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e54cf7 je 0x11e54d11 */
  if (C.zf) goto L_11e54d11;
  /* 11e54cf9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e54cfc push ecx */
  push32((uint32_t)(ECX));
  /* 11e54cfd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e54d00 push edx */
  push32((uint32_t)(EDX));
  /* 11e54d01 call 0x11e55090 */
  push32(0x11e54d06u); f_11e55090();
  /* 11e54d06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e54d09 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 11e54d0f jmp 0x11e54d23 */
  goto L_11e54d23;
L_11e54d11:;
  /* 11e54d11 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e54d14 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e54d17 mov ecx, dword ptr [eax + 0x11e755fc] */
  ECX = (r32((uint32_t)(EAX + 0x11e755fc)));
  /* 11e54d1d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_11e54d23:;
  /* 11e54d23 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 11e54d29 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11e54d2c jmp 0x11e5506b */
  goto L_11e5506b;
L_11e54d31:;
  /* 11e54d31 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 11e54d38 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11e54d3f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e54d43 je 0x11e55063 */
  if (C.zf) goto L_11e55063;
  /* 11e54d49 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e54d4c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e54d4f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e54d52 jne 0x11e54f74 */
  if (!C.zf) goto L_11e54f74;
  /* 11e54d58 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e54d5b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11e54d5f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e54d62 jne 0x11e54f74 */
  if (!C.zf) goto L_11e54f74;
  /* 11e54d68 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e54d6b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 11e54d6f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e54d72 jne 0x11e54f74 */
  if (!C.zf) goto L_11e54f74;
  /* 11e54d78 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e54d7b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_11e54d81:;
  /* 11e54d81 push 0x11e720d4 */
  push32((uint32_t)(0x11e720d4u));
  /* 11e54d86 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11e54d8c push ecx */
  push32((uint32_t)(ECX));
  /* 11e54d8d call 0x11e56f50 */
  push32(0x11e54d92u); f_11e56f50();
  /* 11e54d92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e54d95 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 11e54d9b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e54da2 je 0x11e54dcd */
  if (C.zf) goto L_11e54dcd;
  /* 11e54da4 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11e54daa sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e54db0 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 11e54db6 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e54dbd je 0x11e54dcd */
  if (C.zf) goto L_11e54dcd;
  /* 11e54dbf mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11e54dc5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e54dc8 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e54dcb jne 0x11e54df3 */
  if (!C.zf) goto L_11e54df3;
L_11e54dcd:;
  /* 11e54dcd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e54dd1 je 0x11e54dec */
  if (C.zf) goto L_11e54dec;
  /* 11e54dd3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11e54dd5 call 0x11e4c710 */
  push32(0x11e54ddau); f_11e4c710();
  /* 11e54dda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e54ddd mov edx, dword ptr [0x11e76c6c] */
  EDX = (r32((uint32_t)(0x11e76c6c)));
  /* 11e54de3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e54de6 mov dword ptr [0x11e76c6c], edx */
  w32((uint32_t)(0x11e76c6c), (EDX));
L_11e54dec:;
  /* 11e54dec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e54dee jmp 0x11e5508b */
  goto L_11e5508b;
L_11e54df3:;
  /* 11e54df3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11e54dfa jmp 0x11e54e05 */
  goto L_11e54e05;
L_11e54dfc:;
  /* 11e54dfc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e54dff add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e54e02 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11e54e05:;
  /* 11e54e05 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e54e09 jg 0x11e54e53 */
  if ((!C.zf&&C.sf==C.of)) goto L_11e54e53;
  /* 11e54e0b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11e54e11 push ecx */
  push32((uint32_t)(ECX));
  /* 11e54e12 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11e54e18 push edx */
  push32((uint32_t)(EDX));
  /* 11e54e19 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e54e1c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e54e1f mov ecx, dword ptr [eax + 0x11e755f8] */
  ECX = (r32((uint32_t)(EAX + 0x11e755f8)));
  /* 11e54e25 push ecx */
  push32((uint32_t)(ECX));
  /* 11e54e26 call 0x11e56f10 */
  push32(0x11e54e2bu); f_11e56f10();
  /* 11e54e2b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e54e2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e54e30 jne 0x11e54e51 */
  if (!C.zf) goto L_11e54e51;
  /* 11e54e32 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e54e35 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e54e38 mov eax, dword ptr [edx + 0x11e755f8] */
  EAX = (r32((uint32_t)(EDX + 0x11e755f8)));
  /* 11e54e3e push eax */
  push32((uint32_t)(EAX));
  /* 11e54e3f call 0x11e4d5a0 */
  push32(0x11e54e44u); f_11e4d5a0();
  /* 11e54e44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e54e47 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e54e4d jne 0x11e54e51 */
  if (!C.zf) goto L_11e54e51;
  /* 11e54e4f jmp 0x11e54e53 */
  goto L_11e54e53;
L_11e54e51:;
  /* 11e54e51 jmp 0x11e54dfc */
  goto L_11e54dfc;
L_11e54e53:;
  /* 11e54e53 push 0x11e720d0 */
  push32((uint32_t)(0x11e720d0u));
  /* 11e54e58 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11e54e5e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e54e61 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 11e54e67 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11e54e6d push edx */
  push32((uint32_t)(EDX));
  /* 11e54e6e call 0x11e56ed0 */
  push32(0x11e54e73u); f_11e56ed0();
  /* 11e54e73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e54e76 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 11e54e7c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e54e83 jne 0x11e54eb9 */
  if (!C.zf) goto L_11e54eb9;
  /* 11e54e85 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11e54e8b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e54e8e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e54e91 je 0x11e54eb9 */
  if (C.zf) goto L_11e54eb9;
  /* 11e54e93 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e54e97 je 0x11e54eb2 */
  if (C.zf) goto L_11e54eb2;
  /* 11e54e99 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11e54e9b call 0x11e4c710 */
  push32(0x11e54ea0u); f_11e4c710();
  /* 11e54ea0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e54ea3 mov edx, dword ptr [0x11e76c6c] */
  EDX = (r32((uint32_t)(0x11e76c6c)));
  /* 11e54ea9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e54eac mov dword ptr [0x11e76c6c], edx */
  w32((uint32_t)(0x11e76c6c), (EDX));
L_11e54eb2:;
  /* 11e54eb2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e54eb4 jmp 0x11e5508b */
  goto L_11e5508b;
L_11e54eb9:;
  /* 11e54eb9 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e54ebd jg 0x11e54f0a */
  if ((!C.zf&&C.sf==C.of)) goto L_11e54f0a;
  /* 11e54ebf mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11e54ec5 push eax */
  push32((uint32_t)(EAX));
  /* 11e54ec6 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11e54ecc push ecx */
  push32((uint32_t)(ECX));
  /* 11e54ecd lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 11e54ed3 push edx */
  push32((uint32_t)(EDX));
  /* 11e54ed4 call 0x11e4df90 */
  push32(0x11e54ed9u); f_11e4df90();
  /* 11e54ed9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e54edc mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11e54ee2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 11e54eea lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 11e54ef0 push ecx */
  push32((uint32_t)(ECX));
  /* 11e54ef1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e54ef4 push edx */
  push32((uint32_t)(EDX));
  /* 11e54ef5 call 0x11e55090 */
  push32(0x11e54efau); f_11e55090();
  /* 11e54efa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e54efd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e54eff je 0x11e54f0a */
  if (C.zf) goto L_11e54f0a;
  /* 11e54f01 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e54f04 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e54f07 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11e54f0a:;
  /* 11e54f0a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11e54f10 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e54f16 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 11e54f1c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11e54f22 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11e54f25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e54f27 je 0x11e54f38 */
  if (C.zf) goto L_11e54f38;
  /* 11e54f29 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11e54f2f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e54f32 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_11e54f38:;
  /* 11e54f38 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11e54f3e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11e54f41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e54f43 jne 0x11e54d81 */
  if (!C.zf) goto L_11e54d81;
  /* 11e54f49 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e54f4d je 0x11e54f5c */
  if (C.zf) goto L_11e54f5c;
  /* 11e54f4f call 0x11e55230 */
  push32(0x11e54f54u); f_11e55230();
  /* 11e54f54 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 11e54f5a jmp 0x11e54f66 */
  goto L_11e54f66;
L_11e54f5c:;
  /* 11e54f5c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_11e54f66:;
  /* 11e54f66 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 11e54f6c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e54f6f jmp 0x11e55061 */
  goto L_11e55061;
L_11e54f74:;
  /* 11e54f74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e54f77 push edx */
  push32((uint32_t)(EDX));
  /* 11e54f78 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e54f7a push 0 */
  push32((uint32_t)(0x0u));
  /* 11e54f7c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11e54f82 push eax */
  push32((uint32_t)(EAX));
  /* 11e54f83 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e54f86 push ecx */
  push32((uint32_t)(ECX));
  /* 11e54f87 call 0x11e55330 */
  push32(0x11e54f8cu); f_11e55330();
  /* 11e54f8c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e54f8f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e54f92 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e54f96 je 0x11e55061 */
  if (C.zf) goto L_11e55061;
  /* 11e54f9c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11e54fa3 jmp 0x11e54fae */
  goto L_11e54fae;
L_11e54fa5:;
  /* 11e54fa5 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e54fa8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e54fab mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11e54fae:;
  /* 11e54fae cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e54fb2 jg 0x11e55010 */
  if ((!C.zf&&C.sf==C.of)) goto L_11e55010;
  /* 11e54fb4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e54fb8 je 0x11e5500e */
  if (C.zf) goto L_11e5500e;
  /* 11e54fba mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e54fbd imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e54fc0 mov ecx, dword ptr [eax + 0x11e755fc] */
  ECX = (r32((uint32_t)(EAX + 0x11e755fc)));
  /* 11e54fc6 push ecx */
  push32((uint32_t)(ECX));
  /* 11e54fc7 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 11e54fcd push edx */
  push32((uint32_t)(EDX));
  /* 11e54fce call 0x11e51200 */
  push32(0x11e54fd3u); f_11e51200();
  /* 11e54fd3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e54fd6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e54fd8 je 0x11e55005 */
  if (C.zf) goto L_11e55005;
  /* 11e54fda lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11e54fe0 push eax */
  push32((uint32_t)(EAX));
  /* 11e54fe1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e54fe4 push ecx */
  push32((uint32_t)(ECX));
  /* 11e54fe5 call 0x11e55090 */
  push32(0x11e54feau); f_11e55090();
  /* 11e54fea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e54fed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e54fef je 0x11e54ffc */
  if (C.zf) goto L_11e54ffc;
  /* 11e54ff1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e54ff4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e54ff7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11e54ffa jmp 0x11e55003 */
  goto L_11e55003;
L_11e54ffc:;
  /* 11e54ffc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_11e55003:;
  /* 11e55003 jmp 0x11e5500e */
  goto L_11e5500e;
L_11e55005:;
  /* 11e55005 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e55008 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5500b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11e5500e:;
  /* 11e5500e jmp 0x11e54fa5 */
  goto L_11e54fa5;
L_11e55010:;
  /* 11e55010 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e55014 je 0x11e5503b */
  if (C.zf) goto L_11e5503b;
  /* 11e55016 call 0x11e55230 */
  push32(0x11e5501bu); f_11e55230();
  /* 11e5501b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e5501e push 2 */
  push32((uint32_t)(0x2u));
  /* 11e55020 mov ecx, dword ptr [0x11e755fc] */
  ECX = (r32((uint32_t)(0x11e755fc)));
  /* 11e55026 push ecx */
  push32((uint32_t)(ECX));
  /* 11e55027 call 0x11e4a4e0 */
  push32(0x11e5502cu); f_11e4a4e0();
  /* 11e5502c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5502f mov dword ptr [0x11e755fc], 0 */
  w32((uint32_t)(0x11e755fc), (0x0u));
  /* 11e55039 jmp 0x11e55061 */
  goto L_11e55061;
L_11e5503b:;
  /* 11e5503b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5503f je 0x11e5504e */
  if (C.zf) goto L_11e5504e;
  /* 11e55041 call 0x11e55230 */
  push32(0x11e55046u); f_11e55230();
  /* 11e55046 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 11e5504c jmp 0x11e55058 */
  goto L_11e55058;
L_11e5504e:;
  /* 11e5504e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_11e55058:;
  /* 11e55058 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 11e5505e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11e55061:;
  /* 11e55061 jmp 0x11e5506b */
  goto L_11e5506b;
L_11e55063:;
  /* 11e55063 call 0x11e55230 */
  push32(0x11e55068u); f_11e55230();
  /* 11e55068 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11e5506b:;
  /* 11e5506b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5506f je 0x11e55088 */
  if (C.zf) goto L_11e55088;
  /* 11e55071 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11e55073 call 0x11e4c710 */
  push32(0x11e55078u); f_11e4c710();
  /* 11e55078 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5507b mov eax, dword ptr [0x11e76c6c] */
  EAX = (r32((uint32_t)(0x11e76c6c)));
  /* 11e55080 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e55083 mov dword ptr [0x11e76c6c], eax */
  w32((uint32_t)(0x11e76c6c), (EAX));
L_11e55088:;
  /* 11e55088 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11e5508b:;
  /* 11e5508b mov esp, ebp */
  ESP = (EBP);
  /* 11e5508d pop ebp */
  EBP = (pop32());
  /* 11e5508e ret  */
  ESPCHK(0x11e54ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015090 @ 0x11e55090 (403 bytes, 117 insns) */
void f_11e55090(void) {
  FTRACE(0x11e55090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e55090 push ebp */
  push32((uint32_t)(EBP));
  /* 11e55091 mov ebp, esp */
  EBP = (ESP);
  /* 11e55093 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e55099 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5509c push eax */
  push32((uint32_t)(EAX));
  /* 11e5509d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 11e550a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e550a4 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 11e550aa push edx */
  push32((uint32_t)(EDX));
  /* 11e550ab lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 11e550b1 push eax */
  push32((uint32_t)(EAX));
  /* 11e550b2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e550b5 push ecx */
  push32((uint32_t)(ECX));
  /* 11e550b6 call 0x11e55330 */
  push32(0x11e550bbu); f_11e55330();
  /* 11e550bb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e550be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e550c0 jne 0x11e550c9 */
  if (!C.zf) goto L_11e550c9;
  /* 11e550c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e550c4 jmp 0x11e5521f */
  goto L_11e5521f;
L_11e550c9:;
  /* 11e550c9 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 11e550ce push 0x11e720d8 */
  push32((uint32_t)(0x11e720d8u));
  /* 11e550d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e550d5 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 11e550db push edx */
  push32((uint32_t)(EDX));
  /* 11e550dc call 0x11e4d5a0 */
  push32(0x11e550e1u); f_11e4d5a0();
  /* 11e550e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e550e4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e550e7 push eax */
  push32((uint32_t)(EAX));
  /* 11e550e8 call 0x11e49a50 */
  push32(0x11e550edu); f_11e49a50();
  /* 11e550ed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e550f0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e550f3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e550f7 jne 0x11e55100 */
  if (!C.zf) goto L_11e55100;
  /* 11e550f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e550fb jmp 0x11e5521f */
  goto L_11e5521f;
L_11e55100:;
  /* 11e55100 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55103 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e55106 mov ecx, dword ptr [eax + 0x11e755fc] */
  ECX = (r32((uint32_t)(EAX + 0x11e755fc)));
  /* 11e5510c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e5510f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55112 mov eax, dword ptr [edx*4 + 0x11e76ba0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11e76ba0)));
  /* 11e55119 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e5511c push 6 */
  push32((uint32_t)(0x6u));
  /* 11e5511e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55121 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e55124 add ecx, 0x11e76bf8 */
  { uint32_t _a=(ECX),_b=(0x11e76bf8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5512a push ecx */
  push32((uint32_t)(ECX));
  /* 11e5512b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 11e5512e push edx */
  push32((uint32_t)(EDX));
  /* 11e5512f call 0x11e50c70 */
  push32(0x11e55134u); f_11e50c70();
  /* 11e55134 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55137 mov eax, dword ptr [0x11e76bb8] */
  EAX = (r32((uint32_t)(0x11e76bb8)));
  /* 11e5513c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11e5513f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 11e55145 push ecx */
  push32((uint32_t)(ECX));
  /* 11e55146 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e55149 push edx */
  push32((uint32_t)(EDX));
  /* 11e5514a call 0x11e4d720 */
  push32(0x11e5514fu); f_11e4d720();
  /* 11e5514f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55152 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55155 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e55158 mov dword ptr [ecx + 0x11e755fc], eax */
  w32((uint32_t)(ECX + 0x11e755fc), (EAX));
  /* 11e5515e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 11e55164 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e5516a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5516d mov dword ptr [eax*4 + 0x11e76ba0], edx */
  w32((uint32_t)(EAX*4 + 0x11e76ba0), (EDX));
  /* 11e55174 push 6 */
  push32((uint32_t)(0x6u));
  /* 11e55176 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 11e5517c push ecx */
  push32((uint32_t)(ECX));
  /* 11e5517d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55180 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e55183 add edx, 0x11e76bf8 */
  { uint32_t _a=(EDX),_b=(0x11e76bf8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55189 push edx */
  push32((uint32_t)(EDX));
  /* 11e5518a call 0x11e50c70 */
  push32(0x11e5518fu); f_11e50c70();
  /* 11e5518f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55192 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e55196 jne 0x11e551a3 */
  if (!C.zf) goto L_11e551a3;
  /* 11e55198 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11e5519e mov dword ptr [0x11e76bb8], eax */
  w32((uint32_t)(0x11e76bb8), (EAX));
L_11e551a3:;
  /* 11e551a3 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e551a7 jne 0x11e551b5 */
  if (!C.zf) goto L_11e551b5;
  /* 11e551a9 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11e551af mov dword ptr [0x11e76bbc], ecx */
  w32((uint32_t)(0x11e76bbc), (ECX));
L_11e551b5:;
  /* 11e551b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e551b8 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e551bb call dword ptr [edx + 0x11e75600] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x11e75600))), 0x11e551c1u);
  /* 11e551c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e551c3 je 0x11e551fc */
  if (C.zf) goto L_11e551fc;
  /* 11e551c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e551c8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e551cb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e551ce mov dword ptr [eax + 0x11e755fc], ecx */
  w32((uint32_t)(EAX + 0x11e755fc), (ECX));
  /* 11e551d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e551d6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e551d9 push edx */
  push32((uint32_t)(EDX));
  /* 11e551da call 0x11e4a4e0 */
  push32(0x11e551dfu); f_11e4a4e0();
  /* 11e551df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e551e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e551e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e551e8 mov dword ptr [eax*4 + 0x11e76ba0], ecx */
  w32((uint32_t)(EAX*4 + 0x11e76ba0), (ECX));
  /* 11e551ef mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e551f2 mov dword ptr [0x11e76bb8], edx */
  w32((uint32_t)(0x11e76bb8), (EDX));
  /* 11e551f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e551fa jmp 0x11e5521f */
  goto L_11e5521f;
L_11e551fc:;
  /* 11e551fc cmp dword ptr [ebp - 0xc], 0x11e754e8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x11e754e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e55203 je 0x11e55213 */
  if (C.zf) goto L_11e55213;
  /* 11e55205 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e55207 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e5520a push eax */
  push32((uint32_t)(EAX));
  /* 11e5520b call 0x11e4a4e0 */
  push32(0x11e55210u); f_11e4a4e0();
  /* 11e55210 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e55213:;
  /* 11e55213 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55216 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e55219 mov eax, dword ptr [ecx + 0x11e755fc] */
  EAX = (r32((uint32_t)(ECX + 0x11e755fc)));
L_11e5521f:;
  /* 11e5521f mov esp, ebp */
  ESP = (EBP);
  /* 11e55221 pop ebp */
  EBP = (pop32());
  /* 11e55222 ret  */
  ESPCHK(0x11e55090u, _esp0);
  ESP += 4; return;
}

/* FUN_10015230 @ 0x11e55230 (256 bytes, 72 insns) */
void f_11e55230(void) {
  FTRACE(0x11e55230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e55230 push ebp */
  push32((uint32_t)(EBP));
  /* 11e55231 mov ebp, esp */
  EBP = (ESP);
  /* 11e55233 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e55236 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11e5523d cmp dword ptr [0x11e755fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e755fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e55244 jne 0x11e55264 */
  if (!C.zf) goto L_11e55264;
  /* 11e55246 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 11e5524b push 0x11e720d8 */
  push32((uint32_t)(0x11e720d8u));
  /* 11e55250 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e55252 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 11e55257 call 0x11e49a50 */
  push32(0x11e5525cu); f_11e49a50();
  /* 11e5525c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5525f mov dword ptr [0x11e755fc], eax */
  w32((uint32_t)(0x11e755fc), (EAX));
L_11e55264:;
  /* 11e55264 mov eax, dword ptr [0x11e755fc] */
  EAX = (r32((uint32_t)(0x11e755fc)));
  /* 11e55269 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11e5526c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11e55273 jmp 0x11e5527e */
  goto L_11e5527e;
L_11e55275:;
  /* 11e55275 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e55278 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5527b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11e5527e:;
  /* 11e5527e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e55281 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e55284 mov eax, dword ptr [edx + 0x11e755fc] */
  EAX = (r32((uint32_t)(EDX + 0x11e755fc)));
  /* 11e5528a push eax */
  push32((uint32_t)(EAX));
  /* 11e5528b push 0x11e720e4 */
  push32((uint32_t)(0x11e720e4u));
  /* 11e55290 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e55293 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e55296 mov edx, dword ptr [ecx + 0x11e755f8] */
  EDX = (r32((uint32_t)(ECX + 0x11e755f8)));
  /* 11e5529c push edx */
  push32((uint32_t)(EDX));
  /* 11e5529d push 3 */
  push32((uint32_t)(0x3u));
  /* 11e5529f mov eax, dword ptr [0x11e755fc] */
  EAX = (r32((uint32_t)(0x11e755fc)));
  /* 11e552a4 push eax */
  push32((uint32_t)(EAX));
  /* 11e552a5 call 0x11e554d0 */
  push32(0x11e552aau); f_11e554d0();
  /* 11e552aa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e552ad cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e552b1 jge 0x11e552f9 */
  if ((C.sf==C.of)) goto L_11e552f9;
  /* 11e552b3 push 0x11e720d0 */
  push32((uint32_t)(0x11e720d0u));
  /* 11e552b8 mov ecx, dword ptr [0x11e755fc] */
  ECX = (r32((uint32_t)(0x11e755fc)));
  /* 11e552be push ecx */
  push32((uint32_t)(ECX));
  /* 11e552bf call 0x11e4d730 */
  push32(0x11e552c4u); f_11e4d730();
  /* 11e552c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e552c7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e552ca add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e552cd imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e552d0 mov eax, dword ptr [edx + 0x11e755fc] */
  EAX = (r32((uint32_t)(EDX + 0x11e755fc)));
  /* 11e552d6 push eax */
  push32((uint32_t)(EAX));
  /* 11e552d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e552da imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e552dd mov edx, dword ptr [ecx + 0x11e755fc] */
  EDX = (r32((uint32_t)(ECX + 0x11e755fc)));
  /* 11e552e3 push edx */
  push32((uint32_t)(EDX));
  /* 11e552e4 call 0x11e51200 */
  push32(0x11e552e9u); f_11e51200();
  /* 11e552e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e552ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e552ee je 0x11e552f7 */
  if (C.zf) goto L_11e552f7;
  /* 11e552f0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11e552f7:;
  /* 11e552f7 jmp 0x11e55327 */
  goto L_11e55327;
L_11e552f9:;
  /* 11e552f9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e552fd jne 0x11e55306 */
  if (!C.zf) goto L_11e55306;
  /* 11e552ff mov eax, dword ptr [0x11e755fc] */
  EAX = (r32((uint32_t)(0x11e755fc)));
  /* 11e55304 jmp 0x11e5532c */
  goto L_11e5532c;
L_11e55306:;
  /* 11e55306 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e55308 mov eax, dword ptr [0x11e755fc] */
  EAX = (r32((uint32_t)(0x11e755fc)));
  /* 11e5530d push eax */
  push32((uint32_t)(EAX));
  /* 11e5530e call 0x11e4a4e0 */
  push32(0x11e55313u); f_11e4a4e0();
  /* 11e55313 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55316 mov dword ptr [0x11e755fc], 0 */
  w32((uint32_t)(0x11e755fc), (0x0u));
  /* 11e55320 mov eax, dword ptr [0x11e75614] */
  EAX = (r32((uint32_t)(0x11e75614)));
  /* 11e55325 jmp 0x11e5532c */
  goto L_11e5532c;
L_11e55327:;
  /* 11e55327 jmp 0x11e55275 */
  goto L_11e55275;
L_11e5532c:;
  /* 11e5532c mov esp, ebp */
  ESP = (EBP);
  /* 11e5532e pop ebp */
  EBP = (pop32());
  /* 11e5532f ret  */
  ESPCHK(0x11e55230u, _esp0);
  ESP += 4; return;
}

/* FUN_10015330 @ 0x11e55330 (388 bytes, 115 insns) */
void f_11e55330(void) {
  FTRACE(0x11e55330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e55330 push ebp */
  push32((uint32_t)(EBP));
  /* 11e55331 mov ebp, esp */
  EBP = (ESP);
  /* 11e55333 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e55339 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5533d jne 0x11e55346 */
  if (!C.zf) goto L_11e55346;
  /* 11e5533f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e55341 jmp 0x11e554b0 */
  goto L_11e554b0;
L_11e55346:;
  /* 11e55346 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55349 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e5534c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5534f jne 0x11e553a0 */
  if (!C.zf) goto L_11e553a0;
  /* 11e55351 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55354 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11e55358 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e5535a jne 0x11e553a0 */
  if (!C.zf) goto L_11e553a0;
  /* 11e5535c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e5535f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 11e55362 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e55365 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 11e55369 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5536d je 0x11e55389 */
  if (C.zf) goto L_11e55389;
  /* 11e5536f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e55372 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 11e55377 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e5537a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 11e55380 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e55383 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_11e55389:;
  /* 11e55389 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5538d je 0x11e55398 */
  if (C.zf) goto L_11e55398;
  /* 11e5538f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e55392 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11e55398:;
  /* 11e55398 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e5539b jmp 0x11e554b0 */
  goto L_11e554b0;
L_11e553a0:;
  /* 11e553a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e553a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e553a4 push 0x11e75570 */
  push32((uint32_t)(0x11e75570u));
  /* 11e553a9 call 0x11e51200 */
  push32(0x11e553aeu); f_11e51200();
  /* 11e553ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e553b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e553b3 je 0x11e55468 */
  if (C.zf) goto L_11e55468;
  /* 11e553b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e553bc push edx */
  push32((uint32_t)(EDX));
  /* 11e553bd push 0x11e754ec */
  push32((uint32_t)(0x11e754ecu));
  /* 11e553c2 call 0x11e51200 */
  push32(0x11e553c7u); f_11e51200();
  /* 11e553c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e553ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e553cc je 0x11e55468 */
  if (C.zf) goto L_11e55468;
  /* 11e553d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e553d5 push eax */
  push32((uint32_t)(EAX));
  /* 11e553d6 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 11e553dc push ecx */
  push32((uint32_t)(ECX));
  /* 11e553dd call 0x11e55520 */
  push32(0x11e553e2u); f_11e55520();
  /* 11e553e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e553e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e553e7 je 0x11e553f0 */
  if (C.zf) goto L_11e553f0;
  /* 11e553e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e553eb jmp 0x11e554b0 */
  goto L_11e554b0;
L_11e553f0:;
  /* 11e553f0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 11e553f6 push edx */
  push32((uint32_t)(EDX));
  /* 11e553f7 push 0x11e76bd0 */
  push32((uint32_t)(0x11e76bd0u));
  /* 11e553fc lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 11e55402 push eax */
  push32((uint32_t)(EAX));
  /* 11e55403 call 0x11e56f90 */
  push32(0x11e55408u); f_11e56f90();
  /* 11e55408 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5540b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e5540d jne 0x11e55416 */
  if (!C.zf) goto L_11e55416;
  /* 11e5540f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e55411 jmp 0x11e554b0 */
  goto L_11e554b0;
L_11e55416:;
  /* 11e55416 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e55418 mov cx, word ptr [0x11e76bd4] */
  CX = (r16((uint32_t)(0x11e76bd4)));
  /* 11e5541f mov dword ptr [0x11e76bd8], ecx */
  w32((uint32_t)(0x11e76bd8), (ECX));
  /* 11e55425 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 11e5542b push edx */
  push32((uint32_t)(EDX));
  /* 11e5542c push 0x11e75570 */
  push32((uint32_t)(0x11e75570u));
  /* 11e55431 call 0x11e55680 */
  push32(0x11e55436u); f_11e55680();
  /* 11e55436 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55439 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5543c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e5543f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e55441 je 0x11e55456 */
  if (C.zf) goto L_11e55456;
  /* 11e55443 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55446 push edx */
  push32((uint32_t)(EDX));
  /* 11e55447 push 0x11e754ec */
  push32((uint32_t)(0x11e754ecu));
  /* 11e5544c call 0x11e4d720 */
  push32(0x11e55451u); f_11e4d720();
  /* 11e55451 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55454 jmp 0x11e55468 */
  goto L_11e55468;
L_11e55456:;
  /* 11e55456 push 0x11e75570 */
  push32((uint32_t)(0x11e75570u));
  /* 11e5545b push 0x11e754ec */
  push32((uint32_t)(0x11e754ecu));
  /* 11e55460 call 0x11e4d720 */
  push32(0x11e55465u); f_11e4d720();
  /* 11e55465 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e55468:;
  /* 11e55468 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5546c je 0x11e55481 */
  if (C.zf) goto L_11e55481;
  /* 11e5546e push 6 */
  push32((uint32_t)(0x6u));
  /* 11e55470 push 0x11e76bd0 */
  push32((uint32_t)(0x11e76bd0u));
  /* 11e55475 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e55478 push eax */
  push32((uint32_t)(EAX));
  /* 11e55479 call 0x11e50c70 */
  push32(0x11e5547eu); f_11e50c70();
  /* 11e5547e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e55481:;
  /* 11e55481 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e55485 je 0x11e5549a */
  if (C.zf) goto L_11e5549a;
  /* 11e55487 push 4 */
  push32((uint32_t)(0x4u));
  /* 11e55489 push 0x11e76bd8 */
  push32((uint32_t)(0x11e76bd8u));
  /* 11e5548e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e55491 push ecx */
  push32((uint32_t)(ECX));
  /* 11e55492 call 0x11e50c70 */
  push32(0x11e55497u); f_11e50c70();
  /* 11e55497 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e5549a:;
  /* 11e5549a push 0x11e75570 */
  push32((uint32_t)(0x11e75570u));
  /* 11e5549f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e554a2 push edx */
  push32((uint32_t)(EDX));
  /* 11e554a3 call 0x11e4d720 */
  push32(0x11e554a8u); f_11e4d720();
  /* 11e554a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e554ab mov eax, 0x11e75570 */
  EAX = (0x11e75570u);
L_11e554b0:;
  /* 11e554b0 mov esp, ebp */
  ESP = (EBP);
  /* 11e554b2 pop ebp */
  EBP = (pop32());
  /* 11e554b3 ret  */
  ESPCHK(0x11e55330u, _esp0);
  ESP += 4; return;
}

/* FUN_100154c0 @ 0x11e554c0 (7 bytes, 5 insns) */
void f_11e554c0(void) {
  FTRACE(0x11e554c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e554c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e554c1 mov ebp, esp */
  EBP = (ESP);
  /* 11e554c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e554c5 pop ebp */
  EBP = (pop32());
  /* 11e554c6 ret  */
  ESPCHK(0x11e554c0u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x11e554d0 (79 bytes, 28 insns) */
void f_11e554d0(void) {
  FTRACE(0x11e554d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e554d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e554d1 mov ebp, esp */
  EBP = (ESP);
  /* 11e554d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e554d6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11e554d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e554dc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11e554e3 jmp 0x11e554ee */
  goto L_11e554ee;
L_11e554e5:;
  /* 11e554e5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e554e8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e554eb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11e554ee:;
  /* 11e554ee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e554f1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e554f4 jge 0x11e55514 */
  if ((C.sf==C.of)) goto L_11e55514;
  /* 11e554f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e554f9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e554fc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e554ff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e55502 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11e55505 push edx */
  push32((uint32_t)(EDX));
  /* 11e55506 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55509 push eax */
  push32((uint32_t)(EAX));
  /* 11e5550a call 0x11e4d730 */
  push32(0x11e5550fu); f_11e4d730();
  /* 11e5550f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55512 jmp 0x11e554e5 */
  goto L_11e554e5;
L_11e55514:;
  /* 11e55514 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e5551b mov esp, ebp */
  ESP = (EBP);
  /* 11e5551d pop ebp */
  EBP = (pop32());
  /* 11e5551e ret  */
  ESPCHK(0x11e554d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015520 @ 0x11e55520 (349 bytes, 122 insns) */
void f_11e55520(void) {
  FTRACE(0x11e55520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e55520 push ebp */
  push32((uint32_t)(EBP));
  /* 11e55521 mov ebp, esp */
  EBP = (ESP);
  /* 11e55523 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e55526 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 11e5552b push 0 */
  push32((uint32_t)(0x0u));
  /* 11e5552d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55530 push eax */
  push32((uint32_t)(EAX));
  /* 11e55531 call 0x11e4e100 */
  push32(0x11e55536u); f_11e4e100();
  /* 11e55536 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55539 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e5553c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11e5553f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e55541 jne 0x11e5554a */
  if (!C.zf) goto L_11e5554a;
  /* 11e55543 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e55545 jmp 0x11e55679 */
  goto L_11e55679;
L_11e5554a:;
  /* 11e5554a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e5554d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e55550 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e55553 jne 0x11e55580 */
  if (!C.zf) goto L_11e55580;
  /* 11e55555 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e55558 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11e5555c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e5555e je 0x11e55580 */
  if (C.zf) goto L_11e55580;
  /* 11e55560 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e55563 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55566 push ecx */
  push32((uint32_t)(ECX));
  /* 11e55567 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5556a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55570 push edx */
  push32((uint32_t)(EDX));
  /* 11e55571 call 0x11e4d720 */
  push32(0x11e55576u); f_11e4d720();
  /* 11e55576 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55579 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e5557b jmp 0x11e55679 */
  goto L_11e55679;
L_11e55580:;
  /* 11e55580 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e55587 jmp 0x11e55592 */
  goto L_11e55592;
L_11e55589:;
  /* 11e55589 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e5558c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5558f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11e55592:;
  /* 11e55592 push 0x11e720e8 */
  push32((uint32_t)(0x11e720e8u));
  /* 11e55597 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e5559a push ecx */
  push32((uint32_t)(ECX));
  /* 11e5559b call 0x11e56ed0 */
  push32(0x11e555a0u); f_11e56ed0();
  /* 11e555a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e555a3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e555a6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e555aa jne 0x11e555b4 */
  if (!C.zf) goto L_11e555b4;
  /* 11e555ac or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e555af jmp 0x11e55679 */
  goto L_11e55679;
L_11e555b4:;
  /* 11e555b4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e555b7 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e555ba mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e555bc mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 11e555bf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e555c3 jne 0x11e555ea */
  if (!C.zf) goto L_11e555ea;
  /* 11e555c5 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e555c9 jge 0x11e555ea */
  if ((C.sf==C.of)) goto L_11e555ea;
  /* 11e555cb movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11e555cf cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e555d2 je 0x11e555ea */
  if (C.zf) goto L_11e555ea;
  /* 11e555d4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e555d7 push edx */
  push32((uint32_t)(EDX));
  /* 11e555d8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e555db push eax */
  push32((uint32_t)(EAX));
  /* 11e555dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e555df push ecx */
  push32((uint32_t)(ECX));
  /* 11e555e0 call 0x11e4df90 */
  push32(0x11e555e5u); f_11e4df90();
  /* 11e555e5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e555e8 jmp 0x11e55650 */
  goto L_11e55650;
L_11e555ea:;
  /* 11e555ea cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e555ee jne 0x11e55618 */
  if (!C.zf) goto L_11e55618;
  /* 11e555f0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e555f4 jge 0x11e55618 */
  if ((C.sf==C.of)) goto L_11e55618;
  /* 11e555f6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11e555fa cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e555fd je 0x11e55618 */
  if (C.zf) goto L_11e55618;
  /* 11e555ff mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e55602 push eax */
  push32((uint32_t)(EAX));
  /* 11e55603 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e55606 push ecx */
  push32((uint32_t)(ECX));
  /* 11e55607 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5560a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5560d push edx */
  push32((uint32_t)(EDX));
  /* 11e5560e call 0x11e4df90 */
  push32(0x11e55613u); f_11e4df90();
  /* 11e55613 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55616 jmp 0x11e55650 */
  goto L_11e55650;
L_11e55618:;
  /* 11e55618 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5561c jne 0x11e5564b */
  if (!C.zf) goto L_11e5564b;
  /* 11e5561e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11e55622 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e55624 je 0x11e5562f */
  if (C.zf) goto L_11e5562f;
  /* 11e55626 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11e5562a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5562d jne 0x11e5564b */
  if (!C.zf) goto L_11e5564b;
L_11e5562f:;
  /* 11e5562f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e55632 push edx */
  push32((uint32_t)(EDX));
  /* 11e55633 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e55636 push eax */
  push32((uint32_t)(EAX));
  /* 11e55637 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5563a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55640 push ecx */
  push32((uint32_t)(ECX));
  /* 11e55641 call 0x11e4df90 */
  push32(0x11e55646u); f_11e4df90();
  /* 11e55646 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55649 jmp 0x11e55650 */
  goto L_11e55650;
L_11e5564b:;
  /* 11e5564b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e5564e jmp 0x11e55679 */
  goto L_11e55679;
L_11e55650:;
  /* 11e55650 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11e55654 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e55657 jne 0x11e5565b */
  if (!C.zf) goto L_11e5565b;
  /* 11e55659 jmp 0x11e55677 */
  goto L_11e55677;
L_11e5565b:;
  /* 11e5565b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11e5565f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e55661 jne 0x11e55665 */
  if (!C.zf) goto L_11e55665;
  /* 11e55663 jmp 0x11e55677 */
  goto L_11e55677;
L_11e55665:;
  /* 11e55665 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e55668 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e5566b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 11e5566f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11e55672 jmp 0x11e55589 */
  goto L_11e55589;
L_11e55677:;
  /* 11e55677 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e55679:;
  /* 11e55679 mov esp, ebp */
  ESP = (EBP);
  /* 11e5567b pop ebp */
  EBP = (pop32());
  /* 11e5567c ret  */
  ESPCHK(0x11e55520u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x11e55680 (101 bytes, 36 insns) */
void f_11e55680(void) {
  FTRACE(0x11e55680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e55680 push ebp */
  push32((uint32_t)(EBP));
  /* 11e55681 mov ebp, esp */
  EBP = (ESP);
  /* 11e55683 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e55686 push eax */
  push32((uint32_t)(EAX));
  /* 11e55687 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5568a push ecx */
  push32((uint32_t)(ECX));
  /* 11e5568b call 0x11e4d720 */
  push32(0x11e55690u); f_11e4d720();
  /* 11e55690 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55693 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e55696 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 11e5569a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e5569c je 0x11e556b8 */
  if (C.zf) goto L_11e556b8;
  /* 11e5569e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e556a1 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e556a4 push ecx */
  push32((uint32_t)(ECX));
  /* 11e556a5 push 0x11e720f0 */
  push32((uint32_t)(0x11e720f0u));
  /* 11e556aa push 2 */
  push32((uint32_t)(0x2u));
  /* 11e556ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e556af push edx */
  push32((uint32_t)(EDX));
  /* 11e556b0 call 0x11e554d0 */
  push32(0x11e556b5u); f_11e554d0();
  /* 11e556b5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e556b8:;
  /* 11e556b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e556bb movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 11e556c2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e556c4 je 0x11e556e3 */
  if (C.zf) goto L_11e556e3;
  /* 11e556c6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e556c9 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e556cf push edx */
  push32((uint32_t)(EDX));
  /* 11e556d0 push 0x11e720ec */
  push32((uint32_t)(0x11e720ecu));
  /* 11e556d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e556d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e556da push eax */
  push32((uint32_t)(EAX));
  /* 11e556db call 0x11e554d0 */
  push32(0x11e556e0u); f_11e554d0();
  /* 11e556e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e556e3:;
  /* 11e556e3 pop ebp */
  EBP = (pop32());
  /* 11e556e4 ret  */
  ESPCHK(0x11e55680u, _esp0);
  ESP += 4; return;
}

/* FUN_100156f0 @ 0x11e556f0 (237 bytes, 81 insns) */
void f_11e556f0(void) {
  FTRACE(0x11e556f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e556f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e556f1 mov ebp, esp */
  EBP = (ESP);
  /* 11e556f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e556f4 cmp dword ptr [0x11e7804c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e7804c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e556fb jne 0x11e55712 */
  if (!C.zf) goto L_11e55712;
  /* 11e556fd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e55700 push eax */
  push32((uint32_t)(EAX));
  /* 11e55701 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55704 push ecx */
  push32((uint32_t)(ECX));
  /* 11e55705 call 0x11e57d40 */
  push32(0x11e5570au); f_11e57d40();
  /* 11e5570a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5570d jmp 0x11e557d9 */
  goto L_11e557d9;
L_11e55712:;
  /* 11e55712 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11e55714 call 0x11e4c670 */
  push32(0x11e55719u); f_11e4c670();
  /* 11e55719 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5571c jmp 0x11e55727 */
  goto L_11e55727;
L_11e5571e:;
  /* 11e5571e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55721 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55724 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11e55727:;
  /* 11e55727 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5572a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 11e5572e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 11e55732 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e55735 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e5573b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e5573d je 0x11e557bb */
  if (C.zf) goto L_11e557bb;
  /* 11e5573f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e55742 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e55747 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e55749 mov cl, byte ptr [eax + 0x11e78161] */
  CL = (r8((uint32_t)(EAX + 0x11e78161)));
  /* 11e5574f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11e55752 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e55754 je 0x11e557a6 */
  if (C.zf) goto L_11e557a6;
  /* 11e55756 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55759 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5575c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11e5575f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55762 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e55764 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11e55766 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e55768 jne 0x11e55778 */
  if (!C.zf) goto L_11e55778;
  /* 11e5576a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11e5576c call 0x11e4c710 */
  push32(0x11e55771u); f_11e4c710();
  /* 11e55771 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55774 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e55776 jmp 0x11e557d9 */
  goto L_11e557d9;
L_11e55778:;
  /* 11e55778 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e5577b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e55781 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11e55784 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55787 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e55789 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11e5578b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11e5578d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e55790 jne 0x11e557a4 */
  if (!C.zf) goto L_11e557a4;
  /* 11e55792 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11e55794 call 0x11e4c710 */
  push32(0x11e55799u); f_11e4c710();
  /* 11e55799 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5579c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5579f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e557a2 jmp 0x11e557d9 */
  goto L_11e557d9;
L_11e557a4:;
  /* 11e557a4 jmp 0x11e557b6 */
  goto L_11e557b6;
L_11e557a6:;
  /* 11e557a6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e557a9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e557af cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e557b2 jne 0x11e557b6 */
  if (!C.zf) goto L_11e557b6;
  /* 11e557b4 jmp 0x11e557bb */
  goto L_11e557bb;
L_11e557b6:;
  /* 11e557b6 jmp 0x11e5571e */
  goto L_11e5571e;
L_11e557bb:;
  /* 11e557bb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11e557bd call 0x11e4c710 */
  push32(0x11e557c2u); f_11e4c710();
  /* 11e557c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e557c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e557c8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e557cd cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e557d0 jne 0x11e557d7 */
  if (!C.zf) goto L_11e557d7;
  /* 11e557d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e557d5 jmp 0x11e557d9 */
  goto L_11e557d9;
L_11e557d7:;
  /* 11e557d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e557d9:;
  /* 11e557d9 mov esp, ebp */
  ESP = (EBP);
  /* 11e557db pop ebp */
  EBP = (pop32());
  /* 11e557dc ret  */
  ESPCHK(0x11e556f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100157e0 @ 0x11e557e0 (130 bytes, 50 insns) */
void f_11e557e0(void) {
  FTRACE(0x11e557e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e557e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e557e1 mov ebp, esp */
  EBP = (ESP);
  /* 11e557e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e557e4 push ebx */
  push32((uint32_t)(EBX));
  /* 11e557e5 push esi */
  push32((uint32_t)(ESI));
  /* 11e557e6 push edi */
  push32((uint32_t)(EDI));
  /* 11e557e7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11e557ee:;
  /* 11e557ee cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e557f2 jne 0x11e55812 */
  if (!C.zf) goto L_11e55812;
  /* 11e557f4 push 0x11e72100 */
  push32((uint32_t)(0x11e72100u));
  /* 11e557f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e557fb push 0x3a */
  push32((uint32_t)(0x3au));
  /* 11e557fd push 0x11e720f4 */
  push32((uint32_t)(0x11e720f4u));
  /* 11e55802 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e55804 call 0x11e48dc0 */
  push32(0x11e55809u); f_11e48dc0();
  /* 11e55809 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5580c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5580f jne 0x11e55812 */
  if (!C.zf) goto L_11e55812;
  /* 11e55811 int3  */
  x86_unimpl("int3 @ 0x11e55811");
L_11e55812:;
  /* 11e55812 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e55814 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e55816 jne 0x11e557ee */
  if (!C.zf) goto L_11e557ee;
  /* 11e55818 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5581b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11e5581e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 11e55821 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e55823 je 0x11e55831 */
  if (C.zf) goto L_11e55831;
  /* 11e55825 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55828 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 11e5582f jmp 0x11e55858 */
  goto L_11e55858;
L_11e55831:;
  /* 11e55831 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55834 push ecx */
  push32((uint32_t)(ECX));
  /* 11e55835 call 0x11e536c0 */
  push32(0x11e5583au); f_11e536c0();
  /* 11e5583a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5583d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55840 push edx */
  push32((uint32_t)(EDX));
  /* 11e55841 call 0x11e55870 */
  push32(0x11e55846u); f_11e55870();
  /* 11e55846 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55849 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e5584c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5584f push eax */
  push32((uint32_t)(EAX));
  /* 11e55850 call 0x11e53730 */
  push32(0x11e55855u); f_11e53730();
  /* 11e55855 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e55858:;
  /* 11e55858 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e5585b pop edi */
  EDI = (pop32());
  /* 11e5585c pop esi */
  ESI = (pop32());
  /* 11e5585d pop ebx */
  EBX = (pop32());
  /* 11e5585e mov esp, ebp */
  ESP = (EBP);
  /* 11e55860 pop ebp */
  EBP = (pop32());
  /* 11e55861 ret  */
  ESPCHK(0x11e557e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015870 @ 0x11e55870 (190 bytes, 67 insns) */
void f_11e55870(void) {
  FTRACE(0x11e55870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e55870 push ebp */
  push32((uint32_t)(EBP));
  /* 11e55871 mov ebp, esp */
  EBP = (ESP);
  /* 11e55873 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e55876 push ebx */
  push32((uint32_t)(EBX));
  /* 11e55877 push esi */
  push32((uint32_t)(ESI));
  /* 11e55878 push edi */
  push32((uint32_t)(EDI));
  /* 11e55879 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11e55880 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55883 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11e55886:;
  /* 11e55886 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5588a jne 0x11e558aa */
  if (!C.zf) goto L_11e558aa;
  /* 11e5588c push 0x11e71f28 */
  push32((uint32_t)(0x11e71f28u));
  /* 11e55891 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e55893 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 11e55895 push 0x11e720f4 */
  push32((uint32_t)(0x11e720f4u));
  /* 11e5589a push 2 */
  push32((uint32_t)(0x2u));
  /* 11e5589c call 0x11e48dc0 */
  push32(0x11e558a1u); f_11e48dc0();
  /* 11e558a1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e558a4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e558a7 jne 0x11e558aa */
  if (!C.zf) goto L_11e558aa;
  /* 11e558a9 int3  */
  x86_unimpl("int3 @ 0x11e558a9");
L_11e558aa:;
  /* 11e558aa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e558ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e558ae jne 0x11e55886 */
  if (!C.zf) goto L_11e55886;
  /* 11e558b0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e558b3 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11e558b6 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 11e558bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e558bd je 0x11e5591a */
  if (C.zf) goto L_11e5591a;
  /* 11e558bf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e558c2 push ecx */
  push32((uint32_t)(ECX));
  /* 11e558c3 call 0x11e54a80 */
  push32(0x11e558c8u); f_11e54a80();
  /* 11e558c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e558cb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e558ce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e558d1 push edx */
  push32((uint32_t)(EDX));
  /* 11e558d2 call 0x11e57f30 */
  push32(0x11e558d7u); f_11e57f30();
  /* 11e558d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e558da mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e558dd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11e558e0 push ecx */
  push32((uint32_t)(ECX));
  /* 11e558e1 call 0x11e57e00 */
  push32(0x11e558e6u); f_11e57e00();
  /* 11e558e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e558e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e558eb jge 0x11e558f6 */
  if ((C.sf==C.of)) goto L_11e558f6;
  /* 11e558ed mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11e558f4 jmp 0x11e5591a */
  goto L_11e5591a;
L_11e558f6:;
  /* 11e558f6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e558f9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e558fd je 0x11e5591a */
  if (C.zf) goto L_11e5591a;
  /* 11e558ff push 2 */
  push32((uint32_t)(0x2u));
  /* 11e55901 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e55904 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11e55907 push ecx */
  push32((uint32_t)(ECX));
  /* 11e55908 call 0x11e4a4e0 */
  push32(0x11e5590du); f_11e4a4e0();
  /* 11e5590d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55910 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e55913 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_11e5591a:;
  /* 11e5591a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e5591d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 11e55924 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e55927 pop edi */
  EDI = (pop32());
  /* 11e55928 pop esi */
  ESI = (pop32());
  /* 11e55929 pop ebx */
  EBX = (pop32());
  /* 11e5592a mov esp, ebp */
  ESP = (EBP);
  /* 11e5592c pop ebp */
  EBP = (pop32());
  /* 11e5592d ret  */
  ESPCHK(0x11e55870u, _esp0);
  ESP += 4; return;
}

/* FUN_10015930 @ 0x11e55930 (210 bytes, 63 insns) */
void f_11e55930(void) {
  FTRACE(0x11e55930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e55930 push ebp */
  push32((uint32_t)(EBP));
  /* 11e55931 mov ebp, esp */
  EBP = (ESP);
  /* 11e55933 push ecx */
  push32((uint32_t)(ECX));
  /* 11e55934 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55937 cmp eax, dword ptr [0x11e783fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11e783fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5593d jae 0x11e55961 */
  if (!C.cf) goto L_11e55961;
  /* 11e5593f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55942 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11e55945 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55948 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11e5594b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e5594e mov eax, dword ptr [ecx*4 + 0x11e782c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11e782c0)));
  /* 11e55955 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11e5595a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11e5595d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e5595f jne 0x11e55974 */
  if (!C.zf) goto L_11e55974;
L_11e55961:;
  /* 11e55961 call 0x11e52640 */
  push32(0x11e55966u); f_11e52640();
  /* 11e55966 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11e5596c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e5596f jmp 0x11e559fe */
  goto L_11e559fe;
L_11e55974:;
  /* 11e55974 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55977 push edx */
  push32((uint32_t)(EDX));
  /* 11e55978 call 0x11e54840 */
  push32(0x11e5597du); f_11e54840();
  /* 11e5597d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55980 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55983 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11e55986 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55989 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11e5598c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e5598f mov edx, dword ptr [eax*4 + 0x11e782c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11e782c0)));
  /* 11e55996 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11e5599b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11e5599e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e559a0 je 0x11e559dd */
  if (C.zf) goto L_11e559dd;
  /* 11e559a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e559a5 push ecx */
  push32((uint32_t)(ECX));
  /* 11e559a6 call 0x11e546c0 */
  push32(0x11e559abu); f_11e546c0();
  /* 11e559ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e559ae push eax */
  push32((uint32_t)(EAX));
  /* 11e559af call dword ptr [0x11e792fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e792fc))), 0x11e559b5u);
  /* 11e559b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e559b7 jne 0x11e559c4 */
  if (!C.zf) goto L_11e559c4;
  /* 11e559b9 call dword ptr [0x11e793ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e793ac))), 0x11e559bfu);
  /* 11e559bf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e559c2 jmp 0x11e559cb */
  goto L_11e559cb;
L_11e559c4:;
  /* 11e559c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11e559cb:;
  /* 11e559cb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e559cf jne 0x11e559d3 */
  if (!C.zf) goto L_11e559d3;
  /* 11e559d1 jmp 0x11e559ef */
  goto L_11e559ef;
L_11e559d3:;
  /* 11e559d3 call 0x11e52650 */
  push32(0x11e559d8u); f_11e52650();
  /* 11e559d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e559db mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11e559dd:;
  /* 11e559dd call 0x11e52640 */
  push32(0x11e559e2u); f_11e52640();
  /* 11e559e2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11e559e8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11e559ef:;
  /* 11e559ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e559f2 push eax */
  push32((uint32_t)(EAX));
  /* 11e559f3 call 0x11e548d0 */
  push32(0x11e559f8u); f_11e548d0();
  /* 11e559f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e559fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11e559fe:;
  /* 11e559fe mov esp, ebp */
  ESP = (EBP);
  /* 11e55a00 pop ebp */
  EBP = (pop32());
  /* 11e55a01 ret  */
  ESPCHK(0x11e55930u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x11e55a10 (219 bytes, 64 insns) */
void f_11e55a10(void) {
  FTRACE(0x11e55a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e55a10 push ebp */
  push32((uint32_t)(EBP));
  /* 11e55a11 mov ebp, esp */
  EBP = (ESP);
  /* 11e55a13 push ecx */
  push32((uint32_t)(ECX));
  /* 11e55a14 cmp dword ptr [0x11e76bb4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e76bb4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e55a1b je 0x11e55ab1 */
  if (C.zf) goto L_11e55ab1;
  /* 11e55a21 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 11e55a23 push 0x11e72110 */
  push32((uint32_t)(0x11e72110u));
  /* 11e55a28 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e55a2a push 0xac */
  push32((uint32_t)(0xacu));
  /* 11e55a2f push 1 */
  push32((uint32_t)(0x1u));
  /* 11e55a31 call 0x11e49e60 */
  push32(0x11e55a36u); f_11e49e60();
  /* 11e55a36 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55a39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e55a3c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e55a40 jne 0x11e55a4c */
  if (!C.zf) goto L_11e55a4c;
  /* 11e55a42 mov eax, 1 */
  EAX = (0x1u);
  /* 11e55a47 jmp 0x11e55ae7 */
  goto L_11e55ae7;
L_11e55a4c:;
  /* 11e55a4c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e55a4f push eax */
  push32((uint32_t)(EAX));
  /* 11e55a50 call 0x11e55af0 */
  push32(0x11e55a55u); f_11e55af0();
  /* 11e55a55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55a58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e55a5a je 0x11e55a7d */
  if (C.zf) goto L_11e55a7d;
  /* 11e55a5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e55a5f push ecx */
  push32((uint32_t)(ECX));
  /* 11e55a60 call 0x11e56080 */
  push32(0x11e55a65u); f_11e56080();
  /* 11e55a65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55a68 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e55a6a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e55a6d push edx */
  push32((uint32_t)(EDX));
  /* 11e55a6e call 0x11e4a4e0 */
  push32(0x11e55a73u); f_11e4a4e0();
  /* 11e55a73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55a76 mov eax, 1 */
  EAX = (0x1u);
  /* 11e55a7b jmp 0x11e55ae7 */
  goto L_11e55ae7;
L_11e55a7d:;
  /* 11e55a7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e55a80 mov dword ptr [0x11e75dc0], eax */
  w32((uint32_t)(0x11e75dc0), (EAX));
  /* 11e55a85 mov ecx, dword ptr [0x11e76bdc] */
  ECX = (r32((uint32_t)(0x11e76bdc)));
  /* 11e55a8b push ecx */
  push32((uint32_t)(ECX));
  /* 11e55a8c call 0x11e56080 */
  push32(0x11e55a91u); f_11e56080();
  /* 11e55a91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55a94 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e55a96 mov edx, dword ptr [0x11e76bdc] */
  EDX = (r32((uint32_t)(0x11e76bdc)));
  /* 11e55a9c push edx */
  push32((uint32_t)(EDX));
  /* 11e55a9d call 0x11e4a4e0 */
  push32(0x11e55aa2u); f_11e4a4e0();
  /* 11e55aa2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55aa5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e55aa8 mov dword ptr [0x11e76bdc], eax */
  w32((uint32_t)(0x11e76bdc), (EAX));
  /* 11e55aad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e55aaf jmp 0x11e55ae7 */
  goto L_11e55ae7;
L_11e55ab1:;
  /* 11e55ab1 mov dword ptr [0x11e75dc0], 0x11e75dc8 */
  w32((uint32_t)(0x11e75dc0), (0x11e75dc8u));
  /* 11e55abb mov ecx, dword ptr [0x11e76bdc] */
  ECX = (r32((uint32_t)(0x11e76bdc)));
  /* 11e55ac1 push ecx */
  push32((uint32_t)(ECX));
  /* 11e55ac2 call 0x11e56080 */
  push32(0x11e55ac7u); f_11e56080();
  /* 11e55ac7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55aca push 2 */
  push32((uint32_t)(0x2u));
  /* 11e55acc mov edx, dword ptr [0x11e76bdc] */
  EDX = (r32((uint32_t)(0x11e76bdc)));
  /* 11e55ad2 push edx */
  push32((uint32_t)(EDX));
  /* 11e55ad3 call 0x11e4a4e0 */
  push32(0x11e55ad8u); f_11e4a4e0();
  /* 11e55ad8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55adb mov dword ptr [0x11e76bdc], 0 */
  w32((uint32_t)(0x11e76bdc), (0x0u));
  /* 11e55ae5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e55ae7:;
  /* 11e55ae7 mov esp, ebp */
  ESP = (EBP);
  /* 11e55ae9 pop ebp */
  EBP = (pop32());
  /* 11e55aea ret  */
  ESPCHK(0x11e55a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10015af0 @ 0x11e55af0 (1423 bytes, 533 insns) */
void f_11e55af0(void) {
  FTRACE(0x11e55af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e55af0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e55af1 mov ebp, esp */
  EBP = (ESP);
  /* 11e55af3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e55af6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11e55afd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e55aff mov ax, word ptr [0x11e76c16] */
  AX = (r16((uint32_t)(0x11e76c16)));
  /* 11e55b05 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e55b08 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e55b0a mov cx, word ptr [0x11e76c18] */
  CX = (r16((uint32_t)(0x11e76c18)));
  /* 11e55b11 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e55b14 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e55b18 jne 0x11e55b22 */
  if (!C.zf) goto L_11e55b22;
  /* 11e55b1a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e55b1d jmp 0x11e5607b */
  goto L_11e5607b;
L_11e55b22:;
  /* 11e55b22 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55b25 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55b28 push edx */
  push32((uint32_t)(EDX));
  /* 11e55b29 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 11e55b2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e55b2e push eax */
  push32((uint32_t)(EAX));
  /* 11e55b2f push 1 */
  push32((uint32_t)(0x1u));
  /* 11e55b31 call 0x11e59440 */
  push32(0x11e55b36u); f_11e59440();
  /* 11e55b36 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55b39 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e55b3c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e55b3e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e55b41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55b44 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55b47 push edx */
  push32((uint32_t)(EDX));
  /* 11e55b48 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 11e55b4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e55b4d push eax */
  push32((uint32_t)(EAX));
  /* 11e55b4e push 1 */
  push32((uint32_t)(0x1u));
  /* 11e55b50 call 0x11e59440 */
  push32(0x11e55b55u); f_11e59440();
  /* 11e55b55 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55b58 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e55b5b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e55b5d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e55b60 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55b63 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55b66 push edx */
  push32((uint32_t)(EDX));
  /* 11e55b67 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 11e55b69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e55b6c push eax */
  push32((uint32_t)(EAX));
  /* 11e55b6d push 1 */
  push32((uint32_t)(0x1u));
  /* 11e55b6f call 0x11e59440 */
  push32(0x11e55b74u); f_11e59440();
  /* 11e55b74 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55b77 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e55b7a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e55b7c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e55b7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55b82 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55b85 push edx */
  push32((uint32_t)(EDX));
  /* 11e55b86 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 11e55b88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e55b8b push eax */
  push32((uint32_t)(EAX));
  /* 11e55b8c push 1 */
  push32((uint32_t)(0x1u));
  /* 11e55b8e call 0x11e59440 */
  push32(0x11e55b93u); f_11e59440();
  /* 11e55b93 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55b96 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e55b99 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e55b9b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e55b9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55ba1 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55ba4 push edx */
  push32((uint32_t)(EDX));
  /* 11e55ba5 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 11e55ba7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e55baa push eax */
  push32((uint32_t)(EAX));
  /* 11e55bab push 1 */
  push32((uint32_t)(0x1u));
  /* 11e55bad call 0x11e59440 */
  push32(0x11e55bb2u); f_11e59440();
  /* 11e55bb2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55bb5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e55bb8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e55bba mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e55bbd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55bc0 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55bc3 push edx */
  push32((uint32_t)(EDX));
  /* 11e55bc4 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 11e55bc6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e55bc9 push eax */
  push32((uint32_t)(EAX));
  /* 11e55bca push 1 */
  push32((uint32_t)(0x1u));
  /* 11e55bcc call 0x11e59440 */
  push32(0x11e55bd1u); f_11e59440();
  /* 11e55bd1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55bd4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e55bd7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e55bd9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e55bdc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55bdf push edx */
  push32((uint32_t)(EDX));
  /* 11e55be0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 11e55be2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e55be5 push eax */
  push32((uint32_t)(EAX));
  /* 11e55be6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e55be8 call 0x11e59440 */
  push32(0x11e55bedu); f_11e59440();
  /* 11e55bed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55bf0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e55bf3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e55bf5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e55bf8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55bfb add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55bfe push edx */
  push32((uint32_t)(EDX));
  /* 11e55bff push 0x2a */
  push32((uint32_t)(0x2au));
  /* 11e55c01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e55c04 push eax */
  push32((uint32_t)(EAX));
  /* 11e55c05 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e55c07 call 0x11e59440 */
  push32(0x11e55c0cu); f_11e59440();
  /* 11e55c0c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55c0f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e55c12 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e55c14 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e55c17 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55c1a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55c1d push edx */
  push32((uint32_t)(EDX));
  /* 11e55c1e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 11e55c20 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e55c23 push eax */
  push32((uint32_t)(EAX));
  /* 11e55c24 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e55c26 call 0x11e59440 */
  push32(0x11e55c2bu); f_11e59440();
  /* 11e55c2b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55c2e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e55c31 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e55c33 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e55c36 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55c39 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55c3c push edx */
  push32((uint32_t)(EDX));
  /* 11e55c3d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 11e55c3f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e55c42 push eax */
  push32((uint32_t)(EAX));
  /* 11e55c43 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e55c45 call 0x11e59440 */
  push32(0x11e55c4au); f_11e59440();
  /* 11e55c4a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55c4d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e55c50 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e55c52 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e55c55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55c58 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55c5b push edx */
  push32((uint32_t)(EDX));
  /* 11e55c5c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 11e55c5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e55c61 push eax */
  push32((uint32_t)(EAX));
  /* 11e55c62 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e55c64 call 0x11e59440 */
  push32(0x11e55c69u); f_11e59440();
  /* 11e55c69 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55c6c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e55c6f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e55c71 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e55c74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55c77 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55c7a push edx */
  push32((uint32_t)(EDX));
  /* 11e55c7b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 11e55c7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e55c80 push eax */
  push32((uint32_t)(EAX));
  /* 11e55c81 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e55c83 call 0x11e59440 */
  push32(0x11e55c88u); f_11e59440();
  /* 11e55c88 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55c8b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e55c8e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e55c90 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e55c93 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55c96 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55c99 push edx */
  push32((uint32_t)(EDX));
  /* 11e55c9a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 11e55c9c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e55c9f push eax */
  push32((uint32_t)(EAX));
  /* 11e55ca0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e55ca2 call 0x11e59440 */
  push32(0x11e55ca7u); f_11e59440();
  /* 11e55ca7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55caa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e55cad or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e55caf mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e55cb2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55cb5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55cb8 push edx */
  push32((uint32_t)(EDX));
  /* 11e55cb9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11e55cbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e55cbe push eax */
  push32((uint32_t)(EAX));
  /* 11e55cbf push 1 */
  push32((uint32_t)(0x1u));
  /* 11e55cc1 call 0x11e59440 */
  push32(0x11e55cc6u); f_11e59440();
  /* 11e55cc6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55cc9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e55ccc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e55cce mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e55cd1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55cd4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55cd7 push edx */
  push32((uint32_t)(EDX));
  /* 11e55cd8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11e55cda mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e55cdd push eax */
  push32((uint32_t)(EAX));
  /* 11e55cde push 1 */
  push32((uint32_t)(0x1u));
  /* 11e55ce0 call 0x11e59440 */
  push32(0x11e55ce5u); f_11e59440();
  /* 11e55ce5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55ce8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e55ceb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e55ced mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e55cf0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55cf3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55cf6 push edx */
  push32((uint32_t)(EDX));
  /* 11e55cf7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11e55cf9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e55cfc push eax */
  push32((uint32_t)(EAX));
  /* 11e55cfd push 1 */
  push32((uint32_t)(0x1u));
  /* 11e55cff call 0x11e59440 */
  push32(0x11e55d04u); f_11e59440();
  /* 11e55d04 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55d07 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e55d0a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e55d0c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e55d0f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55d12 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55d15 push edx */
  push32((uint32_t)(EDX));
  /* 11e55d16 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11e55d18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e55d1b push eax */
  push32((uint32_t)(EAX));
  /* 11e55d1c push 1 */
  push32((uint32_t)(0x1u));
  /* 11e55d1e call 0x11e59440 */
  push32(0x11e55d23u); f_11e59440();
  /* 11e55d23 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55d26 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e55d29 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e55d2b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e55d2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55d31 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55d34 push edx */
  push32((uint32_t)(EDX));
  /* 11e55d35 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 11e55d37 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e55d3a push eax */
  push32((uint32_t)(EAX));
  /* 11e55d3b push 1 */
  push32((uint32_t)(0x1u));
  /* 11e55d3d call 0x11e59440 */
  push32(0x11e55d42u); f_11e59440();
  /* 11e55d42 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55d45 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e55d48 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e55d4a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e55d4d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55d50 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55d53 push edx */
  push32((uint32_t)(EDX));
  /* 11e55d54 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 11e55d56 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e55d59 push eax */
  push32((uint32_t)(EAX));
  /* 11e55d5a push 1 */
  push32((uint32_t)(0x1u));
  /* 11e55d5c call 0x11e59440 */
  push32(0x11e55d61u); f_11e59440();
  /* 11e55d61 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55d64 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e55d67 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e55d69 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e55d6c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55d6f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55d72 push edx */
  push32((uint32_t)(EDX));
  /* 11e55d73 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 11e55d75 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e55d78 push eax */
  push32((uint32_t)(EAX));
  /* 11e55d79 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e55d7b call 0x11e59440 */
  push32(0x11e55d80u); f_11e59440();
  /* 11e55d80 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55d83 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e55d86 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e55d88 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e55d8b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55d8e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55d91 push edx */
  push32((uint32_t)(EDX));
  /* 11e55d92 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 11e55d94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e55d97 push eax */
  push32((uint32_t)(EAX));
  /* 11e55d98 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e55d9a call 0x11e59440 */
  push32(0x11e55d9fu); f_11e59440();
  /* 11e55d9f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55da2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e55da5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e55da7 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e55daa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55dad add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55db0 push edx */
  push32((uint32_t)(EDX));
  /* 11e55db1 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 11e55db3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e55db6 push eax */
  push32((uint32_t)(EAX));
  /* 11e55db7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e55db9 call 0x11e59440 */
  push32(0x11e55dbeu); f_11e59440();
  /* 11e55dbe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55dc1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e55dc4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e55dc6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e55dc9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55dcc add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55dcf push edx */
  push32((uint32_t)(EDX));
  /* 11e55dd0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 11e55dd2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e55dd5 push eax */
  push32((uint32_t)(EAX));
  /* 11e55dd6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e55dd8 call 0x11e59440 */
  push32(0x11e55dddu); f_11e59440();
  /* 11e55ddd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55de0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e55de3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e55de5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e55de8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55deb add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55dee push edx */
  push32((uint32_t)(EDX));
  /* 11e55def push 0x4d */
  push32((uint32_t)(0x4du));
  /* 11e55df1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e55df4 push eax */
  push32((uint32_t)(EAX));
  /* 11e55df5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e55df7 call 0x11e59440 */
  push32(0x11e55dfcu); f_11e59440();
  /* 11e55dfc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55dff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e55e02 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e55e04 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e55e07 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55e0a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55e0d push edx */
  push32((uint32_t)(EDX));
  /* 11e55e0e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 11e55e10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e55e13 push eax */
  push32((uint32_t)(EAX));
  /* 11e55e14 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e55e16 call 0x11e59440 */
  push32(0x11e55e1bu); f_11e59440();
  /* 11e55e1b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55e1e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e55e21 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e55e23 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e55e26 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55e29 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55e2c push edx */
  push32((uint32_t)(EDX));
  /* 11e55e2d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 11e55e2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e55e32 push eax */
  push32((uint32_t)(EAX));
  /* 11e55e33 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e55e35 call 0x11e59440 */
  push32(0x11e55e3au); f_11e59440();
  /* 11e55e3a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55e3d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e55e40 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e55e42 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e55e45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55e48 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55e4b push edx */
  push32((uint32_t)(EDX));
  /* 11e55e4c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 11e55e4e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e55e51 push eax */
  push32((uint32_t)(EAX));
  /* 11e55e52 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e55e54 call 0x11e59440 */
  push32(0x11e55e59u); f_11e59440();
  /* 11e55e59 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55e5c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e55e5f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e55e61 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e55e64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55e67 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55e6a push edx */
  push32((uint32_t)(EDX));
  /* 11e55e6b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 11e55e6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e55e70 push eax */
  push32((uint32_t)(EAX));
  /* 11e55e71 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e55e73 call 0x11e59440 */
  push32(0x11e55e78u); f_11e59440();
  /* 11e55e78 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55e7b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e55e7e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e55e80 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e55e83 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55e86 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55e89 push edx */
  push32((uint32_t)(EDX));
  /* 11e55e8a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 11e55e8c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e55e8f push eax */
  push32((uint32_t)(EAX));
  /* 11e55e90 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e55e92 call 0x11e59440 */
  push32(0x11e55e97u); f_11e59440();
  /* 11e55e97 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55e9a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e55e9d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e55e9f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e55ea2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55ea5 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55ea8 push edx */
  push32((uint32_t)(EDX));
  /* 11e55ea9 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 11e55eab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e55eae push eax */
  push32((uint32_t)(EAX));
  /* 11e55eaf push 1 */
  push32((uint32_t)(0x1u));
  /* 11e55eb1 call 0x11e59440 */
  push32(0x11e55eb6u); f_11e59440();
  /* 11e55eb6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55eb9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e55ebc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e55ebe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e55ec1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55ec4 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55ec7 push edx */
  push32((uint32_t)(EDX));
  /* 11e55ec8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11e55eca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e55ecd push eax */
  push32((uint32_t)(EAX));
  /* 11e55ece push 1 */
  push32((uint32_t)(0x1u));
  /* 11e55ed0 call 0x11e59440 */
  push32(0x11e55ed5u); f_11e59440();
  /* 11e55ed5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55ed8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e55edb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e55edd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e55ee0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55ee3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55ee6 push edx */
  push32((uint32_t)(EDX));
  /* 11e55ee7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11e55ee9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e55eec push eax */
  push32((uint32_t)(EAX));
  /* 11e55eed push 1 */
  push32((uint32_t)(0x1u));
  /* 11e55eef call 0x11e59440 */
  push32(0x11e55ef4u); f_11e59440();
  /* 11e55ef4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55ef7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e55efa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e55efc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e55eff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55f02 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55f08 push edx */
  push32((uint32_t)(EDX));
  /* 11e55f09 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 11e55f0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e55f0e push eax */
  push32((uint32_t)(EAX));
  /* 11e55f0f push 1 */
  push32((uint32_t)(0x1u));
  /* 11e55f11 call 0x11e59440 */
  push32(0x11e55f16u); f_11e59440();
  /* 11e55f16 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55f19 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e55f1c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e55f1e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e55f21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55f24 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55f2a push edx */
  push32((uint32_t)(EDX));
  /* 11e55f2b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11e55f2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e55f30 push eax */
  push32((uint32_t)(EAX));
  /* 11e55f31 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e55f33 call 0x11e59440 */
  push32(0x11e55f38u); f_11e59440();
  /* 11e55f38 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55f3b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e55f3e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e55f40 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e55f43 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55f46 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55f4c push edx */
  push32((uint32_t)(EDX));
  /* 11e55f4d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11e55f4f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e55f52 push eax */
  push32((uint32_t)(EAX));
  /* 11e55f53 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e55f55 call 0x11e59440 */
  push32(0x11e55f5au); f_11e59440();
  /* 11e55f5a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55f5d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e55f60 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e55f62 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e55f65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55f68 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55f6e push edx */
  push32((uint32_t)(EDX));
  /* 11e55f6f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11e55f71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e55f74 push eax */
  push32((uint32_t)(EAX));
  /* 11e55f75 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e55f77 call 0x11e59440 */
  push32(0x11e55f7cu); f_11e59440();
  /* 11e55f7c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55f7f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e55f82 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e55f84 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e55f87 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55f8a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55f90 push edx */
  push32((uint32_t)(EDX));
  /* 11e55f91 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11e55f93 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e55f96 push eax */
  push32((uint32_t)(EAX));
  /* 11e55f97 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e55f99 call 0x11e59440 */
  push32(0x11e55f9eu); f_11e59440();
  /* 11e55f9e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55fa1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e55fa4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e55fa6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e55fa9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55fac add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55fb2 push edx */
  push32((uint32_t)(EDX));
  /* 11e55fb3 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11e55fb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e55fb8 push eax */
  push32((uint32_t)(EAX));
  /* 11e55fb9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e55fbb call 0x11e59440 */
  push32(0x11e55fc0u); f_11e59440();
  /* 11e55fc0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55fc3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e55fc6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e55fc8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e55fcb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55fce add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55fd4 push edx */
  push32((uint32_t)(EDX));
  /* 11e55fd5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 11e55fd7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e55fda push eax */
  push32((uint32_t)(EAX));
  /* 11e55fdb push 1 */
  push32((uint32_t)(0x1u));
  /* 11e55fdd call 0x11e59440 */
  push32(0x11e55fe2u); f_11e59440();
  /* 11e55fe2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55fe5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e55fe8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e55fea mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e55fed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e55ff0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e55ff6 push edx */
  push32((uint32_t)(EDX));
  /* 11e55ff7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 11e55ff9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e55ffc push eax */
  push32((uint32_t)(EAX));
  /* 11e55ffd push 1 */
  push32((uint32_t)(0x1u));
  /* 11e55fff call 0x11e59440 */
  push32(0x11e56004u); f_11e59440();
  /* 11e56004 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56007 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e5600a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e5600c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e5600f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e56012 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56018 push edx */
  push32((uint32_t)(EDX));
  /* 11e56019 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11e5601b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e5601e push eax */
  push32((uint32_t)(EAX));
  /* 11e5601f push 1 */
  push32((uint32_t)(0x1u));
  /* 11e56021 call 0x11e59440 */
  push32(0x11e56026u); f_11e59440();
  /* 11e56026 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56029 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e5602c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e5602e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e56031 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e56034 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5603a push edx */
  push32((uint32_t)(EDX));
  /* 11e5603b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11e5603d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e56040 push eax */
  push32((uint32_t)(EAX));
  /* 11e56041 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e56043 call 0x11e59440 */
  push32(0x11e56048u); f_11e59440();
  /* 11e56048 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5604b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e5604e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e56050 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e56053 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e56056 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5605c push edx */
  push32((uint32_t)(EDX));
  /* 11e5605d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 11e56062 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e56065 push eax */
  push32((uint32_t)(EAX));
  /* 11e56066 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e56068 call 0x11e59440 */
  push32(0x11e5606du); f_11e59440();
  /* 11e5606d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56070 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e56073 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e56075 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e56078 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_11e5607b:;
  /* 11e5607b mov esp, ebp */
  ESP = (EBP);
  /* 11e5607d pop ebp */
  EBP = (pop32());
  /* 11e5607e ret  */
  ESPCHK(0x11e55af0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x11e56080 (779 bytes, 265 insns) */
void f_11e56080(void) {
  FTRACE(0x11e56080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e56080 push ebp */
  push32((uint32_t)(EBP));
  /* 11e56081 mov ebp, esp */
  EBP = (ESP);
  /* 11e56083 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e56087 jne 0x11e5608e */
  if (!C.zf) goto L_11e5608e;
  /* 11e56089 jmp 0x11e56389 */
  goto L_11e56389;
L_11e5608e:;
  /* 11e5608e push 2 */
  push32((uint32_t)(0x2u));
  /* 11e56090 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e56093 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11e56096 push ecx */
  push32((uint32_t)(ECX));
  /* 11e56097 call 0x11e4a4e0 */
  push32(0x11e5609cu); f_11e4a4e0();
  /* 11e5609c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5609f push 2 */
  push32((uint32_t)(0x2u));
  /* 11e560a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e560a4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11e560a7 push eax */
  push32((uint32_t)(EAX));
  /* 11e560a8 call 0x11e4a4e0 */
  push32(0x11e560adu); f_11e4a4e0();
  /* 11e560ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e560b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e560b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e560b5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11e560b8 push edx */
  push32((uint32_t)(EDX));
  /* 11e560b9 call 0x11e4a4e0 */
  push32(0x11e560beu); f_11e4a4e0();
  /* 11e560be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e560c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e560c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e560c6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11e560c9 push ecx */
  push32((uint32_t)(ECX));
  /* 11e560ca call 0x11e4a4e0 */
  push32(0x11e560cfu); f_11e4a4e0();
  /* 11e560cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e560d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e560d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e560d7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11e560da push eax */
  push32((uint32_t)(EAX));
  /* 11e560db call 0x11e4a4e0 */
  push32(0x11e560e0u); f_11e4a4e0();
  /* 11e560e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e560e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e560e5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e560e8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11e560eb push edx */
  push32((uint32_t)(EDX));
  /* 11e560ec call 0x11e4a4e0 */
  push32(0x11e560f1u); f_11e4a4e0();
  /* 11e560f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e560f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e560f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e560f9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e560fb push ecx */
  push32((uint32_t)(ECX));
  /* 11e560fc call 0x11e4a4e0 */
  push32(0x11e56101u); f_11e4a4e0();
  /* 11e56101 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56104 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e56106 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e56109 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 11e5610c push eax */
  push32((uint32_t)(EAX));
  /* 11e5610d call 0x11e4a4e0 */
  push32(0x11e56112u); f_11e4a4e0();
  /* 11e56112 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56115 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e56117 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5611a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 11e5611d push edx */
  push32((uint32_t)(EDX));
  /* 11e5611e call 0x11e4a4e0 */
  push32(0x11e56123u); f_11e4a4e0();
  /* 11e56123 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56126 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e56128 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5612b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 11e5612e push ecx */
  push32((uint32_t)(ECX));
  /* 11e5612f call 0x11e4a4e0 */
  push32(0x11e56134u); f_11e4a4e0();
  /* 11e56134 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56137 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e56139 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5613c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 11e5613f push eax */
  push32((uint32_t)(EAX));
  /* 11e56140 call 0x11e4a4e0 */
  push32(0x11e56145u); f_11e4a4e0();
  /* 11e56145 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56148 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e5614a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5614d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 11e56150 push edx */
  push32((uint32_t)(EDX));
  /* 11e56151 call 0x11e4a4e0 */
  push32(0x11e56156u); f_11e4a4e0();
  /* 11e56156 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56159 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e5615b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5615e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 11e56161 push ecx */
  push32((uint32_t)(ECX));
  /* 11e56162 call 0x11e4a4e0 */
  push32(0x11e56167u); f_11e4a4e0();
  /* 11e56167 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5616a push 2 */
  push32((uint32_t)(0x2u));
  /* 11e5616c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5616f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11e56172 push eax */
  push32((uint32_t)(EAX));
  /* 11e56173 call 0x11e4a4e0 */
  push32(0x11e56178u); f_11e4a4e0();
  /* 11e56178 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5617b push 2 */
  push32((uint32_t)(0x2u));
  /* 11e5617d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e56180 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 11e56183 push edx */
  push32((uint32_t)(EDX));
  /* 11e56184 call 0x11e4a4e0 */
  push32(0x11e56189u); f_11e4a4e0();
  /* 11e56189 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5618c push 2 */
  push32((uint32_t)(0x2u));
  /* 11e5618e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e56191 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 11e56194 push ecx */
  push32((uint32_t)(ECX));
  /* 11e56195 call 0x11e4a4e0 */
  push32(0x11e5619au); f_11e4a4e0();
  /* 11e5619a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5619d push 2 */
  push32((uint32_t)(0x2u));
  /* 11e5619f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e561a2 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 11e561a5 push eax */
  push32((uint32_t)(EAX));
  /* 11e561a6 call 0x11e4a4e0 */
  push32(0x11e561abu); f_11e4a4e0();
  /* 11e561ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e561ae push 2 */
  push32((uint32_t)(0x2u));
  /* 11e561b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e561b3 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 11e561b6 push edx */
  push32((uint32_t)(EDX));
  /* 11e561b7 call 0x11e4a4e0 */
  push32(0x11e561bcu); f_11e4a4e0();
  /* 11e561bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e561bf push 2 */
  push32((uint32_t)(0x2u));
  /* 11e561c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e561c4 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 11e561c7 push ecx */
  push32((uint32_t)(ECX));
  /* 11e561c8 call 0x11e4a4e0 */
  push32(0x11e561cdu); f_11e4a4e0();
  /* 11e561cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e561d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e561d2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e561d5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 11e561d8 push eax */
  push32((uint32_t)(EAX));
  /* 11e561d9 call 0x11e4a4e0 */
  push32(0x11e561deu); f_11e4a4e0();
  /* 11e561de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e561e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e561e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e561e6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11e561e9 push edx */
  push32((uint32_t)(EDX));
  /* 11e561ea call 0x11e4a4e0 */
  push32(0x11e561efu); f_11e4a4e0();
  /* 11e561ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e561f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e561f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e561f7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 11e561fa push ecx */
  push32((uint32_t)(ECX));
  /* 11e561fb call 0x11e4a4e0 */
  push32(0x11e56200u); f_11e4a4e0();
  /* 11e56200 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56203 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e56205 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e56208 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 11e5620b push eax */
  push32((uint32_t)(EAX));
  /* 11e5620c call 0x11e4a4e0 */
  push32(0x11e56211u); f_11e4a4e0();
  /* 11e56211 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56214 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e56216 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e56219 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 11e5621c push edx */
  push32((uint32_t)(EDX));
  /* 11e5621d call 0x11e4a4e0 */
  push32(0x11e56222u); f_11e4a4e0();
  /* 11e56222 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56225 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e56227 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5622a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 11e5622d push ecx */
  push32((uint32_t)(ECX));
  /* 11e5622e call 0x11e4a4e0 */
  push32(0x11e56233u); f_11e4a4e0();
  /* 11e56233 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56236 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e56238 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5623b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 11e5623e push eax */
  push32((uint32_t)(EAX));
  /* 11e5623f call 0x11e4a4e0 */
  push32(0x11e56244u); f_11e4a4e0();
  /* 11e56244 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56247 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e56249 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5624c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 11e5624f push edx */
  push32((uint32_t)(EDX));
  /* 11e56250 call 0x11e4a4e0 */
  push32(0x11e56255u); f_11e4a4e0();
  /* 11e56255 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56258 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e5625a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5625d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 11e56260 push ecx */
  push32((uint32_t)(ECX));
  /* 11e56261 call 0x11e4a4e0 */
  push32(0x11e56266u); f_11e4a4e0();
  /* 11e56266 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56269 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e5626b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5626e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 11e56271 push eax */
  push32((uint32_t)(EAX));
  /* 11e56272 call 0x11e4a4e0 */
  push32(0x11e56277u); f_11e4a4e0();
  /* 11e56277 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5627a push 2 */
  push32((uint32_t)(0x2u));
  /* 11e5627c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5627f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 11e56282 push edx */
  push32((uint32_t)(EDX));
  /* 11e56283 call 0x11e4a4e0 */
  push32(0x11e56288u); f_11e4a4e0();
  /* 11e56288 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5628b push 2 */
  push32((uint32_t)(0x2u));
  /* 11e5628d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e56290 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 11e56293 push ecx */
  push32((uint32_t)(ECX));
  /* 11e56294 call 0x11e4a4e0 */
  push32(0x11e56299u); f_11e4a4e0();
  /* 11e56299 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5629c push 2 */
  push32((uint32_t)(0x2u));
  /* 11e5629e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e562a1 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 11e562a4 push eax */
  push32((uint32_t)(EAX));
  /* 11e562a5 call 0x11e4a4e0 */
  push32(0x11e562aau); f_11e4a4e0();
  /* 11e562aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e562ad push 2 */
  push32((uint32_t)(0x2u));
  /* 11e562af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e562b2 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 11e562b8 push edx */
  push32((uint32_t)(EDX));
  /* 11e562b9 call 0x11e4a4e0 */
  push32(0x11e562beu); f_11e4a4e0();
  /* 11e562be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e562c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e562c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e562c6 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 11e562cc push ecx */
  push32((uint32_t)(ECX));
  /* 11e562cd call 0x11e4a4e0 */
  push32(0x11e562d2u); f_11e4a4e0();
  /* 11e562d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e562d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e562d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e562da mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 11e562e0 push eax */
  push32((uint32_t)(EAX));
  /* 11e562e1 call 0x11e4a4e0 */
  push32(0x11e562e6u); f_11e4a4e0();
  /* 11e562e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e562e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e562eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e562ee mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 11e562f4 push edx */
  push32((uint32_t)(EDX));
  /* 11e562f5 call 0x11e4a4e0 */
  push32(0x11e562fau); f_11e4a4e0();
  /* 11e562fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e562fd push 2 */
  push32((uint32_t)(0x2u));
  /* 11e562ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e56302 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 11e56308 push ecx */
  push32((uint32_t)(ECX));
  /* 11e56309 call 0x11e4a4e0 */
  push32(0x11e5630eu); f_11e4a4e0();
  /* 11e5630e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56311 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e56313 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e56316 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 11e5631c push eax */
  push32((uint32_t)(EAX));
  /* 11e5631d call 0x11e4a4e0 */
  push32(0x11e56322u); f_11e4a4e0();
  /* 11e56322 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56325 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e56327 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5632a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 11e56330 push edx */
  push32((uint32_t)(EDX));
  /* 11e56331 call 0x11e4a4e0 */
  push32(0x11e56336u); f_11e4a4e0();
  /* 11e56336 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56339 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e5633b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5633e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 11e56344 push ecx */
  push32((uint32_t)(ECX));
  /* 11e56345 call 0x11e4a4e0 */
  push32(0x11e5634au); f_11e4a4e0();
  /* 11e5634a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5634d push 2 */
  push32((uint32_t)(0x2u));
  /* 11e5634f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e56352 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 11e56358 push eax */
  push32((uint32_t)(EAX));
  /* 11e56359 call 0x11e4a4e0 */
  push32(0x11e5635eu); f_11e4a4e0();
  /* 11e5635e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56361 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e56363 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e56366 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 11e5636c push edx */
  push32((uint32_t)(EDX));
  /* 11e5636d call 0x11e4a4e0 */
  push32(0x11e56372u); f_11e4a4e0();
  /* 11e56372 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56375 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e56377 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5637a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 11e56380 push ecx */
  push32((uint32_t)(ECX));
  /* 11e56381 call 0x11e4a4e0 */
  push32(0x11e56386u); f_11e4a4e0();
  /* 11e56386 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e56389:;
  /* 11e56389 pop ebp */
  EBP = (pop32());
  /* 11e5638a ret  */
  ESPCHK(0x11e56080u, _esp0);
  ESP += 4; return;
}

/* FUN_10016390 @ 0x11e56390 (678 bytes, 180 insns) */
void f_11e56390(void) {
  FTRACE(0x11e56390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e56390 push ebp */
  push32((uint32_t)(EBP));
  /* 11e56391 mov ebp, esp */
  EBP = (ESP);
  /* 11e56393 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e56396 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11e5639d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e5639f mov ax, word ptr [0x11e76c12] */
  AX = (r16((uint32_t)(0x11e76c12)));
  /* 11e563a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e563a8 cmp dword ptr [0x11e76bb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e76bb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e563af je 0x11e5650a */
  if (C.zf) goto L_11e5650a;
  /* 11e563b5 push 0x11e76be0 */
  push32((uint32_t)(0x11e76be0u));
  /* 11e563ba push 0xe */
  push32((uint32_t)(0xeu));
  /* 11e563bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e563bf push ecx */
  push32((uint32_t)(ECX));
  /* 11e563c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e563c2 call 0x11e59440 */
  push32(0x11e563c7u); f_11e59440();
  /* 11e563c7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e563ca mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e563cd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11e563cf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11e563d2 push 0x11e76be4 */
  push32((uint32_t)(0x11e76be4u));
  /* 11e563d7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11e563d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e563dc push eax */
  push32((uint32_t)(EAX));
  /* 11e563dd push 1 */
  push32((uint32_t)(0x1u));
  /* 11e563df call 0x11e59440 */
  push32(0x11e563e4u); f_11e59440();
  /* 11e563e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e563e7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e563ea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e563ec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e563ef push 0x11e76be8 */
  push32((uint32_t)(0x11e76be8u));
  /* 11e563f4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11e563f6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e563f9 push edx */
  push32((uint32_t)(EDX));
  /* 11e563fa push 1 */
  push32((uint32_t)(0x1u));
  /* 11e563fc call 0x11e59440 */
  push32(0x11e56401u); f_11e59440();
  /* 11e56401 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56404 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e56407 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e56409 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e5640c mov edx, dword ptr [0x11e76be8] */
  EDX = (r32((uint32_t)(0x11e76be8)));
  /* 11e56412 push edx */
  push32((uint32_t)(EDX));
  /* 11e56413 call 0x11e56640 */
  push32(0x11e56418u); f_11e56640();
  /* 11e56418 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5641b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5641f je 0x11e56479 */
  if (C.zf) goto L_11e56479;
  /* 11e56421 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e56423 mov eax, dword ptr [0x11e76be0] */
  EAX = (r32((uint32_t)(0x11e76be0)));
  /* 11e56428 push eax */
  push32((uint32_t)(EAX));
  /* 11e56429 call 0x11e4a4e0 */
  push32(0x11e5642eu); f_11e4a4e0();
  /* 11e5642e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56431 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e56433 mov ecx, dword ptr [0x11e76be4] */
  ECX = (r32((uint32_t)(0x11e76be4)));
  /* 11e56439 push ecx */
  push32((uint32_t)(ECX));
  /* 11e5643a call 0x11e4a4e0 */
  push32(0x11e5643fu); f_11e4a4e0();
  /* 11e5643f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56442 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e56444 mov edx, dword ptr [0x11e76be8] */
  EDX = (r32((uint32_t)(0x11e76be8)));
  /* 11e5644a push edx */
  push32((uint32_t)(EDX));
  /* 11e5644b call 0x11e4a4e0 */
  push32(0x11e56450u); f_11e4a4e0();
  /* 11e56450 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56453 mov dword ptr [0x11e76be0], 0 */
  w32((uint32_t)(0x11e76be0), (0x0u));
  /* 11e5645d mov dword ptr [0x11e76be4], 0 */
  w32((uint32_t)(0x11e76be4), (0x0u));
  /* 11e56467 mov dword ptr [0x11e76be8], 0 */
  w32((uint32_t)(0x11e76be8), (0x0u));
  /* 11e56471 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e56474 jmp 0x11e56632 */
  goto L_11e56632;
L_11e56479:;
  /* 11e56479 mov eax, dword ptr [0x11e75eb0] */
  EAX = (r32((uint32_t)(0x11e75eb0)));
  /* 11e5647e cmp dword ptr [eax], 0x11e75e78 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x11e75e78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e56484 je 0x11e564c0 */
  if (C.zf) goto L_11e564c0;
  /* 11e56486 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e56488 mov ecx, dword ptr [0x11e75eb0] */
  ECX = (r32((uint32_t)(0x11e75eb0)));
  /* 11e5648e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e56490 push edx */
  push32((uint32_t)(EDX));
  /* 11e56491 call 0x11e4a4e0 */
  push32(0x11e56496u); f_11e4a4e0();
  /* 11e56496 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56499 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e5649b mov eax, dword ptr [0x11e75eb0] */
  EAX = (r32((uint32_t)(0x11e75eb0)));
  /* 11e564a0 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11e564a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e564a4 call 0x11e4a4e0 */
  push32(0x11e564a9u); f_11e4a4e0();
  /* 11e564a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e564ac push 2 */
  push32((uint32_t)(0x2u));
  /* 11e564ae mov edx, dword ptr [0x11e75eb0] */
  EDX = (r32((uint32_t)(0x11e75eb0)));
  /* 11e564b4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11e564b7 push eax */
  push32((uint32_t)(EAX));
  /* 11e564b8 call 0x11e4a4e0 */
  push32(0x11e564bdu); f_11e4a4e0();
  /* 11e564bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e564c0:;
  /* 11e564c0 mov ecx, dword ptr [0x11e75eb0] */
  ECX = (r32((uint32_t)(0x11e75eb0)));
  /* 11e564c6 mov edx, dword ptr [0x11e76be0] */
  EDX = (r32((uint32_t)(0x11e76be0)));
  /* 11e564cc mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11e564ce mov eax, dword ptr [0x11e75eb0] */
  EAX = (r32((uint32_t)(0x11e75eb0)));
  /* 11e564d3 mov ecx, dword ptr [0x11e76be4] */
  ECX = (r32((uint32_t)(0x11e76be4)));
  /* 11e564d9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11e564dc mov edx, dword ptr [0x11e75eb0] */
  EDX = (r32((uint32_t)(0x11e75eb0)));
  /* 11e564e2 mov eax, dword ptr [0x11e76be8] */
  EAX = (r32((uint32_t)(0x11e76be8)));
  /* 11e564e7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11e564ea mov ecx, dword ptr [0x11e75eb0] */
  ECX = (r32((uint32_t)(0x11e75eb0)));
  /* 11e564f0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e564f2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e564f4 mov byte ptr [0x11e74fc8], al */
  w8((uint32_t)(0x11e74fc8), (AL));
  /* 11e564f9 mov dword ptr [0x11e74fcc], 1 */
  w32((uint32_t)(0x11e74fcc), (0x1u));
  /* 11e56503 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e56505 jmp 0x11e56632 */
  goto L_11e56632;
L_11e5650a:;
  /* 11e5650a push 2 */
  push32((uint32_t)(0x2u));
  /* 11e5650c mov ecx, dword ptr [0x11e76be0] */
  ECX = (r32((uint32_t)(0x11e76be0)));
  /* 11e56512 push ecx */
  push32((uint32_t)(ECX));
  /* 11e56513 call 0x11e4a4e0 */
  push32(0x11e56518u); f_11e4a4e0();
  /* 11e56518 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5651b push 2 */
  push32((uint32_t)(0x2u));
  /* 11e5651d mov edx, dword ptr [0x11e76be4] */
  EDX = (r32((uint32_t)(0x11e76be4)));
  /* 11e56523 push edx */
  push32((uint32_t)(EDX));
  /* 11e56524 call 0x11e4a4e0 */
  push32(0x11e56529u); f_11e4a4e0();
  /* 11e56529 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5652c push 2 */
  push32((uint32_t)(0x2u));
  /* 11e5652e mov eax, dword ptr [0x11e76be8] */
  EAX = (r32((uint32_t)(0x11e76be8)));
  /* 11e56533 push eax */
  push32((uint32_t)(EAX));
  /* 11e56534 call 0x11e4a4e0 */
  push32(0x11e56539u); f_11e4a4e0();
  /* 11e56539 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5653c mov dword ptr [0x11e76be0], 0 */
  w32((uint32_t)(0x11e76be0), (0x0u));
  /* 11e56546 mov dword ptr [0x11e76be4], 0 */
  w32((uint32_t)(0x11e76be4), (0x0u));
  /* 11e56550 mov dword ptr [0x11e76be8], 0 */
  w32((uint32_t)(0x11e76be8), (0x0u));
  /* 11e5655a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 11e5655f push 0x11e7211c */
  push32((uint32_t)(0x11e7211cu));
  /* 11e56564 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e56566 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e56568 call 0x11e49a50 */
  push32(0x11e5656du); f_11e49a50();
  /* 11e5656d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56570 mov ecx, dword ptr [0x11e75eb0] */
  ECX = (r32((uint32_t)(0x11e75eb0)));
  /* 11e56576 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11e56578 mov edx, dword ptr [0x11e75eb0] */
  EDX = (r32((uint32_t)(0x11e75eb0)));
  /* 11e5657e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e56581 jne 0x11e5658b */
  if (!C.zf) goto L_11e5658b;
  /* 11e56583 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e56586 jmp 0x11e56632 */
  goto L_11e56632;
L_11e5658b:;
  /* 11e5658b push 0x11e720ec */
  push32((uint32_t)(0x11e720ecu));
  /* 11e56590 mov eax, dword ptr [0x11e75eb0] */
  EAX = (r32((uint32_t)(0x11e75eb0)));
  /* 11e56595 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e56597 push ecx */
  push32((uint32_t)(ECX));
  /* 11e56598 call 0x11e4d720 */
  push32(0x11e5659du); f_11e4d720();
  /* 11e5659d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e565a0 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 11e565a5 push 0x11e7211c */
  push32((uint32_t)(0x11e7211cu));
  /* 11e565aa push 2 */
  push32((uint32_t)(0x2u));
  /* 11e565ac push 2 */
  push32((uint32_t)(0x2u));
  /* 11e565ae call 0x11e49a50 */
  push32(0x11e565b3u); f_11e49a50();
  /* 11e565b3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e565b6 mov edx, dword ptr [0x11e75eb0] */
  EDX = (r32((uint32_t)(0x11e75eb0)));
  /* 11e565bc mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11e565bf mov eax, dword ptr [0x11e75eb0] */
  EAX = (r32((uint32_t)(0x11e75eb0)));
  /* 11e565c4 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e565c8 jne 0x11e565cf */
  if (!C.zf) goto L_11e565cf;
  /* 11e565ca or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e565cd jmp 0x11e56632 */
  goto L_11e56632;
L_11e565cf:;
  /* 11e565cf mov ecx, dword ptr [0x11e75eb0] */
  ECX = (r32((uint32_t)(0x11e75eb0)));
  /* 11e565d5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e565d8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11e565db push 0x92 */
  push32((uint32_t)(0x92u));
  /* 11e565e0 push 0x11e7211c */
  push32((uint32_t)(0x11e7211cu));
  /* 11e565e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e565e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e565e9 call 0x11e49a50 */
  push32(0x11e565eeu); f_11e49a50();
  /* 11e565ee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e565f1 mov ecx, dword ptr [0x11e75eb0] */
  ECX = (r32((uint32_t)(0x11e75eb0)));
  /* 11e565f7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11e565fa mov edx, dword ptr [0x11e75eb0] */
  EDX = (r32((uint32_t)(0x11e75eb0)));
  /* 11e56600 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e56604 jne 0x11e5660b */
  if (!C.zf) goto L_11e5660b;
  /* 11e56606 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e56609 jmp 0x11e56632 */
  goto L_11e56632;
L_11e5660b:;
  /* 11e5660b mov eax, dword ptr [0x11e75eb0] */
  EAX = (r32((uint32_t)(0x11e75eb0)));
  /* 11e56610 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11e56613 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11e56616 mov edx, dword ptr [0x11e75eb0] */
  EDX = (r32((uint32_t)(0x11e75eb0)));
  /* 11e5661c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e5661e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11e56620 mov byte ptr [0x11e74fc8], cl */
  w8((uint32_t)(0x11e74fc8), (CL));
  /* 11e56626 mov dword ptr [0x11e74fcc], 1 */
  w32((uint32_t)(0x11e74fcc), (0x1u));
  /* 11e56630 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e56632:;
  /* 11e56632 mov esp, ebp */
  ESP = (EBP);
  /* 11e56634 pop ebp */
  EBP = (pop32());
  /* 11e56635 ret  */
  ESPCHK(0x11e56390u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x11e56640 (125 bytes, 49 insns) */
void f_11e56640(void) {
  FTRACE(0x11e56640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e56640 push ebp */
  push32((uint32_t)(EBP));
  /* 11e56641 mov ebp, esp */
  EBP = (ESP);
  /* 11e56643 push ecx */
  push32((uint32_t)(ECX));
L_11e56644:;
  /* 11e56644 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e56647 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e5664a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e5664c je 0x11e566b9 */
  if (C.zf) goto L_11e566b9;
  /* 11e5664e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e56651 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11e56654 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e56657 jl 0x11e5667d */
  if ((C.sf!=C.of)) goto L_11e5667d;
  /* 11e56659 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5665c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11e5665f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e56662 jg 0x11e5667d */
  if ((!C.zf&&C.sf==C.of)) goto L_11e5667d;
  /* 11e56664 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e56667 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e5666a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e5666d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e56670 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11e56672 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e56675 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56678 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11e5667b jmp 0x11e566b7 */
  goto L_11e566b7;
L_11e5667d:;
  /* 11e5667d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e56680 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11e56683 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e56686 jne 0x11e566ae */
  if (!C.zf) goto L_11e566ae;
  /* 11e56688 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5668b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11e5668e:;
  /* 11e5668e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e56691 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e56694 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11e56697 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11e56699 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e5669c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5669f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e566a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e566a5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11e566a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e566aa jne 0x11e5668e */
  if (!C.zf) goto L_11e5668e;
  /* 11e566ac jmp 0x11e566b7 */
  goto L_11e566b7;
L_11e566ae:;
  /* 11e566ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e566b1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e566b4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11e566b7:;
  /* 11e566b7 jmp 0x11e56644 */
  goto L_11e56644;
L_11e566b9:;
  /* 11e566b9 mov esp, ebp */
  ESP = (EBP);
  /* 11e566bb pop ebp */
  EBP = (pop32());
  /* 11e566bc ret  */
  ESPCHK(0x11e56640u, _esp0);
  ESP += 4; return;
}

/* FUN_100166c0 @ 0x11e566c0 (304 bytes, 85 insns) */
void f_11e566c0(void) {
  FTRACE(0x11e566c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e566c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e566c1 mov ebp, esp */
  EBP = (ESP);
  /* 11e566c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e566c4 cmp dword ptr [0x11e76bac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e76bac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e566cb je 0x11e5678c */
  if (C.zf) goto L_11e5678c;
  /* 11e566d1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 11e566d3 push 0x11e72128 */
  push32((uint32_t)(0x11e72128u));
  /* 11e566d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e566da push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11e566dc push 1 */
  push32((uint32_t)(0x1u));
  /* 11e566de call 0x11e49e60 */
  push32(0x11e566e3u); f_11e49e60();
  /* 11e566e3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e566e6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e566e9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e566ed jne 0x11e566f9 */
  if (!C.zf) goto L_11e566f9;
  /* 11e566ef mov eax, 1 */
  EAX = (0x1u);
  /* 11e566f4 jmp 0x11e567ec */
  goto L_11e567ec;
L_11e566f9:;
  /* 11e566f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e566fc push eax */
  push32((uint32_t)(EAX));
  /* 11e566fd call 0x11e567f0 */
  push32(0x11e56702u); f_11e567f0();
  /* 11e56702 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56705 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e56707 je 0x11e5672d */
  if (C.zf) goto L_11e5672d;
  /* 11e56709 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e5670c push ecx */
  push32((uint32_t)(ECX));
  /* 11e5670d call 0x11e56a80 */
  push32(0x11e56712u); f_11e56a80();
  /* 11e56712 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56715 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e56717 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e5671a push edx */
  push32((uint32_t)(EDX));
  /* 11e5671b call 0x11e4a4e0 */
  push32(0x11e56720u); f_11e4a4e0();
  /* 11e56720 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56723 mov eax, 1 */
  EAX = (0x1u);
  /* 11e56728 jmp 0x11e567ec */
  goto L_11e567ec;
L_11e5672d:;
  /* 11e5672d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e56730 mov ecx, dword ptr [0x11e75eb0] */
  ECX = (r32((uint32_t)(0x11e75eb0)));
  /* 11e56736 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e56738 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11e5673a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e5673d mov ecx, dword ptr [0x11e75eb0] */
  ECX = (r32((uint32_t)(0x11e75eb0)));
  /* 11e56743 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e56746 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11e56749 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e5674c mov ecx, dword ptr [0x11e75eb0] */
  ECX = (r32((uint32_t)(0x11e75eb0)));
  /* 11e56752 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11e56755 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11e56758 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e5675b mov dword ptr [0x11e75eb0], eax */
  w32((uint32_t)(0x11e75eb0), (EAX));
  /* 11e56760 mov ecx, dword ptr [0x11e76bec] */
  ECX = (r32((uint32_t)(0x11e76bec)));
  /* 11e56766 push ecx */
  push32((uint32_t)(ECX));
  /* 11e56767 call 0x11e56a80 */
  push32(0x11e5676cu); f_11e56a80();
  /* 11e5676c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5676f push 2 */
  push32((uint32_t)(0x2u));
  /* 11e56771 mov edx, dword ptr [0x11e76bec] */
  EDX = (r32((uint32_t)(0x11e76bec)));
  /* 11e56777 push edx */
  push32((uint32_t)(EDX));
  /* 11e56778 call 0x11e4a4e0 */
  push32(0x11e5677du); f_11e4a4e0();
  /* 11e5677d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56780 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e56783 mov dword ptr [0x11e76bec], eax */
  w32((uint32_t)(0x11e76bec), (EAX));
  /* 11e56788 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e5678a jmp 0x11e567ec */
  goto L_11e567ec;
L_11e5678c:;
  /* 11e5678c mov ecx, dword ptr [0x11e75eb0] */
  ECX = (r32((uint32_t)(0x11e75eb0)));
  /* 11e56792 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e56794 mov dword ptr [0x11e75e80], edx */
  w32((uint32_t)(0x11e75e80), (EDX));
  /* 11e5679a mov eax, dword ptr [0x11e75eb0] */
  EAX = (r32((uint32_t)(0x11e75eb0)));
  /* 11e5679f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11e567a2 mov dword ptr [0x11e75e84], ecx */
  w32((uint32_t)(0x11e75e84), (ECX));
  /* 11e567a8 mov edx, dword ptr [0x11e75eb0] */
  EDX = (r32((uint32_t)(0x11e75eb0)));
  /* 11e567ae mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11e567b1 mov dword ptr [0x11e75e88], eax */
  w32((uint32_t)(0x11e75e88), (EAX));
  /* 11e567b6 mov dword ptr [0x11e75eb0], 0x11e75e80 */
  w32((uint32_t)(0x11e75eb0), (0x11e75e80u));
  /* 11e567c0 mov ecx, dword ptr [0x11e76bec] */
  ECX = (r32((uint32_t)(0x11e76bec)));
  /* 11e567c6 push ecx */
  push32((uint32_t)(ECX));
  /* 11e567c7 call 0x11e56a80 */
  push32(0x11e567ccu); f_11e56a80();
  /* 11e567cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e567cf push 2 */
  push32((uint32_t)(0x2u));
  /* 11e567d1 mov edx, dword ptr [0x11e76bec] */
  EDX = (r32((uint32_t)(0x11e76bec)));
  /* 11e567d7 push edx */
  push32((uint32_t)(EDX));
  /* 11e567d8 call 0x11e4a4e0 */
  push32(0x11e567ddu); f_11e4a4e0();
  /* 11e567dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e567e0 mov dword ptr [0x11e76bec], 0 */
  w32((uint32_t)(0x11e76bec), (0x0u));
  /* 11e567ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e567ec:;
  /* 11e567ec mov esp, ebp */
  ESP = (EBP);
  /* 11e567ee pop ebp */
  EBP = (pop32());
  /* 11e567ef ret  */
  ESPCHK(0x11e566c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100167f0 @ 0x11e567f0 (525 bytes, 200 insns) */
void f_11e567f0(void) {
  FTRACE(0x11e567f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e567f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e567f1 mov ebp, esp */
  EBP = (ESP);
  /* 11e567f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e567f6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11e567fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e567ff mov ax, word ptr [0x11e76c0c] */
  AX = (r16((uint32_t)(0x11e76c0c)));
  /* 11e56805 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e56808 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5680c jne 0x11e56816 */
  if (!C.zf) goto L_11e56816;
  /* 11e5680e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e56811 jmp 0x11e569f9 */
  goto L_11e569f9;
L_11e56816:;
  /* 11e56816 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e56819 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5681c push ecx */
  push32((uint32_t)(ECX));
  /* 11e5681d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11e5681f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e56822 push edx */
  push32((uint32_t)(EDX));
  /* 11e56823 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e56825 call 0x11e59440 */
  push32(0x11e5682au); f_11e59440();
  /* 11e5682a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5682d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e56830 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e56832 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e56835 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e56838 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5683b push edx */
  push32((uint32_t)(EDX));
  /* 11e5683c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11e5683e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e56841 push eax */
  push32((uint32_t)(EAX));
  /* 11e56842 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e56844 call 0x11e59440 */
  push32(0x11e56849u); f_11e59440();
  /* 11e56849 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5684c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e5684f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e56851 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e56854 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e56857 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5685a push edx */
  push32((uint32_t)(EDX));
  /* 11e5685b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11e5685d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e56860 push eax */
  push32((uint32_t)(EAX));
  /* 11e56861 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e56863 call 0x11e59440 */
  push32(0x11e56868u); f_11e59440();
  /* 11e56868 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5686b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e5686e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e56870 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e56873 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e56876 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56879 push edx */
  push32((uint32_t)(EDX));
  /* 11e5687a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11e5687c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e5687f push eax */
  push32((uint32_t)(EAX));
  /* 11e56880 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e56882 call 0x11e59440 */
  push32(0x11e56887u); f_11e59440();
  /* 11e56887 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5688a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e5688d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e5688f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e56892 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e56895 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56898 push edx */
  push32((uint32_t)(EDX));
  /* 11e56899 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11e5689b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e5689e push eax */
  push32((uint32_t)(EAX));
  /* 11e5689f push 1 */
  push32((uint32_t)(0x1u));
  /* 11e568a1 call 0x11e59440 */
  push32(0x11e568a6u); f_11e59440();
  /* 11e568a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e568a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e568ac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e568ae mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e568b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e568b4 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11e568b7 push eax */
  push32((uint32_t)(EAX));
  /* 11e568b8 call 0x11e56a00 */
  push32(0x11e568bdu); f_11e56a00();
  /* 11e568bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e568c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e568c3 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e568c6 push ecx */
  push32((uint32_t)(ECX));
  /* 11e568c7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 11e568c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e568cc push edx */
  push32((uint32_t)(EDX));
  /* 11e568cd push 1 */
  push32((uint32_t)(0x1u));
  /* 11e568cf call 0x11e59440 */
  push32(0x11e568d4u); f_11e59440();
  /* 11e568d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e568d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e568da or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e568dc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e568df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e568e2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e568e5 push edx */
  push32((uint32_t)(EDX));
  /* 11e568e6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 11e568e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e568eb push eax */
  push32((uint32_t)(EAX));
  /* 11e568ec push 1 */
  push32((uint32_t)(0x1u));
  /* 11e568ee call 0x11e59440 */
  push32(0x11e568f3u); f_11e59440();
  /* 11e568f3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e568f6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e568f9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e568fb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e568fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e56901 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56904 push edx */
  push32((uint32_t)(EDX));
  /* 11e56905 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11e56907 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e5690a push eax */
  push32((uint32_t)(EAX));
  /* 11e5690b push 0 */
  push32((uint32_t)(0x0u));
  /* 11e5690d call 0x11e59440 */
  push32(0x11e56912u); f_11e59440();
  /* 11e56912 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56915 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e56918 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e5691a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e5691d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e56920 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56923 push edx */
  push32((uint32_t)(EDX));
  /* 11e56924 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11e56926 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e56929 push eax */
  push32((uint32_t)(EAX));
  /* 11e5692a push 0 */
  push32((uint32_t)(0x0u));
  /* 11e5692c call 0x11e59440 */
  push32(0x11e56931u); f_11e59440();
  /* 11e56931 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56934 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e56937 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e56939 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e5693c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5693f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56942 push edx */
  push32((uint32_t)(EDX));
  /* 11e56943 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 11e56945 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e56948 push eax */
  push32((uint32_t)(EAX));
  /* 11e56949 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e5694b call 0x11e59440 */
  push32(0x11e56950u); f_11e59440();
  /* 11e56950 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56953 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e56956 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e56958 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e5695b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5695e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56961 push edx */
  push32((uint32_t)(EDX));
  /* 11e56962 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 11e56964 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e56967 push eax */
  push32((uint32_t)(EAX));
  /* 11e56968 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e5696a call 0x11e59440 */
  push32(0x11e5696fu); f_11e59440();
  /* 11e5696f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56972 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e56975 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e56977 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e5697a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5697d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56980 push edx */
  push32((uint32_t)(EDX));
  /* 11e56981 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 11e56983 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e56986 push eax */
  push32((uint32_t)(EAX));
  /* 11e56987 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e56989 call 0x11e59440 */
  push32(0x11e5698eu); f_11e59440();
  /* 11e5698e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56991 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e56994 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e56996 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e56999 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5699c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5699f push edx */
  push32((uint32_t)(EDX));
  /* 11e569a0 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 11e569a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e569a5 push eax */
  push32((uint32_t)(EAX));
  /* 11e569a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e569a8 call 0x11e59440 */
  push32(0x11e569adu); f_11e59440();
  /* 11e569ad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e569b0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e569b3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e569b5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e569b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e569bb add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e569be push edx */
  push32((uint32_t)(EDX));
  /* 11e569bf push 0x52 */
  push32((uint32_t)(0x52u));
  /* 11e569c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e569c4 push eax */
  push32((uint32_t)(EAX));
  /* 11e569c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e569c7 call 0x11e59440 */
  push32(0x11e569ccu); f_11e59440();
  /* 11e569cc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e569cf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e569d2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e569d4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e569d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e569da add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e569dd push edx */
  push32((uint32_t)(EDX));
  /* 11e569de push 0x53 */
  push32((uint32_t)(0x53u));
  /* 11e569e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e569e3 push eax */
  push32((uint32_t)(EAX));
  /* 11e569e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e569e6 call 0x11e59440 */
  push32(0x11e569ebu); f_11e59440();
  /* 11e569eb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e569ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e569f1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e569f3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e569f6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11e569f9:;
  /* 11e569f9 mov esp, ebp */
  ESP = (EBP);
  /* 11e569fb pop ebp */
  EBP = (pop32());
  /* 11e569fc ret  */
  ESPCHK(0x11e567f0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x11e56a00 (125 bytes, 49 insns) */
void f_11e56a00(void) {
  FTRACE(0x11e56a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e56a00 push ebp */
  push32((uint32_t)(EBP));
  /* 11e56a01 mov ebp, esp */
  EBP = (ESP);
  /* 11e56a03 push ecx */
  push32((uint32_t)(ECX));
L_11e56a04:;
  /* 11e56a04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e56a07 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e56a0a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e56a0c je 0x11e56a79 */
  if (C.zf) goto L_11e56a79;
  /* 11e56a0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e56a11 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11e56a14 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e56a17 jl 0x11e56a3d */
  if ((C.sf!=C.of)) goto L_11e56a3d;
  /* 11e56a19 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e56a1c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11e56a1f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e56a22 jg 0x11e56a3d */
  if ((!C.zf&&C.sf==C.of)) goto L_11e56a3d;
  /* 11e56a24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e56a27 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e56a2a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e56a2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e56a30 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11e56a32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e56a35 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56a38 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11e56a3b jmp 0x11e56a77 */
  goto L_11e56a77;
L_11e56a3d:;
  /* 11e56a3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e56a40 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11e56a43 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e56a46 jne 0x11e56a6e */
  if (!C.zf) goto L_11e56a6e;
  /* 11e56a48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e56a4b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11e56a4e:;
  /* 11e56a4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e56a51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e56a54 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11e56a57 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11e56a59 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e56a5c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56a5f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e56a62 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e56a65 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11e56a68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e56a6a jne 0x11e56a4e */
  if (!C.zf) goto L_11e56a4e;
  /* 11e56a6c jmp 0x11e56a77 */
  goto L_11e56a77;
L_11e56a6e:;
  /* 11e56a6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e56a71 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56a74 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11e56a77:;
  /* 11e56a77 jmp 0x11e56a04 */
  goto L_11e56a04;
L_11e56a79:;
  /* 11e56a79 mov esp, ebp */
  ESP = (EBP);
  /* 11e56a7b pop ebp */
  EBP = (pop32());
  /* 11e56a7c ret  */
  ESPCHK(0x11e56a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10016a80 @ 0x11e56a80 (147 bytes, 52 insns) */
void f_11e56a80(void) {
  FTRACE(0x11e56a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e56a80 push ebp */
  push32((uint32_t)(EBP));
  /* 11e56a81 mov ebp, esp */
  EBP = (ESP);
  /* 11e56a83 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e56a87 jne 0x11e56a8e */
  if (!C.zf) goto L_11e56a8e;
  /* 11e56a89 jmp 0x11e56b11 */
  goto L_11e56b11;
L_11e56a8e:;
  /* 11e56a8e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e56a91 cmp dword ptr [eax + 0xc], 0x11e76c48 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x11e76c48u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e56a98 je 0x11e56b11 */
  if (C.zf) goto L_11e56b11;
  /* 11e56a9a push 2 */
  push32((uint32_t)(0x2u));
  /* 11e56a9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e56a9f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11e56aa2 push edx */
  push32((uint32_t)(EDX));
  /* 11e56aa3 call 0x11e4a4e0 */
  push32(0x11e56aa8u); f_11e4a4e0();
  /* 11e56aa8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56aab push 2 */
  push32((uint32_t)(0x2u));
  /* 11e56aad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e56ab0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11e56ab3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e56ab4 call 0x11e4a4e0 */
  push32(0x11e56ab9u); f_11e4a4e0();
  /* 11e56ab9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56abc push 2 */
  push32((uint32_t)(0x2u));
  /* 11e56abe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e56ac1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11e56ac4 push eax */
  push32((uint32_t)(EAX));
  /* 11e56ac5 call 0x11e4a4e0 */
  push32(0x11e56acau); f_11e4a4e0();
  /* 11e56aca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56acd push 2 */
  push32((uint32_t)(0x2u));
  /* 11e56acf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e56ad2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11e56ad5 push edx */
  push32((uint32_t)(EDX));
  /* 11e56ad6 call 0x11e4a4e0 */
  push32(0x11e56adbu); f_11e4a4e0();
  /* 11e56adb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56ade push 2 */
  push32((uint32_t)(0x2u));
  /* 11e56ae0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e56ae3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11e56ae6 push ecx */
  push32((uint32_t)(ECX));
  /* 11e56ae7 call 0x11e4a4e0 */
  push32(0x11e56aecu); f_11e4a4e0();
  /* 11e56aec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56aef push 2 */
  push32((uint32_t)(0x2u));
  /* 11e56af1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e56af4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 11e56af7 push eax */
  push32((uint32_t)(EAX));
  /* 11e56af8 call 0x11e4a4e0 */
  push32(0x11e56afdu); f_11e4a4e0();
  /* 11e56afd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56b00 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e56b02 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e56b05 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 11e56b08 push edx */
  push32((uint32_t)(EDX));
  /* 11e56b09 call 0x11e4a4e0 */
  push32(0x11e56b0eu); f_11e4a4e0();
  /* 11e56b0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e56b11:;
  /* 11e56b11 pop ebp */
  EBP = (pop32());
  /* 11e56b12 ret  */
  ESPCHK(0x11e56a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10016b20 @ 0x11e56b20 (928 bytes, 284 insns) */
void f_11e56b20(void) {
  FTRACE(0x11e56b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e56b20 push ebp */
  push32((uint32_t)(EBP));
  /* 11e56b21 mov ebp, esp */
  EBP = (ESP);
  /* 11e56b23 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e56b26 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11e56b2d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11e56b34 cmp dword ptr [0x11e76ba8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e76ba8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e56b3b je 0x11e56e71 */
  if (C.zf) goto L_11e56e71;
  /* 11e56b41 cmp dword ptr [0x11e76bb8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e76bb8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e56b48 jne 0x11e56b70 */
  if (!C.zf) goto L_11e56b70;
  /* 11e56b4a push 0x11e76bb8 */
  push32((uint32_t)(0x11e76bb8u));
  /* 11e56b4f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 11e56b54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e56b56 mov ax, word ptr [0x11e76c04] */
  AX = (r16((uint32_t)(0x11e76c04)));
  /* 11e56b5c push eax */
  push32((uint32_t)(EAX));
  /* 11e56b5d push 0 */
  push32((uint32_t)(0x0u));
  /* 11e56b5f call 0x11e59440 */
  push32(0x11e56b64u); f_11e59440();
  /* 11e56b64 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56b67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e56b69 je 0x11e56b70 */
  if (C.zf) goto L_11e56b70;
  /* 11e56b6b jmp 0x11e56e32 */
  goto L_11e56e32;
L_11e56b70:;
  /* 11e56b70 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 11e56b72 push 0x11e72134 */
  push32((uint32_t)(0x11e72134u));
  /* 11e56b77 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e56b79 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11e56b7e call 0x11e49a50 */
  push32(0x11e56b83u); f_11e49a50();
  /* 11e56b83 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56b86 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11e56b89 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11e56b8b push 0x11e72134 */
  push32((uint32_t)(0x11e72134u));
  /* 11e56b90 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e56b92 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11e56b97 call 0x11e49a50 */
  push32(0x11e56b9cu); f_11e49a50();
  /* 11e56b9c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56b9f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11e56ba2 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11e56ba4 push 0x11e72134 */
  push32((uint32_t)(0x11e72134u));
  /* 11e56ba9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e56bab push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11e56bb0 call 0x11e49a50 */
  push32(0x11e56bb5u); f_11e49a50();
  /* 11e56bb5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56bb8 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11e56bbb push 0x62 */
  push32((uint32_t)(0x62u));
  /* 11e56bbd push 0x11e72134 */
  push32((uint32_t)(0x11e72134u));
  /* 11e56bc2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e56bc4 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11e56bc9 call 0x11e49a50 */
  push32(0x11e56bceu); f_11e49a50();
  /* 11e56bce add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56bd1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11e56bd4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e56bd8 je 0x11e56bec */
  if (C.zf) goto L_11e56bec;
  /* 11e56bda cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e56bde je 0x11e56bec */
  if (C.zf) goto L_11e56bec;
  /* 11e56be0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e56be4 je 0x11e56bec */
  if (C.zf) goto L_11e56bec;
  /* 11e56be6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e56bea jne 0x11e56bf1 */
  if (!C.zf) goto L_11e56bf1;
L_11e56bec:;
  /* 11e56bec jmp 0x11e56e32 */
  goto L_11e56e32;
L_11e56bf1:;
  /* 11e56bf1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e56bf4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11e56bf7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11e56bfe jmp 0x11e56c09 */
  goto L_11e56c09;
L_11e56c00:;
  /* 11e56c00 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e56c03 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56c06 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11e56c09:;
  /* 11e56c09 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e56c10 jge 0x11e56c25 */
  if ((C.sf==C.of)) goto L_11e56c25;
  /* 11e56c12 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e56c15 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 11e56c18 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11e56c1a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e56c1d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56c20 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11e56c23 jmp 0x11e56c00 */
  goto L_11e56c00;
L_11e56c25:;
  /* 11e56c25 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11e56c28 push eax */
  push32((uint32_t)(EAX));
  /* 11e56c29 mov ecx, dword ptr [0x11e76bb8] */
  ECX = (r32((uint32_t)(0x11e76bb8)));
  /* 11e56c2f push ecx */
  push32((uint32_t)(ECX));
  /* 11e56c30 call dword ptr [0x11e79338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e79338))), 0x11e56c36u);
  /* 11e56c36 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e56c38 jne 0x11e56c3f */
  if (!C.zf) goto L_11e56c3f;
  /* 11e56c3a jmp 0x11e56e32 */
  goto L_11e56e32;
L_11e56c3f:;
  /* 11e56c3f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e56c43 jbe 0x11e56c4a */
  if ((C.cf||C.zf)) goto L_11e56c4a;
  /* 11e56c45 jmp 0x11e56e32 */
  goto L_11e56e32;
L_11e56c4a:;
  /* 11e56c4a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e56c4d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e56c53 mov dword ptr [0x11e74fc4], edx */
  w32((uint32_t)(0x11e74fc4), (EDX));
  /* 11e56c59 cmp dword ptr [0x11e74fc4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e74fc4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e56c60 jle 0x11e56cb9 */
  if ((C.zf||C.sf!=C.of)) goto L_11e56cb9;
  /* 11e56c62 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 11e56c65 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11e56c68 jmp 0x11e56c73 */
  goto L_11e56c73;
L_11e56c6a:;
  /* 11e56c6a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e56c6d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56c70 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_11e56c73:;
  /* 11e56c73 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e56c76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e56c78 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e56c7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e56c7c je 0x11e56cb9 */
  if (C.zf) goto L_11e56cb9;
  /* 11e56c7e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e56c81 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e56c83 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11e56c86 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e56c88 je 0x11e56cb9 */
  if (C.zf) goto L_11e56cb9;
  /* 11e56c8a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e56c8d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e56c8f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11e56c91 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11e56c94 jmp 0x11e56c9f */
  goto L_11e56c9f;
L_11e56c96:;
  /* 11e56c96 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e56c99 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56c9c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11e56c9f:;
  /* 11e56c9f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e56ca2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e56ca4 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11e56ca7 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e56caa jg 0x11e56cb7 */
  if ((!C.zf&&C.sf==C.of)) goto L_11e56cb7;
  /* 11e56cac mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e56caf add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56cb2 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11e56cb5 jmp 0x11e56c96 */
  goto L_11e56c96;
L_11e56cb7:;
  /* 11e56cb7 jmp 0x11e56c6a */
  goto L_11e56c6a;
L_11e56cb9:;
  /* 11e56cb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e56cbb push 0 */
  push32((uint32_t)(0x0u));
  /* 11e56cbd push 0 */
  push32((uint32_t)(0x0u));
  /* 11e56cbf mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e56cc2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56cc5 push eax */
  push32((uint32_t)(EAX));
  /* 11e56cc6 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11e56ccb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e56cce push ecx */
  push32((uint32_t)(ECX));
  /* 11e56ccf push 1 */
  push32((uint32_t)(0x1u));
  /* 11e56cd1 call 0x11e529a0 */
  push32(0x11e56cd6u); f_11e529a0();
  /* 11e56cd6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56cd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e56cdb jne 0x11e56ce2 */
  if (!C.zf) goto L_11e56ce2;
  /* 11e56cdd jmp 0x11e56e32 */
  goto L_11e56e32;
L_11e56ce2:;
  /* 11e56ce2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e56ce5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 11e56cea mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e56ced mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11e56cf0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11e56cf7 jmp 0x11e56d02 */
  goto L_11e56d02;
L_11e56cf9:;
  /* 11e56cf9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e56cfc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56cff mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11e56d02:;
  /* 11e56d02 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e56d09 jge 0x11e56d20 */
  if ((C.sf==C.of)) goto L_11e56d20;
  /* 11e56d0b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e56d0e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 11e56d12 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 11e56d15 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e56d18 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56d1b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11e56d1e jmp 0x11e56cf9 */
  goto L_11e56cf9;
L_11e56d20:;
  /* 11e56d20 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e56d22 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e56d24 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e56d27 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56d2a push edx */
  push32((uint32_t)(EDX));
  /* 11e56d2b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11e56d30 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e56d33 push eax */
  push32((uint32_t)(EAX));
  /* 11e56d34 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e56d36 call 0x11e596e0 */
  push32(0x11e56d3bu); f_11e596e0();
  /* 11e56d3b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56d3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e56d40 jne 0x11e56d47 */
  if (!C.zf) goto L_11e56d47;
  /* 11e56d42 jmp 0x11e56e32 */
  goto L_11e56e32;
L_11e56d47:;
  /* 11e56d47 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e56d4a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 11e56d4f cmp dword ptr [0x11e74fc4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e74fc4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e56d56 jle 0x11e56db3 */
  if ((C.zf||C.sf!=C.of)) goto L_11e56db3;
  /* 11e56d58 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 11e56d5b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11e56d5e jmp 0x11e56d69 */
  goto L_11e56d69;
L_11e56d60:;
  /* 11e56d60 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e56d63 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56d66 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11e56d69:;
  /* 11e56d69 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e56d6c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e56d6e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11e56d70 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e56d72 je 0x11e56db3 */
  if (C.zf) goto L_11e56db3;
  /* 11e56d74 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e56d77 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e56d79 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11e56d7c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e56d7e je 0x11e56db3 */
  if (C.zf) goto L_11e56db3;
  /* 11e56d80 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e56d83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e56d85 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e56d87 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11e56d8a jmp 0x11e56d95 */
  goto L_11e56d95;
L_11e56d8c:;
  /* 11e56d8c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e56d8f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56d92 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11e56d95:;
  /* 11e56d95 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e56d98 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e56d9a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11e56d9d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e56da0 jg 0x11e56db1 */
  if ((!C.zf&&C.sf==C.of)) goto L_11e56db1;
  /* 11e56da2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e56da5 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e56da8 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 11e56daf jmp 0x11e56d8c */
  goto L_11e56d8c;
L_11e56db1:;
  /* 11e56db1 jmp 0x11e56d60 */
  goto L_11e56d60;
L_11e56db3:;
  /* 11e56db3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e56db6 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56db9 mov dword ptr [0x11e74db8], eax */
  w32((uint32_t)(0x11e74db8), (EAX));
  /* 11e56dbe mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e56dc1 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56dc4 mov dword ptr [0x11e74dbc], ecx */
  w32((uint32_t)(0x11e74dbc), (ECX));
  /* 11e56dca cmp dword ptr [0x11e76bf0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e76bf0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e56dd1 je 0x11e56de4 */
  if (C.zf) goto L_11e56de4;
  /* 11e56dd3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e56dd5 mov edx, dword ptr [0x11e76bf0] */
  EDX = (r32((uint32_t)(0x11e76bf0)));
  /* 11e56ddb push edx */
  push32((uint32_t)(EDX));
  /* 11e56ddc call 0x11e4a4e0 */
  push32(0x11e56de1u); f_11e4a4e0();
  /* 11e56de1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e56de4:;
  /* 11e56de4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e56de7 mov dword ptr [0x11e76bf0], eax */
  w32((uint32_t)(0x11e76bf0), (EAX));
  /* 11e56dec cmp dword ptr [0x11e76bf4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e76bf4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e56df3 je 0x11e56e06 */
  if (C.zf) goto L_11e56e06;
  /* 11e56df5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e56df7 mov ecx, dword ptr [0x11e76bf4] */
  ECX = (r32((uint32_t)(0x11e76bf4)));
  /* 11e56dfd push ecx */
  push32((uint32_t)(ECX));
  /* 11e56dfe call 0x11e4a4e0 */
  push32(0x11e56e03u); f_11e4a4e0();
  /* 11e56e03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e56e06:;
  /* 11e56e06 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e56e09 mov dword ptr [0x11e76bf4], edx */
  w32((uint32_t)(0x11e76bf4), (EDX));
  /* 11e56e0f push 2 */
  push32((uint32_t)(0x2u));
  /* 11e56e11 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e56e14 push eax */
  push32((uint32_t)(EAX));
  /* 11e56e15 call 0x11e4a4e0 */
  push32(0x11e56e1au); f_11e4a4e0();
  /* 11e56e1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56e1d push 2 */
  push32((uint32_t)(0x2u));
  /* 11e56e1f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e56e22 push ecx */
  push32((uint32_t)(ECX));
  /* 11e56e23 call 0x11e4a4e0 */
  push32(0x11e56e28u); f_11e4a4e0();
  /* 11e56e28 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56e2b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e56e2d jmp 0x11e56ebc */
  goto L_11e56ebc;
L_11e56e32:;
  /* 11e56e32 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e56e34 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e56e37 push edx */
  push32((uint32_t)(EDX));
  /* 11e56e38 call 0x11e4a4e0 */
  push32(0x11e56e3du); f_11e4a4e0();
  /* 11e56e3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56e40 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e56e42 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e56e45 push eax */
  push32((uint32_t)(EAX));
  /* 11e56e46 call 0x11e4a4e0 */
  push32(0x11e56e4bu); f_11e4a4e0();
  /* 11e56e4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56e4e push 2 */
  push32((uint32_t)(0x2u));
  /* 11e56e50 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e56e53 push ecx */
  push32((uint32_t)(ECX));
  /* 11e56e54 call 0x11e4a4e0 */
  push32(0x11e56e59u); f_11e4a4e0();
  /* 11e56e59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56e5c push 2 */
  push32((uint32_t)(0x2u));
  /* 11e56e5e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e56e61 push edx */
  push32((uint32_t)(EDX));
  /* 11e56e62 call 0x11e4a4e0 */
  push32(0x11e56e67u); f_11e4a4e0();
  /* 11e56e67 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56e6a mov eax, 1 */
  EAX = (0x1u);
  /* 11e56e6f jmp 0x11e56ebc */
  goto L_11e56ebc;
L_11e56e71:;
  /* 11e56e71 mov dword ptr [0x11e74db8], 0x11e74dc2 */
  w32((uint32_t)(0x11e74db8), (0x11e74dc2u));
  /* 11e56e7b mov dword ptr [0x11e74dbc], 0x11e74dc2 */
  w32((uint32_t)(0x11e74dbc), (0x11e74dc2u));
  /* 11e56e85 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e56e87 mov eax, dword ptr [0x11e76bf0] */
  EAX = (r32((uint32_t)(0x11e76bf0)));
  /* 11e56e8c push eax */
  push32((uint32_t)(EAX));
  /* 11e56e8d call 0x11e4a4e0 */
  push32(0x11e56e92u); f_11e4a4e0();
  /* 11e56e92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56e95 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e56e97 mov ecx, dword ptr [0x11e76bf4] */
  ECX = (r32((uint32_t)(0x11e76bf4)));
  /* 11e56e9d push ecx */
  push32((uint32_t)(ECX));
  /* 11e56e9e call 0x11e4a4e0 */
  push32(0x11e56ea3u); f_11e4a4e0();
  /* 11e56ea3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56ea6 mov dword ptr [0x11e76bf0], 0 */
  w32((uint32_t)(0x11e76bf0), (0x0u));
  /* 11e56eb0 mov dword ptr [0x11e76bf4], 0 */
  w32((uint32_t)(0x11e76bf4), (0x0u));
  /* 11e56eba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e56ebc:;
  /* 11e56ebc mov esp, ebp */
  ESP = (EBP);
  /* 11e56ebe pop ebp */
  EBP = (pop32());
  /* 11e56ebf ret  */
  ESPCHK(0x11e56b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10016ec0 @ 0x11e56ec0 (7 bytes, 5 insns) */
void f_11e56ec0(void) {
  FTRACE(0x11e56ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e56ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e56ec1 mov ebp, esp */
  EBP = (ESP);
  /* 11e56ec3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e56ec5 pop ebp */
  EBP = (pop32());
  /* 11e56ec6 ret  */
  ESPCHK(0x11e56ec0u, _esp0);
  ESP += 4; return;
}

