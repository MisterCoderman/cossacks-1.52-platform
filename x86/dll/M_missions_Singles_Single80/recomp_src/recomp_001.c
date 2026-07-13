#include "recomp.h"

/* _memset @ 0x11d8a180 (88 bytes, 40 insns) */
void f_11d8a180(void) {
  FTRACE(0x11d8a180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8a180 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11d8a184 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11d8a188 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d8a18a je 0x11d8a1d3 */
  if (C.zf) goto L_11d8a1d3;
  /* 11d8a18c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8a18e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11d8a192 push edi */
  push32((uint32_t)(EDI));
  /* 11d8a193 mov edi, ecx */
  EDI = (ECX);
  /* 11d8a195 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8a198 jb 0x11d8a1c7 */
  if (C.cf) goto L_11d8a1c7;
  /* 11d8a19a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d8a19c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11d8a19f je 0x11d8a1a9 */
  if (C.zf) goto L_11d8a1a9;
  /* 11d8a1a1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11d8a1a3:;
  /* 11d8a1a3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11d8a1a5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11d8a1a6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11d8a1a7 jne 0x11d8a1a3 */
  if (!C.zf) goto L_11d8a1a3;
L_11d8a1a9:;
  /* 11d8a1a9 mov ecx, eax */
  ECX = (EAX);
  /* 11d8a1ab shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11d8a1ae add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8a1b0 mov ecx, eax */
  ECX = (EAX);
  /* 11d8a1b2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11d8a1b5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8a1b7 mov ecx, edx */
  ECX = (EDX);
  /* 11d8a1b9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11d8a1bc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d8a1bf je 0x11d8a1c7 */
  if (C.zf) goto L_11d8a1c7;
  /* 11d8a1c1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11d8a1c3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d8a1c5 je 0x11d8a1cd */
  if (C.zf) goto L_11d8a1cd;
L_11d8a1c7:;
  /* 11d8a1c7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11d8a1c9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11d8a1ca dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11d8a1cb jne 0x11d8a1c7 */
  if (!C.zf) goto L_11d8a1c7;
L_11d8a1cd:;
  /* 11d8a1cd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d8a1d1 pop edi */
  EDI = (pop32());
  /* 11d8a1d2 ret  */
  ESPCHK(0x11d8a180u, _esp0);
  ESP += 4; return;
L_11d8a1d3:;
  /* 11d8a1d3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11d8a1d7 ret  */
  ESPCHK(0x11d8a180u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1e0 @ 0x11d8a1e0 (23 bytes, 10 insns) */
void f_11d8a1e0(void) {
  FTRACE(0x11d8a1e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8a1e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8a1e1 mov ebp, esp */
  EBP = (ESP);
  /* 11d8a1e3 mov eax, dword ptr [0x11db197c] */
  EAX = (r32((uint32_t)(0x11db197c)));
  /* 11d8a1e8 push eax */
  push32((uint32_t)(EAX));
  /* 11d8a1e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8a1ec push ecx */
  push32((uint32_t)(ECX));
  /* 11d8a1ed call 0x11d8a200 */
  push32(0x11d8a1f2u); f_11d8a200();
  /* 11d8a1f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8a1f5 pop ebp */
  EBP = (pop32());
  /* 11d8a1f6 ret  */
  ESPCHK(0x11d8a1e0u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x11d8a200 (87 bytes, 34 insns) */
void f_11d8a200(void) {
  FTRACE(0x11d8a200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8a200 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8a201 mov ebp, esp */
  EBP = (ESP);
  /* 11d8a203 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8a204 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8a208 jbe 0x11d8a20e */
  if ((C.cf||C.zf)) goto L_11d8a20e;
  /* 11d8a20a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8a20c jmp 0x11d8a253 */
  goto L_11d8a253;
L_11d8a20e:;
  /* 11d8a20e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8a212 ja 0x11d8a225 */
  if ((!C.cf&&!C.zf)) goto L_11d8a225;
  /* 11d8a214 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8a217 push eax */
  push32((uint32_t)(EAX));
  /* 11d8a218 call 0x11d8a260 */
  push32(0x11d8a21du); f_11d8a260();
  /* 11d8a21d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8a220 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d8a223 jmp 0x11d8a22c */
  goto L_11d8a22c;
L_11d8a225:;
  /* 11d8a225 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11d8a22c:;
  /* 11d8a22c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8a230 jne 0x11d8a238 */
  if (!C.zf) goto L_11d8a238;
  /* 11d8a232 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8a236 jne 0x11d8a23d */
  if (!C.zf) goto L_11d8a23d;
L_11d8a238:;
  /* 11d8a238 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8a23b jmp 0x11d8a253 */
  goto L_11d8a253;
L_11d8a23d:;
  /* 11d8a23d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8a240 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8a241 call 0x11d8a150 */
  push32(0x11d8a246u); f_11d8a150();
  /* 11d8a246 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8a249 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8a24b jne 0x11d8a251 */
  if (!C.zf) goto L_11d8a251;
  /* 11d8a24d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8a24f jmp 0x11d8a253 */
  goto L_11d8a253;
L_11d8a251:;
  /* 11d8a251 jmp 0x11d8a20e */
  goto L_11d8a20e;
L_11d8a253:;
  /* 11d8a253 mov esp, ebp */
  ESP = (EBP);
  /* 11d8a255 pop ebp */
  EBP = (pop32());
  /* 11d8a256 ret  */
  ESPCHK(0x11d8a200u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a260 @ 0x11d8a260 (109 bytes, 37 insns) */
void f_11d8a260(void) {
  FTRACE(0x11d8a260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8a260 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8a261 mov ebp, esp */
  EBP = (ESP);
  /* 11d8a263 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8a264 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8a267 cmp eax, dword ptr [0x11dafdb4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11dafdb4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8a26d ja 0x11d8a29d */
  if ((!C.cf&&!C.zf)) goto L_11d8a29d;
  /* 11d8a26f push 9 */
  push32((uint32_t)(0x9u));
  /* 11d8a271 call 0x11d886f0 */
  push32(0x11d8a276u); f_11d886f0();
  /* 11d8a276 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8a279 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8a27c push ecx */
  push32((uint32_t)(ECX));
  /* 11d8a27d call 0x11d8ada0 */
  push32(0x11d8a282u); f_11d8ada0();
  /* 11d8a282 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8a285 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d8a288 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d8a28a call 0x11d88790 */
  push32(0x11d8a28fu); f_11d88790();
  /* 11d8a28f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8a292 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8a296 je 0x11d8a29d */
  if (C.zf) goto L_11d8a29d;
  /* 11d8a298 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8a29b jmp 0x11d8a2c9 */
  goto L_11d8a2c9;
L_11d8a29d:;
  /* 11d8a29d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8a2a1 jne 0x11d8a2aa */
  if (!C.zf) goto L_11d8a2aa;
  /* 11d8a2a3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_11d8a2aa:;
  /* 11d8a2aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8a2ad add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8a2b0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11d8a2b3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11d8a2b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8a2b9 push eax */
  push32((uint32_t)(EAX));
  /* 11d8a2ba push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8a2bc mov ecx, dword ptr [0x11db308c] */
  ECX = (r32((uint32_t)(0x11db308c)));
  /* 11d8a2c2 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8a2c3 call dword ptr [0x11db4334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4334))), 0x11d8a2c9u);
L_11d8a2c9:;
  /* 11d8a2c9 mov esp, ebp */
  ESP = (EBP);
  /* 11d8a2cb pop ebp */
  EBP = (pop32());
  /* 11d8a2cc ret  */
  ESPCHK(0x11d8a260u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a2d0 @ 0x11d8a2d0 (10 bytes, 5 insns) */
void f_11d8a2d0(void) {
  FTRACE(0x11d8a2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8a2d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8a2d1 mov ebp, esp */
  EBP = (ESP);
  /* 11d8a2d3 mov eax, 1 */
  EAX = (0x1u);
  /* 11d8a2d8 pop ebp */
  EBP = (pop32());
  /* 11d8a2d9 ret  */
  ESPCHK(0x11d8a2d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a2e0 @ 0x11d8a2e0 (173 bytes, 59 insns) */
void f_11d8a2e0(void) {
  FTRACE(0x11d8a2e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8a2e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8a2e1 mov ebp, esp */
  EBP = (ESP);
  /* 11d8a2e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8a2e6 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8a2ea jbe 0x11d8a2f3 */
  if ((C.cf||C.zf)) goto L_11d8a2f3;
  /* 11d8a2ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8a2ee jmp 0x11d8a389 */
  goto L_11d8a389;
L_11d8a2f3:;
  /* 11d8a2f3 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d8a2f5 call 0x11d886f0 */
  push32(0x11d8a2fau); f_11d886f0();
  /* 11d8a2fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8a2fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8a300 push eax */
  push32((uint32_t)(EAX));
  /* 11d8a301 call 0x11d8a710 */
  push32(0x11d8a306u); f_11d8a710();
  /* 11d8a306 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8a309 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d8a30c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8a310 je 0x11d8a351 */
  if (C.zf) goto L_11d8a351;
  /* 11d8a312 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d8a319 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8a31c cmp ecx, dword ptr [0x11dafdb4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11dafdb4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8a322 ja 0x11d8a342 */
  if ((!C.cf&&!C.zf)) goto L_11d8a342;
  /* 11d8a324 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8a327 push edx */
  push32((uint32_t)(EDX));
  /* 11d8a328 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8a32b push eax */
  push32((uint32_t)(EAX));
  /* 11d8a32c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8a32f push ecx */
  push32((uint32_t)(ECX));
  /* 11d8a330 call 0x11d8b5e0 */
  push32(0x11d8a335u); f_11d8b5e0();
  /* 11d8a335 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8a338 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8a33a je 0x11d8a342 */
  if (C.zf) goto L_11d8a342;
  /* 11d8a33c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8a33f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11d8a342:;
  /* 11d8a342 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d8a344 call 0x11d88790 */
  push32(0x11d8a349u); f_11d88790();
  /* 11d8a349 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8a34c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8a34f jmp 0x11d8a389 */
  goto L_11d8a389;
L_11d8a351:;
  /* 11d8a351 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d8a353 call 0x11d88790 */
  push32(0x11d8a358u); f_11d88790();
  /* 11d8a358 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8a35b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8a35f jne 0x11d8a368 */
  if (!C.zf) goto L_11d8a368;
  /* 11d8a361 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11d8a368:;
  /* 11d8a368 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8a36b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8a36e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 11d8a370 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11d8a373 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8a376 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8a377 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8a37a push edx */
  push32((uint32_t)(EDX));
  /* 11d8a37b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11d8a37d mov eax, dword ptr [0x11db308c] */
  EAX = (r32((uint32_t)(0x11db308c)));
  /* 11d8a382 push eax */
  push32((uint32_t)(EAX));
  /* 11d8a383 call dword ptr [0x11db4330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4330))), 0x11d8a389u);
L_11d8a389:;
  /* 11d8a389 mov esp, ebp */
  ESP = (EBP);
  /* 11d8a38b pop ebp */
  EBP = (pop32());
  /* 11d8a38c ret  */
  ESPCHK(0x11d8a2e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a390 @ 0x11d8a390 (490 bytes, 165 insns) */
void f_11d8a390(void) {
  FTRACE(0x11d8a390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8a390 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8a391 mov ebp, esp */
  EBP = (ESP);
  /* 11d8a393 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8a396 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8a39a jne 0x11d8a3ad */
  if (!C.zf) goto L_11d8a3ad;
  /* 11d8a39c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8a39f push eax */
  push32((uint32_t)(EAX));
  /* 11d8a3a0 call 0x11d8a1e0 */
  push32(0x11d8a3a5u); f_11d8a1e0();
  /* 11d8a3a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8a3a8 jmp 0x11d8a576 */
  goto L_11d8a576;
L_11d8a3ad:;
  /* 11d8a3ad cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8a3b1 jne 0x11d8a3c6 */
  if (!C.zf) goto L_11d8a3c6;
  /* 11d8a3b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8a3b6 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8a3b7 call 0x11d8a580 */
  push32(0x11d8a3bcu); f_11d8a580();
  /* 11d8a3bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8a3bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8a3c1 jmp 0x11d8a576 */
  goto L_11d8a576;
L_11d8a3c6:;
  /* 11d8a3c6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11d8a3cd cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8a3d1 ja 0x11d8a549 */
  if ((!C.cf&&!C.zf)) goto L_11d8a549;
  /* 11d8a3d7 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d8a3d9 call 0x11d886f0 */
  push32(0x11d8a3deu); f_11d886f0();
  /* 11d8a3de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8a3e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8a3e4 push edx */
  push32((uint32_t)(EDX));
  /* 11d8a3e5 call 0x11d8a710 */
  push32(0x11d8a3eau); f_11d8a710();
  /* 11d8a3ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8a3ed mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d8a3f0 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8a3f4 je 0x11d8a50c */
  if (C.zf) goto L_11d8a50c;
  /* 11d8a3fa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8a3fd cmp eax, dword ptr [0x11dafdb4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11dafdb4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8a403 ja 0x11d8a480 */
  if ((!C.cf&&!C.zf)) goto L_11d8a480;
  /* 11d8a405 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8a408 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8a409 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8a40c push edx */
  push32((uint32_t)(EDX));
  /* 11d8a40d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d8a410 push eax */
  push32((uint32_t)(EAX));
  /* 11d8a411 call 0x11d8b5e0 */
  push32(0x11d8a416u); f_11d8b5e0();
  /* 11d8a416 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8a419 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8a41b je 0x11d8a425 */
  if (C.zf) goto L_11d8a425;
  /* 11d8a41d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8a420 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d8a423 jmp 0x11d8a480 */
  goto L_11d8a480;
L_11d8a425:;
  /* 11d8a425 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8a428 push edx */
  push32((uint32_t)(EDX));
  /* 11d8a429 call 0x11d8ada0 */
  push32(0x11d8a42eu); f_11d8ada0();
  /* 11d8a42e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8a431 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d8a434 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8a438 je 0x11d8a480 */
  if (C.zf) goto L_11d8a480;
  /* 11d8a43a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8a43d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 11d8a440 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8a443 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d8a446 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8a449 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8a44c jae 0x11d8a456 */
  if (!C.cf) goto L_11d8a456;
  /* 11d8a44e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8a451 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11d8a454 jmp 0x11d8a45c */
  goto L_11d8a45c;
L_11d8a456:;
  /* 11d8a456 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8a459 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11d8a45c:;
  /* 11d8a45c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8a45f push edx */
  push32((uint32_t)(EDX));
  /* 11d8a460 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8a463 push eax */
  push32((uint32_t)(EAX));
  /* 11d8a464 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8a467 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8a468 call 0x11d8ccf0 */
  push32(0x11d8a46du); f_11d8ccf0();
  /* 11d8a46d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8a470 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8a473 push edx */
  push32((uint32_t)(EDX));
  /* 11d8a474 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d8a477 push eax */
  push32((uint32_t)(EAX));
  /* 11d8a478 call 0x11d8a7d0 */
  push32(0x11d8a47du); f_11d8a7d0();
  /* 11d8a47d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d8a480:;
  /* 11d8a480 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8a484 jne 0x11d8a500 */
  if (!C.zf) goto L_11d8a500;
  /* 11d8a486 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8a48a jne 0x11d8a493 */
  if (!C.zf) goto L_11d8a493;
  /* 11d8a48c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11d8a493:;
  /* 11d8a493 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8a496 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8a499 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 11d8a49c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11d8a49f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8a4a2 push edx */
  push32((uint32_t)(EDX));
  /* 11d8a4a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8a4a5 mov eax, dword ptr [0x11db308c] */
  EAX = (r32((uint32_t)(0x11db308c)));
  /* 11d8a4aa push eax */
  push32((uint32_t)(EAX));
  /* 11d8a4ab call dword ptr [0x11db4334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4334))), 0x11d8a4b1u);
  /* 11d8a4b1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d8a4b4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8a4b8 je 0x11d8a500 */
  if (C.zf) goto L_11d8a500;
  /* 11d8a4ba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8a4bd mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11d8a4c0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8a4c3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d8a4c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8a4c9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8a4cc jae 0x11d8a4d6 */
  if (!C.cf) goto L_11d8a4d6;
  /* 11d8a4ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8a4d1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11d8a4d4 jmp 0x11d8a4dc */
  goto L_11d8a4dc;
L_11d8a4d6:;
  /* 11d8a4d6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8a4d9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11d8a4dc:;
  /* 11d8a4dc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d8a4df push eax */
  push32((uint32_t)(EAX));
  /* 11d8a4e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8a4e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8a4e4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8a4e7 push edx */
  push32((uint32_t)(EDX));
  /* 11d8a4e8 call 0x11d8ccf0 */
  push32(0x11d8a4edu); f_11d8ccf0();
  /* 11d8a4ed add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8a4f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8a4f3 push eax */
  push32((uint32_t)(EAX));
  /* 11d8a4f4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d8a4f7 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8a4f8 call 0x11d8a7d0 */
  push32(0x11d8a4fdu); f_11d8a7d0();
  /* 11d8a4fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d8a500:;
  /* 11d8a500 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d8a502 call 0x11d88790 */
  push32(0x11d8a507u); f_11d88790();
  /* 11d8a507 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8a50a jmp 0x11d8a549 */
  goto L_11d8a549;
L_11d8a50c:;
  /* 11d8a50c push 9 */
  push32((uint32_t)(0x9u));
  /* 11d8a50e call 0x11d88790 */
  push32(0x11d8a513u); f_11d88790();
  /* 11d8a513 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8a516 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8a51a jne 0x11d8a523 */
  if (!C.zf) goto L_11d8a523;
  /* 11d8a51c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11d8a523:;
  /* 11d8a523 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8a526 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8a529 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11d8a52c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11d8a52f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8a532 push eax */
  push32((uint32_t)(EAX));
  /* 11d8a533 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8a536 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8a537 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8a539 mov edx, dword ptr [0x11db308c] */
  EDX = (r32((uint32_t)(0x11db308c)));
  /* 11d8a53f push edx */
  push32((uint32_t)(EDX));
  /* 11d8a540 call dword ptr [0x11db4330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4330))), 0x11d8a546u);
  /* 11d8a546 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11d8a549:;
  /* 11d8a549 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8a54d jne 0x11d8a558 */
  if (!C.zf) goto L_11d8a558;
  /* 11d8a54f cmp dword ptr [0x11db197c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db197c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8a556 jne 0x11d8a55d */
  if (!C.zf) goto L_11d8a55d;
L_11d8a558:;
  /* 11d8a558 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8a55b jmp 0x11d8a576 */
  goto L_11d8a576;
L_11d8a55d:;
  /* 11d8a55d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8a560 push eax */
  push32((uint32_t)(EAX));
  /* 11d8a561 call 0x11d8a150 */
  push32(0x11d8a566u); f_11d8a150();
  /* 11d8a566 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8a569 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8a56b jne 0x11d8a571 */
  if (!C.zf) goto L_11d8a571;
  /* 11d8a56d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8a56f jmp 0x11d8a576 */
  goto L_11d8a576;
L_11d8a571:;
  /* 11d8a571 jmp 0x11d8a3c6 */
  goto L_11d8a3c6;
L_11d8a576:;
  /* 11d8a576 mov esp, ebp */
  ESP = (EBP);
  /* 11d8a578 pop ebp */
  EBP = (pop32());
  /* 11d8a579 ret  */
  ESPCHK(0x11d8a390u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a580 @ 0x11d8a580 (104 bytes, 38 insns) */
void f_11d8a580(void) {
  FTRACE(0x11d8a580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8a580 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8a581 mov ebp, esp */
  EBP = (ESP);
  /* 11d8a583 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8a584 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8a588 jne 0x11d8a58c */
  if (!C.zf) goto L_11d8a58c;
  /* 11d8a58a jmp 0x11d8a5e4 */
  goto L_11d8a5e4;
L_11d8a58c:;
  /* 11d8a58c push 9 */
  push32((uint32_t)(0x9u));
  /* 11d8a58e call 0x11d886f0 */
  push32(0x11d8a593u); f_11d886f0();
  /* 11d8a593 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8a596 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8a599 push eax */
  push32((uint32_t)(EAX));
  /* 11d8a59a call 0x11d8a710 */
  push32(0x11d8a59fu); f_11d8a710();
  /* 11d8a59f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8a5a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d8a5a5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8a5a9 je 0x11d8a5c7 */
  if (C.zf) goto L_11d8a5c7;
  /* 11d8a5ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8a5ae push ecx */
  push32((uint32_t)(ECX));
  /* 11d8a5af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8a5b2 push edx */
  push32((uint32_t)(EDX));
  /* 11d8a5b3 call 0x11d8a7d0 */
  push32(0x11d8a5b8u); f_11d8a7d0();
  /* 11d8a5b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8a5bb push 9 */
  push32((uint32_t)(0x9u));
  /* 11d8a5bd call 0x11d88790 */
  push32(0x11d8a5c2u); f_11d88790();
  /* 11d8a5c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8a5c5 jmp 0x11d8a5e4 */
  goto L_11d8a5e4;
L_11d8a5c7:;
  /* 11d8a5c7 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d8a5c9 call 0x11d88790 */
  push32(0x11d8a5ceu); f_11d88790();
  /* 11d8a5ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8a5d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8a5d4 push eax */
  push32((uint32_t)(EAX));
  /* 11d8a5d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8a5d7 mov ecx, dword ptr [0x11db308c] */
  ECX = (r32((uint32_t)(0x11db308c)));
  /* 11d8a5dd push ecx */
  push32((uint32_t)(ECX));
  /* 11d8a5de call dword ptr [0x11db4354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4354))), 0x11d8a5e4u);
L_11d8a5e4:;
  /* 11d8a5e4 mov esp, ebp */
  ESP = (EBP);
  /* 11d8a5e6 pop ebp */
  EBP = (pop32());
  /* 11d8a5e7 ret  */
  ESPCHK(0x11d8a580u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a5f0 @ 0x11d8a5f0 (116 bytes, 34 insns) */
void f_11d8a5f0(void) {
  FTRACE(0x11d8a5f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8a5f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8a5f1 mov ebp, esp */
  EBP = (ESP);
  /* 11d8a5f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8a5f4 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 11d8a5fb push 9 */
  push32((uint32_t)(0x9u));
  /* 11d8a5fd call 0x11d886f0 */
  push32(0x11d8a602u); f_11d886f0();
  /* 11d8a602 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8a605 call 0x11d8bd00 */
  push32(0x11d8a60au); f_11d8bd00();
  /* 11d8a60a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8a60c jge 0x11d8a615 */
  if ((C.sf==C.of)) goto L_11d8a615;
  /* 11d8a60e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_11d8a615:;
  /* 11d8a615 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d8a617 call 0x11d88790 */
  push32(0x11d8a61cu); f_11d88790();
  /* 11d8a61c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8a61f push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8a621 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8a623 mov eax, dword ptr [0x11db308c] */
  EAX = (r32((uint32_t)(0x11db308c)));
  /* 11d8a628 push eax */
  push32((uint32_t)(EAX));
  /* 11d8a629 call dword ptr [0x11db43ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43ac))), 0x11d8a62fu);
  /* 11d8a62f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8a631 jne 0x11d8a65d */
  if (!C.zf) goto L_11d8a65d;
  /* 11d8a633 call dword ptr [0x11db43a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43a0))), 0x11d8a639u);
  /* 11d8a639 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8a63c jne 0x11d8a656 */
  if (!C.zf) goto L_11d8a656;
  /* 11d8a63e call 0x11d8e6d0 */
  push32(0x11d8a643u); f_11d8e6d0();
  /* 11d8a643 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 11d8a649 call 0x11d8e6c0 */
  push32(0x11d8a64eu); f_11d8e6c0();
  /* 11d8a64e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 11d8a654 jmp 0x11d8a65d */
  goto L_11d8a65d;
L_11d8a656:;
  /* 11d8a656 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_11d8a65d:;
  /* 11d8a65d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8a660 mov esp, ebp */
  ESP = (EBP);
  /* 11d8a662 pop ebp */
  EBP = (pop32());
  /* 11d8a663 ret  */
  ESPCHK(0x11d8a5f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a670 @ 0x11d8a670 (10 bytes, 5 insns) */
void f_11d8a670(void) {
  FTRACE(0x11d8a670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8a670 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8a671 mov ebp, esp */
  EBP = (ESP);
  /* 11d8a673 call 0x11d8a5f0 */
  push32(0x11d8a678u); f_11d8a5f0();
  /* 11d8a678 pop ebp */
  EBP = (pop32());
  /* 11d8a679 ret  */
  ESPCHK(0x11d8a670u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a680 @ 0x11d8a680 (10 bytes, 5 insns) */
void f_11d8a680(void) {
  FTRACE(0x11d8a680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8a680 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8a681 mov ebp, esp */
  EBP = (ESP);
  /* 11d8a683 mov eax, dword ptr [0x11dafdb4] */
  EAX = (r32((uint32_t)(0x11dafdb4)));
  /* 11d8a688 pop ebp */
  EBP = (pop32());
  /* 11d8a689 ret  */
  ESPCHK(0x11d8a680u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a690 @ 0x11d8a690 (31 bytes, 11 insns) */
void f_11d8a690(void) {
  FTRACE(0x11d8a690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8a690 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8a691 mov ebp, esp */
  EBP = (ESP);
  /* 11d8a693 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8a69a jbe 0x11d8a6a0 */
  if ((C.cf||C.zf)) goto L_11d8a6a0;
  /* 11d8a69c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8a69e jmp 0x11d8a6ad */
  goto L_11d8a6ad;
L_11d8a6a0:;
  /* 11d8a6a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8a6a3 mov dword ptr [0x11dafdb4], eax */
  w32((uint32_t)(0x11dafdb4), (EAX));
  /* 11d8a6a8 mov eax, 1 */
  EAX = (0x1u);
L_11d8a6ad:;
  /* 11d8a6ad pop ebp */
  EBP = (pop32());
  /* 11d8a6ae ret  */
  ESPCHK(0x11d8a690u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a6b0 @ 0x11d8a6b0 (89 bytes, 20 insns) */
void f_11d8a6b0(void) {
  FTRACE(0x11d8a6b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8a6b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8a6b1 mov ebp, esp */
  EBP = (ESP);
  /* 11d8a6b3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 11d8a6b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8a6ba mov eax, dword ptr [0x11db308c] */
  EAX = (r32((uint32_t)(0x11db308c)));
  /* 11d8a6bf push eax */
  push32((uint32_t)(EAX));
  /* 11d8a6c0 call dword ptr [0x11db4334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4334))), 0x11d8a6c6u);
  /* 11d8a6c6 mov dword ptr [0x11db3088], eax */
  w32((uint32_t)(0x11db3088), (EAX));
  /* 11d8a6cb cmp dword ptr [0x11db3088], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db3088))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8a6d2 jne 0x11d8a6d8 */
  if (!C.zf) goto L_11d8a6d8;
  /* 11d8a6d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8a6d6 jmp 0x11d8a707 */
  goto L_11d8a707;
L_11d8a6d8:;
  /* 11d8a6d8 mov ecx, dword ptr [0x11db3088] */
  ECX = (r32((uint32_t)(0x11db3088)));
  /* 11d8a6de mov dword ptr [0x11db307c], ecx */
  w32((uint32_t)(0x11db307c), (ECX));
  /* 11d8a6e4 mov dword ptr [0x11db3080], 0 */
  w32((uint32_t)(0x11db3080), (0x0u));
  /* 11d8a6ee mov dword ptr [0x11db3084], 0 */
  w32((uint32_t)(0x11db3084), (0x0u));
  /* 11d8a6f8 mov dword ptr [0x11db3068], 0x10 */
  w32((uint32_t)(0x11db3068), (0x10u));
  /* 11d8a702 mov eax, 1 */
  EAX = (0x1u);
L_11d8a707:;
  /* 11d8a707 pop ebp */
  EBP = (pop32());
  /* 11d8a708 ret  */
  ESPCHK(0x11d8a6b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a710 @ 0x11d8a710 (85 bytes, 29 insns) */
void f_11d8a710(void) {
  FTRACE(0x11d8a710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8a710 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8a711 mov ebp, esp */
  EBP = (ESP);
  /* 11d8a713 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8a716 mov eax, dword ptr [0x11db3084] */
  EAX = (r32((uint32_t)(0x11db3084)));
  /* 11d8a71b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d8a71e mov ecx, dword ptr [0x11db3088] */
  ECX = (r32((uint32_t)(0x11db3088)));
  /* 11d8a724 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8a726 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d8a729 mov edx, dword ptr [0x11db3088] */
  EDX = (r32((uint32_t)(0x11db3088)));
  /* 11d8a72f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11d8a732:;
  /* 11d8a732 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8a735 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8a738 jae 0x11d8a75f */
  if (!C.cf) goto L_11d8a75f;
  /* 11d8a73a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8a73d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8a740 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8a743 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d8a746 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8a74d jae 0x11d8a754 */
  if (!C.cf) goto L_11d8a754;
  /* 11d8a74f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8a752 jmp 0x11d8a761 */
  goto L_11d8a761;
L_11d8a754:;
  /* 11d8a754 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8a757 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8a75a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d8a75d jmp 0x11d8a732 */
  goto L_11d8a732;
L_11d8a75f:;
  /* 11d8a75f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d8a761:;
  /* 11d8a761 mov esp, ebp */
  ESP = (EBP);
  /* 11d8a763 pop ebp */
  EBP = (pop32());
  /* 11d8a764 ret  */
  ESPCHK(0x11d8a710u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a770 @ 0x11d8a770 (95 bytes, 33 insns) */
void f_11d8a770(void) {
  FTRACE(0x11d8a770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8a770 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8a771 mov ebp, esp */
  EBP = (ESP);
  /* 11d8a773 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8a776 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8a779 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8a77c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8a77f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d8a782 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8a785 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11d8a788 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d8a78b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11d8a790 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8a793 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11d8a795 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8a798 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11d8a79b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11d8a79d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d8a79f jne 0x11d8a7c1 */
  if (!C.zf) goto L_11d8a7c1;
  /* 11d8a7a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8a7a4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 11d8a7a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8a7a9 jne 0x11d8a7c1 */
  if (!C.zf) goto L_11d8a7c1;
  /* 11d8a7ab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8a7ae and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d8a7b4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d8a7b6 je 0x11d8a7c1 */
  if (C.zf) goto L_11d8a7c1;
  /* 11d8a7b8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 11d8a7bf jmp 0x11d8a7c8 */
  goto L_11d8a7c8;
L_11d8a7c1:;
  /* 11d8a7c1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11d8a7c8:;
  /* 11d8a7c8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d8a7cb mov esp, ebp */
  ESP = (EBP);
  /* 11d8a7cd pop ebp */
  EBP = (pop32());
  /* 11d8a7ce ret  */
  ESPCHK(0x11d8a770u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a7d0 @ 0x11d8a7d0 (1485 bytes, 453 insns) */
void f_11d8a7d0(void) {
  FTRACE(0x11d8a7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8a7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8a7d1 mov ebp, esp */
  EBP = (ESP);
  /* 11d8a7d3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8a7d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8a7d9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11d8a7dc mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 11d8a7df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8a7e2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8a7e5 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8a7e8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11d8a7eb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8a7ee shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 11d8a7f1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d8a7f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8a7f7 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d8a7fd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d8a800 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 11d8a807 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d8a80a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8a80d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8a810 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11d8a813 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d8a816 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d8a818 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8a81b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11d8a81e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d8a821 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8a824 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 11d8a827 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d8a82a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d8a82c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11d8a82f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d8a832 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11d8a835 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d8a838 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d8a83b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11d8a83e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d8a840 jne 0x11d8a968 */
  if (!C.zf) goto L_11d8a968;
  /* 11d8a846 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d8a849 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11d8a84c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8a84f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11d8a852 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8a856 jbe 0x11d8a85f */
  if ((C.cf||C.zf)) goto L_11d8a85f;
  /* 11d8a858 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_11d8a85f:;
  /* 11d8a85f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d8a862 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d8a865 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d8a868 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8a86b jne 0x11d8a941 */
  if (!C.zf) goto L_11d8a941;
  /* 11d8a871 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8a875 jae 0x11d8a8d6 */
  if (!C.cf) goto L_11d8a8d6;
  /* 11d8a877 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11d8a87c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8a87f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11d8a881 not eax */
  EAX = (~(EAX));
  /* 11d8a883 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8a886 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d8a889 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11d8a88d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d8a88f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8a892 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d8a895 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11d8a899 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d8a89c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8a89f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11d8a8a2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11d8a8a5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d8a8a8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8a8ab mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11d8a8ae mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d8a8b1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8a8b4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11d8a8b8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d8a8ba jne 0x11d8a8d4 */
  if (!C.zf) goto L_11d8a8d4;
  /* 11d8a8bc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11d8a8c1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8a8c4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11d8a8c6 not eax */
  EAX = (~(EAX));
  /* 11d8a8c8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8a8cb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d8a8cd and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11d8a8cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8a8d2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11d8a8d4:;
  /* 11d8a8d4 jmp 0x11d8a941 */
  goto L_11d8a941;
L_11d8a8d6:;
  /* 11d8a8d6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8a8d9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8a8dc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11d8a8e1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d8a8e3 not edx */
  EDX = (~(EDX));
  /* 11d8a8e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8a8e8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d8a8eb mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11d8a8f2 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8a8f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8a8f7 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d8a8fa mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 11d8a901 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d8a904 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8a907 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11d8a90a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11d8a90d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d8a910 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8a913 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11d8a916 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d8a919 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8a91c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11d8a920 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d8a922 jne 0x11d8a941 */
  if (!C.zf) goto L_11d8a941;
  /* 11d8a924 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8a927 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8a92a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11d8a92f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d8a931 not edx */
  EDX = (~(EDX));
  /* 11d8a933 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8a936 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d8a939 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11d8a93b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8a93e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11d8a941:;
  /* 11d8a941 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d8a944 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11d8a947 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d8a94a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11d8a94d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11d8a950 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d8a953 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d8a956 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d8a959 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11d8a95c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11d8a95f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8a962 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8a965 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_11d8a968:;
  /* 11d8a968 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8a96b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11d8a96e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8a971 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11d8a974 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8a978 jbe 0x11d8a981 */
  if ((C.cf||C.zf)) goto L_11d8a981;
  /* 11d8a97a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_11d8a981:;
  /* 11d8a981 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d8a984 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11d8a987 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d8a989 jne 0x11d8aae5 */
  if (!C.zf) goto L_11d8aae5;
  /* 11d8a98f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d8a992 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8a995 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 11d8a998 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d8a99b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11d8a99e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8a9a1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11d8a9a4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8a9a8 jbe 0x11d8a9b1 */
  if ((C.cf||C.zf)) goto L_11d8a9b1;
  /* 11d8a9aa mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_11d8a9b1:;
  /* 11d8a9b1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8a9b4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8a9b7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11d8a9ba mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8a9bd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11d8a9c0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8a9c3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11d8a9c6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8a9ca jbe 0x11d8a9d3 */
  if ((C.cf||C.zf)) goto L_11d8a9d3;
  /* 11d8a9cc mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_11d8a9d3:;
  /* 11d8a9d3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d8a9d6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8a9d9 je 0x11d8aadf */
  if (C.zf) goto L_11d8aadf;
  /* 11d8a9df mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11d8a9e2 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11d8a9e5 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d8a9e8 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8a9eb jne 0x11d8aac1 */
  if (!C.zf) goto L_11d8aac1;
  /* 11d8a9f1 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8a9f5 jae 0x11d8aa56 */
  if (!C.cf) goto L_11d8aa56;
  /* 11d8a9f7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11d8a9fc mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d8a9ff shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d8aa01 not edx */
  EDX = (~(EDX));
  /* 11d8aa03 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8aa06 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d8aa09 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11d8aa0d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8aa0f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8aa12 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d8aa15 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11d8aa19 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d8aa1c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8aa1f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11d8aa22 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11d8aa25 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d8aa28 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8aa2b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11d8aa2e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d8aa31 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8aa34 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11d8aa38 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d8aa3a jne 0x11d8aa54 */
  if (!C.zf) goto L_11d8aa54;
  /* 11d8aa3c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11d8aa41 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d8aa44 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d8aa46 not edx */
  EDX = (~(EDX));
  /* 11d8aa48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8aa4b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d8aa4d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11d8aa4f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8aa52 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11d8aa54:;
  /* 11d8aa54 jmp 0x11d8aac1 */
  goto L_11d8aac1;
L_11d8aa56:;
  /* 11d8aa56 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d8aa59 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8aa5c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11d8aa61 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11d8aa63 not eax */
  EAX = (~(EAX));
  /* 11d8aa65 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8aa68 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d8aa6b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11d8aa72 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d8aa74 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8aa77 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d8aa7a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 11d8aa81 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d8aa84 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8aa87 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11d8aa8a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11d8aa8d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d8aa90 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8aa93 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11d8aa96 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d8aa99 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8aa9c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11d8aaa0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d8aaa2 jne 0x11d8aac1 */
  if (!C.zf) goto L_11d8aac1;
  /* 11d8aaa4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d8aaa7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8aaaa mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11d8aaaf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11d8aab1 not eax */
  EAX = (~(EAX));
  /* 11d8aab3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8aab6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d8aab9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11d8aabb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8aabe mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11d8aac1:;
  /* 11d8aac1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11d8aac4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11d8aac7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11d8aaca mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d8aacd mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11d8aad0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11d8aad3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11d8aad6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11d8aad9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11d8aadc mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_11d8aadf:;
  /* 11d8aadf mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11d8aae2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_11d8aae5:;
  /* 11d8aae5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d8aae8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11d8aaeb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d8aaed jne 0x11d8aafb */
  if (!C.zf) goto L_11d8aafb;
  /* 11d8aaef mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d8aaf2 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8aaf5 je 0x11d8ac0b */
  if (C.zf) goto L_11d8ac0b;
L_11d8aafb:;
  /* 11d8aafb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d8aafe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8ab01 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 11d8ab04 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11d8ab07 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d8ab0a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d8ab0d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d8ab10 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11d8ab13 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d8ab16 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d8ab19 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11d8ab1c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d8ab1f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d8ab22 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11d8ab25 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d8ab28 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d8ab2b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d8ab2e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11d8ab31 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d8ab34 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d8ab37 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d8ab3a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8ab3d jne 0x11d8ac0b */
  if (!C.zf) goto L_11d8ac0b;
  /* 11d8ab43 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8ab47 jae 0x11d8aba4 */
  if (!C.cf) goto L_11d8aba4;
  /* 11d8ab49 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d8ab4c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8ab4f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11d8ab53 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d8ab56 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8ab59 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11d8ab5c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11d8ab5f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d8ab62 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8ab65 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11d8ab68 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d8ab6a jne 0x11d8ab82 */
  if (!C.zf) goto L_11d8ab82;
  /* 11d8ab6c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11d8ab71 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d8ab74 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d8ab76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8ab79 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d8ab7b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11d8ab7d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8ab80 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11d8ab82:;
  /* 11d8ab82 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11d8ab87 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d8ab8a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11d8ab8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8ab8f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d8ab92 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11d8ab96 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d8ab98 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8ab9b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d8ab9e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11d8aba2 jmp 0x11d8ac0b */
  goto L_11d8ac0b;
L_11d8aba4:;
  /* 11d8aba4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d8aba7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8abaa movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11d8abae mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d8abb1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8abb4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11d8abb7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11d8abba mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d8abbd add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8abc0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11d8abc3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d8abc5 jne 0x11d8abe2 */
  if (!C.zf) goto L_11d8abe2;
  /* 11d8abc7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d8abca sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8abcd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11d8abd2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d8abd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8abd7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d8abda or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11d8abdc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8abdf mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11d8abe2:;
  /* 11d8abe2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d8abe5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8abe8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11d8abed shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11d8abef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8abf2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d8abf5 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11d8abfc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d8abfe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8ac01 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11d8ac04 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_11d8ac0b:;
  /* 11d8ac0b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d8ac0e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8ac11 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11d8ac13 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d8ac16 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8ac19 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8ac1c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 11d8ac1f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8ac22 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d8ac24 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8ac27 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8ac2a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11d8ac2c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8ac2f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8ac32 jne 0x11d8ad99 */
  if (!C.zf) goto L_11d8ad99;
  /* 11d8ac38 cmp dword ptr [0x11db3080], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db3080))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8ac3f je 0x11d8ad88 */
  if (C.zf) goto L_11d8ad88;
  /* 11d8ac45 mov eax, dword ptr [0x11db3078] */
  EAX = (r32((uint32_t)(0x11db3078)));
  /* 11d8ac4a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 11d8ac4d mov ecx, dword ptr [0x11db3080] */
  ECX = (r32((uint32_t)(0x11db3080)));
  /* 11d8ac53 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11d8ac56 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8ac58 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11d8ac5b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11d8ac60 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11d8ac65 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8ac68 push eax */
  push32((uint32_t)(EAX));
  /* 11d8ac69 call dword ptr [0x11db4350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4350))), 0x11d8ac6fu);
  /* 11d8ac6f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11d8ac74 mov ecx, dword ptr [0x11db3078] */
  ECX = (r32((uint32_t)(0x11db3078)));
  /* 11d8ac7a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d8ac7c mov eax, dword ptr [0x11db3080] */
  EAX = (r32((uint32_t)(0x11db3080)));
  /* 11d8ac81 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11d8ac84 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11d8ac86 mov edx, dword ptr [0x11db3080] */
  EDX = (r32((uint32_t)(0x11db3080)));
  /* 11d8ac8c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11d8ac8f mov eax, dword ptr [0x11db3080] */
  EAX = (r32((uint32_t)(0x11db3080)));
  /* 11d8ac94 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11d8ac97 mov edx, dword ptr [0x11db3078] */
  EDX = (r32((uint32_t)(0x11db3078)));
  /* 11d8ac9d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 11d8aca8 mov eax, dword ptr [0x11db3080] */
  EAX = (r32((uint32_t)(0x11db3080)));
  /* 11d8acad mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11d8acb0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 11d8acb3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11d8acb6 mov eax, dword ptr [0x11db3080] */
  EAX = (r32((uint32_t)(0x11db3080)));
  /* 11d8acbb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11d8acbe mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 11d8acc1 mov edx, dword ptr [0x11db3080] */
  EDX = (r32((uint32_t)(0x11db3080)));
  /* 11d8acc7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11d8acca movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 11d8acce test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d8acd0 jne 0x11d8ace6 */
  if (!C.zf) goto L_11d8ace6;
  /* 11d8acd2 mov edx, dword ptr [0x11db3080] */
  EDX = (r32((uint32_t)(0x11db3080)));
  /* 11d8acd8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11d8acdb and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 11d8acdd mov ecx, dword ptr [0x11db3080] */
  ECX = (r32((uint32_t)(0x11db3080)));
  /* 11d8ace3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11d8ace6:;
  /* 11d8ace6 mov edx, dword ptr [0x11db3080] */
  EDX = (r32((uint32_t)(0x11db3080)));
  /* 11d8acec cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8acf0 jne 0x11d8ad88 */
  if (!C.zf) goto L_11d8ad88;
  /* 11d8acf6 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11d8acfb push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8acfd mov eax, dword ptr [0x11db3080] */
  EAX = (r32((uint32_t)(0x11db3080)));
  /* 11d8ad02 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11d8ad05 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8ad06 call dword ptr [0x11db4350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4350))), 0x11d8ad0cu);
  /* 11d8ad0c mov edx, dword ptr [0x11db3080] */
  EDX = (r32((uint32_t)(0x11db3080)));
  /* 11d8ad12 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11d8ad15 push eax */
  push32((uint32_t)(EAX));
  /* 11d8ad16 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8ad18 mov ecx, dword ptr [0x11db308c] */
  ECX = (r32((uint32_t)(0x11db308c)));
  /* 11d8ad1e push ecx */
  push32((uint32_t)(ECX));
  /* 11d8ad1f call dword ptr [0x11db4354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4354))), 0x11d8ad25u);
  /* 11d8ad25 mov edx, dword ptr [0x11db3084] */
  EDX = (r32((uint32_t)(0x11db3084)));
  /* 11d8ad2b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d8ad2e mov eax, dword ptr [0x11db3088] */
  EAX = (r32((uint32_t)(0x11db3088)));
  /* 11d8ad33 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8ad35 mov ecx, dword ptr [0x11db3080] */
  ECX = (r32((uint32_t)(0x11db3080)));
  /* 11d8ad3b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8ad3e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8ad40 push eax */
  push32((uint32_t)(EAX));
  /* 11d8ad41 mov edx, dword ptr [0x11db3080] */
  EDX = (r32((uint32_t)(0x11db3080)));
  /* 11d8ad47 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8ad4a push edx */
  push32((uint32_t)(EDX));
  /* 11d8ad4b mov eax, dword ptr [0x11db3080] */
  EAX = (r32((uint32_t)(0x11db3080)));
  /* 11d8ad50 push eax */
  push32((uint32_t)(EAX));
  /* 11d8ad51 call 0x11d8e6e0 */
  push32(0x11d8ad56u); f_11d8e6e0();
  /* 11d8ad56 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8ad59 mov ecx, dword ptr [0x11db3084] */
  ECX = (r32((uint32_t)(0x11db3084)));
  /* 11d8ad5f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8ad62 mov dword ptr [0x11db3084], ecx */
  w32((uint32_t)(0x11db3084), (ECX));
  /* 11d8ad68 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8ad6b cmp edx, dword ptr [0x11db3080] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11db3080))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8ad71 jbe 0x11d8ad7c */
  if ((C.cf||C.zf)) goto L_11d8ad7c;
  /* 11d8ad73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8ad76 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8ad79 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11d8ad7c:;
  /* 11d8ad7c mov ecx, dword ptr [0x11db3088] */
  ECX = (r32((uint32_t)(0x11db3088)));
  /* 11d8ad82 mov dword ptr [0x11db307c], ecx */
  w32((uint32_t)(0x11db307c), (ECX));
L_11d8ad88:;
  /* 11d8ad88 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8ad8b mov dword ptr [0x11db3080], edx */
  w32((uint32_t)(0x11db3080), (EDX));
  /* 11d8ad91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8ad94 mov dword ptr [0x11db3078], eax */
  w32((uint32_t)(0x11db3078), (EAX));
L_11d8ad99:;
  /* 11d8ad99 mov esp, ebp */
  ESP = (EBP);
  /* 11d8ad9b pop ebp */
  EBP = (pop32());
  /* 11d8ad9c ret  */
  ESPCHK(0x11d8a7d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ada0 @ 0x11d8ada0 (1334 bytes, 427 insns) */
void f_11d8ada0(void) {
  FTRACE(0x11d8ada0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8ada0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8ada1 mov ebp, esp */
  EBP = (ESP);
  /* 11d8ada3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8ada6 push esi */
  push32((uint32_t)(ESI));
  /* 11d8ada7 mov eax, dword ptr [0x11db3084] */
  EAX = (r32((uint32_t)(0x11db3084)));
  /* 11d8adac imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d8adaf mov ecx, dword ptr [0x11db3088] */
  ECX = (r32((uint32_t)(0x11db3088)));
  /* 11d8adb5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8adb7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11d8adba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8adbd add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8adc0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11d8adc3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11d8adc6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d8adc9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11d8adcc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8adcf mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11d8add2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8add6 jge 0x11d8adec */
  if ((C.sf==C.of)) goto L_11d8adec;
  /* 11d8add8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d8addb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d8adde shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d8ade0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11d8ade3 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 11d8adea jmp 0x11d8ae01 */
  goto L_11d8ae01;
L_11d8adec:;
  /* 11d8adec mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11d8adf3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d8adf6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8adf9 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d8adfc shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11d8adfe mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_11d8ae01:;
  /* 11d8ae01 mov ecx, dword ptr [0x11db307c] */
  ECX = (r32((uint32_t)(0x11db307c)));
  /* 11d8ae07 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_11d8ae0a:;
  /* 11d8ae0a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8ae0d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8ae10 jae 0x11d8ae36 */
  if (!C.cf) goto L_11d8ae36;
  /* 11d8ae12 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8ae15 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8ae18 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 11d8ae1a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8ae1d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11d8ae20 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 11d8ae23 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d8ae25 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d8ae27 je 0x11d8ae2b */
  if (C.zf) goto L_11d8ae2b;
  /* 11d8ae29 jmp 0x11d8ae36 */
  goto L_11d8ae36;
L_11d8ae2b:;
  /* 11d8ae2b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8ae2e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8ae31 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11d8ae34 jmp 0x11d8ae0a */
  goto L_11d8ae0a;
L_11d8ae36:;
  /* 11d8ae36 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8ae39 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8ae3c jne 0x11d8af1d */
  if (!C.zf) goto L_11d8af1d;
  /* 11d8ae42 mov eax, dword ptr [0x11db3088] */
  EAX = (r32((uint32_t)(0x11db3088)));
  /* 11d8ae47 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11d8ae4a:;
  /* 11d8ae4a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8ae4d cmp ecx, dword ptr [0x11db307c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11db307c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8ae53 jae 0x11d8ae79 */
  if (!C.cf) goto L_11d8ae79;
  /* 11d8ae55 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8ae58 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8ae5b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 11d8ae5d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8ae60 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11d8ae63 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11d8ae66 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8ae68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8ae6a je 0x11d8ae6e */
  if (C.zf) goto L_11d8ae6e;
  /* 11d8ae6c jmp 0x11d8ae79 */
  goto L_11d8ae79;
L_11d8ae6e:;
  /* 11d8ae6e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8ae71 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8ae74 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11d8ae77 jmp 0x11d8ae4a */
  goto L_11d8ae4a;
L_11d8ae79:;
  /* 11d8ae79 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8ae7c cmp ecx, dword ptr [0x11db307c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11db307c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8ae82 jne 0x11d8af1d */
  if (!C.zf) goto L_11d8af1d;
L_11d8ae88:;
  /* 11d8ae88 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8ae8b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8ae8e jae 0x11d8aea6 */
  if (!C.cf) goto L_11d8aea6;
  /* 11d8ae90 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8ae93 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8ae97 je 0x11d8ae9b */
  if (C.zf) goto L_11d8ae9b;
  /* 11d8ae99 jmp 0x11d8aea6 */
  goto L_11d8aea6;
L_11d8ae9b:;
  /* 11d8ae9b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8ae9e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8aea1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11d8aea4 jmp 0x11d8ae88 */
  goto L_11d8ae88;
L_11d8aea6:;
  /* 11d8aea6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8aea9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8aeac jne 0x11d8aef7 */
  if (!C.zf) goto L_11d8aef7;
  /* 11d8aeae mov eax, dword ptr [0x11db3088] */
  EAX = (r32((uint32_t)(0x11db3088)));
  /* 11d8aeb3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11d8aeb6:;
  /* 11d8aeb6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8aeb9 cmp ecx, dword ptr [0x11db307c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11db307c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8aebf jae 0x11d8aed7 */
  if (!C.cf) goto L_11d8aed7;
  /* 11d8aec1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8aec4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8aec8 je 0x11d8aecc */
  if (C.zf) goto L_11d8aecc;
  /* 11d8aeca jmp 0x11d8aed7 */
  goto L_11d8aed7;
L_11d8aecc:;
  /* 11d8aecc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8aecf add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8aed2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11d8aed5 jmp 0x11d8aeb6 */
  goto L_11d8aeb6;
L_11d8aed7:;
  /* 11d8aed7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8aeda cmp ecx, dword ptr [0x11db307c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11db307c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8aee0 jne 0x11d8aef7 */
  if (!C.zf) goto L_11d8aef7;
  /* 11d8aee2 call 0x11d8b2e0 */
  push32(0x11d8aee7u); f_11d8b2e0();
  /* 11d8aee7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11d8aeea cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8aeee jne 0x11d8aef7 */
  if (!C.zf) goto L_11d8aef7;
  /* 11d8aef0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8aef2 jmp 0x11d8b2d1 */
  goto L_11d8b2d1;
L_11d8aef7:;
  /* 11d8aef7 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8aefa push edx */
  push32((uint32_t)(EDX));
  /* 11d8aefb call 0x11d8b3f0 */
  push32(0x11d8af00u); f_11d8b3f0();
  /* 11d8af00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8af03 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8af06 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11d8af09 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11d8af0b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8af0e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11d8af11 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8af14 jne 0x11d8af1d */
  if (!C.zf) goto L_11d8af1d;
  /* 11d8af16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8af18 jmp 0x11d8b2d1 */
  goto L_11d8b2d1;
L_11d8af1d:;
  /* 11d8af1d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8af20 mov dword ptr [0x11db307c], edx */
  w32((uint32_t)(0x11db307c), (EDX));
  /* 11d8af26 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8af29 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11d8af2c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 11d8af2f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d8af32 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d8af34 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11d8af37 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8af3b je 0x11d8af60 */
  if (C.zf) goto L_11d8af60;
  /* 11d8af3d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8af40 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d8af43 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8af46 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 11d8af4a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8af4d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d8af50 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 11d8af53 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 11d8af5a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11d8af5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8af5e jne 0x11d8af95 */
  if (!C.zf) goto L_11d8af95;
L_11d8af60:;
  /* 11d8af60 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_11d8af67:;
  /* 11d8af67 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8af6a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d8af6d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8af70 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 11d8af74 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8af77 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d8af7a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 11d8af7d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 11d8af84 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 11d8af86 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d8af88 jne 0x11d8af95 */
  if (!C.zf) goto L_11d8af95;
  /* 11d8af8a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8af8d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8af90 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11d8af93 jmp 0x11d8af67 */
  goto L_11d8af67;
L_11d8af95:;
  /* 11d8af95 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8af98 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d8af9e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d8afa1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11d8afa8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d8afab mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11d8afb2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8afb5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d8afb8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8afbb and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 11d8afbf mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11d8afc2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8afc6 jne 0x11d8afe2 */
  if (!C.zf) goto L_11d8afe2;
  /* 11d8afc8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 11d8afcf mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8afd2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d8afd5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11d8afd8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 11d8afdf mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_11d8afe2:;
  /* 11d8afe2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8afe6 jl 0x11d8affb */
  if ((C.sf!=C.of)) goto L_11d8affb;
  /* 11d8afe8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d8afeb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11d8afed mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11d8aff0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d8aff3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8aff6 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11d8aff9 jmp 0x11d8afe2 */
  goto L_11d8afe2;
L_11d8affb:;
  /* 11d8affb mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d8affe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8b001 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 11d8b005 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11d8b008 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8b00b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d8b00d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8b010 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d8b013 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8b016 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11d8b019 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8b01c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11d8b01f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8b023 jle 0x11d8b02c */
  if ((C.zf||C.sf!=C.of)) goto L_11d8b02c;
  /* 11d8b025 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_11d8b02c:;
  /* 11d8b02c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d8b02f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8b032 je 0x11d8b250 */
  if (C.zf) goto L_11d8b250;
  /* 11d8b038 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8b03b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8b03e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d8b041 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8b044 jne 0x11d8b11a */
  if (!C.zf) goto L_11d8b11a;
  /* 11d8b04a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8b04e jge 0x11d8b0af */
  if ((C.sf==C.of)) goto L_11d8b0af;
  /* 11d8b050 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11d8b055 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d8b058 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11d8b05a not eax */
  EAX = (~(EAX));
  /* 11d8b05c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8b05f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d8b062 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11d8b066 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d8b068 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8b06b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d8b06e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11d8b072 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d8b075 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b078 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11d8b07b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11d8b07e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d8b081 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b084 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11d8b087 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d8b08a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b08d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11d8b091 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d8b093 jne 0x11d8b0ad */
  if (!C.zf) goto L_11d8b0ad;
  /* 11d8b095 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11d8b09a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d8b09d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11d8b09f not eax */
  EAX = (~(EAX));
  /* 11d8b0a1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8b0a4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d8b0a6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11d8b0a8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8b0ab mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11d8b0ad:;
  /* 11d8b0ad jmp 0x11d8b11a */
  goto L_11d8b11a;
L_11d8b0af:;
  /* 11d8b0af mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d8b0b2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8b0b5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11d8b0ba shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d8b0bc not edx */
  EDX = (~(EDX));
  /* 11d8b0be mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8b0c1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d8b0c4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11d8b0cb and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8b0cd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8b0d0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d8b0d3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 11d8b0da mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d8b0dd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b0e0 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11d8b0e3 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11d8b0e6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d8b0e9 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b0ec mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11d8b0ef mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d8b0f2 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b0f5 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11d8b0f9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d8b0fb jne 0x11d8b11a */
  if (!C.zf) goto L_11d8b11a;
  /* 11d8b0fd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d8b100 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8b103 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11d8b108 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d8b10a not edx */
  EDX = (~(EDX));
  /* 11d8b10c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8b10f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d8b112 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11d8b114 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8b117 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11d8b11a:;
  /* 11d8b11a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8b11d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11d8b120 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8b123 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11d8b126 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11d8b129 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8b12c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d8b12f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8b132 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11d8b135 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11d8b138 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8b13c je 0x11d8b250 */
  if (C.zf) goto L_11d8b250;
  /* 11d8b142 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d8b145 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8b148 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 11d8b14b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d8b14e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8b151 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d8b154 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d8b157 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11d8b15a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8b15d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d8b160 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11d8b163 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d8b166 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8b169 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11d8b16c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8b16f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d8b172 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8b175 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11d8b178 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8b17b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8b17e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d8b181 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8b184 jne 0x11d8b250 */
  if (!C.zf) goto L_11d8b250;
  /* 11d8b18a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8b18e jge 0x11d8b1ea */
  if ((C.sf==C.of)) goto L_11d8b1ea;
  /* 11d8b190 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d8b193 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b196 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11d8b19a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d8b19d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b1a0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11d8b1a3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11d8b1a5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d8b1a8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b1ab mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11d8b1ae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d8b1b0 jne 0x11d8b1c8 */
  if (!C.zf) goto L_11d8b1c8;
  /* 11d8b1b2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11d8b1b7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d8b1ba shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11d8b1bc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8b1bf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d8b1c1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11d8b1c3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8b1c6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11d8b1c8:;
  /* 11d8b1c8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11d8b1cd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d8b1d0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d8b1d2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8b1d5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d8b1d8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11d8b1dc or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8b1de mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8b1e1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d8b1e4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11d8b1e8 jmp 0x11d8b250 */
  goto L_11d8b250;
L_11d8b1ea:;
  /* 11d8b1ea mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d8b1ed add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b1f0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11d8b1f4 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d8b1f7 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b1fa mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11d8b1fd add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11d8b1ff mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d8b202 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b205 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11d8b208 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d8b20a jne 0x11d8b227 */
  if (!C.zf) goto L_11d8b227;
  /* 11d8b20c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d8b20f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8b212 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11d8b217 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11d8b219 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8b21c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d8b21f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11d8b221 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8b224 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11d8b227:;
  /* 11d8b227 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d8b22a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8b22d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11d8b232 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d8b234 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8b237 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d8b23a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11d8b241 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8b243 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8b246 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d8b249 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_11d8b250:;
  /* 11d8b250 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8b254 je 0x11d8b26a */
  if (C.zf) goto L_11d8b26a;
  /* 11d8b256 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8b259 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8b25c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11d8b25e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8b261 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b264 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8b267 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_11d8b26a:;
  /* 11d8b26a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8b26d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b270 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11d8b273 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d8b276 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b279 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8b27c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11d8b27e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d8b281 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b284 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8b287 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b28a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 11d8b28d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8b290 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d8b292 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8b295 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d8b297 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b29a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8b29d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11d8b29f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d8b2a1 jne 0x11d8b2c3 */
  if (!C.zf) goto L_11d8b2c3;
  /* 11d8b2a3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8b2a6 cmp eax, dword ptr [0x11db3080] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11db3080))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8b2ac jne 0x11d8b2c3 */
  if (!C.zf) goto L_11d8b2c3;
  /* 11d8b2ae mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8b2b1 cmp ecx, dword ptr [0x11db3078] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11db3078))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8b2b7 jne 0x11d8b2c3 */
  if (!C.zf) goto L_11d8b2c3;
  /* 11d8b2b9 mov dword ptr [0x11db3080], 0 */
  w32((uint32_t)(0x11db3080), (0x0u));
L_11d8b2c3:;
  /* 11d8b2c3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11d8b2c6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8b2c9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11d8b2cb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8b2ce add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11d8b2d1:;
  /* 11d8b2d1 pop esi */
  ESI = (pop32());
  /* 11d8b2d2 mov esp, ebp */
  ESP = (EBP);
  /* 11d8b2d4 pop ebp */
  EBP = (pop32());
  /* 11d8b2d5 ret  */
  ESPCHK(0x11d8ada0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b2e0 @ 0x11d8b2e0 (271 bytes, 78 insns) */
void f_11d8b2e0(void) {
  FTRACE(0x11d8b2e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8b2e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8b2e1 mov ebp, esp */
  EBP = (ESP);
  /* 11d8b2e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8b2e4 mov eax, dword ptr [0x11db3084] */
  EAX = (r32((uint32_t)(0x11db3084)));
  /* 11d8b2e9 cmp eax, dword ptr [0x11db3068] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11db3068))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8b2ef jne 0x11d8b33b */
  if (!C.zf) goto L_11d8b33b;
  /* 11d8b2f1 mov ecx, dword ptr [0x11db3068] */
  ECX = (r32((uint32_t)(0x11db3068)));
  /* 11d8b2f7 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b2fa imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d8b2fd push ecx */
  push32((uint32_t)(ECX));
  /* 11d8b2fe mov edx, dword ptr [0x11db3088] */
  EDX = (r32((uint32_t)(0x11db3088)));
  /* 11d8b304 push edx */
  push32((uint32_t)(EDX));
  /* 11d8b305 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8b307 mov eax, dword ptr [0x11db308c] */
  EAX = (r32((uint32_t)(0x11db308c)));
  /* 11d8b30c push eax */
  push32((uint32_t)(EAX));
  /* 11d8b30d call dword ptr [0x11db4330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4330))), 0x11d8b313u);
  /* 11d8b313 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d8b316 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8b31a jne 0x11d8b323 */
  if (!C.zf) goto L_11d8b323;
  /* 11d8b31c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8b31e jmp 0x11d8b3eb */
  goto L_11d8b3eb;
L_11d8b323:;
  /* 11d8b323 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8b326 mov dword ptr [0x11db3088], ecx */
  w32((uint32_t)(0x11db3088), (ECX));
  /* 11d8b32c mov edx, dword ptr [0x11db3068] */
  EDX = (r32((uint32_t)(0x11db3068)));
  /* 11d8b332 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b335 mov dword ptr [0x11db3068], edx */
  w32((uint32_t)(0x11db3068), (EDX));
L_11d8b33b:;
  /* 11d8b33b mov eax, dword ptr [0x11db3084] */
  EAX = (r32((uint32_t)(0x11db3084)));
  /* 11d8b340 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d8b343 mov ecx, dword ptr [0x11db3088] */
  ECX = (r32((uint32_t)(0x11db3088)));
  /* 11d8b349 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b34b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d8b34e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11d8b353 push 8 */
  push32((uint32_t)(0x8u));
  /* 11d8b355 mov edx, dword ptr [0x11db308c] */
  EDX = (r32((uint32_t)(0x11db308c)));
  /* 11d8b35b push edx */
  push32((uint32_t)(EDX));
  /* 11d8b35c call dword ptr [0x11db4334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4334))), 0x11d8b362u);
  /* 11d8b362 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8b365 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 11d8b368 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8b36b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8b36f jne 0x11d8b375 */
  if (!C.zf) goto L_11d8b375;
  /* 11d8b371 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8b373 jmp 0x11d8b3eb */
  goto L_11d8b3eb;
L_11d8b375:;
  /* 11d8b375 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d8b377 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11d8b37c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11d8b381 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8b383 call dword ptr [0x11db432c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db432c))), 0x11d8b389u);
  /* 11d8b389 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8b38c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 11d8b38f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8b392 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8b396 jne 0x11d8b3b2 */
  if (!C.zf) goto L_11d8b3b2;
  /* 11d8b398 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8b39b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11d8b39e push ecx */
  push32((uint32_t)(ECX));
  /* 11d8b39f push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8b3a1 mov edx, dword ptr [0x11db308c] */
  EDX = (r32((uint32_t)(0x11db308c)));
  /* 11d8b3a7 push edx */
  push32((uint32_t)(EDX));
  /* 11d8b3a8 call dword ptr [0x11db4354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4354))), 0x11d8b3aeu);
  /* 11d8b3ae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8b3b0 jmp 0x11d8b3eb */
  goto L_11d8b3eb;
L_11d8b3b2:;
  /* 11d8b3b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8b3b5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11d8b3bb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8b3be mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11d8b3c5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8b3c8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 11d8b3cf mov eax, dword ptr [0x11db3084] */
  EAX = (r32((uint32_t)(0x11db3084)));
  /* 11d8b3d4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b3d7 mov dword ptr [0x11db3084], eax */
  w32((uint32_t)(0x11db3084), (EAX));
  /* 11d8b3dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8b3df mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11d8b3e2 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 11d8b3e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11d8b3eb:;
  /* 11d8b3eb mov esp, ebp */
  ESP = (EBP);
  /* 11d8b3ed pop ebp */
  EBP = (pop32());
  /* 11d8b3ee ret  */
  ESPCHK(0x11d8b2e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b3f0 @ 0x11d8b3f0 (494 bytes, 149 insns) */
void f_11d8b3f0(void) {
  FTRACE(0x11d8b3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8b3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8b3f1 mov ebp, esp */
  EBP = (ESP);
  /* 11d8b3f3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8b3f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8b3f9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11d8b3fc mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11d8b3ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8b402 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11d8b405 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d8b408 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_11d8b40f:;
  /* 11d8b40f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8b413 jl 0x11d8b428 */
  if ((C.sf!=C.of)) goto L_11d8b428;
  /* 11d8b415 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8b418 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11d8b41a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d8b41d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d8b420 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b423 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11d8b426 jmp 0x11d8b40f */
  goto L_11d8b40f;
L_11d8b428:;
  /* 11d8b428 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d8b42b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d8b431 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d8b434 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11d8b43b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11d8b43e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11d8b445 jmp 0x11d8b450 */
  goto L_11d8b450;
L_11d8b447:;
  /* 11d8b447 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d8b44a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b44d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_11d8b450:;
  /* 11d8b450 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8b454 jge 0x11d8b476 */
  if ((C.sf==C.of)) goto L_11d8b476;
  /* 11d8b456 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d8b459 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d8b45c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 11d8b45f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11d8b462 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8b465 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8b468 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11d8b46b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8b46e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8b471 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11d8b474 jmp 0x11d8b447 */
  goto L_11d8b447;
L_11d8b476:;
  /* 11d8b476 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d8b479 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11d8b47c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8b47f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11d8b482 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b484 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11d8b487 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d8b489 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11d8b48e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11d8b493 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8b496 push edx */
  push32((uint32_t)(EDX));
  /* 11d8b497 call dword ptr [0x11db432c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db432c))), 0x11d8b49du);
  /* 11d8b49d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8b49f jne 0x11d8b4a9 */
  if (!C.zf) goto L_11d8b4a9;
  /* 11d8b4a1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d8b4a4 jmp 0x11d8b5da */
  goto L_11d8b5da;
L_11d8b4a9:;
  /* 11d8b4a9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8b4ac add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b4b1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11d8b4b4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8b4b7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d8b4ba jmp 0x11d8b4c8 */
  goto L_11d8b4c8;
L_11d8b4bc:;
  /* 11d8b4bc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8b4bf add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b4c5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11d8b4c8:;
  /* 11d8b4c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8b4cb cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8b4ce ja 0x11d8b52d */
  if ((!C.cf&&!C.zf)) goto L_11d8b52d;
  /* 11d8b4d0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8b4d3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 11d8b4da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8b4dd mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 11d8b4e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8b4ea add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b4ed mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11d8b4f0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8b4f3 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 11d8b4f9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8b4fc add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b502 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8b505 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11d8b508 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8b50b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8b511 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8b514 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11d8b517 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8b51a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b51f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11d8b522 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8b525 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 11d8b52b jmp 0x11d8b4bc */
  goto L_11d8b4bc;
L_11d8b52d:;
  /* 11d8b52d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d8b530 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b536 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11d8b539 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8b53c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b53f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d8b542 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11d8b545 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d8b548 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11d8b54b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11d8b54e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8b551 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d8b554 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11d8b557 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d8b55a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b55d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d8b560 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11d8b563 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d8b566 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11d8b569 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11d8b56c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8b56f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d8b572 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11d8b575 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d8b578 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d8b57b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 11d8b583 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d8b586 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d8b589 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 11d8b594 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d8b597 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 11d8b59b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d8b59e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 11d8b5a1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11d8b5a4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d8b5a7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 11d8b5aa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d8b5ac jne 0x11d8b5bd */
  if (!C.zf) goto L_11d8b5bd;
  /* 11d8b5ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8b5b1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d8b5b4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11d8b5b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8b5ba mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11d8b5bd:;
  /* 11d8b5bd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11d8b5c2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d8b5c5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d8b5c7 not edx */
  EDX = (~(EDX));
  /* 11d8b5c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8b5cc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11d8b5cf and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11d8b5d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8b5d4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11d8b5d7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_11d8b5da:;
  /* 11d8b5da mov esp, ebp */
  ESP = (EBP);
  /* 11d8b5dc pop ebp */
  EBP = (pop32());
  /* 11d8b5dd ret  */
  ESPCHK(0x11d8b3f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b5e0 @ 0x11d8b5e0 (1515 bytes, 489 insns) */
void f_11d8b5e0(void) {
  FTRACE(0x11d8b5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8b5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8b5e1 mov ebp, esp */
  EBP = (ESP);
  /* 11d8b5e3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8b5e6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d8b5e9 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b5ec and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 11d8b5ee mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11d8b5f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8b5f4 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11d8b5f7 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11d8b5fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8b5fd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8b600 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8b603 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d8b606 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d8b609 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11d8b60c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d8b60f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8b612 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d8b618 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8b61b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11d8b622 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11d8b625 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8b628 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8b62b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11d8b62e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d8b631 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d8b633 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8b636 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11d8b639 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d8b63c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b63f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11d8b642 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d8b645 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d8b647 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11d8b64a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d8b64d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8b650 jle 0x11d8b906 */
  if ((C.zf||C.sf!=C.of)) goto L_11d8b906;
  /* 11d8b656 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8b659 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11d8b65c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d8b65e jne 0x11d8b66b */
  if (!C.zf) goto L_11d8b66b;
  /* 11d8b660 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d8b663 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b666 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8b669 jle 0x11d8b672 */
  if ((C.zf||C.sf!=C.of)) goto L_11d8b672;
L_11d8b66b:;
  /* 11d8b66b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8b66d jmp 0x11d8bbc7 */
  goto L_11d8bbc7;
L_11d8b672:;
  /* 11d8b672 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8b675 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11d8b678 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8b67b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11d8b67e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8b682 jbe 0x11d8b68b */
  if ((C.cf||C.zf)) goto L_11d8b68b;
  /* 11d8b684 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_11d8b68b:;
  /* 11d8b68b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d8b68e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d8b691 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d8b694 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8b697 jne 0x11d8b76d */
  if (!C.zf) goto L_11d8b76d;
  /* 11d8b69d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8b6a1 jae 0x11d8b702 */
  if (!C.cf) goto L_11d8b702;
  /* 11d8b6a3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11d8b6a8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d8b6ab shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d8b6ad not edx */
  EDX = (~(EDX));
  /* 11d8b6af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8b6b2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8b6b5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11d8b6b9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8b6bb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8b6be mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8b6c1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11d8b6c5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8b6c8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b6cb mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11d8b6ce sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11d8b6d1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8b6d4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b6d7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11d8b6da mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8b6dd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b6e0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11d8b6e4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d8b6e6 jne 0x11d8b700 */
  if (!C.zf) goto L_11d8b700;
  /* 11d8b6e8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11d8b6ed mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d8b6f0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d8b6f2 not edx */
  EDX = (~(EDX));
  /* 11d8b6f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8b6f7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d8b6f9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11d8b6fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8b6fe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11d8b700:;
  /* 11d8b700 jmp 0x11d8b76d */
  goto L_11d8b76d;
L_11d8b702:;
  /* 11d8b702 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d8b705 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8b708 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11d8b70d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11d8b70f not eax */
  EAX = (~(EAX));
  /* 11d8b711 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8b714 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8b717 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11d8b71e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d8b720 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8b723 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8b726 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 11d8b72d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8b730 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b733 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11d8b736 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11d8b739 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8b73c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b73f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11d8b742 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8b745 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b748 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11d8b74c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d8b74e jne 0x11d8b76d */
  if (!C.zf) goto L_11d8b76d;
  /* 11d8b750 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d8b753 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8b756 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11d8b75b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11d8b75d not eax */
  EAX = (~(EAX));
  /* 11d8b75f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8b762 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d8b765 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11d8b767 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8b76a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11d8b76d:;
  /* 11d8b76d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d8b770 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11d8b773 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d8b776 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d8b779 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11d8b77c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d8b77f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11d8b782 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d8b785 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11d8b788 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11d8b78b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d8b78e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b791 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8b794 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11d8b797 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8b79b jle 0x11d8b8e7 */
  if ((C.zf||C.sf!=C.of)) goto L_11d8b8e7;
  /* 11d8b7a1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d8b7a4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b7a7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11d8b7aa mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8b7ad sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11d8b7b0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8b7b3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11d8b7b6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8b7ba jbe 0x11d8b7c3 */
  if ((C.cf||C.zf)) goto L_11d8b7c3;
  /* 11d8b7bc mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_11d8b7c3:;
  /* 11d8b7c3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d8b7c6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8b7c9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 11d8b7cc mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11d8b7cf mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d8b7d2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8b7d5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d8b7d8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11d8b7db mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d8b7de mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8b7e1 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11d8b7e4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8b7e7 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d8b7ea mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11d8b7ed mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d8b7f0 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d8b7f3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d8b7f6 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11d8b7f9 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d8b7fc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d8b7ff mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d8b802 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8b805 jne 0x11d8b8d3 */
  if (!C.zf) goto L_11d8b8d3;
  /* 11d8b80b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8b80f jae 0x11d8b86c */
  if (!C.cf) goto L_11d8b86c;
  /* 11d8b811 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8b814 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b817 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11d8b81b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8b81e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b821 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11d8b824 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11d8b827 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8b82a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b82d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11d8b830 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d8b832 jne 0x11d8b84a */
  if (!C.zf) goto L_11d8b84a;
  /* 11d8b834 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11d8b839 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d8b83c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d8b83e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8b841 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d8b843 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11d8b845 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8b848 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11d8b84a:;
  /* 11d8b84a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11d8b84f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d8b852 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11d8b854 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8b857 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8b85a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11d8b85e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d8b860 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8b863 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8b866 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11d8b86a jmp 0x11d8b8d3 */
  goto L_11d8b8d3;
L_11d8b86c:;
  /* 11d8b86c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8b86f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b872 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11d8b876 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8b879 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b87c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11d8b87f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11d8b882 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8b885 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b888 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11d8b88b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d8b88d jne 0x11d8b8aa */
  if (!C.zf) goto L_11d8b8aa;
  /* 11d8b88f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d8b892 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8b895 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11d8b89a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d8b89c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8b89f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d8b8a2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11d8b8a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8b8a7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11d8b8aa:;
  /* 11d8b8aa mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d8b8ad sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8b8b0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11d8b8b5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11d8b8b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8b8ba mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8b8bd mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11d8b8c4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d8b8c6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8b8c9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8b8cc mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_11d8b8d3:;
  /* 11d8b8d3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d8b8d6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8b8d9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11d8b8db mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d8b8de add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b8e1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8b8e4 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_11d8b8e7:;
  /* 11d8b8e7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d8b8ea add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b8ed mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d8b8f0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11d8b8f2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d8b8f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b8f8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d8b8fb add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b8fe mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 11d8b901 jmp 0x11d8bbc2 */
  goto L_11d8bbc2;
L_11d8b906:;
  /* 11d8b906 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d8b909 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8b90c jge 0x11d8bbc2 */
  if ((C.sf==C.of)) goto L_11d8bbc2;
  /* 11d8b912 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d8b915 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b918 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d8b91b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11d8b91d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d8b920 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b923 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d8b926 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b929 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 11d8b92c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d8b92f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b932 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11d8b935 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d8b938 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8b93b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11d8b93e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d8b941 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11d8b944 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8b947 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11d8b94a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8b94e jbe 0x11d8b957 */
  if ((C.cf||C.zf)) goto L_11d8b957;
  /* 11d8b950 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_11d8b957:;
  /* 11d8b957 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8b95a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11d8b95d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d8b95f jne 0x11d8baa0 */
  if (!C.zf) goto L_11d8baa0;
  /* 11d8b965 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8b968 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11d8b96b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8b96e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11d8b971 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8b975 jbe 0x11d8b97e */
  if ((C.cf||C.zf)) goto L_11d8b97e;
  /* 11d8b977 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_11d8b97e:;
  /* 11d8b97e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d8b981 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d8b984 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d8b987 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8b98a jne 0x11d8ba60 */
  if (!C.zf) goto L_11d8ba60;
  /* 11d8b990 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8b994 jae 0x11d8b9f5 */
  if (!C.cf) goto L_11d8b9f5;
  /* 11d8b996 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11d8b99b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d8b99e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d8b9a0 not edx */
  EDX = (~(EDX));
  /* 11d8b9a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8b9a5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8b9a8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11d8b9ac and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8b9ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8b9b1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8b9b4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11d8b9b8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8b9bb add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b9be mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11d8b9c1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11d8b9c4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8b9c7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b9ca mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11d8b9cd mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8b9d0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8b9d3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11d8b9d7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d8b9d9 jne 0x11d8b9f3 */
  if (!C.zf) goto L_11d8b9f3;
  /* 11d8b9db mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11d8b9e0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d8b9e3 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d8b9e5 not edx */
  EDX = (~(EDX));
  /* 11d8b9e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8b9ea mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d8b9ec and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11d8b9ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8b9f1 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11d8b9f3:;
  /* 11d8b9f3 jmp 0x11d8ba60 */
  goto L_11d8ba60;
L_11d8b9f5:;
  /* 11d8b9f5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d8b9f8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8b9fb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11d8ba00 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11d8ba02 not eax */
  EAX = (~(EAX));
  /* 11d8ba04 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8ba07 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8ba0a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11d8ba11 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d8ba13 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8ba16 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8ba19 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 11d8ba20 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8ba23 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8ba26 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11d8ba29 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11d8ba2c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8ba2f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8ba32 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11d8ba35 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8ba38 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8ba3b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11d8ba3f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d8ba41 jne 0x11d8ba60 */
  if (!C.zf) goto L_11d8ba60;
  /* 11d8ba43 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d8ba46 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8ba49 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11d8ba4e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11d8ba50 not eax */
  EAX = (~(EAX));
  /* 11d8ba52 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8ba55 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d8ba58 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11d8ba5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8ba5d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11d8ba60:;
  /* 11d8ba60 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d8ba63 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11d8ba66 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d8ba69 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d8ba6c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11d8ba6f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d8ba72 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11d8ba75 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d8ba78 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11d8ba7b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11d8ba7e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d8ba81 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8ba84 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11d8ba87 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d8ba8a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11d8ba8d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8ba90 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11d8ba93 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8ba97 jbe 0x11d8baa0 */
  if ((C.cf||C.zf)) goto L_11d8baa0;
  /* 11d8ba99 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_11d8baa0:;
  /* 11d8baa0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8baa3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8baa6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 11d8baa9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11d8baac mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d8baaf mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8bab2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d8bab5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11d8bab8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d8babb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8babe mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11d8bac1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8bac4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d8bac7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11d8baca mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d8bacd mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d8bad0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d8bad3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11d8bad6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d8bad9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d8badc mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d8badf cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8bae2 jne 0x11d8bbae */
  if (!C.zf) goto L_11d8bbae;
  /* 11d8bae8 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8baec jae 0x11d8bb48 */
  if (!C.cf) goto L_11d8bb48;
  /* 11d8baee mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8baf1 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8baf4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11d8baf8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8bafb add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8bafe mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11d8bb01 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11d8bb03 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8bb06 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8bb09 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11d8bb0c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d8bb0e jne 0x11d8bb26 */
  if (!C.zf) goto L_11d8bb26;
  /* 11d8bb10 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11d8bb15 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8bb18 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11d8bb1a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8bb1d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d8bb1f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11d8bb21 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8bb24 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11d8bb26:;
  /* 11d8bb26 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11d8bb2b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8bb2e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d8bb30 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8bb33 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8bb36 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11d8bb3a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8bb3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8bb3f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8bb42 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11d8bb46 jmp 0x11d8bbae */
  goto L_11d8bbae;
L_11d8bb48:;
  /* 11d8bb48 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8bb4b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8bb4e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11d8bb52 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8bb55 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8bb58 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11d8bb5b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11d8bb5d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8bb60 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8bb63 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11d8bb66 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d8bb68 jne 0x11d8bb85 */
  if (!C.zf) goto L_11d8bb85;
  /* 11d8bb6a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8bb6d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8bb70 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11d8bb75 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11d8bb77 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8bb7a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d8bb7d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11d8bb7f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8bb82 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11d8bb85:;
  /* 11d8bb85 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8bb88 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8bb8b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11d8bb90 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d8bb92 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8bb95 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8bb98 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11d8bb9f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8bba1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8bba4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8bba7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_11d8bbae:;
  /* 11d8bbae mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d8bbb1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d8bbb4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11d8bbb6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d8bbb9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8bbbc mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d8bbbf mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_11d8bbc2:;
  /* 11d8bbc2 mov eax, 1 */
  EAX = (0x1u);
L_11d8bbc7:;
  /* 11d8bbc7 mov esp, ebp */
  ESP = (EBP);
  /* 11d8bbc9 pop ebp */
  EBP = (pop32());
  /* 11d8bbca ret  */
  ESPCHK(0x11d8b5e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bbd0 @ 0x11d8bbd0 (304 bytes, 79 insns) */
void f_11d8bbd0(void) {
  FTRACE(0x11d8bbd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8bbd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8bbd1 mov ebp, esp */
  EBP = (ESP);
  /* 11d8bbd3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8bbd4 cmp dword ptr [0x11db3080], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db3080))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8bbdb je 0x11d8bcfc */
  if (C.zf) goto L_11d8bcfc;
  /* 11d8bbe1 mov eax, dword ptr [0x11db3078] */
  EAX = (r32((uint32_t)(0x11db3078)));
  /* 11d8bbe6 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 11d8bbe9 mov ecx, dword ptr [0x11db3080] */
  ECX = (r32((uint32_t)(0x11db3080)));
  /* 11d8bbef mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11d8bbf2 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8bbf4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d8bbf7 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11d8bbfc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11d8bc01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8bc04 push eax */
  push32((uint32_t)(EAX));
  /* 11d8bc05 call dword ptr [0x11db4350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4350))), 0x11d8bc0bu);
  /* 11d8bc0b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11d8bc10 mov ecx, dword ptr [0x11db3078] */
  ECX = (r32((uint32_t)(0x11db3078)));
  /* 11d8bc16 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d8bc18 mov eax, dword ptr [0x11db3080] */
  EAX = (r32((uint32_t)(0x11db3080)));
  /* 11d8bc1d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11d8bc20 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11d8bc22 mov edx, dword ptr [0x11db3080] */
  EDX = (r32((uint32_t)(0x11db3080)));
  /* 11d8bc28 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11d8bc2b mov eax, dword ptr [0x11db3080] */
  EAX = (r32((uint32_t)(0x11db3080)));
  /* 11d8bc30 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11d8bc33 mov edx, dword ptr [0x11db3078] */
  EDX = (r32((uint32_t)(0x11db3078)));
  /* 11d8bc39 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 11d8bc44 mov eax, dword ptr [0x11db3080] */
  EAX = (r32((uint32_t)(0x11db3080)));
  /* 11d8bc49 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11d8bc4c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 11d8bc4f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11d8bc52 mov eax, dword ptr [0x11db3080] */
  EAX = (r32((uint32_t)(0x11db3080)));
  /* 11d8bc57 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11d8bc5a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 11d8bc5d mov edx, dword ptr [0x11db3080] */
  EDX = (r32((uint32_t)(0x11db3080)));
  /* 11d8bc63 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11d8bc66 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 11d8bc6a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d8bc6c jne 0x11d8bc82 */
  if (!C.zf) goto L_11d8bc82;
  /* 11d8bc6e mov edx, dword ptr [0x11db3080] */
  EDX = (r32((uint32_t)(0x11db3080)));
  /* 11d8bc74 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11d8bc77 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 11d8bc79 mov ecx, dword ptr [0x11db3080] */
  ECX = (r32((uint32_t)(0x11db3080)));
  /* 11d8bc7f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11d8bc82:;
  /* 11d8bc82 mov edx, dword ptr [0x11db3080] */
  EDX = (r32((uint32_t)(0x11db3080)));
  /* 11d8bc88 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8bc8c jne 0x11d8bcf2 */
  if (!C.zf) goto L_11d8bcf2;
  /* 11d8bc8e cmp dword ptr [0x11db3084], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11db3084))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8bc95 jle 0x11d8bcf2 */
  if ((C.zf||C.sf!=C.of)) goto L_11d8bcf2;
  /* 11d8bc97 mov eax, dword ptr [0x11db3080] */
  EAX = (r32((uint32_t)(0x11db3080)));
  /* 11d8bc9c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11d8bc9f push ecx */
  push32((uint32_t)(ECX));
  /* 11d8bca0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8bca2 mov edx, dword ptr [0x11db308c] */
  EDX = (r32((uint32_t)(0x11db308c)));
  /* 11d8bca8 push edx */
  push32((uint32_t)(EDX));
  /* 11d8bca9 call dword ptr [0x11db4354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4354))), 0x11d8bcafu);
  /* 11d8bcaf mov eax, dword ptr [0x11db3084] */
  EAX = (r32((uint32_t)(0x11db3084)));
  /* 11d8bcb4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d8bcb7 mov ecx, dword ptr [0x11db3088] */
  ECX = (r32((uint32_t)(0x11db3088)));
  /* 11d8bcbd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8bcbf mov edx, dword ptr [0x11db3080] */
  EDX = (r32((uint32_t)(0x11db3080)));
  /* 11d8bcc5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8bcc8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8bcca push ecx */
  push32((uint32_t)(ECX));
  /* 11d8bccb mov eax, dword ptr [0x11db3080] */
  EAX = (r32((uint32_t)(0x11db3080)));
  /* 11d8bcd0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8bcd3 push eax */
  push32((uint32_t)(EAX));
  /* 11d8bcd4 mov ecx, dword ptr [0x11db3080] */
  ECX = (r32((uint32_t)(0x11db3080)));
  /* 11d8bcda push ecx */
  push32((uint32_t)(ECX));
  /* 11d8bcdb call 0x11d8e6e0 */
  push32(0x11d8bce0u); f_11d8e6e0();
  /* 11d8bce0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8bce3 mov edx, dword ptr [0x11db3084] */
  EDX = (r32((uint32_t)(0x11db3084)));
  /* 11d8bce9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8bcec mov dword ptr [0x11db3084], edx */
  w32((uint32_t)(0x11db3084), (EDX));
L_11d8bcf2:;
  /* 11d8bcf2 mov dword ptr [0x11db3080], 0 */
  w32((uint32_t)(0x11db3080), (0x0u));
L_11d8bcfc:;
  /* 11d8bcfc mov esp, ebp */
  ESP = (EBP);
  /* 11d8bcfe pop ebp */
  EBP = (pop32());
  /* 11d8bcff ret  */
  ESPCHK(0x11d8bbd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd00 @ 0x11d8bd00 (1565 bytes, 343 insns) */
void f_11d8bd00(void) {
  FTRACE(0x11d8bd00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8bd00 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8bd01 mov ebp, esp */
  EBP = (ESP);
  /* 11d8bd03 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8bd09 mov eax, dword ptr [0x11db3084] */
  EAX = (r32((uint32_t)(0x11db3084)));
  /* 11d8bd0e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d8bd11 push eax */
  push32((uint32_t)(EAX));
  /* 11d8bd12 mov ecx, dword ptr [0x11db3088] */
  ECX = (r32((uint32_t)(0x11db3088)));
  /* 11d8bd18 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8bd19 call dword ptr [0x11db43e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43e4))), 0x11d8bd1fu);
  /* 11d8bd1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8bd21 je 0x11d8bd2b */
  if (C.zf) goto L_11d8bd2b;
  /* 11d8bd23 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d8bd26 jmp 0x11d8c319 */
  goto L_11d8c319;
L_11d8bd2b:;
  /* 11d8bd2b mov edx, dword ptr [0x11db3088] */
  EDX = (r32((uint32_t)(0x11db3088)));
  /* 11d8bd31 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 11d8bd37 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 11d8bd41 jmp 0x11d8bd52 */
  goto L_11d8bd52;
L_11d8bd43:;
  /* 11d8bd43 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 11d8bd49 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8bd4c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_11d8bd52:;
  /* 11d8bd52 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 11d8bd58 cmp ecx, dword ptr [0x11db3084] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11db3084))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8bd5e jge 0x11d8c317 */
  if ((C.sf==C.of)) goto L_11d8c317;
  /* 11d8bd64 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11d8bd6a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11d8bd6d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 11d8bd73 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11d8bd78 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 11d8bd7e push ecx */
  push32((uint32_t)(ECX));
  /* 11d8bd7f call dword ptr [0x11db43e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43e4))), 0x11d8bd85u);
  /* 11d8bd85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8bd87 je 0x11d8bd93 */
  if (C.zf) goto L_11d8bd93;
  /* 11d8bd89 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 11d8bd8e jmp 0x11d8c319 */
  goto L_11d8c319;
L_11d8bd93:;
  /* 11d8bd93 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11d8bd99 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11d8bd9c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 11d8bda2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 11d8bda8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8bdae mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11d8bdb1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11d8bdb7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11d8bdba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d8bdbd mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 11d8bdc7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 11d8bdd1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11d8bdd8 jmp 0x11d8bde3 */
  goto L_11d8bde3;
L_11d8bdda:;
  /* 11d8bdda mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d8bddd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8bde0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11d8bde3:;
  /* 11d8bde3 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8bde7 jge 0x11d8c2db */
  if ((C.sf==C.of)) goto L_11d8c2db;
  /* 11d8bded mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 11d8bdf7 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 11d8be01 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 11d8be0b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 11d8be15 jmp 0x11d8be26 */
  goto L_11d8be26;
L_11d8be17:;
  /* 11d8be17 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11d8be1d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8be20 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_11d8be26:;
  /* 11d8be26 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8be2d jge 0x11d8be42 */
  if ((C.sf==C.of)) goto L_11d8be42;
  /* 11d8be2f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11d8be35 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 11d8be40 jmp 0x11d8be17 */
  goto L_11d8be17;
L_11d8be42:;
  /* 11d8be42 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8be46 jl 0x11d8c27d */
  if ((C.sf!=C.of)) goto L_11d8c27d;
  /* 11d8be4c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11d8be51 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 11d8be57 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8be58 call dword ptr [0x11db43e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43e4))), 0x11d8be5eu);
  /* 11d8be5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8be60 je 0x11d8be6c */
  if (C.zf) goto L_11d8be6c;
  /* 11d8be62 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 11d8be67 jmp 0x11d8c319 */
  goto L_11d8c319;
L_11d8be6c:;
  /* 11d8be6c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 11d8be72 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11d8be75 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 11d8be7f jmp 0x11d8be90 */
  goto L_11d8be90;
L_11d8be81:;
  /* 11d8be81 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 11d8be87 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8be8a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_11d8be90:;
  /* 11d8be90 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8be97 jge 0x11d8c014 */
  if ((C.sf==C.of)) goto L_11d8c014;
  /* 11d8be9d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8bea0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8bea3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 11d8bea9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 11d8beaf add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8beb5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 11d8bebb mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 11d8bec1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8bec5 jne 0x11d8bed2 */
  if (!C.zf) goto L_11d8bed2;
  /* 11d8bec7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 11d8becd cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8bed0 je 0x11d8bedc */
  if (C.zf) goto L_11d8bedc;
L_11d8bed2:;
  /* 11d8bed2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 11d8bed7 jmp 0x11d8c319 */
  goto L_11d8c319;
L_11d8bedc:;
  /* 11d8bedc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 11d8bee2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d8bee4 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 11d8beea mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 11d8bef0 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 11d8bef6 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 11d8befc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11d8beff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d8bf01 je 0x11d8bf39 */
  if (C.zf) goto L_11d8bf39;
  /* 11d8bf03 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 11d8bf09 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8bf0c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 11d8bf12 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8bf1c jle 0x11d8bf28 */
  if ((C.zf||C.sf!=C.of)) goto L_11d8bf28;
  /* 11d8bf1e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 11d8bf23 jmp 0x11d8c319 */
  goto L_11d8c319;
L_11d8bf28:;
  /* 11d8bf28 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 11d8bf2e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8bf31 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 11d8bf37 jmp 0x11d8bf7b */
  goto L_11d8bf7b;
L_11d8bf39:;
  /* 11d8bf39 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 11d8bf3f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11d8bf42 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8bf45 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 11d8bf4b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8bf52 jle 0x11d8bf5e */
  if ((C.zf||C.sf!=C.of)) goto L_11d8bf5e;
  /* 11d8bf54 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_11d8bf5e:;
  /* 11d8bf5e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11d8bf64 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 11d8bf6b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8bf6e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11d8bf74 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_11d8bf7b:;
  /* 11d8bf7b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8bf82 jl 0x11d8bf9d */
  if ((C.sf!=C.of)) goto L_11d8bf9d;
  /* 11d8bf84 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 11d8bf8a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 11d8bf8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8bf8f jne 0x11d8bf9d */
  if (!C.zf) goto L_11d8bf9d;
  /* 11d8bf91 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8bf9b jle 0x11d8bfa7 */
  if ((C.zf||C.sf!=C.of)) goto L_11d8bfa7;
L_11d8bf9d:;
  /* 11d8bf9d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 11d8bfa2 jmp 0x11d8c319 */
  goto L_11d8c319;
L_11d8bfa7:;
  /* 11d8bfa7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 11d8bfad add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8bfb3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11d8bfb6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8bfbc je 0x11d8bfc8 */
  if (C.zf) goto L_11d8bfc8;
  /* 11d8bfbe mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 11d8bfc3 jmp 0x11d8c319 */
  goto L_11d8c319;
L_11d8bfc8:;
  /* 11d8bfc8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 11d8bfce add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8bfd4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 11d8bfda mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 11d8bfe0 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8bfe6 jb 0x11d8bedc */
  if (C.cf) goto L_11d8bedc;
  /* 11d8bfec mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 11d8bff2 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8bff8 je 0x11d8c004 */
  if (C.zf) goto L_11d8c004;
  /* 11d8bffa mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 11d8bfff jmp 0x11d8c319 */
  goto L_11d8c319;
L_11d8c004:;
  /* 11d8c004 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8c007 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8c00c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d8c00f jmp 0x11d8be81 */
  goto L_11d8be81;
L_11d8c014:;
  /* 11d8c014 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8c017 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d8c019 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8c01f je 0x11d8c02b */
  if (C.zf) goto L_11d8c02b;
  /* 11d8c021 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 11d8c026 jmp 0x11d8c319 */
  goto L_11d8c319;
L_11d8c02b:;
  /* 11d8c02b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8c02e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 11d8c034 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11d8c03b jmp 0x11d8c046 */
  goto L_11d8c046;
L_11d8c03d:;
  /* 11d8c03d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d8c040 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8c043 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11d8c046:;
  /* 11d8c046 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8c04a jge 0x11d8c27d */
  if ((C.sf==C.of)) goto L_11d8c27d;
  /* 11d8c050 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 11d8c05a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 11d8c060 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_11d8c066:;
  /* 11d8c066 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 11d8c06c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d8c06f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 11d8c075 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11d8c07b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8c081 je 0x11d8c1aa */
  if (C.zf) goto L_11d8c1aa;
  /* 11d8c087 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d8c08a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 11d8c090 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8c097 je 0x11d8c1aa */
  if (C.zf) goto L_11d8c1aa;
  /* 11d8c09d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11d8c0a3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8c0a9 jb 0x11d8c0be */
  if (C.cf) goto L_11d8c0be;
  /* 11d8c0ab mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 11d8c0b1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8c0b6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8c0bc jb 0x11d8c0c8 */
  if (C.cf) goto L_11d8c0c8;
L_11d8c0be:;
  /* 11d8c0be mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 11d8c0c3 jmp 0x11d8c319 */
  goto L_11d8c319;
L_11d8c0c8:;
  /* 11d8c0c8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11d8c0ce and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 11d8c0d4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 11d8c0da mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 11d8c0e0 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8c0e3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11d8c0e6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8c0e9 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8c0ee mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_11d8c0f4:;
  /* 11d8c0f4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8c0f7 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8c0fd je 0x11d8c11e */
  if (C.zf) goto L_11d8c11e;
  /* 11d8c0ff mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8c102 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8c108 jne 0x11d8c10c */
  if (!C.zf) goto L_11d8c10c;
  /* 11d8c10a jmp 0x11d8c11e */
  goto L_11d8c11e;
L_11d8c10c:;
  /* 11d8c10c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8c10f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d8c111 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 11d8c114 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8c117 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8c119 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11d8c11c jmp 0x11d8c0f4 */
  goto L_11d8c0f4;
L_11d8c11e:;
  /* 11d8c11e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8c121 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8c127 jne 0x11d8c133 */
  if (!C.zf) goto L_11d8c133;
  /* 11d8c129 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 11d8c12e jmp 0x11d8c319 */
  goto L_11d8c319;
L_11d8c133:;
  /* 11d8c133 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11d8c139 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d8c13b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11d8c13e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8c141 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 11d8c147 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8c14e jle 0x11d8c15a */
  if ((C.zf||C.sf!=C.of)) goto L_11d8c15a;
  /* 11d8c150 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_11d8c15a:;
  /* 11d8c15a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11d8c160 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8c163 je 0x11d8c16f */
  if (C.zf) goto L_11d8c16f;
  /* 11d8c165 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 11d8c16a jmp 0x11d8c319 */
  goto L_11d8c319;
L_11d8c16f:;
  /* 11d8c16f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11d8c175 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11d8c178 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8c17e je 0x11d8c18a */
  if (C.zf) goto L_11d8c18a;
  /* 11d8c180 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 11d8c185 jmp 0x11d8c319 */
  goto L_11d8c319;
L_11d8c18a:;
  /* 11d8c18a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11d8c190 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 11d8c196 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 11d8c19c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8c19f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 11d8c1a5 jmp 0x11d8c066 */
  goto L_11d8c066;
L_11d8c1aa:;
  /* 11d8c1aa cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8c1b1 je 0x11d8c221 */
  if (C.zf) goto L_11d8c221;
  /* 11d8c1b3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8c1b7 jge 0x11d8c1eb */
  if ((C.sf==C.of)) goto L_11d8c1eb;
  /* 11d8c1b9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11d8c1be mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d8c1c1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d8c1c3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 11d8c1c9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8c1cb mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 11d8c1d1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11d8c1d6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d8c1d9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d8c1db mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 11d8c1e1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8c1e3 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 11d8c1e9 jmp 0x11d8c221 */
  goto L_11d8c221;
L_11d8c1eb:;
  /* 11d8c1eb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d8c1ee sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8c1f1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11d8c1f6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d8c1f8 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 11d8c1fe or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8c200 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 11d8c206 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d8c209 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8c20c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11d8c211 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d8c213 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 11d8c219 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8c21b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_11d8c221:;
  /* 11d8c221 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 11d8c227 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d8c22a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8c230 jne 0x11d8c244 */
  if (!C.zf) goto L_11d8c244;
  /* 11d8c232 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d8c235 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 11d8c23b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8c242 je 0x11d8c24e */
  if (C.zf) goto L_11d8c24e;
L_11d8c244:;
  /* 11d8c244 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 11d8c249 jmp 0x11d8c319 */
  goto L_11d8c319;
L_11d8c24e:;
  /* 11d8c24e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 11d8c254 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11d8c257 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8c25d je 0x11d8c269 */
  if (C.zf) goto L_11d8c269;
  /* 11d8c25f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 11d8c264 jmp 0x11d8c319 */
  goto L_11d8c319;
L_11d8c269:;
  /* 11d8c269 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 11d8c26f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8c272 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 11d8c278 jmp 0x11d8c03d */
  goto L_11d8c03d;
L_11d8c27d:;
  /* 11d8c27d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d8c280 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 11d8c286 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 11d8c28c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8c290 jne 0x11d8c2aa */
  if (!C.zf) goto L_11d8c2aa;
  /* 11d8c292 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d8c295 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 11d8c29b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 11d8c2a1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8c2a8 je 0x11d8c2b1 */
  if (C.zf) goto L_11d8c2b1;
L_11d8c2aa:;
  /* 11d8c2aa mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 11d8c2af jmp 0x11d8c319 */
  goto L_11d8c319;
L_11d8c2b1:;
  /* 11d8c2b1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 11d8c2b7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8c2bd mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 11d8c2c3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8c2c6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8c2cb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11d8c2ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8c2d1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11d8c2d3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d8c2d6 jmp 0x11d8bdda */
  goto L_11d8bdda;
L_11d8c2db:;
  /* 11d8c2db mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11d8c2e1 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 11d8c2e7 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8c2e9 jne 0x11d8c2fc */
  if (!C.zf) goto L_11d8c2fc;
  /* 11d8c2eb mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11d8c2f1 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 11d8c2f7 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8c2fa je 0x11d8c303 */
  if (C.zf) goto L_11d8c303;
L_11d8c2fc:;
  /* 11d8c2fc mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 11d8c301 jmp 0x11d8c319 */
  goto L_11d8c319;
L_11d8c303:;
  /* 11d8c303 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11d8c309 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8c30c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 11d8c312 jmp 0x11d8bd43 */
  goto L_11d8bd43;
L_11d8c317:;
  /* 11d8c317 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d8c319:;
  /* 11d8c319 mov esp, ebp */
  ESP = (EBP);
  /* 11d8c31b pop ebp */
  EBP = (pop32());
  /* 11d8c31c ret  */
  ESPCHK(0x11d8bd00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c320 @ 0x11d8c320 (250 bytes, 92 insns) */
void f_11d8c320(void) {
  FTRACE(0x11d8c320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8c320 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8c321 mov ebp, esp */
  EBP = (ESP);
  /* 11d8c323 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8c326 push ebx */
  push32((uint32_t)(EBX));
  /* 11d8c327 push esi */
  push32((uint32_t)(ESI));
  /* 11d8c328 push edi */
  push32((uint32_t)(EDI));
  /* 11d8c329 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11d8c32c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11d8c32f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11d8c332 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_11d8c335:;
  /* 11d8c335 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8c339 jne 0x11d8c359 */
  if (!C.zf) goto L_11d8c359;
  /* 11d8c33b push 0x11dad254 */
  push32((uint32_t)(0x11dad254u));
  /* 11d8c340 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8c342 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11d8c344 push 0x11dad248 */
  push32((uint32_t)(0x11dad248u));
  /* 11d8c349 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d8c34b call 0x11d84e40 */
  push32(0x11d8c350u); f_11d84e40();
  /* 11d8c350 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8c353 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8c356 jne 0x11d8c359 */
  if (!C.zf) goto L_11d8c359;
  /* 11d8c358 int3  */
  x86_unimpl("int3 @ 0x11d8c358");
L_11d8c359:;
  /* 11d8c359 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d8c35b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d8c35d jne 0x11d8c335 */
  if (!C.zf) goto L_11d8c335;
L_11d8c35f:;
  /* 11d8c35f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8c363 jne 0x11d8c383 */
  if (!C.zf) goto L_11d8c383;
  /* 11d8c365 push 0x11dad238 */
  push32((uint32_t)(0x11dad238u));
  /* 11d8c36a push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8c36c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11d8c36e push 0x11dad248 */
  push32((uint32_t)(0x11dad248u));
  /* 11d8c373 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d8c375 call 0x11d84e40 */
  push32(0x11d8c37au); f_11d84e40();
  /* 11d8c37a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8c37d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8c380 jne 0x11d8c383 */
  if (!C.zf) goto L_11d8c383;
  /* 11d8c382 int3  */
  x86_unimpl("int3 @ 0x11d8c382");
L_11d8c383:;
  /* 11d8c383 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8c385 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8c387 jne 0x11d8c35f */
  if (!C.zf) goto L_11d8c35f;
  /* 11d8c389 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8c38c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 11d8c393 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8c396 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8c399 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11d8c39c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8c39f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8c3a2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11d8c3a4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8c3a7 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 11d8c3ae mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d8c3b1 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8c3b2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8c3b5 push edx */
  push32((uint32_t)(EDX));
  /* 11d8c3b6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8c3b9 push eax */
  push32((uint32_t)(EAX));
  /* 11d8c3ba call 0x11d8d780 */
  push32(0x11d8c3bfu); f_11d8d780();
  /* 11d8c3bf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8c3c2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11d8c3c5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8c3c8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d8c3cb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8c3ce mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8c3d1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11d8c3d4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8c3d7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8c3db jl 0x11d8c3ff */
  if ((C.sf!=C.of)) goto L_11d8c3ff;
  /* 11d8c3dd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8c3e0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d8c3e2 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11d8c3e5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d8c3e7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d8c3ed mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11d8c3f0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8c3f3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d8c3f5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8c3f8 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8c3fb mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11d8c3fd jmp 0x11d8c410 */
  goto L_11d8c410;
L_11d8c3ff:;
  /* 11d8c3ff mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8c402 push edx */
  push32((uint32_t)(EDX));
  /* 11d8c403 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8c405 call 0x11d8d500 */
  push32(0x11d8c40au); f_11d8d500();
  /* 11d8c40a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8c40d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_11d8c410:;
  /* 11d8c410 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d8c413 pop edi */
  EDI = (pop32());
  /* 11d8c414 pop esi */
  ESI = (pop32());
  /* 11d8c415 pop ebx */
  EBX = (pop32());
  /* 11d8c416 mov esp, ebp */
  ESP = (EBP);
  /* 11d8c418 pop ebp */
  EBP = (pop32());
  /* 11d8c419 ret  */
  ESPCHK(0x11d8c320u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c420 @ 0x11d8c420 (183 bytes, 58 insns) */
void f_11d8c420(void) {
  FTRACE(0x11d8c420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8c420 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8c421 mov ebp, esp */
  EBP = (ESP);
  /* 11d8c423 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8c426 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8c429 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8c42c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8c431 ja 0x11d8c44a */
  if ((!C.cf&&!C.zf)) goto L_11d8c44a;
  /* 11d8c433 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8c436 mov edx, dword ptr [0x11dafdb8] */
  EDX = (r32((uint32_t)(0x11dafdb8)));
  /* 11d8c43c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8c43e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11d8c442 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 11d8c445 jmp 0x11d8c4d3 */
  goto L_11d8c4d3;
L_11d8c44a:;
  /* 11d8c44a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8c44d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11d8c450 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d8c456 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d8c45c mov edx, dword ptr [0x11dafdb8] */
  EDX = (r32((uint32_t)(0x11dafdb8)));
  /* 11d8c462 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8c464 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11d8c468 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11d8c46d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8c46f je 0x11d8c493 */
  if (C.zf) goto L_11d8c493;
  /* 11d8c471 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8c474 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11d8c477 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d8c47d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 11d8c480 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 11d8c483 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 11d8c486 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 11d8c48a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 11d8c491 jmp 0x11d8c4a4 */
  goto L_11d8c4a4;
L_11d8c493:;
  /* 11d8c493 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11d8c496 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 11d8c499 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 11d8c49d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11d8c4a4:;
  /* 11d8c4a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d8c4a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8c4a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8c4aa lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11d8c4ad push ecx */
  push32((uint32_t)(ECX));
  /* 11d8c4ae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8c4b1 push edx */
  push32((uint32_t)(EDX));
  /* 11d8c4b2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11d8c4b5 push eax */
  push32((uint32_t)(EAX));
  /* 11d8c4b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d8c4b8 call 0x11d8ea20 */
  push32(0x11d8c4bdu); f_11d8ea20();
  /* 11d8c4bd add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8c4c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8c4c2 jne 0x11d8c4c8 */
  if (!C.zf) goto L_11d8c4c8;
  /* 11d8c4c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8c4c6 jmp 0x11d8c4d3 */
  goto L_11d8c4d3;
L_11d8c4c8:;
  /* 11d8c4c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8c4cb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d8c4d0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_11d8c4d3:;
  /* 11d8c4d3 mov esp, ebp */
  ESP = (EBP);
  /* 11d8c4d5 pop ebp */
  EBP = (pop32());
  /* 11d8c4d6 ret  */
  ESPCHK(0x11d8c420u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c4e0 @ 0x11d8c4e0 (836 bytes, 238 insns) */
void f_11d8c4e0(void) {
  FTRACE(0x11d8c4e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8c4e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8c4e1 mov ebp, esp */
  EBP = (ESP);
  /* 11d8c4e3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8c4e6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11d8c4e8 call 0x11d886f0 */
  push32(0x11d8c4edu); f_11d886f0();
  /* 11d8c4ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8c4f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8c4f3 push eax */
  push32((uint32_t)(EAX));
  /* 11d8c4f4 call 0x11d8c830 */
  push32(0x11d8c4f9u); f_11d8c830();
  /* 11d8c4f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8c4fc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11d8c4ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8c502 cmp ecx, dword ptr [0x11db2dc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11db2dc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8c508 jne 0x11d8c51b */
  if (!C.zf) goto L_11d8c51b;
  /* 11d8c50a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11d8c50c call 0x11d88790 */
  push32(0x11d8c511u); f_11d88790();
  /* 11d8c511 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8c514 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8c516 jmp 0x11d8c820 */
  goto L_11d8c820;
L_11d8c51b:;
  /* 11d8c51b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8c51f jne 0x11d8c53c */
  if (!C.zf) goto L_11d8c53c;
  /* 11d8c521 call 0x11d8c910 */
  push32(0x11d8c526u); f_11d8c910();
  /* 11d8c526 call 0x11d8c990 */
  push32(0x11d8c52bu); f_11d8c990();
  /* 11d8c52b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11d8c52d call 0x11d88790 */
  push32(0x11d8c532u); f_11d88790();
  /* 11d8c532 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8c535 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8c537 jmp 0x11d8c820 */
  goto L_11d8c820;
L_11d8c53c:;
  /* 11d8c53c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d8c543 jmp 0x11d8c54e */
  goto L_11d8c54e;
L_11d8c545:;
  /* 11d8c545 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8c548 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8c54b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11d8c54e:;
  /* 11d8c54e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8c552 jae 0x11d8c69f */
  if (!C.cf) goto L_11d8c69f;
  /* 11d8c558 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8c55b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d8c55e mov ecx, dword ptr [eax + 0x11daffd8] */
  ECX = (r32((uint32_t)(EAX + 0x11daffd8)));
  /* 11d8c564 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8c567 jne 0x11d8c69a */
  if (!C.zf) goto L_11d8c69a;
  /* 11d8c56d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11d8c574 jmp 0x11d8c57f */
  goto L_11d8c57f;
L_11d8c576:;
  /* 11d8c576 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8c579 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8c57c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_11d8c57f:;
  /* 11d8c57f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8c586 jae 0x11d8c594 */
  if (!C.cf) goto L_11d8c594;
  /* 11d8c588 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8c58b mov byte ptr [eax + 0x11db2f60], 0 */
  w8((uint32_t)(EAX + 0x11db2f60), (0x0u));
  /* 11d8c592 jmp 0x11d8c576 */
  goto L_11d8c576;
L_11d8c594:;
  /* 11d8c594 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11d8c59b jmp 0x11d8c5a6 */
  goto L_11d8c5a6;
L_11d8c59d:;
  /* 11d8c59d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d8c5a0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8c5a3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11d8c5a6:;
  /* 11d8c5a6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8c5aa jae 0x11d8c627 */
  if (!C.cf) goto L_11d8c627;
  /* 11d8c5ac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8c5af imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d8c5b2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d8c5b5 lea ecx, [edx + eax*8 + 0x11daffe8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x11daffe8));
  /* 11d8c5bc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d8c5bf jmp 0x11d8c5ca */
  goto L_11d8c5ca;
L_11d8c5c1:;
  /* 11d8c5c1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8c5c4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8c5c7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11d8c5ca:;
  /* 11d8c5ca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8c5cd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d8c5cf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11d8c5d1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d8c5d3 je 0x11d8c622 */
  if (C.zf) goto L_11d8c622;
  /* 11d8c5d5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8c5d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8c5da mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11d8c5dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8c5df je 0x11d8c622 */
  if (C.zf) goto L_11d8c622;
  /* 11d8c5e1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8c5e4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d8c5e6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11d8c5e8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11d8c5eb jmp 0x11d8c5f6 */
  goto L_11d8c5f6;
L_11d8c5ed:;
  /* 11d8c5ed mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8c5f0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8c5f3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11d8c5f6:;
  /* 11d8c5f6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8c5f9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d8c5fb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11d8c5fe cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8c601 ja 0x11d8c620 */
  if ((!C.cf&&!C.zf)) goto L_11d8c620;
  /* 11d8c603 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8c606 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d8c609 mov dl, byte ptr [eax + 0x11db2f61] */
  DL = (r8((uint32_t)(EAX + 0x11db2f61)));
  /* 11d8c60f or dl, byte ptr [ecx + 0x11daffd0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x11daffd0))); DL = (_r); fl_logic(_r,8); }
  /* 11d8c615 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8c618 mov byte ptr [eax + 0x11db2f61], dl */
  w8((uint32_t)(EAX + 0x11db2f61), (DL));
  /* 11d8c61e jmp 0x11d8c5ed */
  goto L_11d8c5ed;
L_11d8c620:;
  /* 11d8c620 jmp 0x11d8c5c1 */
  goto L_11d8c5c1;
L_11d8c622:;
  /* 11d8c622 jmp 0x11d8c59d */
  goto L_11d8c59d;
L_11d8c627:;
  /* 11d8c627 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8c62a mov dword ptr [0x11db2dc4], ecx */
  w32((uint32_t)(0x11db2dc4), (ECX));
  /* 11d8c630 mov dword ptr [0x11db2e4c], 1 */
  w32((uint32_t)(0x11db2e4c), (0x1u));
  /* 11d8c63a mov edx, dword ptr [0x11db2dc4] */
  EDX = (r32((uint32_t)(0x11db2dc4)));
  /* 11d8c640 push edx */
  push32((uint32_t)(EDX));
  /* 11d8c641 call 0x11d8c890 */
  push32(0x11d8c646u); f_11d8c890();
  /* 11d8c646 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8c649 mov dword ptr [0x11db3064], eax */
  w32((uint32_t)(0x11db3064), (EAX));
  /* 11d8c64e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11d8c655 jmp 0x11d8c660 */
  goto L_11d8c660;
L_11d8c657:;
  /* 11d8c657 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d8c65a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8c65d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11d8c660:;
  /* 11d8c660 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8c664 jae 0x11d8c684 */
  if (!C.cf) goto L_11d8c684;
  /* 11d8c666 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8c669 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d8c66c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d8c66f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d8c672 mov cx, word ptr [ecx + eax*2 + 0x11daffdc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x11daffdc)));
  /* 11d8c67a mov word ptr [edx*2 + 0x11db2e40], cx */
  w16((uint32_t)(EDX*2 + 0x11db2e40), (CX));
  /* 11d8c682 jmp 0x11d8c657 */
  goto L_11d8c657;
L_11d8c684:;
  /* 11d8c684 call 0x11d8c990 */
  push32(0x11d8c689u); f_11d8c990();
  /* 11d8c689 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11d8c68b call 0x11d88790 */
  push32(0x11d8c690u); f_11d88790();
  /* 11d8c690 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8c693 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8c695 jmp 0x11d8c820 */
  goto L_11d8c820;
L_11d8c69a:;
  /* 11d8c69a jmp 0x11d8c545 */
  goto L_11d8c545;
L_11d8c69f:;
  /* 11d8c69f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 11d8c6a2 push edx */
  push32((uint32_t)(EDX));
  /* 11d8c6a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8c6a6 push eax */
  push32((uint32_t)(EAX));
  /* 11d8c6a7 call dword ptr [0x11db4328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4328))), 0x11d8c6adu);
  /* 11d8c6ad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8c6b0 jne 0x11d8c7f2 */
  if (!C.zf) goto L_11d8c7f2;
  /* 11d8c6b6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11d8c6bd jmp 0x11d8c6c8 */
  goto L_11d8c6c8;
L_11d8c6bf:;
  /* 11d8c6bf mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8c6c2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8c6c5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_11d8c6c8:;
  /* 11d8c6c8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8c6cf jae 0x11d8c6dd */
  if (!C.cf) goto L_11d8c6dd;
  /* 11d8c6d1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8c6d4 mov byte ptr [edx + 0x11db2f60], 0 */
  w8((uint32_t)(EDX + 0x11db2f60), (0x0u));
  /* 11d8c6db jmp 0x11d8c6bf */
  goto L_11d8c6bf;
L_11d8c6dd:;
  /* 11d8c6dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8c6e0 mov dword ptr [0x11db2dc4], eax */
  w32((uint32_t)(0x11db2dc4), (EAX));
  /* 11d8c6e5 mov dword ptr [0x11db3064], 0 */
  w32((uint32_t)(0x11db3064), (0x0u));
  /* 11d8c6ef cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8c6f3 jbe 0x11d8c7ae */
  if ((C.cf||C.zf)) goto L_11d8c7ae;
  /* 11d8c6f9 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 11d8c6fc mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11d8c6ff jmp 0x11d8c70a */
  goto L_11d8c70a;
L_11d8c701:;
  /* 11d8c701 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d8c704 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8c707 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_11d8c70a:;
  /* 11d8c70a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d8c70d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d8c70f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11d8c711 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d8c713 je 0x11d8c75c */
  if (C.zf) goto L_11d8c75c;
  /* 11d8c715 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d8c718 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8c71a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11d8c71d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8c71f je 0x11d8c75c */
  if (C.zf) goto L_11d8c75c;
  /* 11d8c721 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d8c724 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d8c726 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11d8c728 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11d8c72b jmp 0x11d8c736 */
  goto L_11d8c736;
L_11d8c72d:;
  /* 11d8c72d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8c730 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8c733 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11d8c736:;
  /* 11d8c736 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d8c739 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d8c73b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11d8c73e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8c741 ja 0x11d8c75a */
  if ((!C.cf&&!C.zf)) goto L_11d8c75a;
  /* 11d8c743 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8c746 mov cl, byte ptr [eax + 0x11db2f61] */
  CL = (r8((uint32_t)(EAX + 0x11db2f61)));
  /* 11d8c74c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 11d8c74f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8c752 mov byte ptr [edx + 0x11db2f61], cl */
  w8((uint32_t)(EDX + 0x11db2f61), (CL));
  /* 11d8c758 jmp 0x11d8c72d */
  goto L_11d8c72d;
L_11d8c75a:;
  /* 11d8c75a jmp 0x11d8c701 */
  goto L_11d8c701;
L_11d8c75c:;
  /* 11d8c75c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 11d8c763 jmp 0x11d8c76e */
  goto L_11d8c76e;
L_11d8c765:;
  /* 11d8c765 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8c768 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8c76b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11d8c76e:;
  /* 11d8c76e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8c775 jae 0x11d8c78e */
  if (!C.cf) goto L_11d8c78e;
  /* 11d8c777 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8c77a mov dl, byte ptr [ecx + 0x11db2f61] */
  DL = (r8((uint32_t)(ECX + 0x11db2f61)));
  /* 11d8c780 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 11d8c783 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8c786 mov byte ptr [eax + 0x11db2f61], dl */
  w8((uint32_t)(EAX + 0x11db2f61), (DL));
  /* 11d8c78c jmp 0x11d8c765 */
  goto L_11d8c765;
L_11d8c78e:;
  /* 11d8c78e mov ecx, dword ptr [0x11db2dc4] */
  ECX = (r32((uint32_t)(0x11db2dc4)));
  /* 11d8c794 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8c795 call 0x11d8c890 */
  push32(0x11d8c79au); f_11d8c890();
  /* 11d8c79a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8c79d mov dword ptr [0x11db3064], eax */
  w32((uint32_t)(0x11db3064), (EAX));
  /* 11d8c7a2 mov dword ptr [0x11db2e4c], 1 */
  w32((uint32_t)(0x11db2e4c), (0x1u));
  /* 11d8c7ac jmp 0x11d8c7b8 */
  goto L_11d8c7b8;
L_11d8c7ae:;
  /* 11d8c7ae mov dword ptr [0x11db2e4c], 0 */
  w32((uint32_t)(0x11db2e4c), (0x0u));
L_11d8c7b8:;
  /* 11d8c7b8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11d8c7bf jmp 0x11d8c7ca */
  goto L_11d8c7ca;
L_11d8c7c1:;
  /* 11d8c7c1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d8c7c4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8c7c7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11d8c7ca:;
  /* 11d8c7ca cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8c7ce jae 0x11d8c7df */
  if (!C.cf) goto L_11d8c7df;
  /* 11d8c7d0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d8c7d3 mov word ptr [eax*2 + 0x11db2e40], 0 */
  w16((uint32_t)(EAX*2 + 0x11db2e40), (0x0u));
  /* 11d8c7dd jmp 0x11d8c7c1 */
  goto L_11d8c7c1;
L_11d8c7df:;
  /* 11d8c7df call 0x11d8c990 */
  push32(0x11d8c7e4u); f_11d8c990();
  /* 11d8c7e4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11d8c7e6 call 0x11d88790 */
  push32(0x11d8c7ebu); f_11d88790();
  /* 11d8c7eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8c7ee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8c7f0 jmp 0x11d8c820 */
  goto L_11d8c820;
L_11d8c7f2:;
  /* 11d8c7f2 cmp dword ptr [0x11db1984], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1984))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8c7f9 je 0x11d8c813 */
  if (C.zf) goto L_11d8c813;
  /* 11d8c7fb call 0x11d8c910 */
  push32(0x11d8c800u); f_11d8c910();
  /* 11d8c800 call 0x11d8c990 */
  push32(0x11d8c805u); f_11d8c990();
  /* 11d8c805 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11d8c807 call 0x11d88790 */
  push32(0x11d8c80cu); f_11d88790();
  /* 11d8c80c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8c80f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8c811 jmp 0x11d8c820 */
  goto L_11d8c820;
L_11d8c813:;
  /* 11d8c813 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11d8c815 call 0x11d88790 */
  push32(0x11d8c81au); f_11d88790();
  /* 11d8c81a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8c81d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11d8c820:;
  /* 11d8c820 mov esp, ebp */
  ESP = (EBP);
  /* 11d8c822 pop ebp */
  EBP = (pop32());
  /* 11d8c823 ret  */
  ESPCHK(0x11d8c4e0u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x11d8c830 (89 bytes, 21 insns) */
void f_11d8c830(void) {
  FTRACE(0x11d8c830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8c830 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8c831 mov ebp, esp */
  EBP = (ESP);
  /* 11d8c833 mov dword ptr [0x11db1984], 0 */
  w32((uint32_t)(0x11db1984), (0x0u));
  /* 11d8c83d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8c841 jne 0x11d8c855 */
  if (!C.zf) goto L_11d8c855;
  /* 11d8c843 mov dword ptr [0x11db1984], 1 */
  w32((uint32_t)(0x11db1984), (0x1u));
  /* 11d8c84d call dword ptr [0x11db4320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4320))), 0x11d8c853u);
  /* 11d8c853 jmp 0x11d8c887 */
  goto L_11d8c887;
L_11d8c855:;
  /* 11d8c855 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8c859 jne 0x11d8c86d */
  if (!C.zf) goto L_11d8c86d;
  /* 11d8c85b mov dword ptr [0x11db1984], 1 */
  w32((uint32_t)(0x11db1984), (0x1u));
  /* 11d8c865 call dword ptr [0x11db4324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4324))), 0x11d8c86bu);
  /* 11d8c86b jmp 0x11d8c887 */
  goto L_11d8c887;
L_11d8c86d:;
  /* 11d8c86d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8c871 jne 0x11d8c884 */
  if (!C.zf) goto L_11d8c884;
  /* 11d8c873 mov dword ptr [0x11db1984], 1 */
  w32((uint32_t)(0x11db1984), (0x1u));
  /* 11d8c87d mov eax, dword ptr [0x11db19a0] */
  EAX = (r32((uint32_t)(0x11db19a0)));
  /* 11d8c882 jmp 0x11d8c887 */
  goto L_11d8c887;
L_11d8c884:;
  /* 11d8c884 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11d8c887:;
  /* 11d8c887 pop ebp */
  EBP = (pop32());
  /* 11d8c888 ret  */
  ESPCHK(0x11d8c830u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c890 @ 0x11d8c890 (80 bytes, 26 insns) [1 switch table(s)] */
void f_11d8c890(void) {
  FTRACE(0x11d8c890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8c890 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8c891 mov ebp, esp */
  EBP = (ESP);
  /* 11d8c893 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8c894 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8c897 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d8c89a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8c89d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8c8a3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d8c8a6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8c8aa ja 0x11d8c8da */
  if ((!C.cf&&!C.zf)) goto L_11d8c8da;
  /* 11d8c8ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8c8af xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d8c8b1 mov dl, byte ptr [eax + 0x11d8c8f4] */
  DL = (r8((uint32_t)(EAX + 0x11d8c8f4)));
  /* 11d8c8b7 jmp dword ptr [edx*4 + 0x11d8c8e0] */
  switch (EDX) {
    case 0: goto L_11d8c8be;
    case 1: goto L_11d8c8c5;
    case 2: goto L_11d8c8cc;
    case 3: goto L_11d8c8d3;
    case 4: goto L_11d8c8da;
    default: x86_unimpl("switch@0x11d8c8b7 out of table"); return;
  }
L_11d8c8be:;
  /* 11d8c8be mov eax, 0x411 */
  EAX = (0x411u);
  /* 11d8c8c3 jmp 0x11d8c8dc */
  goto L_11d8c8dc;
L_11d8c8c5:;
  /* 11d8c8c5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 11d8c8ca jmp 0x11d8c8dc */
  goto L_11d8c8dc;
L_11d8c8cc:;
  /* 11d8c8cc mov eax, 0x412 */
  EAX = (0x412u);
  /* 11d8c8d1 jmp 0x11d8c8dc */
  goto L_11d8c8dc;
L_11d8c8d3:;
  /* 11d8c8d3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 11d8c8d8 jmp 0x11d8c8dc */
  goto L_11d8c8dc;
L_11d8c8da:;
  /* 11d8c8da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d8c8dc:;
  /* 11d8c8dc mov esp, ebp */
  ESP = (EBP);
  /* 11d8c8de pop ebp */
  EBP = (pop32());
  /* 11d8c8df ret  */
  ESPCHK(0x11d8c890u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x11d8c910 (116 bytes, 29 insns) */
void f_11d8c910(void) {
  FTRACE(0x11d8c910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8c910 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8c911 mov ebp, esp */
  EBP = (ESP);
  /* 11d8c913 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8c914 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d8c91b jmp 0x11d8c926 */
  goto L_11d8c926;
L_11d8c91d:;
  /* 11d8c91d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8c920 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8c923 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d8c926:;
  /* 11d8c926 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8c92d jge 0x11d8c93b */
  if ((C.sf==C.of)) goto L_11d8c93b;
  /* 11d8c92f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8c932 mov byte ptr [ecx + 0x11db2f60], 0 */
  w8((uint32_t)(ECX + 0x11db2f60), (0x0u));
  /* 11d8c939 jmp 0x11d8c91d */
  goto L_11d8c91d;
L_11d8c93b:;
  /* 11d8c93b mov dword ptr [0x11db2dc4], 0 */
  w32((uint32_t)(0x11db2dc4), (0x0u));
  /* 11d8c945 mov dword ptr [0x11db2e4c], 0 */
  w32((uint32_t)(0x11db2e4c), (0x0u));
  /* 11d8c94f mov dword ptr [0x11db3064], 0 */
  w32((uint32_t)(0x11db3064), (0x0u));
  /* 11d8c959 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d8c960 jmp 0x11d8c96b */
  goto L_11d8c96b;
L_11d8c962:;
  /* 11d8c962 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8c965 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8c968 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11d8c96b:;
  /* 11d8c96b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8c96f jge 0x11d8c980 */
  if ((C.sf==C.of)) goto L_11d8c980;
  /* 11d8c971 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8c974 mov word ptr [eax*2 + 0x11db2e40], 0 */
  w16((uint32_t)(EAX*2 + 0x11db2e40), (0x0u));
  /* 11d8c97e jmp 0x11d8c962 */
  goto L_11d8c962;
L_11d8c980:;
  /* 11d8c980 mov esp, ebp */
  ESP = (EBP);
  /* 11d8c982 pop ebp */
  EBP = (pop32());
  /* 11d8c983 ret  */
  ESPCHK(0x11d8c910u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c990 @ 0x11d8c990 (770 bytes, 175 insns) */
void f_11d8c990(void) {
  FTRACE(0x11d8c990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8c990 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8c991 mov ebp, esp */
  EBP = (ESP);
  /* 11d8c993 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8c999 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 11d8c99f push eax */
  push32((uint32_t)(EAX));
  /* 11d8c9a0 mov ecx, dword ptr [0x11db2dc4] */
  ECX = (r32((uint32_t)(0x11db2dc4)));
  /* 11d8c9a6 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8c9a7 call dword ptr [0x11db4328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4328))), 0x11d8c9adu);
  /* 11d8c9ad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8c9b0 jne 0x11d8cbc9 */
  if (!C.zf) goto L_11d8cbc9;
  /* 11d8c9b6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 11d8c9c0 jmp 0x11d8c9d1 */
  goto L_11d8c9d1;
L_11d8c9c2:;
  /* 11d8c9c2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11d8c9c8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8c9cb mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_11d8c9d1:;
  /* 11d8c9d1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8c9db jae 0x11d8c9f2 */
  if (!C.cf) goto L_11d8c9f2;
  /* 11d8c9dd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11d8c9e3 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 11d8c9e9 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 11d8c9f0 jmp 0x11d8c9c2 */
  goto L_11d8c9c2;
L_11d8c9f2:;
  /* 11d8c9f2 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 11d8c9f9 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 11d8c9ff mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d8ca02 jmp 0x11d8ca0d */
  goto L_11d8ca0d;
L_11d8ca04:;
  /* 11d8ca04 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8ca07 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8ca0a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d8ca0d:;
  /* 11d8ca0d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8ca10 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d8ca12 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11d8ca14 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d8ca16 je 0x11d8ca58 */
  if (C.zf) goto L_11d8ca58;
  /* 11d8ca18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8ca1b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d8ca1d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11d8ca1f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 11d8ca25 jmp 0x11d8ca36 */
  goto L_11d8ca36;
L_11d8ca27:;
  /* 11d8ca27 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11d8ca2d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8ca30 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_11d8ca36:;
  /* 11d8ca36 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8ca39 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d8ca3b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11d8ca3e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8ca44 ja 0x11d8ca56 */
  if ((!C.cf&&!C.zf)) goto L_11d8ca56;
  /* 11d8ca46 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11d8ca4c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 11d8ca54 jmp 0x11d8ca27 */
  goto L_11d8ca27;
L_11d8ca56:;
  /* 11d8ca56 jmp 0x11d8ca04 */
  goto L_11d8ca04;
L_11d8ca58:;
  /* 11d8ca58 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8ca5a mov eax, dword ptr [0x11db3064] */
  EAX = (r32((uint32_t)(0x11db3064)));
  /* 11d8ca5f push eax */
  push32((uint32_t)(EAX));
  /* 11d8ca60 mov ecx, dword ptr [0x11db2dc4] */
  ECX = (r32((uint32_t)(0x11db2dc4)));
  /* 11d8ca66 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8ca67 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 11d8ca6d push edx */
  push32((uint32_t)(EDX));
  /* 11d8ca6e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11d8ca73 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 11d8ca79 push eax */
  push32((uint32_t)(EAX));
  /* 11d8ca7a push 1 */
  push32((uint32_t)(0x1u));
  /* 11d8ca7c call 0x11d8ea20 */
  push32(0x11d8ca81u); f_11d8ea20();
  /* 11d8ca81 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8ca84 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8ca86 mov ecx, dword ptr [0x11db2dc4] */
  ECX = (r32((uint32_t)(0x11db2dc4)));
  /* 11d8ca8c push ecx */
  push32((uint32_t)(ECX));
  /* 11d8ca8d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11d8ca92 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 11d8ca98 push edx */
  push32((uint32_t)(EDX));
  /* 11d8ca99 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11d8ca9e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 11d8caa4 push eax */
  push32((uint32_t)(EAX));
  /* 11d8caa5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11d8caaa mov ecx, dword ptr [0x11db3064] */
  ECX = (r32((uint32_t)(0x11db3064)));
  /* 11d8cab0 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8cab1 call 0x11d8ebe0 */
  push32(0x11d8cab6u); f_11d8ebe0();
  /* 11d8cab6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8cab9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8cabb mov edx, dword ptr [0x11db2dc4] */
  EDX = (r32((uint32_t)(0x11db2dc4)));
  /* 11d8cac1 push edx */
  push32((uint32_t)(EDX));
  /* 11d8cac2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11d8cac7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 11d8cacd push eax */
  push32((uint32_t)(EAX));
  /* 11d8cace push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11d8cad3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 11d8cad9 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8cada push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11d8cadf mov edx, dword ptr [0x11db3064] */
  EDX = (r32((uint32_t)(0x11db3064)));
  /* 11d8cae5 push edx */
  push32((uint32_t)(EDX));
  /* 11d8cae6 call 0x11d8ebe0 */
  push32(0x11d8caebu); f_11d8ebe0();
  /* 11d8caeb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8caee mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 11d8caf8 jmp 0x11d8cb09 */
  goto L_11d8cb09;
L_11d8cafa:;
  /* 11d8cafa mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11d8cb00 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8cb03 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_11d8cb09:;
  /* 11d8cb09 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8cb13 jae 0x11d8cbc4 */
  if (!C.cf) goto L_11d8cbc4;
  /* 11d8cb19 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11d8cb1f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d8cb21 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 11d8cb29 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11d8cb2c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d8cb2e je 0x11d8cb66 */
  if (C.zf) goto L_11d8cb66;
  /* 11d8cb30 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11d8cb36 mov cl, byte ptr [eax + 0x11db2f61] */
  CL = (r8((uint32_t)(EAX + 0x11db2f61)));
  /* 11d8cb3c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 11d8cb3f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11d8cb45 mov byte ptr [edx + 0x11db2f61], cl */
  w8((uint32_t)(EDX + 0x11db2f61), (CL));
  /* 11d8cb4b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11d8cb51 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11d8cb57 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 11d8cb5e mov byte ptr [eax + 0x11db2e60], dl */
  w8((uint32_t)(EAX + 0x11db2e60), (DL));
  /* 11d8cb64 jmp 0x11d8cbbf */
  goto L_11d8cbbf;
L_11d8cb66:;
  /* 11d8cb66 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11d8cb6c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d8cb6e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 11d8cb76 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11d8cb79 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d8cb7b je 0x11d8cbb2 */
  if (C.zf) goto L_11d8cbb2;
  /* 11d8cb7d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11d8cb83 mov al, byte ptr [edx + 0x11db2f61] */
  AL = (r8((uint32_t)(EDX + 0x11db2f61)));
  /* 11d8cb89 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11d8cb8b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11d8cb91 mov byte ptr [ecx + 0x11db2f61], al */
  w8((uint32_t)(ECX + 0x11db2f61), (AL));
  /* 11d8cb97 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11d8cb9d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11d8cba3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 11d8cbaa mov byte ptr [edx + 0x11db2e60], cl */
  w8((uint32_t)(EDX + 0x11db2e60), (CL));
  /* 11d8cbb0 jmp 0x11d8cbbf */
  goto L_11d8cbbf;
L_11d8cbb2:;
  /* 11d8cbb2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11d8cbb8 mov byte ptr [edx + 0x11db2e60], 0 */
  w8((uint32_t)(EDX + 0x11db2e60), (0x0u));
L_11d8cbbf:;
  /* 11d8cbbf jmp 0x11d8cafa */
  goto L_11d8cafa;
L_11d8cbc4:;
  /* 11d8cbc4 jmp 0x11d8cc8e */
  goto L_11d8cc8e;
L_11d8cbc9:;
  /* 11d8cbc9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 11d8cbd3 jmp 0x11d8cbe4 */
  goto L_11d8cbe4;
L_11d8cbd5:;
  /* 11d8cbd5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11d8cbdb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8cbde mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_11d8cbe4:;
  /* 11d8cbe4 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8cbee jae 0x11d8cc8e */
  if (!C.cf) goto L_11d8cc8e;
  /* 11d8cbf4 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8cbfb jb 0x11d8cc38 */
  if (C.cf) goto L_11d8cc38;
  /* 11d8cbfd cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8cc04 ja 0x11d8cc38 */
  if ((!C.cf&&!C.zf)) goto L_11d8cc38;
  /* 11d8cc06 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11d8cc0c mov dl, byte ptr [ecx + 0x11db2f61] */
  DL = (r8((uint32_t)(ECX + 0x11db2f61)));
  /* 11d8cc12 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 11d8cc15 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11d8cc1b mov byte ptr [eax + 0x11db2f61], dl */
  w8((uint32_t)(EAX + 0x11db2f61), (DL));
  /* 11d8cc21 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11d8cc27 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8cc2a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11d8cc30 mov byte ptr [edx + 0x11db2e60], cl */
  w8((uint32_t)(EDX + 0x11db2e60), (CL));
  /* 11d8cc36 jmp 0x11d8cc89 */
  goto L_11d8cc89;
L_11d8cc38:;
  /* 11d8cc38 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8cc3f jb 0x11d8cc7c */
  if (C.cf) goto L_11d8cc7c;
  /* 11d8cc41 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8cc48 ja 0x11d8cc7c */
  if ((!C.cf&&!C.zf)) goto L_11d8cc7c;
  /* 11d8cc4a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11d8cc50 mov cl, byte ptr [eax + 0x11db2f61] */
  CL = (r8((uint32_t)(EAX + 0x11db2f61)));
  /* 11d8cc56 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11d8cc59 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11d8cc5f mov byte ptr [edx + 0x11db2f61], cl */
  w8((uint32_t)(EDX + 0x11db2f61), (CL));
  /* 11d8cc65 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11d8cc6b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8cc6e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11d8cc74 mov byte ptr [ecx + 0x11db2e60], al */
  w8((uint32_t)(ECX + 0x11db2e60), (AL));
  /* 11d8cc7a jmp 0x11d8cc89 */
  goto L_11d8cc89;
L_11d8cc7c:;
  /* 11d8cc7c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11d8cc82 mov byte ptr [edx + 0x11db2e60], 0 */
  w8((uint32_t)(EDX + 0x11db2e60), (0x0u));
L_11d8cc89:;
  /* 11d8cc89 jmp 0x11d8cbd5 */
  goto L_11d8cbd5;
L_11d8cc8e:;
  /* 11d8cc8e mov esp, ebp */
  ESP = (EBP);
  /* 11d8cc90 pop ebp */
  EBP = (pop32());
  /* 11d8cc91 ret  */
  ESPCHK(0x11d8c990u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cca0 @ 0x11d8cca0 (23 bytes, 9 insns) */
void f_11d8cca0(void) {
  FTRACE(0x11d8cca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8cca0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8cca1 mov ebp, esp */
  EBP = (ESP);
  /* 11d8cca3 cmp dword ptr [0x11db2e4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db2e4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8ccaa je 0x11d8ccb3 */
  if (C.zf) goto L_11d8ccb3;
  /* 11d8ccac mov eax, dword ptr [0x11db2dc4] */
  EAX = (r32((uint32_t)(0x11db2dc4)));
  /* 11d8ccb1 jmp 0x11d8ccb5 */
  goto L_11d8ccb5;
L_11d8ccb3:;
  /* 11d8ccb3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d8ccb5:;
  /* 11d8ccb5 pop ebp */
  EBP = (pop32());
  /* 11d8ccb6 ret  */
  ESPCHK(0x11d8cca0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ccc0 @ 0x11d8ccc0 (34 bytes, 10 insns) */
void f_11d8ccc0(void) {
  FTRACE(0x11d8ccc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8ccc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8ccc1 mov ebp, esp */
  EBP = (ESP);
  /* 11d8ccc3 cmp dword ptr [0x11db3210], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db3210))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8ccca jne 0x11d8cce0 */
  if (!C.zf) goto L_11d8cce0;
  /* 11d8cccc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 11d8ccce call 0x11d8c4e0 */
  push32(0x11d8ccd3u); f_11d8c4e0();
  /* 11d8ccd3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8ccd6 mov dword ptr [0x11db3210], 1 */
  w32((uint32_t)(0x11db3210), (0x1u));
L_11d8cce0:;
  /* 11d8cce0 pop ebp */
  EBP = (pop32());
  /* 11d8cce1 ret  */
  ESPCHK(0x11d8ccc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ccf0 @ 0x11d8ccf0 (664 bytes, 269 insns) [15 switch table(s)] */
void f_11d8ccf0(void) {
  FTRACE(0x11d8ccf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8ccf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8ccf1 mov ebp, esp */
  EBP = (ESP);
  /* 11d8ccf3 push edi */
  push32((uint32_t)(EDI));
  /* 11d8ccf4 push esi */
  push32((uint32_t)(ESI));
  /* 11d8ccf5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8ccf8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d8ccfb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8ccfe mov eax, ecx */
  EAX = (ECX);
  /* 11d8cd00 mov edx, ecx */
  EDX = (ECX);
  /* 11d8cd02 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8cd04 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8cd06 jbe 0x11d8cd10 */
  if ((C.cf||C.zf)) goto L_11d8cd10;
  /* 11d8cd08 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8cd0a jb 0x11d8ce88 */
  if (C.cf) goto L_11d8ce88;
L_11d8cd10:;
  /* 11d8cd10 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11d8cd16 jne 0x11d8cd2c */
  if (!C.zf) goto L_11d8cd2c;
  /* 11d8cd18 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d8cd1b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11d8cd1e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8cd21 jb 0x11d8cd4c */
  if (C.cf) goto L_11d8cd4c;
  /* 11d8cd23 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11d8cd25 jmp dword ptr [edx*4 + 0x11d8ce38] */
  switch (EDX) {
    case 0: goto L_11d8ce48;
    case 1: goto L_11d8ce50;
    case 2: goto L_11d8ce5c;
    case 3: goto L_11d8ce70;
    default: x86_unimpl("switch@0x11d8cd25 out of table"); return;
  }
L_11d8cd2c:;
  /* 11d8cd2c mov eax, edi */
  EAX = (EDI);
  /* 11d8cd2e mov edx, 3 */
  EDX = (0x3u);
  /* 11d8cd33 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8cd36 jb 0x11d8cd44 */
  if (C.cf) goto L_11d8cd44;
  /* 11d8cd38 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11d8cd3b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8cd3d jmp dword ptr [eax*4 + 0x11d8cd50] */
  switch (EAX) {
    case 1: goto L_11d8cd60;
    case 2: goto L_11d8cd8c;
    case 3: goto L_11d8cdb0;
    default: x86_unimpl("switch@0x11d8cd3d out of table"); return;
  }
L_11d8cd44:;
  /* 11d8cd44 jmp dword ptr [ecx*4 + 0x11d8ce48] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11d8ce48)))); return;
  /* 11d8cd4b nop  */
  /* nop */
L_11d8cd4c:;
  /* 11d8cd4c jmp dword ptr [ecx*4 + 0x11d8cdcc] */
  switch (ECX) {
    case 0: goto L_11d8ce2f;
    case 1: goto L_11d8ce1c;
    case 2: goto L_11d8ce14;
    case 3: goto L_11d8ce0c;
    case 4: goto L_11d8ce04;
    case 5: goto L_11d8cdfc;
    case 6: goto L_11d8cdf4;
    case 7: goto L_11d8cdec;
    default: x86_unimpl("switch@0x11d8cd4c out of table"); return;
  }
  /* 11d8cd53 nop  */
  /* nop */
L_11d8cd60:;
  /* 11d8cd60 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11d8cd62 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d8cd64 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11d8cd66 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11d8cd69 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11d8cd6c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11d8cd6f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d8cd72 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11d8cd75 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8cd78 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8cd7b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8cd7e jb 0x11d8cd4c */
  if (C.cf) goto L_11d8cd4c;
  /* 11d8cd80 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11d8cd82 jmp dword ptr [edx*4 + 0x11d8ce38] */
  switch (EDX) {
    case 0: goto L_11d8ce48;
    case 1: goto L_11d8ce50;
    case 2: goto L_11d8ce5c;
    case 3: goto L_11d8ce70;
    default: x86_unimpl("switch@0x11d8cd82 out of table"); return;
  }
  /* 11d8cd89 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11d8cd8c:;
  /* 11d8cd8c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11d8cd8e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d8cd90 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11d8cd92 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11d8cd95 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d8cd98 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11d8cd9b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8cd9e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8cda1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8cda4 jb 0x11d8cd4c */
  if (C.cf) goto L_11d8cd4c;
  /* 11d8cda6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11d8cda8 jmp dword ptr [edx*4 + 0x11d8ce38] */
  switch (EDX) {
    case 0: goto L_11d8ce48;
    case 1: goto L_11d8ce50;
    case 2: goto L_11d8ce5c;
    case 3: goto L_11d8ce70;
    default: x86_unimpl("switch@0x11d8cda8 out of table"); return;
  }
  /* 11d8cdaf nop  */
  /* nop */
L_11d8cdb0:;
  /* 11d8cdb0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11d8cdb2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d8cdb4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11d8cdb6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11d8cdb7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d8cdba inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11d8cdbb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8cdbe jb 0x11d8cd4c */
  if (C.cf) goto L_11d8cd4c;
  /* 11d8cdc0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11d8cdc2 jmp dword ptr [edx*4 + 0x11d8ce38] */
  switch (EDX) {
    case 0: goto L_11d8ce48;
    case 1: goto L_11d8ce50;
    case 2: goto L_11d8ce5c;
    case 3: goto L_11d8ce70;
    default: x86_unimpl("switch@0x11d8cdc2 out of table"); return;
  }
  /* 11d8cdc9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11d8cdec:;
  /* 11d8cdec mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11d8cdf0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11d8cdf4:;
  /* 11d8cdf4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11d8cdf8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11d8cdfc:;
  /* 11d8cdfc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11d8ce00 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11d8ce04:;
  /* 11d8ce04 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11d8ce08 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11d8ce0c:;
  /* 11d8ce0c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11d8ce10 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11d8ce14:;
  /* 11d8ce14 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11d8ce18 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11d8ce1c:;
  /* 11d8ce1c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11d8ce20 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11d8ce24 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11d8ce2b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8ce2d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11d8ce2f:;
  /* 11d8ce2f jmp dword ptr [edx*4 + 0x11d8ce38] */
  switch (EDX) {
    case 0: goto L_11d8ce48;
    case 1: goto L_11d8ce50;
    case 2: goto L_11d8ce5c;
    case 3: goto L_11d8ce70;
    default: x86_unimpl("switch@0x11d8ce2f out of table"); return;
  }
  /* 11d8ce36 mov edi, edi */
  EDI = (EDI);
L_11d8ce48:;
  /* 11d8ce48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8ce4b pop esi */
  ESI = (pop32());
  /* 11d8ce4c pop edi */
  EDI = (pop32());
  /* 11d8ce4d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d8ce4e ret  */
  ESPCHK(0x11d8ccf0u, _esp0);
  ESP += 4; return;
  /* 11d8ce4f nop  */
  /* nop */
L_11d8ce50:;
  /* 11d8ce50 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d8ce52 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11d8ce54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8ce57 pop esi */
  ESI = (pop32());
  /* 11d8ce58 pop edi */
  EDI = (pop32());
  /* 11d8ce59 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d8ce5a ret  */
  ESPCHK(0x11d8ccf0u, _esp0);
  ESP += 4; return;
  /* 11d8ce5b nop  */
  /* nop */
L_11d8ce5c:;
  /* 11d8ce5c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d8ce5e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11d8ce60 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11d8ce63 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11d8ce66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8ce69 pop esi */
  ESI = (pop32());
  /* 11d8ce6a pop edi */
  EDI = (pop32());
  /* 11d8ce6b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d8ce6c ret  */
  ESPCHK(0x11d8ccf0u, _esp0);
  ESP += 4; return;
  /* 11d8ce6d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11d8ce70:;
  /* 11d8ce70 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d8ce72 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11d8ce74 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11d8ce77 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11d8ce7a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11d8ce7d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11d8ce80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8ce83 pop esi */
  ESI = (pop32());
  /* 11d8ce84 pop edi */
  EDI = (pop32());
  /* 11d8ce85 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d8ce86 ret  */
  ESPCHK(0x11d8ccf0u, _esp0);
  ESP += 4; return;
  /* 11d8ce87 nop  */
  /* nop */
L_11d8ce88:;
  /* 11d8ce88 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11d8ce8c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11d8ce90 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11d8ce96 jne 0x11d8cebc */
  if (!C.zf) goto L_11d8cebc;
  /* 11d8ce98 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d8ce9b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11d8ce9e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8cea1 jb 0x11d8ceb0 */
  if (C.cf) goto L_11d8ceb0;
  /* 11d8cea3 std  */
  C.df=1;
  /* 11d8cea4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11d8cea6 cld  */
  C.df=0;
  /* 11d8cea7 jmp dword ptr [edx*4 + 0x11d8cfd0] */
  switch (EDX) {
    case 0: goto L_11d8cfe0;
    case 1: goto L_11d8cfe8;
    case 2: goto L_11d8cff8;
    case 3: goto L_11d8d00c;
    default: x86_unimpl("switch@0x11d8cea7 out of table"); return;
  }
  /* 11d8ceae mov edi, edi */
  EDI = (EDI);
L_11d8ceb0:;
  /* 11d8ceb0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d8ceb2 jmp dword ptr [ecx*4 + 0x11d8cf80] */
  switch (ECX) {
    case 0: goto L_11d8cfc7;
    default: x86_unimpl("switch@0x11d8ceb2 out of table"); return;
  }
  /* 11d8ceb9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11d8cebc:;
  /* 11d8cebc mov eax, edi */
  EAX = (EDI);
  /* 11d8cebe mov edx, 3 */
  EDX = (0x3u);
  /* 11d8cec3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8cec6 jb 0x11d8ced4 */
  if (C.cf) goto L_11d8ced4;
  /* 11d8cec8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11d8cecb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8cecd jmp dword ptr [eax*4 + 0x11d8ced8] */
  switch (EAX) {
    case 1: goto L_11d8cee8;
    case 2: goto L_11d8cf08;
    case 3: goto L_11d8cf30;
    default: x86_unimpl("switch@0x11d8cecd out of table"); return;
  }
L_11d8ced4:;
  /* 11d8ced4 jmp dword ptr [ecx*4 + 0x11d8cfd0] */
  switch (ECX) {
    case 0: goto L_11d8cfe0;
    case 1: goto L_11d8cfe8;
    case 2: goto L_11d8cff8;
    case 3: goto L_11d8d00c;
    default: x86_unimpl("switch@0x11d8ced4 out of table"); return;
  }
  /* 11d8cedb nop  */
  /* nop */
L_11d8cee8:;
  /* 11d8cee8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11d8ceeb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11d8ceed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11d8cef0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11d8cef1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d8cef4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11d8cef5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8cef8 jb 0x11d8ceb0 */
  if (C.cf) goto L_11d8ceb0;
  /* 11d8cefa std  */
  C.df=1;
  /* 11d8cefb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11d8cefd cld  */
  C.df=0;
  /* 11d8cefe jmp dword ptr [edx*4 + 0x11d8cfd0] */
  switch (EDX) {
    case 0: goto L_11d8cfe0;
    case 1: goto L_11d8cfe8;
    case 2: goto L_11d8cff8;
    case 3: goto L_11d8d00c;
    default: x86_unimpl("switch@0x11d8cefe out of table"); return;
  }
  /* 11d8cf05 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11d8cf08:;
  /* 11d8cf08 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11d8cf0b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11d8cf0d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11d8cf10 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11d8cf13 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d8cf16 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11d8cf19 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8cf1c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8cf1f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8cf22 jb 0x11d8ceb0 */
  if (C.cf) goto L_11d8ceb0;
  /* 11d8cf24 std  */
  C.df=1;
  /* 11d8cf25 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11d8cf27 cld  */
  C.df=0;
  /* 11d8cf28 jmp dword ptr [edx*4 + 0x11d8cfd0] */
  switch (EDX) {
    case 0: goto L_11d8cfe0;
    case 1: goto L_11d8cfe8;
    case 2: goto L_11d8cff8;
    case 3: goto L_11d8d00c;
    default: x86_unimpl("switch@0x11d8cf28 out of table"); return;
  }
  /* 11d8cf2f nop  */
  /* nop */
L_11d8cf30:;
  /* 11d8cf30 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11d8cf33 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11d8cf35 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11d8cf38 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11d8cf3b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11d8cf3e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11d8cf41 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d8cf44 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11d8cf47 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8cf4a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8cf4d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8cf50 jb 0x11d8ceb0 */
  if (C.cf) goto L_11d8ceb0;
  /* 11d8cf56 std  */
  C.df=1;
  /* 11d8cf57 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11d8cf59 cld  */
  C.df=0;
  /* 11d8cf5a jmp dword ptr [edx*4 + 0x11d8cfd0] */
  switch (EDX) {
    case 0: goto L_11d8cfe0;
    case 1: goto L_11d8cfe8;
    case 2: goto L_11d8cff8;
    case 3: goto L_11d8d00c;
    default: x86_unimpl("switch@0x11d8cf5a out of table"); return;
  }
  /* 11d8cf61 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11d8cf64 test bh, cl */
  { uint32_t _r=(C.b.b.h)&(CL); fl_logic(_r,8); }
  /* 11d8cf66 fcom dword ptr [ecx] */
  fpu_cmp(FPU_ST(0), (double)rf32((uint32_t)(ECX)));
  /* 11d8cf68 mov edi, cs */
  EDI = (C.seg_cs);
  /* 11d8cf6a fcom dword ptr [ecx] */
  fpu_cmp(FPU_ST(0), (double)rf32((uint32_t)(ECX)));
  /* 11d8cf6c xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 11d8cf6d iretd  */
  x86_unimpl("iretd @ 0x11d8cf6d");
  /* 11d8cf6e fcom dword ptr [ecx] */
  fpu_cmp(FPU_ST(0), (double)rf32((uint32_t)(ECX)));
  /* 11d8cf70 pushfd  */
  x86_unimpl("pushfd @ 0x11d8cf70");
  /* 11d8cf71 iretd  */
  x86_unimpl("iretd @ 0x11d8cf71");
  /* 11d8cf72 fcom dword ptr [ecx] */
  fpu_cmp(FPU_ST(0), (double)rf32((uint32_t)(ECX)));
  /* 11d8cf74 movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 11d8cf75 iretd  */
  x86_unimpl("iretd @ 0x11d8cf75");
  /* 11d8cf76 fcom dword ptr [ecx] */
  fpu_cmp(FPU_ST(0), (double)rf32((uint32_t)(ECX)));
  /* 11d8cf78 lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 11d8cf79 iretd  */
  x86_unimpl("iretd @ 0x11d8cf79");
  /* 11d8cf7a fcom dword ptr [ecx] */
  fpu_cmp(FPU_ST(0), (double)rf32((uint32_t)(ECX)));
  /* 11d8cf7c mov ah, 0xcf */
  AH = (0xcfu);
  /* 11d8cf7e fcom dword ptr [ecx] */
  fpu_cmp(FPU_ST(0), (double)rf32((uint32_t)(ECX)));
  /* 11d8cf84 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11d8cf88 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11d8cf8c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11d8cf90 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11d8cf94 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11d8cf98 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11d8cf9c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11d8cfa0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11d8cfa4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11d8cfa8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11d8cfac mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11d8cfb0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11d8cfb4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11d8cfb8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11d8cfbc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11d8cfc3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8cfc5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11d8cfc7:;
  /* 11d8cfc7 jmp dword ptr [edx*4 + 0x11d8cfd0] */
  switch (EDX) {
    case 0: goto L_11d8cfe0;
    case 1: goto L_11d8cfe8;
    case 2: goto L_11d8cff8;
    case 3: goto L_11d8d00c;
    default: x86_unimpl("switch@0x11d8cfc7 out of table"); return;
  }
  /* 11d8cfce mov edi, edi */
  EDI = (EDI);
L_11d8cfe0:;
  /* 11d8cfe0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8cfe3 pop esi */
  ESI = (pop32());
  /* 11d8cfe4 pop edi */
  EDI = (pop32());
  /* 11d8cfe5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d8cfe6 ret  */
  ESPCHK(0x11d8ccf0u, _esp0);
  ESP += 4; return;
  /* 11d8cfe7 nop  */
  /* nop */
L_11d8cfe8:;
  /* 11d8cfe8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11d8cfeb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11d8cfee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8cff1 pop esi */
  ESI = (pop32());
  /* 11d8cff2 pop edi */
  EDI = (pop32());
  /* 11d8cff3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d8cff4 ret  */
  ESPCHK(0x11d8ccf0u, _esp0);
  ESP += 4; return;
  /* 11d8cff5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11d8cff8:;
  /* 11d8cff8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11d8cffb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11d8cffe mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11d8d001 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11d8d004 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8d007 pop esi */
  ESI = (pop32());
  /* 11d8d008 pop edi */
  EDI = (pop32());
  /* 11d8d009 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d8d00a ret  */
  ESPCHK(0x11d8ccf0u, _esp0);
  ESP += 4; return;
  /* 11d8d00b nop  */
  /* nop */
L_11d8d00c:;
  /* 11d8d00c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11d8d00f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11d8d012 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11d8d015 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11d8d018 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11d8d01b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11d8d01e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8d021 pop esi */
  ESI = (pop32());
  /* 11d8d022 pop edi */
  EDI = (pop32());
  /* 11d8d023 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d8d024 ret  */
  ESPCHK(0x11d8ccf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d030 @ 0x11d8d030 (255 bytes, 88 insns) */
void f_11d8d030(void) {
  FTRACE(0x11d8d030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8d030 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8d031 mov ebp, esp */
  EBP = (ESP);
  /* 11d8d033 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11d8d036:;
  /* 11d8d036 cmp dword ptr [0x11daffc4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11daffc4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8d03d jle 0x11d8d056 */
  if ((C.zf||C.sf!=C.of)) goto L_11d8d056;
  /* 11d8d03f push 8 */
  push32((uint32_t)(0x8u));
  /* 11d8d041 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8d044 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d8d046 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11d8d048 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8d049 call 0x11d8c420 */
  push32(0x11d8d04eu); f_11d8c420();
  /* 11d8d04e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8d051 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11d8d054 jmp 0x11d8d06f */
  goto L_11d8d06f;
L_11d8d056:;
  /* 11d8d056 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8d059 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8d05b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d8d05d mov ecx, dword ptr [0x11dafdb8] */
  ECX = (r32((uint32_t)(0x11dafdb8)));
  /* 11d8d063 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d8d065 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11d8d069 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11d8d06c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11d8d06f:;
  /* 11d8d06f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8d073 je 0x11d8d080 */
  if (C.zf) goto L_11d8d080;
  /* 11d8d075 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8d078 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8d07b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11d8d07e jmp 0x11d8d036 */
  goto L_11d8d036;
L_11d8d080:;
  /* 11d8d080 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8d083 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d8d085 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11d8d087 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d8d08a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8d08d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8d090 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11d8d093 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8d096 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d8d099 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8d09d je 0x11d8d0a5 */
  if (C.zf) goto L_11d8d0a5;
  /* 11d8d09f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8d0a3 jne 0x11d8d0b8 */
  if (!C.zf) goto L_11d8d0b8;
L_11d8d0a5:;
  /* 11d8d0a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8d0a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8d0aa mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d8d0ac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d8d0af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8d0b2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8d0b5 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11d8d0b8:;
  /* 11d8d0b8 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11d8d0bf:;
  /* 11d8d0bf cmp dword ptr [0x11daffc4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11daffc4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8d0c6 jle 0x11d8d0db */
  if ((C.zf||C.sf!=C.of)) goto L_11d8d0db;
  /* 11d8d0c8 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d8d0ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8d0cd push edx */
  push32((uint32_t)(EDX));
  /* 11d8d0ce call 0x11d8c420 */
  push32(0x11d8d0d3u); f_11d8c420();
  /* 11d8d0d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8d0d6 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11d8d0d9 jmp 0x11d8d0f0 */
  goto L_11d8d0f0;
L_11d8d0db:;
  /* 11d8d0db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8d0de mov ecx, dword ptr [0x11dafdb8] */
  ECX = (r32((uint32_t)(0x11dafdb8)));
  /* 11d8d0e4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d8d0e6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11d8d0ea and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11d8d0ed mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11d8d0f0:;
  /* 11d8d0f0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8d0f4 je 0x11d8d11b */
  if (C.zf) goto L_11d8d11b;
  /* 11d8d0f6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8d0f9 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d8d0fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8d0ff lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 11d8d103 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11d8d106 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8d109 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d8d10b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11d8d10d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d8d110 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8d113 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8d116 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11d8d119 jmp 0x11d8d0bf */
  goto L_11d8d0bf;
L_11d8d11b:;
  /* 11d8d11b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8d11f jne 0x11d8d128 */
  if (!C.zf) goto L_11d8d128;
  /* 11d8d121 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8d124 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d8d126 jmp 0x11d8d12b */
  goto L_11d8d12b;
L_11d8d128:;
  /* 11d8d128 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11d8d12b:;
  /* 11d8d12b mov esp, ebp */
  ESP = (EBP);
  /* 11d8d12d pop ebp */
  EBP = (pop32());
  /* 11d8d12e ret  */
  ESPCHK(0x11d8d030u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d130 @ 0x11d8d130 (17 bytes, 8 insns) */
void f_11d8d130(void) {
  FTRACE(0x11d8d130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8d130 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8d131 mov ebp, esp */
  EBP = (ESP);
  /* 11d8d133 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8d136 push eax */
  push32((uint32_t)(EAX));
  /* 11d8d137 call 0x11d8d030 */
  push32(0x11d8d13cu); f_11d8d030();
  /* 11d8d13c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8d13f pop ebp */
  EBP = (pop32());
  /* 11d8d140 ret  */
  ESPCHK(0x11d8d130u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d150 @ 0x11d8d150 (297 bytes, 106 insns) */
void f_11d8d150(void) {
  FTRACE(0x11d8d150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8d150 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8d151 mov ebp, esp */
  EBP = (ESP);
  /* 11d8d153 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8d156 push esi */
  push32((uint32_t)(ESI));
L_11d8d157:;
  /* 11d8d157 cmp dword ptr [0x11daffc4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11daffc4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8d15e jle 0x11d8d177 */
  if ((C.zf||C.sf!=C.of)) goto L_11d8d177;
  /* 11d8d160 push 8 */
  push32((uint32_t)(0x8u));
  /* 11d8d162 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8d165 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d8d167 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11d8d169 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8d16a call 0x11d8c420 */
  push32(0x11d8d16fu); f_11d8c420();
  /* 11d8d16f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8d172 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11d8d175 jmp 0x11d8d190 */
  goto L_11d8d190;
L_11d8d177:;
  /* 11d8d177 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8d17a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8d17c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d8d17e mov ecx, dword ptr [0x11dafdb8] */
  ECX = (r32((uint32_t)(0x11dafdb8)));
  /* 11d8d184 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d8d186 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11d8d18a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11d8d18d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11d8d190:;
  /* 11d8d190 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8d194 je 0x11d8d1a1 */
  if (C.zf) goto L_11d8d1a1;
  /* 11d8d196 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8d199 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8d19c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11d8d19f jmp 0x11d8d157 */
  goto L_11d8d157;
L_11d8d1a1:;
  /* 11d8d1a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8d1a4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d8d1a6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11d8d1a8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d8d1ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8d1ae add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8d1b1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11d8d1b4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8d1b7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11d8d1ba cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8d1be je 0x11d8d1c6 */
  if (C.zf) goto L_11d8d1c6;
  /* 11d8d1c0 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8d1c4 jne 0x11d8d1d9 */
  if (!C.zf) goto L_11d8d1d9;
L_11d8d1c6:;
  /* 11d8d1c6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8d1c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8d1cb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d8d1cd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d8d1d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8d1d3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8d1d6 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11d8d1d9:;
  /* 11d8d1d9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11d8d1e0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11d8d1e7:;
  /* 11d8d1e7 cmp dword ptr [0x11daffc4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11daffc4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8d1ee jle 0x11d8d203 */
  if ((C.zf||C.sf!=C.of)) goto L_11d8d203;
  /* 11d8d1f0 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d8d1f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8d1f5 push edx */
  push32((uint32_t)(EDX));
  /* 11d8d1f6 call 0x11d8c420 */
  push32(0x11d8d1fbu); f_11d8c420();
  /* 11d8d1fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8d1fe mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11d8d201 jmp 0x11d8d218 */
  goto L_11d8d218;
L_11d8d203:;
  /* 11d8d203 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8d206 mov ecx, dword ptr [0x11dafdb8] */
  ECX = (r32((uint32_t)(0x11dafdb8)));
  /* 11d8d20c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d8d20e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11d8d212 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11d8d215 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_11d8d218:;
  /* 11d8d218 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8d21c je 0x11d8d259 */
  if (C.zf) goto L_11d8d259;
  /* 11d8d21e push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8d220 push 0xa */
  push32((uint32_t)(0xau));
  /* 11d8d222 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8d225 push eax */
  push32((uint32_t)(EAX));
  /* 11d8d226 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d8d229 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8d22a call 0x11d8ef40 */
  push32(0x11d8d22fu); f_11d8ef40();
  /* 11d8d22f mov ecx, eax */
  ECX = (EAX);
  /* 11d8d231 mov esi, edx */
  ESI = (EDX);
  /* 11d8d233 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8d236 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8d239 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11d8d23a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8d23c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8d23e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d8d241 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 11d8d244 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8d247 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8d249 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d8d24b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d8d24e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8d251 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8d254 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11d8d257 jmp 0x11d8d1e7 */
  goto L_11d8d1e7;
L_11d8d259:;
  /* 11d8d259 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8d25d jne 0x11d8d26e */
  if (!C.zf) goto L_11d8d26e;
  /* 11d8d25f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d8d262 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d8d264 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8d267 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8d26a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d8d26c jmp 0x11d8d274 */
  goto L_11d8d274;
L_11d8d26e:;
  /* 11d8d26e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d8d271 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_11d8d274:;
  /* 11d8d274 pop esi */
  ESI = (pop32());
  /* 11d8d275 mov esp, ebp */
  ESP = (EBP);
  /* 11d8d277 pop ebp */
  EBP = (pop32());
  /* 11d8d278 ret  */
  ESPCHK(0x11d8d150u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x11d8d280 (129 bytes, 56 insns) */
void f_11d8d280(void) {
  FTRACE(0x11d8d280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8d280 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11d8d284 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d8d288 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11d8d28e jne 0x11d8d2cc */
  if (!C.zf) goto L_11d8d2cc;
L_11d8d290:;
  /* 11d8d290 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d8d292 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d8d294 jne 0x11d8d2c4 */
  if (!C.zf) goto L_11d8d2c4;
  /* 11d8d296 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11d8d298 je 0x11d8d2c0 */
  if (C.zf) goto L_11d8d2c0;
  /* 11d8d29a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d8d29d jne 0x11d8d2c4 */
  if (!C.zf) goto L_11d8d2c4;
  /* 11d8d29f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11d8d2a1 je 0x11d8d2c0 */
  if (C.zf) goto L_11d8d2c0;
  /* 11d8d2a3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11d8d2a6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d8d2a9 jne 0x11d8d2c4 */
  if (!C.zf) goto L_11d8d2c4;
  /* 11d8d2ab or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11d8d2ad je 0x11d8d2c0 */
  if (C.zf) goto L_11d8d2c0;
  /* 11d8d2af cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d8d2b2 jne 0x11d8d2c4 */
  if (!C.zf) goto L_11d8d2c4;
  /* 11d8d2b4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8d2b7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8d2ba or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11d8d2bc jne 0x11d8d290 */
  if (!C.zf) goto L_11d8d290;
  /* 11d8d2be mov edi, edi */
  EDI = (EDI);
L_11d8d2c0:;
  /* 11d8d2c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8d2c2 ret  */
  ESPCHK(0x11d8d280u, _esp0);
  ESP += 4; return;
  /* 11d8d2c3 nop  */
  /* nop */
L_11d8d2c4:;
  /* 11d8d2c4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8d2c6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11d8d2c8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11d8d2c9 ret  */
  ESPCHK(0x11d8d280u, _esp0);
  ESP += 4; return;
  /* 11d8d2ca mov edi, edi */
  EDI = (EDI);
L_11d8d2cc:;
  /* 11d8d2cc test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 11d8d2d2 je 0x11d8d2e8 */
  if (C.zf) goto L_11d8d2e8;
  /* 11d8d2d4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d8d2d6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11d8d2d7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d8d2d9 jne 0x11d8d2c4 */
  if (!C.zf) goto L_11d8d2c4;
  /* 11d8d2db inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11d8d2dc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11d8d2de je 0x11d8d2c0 */
  if (C.zf) goto L_11d8d2c0;
  /* 11d8d2e0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 11d8d2e6 je 0x11d8d290 */
  if (C.zf) goto L_11d8d290;
L_11d8d2e8:;
  /* 11d8d2e8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11d8d2eb add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8d2ee cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d8d2f0 jne 0x11d8d2c4 */
  if (!C.zf) goto L_11d8d2c4;
  /* 11d8d2f2 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11d8d2f4 je 0x11d8d2c0 */
  if (C.zf) goto L_11d8d2c0;
  /* 11d8d2f6 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d8d2f9 jne 0x11d8d2c4 */
  if (!C.zf) goto L_11d8d2c4;
  /* 11d8d2fb or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11d8d2fd je 0x11d8d2c0 */
  if (C.zf) goto L_11d8d2c0;
  /* 11d8d2ff add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8d302 jmp 0x11d8d290 */
  goto L_11d8d290;
}

/* FUN_1000d310 @ 0x11d8d310 (46 bytes, 18 insns) */
void f_11d8d310(void) {
  FTRACE(0x11d8d310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8d310 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8d311 mov ebp, esp */
  EBP = (ESP);
  /* 11d8d313 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8d314 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11d8d316 call 0x11d886f0 */
  push32(0x11d8d31bu); f_11d886f0();
  /* 11d8d31b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8d31e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8d321 push eax */
  push32((uint32_t)(EAX));
  /* 11d8d322 call 0x11d8d340 */
  push32(0x11d8d327u); f_11d8d340();
  /* 11d8d327 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8d32a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d8d32d push 0xc */
  push32((uint32_t)(0xcu));
  /* 11d8d32f call 0x11d88790 */
  push32(0x11d8d334u); f_11d88790();
  /* 11d8d334 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8d337 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8d33a mov esp, ebp */
  ESP = (EBP);
  /* 11d8d33c pop ebp */
  EBP = (pop32());
  /* 11d8d33d ret  */
  ESPCHK(0x11d8d310u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x11d8d340 (198 bytes, 69 insns) */
void f_11d8d340(void) {
  FTRACE(0x11d8d340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8d340 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8d341 mov ebp, esp */
  EBP = (ESP);
  /* 11d8d343 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8d346 mov eax, dword ptr [0x11db16f8] */
  EAX = (r32((uint32_t)(0x11db16f8)));
  /* 11d8d34b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d8d34e cmp dword ptr [0x11db3200], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db3200))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8d355 jne 0x11d8d35e */
  if (!C.zf) goto L_11d8d35e;
  /* 11d8d357 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8d359 jmp 0x11d8d402 */
  goto L_11d8d402;
L_11d8d35e:;
  /* 11d8d35e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8d362 jne 0x11d8d386 */
  if (!C.zf) goto L_11d8d386;
  /* 11d8d364 cmp dword ptr [0x11db1700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8d36b je 0x11d8d386 */
  if (C.zf) goto L_11d8d386;
  /* 11d8d36d call 0x11d8efd0 */
  push32(0x11d8d372u); f_11d8efd0();
  /* 11d8d372 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8d374 je 0x11d8d37d */
  if (C.zf) goto L_11d8d37d;
  /* 11d8d376 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8d378 jmp 0x11d8d402 */
  goto L_11d8d402;
L_11d8d37d:;
  /* 11d8d37d mov ecx, dword ptr [0x11db16f8] */
  ECX = (r32((uint32_t)(0x11db16f8)));
  /* 11d8d383 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11d8d386:;
  /* 11d8d386 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8d38a je 0x11d8d400 */
  if (C.zf) goto L_11d8d400;
  /* 11d8d38c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8d390 je 0x11d8d400 */
  if (C.zf) goto L_11d8d400;
  /* 11d8d392 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8d395 push edx */
  push32((uint32_t)(EDX));
  /* 11d8d396 call 0x11d89620 */
  push32(0x11d8d39bu); f_11d89620();
  /* 11d8d39b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8d39e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d8d3a1:;
  /* 11d8d3a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8d3a4 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8d3a7 je 0x11d8d400 */
  if (C.zf) goto L_11d8d400;
  /* 11d8d3a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8d3ac mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d8d3ae push edx */
  push32((uint32_t)(EDX));
  /* 11d8d3af call 0x11d89620 */
  push32(0x11d8d3b4u); f_11d89620();
  /* 11d8d3b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8d3b7 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8d3ba jbe 0x11d8d3f5 */
  if ((C.cf||C.zf)) goto L_11d8d3f5;
  /* 11d8d3bc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8d3bf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d8d3c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8d3c4 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 11d8d3c8 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8d3cb jne 0x11d8d3f5 */
  if (!C.zf) goto L_11d8d3f5;
  /* 11d8d3cd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8d3d0 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8d3d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8d3d4 push edx */
  push32((uint32_t)(EDX));
  /* 11d8d3d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8d3d8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d8d3da push ecx */
  push32((uint32_t)(ECX));
  /* 11d8d3db call 0x11d8ef80 */
  push32(0x11d8d3e0u); f_11d8ef80();
  /* 11d8d3e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8d3e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8d3e5 jne 0x11d8d3f5 */
  if (!C.zf) goto L_11d8d3f5;
  /* 11d8d3e7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8d3ea mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d8d3ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8d3ef lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 11d8d3f3 jmp 0x11d8d402 */
  goto L_11d8d402;
L_11d8d3f5:;
  /* 11d8d3f5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8d3f8 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8d3fb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11d8d3fe jmp 0x11d8d3a1 */
  goto L_11d8d3a1;
L_11d8d400:;
  /* 11d8d400 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d8d402:;
  /* 11d8d402 mov esp, ebp */
  ESP = (EBP);
  /* 11d8d404 pop ebp */
  EBP = (pop32());
  /* 11d8d405 ret  */
  ESPCHK(0x11d8d340u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x11d8d410 (104 bytes, 43 insns) */
void f_11d8d410(void) {
  FTRACE(0x11d8d410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8d410 push ebx */
  push32((uint32_t)(EBX));
  /* 11d8d411 push esi */
  push32((uint32_t)(ESI));
  /* 11d8d412 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 11d8d416 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8d418 jne 0x11d8d432 */
  if (!C.zf) goto L_11d8d432;
  /* 11d8d41a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 11d8d41e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11d8d422 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d8d424 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d8d426 mov ebx, eax */
  EBX = (EAX);
  /* 11d8d428 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11d8d42c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d8d42e mov edx, ebx */
  EDX = (EBX);
  /* 11d8d430 jmp 0x11d8d473 */
  goto L_11d8d473;
L_11d8d432:;
  /* 11d8d432 mov ecx, eax */
  ECX = (EAX);
  /* 11d8d434 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11d8d438 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 11d8d43c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_11d8d440:;
  /* 11d8d440 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11d8d442 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 11d8d444 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11d8d446 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 11d8d448 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d8d44a jne 0x11d8d440 */
  if (!C.zf) goto L_11d8d440;
  /* 11d8d44c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d8d44e mov esi, eax */
  ESI = (EAX);
  /* 11d8d450 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11d8d454 mov ecx, eax */
  ECX = (EAX);
  /* 11d8d456 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11d8d45a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11d8d45c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8d45e jb 0x11d8d46e */
  if (C.cf) goto L_11d8d46e;
  /* 11d8d460 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8d464 ja 0x11d8d46e */
  if ((!C.cf&&!C.zf)) goto L_11d8d46e;
  /* 11d8d466 jb 0x11d8d46f */
  if (C.cf) goto L_11d8d46f;
  /* 11d8d468 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8d46c jbe 0x11d8d46f */
  if ((C.cf||C.zf)) goto L_11d8d46f;
L_11d8d46e:;
  /* 11d8d46e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_11d8d46f:;
  /* 11d8d46f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d8d471 mov eax, esi */
  EAX = (ESI);
L_11d8d473:;
  /* 11d8d473 pop esi */
  ESI = (pop32());
  /* 11d8d474 pop ebx */
  EBX = (pop32());
  /* 11d8d475 ret 0x10 */
  ESPCHK(0x11d8d410u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x11d8d480 (117 bytes, 44 insns) */
void f_11d8d480(void) {
  FTRACE(0x11d8d480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8d480 push ebx */
  push32((uint32_t)(EBX));
  /* 11d8d481 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11d8d485 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8d487 jne 0x11d8d4a1 */
  if (!C.zf) goto L_11d8d4a1;
  /* 11d8d489 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11d8d48d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11d8d491 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d8d493 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d8d495 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d8d499 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d8d49b mov eax, edx */
  EAX = (EDX);
  /* 11d8d49d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d8d49f jmp 0x11d8d4f1 */
  goto L_11d8d4f1;
L_11d8d4a1:;
  /* 11d8d4a1 mov ecx, eax */
  ECX = (EAX);
  /* 11d8d4a3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 11d8d4a7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11d8d4ab mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_11d8d4af:;
  /* 11d8d4af shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11d8d4b1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 11d8d4b3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11d8d4b5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 11d8d4b7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d8d4b9 jne 0x11d8d4af */
  if (!C.zf) goto L_11d8d4af;
  /* 11d8d4bb div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d8d4bd mov ecx, eax */
  ECX = (EAX);
  /* 11d8d4bf mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11d8d4c3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 11d8d4c4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11d8d4c8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8d4ca jb 0x11d8d4da */
  if (C.cf) goto L_11d8d4da;
  /* 11d8d4cc cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8d4d0 ja 0x11d8d4da */
  if ((!C.cf&&!C.zf)) goto L_11d8d4da;
  /* 11d8d4d2 jb 0x11d8d4e2 */
  if (C.cf) goto L_11d8d4e2;
  /* 11d8d4d4 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8d4d8 jbe 0x11d8d4e2 */
  if ((C.cf||C.zf)) goto L_11d8d4e2;
L_11d8d4da:;
  /* 11d8d4da sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8d4de sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11d8d4e2:;
  /* 11d8d4e2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8d4e6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8d4ea neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d8d4ec neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d8d4ee sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11d8d4f1:;
  /* 11d8d4f1 pop ebx */
  EBX = (pop32());
  /* 11d8d4f2 ret 0x10 */
  ESPCHK(0x11d8d480u, _esp0);
  ESP += 20; return;
}

/* FUN_1000d500 @ 0x11d8d500 (628 bytes, 214 insns) */
void f_11d8d500(void) {
  FTRACE(0x11d8d500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8d500 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8d501 mov ebp, esp */
  EBP = (ESP);
  /* 11d8d503 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8d506 push ebx */
  push32((uint32_t)(EBX));
  /* 11d8d507 push esi */
  push32((uint32_t)(ESI));
  /* 11d8d508 push edi */
  push32((uint32_t)(EDI));
L_11d8d509:;
  /* 11d8d509 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8d50d jne 0x11d8d52d */
  if (!C.zf) goto L_11d8d52d;
  /* 11d8d50f push 0x11dad2f8 */
  push32((uint32_t)(0x11dad2f8u));
  /* 11d8d514 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8d516 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 11d8d518 push 0x11dad2ec */
  push32((uint32_t)(0x11dad2ecu));
  /* 11d8d51d push 2 */
  push32((uint32_t)(0x2u));
  /* 11d8d51f call 0x11d84e40 */
  push32(0x11d8d524u); f_11d84e40();
  /* 11d8d524 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8d527 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8d52a jne 0x11d8d52d */
  if (!C.zf) goto L_11d8d52d;
  /* 11d8d52c int3  */
  x86_unimpl("int3 @ 0x11d8d52c");
L_11d8d52d:;
  /* 11d8d52d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8d52f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8d531 jne 0x11d8d509 */
  if (!C.zf) goto L_11d8d509;
  /* 11d8d533 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8d536 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d8d539 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8d53c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11d8d53f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11d8d542 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8d545 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11d8d548 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 11d8d54e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d8d550 je 0x11d8d55f */
  if (C.zf) goto L_11d8d55f;
  /* 11d8d552 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8d555 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11d8d558 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 11d8d55b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d8d55d je 0x11d8d575 */
  if (C.zf) goto L_11d8d575;
L_11d8d55f:;
  /* 11d8d55f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8d562 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11d8d565 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11d8d567 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8d56a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 11d8d56d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d8d570 jmp 0x11d8d76d */
  goto L_11d8d76d;
L_11d8d575:;
  /* 11d8d575 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8d578 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11d8d57b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11d8d57e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8d580 je 0x11d8d5cc */
  if (C.zf) goto L_11d8d5cc;
  /* 11d8d582 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8d585 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11d8d58c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8d58f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11d8d592 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11d8d595 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8d597 je 0x11d8d5b5 */
  if (C.zf) goto L_11d8d5b5;
  /* 11d8d599 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8d59c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8d59f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11d8d5a2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11d8d5a4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8d5a7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11d8d5aa and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 11d8d5ad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8d5b0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11d8d5b3 jmp 0x11d8d5cc */
  goto L_11d8d5cc;
L_11d8d5b5:;
  /* 11d8d5b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8d5b8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11d8d5bb or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11d8d5be mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8d5c1 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11d8d5c4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d8d5c7 jmp 0x11d8d76d */
  goto L_11d8d76d;
L_11d8d5cc:;
  /* 11d8d5cc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8d5cf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11d8d5d2 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11d8d5d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8d5d8 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11d8d5db mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8d5de mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11d8d5e1 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 11d8d5e4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8d5e7 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11d8d5ea mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8d5ed mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11d8d5f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d8d5fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8d5fe mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11d8d601 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8d604 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11d8d607 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 11d8d60d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d8d60f jne 0x11d8d63f */
  if (!C.zf) goto L_11d8d63f;
  /* 11d8d611 cmp dword ptr [ebp - 8], 0x11db0260 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x11db0260u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8d618 je 0x11d8d623 */
  if (C.zf) goto L_11d8d623;
  /* 11d8d61a cmp dword ptr [ebp - 8], 0x11db0280 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x11db0280u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8d621 jne 0x11d8d633 */
  if (!C.zf) goto L_11d8d633;
L_11d8d623:;
  /* 11d8d623 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8d626 push edx */
  push32((uint32_t)(EDX));
  /* 11d8d627 call 0x11d8f5b0 */
  push32(0x11d8d62cu); f_11d8f5b0();
  /* 11d8d62c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8d62f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8d631 jne 0x11d8d63f */
  if (!C.zf) goto L_11d8d63f;
L_11d8d633:;
  /* 11d8d633 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8d636 push eax */
  push32((uint32_t)(EAX));
  /* 11d8d637 call 0x11d8f4e0 */
  push32(0x11d8d63cu); f_11d8f4e0();
  /* 11d8d63c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d8d63f:;
  /* 11d8d63f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8d642 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11d8d645 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 11d8d64b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d8d64d je 0x11d8d72b */
  if (C.zf) goto L_11d8d72b;
L_11d8d653:;
  /* 11d8d653 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8d656 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8d659 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11d8d65b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8d65e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d8d660 jge 0x11d8d683 */
  if ((C.sf==C.of)) goto L_11d8d683;
  /* 11d8d662 push 0x11dad2ac */
  push32((uint32_t)(0x11dad2acu));
  /* 11d8d667 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8d669 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11d8d66e push 0x11dad2ec */
  push32((uint32_t)(0x11dad2ecu));
  /* 11d8d673 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d8d675 call 0x11d84e40 */
  push32(0x11d8d67au); f_11d84e40();
  /* 11d8d67a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8d67d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8d680 jne 0x11d8d683 */
  if (!C.zf) goto L_11d8d683;
  /* 11d8d682 int3  */
  x86_unimpl("int3 @ 0x11d8d682");
L_11d8d683:;
  /* 11d8d683 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8d685 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8d687 jne 0x11d8d653 */
  if (!C.zf) goto L_11d8d653;
  /* 11d8d689 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8d68c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8d68f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11d8d691 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8d694 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d8d697 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8d69a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11d8d69d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8d6a0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8d6a3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11d8d6a5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8d6a8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11d8d6ab sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8d6ae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8d6b1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11d8d6b4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8d6b8 jle 0x11d8d6d6 */
  if ((C.zf||C.sf!=C.of)) goto L_11d8d6d6;
  /* 11d8d6ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8d6bd push ecx */
  push32((uint32_t)(ECX));
  /* 11d8d6be mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8d6c1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11d8d6c4 push eax */
  push32((uint32_t)(EAX));
  /* 11d8d6c5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8d6c8 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8d6c9 call 0x11d8f1d0 */
  push32(0x11d8d6ceu); f_11d8f1d0();
  /* 11d8d6ce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8d6d1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d8d6d4 jmp 0x11d8d71e */
  goto L_11d8d71e;
L_11d8d6d6:;
  /* 11d8d6d6 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8d6da je 0x11d8d6f9 */
  if (C.zf) goto L_11d8d6f9;
  /* 11d8d6dc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8d6df sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11d8d6e2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8d6e5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11d8d6e8 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d8d6eb mov ecx, dword ptr [edx*4 + 0x11db30c0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11db30c0)));
  /* 11d8d6f2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8d6f4 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11d8d6f7 jmp 0x11d8d700 */
  goto L_11d8d700;
L_11d8d6f9:;
  /* 11d8d6f9 mov dword ptr [ebp - 0x14], 0x11dafa60 */
  w32((uint32_t)(EBP + -0x14), (0x11dafa60u));
L_11d8d700:;
  /* 11d8d700 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d8d703 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 11d8d707 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11d8d70a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8d70c je 0x11d8d71e */
  if (C.zf) goto L_11d8d71e;
  /* 11d8d70e push 2 */
  push32((uint32_t)(0x2u));
  /* 11d8d710 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8d712 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8d715 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8d716 call 0x11d8f080 */
  push32(0x11d8d71bu); f_11d8f080();
  /* 11d8d71b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d8d71e:;
  /* 11d8d71e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8d721 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11d8d724 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 11d8d727 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11d8d729 jmp 0x11d8d749 */
  goto L_11d8d749;
L_11d8d72b:;
  /* 11d8d72b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11d8d732 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8d735 push edx */
  push32((uint32_t)(EDX));
  /* 11d8d736 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11d8d739 push eax */
  push32((uint32_t)(EAX));
  /* 11d8d73a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8d73d push ecx */
  push32((uint32_t)(ECX));
  /* 11d8d73e call 0x11d8f1d0 */
  push32(0x11d8d743u); f_11d8f1d0();
  /* 11d8d743 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8d746 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11d8d749:;
  /* 11d8d749 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d8d74c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8d74f je 0x11d8d765 */
  if (C.zf) goto L_11d8d765;
  /* 11d8d751 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8d754 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11d8d757 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11d8d75a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8d75d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 11d8d760 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d8d763 jmp 0x11d8d76d */
  goto L_11d8d76d;
L_11d8d765:;
  /* 11d8d765 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8d768 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_11d8d76d:;
  /* 11d8d76d pop edi */
  EDI = (pop32());
  /* 11d8d76e pop esi */
  ESI = (pop32());
  /* 11d8d76f pop ebx */
  EBX = (pop32());
  /* 11d8d770 mov esp, ebp */
  ESP = (EBP);
  /* 11d8d772 pop ebp */
  EBP = (pop32());
  /* 11d8d773 ret  */
  ESPCHK(0x11d8d500u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d780 @ 0x11d8d780 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_11d8d780(void) {
  FTRACE(0x11d8d780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8d780 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8d781 mov ebp, esp */
  EBP = (ESP);
  /* 11d8d783 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8d789 push ebx */
  push32((uint32_t)(EBX));
  /* 11d8d78a push esi */
  push32((uint32_t)(ESI));
  /* 11d8d78b push edi */
  push32((uint32_t)(EDI));
  /* 11d8d78c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11d8d793 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 11d8d79d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_11d8d7a4:;
  /* 11d8d7a4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8d7a7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11d8d7a9 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 11d8d7ac movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11d8d7b0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8d7b3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8d7b6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11d8d7b9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d8d7bb je 0x11d8e397 */
  if (C.zf) goto L_11d8e397;
  /* 11d8d7c1 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8d7c8 jl 0x11d8e397 */
  if ((C.sf!=C.of)) goto L_11d8e397;
  /* 11d8d7ce movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11d8d7d2 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8d7d5 jl 0x11d8d7f6 */
  if ((C.sf!=C.of)) goto L_11d8d7f6;
  /* 11d8d7d7 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11d8d7db cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8d7de jg 0x11d8d7f6 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d8d7f6;
  /* 11d8d7e0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11d8d7e4 movsx ecx, byte ptr [eax + 0x11dad2e4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x11dad2e4))));
  /* 11d8d7eb and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 11d8d7ee mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 11d8d7f4 jmp 0x11d8d800 */
  goto L_11d8d800;
L_11d8d7f6:;
  /* 11d8d7f6 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_11d8d800:;
  /* 11d8d800 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 11d8d806 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11d8d809 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d8d80c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8d80f movsx edx, byte ptr [ecx + eax*8 + 0x11dad304] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x11dad304))));
  /* 11d8d817 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11d8d81a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11d8d81d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8d820 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 11d8d826 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8d82d ja 0x11d8e392 */
  if ((!C.cf&&!C.zf)) goto L_11d8e392;
  /* 11d8d833 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 11d8d839 jmp dword ptr [ecx*4 + 0x11d8e3a4] */
  switch (ECX) {
    case 0: goto L_11d8d840;
    case 1: goto L_11d8d8da;
    case 2: goto L_11d8d91c;
    case 3: goto L_11d8d98b;
    case 4: goto L_11d8d9e3;
    case 5: goto L_11d8d9f2;
    case 6: goto L_11d8da3e;
    case 7: goto L_11d8dad1;
    case 8: goto L_11d8d968;
    case 9: goto L_11d8d973;
    case 10: goto L_11d8d95e;
    case 11: goto L_11d8d953;
    case 12: goto L_11d8d97e;
    case 13: goto L_11d8d986;
    default: x86_unimpl("switch@0x11d8d839 out of table"); return;
  }
L_11d8d840:;
  /* 11d8d840 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11d8d847 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d8d84a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d8d850 mov eax, dword ptr [0x11dafdb8] */
  EAX = (r32((uint32_t)(0x11dafdb8)));
  /* 11d8d855 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d8d857 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11d8d85b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11d8d861 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d8d863 je 0x11d8d8bd */
  if (C.zf) goto L_11d8d8bd;
  /* 11d8d865 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 11d8d86b push edx */
  push32((uint32_t)(EDX));
  /* 11d8d86c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8d86f push eax */
  push32((uint32_t)(EAX));
  /* 11d8d870 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11d8d874 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8d875 call 0x11d8e4b0 */
  push32(0x11d8d87au); f_11d8e4b0();
  /* 11d8d87a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8d87d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8d880 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d8d882 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 11d8d885 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8d888 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8d88b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11d8d88e:;
  /* 11d8d88e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11d8d892 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d8d894 jne 0x11d8d8b7 */
  if (!C.zf) goto L_11d8d8b7;
  /* 11d8d896 push 0x11dad384 */
  push32((uint32_t)(0x11dad384u));
  /* 11d8d89b push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8d89d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 11d8d8a2 push 0x11dad378 */
  push32((uint32_t)(0x11dad378u));
  /* 11d8d8a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d8d8a9 call 0x11d84e40 */
  push32(0x11d8d8aeu); f_11d84e40();
  /* 11d8d8ae add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8d8b1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8d8b4 jne 0x11d8d8b7 */
  if (!C.zf) goto L_11d8d8b7;
  /* 11d8d8b6 int3  */
  x86_unimpl("int3 @ 0x11d8d8b6");
L_11d8d8b7:;
  /* 11d8d8b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8d8b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8d8bb jne 0x11d8d88e */
  if (!C.zf) goto L_11d8d88e;
L_11d8d8bd:;
  /* 11d8d8bd lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 11d8d8c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8d8c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8d8c7 push edx */
  push32((uint32_t)(EDX));
  /* 11d8d8c8 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11d8d8cc push eax */
  push32((uint32_t)(EAX));
  /* 11d8d8cd call 0x11d8e4b0 */
  push32(0x11d8d8d2u); f_11d8e4b0();
  /* 11d8d8d2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8d8d5 jmp 0x11d8e392 */
  goto L_11d8e392;
L_11d8d8da:;
  /* 11d8d8da mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11d8d8e1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8d8e4 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 11d8d8ea mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 11d8d8f0 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 11d8d8f6 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 11d8d8fc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11d8d8ff mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d8d906 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 11d8d910 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11d8d917 jmp 0x11d8e392 */
  goto L_11d8e392;
L_11d8d91c:;
  /* 11d8d91c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11d8d920 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 11d8d926 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 11d8d92c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8d92f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 11d8d935 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8d93c ja 0x11d8d986 */
  if ((!C.cf&&!C.zf)) goto L_11d8d986;
  /* 11d8d93e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 11d8d944 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8d946 mov al, byte ptr [ecx + 0x11d8e3dc] */
  AL = (r8((uint32_t)(ECX + 0x11d8e3dc)));
  /* 11d8d94c jmp dword ptr [eax*4 + 0x11d8e3c4] */
  switch (EAX) {
    case 0: goto L_11d8d968;
    case 1: goto L_11d8d973;
    case 2: goto L_11d8d95e;
    case 3: goto L_11d8d953;
    case 4: goto L_11d8d97e;
    case 5: goto L_11d8d986;
    default: x86_unimpl("switch@0x11d8d94c out of table"); return;
  }
L_11d8d953:;
  /* 11d8d953 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8d956 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11d8d959 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d8d95c jmp 0x11d8d986 */
  goto L_11d8d986;
L_11d8d95e:;
  /* 11d8d95e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8d961 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11d8d963 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d8d966 jmp 0x11d8d986 */
  goto L_11d8d986;
L_11d8d968:;
  /* 11d8d968 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8d96b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11d8d96e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d8d971 jmp 0x11d8d986 */
  goto L_11d8d986;
L_11d8d973:;
  /* 11d8d973 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8d976 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 11d8d979 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d8d97c jmp 0x11d8d986 */
  goto L_11d8d986;
L_11d8d97e:;
  /* 11d8d97e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8d981 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 11d8d983 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d8d986:;
  /* 11d8d986 jmp 0x11d8e392 */
  goto L_11d8e392;
L_11d8d98b:;
  /* 11d8d98b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11d8d98f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8d992 jne 0x11d8d9c7 */
  if (!C.zf) goto L_11d8d9c7;
  /* 11d8d994 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11d8d997 push edx */
  push32((uint32_t)(EDX));
  /* 11d8d998 call 0x11d8e5c0 */
  push32(0x11d8d99du); f_11d8e5c0();
  /* 11d8d99d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8d9a0 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 11d8d9a6 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8d9ad jge 0x11d8d9c5 */
  if ((C.sf==C.of)) goto L_11d8d9c5;
  /* 11d8d9af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8d9b2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11d8d9b4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d8d9b7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 11d8d9bd neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d8d9bf mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_11d8d9c5:;
  /* 11d8d9c5 jmp 0x11d8d9de */
  goto L_11d8d9de;
L_11d8d9c7:;
  /* 11d8d9c7 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 11d8d9cd imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d8d9d0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11d8d9d4 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 11d8d9d8 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_11d8d9de:;
  /* 11d8d9de jmp 0x11d8e392 */
  goto L_11d8e392;
L_11d8d9e3:;
  /* 11d8d9e3 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 11d8d9ed jmp 0x11d8e392 */
  goto L_11d8e392;
L_11d8d9f2:;
  /* 11d8d9f2 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11d8d9f6 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8d9f9 jne 0x11d8da22 */
  if (!C.zf) goto L_11d8da22;
  /* 11d8d9fb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11d8d9fe push eax */
  push32((uint32_t)(EAX));
  /* 11d8d9ff call 0x11d8e5c0 */
  push32(0x11d8da04u); f_11d8e5c0();
  /* 11d8da04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8da07 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 11d8da0d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8da14 jge 0x11d8da20 */
  if ((C.sf==C.of)) goto L_11d8da20;
  /* 11d8da16 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_11d8da20:;
  /* 11d8da20 jmp 0x11d8da39 */
  goto L_11d8da39;
L_11d8da22:;
  /* 11d8da22 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 11d8da28 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d8da2b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11d8da2f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11d8da33 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_11d8da39:;
  /* 11d8da39 jmp 0x11d8e392 */
  goto L_11d8e392;
L_11d8da3e:;
  /* 11d8da3e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11d8da42 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 11d8da48 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 11d8da4e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8da51 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 11d8da57 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8da5e ja 0x11d8dacc */
  if ((!C.cf&&!C.zf)) goto L_11d8dacc;
  /* 11d8da60 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 11d8da66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8da68 mov al, byte ptr [ecx + 0x11d8e401] */
  AL = (r8((uint32_t)(ECX + 0x11d8e401)));
  /* 11d8da6e jmp dword ptr [eax*4 + 0x11d8e3ed] */
  switch (EAX) {
    case 0: goto L_11d8da80;
    case 1: goto L_11d8dab9;
    case 2: goto L_11d8da75;
    case 3: goto L_11d8dac3;
    case 4: goto L_11d8dacc;
    default: x86_unimpl("switch@0x11d8da6e out of table"); return;
  }
L_11d8da75:;
  /* 11d8da75 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8da78 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 11d8da7b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d8da7e jmp 0x11d8dacc */
  goto L_11d8dacc;
L_11d8da80:;
  /* 11d8da80 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8da83 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d8da86 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8da89 jne 0x11d8daab */
  if (!C.zf) goto L_11d8daab;
  /* 11d8da8b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8da8e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11d8da92 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8da95 jne 0x11d8daab */
  if (!C.zf) goto L_11d8daab;
  /* 11d8da97 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8da9a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8da9d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11d8daa0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8daa3 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11d8daa6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d8daa9 jmp 0x11d8dab7 */
  goto L_11d8dab7;
L_11d8daab:;
  /* 11d8daab mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11d8dab2 jmp 0x11d8d840 */
  goto L_11d8d840;
L_11d8dab7:;
  /* 11d8dab7 jmp 0x11d8dacc */
  goto L_11d8dacc;
L_11d8dab9:;
  /* 11d8dab9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8dabc or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11d8dabe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d8dac1 jmp 0x11d8dacc */
  goto L_11d8dacc;
L_11d8dac3:;
  /* 11d8dac3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8dac6 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11d8dac9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11d8dacc:;
  /* 11d8dacc jmp 0x11d8e392 */
  goto L_11d8e392;
L_11d8dad1:;
  /* 11d8dad1 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11d8dad5 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 11d8dadb mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 11d8dae1 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8dae4 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 11d8daea cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8daf1 ja 0x11d8e1b7 */
  if ((!C.cf&&!C.zf)) goto L_11d8e1b7;
  /* 11d8daf7 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 11d8dafd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d8daff mov cl, byte ptr [edx + 0x11d8e46c] */
  CL = (r8((uint32_t)(EDX + 0x11d8e46c)));
  /* 11d8db05 jmp dword ptr [ecx*4 + 0x11d8e430] */
  switch (ECX) {
    case 0: goto L_11d8db0c;
    case 1: goto L_11d8dda0;
    case 2: goto L_11d8dc30;
    case 3: goto L_11d8ded9;
    case 4: goto L_11d8db9b;
    case 5: goto L_11d8db21;
    case 6: goto L_11d8deab;
    case 7: goto L_11d8ddb0;
    case 8: goto L_11d8dd55;
    case 9: goto L_11d8df25;
    case 10: goto L_11d8decf;
    case 11: goto L_11d8dc46;
    case 12: goto L_11d8dec3;
    case 13: goto L_11d8dee5;
    case 14: goto L_11d8e1b7;
    default: x86_unimpl("switch@0x11d8db05 out of table"); return;
  }
L_11d8db0c:;
  /* 11d8db0c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8db0f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 11d8db14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8db16 jne 0x11d8db21 */
  if (!C.zf) goto L_11d8db21;
  /* 11d8db18 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8db1b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11d8db1e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11d8db21:;
  /* 11d8db21 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8db24 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 11d8db2a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d8db2c je 0x11d8db67 */
  if (C.zf) goto L_11d8db67;
  /* 11d8db2e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11d8db31 push eax */
  push32((uint32_t)(EAX));
  /* 11d8db32 call 0x11d8e600 */
  push32(0x11d8db37u); f_11d8e600();
  /* 11d8db37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8db3a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 11d8db3e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 11d8db42 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8db43 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 11d8db49 push edx */
  push32((uint32_t)(EDX));
  /* 11d8db4a call 0x11d8f820 */
  push32(0x11d8db4fu); f_11d8f820();
  /* 11d8db4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8db52 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11d8db55 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8db59 jge 0x11d8db65 */
  if ((C.sf==C.of)) goto L_11d8db65;
  /* 11d8db5b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_11d8db65:;
  /* 11d8db65 jmp 0x11d8db8d */
  goto L_11d8db8d;
L_11d8db67:;
  /* 11d8db67 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11d8db6a push eax */
  push32((uint32_t)(EAX));
  /* 11d8db6b call 0x11d8e5c0 */
  push32(0x11d8db70u); f_11d8e5c0();
  /* 11d8db70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8db73 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 11d8db7a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 11d8db80 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 11d8db86 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_11d8db8d:;
  /* 11d8db8d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 11d8db93 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11d8db96 jmp 0x11d8e1b7 */
  goto L_11d8e1b7;
L_11d8db9b:;
  /* 11d8db9b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11d8db9e push eax */
  push32((uint32_t)(EAX));
  /* 11d8db9f call 0x11d8e5c0 */
  push32(0x11d8dba4u); f_11d8e5c0();
  /* 11d8dba4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8dba7 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 11d8dbad cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8dbb4 je 0x11d8dbc2 */
  if (C.zf) goto L_11d8dbc2;
  /* 11d8dbb6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11d8dbbc cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8dbc0 jne 0x11d8dbdc */
  if (!C.zf) goto L_11d8dbdc;
L_11d8dbc2:;
  /* 11d8dbc2 mov edx, dword ptr [0x11db00d0] */
  EDX = (r32((uint32_t)(0x11db00d0)));
  /* 11d8dbc8 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11d8dbcb mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d8dbce push eax */
  push32((uint32_t)(EAX));
  /* 11d8dbcf call 0x11d89620 */
  push32(0x11d8dbd4u); f_11d89620();
  /* 11d8dbd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8dbd7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11d8dbda jmp 0x11d8dc2b */
  goto L_11d8dc2b;
L_11d8dbdc:;
  /* 11d8dbdc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8dbdf and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 11d8dbe5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d8dbe7 je 0x11d8dc0c */
  if (C.zf) goto L_11d8dc0c;
  /* 11d8dbe9 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11d8dbef mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11d8dbf2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11d8dbf5 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11d8dbfb movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 11d8dbfe shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11d8dc00 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11d8dc03 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 11d8dc0a jmp 0x11d8dc2b */
  goto L_11d8dc2b;
L_11d8dc0c:;
  /* 11d8dc0c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11d8dc13 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11d8dc19 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d8dc1c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11d8dc1f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11d8dc25 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 11d8dc28 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11d8dc2b:;
  /* 11d8dc2b jmp 0x11d8e1b7 */
  goto L_11d8e1b7;
L_11d8dc30:;
  /* 11d8dc30 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8dc33 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 11d8dc39 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d8dc3b jne 0x11d8dc46 */
  if (!C.zf) goto L_11d8dc46;
  /* 11d8dc3d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8dc40 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11d8dc43 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11d8dc46:;
  /* 11d8dc46 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8dc4d jne 0x11d8dc5b */
  if (!C.zf) goto L_11d8dc5b;
  /* 11d8dc4f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 11d8dc59 jmp 0x11d8dc67 */
  goto L_11d8dc67;
L_11d8dc5b:;
  /* 11d8dc5b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 11d8dc61 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_11d8dc67:;
  /* 11d8dc67 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 11d8dc6d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 11d8dc73 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11d8dc76 push edx */
  push32((uint32_t)(EDX));
  /* 11d8dc77 call 0x11d8e5c0 */
  push32(0x11d8dc7cu); f_11d8e5c0();
  /* 11d8dc7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8dc7f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11d8dc82 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8dc85 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 11d8dc8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8dc8c je 0x11d8dcf6 */
  if (C.zf) goto L_11d8dcf6;
  /* 11d8dc8e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8dc92 jne 0x11d8dc9d */
  if (!C.zf) goto L_11d8dc9d;
  /* 11d8dc94 mov ecx, dword ptr [0x11db00d4] */
  ECX = (r32((uint32_t)(0x11db00d4)));
  /* 11d8dc9a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11d8dc9d:;
  /* 11d8dc9d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 11d8dca4 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d8dca7 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_11d8dcad:;
  /* 11d8dcad mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 11d8dcb3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 11d8dcb9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8dcbc mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 11d8dcc2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8dcc4 je 0x11d8dce6 */
  if (C.zf) goto L_11d8dce6;
  /* 11d8dcc6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 11d8dccc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8dcce mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11d8dcd1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8dcd3 je 0x11d8dce6 */
  if (C.zf) goto L_11d8dce6;
  /* 11d8dcd5 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 11d8dcdb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8dcde mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 11d8dce4 jmp 0x11d8dcad */
  goto L_11d8dcad;
L_11d8dce6:;
  /* 11d8dce6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 11d8dcec sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8dcef sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11d8dcf1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11d8dcf4 jmp 0x11d8dd50 */
  goto L_11d8dd50;
L_11d8dcf6:;
  /* 11d8dcf6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8dcfa jne 0x11d8dd04 */
  if (!C.zf) goto L_11d8dd04;
  /* 11d8dcfc mov eax, dword ptr [0x11db00d0] */
  EAX = (r32((uint32_t)(0x11db00d0)));
  /* 11d8dd01 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_11d8dd04:;
  /* 11d8dd04 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d8dd07 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_11d8dd0d:;
  /* 11d8dd0d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 11d8dd13 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 11d8dd19 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8dd1c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 11d8dd22 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d8dd24 je 0x11d8dd44 */
  if (C.zf) goto L_11d8dd44;
  /* 11d8dd26 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 11d8dd2c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11d8dd2f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d8dd31 je 0x11d8dd44 */
  if (C.zf) goto L_11d8dd44;
  /* 11d8dd33 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 11d8dd39 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8dd3c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 11d8dd42 jmp 0x11d8dd0d */
  goto L_11d8dd0d;
L_11d8dd44:;
  /* 11d8dd44 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 11d8dd4a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8dd4d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_11d8dd50:;
  /* 11d8dd50 jmp 0x11d8e1b7 */
  goto L_11d8e1b7;
L_11d8dd55:;
  /* 11d8dd55 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11d8dd58 push edx */
  push32((uint32_t)(EDX));
  /* 11d8dd59 call 0x11d8e5c0 */
  push32(0x11d8dd5eu); f_11d8e5c0();
  /* 11d8dd5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8dd61 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 11d8dd67 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8dd6a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11d8dd6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8dd6f je 0x11d8dd83 */
  if (C.zf) goto L_11d8dd83;
  /* 11d8dd71 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 11d8dd77 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 11d8dd7e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 11d8dd81 jmp 0x11d8dd91 */
  goto L_11d8dd91;
L_11d8dd83:;
  /* 11d8dd83 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 11d8dd89 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 11d8dd8f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_11d8dd91:;
  /* 11d8dd91 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 11d8dd9b jmp 0x11d8e1b7 */
  goto L_11d8e1b7;
L_11d8dda0:;
  /* 11d8dda0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11d8dda7 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 11d8ddaa add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 11d8ddad mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_11d8ddb0:;
  /* 11d8ddb0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8ddb3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 11d8ddb5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d8ddb8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 11d8ddbe mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11d8ddc1 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8ddc8 jge 0x11d8ddd6 */
  if ((C.sf==C.of)) goto L_11d8ddd6;
  /* 11d8ddca mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 11d8ddd4 jmp 0x11d8ddf2 */
  goto L_11d8ddf2;
L_11d8ddd6:;
  /* 11d8ddd6 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8dddd jne 0x11d8ddf2 */
  if (!C.zf) goto L_11d8ddf2;
  /* 11d8dddf movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11d8dde3 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8dde6 jne 0x11d8ddf2 */
  if (!C.zf) goto L_11d8ddf2;
  /* 11d8dde8 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_11d8ddf2:;
  /* 11d8ddf2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d8ddf5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8ddf8 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11d8ddfb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d8ddfe sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8de01 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d8de03 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d8de06 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 11d8de0c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 11d8de12 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8de15 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8de16 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 11d8de1c push edx */
  push32((uint32_t)(EDX));
  /* 11d8de1d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11d8de21 push eax */
  push32((uint32_t)(EAX));
  /* 11d8de22 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d8de25 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8de26 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 11d8de2c push edx */
  push32((uint32_t)(EDX));
  /* 11d8de2d call dword ptr [0x11db04c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db04c0))), 0x11d8de33u);
  /* 11d8de33 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8de36 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8de39 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 11d8de3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8de40 je 0x11d8de58 */
  if (C.zf) goto L_11d8de58;
  /* 11d8de42 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8de49 jne 0x11d8de58 */
  if (!C.zf) goto L_11d8de58;
  /* 11d8de4b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d8de4e push ecx */
  push32((uint32_t)(ECX));
  /* 11d8de4f call dword ptr [0x11db04cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db04cc))), 0x11d8de55u);
  /* 11d8de55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d8de58:;
  /* 11d8de58 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11d8de5c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8de5f jne 0x11d8de7a */
  if (!C.zf) goto L_11d8de7a;
  /* 11d8de61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8de64 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 11d8de69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8de6b jne 0x11d8de7a */
  if (!C.zf) goto L_11d8de7a;
  /* 11d8de6d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d8de70 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8de71 call dword ptr [0x11db04c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db04c4))), 0x11d8de77u);
  /* 11d8de77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d8de7a:;
  /* 11d8de7a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d8de7d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11d8de80 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8de83 jne 0x11d8de97 */
  if (!C.zf) goto L_11d8de97;
  /* 11d8de85 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8de88 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11d8de8b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d8de8e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d8de91 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8de94 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11d8de97:;
  /* 11d8de97 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d8de9a push eax */
  push32((uint32_t)(EAX));
  /* 11d8de9b call 0x11d89620 */
  push32(0x11d8dea0u); f_11d89620();
  /* 11d8dea0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8dea3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11d8dea6 jmp 0x11d8e1b7 */
  goto L_11d8e1b7;
L_11d8deab:;
  /* 11d8deab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8deae or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 11d8deb1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d8deb4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 11d8debe jmp 0x11d8df45 */
  goto L_11d8df45;
L_11d8dec3:;
  /* 11d8dec3 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 11d8decd jmp 0x11d8df45 */
  goto L_11d8df45;
L_11d8decf:;
  /* 11d8decf mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_11d8ded9:;
  /* 11d8ded9 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 11d8dee3 jmp 0x11d8deef */
  goto L_11d8deef;
L_11d8dee5:;
  /* 11d8dee5 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_11d8deef:;
  /* 11d8deef mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 11d8def9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8defc and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 11d8df02 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d8df04 je 0x11d8df23 */
  if (C.zf) goto L_11d8df23;
  /* 11d8df06 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 11d8df0d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 11d8df13 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8df16 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 11d8df1c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_11d8df23:;
  /* 11d8df23 jmp 0x11d8df45 */
  goto L_11d8df45;
L_11d8df25:;
  /* 11d8df25 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 11d8df2f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8df32 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 11d8df38 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d8df3a je 0x11d8df45 */
  if (C.zf) goto L_11d8df45;
  /* 11d8df3c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8df3f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11d8df42 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11d8df45:;
  /* 11d8df45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8df48 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11d8df4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8df4f je 0x11d8df6e */
  if (C.zf) goto L_11d8df6e;
  /* 11d8df51 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11d8df54 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8df55 call 0x11d8e5e0 */
  push32(0x11d8df5au); f_11d8e5e0();
  /* 11d8df5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8df5d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11d8df63 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 11d8df69 jmp 0x11d8dfff */
  goto L_11d8dfff;
L_11d8df6e:;
  /* 11d8df6e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8df71 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11d8df74 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d8df76 je 0x11d8dfc0 */
  if (C.zf) goto L_11d8dfc0;
  /* 11d8df78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8df7b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11d8df7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8df80 je 0x11d8dfa0 */
  if (C.zf) goto L_11d8dfa0;
  /* 11d8df82 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11d8df85 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8df86 call 0x11d8e5c0 */
  push32(0x11d8df8bu); f_11d8e5c0();
  /* 11d8df8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8df8e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 11d8df91 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11d8df92 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11d8df98 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 11d8df9e jmp 0x11d8dfbe */
  goto L_11d8dfbe;
L_11d8dfa0:;
  /* 11d8dfa0 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11d8dfa3 push edx */
  push32((uint32_t)(EDX));
  /* 11d8dfa4 call 0x11d8e5c0 */
  push32(0x11d8dfa9u); f_11d8e5c0();
  /* 11d8dfa9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8dfac and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d8dfb1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11d8dfb2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11d8dfb8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_11d8dfbe:;
  /* 11d8dfbe jmp 0x11d8dfff */
  goto L_11d8dfff;
L_11d8dfc0:;
  /* 11d8dfc0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8dfc3 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11d8dfc6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8dfc8 je 0x11d8dfe5 */
  if (C.zf) goto L_11d8dfe5;
  /* 11d8dfca lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11d8dfcd push ecx */
  push32((uint32_t)(ECX));
  /* 11d8dfce call 0x11d8e5c0 */
  push32(0x11d8dfd3u); f_11d8e5c0();
  /* 11d8dfd3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8dfd6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11d8dfd7 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11d8dfdd mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 11d8dfe3 jmp 0x11d8dfff */
  goto L_11d8dfff;
L_11d8dfe5:;
  /* 11d8dfe5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11d8dfe8 push edx */
  push32((uint32_t)(EDX));
  /* 11d8dfe9 call 0x11d8e5c0 */
  push32(0x11d8dfeeu); f_11d8e5c0();
  /* 11d8dfee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8dff1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d8dff3 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11d8dff9 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_11d8dfff:;
  /* 11d8dfff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8e002 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 11d8e005 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d8e007 je 0x11d8e047 */
  if (C.zf) goto L_11d8e047;
  /* 11d8e009 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8e010 jg 0x11d8e047 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d8e047;
  /* 11d8e012 jl 0x11d8e01d */
  if ((C.sf!=C.of)) goto L_11d8e01d;
  /* 11d8e014 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8e01b jae 0x11d8e047 */
  if (!C.cf) goto L_11d8e047;
L_11d8e01d:;
  /* 11d8e01d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 11d8e023 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d8e025 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 11d8e02b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8e02e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d8e030 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11d8e036 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 11d8e03c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8e03f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11d8e042 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d8e045 jmp 0x11d8e05f */
  goto L_11d8e05f;
L_11d8e047:;
  /* 11d8e047 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 11d8e04d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11d8e053 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 11d8e059 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_11d8e05f:;
  /* 11d8e05f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8e062 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11d8e068 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d8e06a jne 0x11d8e087 */
  if (!C.zf) goto L_11d8e087;
  /* 11d8e06c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11d8e072 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 11d8e078 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 11d8e07b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11d8e081 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_11d8e087:;
  /* 11d8e087 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8e08e jge 0x11d8e09c */
  if ((C.sf==C.of)) goto L_11d8e09c;
  /* 11d8e090 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 11d8e09a jmp 0x11d8e0a5 */
  goto L_11d8e0a5;
L_11d8e09c:;
  /* 11d8e09c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8e09f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 11d8e0a2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11d8e0a5:;
  /* 11d8e0a5 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11d8e0ab or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 11d8e0b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8e0b3 jne 0x11d8e0bc */
  if (!C.zf) goto L_11d8e0bc;
  /* 11d8e0b5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11d8e0bc:;
  /* 11d8e0bc lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 11d8e0bf mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11d8e0c2:;
  /* 11d8e0c2 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 11d8e0c8 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 11d8e0ce sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8e0d1 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 11d8e0d7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d8e0d9 jg 0x11d8e0ef */
  if ((!C.zf&&C.sf==C.of)) goto L_11d8e0ef;
  /* 11d8e0db mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11d8e0e1 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 11d8e0e7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d8e0e9 je 0x11d8e170 */
  if (C.zf) goto L_11d8e170;
L_11d8e0ef:;
  /* 11d8e0ef mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 11d8e0f5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11d8e0f6 push edx */
  push32((uint32_t)(EDX));
  /* 11d8e0f7 push eax */
  push32((uint32_t)(EAX));
  /* 11d8e0f8 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 11d8e0fe push edx */
  push32((uint32_t)(EDX));
  /* 11d8e0ff mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11d8e105 push eax */
  push32((uint32_t)(EAX));
  /* 11d8e106 call 0x11d8d480 */
  push32(0x11d8e10bu); f_11d8d480();
  /* 11d8e10b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8e10e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 11d8e114 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 11d8e11a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11d8e11b push edx */
  push32((uint32_t)(EDX));
  /* 11d8e11c push eax */
  push32((uint32_t)(EAX));
  /* 11d8e11d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 11d8e123 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8e124 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11d8e12a push edx */
  push32((uint32_t)(EDX));
  /* 11d8e12b call 0x11d8d410 */
  push32(0x11d8e130u); f_11d8d410();
  /* 11d8e130 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11d8e136 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 11d8e13c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8e143 jle 0x11d8e157 */
  if ((C.zf||C.sf!=C.of)) goto L_11d8e157;
  /* 11d8e145 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 11d8e14b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8e151 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_11d8e157:;
  /* 11d8e157 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d8e15a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 11d8e160 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11d8e162 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d8e165 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8e168 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11d8e16b jmp 0x11d8e0c2 */
  goto L_11d8e0c2;
L_11d8e170:;
  /* 11d8e170 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 11d8e173 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8e176 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11d8e179 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d8e17c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8e17f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11d8e182 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8e185 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 11d8e18a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8e18c je 0x11d8e1b7 */
  if (C.zf) goto L_11d8e1b7;
  /* 11d8e18e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d8e191 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11d8e194 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8e197 jne 0x11d8e19f */
  if (!C.zf) goto L_11d8e19f;
  /* 11d8e199 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8e19d jne 0x11d8e1b7 */
  if (!C.zf) goto L_11d8e1b7;
L_11d8e19f:;
  /* 11d8e19f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d8e1a2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8e1a5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11d8e1a8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d8e1ab mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 11d8e1ae mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8e1b1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8e1b4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_11d8e1b7:;
  /* 11d8e1b7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8e1be jne 0x11d8e392 */
  if (!C.zf) goto L_11d8e392;
  /* 11d8e1c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8e1c7 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11d8e1ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8e1cc je 0x11d8e21d */
  if (C.zf) goto L_11d8e21d;
  /* 11d8e1ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8e1d1 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 11d8e1d7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d8e1d9 je 0x11d8e1eb */
  if (C.zf) goto L_11d8e1eb;
  /* 11d8e1db mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 11d8e1e2 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11d8e1e9 jmp 0x11d8e21d */
  goto L_11d8e21d;
L_11d8e1eb:;
  /* 11d8e1eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8e1ee and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11d8e1f1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d8e1f3 je 0x11d8e205 */
  if (C.zf) goto L_11d8e205;
  /* 11d8e1f5 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 11d8e1fc mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11d8e203 jmp 0x11d8e21d */
  goto L_11d8e21d;
L_11d8e205:;
  /* 11d8e205 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8e208 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 11d8e20b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8e20d je 0x11d8e21d */
  if (C.zf) goto L_11d8e21d;
  /* 11d8e20f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 11d8e216 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_11d8e21d:;
  /* 11d8e21d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 11d8e223 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8e226 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8e229 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 11d8e22f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8e232 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 11d8e235 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d8e237 jne 0x11d8e255 */
  if (!C.zf) goto L_11d8e255;
  /* 11d8e239 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11d8e23f push eax */
  push32((uint32_t)(EAX));
  /* 11d8e240 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8e243 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8e244 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 11d8e24a push edx */
  push32((uint32_t)(EDX));
  /* 11d8e24b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11d8e24d call 0x11d8e530 */
  push32(0x11d8e252u); f_11d8e530();
  /* 11d8e252 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d8e255:;
  /* 11d8e255 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11d8e25b push eax */
  push32((uint32_t)(EAX));
  /* 11d8e25c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8e25f push ecx */
  push32((uint32_t)(ECX));
  /* 11d8e260 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8e263 push edx */
  push32((uint32_t)(EDX));
  /* 11d8e264 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 11d8e26a push eax */
  push32((uint32_t)(EAX));
  /* 11d8e26b call 0x11d8e570 */
  push32(0x11d8e270u); f_11d8e570();
  /* 11d8e270 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8e273 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8e276 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11d8e279 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d8e27b je 0x11d8e2a3 */
  if (C.zf) goto L_11d8e2a3;
  /* 11d8e27d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8e280 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11d8e283 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d8e285 jne 0x11d8e2a3 */
  if (!C.zf) goto L_11d8e2a3;
  /* 11d8e287 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11d8e28d push eax */
  push32((uint32_t)(EAX));
  /* 11d8e28e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8e291 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8e292 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 11d8e298 push edx */
  push32((uint32_t)(EDX));
  /* 11d8e299 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11d8e29b call 0x11d8e530 */
  push32(0x11d8e2a0u); f_11d8e530();
  /* 11d8e2a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d8e2a3:;
  /* 11d8e2a3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8e2a7 je 0x11d8e351 */
  if (C.zf) goto L_11d8e351;
  /* 11d8e2ad cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8e2b1 jle 0x11d8e351 */
  if ((C.zf||C.sf!=C.of)) goto L_11d8e351;
  /* 11d8e2b7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d8e2ba mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 11d8e2c0 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8e2c3 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_11d8e2c9:;
  /* 11d8e2c9 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 11d8e2cf mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 11d8e2d5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8e2d8 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 11d8e2de test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d8e2e0 je 0x11d8e34f */
  if (C.zf) goto L_11d8e34f;
  /* 11d8e2e2 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 11d8e2e8 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11d8e2eb mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 11d8e2f2 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 11d8e2f9 push eax */
  push32((uint32_t)(EAX));
  /* 11d8e2fa lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 11d8e300 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8e301 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 11d8e307 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8e30a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 11d8e310 call 0x11d8f820 */
  push32(0x11d8e315u); f_11d8f820();
  /* 11d8e315 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8e318 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 11d8e31e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8e325 jg 0x11d8e329 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d8e329;
  /* 11d8e327 jmp 0x11d8e34f */
  goto L_11d8e34f;
L_11d8e329:;
  /* 11d8e329 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11d8e32f push eax */
  push32((uint32_t)(EAX));
  /* 11d8e330 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8e333 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8e334 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 11d8e33a push edx */
  push32((uint32_t)(EDX));
  /* 11d8e33b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 11d8e341 push eax */
  push32((uint32_t)(EAX));
  /* 11d8e342 call 0x11d8e570 */
  push32(0x11d8e347u); f_11d8e570();
  /* 11d8e347 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8e34a jmp 0x11d8e2c9 */
  goto L_11d8e2c9;
L_11d8e34f:;
  /* 11d8e34f jmp 0x11d8e36c */
  goto L_11d8e36c;
L_11d8e351:;
  /* 11d8e351 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 11d8e357 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8e358 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8e35b push edx */
  push32((uint32_t)(EDX));
  /* 11d8e35c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8e35f push eax */
  push32((uint32_t)(EAX));
  /* 11d8e360 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d8e363 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8e364 call 0x11d8e570 */
  push32(0x11d8e369u); f_11d8e570();
  /* 11d8e369 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d8e36c:;
  /* 11d8e36c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8e36f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11d8e372 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d8e374 je 0x11d8e392 */
  if (C.zf) goto L_11d8e392;
  /* 11d8e376 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11d8e37c push eax */
  push32((uint32_t)(EAX));
  /* 11d8e37d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8e380 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8e381 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 11d8e387 push edx */
  push32((uint32_t)(EDX));
  /* 11d8e388 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11d8e38a call 0x11d8e530 */
  push32(0x11d8e38fu); f_11d8e530();
  /* 11d8e38f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d8e392:;
  /* 11d8e392 jmp 0x11d8d7a4 */
  goto L_11d8d7a4;
L_11d8e397:;
  /* 11d8e397 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 11d8e39d pop edi */
  EDI = (pop32());
  /* 11d8e39e pop esi */
  ESI = (pop32());
  /* 11d8e39f pop ebx */
  EBX = (pop32());
  /* 11d8e3a0 mov esp, ebp */
  ESP = (EBP);
  /* 11d8e3a2 pop ebp */
  EBP = (pop32());
  /* 11d8e3a3 ret  */
  ESPCHK(0x11d8d780u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e4b0 @ 0x11d8e4b0 (119 bytes, 44 insns) */
void f_11d8e4b0(void) {
  FTRACE(0x11d8e4b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8e4b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8e4b1 mov ebp, esp */
  EBP = (ESP);
  /* 11d8e4b3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8e4b4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8e4b7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d8e4ba sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8e4bd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8e4c0 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11d8e4c3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8e4c6 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8e4ca jl 0x11d8e4f2 */
  if ((C.sf!=C.of)) goto L_11d8e4f2;
  /* 11d8e4cc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8e4cf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d8e4d1 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11d8e4d4 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11d8e4d6 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 11d8e4da and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d8e4e0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d8e4e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8e4e6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d8e4e8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8e4eb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8e4ee mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11d8e4f0 jmp 0x11d8e505 */
  goto L_11d8e505;
L_11d8e4f2:;
  /* 11d8e4f2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8e4f5 push edx */
  push32((uint32_t)(EDX));
  /* 11d8e4f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8e4f9 push eax */
  push32((uint32_t)(EAX));
  /* 11d8e4fa call 0x11d8d500 */
  push32(0x11d8e4ffu); f_11d8d500();
  /* 11d8e4ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8e502 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d8e505:;
  /* 11d8e505 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8e509 jne 0x11d8e516 */
  if (!C.zf) goto L_11d8e516;
  /* 11d8e50b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d8e50e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11d8e514 jmp 0x11d8e523 */
  goto L_11d8e523;
L_11d8e516:;
  /* 11d8e516 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d8e519 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d8e51b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8e51e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d8e521 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11d8e523:;
  /* 11d8e523 mov esp, ebp */
  ESP = (EBP);
  /* 11d8e525 pop ebp */
  EBP = (pop32());
  /* 11d8e526 ret  */
  ESPCHK(0x11d8e4b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e530 @ 0x11d8e530 (53 bytes, 23 insns) */
void f_11d8e530(void) {
  FTRACE(0x11d8e530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8e530 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8e531 mov ebp, esp */
  EBP = (ESP);
L_11d8e533:;
  /* 11d8e533 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8e536 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8e539 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8e53c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11d8e53f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8e541 jle 0x11d8e563 */
  if ((C.zf||C.sf!=C.of)) goto L_11d8e563;
  /* 11d8e543 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d8e546 push edx */
  push32((uint32_t)(EDX));
  /* 11d8e547 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d8e54a push eax */
  push32((uint32_t)(EAX));
  /* 11d8e54b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8e54e push ecx */
  push32((uint32_t)(ECX));
  /* 11d8e54f call 0x11d8e4b0 */
  push32(0x11d8e554u); f_11d8e4b0();
  /* 11d8e554 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8e557 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d8e55a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8e55d jne 0x11d8e561 */
  if (!C.zf) goto L_11d8e561;
  /* 11d8e55f jmp 0x11d8e563 */
  goto L_11d8e563;
L_11d8e561:;
  /* 11d8e561 jmp 0x11d8e533 */
  goto L_11d8e533;
L_11d8e563:;
  /* 11d8e563 pop ebp */
  EBP = (pop32());
  /* 11d8e564 ret  */
  ESPCHK(0x11d8e530u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e570 @ 0x11d8e570 (74 bytes, 31 insns) */
void f_11d8e570(void) {
  FTRACE(0x11d8e570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8e570 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8e571 mov ebp, esp */
  EBP = (ESP);
  /* 11d8e573 push ecx */
  push32((uint32_t)(ECX));
L_11d8e574:;
  /* 11d8e574 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8e577 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8e57a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8e57d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11d8e580 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8e582 jle 0x11d8e5b6 */
  if ((C.zf||C.sf!=C.of)) goto L_11d8e5b6;
  /* 11d8e584 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d8e587 push edx */
  push32((uint32_t)(EDX));
  /* 11d8e588 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d8e58b push eax */
  push32((uint32_t)(EAX));
  /* 11d8e58c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8e58f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11d8e592 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d8e595 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8e598 push eax */
  push32((uint32_t)(EAX));
  /* 11d8e599 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8e59c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8e59f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11d8e5a2 call 0x11d8e4b0 */
  push32(0x11d8e5a7u); f_11d8e4b0();
  /* 11d8e5a7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8e5aa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d8e5ad cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8e5b0 jne 0x11d8e5b4 */
  if (!C.zf) goto L_11d8e5b4;
  /* 11d8e5b2 jmp 0x11d8e5b6 */
  goto L_11d8e5b6;
L_11d8e5b4:;
  /* 11d8e5b4 jmp 0x11d8e574 */
  goto L_11d8e574;
L_11d8e5b6:;
  /* 11d8e5b6 mov esp, ebp */
  ESP = (EBP);
  /* 11d8e5b8 pop ebp */
  EBP = (pop32());
  /* 11d8e5b9 ret  */
  ESPCHK(0x11d8e570u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e5c0 @ 0x11d8e5c0 (26 bytes, 12 insns) */
void f_11d8e5c0(void) {
  FTRACE(0x11d8e5c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8e5c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8e5c1 mov ebp, esp */
  EBP = (ESP);
  /* 11d8e5c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8e5c6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d8e5c8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8e5cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8e5ce mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11d8e5d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8e5d3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d8e5d5 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11d8e5d8 pop ebp */
  EBP = (pop32());
  /* 11d8e5d9 ret  */
  ESPCHK(0x11d8e5c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e5e0 @ 0x11d8e5e0 (31 bytes, 14 insns) */
void f_11d8e5e0(void) {
  FTRACE(0x11d8e5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8e5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8e5e1 mov ebp, esp */
  EBP = (ESP);
  /* 11d8e5e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8e5e6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d8e5e8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8e5eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8e5ee mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11d8e5f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8e5f3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d8e5f5 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8e5f8 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11d8e5fa mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d8e5fd pop ebp */
  EBP = (pop32());
  /* 11d8e5fe ret  */
  ESPCHK(0x11d8e5e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e600 @ 0x11d8e600 (27 bytes, 12 insns) */
void f_11d8e600(void) {
  FTRACE(0x11d8e600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8e600 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8e601 mov ebp, esp */
  EBP = (ESP);
  /* 11d8e603 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8e606 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d8e608 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8e60b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8e60e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11d8e610 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8e613 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d8e615 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 11d8e619 pop ebp */
  EBP = (pop32());
  /* 11d8e61a ret  */
  ESPCHK(0x11d8e600u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x11d8e620 (145 bytes, 42 insns) */
void f_11d8e620(void) {
  FTRACE(0x11d8e620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8e620 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8e621 mov ebp, esp */
  EBP = (ESP);
  /* 11d8e623 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8e624 call 0x11d8e6d0 */
  push32(0x11d8e629u); f_11d8e6d0();
  /* 11d8e629 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8e62c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11d8e62e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d8e635 jmp 0x11d8e640 */
  goto L_11d8e640;
L_11d8e637:;
  /* 11d8e637 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8e63a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8e63d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11d8e640:;
  /* 11d8e640 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8e644 jae 0x11d8e66a */
  if (!C.cf) goto L_11d8e66a;
  /* 11d8e646 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8e649 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8e64c cmp ecx, dword ptr [eax*8 + 0x11db00d8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x11db00d8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8e653 jne 0x11d8e668 */
  if (!C.zf) goto L_11d8e668;
  /* 11d8e655 call 0x11d8e6c0 */
  push32(0x11d8e65au); f_11d8e6c0();
  /* 11d8e65a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8e65d mov ecx, dword ptr [edx*8 + 0x11db00dc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x11db00dc)));
  /* 11d8e664 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11d8e666 jmp 0x11d8e6ad */
  goto L_11d8e6ad;
L_11d8e668:;
  /* 11d8e668 jmp 0x11d8e637 */
  goto L_11d8e637;
L_11d8e66a:;
  /* 11d8e66a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8e66e jb 0x11d8e683 */
  if (C.cf) goto L_11d8e683;
  /* 11d8e670 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8e674 ja 0x11d8e683 */
  if ((!C.cf&&!C.zf)) goto L_11d8e683;
  /* 11d8e676 call 0x11d8e6c0 */
  push32(0x11d8e67bu); f_11d8e6c0();
  /* 11d8e67b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 11d8e681 jmp 0x11d8e6ad */
  goto L_11d8e6ad;
L_11d8e683:;
  /* 11d8e683 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8e68a jb 0x11d8e6a2 */
  if (C.cf) goto L_11d8e6a2;
  /* 11d8e68c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8e693 ja 0x11d8e6a2 */
  if ((!C.cf&&!C.zf)) goto L_11d8e6a2;
  /* 11d8e695 call 0x11d8e6c0 */
  push32(0x11d8e69au); f_11d8e6c0();
  /* 11d8e69a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 11d8e6a0 jmp 0x11d8e6ad */
  goto L_11d8e6ad;
L_11d8e6a2:;
  /* 11d8e6a2 call 0x11d8e6c0 */
  push32(0x11d8e6a7u); f_11d8e6c0();
  /* 11d8e6a7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_11d8e6ad:;
  /* 11d8e6ad mov esp, ebp */
  ESP = (EBP);
  /* 11d8e6af pop ebp */
  EBP = (pop32());
  /* 11d8e6b0 ret  */
  ESPCHK(0x11d8e620u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e6c0 @ 0x11d8e6c0 (13 bytes, 6 insns) */
void f_11d8e6c0(void) {
  FTRACE(0x11d8e6c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8e6c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8e6c1 mov ebp, esp */
  EBP = (ESP);
  /* 11d8e6c3 call 0x11d84a70 */
  push32(0x11d8e6c8u); f_11d84a70();
  /* 11d8e6c8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8e6cb pop ebp */
  EBP = (pop32());
  /* 11d8e6cc ret  */
  ESPCHK(0x11d8e6c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e6d0 @ 0x11d8e6d0 (13 bytes, 6 insns) */
void f_11d8e6d0(void) {
  FTRACE(0x11d8e6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8e6d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8e6d1 mov ebp, esp */
  EBP = (ESP);
  /* 11d8e6d3 call 0x11d84a70 */
  push32(0x11d8e6d8u); f_11d84a70();
  /* 11d8e6d8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8e6db pop ebp */
  EBP = (pop32());
  /* 11d8e6dc ret  */
  ESPCHK(0x11d8e6d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e6e0 @ 0x11d8e6e0 (664 bytes, 264 insns) [15 switch table(s)] */
void f_11d8e6e0(void) {
  FTRACE(0x11d8e6e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8e6e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8e6e1 mov ebp, esp */
  EBP = (ESP);
  /* 11d8e6e3 push edi */
  push32((uint32_t)(EDI));
  /* 11d8e6e4 push esi */
  push32((uint32_t)(ESI));
  /* 11d8e6e5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8e6e8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d8e6eb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8e6ee mov eax, ecx */
  EAX = (ECX);
  /* 11d8e6f0 mov edx, ecx */
  EDX = (ECX);
  /* 11d8e6f2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8e6f4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8e6f6 jbe 0x11d8e700 */
  if ((C.cf||C.zf)) goto L_11d8e700;
  /* 11d8e6f8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8e6fa jb 0x11d8e878 */
  if (C.cf) goto L_11d8e878;
L_11d8e700:;
  /* 11d8e700 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11d8e706 jne 0x11d8e71c */
  if (!C.zf) goto L_11d8e71c;
  /* 11d8e708 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d8e70b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11d8e70e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8e711 jb 0x11d8e73c */
  if (C.cf) goto L_11d8e73c;
  /* 11d8e713 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11d8e715 jmp dword ptr [edx*4 + 0x11d8e828] */
  switch (EDX) {
    case 0: goto L_11d8e838;
    case 1: goto L_11d8e840;
    case 2: goto L_11d8e84c;
    case 3: goto L_11d8e860;
    default: x86_unimpl("switch@0x11d8e715 out of table"); return;
  }
L_11d8e71c:;
  /* 11d8e71c mov eax, edi */
  EAX = (EDI);
  /* 11d8e71e mov edx, 3 */
  EDX = (0x3u);
  /* 11d8e723 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8e726 jb 0x11d8e734 */
  if (C.cf) goto L_11d8e734;
  /* 11d8e728 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11d8e72b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8e72d jmp dword ptr [eax*4 + 0x11d8e740] */
  switch (EAX) {
    case 1: goto L_11d8e750;
    case 2: goto L_11d8e77c;
    case 3: goto L_11d8e7a0;
    default: x86_unimpl("switch@0x11d8e72d out of table"); return;
  }
L_11d8e734:;
  /* 11d8e734 jmp dword ptr [ecx*4 + 0x11d8e838] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11d8e838)))); return;
  /* 11d8e73b nop  */
  /* nop */
L_11d8e73c:;
  /* 11d8e73c jmp dword ptr [ecx*4 + 0x11d8e7bc] */
  switch (ECX) {
    case 0: goto L_11d8e81f;
    case 1: goto L_11d8e80c;
    case 2: goto L_11d8e804;
    case 3: goto L_11d8e7fc;
    case 4: goto L_11d8e7f4;
    case 5: goto L_11d8e7ec;
    case 6: goto L_11d8e7e4;
    case 7: goto L_11d8e7dc;
    default: x86_unimpl("switch@0x11d8e73c out of table"); return;
  }
  /* 11d8e743 nop  */
  /* nop */
L_11d8e750:;
  /* 11d8e750 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11d8e752 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d8e754 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11d8e756 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11d8e759 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11d8e75c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11d8e75f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d8e762 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11d8e765 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8e768 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8e76b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8e76e jb 0x11d8e73c */
  if (C.cf) goto L_11d8e73c;
  /* 11d8e770 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11d8e772 jmp dword ptr [edx*4 + 0x11d8e828] */
  switch (EDX) {
    case 0: goto L_11d8e838;
    case 1: goto L_11d8e840;
    case 2: goto L_11d8e84c;
    case 3: goto L_11d8e860;
    default: x86_unimpl("switch@0x11d8e772 out of table"); return;
  }
  /* 11d8e779 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11d8e77c:;
  /* 11d8e77c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11d8e77e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d8e780 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11d8e782 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11d8e785 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d8e788 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11d8e78b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8e78e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8e791 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8e794 jb 0x11d8e73c */
  if (C.cf) goto L_11d8e73c;
  /* 11d8e796 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11d8e798 jmp dword ptr [edx*4 + 0x11d8e828] */
  switch (EDX) {
    case 0: goto L_11d8e838;
    case 1: goto L_11d8e840;
    case 2: goto L_11d8e84c;
    case 3: goto L_11d8e860;
    default: x86_unimpl("switch@0x11d8e798 out of table"); return;
  }
  /* 11d8e79f nop  */
  /* nop */
L_11d8e7a0:;
  /* 11d8e7a0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11d8e7a2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d8e7a4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11d8e7a6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11d8e7a7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d8e7aa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11d8e7ab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8e7ae jb 0x11d8e73c */
  if (C.cf) goto L_11d8e73c;
  /* 11d8e7b0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11d8e7b2 jmp dword ptr [edx*4 + 0x11d8e828] */
  switch (EDX) {
    case 0: goto L_11d8e838;
    case 1: goto L_11d8e840;
    case 2: goto L_11d8e84c;
    case 3: goto L_11d8e860;
    default: x86_unimpl("switch@0x11d8e7b2 out of table"); return;
  }
  /* 11d8e7b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11d8e7dc:;
  /* 11d8e7dc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11d8e7e0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11d8e7e4:;
  /* 11d8e7e4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11d8e7e8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11d8e7ec:;
  /* 11d8e7ec mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11d8e7f0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11d8e7f4:;
  /* 11d8e7f4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11d8e7f8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11d8e7fc:;
  /* 11d8e7fc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11d8e800 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11d8e804:;
  /* 11d8e804 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11d8e808 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11d8e80c:;
  /* 11d8e80c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11d8e810 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11d8e814 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11d8e81b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8e81d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11d8e81f:;
  /* 11d8e81f jmp dword ptr [edx*4 + 0x11d8e828] */
  switch (EDX) {
    case 0: goto L_11d8e838;
    case 1: goto L_11d8e840;
    case 2: goto L_11d8e84c;
    case 3: goto L_11d8e860;
    default: x86_unimpl("switch@0x11d8e81f out of table"); return;
  }
  /* 11d8e826 mov edi, edi */
  EDI = (EDI);
L_11d8e838:;
  /* 11d8e838 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8e83b pop esi */
  ESI = (pop32());
  /* 11d8e83c pop edi */
  EDI = (pop32());
  /* 11d8e83d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d8e83e ret  */
  ESPCHK(0x11d8e6e0u, _esp0);
  ESP += 4; return;
  /* 11d8e83f nop  */
  /* nop */
L_11d8e840:;
  /* 11d8e840 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d8e842 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11d8e844 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8e847 pop esi */
  ESI = (pop32());
  /* 11d8e848 pop edi */
  EDI = (pop32());
  /* 11d8e849 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d8e84a ret  */
  ESPCHK(0x11d8e6e0u, _esp0);
  ESP += 4; return;
  /* 11d8e84b nop  */
  /* nop */
L_11d8e84c:;
  /* 11d8e84c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d8e84e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11d8e850 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11d8e853 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11d8e856 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8e859 pop esi */
  ESI = (pop32());
  /* 11d8e85a pop edi */
  EDI = (pop32());
  /* 11d8e85b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d8e85c ret  */
  ESPCHK(0x11d8e6e0u, _esp0);
  ESP += 4; return;
  /* 11d8e85d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11d8e860:;
  /* 11d8e860 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d8e862 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11d8e864 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11d8e867 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11d8e86a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11d8e86d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11d8e870 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8e873 pop esi */
  ESI = (pop32());
  /* 11d8e874 pop edi */
  EDI = (pop32());
  /* 11d8e875 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d8e876 ret  */
  ESPCHK(0x11d8e6e0u, _esp0);
  ESP += 4; return;
  /* 11d8e877 nop  */
  /* nop */
L_11d8e878:;
  /* 11d8e878 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11d8e87c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11d8e880 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11d8e886 jne 0x11d8e8ac */
  if (!C.zf) goto L_11d8e8ac;
  /* 11d8e888 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d8e88b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11d8e88e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8e891 jb 0x11d8e8a0 */
  if (C.cf) goto L_11d8e8a0;
  /* 11d8e893 std  */
  C.df=1;
  /* 11d8e894 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11d8e896 cld  */
  C.df=0;
  /* 11d8e897 jmp dword ptr [edx*4 + 0x11d8e9c0] */
  switch (EDX) {
    case 0: goto L_11d8e9d0;
    case 1: goto L_11d8e9d8;
    case 2: goto L_11d8e9e8;
    case 3: goto L_11d8e9fc;
    default: x86_unimpl("switch@0x11d8e897 out of table"); return;
  }
  /* 11d8e89e mov edi, edi */
  EDI = (EDI);
L_11d8e8a0:;
  /* 11d8e8a0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d8e8a2 jmp dword ptr [ecx*4 + 0x11d8e970] */
  switch (ECX) {
    case 0: goto L_11d8e9b7;
    default: x86_unimpl("switch@0x11d8e8a2 out of table"); return;
  }
  /* 11d8e8a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11d8e8ac:;
  /* 11d8e8ac mov eax, edi */
  EAX = (EDI);
  /* 11d8e8ae mov edx, 3 */
  EDX = (0x3u);
  /* 11d8e8b3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8e8b6 jb 0x11d8e8c4 */
  if (C.cf) goto L_11d8e8c4;
  /* 11d8e8b8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11d8e8bb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8e8bd jmp dword ptr [eax*4 + 0x11d8e8c8] */
  switch (EAX) {
    case 1: goto L_11d8e8d8;
    case 2: goto L_11d8e8f8;
    case 3: goto L_11d8e920;
    default: x86_unimpl("switch@0x11d8e8bd out of table"); return;
  }
L_11d8e8c4:;
  /* 11d8e8c4 jmp dword ptr [ecx*4 + 0x11d8e9c0] */
  switch (ECX) {
    case 0: goto L_11d8e9d0;
    case 1: goto L_11d8e9d8;
    case 2: goto L_11d8e9e8;
    case 3: goto L_11d8e9fc;
    default: x86_unimpl("switch@0x11d8e8c4 out of table"); return;
  }
  /* 11d8e8cb nop  */
  /* nop */
L_11d8e8d8:;
  /* 11d8e8d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11d8e8db and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11d8e8dd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11d8e8e0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11d8e8e1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d8e8e4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11d8e8e5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8e8e8 jb 0x11d8e8a0 */
  if (C.cf) goto L_11d8e8a0;
  /* 11d8e8ea std  */
  C.df=1;
  /* 11d8e8eb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11d8e8ed cld  */
  C.df=0;
  /* 11d8e8ee jmp dword ptr [edx*4 + 0x11d8e9c0] */
  switch (EDX) {
    case 0: goto L_11d8e9d0;
    case 1: goto L_11d8e9d8;
    case 2: goto L_11d8e9e8;
    case 3: goto L_11d8e9fc;
    default: x86_unimpl("switch@0x11d8e8ee out of table"); return;
  }
  /* 11d8e8f5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11d8e8f8:;
  /* 11d8e8f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11d8e8fb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11d8e8fd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11d8e900 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11d8e903 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d8e906 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11d8e909 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8e90c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8e90f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8e912 jb 0x11d8e8a0 */
  if (C.cf) goto L_11d8e8a0;
  /* 11d8e914 std  */
  C.df=1;
  /* 11d8e915 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11d8e917 cld  */
  C.df=0;
  /* 11d8e918 jmp dword ptr [edx*4 + 0x11d8e9c0] */
  switch (EDX) {
    case 0: goto L_11d8e9d0;
    case 1: goto L_11d8e9d8;
    case 2: goto L_11d8e9e8;
    case 3: goto L_11d8e9fc;
    default: x86_unimpl("switch@0x11d8e918 out of table"); return;
  }
  /* 11d8e91f nop  */
  /* nop */
L_11d8e920:;
  /* 11d8e920 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11d8e923 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11d8e925 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11d8e928 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11d8e92b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11d8e92e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11d8e931 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d8e934 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11d8e937 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8e93a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8e93d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8e940 jb 0x11d8e8a0 */
  if (C.cf) goto L_11d8e8a0;
  /* 11d8e946 std  */
  C.df=1;
  /* 11d8e947 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11d8e949 cld  */
  C.df=0;
  /* 11d8e94a jmp dword ptr [edx*4 + 0x11d8e9c0] */
  switch (EDX) {
    case 0: goto L_11d8e9d0;
    case 1: goto L_11d8e9d8;
    case 2: goto L_11d8e9e8;
    case 3: goto L_11d8e9fc;
    default: x86_unimpl("switch@0x11d8e94a out of table"); return;
  }
  /* 11d8e951 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11d8e954 je 0x11d8e93f */
  if (C.zf) goto L_11d8e93f;
  /* 11d8e956 fcom dword ptr [ecx] */
  fpu_cmp(FPU_ST(0), (double)rf32((uint32_t)(ECX)));
  /* 11d8e958 jl 0x11d8e943 */
  if ((C.sf!=C.of)) goto L_11d8e943;
  /* 11d8e95a fcom dword ptr [ecx] */
  fpu_cmp(FPU_ST(0), (double)rf32((uint32_t)(ECX)));
  /* 11d8e95c test cl, ch */
  { uint32_t _r=(CL)&(C.c.b.h); fl_logic(_r,8); }
  /* 11d8e95e fcom dword ptr [ecx] */
  fpu_cmp(FPU_ST(0), (double)rf32((uint32_t)(ECX)));
  /* 11d8e960 mov ecx, gs */
  ECX = (C.seg_gs);
  /* 11d8e962 fcom dword ptr [ecx] */
  fpu_cmp(FPU_ST(0), (double)rf32((uint32_t)(ECX)));
  /* 11d8e964 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 11d8e965 jmp 0xfb74fb42 */
  jmp_ind(0xfb74fb42u); return;
  /* 11d8e96a fcom dword ptr [ecx] */
  fpu_cmp(FPU_ST(0), (double)rf32((uint32_t)(ECX)));
  /* 11d8e96c movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 11d8e96e fcom dword ptr [ecx] */
  fpu_cmp(FPU_ST(0), (double)rf32((uint32_t)(ECX)));
  /* 11d8e974 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11d8e978 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11d8e97c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11d8e980 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11d8e984 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11d8e988 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11d8e98c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11d8e990 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11d8e994 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11d8e998 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11d8e99c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11d8e9a0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11d8e9a4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11d8e9a8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11d8e9ac lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11d8e9b3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8e9b5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11d8e9b7:;
  /* 11d8e9b7 jmp dword ptr [edx*4 + 0x11d8e9c0] */
  switch (EDX) {
    case 0: goto L_11d8e9d0;
    case 1: goto L_11d8e9d8;
    case 2: goto L_11d8e9e8;
    case 3: goto L_11d8e9fc;
    default: x86_unimpl("switch@0x11d8e9b7 out of table"); return;
  }
  /* 11d8e9be mov edi, edi */
  EDI = (EDI);
L_11d8e9d0:;
  /* 11d8e9d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8e9d3 pop esi */
  ESI = (pop32());
  /* 11d8e9d4 pop edi */
  EDI = (pop32());
  /* 11d8e9d5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d8e9d6 ret  */
  ESPCHK(0x11d8e6e0u, _esp0);
  ESP += 4; return;
  /* 11d8e9d7 nop  */
  /* nop */
L_11d8e9d8:;
  /* 11d8e9d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11d8e9db mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11d8e9de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8e9e1 pop esi */
  ESI = (pop32());
  /* 11d8e9e2 pop edi */
  EDI = (pop32());
  /* 11d8e9e3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d8e9e4 ret  */
  ESPCHK(0x11d8e6e0u, _esp0);
  ESP += 4; return;
  /* 11d8e9e5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11d8e9e8:;
  /* 11d8e9e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11d8e9eb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11d8e9ee mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11d8e9f1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11d8e9f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8e9f7 pop esi */
  ESI = (pop32());
  /* 11d8e9f8 pop edi */
  EDI = (pop32());
  /* 11d8e9f9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d8e9fa ret  */
  ESPCHK(0x11d8e6e0u, _esp0);
  ESP += 4; return;
  /* 11d8e9fb nop  */
  /* nop */
L_11d8e9fc:;
  /* 11d8e9fc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11d8e9ff mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11d8ea02 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11d8ea05 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11d8ea08 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11d8ea0b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11d8ea0e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8ea11 pop esi */
  ESI = (pop32());
  /* 11d8ea12 pop edi */
  EDI = (pop32());
  /* 11d8ea13 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d8ea14 ret  */
  ESPCHK(0x11d8e6e0u, _esp0);
  ESP += 4; return;
L_11d8e93f: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x11d8e93f (unresolved jump table)"); return;
L_11d8e943: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x11d8e943 (unresolved jump table)"); return;
}

/* FUN_1000ea20 @ 0x11d8ea20 (421 bytes, 148 insns) */
void f_11d8ea20(void) {
  FTRACE(0x11d8ea20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8ea20 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8ea21 mov ebp, esp */
  EBP = (ESP);
  /* 11d8ea23 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11d8ea25 push 0x11dad3a0 */
  push32((uint32_t)(0x11dad3a0u));
  /* 11d8ea2a push 0x11d8fa38 */
  push32((uint32_t)(0x11d8fa38u));
  /* 11d8ea2f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11d8ea35 push eax */
  push32((uint32_t)(EAX));
  /* 11d8ea36 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11d8ea3d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8ea40 push ebx */
  push32((uint32_t)(EBX));
  /* 11d8ea41 push esi */
  push32((uint32_t)(ESI));
  /* 11d8ea42 push edi */
  push32((uint32_t)(EDI));
  /* 11d8ea43 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11d8ea46 cmp dword ptr [0x11db19a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db19a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8ea4d jne 0x11d8ea9e */
  if (!C.zf) goto L_11d8ea9e;
  /* 11d8ea4f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11d8ea52 push eax */
  push32((uint32_t)(EAX));
  /* 11d8ea53 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d8ea55 push 0x11dad398 */
  push32((uint32_t)(0x11dad398u));
  /* 11d8ea5a push 1 */
  push32((uint32_t)(0x1u));
  /* 11d8ea5c call dword ptr [0x11db4314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4314))), 0x11d8ea62u);
  /* 11d8ea62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8ea64 je 0x11d8ea72 */
  if (C.zf) goto L_11d8ea72;
  /* 11d8ea66 mov dword ptr [0x11db19a8], 1 */
  w32((uint32_t)(0x11db19a8), (0x1u));
  /* 11d8ea70 jmp 0x11d8ea9e */
  goto L_11d8ea9e;
L_11d8ea72:;
  /* 11d8ea72 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 11d8ea75 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8ea76 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d8ea78 push 0x11dad394 */
  push32((uint32_t)(0x11dad394u));
  /* 11d8ea7d push 1 */
  push32((uint32_t)(0x1u));
  /* 11d8ea7f push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8ea81 call dword ptr [0x11db4318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4318))), 0x11d8ea87u);
  /* 11d8ea87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8ea89 je 0x11d8ea97 */
  if (C.zf) goto L_11d8ea97;
  /* 11d8ea8b mov dword ptr [0x11db19a8], 2 */
  w32((uint32_t)(0x11db19a8), (0x2u));
  /* 11d8ea95 jmp 0x11d8ea9e */
  goto L_11d8ea9e;
L_11d8ea97:;
  /* 11d8ea97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8ea99 jmp 0x11d8ebc8 */
  goto L_11d8ebc8;
L_11d8ea9e:;
  /* 11d8ea9e cmp dword ptr [0x11db19a8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11db19a8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8eaa5 jne 0x11d8ead5 */
  if (!C.zf) goto L_11d8ead5;
  /* 11d8eaa7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8eaab jne 0x11d8eab6 */
  if (!C.zf) goto L_11d8eab6;
  /* 11d8eaad mov edx, dword ptr [0x11db1990] */
  EDX = (r32((uint32_t)(0x11db1990)));
  /* 11d8eab3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_11d8eab6:;
  /* 11d8eab6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d8eab9 push eax */
  push32((uint32_t)(EAX));
  /* 11d8eaba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d8eabd push ecx */
  push32((uint32_t)(ECX));
  /* 11d8eabe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8eac1 push edx */
  push32((uint32_t)(EDX));
  /* 11d8eac2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8eac5 push eax */
  push32((uint32_t)(EAX));
  /* 11d8eac6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11d8eac9 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8eaca call dword ptr [0x11db4318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4318))), 0x11d8ead0u);
  /* 11d8ead0 jmp 0x11d8ebc8 */
  goto L_11d8ebc8;
L_11d8ead5:;
  /* 11d8ead5 cmp dword ptr [0x11db19a8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11db19a8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8eadc jne 0x11d8ebc6 */
  if (!C.zf) goto L_11d8ebc6;
  /* 11d8eae2 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8eae6 jne 0x11d8eaf1 */
  if (!C.zf) goto L_11d8eaf1;
  /* 11d8eae8 mov edx, dword ptr [0x11db19a0] */
  EDX = (r32((uint32_t)(0x11db19a0)));
  /* 11d8eaee mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_11d8eaf1:;
  /* 11d8eaf1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8eaf3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8eaf5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d8eaf8 push eax */
  push32((uint32_t)(EAX));
  /* 11d8eaf9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8eafc push ecx */
  push32((uint32_t)(ECX));
  /* 11d8eafd mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 11d8eb00 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d8eb02 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8eb04 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11d8eb07 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8eb0a push edx */
  push32((uint32_t)(EDX));
  /* 11d8eb0b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d8eb0e push eax */
  push32((uint32_t)(EAX));
  /* 11d8eb0f call dword ptr [0x11db431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db431c))), 0x11d8eb15u);
  /* 11d8eb15 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11d8eb18 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8eb1c jne 0x11d8eb25 */
  if (!C.zf) goto L_11d8eb25;
  /* 11d8eb1e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8eb20 jmp 0x11d8ebc8 */
  goto L_11d8ebc8;
L_11d8eb25:;
  /* 11d8eb25 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d8eb2c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d8eb2f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11d8eb31 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8eb34 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11d8eb36 call 0x11d89990 */
  push32(0x11d8eb3bu); f_11d89990();
  /* 11d8eb3b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 11d8eb3e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11d8eb41 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d8eb44 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11d8eb47 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d8eb4a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11d8eb4c push edx */
  push32((uint32_t)(EDX));
  /* 11d8eb4d push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8eb4f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8eb52 push eax */
  push32((uint32_t)(EAX));
  /* 11d8eb53 call 0x11d8a180 */
  push32(0x11d8eb58u); f_11d8a180();
  /* 11d8eb58 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8eb5b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11d8eb62 jmp 0x11d8eb7b */
  goto L_11d8eb7b;
  /* 11d8eb64 mov eax, 1 */
  EAX = (0x1u);
  /* 11d8eb69 ret  */
  ESPCHK(0x11d8ea20u, _esp0);
  ESP += 4; return;
  /* 11d8eb6a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8eb6d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11d8eb74 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11d8eb7b:;
  /* 11d8eb7b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8eb7f jne 0x11d8eb85 */
  if (!C.zf) goto L_11d8eb85;
  /* 11d8eb81 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8eb83 jmp 0x11d8ebc8 */
  goto L_11d8ebc8;
L_11d8eb85:;
  /* 11d8eb85 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d8eb88 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8eb89 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8eb8c push edx */
  push32((uint32_t)(EDX));
  /* 11d8eb8d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d8eb90 push eax */
  push32((uint32_t)(EAX));
  /* 11d8eb91 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8eb94 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8eb95 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d8eb97 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d8eb9a push edx */
  push32((uint32_t)(EDX));
  /* 11d8eb9b call dword ptr [0x11db431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db431c))), 0x11d8eba1u);
  /* 11d8eba1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11d8eba4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8eba8 jne 0x11d8ebae */
  if (!C.zf) goto L_11d8ebae;
  /* 11d8ebaa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8ebac jmp 0x11d8ebc8 */
  goto L_11d8ebc8;
L_11d8ebae:;
  /* 11d8ebae mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d8ebb1 push eax */
  push32((uint32_t)(EAX));
  /* 11d8ebb2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d8ebb5 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8ebb6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8ebb9 push edx */
  push32((uint32_t)(EDX));
  /* 11d8ebba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8ebbd push eax */
  push32((uint32_t)(EAX));
  /* 11d8ebbe call dword ptr [0x11db4314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4314))), 0x11d8ebc4u);
  /* 11d8ebc4 jmp 0x11d8ebc8 */
  goto L_11d8ebc8;
L_11d8ebc6:;
  /* 11d8ebc6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d8ebc8:;
  /* 11d8ebc8 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 11d8ebcb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8ebce mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11d8ebd5 pop edi */
  EDI = (pop32());
  /* 11d8ebd6 pop esi */
  ESI = (pop32());
  /* 11d8ebd7 pop ebx */
  EBX = (pop32());
  /* 11d8ebd8 mov esp, ebp */
  ESP = (EBP);
  /* 11d8ebda pop ebp */
  EBP = (pop32());
  /* 11d8ebdb ret  */
  ESPCHK(0x11d8ea20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ebe0 @ 0x11d8ebe0 (727 bytes, 263 insns) */
void f_11d8ebe0(void) {
  FTRACE(0x11d8ebe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8ebe0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8ebe1 mov ebp, esp */
  EBP = (ESP);
  /* 11d8ebe3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11d8ebe5 push 0x11dad3b0 */
  push32((uint32_t)(0x11dad3b0u));
  /* 11d8ebea push 0x11d8fa38 */
  push32((uint32_t)(0x11d8fa38u));
  /* 11d8ebef mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11d8ebf5 push eax */
  push32((uint32_t)(EAX));
  /* 11d8ebf6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11d8ebfd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8ec00 push ebx */
  push32((uint32_t)(EBX));
  /* 11d8ec01 push esi */
  push32((uint32_t)(ESI));
  /* 11d8ec02 push edi */
  push32((uint32_t)(EDI));
  /* 11d8ec03 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11d8ec06 cmp dword ptr [0x11db19ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db19ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8ec0d jne 0x11d8ec66 */
  if (!C.zf) goto L_11d8ec66;
  /* 11d8ec0f push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8ec11 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8ec13 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d8ec15 push 0x11dad398 */
  push32((uint32_t)(0x11dad398u));
  /* 11d8ec1a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11d8ec1f push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8ec21 call dword ptr [0x11db430c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db430c))), 0x11d8ec27u);
  /* 11d8ec27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8ec29 je 0x11d8ec37 */
  if (C.zf) goto L_11d8ec37;
  /* 11d8ec2b mov dword ptr [0x11db19ac], 1 */
  w32((uint32_t)(0x11db19ac), (0x1u));
  /* 11d8ec35 jmp 0x11d8ec66 */
  goto L_11d8ec66;
L_11d8ec37:;
  /* 11d8ec37 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8ec39 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8ec3b push 1 */
  push32((uint32_t)(0x1u));
  /* 11d8ec3d push 0x11dad394 */
  push32((uint32_t)(0x11dad394u));
  /* 11d8ec42 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11d8ec47 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8ec49 call dword ptr [0x11db4310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4310))), 0x11d8ec4fu);
  /* 11d8ec4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8ec51 je 0x11d8ec5f */
  if (C.zf) goto L_11d8ec5f;
  /* 11d8ec53 mov dword ptr [0x11db19ac], 2 */
  w32((uint32_t)(0x11db19ac), (0x2u));
  /* 11d8ec5d jmp 0x11d8ec66 */
  goto L_11d8ec66;
L_11d8ec5f:;
  /* 11d8ec5f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8ec61 jmp 0x11d8eed1 */
  goto L_11d8eed1;
L_11d8ec66:;
  /* 11d8ec66 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8ec6a jle 0x11d8ec7f */
  if ((C.zf||C.sf!=C.of)) goto L_11d8ec7f;
  /* 11d8ec6c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d8ec6f push eax */
  push32((uint32_t)(EAX));
  /* 11d8ec70 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d8ec73 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8ec74 call 0x11d8eef0 */
  push32(0x11d8ec79u); f_11d8eef0();
  /* 11d8ec79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8ec7c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11d8ec7f:;
  /* 11d8ec7f cmp dword ptr [0x11db19ac], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11db19ac))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8ec86 jne 0x11d8ecab */
  if (!C.zf) goto L_11d8ecab;
  /* 11d8ec88 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11d8ec8b push edx */
  push32((uint32_t)(EDX));
  /* 11d8ec8c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d8ec8f push eax */
  push32((uint32_t)(EAX));
  /* 11d8ec90 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d8ec93 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8ec94 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d8ec97 push edx */
  push32((uint32_t)(EDX));
  /* 11d8ec98 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8ec9b push eax */
  push32((uint32_t)(EAX));
  /* 11d8ec9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8ec9f push ecx */
  push32((uint32_t)(ECX));
  /* 11d8eca0 call dword ptr [0x11db4310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4310))), 0x11d8eca6u);
  /* 11d8eca6 jmp 0x11d8eed1 */
  goto L_11d8eed1;
L_11d8ecab:;
  /* 11d8ecab cmp dword ptr [0x11db19ac], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11db19ac))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8ecb2 jne 0x11d8eecf */
  if (!C.zf) goto L_11d8eecf;
  /* 11d8ecb8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8ecbc jne 0x11d8ecc7 */
  if (!C.zf) goto L_11d8ecc7;
  /* 11d8ecbe mov edx, dword ptr [0x11db19a0] */
  EDX = (r32((uint32_t)(0x11db19a0)));
  /* 11d8ecc4 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_11d8ecc7:;
  /* 11d8ecc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8ecc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8eccb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d8ecce push eax */
  push32((uint32_t)(EAX));
  /* 11d8eccf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d8ecd2 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8ecd3 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 11d8ecd6 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d8ecd8 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8ecda and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11d8ecdd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8ece0 push edx */
  push32((uint32_t)(EDX));
  /* 11d8ece1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11d8ece4 push eax */
  push32((uint32_t)(EAX));
  /* 11d8ece5 call dword ptr [0x11db431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db431c))), 0x11d8ecebu);
  /* 11d8eceb mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11d8ecee cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8ecf2 jne 0x11d8ecfb */
  if (!C.zf) goto L_11d8ecfb;
  /* 11d8ecf4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8ecf6 jmp 0x11d8eed1 */
  goto L_11d8eed1;
L_11d8ecfb:;
  /* 11d8ecfb mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d8ed02 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d8ed05 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11d8ed07 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8ed0a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11d8ed0c call 0x11d89990 */
  push32(0x11d8ed11u); f_11d89990();
  /* 11d8ed11 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 11d8ed14 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11d8ed17 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d8ed1a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11d8ed1d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11d8ed24 jmp 0x11d8ed3d */
  goto L_11d8ed3d;
  /* 11d8ed26 mov eax, 1 */
  EAX = (0x1u);
  /* 11d8ed2b ret  */
  ESPCHK(0x11d8ebe0u, _esp0);
  ESP += 4; return;
  /* 11d8ed2c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8ed2f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11d8ed36 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11d8ed3d:;
  /* 11d8ed3d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8ed41 jne 0x11d8ed4a */
  if (!C.zf) goto L_11d8ed4a;
  /* 11d8ed43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8ed45 jmp 0x11d8eed1 */
  goto L_11d8eed1;
L_11d8ed4a:;
  /* 11d8ed4a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d8ed4d push edx */
  push32((uint32_t)(EDX));
  /* 11d8ed4e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8ed51 push eax */
  push32((uint32_t)(EAX));
  /* 11d8ed52 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d8ed55 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8ed56 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d8ed59 push edx */
  push32((uint32_t)(EDX));
  /* 11d8ed5a push 1 */
  push32((uint32_t)(0x1u));
  /* 11d8ed5c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11d8ed5f push eax */
  push32((uint32_t)(EAX));
  /* 11d8ed60 call dword ptr [0x11db431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db431c))), 0x11d8ed66u);
  /* 11d8ed66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8ed68 jne 0x11d8ed71 */
  if (!C.zf) goto L_11d8ed71;
  /* 11d8ed6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8ed6c jmp 0x11d8eed1 */
  goto L_11d8eed1;
L_11d8ed71:;
  /* 11d8ed71 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8ed73 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8ed75 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d8ed78 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8ed79 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8ed7c push edx */
  push32((uint32_t)(EDX));
  /* 11d8ed7d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8ed80 push eax */
  push32((uint32_t)(EAX));
  /* 11d8ed81 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8ed84 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8ed85 call dword ptr [0x11db430c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db430c))), 0x11d8ed8bu);
  /* 11d8ed8b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11d8ed8e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8ed92 jne 0x11d8ed9b */
  if (!C.zf) goto L_11d8ed9b;
  /* 11d8ed94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8ed96 jmp 0x11d8eed1 */
  goto L_11d8eed1;
L_11d8ed9b:;
  /* 11d8ed9b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8ed9e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 11d8eda4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d8eda6 je 0x11d8edeb */
  if (C.zf) goto L_11d8edeb;
  /* 11d8eda8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8edac je 0x11d8ede6 */
  if (C.zf) goto L_11d8ede6;
  /* 11d8edae mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d8edb1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8edb4 jle 0x11d8edbd */
  if ((C.zf||C.sf!=C.of)) goto L_11d8edbd;
  /* 11d8edb6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8edb8 jmp 0x11d8eed1 */
  goto L_11d8eed1;
L_11d8edbd:;
  /* 11d8edbd mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11d8edc0 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8edc1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d8edc4 push edx */
  push32((uint32_t)(EDX));
  /* 11d8edc5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d8edc8 push eax */
  push32((uint32_t)(EAX));
  /* 11d8edc9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8edcc push ecx */
  push32((uint32_t)(ECX));
  /* 11d8edcd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8edd0 push edx */
  push32((uint32_t)(EDX));
  /* 11d8edd1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8edd4 push eax */
  push32((uint32_t)(EAX));
  /* 11d8edd5 call dword ptr [0x11db430c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db430c))), 0x11d8eddbu);
  /* 11d8eddb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8eddd jne 0x11d8ede6 */
  if (!C.zf) goto L_11d8ede6;
  /* 11d8eddf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8ede1 jmp 0x11d8eed1 */
  goto L_11d8eed1;
L_11d8ede6:;
  /* 11d8ede6 jmp 0x11d8eeca */
  goto L_11d8eeca;
L_11d8edeb:;
  /* 11d8edeb mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d8edee mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11d8edf1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11d8edf8 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d8edfb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11d8edfd add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8ee00 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11d8ee02 call 0x11d89990 */
  push32(0x11d8ee07u); f_11d89990();
  /* 11d8ee07 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 11d8ee0a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11d8ee0d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11d8ee10 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11d8ee13 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11d8ee1a jmp 0x11d8ee33 */
  goto L_11d8ee33;
  /* 11d8ee1c mov eax, 1 */
  EAX = (0x1u);
  /* 11d8ee21 ret  */
  ESPCHK(0x11d8ebe0u, _esp0);
  ESP += 4; return;
  /* 11d8ee22 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8ee25 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11d8ee2c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11d8ee33:;
  /* 11d8ee33 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8ee37 jne 0x11d8ee40 */
  if (!C.zf) goto L_11d8ee40;
  /* 11d8ee39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8ee3b jmp 0x11d8eed1 */
  goto L_11d8eed1;
L_11d8ee40:;
  /* 11d8ee40 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d8ee43 push eax */
  push32((uint32_t)(EAX));
  /* 11d8ee44 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d8ee47 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8ee48 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d8ee4b push edx */
  push32((uint32_t)(EDX));
  /* 11d8ee4c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8ee4f push eax */
  push32((uint32_t)(EAX));
  /* 11d8ee50 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8ee53 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8ee54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8ee57 push edx */
  push32((uint32_t)(EDX));
  /* 11d8ee58 call dword ptr [0x11db430c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db430c))), 0x11d8ee5eu);
  /* 11d8ee5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8ee60 jne 0x11d8ee66 */
  if (!C.zf) goto L_11d8ee66;
  /* 11d8ee62 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8ee64 jmp 0x11d8eed1 */
  goto L_11d8eed1;
L_11d8ee66:;
  /* 11d8ee66 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8ee6a jne 0x11d8ee9a */
  if (!C.zf) goto L_11d8ee9a;
  /* 11d8ee6c push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8ee6e push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8ee70 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8ee72 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8ee74 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d8ee77 push eax */
  push32((uint32_t)(EAX));
  /* 11d8ee78 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d8ee7b push ecx */
  push32((uint32_t)(ECX));
  /* 11d8ee7c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11d8ee81 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 11d8ee84 push edx */
  push32((uint32_t)(EDX));
  /* 11d8ee85 call dword ptr [0x11db4368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4368))), 0x11d8ee8bu);
  /* 11d8ee8b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11d8ee8e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8ee92 jne 0x11d8ee98 */
  if (!C.zf) goto L_11d8ee98;
  /* 11d8ee94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8ee96 jmp 0x11d8eed1 */
  goto L_11d8eed1;
L_11d8ee98:;
  /* 11d8ee98 jmp 0x11d8eeca */
  goto L_11d8eeca;
L_11d8ee9a:;
  /* 11d8ee9a push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8ee9c push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8ee9e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11d8eea1 push eax */
  push32((uint32_t)(EAX));
  /* 11d8eea2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d8eea5 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8eea6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d8eea9 push edx */
  push32((uint32_t)(EDX));
  /* 11d8eeaa mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d8eead push eax */
  push32((uint32_t)(EAX));
  /* 11d8eeae push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11d8eeb3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11d8eeb6 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8eeb7 call dword ptr [0x11db4368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4368))), 0x11d8eebdu);
  /* 11d8eebd mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11d8eec0 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8eec4 jne 0x11d8eeca */
  if (!C.zf) goto L_11d8eeca;
  /* 11d8eec6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8eec8 jmp 0x11d8eed1 */
  goto L_11d8eed1;
L_11d8eeca:;
  /* 11d8eeca mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d8eecd jmp 0x11d8eed1 */
  goto L_11d8eed1;
L_11d8eecf:;
  /* 11d8eecf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d8eed1:;
  /* 11d8eed1 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 11d8eed4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8eed7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11d8eede pop edi */
  EDI = (pop32());
  /* 11d8eedf pop esi */
  ESI = (pop32());
  /* 11d8eee0 pop ebx */
  EBX = (pop32());
  /* 11d8eee1 mov esp, ebp */
  ESP = (EBP);
  /* 11d8eee3 pop ebp */
  EBP = (pop32());
  /* 11d8eee4 ret  */
  ESPCHK(0x11d8ebe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eef0 @ 0x11d8eef0 (80 bytes, 32 insns) */
void f_11d8eef0(void) {
  FTRACE(0x11d8eef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8eef0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8eef1 mov ebp, esp */
  EBP = (ESP);
  /* 11d8eef3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8eef6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8eef9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d8eefc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8eeff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11d8ef02:;
  /* 11d8ef02 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8ef05 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8ef08 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8ef0b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d8ef0e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d8ef10 je 0x11d8ef27 */
  if (C.zf) goto L_11d8ef27;
  /* 11d8ef12 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8ef15 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11d8ef18 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d8ef1a je 0x11d8ef27 */
  if (C.zf) goto L_11d8ef27;
  /* 11d8ef1c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8ef1f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8ef22 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d8ef25 jmp 0x11d8ef02 */
  goto L_11d8ef02;
L_11d8ef27:;
  /* 11d8ef27 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8ef2a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11d8ef2d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d8ef2f jne 0x11d8ef39 */
  if (!C.zf) goto L_11d8ef39;
  /* 11d8ef31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8ef34 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8ef37 jmp 0x11d8ef3c */
  goto L_11d8ef3c;
L_11d8ef39:;
  /* 11d8ef39 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11d8ef3c:;
  /* 11d8ef3c mov esp, ebp */
  ESP = (EBP);
  /* 11d8ef3e pop ebp */
  EBP = (pop32());
  /* 11d8ef3f ret  */
  ESPCHK(0x11d8eef0u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x11d8ef40 (52 bytes, 19 insns) */
void f_11d8ef40(void) {
  FTRACE(0x11d8ef40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8ef40 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d8ef44 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11d8ef48 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d8ef4a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11d8ef4e jne 0x11d8ef59 */
  if (!C.zf) goto L_11d8ef59;
  /* 11d8ef50 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11d8ef54 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11d8ef56 ret 0x10 */
  ESPCHK(0x11d8ef40u, _esp0);
  ESP += 20; return;
L_11d8ef59:;
  /* 11d8ef59 push ebx */
  push32((uint32_t)(EBX));
  /* 11d8ef5a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11d8ef5c mov ebx, eax */
  EBX = (EAX);
  /* 11d8ef5e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d8ef62 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11d8ef66 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8ef68 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d8ef6c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11d8ef6e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8ef70 pop ebx */
  EBX = (pop32());
  /* 11d8ef71 ret 0x10 */
  ESPCHK(0x11d8ef40u, _esp0);
  ESP += 20; return;
}

/* __mbsnbicoll @ 0x11d8ef80 (79 bytes, 32 insns) */
void f_11d8ef80(void) {
  FTRACE(0x11d8ef80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8ef80 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8ef81 mov ebp, esp */
  EBP = (ESP);
  /* 11d8ef83 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8ef84 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8ef88 jne 0x11d8ef8e */
  if (!C.zf) goto L_11d8ef8e;
  /* 11d8ef8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8ef8c jmp 0x11d8efcb */
  goto L_11d8efcb;
L_11d8ef8e:;
  /* 11d8ef8e mov eax, dword ptr [0x11db2dc4] */
  EAX = (r32((uint32_t)(0x11db2dc4)));
  /* 11d8ef93 push eax */
  push32((uint32_t)(EAX));
  /* 11d8ef94 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d8ef97 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8ef98 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8ef9b push edx */
  push32((uint32_t)(EDX));
  /* 11d8ef9c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d8ef9f push eax */
  push32((uint32_t)(EAX));
  /* 11d8efa0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8efa3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8efa4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d8efa6 mov edx, dword ptr [0x11db3064] */
  EDX = (r32((uint32_t)(0x11db3064)));
  /* 11d8efac push edx */
  push32((uint32_t)(EDX));
  /* 11d8efad call 0x11d8fb10 */
  push32(0x11d8efb2u); f_11d8fb10();
  /* 11d8efb2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8efb5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d8efb8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8efbc jne 0x11d8efc5 */
  if (!C.zf) goto L_11d8efc5;
  /* 11d8efbe mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 11d8efc3 jmp 0x11d8efcb */
  goto L_11d8efcb;
L_11d8efc5:;
  /* 11d8efc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8efc8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11d8efcb:;
  /* 11d8efcb mov esp, ebp */
  ESP = (EBP);
  /* 11d8efcd pop ebp */
  EBP = (pop32());
  /* 11d8efce ret  */
  ESPCHK(0x11d8ef80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000efd0 @ 0x11d8efd0 (174 bytes, 66 insns) */
void f_11d8efd0(void) {
  FTRACE(0x11d8efd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8efd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8efd1 mov ebp, esp */
  EBP = (ESP);
  /* 11d8efd3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8efd6 mov eax, dword ptr [0x11db1700] */
  EAX = (r32((uint32_t)(0x11db1700)));
  /* 11d8efdb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d8efde:;
  /* 11d8efde mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8efe1 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8efe4 je 0x11d8f078 */
  if (C.zf) goto L_11d8f078;
  /* 11d8efea push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8efec push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8efee push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8eff0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8eff2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11d8eff4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8eff7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d8eff9 push eax */
  push32((uint32_t)(EAX));
  /* 11d8effa push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8effc push 1 */
  push32((uint32_t)(0x1u));
  /* 11d8effe call dword ptr [0x11db4368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4368))), 0x11d8f004u);
  /* 11d8f004 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d8f007 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8f00b jne 0x11d8f012 */
  if (!C.zf) goto L_11d8f012;
  /* 11d8f00d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d8f010 jmp 0x11d8f07a */
  goto L_11d8f07a;
L_11d8f012:;
  /* 11d8f012 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11d8f014 push 0x11dad3c8 */
  push32((uint32_t)(0x11dad3c8u));
  /* 11d8f019 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d8f01b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d8f01e push ecx */
  push32((uint32_t)(ECX));
  /* 11d8f01f call 0x11d85ad0 */
  push32(0x11d8f024u); f_11d85ad0();
  /* 11d8f024 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8f027 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d8f02a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8f02e jne 0x11d8f035 */
  if (!C.zf) goto L_11d8f035;
  /* 11d8f030 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d8f033 jmp 0x11d8f07a */
  goto L_11d8f07a;
L_11d8f035:;
  /* 11d8f035 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8f037 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8f039 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d8f03c push edx */
  push32((uint32_t)(EDX));
  /* 11d8f03d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8f040 push eax */
  push32((uint32_t)(EAX));
  /* 11d8f041 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11d8f043 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8f046 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d8f048 push edx */
  push32((uint32_t)(EDX));
  /* 11d8f049 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8f04b push 1 */
  push32((uint32_t)(0x1u));
  /* 11d8f04d call dword ptr [0x11db4368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4368))), 0x11d8f053u);
  /* 11d8f053 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8f055 jne 0x11d8f05c */
  if (!C.zf) goto L_11d8f05c;
  /* 11d8f057 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d8f05a jmp 0x11d8f07a */
  goto L_11d8f07a;
L_11d8f05c:;
  /* 11d8f05c push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8f05e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8f061 push eax */
  push32((uint32_t)(EAX));
  /* 11d8f062 call 0x11d8ff60 */
  push32(0x11d8f067u); f_11d8ff60();
  /* 11d8f067 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8f06a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8f06d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8f070 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d8f073 jmp 0x11d8efde */
  goto L_11d8efde;
L_11d8f078:;
  /* 11d8f078 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d8f07a:;
  /* 11d8f07a mov esp, ebp */
  ESP = (EBP);
  /* 11d8f07c pop ebp */
  EBP = (pop32());
  /* 11d8f07d ret  */
  ESPCHK(0x11d8efd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f080 @ 0x11d8f080 (130 bytes, 43 insns) */
void f_11d8f080(void) {
  FTRACE(0x11d8f080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8f080 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8f081 mov ebp, esp */
  EBP = (ESP);
  /* 11d8f083 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8f084 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8f087 cmp eax, dword ptr [0x11db31fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11db31fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8f08d jae 0x11d8f0b1 */
  if (!C.cf) goto L_11d8f0b1;
  /* 11d8f08f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8f092 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11d8f095 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8f098 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11d8f09b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d8f09e mov eax, dword ptr [ecx*4 + 0x11db30c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11db30c0)));
  /* 11d8f0a5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11d8f0aa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11d8f0ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d8f0af jne 0x11d8f0cc */
  if (!C.zf) goto L_11d8f0cc;
L_11d8f0b1:;
  /* 11d8f0b1 call 0x11d8e6c0 */
  push32(0x11d8f0b6u); f_11d8e6c0();
  /* 11d8f0b6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11d8f0bc call 0x11d8e6d0 */
  push32(0x11d8f0c1u); f_11d8e6d0();
  /* 11d8f0c1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11d8f0c7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d8f0ca jmp 0x11d8f0fe */
  goto L_11d8f0fe;
L_11d8f0cc:;
  /* 11d8f0cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8f0cf push edx */
  push32((uint32_t)(EDX));
  /* 11d8f0d0 call 0x11d908c0 */
  push32(0x11d8f0d5u); f_11d908c0();
  /* 11d8f0d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8f0d8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d8f0db push eax */
  push32((uint32_t)(EAX));
  /* 11d8f0dc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8f0df push ecx */
  push32((uint32_t)(ECX));
  /* 11d8f0e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8f0e3 push edx */
  push32((uint32_t)(EDX));
  /* 11d8f0e4 call 0x11d8f110 */
  push32(0x11d8f0e9u); f_11d8f110();
  /* 11d8f0e9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8f0ec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d8f0ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8f0f2 push eax */
  push32((uint32_t)(EAX));
  /* 11d8f0f3 call 0x11d90950 */
  push32(0x11d8f0f8u); f_11d90950();
  /* 11d8f0f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8f0fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11d8f0fe:;
  /* 11d8f0fe mov esp, ebp */
  ESP = (EBP);
  /* 11d8f100 pop ebp */
  EBP = (pop32());
  /* 11d8f101 ret  */
  ESPCHK(0x11d8f080u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f110 @ 0x11d8f110 (178 bytes, 56 insns) */
void f_11d8f110(void) {
  FTRACE(0x11d8f110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8f110 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8f111 mov ebp, esp */
  EBP = (ESP);
  /* 11d8f113 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8f116 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8f119 push eax */
  push32((uint32_t)(EAX));
  /* 11d8f11a call 0x11d90740 */
  push32(0x11d8f11fu); f_11d90740();
  /* 11d8f11f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8f122 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d8f125 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8f129 jne 0x11d8f13e */
  if (!C.zf) goto L_11d8f13e;
  /* 11d8f12b call 0x11d8e6c0 */
  push32(0x11d8f130u); f_11d8e6c0();
  /* 11d8f130 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11d8f136 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d8f139 jmp 0x11d8f1be */
  goto L_11d8f1be;
L_11d8f13e:;
  /* 11d8f13e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d8f141 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8f142 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8f144 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8f147 push edx */
  push32((uint32_t)(EDX));
  /* 11d8f148 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d8f14b push eax */
  push32((uint32_t)(EAX));
  /* 11d8f14c call dword ptr [0x11db4308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4308))), 0x11d8f152u);
  /* 11d8f152 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d8f155 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8f159 jne 0x11d8f166 */
  if (!C.zf) goto L_11d8f166;
  /* 11d8f15b call dword ptr [0x11db43a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43a0))), 0x11d8f161u);
  /* 11d8f161 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d8f164 jmp 0x11d8f16d */
  goto L_11d8f16d;
L_11d8f166:;
  /* 11d8f166 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11d8f16d:;
  /* 11d8f16d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8f171 je 0x11d8f184 */
  if (C.zf) goto L_11d8f184;
  /* 11d8f173 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8f176 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8f177 call 0x11d8e620 */
  push32(0x11d8f17cu); f_11d8e620();
  /* 11d8f17c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8f17f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d8f182 jmp 0x11d8f1be */
  goto L_11d8f1be;
L_11d8f184:;
  /* 11d8f184 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8f187 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11d8f18a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8f18d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11d8f190 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d8f193 mov ecx, dword ptr [edx*4 + 0x11db30c0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11db30c0)));
  /* 11d8f19a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 11d8f19e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 11d8f1a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8f1a4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11d8f1a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8f1aa and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11d8f1ad imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d8f1b0 mov eax, dword ptr [eax*4 + 0x11db30c0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11db30c0)));
  /* 11d8f1b7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 11d8f1bb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11d8f1be:;
  /* 11d8f1be mov esp, ebp */
  ESP = (EBP);
  /* 11d8f1c0 pop ebp */
  EBP = (pop32());
  /* 11d8f1c1 ret  */
  ESPCHK(0x11d8f110u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f1d0 @ 0x11d8f1d0 (130 bytes, 43 insns) */
void f_11d8f1d0(void) {
  FTRACE(0x11d8f1d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8f1d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8f1d1 mov ebp, esp */
  EBP = (ESP);
  /* 11d8f1d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8f1d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8f1d7 cmp eax, dword ptr [0x11db31fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11db31fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8f1dd jae 0x11d8f201 */
  if (!C.cf) goto L_11d8f201;
  /* 11d8f1df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8f1e2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11d8f1e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8f1e8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11d8f1eb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d8f1ee mov eax, dword ptr [ecx*4 + 0x11db30c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11db30c0)));
  /* 11d8f1f5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11d8f1fa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11d8f1fd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d8f1ff jne 0x11d8f21c */
  if (!C.zf) goto L_11d8f21c;
L_11d8f201:;
  /* 11d8f201 call 0x11d8e6c0 */
  push32(0x11d8f206u); f_11d8e6c0();
  /* 11d8f206 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11d8f20c call 0x11d8e6d0 */
  push32(0x11d8f211u); f_11d8e6d0();
  /* 11d8f211 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11d8f217 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d8f21a jmp 0x11d8f24e */
  goto L_11d8f24e;
L_11d8f21c:;
  /* 11d8f21c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8f21f push edx */
  push32((uint32_t)(EDX));
  /* 11d8f220 call 0x11d908c0 */
  push32(0x11d8f225u); f_11d908c0();
  /* 11d8f225 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8f228 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d8f22b push eax */
  push32((uint32_t)(EAX));
  /* 11d8f22c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8f22f push ecx */
  push32((uint32_t)(ECX));
  /* 11d8f230 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8f233 push edx */
  push32((uint32_t)(EDX));
  /* 11d8f234 call 0x11d8f260 */
  push32(0x11d8f239u); f_11d8f260();
  /* 11d8f239 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8f23c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d8f23f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8f242 push eax */
  push32((uint32_t)(EAX));
  /* 11d8f243 call 0x11d90950 */
  push32(0x11d8f248u); f_11d90950();
  /* 11d8f248 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8f24b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11d8f24e:;
  /* 11d8f24e mov esp, ebp */
  ESP = (EBP);
  /* 11d8f250 pop ebp */
  EBP = (pop32());
  /* 11d8f251 ret  */
  ESPCHK(0x11d8f1d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f260 @ 0x11d8f260 (627 bytes, 182 insns) */
void f_11d8f260(void) {
  FTRACE(0x11d8f260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8f260 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8f261 mov ebp, esp */
  EBP = (ESP);
  /* 11d8f263 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8f269 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11d8f270 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8f273 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 11d8f279 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8f27d jne 0x11d8f286 */
  if (!C.zf) goto L_11d8f286;
  /* 11d8f27f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8f281 jmp 0x11d8f4cf */
  goto L_11d8f4cf;
L_11d8f286:;
  /* 11d8f286 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8f289 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11d8f28c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8f28f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11d8f292 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d8f295 mov eax, dword ptr [ecx*4 + 0x11db30c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11db30c0)));
  /* 11d8f29c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11d8f2a1 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11d8f2a4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d8f2a6 je 0x11d8f2b8 */
  if (C.zf) goto L_11d8f2b8;
  /* 11d8f2a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d8f2aa push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8f2ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8f2af push edx */
  push32((uint32_t)(EDX));
  /* 11d8f2b0 call 0x11d8f110 */
  push32(0x11d8f2b5u); f_11d8f110();
  /* 11d8f2b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d8f2b8:;
  /* 11d8f2b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8f2bb sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11d8f2be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8f2c1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11d8f2c4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d8f2c7 mov edx, dword ptr [eax*4 + 0x11db30c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11db30c0)));
  /* 11d8f2ce movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11d8f2d3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 11d8f2d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8f2da je 0x11d8f3ec */
  if (C.zf) goto L_11d8f3ec;
  /* 11d8f2e0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8f2e3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d8f2e6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11d8f2ed:;
  /* 11d8f2ed mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8f2f0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8f2f3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8f2f6 jae 0x11d8f3ea */
  if (!C.cf) goto L_11d8f3ea;
  /* 11d8f2fc lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 11d8f302 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11d8f305:;
  /* 11d8f305 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8f308 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 11d8f30e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8f310 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8f316 jge 0x11d8f377 */
  if ((C.sf==C.of)) goto L_11d8f377;
  /* 11d8f318 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8f31b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8f31e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8f321 jae 0x11d8f377 */
  if (!C.cf) goto L_11d8f377;
  /* 11d8f323 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8f326 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11d8f328 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 11d8f32e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8f331 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8f334 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d8f337 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 11d8f33e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8f341 jne 0x11d8f361 */
  if (!C.zf) goto L_11d8f361;
  /* 11d8f343 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 11d8f349 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8f34c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 11d8f352 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8f355 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 11d8f358 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8f35b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8f35e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11d8f361:;
  /* 11d8f361 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8f364 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 11d8f36a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11d8f36c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8f36f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8f372 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d8f375 jmp 0x11d8f305 */
  goto L_11d8f305;
L_11d8f377:;
  /* 11d8f377 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8f379 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 11d8f37f push edx */
  push32((uint32_t)(EDX));
  /* 11d8f380 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8f383 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 11d8f389 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8f38b push eax */
  push32((uint32_t)(EAX));
  /* 11d8f38c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 11d8f392 push edx */
  push32((uint32_t)(EDX));
  /* 11d8f393 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8f396 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11d8f399 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8f39c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11d8f39f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d8f3a2 mov edx, dword ptr [eax*4 + 0x11db30c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11db30c0)));
  /* 11d8f3a9 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 11d8f3ac push eax */
  push32((uint32_t)(EAX));
  /* 11d8f3ad call dword ptr [0x11db42c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db42c4))), 0x11d8f3b3u);
  /* 11d8f3b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8f3b5 je 0x11d8f3da */
  if (C.zf) goto L_11d8f3da;
  /* 11d8f3b7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8f3ba add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8f3c0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11d8f3c3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8f3c6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 11d8f3cc sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8f3ce cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8f3d4 jge 0x11d8f3d8 */
  if ((C.sf==C.of)) goto L_11d8f3d8;
  /* 11d8f3d6 jmp 0x11d8f3ea */
  goto L_11d8f3ea;
L_11d8f3d8:;
  /* 11d8f3d8 jmp 0x11d8f3e5 */
  goto L_11d8f3e5;
L_11d8f3da:;
  /* 11d8f3da call dword ptr [0x11db43a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43a0))), 0x11d8f3e0u);
  /* 11d8f3e0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d8f3e3 jmp 0x11d8f3ea */
  goto L_11d8f3ea;
L_11d8f3e5:;
  /* 11d8f3e5 jmp 0x11d8f2ed */
  goto L_11d8f2ed;
L_11d8f3ea:;
  /* 11d8f3ea jmp 0x11d8f43c */
  goto L_11d8f43c;
L_11d8f3ec:;
  /* 11d8f3ec push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8f3ee lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 11d8f3f4 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8f3f5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d8f3f8 push edx */
  push32((uint32_t)(EDX));
  /* 11d8f3f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8f3fc push eax */
  push32((uint32_t)(EAX));
  /* 11d8f3fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8f400 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11d8f403 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8f406 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11d8f409 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d8f40c mov eax, dword ptr [ecx*4 + 0x11db30c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11db30c0)));
  /* 11d8f413 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 11d8f416 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8f417 call dword ptr [0x11db42c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db42c4))), 0x11d8f41du);
  /* 11d8f41d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8f41f je 0x11d8f433 */
  if (C.zf) goto L_11d8f433;
  /* 11d8f421 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11d8f428 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 11d8f42e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11d8f431 jmp 0x11d8f43c */
  goto L_11d8f43c;
L_11d8f433:;
  /* 11d8f433 call dword ptr [0x11db43a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43a0))), 0x11d8f439u);
  /* 11d8f439 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11d8f43c:;
  /* 11d8f43c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8f440 jne 0x11d8f4c6 */
  if (!C.zf) goto L_11d8f4c6;
  /* 11d8f446 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8f44a je 0x11d8f47a */
  if (C.zf) goto L_11d8f47a;
  /* 11d8f44c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8f450 jne 0x11d8f469 */
  if (!C.zf) goto L_11d8f469;
  /* 11d8f452 call 0x11d8e6c0 */
  push32(0x11d8f457u); f_11d8e6c0();
  /* 11d8f457 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11d8f45d call 0x11d8e6d0 */
  push32(0x11d8f462u); f_11d8e6d0();
  /* 11d8f462 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d8f465 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11d8f467 jmp 0x11d8f475 */
  goto L_11d8f475;
L_11d8f469:;
  /* 11d8f469 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d8f46c push edx */
  push32((uint32_t)(EDX));
  /* 11d8f46d call 0x11d8e620 */
  push32(0x11d8f472u); f_11d8e620();
  /* 11d8f472 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d8f475:;
  /* 11d8f475 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d8f478 jmp 0x11d8f4cf */
  goto L_11d8f4cf;
L_11d8f47a:;
  /* 11d8f47a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8f47d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11d8f480 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8f483 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11d8f486 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d8f489 mov edx, dword ptr [eax*4 + 0x11db30c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11db30c0)));
  /* 11d8f490 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11d8f495 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11d8f498 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8f49a je 0x11d8f4ab */
  if (C.zf) goto L_11d8f4ab;
  /* 11d8f49c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8f49f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11d8f4a2 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8f4a5 jne 0x11d8f4ab */
  if (!C.zf) goto L_11d8f4ab;
  /* 11d8f4a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8f4a9 jmp 0x11d8f4cf */
  goto L_11d8f4cf;
L_11d8f4ab:;
  /* 11d8f4ab call 0x11d8e6c0 */
  push32(0x11d8f4b0u); f_11d8e6c0();
  /* 11d8f4b0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 11d8f4b6 call 0x11d8e6d0 */
  push32(0x11d8f4bbu); f_11d8e6d0();
  /* 11d8f4bb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11d8f4c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d8f4c4 jmp 0x11d8f4cf */
  goto L_11d8f4cf;
L_11d8f4c6:;
  /* 11d8f4c6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8f4c9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11d8f4cf:;
  /* 11d8f4cf mov esp, ebp */
  ESP = (EBP);
  /* 11d8f4d1 pop ebp */
  EBP = (pop32());
  /* 11d8f4d2 ret  */
  ESPCHK(0x11d8f260u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f4e0 @ 0x11d8f4e0 (199 bytes, 68 insns) */
void f_11d8f4e0(void) {
  FTRACE(0x11d8f4e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8f4e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8f4e1 mov ebp, esp */
  EBP = (ESP);
  /* 11d8f4e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8f4e4 push ebx */
  push32((uint32_t)(EBX));
  /* 11d8f4e5 push esi */
  push32((uint32_t)(ESI));
  /* 11d8f4e6 push edi */
  push32((uint32_t)(EDI));
L_11d8f4e7:;
  /* 11d8f4e7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8f4eb jne 0x11d8f50b */
  if (!C.zf) goto L_11d8f50b;
  /* 11d8f4ed push 0x11dad2f8 */
  push32((uint32_t)(0x11dad2f8u));
  /* 11d8f4f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8f4f4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 11d8f4f6 push 0x11dad3d4 */
  push32((uint32_t)(0x11dad3d4u));
  /* 11d8f4fb push 2 */
  push32((uint32_t)(0x2u));
  /* 11d8f4fd call 0x11d84e40 */
  push32(0x11d8f502u); f_11d84e40();
  /* 11d8f502 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8f505 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8f508 jne 0x11d8f50b */
  if (!C.zf) goto L_11d8f50b;
  /* 11d8f50a int3  */
  x86_unimpl("int3 @ 0x11d8f50a");
L_11d8f50b:;
  /* 11d8f50b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8f50d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8f50f jne 0x11d8f4e7 */
  if (!C.zf) goto L_11d8f4e7;
  /* 11d8f511 mov ecx, dword ptr [0x11db19b0] */
  ECX = (r32((uint32_t)(0x11db19b0)));
  /* 11d8f517 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8f51a mov dword ptr [0x11db19b0], ecx */
  w32((uint32_t)(0x11db19b0), (ECX));
  /* 11d8f520 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8f523 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d8f526 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 11d8f528 push 0x11dad3d4 */
  push32((uint32_t)(0x11dad3d4u));
  /* 11d8f52d push 2 */
  push32((uint32_t)(0x2u));
  /* 11d8f52f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11d8f534 call 0x11d85ad0 */
  push32(0x11d8f539u); f_11d85ad0();
  /* 11d8f539 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8f53c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8f53f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11d8f542 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8f545 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8f549 je 0x11d8f566 */
  if (C.zf) goto L_11d8f566;
  /* 11d8f54b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8f54e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11d8f551 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11d8f554 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8f557 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 11d8f55a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8f55d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 11d8f564 jmp 0x11d8f58b */
  goto L_11d8f58b;
L_11d8f566:;
  /* 11d8f566 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8f569 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11d8f56c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11d8f56f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8f572 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11d8f575 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8f578 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8f57b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8f57e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11d8f581 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8f584 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_11d8f58b:;
  /* 11d8f58b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8f58e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8f591 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11d8f594 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11d8f596 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8f599 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11d8f5a0 pop edi */
  EDI = (pop32());
  /* 11d8f5a1 pop esi */
  ESI = (pop32());
  /* 11d8f5a2 pop ebx */
  EBX = (pop32());
  /* 11d8f5a3 mov esp, ebp */
  ESP = (EBP);
  /* 11d8f5a5 pop ebp */
  EBP = (pop32());
  /* 11d8f5a6 ret  */
  ESPCHK(0x11d8f4e0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x11d8f5b0 (50 bytes, 17 insns) */
void f_11d8f5b0(void) {
  FTRACE(0x11d8f5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8f5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8f5b1 mov ebp, esp */
  EBP = (ESP);
  /* 11d8f5b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8f5b6 cmp eax, dword ptr [0x11db31fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11db31fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8f5bc jb 0x11d8f5c2 */
  if (C.cf) goto L_11d8f5c2;
  /* 11d8f5be xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8f5c0 jmp 0x11d8f5e0 */
  goto L_11d8f5e0;
L_11d8f5c2:;
  /* 11d8f5c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8f5c5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11d8f5c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8f5cb and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11d8f5ce imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d8f5d1 mov eax, dword ptr [ecx*4 + 0x11db30c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11db30c0)));
  /* 11d8f5d8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11d8f5dd and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_11d8f5e0:;
  /* 11d8f5e0 pop ebp */
  EBP = (pop32());
  /* 11d8f5e1 ret  */
  ESPCHK(0x11d8f5b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f5f0 @ 0x11d8f5f0 (300 bytes, 80 insns) */
void f_11d8f5f0(void) {
  FTRACE(0x11d8f5f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8f5f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8f5f1 mov ebp, esp */
  EBP = (ESP);
  /* 11d8f5f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8f5f4 cmp dword ptr [0x11db2dc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db2dc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8f5fb jne 0x11d8f609 */
  if (!C.zf) goto L_11d8f609;
  /* 11d8f5fd mov dword ptr [0x11db2dc0], 0x200 */
  w32((uint32_t)(0x11db2dc0), (0x200u));
  /* 11d8f607 jmp 0x11d8f61c */
  goto L_11d8f61c;
L_11d8f609:;
  /* 11d8f609 cmp dword ptr [0x11db2dc0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x11db2dc0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8f610 jge 0x11d8f61c */
  if ((C.sf==C.of)) goto L_11d8f61c;
  /* 11d8f612 mov dword ptr [0x11db2dc0], 0x14 */
  w32((uint32_t)(0x11db2dc0), (0x14u));
L_11d8f61c:;
  /* 11d8f61c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 11d8f621 push 0x11dad3e0 */
  push32((uint32_t)(0x11dad3e0u));
  /* 11d8f626 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d8f628 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d8f62a mov eax, dword ptr [0x11db2dc0] */
  EAX = (r32((uint32_t)(0x11db2dc0)));
  /* 11d8f62f push eax */
  push32((uint32_t)(EAX));
  /* 11d8f630 call 0x11d85ee0 */
  push32(0x11d8f635u); f_11d85ee0();
  /* 11d8f635 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8f638 mov dword ptr [0x11db1a68], eax */
  w32((uint32_t)(0x11db1a68), (EAX));
  /* 11d8f63d cmp dword ptr [0x11db1a68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1a68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8f644 jne 0x11d8f685 */
  if (!C.zf) goto L_11d8f685;
  /* 11d8f646 mov dword ptr [0x11db2dc0], 0x14 */
  w32((uint32_t)(0x11db2dc0), (0x14u));
  /* 11d8f650 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 11d8f655 push 0x11dad3e0 */
  push32((uint32_t)(0x11dad3e0u));
  /* 11d8f65a push 2 */
  push32((uint32_t)(0x2u));
  /* 11d8f65c push 4 */
  push32((uint32_t)(0x4u));
  /* 11d8f65e mov ecx, dword ptr [0x11db2dc0] */
  ECX = (r32((uint32_t)(0x11db2dc0)));
  /* 11d8f664 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8f665 call 0x11d85ee0 */
  push32(0x11d8f66au); f_11d85ee0();
  /* 11d8f66a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8f66d mov dword ptr [0x11db1a68], eax */
  w32((uint32_t)(0x11db1a68), (EAX));
  /* 11d8f672 cmp dword ptr [0x11db1a68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1a68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8f679 jne 0x11d8f685 */
  if (!C.zf) goto L_11d8f685;
  /* 11d8f67b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11d8f67d call 0x11d84950 */
  push32(0x11d8f682u); f_11d84950();
  /* 11d8f682 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d8f685:;
  /* 11d8f685 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d8f68c jmp 0x11d8f697 */
  goto L_11d8f697;
L_11d8f68e:;
  /* 11d8f68e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8f691 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8f694 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11d8f697:;
  /* 11d8f697 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8f69b jge 0x11d8f6b6 */
  if ((C.sf==C.of)) goto L_11d8f6b6;
  /* 11d8f69d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8f6a0 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11d8f6a3 add eax, 0x11db0240 */
  { uint32_t _a=(EAX),_b=(0x11db0240u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8f6a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8f6ab mov edx, dword ptr [0x11db1a68] */
  EDX = (r32((uint32_t)(0x11db1a68)));
  /* 11d8f6b1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11d8f6b4 jmp 0x11d8f68e */
  goto L_11d8f68e;
L_11d8f6b6:;
  /* 11d8f6b6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d8f6bd jmp 0x11d8f6c8 */
  goto L_11d8f6c8;
L_11d8f6bf:;
  /* 11d8f6bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8f6c2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8f6c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d8f6c8:;
  /* 11d8f6c8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8f6cc jge 0x11d8f718 */
  if ((C.sf==C.of)) goto L_11d8f718;
  /* 11d8f6ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8f6d1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11d8f6d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8f6d7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11d8f6da imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d8f6dd mov eax, dword ptr [ecx*4 + 0x11db30c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11db30c0)));
  /* 11d8f6e4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8f6e8 je 0x11d8f706 */
  if (C.zf) goto L_11d8f706;
  /* 11d8f6ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8f6ed sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11d8f6f0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8f6f3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11d8f6f6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d8f6f9 mov eax, dword ptr [ecx*4 + 0x11db30c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11db30c0)));
  /* 11d8f700 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8f704 jne 0x11d8f716 */
  if (!C.zf) goto L_11d8f716;
L_11d8f706:;
  /* 11d8f706 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8f709 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11d8f70c mov dword ptr [ecx + 0x11db0250], 0xffffffff */
  w32((uint32_t)(ECX + 0x11db0250), (0xffffffffu));
L_11d8f716:;
  /* 11d8f716 jmp 0x11d8f6bf */
  goto L_11d8f6bf;
L_11d8f718:;
  /* 11d8f718 mov esp, ebp */
  ESP = (EBP);
  /* 11d8f71a pop ebp */
  EBP = (pop32());
  /* 11d8f71b ret  */
  ESPCHK(0x11d8f5f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f720 @ 0x11d8f720 (26 bytes, 9 insns) */
void f_11d8f720(void) {
  FTRACE(0x11d8f720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8f720 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8f721 mov ebp, esp */
  EBP = (ESP);
  /* 11d8f723 call 0x11d90bc0 */
  push32(0x11d8f728u); f_11d90bc0();
  /* 11d8f728 movsx eax, byte ptr [0x11db1710] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11db1710))));
  /* 11d8f72f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8f731 je 0x11d8f738 */
  if (C.zf) goto L_11d8f738;
  /* 11d8f733 call 0x11d90980 */
  push32(0x11d8f738u); f_11d90980();
L_11d8f738:;
  /* 11d8f738 pop ebp */
  EBP = (pop32());
  /* 11d8f739 ret  */
  ESPCHK(0x11d8f720u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f740 @ 0x11d8f740 (61 bytes, 20 insns) */
void f_11d8f740(void) {
  FTRACE(0x11d8f740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8f740 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8f741 mov ebp, esp */
  EBP = (ESP);
  /* 11d8f743 cmp dword ptr [ebp + 8], 0x11db0240 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11db0240u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8f74a jb 0x11d8f76e */
  if (C.cf) goto L_11d8f76e;
  /* 11d8f74c cmp dword ptr [ebp + 8], 0x11db04a0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11db04a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8f753 ja 0x11d8f76e */
  if ((!C.cf&&!C.zf)) goto L_11d8f76e;
  /* 11d8f755 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8f758 sub eax, 0x11db0240 */
  { uint32_t _a=(EAX),_b=(0x11db0240u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8f75d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11d8f760 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8f763 push eax */
  push32((uint32_t)(EAX));
  /* 11d8f764 call 0x11d886f0 */
  push32(0x11d8f769u); f_11d886f0();
  /* 11d8f769 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8f76c jmp 0x11d8f77b */
  goto L_11d8f77b;
L_11d8f76e:;
  /* 11d8f76e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8f771 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8f774 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8f775 call dword ptr [0x11db4348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4348))), 0x11d8f77bu);
L_11d8f77b:;
  /* 11d8f77b pop ebp */
  EBP = (pop32());
  /* 11d8f77c ret  */
  ESPCHK(0x11d8f740u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f780 @ 0x11d8f780 (41 bytes, 16 insns) */
void f_11d8f780(void) {
  FTRACE(0x11d8f780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8f780 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8f781 mov ebp, esp */
  EBP = (ESP);
  /* 11d8f783 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8f787 jge 0x11d8f79a */
  if ((C.sf==C.of)) goto L_11d8f79a;
  /* 11d8f789 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8f78c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8f78f push eax */
  push32((uint32_t)(EAX));
  /* 11d8f790 call 0x11d886f0 */
  push32(0x11d8f795u); f_11d886f0();
  /* 11d8f795 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8f798 jmp 0x11d8f7a7 */
  goto L_11d8f7a7;
L_11d8f79a:;
  /* 11d8f79a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8f79d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8f7a0 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8f7a1 call dword ptr [0x11db4348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4348))), 0x11d8f7a7u);
L_11d8f7a7:;
  /* 11d8f7a7 pop ebp */
  EBP = (pop32());
  /* 11d8f7a8 ret  */
  ESPCHK(0x11d8f780u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f7b0 @ 0x11d8f7b0 (61 bytes, 20 insns) */
void f_11d8f7b0(void) {
  FTRACE(0x11d8f7b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8f7b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8f7b1 mov ebp, esp */
  EBP = (ESP);
  /* 11d8f7b3 cmp dword ptr [ebp + 8], 0x11db0240 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11db0240u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8f7ba jb 0x11d8f7de */
  if (C.cf) goto L_11d8f7de;
  /* 11d8f7bc cmp dword ptr [ebp + 8], 0x11db04a0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11db04a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8f7c3 ja 0x11d8f7de */
  if ((!C.cf&&!C.zf)) goto L_11d8f7de;
  /* 11d8f7c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8f7c8 sub eax, 0x11db0240 */
  { uint32_t _a=(EAX),_b=(0x11db0240u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8f7cd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11d8f7d0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8f7d3 push eax */
  push32((uint32_t)(EAX));
  /* 11d8f7d4 call 0x11d88790 */
  push32(0x11d8f7d9u); f_11d88790();
  /* 11d8f7d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8f7dc jmp 0x11d8f7eb */
  goto L_11d8f7eb;
L_11d8f7de:;
  /* 11d8f7de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8f7e1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8f7e4 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8f7e5 call dword ptr [0x11db4344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4344))), 0x11d8f7ebu);
L_11d8f7eb:;
  /* 11d8f7eb pop ebp */
  EBP = (pop32());
  /* 11d8f7ec ret  */
  ESPCHK(0x11d8f7b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f7f0 @ 0x11d8f7f0 (41 bytes, 16 insns) */
void f_11d8f7f0(void) {
  FTRACE(0x11d8f7f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8f7f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8f7f1 mov ebp, esp */
  EBP = (ESP);
  /* 11d8f7f3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8f7f7 jge 0x11d8f80a */
  if ((C.sf==C.of)) goto L_11d8f80a;
  /* 11d8f7f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8f7fc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8f7ff push eax */
  push32((uint32_t)(EAX));
  /* 11d8f800 call 0x11d88790 */
  push32(0x11d8f805u); f_11d88790();
  /* 11d8f805 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8f808 jmp 0x11d8f817 */
  goto L_11d8f817;
L_11d8f80a:;
  /* 11d8f80a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8f80d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8f810 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8f811 call dword ptr [0x11db4344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4344))), 0x11d8f817u);
L_11d8f817:;
  /* 11d8f817 pop ebp */
  EBP = (pop32());
  /* 11d8f818 ret  */
  ESPCHK(0x11d8f7f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f820 @ 0x11d8f820 (119 bytes, 34 insns) */
void f_11d8f820(void) {
  FTRACE(0x11d8f820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8f820 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8f821 mov ebp, esp */
  EBP = (ESP);
  /* 11d8f823 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8f826 push 0x11db1a64 */
  push32((uint32_t)(0x11db1a64u));
  /* 11d8f82b call dword ptr [0x11db43c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43c4))), 0x11d8f831u);
  /* 11d8f831 cmp dword ptr [0x11db1a54], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1a54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8f838 je 0x11d8f858 */
  if (C.zf) goto L_11d8f858;
  /* 11d8f83a push 0x11db1a64 */
  push32((uint32_t)(0x11db1a64u));
  /* 11d8f83f call dword ptr [0x11db43b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43b4))), 0x11d8f845u);
  /* 11d8f845 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11d8f847 call 0x11d886f0 */
  push32(0x11d8f84cu); f_11d886f0();
  /* 11d8f84c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8f84f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11d8f856 jmp 0x11d8f85f */
  goto L_11d8f85f;
L_11d8f858:;
  /* 11d8f858 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11d8f85f:;
  /* 11d8f85f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 11d8f863 push eax */
  push32((uint32_t)(EAX));
  /* 11d8f864 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8f867 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8f868 call 0x11d8f8a0 */
  push32(0x11d8f86du); f_11d8f8a0();
  /* 11d8f86d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8f870 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d8f873 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8f877 je 0x11d8f885 */
  if (C.zf) goto L_11d8f885;
  /* 11d8f879 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11d8f87b call 0x11d88790 */
  push32(0x11d8f880u); f_11d88790();
  /* 11d8f880 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8f883 jmp 0x11d8f890 */
  goto L_11d8f890;
L_11d8f885:;
  /* 11d8f885 push 0x11db1a64 */
  push32((uint32_t)(0x11db1a64u));
  /* 11d8f88a call dword ptr [0x11db43b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43b4))), 0x11d8f890u);
L_11d8f890:;
  /* 11d8f890 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8f893 mov esp, ebp */
  ESP = (EBP);
  /* 11d8f895 pop ebp */
  EBP = (pop32());
  /* 11d8f896 ret  */
  ESPCHK(0x11d8f820u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f8a0 @ 0x11d8f8a0 (160 bytes, 50 insns) */
void f_11d8f8a0(void) {
  FTRACE(0x11d8f8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8f8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8f8a1 mov ebp, esp */
  EBP = (ESP);
  /* 11d8f8a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8f8a6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8f8aa jne 0x11d8f8b3 */
  if (!C.zf) goto L_11d8f8b3;
  /* 11d8f8ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8f8ae jmp 0x11d8f93c */
  goto L_11d8f93c;
L_11d8f8b3:;
  /* 11d8f8b3 cmp dword ptr [0x11db1990], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1990))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8f8ba jne 0x11d8f8ea */
  if (!C.zf) goto L_11d8f8ea;
  /* 11d8f8bc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8f8bf and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d8f8c4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8f8c9 jle 0x11d8f8db */
  if ((C.zf||C.sf!=C.of)) goto L_11d8f8db;
  /* 11d8f8cb call 0x11d8e6c0 */
  push32(0x11d8f8d0u); f_11d8e6c0();
  /* 11d8f8d0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 11d8f8d6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d8f8d9 jmp 0x11d8f93c */
  goto L_11d8f93c;
L_11d8f8db:;
  /* 11d8f8db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8f8de mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 11d8f8e1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11d8f8e3 mov eax, 1 */
  EAX = (0x1u);
  /* 11d8f8e8 jmp 0x11d8f93c */
  goto L_11d8f93c;
L_11d8f8ea:;
  /* 11d8f8ea mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11d8f8f1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11d8f8f4 push eax */
  push32((uint32_t)(EAX));
  /* 11d8f8f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8f8f7 mov ecx, dword ptr [0x11daffc4] */
  ECX = (r32((uint32_t)(0x11daffc4)));
  /* 11d8f8fd push ecx */
  push32((uint32_t)(ECX));
  /* 11d8f8fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8f901 push edx */
  push32((uint32_t)(EDX));
  /* 11d8f902 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d8f904 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 11d8f907 push eax */
  push32((uint32_t)(EAX));
  /* 11d8f908 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11d8f90d mov ecx, dword ptr [0x11db19a0] */
  ECX = (r32((uint32_t)(0x11db19a0)));
  /* 11d8f913 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8f914 call dword ptr [0x11db4368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4368))), 0x11d8f91au);
  /* 11d8f91a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d8f91d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8f921 je 0x11d8f929 */
  if (C.zf) goto L_11d8f929;
  /* 11d8f923 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8f927 je 0x11d8f939 */
  if (C.zf) goto L_11d8f939;
L_11d8f929:;
  /* 11d8f929 call 0x11d8e6c0 */
  push32(0x11d8f92eu); f_11d8e6c0();
  /* 11d8f92e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 11d8f934 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d8f937 jmp 0x11d8f93c */
  goto L_11d8f93c;
L_11d8f939:;
  /* 11d8f939 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11d8f93c:;
  /* 11d8f93c mov esp, ebp */
  ESP = (EBP);
  /* 11d8f93e pop ebp */
  EBP = (pop32());
  /* 11d8f93f ret  */
  ESPCHK(0x11d8f8a0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x11d8f940 (32 bytes, 18 insns) */
void f_11d8f940(void) {
  FTRACE(0x11d8f940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8f940 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8f941 mov ebp, esp */
  EBP = (ESP);
  /* 11d8f943 push ebx */
  push32((uint32_t)(EBX));
  /* 11d8f944 push esi */
  push32((uint32_t)(ESI));
  /* 11d8f945 push edi */
  push32((uint32_t)(EDI));
  /* 11d8f946 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8f947 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8f949 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8f94b push 0x11d8f958 */
  push32((uint32_t)(0x11d8f958u));
  /* 11d8f950 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11d8f953 call 0x11d9623e */
  push32(0x11d8f958u); f_11d9623e();
  /* 11d8f958 pop ebp */
  EBP = (pop32());
  /* 11d8f959 pop edi */
  EDI = (pop32());
  /* 11d8f95a pop esi */
  ESI = (pop32());
  /* 11d8f95b pop ebx */
  EBX = (pop32());
  /* 11d8f95c mov esp, ebp */
  ESP = (EBP);
  /* 11d8f95e pop ebp */
  EBP = (pop32());
  /* 11d8f95f ret  */
  ESPCHK(0x11d8f940u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x11d8f982 (104 bytes, 33 insns) */
void f_11d8f982(void) {
  FTRACE(0x11d8f982u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8f982 push ebx */
  push32((uint32_t)(EBX));
  /* 11d8f983 push esi */
  push32((uint32_t)(ESI));
  /* 11d8f984 push edi */
  push32((uint32_t)(EDI));
  /* 11d8f985 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11d8f989 push eax */
  push32((uint32_t)(EAX));
  /* 11d8f98a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 11d8f98c push 0x11d8f960 */
  push32((uint32_t)(0x11d8f960u));
  /* 11d8f991 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 11d8f998 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_11d8f99f:;
  /* 11d8f99f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 11d8f9a3 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 11d8f9a6 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11d8f9a9 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8f9ac je 0x11d8f9dc */
  if (C.zf) goto L_11d8f9dc;
  /* 11d8f9ae cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8f9b2 je 0x11d8f9dc */
  if (C.zf) goto L_11d8f9dc;
  /* 11d8f9b4 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 11d8f9b7 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 11d8f9ba mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 11d8f9be mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11d8f9c1 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8f9c6 jne 0x11d8f9da */
  if (!C.zf) goto L_11d8f9da;
  /* 11d8f9c8 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11d8f9cd mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 11d8f9d1 call 0x11d8fa16 */
  push32(0x11d8f9d6u); f_11d8fa16();
  /* 11d8f9d6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x11d8f9dau);
L_11d8f9da:;
  /* 11d8f9da jmp 0x11d8f99f */
  goto L_11d8f99f;
L_11d8f9dc:;
  /* 11d8f9dc pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 11d8f9e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8f9e6 pop edi */
  EDI = (pop32());
  /* 11d8f9e7 pop esi */
  ESI = (pop32());
  /* 11d8f9e8 pop ebx */
  EBX = (pop32());
  /* 11d8f9e9 ret  */
  ESPCHK(0x11d8f982u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fa16 @ 0x11d8fa16 (24 bytes, 10 insns) */
void f_11d8fa16(void) {
  FTRACE(0x11d8fa16u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8fa16 push ebx */
  push32((uint32_t)(EBX));
  /* 11d8fa17 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8fa18 mov ebx, 0x11db04d8 */
  EBX = (0x11db04d8u);
  /* 11d8fa1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8fa20 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11d8fa23 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11d8fa26 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 11d8fa29 pop ecx */
  ECX = (pop32());
  /* 11d8fa2a pop ebx */
  EBX = (pop32());
  /* 11d8fa2b ret 4 */
  ESPCHK(0x11d8fa16u, _esp0);
  ESP += 8; return;
}

/* FUN_1000faf5 @ 0x11d8faf5 (27 bytes, 11 insns) */
void f_11d8faf5(void) {
  FTRACE(0x11d8faf5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8faf5 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8faf6 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d8fafa mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 11d8fafc mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11d8faff push eax */
  push32((uint32_t)(EAX));
  /* 11d8fb00 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 11d8fb03 push eax */
  push32((uint32_t)(EAX));
  /* 11d8fb04 call 0x11d8f982 */
  push32(0x11d8fb09u); f_11d8f982();
  /* 11d8fb09 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8fb0c pop ebp */
  EBP = (pop32());
  /* 11d8fb0d ret 4 */
  ESPCHK(0x11d8faf5u, _esp0);
  ESP += 8; return;
}

/* FUN_1000fb10 @ 0x11d8fb10 (970 bytes, 340 insns) */
void f_11d8fb10(void) {
  FTRACE(0x11d8fb10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8fb10 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8fb11 mov ebp, esp */
  EBP = (ESP);
  /* 11d8fb13 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11d8fb15 push 0x11dad430 */
  push32((uint32_t)(0x11dad430u));
  /* 11d8fb1a push 0x11d8fa38 */
  push32((uint32_t)(0x11d8fa38u));
  /* 11d8fb1f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11d8fb25 push eax */
  push32((uint32_t)(EAX));
  /* 11d8fb26 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11d8fb2d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8fb30 push ebx */
  push32((uint32_t)(EBX));
  /* 11d8fb31 push esi */
  push32((uint32_t)(ESI));
  /* 11d8fb32 push edi */
  push32((uint32_t)(EDI));
  /* 11d8fb33 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11d8fb36 cmp dword ptr [0x11db19b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db19b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8fb3d jne 0x11d8fb96 */
  if (!C.zf) goto L_11d8fb96;
  /* 11d8fb3f push 1 */
  push32((uint32_t)(0x1u));
  /* 11d8fb41 push 0x11dad398 */
  push32((uint32_t)(0x11dad398u));
  /* 11d8fb46 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d8fb48 push 0x11dad398 */
  push32((uint32_t)(0x11dad398u));
  /* 11d8fb4d push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8fb4f push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8fb51 call dword ptr [0x11db42fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db42fc))), 0x11d8fb57u);
  /* 11d8fb57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8fb59 je 0x11d8fb67 */
  if (C.zf) goto L_11d8fb67;
  /* 11d8fb5b mov dword ptr [0x11db19b4], 1 */
  w32((uint32_t)(0x11db19b4), (0x1u));
  /* 11d8fb65 jmp 0x11d8fb96 */
  goto L_11d8fb96;
L_11d8fb67:;
  /* 11d8fb67 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d8fb69 push 0x11dad394 */
  push32((uint32_t)(0x11dad394u));
  /* 11d8fb6e push 1 */
  push32((uint32_t)(0x1u));
  /* 11d8fb70 push 0x11dad394 */
  push32((uint32_t)(0x11dad394u));
  /* 11d8fb75 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8fb77 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8fb79 call dword ptr [0x11db4300] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4300))), 0x11d8fb7fu);
  /* 11d8fb7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8fb81 je 0x11d8fb8f */
  if (C.zf) goto L_11d8fb8f;
  /* 11d8fb83 mov dword ptr [0x11db19b4], 2 */
  w32((uint32_t)(0x11db19b4), (0x2u));
  /* 11d8fb8d jmp 0x11d8fb96 */
  goto L_11d8fb96;
L_11d8fb8f:;
  /* 11d8fb8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8fb91 jmp 0x11d8fef4 */
  goto L_11d8fef4;
L_11d8fb96:;
  /* 11d8fb96 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8fb9a jle 0x11d8fbaf */
  if ((C.zf||C.sf!=C.of)) goto L_11d8fbaf;
  /* 11d8fb9c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d8fb9f push eax */
  push32((uint32_t)(EAX));
  /* 11d8fba0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d8fba3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8fba4 call 0x11d8ff10 */
  push32(0x11d8fba9u); f_11d8ff10();
  /* 11d8fba9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8fbac mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11d8fbaf:;
  /* 11d8fbaf cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8fbb3 jle 0x11d8fbc8 */
  if ((C.zf||C.sf!=C.of)) goto L_11d8fbc8;
  /* 11d8fbb5 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11d8fbb8 push edx */
  push32((uint32_t)(EDX));
  /* 11d8fbb9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d8fbbc push eax */
  push32((uint32_t)(EAX));
  /* 11d8fbbd call 0x11d8ff10 */
  push32(0x11d8fbc2u); f_11d8ff10();
  /* 11d8fbc2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8fbc5 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_11d8fbc8:;
  /* 11d8fbc8 cmp dword ptr [0x11db19b4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11db19b4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8fbcf jne 0x11d8fbf4 */
  if (!C.zf) goto L_11d8fbf4;
  /* 11d8fbd1 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11d8fbd4 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8fbd5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d8fbd8 push edx */
  push32((uint32_t)(EDX));
  /* 11d8fbd9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d8fbdc push eax */
  push32((uint32_t)(EAX));
  /* 11d8fbdd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d8fbe0 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8fbe1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8fbe4 push edx */
  push32((uint32_t)(EDX));
  /* 11d8fbe5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8fbe8 push eax */
  push32((uint32_t)(EAX));
  /* 11d8fbe9 call dword ptr [0x11db4300] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4300))), 0x11d8fbefu);
  /* 11d8fbef jmp 0x11d8fef4 */
  goto L_11d8fef4;
L_11d8fbf4:;
  /* 11d8fbf4 cmp dword ptr [0x11db19b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11db19b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8fbfb jne 0x11d8fef2 */
  if (!C.zf) goto L_11d8fef2;
  /* 11d8fc01 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8fc05 jne 0x11d8fc10 */
  if (!C.zf) goto L_11d8fc10;
  /* 11d8fc07 mov ecx, dword ptr [0x11db19a0] */
  ECX = (r32((uint32_t)(0x11db19a0)));
  /* 11d8fc0d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_11d8fc10:;
  /* 11d8fc10 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8fc14 je 0x11d8fc20 */
  if (C.zf) goto L_11d8fc20;
  /* 11d8fc16 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8fc1a jne 0x11d8fd9c */
  if (!C.zf) goto L_11d8fd9c;
L_11d8fc20:;
  /* 11d8fc20 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d8fc23 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8fc26 jne 0x11d8fc32 */
  if (!C.zf) goto L_11d8fc32;
  /* 11d8fc28 mov eax, 2 */
  EAX = (0x2u);
  /* 11d8fc2d jmp 0x11d8fef4 */
  goto L_11d8fef4;
L_11d8fc32:;
  /* 11d8fc32 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8fc36 jle 0x11d8fc42 */
  if ((C.zf||C.sf!=C.of)) goto L_11d8fc42;
  /* 11d8fc38 mov eax, 1 */
  EAX = (0x1u);
  /* 11d8fc3d jmp 0x11d8fef4 */
  goto L_11d8fef4;
L_11d8fc42:;
  /* 11d8fc42 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8fc46 jle 0x11d8fc52 */
  if ((C.zf||C.sf!=C.of)) goto L_11d8fc52;
  /* 11d8fc48 mov eax, 3 */
  EAX = (0x3u);
  /* 11d8fc4d jmp 0x11d8fef4 */
  goto L_11d8fef4;
L_11d8fc52:;
  /* 11d8fc52 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 11d8fc55 push eax */
  push32((uint32_t)(EAX));
  /* 11d8fc56 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11d8fc59 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8fc5a call dword ptr [0x11db4328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4328))), 0x11d8fc60u);
  /* 11d8fc60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8fc62 jne 0x11d8fc6b */
  if (!C.zf) goto L_11d8fc6b;
  /* 11d8fc64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8fc66 jmp 0x11d8fef4 */
  goto L_11d8fef4;
L_11d8fc6b:;
  /* 11d8fc6b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8fc6f jne 0x11d8fc77 */
  if (!C.zf) goto L_11d8fc77;
  /* 11d8fc71 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8fc75 je 0x11d8fca4 */
  if (C.zf) goto L_11d8fca4;
L_11d8fc77:;
  /* 11d8fc77 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8fc7b jne 0x11d8fc83 */
  if (!C.zf) goto L_11d8fc83;
  /* 11d8fc7d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8fc81 je 0x11d8fca4 */
  if (C.zf) goto L_11d8fca4;
L_11d8fc83:;
  /* 11d8fc83 push 0x11dad3f0 */
  push32((uint32_t)(0x11dad3f0u));
  /* 11d8fc88 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8fc8a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 11d8fc8f push 0x11dad3e8 */
  push32((uint32_t)(0x11dad3e8u));
  /* 11d8fc94 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d8fc96 call 0x11d84e40 */
  push32(0x11d8fc9bu); f_11d84e40();
  /* 11d8fc9b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8fc9e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8fca1 jne 0x11d8fca4 */
  if (!C.zf) goto L_11d8fca4;
  /* 11d8fca3 int3  */
  x86_unimpl("int3 @ 0x11d8fca3");
L_11d8fca4:;
  /* 11d8fca4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d8fca6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d8fca8 jne 0x11d8fc6b */
  if (!C.zf) goto L_11d8fc6b;
  /* 11d8fcaa cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8fcae jle 0x11d8fd23 */
  if ((C.zf||C.sf!=C.of)) goto L_11d8fd23;
  /* 11d8fcb0 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8fcb4 jae 0x11d8fcc0 */
  if (!C.cf) goto L_11d8fcc0;
  /* 11d8fcb6 mov eax, 3 */
  EAX = (0x3u);
  /* 11d8fcbb jmp 0x11d8fef4 */
  goto L_11d8fef4;
L_11d8fcc0:;
  /* 11d8fcc0 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 11d8fcc3 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 11d8fcc6 jmp 0x11d8fcd1 */
  goto L_11d8fcd1;
L_11d8fcc8:;
  /* 11d8fcc8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11d8fccb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8fcce mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_11d8fcd1:;
  /* 11d8fcd1 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11d8fcd4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8fcd6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d8fcd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8fcda je 0x11d8fd19 */
  if (C.zf) goto L_11d8fd19;
  /* 11d8fcdc mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11d8fcdf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d8fce1 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11d8fce4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d8fce6 je 0x11d8fd19 */
  if (C.zf) goto L_11d8fd19;
  /* 11d8fce8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d8fceb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d8fced mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11d8fcef mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11d8fcf2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8fcf4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d8fcf6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8fcf8 jl 0x11d8fd17 */
  if ((C.sf!=C.of)) goto L_11d8fd17;
  /* 11d8fcfa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d8fcfd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d8fcff mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11d8fd01 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11d8fd04 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d8fd06 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11d8fd09 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8fd0b jg 0x11d8fd17 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d8fd17;
  /* 11d8fd0d mov eax, 2 */
  EAX = (0x2u);
  /* 11d8fd12 jmp 0x11d8fef4 */
  goto L_11d8fef4;
L_11d8fd17:;
  /* 11d8fd17 jmp 0x11d8fcc8 */
  goto L_11d8fcc8;
L_11d8fd19:;
  /* 11d8fd19 mov eax, 3 */
  EAX = (0x3u);
  /* 11d8fd1e jmp 0x11d8fef4 */
  goto L_11d8fef4;
L_11d8fd23:;
  /* 11d8fd23 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8fd27 jle 0x11d8fd9c */
  if ((C.zf||C.sf!=C.of)) goto L_11d8fd9c;
  /* 11d8fd29 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8fd2d jae 0x11d8fd39 */
  if (!C.cf) goto L_11d8fd39;
  /* 11d8fd2f mov eax, 1 */
  EAX = (0x1u);
  /* 11d8fd34 jmp 0x11d8fef4 */
  goto L_11d8fef4;
L_11d8fd39:;
  /* 11d8fd39 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 11d8fd3c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 11d8fd3f jmp 0x11d8fd4a */
  goto L_11d8fd4a;
L_11d8fd41:;
  /* 11d8fd41 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11d8fd44 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8fd47 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_11d8fd4a:;
  /* 11d8fd4a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11d8fd4d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d8fd4f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11d8fd51 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d8fd53 je 0x11d8fd92 */
  if (C.zf) goto L_11d8fd92;
  /* 11d8fd55 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11d8fd58 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d8fd5a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11d8fd5d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d8fd5f je 0x11d8fd92 */
  if (C.zf) goto L_11d8fd92;
  /* 11d8fd61 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d8fd64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8fd66 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d8fd68 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11d8fd6b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d8fd6d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11d8fd6f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8fd71 jl 0x11d8fd90 */
  if ((C.sf!=C.of)) goto L_11d8fd90;
  /* 11d8fd73 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d8fd76 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d8fd78 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11d8fd7a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11d8fd7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8fd7f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11d8fd82 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8fd84 jg 0x11d8fd90 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d8fd90;
  /* 11d8fd86 mov eax, 2 */
  EAX = (0x2u);
  /* 11d8fd8b jmp 0x11d8fef4 */
  goto L_11d8fef4;
L_11d8fd90:;
  /* 11d8fd90 jmp 0x11d8fd41 */
  goto L_11d8fd41;
L_11d8fd92:;
  /* 11d8fd92 mov eax, 1 */
  EAX = (0x1u);
  /* 11d8fd97 jmp 0x11d8fef4 */
  goto L_11d8fef4;
L_11d8fd9c:;
  /* 11d8fd9c push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8fd9e push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8fda0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d8fda3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8fda4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d8fda7 push edx */
  push32((uint32_t)(EDX));
  /* 11d8fda8 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d8fdaa mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11d8fdad push eax */
  push32((uint32_t)(EAX));
  /* 11d8fdae call dword ptr [0x11db431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db431c))), 0x11d8fdb4u);
  /* 11d8fdb4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11d8fdb7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8fdbb jne 0x11d8fdc4 */
  if (!C.zf) goto L_11d8fdc4;
  /* 11d8fdbd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8fdbf jmp 0x11d8fef4 */
  goto L_11d8fef4;
L_11d8fdc4:;
  /* 11d8fdc4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d8fdcb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d8fdce shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11d8fdd0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8fdd3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11d8fdd5 call 0x11d89990 */
  push32(0x11d8fddau); f_11d89990();
  /* 11d8fdda mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 11d8fddd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11d8fde0 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11d8fde3 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11d8fde6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11d8fded jmp 0x11d8fe06 */
  goto L_11d8fe06;
  /* 11d8fdef mov eax, 1 */
  EAX = (0x1u);
  /* 11d8fdf4 ret  */
  ESPCHK(0x11d8fb10u, _esp0);
  ESP += 4; return;
  /* 11d8fdf5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8fdf8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11d8fdff mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11d8fe06:;
  /* 11d8fe06 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8fe0a jne 0x11d8fe13 */
  if (!C.zf) goto L_11d8fe13;
  /* 11d8fe0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8fe0e jmp 0x11d8fef4 */
  goto L_11d8fef4;
L_11d8fe13:;
  /* 11d8fe13 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d8fe16 push edx */
  push32((uint32_t)(EDX));
  /* 11d8fe17 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8fe1a push eax */
  push32((uint32_t)(EAX));
  /* 11d8fe1b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d8fe1e push ecx */
  push32((uint32_t)(ECX));
  /* 11d8fe1f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d8fe22 push edx */
  push32((uint32_t)(EDX));
  /* 11d8fe23 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d8fe25 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11d8fe28 push eax */
  push32((uint32_t)(EAX));
  /* 11d8fe29 call dword ptr [0x11db431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db431c))), 0x11d8fe2fu);
  /* 11d8fe2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8fe31 jne 0x11d8fe3a */
  if (!C.zf) goto L_11d8fe3a;
  /* 11d8fe33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8fe35 jmp 0x11d8fef4 */
  goto L_11d8fef4;
L_11d8fe3a:;
  /* 11d8fe3a push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8fe3c push 0 */
  push32((uint32_t)(0x0u));
  /* 11d8fe3e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11d8fe41 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8fe42 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d8fe45 push edx */
  push32((uint32_t)(EDX));
  /* 11d8fe46 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d8fe48 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11d8fe4b push eax */
  push32((uint32_t)(EAX));
  /* 11d8fe4c call dword ptr [0x11db431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db431c))), 0x11d8fe52u);
  /* 11d8fe52 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11d8fe55 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8fe59 jne 0x11d8fe62 */
  if (!C.zf) goto L_11d8fe62;
  /* 11d8fe5b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8fe5d jmp 0x11d8fef4 */
  goto L_11d8fef4;
L_11d8fe62:;
  /* 11d8fe62 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11d8fe69 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d8fe6c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11d8fe6e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8fe71 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11d8fe73 call 0x11d89990 */
  push32(0x11d8fe78u); f_11d89990();
  /* 11d8fe78 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 11d8fe7b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11d8fe7e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11d8fe81 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11d8fe84 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11d8fe8b jmp 0x11d8fea4 */
  goto L_11d8fea4;
  /* 11d8fe8d mov eax, 1 */
  EAX = (0x1u);
  /* 11d8fe92 ret  */
  ESPCHK(0x11d8fb10u, _esp0);
  ESP += 4; return;
  /* 11d8fe93 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8fe96 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11d8fe9d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11d8fea4:;
  /* 11d8fea4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8fea8 jne 0x11d8feae */
  if (!C.zf) goto L_11d8feae;
  /* 11d8feaa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8feac jmp 0x11d8fef4 */
  goto L_11d8fef4;
L_11d8feae:;
  /* 11d8feae mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d8feb1 push edx */
  push32((uint32_t)(EDX));
  /* 11d8feb2 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d8feb5 push eax */
  push32((uint32_t)(EAX));
  /* 11d8feb6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11d8feb9 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8feba mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d8febd push edx */
  push32((uint32_t)(EDX));
  /* 11d8febe push 1 */
  push32((uint32_t)(0x1u));
  /* 11d8fec0 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11d8fec3 push eax */
  push32((uint32_t)(EAX));
  /* 11d8fec4 call dword ptr [0x11db431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db431c))), 0x11d8fecau);
  /* 11d8feca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8fecc jne 0x11d8fed2 */
  if (!C.zf) goto L_11d8fed2;
  /* 11d8fece xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8fed0 jmp 0x11d8fef4 */
  goto L_11d8fef4;
L_11d8fed2:;
  /* 11d8fed2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d8fed5 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8fed6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d8fed9 push edx */
  push32((uint32_t)(EDX));
  /* 11d8feda mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d8fedd push eax */
  push32((uint32_t)(EAX));
  /* 11d8fede mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d8fee1 push ecx */
  push32((uint32_t)(ECX));
  /* 11d8fee2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8fee5 push edx */
  push32((uint32_t)(EDX));
  /* 11d8fee6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8fee9 push eax */
  push32((uint32_t)(EAX));
  /* 11d8feea call dword ptr [0x11db42fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db42fc))), 0x11d8fef0u);
  /* 11d8fef0 jmp 0x11d8fef4 */
  goto L_11d8fef4;
L_11d8fef2:;
  /* 11d8fef2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d8fef4:;
  /* 11d8fef4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 11d8fef7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d8fefa mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11d8ff01 pop edi */
  EDI = (pop32());
  /* 11d8ff02 pop esi */
  ESI = (pop32());
  /* 11d8ff03 pop ebx */
  EBX = (pop32());
  /* 11d8ff04 mov esp, ebp */
  ESP = (EBP);
  /* 11d8ff06 pop ebp */
  EBP = (pop32());
  /* 11d8ff07 ret  */
  ESPCHK(0x11d8fb10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ff10 @ 0x11d8ff10 (80 bytes, 32 insns) */
void f_11d8ff10(void) {
  FTRACE(0x11d8ff10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8ff10 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8ff11 mov ebp, esp */
  EBP = (ESP);
  /* 11d8ff13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8ff16 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d8ff19 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d8ff1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8ff1f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11d8ff22:;
  /* 11d8ff22 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8ff25 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d8ff28 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8ff2b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d8ff2e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d8ff30 je 0x11d8ff47 */
  if (C.zf) goto L_11d8ff47;
  /* 11d8ff32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8ff35 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11d8ff38 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d8ff3a je 0x11d8ff47 */
  if (C.zf) goto L_11d8ff47;
  /* 11d8ff3c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8ff3f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8ff42 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d8ff45 jmp 0x11d8ff22 */
  goto L_11d8ff22;
L_11d8ff47:;
  /* 11d8ff47 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8ff4a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11d8ff4d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d8ff4f jne 0x11d8ff59 */
  if (!C.zf) goto L_11d8ff59;
  /* 11d8ff51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d8ff54 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8ff57 jmp 0x11d8ff5c */
  goto L_11d8ff5c;
L_11d8ff59:;
  /* 11d8ff59 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11d8ff5c:;
  /* 11d8ff5c mov esp, ebp */
  ESP = (EBP);
  /* 11d8ff5e pop ebp */
  EBP = (pop32());
  /* 11d8ff5f ret  */
  ESPCHK(0x11d8ff10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ff60 @ 0x11d8ff60 (736 bytes, 224 insns) */
void f_11d8ff60(void) {
  FTRACE(0x11d8ff60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d8ff60 push ebp */
  push32((uint32_t)(EBP));
  /* 11d8ff61 mov ebp, esp */
  EBP = (ESP);
  /* 11d8ff63 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8ff66 push esi */
  push32((uint32_t)(ESI));
  /* 11d8ff67 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8ff6b je 0x11d8ff8c */
  if (C.zf) goto L_11d8ff8c;
  /* 11d8ff6d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11d8ff6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8ff72 push eax */
  push32((uint32_t)(EAX));
  /* 11d8ff73 call 0x11d91770 */
  push32(0x11d8ff78u); f_11d91770();
  /* 11d8ff78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8ff7b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11d8ff7e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8ff82 je 0x11d8ff8c */
  if (C.zf) goto L_11d8ff8c;
  /* 11d8ff84 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d8ff87 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8ff8a jne 0x11d8ff94 */
  if (!C.zf) goto L_11d8ff94;
L_11d8ff8c:;
  /* 11d8ff8c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d8ff8f jmp 0x11d9023b */
  goto L_11d9023b;
L_11d8ff94:;
  /* 11d8ff94 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d8ff97 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11d8ff9b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d8ff9d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d8ff9f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11d8ffa0 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11d8ffa3 mov ecx, dword ptr [0x11db16f8] */
  ECX = (r32((uint32_t)(0x11db16f8)));
  /* 11d8ffa9 cmp ecx, dword ptr [0x11db16fc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11db16fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8ffaf jne 0x11d8ffc5 */
  if (!C.zf) goto L_11d8ffc5;
  /* 11d8ffb1 mov edx, dword ptr [0x11db16f8] */
  EDX = (r32((uint32_t)(0x11db16f8)));
  /* 11d8ffb7 push edx */
  push32((uint32_t)(EDX));
  /* 11d8ffb8 call 0x11d902c0 */
  push32(0x11d8ffbdu); f_11d902c0();
  /* 11d8ffbd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d8ffc0 mov dword ptr [0x11db16f8], eax */
  w32((uint32_t)(0x11db16f8), (EAX));
L_11d8ffc5:;
  /* 11d8ffc5 cmp dword ptr [0x11db16f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db16f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8ffcc jne 0x11d90085 */
  if (!C.zf) goto L_11d90085;
  /* 11d8ffd2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8ffd6 je 0x11d8fff7 */
  if (C.zf) goto L_11d8fff7;
  /* 11d8ffd8 cmp dword ptr [0x11db1700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8ffdf je 0x11d8fff7 */
  if (C.zf) goto L_11d8fff7;
  /* 11d8ffe1 call 0x11d8efd0 */
  push32(0x11d8ffe6u); f_11d8efd0();
  /* 11d8ffe6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d8ffe8 je 0x11d8fff2 */
  if (C.zf) goto L_11d8fff2;
  /* 11d8ffea or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d8ffed jmp 0x11d9023b */
  goto L_11d9023b;
L_11d8fff2:;
  /* 11d8fff2 jmp 0x11d90085 */
  goto L_11d90085;
L_11d8fff7:;
  /* 11d8fff7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d8fffb je 0x11d90004 */
  if (C.zf) goto L_11d90004;
  /* 11d8fffd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d8ffff jmp 0x11d9023b */
  goto L_11d9023b;
L_11d90004:;
  /* 11d90004 cmp dword ptr [0x11db16f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db16f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d9000b jne 0x11d90044 */
  if (!C.zf) goto L_11d90044;
  /* 11d9000d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 11d90012 push 0x11dad448 */
  push32((uint32_t)(0x11dad448u));
  /* 11d90017 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d90019 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d9001b call 0x11d85ad0 */
  push32(0x11d90020u); f_11d85ad0();
  /* 11d90020 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d90023 mov dword ptr [0x11db16f8], eax */
  w32((uint32_t)(0x11db16f8), (EAX));
  /* 11d90028 cmp dword ptr [0x11db16f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db16f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d9002f jne 0x11d90039 */
  if (!C.zf) goto L_11d90039;
  /* 11d90031 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d90034 jmp 0x11d9023b */
  goto L_11d9023b;
L_11d90039:;
  /* 11d90039 mov eax, dword ptr [0x11db16f8] */
  EAX = (r32((uint32_t)(0x11db16f8)));
  /* 11d9003e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11d90044:;
  /* 11d90044 cmp dword ptr [0x11db1700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d9004b jne 0x11d90085 */
  if (!C.zf) goto L_11d90085;
  /* 11d9004d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 11d90052 push 0x11dad448 */
  push32((uint32_t)(0x11dad448u));
  /* 11d90057 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d90059 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d9005b call 0x11d85ad0 */
  push32(0x11d90060u); f_11d85ad0();
  /* 11d90060 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d90063 mov dword ptr [0x11db1700], eax */
  w32((uint32_t)(0x11db1700), (EAX));
  /* 11d90068 cmp dword ptr [0x11db1700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d9006f jne 0x11d90079 */
  if (!C.zf) goto L_11d90079;
  /* 11d90071 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d90074 jmp 0x11d9023b */
  goto L_11d9023b;
L_11d90079:;
  /* 11d90079 mov ecx, dword ptr [0x11db1700] */
  ECX = (r32((uint32_t)(0x11db1700)));
  /* 11d9007f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_11d90085:;
  /* 11d90085 mov edx, dword ptr [0x11db16f8] */
  EDX = (r32((uint32_t)(0x11db16f8)));
  /* 11d9008b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11d9008e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d90091 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d90094 push eax */
  push32((uint32_t)(EAX));
  /* 11d90095 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d90098 push ecx */
  push32((uint32_t)(ECX));
  /* 11d90099 call 0x11d90240 */
  push32(0x11d9009eu); f_11d90240();
  /* 11d9009e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d900a1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d900a4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d900a8 jl 0x11d90141 */
  if ((C.sf!=C.of)) goto L_11d90141;
  /* 11d900ae mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d900b1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d900b4 je 0x11d90141 */
  if (C.zf) goto L_11d90141;
  /* 11d900ba cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d900be je 0x11d90133 */
  if (C.zf) goto L_11d90133;
  /* 11d900c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d900c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d900c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d900c8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11d900cb push edx */
  push32((uint32_t)(EDX));
  /* 11d900cc call 0x11d86560 */
  push32(0x11d900d1u); f_11d86560();
  /* 11d900d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d900d4 jmp 0x11d900df */
  goto L_11d900df;
L_11d900d6:;
  /* 11d900d6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d900d9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d900dc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11d900df:;
  /* 11d900df mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d900e2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d900e5 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d900e9 je 0x11d90100 */
  if (C.zf) goto L_11d90100;
  /* 11d900eb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d900ee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d900f1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d900f4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11d900f7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 11d900fb mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 11d900fe jmp 0x11d900d6 */
  goto L_11d900d6;
L_11d90100:;
  /* 11d90100 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 11d90105 push 0x11dad448 */
  push32((uint32_t)(0x11dad448u));
  /* 11d9010a push 2 */
  push32((uint32_t)(0x2u));
  /* 11d9010c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d9010f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11d90112 push eax */
  push32((uint32_t)(EAX));
  /* 11d90113 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d90116 push ecx */
  push32((uint32_t)(ECX));
  /* 11d90117 call 0x11d85f60 */
  push32(0x11d9011cu); f_11d85f60();
  /* 11d9011c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9011f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d90122 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d90126 je 0x11d90131 */
  if (C.zf) goto L_11d90131;
  /* 11d90128 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d9012b mov dword ptr [0x11db16f8], edx */
  w32((uint32_t)(0x11db16f8), (EDX));
L_11d90131:;
  /* 11d90131 jmp 0x11d9013f */
  goto L_11d9013f;
L_11d90133:;
  /* 11d90133 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d90136 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d90139 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d9013c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_11d9013f:;
  /* 11d9013f jmp 0x11d901b4 */
  goto L_11d901b4;
L_11d90141:;
  /* 11d90141 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d90145 jne 0x11d901ad */
  if (!C.zf) goto L_11d901ad;
  /* 11d90147 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d9014b jge 0x11d90155 */
  if ((C.sf==C.of)) goto L_11d90155;
  /* 11d9014d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d90150 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d90152 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11d90155:;
  /* 11d90155 push 0xce */
  push32((uint32_t)(0xceu));
  /* 11d9015a push 0x11dad448 */
  push32((uint32_t)(0x11dad448u));
  /* 11d9015f push 2 */
  push32((uint32_t)(0x2u));
  /* 11d90161 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d90164 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 11d9016b push edx */
  push32((uint32_t)(EDX));
  /* 11d9016c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d9016f push eax */
  push32((uint32_t)(EAX));
  /* 11d90170 call 0x11d85f60 */
  push32(0x11d90175u); f_11d85f60();
  /* 11d90175 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d90178 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d9017b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d9017f jne 0x11d90189 */
  if (!C.zf) goto L_11d90189;
  /* 11d90181 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d90184 jmp 0x11d9023b */
  goto L_11d9023b;
L_11d90189:;
  /* 11d90189 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d9018c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d9018f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d90192 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11d90195 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d90198 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d9019b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 11d901a3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d901a6 mov dword ptr [0x11db16f8], eax */
  w32((uint32_t)(0x11db16f8), (EAX));
  /* 11d901ab jmp 0x11d901b4 */
  goto L_11d901b4;
L_11d901ad:;
  /* 11d901ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d901af jmp 0x11d9023b */
  goto L_11d9023b;
L_11d901b4:;
  /* 11d901b4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d901b8 je 0x11d90239 */
  if (C.zf) goto L_11d90239;
  /* 11d901ba push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 11d901bf push 0x11dad448 */
  push32((uint32_t)(0x11dad448u));
  /* 11d901c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d901c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d901c9 push ecx */
  push32((uint32_t)(ECX));
  /* 11d901ca call 0x11d89620 */
  push32(0x11d901cfu); f_11d89620();
  /* 11d901cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d901d2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d901d5 push eax */
  push32((uint32_t)(EAX));
  /* 11d901d6 call 0x11d85ad0 */
  push32(0x11d901dbu); f_11d85ad0();
  /* 11d901db add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d901de mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11d901e1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d901e5 je 0x11d90239 */
  if (C.zf) goto L_11d90239;
  /* 11d901e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d901ea push edx */
  push32((uint32_t)(EDX));
  /* 11d901eb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d901ee push eax */
  push32((uint32_t)(EAX));
  /* 11d901ef call 0x11d897a0 */
  push32(0x11d901f4u); f_11d897a0();
  /* 11d901f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d901f7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d901fa sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d901fd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d90200 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d90202 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d90205 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d90208 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11d9020b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d9020e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d90211 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d90214 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d90217 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d90219 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d9021b not edx */
  EDX = (~(EDX));
  /* 11d9021d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11d90220 push edx */
  push32((uint32_t)(EDX));
  /* 11d90221 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d90224 push eax */
  push32((uint32_t)(EAX));
  /* 11d90225 call dword ptr [0x11db42f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db42f8))), 0x11d9022bu);
  /* 11d9022b push 2 */
  push32((uint32_t)(0x2u));
  /* 11d9022d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d90230 push ecx */
  push32((uint32_t)(ECX));
  /* 11d90231 call 0x11d86560 */
  push32(0x11d90236u); f_11d86560();
  /* 11d90236 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d90239:;
  /* 11d90239 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d9023b:;
  /* 11d9023b pop esi */
  ESI = (pop32());
  /* 11d9023c mov esp, ebp */
  ESP = (EBP);
  /* 11d9023e pop ebp */
  EBP = (pop32());
  /* 11d9023f ret  */
  ESPCHK(0x11d8ff60u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x11d90240 (124 bytes, 47 insns) */
void f_11d90240(void) {
  FTRACE(0x11d90240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d90240 push ebp */
  push32((uint32_t)(EBP));
  /* 11d90241 mov ebp, esp */
  EBP = (ESP);
  /* 11d90243 push ecx */
  push32((uint32_t)(ECX));
  /* 11d90244 mov eax, dword ptr [0x11db16f8] */
  EAX = (r32((uint32_t)(0x11db16f8)));
  /* 11d90249 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d9024c jmp 0x11d90257 */
  goto L_11d90257;
L_11d9024e:;
  /* 11d9024e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d90251 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d90254 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11d90257:;
  /* 11d90257 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d9025a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d9025d je 0x11d902aa */
  if (C.zf) goto L_11d902aa;
  /* 11d9025f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d90262 push eax */
  push32((uint32_t)(EAX));
  /* 11d90263 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d90266 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d90268 push edx */
  push32((uint32_t)(EDX));
  /* 11d90269 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d9026c push eax */
  push32((uint32_t)(EAX));
  /* 11d9026d call 0x11d8ef80 */
  push32(0x11d90272u); f_11d8ef80();
  /* 11d90272 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d90275 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d90277 jne 0x11d902a8 */
  if (!C.zf) goto L_11d902a8;
  /* 11d90279 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d9027c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d9027e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d90281 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 11d90285 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d90288 je 0x11d9029a */
  if (C.zf) goto L_11d9029a;
  /* 11d9028a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d9028d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d9028f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d90292 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 11d90296 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d90298 jne 0x11d902a8 */
  if (!C.zf) goto L_11d902a8;
L_11d9029a:;
  /* 11d9029a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d9029d sub eax, dword ptr [0x11db16f8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11db16f8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d902a3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11d902a6 jmp 0x11d902b8 */
  goto L_11d902b8;
L_11d902a8:;
  /* 11d902a8 jmp 0x11d9024e */
  goto L_11d9024e;
L_11d902aa:;
  /* 11d902aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d902ad sub eax, dword ptr [0x11db16f8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11db16f8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d902b3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11d902b6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11d902b8:;
  /* 11d902b8 mov esp, ebp */
  ESP = (EBP);
  /* 11d902ba pop ebp */
  EBP = (pop32());
  /* 11d902bb ret  */
  ESPCHK(0x11d90240u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x11d902c0 (238 bytes, 80 insns) */
void f_11d902c0(void) {
  FTRACE(0x11d902c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d902c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d902c1 mov ebp, esp */
  EBP = (ESP);
  /* 11d902c3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d902c6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11d902cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d902d0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d902d3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d902d7 jne 0x11d902e0 */
  if (!C.zf) goto L_11d902e0;
  /* 11d902d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d902db jmp 0x11d903aa */
  goto L_11d903aa;
L_11d902e0:;
  /* 11d902e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d902e3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d902e5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d902e8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d902eb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d902ee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d902f0 je 0x11d902fd */
  if (C.zf) goto L_11d902fd;
  /* 11d902f2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d902f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d902f8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11d902fb jmp 0x11d902e0 */
  goto L_11d902e0;
L_11d902fd:;
  /* 11d902fd push 0x146 */
  push32((uint32_t)(0x146u));
  /* 11d90302 push 0x11dad448 */
  push32((uint32_t)(0x11dad448u));
  /* 11d90307 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d90309 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d9030c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 11d90313 push eax */
  push32((uint32_t)(EAX));
  /* 11d90314 call 0x11d85ad0 */
  push32(0x11d90319u); f_11d85ad0();
  /* 11d90319 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9031c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d9031f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d90322 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d90325 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d90329 jne 0x11d90335 */
  if (!C.zf) goto L_11d90335;
  /* 11d9032b push 9 */
  push32((uint32_t)(0x9u));
  /* 11d9032d call 0x11d84950 */
  push32(0x11d90332u); f_11d84950();
  /* 11d90332 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d90335:;
  /* 11d90335 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d90338 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11d9033b:;
  /* 11d9033b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d9033e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d90341 je 0x11d9039e */
  if (C.zf) goto L_11d9039e;
  /* 11d90343 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 11d90348 push 0x11dad448 */
  push32((uint32_t)(0x11dad448u));
  /* 11d9034d push 2 */
  push32((uint32_t)(0x2u));
  /* 11d9034f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d90352 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d90354 push edx */
  push32((uint32_t)(EDX));
  /* 11d90355 call 0x11d89620 */
  push32(0x11d9035au); f_11d89620();
  /* 11d9035a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9035d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d90360 push eax */
  push32((uint32_t)(EAX));
  /* 11d90361 call 0x11d85ad0 */
  push32(0x11d90366u); f_11d85ad0();
  /* 11d90366 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d90369 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d9036c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11d9036e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d90371 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d90374 je 0x11d9038a */
  if (C.zf) goto L_11d9038a;
  /* 11d90376 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d90379 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d9037b push ecx */
  push32((uint32_t)(ECX));
  /* 11d9037c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d9037f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d90381 push eax */
  push32((uint32_t)(EAX));
  /* 11d90382 call 0x11d897a0 */
  push32(0x11d90387u); f_11d897a0();
  /* 11d90387 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d9038a:;
  /* 11d9038a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d9038d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d90390 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d90393 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d90396 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d90399 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11d9039c jmp 0x11d9033b */
  goto L_11d9033b;
L_11d9039e:;
  /* 11d9039e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d903a1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11d903a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11d903aa:;
  /* 11d903aa mov esp, ebp */
  ESP = (EBP);
  /* 11d903ac pop ebp */
  EBP = (pop32());
  /* 11d903ad ret  */
  ESPCHK(0x11d902c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100103b0 @ 0x11d903b0 (482 bytes, 138 insns) */
void f_11d903b0(void) {
  FTRACE(0x11d903b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d903b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d903b1 mov ebp, esp */
  EBP = (ESP);
  /* 11d903b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d903b6 push esi */
  push32((uint32_t)(ESI));
  /* 11d903b7 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 11d903be push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11d903c0 call 0x11d886f0 */
  push32(0x11d903c5u); f_11d886f0();
  /* 11d903c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d903c8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11d903cf jmp 0x11d903da */
  goto L_11d903da;
L_11d903d1:;
  /* 11d903d1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d903d4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d903d7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11d903da:;
  /* 11d903da cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d903de jge 0x11d90580 */
  if ((C.sf==C.of)) goto L_11d90580;
  /* 11d903e4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d903e7 cmp dword ptr [ecx*4 + 0x11db30c0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11db30c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d903ef je 0x11d904e6 */
  if (C.zf) goto L_11d904e6;
  /* 11d903f5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d903f8 mov eax, dword ptr [edx*4 + 0x11db30c0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11db30c0)));
  /* 11d903ff mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d90402 jmp 0x11d9040d */
  goto L_11d9040d;
L_11d90404:;
  /* 11d90404 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d90407 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9040a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11d9040d:;
  /* 11d9040d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d90410 mov eax, dword ptr [edx*4 + 0x11db30c0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11db30c0)));
  /* 11d90417 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9041c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d9041f jae 0x11d904d6 */
  if (!C.cf) goto L_11d904d6;
  /* 11d90425 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d90428 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11d9042c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11d9042f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d90431 jne 0x11d904d1 */
  if (!C.zf) goto L_11d904d1;
  /* 11d90437 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d9043a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d9043e jne 0x11d90479 */
  if (!C.zf) goto L_11d90479;
  /* 11d90440 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11d90442 call 0x11d886f0 */
  push32(0x11d90447u); f_11d886f0();
  /* 11d90447 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9044a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d9044d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d90451 jne 0x11d9046f */
  if (!C.zf) goto L_11d9046f;
  /* 11d90453 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d90456 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d90459 push edx */
  push32((uint32_t)(EDX));
  /* 11d9045a call dword ptr [0x11db434c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db434c))), 0x11d90460u);
  /* 11d90460 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d90463 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11d90466 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d90469 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d9046c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_11d9046f:;
  /* 11d9046f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11d90471 call 0x11d88790 */
  push32(0x11d90476u); f_11d88790();
  /* 11d90476 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d90479:;
  /* 11d90479 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d9047c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9047f push eax */
  push32((uint32_t)(EAX));
  /* 11d90480 call dword ptr [0x11db4348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4348))), 0x11d90486u);
  /* 11d90486 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d90489 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11d9048d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11d90490 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d90492 je 0x11d904a6 */
  if (C.zf) goto L_11d904a6;
  /* 11d90494 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d90497 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9049a push eax */
  push32((uint32_t)(EAX));
  /* 11d9049b call dword ptr [0x11db4344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4344))), 0x11d904a1u);
  /* 11d904a1 jmp 0x11d90404 */
  goto L_11d90404;
L_11d904a6:;
  /* 11d904a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d904a9 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11d904af mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d904b2 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11d904b5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d904b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d904bb sub eax, dword ptr [edx*4 + 0x11db30c0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x11db30c0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d904c2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11d904c3 mov esi, 0x24 */
  ESI = (0x24u);
  /* 11d904c8 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d904ca add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d904cc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d904cf jmp 0x11d904d6 */
  goto L_11d904d6;
L_11d904d1:;
  /* 11d904d1 jmp 0x11d90404 */
  goto L_11d90404;
L_11d904d6:;
  /* 11d904d6 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d904da je 0x11d904e1 */
  if (C.zf) goto L_11d904e1;
  /* 11d904dc jmp 0x11d90580 */
  goto L_11d90580;
L_11d904e1:;
  /* 11d904e1 jmp 0x11d9057b */
  goto L_11d9057b;
L_11d904e6:;
  /* 11d904e6 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 11d904e8 push 0x11dad454 */
  push32((uint32_t)(0x11dad454u));
  /* 11d904ed push 2 */
  push32((uint32_t)(0x2u));
  /* 11d904ef push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11d904f4 call 0x11d85ad0 */
  push32(0x11d904f9u); f_11d85ad0();
  /* 11d904f9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d904fc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d904ff cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d90503 je 0x11d90579 */
  if (C.zf) goto L_11d90579;
  /* 11d90505 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d90508 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d9050b mov dword ptr [eax*4 + 0x11db30c0], ecx */
  w32((uint32_t)(EAX*4 + 0x11db30c0), (ECX));
  /* 11d90512 mov edx, dword ptr [0x11db31fc] */
  EDX = (r32((uint32_t)(0x11db31fc)));
  /* 11d90518 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9051b mov dword ptr [0x11db31fc], edx */
  w32((uint32_t)(0x11db31fc), (EDX));
  /* 11d90521 jmp 0x11d9052c */
  goto L_11d9052c;
L_11d90523:;
  /* 11d90523 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d90526 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d90529 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d9052c:;
  /* 11d9052c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d9052f mov edx, dword ptr [ecx*4 + 0x11db30c0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11db30c0)));
  /* 11d90536 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9053c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d9053f jae 0x11d90564 */
  if (!C.cf) goto L_11d90564;
  /* 11d90541 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d90544 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11d90548 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d9054b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11d90551 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d90554 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11d90558 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d9055b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11d90562 jmp 0x11d90523 */
  goto L_11d90523;
L_11d90564:;
  /* 11d90564 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d90567 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11d9056a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d9056d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d90570 push edx */
  push32((uint32_t)(EDX));
  /* 11d90571 call 0x11d908c0 */
  push32(0x11d90576u); f_11d908c0();
  /* 11d90576 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d90579:;
  /* 11d90579 jmp 0x11d90580 */
  goto L_11d90580;
L_11d9057b:;
  /* 11d9057b jmp 0x11d903d1 */
  goto L_11d903d1;
L_11d90580:;
  /* 11d90580 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11d90582 call 0x11d88790 */
  push32(0x11d90587u); f_11d88790();
  /* 11d90587 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9058a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d9058d pop esi */
  ESI = (pop32());
  /* 11d9058e mov esp, ebp */
  ESP = (EBP);
  /* 11d90590 pop ebp */
  EBP = (pop32());
  /* 11d90591 ret  */
  ESPCHK(0x11d903b0u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x11d905a0 (183 bytes, 57 insns) */
void f_11d905a0(void) {
  FTRACE(0x11d905a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d905a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d905a1 mov ebp, esp */
  EBP = (ESP);
  /* 11d905a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d905a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d905a7 cmp eax, dword ptr [0x11db31fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11db31fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d905ad jae 0x11d9063a */
  if (!C.cf) goto L_11d9063a;
  /* 11d905b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d905b6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11d905b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d905bc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11d905bf imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d905c2 mov eax, dword ptr [ecx*4 + 0x11db30c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11db30c0)));
  /* 11d905c9 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d905cd jne 0x11d9063a */
  if (!C.zf) goto L_11d9063a;
  /* 11d905cf cmp dword ptr [0x11db16d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11db16d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d905d6 jne 0x11d9061a */
  if (!C.zf) goto L_11d9061a;
  /* 11d905d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d905db mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d905de cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d905e2 je 0x11d905f2 */
  if (C.zf) goto L_11d905f2;
  /* 11d905e4 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d905e8 je 0x11d90600 */
  if (C.zf) goto L_11d90600;
  /* 11d905ea cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d905ee je 0x11d9060e */
  if (C.zf) goto L_11d9060e;
  /* 11d905f0 jmp 0x11d9061a */
  goto L_11d9061a;
L_11d905f2:;
  /* 11d905f2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d905f5 push edx */
  push32((uint32_t)(EDX));
  /* 11d905f6 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11d905f8 call dword ptr [0x11db42f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db42f4))), 0x11d905feu);
  /* 11d905fe jmp 0x11d9061a */
  goto L_11d9061a;
L_11d90600:;
  /* 11d90600 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d90603 push eax */
  push32((uint32_t)(EAX));
  /* 11d90604 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11d90606 call dword ptr [0x11db42f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db42f4))), 0x11d9060cu);
  /* 11d9060c jmp 0x11d9061a */
  goto L_11d9061a;
L_11d9060e:;
  /* 11d9060e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d90611 push ecx */
  push32((uint32_t)(ECX));
  /* 11d90612 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11d90614 call dword ptr [0x11db42f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db42f4))), 0x11d9061au);
L_11d9061a:;
  /* 11d9061a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d9061d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11d90620 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d90623 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11d90626 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d90629 mov ecx, dword ptr [edx*4 + 0x11db30c0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11db30c0)));
  /* 11d90630 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d90633 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 11d90636 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d90638 jmp 0x11d90653 */
  goto L_11d90653;
L_11d9063a:;
  /* 11d9063a call 0x11d8e6c0 */
  push32(0x11d9063fu); f_11d8e6c0();
  /* 11d9063f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11d90645 call 0x11d8e6d0 */
  push32(0x11d9064au); f_11d8e6d0();
  /* 11d9064a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11d90650 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11d90653:;
  /* 11d90653 mov esp, ebp */
  ESP = (EBP);
  /* 11d90655 pop ebp */
  EBP = (pop32());
  /* 11d90656 ret  */
  ESPCHK(0x11d905a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010660 @ 0x11d90660 (216 bytes, 63 insns) */
void f_11d90660(void) {
  FTRACE(0x11d90660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d90660 push ebp */
  push32((uint32_t)(EBP));
  /* 11d90661 mov ebp, esp */
  EBP = (ESP);
  /* 11d90663 push ecx */
  push32((uint32_t)(ECX));
  /* 11d90664 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d90667 cmp eax, dword ptr [0x11db31fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11db31fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d9066d jae 0x11d9071b */
  if (!C.cf) goto L_11d9071b;
  /* 11d90673 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d90676 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11d90679 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d9067c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11d9067f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d90682 mov eax, dword ptr [ecx*4 + 0x11db30c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11db30c0)));
  /* 11d90689 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11d9068e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11d90691 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d90693 je 0x11d9071b */
  if (C.zf) goto L_11d9071b;
  /* 11d90699 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d9069c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11d9069f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d906a2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11d906a5 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d906a8 mov ecx, dword ptr [edx*4 + 0x11db30c0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11db30c0)));
  /* 11d906af cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d906b3 je 0x11d9071b */
  if (C.zf) goto L_11d9071b;
  /* 11d906b5 cmp dword ptr [0x11db16d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11db16d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d906bc jne 0x11d906fa */
  if (!C.zf) goto L_11d906fa;
  /* 11d906be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d906c1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d906c4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d906c8 je 0x11d906d8 */
  if (C.zf) goto L_11d906d8;
  /* 11d906ca cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d906ce je 0x11d906e4 */
  if (C.zf) goto L_11d906e4;
  /* 11d906d0 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d906d4 je 0x11d906f0 */
  if (C.zf) goto L_11d906f0;
  /* 11d906d6 jmp 0x11d906fa */
  goto L_11d906fa;
L_11d906d8:;
  /* 11d906d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d906da push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11d906dc call dword ptr [0x11db42f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db42f4))), 0x11d906e2u);
  /* 11d906e2 jmp 0x11d906fa */
  goto L_11d906fa;
L_11d906e4:;
  /* 11d906e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d906e6 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11d906e8 call dword ptr [0x11db42f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db42f4))), 0x11d906eeu);
  /* 11d906ee jmp 0x11d906fa */
  goto L_11d906fa;
L_11d906f0:;
  /* 11d906f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d906f2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11d906f4 call dword ptr [0x11db42f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db42f4))), 0x11d906fau);
L_11d906fa:;
  /* 11d906fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d906fd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11d90700 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d90703 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11d90706 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d90709 mov edx, dword ptr [eax*4 + 0x11db30c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11db30c0)));
  /* 11d90710 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 11d90717 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d90719 jmp 0x11d90734 */
  goto L_11d90734;
L_11d9071b:;
  /* 11d9071b call 0x11d8e6c0 */
  push32(0x11d90720u); f_11d8e6c0();
  /* 11d90720 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11d90726 call 0x11d8e6d0 */
  push32(0x11d9072bu); f_11d8e6d0();
  /* 11d9072b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11d90731 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11d90734:;
  /* 11d90734 mov esp, ebp */
  ESP = (EBP);
  /* 11d90736 pop ebp */
  EBP = (pop32());
  /* 11d90737 ret  */
  ESPCHK(0x11d90660u, _esp0);
  ESP += 4; return;
}

/* FUN_10010740 @ 0x11d90740 (102 bytes, 30 insns) */
void f_11d90740(void) {
  FTRACE(0x11d90740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d90740 push ebp */
  push32((uint32_t)(EBP));
  /* 11d90741 mov ebp, esp */
  EBP = (ESP);
  /* 11d90743 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d90746 cmp eax, dword ptr [0x11db31fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11db31fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d9074c jae 0x11d9078b */
  if (!C.cf) goto L_11d9078b;
  /* 11d9074e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d90751 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11d90754 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d90757 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11d9075a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d9075d mov eax, dword ptr [ecx*4 + 0x11db30c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11db30c0)));
  /* 11d90764 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11d90769 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11d9076c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d9076e je 0x11d9078b */
  if (C.zf) goto L_11d9078b;
  /* 11d90770 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d90773 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11d90776 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d90779 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11d9077c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d9077f mov ecx, dword ptr [edx*4 + 0x11db30c0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11db30c0)));
  /* 11d90786 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 11d90789 jmp 0x11d907a4 */
  goto L_11d907a4;
L_11d9078b:;
  /* 11d9078b call 0x11d8e6c0 */
  push32(0x11d90790u); f_11d8e6c0();
  /* 11d90790 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11d90796 call 0x11d8e6d0 */
  push32(0x11d9079bu); f_11d8e6d0();
  /* 11d9079b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11d907a1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11d907a4:;
  /* 11d907a4 pop ebp */
  EBP = (pop32());
  /* 11d907a5 ret  */
  ESPCHK(0x11d90740u, _esp0);
  ESP += 4; return;
}

/* FUN_100107b0 @ 0x11d907b0 (260 bytes, 83 insns) */
void f_11d907b0(void) {
  FTRACE(0x11d907b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d907b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d907b1 mov ebp, esp */
  EBP = (ESP);
  /* 11d907b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d907b6 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 11d907ba mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d907bd and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11d907c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d907c2 je 0x11d907cd */
  if (C.zf) goto L_11d907cd;
  /* 11d907c4 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 11d907c7 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11d907ca mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_11d907cd:;
  /* 11d907cd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d907d0 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 11d907d6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d907d8 je 0x11d907e2 */
  if (C.zf) goto L_11d907e2;
  /* 11d907da mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11d907dd or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 11d907df mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_11d907e2:;
  /* 11d907e2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d907e5 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 11d907eb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d907ed je 0x11d907f8 */
  if (C.zf) goto L_11d907f8;
  /* 11d907ef mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11d907f2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 11d907f5 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_11d907f8:;
  /* 11d907f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d907fb push eax */
  push32((uint32_t)(EAX));
  /* 11d907fc call dword ptr [0x11db43d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43d8))), 0x11d90802u);
  /* 11d90802 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d90805 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d90809 jne 0x11d90822 */
  if (!C.zf) goto L_11d90822;
  /* 11d9080b call dword ptr [0x11db43a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43a0))), 0x11d90811u);
  /* 11d90811 push eax */
  push32((uint32_t)(EAX));
  /* 11d90812 call 0x11d8e620 */
  push32(0x11d90817u); f_11d8e620();
  /* 11d90817 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9081a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d9081d jmp 0x11d908b0 */
  goto L_11d908b0;
L_11d90822:;
  /* 11d90822 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d90826 jne 0x11d90833 */
  if (!C.zf) goto L_11d90833;
  /* 11d90828 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 11d9082b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 11d9082e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 11d90831 jmp 0x11d90842 */
  goto L_11d90842;
L_11d90833:;
  /* 11d90833 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d90837 jne 0x11d90842 */
  if (!C.zf) goto L_11d90842;
  /* 11d90839 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11d9083c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 11d9083f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_11d90842:;
  /* 11d90842 call 0x11d903b0 */
  push32(0x11d90847u); f_11d903b0();
  /* 11d90847 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d9084a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d9084e jne 0x11d9086b */
  if (!C.zf) goto L_11d9086b;
  /* 11d90850 call 0x11d8e6c0 */
  push32(0x11d90855u); f_11d8e6c0();
  /* 11d90855 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 11d9085b call 0x11d8e6d0 */
  push32(0x11d90860u); f_11d8e6d0();
  /* 11d90860 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11d90866 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d90869 jmp 0x11d908b0 */
  goto L_11d908b0;
L_11d9086b:;
  /* 11d9086b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d9086e push eax */
  push32((uint32_t)(EAX));
  /* 11d9086f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d90872 push ecx */
  push32((uint32_t)(ECX));
  /* 11d90873 call 0x11d905a0 */
  push32(0x11d90878u); f_11d905a0();
  /* 11d90878 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9087b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11d9087e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 11d90881 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 11d90884 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d90887 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11d9088a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d9088d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11d90890 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d90893 mov edx, dword ptr [eax*4 + 0x11db30c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11db30c0)));
  /* 11d9089a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11d9089d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 11d908a1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d908a4 push ecx */
  push32((uint32_t)(ECX));
  /* 11d908a5 call 0x11d90950 */
  push32(0x11d908aau); f_11d90950();
  /* 11d908aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d908ad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11d908b0:;
  /* 11d908b0 mov esp, ebp */
  ESP = (EBP);
  /* 11d908b2 pop ebp */
  EBP = (pop32());
  /* 11d908b3 ret  */
  ESPCHK(0x11d907b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100108c0 @ 0x11d908c0 (134 bytes, 44 insns) */
void f_11d908c0(void) {
  FTRACE(0x11d908c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d908c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d908c1 mov ebp, esp */
  EBP = (ESP);
  /* 11d908c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d908c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d908c7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11d908ca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d908cd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11d908d0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d908d3 mov edx, dword ptr [eax*4 + 0x11db30c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11db30c0)));
  /* 11d908da add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d908dc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d908df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d908e2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d908e6 jne 0x11d90921 */
  if (!C.zf) goto L_11d90921;
  /* 11d908e8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11d908ea call 0x11d886f0 */
  push32(0x11d908efu); f_11d886f0();
  /* 11d908ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d908f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d908f5 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d908f9 jne 0x11d90917 */
  if (!C.zf) goto L_11d90917;
  /* 11d908fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d908fe add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d90901 push edx */
  push32((uint32_t)(EDX));
  /* 11d90902 call dword ptr [0x11db434c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db434c))), 0x11d90908u);
  /* 11d90908 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d9090b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11d9090e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d90911 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d90914 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_11d90917:;
  /* 11d90917 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11d90919 call 0x11d88790 */
  push32(0x11d9091eu); f_11d88790();
  /* 11d9091e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d90921:;
  /* 11d90921 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d90924 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11d90927 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d9092a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11d9092d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d90930 mov edx, dword ptr [eax*4 + 0x11db30c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11db30c0)));
  /* 11d90937 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 11d9093b push eax */
  push32((uint32_t)(EAX));
  /* 11d9093c call dword ptr [0x11db4348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4348))), 0x11d90942u);
  /* 11d90942 mov esp, ebp */
  ESP = (EBP);
  /* 11d90944 pop ebp */
  EBP = (pop32());
  /* 11d90945 ret  */
  ESPCHK(0x11d908c0u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x11d90950 (38 bytes, 13 insns) */
void f_11d90950(void) {
  FTRACE(0x11d90950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d90950 push ebp */
  push32((uint32_t)(EBP));
  /* 11d90951 mov ebp, esp */
  EBP = (ESP);
  /* 11d90953 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d90956 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11d90959 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d9095c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11d9095f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d90962 mov edx, dword ptr [eax*4 + 0x11db30c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11db30c0)));
  /* 11d90969 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 11d9096d push eax */
  push32((uint32_t)(EAX));
  /* 11d9096e call dword ptr [0x11db4344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4344))), 0x11d90974u);
  /* 11d90974 pop ebp */
  EBP = (pop32());
  /* 11d90975 ret  */
  ESPCHK(0x11d90950u, _esp0);
  ESP += 4; return;
}

/* FUN_10010980 @ 0x11d90980 (218 bytes, 63 insns) */
void f_11d90980(void) {
  FTRACE(0x11d90980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d90980 push ebp */
  push32((uint32_t)(EBP));
  /* 11d90981 mov ebp, esp */
  EBP = (ESP);
  /* 11d90983 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d90986 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d9098d push 2 */
  push32((uint32_t)(0x2u));
  /* 11d9098f call 0x11d886f0 */
  push32(0x11d90994u); f_11d886f0();
  /* 11d90994 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d90997 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 11d9099e jmp 0x11d909a9 */
  goto L_11d909a9;
L_11d909a0:;
  /* 11d909a0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d909a3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d909a6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11d909a9:;
  /* 11d909a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d909ac cmp ecx, dword ptr [0x11db2dc0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11db2dc0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d909b2 jge 0x11d90a49 */
  if ((C.sf==C.of)) goto L_11d90a49;
  /* 11d909b8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d909bb mov eax, dword ptr [0x11db1a68] */
  EAX = (r32((uint32_t)(0x11db1a68)));
  /* 11d909c0 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d909c4 je 0x11d90a44 */
  if (C.zf) goto L_11d90a44;
  /* 11d909c6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d909c9 mov edx, dword ptr [0x11db1a68] */
  EDX = (r32((uint32_t)(0x11db1a68)));
  /* 11d909cf mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11d909d2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11d909d5 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 11d909db test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d909dd je 0x11d90a01 */
  if (C.zf) goto L_11d90a01;
  /* 11d909df mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d909e2 mov eax, dword ptr [0x11db1a68] */
  EAX = (r32((uint32_t)(0x11db1a68)));
  /* 11d909e7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11d909ea push ecx */
  push32((uint32_t)(ECX));
  /* 11d909eb call 0x11d91860 */
  push32(0x11d909f0u); f_11d91860();
  /* 11d909f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d909f3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d909f6 je 0x11d90a01 */
  if (C.zf) goto L_11d90a01;
  /* 11d909f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d909fb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d909fe mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11d90a01:;
  /* 11d90a01 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d90a05 jl 0x11d90a44 */
  if ((C.sf!=C.of)) goto L_11d90a44;
  /* 11d90a07 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d90a0a mov ecx, dword ptr [0x11db1a68] */
  ECX = (r32((uint32_t)(0x11db1a68)));
  /* 11d90a10 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11d90a13 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d90a16 push edx */
  push32((uint32_t)(EDX));
  /* 11d90a17 call dword ptr [0x11db43e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43e0))), 0x11d90a1du);
  /* 11d90a1d push 2 */
  push32((uint32_t)(0x2u));
  /* 11d90a1f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d90a22 mov ecx, dword ptr [0x11db1a68] */
  ECX = (r32((uint32_t)(0x11db1a68)));
  /* 11d90a28 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11d90a2b push edx */
  push32((uint32_t)(EDX));
  /* 11d90a2c call 0x11d86560 */
  push32(0x11d90a31u); f_11d86560();
  /* 11d90a31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d90a34 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d90a37 mov ecx, dword ptr [0x11db1a68] */
  ECX = (r32((uint32_t)(0x11db1a68)));
  /* 11d90a3d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_11d90a44:;
  /* 11d90a44 jmp 0x11d909a0 */
  goto L_11d909a0;
L_11d90a49:;
  /* 11d90a49 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d90a4b call 0x11d88790 */
  push32(0x11d90a50u); f_11d88790();
  /* 11d90a50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d90a53 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d90a56 mov esp, ebp */
  ESP = (EBP);
  /* 11d90a58 pop ebp */
  EBP = (pop32());
  /* 11d90a59 ret  */
  ESPCHK(0x11d90980u, _esp0);
  ESP += 4; return;
}

/* FUN_10010a60 @ 0x11d90a60 (68 bytes, 26 insns) */
void f_11d90a60(void) {
  FTRACE(0x11d90a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d90a60 push ebp */
  push32((uint32_t)(EBP));
  /* 11d90a61 mov ebp, esp */
  EBP = (ESP);
  /* 11d90a63 push ecx */
  push32((uint32_t)(ECX));
  /* 11d90a64 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d90a68 jne 0x11d90a76 */
  if (!C.zf) goto L_11d90a76;
  /* 11d90a6a push 0 */
  push32((uint32_t)(0x0u));
  /* 11d90a6c call 0x11d90bd0 */
  push32(0x11d90a71u); f_11d90bd0();
  /* 11d90a71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d90a74 jmp 0x11d90aa0 */
  goto L_11d90aa0;
L_11d90a76:;
  /* 11d90a76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d90a79 push eax */
  push32((uint32_t)(EAX));
  /* 11d90a7a call 0x11d8f740 */
  push32(0x11d90a7fu); f_11d8f740();
  /* 11d90a7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d90a82 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d90a85 push ecx */
  push32((uint32_t)(ECX));
  /* 11d90a86 call 0x11d90ab0 */
  push32(0x11d90a8bu); f_11d90ab0();
  /* 11d90a8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d90a8e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d90a91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d90a94 push edx */
  push32((uint32_t)(EDX));
  /* 11d90a95 call 0x11d8f7b0 */
  push32(0x11d90a9au); f_11d8f7b0();
  /* 11d90a9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d90a9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11d90aa0:;
  /* 11d90aa0 mov esp, ebp */
  ESP = (EBP);
  /* 11d90aa2 pop ebp */
  EBP = (pop32());
  /* 11d90aa3 ret  */
  ESPCHK(0x11d90a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ab0 @ 0x11d90ab0 (65 bytes, 26 insns) */
void f_11d90ab0(void) {
  FTRACE(0x11d90ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d90ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d90ab1 mov ebp, esp */
  EBP = (ESP);
  /* 11d90ab3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d90ab6 push eax */
  push32((uint32_t)(EAX));
  /* 11d90ab7 call 0x11d90b00 */
  push32(0x11d90abcu); f_11d90b00();
  /* 11d90abc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d90abf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d90ac1 je 0x11d90ac8 */
  if (C.zf) goto L_11d90ac8;
  /* 11d90ac3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d90ac6 jmp 0x11d90aef */
  goto L_11d90aef;
L_11d90ac8:;
  /* 11d90ac8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d90acb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11d90ace and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 11d90ad4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d90ad6 je 0x11d90aed */
  if (C.zf) goto L_11d90aed;
  /* 11d90ad8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d90adb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11d90ade push ecx */
  push32((uint32_t)(ECX));
  /* 11d90adf call 0x11d919b0 */
  push32(0x11d90ae4u); f_11d919b0();
  /* 11d90ae4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d90ae7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d90ae9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d90aeb jmp 0x11d90aef */
  goto L_11d90aef;
L_11d90aed:;
  /* 11d90aed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d90aef:;
  /* 11d90aef pop ebp */
  EBP = (pop32());
  /* 11d90af0 ret  */
  ESPCHK(0x11d90ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010b00 @ 0x11d90b00 (183 bytes, 62 insns) */
void f_11d90b00(void) {
  FTRACE(0x11d90b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d90b00 push ebp */
  push32((uint32_t)(EBP));
  /* 11d90b01 mov ebp, esp */
  EBP = (ESP);
  /* 11d90b03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d90b06 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d90b0d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d90b10 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d90b13 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d90b16 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11d90b19 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11d90b1c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d90b1f jne 0x11d90b9b */
  if (!C.zf) goto L_11d90b9b;
  /* 11d90b21 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d90b24 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11d90b27 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 11d90b2d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d90b2f je 0x11d90b9b */
  if (C.zf) goto L_11d90b9b;
  /* 11d90b31 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d90b34 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d90b37 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11d90b39 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d90b3c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d90b3f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d90b43 jle 0x11d90b9b */
  if ((C.zf||C.sf!=C.of)) goto L_11d90b9b;
  /* 11d90b45 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d90b48 push edx */
  push32((uint32_t)(EDX));
  /* 11d90b49 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d90b4c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11d90b4f push ecx */
  push32((uint32_t)(ECX));
  /* 11d90b50 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d90b53 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11d90b56 push eax */
  push32((uint32_t)(EAX));
  /* 11d90b57 call 0x11d8f1d0 */
  push32(0x11d90b5cu); f_11d8f1d0();
  /* 11d90b5c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d90b5f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d90b62 jne 0x11d90b85 */
  if (!C.zf) goto L_11d90b85;
  /* 11d90b64 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d90b67 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11d90b6a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 11d90b70 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d90b72 je 0x11d90b83 */
  if (C.zf) goto L_11d90b83;
  /* 11d90b74 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d90b77 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11d90b7a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 11d90b7d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d90b80 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_11d90b83:;
  /* 11d90b83 jmp 0x11d90b9b */
  goto L_11d90b9b;
L_11d90b85:;
  /* 11d90b85 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d90b88 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11d90b8b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11d90b8e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d90b91 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 11d90b94 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11d90b9b:;
  /* 11d90b9b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d90b9e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d90ba1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11d90ba4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11d90ba6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d90ba9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11d90bb0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d90bb3 mov esp, ebp */
  ESP = (EBP);
  /* 11d90bb5 pop ebp */
  EBP = (pop32());
  /* 11d90bb6 ret  */
  ESPCHK(0x11d90b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10010bc0 @ 0x11d90bc0 (15 bytes, 7 insns) */
void f_11d90bc0(void) {
  FTRACE(0x11d90bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d90bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d90bc1 mov ebp, esp */
  EBP = (ESP);
  /* 11d90bc3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d90bc5 call 0x11d90bd0 */
  push32(0x11d90bcau); f_11d90bd0();
  /* 11d90bca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d90bcd pop ebp */
  EBP = (pop32());
  /* 11d90bce ret  */
  ESPCHK(0x11d90bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010bd0 @ 0x11d90bd0 (319 bytes, 94 insns) */
void f_11d90bd0(void) {
  FTRACE(0x11d90bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d90bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d90bd1 mov ebp, esp */
  EBP = (ESP);
  /* 11d90bd3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d90bd6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d90bdd mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11d90be4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d90be6 call 0x11d886f0 */
  push32(0x11d90bebu); f_11d886f0();
  /* 11d90beb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d90bee mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11d90bf5 jmp 0x11d90c00 */
  goto L_11d90c00;
L_11d90bf7:;
  /* 11d90bf7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d90bfa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d90bfd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11d90c00:;
  /* 11d90c00 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d90c03 cmp ecx, dword ptr [0x11db2dc0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11db2dc0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d90c09 jge 0x11d90cf3 */
  if ((C.sf==C.of)) goto L_11d90cf3;
  /* 11d90c0f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d90c12 mov eax, dword ptr [0x11db1a68] */
  EAX = (r32((uint32_t)(0x11db1a68)));
  /* 11d90c17 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d90c1b je 0x11d90cee */
  if (C.zf) goto L_11d90cee;
  /* 11d90c21 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d90c24 mov edx, dword ptr [0x11db1a68] */
  EDX = (r32((uint32_t)(0x11db1a68)));
  /* 11d90c2a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11d90c2d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11d90c30 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 11d90c36 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d90c38 je 0x11d90cee */
  if (C.zf) goto L_11d90cee;
  /* 11d90c3e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d90c41 mov eax, dword ptr [0x11db1a68] */
  EAX = (r32((uint32_t)(0x11db1a68)));
  /* 11d90c46 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11d90c49 push ecx */
  push32((uint32_t)(ECX));
  /* 11d90c4a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d90c4d push edx */
  push32((uint32_t)(EDX));
  /* 11d90c4e call 0x11d8f780 */
  push32(0x11d90c53u); f_11d8f780();
  /* 11d90c53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d90c56 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d90c59 mov ecx, dword ptr [0x11db1a68] */
  ECX = (r32((uint32_t)(0x11db1a68)));
  /* 11d90c5f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11d90c62 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11d90c65 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 11d90c6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d90c6c je 0x11d90cd5 */
  if (C.zf) goto L_11d90cd5;
  /* 11d90c6e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d90c72 jne 0x11d90c99 */
  if (!C.zf) goto L_11d90c99;
  /* 11d90c74 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d90c77 mov edx, dword ptr [0x11db1a68] */
  EDX = (r32((uint32_t)(0x11db1a68)));
  /* 11d90c7d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11d90c80 push eax */
  push32((uint32_t)(EAX));
  /* 11d90c81 call 0x11d90ab0 */
  push32(0x11d90c86u); f_11d90ab0();
  /* 11d90c86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d90c89 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d90c8c je 0x11d90c97 */
  if (C.zf) goto L_11d90c97;
  /* 11d90c8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d90c91 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d90c94 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11d90c97:;
  /* 11d90c97 jmp 0x11d90cd5 */
  goto L_11d90cd5;
L_11d90c99:;
  /* 11d90c99 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d90c9d jne 0x11d90cd5 */
  if (!C.zf) goto L_11d90cd5;
  /* 11d90c9f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d90ca2 mov eax, dword ptr [0x11db1a68] */
  EAX = (r32((uint32_t)(0x11db1a68)));
  /* 11d90ca7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11d90caa mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11d90cad and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11d90cb0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d90cb2 je 0x11d90cd5 */
  if (C.zf) goto L_11d90cd5;
  /* 11d90cb4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d90cb7 mov ecx, dword ptr [0x11db1a68] */
  ECX = (r32((uint32_t)(0x11db1a68)));
  /* 11d90cbd mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11d90cc0 push edx */
  push32((uint32_t)(EDX));
  /* 11d90cc1 call 0x11d90ab0 */
  push32(0x11d90cc6u); f_11d90ab0();
  /* 11d90cc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d90cc9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d90ccc jne 0x11d90cd5 */
  if (!C.zf) goto L_11d90cd5;
  /* 11d90cce mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_11d90cd5:;
  /* 11d90cd5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d90cd8 mov ecx, dword ptr [0x11db1a68] */
  ECX = (r32((uint32_t)(0x11db1a68)));
  /* 11d90cde mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11d90ce1 push edx */
  push32((uint32_t)(EDX));
  /* 11d90ce2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d90ce5 push eax */
  push32((uint32_t)(EAX));
  /* 11d90ce6 call 0x11d8f7f0 */
  push32(0x11d90cebu); f_11d8f7f0();
  /* 11d90ceb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d90cee:;
  /* 11d90cee jmp 0x11d90bf7 */
  goto L_11d90bf7;
L_11d90cf3:;
  /* 11d90cf3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d90cf5 call 0x11d88790 */
  push32(0x11d90cfau); f_11d88790();
  /* 11d90cfa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d90cfd cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d90d01 jne 0x11d90d08 */
  if (!C.zf) goto L_11d90d08;
  /* 11d90d03 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d90d06 jmp 0x11d90d0b */
  goto L_11d90d0b;
L_11d90d08:;
  /* 11d90d08 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11d90d0b:;
  /* 11d90d0b mov esp, ebp */
  ESP = (EBP);
  /* 11d90d0d pop ebp */
  EBP = (pop32());
  /* 11d90d0e ret  */
  ESPCHK(0x11d90bd0u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x11d90d10 (15 bytes, 7 insns) */
void f_11d90d10(void) {
  FTRACE(0x11d90d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d90d10 push ebp */
  push32((uint32_t)(EBP));
  /* 11d90d11 mov ebp, esp */
  EBP = (ESP);
  /* 11d90d13 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d90d15 call 0x11d84950 */
  push32(0x11d90d1au); f_11d84950();
  /* 11d90d1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d90d1d pop ebp */
  EBP = (pop32());
  /* 11d90d1e ret  */
  ESPCHK(0x11d90d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10010d20 @ 0x11d90d20 (1007 bytes, 269 insns) */
void f_11d90d20(void) {
  FTRACE(0x11d90d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d90d20 push ebp */
  push32((uint32_t)(EBP));
  /* 11d90d21 mov ebp, esp */
  EBP = (ESP);
  /* 11d90d23 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d90d29 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d90d2d jl 0x11d90d35 */
  if ((C.sf!=C.of)) goto L_11d90d35;
  /* 11d90d2f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d90d33 jle 0x11d90d3c */
  if ((C.zf||C.sf!=C.of)) goto L_11d90d3c;
L_11d90d35:;
  /* 11d90d35 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d90d37 jmp 0x11d9110b */
  goto L_11d9110b;
L_11d90d3c:;
  /* 11d90d3c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11d90d3e call 0x11d886f0 */
  push32(0x11d90d43u); f_11d886f0();
  /* 11d90d43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d90d46 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11d90d4d mov eax, dword ptr [0x11db1a54] */
  EAX = (r32((uint32_t)(0x11db1a54)));
  /* 11d90d52 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d90d55 mov dword ptr [0x11db1a54], eax */
  w32((uint32_t)(0x11db1a54), (EAX));
L_11d90d5a:;
  /* 11d90d5a cmp dword ptr [0x11db1a64], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1a64))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d90d61 je 0x11d90d6d */
  if (C.zf) goto L_11d90d6d;
  /* 11d90d63 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d90d65 call dword ptr [0x11db42f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db42f0))), 0x11d90d6bu);
  /* 11d90d6b jmp 0x11d90d5a */
  goto L_11d90d5a;
L_11d90d6d:;
  /* 11d90d6d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d90d71 je 0x11d90db1 */
  if (C.zf) goto L_11d90db1;
  /* 11d90d73 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d90d77 je 0x11d90d91 */
  if (C.zf) goto L_11d90d91;
  /* 11d90d79 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d90d7c push ecx */
  push32((uint32_t)(ECX));
  /* 11d90d7d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d90d80 push edx */
  push32((uint32_t)(EDX));
  /* 11d90d81 call 0x11d91110 */
  push32(0x11d90d86u); f_11d91110();
  /* 11d90d86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d90d89 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 11d90d8f jmp 0x11d90da3 */
  goto L_11d90da3;
L_11d90d91:;
  /* 11d90d91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d90d94 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d90d97 mov ecx, dword ptr [eax + 0x11db05fc] */
  ECX = (r32((uint32_t)(EAX + 0x11db05fc)));
  /* 11d90d9d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_11d90da3:;
  /* 11d90da3 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 11d90da9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11d90dac jmp 0x11d910eb */
  goto L_11d910eb;
L_11d90db1:;
  /* 11d90db1 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 11d90db8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11d90dbf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d90dc3 je 0x11d910e3 */
  if (C.zf) goto L_11d910e3;
  /* 11d90dc9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d90dcc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d90dcf cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d90dd2 jne 0x11d90ff4 */
  if (!C.zf) goto L_11d90ff4;
  /* 11d90dd8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d90ddb movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11d90ddf cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d90de2 jne 0x11d90ff4 */
  if (!C.zf) goto L_11d90ff4;
  /* 11d90de8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d90deb movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 11d90def cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d90df2 jne 0x11d90ff4 */
  if (!C.zf) goto L_11d90ff4;
  /* 11d90df8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d90dfb mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_11d90e01:;
  /* 11d90e01 push 0x11dad4a4 */
  push32((uint32_t)(0x11dad4a4u));
  /* 11d90e06 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11d90e0c push ecx */
  push32((uint32_t)(ECX));
  /* 11d90e0d call 0x11d92fd0 */
  push32(0x11d90e12u); f_11d92fd0();
  /* 11d90e12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d90e15 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 11d90e1b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d90e22 je 0x11d90e4d */
  if (C.zf) goto L_11d90e4d;
  /* 11d90e24 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11d90e2a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d90e30 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 11d90e36 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d90e3d je 0x11d90e4d */
  if (C.zf) goto L_11d90e4d;
  /* 11d90e3f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11d90e45 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d90e48 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d90e4b jne 0x11d90e73 */
  if (!C.zf) goto L_11d90e73;
L_11d90e4d:;
  /* 11d90e4d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d90e51 je 0x11d90e6c */
  if (C.zf) goto L_11d90e6c;
  /* 11d90e53 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11d90e55 call 0x11d88790 */
  push32(0x11d90e5au); f_11d88790();
  /* 11d90e5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d90e5d mov edx, dword ptr [0x11db1a54] */
  EDX = (r32((uint32_t)(0x11db1a54)));
  /* 11d90e63 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d90e66 mov dword ptr [0x11db1a54], edx */
  w32((uint32_t)(0x11db1a54), (EDX));
L_11d90e6c:;
  /* 11d90e6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d90e6e jmp 0x11d9110b */
  goto L_11d9110b;
L_11d90e73:;
  /* 11d90e73 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11d90e7a jmp 0x11d90e85 */
  goto L_11d90e85;
L_11d90e7c:;
  /* 11d90e7c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d90e7f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d90e82 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11d90e85:;
  /* 11d90e85 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d90e89 jg 0x11d90ed3 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d90ed3;
  /* 11d90e8b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11d90e91 push ecx */
  push32((uint32_t)(ECX));
  /* 11d90e92 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11d90e98 push edx */
  push32((uint32_t)(EDX));
  /* 11d90e99 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d90e9c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d90e9f mov ecx, dword ptr [eax + 0x11db05f8] */
  ECX = (r32((uint32_t)(EAX + 0x11db05f8)));
  /* 11d90ea5 push ecx */
  push32((uint32_t)(ECX));
  /* 11d90ea6 call 0x11d92f90 */
  push32(0x11d90eabu); f_11d92f90();
  /* 11d90eab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d90eae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d90eb0 jne 0x11d90ed1 */
  if (!C.zf) goto L_11d90ed1;
  /* 11d90eb2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d90eb5 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d90eb8 mov eax, dword ptr [edx + 0x11db05f8] */
  EAX = (r32((uint32_t)(EDX + 0x11db05f8)));
  /* 11d90ebe push eax */
  push32((uint32_t)(EAX));
  /* 11d90ebf call 0x11d89620 */
  push32(0x11d90ec4u); f_11d89620();
  /* 11d90ec4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d90ec7 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d90ecd jne 0x11d90ed1 */
  if (!C.zf) goto L_11d90ed1;
  /* 11d90ecf jmp 0x11d90ed3 */
  goto L_11d90ed3;
L_11d90ed1:;
  /* 11d90ed1 jmp 0x11d90e7c */
  goto L_11d90e7c;
L_11d90ed3:;
  /* 11d90ed3 push 0x11dad4a0 */
  push32((uint32_t)(0x11dad4a0u));
  /* 11d90ed8 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11d90ede add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d90ee1 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 11d90ee7 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11d90eed push edx */
  push32((uint32_t)(EDX));
  /* 11d90eee call 0x11d92f50 */
  push32(0x11d90ef3u); f_11d92f50();
  /* 11d90ef3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d90ef6 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 11d90efc cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d90f03 jne 0x11d90f39 */
  if (!C.zf) goto L_11d90f39;
  /* 11d90f05 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11d90f0b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d90f0e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d90f11 je 0x11d90f39 */
  if (C.zf) goto L_11d90f39;
  /* 11d90f13 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d90f17 je 0x11d90f32 */
  if (C.zf) goto L_11d90f32;
  /* 11d90f19 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11d90f1b call 0x11d88790 */
  push32(0x11d90f20u); f_11d88790();
  /* 11d90f20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d90f23 mov edx, dword ptr [0x11db1a54] */
  EDX = (r32((uint32_t)(0x11db1a54)));
  /* 11d90f29 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d90f2c mov dword ptr [0x11db1a54], edx */
  w32((uint32_t)(0x11db1a54), (EDX));
L_11d90f32:;
  /* 11d90f32 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d90f34 jmp 0x11d9110b */
  goto L_11d9110b;
L_11d90f39:;
  /* 11d90f39 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d90f3d jg 0x11d90f8a */
  if ((!C.zf&&C.sf==C.of)) goto L_11d90f8a;
  /* 11d90f3f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11d90f45 push eax */
  push32((uint32_t)(EAX));
  /* 11d90f46 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11d90f4c push ecx */
  push32((uint32_t)(ECX));
  /* 11d90f4d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 11d90f53 push edx */
  push32((uint32_t)(EDX));
  /* 11d90f54 call 0x11d8a010 */
  push32(0x11d90f59u); f_11d8a010();
  /* 11d90f59 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d90f5c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11d90f62 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 11d90f6a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 11d90f70 push ecx */
  push32((uint32_t)(ECX));
  /* 11d90f71 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d90f74 push edx */
  push32((uint32_t)(EDX));
  /* 11d90f75 call 0x11d91110 */
  push32(0x11d90f7au); f_11d91110();
  /* 11d90f7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d90f7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d90f7f je 0x11d90f8a */
  if (C.zf) goto L_11d90f8a;
  /* 11d90f81 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d90f84 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d90f87 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11d90f8a:;
  /* 11d90f8a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11d90f90 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d90f96 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 11d90f9c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11d90fa2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11d90fa5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d90fa7 je 0x11d90fb8 */
  if (C.zf) goto L_11d90fb8;
  /* 11d90fa9 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11d90faf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d90fb2 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_11d90fb8:;
  /* 11d90fb8 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11d90fbe movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11d90fc1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d90fc3 jne 0x11d90e01 */
  if (!C.zf) goto L_11d90e01;
  /* 11d90fc9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d90fcd je 0x11d90fdc */
  if (C.zf) goto L_11d90fdc;
  /* 11d90fcf call 0x11d912b0 */
  push32(0x11d90fd4u); f_11d912b0();
  /* 11d90fd4 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 11d90fda jmp 0x11d90fe6 */
  goto L_11d90fe6;
L_11d90fdc:;
  /* 11d90fdc mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_11d90fe6:;
  /* 11d90fe6 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 11d90fec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d90fef jmp 0x11d910e1 */
  goto L_11d910e1;
L_11d90ff4:;
  /* 11d90ff4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d90ff7 push edx */
  push32((uint32_t)(EDX));
  /* 11d90ff8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d90ffa push 0 */
  push32((uint32_t)(0x0u));
  /* 11d90ffc lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11d91002 push eax */
  push32((uint32_t)(EAX));
  /* 11d91003 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d91006 push ecx */
  push32((uint32_t)(ECX));
  /* 11d91007 call 0x11d913b0 */
  push32(0x11d9100cu); f_11d913b0();
  /* 11d9100c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9100f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d91012 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d91016 je 0x11d910e1 */
  if (C.zf) goto L_11d910e1;
  /* 11d9101c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11d91023 jmp 0x11d9102e */
  goto L_11d9102e;
L_11d91025:;
  /* 11d91025 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d91028 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9102b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11d9102e:;
  /* 11d9102e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d91032 jg 0x11d91090 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d91090;
  /* 11d91034 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d91038 je 0x11d9108e */
  if (C.zf) goto L_11d9108e;
  /* 11d9103a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d9103d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d91040 mov ecx, dword ptr [eax + 0x11db05fc] */
  ECX = (r32((uint32_t)(EAX + 0x11db05fc)));
  /* 11d91046 push ecx */
  push32((uint32_t)(ECX));
  /* 11d91047 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 11d9104d push edx */
  push32((uint32_t)(EDX));
  /* 11d9104e call 0x11d8d280 */
  push32(0x11d91053u); f_11d8d280();
  /* 11d91053 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91056 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d91058 je 0x11d91085 */
  if (C.zf) goto L_11d91085;
  /* 11d9105a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11d91060 push eax */
  push32((uint32_t)(EAX));
  /* 11d91061 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d91064 push ecx */
  push32((uint32_t)(ECX));
  /* 11d91065 call 0x11d91110 */
  push32(0x11d9106au); f_11d91110();
  /* 11d9106a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9106d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d9106f je 0x11d9107c */
  if (C.zf) goto L_11d9107c;
  /* 11d91071 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d91074 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91077 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11d9107a jmp 0x11d91083 */
  goto L_11d91083;
L_11d9107c:;
  /* 11d9107c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_11d91083:;
  /* 11d91083 jmp 0x11d9108e */
  goto L_11d9108e;
L_11d91085:;
  /* 11d91085 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d91088 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9108b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11d9108e:;
  /* 11d9108e jmp 0x11d91025 */
  goto L_11d91025;
L_11d91090:;
  /* 11d91090 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d91094 je 0x11d910bb */
  if (C.zf) goto L_11d910bb;
  /* 11d91096 call 0x11d912b0 */
  push32(0x11d9109bu); f_11d912b0();
  /* 11d9109b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d9109e push 2 */
  push32((uint32_t)(0x2u));
  /* 11d910a0 mov ecx, dword ptr [0x11db05fc] */
  ECX = (r32((uint32_t)(0x11db05fc)));
  /* 11d910a6 push ecx */
  push32((uint32_t)(ECX));
  /* 11d910a7 call 0x11d86560 */
  push32(0x11d910acu); f_11d86560();
  /* 11d910ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d910af mov dword ptr [0x11db05fc], 0 */
  w32((uint32_t)(0x11db05fc), (0x0u));
  /* 11d910b9 jmp 0x11d910e1 */
  goto L_11d910e1;
L_11d910bb:;
  /* 11d910bb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d910bf je 0x11d910ce */
  if (C.zf) goto L_11d910ce;
  /* 11d910c1 call 0x11d912b0 */
  push32(0x11d910c6u); f_11d912b0();
  /* 11d910c6 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 11d910cc jmp 0x11d910d8 */
  goto L_11d910d8;
L_11d910ce:;
  /* 11d910ce mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_11d910d8:;
  /* 11d910d8 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 11d910de mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11d910e1:;
  /* 11d910e1 jmp 0x11d910eb */
  goto L_11d910eb;
L_11d910e3:;
  /* 11d910e3 call 0x11d912b0 */
  push32(0x11d910e8u); f_11d912b0();
  /* 11d910e8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11d910eb:;
  /* 11d910eb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d910ef je 0x11d91108 */
  if (C.zf) goto L_11d91108;
  /* 11d910f1 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11d910f3 call 0x11d88790 */
  push32(0x11d910f8u); f_11d88790();
  /* 11d910f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d910fb mov eax, dword ptr [0x11db1a54] */
  EAX = (r32((uint32_t)(0x11db1a54)));
  /* 11d91100 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d91103 mov dword ptr [0x11db1a54], eax */
  w32((uint32_t)(0x11db1a54), (EAX));
L_11d91108:;
  /* 11d91108 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11d9110b:;
  /* 11d9110b mov esp, ebp */
  ESP = (EBP);
  /* 11d9110d pop ebp */
  EBP = (pop32());
  /* 11d9110e ret  */
  ESPCHK(0x11d90d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10011110 @ 0x11d91110 (403 bytes, 117 insns) */
void f_11d91110(void) {
  FTRACE(0x11d91110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d91110 push ebp */
  push32((uint32_t)(EBP));
  /* 11d91111 mov ebp, esp */
  EBP = (ESP);
  /* 11d91113 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d91119 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d9111c push eax */
  push32((uint32_t)(EAX));
  /* 11d9111d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 11d91123 push ecx */
  push32((uint32_t)(ECX));
  /* 11d91124 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 11d9112a push edx */
  push32((uint32_t)(EDX));
  /* 11d9112b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 11d91131 push eax */
  push32((uint32_t)(EAX));
  /* 11d91132 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d91135 push ecx */
  push32((uint32_t)(ECX));
  /* 11d91136 call 0x11d913b0 */
  push32(0x11d9113bu); f_11d913b0();
  /* 11d9113b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9113e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d91140 jne 0x11d91149 */
  if (!C.zf) goto L_11d91149;
  /* 11d91142 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d91144 jmp 0x11d9129f */
  goto L_11d9129f;
L_11d91149:;
  /* 11d91149 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 11d9114e push 0x11dad4a8 */
  push32((uint32_t)(0x11dad4a8u));
  /* 11d91153 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d91155 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 11d9115b push edx */
  push32((uint32_t)(EDX));
  /* 11d9115c call 0x11d89620 */
  push32(0x11d91161u); f_11d89620();
  /* 11d91161 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91164 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91167 push eax */
  push32((uint32_t)(EAX));
  /* 11d91168 call 0x11d85ad0 */
  push32(0x11d9116du); f_11d85ad0();
  /* 11d9116d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91170 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d91173 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d91177 jne 0x11d91180 */
  if (!C.zf) goto L_11d91180;
  /* 11d91179 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d9117b jmp 0x11d9129f */
  goto L_11d9129f;
L_11d91180:;
  /* 11d91180 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d91183 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d91186 mov ecx, dword ptr [eax + 0x11db05fc] */
  ECX = (r32((uint32_t)(EAX + 0x11db05fc)));
  /* 11d9118c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d9118f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d91192 mov eax, dword ptr [edx*4 + 0x11db1988] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11db1988)));
  /* 11d91199 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d9119c push 6 */
  push32((uint32_t)(0x6u));
  /* 11d9119e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d911a1 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d911a4 add ecx, 0x11db19e0 */
  { uint32_t _a=(ECX),_b=(0x11db19e0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d911aa push ecx */
  push32((uint32_t)(ECX));
  /* 11d911ab lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 11d911ae push edx */
  push32((uint32_t)(EDX));
  /* 11d911af call 0x11d8ccf0 */
  push32(0x11d911b4u); f_11d8ccf0();
  /* 11d911b4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d911b7 mov eax, dword ptr [0x11db19a0] */
  EAX = (r32((uint32_t)(0x11db19a0)));
  /* 11d911bc mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11d911bf lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 11d911c5 push ecx */
  push32((uint32_t)(ECX));
  /* 11d911c6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d911c9 push edx */
  push32((uint32_t)(EDX));
  /* 11d911ca call 0x11d897a0 */
  push32(0x11d911cfu); f_11d897a0();
  /* 11d911cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d911d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d911d5 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d911d8 mov dword ptr [ecx + 0x11db05fc], eax */
  w32((uint32_t)(ECX + 0x11db05fc), (EAX));
  /* 11d911de mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 11d911e4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d911ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d911ed mov dword ptr [eax*4 + 0x11db1988], edx */
  w32((uint32_t)(EAX*4 + 0x11db1988), (EDX));
  /* 11d911f4 push 6 */
  push32((uint32_t)(0x6u));
  /* 11d911f6 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 11d911fc push ecx */
  push32((uint32_t)(ECX));
  /* 11d911fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d91200 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d91203 add edx, 0x11db19e0 */
  { uint32_t _a=(EDX),_b=(0x11db19e0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91209 push edx */
  push32((uint32_t)(EDX));
  /* 11d9120a call 0x11d8ccf0 */
  push32(0x11d9120fu); f_11d8ccf0();
  /* 11d9120f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91212 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d91216 jne 0x11d91223 */
  if (!C.zf) goto L_11d91223;
  /* 11d91218 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11d9121e mov dword ptr [0x11db19a0], eax */
  w32((uint32_t)(0x11db19a0), (EAX));
L_11d91223:;
  /* 11d91223 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d91227 jne 0x11d91235 */
  if (!C.zf) goto L_11d91235;
  /* 11d91229 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11d9122f mov dword ptr [0x11db19a4], ecx */
  w32((uint32_t)(0x11db19a4), (ECX));
L_11d91235:;
  /* 11d91235 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d91238 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d9123b call dword ptr [edx + 0x11db0600] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x11db0600))), 0x11d91241u);
  /* 11d91241 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d91243 je 0x11d9127c */
  if (C.zf) goto L_11d9127c;
  /* 11d91245 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d91248 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d9124b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d9124e mov dword ptr [eax + 0x11db05fc], ecx */
  w32((uint32_t)(EAX + 0x11db05fc), (ECX));
  /* 11d91254 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d91256 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d91259 push edx */
  push32((uint32_t)(EDX));
  /* 11d9125a call 0x11d86560 */
  push32(0x11d9125fu); f_11d86560();
  /* 11d9125f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91262 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d91265 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d91268 mov dword ptr [eax*4 + 0x11db1988], ecx */
  w32((uint32_t)(EAX*4 + 0x11db1988), (ECX));
  /* 11d9126f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d91272 mov dword ptr [0x11db19a0], edx */
  w32((uint32_t)(0x11db19a0), (EDX));
  /* 11d91278 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d9127a jmp 0x11d9129f */
  goto L_11d9129f;
L_11d9127c:;
  /* 11d9127c cmp dword ptr [ebp - 0xc], 0x11db04e8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x11db04e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d91283 je 0x11d91293 */
  if (C.zf) goto L_11d91293;
  /* 11d91285 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d91287 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d9128a push eax */
  push32((uint32_t)(EAX));
  /* 11d9128b call 0x11d86560 */
  push32(0x11d91290u); f_11d86560();
  /* 11d91290 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d91293:;
  /* 11d91293 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d91296 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d91299 mov eax, dword ptr [ecx + 0x11db05fc] */
  EAX = (r32((uint32_t)(ECX + 0x11db05fc)));
L_11d9129f:;
  /* 11d9129f mov esp, ebp */
  ESP = (EBP);
  /* 11d912a1 pop ebp */
  EBP = (pop32());
  /* 11d912a2 ret  */
  ESPCHK(0x11d91110u, _esp0);
  ESP += 4; return;
}

/* FUN_100112b0 @ 0x11d912b0 (256 bytes, 72 insns) */
void f_11d912b0(void) {
  FTRACE(0x11d912b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d912b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d912b1 mov ebp, esp */
  EBP = (ESP);
  /* 11d912b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d912b6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11d912bd cmp dword ptr [0x11db05fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db05fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d912c4 jne 0x11d912e4 */
  if (!C.zf) goto L_11d912e4;
  /* 11d912c6 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 11d912cb push 0x11dad4a8 */
  push32((uint32_t)(0x11dad4a8u));
  /* 11d912d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d912d2 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 11d912d7 call 0x11d85ad0 */
  push32(0x11d912dcu); f_11d85ad0();
  /* 11d912dc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d912df mov dword ptr [0x11db05fc], eax */
  w32((uint32_t)(0x11db05fc), (EAX));
L_11d912e4:;
  /* 11d912e4 mov eax, dword ptr [0x11db05fc] */
  EAX = (r32((uint32_t)(0x11db05fc)));
  /* 11d912e9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11d912ec mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11d912f3 jmp 0x11d912fe */
  goto L_11d912fe;
L_11d912f5:;
  /* 11d912f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d912f8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d912fb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11d912fe:;
  /* 11d912fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d91301 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d91304 mov eax, dword ptr [edx + 0x11db05fc] */
  EAX = (r32((uint32_t)(EDX + 0x11db05fc)));
  /* 11d9130a push eax */
  push32((uint32_t)(EAX));
  /* 11d9130b push 0x11dad4b4 */
  push32((uint32_t)(0x11dad4b4u));
  /* 11d91310 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d91313 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d91316 mov edx, dword ptr [ecx + 0x11db05f8] */
  EDX = (r32((uint32_t)(ECX + 0x11db05f8)));
  /* 11d9131c push edx */
  push32((uint32_t)(EDX));
  /* 11d9131d push 3 */
  push32((uint32_t)(0x3u));
  /* 11d9131f mov eax, dword ptr [0x11db05fc] */
  EAX = (r32((uint32_t)(0x11db05fc)));
  /* 11d91324 push eax */
  push32((uint32_t)(EAX));
  /* 11d91325 call 0x11d91550 */
  push32(0x11d9132au); f_11d91550();
  /* 11d9132a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9132d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d91331 jge 0x11d91379 */
  if ((C.sf==C.of)) goto L_11d91379;
  /* 11d91333 push 0x11dad4a0 */
  push32((uint32_t)(0x11dad4a0u));
  /* 11d91338 mov ecx, dword ptr [0x11db05fc] */
  ECX = (r32((uint32_t)(0x11db05fc)));
  /* 11d9133e push ecx */
  push32((uint32_t)(ECX));
  /* 11d9133f call 0x11d897b0 */
  push32(0x11d91344u); f_11d897b0();
  /* 11d91344 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91347 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d9134a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9134d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d91350 mov eax, dword ptr [edx + 0x11db05fc] */
  EAX = (r32((uint32_t)(EDX + 0x11db05fc)));
  /* 11d91356 push eax */
  push32((uint32_t)(EAX));
  /* 11d91357 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d9135a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d9135d mov edx, dword ptr [ecx + 0x11db05fc] */
  EDX = (r32((uint32_t)(ECX + 0x11db05fc)));
  /* 11d91363 push edx */
  push32((uint32_t)(EDX));
  /* 11d91364 call 0x11d8d280 */
  push32(0x11d91369u); f_11d8d280();
  /* 11d91369 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9136c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d9136e je 0x11d91377 */
  if (C.zf) goto L_11d91377;
  /* 11d91370 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11d91377:;
  /* 11d91377 jmp 0x11d913a7 */
  goto L_11d913a7;
L_11d91379:;
  /* 11d91379 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d9137d jne 0x11d91386 */
  if (!C.zf) goto L_11d91386;
  /* 11d9137f mov eax, dword ptr [0x11db05fc] */
  EAX = (r32((uint32_t)(0x11db05fc)));
  /* 11d91384 jmp 0x11d913ac */
  goto L_11d913ac;
L_11d91386:;
  /* 11d91386 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d91388 mov eax, dword ptr [0x11db05fc] */
  EAX = (r32((uint32_t)(0x11db05fc)));
  /* 11d9138d push eax */
  push32((uint32_t)(EAX));
  /* 11d9138e call 0x11d86560 */
  push32(0x11d91393u); f_11d86560();
  /* 11d91393 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91396 mov dword ptr [0x11db05fc], 0 */
  w32((uint32_t)(0x11db05fc), (0x0u));
  /* 11d913a0 mov eax, dword ptr [0x11db0614] */
  EAX = (r32((uint32_t)(0x11db0614)));
  /* 11d913a5 jmp 0x11d913ac */
  goto L_11d913ac;
L_11d913a7:;
  /* 11d913a7 jmp 0x11d912f5 */
  goto L_11d912f5;
L_11d913ac:;
  /* 11d913ac mov esp, ebp */
  ESP = (EBP);
  /* 11d913ae pop ebp */
  EBP = (pop32());
  /* 11d913af ret  */
  ESPCHK(0x11d912b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100113b0 @ 0x11d913b0 (388 bytes, 115 insns) */
void f_11d913b0(void) {
  FTRACE(0x11d913b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d913b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d913b1 mov ebp, esp */
  EBP = (ESP);
  /* 11d913b3 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d913b9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d913bd jne 0x11d913c6 */
  if (!C.zf) goto L_11d913c6;
  /* 11d913bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d913c1 jmp 0x11d91530 */
  goto L_11d91530;
L_11d913c6:;
  /* 11d913c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d913c9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d913cc cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d913cf jne 0x11d91420 */
  if (!C.zf) goto L_11d91420;
  /* 11d913d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d913d4 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11d913d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d913da jne 0x11d91420 */
  if (!C.zf) goto L_11d91420;
  /* 11d913dc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d913df mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 11d913e2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d913e5 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 11d913e9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d913ed je 0x11d91409 */
  if (C.zf) goto L_11d91409;
  /* 11d913ef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d913f2 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 11d913f7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d913fa mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 11d91400 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d91403 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_11d91409:;
  /* 11d91409 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d9140d je 0x11d91418 */
  if (C.zf) goto L_11d91418;
  /* 11d9140f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d91412 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11d91418:;
  /* 11d91418 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d9141b jmp 0x11d91530 */
  goto L_11d91530;
L_11d91420:;
  /* 11d91420 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d91423 push ecx */
  push32((uint32_t)(ECX));
  /* 11d91424 push 0x11db0570 */
  push32((uint32_t)(0x11db0570u));
  /* 11d91429 call 0x11d8d280 */
  push32(0x11d9142eu); f_11d8d280();
  /* 11d9142e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91431 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d91433 je 0x11d914e8 */
  if (C.zf) goto L_11d914e8;
  /* 11d91439 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d9143c push edx */
  push32((uint32_t)(EDX));
  /* 11d9143d push 0x11db04ec */
  push32((uint32_t)(0x11db04ecu));
  /* 11d91442 call 0x11d8d280 */
  push32(0x11d91447u); f_11d8d280();
  /* 11d91447 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9144a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d9144c je 0x11d914e8 */
  if (C.zf) goto L_11d914e8;
  /* 11d91452 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d91455 push eax */
  push32((uint32_t)(EAX));
  /* 11d91456 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 11d9145c push ecx */
  push32((uint32_t)(ECX));
  /* 11d9145d call 0x11d915a0 */
  push32(0x11d91462u); f_11d915a0();
  /* 11d91462 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91465 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d91467 je 0x11d91470 */
  if (C.zf) goto L_11d91470;
  /* 11d91469 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d9146b jmp 0x11d91530 */
  goto L_11d91530;
L_11d91470:;
  /* 11d91470 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 11d91476 push edx */
  push32((uint32_t)(EDX));
  /* 11d91477 push 0x11db19b8 */
  push32((uint32_t)(0x11db19b8u));
  /* 11d9147c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 11d91482 push eax */
  push32((uint32_t)(EAX));
  /* 11d91483 call 0x11d93010 */
  push32(0x11d91488u); f_11d93010();
  /* 11d91488 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9148b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d9148d jne 0x11d91496 */
  if (!C.zf) goto L_11d91496;
  /* 11d9148f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d91491 jmp 0x11d91530 */
  goto L_11d91530;
L_11d91496:;
  /* 11d91496 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d91498 mov cx, word ptr [0x11db19bc] */
  CX = (r16((uint32_t)(0x11db19bc)));
  /* 11d9149f mov dword ptr [0x11db19c0], ecx */
  w32((uint32_t)(0x11db19c0), (ECX));
  /* 11d914a5 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 11d914ab push edx */
  push32((uint32_t)(EDX));
  /* 11d914ac push 0x11db0570 */
  push32((uint32_t)(0x11db0570u));
  /* 11d914b1 call 0x11d91700 */
  push32(0x11d914b6u); f_11d91700();
  /* 11d914b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d914b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d914bc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d914bf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d914c1 je 0x11d914d6 */
  if (C.zf) goto L_11d914d6;
  /* 11d914c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d914c6 push edx */
  push32((uint32_t)(EDX));
  /* 11d914c7 push 0x11db04ec */
  push32((uint32_t)(0x11db04ecu));
  /* 11d914cc call 0x11d897a0 */
  push32(0x11d914d1u); f_11d897a0();
  /* 11d914d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d914d4 jmp 0x11d914e8 */
  goto L_11d914e8;
L_11d914d6:;
  /* 11d914d6 push 0x11db0570 */
  push32((uint32_t)(0x11db0570u));
  /* 11d914db push 0x11db04ec */
  push32((uint32_t)(0x11db04ecu));
  /* 11d914e0 call 0x11d897a0 */
  push32(0x11d914e5u); f_11d897a0();
  /* 11d914e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d914e8:;
  /* 11d914e8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d914ec je 0x11d91501 */
  if (C.zf) goto L_11d91501;
  /* 11d914ee push 6 */
  push32((uint32_t)(0x6u));
  /* 11d914f0 push 0x11db19b8 */
  push32((uint32_t)(0x11db19b8u));
  /* 11d914f5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d914f8 push eax */
  push32((uint32_t)(EAX));
  /* 11d914f9 call 0x11d8ccf0 */
  push32(0x11d914feu); f_11d8ccf0();
  /* 11d914fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d91501:;
  /* 11d91501 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d91505 je 0x11d9151a */
  if (C.zf) goto L_11d9151a;
  /* 11d91507 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d91509 push 0x11db19c0 */
  push32((uint32_t)(0x11db19c0u));
  /* 11d9150e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d91511 push ecx */
  push32((uint32_t)(ECX));
  /* 11d91512 call 0x11d8ccf0 */
  push32(0x11d91517u); f_11d8ccf0();
  /* 11d91517 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d9151a:;
  /* 11d9151a push 0x11db0570 */
  push32((uint32_t)(0x11db0570u));
  /* 11d9151f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d91522 push edx */
  push32((uint32_t)(EDX));
  /* 11d91523 call 0x11d897a0 */
  push32(0x11d91528u); f_11d897a0();
  /* 11d91528 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9152b mov eax, 0x11db0570 */
  EAX = (0x11db0570u);
L_11d91530:;
  /* 11d91530 mov esp, ebp */
  ESP = (EBP);
  /* 11d91532 pop ebp */
  EBP = (pop32());
  /* 11d91533 ret  */
  ESPCHK(0x11d913b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011540 @ 0x11d91540 (7 bytes, 5 insns) */
void f_11d91540(void) {
  FTRACE(0x11d91540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d91540 push ebp */
  push32((uint32_t)(EBP));
  /* 11d91541 mov ebp, esp */
  EBP = (ESP);
  /* 11d91543 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d91545 pop ebp */
  EBP = (pop32());
  /* 11d91546 ret  */
  ESPCHK(0x11d91540u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x11d91550 (79 bytes, 28 insns) */
void f_11d91550(void) {
  FTRACE(0x11d91550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d91550 push ebp */
  push32((uint32_t)(EBP));
  /* 11d91551 mov ebp, esp */
  EBP = (ESP);
  /* 11d91553 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d91556 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11d91559 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d9155c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11d91563 jmp 0x11d9156e */
  goto L_11d9156e;
L_11d91565:;
  /* 11d91565 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d91568 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9156b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11d9156e:;
  /* 11d9156e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d91571 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d91574 jge 0x11d91594 */
  if ((C.sf==C.of)) goto L_11d91594;
  /* 11d91576 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d91579 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9157c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d9157f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d91582 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11d91585 push edx */
  push32((uint32_t)(EDX));
  /* 11d91586 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d91589 push eax */
  push32((uint32_t)(EAX));
  /* 11d9158a call 0x11d897b0 */
  push32(0x11d9158fu); f_11d897b0();
  /* 11d9158f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91592 jmp 0x11d91565 */
  goto L_11d91565;
L_11d91594:;
  /* 11d91594 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d9159b mov esp, ebp */
  ESP = (EBP);
  /* 11d9159d pop ebp */
  EBP = (pop32());
  /* 11d9159e ret  */
  ESPCHK(0x11d91550u, _esp0);
  ESP += 4; return;
}

/* FUN_100115a0 @ 0x11d915a0 (349 bytes, 122 insns) */
void f_11d915a0(void) {
  FTRACE(0x11d915a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d915a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d915a1 mov ebp, esp */
  EBP = (ESP);
  /* 11d915a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d915a6 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 11d915ab push 0 */
  push32((uint32_t)(0x0u));
  /* 11d915ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d915b0 push eax */
  push32((uint32_t)(EAX));
  /* 11d915b1 call 0x11d8a180 */
  push32(0x11d915b6u); f_11d8a180();
  /* 11d915b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d915b9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d915bc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11d915bf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d915c1 jne 0x11d915ca */
  if (!C.zf) goto L_11d915ca;
  /* 11d915c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d915c5 jmp 0x11d916f9 */
  goto L_11d916f9;
L_11d915ca:;
  /* 11d915ca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d915cd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d915d0 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d915d3 jne 0x11d91600 */
  if (!C.zf) goto L_11d91600;
  /* 11d915d5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d915d8 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11d915dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d915de je 0x11d91600 */
  if (C.zf) goto L_11d91600;
  /* 11d915e0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d915e3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d915e6 push ecx */
  push32((uint32_t)(ECX));
  /* 11d915e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d915ea add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d915f0 push edx */
  push32((uint32_t)(EDX));
  /* 11d915f1 call 0x11d897a0 */
  push32(0x11d915f6u); f_11d897a0();
  /* 11d915f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d915f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d915fb jmp 0x11d916f9 */
  goto L_11d916f9;
L_11d91600:;
  /* 11d91600 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d91607 jmp 0x11d91612 */
  goto L_11d91612;
L_11d91609:;
  /* 11d91609 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d9160c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9160f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d91612:;
  /* 11d91612 push 0x11dad4b8 */
  push32((uint32_t)(0x11dad4b8u));
  /* 11d91617 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d9161a push ecx */
  push32((uint32_t)(ECX));
  /* 11d9161b call 0x11d92f50 */
  push32(0x11d91620u); f_11d92f50();
  /* 11d91620 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91623 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d91626 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d9162a jne 0x11d91634 */
  if (!C.zf) goto L_11d91634;
  /* 11d9162c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d9162f jmp 0x11d916f9 */
  goto L_11d916f9;
L_11d91634:;
  /* 11d91634 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d91637 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9163a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d9163c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 11d9163f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d91643 jne 0x11d9166a */
  if (!C.zf) goto L_11d9166a;
  /* 11d91645 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d91649 jge 0x11d9166a */
  if ((C.sf==C.of)) goto L_11d9166a;
  /* 11d9164b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11d9164f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d91652 je 0x11d9166a */
  if (C.zf) goto L_11d9166a;
  /* 11d91654 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d91657 push edx */
  push32((uint32_t)(EDX));
  /* 11d91658 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d9165b push eax */
  push32((uint32_t)(EAX));
  /* 11d9165c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d9165f push ecx */
  push32((uint32_t)(ECX));
  /* 11d91660 call 0x11d8a010 */
  push32(0x11d91665u); f_11d8a010();
  /* 11d91665 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91668 jmp 0x11d916d0 */
  goto L_11d916d0;
L_11d9166a:;
  /* 11d9166a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d9166e jne 0x11d91698 */
  if (!C.zf) goto L_11d91698;
  /* 11d91670 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d91674 jge 0x11d91698 */
  if ((C.sf==C.of)) goto L_11d91698;
  /* 11d91676 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11d9167a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d9167d je 0x11d91698 */
  if (C.zf) goto L_11d91698;
  /* 11d9167f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d91682 push eax */
  push32((uint32_t)(EAX));
  /* 11d91683 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d91686 push ecx */
  push32((uint32_t)(ECX));
  /* 11d91687 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d9168a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9168d push edx */
  push32((uint32_t)(EDX));
  /* 11d9168e call 0x11d8a010 */
  push32(0x11d91693u); f_11d8a010();
  /* 11d91693 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91696 jmp 0x11d916d0 */
  goto L_11d916d0;
L_11d91698:;
  /* 11d91698 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d9169c jne 0x11d916cb */
  if (!C.zf) goto L_11d916cb;
  /* 11d9169e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11d916a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d916a4 je 0x11d916af */
  if (C.zf) goto L_11d916af;
  /* 11d916a6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11d916aa cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d916ad jne 0x11d916cb */
  if (!C.zf) goto L_11d916cb;
L_11d916af:;
  /* 11d916af mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d916b2 push edx */
  push32((uint32_t)(EDX));
  /* 11d916b3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d916b6 push eax */
  push32((uint32_t)(EAX));
  /* 11d916b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d916ba add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d916c0 push ecx */
  push32((uint32_t)(ECX));
  /* 11d916c1 call 0x11d8a010 */
  push32(0x11d916c6u); f_11d8a010();
  /* 11d916c6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d916c9 jmp 0x11d916d0 */
  goto L_11d916d0;
L_11d916cb:;
  /* 11d916cb or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d916ce jmp 0x11d916f9 */
  goto L_11d916f9;
L_11d916d0:;
  /* 11d916d0 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11d916d4 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d916d7 jne 0x11d916db */
  if (!C.zf) goto L_11d916db;
  /* 11d916d9 jmp 0x11d916f7 */
  goto L_11d916f7;
L_11d916db:;
  /* 11d916db movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11d916df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d916e1 jne 0x11d916e5 */
  if (!C.zf) goto L_11d916e5;
  /* 11d916e3 jmp 0x11d916f7 */
  goto L_11d916f7;
L_11d916e5:;
  /* 11d916e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d916e8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d916eb lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 11d916ef mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11d916f2 jmp 0x11d91609 */
  goto L_11d91609;
L_11d916f7:;
  /* 11d916f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d916f9:;
  /* 11d916f9 mov esp, ebp */
  ESP = (EBP);
  /* 11d916fb pop ebp */
  EBP = (pop32());
  /* 11d916fc ret  */
  ESPCHK(0x11d915a0u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x11d91700 (101 bytes, 36 insns) */
void f_11d91700(void) {
  FTRACE(0x11d91700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d91700 push ebp */
  push32((uint32_t)(EBP));
  /* 11d91701 mov ebp, esp */
  EBP = (ESP);
  /* 11d91703 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d91706 push eax */
  push32((uint32_t)(EAX));
  /* 11d91707 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d9170a push ecx */
  push32((uint32_t)(ECX));
  /* 11d9170b call 0x11d897a0 */
  push32(0x11d91710u); f_11d897a0();
  /* 11d91710 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91713 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d91716 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 11d9171a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d9171c je 0x11d91738 */
  if (C.zf) goto L_11d91738;
  /* 11d9171e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d91721 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91724 push ecx */
  push32((uint32_t)(ECX));
  /* 11d91725 push 0x11dad4c0 */
  push32((uint32_t)(0x11dad4c0u));
  /* 11d9172a push 2 */
  push32((uint32_t)(0x2u));
  /* 11d9172c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d9172f push edx */
  push32((uint32_t)(EDX));
  /* 11d91730 call 0x11d91550 */
  push32(0x11d91735u); f_11d91550();
  /* 11d91735 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d91738:;
  /* 11d91738 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d9173b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 11d91742 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d91744 je 0x11d91763 */
  if (C.zf) goto L_11d91763;
  /* 11d91746 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d91749 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9174f push edx */
  push32((uint32_t)(EDX));
  /* 11d91750 push 0x11dad4bc */
  push32((uint32_t)(0x11dad4bcu));
  /* 11d91755 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d91757 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d9175a push eax */
  push32((uint32_t)(EAX));
  /* 11d9175b call 0x11d91550 */
  push32(0x11d91760u); f_11d91550();
  /* 11d91760 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d91763:;
  /* 11d91763 pop ebp */
  EBP = (pop32());
  /* 11d91764 ret  */
  ESPCHK(0x11d91700u, _esp0);
  ESP += 4; return;
}

/* FUN_10011770 @ 0x11d91770 (237 bytes, 81 insns) */
void f_11d91770(void) {
  FTRACE(0x11d91770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d91770 push ebp */
  push32((uint32_t)(EBP));
  /* 11d91771 mov ebp, esp */
  EBP = (ESP);
  /* 11d91773 push ecx */
  push32((uint32_t)(ECX));
  /* 11d91774 cmp dword ptr [0x11db2e4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db2e4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d9177b jne 0x11d91792 */
  if (!C.zf) goto L_11d91792;
  /* 11d9177d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d91780 push eax */
  push32((uint32_t)(EAX));
  /* 11d91781 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d91784 push ecx */
  push32((uint32_t)(ECX));
  /* 11d91785 call 0x11d93dc0 */
  push32(0x11d9178au); f_11d93dc0();
  /* 11d9178a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9178d jmp 0x11d91859 */
  goto L_11d91859;
L_11d91792:;
  /* 11d91792 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11d91794 call 0x11d886f0 */
  push32(0x11d91799u); f_11d886f0();
  /* 11d91799 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9179c jmp 0x11d917a7 */
  goto L_11d917a7;
L_11d9179e:;
  /* 11d9179e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d917a1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d917a4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11d917a7:;
  /* 11d917a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d917aa movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 11d917ae mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 11d917b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d917b5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d917bb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d917bd je 0x11d9183b */
  if (C.zf) goto L_11d9183b;
  /* 11d917bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d917c2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d917c7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d917c9 mov cl, byte ptr [eax + 0x11db2f61] */
  CL = (r8((uint32_t)(EAX + 0x11db2f61)));
  /* 11d917cf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11d917d2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d917d4 je 0x11d91826 */
  if (C.zf) goto L_11d91826;
  /* 11d917d6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d917d9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d917dc mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11d917df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d917e2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d917e4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11d917e6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d917e8 jne 0x11d917f8 */
  if (!C.zf) goto L_11d917f8;
  /* 11d917ea push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11d917ec call 0x11d88790 */
  push32(0x11d917f1u); f_11d88790();
  /* 11d917f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d917f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d917f6 jmp 0x11d91859 */
  goto L_11d91859;
L_11d917f8:;
  /* 11d917f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d917fb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d91801 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11d91804 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d91807 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d91809 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11d9180b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11d9180d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d91810 jne 0x11d91824 */
  if (!C.zf) goto L_11d91824;
  /* 11d91812 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11d91814 call 0x11d88790 */
  push32(0x11d91819u); f_11d88790();
  /* 11d91819 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9181c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d9181f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d91822 jmp 0x11d91859 */
  goto L_11d91859;
L_11d91824:;
  /* 11d91824 jmp 0x11d91836 */
  goto L_11d91836;
L_11d91826:;
  /* 11d91826 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d91829 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d9182f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d91832 jne 0x11d91836 */
  if (!C.zf) goto L_11d91836;
  /* 11d91834 jmp 0x11d9183b */
  goto L_11d9183b;
L_11d91836:;
  /* 11d91836 jmp 0x11d9179e */
  goto L_11d9179e;
L_11d9183b:;
  /* 11d9183b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11d9183d call 0x11d88790 */
  push32(0x11d91842u); f_11d88790();
  /* 11d91842 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91845 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d91848 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d9184d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d91850 jne 0x11d91857 */
  if (!C.zf) goto L_11d91857;
  /* 11d91852 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d91855 jmp 0x11d91859 */
  goto L_11d91859;
L_11d91857:;
  /* 11d91857 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d91859:;
  /* 11d91859 mov esp, ebp */
  ESP = (EBP);
  /* 11d9185b pop ebp */
  EBP = (pop32());
  /* 11d9185c ret  */
  ESPCHK(0x11d91770u, _esp0);
  ESP += 4; return;
}

/* FUN_10011860 @ 0x11d91860 (130 bytes, 50 insns) */
void f_11d91860(void) {
  FTRACE(0x11d91860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d91860 push ebp */
  push32((uint32_t)(EBP));
  /* 11d91861 mov ebp, esp */
  EBP = (ESP);
  /* 11d91863 push ecx */
  push32((uint32_t)(ECX));
  /* 11d91864 push ebx */
  push32((uint32_t)(EBX));
  /* 11d91865 push esi */
  push32((uint32_t)(ESI));
  /* 11d91866 push edi */
  push32((uint32_t)(EDI));
  /* 11d91867 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11d9186e:;
  /* 11d9186e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d91872 jne 0x11d91892 */
  if (!C.zf) goto L_11d91892;
  /* 11d91874 push 0x11dad4d0 */
  push32((uint32_t)(0x11dad4d0u));
  /* 11d91879 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d9187b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 11d9187d push 0x11dad4c4 */
  push32((uint32_t)(0x11dad4c4u));
  /* 11d91882 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d91884 call 0x11d84e40 */
  push32(0x11d91889u); f_11d84e40();
  /* 11d91889 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9188c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d9188f jne 0x11d91892 */
  if (!C.zf) goto L_11d91892;
  /* 11d91891 int3  */
  x86_unimpl("int3 @ 0x11d91891");
L_11d91892:;
  /* 11d91892 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d91894 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d91896 jne 0x11d9186e */
  if (!C.zf) goto L_11d9186e;
  /* 11d91898 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d9189b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11d9189e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 11d918a1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d918a3 je 0x11d918b1 */
  if (C.zf) goto L_11d918b1;
  /* 11d918a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d918a8 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 11d918af jmp 0x11d918d8 */
  goto L_11d918d8;
L_11d918b1:;
  /* 11d918b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d918b4 push ecx */
  push32((uint32_t)(ECX));
  /* 11d918b5 call 0x11d8f740 */
  push32(0x11d918bau); f_11d8f740();
  /* 11d918ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d918bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d918c0 push edx */
  push32((uint32_t)(EDX));
  /* 11d918c1 call 0x11d918f0 */
  push32(0x11d918c6u); f_11d918f0();
  /* 11d918c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d918c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d918cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d918cf push eax */
  push32((uint32_t)(EAX));
  /* 11d918d0 call 0x11d8f7b0 */
  push32(0x11d918d5u); f_11d8f7b0();
  /* 11d918d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d918d8:;
  /* 11d918d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d918db pop edi */
  EDI = (pop32());
  /* 11d918dc pop esi */
  ESI = (pop32());
  /* 11d918dd pop ebx */
  EBX = (pop32());
  /* 11d918de mov esp, ebp */
  ESP = (EBP);
  /* 11d918e0 pop ebp */
  EBP = (pop32());
  /* 11d918e1 ret  */
  ESPCHK(0x11d91860u, _esp0);
  ESP += 4; return;
}

/* FUN_100118f0 @ 0x11d918f0 (190 bytes, 67 insns) */
void f_11d918f0(void) {
  FTRACE(0x11d918f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d918f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d918f1 mov ebp, esp */
  EBP = (ESP);
  /* 11d918f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d918f6 push ebx */
  push32((uint32_t)(EBX));
  /* 11d918f7 push esi */
  push32((uint32_t)(ESI));
  /* 11d918f8 push edi */
  push32((uint32_t)(EDI));
  /* 11d918f9 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11d91900 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d91903 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11d91906:;
  /* 11d91906 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d9190a jne 0x11d9192a */
  if (!C.zf) goto L_11d9192a;
  /* 11d9190c push 0x11dad2f8 */
  push32((uint32_t)(0x11dad2f8u));
  /* 11d91911 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d91913 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 11d91915 push 0x11dad4c4 */
  push32((uint32_t)(0x11dad4c4u));
  /* 11d9191a push 2 */
  push32((uint32_t)(0x2u));
  /* 11d9191c call 0x11d84e40 */
  push32(0x11d91921u); f_11d84e40();
  /* 11d91921 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91924 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d91927 jne 0x11d9192a */
  if (!C.zf) goto L_11d9192a;
  /* 11d91929 int3  */
  x86_unimpl("int3 @ 0x11d91929");
L_11d9192a:;
  /* 11d9192a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d9192c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d9192e jne 0x11d91906 */
  if (!C.zf) goto L_11d91906;
  /* 11d91930 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d91933 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11d91936 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 11d9193b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d9193d je 0x11d9199a */
  if (C.zf) goto L_11d9199a;
  /* 11d9193f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d91942 push ecx */
  push32((uint32_t)(ECX));
  /* 11d91943 call 0x11d90b00 */
  push32(0x11d91948u); f_11d90b00();
  /* 11d91948 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9194b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d9194e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d91951 push edx */
  push32((uint32_t)(EDX));
  /* 11d91952 call 0x11d93fb0 */
  push32(0x11d91957u); f_11d93fb0();
  /* 11d91957 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9195a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d9195d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11d91960 push ecx */
  push32((uint32_t)(ECX));
  /* 11d91961 call 0x11d93e80 */
  push32(0x11d91966u); f_11d93e80();
  /* 11d91966 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91969 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d9196b jge 0x11d91976 */
  if ((C.sf==C.of)) goto L_11d91976;
  /* 11d9196d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11d91974 jmp 0x11d9199a */
  goto L_11d9199a;
L_11d91976:;
  /* 11d91976 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d91979 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d9197d je 0x11d9199a */
  if (C.zf) goto L_11d9199a;
  /* 11d9197f push 2 */
  push32((uint32_t)(0x2u));
  /* 11d91981 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d91984 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11d91987 push ecx */
  push32((uint32_t)(ECX));
  /* 11d91988 call 0x11d86560 */
  push32(0x11d9198du); f_11d86560();
  /* 11d9198d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91990 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d91993 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_11d9199a:;
  /* 11d9199a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d9199d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 11d919a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d919a7 pop edi */
  EDI = (pop32());
  /* 11d919a8 pop esi */
  ESI = (pop32());
  /* 11d919a9 pop ebx */
  EBX = (pop32());
  /* 11d919aa mov esp, ebp */
  ESP = (EBP);
  /* 11d919ac pop ebp */
  EBP = (pop32());
  /* 11d919ad ret  */
  ESPCHK(0x11d918f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100119b0 @ 0x11d919b0 (210 bytes, 63 insns) */
void f_11d919b0(void) {
  FTRACE(0x11d919b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d919b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d919b1 mov ebp, esp */
  EBP = (ESP);
  /* 11d919b3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d919b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d919b7 cmp eax, dword ptr [0x11db31fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11db31fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d919bd jae 0x11d919e1 */
  if (!C.cf) goto L_11d919e1;
  /* 11d919bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d919c2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11d919c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d919c8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11d919cb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d919ce mov eax, dword ptr [ecx*4 + 0x11db30c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11db30c0)));
  /* 11d919d5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11d919da and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11d919dd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d919df jne 0x11d919f4 */
  if (!C.zf) goto L_11d919f4;
L_11d919e1:;
  /* 11d919e1 call 0x11d8e6c0 */
  push32(0x11d919e6u); f_11d8e6c0();
  /* 11d919e6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11d919ec or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d919ef jmp 0x11d91a7e */
  goto L_11d91a7e;
L_11d919f4:;
  /* 11d919f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d919f7 push edx */
  push32((uint32_t)(EDX));
  /* 11d919f8 call 0x11d908c0 */
  push32(0x11d919fdu); f_11d908c0();
  /* 11d919fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91a00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d91a03 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11d91a06 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d91a09 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11d91a0c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d91a0f mov edx, dword ptr [eax*4 + 0x11db30c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11db30c0)));
  /* 11d91a16 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11d91a1b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11d91a1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d91a20 je 0x11d91a5d */
  if (C.zf) goto L_11d91a5d;
  /* 11d91a22 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d91a25 push ecx */
  push32((uint32_t)(ECX));
  /* 11d91a26 call 0x11d90740 */
  push32(0x11d91a2bu); f_11d90740();
  /* 11d91a2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91a2e push eax */
  push32((uint32_t)(EAX));
  /* 11d91a2f call dword ptr [0x11db42ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db42ec))), 0x11d91a35u);
  /* 11d91a35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d91a37 jne 0x11d91a44 */
  if (!C.zf) goto L_11d91a44;
  /* 11d91a39 call dword ptr [0x11db43a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43a0))), 0x11d91a3fu);
  /* 11d91a3f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d91a42 jmp 0x11d91a4b */
  goto L_11d91a4b;
L_11d91a44:;
  /* 11d91a44 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11d91a4b:;
  /* 11d91a4b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d91a4f jne 0x11d91a53 */
  if (!C.zf) goto L_11d91a53;
  /* 11d91a51 jmp 0x11d91a6f */
  goto L_11d91a6f;
L_11d91a53:;
  /* 11d91a53 call 0x11d8e6d0 */
  push32(0x11d91a58u); f_11d8e6d0();
  /* 11d91a58 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d91a5b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11d91a5d:;
  /* 11d91a5d call 0x11d8e6c0 */
  push32(0x11d91a62u); f_11d8e6c0();
  /* 11d91a62 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11d91a68 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11d91a6f:;
  /* 11d91a6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d91a72 push eax */
  push32((uint32_t)(EAX));
  /* 11d91a73 call 0x11d90950 */
  push32(0x11d91a78u); f_11d90950();
  /* 11d91a78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91a7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11d91a7e:;
  /* 11d91a7e mov esp, ebp */
  ESP = (EBP);
  /* 11d91a80 pop ebp */
  EBP = (pop32());
  /* 11d91a81 ret  */
  ESPCHK(0x11d919b0u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x11d91a90 (219 bytes, 64 insns) */
void f_11d91a90(void) {
  FTRACE(0x11d91a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d91a90 push ebp */
  push32((uint32_t)(EBP));
  /* 11d91a91 mov ebp, esp */
  EBP = (ESP);
  /* 11d91a93 push ecx */
  push32((uint32_t)(ECX));
  /* 11d91a94 cmp dword ptr [0x11db199c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db199c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d91a9b je 0x11d91b31 */
  if (C.zf) goto L_11d91b31;
  /* 11d91aa1 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 11d91aa3 push 0x11dad4e0 */
  push32((uint32_t)(0x11dad4e0u));
  /* 11d91aa8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d91aaa push 0xac */
  push32((uint32_t)(0xacu));
  /* 11d91aaf push 1 */
  push32((uint32_t)(0x1u));
  /* 11d91ab1 call 0x11d85ee0 */
  push32(0x11d91ab6u); f_11d85ee0();
  /* 11d91ab6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91ab9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d91abc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d91ac0 jne 0x11d91acc */
  if (!C.zf) goto L_11d91acc;
  /* 11d91ac2 mov eax, 1 */
  EAX = (0x1u);
  /* 11d91ac7 jmp 0x11d91b67 */
  goto L_11d91b67;
L_11d91acc:;
  /* 11d91acc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d91acf push eax */
  push32((uint32_t)(EAX));
  /* 11d91ad0 call 0x11d91b70 */
  push32(0x11d91ad5u); f_11d91b70();
  /* 11d91ad5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91ad8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d91ada je 0x11d91afd */
  if (C.zf) goto L_11d91afd;
  /* 11d91adc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d91adf push ecx */
  push32((uint32_t)(ECX));
  /* 11d91ae0 call 0x11d92100 */
  push32(0x11d91ae5u); f_11d92100();
  /* 11d91ae5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91ae8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d91aea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d91aed push edx */
  push32((uint32_t)(EDX));
  /* 11d91aee call 0x11d86560 */
  push32(0x11d91af3u); f_11d86560();
  /* 11d91af3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91af6 mov eax, 1 */
  EAX = (0x1u);
  /* 11d91afb jmp 0x11d91b67 */
  goto L_11d91b67;
L_11d91afd:;
  /* 11d91afd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d91b00 mov dword ptr [0x11db0dc0], eax */
  w32((uint32_t)(0x11db0dc0), (EAX));
  /* 11d91b05 mov ecx, dword ptr [0x11db19c4] */
  ECX = (r32((uint32_t)(0x11db19c4)));
  /* 11d91b0b push ecx */
  push32((uint32_t)(ECX));
  /* 11d91b0c call 0x11d92100 */
  push32(0x11d91b11u); f_11d92100();
  /* 11d91b11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91b14 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d91b16 mov edx, dword ptr [0x11db19c4] */
  EDX = (r32((uint32_t)(0x11db19c4)));
  /* 11d91b1c push edx */
  push32((uint32_t)(EDX));
  /* 11d91b1d call 0x11d86560 */
  push32(0x11d91b22u); f_11d86560();
  /* 11d91b22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91b25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d91b28 mov dword ptr [0x11db19c4], eax */
  w32((uint32_t)(0x11db19c4), (EAX));
  /* 11d91b2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d91b2f jmp 0x11d91b67 */
  goto L_11d91b67;
L_11d91b31:;
  /* 11d91b31 mov dword ptr [0x11db0dc0], 0x11db0dc8 */
  w32((uint32_t)(0x11db0dc0), (0x11db0dc8u));
  /* 11d91b3b mov ecx, dword ptr [0x11db19c4] */
  ECX = (r32((uint32_t)(0x11db19c4)));
  /* 11d91b41 push ecx */
  push32((uint32_t)(ECX));
  /* 11d91b42 call 0x11d92100 */
  push32(0x11d91b47u); f_11d92100();
  /* 11d91b47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91b4a push 2 */
  push32((uint32_t)(0x2u));
  /* 11d91b4c mov edx, dword ptr [0x11db19c4] */
  EDX = (r32((uint32_t)(0x11db19c4)));
  /* 11d91b52 push edx */
  push32((uint32_t)(EDX));
  /* 11d91b53 call 0x11d86560 */
  push32(0x11d91b58u); f_11d86560();
  /* 11d91b58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91b5b mov dword ptr [0x11db19c4], 0 */
  w32((uint32_t)(0x11db19c4), (0x0u));
  /* 11d91b65 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d91b67:;
  /* 11d91b67 mov esp, ebp */
  ESP = (EBP);
  /* 11d91b69 pop ebp */
  EBP = (pop32());
  /* 11d91b6a ret  */
  ESPCHK(0x11d91a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10011b70 @ 0x11d91b70 (1423 bytes, 533 insns) */
void f_11d91b70(void) {
  FTRACE(0x11d91b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d91b70 push ebp */
  push32((uint32_t)(EBP));
  /* 11d91b71 mov ebp, esp */
  EBP = (ESP);
  /* 11d91b73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d91b76 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11d91b7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d91b7f mov ax, word ptr [0x11db19fe] */
  AX = (r16((uint32_t)(0x11db19fe)));
  /* 11d91b85 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d91b88 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d91b8a mov cx, word ptr [0x11db1a00] */
  CX = (r16((uint32_t)(0x11db1a00)));
  /* 11d91b91 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d91b94 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d91b98 jne 0x11d91ba2 */
  if (!C.zf) goto L_11d91ba2;
  /* 11d91b9a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d91b9d jmp 0x11d920fb */
  goto L_11d920fb;
L_11d91ba2:;
  /* 11d91ba2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d91ba5 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91ba8 push edx */
  push32((uint32_t)(EDX));
  /* 11d91ba9 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 11d91bab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d91bae push eax */
  push32((uint32_t)(EAX));
  /* 11d91baf push 1 */
  push32((uint32_t)(0x1u));
  /* 11d91bb1 call 0x11d954c0 */
  push32(0x11d91bb6u); f_11d954c0();
  /* 11d91bb6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91bb9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d91bbc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d91bbe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d91bc1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d91bc4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91bc7 push edx */
  push32((uint32_t)(EDX));
  /* 11d91bc8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 11d91bca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d91bcd push eax */
  push32((uint32_t)(EAX));
  /* 11d91bce push 1 */
  push32((uint32_t)(0x1u));
  /* 11d91bd0 call 0x11d954c0 */
  push32(0x11d91bd5u); f_11d954c0();
  /* 11d91bd5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91bd8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d91bdb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d91bdd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d91be0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d91be3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91be6 push edx */
  push32((uint32_t)(EDX));
  /* 11d91be7 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 11d91be9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d91bec push eax */
  push32((uint32_t)(EAX));
  /* 11d91bed push 1 */
  push32((uint32_t)(0x1u));
  /* 11d91bef call 0x11d954c0 */
  push32(0x11d91bf4u); f_11d954c0();
  /* 11d91bf4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91bf7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d91bfa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d91bfc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d91bff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d91c02 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91c05 push edx */
  push32((uint32_t)(EDX));
  /* 11d91c06 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 11d91c08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d91c0b push eax */
  push32((uint32_t)(EAX));
  /* 11d91c0c push 1 */
  push32((uint32_t)(0x1u));
  /* 11d91c0e call 0x11d954c0 */
  push32(0x11d91c13u); f_11d954c0();
  /* 11d91c13 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91c16 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d91c19 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d91c1b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d91c1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d91c21 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91c24 push edx */
  push32((uint32_t)(EDX));
  /* 11d91c25 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 11d91c27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d91c2a push eax */
  push32((uint32_t)(EAX));
  /* 11d91c2b push 1 */
  push32((uint32_t)(0x1u));
  /* 11d91c2d call 0x11d954c0 */
  push32(0x11d91c32u); f_11d954c0();
  /* 11d91c32 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91c35 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d91c38 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d91c3a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d91c3d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d91c40 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91c43 push edx */
  push32((uint32_t)(EDX));
  /* 11d91c44 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 11d91c46 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d91c49 push eax */
  push32((uint32_t)(EAX));
  /* 11d91c4a push 1 */
  push32((uint32_t)(0x1u));
  /* 11d91c4c call 0x11d954c0 */
  push32(0x11d91c51u); f_11d954c0();
  /* 11d91c51 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91c54 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d91c57 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d91c59 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d91c5c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d91c5f push edx */
  push32((uint32_t)(EDX));
  /* 11d91c60 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 11d91c62 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d91c65 push eax */
  push32((uint32_t)(EAX));
  /* 11d91c66 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d91c68 call 0x11d954c0 */
  push32(0x11d91c6du); f_11d954c0();
  /* 11d91c6d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91c70 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d91c73 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d91c75 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d91c78 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d91c7b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91c7e push edx */
  push32((uint32_t)(EDX));
  /* 11d91c7f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 11d91c81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d91c84 push eax */
  push32((uint32_t)(EAX));
  /* 11d91c85 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d91c87 call 0x11d954c0 */
  push32(0x11d91c8cu); f_11d954c0();
  /* 11d91c8c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91c8f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d91c92 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d91c94 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d91c97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d91c9a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91c9d push edx */
  push32((uint32_t)(EDX));
  /* 11d91c9e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 11d91ca0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d91ca3 push eax */
  push32((uint32_t)(EAX));
  /* 11d91ca4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d91ca6 call 0x11d954c0 */
  push32(0x11d91cabu); f_11d954c0();
  /* 11d91cab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91cae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d91cb1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d91cb3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d91cb6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d91cb9 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91cbc push edx */
  push32((uint32_t)(EDX));
  /* 11d91cbd push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 11d91cbf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d91cc2 push eax */
  push32((uint32_t)(EAX));
  /* 11d91cc3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d91cc5 call 0x11d954c0 */
  push32(0x11d91ccau); f_11d954c0();
  /* 11d91cca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91ccd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d91cd0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d91cd2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d91cd5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d91cd8 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91cdb push edx */
  push32((uint32_t)(EDX));
  /* 11d91cdc push 0x2d */
  push32((uint32_t)(0x2du));
  /* 11d91cde mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d91ce1 push eax */
  push32((uint32_t)(EAX));
  /* 11d91ce2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d91ce4 call 0x11d954c0 */
  push32(0x11d91ce9u); f_11d954c0();
  /* 11d91ce9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91cec mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d91cef or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d91cf1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d91cf4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d91cf7 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91cfa push edx */
  push32((uint32_t)(EDX));
  /* 11d91cfb push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 11d91cfd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d91d00 push eax */
  push32((uint32_t)(EAX));
  /* 11d91d01 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d91d03 call 0x11d954c0 */
  push32(0x11d91d08u); f_11d954c0();
  /* 11d91d08 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91d0b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d91d0e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d91d10 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d91d13 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d91d16 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91d19 push edx */
  push32((uint32_t)(EDX));
  /* 11d91d1a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 11d91d1c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d91d1f push eax */
  push32((uint32_t)(EAX));
  /* 11d91d20 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d91d22 call 0x11d954c0 */
  push32(0x11d91d27u); f_11d954c0();
  /* 11d91d27 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91d2a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d91d2d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d91d2f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d91d32 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d91d35 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91d38 push edx */
  push32((uint32_t)(EDX));
  /* 11d91d39 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11d91d3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d91d3e push eax */
  push32((uint32_t)(EAX));
  /* 11d91d3f push 1 */
  push32((uint32_t)(0x1u));
  /* 11d91d41 call 0x11d954c0 */
  push32(0x11d91d46u); f_11d954c0();
  /* 11d91d46 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91d49 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d91d4c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d91d4e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d91d51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d91d54 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91d57 push edx */
  push32((uint32_t)(EDX));
  /* 11d91d58 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11d91d5a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d91d5d push eax */
  push32((uint32_t)(EAX));
  /* 11d91d5e push 1 */
  push32((uint32_t)(0x1u));
  /* 11d91d60 call 0x11d954c0 */
  push32(0x11d91d65u); f_11d954c0();
  /* 11d91d65 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91d68 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d91d6b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d91d6d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d91d70 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d91d73 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91d76 push edx */
  push32((uint32_t)(EDX));
  /* 11d91d77 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11d91d79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d91d7c push eax */
  push32((uint32_t)(EAX));
  /* 11d91d7d push 1 */
  push32((uint32_t)(0x1u));
  /* 11d91d7f call 0x11d954c0 */
  push32(0x11d91d84u); f_11d954c0();
  /* 11d91d84 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91d87 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d91d8a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d91d8c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d91d8f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d91d92 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91d95 push edx */
  push32((uint32_t)(EDX));
  /* 11d91d96 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11d91d98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d91d9b push eax */
  push32((uint32_t)(EAX));
  /* 11d91d9c push 1 */
  push32((uint32_t)(0x1u));
  /* 11d91d9e call 0x11d954c0 */
  push32(0x11d91da3u); f_11d954c0();
  /* 11d91da3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91da6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d91da9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d91dab mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d91dae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d91db1 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91db4 push edx */
  push32((uint32_t)(EDX));
  /* 11d91db5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 11d91db7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d91dba push eax */
  push32((uint32_t)(EAX));
  /* 11d91dbb push 1 */
  push32((uint32_t)(0x1u));
  /* 11d91dbd call 0x11d954c0 */
  push32(0x11d91dc2u); f_11d954c0();
  /* 11d91dc2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91dc5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d91dc8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d91dca mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d91dcd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d91dd0 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91dd3 push edx */
  push32((uint32_t)(EDX));
  /* 11d91dd4 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 11d91dd6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d91dd9 push eax */
  push32((uint32_t)(EAX));
  /* 11d91dda push 1 */
  push32((uint32_t)(0x1u));
  /* 11d91ddc call 0x11d954c0 */
  push32(0x11d91de1u); f_11d954c0();
  /* 11d91de1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91de4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d91de7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d91de9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d91dec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d91def add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91df2 push edx */
  push32((uint32_t)(EDX));
  /* 11d91df3 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 11d91df5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d91df8 push eax */
  push32((uint32_t)(EAX));
  /* 11d91df9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d91dfb call 0x11d954c0 */
  push32(0x11d91e00u); f_11d954c0();
  /* 11d91e00 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91e03 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d91e06 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d91e08 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d91e0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d91e0e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91e11 push edx */
  push32((uint32_t)(EDX));
  /* 11d91e12 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 11d91e14 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d91e17 push eax */
  push32((uint32_t)(EAX));
  /* 11d91e18 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d91e1a call 0x11d954c0 */
  push32(0x11d91e1fu); f_11d954c0();
  /* 11d91e1f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91e22 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d91e25 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d91e27 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d91e2a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d91e2d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91e30 push edx */
  push32((uint32_t)(EDX));
  /* 11d91e31 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 11d91e33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d91e36 push eax */
  push32((uint32_t)(EAX));
  /* 11d91e37 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d91e39 call 0x11d954c0 */
  push32(0x11d91e3eu); f_11d954c0();
  /* 11d91e3e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91e41 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d91e44 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d91e46 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d91e49 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d91e4c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91e4f push edx */
  push32((uint32_t)(EDX));
  /* 11d91e50 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 11d91e52 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d91e55 push eax */
  push32((uint32_t)(EAX));
  /* 11d91e56 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d91e58 call 0x11d954c0 */
  push32(0x11d91e5du); f_11d954c0();
  /* 11d91e5d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91e60 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d91e63 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d91e65 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d91e68 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d91e6b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91e6e push edx */
  push32((uint32_t)(EDX));
  /* 11d91e6f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 11d91e71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d91e74 push eax */
  push32((uint32_t)(EAX));
  /* 11d91e75 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d91e77 call 0x11d954c0 */
  push32(0x11d91e7cu); f_11d954c0();
  /* 11d91e7c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91e7f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d91e82 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d91e84 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d91e87 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d91e8a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91e8d push edx */
  push32((uint32_t)(EDX));
  /* 11d91e8e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 11d91e90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d91e93 push eax */
  push32((uint32_t)(EAX));
  /* 11d91e94 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d91e96 call 0x11d954c0 */
  push32(0x11d91e9bu); f_11d954c0();
  /* 11d91e9b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91e9e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d91ea1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d91ea3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d91ea6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d91ea9 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91eac push edx */
  push32((uint32_t)(EDX));
  /* 11d91ead push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 11d91eaf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d91eb2 push eax */
  push32((uint32_t)(EAX));
  /* 11d91eb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d91eb5 call 0x11d954c0 */
  push32(0x11d91ebau); f_11d954c0();
  /* 11d91eba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91ebd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d91ec0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d91ec2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d91ec5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d91ec8 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91ecb push edx */
  push32((uint32_t)(EDX));
  /* 11d91ecc push 0x38 */
  push32((uint32_t)(0x38u));
  /* 11d91ece mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d91ed1 push eax */
  push32((uint32_t)(EAX));
  /* 11d91ed2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d91ed4 call 0x11d954c0 */
  push32(0x11d91ed9u); f_11d954c0();
  /* 11d91ed9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91edc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d91edf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d91ee1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d91ee4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d91ee7 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91eea push edx */
  push32((uint32_t)(EDX));
  /* 11d91eeb push 0x39 */
  push32((uint32_t)(0x39u));
  /* 11d91eed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d91ef0 push eax */
  push32((uint32_t)(EAX));
  /* 11d91ef1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d91ef3 call 0x11d954c0 */
  push32(0x11d91ef8u); f_11d954c0();
  /* 11d91ef8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91efb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d91efe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d91f00 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d91f03 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d91f06 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91f09 push edx */
  push32((uint32_t)(EDX));
  /* 11d91f0a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 11d91f0c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d91f0f push eax */
  push32((uint32_t)(EAX));
  /* 11d91f10 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d91f12 call 0x11d954c0 */
  push32(0x11d91f17u); f_11d954c0();
  /* 11d91f17 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91f1a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d91f1d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d91f1f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d91f22 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d91f25 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91f28 push edx */
  push32((uint32_t)(EDX));
  /* 11d91f29 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 11d91f2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d91f2e push eax */
  push32((uint32_t)(EAX));
  /* 11d91f2f push 1 */
  push32((uint32_t)(0x1u));
  /* 11d91f31 call 0x11d954c0 */
  push32(0x11d91f36u); f_11d954c0();
  /* 11d91f36 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91f39 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d91f3c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d91f3e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d91f41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d91f44 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91f47 push edx */
  push32((uint32_t)(EDX));
  /* 11d91f48 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11d91f4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d91f4d push eax */
  push32((uint32_t)(EAX));
  /* 11d91f4e push 1 */
  push32((uint32_t)(0x1u));
  /* 11d91f50 call 0x11d954c0 */
  push32(0x11d91f55u); f_11d954c0();
  /* 11d91f55 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91f58 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d91f5b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d91f5d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d91f60 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d91f63 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91f66 push edx */
  push32((uint32_t)(EDX));
  /* 11d91f67 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11d91f69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d91f6c push eax */
  push32((uint32_t)(EAX));
  /* 11d91f6d push 1 */
  push32((uint32_t)(0x1u));
  /* 11d91f6f call 0x11d954c0 */
  push32(0x11d91f74u); f_11d954c0();
  /* 11d91f74 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91f77 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d91f7a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d91f7c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d91f7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d91f82 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91f88 push edx */
  push32((uint32_t)(EDX));
  /* 11d91f89 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 11d91f8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d91f8e push eax */
  push32((uint32_t)(EAX));
  /* 11d91f8f push 1 */
  push32((uint32_t)(0x1u));
  /* 11d91f91 call 0x11d954c0 */
  push32(0x11d91f96u); f_11d954c0();
  /* 11d91f96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91f99 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d91f9c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d91f9e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d91fa1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d91fa4 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91faa push edx */
  push32((uint32_t)(EDX));
  /* 11d91fab push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11d91fad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d91fb0 push eax */
  push32((uint32_t)(EAX));
  /* 11d91fb1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d91fb3 call 0x11d954c0 */
  push32(0x11d91fb8u); f_11d954c0();
  /* 11d91fb8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91fbb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d91fbe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d91fc0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d91fc3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d91fc6 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91fcc push edx */
  push32((uint32_t)(EDX));
  /* 11d91fcd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11d91fcf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d91fd2 push eax */
  push32((uint32_t)(EAX));
  /* 11d91fd3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d91fd5 call 0x11d954c0 */
  push32(0x11d91fdau); f_11d954c0();
  /* 11d91fda add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91fdd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d91fe0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d91fe2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d91fe5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d91fe8 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91fee push edx */
  push32((uint32_t)(EDX));
  /* 11d91fef push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11d91ff1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d91ff4 push eax */
  push32((uint32_t)(EAX));
  /* 11d91ff5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d91ff7 call 0x11d954c0 */
  push32(0x11d91ffcu); f_11d954c0();
  /* 11d91ffc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d91fff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d92002 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d92004 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d92007 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d9200a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92010 push edx */
  push32((uint32_t)(EDX));
  /* 11d92011 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11d92013 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d92016 push eax */
  push32((uint32_t)(EAX));
  /* 11d92017 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d92019 call 0x11d954c0 */
  push32(0x11d9201eu); f_11d954c0();
  /* 11d9201e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92021 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d92024 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d92026 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d92029 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d9202c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92032 push edx */
  push32((uint32_t)(EDX));
  /* 11d92033 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11d92035 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d92038 push eax */
  push32((uint32_t)(EAX));
  /* 11d92039 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d9203b call 0x11d954c0 */
  push32(0x11d92040u); f_11d954c0();
  /* 11d92040 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92043 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d92046 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d92048 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d9204b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d9204e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92054 push edx */
  push32((uint32_t)(EDX));
  /* 11d92055 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 11d92057 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d9205a push eax */
  push32((uint32_t)(EAX));
  /* 11d9205b push 1 */
  push32((uint32_t)(0x1u));
  /* 11d9205d call 0x11d954c0 */
  push32(0x11d92062u); f_11d954c0();
  /* 11d92062 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92065 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d92068 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d9206a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d9206d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d92070 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92076 push edx */
  push32((uint32_t)(EDX));
  /* 11d92077 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 11d92079 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d9207c push eax */
  push32((uint32_t)(EAX));
  /* 11d9207d push 1 */
  push32((uint32_t)(0x1u));
  /* 11d9207f call 0x11d954c0 */
  push32(0x11d92084u); f_11d954c0();
  /* 11d92084 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92087 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d9208a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d9208c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d9208f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d92092 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92098 push edx */
  push32((uint32_t)(EDX));
  /* 11d92099 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11d9209b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d9209e push eax */
  push32((uint32_t)(EAX));
  /* 11d9209f push 1 */
  push32((uint32_t)(0x1u));
  /* 11d920a1 call 0x11d954c0 */
  push32(0x11d920a6u); f_11d954c0();
  /* 11d920a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d920a9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d920ac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d920ae mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d920b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d920b4 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d920ba push edx */
  push32((uint32_t)(EDX));
  /* 11d920bb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11d920bd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d920c0 push eax */
  push32((uint32_t)(EAX));
  /* 11d920c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d920c3 call 0x11d954c0 */
  push32(0x11d920c8u); f_11d954c0();
  /* 11d920c8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d920cb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d920ce or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d920d0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d920d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d920d6 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d920dc push edx */
  push32((uint32_t)(EDX));
  /* 11d920dd push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 11d920e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d920e5 push eax */
  push32((uint32_t)(EAX));
  /* 11d920e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d920e8 call 0x11d954c0 */
  push32(0x11d920edu); f_11d954c0();
  /* 11d920ed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d920f0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d920f3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d920f5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d920f8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_11d920fb:;
  /* 11d920fb mov esp, ebp */
  ESP = (EBP);
  /* 11d920fd pop ebp */
  EBP = (pop32());
  /* 11d920fe ret  */
  ESPCHK(0x11d91b70u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x11d92100 (779 bytes, 265 insns) */
void f_11d92100(void) {
  FTRACE(0x11d92100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d92100 push ebp */
  push32((uint32_t)(EBP));
  /* 11d92101 mov ebp, esp */
  EBP = (ESP);
  /* 11d92103 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d92107 jne 0x11d9210e */
  if (!C.zf) goto L_11d9210e;
  /* 11d92109 jmp 0x11d92409 */
  goto L_11d92409;
L_11d9210e:;
  /* 11d9210e push 2 */
  push32((uint32_t)(0x2u));
  /* 11d92110 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d92113 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d92116 push ecx */
  push32((uint32_t)(ECX));
  /* 11d92117 call 0x11d86560 */
  push32(0x11d9211cu); f_11d86560();
  /* 11d9211c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9211f push 2 */
  push32((uint32_t)(0x2u));
  /* 11d92121 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d92124 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11d92127 push eax */
  push32((uint32_t)(EAX));
  /* 11d92128 call 0x11d86560 */
  push32(0x11d9212du); f_11d86560();
  /* 11d9212d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92130 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d92132 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d92135 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11d92138 push edx */
  push32((uint32_t)(EDX));
  /* 11d92139 call 0x11d86560 */
  push32(0x11d9213eu); f_11d86560();
  /* 11d9213e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92141 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d92143 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d92146 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11d92149 push ecx */
  push32((uint32_t)(ECX));
  /* 11d9214a call 0x11d86560 */
  push32(0x11d9214fu); f_11d86560();
  /* 11d9214f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92152 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d92154 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d92157 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11d9215a push eax */
  push32((uint32_t)(EAX));
  /* 11d9215b call 0x11d86560 */
  push32(0x11d92160u); f_11d86560();
  /* 11d92160 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92163 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d92165 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d92168 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11d9216b push edx */
  push32((uint32_t)(EDX));
  /* 11d9216c call 0x11d86560 */
  push32(0x11d92171u); f_11d86560();
  /* 11d92171 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92174 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d92176 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d92179 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d9217b push ecx */
  push32((uint32_t)(ECX));
  /* 11d9217c call 0x11d86560 */
  push32(0x11d92181u); f_11d86560();
  /* 11d92181 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92184 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d92186 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d92189 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 11d9218c push eax */
  push32((uint32_t)(EAX));
  /* 11d9218d call 0x11d86560 */
  push32(0x11d92192u); f_11d86560();
  /* 11d92192 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92195 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d92197 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d9219a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 11d9219d push edx */
  push32((uint32_t)(EDX));
  /* 11d9219e call 0x11d86560 */
  push32(0x11d921a3u); f_11d86560();
  /* 11d921a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d921a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d921a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d921ab mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 11d921ae push ecx */
  push32((uint32_t)(ECX));
  /* 11d921af call 0x11d86560 */
  push32(0x11d921b4u); f_11d86560();
  /* 11d921b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d921b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d921b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d921bc mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 11d921bf push eax */
  push32((uint32_t)(EAX));
  /* 11d921c0 call 0x11d86560 */
  push32(0x11d921c5u); f_11d86560();
  /* 11d921c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d921c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d921ca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d921cd mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 11d921d0 push edx */
  push32((uint32_t)(EDX));
  /* 11d921d1 call 0x11d86560 */
  push32(0x11d921d6u); f_11d86560();
  /* 11d921d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d921d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d921db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d921de mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 11d921e1 push ecx */
  push32((uint32_t)(ECX));
  /* 11d921e2 call 0x11d86560 */
  push32(0x11d921e7u); f_11d86560();
  /* 11d921e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d921ea push 2 */
  push32((uint32_t)(0x2u));
  /* 11d921ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d921ef mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11d921f2 push eax */
  push32((uint32_t)(EAX));
  /* 11d921f3 call 0x11d86560 */
  push32(0x11d921f8u); f_11d86560();
  /* 11d921f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d921fb push 2 */
  push32((uint32_t)(0x2u));
  /* 11d921fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d92200 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 11d92203 push edx */
  push32((uint32_t)(EDX));
  /* 11d92204 call 0x11d86560 */
  push32(0x11d92209u); f_11d86560();
  /* 11d92209 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9220c push 2 */
  push32((uint32_t)(0x2u));
  /* 11d9220e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d92211 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 11d92214 push ecx */
  push32((uint32_t)(ECX));
  /* 11d92215 call 0x11d86560 */
  push32(0x11d9221au); f_11d86560();
  /* 11d9221a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9221d push 2 */
  push32((uint32_t)(0x2u));
  /* 11d9221f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d92222 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 11d92225 push eax */
  push32((uint32_t)(EAX));
  /* 11d92226 call 0x11d86560 */
  push32(0x11d9222bu); f_11d86560();
  /* 11d9222b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9222e push 2 */
  push32((uint32_t)(0x2u));
  /* 11d92230 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d92233 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 11d92236 push edx */
  push32((uint32_t)(EDX));
  /* 11d92237 call 0x11d86560 */
  push32(0x11d9223cu); f_11d86560();
  /* 11d9223c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9223f push 2 */
  push32((uint32_t)(0x2u));
  /* 11d92241 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d92244 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 11d92247 push ecx */
  push32((uint32_t)(ECX));
  /* 11d92248 call 0x11d86560 */
  push32(0x11d9224du); f_11d86560();
  /* 11d9224d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92250 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d92252 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d92255 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 11d92258 push eax */
  push32((uint32_t)(EAX));
  /* 11d92259 call 0x11d86560 */
  push32(0x11d9225eu); f_11d86560();
  /* 11d9225e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92261 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d92263 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d92266 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11d92269 push edx */
  push32((uint32_t)(EDX));
  /* 11d9226a call 0x11d86560 */
  push32(0x11d9226fu); f_11d86560();
  /* 11d9226f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92272 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d92274 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d92277 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 11d9227a push ecx */
  push32((uint32_t)(ECX));
  /* 11d9227b call 0x11d86560 */
  push32(0x11d92280u); f_11d86560();
  /* 11d92280 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92283 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d92285 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d92288 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 11d9228b push eax */
  push32((uint32_t)(EAX));
  /* 11d9228c call 0x11d86560 */
  push32(0x11d92291u); f_11d86560();
  /* 11d92291 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92294 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d92296 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d92299 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 11d9229c push edx */
  push32((uint32_t)(EDX));
  /* 11d9229d call 0x11d86560 */
  push32(0x11d922a2u); f_11d86560();
  /* 11d922a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d922a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d922a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d922aa mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 11d922ad push ecx */
  push32((uint32_t)(ECX));
  /* 11d922ae call 0x11d86560 */
  push32(0x11d922b3u); f_11d86560();
  /* 11d922b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d922b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d922b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d922bb mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 11d922be push eax */
  push32((uint32_t)(EAX));
  /* 11d922bf call 0x11d86560 */
  push32(0x11d922c4u); f_11d86560();
  /* 11d922c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d922c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d922c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d922cc mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 11d922cf push edx */
  push32((uint32_t)(EDX));
  /* 11d922d0 call 0x11d86560 */
  push32(0x11d922d5u); f_11d86560();
  /* 11d922d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d922d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d922da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d922dd mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 11d922e0 push ecx */
  push32((uint32_t)(ECX));
  /* 11d922e1 call 0x11d86560 */
  push32(0x11d922e6u); f_11d86560();
  /* 11d922e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d922e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d922eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d922ee mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 11d922f1 push eax */
  push32((uint32_t)(EAX));
  /* 11d922f2 call 0x11d86560 */
  push32(0x11d922f7u); f_11d86560();
  /* 11d922f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d922fa push 2 */
  push32((uint32_t)(0x2u));
  /* 11d922fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d922ff mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 11d92302 push edx */
  push32((uint32_t)(EDX));
  /* 11d92303 call 0x11d86560 */
  push32(0x11d92308u); f_11d86560();
  /* 11d92308 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9230b push 2 */
  push32((uint32_t)(0x2u));
  /* 11d9230d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d92310 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 11d92313 push ecx */
  push32((uint32_t)(ECX));
  /* 11d92314 call 0x11d86560 */
  push32(0x11d92319u); f_11d86560();
  /* 11d92319 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9231c push 2 */
  push32((uint32_t)(0x2u));
  /* 11d9231e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d92321 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 11d92324 push eax */
  push32((uint32_t)(EAX));
  /* 11d92325 call 0x11d86560 */
  push32(0x11d9232au); f_11d86560();
  /* 11d9232a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9232d push 2 */
  push32((uint32_t)(0x2u));
  /* 11d9232f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d92332 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 11d92338 push edx */
  push32((uint32_t)(EDX));
  /* 11d92339 call 0x11d86560 */
  push32(0x11d9233eu); f_11d86560();
  /* 11d9233e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92341 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d92343 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d92346 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 11d9234c push ecx */
  push32((uint32_t)(ECX));
  /* 11d9234d call 0x11d86560 */
  push32(0x11d92352u); f_11d86560();
  /* 11d92352 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92355 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d92357 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d9235a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 11d92360 push eax */
  push32((uint32_t)(EAX));
  /* 11d92361 call 0x11d86560 */
  push32(0x11d92366u); f_11d86560();
  /* 11d92366 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92369 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d9236b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d9236e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 11d92374 push edx */
  push32((uint32_t)(EDX));
  /* 11d92375 call 0x11d86560 */
  push32(0x11d9237au); f_11d86560();
  /* 11d9237a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9237d push 2 */
  push32((uint32_t)(0x2u));
  /* 11d9237f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d92382 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 11d92388 push ecx */
  push32((uint32_t)(ECX));
  /* 11d92389 call 0x11d86560 */
  push32(0x11d9238eu); f_11d86560();
  /* 11d9238e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92391 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d92393 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d92396 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 11d9239c push eax */
  push32((uint32_t)(EAX));
  /* 11d9239d call 0x11d86560 */
  push32(0x11d923a2u); f_11d86560();
  /* 11d923a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d923a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d923a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d923aa mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 11d923b0 push edx */
  push32((uint32_t)(EDX));
  /* 11d923b1 call 0x11d86560 */
  push32(0x11d923b6u); f_11d86560();
  /* 11d923b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d923b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d923bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d923be mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 11d923c4 push ecx */
  push32((uint32_t)(ECX));
  /* 11d923c5 call 0x11d86560 */
  push32(0x11d923cau); f_11d86560();
  /* 11d923ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d923cd push 2 */
  push32((uint32_t)(0x2u));
  /* 11d923cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d923d2 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 11d923d8 push eax */
  push32((uint32_t)(EAX));
  /* 11d923d9 call 0x11d86560 */
  push32(0x11d923deu); f_11d86560();
  /* 11d923de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d923e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d923e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d923e6 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 11d923ec push edx */
  push32((uint32_t)(EDX));
  /* 11d923ed call 0x11d86560 */
  push32(0x11d923f2u); f_11d86560();
  /* 11d923f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d923f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d923f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d923fa mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 11d92400 push ecx */
  push32((uint32_t)(ECX));
  /* 11d92401 call 0x11d86560 */
  push32(0x11d92406u); f_11d86560();
  /* 11d92406 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d92409:;
  /* 11d92409 pop ebp */
  EBP = (pop32());
  /* 11d9240a ret  */
  ESPCHK(0x11d92100u, _esp0);
  ESP += 4; return;
}

/* FUN_10012410 @ 0x11d92410 (678 bytes, 180 insns) */
void f_11d92410(void) {
  FTRACE(0x11d92410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d92410 push ebp */
  push32((uint32_t)(EBP));
  /* 11d92411 mov ebp, esp */
  EBP = (ESP);
  /* 11d92413 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d92416 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11d9241d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d9241f mov ax, word ptr [0x11db19fa] */
  AX = (r16((uint32_t)(0x11db19fa)));
  /* 11d92425 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d92428 cmp dword ptr [0x11db1998], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1998))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d9242f je 0x11d9258a */
  if (C.zf) goto L_11d9258a;
  /* 11d92435 push 0x11db19c8 */
  push32((uint32_t)(0x11db19c8u));
  /* 11d9243a push 0xe */
  push32((uint32_t)(0xeu));
  /* 11d9243c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d9243f push ecx */
  push32((uint32_t)(ECX));
  /* 11d92440 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d92442 call 0x11d954c0 */
  push32(0x11d92447u); f_11d954c0();
  /* 11d92447 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9244a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d9244d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11d9244f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11d92452 push 0x11db19cc */
  push32((uint32_t)(0x11db19ccu));
  /* 11d92457 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11d92459 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d9245c push eax */
  push32((uint32_t)(EAX));
  /* 11d9245d push 1 */
  push32((uint32_t)(0x1u));
  /* 11d9245f call 0x11d954c0 */
  push32(0x11d92464u); f_11d954c0();
  /* 11d92464 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92467 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d9246a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d9246c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d9246f push 0x11db19d0 */
  push32((uint32_t)(0x11db19d0u));
  /* 11d92474 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11d92476 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d92479 push edx */
  push32((uint32_t)(EDX));
  /* 11d9247a push 1 */
  push32((uint32_t)(0x1u));
  /* 11d9247c call 0x11d954c0 */
  push32(0x11d92481u); f_11d954c0();
  /* 11d92481 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92484 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d92487 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d92489 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d9248c mov edx, dword ptr [0x11db19d0] */
  EDX = (r32((uint32_t)(0x11db19d0)));
  /* 11d92492 push edx */
  push32((uint32_t)(EDX));
  /* 11d92493 call 0x11d926c0 */
  push32(0x11d92498u); f_11d926c0();
  /* 11d92498 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9249b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d9249f je 0x11d924f9 */
  if (C.zf) goto L_11d924f9;
  /* 11d924a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d924a3 mov eax, dword ptr [0x11db19c8] */
  EAX = (r32((uint32_t)(0x11db19c8)));
  /* 11d924a8 push eax */
  push32((uint32_t)(EAX));
  /* 11d924a9 call 0x11d86560 */
  push32(0x11d924aeu); f_11d86560();
  /* 11d924ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d924b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d924b3 mov ecx, dword ptr [0x11db19cc] */
  ECX = (r32((uint32_t)(0x11db19cc)));
  /* 11d924b9 push ecx */
  push32((uint32_t)(ECX));
  /* 11d924ba call 0x11d86560 */
  push32(0x11d924bfu); f_11d86560();
  /* 11d924bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d924c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d924c4 mov edx, dword ptr [0x11db19d0] */
  EDX = (r32((uint32_t)(0x11db19d0)));
  /* 11d924ca push edx */
  push32((uint32_t)(EDX));
  /* 11d924cb call 0x11d86560 */
  push32(0x11d924d0u); f_11d86560();
  /* 11d924d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d924d3 mov dword ptr [0x11db19c8], 0 */
  w32((uint32_t)(0x11db19c8), (0x0u));
  /* 11d924dd mov dword ptr [0x11db19cc], 0 */
  w32((uint32_t)(0x11db19cc), (0x0u));
  /* 11d924e7 mov dword ptr [0x11db19d0], 0 */
  w32((uint32_t)(0x11db19d0), (0x0u));
  /* 11d924f1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d924f4 jmp 0x11d926b2 */
  goto L_11d926b2;
L_11d924f9:;
  /* 11d924f9 mov eax, dword ptr [0x11db0eb0] */
  EAX = (r32((uint32_t)(0x11db0eb0)));
  /* 11d924fe cmp dword ptr [eax], 0x11db0e78 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x11db0e78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d92504 je 0x11d92540 */
  if (C.zf) goto L_11d92540;
  /* 11d92506 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d92508 mov ecx, dword ptr [0x11db0eb0] */
  ECX = (r32((uint32_t)(0x11db0eb0)));
  /* 11d9250e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d92510 push edx */
  push32((uint32_t)(EDX));
  /* 11d92511 call 0x11d86560 */
  push32(0x11d92516u); f_11d86560();
  /* 11d92516 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92519 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d9251b mov eax, dword ptr [0x11db0eb0] */
  EAX = (r32((uint32_t)(0x11db0eb0)));
  /* 11d92520 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d92523 push ecx */
  push32((uint32_t)(ECX));
  /* 11d92524 call 0x11d86560 */
  push32(0x11d92529u); f_11d86560();
  /* 11d92529 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9252c push 2 */
  push32((uint32_t)(0x2u));
  /* 11d9252e mov edx, dword ptr [0x11db0eb0] */
  EDX = (r32((uint32_t)(0x11db0eb0)));
  /* 11d92534 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11d92537 push eax */
  push32((uint32_t)(EAX));
  /* 11d92538 call 0x11d86560 */
  push32(0x11d9253du); f_11d86560();
  /* 11d9253d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d92540:;
  /* 11d92540 mov ecx, dword ptr [0x11db0eb0] */
  ECX = (r32((uint32_t)(0x11db0eb0)));
  /* 11d92546 mov edx, dword ptr [0x11db19c8] */
  EDX = (r32((uint32_t)(0x11db19c8)));
  /* 11d9254c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11d9254e mov eax, dword ptr [0x11db0eb0] */
  EAX = (r32((uint32_t)(0x11db0eb0)));
  /* 11d92553 mov ecx, dword ptr [0x11db19cc] */
  ECX = (r32((uint32_t)(0x11db19cc)));
  /* 11d92559 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11d9255c mov edx, dword ptr [0x11db0eb0] */
  EDX = (r32((uint32_t)(0x11db0eb0)));
  /* 11d92562 mov eax, dword ptr [0x11db19d0] */
  EAX = (r32((uint32_t)(0x11db19d0)));
  /* 11d92567 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11d9256a mov ecx, dword ptr [0x11db0eb0] */
  ECX = (r32((uint32_t)(0x11db0eb0)));
  /* 11d92570 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d92572 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d92574 mov byte ptr [0x11daffc8], al */
  w8((uint32_t)(0x11daffc8), (AL));
  /* 11d92579 mov dword ptr [0x11daffcc], 1 */
  w32((uint32_t)(0x11daffcc), (0x1u));
  /* 11d92583 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d92585 jmp 0x11d926b2 */
  goto L_11d926b2;
L_11d9258a:;
  /* 11d9258a push 2 */
  push32((uint32_t)(0x2u));
  /* 11d9258c mov ecx, dword ptr [0x11db19c8] */
  ECX = (r32((uint32_t)(0x11db19c8)));
  /* 11d92592 push ecx */
  push32((uint32_t)(ECX));
  /* 11d92593 call 0x11d86560 */
  push32(0x11d92598u); f_11d86560();
  /* 11d92598 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9259b push 2 */
  push32((uint32_t)(0x2u));
  /* 11d9259d mov edx, dword ptr [0x11db19cc] */
  EDX = (r32((uint32_t)(0x11db19cc)));
  /* 11d925a3 push edx */
  push32((uint32_t)(EDX));
  /* 11d925a4 call 0x11d86560 */
  push32(0x11d925a9u); f_11d86560();
  /* 11d925a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d925ac push 2 */
  push32((uint32_t)(0x2u));
  /* 11d925ae mov eax, dword ptr [0x11db19d0] */
  EAX = (r32((uint32_t)(0x11db19d0)));
  /* 11d925b3 push eax */
  push32((uint32_t)(EAX));
  /* 11d925b4 call 0x11d86560 */
  push32(0x11d925b9u); f_11d86560();
  /* 11d925b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d925bc mov dword ptr [0x11db19c8], 0 */
  w32((uint32_t)(0x11db19c8), (0x0u));
  /* 11d925c6 mov dword ptr [0x11db19cc], 0 */
  w32((uint32_t)(0x11db19cc), (0x0u));
  /* 11d925d0 mov dword ptr [0x11db19d0], 0 */
  w32((uint32_t)(0x11db19d0), (0x0u));
  /* 11d925da push 0x88 */
  push32((uint32_t)(0x88u));
  /* 11d925df push 0x11dad4ec */
  push32((uint32_t)(0x11dad4ecu));
  /* 11d925e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d925e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d925e8 call 0x11d85ad0 */
  push32(0x11d925edu); f_11d85ad0();
  /* 11d925ed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d925f0 mov ecx, dword ptr [0x11db0eb0] */
  ECX = (r32((uint32_t)(0x11db0eb0)));
  /* 11d925f6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11d925f8 mov edx, dword ptr [0x11db0eb0] */
  EDX = (r32((uint32_t)(0x11db0eb0)));
  /* 11d925fe cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d92601 jne 0x11d9260b */
  if (!C.zf) goto L_11d9260b;
  /* 11d92603 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d92606 jmp 0x11d926b2 */
  goto L_11d926b2;
L_11d9260b:;
  /* 11d9260b push 0x11dad4bc */
  push32((uint32_t)(0x11dad4bcu));
  /* 11d92610 mov eax, dword ptr [0x11db0eb0] */
  EAX = (r32((uint32_t)(0x11db0eb0)));
  /* 11d92615 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d92617 push ecx */
  push32((uint32_t)(ECX));
  /* 11d92618 call 0x11d897a0 */
  push32(0x11d9261du); f_11d897a0();
  /* 11d9261d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92620 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 11d92625 push 0x11dad4ec */
  push32((uint32_t)(0x11dad4ecu));
  /* 11d9262a push 2 */
  push32((uint32_t)(0x2u));
  /* 11d9262c push 2 */
  push32((uint32_t)(0x2u));
  /* 11d9262e call 0x11d85ad0 */
  push32(0x11d92633u); f_11d85ad0();
  /* 11d92633 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92636 mov edx, dword ptr [0x11db0eb0] */
  EDX = (r32((uint32_t)(0x11db0eb0)));
  /* 11d9263c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11d9263f mov eax, dword ptr [0x11db0eb0] */
  EAX = (r32((uint32_t)(0x11db0eb0)));
  /* 11d92644 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d92648 jne 0x11d9264f */
  if (!C.zf) goto L_11d9264f;
  /* 11d9264a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d9264d jmp 0x11d926b2 */
  goto L_11d926b2;
L_11d9264f:;
  /* 11d9264f mov ecx, dword ptr [0x11db0eb0] */
  ECX = (r32((uint32_t)(0x11db0eb0)));
  /* 11d92655 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d92658 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11d9265b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 11d92660 push 0x11dad4ec */
  push32((uint32_t)(0x11dad4ecu));
  /* 11d92665 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d92667 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d92669 call 0x11d85ad0 */
  push32(0x11d9266eu); f_11d85ad0();
  /* 11d9266e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92671 mov ecx, dword ptr [0x11db0eb0] */
  ECX = (r32((uint32_t)(0x11db0eb0)));
  /* 11d92677 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11d9267a mov edx, dword ptr [0x11db0eb0] */
  EDX = (r32((uint32_t)(0x11db0eb0)));
  /* 11d92680 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d92684 jne 0x11d9268b */
  if (!C.zf) goto L_11d9268b;
  /* 11d92686 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d92689 jmp 0x11d926b2 */
  goto L_11d926b2;
L_11d9268b:;
  /* 11d9268b mov eax, dword ptr [0x11db0eb0] */
  EAX = (r32((uint32_t)(0x11db0eb0)));
  /* 11d92690 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11d92693 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11d92696 mov edx, dword ptr [0x11db0eb0] */
  EDX = (r32((uint32_t)(0x11db0eb0)));
  /* 11d9269c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d9269e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11d926a0 mov byte ptr [0x11daffc8], cl */
  w8((uint32_t)(0x11daffc8), (CL));
  /* 11d926a6 mov dword ptr [0x11daffcc], 1 */
  w32((uint32_t)(0x11daffcc), (0x1u));
  /* 11d926b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d926b2:;
  /* 11d926b2 mov esp, ebp */
  ESP = (EBP);
  /* 11d926b4 pop ebp */
  EBP = (pop32());
  /* 11d926b5 ret  */
  ESPCHK(0x11d92410u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x11d926c0 (125 bytes, 49 insns) */
void f_11d926c0(void) {
  FTRACE(0x11d926c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d926c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d926c1 mov ebp, esp */
  EBP = (ESP);
  /* 11d926c3 push ecx */
  push32((uint32_t)(ECX));
L_11d926c4:;
  /* 11d926c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d926c7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d926ca test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d926cc je 0x11d92739 */
  if (C.zf) goto L_11d92739;
  /* 11d926ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d926d1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11d926d4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d926d7 jl 0x11d926fd */
  if ((C.sf!=C.of)) goto L_11d926fd;
  /* 11d926d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d926dc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11d926df cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d926e2 jg 0x11d926fd */
  if ((!C.zf&&C.sf==C.of)) goto L_11d926fd;
  /* 11d926e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d926e7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d926ea sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d926ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d926f0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11d926f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d926f5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d926f8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11d926fb jmp 0x11d92737 */
  goto L_11d92737;
L_11d926fd:;
  /* 11d926fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d92700 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11d92703 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d92706 jne 0x11d9272e */
  if (!C.zf) goto L_11d9272e;
  /* 11d92708 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d9270b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d9270e:;
  /* 11d9270e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d92711 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d92714 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11d92717 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11d92719 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d9271c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9271f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d92722 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d92725 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11d92728 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d9272a jne 0x11d9270e */
  if (!C.zf) goto L_11d9270e;
  /* 11d9272c jmp 0x11d92737 */
  goto L_11d92737;
L_11d9272e:;
  /* 11d9272e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d92731 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92734 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11d92737:;
  /* 11d92737 jmp 0x11d926c4 */
  goto L_11d926c4;
L_11d92739:;
  /* 11d92739 mov esp, ebp */
  ESP = (EBP);
  /* 11d9273b pop ebp */
  EBP = (pop32());
  /* 11d9273c ret  */
  ESPCHK(0x11d926c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012740 @ 0x11d92740 (304 bytes, 85 insns) */
void f_11d92740(void) {
  FTRACE(0x11d92740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d92740 push ebp */
  push32((uint32_t)(EBP));
  /* 11d92741 mov ebp, esp */
  EBP = (ESP);
  /* 11d92743 push ecx */
  push32((uint32_t)(ECX));
  /* 11d92744 cmp dword ptr [0x11db1994], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1994))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d9274b je 0x11d9280c */
  if (C.zf) goto L_11d9280c;
  /* 11d92751 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 11d92753 push 0x11dad4f8 */
  push32((uint32_t)(0x11dad4f8u));
  /* 11d92758 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d9275a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11d9275c push 1 */
  push32((uint32_t)(0x1u));
  /* 11d9275e call 0x11d85ee0 */
  push32(0x11d92763u); f_11d85ee0();
  /* 11d92763 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92766 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d92769 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d9276d jne 0x11d92779 */
  if (!C.zf) goto L_11d92779;
  /* 11d9276f mov eax, 1 */
  EAX = (0x1u);
  /* 11d92774 jmp 0x11d9286c */
  goto L_11d9286c;
L_11d92779:;
  /* 11d92779 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d9277c push eax */
  push32((uint32_t)(EAX));
  /* 11d9277d call 0x11d92870 */
  push32(0x11d92782u); f_11d92870();
  /* 11d92782 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92785 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d92787 je 0x11d927ad */
  if (C.zf) goto L_11d927ad;
  /* 11d92789 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d9278c push ecx */
  push32((uint32_t)(ECX));
  /* 11d9278d call 0x11d92b00 */
  push32(0x11d92792u); f_11d92b00();
  /* 11d92792 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92795 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d92797 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d9279a push edx */
  push32((uint32_t)(EDX));
  /* 11d9279b call 0x11d86560 */
  push32(0x11d927a0u); f_11d86560();
  /* 11d927a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d927a3 mov eax, 1 */
  EAX = (0x1u);
  /* 11d927a8 jmp 0x11d9286c */
  goto L_11d9286c;
L_11d927ad:;
  /* 11d927ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d927b0 mov ecx, dword ptr [0x11db0eb0] */
  ECX = (r32((uint32_t)(0x11db0eb0)));
  /* 11d927b6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d927b8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11d927ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d927bd mov ecx, dword ptr [0x11db0eb0] */
  ECX = (r32((uint32_t)(0x11db0eb0)));
  /* 11d927c3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d927c6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11d927c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d927cc mov ecx, dword ptr [0x11db0eb0] */
  ECX = (r32((uint32_t)(0x11db0eb0)));
  /* 11d927d2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11d927d5 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11d927d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d927db mov dword ptr [0x11db0eb0], eax */
  w32((uint32_t)(0x11db0eb0), (EAX));
  /* 11d927e0 mov ecx, dword ptr [0x11db19d4] */
  ECX = (r32((uint32_t)(0x11db19d4)));
  /* 11d927e6 push ecx */
  push32((uint32_t)(ECX));
  /* 11d927e7 call 0x11d92b00 */
  push32(0x11d927ecu); f_11d92b00();
  /* 11d927ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d927ef push 2 */
  push32((uint32_t)(0x2u));
  /* 11d927f1 mov edx, dword ptr [0x11db19d4] */
  EDX = (r32((uint32_t)(0x11db19d4)));
  /* 11d927f7 push edx */
  push32((uint32_t)(EDX));
  /* 11d927f8 call 0x11d86560 */
  push32(0x11d927fdu); f_11d86560();
  /* 11d927fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92800 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d92803 mov dword ptr [0x11db19d4], eax */
  w32((uint32_t)(0x11db19d4), (EAX));
  /* 11d92808 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d9280a jmp 0x11d9286c */
  goto L_11d9286c;
L_11d9280c:;
  /* 11d9280c mov ecx, dword ptr [0x11db0eb0] */
  ECX = (r32((uint32_t)(0x11db0eb0)));
  /* 11d92812 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d92814 mov dword ptr [0x11db0e80], edx */
  w32((uint32_t)(0x11db0e80), (EDX));
  /* 11d9281a mov eax, dword ptr [0x11db0eb0] */
  EAX = (r32((uint32_t)(0x11db0eb0)));
  /* 11d9281f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d92822 mov dword ptr [0x11db0e84], ecx */
  w32((uint32_t)(0x11db0e84), (ECX));
  /* 11d92828 mov edx, dword ptr [0x11db0eb0] */
  EDX = (r32((uint32_t)(0x11db0eb0)));
  /* 11d9282e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11d92831 mov dword ptr [0x11db0e88], eax */
  w32((uint32_t)(0x11db0e88), (EAX));
  /* 11d92836 mov dword ptr [0x11db0eb0], 0x11db0e80 */
  w32((uint32_t)(0x11db0eb0), (0x11db0e80u));
  /* 11d92840 mov ecx, dword ptr [0x11db19d4] */
  ECX = (r32((uint32_t)(0x11db19d4)));
  /* 11d92846 push ecx */
  push32((uint32_t)(ECX));
  /* 11d92847 call 0x11d92b00 */
  push32(0x11d9284cu); f_11d92b00();
  /* 11d9284c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9284f push 2 */
  push32((uint32_t)(0x2u));
  /* 11d92851 mov edx, dword ptr [0x11db19d4] */
  EDX = (r32((uint32_t)(0x11db19d4)));
  /* 11d92857 push edx */
  push32((uint32_t)(EDX));
  /* 11d92858 call 0x11d86560 */
  push32(0x11d9285du); f_11d86560();
  /* 11d9285d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92860 mov dword ptr [0x11db19d4], 0 */
  w32((uint32_t)(0x11db19d4), (0x0u));
  /* 11d9286a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d9286c:;
  /* 11d9286c mov esp, ebp */
  ESP = (EBP);
  /* 11d9286e pop ebp */
  EBP = (pop32());
  /* 11d9286f ret  */
  ESPCHK(0x11d92740u, _esp0);
  ESP += 4; return;
}

/* FUN_10012870 @ 0x11d92870 (525 bytes, 200 insns) */
void f_11d92870(void) {
  FTRACE(0x11d92870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d92870 push ebp */
  push32((uint32_t)(EBP));
  /* 11d92871 mov ebp, esp */
  EBP = (ESP);
  /* 11d92873 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d92876 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11d9287d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d9287f mov ax, word ptr [0x11db19f4] */
  AX = (r16((uint32_t)(0x11db19f4)));
  /* 11d92885 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d92888 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d9288c jne 0x11d92896 */
  if (!C.zf) goto L_11d92896;
  /* 11d9288e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d92891 jmp 0x11d92a79 */
  goto L_11d92a79;
L_11d92896:;
  /* 11d92896 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d92899 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9289c push ecx */
  push32((uint32_t)(ECX));
  /* 11d9289d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11d9289f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d928a2 push edx */
  push32((uint32_t)(EDX));
  /* 11d928a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d928a5 call 0x11d954c0 */
  push32(0x11d928aau); f_11d954c0();
  /* 11d928aa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d928ad mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d928b0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d928b2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d928b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d928b8 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d928bb push edx */
  push32((uint32_t)(EDX));
  /* 11d928bc push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11d928be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d928c1 push eax */
  push32((uint32_t)(EAX));
  /* 11d928c2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d928c4 call 0x11d954c0 */
  push32(0x11d928c9u); f_11d954c0();
  /* 11d928c9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d928cc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d928cf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d928d1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d928d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d928d7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d928da push edx */
  push32((uint32_t)(EDX));
  /* 11d928db push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11d928dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d928e0 push eax */
  push32((uint32_t)(EAX));
  /* 11d928e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d928e3 call 0x11d954c0 */
  push32(0x11d928e8u); f_11d954c0();
  /* 11d928e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d928eb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d928ee or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d928f0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d928f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d928f6 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d928f9 push edx */
  push32((uint32_t)(EDX));
  /* 11d928fa push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11d928fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d928ff push eax */
  push32((uint32_t)(EAX));
  /* 11d92900 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d92902 call 0x11d954c0 */
  push32(0x11d92907u); f_11d954c0();
  /* 11d92907 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9290a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d9290d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d9290f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d92912 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d92915 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92918 push edx */
  push32((uint32_t)(EDX));
  /* 11d92919 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11d9291b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d9291e push eax */
  push32((uint32_t)(EAX));
  /* 11d9291f push 1 */
  push32((uint32_t)(0x1u));
  /* 11d92921 call 0x11d954c0 */
  push32(0x11d92926u); f_11d954c0();
  /* 11d92926 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92929 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d9292c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d9292e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d92931 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d92934 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11d92937 push eax */
  push32((uint32_t)(EAX));
  /* 11d92938 call 0x11d92a80 */
  push32(0x11d9293du); f_11d92a80();
  /* 11d9293d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92940 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d92943 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92946 push ecx */
  push32((uint32_t)(ECX));
  /* 11d92947 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 11d92949 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d9294c push edx */
  push32((uint32_t)(EDX));
  /* 11d9294d push 1 */
  push32((uint32_t)(0x1u));
  /* 11d9294f call 0x11d954c0 */
  push32(0x11d92954u); f_11d954c0();
  /* 11d92954 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92957 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d9295a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d9295c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d9295f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d92962 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92965 push edx */
  push32((uint32_t)(EDX));
  /* 11d92966 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 11d92968 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d9296b push eax */
  push32((uint32_t)(EAX));
  /* 11d9296c push 1 */
  push32((uint32_t)(0x1u));
  /* 11d9296e call 0x11d954c0 */
  push32(0x11d92973u); f_11d954c0();
  /* 11d92973 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92976 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d92979 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d9297b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d9297e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d92981 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92984 push edx */
  push32((uint32_t)(EDX));
  /* 11d92985 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11d92987 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d9298a push eax */
  push32((uint32_t)(EAX));
  /* 11d9298b push 0 */
  push32((uint32_t)(0x0u));
  /* 11d9298d call 0x11d954c0 */
  push32(0x11d92992u); f_11d954c0();
  /* 11d92992 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92995 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d92998 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d9299a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d9299d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d929a0 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d929a3 push edx */
  push32((uint32_t)(EDX));
  /* 11d929a4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11d929a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d929a9 push eax */
  push32((uint32_t)(EAX));
  /* 11d929aa push 0 */
  push32((uint32_t)(0x0u));
  /* 11d929ac call 0x11d954c0 */
  push32(0x11d929b1u); f_11d954c0();
  /* 11d929b1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d929b4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d929b7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d929b9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d929bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d929bf add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d929c2 push edx */
  push32((uint32_t)(EDX));
  /* 11d929c3 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 11d929c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d929c8 push eax */
  push32((uint32_t)(EAX));
  /* 11d929c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d929cb call 0x11d954c0 */
  push32(0x11d929d0u); f_11d954c0();
  /* 11d929d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d929d3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d929d6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d929d8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d929db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d929de add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d929e1 push edx */
  push32((uint32_t)(EDX));
  /* 11d929e2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 11d929e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d929e7 push eax */
  push32((uint32_t)(EAX));
  /* 11d929e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d929ea call 0x11d954c0 */
  push32(0x11d929efu); f_11d954c0();
  /* 11d929ef add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d929f2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d929f5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d929f7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d929fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d929fd add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92a00 push edx */
  push32((uint32_t)(EDX));
  /* 11d92a01 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 11d92a03 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d92a06 push eax */
  push32((uint32_t)(EAX));
  /* 11d92a07 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d92a09 call 0x11d954c0 */
  push32(0x11d92a0eu); f_11d954c0();
  /* 11d92a0e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92a11 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d92a14 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d92a16 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d92a19 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d92a1c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92a1f push edx */
  push32((uint32_t)(EDX));
  /* 11d92a20 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 11d92a22 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d92a25 push eax */
  push32((uint32_t)(EAX));
  /* 11d92a26 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d92a28 call 0x11d954c0 */
  push32(0x11d92a2du); f_11d954c0();
  /* 11d92a2d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92a30 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d92a33 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d92a35 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d92a38 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d92a3b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92a3e push edx */
  push32((uint32_t)(EDX));
  /* 11d92a3f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 11d92a41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d92a44 push eax */
  push32((uint32_t)(EAX));
  /* 11d92a45 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d92a47 call 0x11d954c0 */
  push32(0x11d92a4cu); f_11d954c0();
  /* 11d92a4c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92a4f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d92a52 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d92a54 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d92a57 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d92a5a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92a5d push edx */
  push32((uint32_t)(EDX));
  /* 11d92a5e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 11d92a60 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d92a63 push eax */
  push32((uint32_t)(EAX));
  /* 11d92a64 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d92a66 call 0x11d954c0 */
  push32(0x11d92a6bu); f_11d954c0();
  /* 11d92a6b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92a6e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d92a71 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d92a73 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d92a76 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11d92a79:;
  /* 11d92a79 mov esp, ebp */
  ESP = (EBP);
  /* 11d92a7b pop ebp */
  EBP = (pop32());
  /* 11d92a7c ret  */
  ESPCHK(0x11d92870u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x11d92a80 (125 bytes, 49 insns) */
void f_11d92a80(void) {
  FTRACE(0x11d92a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d92a80 push ebp */
  push32((uint32_t)(EBP));
  /* 11d92a81 mov ebp, esp */
  EBP = (ESP);
  /* 11d92a83 push ecx */
  push32((uint32_t)(ECX));
L_11d92a84:;
  /* 11d92a84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d92a87 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d92a8a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d92a8c je 0x11d92af9 */
  if (C.zf) goto L_11d92af9;
  /* 11d92a8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d92a91 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11d92a94 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d92a97 jl 0x11d92abd */
  if ((C.sf!=C.of)) goto L_11d92abd;
  /* 11d92a99 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d92a9c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11d92a9f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d92aa2 jg 0x11d92abd */
  if ((!C.zf&&C.sf==C.of)) goto L_11d92abd;
  /* 11d92aa4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d92aa7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d92aaa sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d92aad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d92ab0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11d92ab2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d92ab5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92ab8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11d92abb jmp 0x11d92af7 */
  goto L_11d92af7;
L_11d92abd:;
  /* 11d92abd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d92ac0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11d92ac3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d92ac6 jne 0x11d92aee */
  if (!C.zf) goto L_11d92aee;
  /* 11d92ac8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d92acb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d92ace:;
  /* 11d92ace mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d92ad1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d92ad4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11d92ad7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11d92ad9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d92adc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92adf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d92ae2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d92ae5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11d92ae8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d92aea jne 0x11d92ace */
  if (!C.zf) goto L_11d92ace;
  /* 11d92aec jmp 0x11d92af7 */
  goto L_11d92af7;
L_11d92aee:;
  /* 11d92aee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d92af1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92af4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11d92af7:;
  /* 11d92af7 jmp 0x11d92a84 */
  goto L_11d92a84;
L_11d92af9:;
  /* 11d92af9 mov esp, ebp */
  ESP = (EBP);
  /* 11d92afb pop ebp */
  EBP = (pop32());
  /* 11d92afc ret  */
  ESPCHK(0x11d92a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b00 @ 0x11d92b00 (147 bytes, 52 insns) */
void f_11d92b00(void) {
  FTRACE(0x11d92b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d92b00 push ebp */
  push32((uint32_t)(EBP));
  /* 11d92b01 mov ebp, esp */
  EBP = (ESP);
  /* 11d92b03 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d92b07 jne 0x11d92b0e */
  if (!C.zf) goto L_11d92b0e;
  /* 11d92b09 jmp 0x11d92b91 */
  goto L_11d92b91;
L_11d92b0e:;
  /* 11d92b0e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d92b11 cmp dword ptr [eax + 0xc], 0x11db1a30 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x11db1a30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d92b18 je 0x11d92b91 */
  if (C.zf) goto L_11d92b91;
  /* 11d92b1a push 2 */
  push32((uint32_t)(0x2u));
  /* 11d92b1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d92b1f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11d92b22 push edx */
  push32((uint32_t)(EDX));
  /* 11d92b23 call 0x11d86560 */
  push32(0x11d92b28u); f_11d86560();
  /* 11d92b28 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92b2b push 2 */
  push32((uint32_t)(0x2u));
  /* 11d92b2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d92b30 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11d92b33 push ecx */
  push32((uint32_t)(ECX));
  /* 11d92b34 call 0x11d86560 */
  push32(0x11d92b39u); f_11d86560();
  /* 11d92b39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92b3c push 2 */
  push32((uint32_t)(0x2u));
  /* 11d92b3e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d92b41 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11d92b44 push eax */
  push32((uint32_t)(EAX));
  /* 11d92b45 call 0x11d86560 */
  push32(0x11d92b4au); f_11d86560();
  /* 11d92b4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92b4d push 2 */
  push32((uint32_t)(0x2u));
  /* 11d92b4f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d92b52 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11d92b55 push edx */
  push32((uint32_t)(EDX));
  /* 11d92b56 call 0x11d86560 */
  push32(0x11d92b5bu); f_11d86560();
  /* 11d92b5b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92b5e push 2 */
  push32((uint32_t)(0x2u));
  /* 11d92b60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d92b63 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11d92b66 push ecx */
  push32((uint32_t)(ECX));
  /* 11d92b67 call 0x11d86560 */
  push32(0x11d92b6cu); f_11d86560();
  /* 11d92b6c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92b6f push 2 */
  push32((uint32_t)(0x2u));
  /* 11d92b71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d92b74 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 11d92b77 push eax */
  push32((uint32_t)(EAX));
  /* 11d92b78 call 0x11d86560 */
  push32(0x11d92b7du); f_11d86560();
  /* 11d92b7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92b80 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d92b82 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d92b85 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 11d92b88 push edx */
  push32((uint32_t)(EDX));
  /* 11d92b89 call 0x11d86560 */
  push32(0x11d92b8eu); f_11d86560();
  /* 11d92b8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d92b91:;
  /* 11d92b91 pop ebp */
  EBP = (pop32());
  /* 11d92b92 ret  */
  ESPCHK(0x11d92b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ba0 @ 0x11d92ba0 (928 bytes, 284 insns) */
void f_11d92ba0(void) {
  FTRACE(0x11d92ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d92ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d92ba1 mov ebp, esp */
  EBP = (ESP);
  /* 11d92ba3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d92ba6 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11d92bad mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11d92bb4 cmp dword ptr [0x11db1990], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1990))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d92bbb je 0x11d92ef1 */
  if (C.zf) goto L_11d92ef1;
  /* 11d92bc1 cmp dword ptr [0x11db19a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db19a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d92bc8 jne 0x11d92bf0 */
  if (!C.zf) goto L_11d92bf0;
  /* 11d92bca push 0x11db19a0 */
  push32((uint32_t)(0x11db19a0u));
  /* 11d92bcf push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 11d92bd4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d92bd6 mov ax, word ptr [0x11db19ec] */
  AX = (r16((uint32_t)(0x11db19ec)));
  /* 11d92bdc push eax */
  push32((uint32_t)(EAX));
  /* 11d92bdd push 0 */
  push32((uint32_t)(0x0u));
  /* 11d92bdf call 0x11d954c0 */
  push32(0x11d92be4u); f_11d954c0();
  /* 11d92be4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92be7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d92be9 je 0x11d92bf0 */
  if (C.zf) goto L_11d92bf0;
  /* 11d92beb jmp 0x11d92eb2 */
  goto L_11d92eb2;
L_11d92bf0:;
  /* 11d92bf0 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 11d92bf2 push 0x11dad504 */
  push32((uint32_t)(0x11dad504u));
  /* 11d92bf7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d92bf9 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11d92bfe call 0x11d85ad0 */
  push32(0x11d92c03u); f_11d85ad0();
  /* 11d92c03 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92c06 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11d92c09 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11d92c0b push 0x11dad504 */
  push32((uint32_t)(0x11dad504u));
  /* 11d92c10 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d92c12 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11d92c17 call 0x11d85ad0 */
  push32(0x11d92c1cu); f_11d85ad0();
  /* 11d92c1c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92c1f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11d92c22 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11d92c24 push 0x11dad504 */
  push32((uint32_t)(0x11dad504u));
  /* 11d92c29 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d92c2b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11d92c30 call 0x11d85ad0 */
  push32(0x11d92c35u); f_11d85ad0();
  /* 11d92c35 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92c38 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11d92c3b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 11d92c3d push 0x11dad504 */
  push32((uint32_t)(0x11dad504u));
  /* 11d92c42 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d92c44 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11d92c49 call 0x11d85ad0 */
  push32(0x11d92c4eu); f_11d85ad0();
  /* 11d92c4e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92c51 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11d92c54 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d92c58 je 0x11d92c6c */
  if (C.zf) goto L_11d92c6c;
  /* 11d92c5a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d92c5e je 0x11d92c6c */
  if (C.zf) goto L_11d92c6c;
  /* 11d92c60 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d92c64 je 0x11d92c6c */
  if (C.zf) goto L_11d92c6c;
  /* 11d92c66 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d92c6a jne 0x11d92c71 */
  if (!C.zf) goto L_11d92c71;
L_11d92c6c:;
  /* 11d92c6c jmp 0x11d92eb2 */
  goto L_11d92eb2;
L_11d92c71:;
  /* 11d92c71 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d92c74 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11d92c77 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11d92c7e jmp 0x11d92c89 */
  goto L_11d92c89;
L_11d92c80:;
  /* 11d92c80 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d92c83 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92c86 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11d92c89:;
  /* 11d92c89 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d92c90 jge 0x11d92ca5 */
  if ((C.sf==C.of)) goto L_11d92ca5;
  /* 11d92c92 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d92c95 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 11d92c98 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11d92c9a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d92c9d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92ca0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11d92ca3 jmp 0x11d92c80 */
  goto L_11d92c80;
L_11d92ca5:;
  /* 11d92ca5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11d92ca8 push eax */
  push32((uint32_t)(EAX));
  /* 11d92ca9 mov ecx, dword ptr [0x11db19a0] */
  ECX = (r32((uint32_t)(0x11db19a0)));
  /* 11d92caf push ecx */
  push32((uint32_t)(ECX));
  /* 11d92cb0 call dword ptr [0x11db4328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4328))), 0x11d92cb6u);
  /* 11d92cb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d92cb8 jne 0x11d92cbf */
  if (!C.zf) goto L_11d92cbf;
  /* 11d92cba jmp 0x11d92eb2 */
  goto L_11d92eb2;
L_11d92cbf:;
  /* 11d92cbf cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d92cc3 jbe 0x11d92cca */
  if ((C.cf||C.zf)) goto L_11d92cca;
  /* 11d92cc5 jmp 0x11d92eb2 */
  goto L_11d92eb2;
L_11d92cca:;
  /* 11d92cca mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d92ccd and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d92cd3 mov dword ptr [0x11daffc4], edx */
  w32((uint32_t)(0x11daffc4), (EDX));
  /* 11d92cd9 cmp dword ptr [0x11daffc4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11daffc4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d92ce0 jle 0x11d92d39 */
  if ((C.zf||C.sf!=C.of)) goto L_11d92d39;
  /* 11d92ce2 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 11d92ce5 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11d92ce8 jmp 0x11d92cf3 */
  goto L_11d92cf3;
L_11d92cea:;
  /* 11d92cea mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d92ced add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92cf0 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_11d92cf3:;
  /* 11d92cf3 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d92cf6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d92cf8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d92cfa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d92cfc je 0x11d92d39 */
  if (C.zf) goto L_11d92d39;
  /* 11d92cfe mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d92d01 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d92d03 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11d92d06 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d92d08 je 0x11d92d39 */
  if (C.zf) goto L_11d92d39;
  /* 11d92d0a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d92d0d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d92d0f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11d92d11 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11d92d14 jmp 0x11d92d1f */
  goto L_11d92d1f;
L_11d92d16:;
  /* 11d92d16 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d92d19 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92d1c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11d92d1f:;
  /* 11d92d1f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d92d22 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d92d24 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11d92d27 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d92d2a jg 0x11d92d37 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d92d37;
  /* 11d92d2c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d92d2f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92d32 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11d92d35 jmp 0x11d92d16 */
  goto L_11d92d16;
L_11d92d37:;
  /* 11d92d37 jmp 0x11d92cea */
  goto L_11d92cea;
L_11d92d39:;
  /* 11d92d39 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d92d3b push 0 */
  push32((uint32_t)(0x0u));
  /* 11d92d3d push 0 */
  push32((uint32_t)(0x0u));
  /* 11d92d3f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d92d42 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92d45 push eax */
  push32((uint32_t)(EAX));
  /* 11d92d46 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11d92d4b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d92d4e push ecx */
  push32((uint32_t)(ECX));
  /* 11d92d4f push 1 */
  push32((uint32_t)(0x1u));
  /* 11d92d51 call 0x11d8ea20 */
  push32(0x11d92d56u); f_11d8ea20();
  /* 11d92d56 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92d59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d92d5b jne 0x11d92d62 */
  if (!C.zf) goto L_11d92d62;
  /* 11d92d5d jmp 0x11d92eb2 */
  goto L_11d92eb2;
L_11d92d62:;
  /* 11d92d62 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d92d65 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 11d92d6a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d92d6d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11d92d70 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11d92d77 jmp 0x11d92d82 */
  goto L_11d92d82;
L_11d92d79:;
  /* 11d92d79 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d92d7c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92d7f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11d92d82:;
  /* 11d92d82 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d92d89 jge 0x11d92da0 */
  if ((C.sf==C.of)) goto L_11d92da0;
  /* 11d92d8b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d92d8e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 11d92d92 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 11d92d95 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d92d98 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92d9b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11d92d9e jmp 0x11d92d79 */
  goto L_11d92d79;
L_11d92da0:;
  /* 11d92da0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d92da2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d92da4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d92da7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92daa push edx */
  push32((uint32_t)(EDX));
  /* 11d92dab push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11d92db0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d92db3 push eax */
  push32((uint32_t)(EAX));
  /* 11d92db4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d92db6 call 0x11d95760 */
  push32(0x11d92dbbu); f_11d95760();
  /* 11d92dbb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92dbe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d92dc0 jne 0x11d92dc7 */
  if (!C.zf) goto L_11d92dc7;
  /* 11d92dc2 jmp 0x11d92eb2 */
  goto L_11d92eb2;
L_11d92dc7:;
  /* 11d92dc7 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d92dca mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 11d92dcf cmp dword ptr [0x11daffc4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11daffc4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d92dd6 jle 0x11d92e33 */
  if ((C.zf||C.sf!=C.of)) goto L_11d92e33;
  /* 11d92dd8 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 11d92ddb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11d92dde jmp 0x11d92de9 */
  goto L_11d92de9;
L_11d92de0:;
  /* 11d92de0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d92de3 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92de6 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11d92de9:;
  /* 11d92de9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d92dec xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d92dee mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11d92df0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d92df2 je 0x11d92e33 */
  if (C.zf) goto L_11d92e33;
  /* 11d92df4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d92df7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d92df9 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11d92dfc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d92dfe je 0x11d92e33 */
  if (C.zf) goto L_11d92e33;
  /* 11d92e00 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d92e03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d92e05 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d92e07 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11d92e0a jmp 0x11d92e15 */
  goto L_11d92e15;
L_11d92e0c:;
  /* 11d92e0c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d92e0f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92e12 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11d92e15:;
  /* 11d92e15 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d92e18 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d92e1a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11d92e1d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d92e20 jg 0x11d92e31 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d92e31;
  /* 11d92e22 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d92e25 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d92e28 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 11d92e2f jmp 0x11d92e0c */
  goto L_11d92e0c;
L_11d92e31:;
  /* 11d92e31 jmp 0x11d92de0 */
  goto L_11d92de0;
L_11d92e33:;
  /* 11d92e33 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d92e36 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92e39 mov dword ptr [0x11dafdb8], eax */
  w32((uint32_t)(0x11dafdb8), (EAX));
  /* 11d92e3e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d92e41 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92e44 mov dword ptr [0x11dafdbc], ecx */
  w32((uint32_t)(0x11dafdbc), (ECX));
  /* 11d92e4a cmp dword ptr [0x11db19d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db19d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d92e51 je 0x11d92e64 */
  if (C.zf) goto L_11d92e64;
  /* 11d92e53 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d92e55 mov edx, dword ptr [0x11db19d8] */
  EDX = (r32((uint32_t)(0x11db19d8)));
  /* 11d92e5b push edx */
  push32((uint32_t)(EDX));
  /* 11d92e5c call 0x11d86560 */
  push32(0x11d92e61u); f_11d86560();
  /* 11d92e61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d92e64:;
  /* 11d92e64 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d92e67 mov dword ptr [0x11db19d8], eax */
  w32((uint32_t)(0x11db19d8), (EAX));
  /* 11d92e6c cmp dword ptr [0x11db19dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db19dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d92e73 je 0x11d92e86 */
  if (C.zf) goto L_11d92e86;
  /* 11d92e75 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d92e77 mov ecx, dword ptr [0x11db19dc] */
  ECX = (r32((uint32_t)(0x11db19dc)));
  /* 11d92e7d push ecx */
  push32((uint32_t)(ECX));
  /* 11d92e7e call 0x11d86560 */
  push32(0x11d92e83u); f_11d86560();
  /* 11d92e83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d92e86:;
  /* 11d92e86 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d92e89 mov dword ptr [0x11db19dc], edx */
  w32((uint32_t)(0x11db19dc), (EDX));
  /* 11d92e8f push 2 */
  push32((uint32_t)(0x2u));
  /* 11d92e91 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d92e94 push eax */
  push32((uint32_t)(EAX));
  /* 11d92e95 call 0x11d86560 */
  push32(0x11d92e9au); f_11d86560();
  /* 11d92e9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92e9d push 2 */
  push32((uint32_t)(0x2u));
  /* 11d92e9f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d92ea2 push ecx */
  push32((uint32_t)(ECX));
  /* 11d92ea3 call 0x11d86560 */
  push32(0x11d92ea8u); f_11d86560();
  /* 11d92ea8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92eab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d92ead jmp 0x11d92f3c */
  goto L_11d92f3c;
L_11d92eb2:;
  /* 11d92eb2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d92eb4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d92eb7 push edx */
  push32((uint32_t)(EDX));
  /* 11d92eb8 call 0x11d86560 */
  push32(0x11d92ebdu); f_11d86560();
  /* 11d92ebd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92ec0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d92ec2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d92ec5 push eax */
  push32((uint32_t)(EAX));
  /* 11d92ec6 call 0x11d86560 */
  push32(0x11d92ecbu); f_11d86560();
  /* 11d92ecb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92ece push 2 */
  push32((uint32_t)(0x2u));
  /* 11d92ed0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d92ed3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d92ed4 call 0x11d86560 */
  push32(0x11d92ed9u); f_11d86560();
  /* 11d92ed9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92edc push 2 */
  push32((uint32_t)(0x2u));
  /* 11d92ede mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d92ee1 push edx */
  push32((uint32_t)(EDX));
  /* 11d92ee2 call 0x11d86560 */
  push32(0x11d92ee7u); f_11d86560();
  /* 11d92ee7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92eea mov eax, 1 */
  EAX = (0x1u);
  /* 11d92eef jmp 0x11d92f3c */
  goto L_11d92f3c;
L_11d92ef1:;
  /* 11d92ef1 mov dword ptr [0x11dafdb8], 0x11dafdc2 */
  w32((uint32_t)(0x11dafdb8), (0x11dafdc2u));
  /* 11d92efb mov dword ptr [0x11dafdbc], 0x11dafdc2 */
  w32((uint32_t)(0x11dafdbc), (0x11dafdc2u));
  /* 11d92f05 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d92f07 mov eax, dword ptr [0x11db19d8] */
  EAX = (r32((uint32_t)(0x11db19d8)));
  /* 11d92f0c push eax */
  push32((uint32_t)(EAX));
  /* 11d92f0d call 0x11d86560 */
  push32(0x11d92f12u); f_11d86560();
  /* 11d92f12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92f15 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d92f17 mov ecx, dword ptr [0x11db19dc] */
  ECX = (r32((uint32_t)(0x11db19dc)));
  /* 11d92f1d push ecx */
  push32((uint32_t)(ECX));
  /* 11d92f1e call 0x11d86560 */
  push32(0x11d92f23u); f_11d86560();
  /* 11d92f23 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92f26 mov dword ptr [0x11db19d8], 0 */
  w32((uint32_t)(0x11db19d8), (0x0u));
  /* 11d92f30 mov dword ptr [0x11db19dc], 0 */
  w32((uint32_t)(0x11db19dc), (0x0u));
  /* 11d92f3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d92f3c:;
  /* 11d92f3c mov esp, ebp */
  ESP = (EBP);
  /* 11d92f3e pop ebp */
  EBP = (pop32());
  /* 11d92f3f ret  */
  ESPCHK(0x11d92ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f40 @ 0x11d92f40 (7 bytes, 5 insns) */
void f_11d92f40(void) {
  FTRACE(0x11d92f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d92f40 push ebp */
  push32((uint32_t)(EBP));
  /* 11d92f41 mov ebp, esp */
  EBP = (ESP);
  /* 11d92f43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d92f45 pop ebp */
  EBP = (pop32());
  /* 11d92f46 ret  */
  ESPCHK(0x11d92f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f50 @ 0x11d92f50 (62 bytes, 35 insns) */
void f_11d92f50(void) {
  FTRACE(0x11d92f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d92f50 push ebp */
  push32((uint32_t)(EBP));
  /* 11d92f51 mov ebp, esp */
  EBP = (ESP);
  /* 11d92f53 push esi */
  push32((uint32_t)(ESI));
  /* 11d92f54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d92f56 push eax */
  push32((uint32_t)(EAX));
  /* 11d92f57 push eax */
  push32((uint32_t)(EAX));
  /* 11d92f58 push eax */
  push32((uint32_t)(EAX));
  /* 11d92f59 push eax */
  push32((uint32_t)(EAX));
  /* 11d92f5a push eax */
  push32((uint32_t)(EAX));
  /* 11d92f5b push eax */
  push32((uint32_t)(EAX));
  /* 11d92f5c push eax */
  push32((uint32_t)(EAX));
  /* 11d92f5d push eax */
  push32((uint32_t)(EAX));
  /* 11d92f5e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d92f61 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11d92f64:;
  /* 11d92f64 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d92f66 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11d92f68 je 0x11d92f71 */
  if (C.zf) goto L_11d92f71;
  /* 11d92f6a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11d92f6b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11d92f6b");
  /* 11d92f6f jmp 0x11d92f64 */
  goto L_11d92f64;
L_11d92f71:;
  /* 11d92f71 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11d92f74 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d92f77 nop  */
  /* nop */
L_11d92f78:;
  /* 11d92f78 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11d92f79 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d92f7b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11d92f7d je 0x11d92f86 */
  if (C.zf) goto L_11d92f86;
  /* 11d92f7f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11d92f80 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11d92f80");
  /* 11d92f84 jae 0x11d92f78 */
  if (!C.cf) goto L_11d92f78;
L_11d92f86:;
  /* 11d92f86 mov eax, ecx */
  EAX = (ECX);
  /* 11d92f88 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92f8b pop esi */
  ESI = (pop32());
  /* 11d92f8c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d92f8d ret  */
  ESPCHK(0x11d92f50u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x11d92f90 (56 bytes, 31 insns) */
void f_11d92f90(void) {
  FTRACE(0x11d92f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d92f90 push ebp */
  push32((uint32_t)(EBP));
  /* 11d92f91 mov ebp, esp */
  EBP = (ESP);
  /* 11d92f93 push edi */
  push32((uint32_t)(EDI));
  /* 11d92f94 push esi */
  push32((uint32_t)(ESI));
  /* 11d92f95 push ebx */
  push32((uint32_t)(EBX));
  /* 11d92f96 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d92f99 jecxz 0x11d92fc1 */
  x86_unimpl("jecxz @ 0x11d92f99");
  /* 11d92f9b mov ebx, ecx */
  EBX = (ECX);
  /* 11d92f9d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11d92fa0 mov esi, edi */
  ESI = (EDI);
  /* 11d92fa2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d92fa4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11d92fa6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d92fa8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d92faa mov edi, esi */
  EDI = (ESI);
  /* 11d92fac mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11d92faf repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 11d92fb1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 11d92fb4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d92fb6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d92fb9 ja 0x11d92fbf */
  if ((!C.cf&&!C.zf)) goto L_11d92fbf;
  /* 11d92fbb je 0x11d92fc1 */
  if (C.zf) goto L_11d92fc1;
  /* 11d92fbd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11d92fbe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_11d92fbf:;
  /* 11d92fbf not ecx */
  ECX = (~(ECX));
L_11d92fc1:;
  /* 11d92fc1 mov eax, ecx */
  EAX = (ECX);
  /* 11d92fc3 pop ebx */
  EBX = (pop32());
  /* 11d92fc4 pop esi */
  ESI = (pop32());
  /* 11d92fc5 pop edi */
  EDI = (pop32());
  /* 11d92fc6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d92fc7 ret  */
  ESPCHK(0x11d92f90u, _esp0);
  ESP += 4; return;
}

