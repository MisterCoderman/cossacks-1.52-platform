#include "recomp.h"

/* FUN_1000a0e9 @ 0x12c8a0e9 (93 bytes, 30 insns) */
void f_12c8a0e9(void) {
  FTRACE(0x12c8a0e9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8a0e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c8a0eb push 0 */
  push32((uint32_t)(0x0u));
  /* 12c8a0ed cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a0f1 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12c8a0f6 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 12c8a0f9 push eax */
  push32((uint32_t)(EAX));
  /* 12c8a0fa call dword ptr [0x12c8e0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e0dc))), 0x12c8a100u);
  /* 12c8a100 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8a102 mov dword ptr [0x12caca04], eax */
  w32((uint32_t)(0x12caca04), (EAX));
  /* 12c8a107 je 0x12c8a13f */
  if (C.zf) goto L_12c8a13f;
  /* 12c8a109 call 0x12c89fa1 */
  push32(0x12c8a10eu); f_12c89fa1();
  /* 12c8a10e cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a111 mov dword ptr [0x12caca08], eax */
  w32((uint32_t)(0x12caca08), (EAX));
  /* 12c8a116 jne 0x12c8a125 */
  if (!C.zf) goto L_12c8a125;
  /* 12c8a118 push 0x3f8 */
  push32((uint32_t)(0x3f8u));
  /* 12c8a11d call 0x12c8a37a */
  push32(0x12c8a122u); f_12c8a37a();
  /* 12c8a122 pop ecx */
  ECX = (pop32());
  /* 12c8a123 jmp 0x12c8a12f */
  goto L_12c8a12f;
L_12c8a125:;
  /* 12c8a125 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a128 jne 0x12c8a142 */
  if (!C.zf) goto L_12c8a142;
  /* 12c8a12a call 0x12c8aec1 */
  push32(0x12c8a12fu); f_12c8aec1();
L_12c8a12f:;
  /* 12c8a12f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8a131 jne 0x12c8a142 */
  if (!C.zf) goto L_12c8a142;
  /* 12c8a133 push dword ptr [0x12caca04] */
  push32((uint32_t)(r32((uint32_t)(0x12caca04))));
  /* 12c8a139 call dword ptr [0x12c8e0d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e0d8))), 0x12c8a13fu);
L_12c8a13f:;
  /* 12c8a13f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c8a141 ret  */
  ESPCHK(0x12c8a0e9u, _esp0);
  ESP += 4; return;
L_12c8a142:;
  /* 12c8a142 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c8a144 pop eax */
  EAX = (pop32());
  /* 12c8a145 ret  */
  ESPCHK(0x12c8a0e9u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a146 @ 0x12c8a146 (168 bytes, 56 insns) */
void f_12c8a146(void) {
  FTRACE(0x12c8a146u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8a146 mov eax, dword ptr [0x12caca08] */
  EAX = (r32((uint32_t)(0x12caca08)));
  /* 12c8a14b push esi */
  push32((uint32_t)(ESI));
  /* 12c8a14c cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a14f push edi */
  push32((uint32_t)(EDI));
  /* 12c8a150 jne 0x12c8a1b8 */
  if (!C.zf) goto L_12c8a1b8;
  /* 12c8a152 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8a153 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12c8a155 cmp dword ptr [0x12cac9f8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x12cac9f8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a15b push ebp */
  push32((uint32_t)(EBP));
  /* 12c8a15c mov ebp, dword ptr [0x12c8e04c] */
  EBP = (r32((uint32_t)(0x12c8e04c)));
  /* 12c8a162 jle 0x12c8a1a4 */
  if ((C.zf||C.sf!=C.of)) goto L_12c8a1a4;
  /* 12c8a164 mov eax, dword ptr [0x12cac9fc] */
  EAX = (r32((uint32_t)(0x12cac9fc)));
  /* 12c8a169 mov edi, dword ptr [0x12c8e0e0] */
  EDI = (r32((uint32_t)(0x12c8e0e0)));
  /* 12c8a16f lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_12c8a172:;
  /* 12c8a172 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12c8a177 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 12c8a17c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 12c8a17e call edi */
  call_ind((uint32_t)(EDI), 0x12c8a180u);
  /* 12c8a180 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12c8a185 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c8a187 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 12c8a189 call edi */
  call_ind((uint32_t)(EDI), 0x12c8a18bu);
  /* 12c8a18b push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 12c8a18e push 0 */
  push32((uint32_t)(0x0u));
  /* 12c8a190 push dword ptr [0x12caca04] */
  push32((uint32_t)(r32((uint32_t)(0x12caca04))));
  /* 12c8a196 call ebp */
  call_ind((uint32_t)(EBP), 0x12c8a198u);
  /* 12c8a198 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8a19b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 12c8a19c cmp ebx, dword ptr [0x12cac9f8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x12cac9f8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a1a2 jl 0x12c8a172 */
  if ((C.sf!=C.of)) goto L_12c8a172;
L_12c8a1a4:;
  /* 12c8a1a4 push dword ptr [0x12cac9fc] */
  push32((uint32_t)(r32((uint32_t)(0x12cac9fc))));
  /* 12c8a1aa push 0 */
  push32((uint32_t)(0x0u));
  /* 12c8a1ac push dword ptr [0x12caca04] */
  push32((uint32_t)(r32((uint32_t)(0x12caca04))));
  /* 12c8a1b2 call ebp */
  call_ind((uint32_t)(EBP), 0x12c8a1b4u);
  /* 12c8a1b4 pop ebp */
  EBP = (pop32());
  /* 12c8a1b5 pop ebx */
  EBX = (pop32());
  /* 12c8a1b6 jmp 0x12c8a1df */
  goto L_12c8a1df;
L_12c8a1b8:;
  /* 12c8a1b8 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a1bb jne 0x12c8a1df */
  if (!C.zf) goto L_12c8a1df;
  /* 12c8a1bd mov edi, 0x12c90dc8 */
  EDI = (0x12c90dc8u);
  /* 12c8a1c2 mov esi, edi */
  ESI = (EDI);
L_12c8a1c4:;
  /* 12c8a1c4 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 12c8a1c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8a1c9 je 0x12c8a1d9 */
  if (C.zf) goto L_12c8a1d9;
  /* 12c8a1cb push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12c8a1d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c8a1d2 push eax */
  push32((uint32_t)(EAX));
  /* 12c8a1d3 call dword ptr [0x12c8e0e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e0e0))), 0x12c8a1d9u);
L_12c8a1d9:;
  /* 12c8a1d9 mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 12c8a1db cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a1dd jne 0x12c8a1c4 */
  if (!C.zf) goto L_12c8a1c4;
L_12c8a1df:;
  /* 12c8a1df push dword ptr [0x12caca04] */
  push32((uint32_t)(r32((uint32_t)(0x12caca04))));
  /* 12c8a1e5 call dword ptr [0x12c8e0d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e0d8))), 0x12c8a1ebu);
  /* 12c8a1eb pop edi */
  EDI = (pop32());
  /* 12c8a1ec pop esi */
  ESI = (pop32());
  /* 12c8a1ed ret  */
  ESPCHK(0x12c8a146u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1ee @ 0x12c8a1ee (57 bytes, 18 insns) */
void f_12c8a1ee(void) {
  FTRACE(0x12c8a1eeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8a1ee mov eax, dword ptr [0x12cac444] */
  EAX = (r32((uint32_t)(0x12cac444)));
  /* 12c8a1f3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a1f6 je 0x12c8a205 */
  if (C.zf) goto L_12c8a205;
  /* 12c8a1f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8a1fa jne 0x12c8a226 */
  if (!C.zf) goto L_12c8a226;
  /* 12c8a1fc cmp dword ptr [0x12cac448], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12cac448))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a203 jne 0x12c8a226 */
  if (!C.zf) goto L_12c8a226;
L_12c8a205:;
  /* 12c8a205 push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 12c8a20a call 0x12c8a227 */
  push32(0x12c8a20fu); f_12c8a227();
  /* 12c8a20f mov eax, dword ptr [0x12cac600] */
  EAX = (r32((uint32_t)(0x12cac600)));
  /* 12c8a214 pop ecx */
  ECX = (pop32());
  /* 12c8a215 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8a217 je 0x12c8a21b */
  if (C.zf) goto L_12c8a21b;
  /* 12c8a219 call eax */
  call_ind((uint32_t)(EAX), 0x12c8a21bu);
L_12c8a21b:;
  /* 12c8a21b push 0xff */
  push32((uint32_t)(0xffu));
  /* 12c8a220 call 0x12c8a227 */
  push32(0x12c8a225u); f_12c8a227();
  /* 12c8a225 pop ecx */
  ECX = (pop32());
L_12c8a226:;
  /* 12c8a226 ret  */
  ESPCHK(0x12c8a1eeu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a227 @ 0x12c8a227 (339 bytes, 100 insns) */
void f_12c8a227(void) {
  FTRACE(0x12c8a227u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8a227 push ebp */
  push32((uint32_t)(EBP));
  /* 12c8a228 mov ebp, esp */
  EBP = (ESP);
  /* 12c8a22a sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8a230 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8a233 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c8a235 mov eax, 0x12c90d38 */
  EAX = (0x12c90d38u);
L_12c8a23a:;
  /* 12c8a23a cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a23c je 0x12c8a249 */
  if (C.zf) goto L_12c8a249;
  /* 12c8a23e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8a241 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12c8a242 cmp eax, 0x12c90dc8 */
  { uint32_t _a=(EAX),_b=(0x12c90dc8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a247 jl 0x12c8a23a */
  if ((C.sf!=C.of)) goto L_12c8a23a;
L_12c8a249:;
  /* 12c8a249 push esi */
  push32((uint32_t)(ESI));
  /* 12c8a24a mov esi, ecx */
  ESI = (ECX);
  /* 12c8a24c shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 12c8a24f cmp edx, dword ptr [esi + 0x12c90d38] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x12c90d38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a255 jne 0x12c8a377 */
  if (!C.zf) goto L_12c8a377;
  /* 12c8a25b mov eax, dword ptr [0x12cac444] */
  EAX = (r32((uint32_t)(0x12cac444)));
  /* 12c8a260 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a263 je 0x12c8a351 */
  if (C.zf) goto L_12c8a351;
  /* 12c8a269 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8a26b jne 0x12c8a27a */
  if (!C.zf) goto L_12c8a27a;
  /* 12c8a26d cmp dword ptr [0x12cac448], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12cac448))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a274 je 0x12c8a351 */
  if (C.zf) goto L_12c8a351;
L_12c8a27a:;
  /* 12c8a27a cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a280 je 0x12c8a377 */
  if (C.zf) goto L_12c8a377;
  /* 12c8a286 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 12c8a28c push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12c8a291 push eax */
  push32((uint32_t)(EAX));
  /* 12c8a292 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c8a294 call dword ptr [0x12c8e0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e0b8))), 0x12c8a29au);
  /* 12c8a29a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8a29c jne 0x12c8a2b1 */
  if (!C.zf) goto L_12c8a2b1;
  /* 12c8a29e lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 12c8a2a4 push 0x12c8e68c */
  push32((uint32_t)(0x12c8e68cu));
  /* 12c8a2a9 push eax */
  push32((uint32_t)(EAX));
  /* 12c8a2aa call 0x12c8b590 */
  push32(0x12c8a2afu); f_12c8b590();
  /* 12c8a2af pop ecx */
  ECX = (pop32());
  /* 12c8a2b0 pop ecx */
  ECX = (pop32());
L_12c8a2b1:;
  /* 12c8a2b1 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 12c8a2b7 push edi */
  push32((uint32_t)(EDI));
  /* 12c8a2b8 push eax */
  push32((uint32_t)(EAX));
  /* 12c8a2b9 lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 12c8a2bf call 0x12c86010 */
  push32(0x12c8a2c4u); f_12c86010();
  /* 12c8a2c4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c8a2c5 pop ecx */
  ECX = (pop32());
  /* 12c8a2c6 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a2c9 jbe 0x12c8a2f4 */
  if ((C.cf||C.zf)) goto L_12c8a2f4;
  /* 12c8a2cb lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 12c8a2d1 push eax */
  push32((uint32_t)(EAX));
  /* 12c8a2d2 call 0x12c86010 */
  push32(0x12c8a2d7u); f_12c86010();
  /* 12c8a2d7 mov edi, eax */
  EDI = (EAX);
  /* 12c8a2d9 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 12c8a2df sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8a2e2 push 3 */
  push32((uint32_t)(0x3u));
  /* 12c8a2e4 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8a2e6 push 0x12c90548 */
  push32((uint32_t)(0x12c90548u));
  /* 12c8a2eb push edi */
  push32((uint32_t)(EDI));
  /* 12c8a2ec call 0x12c85630 */
  push32(0x12c8a2f1u); f_12c85630();
  /* 12c8a2f1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c8a2f4:;
  /* 12c8a2f4 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 12c8a2fa push 0x12c8e670 */
  push32((uint32_t)(0x12c8e670u));
  /* 12c8a2ff push eax */
  push32((uint32_t)(EAX));
  /* 12c8a300 call 0x12c8b590 */
  push32(0x12c8a305u); f_12c8b590();
  /* 12c8a305 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 12c8a30b push edi */
  push32((uint32_t)(EDI));
  /* 12c8a30c push eax */
  push32((uint32_t)(EAX));
  /* 12c8a30d call 0x12c8b5a0 */
  push32(0x12c8a312u); f_12c8b5a0();
  /* 12c8a312 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 12c8a318 push 0x12c8e66c */
  push32((uint32_t)(0x12c8e66cu));
  /* 12c8a31d push eax */
  push32((uint32_t)(EAX));
  /* 12c8a31e call 0x12c8b5a0 */
  push32(0x12c8a323u); f_12c8b5a0();
  /* 12c8a323 push dword ptr [esi + 0x12c90d3c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x12c90d3c))));
  /* 12c8a329 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 12c8a32f push eax */
  push32((uint32_t)(EAX));
  /* 12c8a330 call 0x12c8b5a0 */
  push32(0x12c8a335u); f_12c8b5a0();
  /* 12c8a335 push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 12c8a33a lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 12c8a340 push 0x12c8e644 */
  push32((uint32_t)(0x12c8e644u));
  /* 12c8a345 push eax */
  push32((uint32_t)(EAX));
  /* 12c8a346 call 0x12c8cad6 */
  push32(0x12c8a34bu); f_12c8cad6();
  /* 12c8a34b add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8a34e pop edi */
  EDI = (pop32());
  /* 12c8a34f jmp 0x12c8a377 */
  goto L_12c8a377;
L_12c8a351:;
  /* 12c8a351 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 12c8a354 lea esi, [esi + 0x12c90d3c] */
  ESI = ((uint32_t)(ESI + 0x12c90d3c));
  /* 12c8a35a push 0 */
  push32((uint32_t)(0x0u));
  /* 12c8a35c push eax */
  push32((uint32_t)(EAX));
  /* 12c8a35d push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 12c8a35f call 0x12c86010 */
  push32(0x12c8a364u); f_12c86010();
  /* 12c8a364 pop ecx */
  ECX = (pop32());
  /* 12c8a365 push eax */
  push32((uint32_t)(EAX));
  /* 12c8a366 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 12c8a368 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12c8a36a call dword ptr [0x12c8e088] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e088))), 0x12c8a370u);
  /* 12c8a370 push eax */
  push32((uint32_t)(EAX));
  /* 12c8a371 call dword ptr [0x12c8e0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e0b4))), 0x12c8a377u);
L_12c8a377:;
  /* 12c8a377 pop esi */
  ESI = (pop32());
  /* 12c8a378 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c8a379 ret  */
  ESPCHK(0x12c8a227u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a37a @ 0x12c8a37a (72 bytes, 17 insns) */
void f_12c8a37a(void) {
  FTRACE(0x12c8a37au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8a37a push 0x140 */
  push32((uint32_t)(0x140u));
  /* 12c8a37f push 0 */
  push32((uint32_t)(0x0u));
  /* 12c8a381 push dword ptr [0x12caca04] */
  push32((uint32_t)(r32((uint32_t)(0x12caca04))));
  /* 12c8a387 call dword ptr [0x12c8e060] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e060))), 0x12c8a38du);
  /* 12c8a38d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8a38f mov dword ptr [0x12cac9fc], eax */
  w32((uint32_t)(0x12cac9fc), (EAX));
  /* 12c8a394 jne 0x12c8a397 */
  if (!C.zf) goto L_12c8a397;
  /* 12c8a396 ret  */
  ESPCHK(0x12c8a37au, _esp0);
  ESP += 4; return;
L_12c8a397:;
  /* 12c8a397 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c8a39b and dword ptr [0x12cac9f4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x12cac9f4)))&(0x0u); w32((uint32_t)(0x12cac9f4), (_r)); fl_logic(_r,32); }
  /* 12c8a3a2 and dword ptr [0x12cac9f8], 0 */
  { uint32_t _r=(r32((uint32_t)(0x12cac9f8)))&(0x0u); w32((uint32_t)(0x12cac9f8), (_r)); fl_logic(_r,32); }
  /* 12c8a3a9 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c8a3ab mov dword ptr [0x12cac9f0], eax */
  w32((uint32_t)(0x12cac9f0), (EAX));
  /* 12c8a3b0 mov dword ptr [0x12caca00], ecx */
  w32((uint32_t)(0x12caca00), (ECX));
  /* 12c8a3b6 mov dword ptr [0x12cac9e8], 0x10 */
  w32((uint32_t)(0x12cac9e8), (0x10u));
  /* 12c8a3c0 pop eax */
  EAX = (pop32());
  /* 12c8a3c1 ret  */
  ESPCHK(0x12c8a37au, _esp0);
  ESP += 4; return;
}

/* FUN_1000a3c2 @ 0x12c8a3c2 (43 bytes, 14 insns) */
void f_12c8a3c2(void) {
  FTRACE(0x12c8a3c2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8a3c2 mov eax, dword ptr [0x12cac9f8] */
  EAX = (r32((uint32_t)(0x12cac9f8)));
  /* 12c8a3c7 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 12c8a3ca mov eax, dword ptr [0x12cac9fc] */
  EAX = (r32((uint32_t)(0x12cac9fc)));
  /* 12c8a3cf lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_12c8a3d2:;
  /* 12c8a3d2 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a3d4 jae 0x12c8a3ea */
  if (!C.cf) goto L_12c8a3ea;
  /* 12c8a3d6 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c8a3da sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8a3dd cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a3e3 jb 0x12c8a3ec */
  if (C.cf) goto L_12c8a3ec;
  /* 12c8a3e5 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8a3e8 jmp 0x12c8a3d2 */
  goto L_12c8a3d2;
L_12c8a3ea:;
  /* 12c8a3ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c8a3ec:;
  /* 12c8a3ec ret  */
  ESPCHK(0x12c8a3c2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a3ed @ 0x12c8a3ed (809 bytes, 265 insns) */
void f_12c8a3ed(void) {
  FTRACE(0x12c8a3edu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8a3ed push ebp */
  push32((uint32_t)(EBP));
  /* 12c8a3ee mov ebp, esp */
  EBP = (ESP);
  /* 12c8a3f0 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8a3f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8a3f6 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8a3f7 push esi */
  push32((uint32_t)(ESI));
  /* 12c8a3f8 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12c8a3fb mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 12c8a3fe push edi */
  push32((uint32_t)(EDI));
  /* 12c8a3ff mov edi, esi */
  EDI = (ESI);
  /* 12c8a401 add esi, -4 */
  { uint32_t _a=(ESI),_b=(0xfffffffcu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8a404 sub edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8a407 shr edi, 0xf */
  EDI = (sh_shr((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 12c8a40a mov ecx, edi */
  ECX = (EDI);
  /* 12c8a40c imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c8a412 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12c8a419 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12c8a41c mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 12c8a41e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12c8a41f test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 12c8a422 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c8a425 jne 0x12c8a711 */
  if (!C.zf) goto L_12c8a711;
  /* 12c8a42b mov edx, dword ptr [ecx + esi] */
  EDX = (r32((uint32_t)(ECX + ESI*1)));
  /* 12c8a42e lea ebx, [ecx + esi] */
  EBX = ((uint32_t)(ECX + ESI*1));
  /* 12c8a431 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12c8a434 mov edx, dword ptr [esi - 4] */
  EDX = (r32((uint32_t)(ESI + -0x4)));
  /* 12c8a437 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12c8a43a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c8a43d test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 12c8a440 mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 12c8a443 jne 0x12c8a4c3 */
  if (!C.zf) goto L_12c8a4c3;
  /* 12c8a445 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12c8a448 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 12c8a449 cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a44c jbe 0x12c8a451 */
  if ((C.cf||C.zf)) goto L_12c8a451;
  /* 12c8a44e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12c8a450 pop edx */
  EDX = (pop32());
L_12c8a451:;
  /* 12c8a451 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 12c8a454 cmp ecx, dword ptr [ebx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a457 jne 0x12c8a4a5 */
  if (!C.zf) goto L_12c8a4a5;
  /* 12c8a459 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a45c jae 0x12c8a47c */
  if (!C.cf) goto L_12c8a47c;
  /* 12c8a45e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 12c8a463 mov ecx, edx */
  ECX = (EDX);
  /* 12c8a465 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 12c8a467 lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 12c8a46b not ebx */
  EBX = (~(EBX));
  /* 12c8a46d and dword ptr [eax + edi*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 12c8a471 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 12c8a473 jne 0x12c8a49d */
  if (!C.zf) goto L_12c8a49d;
  /* 12c8a475 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8a478 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 12c8a47a jmp 0x12c8a49d */
  goto L_12c8a49d;
L_12c8a47c:;
  /* 12c8a47c lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 12c8a47f mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 12c8a484 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 12c8a486 lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 12c8a48a not ebx */
  EBX = (~(EBX));
  /* 12c8a48c and dword ptr [eax + edi*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 12c8a493 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 12c8a495 jne 0x12c8a49d */
  if (!C.zf) goto L_12c8a49d;
  /* 12c8a497 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8a49a and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_12c8a49d:;
  /* 12c8a49d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c8a4a0 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c8a4a3 jmp 0x12c8a4a8 */
  goto L_12c8a4a8;
L_12c8a4a5:;
  /* 12c8a4a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
L_12c8a4a8:;
  /* 12c8a4a8 mov edx, dword ptr [ebx + 8] */
  EDX = (r32((uint32_t)(EBX + 0x8)));
  /* 12c8a4ab mov ebx, dword ptr [ebx + 4] */
  EBX = (r32((uint32_t)(EBX + 0x4)));
  /* 12c8a4ae add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8a4b1 mov dword ptr [edx + 4], ebx */
  w32((uint32_t)(EDX + 0x4), (EBX));
  /* 12c8a4b4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c8a4b7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c8a4ba mov ebx, dword ptr [edx + 4] */
  EBX = (r32((uint32_t)(EDX + 0x4)));
  /* 12c8a4bd mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 12c8a4c0 mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
L_12c8a4c3:;
  /* 12c8a4c3 mov edx, ecx */
  EDX = (ECX);
  /* 12c8a4c5 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12c8a4c8 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 12c8a4c9 cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a4cc jbe 0x12c8a4d1 */
  if ((C.cf||C.zf)) goto L_12c8a4d1;
  /* 12c8a4ce push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12c8a4d0 pop edx */
  EDX = (pop32());
L_12c8a4d1:;
  /* 12c8a4d1 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c8a4d4 and ebx, 1 */
  { uint32_t _r=(EBX)&(0x1u); EBX = (_r); fl_logic(_r,32); }
  /* 12c8a4d7 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 12c8a4da jne 0x12c8a574 */
  if (!C.zf) goto L_12c8a574;
  /* 12c8a4e0 sub esi, dword ptr [ebp - 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8a4e3 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c8a4e6 sar ebx, 4 */
  EBX = (sh_sar((uint32_t)(EBX), (0x4u)&0x1f, 32));
  /* 12c8a4e9 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12c8a4eb mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 12c8a4ee dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 12c8a4ef pop esi */
  ESI = (pop32());
  /* 12c8a4f0 cmp ebx, esi */
  { uint32_t _a=(EBX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a4f2 jbe 0x12c8a4f6 */
  if ((C.cf||C.zf)) goto L_12c8a4f6;
  /* 12c8a4f4 mov ebx, esi */
  EBX = (ESI);
L_12c8a4f6:;
  /* 12c8a4f6 add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8a4f9 mov edx, ecx */
  EDX = (ECX);
  /* 12c8a4fb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c8a4fe sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12c8a501 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 12c8a502 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a504 jbe 0x12c8a508 */
  if ((C.cf||C.zf)) goto L_12c8a508;
  /* 12c8a506 mov edx, esi */
  EDX = (ESI);
L_12c8a508:;
  /* 12c8a508 cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a50a je 0x12c8a56f */
  if (C.zf) goto L_12c8a56f;
  /* 12c8a50c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c8a50f mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 12c8a512 cmp esi, dword ptr [ecx + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a515 jne 0x12c8a557 */
  if (!C.zf) goto L_12c8a557;
  /* 12c8a517 cmp ebx, 0x20 */
  { uint32_t _a=(EBX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a51a jae 0x12c8a538 */
  if (!C.cf) goto L_12c8a538;
  /* 12c8a51c mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 12c8a521 mov ecx, ebx */
  ECX = (EBX);
  /* 12c8a523 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 12c8a525 not esi */
  ESI = (~(ESI));
  /* 12c8a527 and dword ptr [eax + edi*4 + 0x44], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 12c8a52b dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 12c8a52f jne 0x12c8a557 */
  if (!C.zf) goto L_12c8a557;
  /* 12c8a531 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8a534 and dword ptr [ecx], esi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(ESI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 12c8a536 jmp 0x12c8a557 */
  goto L_12c8a557;
L_12c8a538:;
  /* 12c8a538 lea ecx, [ebx - 0x20] */
  ECX = ((uint32_t)(EBX + -0x20));
  /* 12c8a53b mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 12c8a540 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 12c8a542 not esi */
  ESI = (~(ESI));
  /* 12c8a544 and dword ptr [eax + edi*4 + 0xc4], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 12c8a54b dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 12c8a54f jne 0x12c8a557 */
  if (!C.zf) goto L_12c8a557;
  /* 12c8a551 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8a554 and dword ptr [ecx + 4], esi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(ESI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_12c8a557:;
  /* 12c8a557 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c8a55a mov esi, dword ptr [ecx + 8] */
  ESI = (r32((uint32_t)(ECX + 0x8)));
  /* 12c8a55d mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c8a560 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 12c8a563 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c8a566 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 12c8a569 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 12c8a56c mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
L_12c8a56f:;
  /* 12c8a56f mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12c8a572 jmp 0x12c8a577 */
  goto L_12c8a577;
L_12c8a574:;
  /* 12c8a574 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_12c8a577:;
  /* 12c8a577 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a57b jne 0x12c8a585 */
  if (!C.zf) goto L_12c8a585;
  /* 12c8a57d cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a57f je 0x12c8a606 */
  if (C.zf) goto L_12c8a606;
L_12c8a585:;
  /* 12c8a585 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c8a588 mov ebx, dword ptr [ecx + edx*8 + 4] */
  EBX = (r32((uint32_t)(ECX + EDX*8 + 0x4)));
  /* 12c8a58c lea ecx, [ecx + edx*8] */
  ECX = ((uint32_t)(ECX + EDX*8));
  /* 12c8a58f mov dword ptr [esi + 4], ebx */
  w32((uint32_t)(ESI + 0x4), (EBX));
  /* 12c8a592 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
  /* 12c8a595 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 12c8a598 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 12c8a59b mov dword ptr [ecx + 8], esi */
  w32((uint32_t)(ECX + 0x8), (ESI));
  /* 12c8a59e mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 12c8a5a1 cmp ecx, dword ptr [esi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(ESI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a5a4 jne 0x12c8a606 */
  if (!C.zf) goto L_12c8a606;
  /* 12c8a5a6 mov cl, byte ptr [edx + eax + 4] */
  CL = (r8((uint32_t)(EDX + EAX*1 + 0x4)));
  /* 12c8a5aa cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a5ad mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 12c8a5b0 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 12c8a5b2 mov byte ptr [edx + eax + 4], cl */
  w8((uint32_t)(EDX + EAX*1 + 0x4), (CL));
  /* 12c8a5b6 jae 0x12c8a5dd */
  if (!C.cf) goto L_12c8a5dd;
  /* 12c8a5b8 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8a5bc jne 0x12c8a5cc */
  if (!C.zf) goto L_12c8a5cc;
  /* 12c8a5be mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 12c8a5c3 mov ecx, edx */
  ECX = (EDX);
  /* 12c8a5c5 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 12c8a5c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8a5ca or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_12c8a5cc:;
  /* 12c8a5cc mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 12c8a5d1 mov ecx, edx */
  ECX = (EDX);
  /* 12c8a5d3 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 12c8a5d5 lea eax, [eax + edi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0x44));
  /* 12c8a5d9 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 12c8a5db jmp 0x12c8a606 */
  goto L_12c8a606;
L_12c8a5dd:;
  /* 12c8a5dd cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8a5e1 jne 0x12c8a5f3 */
  if (!C.zf) goto L_12c8a5f3;
  /* 12c8a5e3 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 12c8a5e6 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 12c8a5eb shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 12c8a5ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8a5f0 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_12c8a5f3:;
  /* 12c8a5f3 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 12c8a5f6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12c8a5fb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c8a5fd lea eax, [eax + edi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0xc4));
  /* 12c8a604 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_12c8a606:;
  /* 12c8a606 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c8a609 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 12c8a60b mov dword ptr [eax + esi - 4], eax */
  w32((uint32_t)(EAX + ESI*1 + -0x4), (EAX));
  /* 12c8a60f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c8a612 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 12c8a614 jne 0x12c8a711 */
  if (!C.zf) goto L_12c8a711;
  /* 12c8a61a mov eax, dword ptr [0x12cac9f4] */
  EAX = (r32((uint32_t)(0x12cac9f4)));
  /* 12c8a61f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8a621 je 0x12c8a703 */
  if (C.zf) goto L_12c8a703;
  /* 12c8a627 mov ecx, dword ptr [0x12cac9ec] */
  ECX = (r32((uint32_t)(0x12cac9ec)));
  /* 12c8a62d mov esi, dword ptr [0x12c8e0e0] */
  ESI = (r32((uint32_t)(0x12c8e0e0)));
  /* 12c8a633 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 12c8a636 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8a639 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 12c8a63e push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12c8a643 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8a644 push ecx */
  push32((uint32_t)(ECX));
  /* 12c8a645 call esi */
  call_ind((uint32_t)(ESI), 0x12c8a647u);
  /* 12c8a647 mov ecx, dword ptr [0x12cac9ec] */
  ECX = (r32((uint32_t)(0x12cac9ec)));
  /* 12c8a64d mov eax, dword ptr [0x12cac9f4] */
  EAX = (r32((uint32_t)(0x12cac9f4)));
  /* 12c8a652 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12c8a657 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c8a659 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 12c8a65c mov eax, dword ptr [0x12cac9f4] */
  EAX = (r32((uint32_t)(0x12cac9f4)));
  /* 12c8a661 mov ecx, dword ptr [0x12cac9ec] */
  ECX = (r32((uint32_t)(0x12cac9ec)));
  /* 12c8a667 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 12c8a66a and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 12c8a672 mov eax, dword ptr [0x12cac9f4] */
  EAX = (r32((uint32_t)(0x12cac9f4)));
  /* 12c8a677 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 12c8a67a dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 12c8a67d mov eax, dword ptr [0x12cac9f4] */
  EAX = (r32((uint32_t)(0x12cac9f4)));
  /* 12c8a682 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12c8a685 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8a689 jne 0x12c8a694 */
  if (!C.zf) goto L_12c8a694;
  /* 12c8a68b and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 12c8a68f mov eax, dword ptr [0x12cac9f4] */
  EAX = (r32((uint32_t)(0x12cac9f4)));
L_12c8a694:;
  /* 12c8a694 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a698 jne 0x12c8a703 */
  if (!C.zf) goto L_12c8a703;
  /* 12c8a69a push ebx */
  push32((uint32_t)(EBX));
  /* 12c8a69b push 0 */
  push32((uint32_t)(0x0u));
  /* 12c8a69d push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 12c8a6a0 call esi */
  call_ind((uint32_t)(ESI), 0x12c8a6a2u);
  /* 12c8a6a2 mov eax, dword ptr [0x12cac9f4] */
  EAX = (r32((uint32_t)(0x12cac9f4)));
  /* 12c8a6a7 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 12c8a6aa push 0 */
  push32((uint32_t)(0x0u));
  /* 12c8a6ac push dword ptr [0x12caca04] */
  push32((uint32_t)(r32((uint32_t)(0x12caca04))));
  /* 12c8a6b2 call dword ptr [0x12c8e04c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e04c))), 0x12c8a6b8u);
  /* 12c8a6b8 mov eax, dword ptr [0x12cac9f8] */
  EAX = (r32((uint32_t)(0x12cac9f8)));
  /* 12c8a6bd mov edx, dword ptr [0x12cac9fc] */
  EDX = (r32((uint32_t)(0x12cac9fc)));
  /* 12c8a6c3 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 12c8a6c6 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12c8a6c9 mov ecx, eax */
  ECX = (EAX);
  /* 12c8a6cb mov eax, dword ptr [0x12cac9f4] */
  EAX = (r32((uint32_t)(0x12cac9f4)));
  /* 12c8a6d0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8a6d2 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 12c8a6d6 push ecx */
  push32((uint32_t)(ECX));
  /* 12c8a6d7 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 12c8a6da push ecx */
  push32((uint32_t)(ECX));
  /* 12c8a6db push eax */
  push32((uint32_t)(EAX));
  /* 12c8a6dc call 0x12c85870 */
  push32(0x12c8a6e1u); f_12c85870();
  /* 12c8a6e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8a6e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8a6e7 dec dword ptr [0x12cac9f8] */
  { uint32_t _r=(r32((uint32_t)(0x12cac9f8)))-1; w32((uint32_t)(0x12cac9f8), (_r)); fl_dec(_r,32); }
  /* 12c8a6ed cmp eax, dword ptr [0x12cac9f4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12cac9f4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a6f3 jbe 0x12c8a6f9 */
  if ((C.cf||C.zf)) goto L_12c8a6f9;
  /* 12c8a6f5 sub dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_sub(_a,_b,_r,32); }
L_12c8a6f9:;
  /* 12c8a6f9 mov eax, dword ptr [0x12cac9fc] */
  EAX = (r32((uint32_t)(0x12cac9fc)));
  /* 12c8a6fe mov dword ptr [0x12cac9f0], eax */
  w32((uint32_t)(0x12cac9f0), (EAX));
L_12c8a703:;
  /* 12c8a703 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8a706 mov dword ptr [0x12cac9ec], edi */
  w32((uint32_t)(0x12cac9ec), (EDI));
  /* 12c8a70c mov dword ptr [0x12cac9f4], eax */
  w32((uint32_t)(0x12cac9f4), (EAX));
L_12c8a711:;
  /* 12c8a711 pop edi */
  EDI = (pop32());
  /* 12c8a712 pop esi */
  ESI = (pop32());
  /* 12c8a713 pop ebx */
  EBX = (pop32());
  /* 12c8a714 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c8a715 ret  */
  ESPCHK(0x12c8a3edu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a716 @ 0x12c8a716 (777 bytes, 275 insns) */
void f_12c8a716(void) {
  FTRACE(0x12c8a716u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8a716 push ebp */
  push32((uint32_t)(EBP));
  /* 12c8a717 mov ebp, esp */
  EBP = (ESP);
  /* 12c8a719 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8a71c mov eax, dword ptr [0x12cac9f8] */
  EAX = (r32((uint32_t)(0x12cac9f8)));
  /* 12c8a721 mov edx, dword ptr [0x12cac9fc] */
  EDX = (r32((uint32_t)(0x12cac9fc)));
  /* 12c8a727 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8a728 push esi */
  push32((uint32_t)(ESI));
  /* 12c8a729 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 12c8a72c push edi */
  push32((uint32_t)(EDI));
  /* 12c8a72d lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 12c8a730 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8a733 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 12c8a736 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 12c8a739 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 12c8a73c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12c8a73f sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12c8a742 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12c8a743 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a746 jge 0x12c8a756 */
  if ((C.sf==C.of)) goto L_12c8a756;
  /* 12c8a748 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 12c8a74b shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 12c8a74d or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 12c8a751 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 12c8a754 jmp 0x12c8a766 */
  goto L_12c8a766;
L_12c8a756:;
  /* 12c8a756 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8a759 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c8a75c xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 12c8a75e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12c8a760 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 12c8a763 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12c8a766:;
  /* 12c8a766 mov eax, dword ptr [0x12cac9f0] */
  EAX = (r32((uint32_t)(0x12cac9f0)));
  /* 12c8a76b mov ebx, eax */
  EBX = (EAX);
  /* 12c8a76d cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a76f mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 12c8a772 jae 0x12c8a78d */
  if (!C.cf) goto L_12c8a78d;
L_12c8a774:;
  /* 12c8a774 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 12c8a777 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 12c8a779 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 12c8a77c and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 12c8a77e or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 12c8a780 jne 0x12c8a78d */
  if (!C.zf) goto L_12c8a78d;
  /* 12c8a782 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8a785 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a788 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 12c8a78b jb 0x12c8a774 */
  if (C.cf) goto L_12c8a774;
L_12c8a78d:;
  /* 12c8a78d cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a790 jne 0x12c8a80b */
  if (!C.zf) goto L_12c8a80b;
  /* 12c8a792 mov ebx, edx */
  EBX = (EDX);
L_12c8a794:;
  /* 12c8a794 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a796 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 12c8a799 jae 0x12c8a7b0 */
  if (!C.cf) goto L_12c8a7b0;
  /* 12c8a79b mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 12c8a79e mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 12c8a7a0 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 12c8a7a3 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 12c8a7a5 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 12c8a7a7 jne 0x12c8a7ae */
  if (!C.zf) goto L_12c8a7ae;
  /* 12c8a7a9 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8a7ac jmp 0x12c8a794 */
  goto L_12c8a794;
L_12c8a7ae:;
  /* 12c8a7ae cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_12c8a7b0:;
  /* 12c8a7b0 jne 0x12c8a80b */
  if (!C.zf) goto L_12c8a80b;
L_12c8a7b2:;
  /* 12c8a7b2 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a7b5 jae 0x12c8a7c8 */
  if (!C.cf) goto L_12c8a7c8;
  /* 12c8a7b7 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a7bb jne 0x12c8a7c5 */
  if (!C.zf) goto L_12c8a7c5;
  /* 12c8a7bd add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8a7c0 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 12c8a7c3 jmp 0x12c8a7b2 */
  goto L_12c8a7b2;
L_12c8a7c5:;
  /* 12c8a7c5 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_12c8a7c8:;
  /* 12c8a7c8 jne 0x12c8a7f0 */
  if (!C.zf) goto L_12c8a7f0;
  /* 12c8a7ca mov ebx, edx */
  EBX = (EDX);
L_12c8a7cc:;
  /* 12c8a7cc cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a7ce mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 12c8a7d1 jae 0x12c8a7e0 */
  if (!C.cf) goto L_12c8a7e0;
  /* 12c8a7d3 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a7d7 jne 0x12c8a7de */
  if (!C.zf) goto L_12c8a7de;
  /* 12c8a7d9 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8a7dc jmp 0x12c8a7cc */
  goto L_12c8a7cc;
L_12c8a7de:;
  /* 12c8a7de cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_12c8a7e0:;
  /* 12c8a7e0 jne 0x12c8a7f0 */
  if (!C.zf) goto L_12c8a7f0;
  /* 12c8a7e2 call 0x12c8aa1f */
  push32(0x12c8a7e7u); f_12c8aa1f();
  /* 12c8a7e7 mov ebx, eax */
  EBX = (EAX);
  /* 12c8a7e9 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 12c8a7eb mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 12c8a7ee je 0x12c8a804 */
  if (C.zf) goto L_12c8a804;
L_12c8a7f0:;
  /* 12c8a7f0 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8a7f1 call 0x12c8aad0 */
  push32(0x12c8a7f6u); f_12c8aad0();
  /* 12c8a7f6 pop ecx */
  ECX = (pop32());
  /* 12c8a7f7 mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 12c8a7fa mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12c8a7fc mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 12c8a7ff cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a802 jne 0x12c8a80b */
  if (!C.zf) goto L_12c8a80b;
L_12c8a804:;
  /* 12c8a804 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c8a806 jmp 0x12c8aa1a */
  goto L_12c8aa1a;
L_12c8a80b:;
  /* 12c8a80b mov dword ptr [0x12cac9f0], ebx */
  w32((uint32_t)(0x12cac9f0), (EBX));
  /* 12c8a811 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 12c8a814 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 12c8a816 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a819 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c8a81c je 0x12c8a832 */
  if (C.zf) goto L_12c8a832;
  /* 12c8a81e mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 12c8a825 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 12c8a829 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 12c8a82c and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 12c8a82e or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 12c8a830 jne 0x12c8a869 */
  if (!C.zf) goto L_12c8a869;
L_12c8a832:;
  /* 12c8a832 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 12c8a838 mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 12c8a83b and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 12c8a83e and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 12c8a841 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c8a845 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 12c8a848 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 12c8a84a mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 12c8a84d jne 0x12c8a866 */
  if (!C.zf) goto L_12c8a866;
L_12c8a84f:;
  /* 12c8a84f mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 12c8a855 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 12c8a858 and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 12c8a85b add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8a85e mov edi, esi */
  EDI = (ESI);
  /* 12c8a860 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 12c8a862 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 12c8a864 je 0x12c8a84f */
  if (C.zf) goto L_12c8a84f;
L_12c8a866:;
  /* 12c8a866 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_12c8a869:;
  /* 12c8a869 mov ecx, edx */
  ECX = (EDX);
  /* 12c8a86b xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 12c8a86d imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c8a873 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12c8a87a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c8a87d mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 12c8a881 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 12c8a883 jne 0x12c8a892 */
  if (!C.zf) goto L_12c8a892;
  /* 12c8a885 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 12c8a88c push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12c8a88e and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 12c8a891 pop edi */
  EDI = (pop32());
L_12c8a892:;
  /* 12c8a892 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c8a894 jl 0x12c8a89b */
  if ((C.sf!=C.of)) goto L_12c8a89b;
  /* 12c8a896 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12c8a898 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12c8a899 jmp 0x12c8a892 */
  goto L_12c8a892;
L_12c8a89b:;
  /* 12c8a89b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c8a89e mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 12c8a8a2 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 12c8a8a4 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8a8a7 mov esi, ecx */
  ESI = (ECX);
  /* 12c8a8a9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c8a8ac sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 12c8a8af dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 12c8a8b0 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a8b3 jle 0x12c8a8b8 */
  if ((C.zf||C.sf!=C.of)) goto L_12c8a8b8;
  /* 12c8a8b5 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12c8a8b7 pop esi */
  ESI = (pop32());
L_12c8a8b8:;
  /* 12c8a8b8 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a8ba je 0x12c8a9cd */
  if (C.zf) goto L_12c8a9cd;
  /* 12c8a8c0 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 12c8a8c3 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a8c6 jne 0x12c8a929 */
  if (!C.zf) goto L_12c8a929;
  /* 12c8a8c8 cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a8cb jge 0x12c8a8f8 */
  if ((C.sf==C.of)) goto L_12c8a8f8;
  /* 12c8a8cd mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 12c8a8d2 mov ecx, edi */
  ECX = (EDI);
  /* 12c8a8d4 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 12c8a8d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c8a8d9 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 12c8a8dd not ebx */
  EBX = (~(EBX));
  /* 12c8a8df mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 12c8a8e2 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 12c8a8e6 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 12c8a8ea dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 12c8a8ec jne 0x12c8a926 */
  if (!C.zf) goto L_12c8a926;
  /* 12c8a8ee mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8a8f1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c8a8f4 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 12c8a8f6 jmp 0x12c8a929 */
  goto L_12c8a929;
L_12c8a8f8:;
  /* 12c8a8f8 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 12c8a8fb mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 12c8a900 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 12c8a902 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c8a905 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 12c8a909 lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 12c8a910 not ebx */
  EBX = (~(EBX));
  /* 12c8a912 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 12c8a914 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 12c8a916 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 12c8a919 jne 0x12c8a926 */
  if (!C.zf) goto L_12c8a926;
  /* 12c8a91b mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8a91e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c8a921 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 12c8a924 jmp 0x12c8a929 */
  goto L_12c8a929;
L_12c8a926:;
  /* 12c8a926 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_12c8a929:;
  /* 12c8a929 mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 12c8a92c mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 12c8a92f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a933 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 12c8a936 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 12c8a939 mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 12c8a93c mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 12c8a93f je 0x12c8a9d9 */
  if (C.zf) goto L_12c8a9d9;
  /* 12c8a945 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c8a948 mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 12c8a94c lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 12c8a94f mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 12c8a952 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12c8a955 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12c8a958 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 12c8a95b mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12c8a95e mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 12c8a961 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a964 jne 0x12c8a9ca */
  if (!C.zf) goto L_12c8a9ca;
  /* 12c8a966 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 12c8a96a cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a96d mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 12c8a970 jge 0x12c8a99b */
  if ((C.sf==C.of)) goto L_12c8a99b;
  /* 12c8a972 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 12c8a974 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8a978 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 12c8a97c jne 0x12c8a989 */
  if (!C.zf) goto L_12c8a989;
  /* 12c8a97e mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 12c8a983 mov ecx, esi */
  ECX = (ESI);
  /* 12c8a985 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 12c8a987 or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_12c8a989:;
  /* 12c8a989 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 12c8a98e mov ecx, esi */
  ECX = (ESI);
  /* 12c8a990 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 12c8a992 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c8a995 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 12c8a999 jmp 0x12c8a9ca */
  goto L_12c8a9ca;
L_12c8a99b:;
  /* 12c8a99b inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 12c8a99d cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8a9a1 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 12c8a9a5 jne 0x12c8a9b4 */
  if (!C.zf) goto L_12c8a9b4;
  /* 12c8a9a7 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 12c8a9aa mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 12c8a9af shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 12c8a9b1 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_12c8a9b4:;
  /* 12c8a9b4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c8a9b7 lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 12c8a9be lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 12c8a9c1 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 12c8a9c6 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 12c8a9c8 or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_12c8a9ca:;
  /* 12c8a9ca mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_12c8a9cd:;
  /* 12c8a9cd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c8a9cf je 0x12c8a9dc */
  if (C.zf) goto L_12c8a9dc;
  /* 12c8a9d1 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12c8a9d3 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 12c8a9d7 jmp 0x12c8a9dc */
  goto L_12c8a9dc;
L_12c8a9d9:;
  /* 12c8a9d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_12c8a9dc:;
  /* 12c8a9dc mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 12c8a9df add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8a9e1 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 12c8a9e4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12c8a9e6 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 12c8a9ea mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 12c8a9ed mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 12c8a9ef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c8a9f1 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 12c8a9f4 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 12c8a9f6 jne 0x12c8aa12 */
  if (!C.zf) goto L_12c8aa12;
  /* 12c8a9f8 cmp ebx, dword ptr [0x12cac9f4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x12cac9f4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a9fe jne 0x12c8aa12 */
  if (!C.zf) goto L_12c8aa12;
  /* 12c8aa00 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c8aa03 cmp ecx, dword ptr [0x12cac9ec] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12cac9ec))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8aa09 jne 0x12c8aa12 */
  if (!C.zf) goto L_12c8aa12;
  /* 12c8aa0b and dword ptr [0x12cac9f4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x12cac9f4)))&(0x0u); w32((uint32_t)(0x12cac9f4), (_r)); fl_logic(_r,32); }
L_12c8aa12:;
  /* 12c8aa12 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c8aa15 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12c8aa17 lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_12c8aa1a:;
  /* 12c8aa1a pop edi */
  EDI = (pop32());
  /* 12c8aa1b pop esi */
  ESI = (pop32());
  /* 12c8aa1c pop ebx */
  EBX = (pop32());
  /* 12c8aa1d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c8aa1e ret  */
  ESPCHK(0x12c8a716u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa1f @ 0x12c8aa1f (177 bytes, 53 insns) */
void f_12c8aa1f(void) {
  FTRACE(0x12c8aa1fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8aa1f mov eax, dword ptr [0x12cac9f8] */
  EAX = (r32((uint32_t)(0x12cac9f8)));
  /* 12c8aa24 mov ecx, dword ptr [0x12cac9e8] */
  ECX = (r32((uint32_t)(0x12cac9e8)));
  /* 12c8aa2a push esi */
  push32((uint32_t)(ESI));
  /* 12c8aa2b push edi */
  push32((uint32_t)(EDI));
  /* 12c8aa2c xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 12c8aa2e cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8aa30 jne 0x12c8aa62 */
  if (!C.zf) goto L_12c8aa62;
  /* 12c8aa32 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 12c8aa36 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12c8aa39 push eax */
  push32((uint32_t)(EAX));
  /* 12c8aa3a push dword ptr [0x12cac9fc] */
  push32((uint32_t)(r32((uint32_t)(0x12cac9fc))));
  /* 12c8aa40 push edi */
  push32((uint32_t)(EDI));
  /* 12c8aa41 push dword ptr [0x12caca04] */
  push32((uint32_t)(r32((uint32_t)(0x12caca04))));
  /* 12c8aa47 call dword ptr [0x12c8e05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e05c))), 0x12c8aa4du);
  /* 12c8aa4d cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8aa4f je 0x12c8aab2 */
  if (C.zf) goto L_12c8aab2;
  /* 12c8aa51 add dword ptr [0x12cac9e8], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x12cac9e8))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x12cac9e8), (_r)); fl_add(_a,_b,_r,32); }
  /* 12c8aa58 mov dword ptr [0x12cac9fc], eax */
  w32((uint32_t)(0x12cac9fc), (EAX));
  /* 12c8aa5d mov eax, dword ptr [0x12cac9f8] */
  EAX = (r32((uint32_t)(0x12cac9f8)));
L_12c8aa62:;
  /* 12c8aa62 mov ecx, dword ptr [0x12cac9fc] */
  ECX = (r32((uint32_t)(0x12cac9fc)));
  /* 12c8aa68 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 12c8aa6d push 8 */
  push32((uint32_t)(0x8u));
  /* 12c8aa6f lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 12c8aa72 push dword ptr [0x12caca04] */
  push32((uint32_t)(r32((uint32_t)(0x12caca04))));
  /* 12c8aa78 lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 12c8aa7b call dword ptr [0x12c8e060] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e060))), 0x12c8aa81u);
  /* 12c8aa81 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8aa83 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 12c8aa86 je 0x12c8aab2 */
  if (C.zf) goto L_12c8aab2;
  /* 12c8aa88 push 4 */
  push32((uint32_t)(0x4u));
  /* 12c8aa8a push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 12c8aa8f push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 12c8aa94 push edi */
  push32((uint32_t)(EDI));
  /* 12c8aa95 call dword ptr [0x12c8e0e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e0e4))), 0x12c8aa9bu);
  /* 12c8aa9b cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8aa9d mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 12c8aaa0 jne 0x12c8aab6 */
  if (!C.zf) goto L_12c8aab6;
  /* 12c8aaa2 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 12c8aaa5 push edi */
  push32((uint32_t)(EDI));
  /* 12c8aaa6 push dword ptr [0x12caca04] */
  push32((uint32_t)(r32((uint32_t)(0x12caca04))));
  /* 12c8aaac call dword ptr [0x12c8e04c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e04c))), 0x12c8aab2u);
L_12c8aab2:;
  /* 12c8aab2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c8aab4 jmp 0x12c8aacd */
  goto L_12c8aacd;
L_12c8aab6:;
  /* 12c8aab6 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 12c8aaba mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 12c8aabc mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 12c8aabf inc dword ptr [0x12cac9f8] */
  { uint32_t _r=(r32((uint32_t)(0x12cac9f8)))+1; w32((uint32_t)(0x12cac9f8), (_r)); fl_inc(_r,32); }
  /* 12c8aac5 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 12c8aac8 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 12c8aacb mov eax, esi */
  EAX = (ESI);
L_12c8aacd:;
  /* 12c8aacd pop edi */
  EDI = (pop32());
  /* 12c8aace pop esi */
  ESI = (pop32());
  /* 12c8aacf ret  */
  ESPCHK(0x12c8aa1fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000aad0 @ 0x12c8aad0 (251 bytes, 85 insns) */
void f_12c8aad0(void) {
  FTRACE(0x12c8aad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8aad0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c8aad1 mov ebp, esp */
  EBP = (ESP);
  /* 12c8aad3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c8aad4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8aad7 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8aad8 push esi */
  push32((uint32_t)(ESI));
  /* 12c8aad9 push edi */
  push32((uint32_t)(EDI));
  /* 12c8aada mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 12c8aadd mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 12c8aae0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_12c8aae2:;
  /* 12c8aae2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8aae4 jl 0x12c8aaeb */
  if ((C.sf!=C.of)) goto L_12c8aaeb;
  /* 12c8aae6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12c8aae8 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 12c8aae9 jmp 0x12c8aae2 */
  goto L_12c8aae2;
L_12c8aaeb:;
  /* 12c8aaeb mov eax, ebx */
  EAX = (EBX);
  /* 12c8aaed push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12c8aaef imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c8aaf5 pop edx */
  EDX = (pop32());
  /* 12c8aaf6 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 12c8aafd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c8ab00:;
  /* 12c8ab00 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 12c8ab03 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 12c8ab06 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8ab09 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 12c8ab0a jne 0x12c8ab00 */
  if (!C.zf) goto L_12c8ab00;
  /* 12c8ab0c mov edi, ebx */
  EDI = (EBX);
  /* 12c8ab0e push 4 */
  push32((uint32_t)(0x4u));
  /* 12c8ab10 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 12c8ab13 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8ab16 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12c8ab1b push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12c8ab20 push edi */
  push32((uint32_t)(EDI));
  /* 12c8ab21 call dword ptr [0x12c8e0e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e0e4))), 0x12c8ab27u);
  /* 12c8ab27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8ab29 jne 0x12c8ab33 */
  if (!C.zf) goto L_12c8ab33;
  /* 12c8ab2b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c8ab2e jmp 0x12c8abc6 */
  goto L_12c8abc6;
L_12c8ab33:;
  /* 12c8ab33 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 12c8ab39 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8ab3b ja 0x12c8ab79 */
  if ((!C.cf&&!C.zf)) goto L_12c8ab79;
  /* 12c8ab3d lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_12c8ab40:;
  /* 12c8ab40 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 12c8ab44 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 12c8ab4b lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 12c8ab51 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 12c8ab58 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12c8ab5a lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 12c8ab60 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12c8ab63 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 12c8ab6d add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8ab72 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 12c8ab75 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8ab77 jbe 0x12c8ab40 */
  if ((C.cf||C.zf)) goto L_12c8ab40;
L_12c8ab79:;
  /* 12c8ab79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c8ab7c lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 12c8ab7f add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8ab84 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c8ab86 pop edi */
  EDI = (pop32());
  /* 12c8ab87 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12c8ab8a mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12c8ab8d lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 12c8ab90 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12c8ab93 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12c8ab96 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 12c8ab9b mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 12c8aba2 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 12c8aba5 mov cl, al */
  CL = (AL);
  /* 12c8aba7 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 12c8aba9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12c8abab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8abae mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 12c8abb1 jne 0x12c8abb6 */
  if (!C.zf) goto L_12c8abb6;
  /* 12c8abb3 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_12c8abb6:;
  /* 12c8abb6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12c8abbb mov ecx, ebx */
  ECX = (EBX);
  /* 12c8abbd shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c8abbf not edx */
  EDX = (~(EDX));
  /* 12c8abc1 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 12c8abc4 mov eax, ebx */
  EAX = (EBX);
L_12c8abc6:;
  /* 12c8abc6 pop edi */
  EDI = (pop32());
  /* 12c8abc7 pop esi */
  ESI = (pop32());
  /* 12c8abc8 pop ebx */
  EBX = (pop32());
  /* 12c8abc9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c8abca ret  */
  ESPCHK(0x12c8aad0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000abcb @ 0x12c8abcb (758 bytes, 259 insns) */
void f_12c8abcb(void) {
  FTRACE(0x12c8abcbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8abcb push ebp */
  push32((uint32_t)(EBP));
  /* 12c8abcc mov ebp, esp */
  EBP = (ESP);
  /* 12c8abce sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8abd1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8abd4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c8abd7 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8abd8 push esi */
  push32((uint32_t)(ESI));
  /* 12c8abd9 push edi */
  push32((uint32_t)(EDI));
  /* 12c8abda mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 12c8abdd mov edx, edi */
  EDX = (EDI);
  /* 12c8abdf lea esi, [eax + 0x17] */
  ESI = ((uint32_t)(EAX + 0x17));
  /* 12c8abe2 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8abe5 mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 12c8abe8 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 12c8abeb shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12c8abee mov ecx, edx */
  ECX = (EDX);
  /* 12c8abf0 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c8abf6 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12c8abfd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c8ac00 mov ecx, dword ptr [edi - 4] */
  ECX = (r32((uint32_t)(EDI + -0x4)));
  /* 12c8ac03 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12c8ac04 cmp esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8ac06 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12c8ac09 mov ebx, dword ptr [ecx + edi - 4] */
  EBX = (r32((uint32_t)(ECX + EDI*1 + -0x4)));
  /* 12c8ac0d lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 12c8ac11 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 12c8ac14 jle 0x12c8ad79 */
  if ((C.zf||C.sf!=C.of)) goto L_12c8ad79;
  /* 12c8ac1a test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 12c8ac1d jne 0x12c8ad72 */
  if (!C.zf) goto L_12c8ad72;
  /* 12c8ac23 add ebx, ecx */
  { uint32_t _a=(EBX),_b=(ECX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8ac25 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8ac27 jg 0x12c8ad72 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c8ad72;
  /* 12c8ac2d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c8ac30 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12c8ac33 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12c8ac34 cmp ecx, 0x3f */
  { uint32_t _a=(ECX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8ac37 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c8ac3a jbe 0x12c8ac42 */
  if ((C.cf||C.zf)) goto L_12c8ac42;
  /* 12c8ac3c push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12c8ac3e pop ecx */
  ECX = (pop32());
  /* 12c8ac3f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12c8ac42:;
  /* 12c8ac42 mov ebx, dword ptr [edi + 4] */
  EBX = (r32((uint32_t)(EDI + 0x4)));
  /* 12c8ac45 cmp ebx, dword ptr [edi + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8ac48 jne 0x12c8ac92 */
  if (!C.zf) goto L_12c8ac92;
  /* 12c8ac4a cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8ac4d jae 0x12c8ac6e */
  if (!C.cf) goto L_12c8ac6e;
  /* 12c8ac4f mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 12c8ac54 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 12c8ac56 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c8ac59 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 12c8ac5d not ebx */
  EBX = (~(EBX));
  /* 12c8ac5f and dword ptr [eax + edx*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 12c8ac63 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 12c8ac65 jne 0x12c8ac92 */
  if (!C.zf) goto L_12c8ac92;
  /* 12c8ac67 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8ac6a and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 12c8ac6c jmp 0x12c8ac92 */
  goto L_12c8ac92;
L_12c8ac6e:;
  /* 12c8ac6e add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8ac71 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 12c8ac76 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 12c8ac78 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c8ac7b lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 12c8ac7f not ebx */
  EBX = (~(EBX));
  /* 12c8ac81 and dword ptr [eax + edx*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 12c8ac88 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 12c8ac8a jne 0x12c8ac92 */
  if (!C.zf) goto L_12c8ac92;
  /* 12c8ac8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8ac8f and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_12c8ac92:;
  /* 12c8ac92 mov ecx, dword ptr [edi + 8] */
  ECX = (r32((uint32_t)(EDI + 0x8)));
  /* 12c8ac95 mov ebx, dword ptr [edi + 4] */
  EBX = (r32((uint32_t)(EDI + 0x4)));
  /* 12c8ac98 mov dword ptr [ecx + 4], ebx */
  w32((uint32_t)(ECX + 0x4), (EBX));
  /* 12c8ac9b mov ecx, dword ptr [edi + 4] */
  ECX = (r32((uint32_t)(EDI + 0x4)));
  /* 12c8ac9e mov edi, dword ptr [edi + 8] */
  EDI = (r32((uint32_t)(EDI + 0x8)));
  /* 12c8aca1 mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 12c8aca4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c8aca7 sub ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8aca9 add dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 12c8acac cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8acb0 jle 0x12c8ad60 */
  if ((C.zf||C.sf!=C.of)) goto L_12c8ad60;
  /* 12c8acb6 mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 12c8acb9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c8acbc sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 12c8acbf dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 12c8acc0 lea ecx, [ecx + esi - 4] */
  ECX = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 12c8acc4 cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8acc7 jbe 0x12c8accc */
  if ((C.cf||C.zf)) goto L_12c8accc;
  /* 12c8acc9 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12c8accb pop edi */
  EDI = (pop32());
L_12c8accc:;
  /* 12c8accc mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c8accf lea ebx, [ebx + edi*8] */
  EBX = ((uint32_t)(EBX + EDI*8));
  /* 12c8acd2 mov dword ptr [ebp + 0x10], ebx */
  w32((uint32_t)(EBP + 0x10), (EBX));
  /* 12c8acd5 mov ebx, dword ptr [ebx + 4] */
  EBX = (r32((uint32_t)(EBX + 0x4)));
  /* 12c8acd8 mov dword ptr [ecx + 4], ebx */
  w32((uint32_t)(ECX + 0x4), (EBX));
  /* 12c8acdb mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c8acde mov dword ptr [ecx + 8], ebx */
  w32((uint32_t)(ECX + 0x8), (EBX));
  /* 12c8ace1 mov dword ptr [ebx + 4], ecx */
  w32((uint32_t)(EBX + 0x4), (ECX));
  /* 12c8ace4 mov ebx, dword ptr [ecx + 4] */
  EBX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c8ace7 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 12c8acea mov ebx, dword ptr [ecx + 4] */
  EBX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c8aced cmp ebx, dword ptr [ecx + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8acf0 jne 0x12c8ad4e */
  if (!C.zf) goto L_12c8ad4e;
  /* 12c8acf2 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 12c8acf6 cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8acf9 mov byte ptr [ebp + 0x13], cl */
  w8((uint32_t)(EBP + 0x13), (CL));
  /* 12c8acfc inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 12c8acfe mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 12c8ad02 jae 0x12c8ad25 */
  if (!C.cf) goto L_12c8ad25;
  /* 12c8ad04 cmp byte ptr [ebp + 0x13], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x13))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8ad08 jne 0x12c8ad18 */
  if (!C.zf) goto L_12c8ad18;
  /* 12c8ad0a mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 12c8ad0f mov ecx, edi */
  ECX = (EDI);
  /* 12c8ad11 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 12c8ad13 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8ad16 or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_12c8ad18:;
  /* 12c8ad18 lea eax, [eax + edx*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0x44));
  /* 12c8ad1c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12c8ad21 mov ecx, edi */
  ECX = (EDI);
  /* 12c8ad23 jmp 0x12c8ad4a */
  goto L_12c8ad4a;
L_12c8ad25:;
  /* 12c8ad25 cmp byte ptr [ebp + 0x13], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x13))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8ad29 jne 0x12c8ad3b */
  if (!C.zf) goto L_12c8ad3b;
  /* 12c8ad2b lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 12c8ad2e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 12c8ad33 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 12c8ad35 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8ad38 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_12c8ad3b:;
  /* 12c8ad3b lea eax, [eax + edx*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0xc4));
  /* 12c8ad42 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 12c8ad45 mov edx, 0x80000000 */
  EDX = (0x80000000u);
L_12c8ad4a:;
  /* 12c8ad4a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c8ad4c or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_12c8ad4e:;
  /* 12c8ad4e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c8ad51 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c8ad54 lea eax, [edx + esi - 4] */
  EAX = ((uint32_t)(EDX + ESI*1 + -0x4));
  /* 12c8ad58 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12c8ad5a mov dword ptr [ecx + eax - 4], ecx */
  w32((uint32_t)(ECX + EAX*1 + -0x4), (ECX));
  /* 12c8ad5e jmp 0x12c8ad63 */
  goto L_12c8ad63;
L_12c8ad60:;
  /* 12c8ad60 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
L_12c8ad63:;
  /* 12c8ad63 lea eax, [esi + 1] */
  EAX = ((uint32_t)(ESI + 0x1));
  /* 12c8ad66 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
  /* 12c8ad69 mov dword ptr [edx + esi - 8], eax */
  w32((uint32_t)(EDX + ESI*1 + -0x8), (EAX));
  /* 12c8ad6d jmp 0x12c8aeb9 */
  goto L_12c8aeb9;
L_12c8ad72:;
  /* 12c8ad72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c8ad74 jmp 0x12c8aebc */
  goto L_12c8aebc;
L_12c8ad79:;
  /* 12c8ad79 jge 0x12c8aeb9 */
  if ((C.sf==C.of)) goto L_12c8aeb9;
  /* 12c8ad7f mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c8ad82 sub dword ptr [ebp + 0x10], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0x10), (_r)); fl_sub(_a,_b,_r,32); }
  /* 12c8ad85 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 12c8ad88 mov dword ptr [ebx - 4], ecx */
  w32((uint32_t)(EBX + -0x4), (ECX));
  /* 12c8ad8b lea ebx, [ebx + esi - 4] */
  EBX = ((uint32_t)(EBX + ESI*1 + -0x4));
  /* 12c8ad8f mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 12c8ad92 mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 12c8ad95 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 12c8ad98 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 12c8ad99 mov dword ptr [ebx - 4], ecx */
  w32((uint32_t)(EBX + -0x4), (ECX));
  /* 12c8ad9c cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8ad9f jbe 0x12c8ada4 */
  if ((C.cf||C.zf)) goto L_12c8ada4;
  /* 12c8ada1 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12c8ada3 pop esi */
  ESI = (pop32());
L_12c8ada4:;
  /* 12c8ada4 test byte ptr [ebp - 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x1u); fl_logic(_r,8); }
  /* 12c8ada8 jne 0x12c8ae33 */
  if (!C.zf) goto L_12c8ae33;
  /* 12c8adae mov esi, dword ptr [ebp - 4] */
  ESI = (r32((uint32_t)(EBP + -0x4)));
  /* 12c8adb1 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 12c8adb4 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 12c8adb5 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8adb8 jbe 0x12c8adbd */
  if ((C.cf||C.zf)) goto L_12c8adbd;
  /* 12c8adba push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12c8adbc pop esi */
  ESI = (pop32());
L_12c8adbd:;
  /* 12c8adbd mov ecx, dword ptr [edi + 4] */
  ECX = (r32((uint32_t)(EDI + 0x4)));
  /* 12c8adc0 cmp ecx, dword ptr [edi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8adc3 jne 0x12c8ae0c */
  if (!C.zf) goto L_12c8ae0c;
  /* 12c8adc5 cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8adc8 jae 0x12c8ade8 */
  if (!C.cf) goto L_12c8ade8;
  /* 12c8adca mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 12c8adcf mov ecx, esi */
  ECX = (ESI);
  /* 12c8add1 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 12c8add3 lea esi, [esi + eax + 4] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x4));
  /* 12c8add7 not ebx */
  EBX = (~(EBX));
  /* 12c8add9 and dword ptr [eax + edx*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 12c8addd dec byte ptr [esi] */
  { uint32_t _r=(r8((uint32_t)(ESI)))-1; w8((uint32_t)(ESI), (_r)); fl_dec(_r,8); }
  /* 12c8addf jne 0x12c8ae09 */
  if (!C.zf) goto L_12c8ae09;
  /* 12c8ade1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8ade4 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 12c8ade6 jmp 0x12c8ae09 */
  goto L_12c8ae09;
L_12c8ade8:;
  /* 12c8ade8 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 12c8adeb mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 12c8adf0 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 12c8adf2 lea ecx, [esi + eax + 4] */
  ECX = ((uint32_t)(ESI + EAX*1 + 0x4));
  /* 12c8adf6 not ebx */
  EBX = (~(EBX));
  /* 12c8adf8 and dword ptr [eax + edx*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 12c8adff dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 12c8ae01 jne 0x12c8ae09 */
  if (!C.zf) goto L_12c8ae09;
  /* 12c8ae03 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8ae06 and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_12c8ae09:;
  /* 12c8ae09 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
L_12c8ae0c:;
  /* 12c8ae0c mov ecx, dword ptr [edi + 8] */
  ECX = (r32((uint32_t)(EDI + 0x8)));
  /* 12c8ae0f mov esi, dword ptr [edi + 4] */
  ESI = (r32((uint32_t)(EDI + 0x4)));
  /* 12c8ae12 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 12c8ae15 mov ecx, dword ptr [edi + 4] */
  ECX = (r32((uint32_t)(EDI + 0x4)));
  /* 12c8ae18 mov esi, dword ptr [edi + 8] */
  ESI = (r32((uint32_t)(EDI + 0x8)));
  /* 12c8ae1b mov dword ptr [ecx + 8], esi */
  w32((uint32_t)(ECX + 0x8), (ESI));
  /* 12c8ae1e mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 12c8ae21 add esi, dword ptr [ebp - 4] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8ae24 mov dword ptr [ebp + 0x10], esi */
  w32((uint32_t)(EBP + 0x10), (ESI));
  /* 12c8ae27 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 12c8ae2a dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 12c8ae2b cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8ae2e jbe 0x12c8ae33 */
  if ((C.cf||C.zf)) goto L_12c8ae33;
  /* 12c8ae30 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12c8ae32 pop esi */
  ESI = (pop32());
L_12c8ae33:;
  /* 12c8ae33 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c8ae36 mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 12c8ae3a lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 12c8ae3d mov dword ptr [ebx + 4], edi */
  w32((uint32_t)(EBX + 0x4), (EDI));
  /* 12c8ae40 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 12c8ae43 mov dword ptr [ecx + 4], ebx */
  w32((uint32_t)(ECX + 0x4), (EBX));
  /* 12c8ae46 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 12c8ae49 mov dword ptr [ecx + 8], ebx */
  w32((uint32_t)(ECX + 0x8), (EBX));
  /* 12c8ae4c mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 12c8ae4f cmp ecx, dword ptr [ebx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8ae52 jne 0x12c8aeb0 */
  if (!C.zf) goto L_12c8aeb0;
  /* 12c8ae54 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 12c8ae58 cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8ae5b mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 12c8ae5e inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 12c8ae60 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 12c8ae64 jae 0x12c8ae87 */
  if (!C.cf) goto L_12c8ae87;
  /* 12c8ae66 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8ae6a jne 0x12c8ae7a */
  if (!C.zf) goto L_12c8ae7a;
  /* 12c8ae6c mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 12c8ae71 mov ecx, esi */
  ECX = (ESI);
  /* 12c8ae73 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 12c8ae75 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8ae78 or dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_12c8ae7a:;
  /* 12c8ae7a lea eax, [eax + edx*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0x44));
  /* 12c8ae7e mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12c8ae83 mov ecx, esi */
  ECX = (ESI);
  /* 12c8ae85 jmp 0x12c8aeac */
  goto L_12c8aeac;
L_12c8ae87:;
  /* 12c8ae87 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8ae8b jne 0x12c8ae9d */
  if (!C.zf) goto L_12c8ae9d;
  /* 12c8ae8d lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 12c8ae90 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 12c8ae95 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 12c8ae97 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8ae9a or dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_12c8ae9d:;
  /* 12c8ae9d lea eax, [eax + edx*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0xc4));
  /* 12c8aea4 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 12c8aea7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
L_12c8aeac:;
  /* 12c8aeac shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c8aeae or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_12c8aeb0:;
  /* 12c8aeb0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c8aeb3 mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 12c8aeb5 mov dword ptr [eax + ebx - 4], eax */
  w32((uint32_t)(EAX + EBX*1 + -0x4), (EAX));
L_12c8aeb9:;
  /* 12c8aeb9 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c8aebb pop eax */
  EAX = (pop32());
L_12c8aebc:;
  /* 12c8aebc pop edi */
  EDI = (pop32());
  /* 12c8aebd pop esi */
  ESI = (pop32());
  /* 12c8aebe pop ebx */
  EBX = (pop32());
  /* 12c8aebf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c8aec0 ret  */
  ESPCHK(0x12c8abcbu, _esp0);
  ESP += 4; return;
}

/* FUN_1000aec1 @ 0x12c8aec1 (324 bytes, 102 insns) */
void f_12c8aec1(void) {
  FTRACE(0x12c8aec1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8aec1 cmp dword ptr [0x12c90dd8], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12c90dd8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8aec8 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8aec9 push ebp */
  push32((uint32_t)(EBP));
  /* 12c8aeca push esi */
  push32((uint32_t)(ESI));
  /* 12c8aecb push edi */
  push32((uint32_t)(EDI));
  /* 12c8aecc jne 0x12c8aed5 */
  if (!C.zf) goto L_12c8aed5;
  /* 12c8aece mov esi, 0x12c90dc8 */
  ESI = (0x12c90dc8u);
  /* 12c8aed3 jmp 0x12c8aef2 */
  goto L_12c8aef2;
L_12c8aed5:;
  /* 12c8aed5 push 0x2020 */
  push32((uint32_t)(0x2020u));
  /* 12c8aeda push 0 */
  push32((uint32_t)(0x0u));
  /* 12c8aedc push dword ptr [0x12caca04] */
  push32((uint32_t)(r32((uint32_t)(0x12caca04))));
  /* 12c8aee2 call dword ptr [0x12c8e060] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e060))), 0x12c8aee8u);
  /* 12c8aee8 mov esi, eax */
  ESI = (EAX);
  /* 12c8aeea test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 12c8aeec je 0x12c8affe */
  if (C.zf) goto L_12c8affe;
L_12c8aef2:;
  /* 12c8aef2 mov ebp, dword ptr [0x12c8e0e4] */
  EBP = (r32((uint32_t)(0x12c8e0e4)));
  /* 12c8aef8 push 4 */
  push32((uint32_t)(0x4u));
  /* 12c8aefa push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 12c8aeff push 0x400000 */
  push32((uint32_t)(0x400000u));
  /* 12c8af04 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c8af06 call ebp */
  call_ind((uint32_t)(EBP), 0x12c8af08u);
  /* 12c8af08 mov edi, eax */
  EDI = (EAX);
  /* 12c8af0a test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 12c8af0c je 0x12c8afe7 */
  if (C.zf) goto L_12c8afe7;
  /* 12c8af12 push 4 */
  push32((uint32_t)(0x4u));
  /* 12c8af14 mov ebx, 0x10000 */
  EBX = (0x10000u);
  /* 12c8af19 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12c8af1e push ebx */
  push32((uint32_t)(EBX));
  /* 12c8af1f push edi */
  push32((uint32_t)(EDI));
  /* 12c8af20 call ebp */
  call_ind((uint32_t)(EBP), 0x12c8af22u);
  /* 12c8af22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8af24 je 0x12c8afd9 */
  if (C.zf) goto L_12c8afd9;
  /* 12c8af2a mov eax, 0x12c90dc8 */
  EAX = (0x12c90dc8u);
  /* 12c8af2f cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8af31 jne 0x12c8af51 */
  if (!C.zf) goto L_12c8af51;
  /* 12c8af33 cmp dword ptr [0x12c90dc8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c90dc8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8af3a jne 0x12c8af41 */
  if (!C.zf) goto L_12c8af41;
  /* 12c8af3c mov dword ptr [0x12c90dc8], eax */
  w32((uint32_t)(0x12c90dc8), (EAX));
L_12c8af41:;
  /* 12c8af41 cmp dword ptr [0x12c90dcc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c90dcc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8af48 jne 0x12c8af66 */
  if (!C.zf) goto L_12c8af66;
  /* 12c8af4a mov dword ptr [0x12c90dcc], eax */
  w32((uint32_t)(0x12c90dcc), (EAX));
  /* 12c8af4f jmp 0x12c8af66 */
  goto L_12c8af66;
L_12c8af51:;
  /* 12c8af51 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 12c8af53 mov eax, dword ptr [0x12c90dcc] */
  EAX = (r32((uint32_t)(0x12c90dcc)));
  /* 12c8af58 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 12c8af5b mov dword ptr [0x12c90dcc], esi */
  w32((uint32_t)(0x12c90dcc), (ESI));
  /* 12c8af61 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 12c8af64 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_12c8af66:;
  /* 12c8af66 lea eax, [edi + 0x400000] */
  EAX = ((uint32_t)(EDI + 0x400000));
  /* 12c8af6c lea ecx, [esi + 0x98] */
  ECX = ((uint32_t)(ESI + 0x98));
  /* 12c8af72 mov dword ptr [esi + 0x14], eax */
  w32((uint32_t)(ESI + 0x14), (EAX));
  /* 12c8af75 lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 12c8af78 mov dword ptr [esi + 0xc], ecx */
  w32((uint32_t)(ESI + 0xc), (ECX));
  /* 12c8af7b mov dword ptr [esi + 0x10], edi */
  w32((uint32_t)(ESI + 0x10), (EDI));
  /* 12c8af7e mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 12c8af81 xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 12c8af83 mov ecx, 0xf1 */
  ECX = (0xf1u);
L_12c8af88:;
  /* 12c8af88 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c8af8a cmp ebp, 0x10 */
  { uint32_t _a=(EBP),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8af8d setge dl */
  DL = (((C.sf==C.of)) ? 1u : 0u);
  /* 12c8af90 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 12c8af91 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12c8af93 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 12c8af94 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 12c8af95 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12c8af97 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12c8af9a add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8af9d cmp ebp, 0x400 */
  { uint32_t _a=(EBP),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8afa3 jl 0x12c8af88 */
  if ((C.sf!=C.of)) goto L_12c8af88;
  /* 12c8afa5 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8afa6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c8afa8 push edi */
  push32((uint32_t)(EDI));
  /* 12c8afa9 call 0x12c8c250 */
  push32(0x12c8afaeu); f_12c8c250();
  /* 12c8afae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c8afb1:;
  /* 12c8afb1 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 12c8afb4 add eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8afb6 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8afb8 jae 0x12c8afd5 */
  if (!C.cf) goto L_12c8afd5;
  /* 12c8afba or byte ptr [edi + 0xf8], 0xff */
  { uint32_t _r=(r8((uint32_t)(EDI + 0xf8)))|(0xffu); w8((uint32_t)(EDI + 0xf8), (_r)); fl_logic(_r,8); }
  /* 12c8afc1 lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 12c8afc4 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 12c8afc6 mov dword ptr [edi + 4], 0xf0 */
  w32((uint32_t)(EDI + 0x4), (0xf0u));
  /* 12c8afcd add edi, 0x1000 */
  { uint32_t _a=(EDI),_b=(0x1000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8afd3 jmp 0x12c8afb1 */
  goto L_12c8afb1;
L_12c8afd5:;
  /* 12c8afd5 mov eax, esi */
  EAX = (ESI);
  /* 12c8afd7 jmp 0x12c8b000 */
  goto L_12c8b000;
L_12c8afd9:;
  /* 12c8afd9 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12c8afde push 0 */
  push32((uint32_t)(0x0u));
  /* 12c8afe0 push edi */
  push32((uint32_t)(EDI));
  /* 12c8afe1 call dword ptr [0x12c8e0e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e0e0))), 0x12c8afe7u);
L_12c8afe7:;
  /* 12c8afe7 cmp esi, 0x12c90dc8 */
  { uint32_t _a=(ESI),_b=(0x12c90dc8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8afed je 0x12c8affe */
  if (C.zf) goto L_12c8affe;
  /* 12c8afef push esi */
  push32((uint32_t)(ESI));
  /* 12c8aff0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c8aff2 push dword ptr [0x12caca04] */
  push32((uint32_t)(r32((uint32_t)(0x12caca04))));
  /* 12c8aff8 call dword ptr [0x12c8e04c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e04c))), 0x12c8affeu);
L_12c8affe:;
  /* 12c8affe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c8b000:;
  /* 12c8b000 pop edi */
  EDI = (pop32());
  /* 12c8b001 pop esi */
  ESI = (pop32());
  /* 12c8b002 pop ebp */
  EBP = (pop32());
  /* 12c8b003 pop ebx */
  EBX = (pop32());
  /* 12c8b004 ret  */
  ESPCHK(0x12c8aec1u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b005 @ 0x12c8b005 (86 bytes, 27 insns) */
void f_12c8b005(void) {
  FTRACE(0x12c8b005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8b005 push esi */
  push32((uint32_t)(ESI));
  /* 12c8b006 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 12c8b00a push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12c8b00f push 0 */
  push32((uint32_t)(0x0u));
  /* 12c8b011 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 12c8b014 call dword ptr [0x12c8e0e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e0e0))), 0x12c8b01au);
  /* 12c8b01a cmp dword ptr [0x12c92de8], esi */
  { uint32_t _a=(r32((uint32_t)(0x12c92de8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b020 jne 0x12c8b02a */
  if (!C.zf) goto L_12c8b02a;
  /* 12c8b022 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 12c8b025 mov dword ptr [0x12c92de8], eax */
  w32((uint32_t)(0x12c92de8), (EAX));
L_12c8b02a:;
  /* 12c8b02a cmp esi, 0x12c90dc8 */
  { uint32_t _a=(ESI),_b=(0x12c90dc8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b030 je 0x12c8b052 */
  if (C.zf) goto L_12c8b052;
  /* 12c8b032 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 12c8b035 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 12c8b037 push esi */
  push32((uint32_t)(ESI));
  /* 12c8b038 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c8b03a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12c8b03c mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 12c8b03e mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 12c8b041 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12c8b044 push dword ptr [0x12caca04] */
  push32((uint32_t)(r32((uint32_t)(0x12caca04))));
  /* 12c8b04a call dword ptr [0x12c8e04c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e04c))), 0x12c8b050u);
  /* 12c8b050 pop esi */
  ESI = (pop32());
  /* 12c8b051 ret  */
  ESPCHK(0x12c8b005u, _esp0);
  ESP += 4; return;
L_12c8b052:;
  /* 12c8b052 or dword ptr [0x12c90dd8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x12c90dd8)))|(0xffffffffu); w32((uint32_t)(0x12c90dd8), (_r)); fl_logic(_r,32); }
  /* 12c8b059 pop esi */
  ESI = (pop32());
  /* 12c8b05a ret  */
  ESPCHK(0x12c8b005u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b05b @ 0x12c8b05b (194 bytes, 66 insns) */
void f_12c8b05b(void) {
  FTRACE(0x12c8b05bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8b05b push ebp */
  push32((uint32_t)(EBP));
  /* 12c8b05c mov ebp, esp */
  EBP = (ESP);
  /* 12c8b05e push ecx */
  push32((uint32_t)(ECX));
  /* 12c8b05f push ebx */
  push32((uint32_t)(EBX));
  /* 12c8b060 push esi */
  push32((uint32_t)(ESI));
  /* 12c8b061 mov esi, dword ptr [0x12c90dcc] */
  ESI = (r32((uint32_t)(0x12c90dcc)));
  /* 12c8b067 push edi */
  push32((uint32_t)(EDI));
L_12c8b068:;
  /* 12c8b068 cmp dword ptr [esi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b06c je 0x12c8b106 */
  if (C.zf) goto L_12c8b106;
  /* 12c8b072 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c8b076 lea edi, [esi + 0x2010] */
  EDI = ((uint32_t)(ESI + 0x2010));
  /* 12c8b07c mov ebx, 0x3ff000 */
  EBX = (0x3ff000u);
L_12c8b081:;
  /* 12c8b081 cmp dword ptr [edi], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b087 jne 0x12c8b0c2 */
  if (!C.zf) goto L_12c8b0c2;
  /* 12c8b089 mov eax, ebx */
  EAX = (EBX);
  /* 12c8b08b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12c8b090 add eax, dword ptr [esi + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8b093 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12c8b098 push eax */
  push32((uint32_t)(EAX));
  /* 12c8b099 call dword ptr [0x12c8e0e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e0e0))), 0x12c8b09fu);
  /* 12c8b09f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8b0a1 je 0x12c8b0c2 */
  if (C.zf) goto L_12c8b0c2;
  /* 12c8b0a3 or dword ptr [edi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(0xffffffffu); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
  /* 12c8b0a6 dec dword ptr [0x12cac604] */
  { uint32_t _r=(r32((uint32_t)(0x12cac604)))-1; w32((uint32_t)(0x12cac604), (_r)); fl_dec(_r,32); }
  /* 12c8b0ac mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 12c8b0af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8b0b1 je 0x12c8b0b7 */
  if (C.zf) goto L_12c8b0b7;
  /* 12c8b0b3 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b0b5 jbe 0x12c8b0ba */
  if ((C.cf||C.zf)) goto L_12c8b0ba;
L_12c8b0b7:;
  /* 12c8b0b7 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
L_12c8b0ba:;
  /* 12c8b0ba inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 12c8b0bd dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 12c8b0c0 je 0x12c8b0cf */
  if (C.zf) goto L_12c8b0cf;
L_12c8b0c2:;
  /* 12c8b0c2 sub ebx, 0x1000 */
  { uint32_t _a=(EBX),_b=(0x1000u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8b0c8 sub edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8b0cb test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 12c8b0cd jge 0x12c8b081 */
  if ((C.sf==C.of)) goto L_12c8b081;
L_12c8b0cf:;
  /* 12c8b0cf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b0d3 mov ecx, esi */
  ECX = (ESI);
  /* 12c8b0d5 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 12c8b0d8 je 0x12c8b106 */
  if (C.zf) goto L_12c8b106;
  /* 12c8b0da cmp dword ptr [ecx + 0x18], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b0de jne 0x12c8b106 */
  if (!C.zf) goto L_12c8b106;
  /* 12c8b0e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c8b0e2 lea eax, [ecx + 0x20] */
  EAX = ((uint32_t)(ECX + 0x20));
  /* 12c8b0e5 pop edx */
  EDX = (pop32());
L_12c8b0e6:;
  /* 12c8b0e6 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b0e9 jne 0x12c8b0f7 */
  if (!C.zf) goto L_12c8b0f7;
  /* 12c8b0eb inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12c8b0ec add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8b0ef cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b0f5 jl 0x12c8b0e6 */
  if ((C.sf!=C.of)) goto L_12c8b0e6;
L_12c8b0f7:;
  /* 12c8b0f7 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b0fd jne 0x12c8b106 */
  if (!C.zf) goto L_12c8b106;
  /* 12c8b0ff push ecx */
  push32((uint32_t)(ECX));
  /* 12c8b100 call 0x12c8b005 */
  push32(0x12c8b105u); f_12c8b005();
  /* 12c8b105 pop ecx */
  ECX = (pop32());
L_12c8b106:;
  /* 12c8b106 cmp esi, dword ptr [0x12c90dcc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x12c90dcc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b10c je 0x12c8b118 */
  if (C.zf) goto L_12c8b118;
  /* 12c8b10e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b112 jg 0x12c8b068 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c8b068;
L_12c8b118:;
  /* 12c8b118 pop edi */
  EDI = (pop32());
  /* 12c8b119 pop esi */
  ESI = (pop32());
  /* 12c8b11a pop ebx */
  EBX = (pop32());
  /* 12c8b11b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c8b11c ret  */
  ESPCHK(0x12c8b05bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000b11d @ 0x12c8b11d (87 bytes, 34 insns) */
void f_12c8b11d(void) {
  FTRACE(0x12c8b11du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8b11d mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c8b121 mov edx, 0x12c90dc8 */
  EDX = (0x12c90dc8u);
  /* 12c8b126 push esi */
  push32((uint32_t)(ESI));
  /* 12c8b127 mov ecx, edx */
  ECX = (EDX);
L_12c8b129:;
  /* 12c8b129 cmp eax, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b12c jbe 0x12c8b133 */
  if ((C.cf||C.zf)) goto L_12c8b133;
  /* 12c8b12e cmp eax, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b131 jb 0x12c8b13b */
  if (C.cf) goto L_12c8b13b;
L_12c8b133:;
  /* 12c8b133 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 12c8b135 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b137 je 0x12c8b170 */
  if (C.zf) goto L_12c8b170;
  /* 12c8b139 jmp 0x12c8b129 */
  goto L_12c8b129;
L_12c8b13b:;
  /* 12c8b13b test al, 0xf */
  { uint32_t _r=(AL)&(0xfu); fl_logic(_r,8); }
  /* 12c8b13d jne 0x12c8b170 */
  if (!C.zf) goto L_12c8b170;
  /* 12c8b13f mov esi, eax */
  ESI = (EAX);
  /* 12c8b141 mov edx, 0x100 */
  EDX = (0x100u);
  /* 12c8b146 and esi, 0xfff */
  { uint32_t _r=(ESI)&(0xfffu); ESI = (_r); fl_logic(_r,32); }
  /* 12c8b14c cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b14e jb 0x12c8b170 */
  if (C.cf) goto L_12c8b170;
  /* 12c8b150 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 12c8b154 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 12c8b156 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 12c8b15a mov ecx, eax */
  ECX = (EAX);
  /* 12c8b15c and cx, 0xf000 */
  { uint32_t _r=(CX)&(0xf000u); CX = (_r); fl_logic(_r,16); }
  /* 12c8b161 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8b163 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 12c8b165 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8b167 pop esi */
  ESI = (pop32());
  /* 12c8b168 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12c8b16b lea eax, [eax + ecx + 8] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x8));
  /* 12c8b16f ret  */
  ESPCHK(0x12c8b11du, _esp0);
  ESP += 4; return;
L_12c8b170:;
  /* 12c8b170 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c8b172 pop esi */
  ESI = (pop32());
  /* 12c8b173 ret  */
  ESPCHK(0x12c8b11du, _esp0);
  ESP += 4; return;
}

/* FUN_1000b174 @ 0x12c8b174 (69 bytes, 19 insns) */
void f_12c8b174(void) {
  FTRACE(0x12c8b174u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8b174 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c8b178 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c8b17c sub ecx, dword ptr [eax + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8b17f sar ecx, 0xc */
  ECX = (sh_sar((uint32_t)(ECX), (0xcu)&0x1f, 32));
  /* 12c8b182 lea eax, [eax + ecx*8 + 0x18] */
  EAX = ((uint32_t)(EAX + ECX*8 + 0x18));
  /* 12c8b186 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12c8b18a movzx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 12c8b18d add dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 12c8b18f and byte ptr [ecx], 0 */
  { uint32_t _r=(r8((uint32_t)(ECX)))&(0x0u); w8((uint32_t)(ECX), (_r)); fl_logic(_r,8); }
  /* 12c8b192 cmp dword ptr [eax], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b198 mov dword ptr [eax + 4], 0xf1 */
  w32((uint32_t)(EAX + 0x4), (0xf1u));
  /* 12c8b19f jne 0x12c8b1b8 */
  if (!C.zf) goto L_12c8b1b8;
  /* 12c8b1a1 inc dword ptr [0x12cac604] */
  { uint32_t _r=(r32((uint32_t)(0x12cac604)))+1; w32((uint32_t)(0x12cac604), (_r)); fl_inc(_r,32); }
  /* 12c8b1a7 cmp dword ptr [0x12cac604], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x12cac604))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b1ae jne 0x12c8b1b8 */
  if (!C.zf) goto L_12c8b1b8;
  /* 12c8b1b0 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12c8b1b2 call 0x12c8b05b */
  push32(0x12c8b1b7u); f_12c8b05b();
  /* 12c8b1b7 pop ecx */
  ECX = (pop32());
L_12c8b1b8:;
  /* 12c8b1b8 ret  */
  ESPCHK(0x12c8b174u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b1b9 @ 0x12c8b1b9 (520 bytes, 180 insns) */
void f_12c8b1b9(void) {
  FTRACE(0x12c8b1b9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8b1b9 push ebp */
  push32((uint32_t)(EBP));
  /* 12c8b1ba mov ebp, esp */
  EBP = (ESP);
  /* 12c8b1bc push ecx */
  push32((uint32_t)(ECX));
  /* 12c8b1bd push ecx */
  push32((uint32_t)(ECX));
  /* 12c8b1be push ebx */
  push32((uint32_t)(EBX));
  /* 12c8b1bf push esi */
  push32((uint32_t)(ESI));
  /* 12c8b1c0 mov esi, dword ptr [0x12c92de8] */
  ESI = (r32((uint32_t)(0x12c92de8)));
  /* 12c8b1c6 push edi */
  push32((uint32_t)(EDI));
L_12c8b1c7:;
  /* 12c8b1c7 mov edx, dword ptr [esi + 0x10] */
  EDX = (r32((uint32_t)(ESI + 0x10)));
  /* 12c8b1ca cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b1cd je 0x12c8b272 */
  if (C.zf) goto L_12c8b272;
  /* 12c8b1d3 mov edi, dword ptr [esi + 8] */
  EDI = (r32((uint32_t)(ESI + 0x8)));
  /* 12c8b1d6 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 12c8b1dc mov eax, edi */
  EAX = (EDI);
  /* 12c8b1de sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8b1e0 sub eax, 0x18 */
  { uint32_t _a=(EAX),_b=(0x18u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8b1e3 sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 12c8b1e6 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 12c8b1e9 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8b1eb cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b1ed mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c8b1f0 jae 0x12c8b22c */
  if (!C.cf) goto L_12c8b22c;
L_12c8b1f2:;
  /* 12c8b1f2 mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 12c8b1f4 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8b1f7 cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b1f9 jl 0x12c8b215 */
  if ((C.sf!=C.of)) goto L_12c8b215;
  /* 12c8b1fb cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b1fe jbe 0x12c8b215 */
  if ((C.cf||C.zf)) goto L_12c8b215;
  /* 12c8b200 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8b201 push ecx */
  push32((uint32_t)(ECX));
  /* 12c8b202 push eax */
  push32((uint32_t)(EAX));
  /* 12c8b203 call 0x12c8b3c1 */
  push32(0x12c8b208u); f_12c8b3c1();
  /* 12c8b208 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8b20b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8b20d jne 0x12c8b284 */
  if (!C.zf) goto L_12c8b284;
  /* 12c8b20f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c8b212 mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_12c8b215:;
  /* 12c8b215 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8b218 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 12c8b21e add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8b223 cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b225 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c8b228 jb 0x12c8b1f2 */
  if (C.cf) goto L_12c8b1f2;
  /* 12c8b22a jmp 0x12c8b22f */
  goto L_12c8b22f;
L_12c8b22c:;
  /* 12c8b22c mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_12c8b22f:;
  /* 12c8b22f mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 12c8b232 mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 12c8b235 lea edi, [esi + 0x18] */
  EDI = ((uint32_t)(ESI + 0x18));
  /* 12c8b238 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c8b23b cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b23d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c8b240 jae 0x12c8b275 */
  if (!C.cf) goto L_12c8b275;
L_12c8b242:;
  /* 12c8b242 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 12c8b244 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b246 jl 0x12c8b261 */
  if ((C.sf!=C.of)) goto L_12c8b261;
  /* 12c8b248 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b24b jbe 0x12c8b261 */
  if ((C.cf||C.zf)) goto L_12c8b261;
  /* 12c8b24d push ebx */
  push32((uint32_t)(EBX));
  /* 12c8b24e push eax */
  push32((uint32_t)(EAX));
  /* 12c8b24f push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 12c8b252 call 0x12c8b3c1 */
  push32(0x12c8b257u); f_12c8b3c1();
  /* 12c8b257 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8b25a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8b25c jne 0x12c8b284 */
  if (!C.zf) goto L_12c8b284;
  /* 12c8b25e mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_12c8b261:;
  /* 12c8b261 add dword ptr [ebp - 4], 0x1000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1000u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 12c8b268 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8b26b cmp edi, dword ptr [ebp - 8] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b26e jb 0x12c8b242 */
  if (C.cf) goto L_12c8b242;
  /* 12c8b270 jmp 0x12c8b275 */
  goto L_12c8b275;
L_12c8b272:;
  /* 12c8b272 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_12c8b275:;
  /* 12c8b275 mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 12c8b277 cmp esi, dword ptr [0x12c92de8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x12c92de8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b27d je 0x12c8b294 */
  if (C.zf) goto L_12c8b294;
  /* 12c8b27f jmp 0x12c8b1c7 */
  goto L_12c8b1c7;
L_12c8b284:;
  /* 12c8b284 mov dword ptr [0x12c92de8], esi */
  w32((uint32_t)(0x12c92de8), (ESI));
  /* 12c8b28a sub dword ptr [edi], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(EBX),_r=_a-_b; w32((uint32_t)(EDI), (_r)); fl_sub(_a,_b,_r,32); }
  /* 12c8b28c mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
  /* 12c8b28f jmp 0x12c8b3bc */
  goto L_12c8b3bc;
L_12c8b294:;
  /* 12c8b294 mov eax, 0x12c90dc8 */
  EAX = (0x12c90dc8u);
  /* 12c8b299 mov edi, eax */
  EDI = (EAX);
L_12c8b29b:;
  /* 12c8b29b cmp dword ptr [edi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b29f je 0x12c8b2a7 */
  if (C.zf) goto L_12c8b2a7;
  /* 12c8b2a1 cmp dword ptr [edi + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b2a5 jne 0x12c8b2b3 */
  if (!C.zf) goto L_12c8b2b3;
L_12c8b2a7:;
  /* 12c8b2a7 mov edi, dword ptr [edi] */
  EDI = (r32((uint32_t)(EDI)));
  /* 12c8b2a9 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b2ab je 0x12c8b388 */
  if (C.zf) goto L_12c8b388;
  /* 12c8b2b1 jmp 0x12c8b29b */
  goto L_12c8b29b;
L_12c8b2b3:;
  /* 12c8b2b3 mov ebx, dword ptr [edi + 0xc] */
  EBX = (r32((uint32_t)(EDI + 0xc)));
  /* 12c8b2b6 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c8b2ba mov esi, ebx */
  ESI = (EBX);
  /* 12c8b2bc mov eax, ebx */
  EAX = (EBX);
  /* 12c8b2be sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8b2c0 sub esi, 0x18 */
  { uint32_t _a=(ESI),_b=(0x18u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8b2c3 sar esi, 3 */
  ESI = (sh_sar((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 12c8b2c6 shl esi, 0xc */
  ESI = (sh_shl((uint32_t)(ESI), (0xcu)&0x1f, 32));
  /* 12c8b2c9 add esi, dword ptr [edi + 0x10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI + 0x10))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8b2cc cmp dword ptr [ebx], -1 */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b2cf jne 0x12c8b2e2 */
  if (!C.zf) goto L_12c8b2e2;
L_12c8b2d1:;
  /* 12c8b2d1 cmp dword ptr [ebp - 4], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b2d5 jge 0x12c8b2e2 */
  if ((C.sf==C.of)) goto L_12c8b2e2;
  /* 12c8b2d7 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8b2da inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 12c8b2dd cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b2e0 je 0x12c8b2d1 */
  if (C.zf) goto L_12c8b2d1;
L_12c8b2e2:;
  /* 12c8b2e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c8b2e5 push 4 */
  push32((uint32_t)(0x4u));
  /* 12c8b2e7 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 12c8b2ea push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12c8b2ef push eax */
  push32((uint32_t)(EAX));
  /* 12c8b2f0 push esi */
  push32((uint32_t)(ESI));
  /* 12c8b2f1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c8b2f4 call dword ptr [0x12c8e0e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e0e4))), 0x12c8b2fau);
  /* 12c8b2fa cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b2fc jne 0x12c8b3ba */
  if (!C.zf) goto L_12c8b3ba;
  /* 12c8b302 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c8b304 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 12c8b307 push esi */
  push32((uint32_t)(ESI));
  /* 12c8b308 call 0x12c8c250 */
  push32(0x12c8b30du); f_12c8c250();
  /* 12c8b30d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c8b310 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8b313 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c8b315 mov ecx, ebx */
  ECX = (EBX);
  /* 12c8b317 jle 0x12c8b349 */
  if ((C.zf||C.sf!=C.of)) goto L_12c8b349;
  /* 12c8b319 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 12c8b31c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12c8b31f:;
  /* 12c8b31f or byte ptr [eax + 0xf4], 0xff */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xf4)))|(0xffu); w8((uint32_t)(EAX + 0xf4), (_r)); fl_logic(_r,8); }
  /* 12c8b326 lea edx, [eax + 4] */
  EDX = ((uint32_t)(EAX + 0x4));
  /* 12c8b329 mov dword ptr [eax - 4], edx */
  w32((uint32_t)(EAX + -0x4), (EDX));
  /* 12c8b32c mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 12c8b331 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12c8b333 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12c8b335 mov dword ptr [ecx + 4], 0xf1 */
  w32((uint32_t)(ECX + 0x4), (0xf1u));
  /* 12c8b33c add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8b341 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8b344 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 12c8b347 jne 0x12c8b31f */
  if (!C.zf) goto L_12c8b31f;
L_12c8b349:;
  /* 12c8b349 mov dword ptr [0x12c92de8], edi */
  w32((uint32_t)(0x12c92de8), (EDI));
  /* 12c8b34f lea eax, [edi + 0x2018] */
  EAX = ((uint32_t)(EDI + 0x2018));
L_12c8b355:;
  /* 12c8b355 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b357 jae 0x12c8b365 */
  if (!C.cf) goto L_12c8b365;
  /* 12c8b359 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b35c je 0x12c8b363 */
  if (C.zf) goto L_12c8b363;
  /* 12c8b35e add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8b361 jmp 0x12c8b355 */
  goto L_12c8b355;
L_12c8b363:;
  /* 12c8b363 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_12c8b365:;
  /* 12c8b365 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8b367 and eax, ecx */
  { uint32_t _r=(EAX)&(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 12c8b369 mov dword ptr [edi + 0xc], eax */
  w32((uint32_t)(EDI + 0xc), (EAX));
  /* 12c8b36c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8b36f mov byte ptr [esi + 8], al */
  w8((uint32_t)(ESI + 0x8), (AL));
  /* 12c8b372 mov dword ptr [edi + 8], ebx */
  w32((uint32_t)(EDI + 0x8), (EBX));
  /* 12c8b375 sub dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 12c8b377 sub dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; w32((uint32_t)(ESI + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 12c8b37a lea ecx, [esi + eax + 8] */
  ECX = ((uint32_t)(ESI + EAX*1 + 0x8));
  /* 12c8b37e lea eax, [esi + 0x100] */
  EAX = ((uint32_t)(ESI + 0x100));
  /* 12c8b384 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 12c8b386 jmp 0x12c8b3bc */
  goto L_12c8b3bc;
L_12c8b388:;
  /* 12c8b388 call 0x12c8aec1 */
  push32(0x12c8b38du); f_12c8aec1();
  /* 12c8b38d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8b38f je 0x12c8b3ba */
  if (C.zf) goto L_12c8b3ba;
  /* 12c8b391 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12c8b394 mov byte ptr [ecx + 8], bl */
  w8((uint32_t)(ECX + 0x8), (BL));
  /* 12c8b397 lea edx, [ecx + ebx + 8] */
  EDX = ((uint32_t)(ECX + EBX*1 + 0x8));
  /* 12c8b39b mov dword ptr [0x12c92de8], eax */
  w32((uint32_t)(0x12c92de8), (EAX));
  /* 12c8b3a0 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12c8b3a2 mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 12c8b3a7 sub edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8b3a9 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12c8b3ac movzx edx, bl */
  EDX = ((uint32_t)(BL));
  /* 12c8b3af sub dword ptr [eax + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(EDX),_r=_a-_b; w32((uint32_t)(EAX + 0x18), (_r)); fl_sub(_a,_b,_r,32); }
  /* 12c8b3b2 lea eax, [ecx + 0x100] */
  EAX = ((uint32_t)(ECX + 0x100));
  /* 12c8b3b8 jmp 0x12c8b3bc */
  goto L_12c8b3bc;
L_12c8b3ba:;
  /* 12c8b3ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c8b3bc:;
  /* 12c8b3bc pop edi */
  EDI = (pop32());
  /* 12c8b3bd pop esi */
  ESI = (pop32());
  /* 12c8b3be pop ebx */
  EBX = (pop32());
  /* 12c8b3bf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c8b3c0 ret  */
  ESPCHK(0x12c8b1b9u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b3c1 @ 0x12c8b3c1 (292 bytes, 125 insns) */
void f_12c8b3c1(void) {
  FTRACE(0x12c8b3c1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8b3c1 push ebp */
  push32((uint32_t)(EBP));
  /* 12c8b3c2 mov ebp, esp */
  EBP = (ESP);
  /* 12c8b3c4 push ecx */
  push32((uint32_t)(ECX));
  /* 12c8b3c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8b3c8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c8b3cb push ebx */
  push32((uint32_t)(EBX));
  /* 12c8b3cc push esi */
  push32((uint32_t)(ESI));
  /* 12c8b3cd mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 12c8b3d0 push edi */
  push32((uint32_t)(EDI));
  /* 12c8b3d1 mov edi, dword ptr [ecx] */
  EDI = (r32((uint32_t)(ECX)));
  /* 12c8b3d3 lea ebx, [ecx + 0xf8] */
  EBX = ((uint32_t)(ECX + 0xf8));
  /* 12c8b3d9 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b3db mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 12c8b3de mov eax, edi */
  EAX = (EDI);
  /* 12c8b3e0 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 12c8b3e3 jb 0x12c8b406 */
  if (C.cf) goto L_12c8b406;
  /* 12c8b3e5 lea eax, [edi + edx] */
  EAX = ((uint32_t)(EDI + EDX*1));
  /* 12c8b3e8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 12c8b3ea cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b3ec jae 0x12c8b3f5 */
  if (!C.cf) goto L_12c8b3f5;
  /* 12c8b3ee add dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 12c8b3f0 sub dword ptr [ecx + 4], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(EDX),_r=_a-_b; w32((uint32_t)(ECX + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 12c8b3f3 jmp 0x12c8b3fe */
  goto L_12c8b3fe;
L_12c8b3f5:;
  /* 12c8b3f5 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 12c8b3f9 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 12c8b3fc mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12c8b3fe:;
  /* 12c8b3fe lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 12c8b401 jmp 0x12c8b4d4 */
  goto L_12c8b4d4;
L_12c8b406:;
  /* 12c8b406 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8b408 cmp byte ptr [esi], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8b40b je 0x12c8b40f */
  if (C.zf) goto L_12c8b40f;
  /* 12c8b40d mov eax, esi */
  EAX = (ESI);
L_12c8b40f:;
  /* 12c8b40f lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 12c8b412 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b414 jae 0x12c8b459 */
  if (!C.cf) goto L_12c8b459;
L_12c8b416:;
  /* 12c8b416 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 12c8b418 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 12c8b41a jne 0x12c8b44c */
  if (!C.zf) goto L_12c8b44c;
  /* 12c8b41c push 1 */
  push32((uint32_t)(0x1u));
  /* 12c8b41e lea ebx, [eax + 1] */
  EBX = ((uint32_t)(EAX + 0x1));
  /* 12c8b421 pop esi */
  ESI = (pop32());
L_12c8b422:;
  /* 12c8b422 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8b425 jne 0x12c8b42b */
  if (!C.zf) goto L_12c8b42b;
  /* 12c8b427 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 12c8b428 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c8b429 jmp 0x12c8b422 */
  goto L_12c8b422;
L_12c8b42b:;
  /* 12c8b42b cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b42d jae 0x12c8b47d */
  if (!C.cf) goto L_12c8b47d;
  /* 12c8b42f cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b432 jne 0x12c8b439 */
  if (!C.zf) goto L_12c8b439;
  /* 12c8b434 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 12c8b437 jmp 0x12c8b445 */
  goto L_12c8b445;
L_12c8b439:;
  /* 12c8b439 sub dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 12c8b43c cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b43f jb 0x12c8b4de */
  if (C.cf) goto L_12c8b4de;
L_12c8b445:;
  /* 12c8b445 mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 12c8b448 mov eax, ebx */
  EAX = (EBX);
  /* 12c8b44a jmp 0x12c8b451 */
  goto L_12c8b451;
L_12c8b44c:;
  /* 12c8b44c movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 12c8b44f add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12c8b451:;
  /* 12c8b451 lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 12c8b454 cmp esi, dword ptr [ebp + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b457 jb 0x12c8b416 */
  if (C.cf) goto L_12c8b416;
L_12c8b459:;
  /* 12c8b459 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
L_12c8b45c:;
  /* 12c8b45c cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b45e jae 0x12c8b4de */
  if (!C.cf) goto L_12c8b4de;
  /* 12c8b460 lea eax, [esi + edx] */
  EAX = ((uint32_t)(ESI + EDX*1));
  /* 12c8b463 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b466 jae 0x12c8b4de */
  if (!C.cf) goto L_12c8b4de;
  /* 12c8b468 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c8b46a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12c8b46c jne 0x12c8b4ae */
  if (!C.zf) goto L_12c8b4ae;
  /* 12c8b46e push 1 */
  push32((uint32_t)(0x1u));
  /* 12c8b470 lea ebx, [esi + 1] */
  EBX = ((uint32_t)(ESI + 0x1));
  /* 12c8b473 pop eax */
  EAX = (pop32());
L_12c8b474:;
  /* 12c8b474 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8b477 jne 0x12c8b49e */
  if (!C.zf) goto L_12c8b49e;
  /* 12c8b479 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 12c8b47a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c8b47b jmp 0x12c8b474 */
  goto L_12c8b474;
L_12c8b47d:;
  /* 12c8b47d lea ebx, [eax + edx] */
  EBX = ((uint32_t)(EAX + EDX*1));
  /* 12c8b480 cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b483 jae 0x12c8b48e */
  if (!C.cf) goto L_12c8b48e;
  /* 12c8b485 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8b487 mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 12c8b489 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 12c8b48c jmp 0x12c8b497 */
  goto L_12c8b497;
L_12c8b48e:;
  /* 12c8b48e and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 12c8b492 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
  /* 12c8b495 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_12c8b497:;
  /* 12c8b497 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12c8b499 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8b49c jmp 0x12c8b4d4 */
  goto L_12c8b4d4;
L_12c8b49e:;
  /* 12c8b49e cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b4a0 jae 0x12c8b4b5 */
  if (!C.cf) goto L_12c8b4b5;
  /* 12c8b4a2 sub dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 12c8b4a5 cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b4a8 jb 0x12c8b4de */
  if (C.cf) goto L_12c8b4de;
  /* 12c8b4aa mov esi, ebx */
  ESI = (EBX);
  /* 12c8b4ac jmp 0x12c8b45c */
  goto L_12c8b45c;
L_12c8b4ae:;
  /* 12c8b4ae movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 12c8b4b1 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8b4b3 jmp 0x12c8b45c */
  goto L_12c8b45c;
L_12c8b4b5:;
  /* 12c8b4b5 lea ebx, [esi + edx] */
  EBX = ((uint32_t)(ESI + EDX*1));
  /* 12c8b4b8 cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b4bb jae 0x12c8b4c6 */
  if (!C.cf) goto L_12c8b4c6;
  /* 12c8b4bd sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8b4bf mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 12c8b4c1 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12c8b4c4 jmp 0x12c8b4cf */
  goto L_12c8b4cf;
L_12c8b4c6:;
  /* 12c8b4c6 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 12c8b4ca lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 12c8b4cd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12c8b4cf:;
  /* 12c8b4cf mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 12c8b4d1 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
L_12c8b4d4:;
  /* 12c8b4d4 imul ecx, ecx, 0xf */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xfu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c8b4d7 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12c8b4da sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8b4dc jmp 0x12c8b4e0 */
  goto L_12c8b4e0;
L_12c8b4de:;
  /* 12c8b4de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c8b4e0:;
  /* 12c8b4e0 pop edi */
  EDI = (pop32());
  /* 12c8b4e1 pop esi */
  ESI = (pop32());
  /* 12c8b4e2 pop ebx */
  EBX = (pop32());
  /* 12c8b4e3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c8b4e4 ret  */
  ESPCHK(0x12c8b3c1u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b4e5 @ 0x12c8b4e5 (169 bytes, 69 insns) */
void f_12c8b4e5(void) {
  FTRACE(0x12c8b4e5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8b4e5 push ebp */
  push32((uint32_t)(EBP));
  /* 12c8b4e6 mov ebp, esp */
  EBP = (ESP);
  /* 12c8b4e8 push ecx */
  push32((uint32_t)(ECX));
  /* 12c8b4e9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c8b4ec push ebx */
  push32((uint32_t)(EBX));
  /* 12c8b4ed mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c8b4f0 push esi */
  push32((uint32_t)(ESI));
  /* 12c8b4f1 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 12c8b4f4 push edi */
  push32((uint32_t)(EDI));
  /* 12c8b4f5 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8b4f8 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c8b4fc mov eax, ebx */
  EAX = (EBX);
  /* 12c8b4fe sub eax, dword ptr [edi + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDI + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8b501 sar eax, 0xc */
  EAX = (sh_sar((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 12c8b504 cmp ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b507 lea edi, [edi + eax*8 + 0x18] */
  EDI = ((uint32_t)(EDI + EAX*8 + 0x18));
  /* 12c8b50b jbe 0x12c8b51f */
  if ((C.cf||C.zf)) goto L_12c8b51f;
  /* 12c8b50d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c8b510 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8b512 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12c8b514 add dword ptr [edi], ecx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(ECX),_r=_a+_b; w32((uint32_t)(EDI), (_r)); fl_add(_a,_b,_r,32); }
  /* 12c8b516 mov dword ptr [edi + 4], 0xf1 */
  w32((uint32_t)(EDI + 0x4), (0xf1u));
  /* 12c8b51d jmp 0x12c8b57f */
  goto L_12c8b57f;
L_12c8b51f:;
  /* 12c8b51f jae 0x12c8b586 */
  if (!C.cf) goto L_12c8b586;
  /* 12c8b521 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c8b524 lea esi, [edx + eax] */
  ESI = ((uint32_t)(EDX + EAX*1));
  /* 12c8b527 lea eax, [ebx + 0xf8] */
  EAX = ((uint32_t)(EBX + 0xf8));
  /* 12c8b52d cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b52f jb 0x12c8b586 */
  if (C.cf) goto L_12c8b586;
  /* 12c8b531 lea eax, [ecx + edx] */
  EAX = ((uint32_t)(ECX + EDX*1));
L_12c8b534:;
  /* 12c8b534 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b536 jae 0x12c8b542 */
  if (!C.cf) goto L_12c8b542;
  /* 12c8b538 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8b53b jne 0x12c8b540 */
  if (!C.zf) goto L_12c8b540;
  /* 12c8b53d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c8b53e jmp 0x12c8b534 */
  goto L_12c8b534;
L_12c8b540:;
  /* 12c8b540 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_12c8b542:;
  /* 12c8b542 jne 0x12c8b586 */
  if (!C.zf) goto L_12c8b586;
  /* 12c8b544 mov al, byte ptr [ebp + 0x14] */
  AL = (r8((uint32_t)(EBP + 0x14)));
  /* 12c8b547 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12c8b549 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 12c8b54b cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b54d ja 0x12c8b57a */
  if ((!C.cf&&!C.zf)) goto L_12c8b57a;
  /* 12c8b54f cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b551 jbe 0x12c8b57a */
  if ((C.cf||C.zf)) goto L_12c8b57a;
  /* 12c8b553 lea eax, [ebx + 0xf8] */
  EAX = ((uint32_t)(EBX + 0xf8));
  /* 12c8b559 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b55b jae 0x12c8b571 */
  if (!C.cf) goto L_12c8b571;
  /* 12c8b55d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c8b55f mov dword ptr [ebx], esi */
  w32((uint32_t)(EBX), (ESI));
  /* 12c8b561 cmp byte ptr [esi], al */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8b563 jne 0x12c8b56c */
  if (!C.zf) goto L_12c8b56c;
L_12c8b565:;
  /* 12c8b565 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c8b566 cmp byte ptr [esi + eax], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI + EAX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8b56a je 0x12c8b565 */
  if (C.zf) goto L_12c8b565;
L_12c8b56c:;
  /* 12c8b56c mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 12c8b56f jmp 0x12c8b57a */
  goto L_12c8b57a;
L_12c8b571:;
  /* 12c8b571 and dword ptr [ebx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(0x0u); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 12c8b575 lea eax, [ebx + 8] */
  EAX = ((uint32_t)(EBX + 0x8));
  /* 12c8b578 mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
L_12c8b57a:;
  /* 12c8b57a sub ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8b57d add dword ptr [edi], ecx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(ECX),_r=_a+_b; w32((uint32_t)(EDI), (_r)); fl_add(_a,_b,_r,32); }
L_12c8b57f:;
  /* 12c8b57f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_12c8b586:;
  /* 12c8b586 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c8b589 pop edi */
  EDI = (pop32());
  /* 12c8b58a pop esi */
  ESI = (pop32());
  /* 12c8b58b pop ebx */
  EBX = (pop32());
  /* 12c8b58c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c8b58d ret  */
  ESPCHK(0x12c8b4e5u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b590 @ 0x12c8b590 (7 bytes, 3 insns) */
void f_12c8b590(void) {
  FTRACE(0x12c8b590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8b590 push edi */
  push32((uint32_t)(EDI));
  /* 12c8b591 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 12c8b595 jmp 0x12c8b601 */
  jmp_ind(0x12c8b601u); return;
}

/* FUN_1000b5a0 @ 0x12c8b5a0 (224 bytes, 84 insns) */
void f_12c8b5a0(void) {
  FTRACE(0x12c8b5a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8b5a0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c8b5a4 push edi */
  push32((uint32_t)(EDI));
  /* 12c8b5a5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12c8b5ab je 0x12c8b5bc */
  if (C.zf) goto L_12c8b5bc;
L_12c8b5ad:;
  /* 12c8b5ad mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 12c8b5af inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12c8b5b0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12c8b5b2 je 0x12c8b5ef */
  if (C.zf) goto L_12c8b5ef;
  /* 12c8b5b4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12c8b5ba jne 0x12c8b5ad */
  if (!C.zf) goto L_12c8b5ad;
L_12c8b5bc:;
  /* 12c8b5bc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12c8b5be mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12c8b5c3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8b5c5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c8b5c8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12c8b5ca add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8b5cd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12c8b5d2 je 0x12c8b5bc */
  if (C.zf) goto L_12c8b5bc;
  /* 12c8b5d4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12c8b5d7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12c8b5d9 je 0x12c8b5fe */
  if (C.zf) goto L_12c8b5fe;
  /* 12c8b5db test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12c8b5dd je 0x12c8b5f9 */
  if (C.zf) goto L_12c8b5f9;
  /* 12c8b5df test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 12c8b5e4 je 0x12c8b5f4 */
  if (C.zf) goto L_12c8b5f4;
  /* 12c8b5e6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 12c8b5eb je 0x12c8b5ef */
  if (C.zf) goto L_12c8b5ef;
  /* 12c8b5ed jmp 0x12c8b5bc */
  goto L_12c8b5bc;
L_12c8b5ef:;
  /* 12c8b5ef lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 12c8b5f2 jmp 0x12c8b601 */
  goto L_12c8b601;
L_12c8b5f4:;
  /* 12c8b5f4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 12c8b5f7 jmp 0x12c8b601 */
  goto L_12c8b601;
L_12c8b5f9:;
  /* 12c8b5f9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 12c8b5fc jmp 0x12c8b601 */
  goto L_12c8b601;
L_12c8b5fe:;
  /* 12c8b5fe lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_12c8b601:;
  /* 12c8b601 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12c8b605 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12c8b60b je 0x12c8b626 */
  if (C.zf) goto L_12c8b626;
L_12c8b60d:;
  /* 12c8b60d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12c8b60f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12c8b610 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12c8b612 je 0x12c8b678 */
  if (C.zf) goto L_12c8b678;
  /* 12c8b614 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 12c8b616 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12c8b617 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12c8b61d jne 0x12c8b60d */
  if (!C.zf) goto L_12c8b60d;
  /* 12c8b61f jmp 0x12c8b626 */
  goto L_12c8b626;
L_12c8b621:;
  /* 12c8b621 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12c8b623 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12c8b626:;
  /* 12c8b626 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12c8b62b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12c8b62d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8b62f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c8b632 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12c8b634 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c8b636 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8b639 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12c8b63e je 0x12c8b621 */
  if (C.zf) goto L_12c8b621;
  /* 12c8b640 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12c8b642 je 0x12c8b678 */
  if (C.zf) goto L_12c8b678;
  /* 12c8b644 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12c8b646 je 0x12c8b66f */
  if (C.zf) goto L_12c8b66f;
  /* 12c8b648 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 12c8b64e je 0x12c8b662 */
  if (C.zf) goto L_12c8b662;
  /* 12c8b650 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12c8b656 je 0x12c8b65a */
  if (C.zf) goto L_12c8b65a;
  /* 12c8b658 jmp 0x12c8b621 */
  goto L_12c8b621;
L_12c8b65a:;
  /* 12c8b65a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12c8b65c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c8b660 pop edi */
  EDI = (pop32());
  /* 12c8b661 ret  */
  ESPCHK(0x12c8b5a0u, _esp0);
  ESP += 4; return;
L_12c8b662:;
  /* 12c8b662 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12c8b665 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c8b669 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 12c8b66d pop edi */
  EDI = (pop32());
  /* 12c8b66e ret  */
  ESPCHK(0x12c8b5a0u, _esp0);
  ESP += 4; return;
L_12c8b66f:;
  /* 12c8b66f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12c8b672 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c8b676 pop edi */
  EDI = (pop32());
  /* 12c8b677 ret  */
  ESPCHK(0x12c8b5a0u, _esp0);
  ESP += 4; return;
L_12c8b678:;
  /* 12c8b678 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 12c8b67a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c8b67e pop edi */
  EDI = (pop32());
  /* 12c8b67f ret  */
  ESPCHK(0x12c8b5a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b680 @ 0x12c8b680 (27 bytes, 13 insns) */
void f_12c8b680(void) {
  FTRACE(0x12c8b680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8b680 mov eax, dword ptr [0x12cac608] */
  EAX = (r32((uint32_t)(0x12cac608)));
  /* 12c8b685 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8b687 je 0x12c8b698 */
  if (C.zf) goto L_12c8b698;
  /* 12c8b689 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 12c8b68d call eax */
  call_ind((uint32_t)(EAX), 0x12c8b68fu);
  /* 12c8b68f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8b691 pop ecx */
  ECX = (pop32());
  /* 12c8b692 je 0x12c8b698 */
  if (C.zf) goto L_12c8b698;
  /* 12c8b694 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c8b696 pop eax */
  EAX = (pop32());
  /* 12c8b697 ret  */
  ESPCHK(0x12c8b680u, _esp0);
  ESP += 4; return;
L_12c8b698:;
  /* 12c8b698 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c8b69a ret  */
  ESPCHK(0x12c8b680u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b69b @ 0x12c8b69b (23 bytes, 8 insns) */
void f_12c8b69b(void) {
  FTRACE(0x12c8b69bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8b69b push 0xa */
  push32((uint32_t)(0xau));
  /* 12c8b69d call 0x12c8a227 */
  push32(0x12c8b6a2u); f_12c8a227();
  /* 12c8b6a2 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12c8b6a4 call 0x12c8cb5f */
  push32(0x12c8b6a9u); f_12c8cb5f();
  /* 12c8b6a9 pop ecx */
  ECX = (pop32());
  /* 12c8b6aa pop ecx */
  ECX = (pop32());
  /* 12c8b6ab push 3 */
  push32((uint32_t)(0x3u));
  /* 12c8b6ad call 0x12c86412 */
  push32(0x12c8b6b2u); f_12c86412();
}

/* FUN_1000b6b2 @ 0x12c8b6b2 (289 bytes, 98 insns) */
void f_12c8b6b2(void) {
  FTRACE(0x12c8b6b2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8b6b2 push ebp */
  push32((uint32_t)(EBP));
  /* 12c8b6b3 mov ebp, esp */
  EBP = (ESP);
  /* 12c8b6b5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c8b6b7 push 0x12c8e6a8 */
  push32((uint32_t)(0x12c8e6a8u));
  /* 12c8b6bc push 0x12c86a64 */
  push32((uint32_t)(0x12c86a64u));
  /* 12c8b6c1 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12c8b6c7 push eax */
  push32((uint32_t)(EAX));
  /* 12c8b6c8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12c8b6cf sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8b6d2 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8b6d3 push esi */
  push32((uint32_t)(ESI));
  /* 12c8b6d4 push edi */
  push32((uint32_t)(EDI));
  /* 12c8b6d5 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8b6d8 imul esi, dword ptr [ebp + 0xc] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0xc)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c8b6dc mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 12c8b6df mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 12c8b6e2 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b6e5 ja 0x12c8b6fb */
  if ((!C.cf&&!C.zf)) goto L_12c8b6fb;
  /* 12c8b6e7 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12c8b6e9 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b6eb jne 0x12c8b6f0 */
  if (!C.zf) goto L_12c8b6f0;
  /* 12c8b6ed push 1 */
  push32((uint32_t)(0x1u));
  /* 12c8b6ef pop esi */
  ESI = (pop32());
L_12c8b6f0:;
  /* 12c8b6f0 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8b6f3 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 12c8b6f6 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 12c8b6f9 jmp 0x12c8b6fd */
  goto L_12c8b6fd;
L_12c8b6fb:;
  /* 12c8b6fb xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_12c8b6fd:;
  /* 12c8b6fd mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 12c8b700 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b703 ja 0x12c8b7b1 */
  if ((!C.cf&&!C.zf)) goto L_12c8b7b1;
  /* 12c8b709 mov eax, dword ptr [0x12caca08] */
  EAX = (r32((uint32_t)(0x12caca08)));
  /* 12c8b70e cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b711 jne 0x12c8b754 */
  if (!C.zf) goto L_12c8b754;
  /* 12c8b713 mov edi, dword ptr [ebp - 0x1c] */
  EDI = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c8b716 cmp edi, dword ptr [0x12caca00] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(0x12caca00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b71c ja 0x12c8b79a */
  if ((!C.cf&&!C.zf)) goto L_12c8b79a;
  /* 12c8b71e push 9 */
  push32((uint32_t)(0x9u));
  /* 12c8b720 call 0x12c86c88 */
  push32(0x12c8b725u); f_12c86c88();
  /* 12c8b725 pop ecx */
  ECX = (pop32());
  /* 12c8b726 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 12c8b729 push edi */
  push32((uint32_t)(EDI));
  /* 12c8b72a call 0x12c8a716 */
  push32(0x12c8b72fu); f_12c8a716();
  /* 12c8b72f pop ecx */
  ECX = (pop32());
  /* 12c8b730 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12c8b733 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c8b737 call 0x12c8b74b */
  push32(0x12c8b73cu); f_12c8b74b();
  /* 12c8b73c cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b73f je 0x12c8b79f */
  if (C.zf) goto L_12c8b79f;
  /* 12c8b741 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 12c8b744 jmp 0x12c8b78e */
  goto L_12c8b78e;
  /* 12c8b746 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12c8b748 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12c8b74b push 9 */
  push32((uint32_t)(0x9u));
  /* 12c8b74d call 0x12c86ce9 */
  push32(0x12c8b752u); f_12c86ce9();
  /* 12c8b752 pop ecx */
  ECX = (pop32());
  /* 12c8b753 ret  */
  ESPCHK(0x12c8b6b2u, _esp0);
  ESP += 4; return;
L_12c8b754:;
  /* 12c8b754 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b757 jne 0x12c8b79a */
  if (!C.zf) goto L_12c8b79a;
  /* 12c8b759 cmp esi, dword ptr [0x12c92dec] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x12c92dec))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b75f ja 0x12c8b79a */
  if ((!C.cf&&!C.zf)) goto L_12c8b79a;
  /* 12c8b761 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c8b763 call 0x12c86c88 */
  push32(0x12c8b768u); f_12c86c88();
  /* 12c8b768 pop ecx */
  ECX = (pop32());
  /* 12c8b769 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12c8b770 mov eax, esi */
  EAX = (ESI);
  /* 12c8b772 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12c8b775 push eax */
  push32((uint32_t)(EAX));
  /* 12c8b776 call 0x12c8b1b9 */
  push32(0x12c8b77bu); f_12c8b1b9();
  /* 12c8b77b pop ecx */
  ECX = (pop32());
  /* 12c8b77c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12c8b77f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c8b783 call 0x12c8b7d4 */
  push32(0x12c8b788u); f_12c8b7d4();
  /* 12c8b788 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b78b je 0x12c8b79f */
  if (C.zf) goto L_12c8b79f;
  /* 12c8b78d push esi */
  push32((uint32_t)(ESI));
L_12c8b78e:;
  /* 12c8b78e push ebx */
  push32((uint32_t)(EBX));
  /* 12c8b78f push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 12c8b792 call 0x12c8c250 */
  push32(0x12c8b797u); f_12c8c250();
  /* 12c8b797 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c8b79a:;
  /* 12c8b79a cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b79d jne 0x12c8b7dd */
  if (!C.zf) { jmp_ind(0x12c8b7ddu); return; }
L_12c8b79f:;
  /* 12c8b79f push esi */
  push32((uint32_t)(ESI));
  /* 12c8b7a0 push 8 */
  push32((uint32_t)(0x8u));
  /* 12c8b7a2 push dword ptr [0x12caca04] */
  push32((uint32_t)(r32((uint32_t)(0x12caca04))));
  /* 12c8b7a8 call dword ptr [0x12c8e060] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e060))), 0x12c8b7aeu);
  /* 12c8b7ae mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_12c8b7b1:;
  /* 12c8b7b1 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b7b4 jne 0x12c8b7dd */
  if (!C.zf) { jmp_ind(0x12c8b7ddu); return; }
  /* 12c8b7b6 cmp dword ptr [0x12cac60c], ebx */
  { uint32_t _a=(r32((uint32_t)(0x12cac60c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b7bc je 0x12c8b7dd */
  if (C.zf) { jmp_ind(0x12c8b7ddu); return; }
  /* 12c8b7be push esi */
  push32((uint32_t)(ESI));
  /* 12c8b7bf call 0x12c8b680 */
  push32(0x12c8b7c4u); f_12c8b680();
  /* 12c8b7c4 pop ecx */
  ECX = (pop32());
  /* 12c8b7c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8b7c7 jne 0x12c8b6fd */
  if (!C.zf) goto L_12c8b6fd;
  /* 12c8b7cd jmp 0x12c8b7e0 */
  jmp_ind(0x12c8b7e0u); return;
  /* 12c8b7cf xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
}

/* FUN_1000b74b @ 0x12c8b74b (9 bytes, 4 insns) */
void f_12c8b74b(void) {
  FTRACE(0x12c8b74bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8b74b push 9 */
  push32((uint32_t)(0x9u));
  /* 12c8b74d call 0x12c86ce9 */
  push32(0x12c8b752u); f_12c86ce9();
  /* 12c8b752 pop ecx */
  ECX = (pop32());
  /* 12c8b753 ret  */
  ESPCHK(0x12c8b74bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000b7d4 @ 0x12c8b7d4 (9 bytes, 4 insns) */
void f_12c8b7d4(void) {
  FTRACE(0x12c8b7d4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8b7d4 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c8b7d6 call 0x12c86ce9 */
  push32(0x12c8b7dbu); f_12c86ce9();
  /* 12c8b7db pop ecx */
  ECX = (pop32());
  /* 12c8b7dc ret  */
  ESPCHK(0x12c8b7d4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b870 @ 0x12c8b870 (291 bytes, 103 insns) */
void f_12c8b870(void) {
  FTRACE(0x12c8b870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8b870 push ecx */
  push32((uint32_t)(ECX));
  /* 12c8b871 push ecx */
  push32((uint32_t)(ECX));
  /* 12c8b872 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8b873 push ebp */
  push32((uint32_t)(EBP));
  /* 12c8b874 push esi */
  push32((uint32_t)(ESI));
  /* 12c8b875 push edi */
  push32((uint32_t)(EDI));
  /* 12c8b876 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12c8b878 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 12c8b87b call 0x12c86c88 */
  push32(0x12c8b880u); f_12c86c88();
  /* 12c8b880 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12c8b882 pop ecx */
  ECX = (pop32());
  /* 12c8b883 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
  /* 12c8b887 mov dword ptr [esp + 0x14], ebx */
  w32((uint32_t)(ESP + 0x14), (EBX));
  /* 12c8b88b mov ebp, 0x12caca20 */
  EBP = (0x12caca20u);
L_12c8b890:;
  /* 12c8b890 mov esi, dword ptr [ebp] */
  ESI = (r32((uint32_t)(EBP)));
  /* 12c8b893 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 12c8b895 je 0x12c8b934 */
  if (C.zf) goto L_12c8b934;
  /* 12c8b89b lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_12c8b8a1:;
  /* 12c8b8a1 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b8a3 jae 0x12c8b919 */
  if (!C.cf) goto L_12c8b919;
  /* 12c8b8a5 test byte ptr [esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 12c8b8a9 jne 0x12c8b8ef */
  if (!C.zf) goto L_12c8b8ef;
  /* 12c8b8ab cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b8af jne 0x12c8b8d4 */
  if (!C.zf) goto L_12c8b8d4;
  /* 12c8b8b1 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12c8b8b3 call 0x12c86c88 */
  push32(0x12c8b8b8u); f_12c86c88();
  /* 12c8b8b8 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b8bc pop ecx */
  ECX = (pop32());
  /* 12c8b8bd jne 0x12c8b8cc */
  if (!C.zf) goto L_12c8b8cc;
  /* 12c8b8bf lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 12c8b8c2 push eax */
  push32((uint32_t)(EAX));
  /* 12c8b8c3 call dword ptr [0x12c8e068] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e068))), 0x12c8b8c9u);
  /* 12c8b8c9 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_12c8b8cc:;
  /* 12c8b8cc push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12c8b8ce call 0x12c86ce9 */
  push32(0x12c8b8d3u); f_12c86ce9();
  /* 12c8b8d3 pop ecx */
  ECX = (pop32());
L_12c8b8d4:;
  /* 12c8b8d4 lea ebx, [esi + 0xc] */
  EBX = ((uint32_t)(ESI + 0xc));
  /* 12c8b8d7 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8b8d8 call dword ptr [0x12c8e070] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e070))), 0x12c8b8deu);
  /* 12c8b8de test byte ptr [esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 12c8b8e2 je 0x12c8b8fc */
  if (C.zf) goto L_12c8b8fc;
  /* 12c8b8e4 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8b8e5 call dword ptr [0x12c8e074] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e074))), 0x12c8b8ebu);
  /* 12c8b8eb mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_12c8b8ef:;
  /* 12c8b8ef mov eax, dword ptr [ebp] */
  EAX = (r32((uint32_t)(EBP)));
  /* 12c8b8f2 add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8b8f5 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8b8fa jmp 0x12c8b8a1 */
  goto L_12c8b8a1;
L_12c8b8fc:;
  /* 12c8b8fc or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 12c8b8ff mov eax, esi */
  EAX = (ESI);
  /* 12c8b901 sub eax, dword ptr [ebp] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8b904 push 0x24 */
  push32((uint32_t)(0x24u));
  /* 12c8b906 pop ecx */
  ECX = (pop32());
  /* 12c8b907 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12c8b908 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12c8b90a mov edi, eax */
  EDI = (EAX);
  /* 12c8b90c add edi, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8b910 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b913 jne 0x12c8b982 */
  if (!C.zf) goto L_12c8b982;
  /* 12c8b915 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_12c8b919:;
  /* 12c8b919 add dword ptr [esp + 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(ESP + 0x14), (_r)); fl_add(_a,_b,_r,32); }
  /* 12c8b91e add ebp, 4 */
  { uint32_t _a=(EBP),_b=(0x4u),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8b921 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 12c8b922 cmp ebp, 0x12cacb20 */
  { uint32_t _a=(EBP),_b=(0x12cacb20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b928 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
  /* 12c8b92c jl 0x12c8b890 */
  if ((C.sf!=C.of)) goto L_12c8b890;
  /* 12c8b932 jmp 0x12c8b982 */
  goto L_12c8b982;
L_12c8b934:;
  /* 12c8b934 mov esi, 0x480 */
  ESI = (0x480u);
  /* 12c8b939 push esi */
  push32((uint32_t)(ESI));
  /* 12c8b93a call 0x12c86920 */
  push32(0x12c8b93fu); f_12c86920();
  /* 12c8b93f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8b941 pop ecx */
  ECX = (pop32());
  /* 12c8b942 je 0x12c8b982 */
  if (C.zf) goto L_12c8b982;
  /* 12c8b944 add dword ptr [0x12cacb20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x12cacb20))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x12cacb20), (_r)); fl_add(_a,_b,_r,32); }
  /* 12c8b94b lea ecx, [ebx*4 + 0x12caca20] */
  ECX = ((uint32_t)(EBX*4 + 0x12caca20));
  /* 12c8b952 lea edx, [eax + 0x480] */
  EDX = ((uint32_t)(EAX + 0x480));
  /* 12c8b958 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12c8b95a:;
  /* 12c8b95a cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b95c jae 0x12c8b976 */
  if (!C.cf) goto L_12c8b976;
  /* 12c8b95e and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 12c8b962 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 12c8b965 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 12c8b969 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 12c8b96d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c8b96f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8b972 add edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8b974 jmp 0x12c8b95a */
  goto L_12c8b95a;
L_12c8b976:;
  /* 12c8b976 shl ebx, 5 */
  EBX = (sh_shl((uint32_t)(EBX), (0x5u)&0x1f, 32));
  /* 12c8b979 mov edi, ebx */
  EDI = (EBX);
  /* 12c8b97b push edi */
  push32((uint32_t)(EDI));
  /* 12c8b97c call 0x12c8bad0 */
  push32(0x12c8b981u); f_12c8bad0();
  /* 12c8b981 pop ecx */
  ECX = (pop32());
L_12c8b982:;
  /* 12c8b982 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12c8b984 call 0x12c86ce9 */
  push32(0x12c8b989u); f_12c86ce9();
  /* 12c8b989 pop ecx */
  ECX = (pop32());
  /* 12c8b98a mov eax, edi */
  EAX = (EDI);
  /* 12c8b98c pop edi */
  EDI = (pop32());
  /* 12c8b98d pop esi */
  ESI = (pop32());
  /* 12c8b98e pop ebp */
  EBP = (pop32());
  /* 12c8b98f pop ebx */
  EBX = (pop32());
  /* 12c8b990 pop ecx */
  ECX = (pop32());
  /* 12c8b991 pop ecx */
  ECX = (pop32());
  /* 12c8b992 ret  */
  ESPCHK(0x12c8b870u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b993 @ 0x12c8b993 (124 bytes, 47 insns) */
void f_12c8b993(void) {
  FTRACE(0x12c8b993u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8b993 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c8b997 push esi */
  push32((uint32_t)(ESI));
  /* 12c8b998 cmp ecx, dword ptr [0x12cacb20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12cacb20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b99e push edi */
  push32((uint32_t)(EDI));
  /* 12c8b99f jae 0x12c8b9f6 */
  if (!C.cf) goto L_12c8b9f6;
  /* 12c8b9a1 mov eax, ecx */
  EAX = (ECX);
  /* 12c8b9a3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12c8b9a6 lea edi, [eax*4 + 0x12caca20] */
  EDI = ((uint32_t)(EAX*4 + 0x12caca20));
  /* 12c8b9ad mov eax, ecx */
  EAX = (ECX);
  /* 12c8b9af and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12c8b9b2 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 12c8b9b5 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 12c8b9b7 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 12c8b9ba cmp dword ptr [eax + esi], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + ESI*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b9be jne 0x12c8b9f6 */
  if (!C.zf) goto L_12c8b9f6;
  /* 12c8b9c0 cmp dword ptr [0x12cac448], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12cac448))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8b9c7 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8b9c8 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 12c8b9cc jne 0x12c8b9ec */
  if (!C.zf) goto L_12c8b9ec;
  /* 12c8b9ce sub ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8b9d1 je 0x12c8b9e3 */
  if (C.zf) goto L_12c8b9e3;
  /* 12c8b9d3 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12c8b9d4 je 0x12c8b9de */
  if (C.zf) goto L_12c8b9de;
  /* 12c8b9d6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12c8b9d7 jne 0x12c8b9ec */
  if (!C.zf) goto L_12c8b9ec;
  /* 12c8b9d9 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8b9da push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12c8b9dc jmp 0x12c8b9e6 */
  goto L_12c8b9e6;
L_12c8b9de:;
  /* 12c8b9de push ebx */
  push32((uint32_t)(EBX));
  /* 12c8b9df push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12c8b9e1 jmp 0x12c8b9e6 */
  goto L_12c8b9e6;
L_12c8b9e3:;
  /* 12c8b9e3 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8b9e4 push -0xa */
  push32((uint32_t)(0xfffffff6u));
L_12c8b9e6:;
  /* 12c8b9e6 call dword ptr [0x12c8e0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e0e8))), 0x12c8b9ecu);
L_12c8b9ec:;
  /* 12c8b9ec mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 12c8b9ee mov dword ptr [eax + esi], ebx */
  w32((uint32_t)(EAX + ESI*1), (EBX));
  /* 12c8b9f1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c8b9f3 pop ebx */
  EBX = (pop32());
  /* 12c8b9f4 jmp 0x12c8ba0c */
  goto L_12c8ba0c;
L_12c8b9f6:;
  /* 12c8b9f6 call 0x12c874b3 */
  push32(0x12c8b9fbu); f_12c874b3();
  /* 12c8b9fb mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12c8ba01 call 0x12c874bc */
  push32(0x12c8ba06u); f_12c874bc();
  /* 12c8ba06 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 12c8ba09 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12c8ba0c:;
  /* 12c8ba0c pop edi */
  EDI = (pop32());
  /* 12c8ba0d pop esi */
  ESI = (pop32());
  /* 12c8ba0e ret  */
  ESPCHK(0x12c8b993u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba0f @ 0x12c8ba0f (127 bytes, 48 insns) */
void f_12c8ba0f(void) {
  FTRACE(0x12c8ba0fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8ba0f mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c8ba13 push esi */
  push32((uint32_t)(ESI));
  /* 12c8ba14 cmp ecx, dword ptr [0x12cacb20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12cacb20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8ba1a push edi */
  push32((uint32_t)(EDI));
  /* 12c8ba1b jae 0x12c8ba75 */
  if (!C.cf) goto L_12c8ba75;
  /* 12c8ba1d mov eax, ecx */
  EAX = (ECX);
  /* 12c8ba1f sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12c8ba22 lea edi, [eax*4 + 0x12caca20] */
  EDI = ((uint32_t)(EAX*4 + 0x12caca20));
  /* 12c8ba29 mov eax, ecx */
  EAX = (ECX);
  /* 12c8ba2b and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12c8ba2e lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 12c8ba31 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 12c8ba33 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 12c8ba36 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8ba38 test byte ptr [eax + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 12c8ba3c je 0x12c8ba75 */
  if (C.zf) goto L_12c8ba75;
  /* 12c8ba3e cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8ba41 je 0x12c8ba75 */
  if (C.zf) goto L_12c8ba75;
  /* 12c8ba43 cmp dword ptr [0x12cac448], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12cac448))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8ba4a jne 0x12c8ba6b */
  if (!C.zf) goto L_12c8ba6b;
  /* 12c8ba4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c8ba4e sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8ba50 je 0x12c8ba62 */
  if (C.zf) goto L_12c8ba62;
  /* 12c8ba52 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12c8ba53 je 0x12c8ba5d */
  if (C.zf) goto L_12c8ba5d;
  /* 12c8ba55 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12c8ba56 jne 0x12c8ba6b */
  if (!C.zf) goto L_12c8ba6b;
  /* 12c8ba58 push eax */
  push32((uint32_t)(EAX));
  /* 12c8ba59 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12c8ba5b jmp 0x12c8ba65 */
  goto L_12c8ba65;
L_12c8ba5d:;
  /* 12c8ba5d push eax */
  push32((uint32_t)(EAX));
  /* 12c8ba5e push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12c8ba60 jmp 0x12c8ba65 */
  goto L_12c8ba65;
L_12c8ba62:;
  /* 12c8ba62 push eax */
  push32((uint32_t)(EAX));
  /* 12c8ba63 push -0xa */
  push32((uint32_t)(0xfffffff6u));
L_12c8ba65:;
  /* 12c8ba65 call dword ptr [0x12c8e0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e0e8))), 0x12c8ba6bu);
L_12c8ba6b:;
  /* 12c8ba6b mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 12c8ba6d or dword ptr [eax + esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*1)))|(0xffffffffu); w32((uint32_t)(EAX + ESI*1), (_r)); fl_logic(_r,32); }
  /* 12c8ba71 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c8ba73 jmp 0x12c8ba8b */
  goto L_12c8ba8b;
L_12c8ba75:;
  /* 12c8ba75 call 0x12c874b3 */
  push32(0x12c8ba7au); f_12c874b3();
  /* 12c8ba7a mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12c8ba80 call 0x12c874bc */
  push32(0x12c8ba85u); f_12c874bc();
  /* 12c8ba85 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 12c8ba88 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12c8ba8b:;
  /* 12c8ba8b pop edi */
  EDI = (pop32());
  /* 12c8ba8c pop esi */
  ESI = (pop32());
  /* 12c8ba8d ret  */
  ESPCHK(0x12c8ba0fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba8e @ 0x12c8ba8e (66 bytes, 19 insns) */
void f_12c8ba8e(void) {
  FTRACE(0x12c8ba8eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8ba8e mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c8ba92 cmp eax, dword ptr [0x12cacb20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12cacb20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8ba98 jae 0x12c8bab9 */
  if (!C.cf) goto L_12c8bab9;
  /* 12c8ba9a mov ecx, eax */
  ECX = (EAX);
  /* 12c8ba9c and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12c8ba9f sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12c8baa2 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 12c8baa5 mov ecx, dword ptr [ecx*4 + 0x12caca20] */
  ECX = (r32((uint32_t)(ECX*4 + 0x12caca20)));
  /* 12c8baac test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 12c8bab1 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 12c8bab4 je 0x12c8bab9 */
  if (C.zf) goto L_12c8bab9;
  /* 12c8bab6 mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 12c8bab8 ret  */
  ESPCHK(0x12c8ba8eu, _esp0);
  ESP += 4; return;
L_12c8bab9:;
  /* 12c8bab9 call 0x12c874b3 */
  push32(0x12c8babeu); f_12c874b3();
  /* 12c8babe mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12c8bac4 call 0x12c874bc */
  push32(0x12c8bac9u); f_12c874bc();
  /* 12c8bac9 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 12c8bacc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c8bacf ret  */
  ESPCHK(0x12c8ba8eu, _esp0);
  ESP += 4; return;
}

/* FUN_1000bad0 @ 0x12c8bad0 (95 bytes, 34 insns) */
void f_12c8bad0(void) {
  FTRACE(0x12c8bad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8bad0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c8bad4 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8bad5 mov ecx, eax */
  ECX = (EAX);
  /* 12c8bad7 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12c8bada sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12c8badd push esi */
  push32((uint32_t)(ESI));
  /* 12c8bade push edi */
  push32((uint32_t)(EDI));
  /* 12c8badf mov esi, dword ptr [ecx*4 + 0x12caca20] */
  ESI = (r32((uint32_t)(ECX*4 + 0x12caca20)));
  /* 12c8bae6 lea ebx, [ecx*4 + 0x12caca20] */
  EBX = ((uint32_t)(ECX*4 + 0x12caca20));
  /* 12c8baed lea edi, [eax + eax*8] */
  EDI = ((uint32_t)(EAX + EAX*8));
  /* 12c8baf0 shl edi, 2 */
  EDI = (sh_shl((uint32_t)(EDI), (0x2u)&0x1f, 32));
  /* 12c8baf3 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8baf5 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8baf9 jne 0x12c8bb1e */
  if (!C.zf) goto L_12c8bb1e;
  /* 12c8bafb push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12c8bafd call 0x12c86c88 */
  push32(0x12c8bb02u); f_12c86c88();
  /* 12c8bb02 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8bb06 pop ecx */
  ECX = (pop32());
  /* 12c8bb07 jne 0x12c8bb16 */
  if (!C.zf) goto L_12c8bb16;
  /* 12c8bb09 lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 12c8bb0c push eax */
  push32((uint32_t)(EAX));
  /* 12c8bb0d call dword ptr [0x12c8e068] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e068))), 0x12c8bb13u);
  /* 12c8bb13 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_12c8bb16:;
  /* 12c8bb16 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12c8bb18 call 0x12c86ce9 */
  push32(0x12c8bb1du); f_12c86ce9();
  /* 12c8bb1d pop ecx */
  ECX = (pop32());
L_12c8bb1e:;
  /* 12c8bb1e mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 12c8bb20 lea eax, [eax + edi + 0xc] */
  EAX = ((uint32_t)(EAX + EDI*1 + 0xc));
  /* 12c8bb24 push eax */
  push32((uint32_t)(EAX));
  /* 12c8bb25 call dword ptr [0x12c8e070] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e070))), 0x12c8bb2bu);
  /* 12c8bb2b pop edi */
  EDI = (pop32());
  /* 12c8bb2c pop esi */
  ESI = (pop32());
  /* 12c8bb2d pop ebx */
  EBX = (pop32());
  /* 12c8bb2e ret  */
  ESPCHK(0x12c8bad0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bb2f @ 0x12c8bb2f (34 bytes, 10 insns) */
void f_12c8bb2f(void) {
  FTRACE(0x12c8bb2fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8bb2f mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c8bb33 mov ecx, eax */
  ECX = (EAX);
  /* 12c8bb35 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12c8bb38 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12c8bb3b lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 12c8bb3e mov ecx, dword ptr [ecx*4 + 0x12caca20] */
  ECX = (r32((uint32_t)(ECX*4 + 0x12caca20)));
  /* 12c8bb45 lea eax, [ecx + eax*4 + 0xc] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0xc));
  /* 12c8bb49 push eax */
  push32((uint32_t)(EAX));
  /* 12c8bb4a call dword ptr [0x12c8e074] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e074))), 0x12c8bb50u);
  /* 12c8bb50 ret  */
  ESPCHK(0x12c8bb2fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000bb51 @ 0x12c8bb51 (147 bytes, 52 insns) */
void f_12c8bb51(void) {
  FTRACE(0x12c8bb51u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8bb51 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8bb52 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c8bb56 cmp ebx, dword ptr [0x12cacb20] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x12cacb20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8bb5c push esi */
  push32((uint32_t)(ESI));
  /* 12c8bb5d push edi */
  push32((uint32_t)(EDI));
  /* 12c8bb5e jae 0x12c8bbd2 */
  if (!C.cf) goto L_12c8bbd2;
  /* 12c8bb60 mov eax, ebx */
  EAX = (EBX);
  /* 12c8bb62 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12c8bb65 lea edi, [eax*4 + 0x12caca20] */
  EDI = ((uint32_t)(EAX*4 + 0x12caca20));
  /* 12c8bb6c mov eax, ebx */
  EAX = (EBX);
  /* 12c8bb6e and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12c8bb71 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 12c8bb74 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 12c8bb76 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 12c8bb79 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 12c8bb7e je 0x12c8bbd2 */
  if (C.zf) goto L_12c8bbd2;
  /* 12c8bb80 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8bb81 call 0x12c8bad0 */
  push32(0x12c8bb86u); f_12c8bad0();
  /* 12c8bb86 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 12c8bb88 pop ecx */
  ECX = (pop32());
  /* 12c8bb89 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 12c8bb8e je 0x12c8bbb9 */
  if (C.zf) goto L_12c8bbb9;
  /* 12c8bb90 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8bb91 call 0x12c8ba8e */
  push32(0x12c8bb96u); f_12c8ba8e();
  /* 12c8bb96 pop ecx */
  ECX = (pop32());
  /* 12c8bb97 push eax */
  push32((uint32_t)(EAX));
  /* 12c8bb98 call dword ptr [0x12c8e0ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e0ec))), 0x12c8bb9eu);
  /* 12c8bb9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8bba0 jne 0x12c8bbac */
  if (!C.zf) goto L_12c8bbac;
  /* 12c8bba2 call dword ptr [0x12c8e078] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e078))), 0x12c8bba8u);
  /* 12c8bba8 mov esi, eax */
  ESI = (EAX);
  /* 12c8bbaa jmp 0x12c8bbae */
  goto L_12c8bbae;
L_12c8bbac:;
  /* 12c8bbac xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_12c8bbae:;
  /* 12c8bbae test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 12c8bbb0 je 0x12c8bbc7 */
  if (C.zf) goto L_12c8bbc7;
  /* 12c8bbb2 call 0x12c874bc */
  push32(0x12c8bbb7u); f_12c874bc();
  /* 12c8bbb7 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_12c8bbb9:;
  /* 12c8bbb9 call 0x12c874b3 */
  push32(0x12c8bbbeu); f_12c874b3();
  /* 12c8bbbe mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12c8bbc4 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_12c8bbc7:;
  /* 12c8bbc7 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8bbc8 call 0x12c8bb2f */
  push32(0x12c8bbcdu); f_12c8bb2f();
  /* 12c8bbcd pop ecx */
  ECX = (pop32());
  /* 12c8bbce mov eax, esi */
  EAX = (ESI);
  /* 12c8bbd0 jmp 0x12c8bbe0 */
  goto L_12c8bbe0;
L_12c8bbd2:;
  /* 12c8bbd2 call 0x12c874b3 */
  push32(0x12c8bbd7u); f_12c874b3();
  /* 12c8bbd7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12c8bbdd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12c8bbe0:;
  /* 12c8bbe0 pop edi */
  EDI = (pop32());
  /* 12c8bbe1 pop esi */
  ESI = (pop32());
  /* 12c8bbe2 pop ebx */
  EBX = (pop32());
  /* 12c8bbe3 ret  */
  ESPCHK(0x12c8bb51u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bbe4 @ 0x12c8bbe4 (68 bytes, 19 insns) */
void f_12c8bbe4(void) {
  FTRACE(0x12c8bbe4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8bbe4 inc dword ptr [0x12cac4f0] */
  { uint32_t _r=(r32((uint32_t)(0x12cac4f0)))+1; w32((uint32_t)(0x12cac4f0), (_r)); fl_inc(_r,32); }
  /* 12c8bbea push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12c8bbef call 0x12c86920 */
  push32(0x12c8bbf4u); f_12c86920();
  /* 12c8bbf4 pop ecx */
  ECX = (pop32());
  /* 12c8bbf5 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c8bbf9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8bbfb mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12c8bbfe je 0x12c8bc0d */
  if (C.zf) goto L_12c8bc0d;
  /* 12c8bc00 or dword ptr [ecx + 0xc], 8 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x8u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
  /* 12c8bc04 mov dword ptr [ecx + 0x18], 0x1000 */
  w32((uint32_t)(ECX + 0x18), (0x1000u));
  /* 12c8bc0b jmp 0x12c8bc1e */
  goto L_12c8bc1e;
L_12c8bc0d:;
  /* 12c8bc0d or dword ptr [ecx + 0xc], 4 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x4u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
  /* 12c8bc11 lea eax, [ecx + 0x14] */
  EAX = ((uint32_t)(ECX + 0x14));
  /* 12c8bc14 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12c8bc17 mov dword ptr [ecx + 0x18], 2 */
  w32((uint32_t)(ECX + 0x18), (0x2u));
L_12c8bc1e:;
  /* 12c8bc1e mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 12c8bc21 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 12c8bc25 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12c8bc27 ret  */
  ESPCHK(0x12c8bbe4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc28 @ 0x12c8bc28 (719 bytes, 241 insns) */
void f_12c8bc28(void) {
  FTRACE(0x12c8bc28u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8bc28 push ebp */
  push32((uint32_t)(EBP));
  /* 12c8bc29 mov ebp, esp */
  EBP = (ESP);
  /* 12c8bc2b sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8bc2e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c8bc31 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8bc32 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12c8bc34 push esi */
  push32((uint32_t)(ESI));
  /* 12c8bc35 test cl, 0x80 */
  { uint32_t _r=(CL)&(0x80u); fl_logic(_r,8); }
  /* 12c8bc38 push edi */
  push32((uint32_t)(EDI));
  /* 12c8bc39 mov dword ptr [ebp - 0x1c], 0xc */
  w32((uint32_t)(EBP + -0x1c), (0xcu));
  /* 12c8bc40 mov dword ptr [ebp - 0x18], ebx */
  w32((uint32_t)(EBP + -0x18), (EBX));
  /* 12c8bc43 je 0x12c8bc4e */
  if (C.zf) goto L_12c8bc4e;
  /* 12c8bc45 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 12c8bc48 mov byte ptr [ebp - 1], 0x10 */
  w8((uint32_t)(EBP + -0x1), (0x10u));
  /* 12c8bc4c jmp 0x12c8bc59 */
  goto L_12c8bc59;
L_12c8bc4e:;
  /* 12c8bc4e and byte ptr [ebp - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x1)))&(0x0u); w8((uint32_t)(EBP + -0x1), (_r)); fl_logic(_r,8); }
  /* 12c8bc52 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_12c8bc59:;
  /* 12c8bc59 mov eax, 0x8000 */
  EAX = (0x8000u);
  /* 12c8bc5e test eax, ecx */
  { uint32_t _r=(EAX)&(ECX); fl_logic(_r,32); }
  /* 12c8bc60 jne 0x12c8bc73 */
  if (!C.zf) goto L_12c8bc73;
  /* 12c8bc62 test ch, 0x40 */
  { uint32_t _r=(C.c.b.h)&(0x40u); fl_logic(_r,8); }
  /* 12c8bc65 jne 0x12c8bc6f */
  if (!C.zf) goto L_12c8bc6f;
  /* 12c8bc67 cmp dword ptr [0x12cac63c], eax */
  { uint32_t _a=(r32((uint32_t)(0x12cac63c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8bc6d je 0x12c8bc73 */
  if (C.zf) goto L_12c8bc73;
L_12c8bc6f:;
  /* 12c8bc6f or byte ptr [ebp - 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x1)))|(0x80u); w8((uint32_t)(EBP + -0x1), (_r)); fl_logic(_r,8); }
L_12c8bc73:;
  /* 12c8bc73 push 3 */
  push32((uint32_t)(0x3u));
  /* 12c8bc75 mov eax, ecx */
  EAX = (ECX);
  /* 12c8bc77 pop esi */
  ESI = (pop32());
  /* 12c8bc78 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 12c8bc7a sub eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8bc7c je 0x12c8bc9a */
  if (C.zf) goto L_12c8bc9a;
  /* 12c8bc7e dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 12c8bc7f je 0x12c8bc91 */
  if (C.zf) goto L_12c8bc91;
  /* 12c8bc81 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 12c8bc82 jne 0x12c8bd2c */
  if (!C.zf) goto L_12c8bd2c;
  /* 12c8bc88 mov dword ptr [ebp - 0xc], 0xc0000000 */
  w32((uint32_t)(EBP + -0xc), (0xc0000000u));
  /* 12c8bc8f jmp 0x12c8bca1 */
  goto L_12c8bca1;
L_12c8bc91:;
  /* 12c8bc91 mov dword ptr [ebp - 0xc], 0x40000000 */
  w32((uint32_t)(EBP + -0xc), (0x40000000u));
  /* 12c8bc98 jmp 0x12c8bca1 */
  goto L_12c8bca1;
L_12c8bc9a:;
  /* 12c8bc9a mov dword ptr [ebp - 0xc], 0x80000000 */
  w32((uint32_t)(EBP + -0xc), (0x80000000u));
L_12c8bca1:;
  /* 12c8bca1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c8bca4 cmp eax, 0x10 */
  { uint32_t _a=(EAX),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8bca7 je 0x12c8bccf */
  if (C.zf) goto L_12c8bccf;
  /* 12c8bca9 cmp eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8bcac je 0x12c8bcc6 */
  if (C.zf) goto L_12c8bcc6;
  /* 12c8bcae cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8bcb1 je 0x12c8bcbd */
  if (C.zf) goto L_12c8bcbd;
  /* 12c8bcb3 cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8bcb6 jne 0x12c8bd2c */
  if (!C.zf) goto L_12c8bd2c;
  /* 12c8bcb8 mov dword ptr [ebp - 0x10], esi */
  w32((uint32_t)(EBP + -0x10), (ESI));
  /* 12c8bcbb jmp 0x12c8bcd2 */
  goto L_12c8bcd2;
L_12c8bcbd:;
  /* 12c8bcbd mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
  /* 12c8bcc4 jmp 0x12c8bcd2 */
  goto L_12c8bcd2;
L_12c8bcc6:;
  /* 12c8bcc6 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12c8bccd jmp 0x12c8bcd2 */
  goto L_12c8bcd2;
L_12c8bccf:;
  /* 12c8bccf mov dword ptr [ebp - 0x10], ebx */
  w32((uint32_t)(EBP + -0x10), (EBX));
L_12c8bcd2:;
  /* 12c8bcd2 mov edx, 0x700 */
  EDX = (0x700u);
  /* 12c8bcd7 mov eax, 0x400 */
  EAX = (0x400u);
  /* 12c8bcdc and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12c8bcde mov edi, 0x100 */
  EDI = (0x100u);
  /* 12c8bce3 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8bce5 jg 0x12c8bd18 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c8bd18;
  /* 12c8bce7 je 0x12c8bd13 */
  if (C.zf) goto L_12c8bd13;
  /* 12c8bce9 cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8bceb je 0x12c8bd13 */
  if (C.zf) goto L_12c8bd13;
  /* 12c8bced cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8bcef je 0x12c8bd0a */
  if (C.zf) goto L_12c8bd0a;
  /* 12c8bcf1 cmp ecx, 0x200 */
  { uint32_t _a=(ECX),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8bcf7 je 0x12c8bd46 */
  if (C.zf) goto L_12c8bd46;
  /* 12c8bcf9 cmp ecx, 0x300 */
  { uint32_t _a=(ECX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8bcff jne 0x12c8bd2c */
  if (!C.zf) goto L_12c8bd2c;
  /* 12c8bd01 mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 12c8bd08 jmp 0x12c8bd56 */
  goto L_12c8bd56;
L_12c8bd0a:;
  /* 12c8bd0a mov dword ptr [ebp - 8], 4 */
  w32((uint32_t)(EBP + -0x8), (0x4u));
  /* 12c8bd11 jmp 0x12c8bd56 */
  goto L_12c8bd56;
L_12c8bd13:;
  /* 12c8bd13 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 12c8bd16 jmp 0x12c8bd56 */
  goto L_12c8bd56;
L_12c8bd18:;
  /* 12c8bd18 cmp ecx, 0x500 */
  { uint32_t _a=(ECX),_b=(0x500u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8bd1e je 0x12c8bd4f */
  if (C.zf) goto L_12c8bd4f;
  /* 12c8bd20 cmp ecx, 0x600 */
  { uint32_t _a=(ECX),_b=(0x600u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8bd26 je 0x12c8bd46 */
  if (C.zf) goto L_12c8bd46;
  /* 12c8bd28 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8bd2a je 0x12c8bd4f */
  if (C.zf) goto L_12c8bd4f;
L_12c8bd2c:;
  /* 12c8bd2c call 0x12c874b3 */
  push32(0x12c8bd31u); f_12c874b3();
  /* 12c8bd31 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 12c8bd37 call 0x12c874bc */
  push32(0x12c8bd3cu); f_12c874bc();
  /* 12c8bd3c mov dword ptr [eax], ebx */
  w32((uint32_t)(EAX), (EBX));
  /* 12c8bd3e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c8bd41 jmp 0x12c8bef2 */
  goto L_12c8bef2;
L_12c8bd46:;
  /* 12c8bd46 mov dword ptr [ebp - 8], 5 */
  w32((uint32_t)(EBP + -0x8), (0x5u));
  /* 12c8bd4d jmp 0x12c8bd56 */
  goto L_12c8bd56;
L_12c8bd4f:;
  /* 12c8bd4f mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_12c8bd56:;
  /* 12c8bd56 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c8bd59 mov esi, 0x80 */
  ESI = (0x80u);
  /* 12c8bd5e test edi, eax */
  { uint32_t _r=(EDI)&(EAX); fl_logic(_r,32); }
  /* 12c8bd60 je 0x12c8bd75 */
  if (C.zf) goto L_12c8bd75;
  /* 12c8bd62 mov ecx, dword ptr [0x12cac44c] */
  ECX = (r32((uint32_t)(0x12cac44c)));
  /* 12c8bd68 not ecx */
  ECX = (~(ECX));
  /* 12c8bd6a and ecx, dword ptr [ebp + 0x14] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + 0x14))); ECX = (_r); fl_logic(_r,32); }
  /* 12c8bd6d test cl, 0x80 */
  { uint32_t _r=(CL)&(0x80u); fl_logic(_r,8); }
  /* 12c8bd70 jne 0x12c8bd75 */
  if (!C.zf) goto L_12c8bd75;
  /* 12c8bd72 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c8bd74 pop esi */
  ESI = (pop32());
L_12c8bd75:;
  /* 12c8bd75 test al, 0x40 */
  { uint32_t _r=(AL)&(0x40u); fl_logic(_r,8); }
  /* 12c8bd77 je 0x12c8bd83 */
  if (C.zf) goto L_12c8bd83;
  /* 12c8bd79 or esi, 0x4000000 */
  { uint32_t _r=(ESI)|(0x4000000u); ESI = (_r); fl_logic(_r,32); }
  /* 12c8bd7f or byte ptr [ebp - 0xa], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0xa)))|(0x1u); w8((uint32_t)(EBP + -0xa), (_r)); fl_logic(_r,8); }
L_12c8bd83:;
  /* 12c8bd83 test ah, 0x10 */
  { uint32_t _r=(AH)&(0x10u); fl_logic(_r,8); }
  /* 12c8bd86 je 0x12c8bd8a */
  if (C.zf) goto L_12c8bd8a;
  /* 12c8bd88 or esi, edi */
  { uint32_t _r=(ESI)|(EDI); ESI = (_r); fl_logic(_r,32); }
L_12c8bd8a:;
  /* 12c8bd8a test al, 0x20 */
  { uint32_t _r=(AL)&(0x20u); fl_logic(_r,8); }
  /* 12c8bd8c je 0x12c8bd96 */
  if (C.zf) goto L_12c8bd96;
  /* 12c8bd8e or esi, 0x8000000 */
  { uint32_t _r=(ESI)|(0x8000000u); ESI = (_r); fl_logic(_r,32); }
  /* 12c8bd94 jmp 0x12c8bda0 */
  goto L_12c8bda0;
L_12c8bd96:;
  /* 12c8bd96 test al, 0x10 */
  { uint32_t _r=(AL)&(0x10u); fl_logic(_r,8); }
  /* 12c8bd98 je 0x12c8bda0 */
  if (C.zf) goto L_12c8bda0;
  /* 12c8bd9a or esi, 0x10000000 */
  { uint32_t _r=(ESI)|(0x10000000u); ESI = (_r); fl_logic(_r,32); }
L_12c8bda0:;
  /* 12c8bda0 call 0x12c8b870 */
  push32(0x12c8bda5u); f_12c8b870();
  /* 12c8bda5 mov ebx, eax */
  EBX = (EAX);
  /* 12c8bda7 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 12c8bdaa cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8bdac jne 0x12c8bdc8 */
  if (!C.zf) goto L_12c8bdc8;
  /* 12c8bdae call 0x12c874b3 */
  push32(0x12c8bdb3u); f_12c874b3();
  /* 12c8bdb3 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 12c8bdb9 call 0x12c874bc */
  push32(0x12c8bdbeu); f_12c874bc();
  /* 12c8bdbe and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 12c8bdc1 mov eax, edi */
  EAX = (EDI);
  /* 12c8bdc3 jmp 0x12c8bef2 */
  goto L_12c8bef2;
L_12c8bdc8:;
  /* 12c8bdc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c8bdca push esi */
  push32((uint32_t)(ESI));
  /* 12c8bdcb push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 12c8bdce lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 12c8bdd1 push eax */
  push32((uint32_t)(EAX));
  /* 12c8bdd2 push dword ptr [ebp - 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x10))));
  /* 12c8bdd5 push dword ptr [ebp - 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0xc))));
  /* 12c8bdd8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c8bddb call dword ptr [0x12c8e0f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e0f0))), 0x12c8bde1u);
  /* 12c8bde1 mov esi, eax */
  ESI = (EAX);
  /* 12c8bde3 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8bde5 jne 0x12c8bdfb */
  if (!C.zf) goto L_12c8bdfb;
L_12c8bde7:;
  /* 12c8bde7 call dword ptr [0x12c8e078] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e078))), 0x12c8bdedu);
  /* 12c8bded push eax */
  push32((uint32_t)(EAX));
  /* 12c8bdee call 0x12c87440 */
  push32(0x12c8bdf3u); f_12c87440();
  /* 12c8bdf3 pop ecx */
  ECX = (pop32());
  /* 12c8bdf4 mov esi, edi */
  ESI = (EDI);
  /* 12c8bdf6 jmp 0x12c8bee9 */
  goto L_12c8bee9;
L_12c8bdfb:;
  /* 12c8bdfb push esi */
  push32((uint32_t)(ESI));
  /* 12c8bdfc call dword ptr [0x12c8e08c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e08c))), 0x12c8be02u);
  /* 12c8be02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8be04 jne 0x12c8be0f */
  if (!C.zf) goto L_12c8be0f;
  /* 12c8be06 push esi */
  push32((uint32_t)(ESI));
  /* 12c8be07 call dword ptr [0x12c8e07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e07c))), 0x12c8be0du);
  /* 12c8be0d jmp 0x12c8bde7 */
  goto L_12c8bde7;
L_12c8be0f:;
  /* 12c8be0f cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8be12 jne 0x12c8be1a */
  if (!C.zf) goto L_12c8be1a;
  /* 12c8be14 or byte ptr [ebp - 1], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x1)))|(0x40u); w8((uint32_t)(EBP + -0x1), (_r)); fl_logic(_r,8); }
  /* 12c8be18 jmp 0x12c8be23 */
  goto L_12c8be23;
L_12c8be1a:;
  /* 12c8be1a cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8be1d jne 0x12c8be23 */
  if (!C.zf) goto L_12c8be23;
  /* 12c8be1f or byte ptr [ebp - 1], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x1)))|(0x8u); w8((uint32_t)(EBP + -0x1), (_r)); fl_logic(_r,8); }
L_12c8be23:;
  /* 12c8be23 push esi */
  push32((uint32_t)(ESI));
  /* 12c8be24 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8be25 call 0x12c8b993 */
  push32(0x12c8be2au); f_12c8b993();
  /* 12c8be2a mov eax, ebx */
  EAX = (EBX);
  /* 12c8be2c pop ecx */
  ECX = (pop32());
  /* 12c8be2d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12c8be30 pop ecx */
  ECX = (pop32());
  /* 12c8be31 mov cl, byte ptr [ebp - 1] */
  CL = (r8((uint32_t)(EBP + -0x1)));
  /* 12c8be34 lea edi, [eax*4 + 0x12caca20] */
  EDI = ((uint32_t)(EAX*4 + 0x12caca20));
  /* 12c8be3b mov eax, ebx */
  EAX = (EBX);
  /* 12c8be3d or cl, 1 */
  { uint32_t _r=(CL)|(0x1u); CL = (_r); fl_logic(_r,8); }
  /* 12c8be40 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12c8be43 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 12c8be46 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 12c8be49 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 12c8be4b shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 12c8be4e and byte ptr [ebp + 0xb], 0x48 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xb)))&(0x48u); w8((uint32_t)(EBP + 0xb), (_r)); fl_logic(_r,8); }
  /* 12c8be52 mov byte ptr [eax + esi + 4], cl */
  w8((uint32_t)(EAX + ESI*1 + 0x4), (CL));
  /* 12c8be56 jne 0x12c8bed0 */
  if (!C.zf) goto L_12c8bed0;
  /* 12c8be58 test cl, 0x80 */
  { uint32_t _r=(CL)&(0x80u); fl_logic(_r,8); }
  /* 12c8be5b je 0x12c8bed0 */
  if (C.zf) goto L_12c8bed0;
  /* 12c8be5d test byte ptr [ebp + 0xc], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xc)))&(0x2u); fl_logic(_r,8); }
  /* 12c8be61 je 0x12c8bed0 */
  if (C.zf) goto L_12c8bed0;
  /* 12c8be63 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c8be65 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c8be67 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8be68 call 0x12c8773a */
  push32(0x12c8be6du); f_12c8773a();
  /* 12c8be6d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8be70 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8be73 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12c8be76 jne 0x12c8be91 */
  if (!C.zf) goto L_12c8be91;
  /* 12c8be78 call 0x12c874bc */
  push32(0x12c8be7du); f_12c874bc();
  /* 12c8be7d cmp dword ptr [eax], 0x83 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x83u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8be83 je 0x12c8bed0 */
  if (C.zf) goto L_12c8bed0;
L_12c8be85:;
  /* 12c8be85 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8be86 call 0x12c86ee4 */
  push32(0x12c8be8bu); f_12c86ee4();
  /* 12c8be8b pop ecx */
  ECX = (pop32());
  /* 12c8be8c or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 12c8be8f jmp 0x12c8bee9 */
  goto L_12c8bee9;
L_12c8be91:;
  /* 12c8be91 and byte ptr [ebp + 0x13], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x13)))&(0x0u); w8((uint32_t)(EBP + 0x13), (_r)); fl_logic(_r,8); }
  /* 12c8be95 lea eax, [ebp + 0x13] */
  EAX = ((uint32_t)(EBP + 0x13));
  /* 12c8be98 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c8be9a push eax */
  push32((uint32_t)(EAX));
  /* 12c8be9b push ebx */
  push32((uint32_t)(EBX));
  /* 12c8be9c call 0x12c87267 */
  push32(0x12c8bea1u); f_12c87267();
  /* 12c8bea1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8bea4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8bea6 jne 0x12c8bebe */
  if (!C.zf) goto L_12c8bebe;
  /* 12c8bea8 cmp byte ptr [ebp + 0x13], 0x1a */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x13))),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8beac jne 0x12c8bebe */
  if (!C.zf) goto L_12c8bebe;
  /* 12c8beae push dword ptr [ebp - 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x10))));
  /* 12c8beb1 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8beb2 call 0x12c8cd1e */
  push32(0x12c8beb7u); f_12c8cd1e();
  /* 12c8beb7 pop ecx */
  ECX = (pop32());
  /* 12c8beb8 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8bebb pop ecx */
  ECX = (pop32());
  /* 12c8bebc je 0x12c8be85 */
  if (C.zf) goto L_12c8be85;
L_12c8bebe:;
  /* 12c8bebe push 0 */
  push32((uint32_t)(0x0u));
  /* 12c8bec0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c8bec2 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8bec3 call 0x12c8773a */
  push32(0x12c8bec8u); f_12c8773a();
  /* 12c8bec8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8becb cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8bece je 0x12c8be85 */
  if (C.zf) goto L_12c8be85;
L_12c8bed0:;
  /* 12c8bed0 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8bed4 jne 0x12c8bee7 */
  if (!C.zf) goto L_12c8bee7;
  /* 12c8bed6 test byte ptr [ebp + 0xc], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xc)))&(0x8u); fl_logic(_r,8); }
  /* 12c8beda je 0x12c8bee7 */
  if (C.zf) goto L_12c8bee7;
  /* 12c8bedc mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 12c8bede or byte ptr [eax + esi + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))|(0x20u); w8((uint32_t)(EAX + ESI*1 + 0x4), (_r)); fl_logic(_r,8); }
  /* 12c8bee3 lea eax, [eax + esi + 4] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x4));
L_12c8bee7:;
  /* 12c8bee7 mov esi, ebx */
  ESI = (EBX);
L_12c8bee9:;
  /* 12c8bee9 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8beea call 0x12c8bb2f */
  push32(0x12c8beefu); f_12c8bb2f();
  /* 12c8beef pop ecx */
  ECX = (pop32());
  /* 12c8bef0 mov eax, esi */
  EAX = (ESI);
L_12c8bef2:;
  /* 12c8bef2 pop edi */
  EDI = (pop32());
  /* 12c8bef3 pop esi */
  ESI = (pop32());
  /* 12c8bef4 pop ebx */
  EBX = (pop32());
  /* 12c8bef5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c8bef6 ret  */
  ESPCHK(0x12c8bc28u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bef7 @ 0x12c8bef7 (28 bytes, 12 insns) */
void f_12c8bef7(void) {
  FTRACE(0x12c8bef7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8bef7 push esi */
  push32((uint32_t)(ESI));
  /* 12c8bef8 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c8befa pop esi */
  ESI = (pop32());
  /* 12c8befb push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 12c8beff push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 12c8bf03 call dword ptr [0x12c8e0f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e0f4))), 0x12c8bf09u);
  /* 12c8bf09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8bf0b je 0x12c8bf0f */
  if (C.zf) goto L_12c8bf0f;
  /* 12c8bf0d xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_12c8bf0f:;
  /* 12c8bf0f mov eax, esi */
  EAX = (ESI);
  /* 12c8bf11 pop esi */
  ESI = (pop32());
  /* 12c8bf12 ret  */
  ESPCHK(0x12c8bef7u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf13 @ 0x12c8bf13 (28 bytes, 12 insns) */
void f_12c8bf13(void) {
  FTRACE(0x12c8bf13u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8bf13 push esi */
  push32((uint32_t)(ESI));
  /* 12c8bf14 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c8bf16 pop esi */
  ESI = (pop32());
  /* 12c8bf17 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 12c8bf1b push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 12c8bf1f call dword ptr [0x12c8e0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e0cc))), 0x12c8bf25u);
  /* 12c8bf25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8bf27 je 0x12c8bf2b */
  if (C.zf) goto L_12c8bf2b;
  /* 12c8bf29 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_12c8bf2b:;
  /* 12c8bf2b mov eax, esi */
  EAX = (ESI);
  /* 12c8bf2d pop esi */
  ESI = (pop32());
  /* 12c8bf2e ret  */
  ESPCHK(0x12c8bf13u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf2f @ 0x12c8bf2f (24 bytes, 11 insns) */
void f_12c8bf2f(void) {
  FTRACE(0x12c8bf2fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8bf2f push esi */
  push32((uint32_t)(ESI));
  /* 12c8bf30 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c8bf32 pop esi */
  ESI = (pop32());
  /* 12c8bf33 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 12c8bf37 call dword ptr [0x12c8e0f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e0f8))), 0x12c8bf3du);
  /* 12c8bf3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8bf3f je 0x12c8bf43 */
  if (C.zf) goto L_12c8bf43;
  /* 12c8bf41 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_12c8bf43:;
  /* 12c8bf43 mov eax, esi */
  EAX = (ESI);
  /* 12c8bf45 pop esi */
  ESI = (pop32());
  /* 12c8bf46 ret  */
  ESPCHK(0x12c8bf2fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf47 @ 0x12c8bf47 (41 bytes, 13 insns) */
void f_12c8bf47(void) {
  FTRACE(0x12c8bf47u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8bf47 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c8bf4b cmp eax, dword ptr [0x12cacb20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12cacb20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8bf51 jb 0x12c8bf56 */
  if (C.cf) goto L_12c8bf56;
  /* 12c8bf53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c8bf55 ret  */
  ESPCHK(0x12c8bf47u, _esp0);
  ESP += 4; return;
L_12c8bf56:;
  /* 12c8bf56 mov ecx, eax */
  ECX = (EAX);
  /* 12c8bf58 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12c8bf5b sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12c8bf5e lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 12c8bf61 mov ecx, dword ptr [ecx*4 + 0x12caca20] */
  ECX = (r32((uint32_t)(ECX*4 + 0x12caca20)));
  /* 12c8bf68 mov al, byte ptr [ecx + eax*4 + 4] */
  AL = (r8((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 12c8bf6c and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12c8bf6f ret  */
  ESPCHK(0x12c8bf47u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf70 @ 0x12c8bf70 (89 bytes, 39 insns) */
void f_12c8bf70(void) {
  FTRACE(0x12c8bf70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8bf70 push ebp */
  push32((uint32_t)(EBP));
  /* 12c8bf71 mov ebp, esp */
  EBP = (ESP);
  /* 12c8bf73 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8bf74 push esi */
  push32((uint32_t)(ESI));
  /* 12c8bf75 mov esi, 0x12cac7b8 */
  ESI = (0x12cac7b8u);
  /* 12c8bf7a push edi */
  push32((uint32_t)(EDI));
  /* 12c8bf7b push esi */
  push32((uint32_t)(ESI));
  /* 12c8bf7c call dword ptr [0x12c8e034] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e034))), 0x12c8bf82u);
  /* 12c8bf82 mov edi, dword ptr [0x12c8e038] */
  EDI = (r32((uint32_t)(0x12c8e038)));
  /* 12c8bf88 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12c8bf8a cmp dword ptr [0x12cac7b4], ebx */
  { uint32_t _a=(r32((uint32_t)(0x12cac7b4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8bf90 je 0x12c8bfa0 */
  if (C.zf) goto L_12c8bfa0;
  /* 12c8bf92 push esi */
  push32((uint32_t)(ESI));
  /* 12c8bf93 call edi */
  call_ind((uint32_t)(EDI), 0x12c8bf95u);
  /* 12c8bf95 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12c8bf97 call 0x12c86c88 */
  push32(0x12c8bf9cu); f_12c86c88();
  /* 12c8bf9c pop ecx */
  ECX = (pop32());
  /* 12c8bf9d push 1 */
  push32((uint32_t)(0x1u));
  /* 12c8bf9f pop ebx */
  EBX = (pop32());
L_12c8bfa0:;
  /* 12c8bfa0 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 12c8bfa3 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c8bfa6 call 0x12c8bfc9 */
  push32(0x12c8bfabu); f_12c8bfc9();
  /* 12c8bfab pop ecx */
  ECX = (pop32());
  /* 12c8bfac mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12c8bfaf test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 12c8bfb1 pop ecx */
  ECX = (pop32());
  /* 12c8bfb2 je 0x12c8bfbe */
  if (C.zf) goto L_12c8bfbe;
  /* 12c8bfb4 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12c8bfb6 call 0x12c86ce9 */
  push32(0x12c8bfbbu); f_12c86ce9();
  /* 12c8bfbb pop ecx */
  ECX = (pop32());
  /* 12c8bfbc jmp 0x12c8bfc1 */
  goto L_12c8bfc1;
L_12c8bfbe:;
  /* 12c8bfbe push esi */
  push32((uint32_t)(ESI));
  /* 12c8bfbf call edi */
  call_ind((uint32_t)(EDI), 0x12c8bfc1u);
L_12c8bfc1:;
  /* 12c8bfc1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c8bfc4 pop edi */
  EDI = (pop32());
  /* 12c8bfc5 pop esi */
  ESI = (pop32());
  /* 12c8bfc6 pop ebx */
  EBX = (pop32());
  /* 12c8bfc7 pop ebp */
  EBP = (pop32());
  /* 12c8bfc8 ret  */
  ESPCHK(0x12c8bf70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bfc9 @ 0x12c8bfc9 (105 bytes, 38 insns) */
void f_12c8bfc9(void) {
  FTRACE(0x12c8bfc9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8bfc9 push ebp */
  push32((uint32_t)(EBP));
  /* 12c8bfca mov ebp, esp */
  EBP = (ESP);
  /* 12c8bfcc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8bfcf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8bfd1 jne 0x12c8bfd5 */
  if (!C.zf) goto L_12c8bfd5;
  /* 12c8bfd3 pop ebp */
  EBP = (pop32());
  /* 12c8bfd4 ret  */
  ESPCHK(0x12c8bfc9u, _esp0);
  ESP += 4; return;
L_12c8bfd5:;
  /* 12c8bfd5 cmp dword ptr [0x12cac654], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12cac654))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8bfdc jne 0x12c8bff0 */
  if (!C.zf) goto L_12c8bff0;
  /* 12c8bfde mov cx, word ptr [ebp + 0xc] */
  CX = (r16((uint32_t)(EBP + 0xc)));
  /* 12c8bfe2 cmp cx, 0xff */
  { uint32_t _a=(CX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 12c8bfe7 ja 0x12c8c022 */
  if ((!C.cf&&!C.zf)) goto L_12c8c022;
  /* 12c8bfe9 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c8bfeb mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12c8bfed pop eax */
  EAX = (pop32());
  /* 12c8bfee pop ebp */
  EBP = (pop32());
  /* 12c8bfef ret  */
  ESPCHK(0x12c8bfc9u, _esp0);
  ESP += 4; return;
L_12c8bff0:;
  /* 12c8bff0 lea ecx, [ebp + 8] */
  ECX = ((uint32_t)(EBP + 0x8));
  /* 12c8bff3 and dword ptr [ebp + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))&(0x0u); w32((uint32_t)(EBP + 0x8), (_r)); fl_logic(_r,32); }
  /* 12c8bff7 push ecx */
  push32((uint32_t)(ECX));
  /* 12c8bff8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c8bffa push dword ptr [0x12c90d24] */
  push32((uint32_t)(r32((uint32_t)(0x12c90d24))));
  /* 12c8c000 push eax */
  push32((uint32_t)(EAX));
  /* 12c8c001 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 12c8c004 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c8c006 push eax */
  push32((uint32_t)(EAX));
  /* 12c8c007 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12c8c00c push dword ptr [0x12cac664] */
  push32((uint32_t)(r32((uint32_t)(0x12cac664))));
  /* 12c8c012 call dword ptr [0x12c8e0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e0c4))), 0x12c8c018u);
  /* 12c8c018 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8c01a je 0x12c8c022 */
  if (C.zf) goto L_12c8c022;
  /* 12c8c01c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c020 je 0x12c8c030 */
  if (C.zf) goto L_12c8c030;
L_12c8c022:;
  /* 12c8c022 call 0x12c874b3 */
  push32(0x12c8c027u); f_12c874b3();
  /* 12c8c027 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 12c8c02d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12c8c030:;
  /* 12c8c030 pop ebp */
  EBP = (pop32());
  /* 12c8c031 ret  */
  ESPCHK(0x12c8bfc9u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x12c8c040 (104 bytes, 43 insns) */
void f_12c8c040(void) {
  FTRACE(0x12c8c040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8c040 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8c041 push esi */
  push32((uint32_t)(ESI));
  /* 12c8c042 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 12c8c046 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c8c048 jne 0x12c8c062 */
  if (!C.zf) goto L_12c8c062;
  /* 12c8c04a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 12c8c04e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12c8c052 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c8c054 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12c8c056 mov ebx, eax */
  EBX = (EAX);
  /* 12c8c058 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 12c8c05c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12c8c05e mov edx, ebx */
  EDX = (EBX);
  /* 12c8c060 jmp 0x12c8c0a3 */
  goto L_12c8c0a3;
L_12c8c062:;
  /* 12c8c062 mov ecx, eax */
  ECX = (EAX);
  /* 12c8c064 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 12c8c068 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 12c8c06c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_12c8c070:;
  /* 12c8c070 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12c8c072 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 12c8c074 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12c8c076 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 12c8c078 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c8c07a jne 0x12c8c070 */
  if (!C.zf) goto L_12c8c070;
  /* 12c8c07c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12c8c07e mov esi, eax */
  ESI = (EAX);
  /* 12c8c080 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12c8c084 mov ecx, eax */
  ECX = (EAX);
  /* 12c8c086 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 12c8c08a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12c8c08c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8c08e jb 0x12c8c09e */
  if (C.cf) goto L_12c8c09e;
  /* 12c8c090 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c094 ja 0x12c8c09e */
  if ((!C.cf&&!C.zf)) goto L_12c8c09e;
  /* 12c8c096 jb 0x12c8c09f */
  if (C.cf) goto L_12c8c09f;
  /* 12c8c098 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c09c jbe 0x12c8c09f */
  if ((C.cf||C.zf)) goto L_12c8c09f;
L_12c8c09e:;
  /* 12c8c09e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_12c8c09f:;
  /* 12c8c09f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c8c0a1 mov eax, esi */
  EAX = (ESI);
L_12c8c0a3:;
  /* 12c8c0a3 pop esi */
  ESI = (pop32());
  /* 12c8c0a4 pop ebx */
  EBX = (pop32());
  /* 12c8c0a5 ret 0x10 */
  ESPCHK(0x12c8c040u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x12c8c0b0 (117 bytes, 44 insns) */
void f_12c8c0b0(void) {
  FTRACE(0x12c8c0b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8c0b0 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8c0b1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 12c8c0b5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c8c0b7 jne 0x12c8c0d1 */
  if (!C.zf) goto L_12c8c0d1;
  /* 12c8c0b9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 12c8c0bd mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 12c8c0c1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c8c0c3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12c8c0c5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c8c0c9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12c8c0cb mov eax, edx */
  EAX = (EDX);
  /* 12c8c0cd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c8c0cf jmp 0x12c8c121 */
  goto L_12c8c121;
L_12c8c0d1:;
  /* 12c8c0d1 mov ecx, eax */
  ECX = (EAX);
  /* 12c8c0d3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 12c8c0d7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 12c8c0db mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_12c8c0df:;
  /* 12c8c0df shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12c8c0e1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 12c8c0e3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12c8c0e5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 12c8c0e7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c8c0e9 jne 0x12c8c0df */
  if (!C.zf) goto L_12c8c0df;
  /* 12c8c0eb div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12c8c0ed mov ecx, eax */
  ECX = (EAX);
  /* 12c8c0ef mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12c8c0f3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 12c8c0f4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12c8c0f8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8c0fa jb 0x12c8c10a */
  if (C.cf) goto L_12c8c10a;
  /* 12c8c0fc cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c100 ja 0x12c8c10a */
  if ((!C.cf&&!C.zf)) goto L_12c8c10a;
  /* 12c8c102 jb 0x12c8c112 */
  if (C.cf) goto L_12c8c112;
  /* 12c8c104 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c108 jbe 0x12c8c112 */
  if ((C.cf||C.zf)) goto L_12c8c112;
L_12c8c10a:;
  /* 12c8c10a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8c10e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12c8c112:;
  /* 12c8c112 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8c116 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8c11a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c8c11c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c8c11e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12c8c121:;
  /* 12c8c121 pop ebx */
  EBX = (pop32());
  /* 12c8c122 ret 0x10 */
  ESPCHK(0x12c8c0b0u, _esp0);
  ESP += 20; return;
}

/* FUN_1000c125 @ 0x12c8c125 (93 bytes, 39 insns) */
void f_12c8c125(void) {
  FTRACE(0x12c8c125u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8c125 push ebp */
  push32((uint32_t)(EBP));
  /* 12c8c126 mov ebp, esp */
  EBP = (ESP);
  /* 12c8c128 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8c129 push esi */
  push32((uint32_t)(ESI));
  /* 12c8c12a mov esi, 0x12cac7b8 */
  ESI = (0x12cac7b8u);
  /* 12c8c12f push edi */
  push32((uint32_t)(EDI));
  /* 12c8c130 push esi */
  push32((uint32_t)(ESI));
  /* 12c8c131 call dword ptr [0x12c8e034] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e034))), 0x12c8c137u);
  /* 12c8c137 mov edi, dword ptr [0x12c8e038] */
  EDI = (r32((uint32_t)(0x12c8e038)));
  /* 12c8c13d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12c8c13f cmp dword ptr [0x12cac7b4], ebx */
  { uint32_t _a=(r32((uint32_t)(0x12cac7b4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c145 je 0x12c8c155 */
  if (C.zf) goto L_12c8c155;
  /* 12c8c147 push esi */
  push32((uint32_t)(ESI));
  /* 12c8c148 call edi */
  call_ind((uint32_t)(EDI), 0x12c8c14au);
  /* 12c8c14a push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12c8c14c call 0x12c86c88 */
  push32(0x12c8c151u); f_12c86c88();
  /* 12c8c151 pop ecx */
  ECX = (pop32());
  /* 12c8c152 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c8c154 pop ebx */
  EBX = (pop32());
L_12c8c155:;
  /* 12c8c155 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 12c8c158 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 12c8c15b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c8c15e call 0x12c8c182 */
  push32(0x12c8c163u); f_12c8c182();
  /* 12c8c163 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8c166 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 12c8c169 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 12c8c16b je 0x12c8c177 */
  if (C.zf) goto L_12c8c177;
  /* 12c8c16d push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12c8c16f call 0x12c86ce9 */
  push32(0x12c8c174u); f_12c86ce9();
  /* 12c8c174 pop ecx */
  ECX = (pop32());
  /* 12c8c175 jmp 0x12c8c17a */
  goto L_12c8c17a;
L_12c8c177:;
  /* 12c8c177 push esi */
  push32((uint32_t)(ESI));
  /* 12c8c178 call edi */
  call_ind((uint32_t)(EDI), 0x12c8c17au);
L_12c8c17a:;
  /* 12c8c17a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c8c17d pop edi */
  EDI = (pop32());
  /* 12c8c17e pop esi */
  ESI = (pop32());
  /* 12c8c17f pop ebx */
  EBX = (pop32());
  /* 12c8c180 pop ebp */
  EBP = (pop32());
  /* 12c8c181 ret  */
  ESPCHK(0x12c8c125u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c182 @ 0x12c8c182 (201 bytes, 75 insns) */
void f_12c8c182(void) {
  FTRACE(0x12c8c182u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8c182 push ebp */
  push32((uint32_t)(EBP));
  /* 12c8c183 mov ebp, esp */
  EBP = (ESP);
  /* 12c8c185 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8c186 push esi */
  push32((uint32_t)(ESI));
  /* 12c8c187 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12c8c18a xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12c8c18c cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c18e je 0x12c8c1a5 */
  if (C.zf) goto L_12c8c1a5;
  /* 12c8c190 cmp dword ptr [ebp + 0x10], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c193 je 0x12c8c1a5 */
  if (C.zf) goto L_12c8c1a5;
  /* 12c8c195 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c8c197 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8c199 jne 0x12c8c1ab */
  if (!C.zf) goto L_12c8c1ab;
  /* 12c8c19b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8c19e cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c1a0 je 0x12c8c1a5 */
  if (C.zf) goto L_12c8c1a5;
  /* 12c8c1a2 mov word ptr [eax], bx */
  w16((uint32_t)(EAX), (BX));
L_12c8c1a5:;
  /* 12c8c1a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c8c1a7:;
  /* 12c8c1a7 pop esi */
  ESI = (pop32());
  /* 12c8c1a8 pop ebx */
  EBX = (pop32());
  /* 12c8c1a9 pop ebp */
  EBP = (pop32());
  /* 12c8c1aa ret  */
  ESPCHK(0x12c8c182u, _esp0);
  ESP += 4; return;
L_12c8c1ab:;
  /* 12c8c1ab cmp dword ptr [0x12cac654], ebx */
  { uint32_t _a=(r32((uint32_t)(0x12cac654))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c1b1 jne 0x12c8c1c6 */
  if (!C.zf) goto L_12c8c1c6;
  /* 12c8c1b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8c1b6 cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c1b8 je 0x12c8c1c1 */
  if (C.zf) goto L_12c8c1c1;
  /* 12c8c1ba movzx ax, al */
  AX = ((uint32_t)(AL));
  /* 12c8c1be mov word ptr [ecx], ax */
  w16((uint32_t)(ECX), (AX));
L_12c8c1c1:;
  /* 12c8c1c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c8c1c3 pop eax */
  EAX = (pop32());
  /* 12c8c1c4 jmp 0x12c8c1a7 */
  goto L_12c8c1a7;
L_12c8c1c6:;
  /* 12c8c1c6 mov ecx, dword ptr [0x12c90b18] */
  ECX = (r32((uint32_t)(0x12c90b18)));
  /* 12c8c1cc movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 12c8c1cf test byte ptr [ecx + eax*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 12c8c1d4 je 0x12c8c224 */
  if (C.zf) goto L_12c8c224;
  /* 12c8c1d6 mov eax, dword ptr [0x12c90d24] */
  EAX = (r32((uint32_t)(0x12c90d24)));
  /* 12c8c1db cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c1de jle 0x12c8c20a */
  if ((C.zf||C.sf!=C.of)) goto L_12c8c20a;
  /* 12c8c1e0 cmp dword ptr [ebp + 0x10], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c1e3 jl 0x12c8c214 */
  if ((C.sf!=C.of)) goto L_12c8c214;
  /* 12c8c1e5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c8c1e7 cmp dword ptr [ebp + 8], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c1ea setne cl */
  CL = ((!C.zf) ? 1u : 0u);
  /* 12c8c1ed push ecx */
  push32((uint32_t)(ECX));
  /* 12c8c1ee push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c8c1f1 push eax */
  push32((uint32_t)(EAX));
  /* 12c8c1f2 push esi */
  push32((uint32_t)(ESI));
  /* 12c8c1f3 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c8c1f5 push dword ptr [0x12cac664] */
  push32((uint32_t)(r32((uint32_t)(0x12cac664))));
  /* 12c8c1fb call dword ptr [0x12c8e0a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e0a0))), 0x12c8c201u);
  /* 12c8c201 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8c203 mov eax, dword ptr [0x12c90d24] */
  EAX = (r32((uint32_t)(0x12c90d24)));
  /* 12c8c208 jne 0x12c8c1a7 */
  if (!C.zf) goto L_12c8c1a7;
L_12c8c20a:;
  /* 12c8c20a cmp dword ptr [ebp + 0x10], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c20d jb 0x12c8c214 */
  if (C.cf) goto L_12c8c214;
  /* 12c8c20f cmp byte ptr [esi + 1], bl */
  { uint32_t _a=(r8((uint32_t)(ESI + 0x1))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8c212 jne 0x12c8c1a7 */
  if (!C.zf) goto L_12c8c1a7;
L_12c8c214:;
  /* 12c8c214 call 0x12c874b3 */
  push32(0x12c8c219u); f_12c874b3();
  /* 12c8c219 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 12c8c21f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c8c222 jmp 0x12c8c1a7 */
  goto L_12c8c1a7;
L_12c8c224:;
  /* 12c8c224 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c8c226 cmp dword ptr [ebp + 8], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c229 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 12c8c22c push eax */
  push32((uint32_t)(EAX));
  /* 12c8c22d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c8c230 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c8c232 push esi */
  push32((uint32_t)(ESI));
  /* 12c8c233 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c8c235 push dword ptr [0x12cac664] */
  push32((uint32_t)(r32((uint32_t)(0x12cac664))));
  /* 12c8c23b call dword ptr [0x12c8e0a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e0a0))), 0x12c8c241u);
  /* 12c8c241 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8c243 jne 0x12c8c1c1 */
  if (!C.zf) goto L_12c8c1c1;
  /* 12c8c249 jmp 0x12c8c214 */
  goto L_12c8c214;
}

/* _memset @ 0x12c8c250 (88 bytes, 40 insns) */
void f_12c8c250(void) {
  FTRACE(0x12c8c250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8c250 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 12c8c254 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c8c258 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c8c25a je 0x12c8c2a3 */
  if (C.zf) goto L_12c8c2a3;
  /* 12c8c25c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c8c25e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12c8c262 push edi */
  push32((uint32_t)(EDI));
  /* 12c8c263 mov edi, ecx */
  EDI = (ECX);
  /* 12c8c265 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c268 jb 0x12c8c297 */
  if (C.cf) goto L_12c8c297;
  /* 12c8c26a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c8c26c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12c8c26f je 0x12c8c279 */
  if (C.zf) goto L_12c8c279;
  /* 12c8c271 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12c8c273:;
  /* 12c8c273 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12c8c275 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12c8c276 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12c8c277 jne 0x12c8c273 */
  if (!C.zf) goto L_12c8c273;
L_12c8c279:;
  /* 12c8c279 mov ecx, eax */
  ECX = (EAX);
  /* 12c8c27b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12c8c27e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8c280 mov ecx, eax */
  ECX = (EAX);
  /* 12c8c282 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12c8c285 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8c287 mov ecx, edx */
  ECX = (EDX);
  /* 12c8c289 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12c8c28c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c8c28f je 0x12c8c297 */
  if (C.zf) goto L_12c8c297;
  /* 12c8c291 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12c8c293 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c8c295 je 0x12c8c29d */
  if (C.zf) goto L_12c8c29d;
L_12c8c297:;
  /* 12c8c297 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12c8c299 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12c8c29a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 12c8c29b jne 0x12c8c297 */
  if (!C.zf) goto L_12c8c297;
L_12c8c29d:;
  /* 12c8c29d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c8c2a1 pop edi */
  EDI = (pop32());
  /* 12c8c2a2 ret  */
  ESPCHK(0x12c8c250u, _esp0);
  ESP += 4; return;
L_12c8c2a3:;
  /* 12c8c2a3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c8c2a7 ret  */
  ESPCHK(0x12c8c250u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x12c8c2b0 (52 bytes, 19 insns) */
void f_12c8c2b0(void) {
  FTRACE(0x12c8c2b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8c2b0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c8c2b4 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 12c8c2b8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c8c2ba mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12c8c2be jne 0x12c8c2c9 */
  if (!C.zf) goto L_12c8c2c9;
  /* 12c8c2c0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c8c2c4 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12c8c2c6 ret 0x10 */
  ESPCHK(0x12c8c2b0u, _esp0);
  ESP += 20; return;
L_12c8c2c9:;
  /* 12c8c2c9 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8c2ca mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12c8c2cc mov ebx, eax */
  EBX = (EAX);
  /* 12c8c2ce mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c8c2d2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12c8c2d6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8c2d8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c8c2dc mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12c8c2de add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8c2e0 pop ebx */
  EBX = (pop32());
  /* 12c8c2e1 ret 0x10 */
  ESPCHK(0x12c8c2b0u, _esp0);
  ESP += 20; return;
}

/* __allshl @ 0x12c8c2f0 (31 bytes, 15 insns) */
void f_12c8c2f0(void) {
  FTRACE(0x12c8c2f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8c2f0 cmp cl, 0x40 */
  { uint32_t _a=(CL),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8c2f3 jae 0x12c8c30a */
  if (!C.cf) goto L_12c8c30a;
  /* 12c8c2f5 cmp cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8c2f8 jae 0x12c8c300 */
  if (!C.cf) goto L_12c8c300;
  /* 12c8c2fa shld edx, eax, cl */
  EDX = (sh_shld((uint32_t)(EDX),(uint32_t)(EAX),(CL)&0x1f,32));
  /* 12c8c2fd shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12c8c2ff ret  */
  ESPCHK(0x12c8c2f0u, _esp0);
  ESP += 4; return;
L_12c8c300:;
  /* 12c8c300 mov edx, eax */
  EDX = (EAX);
  /* 12c8c302 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c8c304 and cl, 0x1f */
  { uint32_t _r=(CL)&(0x1fu); CL = (_r); fl_logic(_r,8); }
  /* 12c8c307 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c8c309 ret  */
  ESPCHK(0x12c8c2f0u, _esp0);
  ESP += 4; return;
L_12c8c30a:;
  /* 12c8c30a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c8c30c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c8c30e ret  */
  ESPCHK(0x12c8c2f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c30f @ 0x12c8c30f (110 bytes, 48 insns) */
void f_12c8c30f(void) {
  FTRACE(0x12c8c30fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8c30f push ebx */
  push32((uint32_t)(EBX));
  /* 12c8c310 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c8c314 cmp ebx, -1 */
  { uint32_t _a=(EBX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c317 push esi */
  push32((uint32_t)(ESI));
  /* 12c8c318 je 0x12c8c35b */
  if (C.zf) goto L_12c8c35b;
  /* 12c8c31a mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 12c8c31e mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 12c8c321 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 12c8c323 jne 0x12c8c32d */
  if (!C.zf) goto L_12c8c32d;
  /* 12c8c325 test al, 0x80 */
  { uint32_t _r=(AL)&(0x80u); fl_logic(_r,8); }
  /* 12c8c327 je 0x12c8c35b */
  if (C.zf) goto L_12c8c35b;
  /* 12c8c329 test al, 2 */
  { uint32_t _r=(AL)&(0x2u); fl_logic(_r,8); }
  /* 12c8c32b jne 0x12c8c35b */
  if (!C.zf) goto L_12c8c35b;
L_12c8c32d:;
  /* 12c8c32d cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c331 jne 0x12c8c33a */
  if (!C.zf) goto L_12c8c33a;
  /* 12c8c333 push esi */
  push32((uint32_t)(ESI));
  /* 12c8c334 call 0x12c8bbe4 */
  push32(0x12c8c339u); f_12c8bbe4();
  /* 12c8c339 pop ecx */
  ECX = (pop32());
L_12c8c33a:;
  /* 12c8c33a mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 12c8c33c cmp eax, dword ptr [esi + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c33f jne 0x12c8c34a */
  if (!C.zf) goto L_12c8c34a;
  /* 12c8c341 cmp dword ptr [esi + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c345 jne 0x12c8c35b */
  if (!C.zf) goto L_12c8c35b;
  /* 12c8c347 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c8c348 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
L_12c8c34a:;
  /* 12c8c34a test byte ptr [esi + 0xc], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x40u); fl_logic(_r,8); }
  /* 12c8c34e je 0x12c8c361 */
  if (C.zf) goto L_12c8c361;
  /* 12c8c350 dec dword ptr [esi] */
  { uint32_t _r=(r32((uint32_t)(ESI)))-1; w32((uint32_t)(ESI), (_r)); fl_dec(_r,32); }
  /* 12c8c352 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 12c8c354 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8c356 je 0x12c8c367 */
  if (C.zf) goto L_12c8c367;
  /* 12c8c358 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c8c359 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
L_12c8c35b:;
  /* 12c8c35b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12c8c35e:;
  /* 12c8c35e pop esi */
  ESI = (pop32());
  /* 12c8c35f pop ebx */
  EBX = (pop32());
  /* 12c8c360 ret  */
  ESPCHK(0x12c8c30fu, _esp0);
  ESP += 4; return;
L_12c8c361:;
  /* 12c8c361 dec dword ptr [esi] */
  { uint32_t _r=(r32((uint32_t)(ESI)))-1; w32((uint32_t)(ESI), (_r)); fl_dec(_r,32); }
  /* 12c8c363 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 12c8c365 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
L_12c8c367:;
  /* 12c8c367 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 12c8c36a inc dword ptr [esi + 4] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))+1; w32((uint32_t)(ESI + 0x4), (_r)); fl_inc(_r,32); }
  /* 12c8c36d and al, 0xef */
  { uint32_t _r=(AL)&(0xefu); AL = (_r); fl_logic(_r,8); }
  /* 12c8c36f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 12c8c371 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 12c8c374 mov eax, ebx */
  EAX = (EBX);
  /* 12c8c376 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c8c37b jmp 0x12c8c35e */
  goto L_12c8c35e;
}

/* FUN_1000c37d @ 0x12c8c37d (318 bytes, 123 insns) */
void f_12c8c37d(void) {
  FTRACE(0x12c8c37du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8c37d push ebp */
  push32((uint32_t)(EBP));
  /* 12c8c37e mov ebp, esp */
  EBP = (ESP);
  /* 12c8c380 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c8c382 push 0x12c8e6c8 */
  push32((uint32_t)(0x12c8e6c8u));
  /* 12c8c387 push 0x12c86a64 */
  push32((uint32_t)(0x12c86a64u));
  /* 12c8c38c mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12c8c392 push eax */
  push32((uint32_t)(EAX));
  /* 12c8c393 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12c8c39a sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8c39d push ebx */
  push32((uint32_t)(EBX));
  /* 12c8c39e push esi */
  push32((uint32_t)(ESI));
  /* 12c8c39f push edi */
  push32((uint32_t)(EDI));
  /* 12c8c3a0 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12c8c3a3 mov eax, dword ptr [0x12cac614] */
  EAX = (r32((uint32_t)(0x12cac614)));
  /* 12c8c3a8 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12c8c3aa cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c3ac jne 0x12c8c3ec */
  if (!C.zf) goto L_12c8c3ec;
  /* 12c8c3ae lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 12c8c3b1 push eax */
  push32((uint32_t)(EAX));
  /* 12c8c3b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c8c3b4 pop esi */
  ESI = (pop32());
  /* 12c8c3b5 push esi */
  push32((uint32_t)(ESI));
  /* 12c8c3b6 push 0x12c8e6c4 */
  push32((uint32_t)(0x12c8e6c4u));
  /* 12c8c3bb push esi */
  push32((uint32_t)(ESI));
  /* 12c8c3bc call dword ptr [0x12c8e028] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e028))), 0x12c8c3c2u);
  /* 12c8c3c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8c3c4 je 0x12c8c3ca */
  if (C.zf) goto L_12c8c3ca;
  /* 12c8c3c6 mov eax, esi */
  EAX = (ESI);
  /* 12c8c3c8 jmp 0x12c8c3e7 */
  goto L_12c8c3e7;
L_12c8c3ca:;
  /* 12c8c3ca lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 12c8c3cd push eax */
  push32((uint32_t)(EAX));
  /* 12c8c3ce push esi */
  push32((uint32_t)(ESI));
  /* 12c8c3cf push 0x12c8e6c0 */
  push32((uint32_t)(0x12c8e6c0u));
  /* 12c8c3d4 push esi */
  push32((uint32_t)(ESI));
  /* 12c8c3d5 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8c3d6 call dword ptr [0x12c8e02c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e02c))), 0x12c8c3dcu);
  /* 12c8c3dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8c3de je 0x12c8c4b2 */
  if (C.zf) goto L_12c8c4b2;
  /* 12c8c3e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c8c3e6 pop eax */
  EAX = (pop32());
L_12c8c3e7:;
  /* 12c8c3e7 mov dword ptr [0x12cac614], eax */
  w32((uint32_t)(0x12cac614), (EAX));
L_12c8c3ec:;
  /* 12c8c3ec cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c3ef jne 0x12c8c415 */
  if (!C.zf) goto L_12c8c415;
  /* 12c8c3f1 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12c8c3f4 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c3f6 jne 0x12c8c3fd */
  if (!C.zf) goto L_12c8c3fd;
  /* 12c8c3f8 mov eax, dword ptr [0x12cac654] */
  EAX = (r32((uint32_t)(0x12cac654)));
L_12c8c3fd:;
  /* 12c8c3fd push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 12c8c400 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 12c8c403 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 12c8c406 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c8c409 push eax */
  push32((uint32_t)(EAX));
  /* 12c8c40a call dword ptr [0x12c8e02c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e02c))), 0x12c8c410u);
  /* 12c8c410 jmp 0x12c8c4b4 */
  goto L_12c8c4b4;
L_12c8c415:;
  /* 12c8c415 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c418 jne 0x12c8c4b2 */
  if (!C.zf) goto L_12c8c4b2;
  /* 12c8c41e cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c421 jne 0x12c8c42b */
  if (!C.zf) goto L_12c8c42b;
  /* 12c8c423 mov eax, dword ptr [0x12cac664] */
  EAX = (r32((uint32_t)(0x12cac664)));
  /* 12c8c428 mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_12c8c42b:;
  /* 12c8c42b push ebx */
  push32((uint32_t)(EBX));
  /* 12c8c42c push ebx */
  push32((uint32_t)(EBX));
  /* 12c8c42d push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 12c8c430 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 12c8c433 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12c8c436 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c8c438 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8c43a and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 12c8c43d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c8c43e push eax */
  push32((uint32_t)(EAX));
  /* 12c8c43f push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 12c8c442 call dword ptr [0x12c8e0a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e0a0))), 0x12c8c448u);
  /* 12c8c448 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12c8c44b cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c44d je 0x12c8c4b2 */
  if (C.zf) goto L_12c8c4b2;
  /* 12c8c44f mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 12c8c452 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 12c8c455 mov eax, edi */
  EAX = (EDI);
  /* 12c8c457 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8c45a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12c8c45c call 0x12c85470 */
  push32(0x12c8c461u); f_12c85470();
  /* 12c8c461 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12c8c464 mov esi, esp */
  ESI = (ESP);
  /* 12c8c466 mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 12c8c469 push edi */
  push32((uint32_t)(EDI));
  /* 12c8c46a push ebx */
  push32((uint32_t)(EBX));
  /* 12c8c46b push esi */
  push32((uint32_t)(ESI));
  /* 12c8c46c call 0x12c8c250 */
  push32(0x12c8c471u); f_12c8c250();
  /* 12c8c471 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8c474 jmp 0x12c8c481 */
  goto L_12c8c481;
  /* 12c8c476 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c8c478 pop eax */
  EAX = (pop32());
  /* 12c8c479 ret  */
  ESPCHK(0x12c8c37du, _esp0);
  ESP += 4; return;
  /* 12c8c47a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12c8c47d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12c8c47f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_12c8c481:;
  /* 12c8c481 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c8c485 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c487 je 0x12c8c4b2 */
  if (C.zf) goto L_12c8c4b2;
  /* 12c8c489 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 12c8c48c push esi */
  push32((uint32_t)(ESI));
  /* 12c8c48d push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 12c8c490 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 12c8c493 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c8c495 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 12c8c498 call dword ptr [0x12c8e0a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e0a0))), 0x12c8c49eu);
  /* 12c8c49e cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c4a0 je 0x12c8c4b2 */
  if (C.zf) goto L_12c8c4b2;
  /* 12c8c4a2 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 12c8c4a5 push eax */
  push32((uint32_t)(EAX));
  /* 12c8c4a6 push esi */
  push32((uint32_t)(ESI));
  /* 12c8c4a7 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c8c4aa call dword ptr [0x12c8e028] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e028))), 0x12c8c4b0u);
  /* 12c8c4b0 jmp 0x12c8c4b4 */
  goto L_12c8c4b4;
L_12c8c4b2:;
  /* 12c8c4b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c8c4b4:;
  /* 12c8c4b4 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12c8c4b7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c8c4ba mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12c8c4c1 pop edi */
  EDI = (pop32());
  /* 12c8c4c2 pop esi */
  ESI = (pop32());
  /* 12c8c4c3 pop ebx */
  EBX = (pop32());
  /* 12c8c4c4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c8c4c5 ret  */
  ESPCHK(0x12c8c37du, _esp0);
  ESP += 4; return;
}

/* FUN_1000c4c6 @ 0x12c8c4c6 (429 bytes, 143 insns) */
void f_12c8c4c6(void) {
  FTRACE(0x12c8c4c6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8c4c6 push ebp */
  push32((uint32_t)(EBP));
  /* 12c8c4c7 mov ebp, esp */
  EBP = (ESP);
  /* 12c8c4c9 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8c4cc push ebx */
  push32((uint32_t)(EBX));
  /* 12c8c4cd push esi */
  push32((uint32_t)(ESI));
  /* 12c8c4ce push edi */
  push32((uint32_t)(EDI));
  /* 12c8c4cf push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12c8c4d1 call 0x12c86c88 */
  push32(0x12c8c4d6u); f_12c86c88();
  /* 12c8c4d6 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c8c4d9 call 0x12c8c673 */
  push32(0x12c8c4deu); f_12c8c673();
  /* 12c8c4de mov ebx, eax */
  EBX = (EAX);
  /* 12c8c4e0 pop ecx */
  ECX = (pop32());
  /* 12c8c4e1 cmp ebx, dword ptr [0x12cac7bc] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x12cac7bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c4e7 pop ecx */
  ECX = (pop32());
  /* 12c8c4e8 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 12c8c4eb jne 0x12c8c4f4 */
  if (!C.zf) goto L_12c8c4f4;
L_12c8c4ed:;
  /* 12c8c4ed xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 12c8c4ef jmp 0x12c8c664 */
  goto L_12c8c664;
L_12c8c4f4:;
  /* 12c8c4f4 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 12c8c4f6 je 0x12c8c652 */
  if (C.zf) goto L_12c8c652;
  /* 12c8c4fc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c8c4fe mov eax, 0x12c92e98 */
  EAX = (0x12c92e98u);
L_12c8c503:;
  /* 12c8c503 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c505 je 0x12c8c57b */
  if (C.zf) goto L_12c8c57b;
  /* 12c8c507 add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8c50a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12c8c50b cmp eax, 0x12c92f88 */
  { uint32_t _a=(EAX),_b=(0x12c92f88u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c510 jl 0x12c8c503 */
  if ((C.sf!=C.of)) goto L_12c8c503;
  /* 12c8c512 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 12c8c515 push eax */
  push32((uint32_t)(EAX));
  /* 12c8c516 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8c517 call dword ptr [0x12c8e030] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e030))), 0x12c8c51du);
  /* 12c8c51d push 1 */
  push32((uint32_t)(0x1u));
  /* 12c8c51f pop esi */
  ESI = (pop32());
  /* 12c8c520 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c522 jne 0x12c8c649 */
  if (!C.zf) goto L_12c8c649;
  /* 12c8c528 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12c8c52a and dword ptr [0x12cac9e4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x12cac9e4)))&(0x0u); w32((uint32_t)(0x12cac9e4), (_r)); fl_logic(_r,32); }
  /* 12c8c531 pop ecx */
  ECX = (pop32());
  /* 12c8c532 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c8c534 mov edi, 0x12cac8e0 */
  EDI = (0x12cac8e0u);
  /* 12c8c539 cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c53c rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12c8c53e stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12c8c53f mov dword ptr [0x12cac7bc], ebx */
  w32((uint32_t)(0x12cac7bc), (EBX));
  /* 12c8c545 jbe 0x12c8c636 */
  if ((C.cf||C.zf)) goto L_12c8c636;
  /* 12c8c54b cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8c54f je 0x12c8c611 */
  if (C.zf) goto L_12c8c611;
  /* 12c8c555 lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_12c8c558:;
  /* 12c8c558 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12c8c55a test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12c8c55c je 0x12c8c611 */
  if (C.zf) goto L_12c8c611;
  /* 12c8c562 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 12c8c566 movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_12c8c569:;
  /* 12c8c569 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c56b ja 0x12c8c605 */
  if ((!C.cf&&!C.zf)) goto L_12c8c605;
  /* 12c8c571 or byte ptr [eax + 0x12cac8e1], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x12cac8e1)))|(0x4u); w8((uint32_t)(EAX + 0x12cac8e1), (_r)); fl_logic(_r,8); }
  /* 12c8c578 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c8c579 jmp 0x12c8c569 */
  goto L_12c8c569;
L_12c8c57b:;
  /* 12c8c57b and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c8c57f push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12c8c581 pop ecx */
  ECX = (pop32());
  /* 12c8c582 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c8c584 mov edi, 0x12cac8e0 */
  EDI = (0x12cac8e0u);
  /* 12c8c589 lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 12c8c58c rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12c8c58e shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 12c8c591 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12c8c592 lea ebx, [esi + 0x12c92ea8] */
  EBX = ((uint32_t)(ESI + 0x12c92ea8));
L_12c8c598:;
  /* 12c8c598 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8c59b mov ecx, ebx */
  ECX = (EBX);
  /* 12c8c59d je 0x12c8c5cb */
  if (C.zf) goto L_12c8c5cb;
L_12c8c59f:;
  /* 12c8c59f mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12c8c5a2 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12c8c5a4 je 0x12c8c5cb */
  if (C.zf) goto L_12c8c5cb;
  /* 12c8c5a6 movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 12c8c5a9 movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 12c8c5ac cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c5ae ja 0x12c8c5c4 */
  if ((!C.cf&&!C.zf)) goto L_12c8c5c4;
  /* 12c8c5b0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c8c5b3 mov dl, byte ptr [edx + 0x12c92e90] */
  DL = (r8((uint32_t)(EDX + 0x12c92e90)));
L_12c8c5b9:;
  /* 12c8c5b9 or byte ptr [eax + 0x12cac8e1], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x12cac8e1)))|(DL); w8((uint32_t)(EAX + 0x12cac8e1), (_r)); fl_logic(_r,8); }
  /* 12c8c5bf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c8c5c0 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c5c2 jbe 0x12c8c5b9 */
  if ((C.cf||C.zf)) goto L_12c8c5b9;
L_12c8c5c4:;
  /* 12c8c5c4 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12c8c5c5 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12c8c5c6 cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8c5c9 jne 0x12c8c59f */
  if (!C.zf) goto L_12c8c59f;
L_12c8c5cb:;
  /* 12c8c5cb inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 12c8c5ce add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8c5d1 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c5d5 jb 0x12c8c598 */
  if (C.cf) goto L_12c8c598;
  /* 12c8c5d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8c5da mov dword ptr [0x12cac7cc], 1 */
  w32((uint32_t)(0x12cac7cc), (0x1u));
  /* 12c8c5e4 push eax */
  push32((uint32_t)(EAX));
  /* 12c8c5e5 mov dword ptr [0x12cac7bc], eax */
  w32((uint32_t)(0x12cac7bc), (EAX));
  /* 12c8c5ea call 0x12c8c6bd */
  push32(0x12c8c5efu); f_12c8c6bd();
  /* 12c8c5ef lea esi, [esi + 0x12c92e9c] */
  ESI = ((uint32_t)(ESI + 0x12c92e9c));
  /* 12c8c5f5 mov edi, 0x12cac7c0 */
  EDI = (0x12cac7c0u);
  /* 12c8c5fa movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 12c8c5fb movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 12c8c5fc pop ecx */
  ECX = (pop32());
  /* 12c8c5fd mov dword ptr [0x12cac9e4], eax */
  w32((uint32_t)(0x12cac9e4), (EAX));
  /* 12c8c602 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 12c8c603 jmp 0x12c8c657 */
  goto L_12c8c657;
L_12c8c605:;
  /* 12c8c605 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12c8c606 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12c8c607 cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8c60b jne 0x12c8c558 */
  if (!C.zf) goto L_12c8c558;
L_12c8c611:;
  /* 12c8c611 mov eax, esi */
  EAX = (ESI);
L_12c8c613:;
  /* 12c8c613 or byte ptr [eax + 0x12cac8e1], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x12cac8e1)))|(0x8u); w8((uint32_t)(EAX + 0x12cac8e1), (_r)); fl_logic(_r,8); }
  /* 12c8c61a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c8c61b cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c620 jb 0x12c8c613 */
  if (C.cf) goto L_12c8c613;
  /* 12c8c622 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8c623 call 0x12c8c6bd */
  push32(0x12c8c628u); f_12c8c6bd();
  /* 12c8c628 pop ecx */
  ECX = (pop32());
  /* 12c8c629 mov dword ptr [0x12cac9e4], eax */
  w32((uint32_t)(0x12cac9e4), (EAX));
  /* 12c8c62e mov dword ptr [0x12cac7cc], esi */
  w32((uint32_t)(0x12cac7cc), (ESI));
  /* 12c8c634 jmp 0x12c8c63d */
  goto L_12c8c63d;
L_12c8c636:;
  /* 12c8c636 and dword ptr [0x12cac7cc], 0 */
  { uint32_t _r=(r32((uint32_t)(0x12cac7cc)))&(0x0u); w32((uint32_t)(0x12cac7cc), (_r)); fl_logic(_r,32); }
L_12c8c63d:;
  /* 12c8c63d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c8c63f mov edi, 0x12cac7c0 */
  EDI = (0x12cac7c0u);
  /* 12c8c644 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 12c8c645 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 12c8c646 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 12c8c647 jmp 0x12c8c657 */
  goto L_12c8c657;
L_12c8c649:;
  /* 12c8c649 cmp dword ptr [0x12cac618], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12cac618))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c650 je 0x12c8c661 */
  if (C.zf) goto L_12c8c661;
L_12c8c652:;
  /* 12c8c652 call 0x12c8c6f0 */
  push32(0x12c8c657u); f_12c8c6f0();
L_12c8c657:;
  /* 12c8c657 call 0x12c8c719 */
  push32(0x12c8c65cu); f_12c8c719();
  /* 12c8c65c jmp 0x12c8c4ed */
  goto L_12c8c4ed;
L_12c8c661:;
  /* 12c8c661 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_12c8c664:;
  /* 12c8c664 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12c8c666 call 0x12c86ce9 */
  push32(0x12c8c66bu); f_12c86ce9();
  /* 12c8c66b pop ecx */
  ECX = (pop32());
  /* 12c8c66c mov eax, esi */
  EAX = (ESI);
  /* 12c8c66e pop edi */
  EDI = (pop32());
  /* 12c8c66f pop esi */
  ESI = (pop32());
  /* 12c8c670 pop ebx */
  EBX = (pop32());
  /* 12c8c671 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c8c672 ret  */
  ESPCHK(0x12c8c4c6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c673 @ 0x12c8c673 (74 bytes, 15 insns) */
void f_12c8c673(void) {
  FTRACE(0x12c8c673u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8c673 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c8c677 and dword ptr [0x12cac618], 0 */
  { uint32_t _r=(r32((uint32_t)(0x12cac618)))&(0x0u); w32((uint32_t)(0x12cac618), (_r)); fl_logic(_r,32); }
  /* 12c8c67e cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c681 jne 0x12c8c693 */
  if (!C.zf) goto L_12c8c693;
  /* 12c8c683 mov dword ptr [0x12cac618], 1 */
  w32((uint32_t)(0x12cac618), (0x1u));
  /* 12c8c68d jmp dword ptr [0x12c8e01c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12c8e01c)))); return;
L_12c8c693:;
  /* 12c8c693 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c696 jne 0x12c8c6a8 */
  if (!C.zf) goto L_12c8c6a8;
  /* 12c8c698 mov dword ptr [0x12cac618], 1 */
  w32((uint32_t)(0x12cac618), (0x1u));
  /* 12c8c6a2 jmp dword ptr [0x12c8e020] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12c8e020)))); return;
L_12c8c6a8:;
  /* 12c8c6a8 cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c6ab jne 0x12c8c6bc */
  if (!C.zf) goto L_12c8c6bc;
  /* 12c8c6ad mov eax, dword ptr [0x12cac664] */
  EAX = (r32((uint32_t)(0x12cac664)));
  /* 12c8c6b2 mov dword ptr [0x12cac618], 1 */
  w32((uint32_t)(0x12cac618), (0x1u));
L_12c8c6bc:;
  /* 12c8c6bc ret  */
  ESPCHK(0x12c8c673u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6bd @ 0x12c8c6bd (51 bytes, 19 insns) */
void f_12c8c6bd(void) {
  FTRACE(0x12c8c6bdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8c6bd mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c8c6c1 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8c6c6 je 0x12c8c6ea */
  if (C.zf) goto L_12c8c6ea;
  /* 12c8c6c8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8c6cb je 0x12c8c6e4 */
  if (C.zf) goto L_12c8c6e4;
  /* 12c8c6cd sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8c6d0 je 0x12c8c6de */
  if (C.zf) goto L_12c8c6de;
  /* 12c8c6d2 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 12c8c6d3 je 0x12c8c6d8 */
  if (C.zf) goto L_12c8c6d8;
  /* 12c8c6d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c8c6d7 ret  */
  ESPCHK(0x12c8c6bdu, _esp0);
  ESP += 4; return;
L_12c8c6d8:;
  /* 12c8c6d8 mov eax, 0x404 */
  EAX = (0x404u);
  /* 12c8c6dd ret  */
  ESPCHK(0x12c8c6bdu, _esp0);
  ESP += 4; return;
L_12c8c6de:;
  /* 12c8c6de mov eax, 0x412 */
  EAX = (0x412u);
  /* 12c8c6e3 ret  */
  ESPCHK(0x12c8c6bdu, _esp0);
  ESP += 4; return;
L_12c8c6e4:;
  /* 12c8c6e4 mov eax, 0x804 */
  EAX = (0x804u);
  /* 12c8c6e9 ret  */
  ESPCHK(0x12c8c6bdu, _esp0);
  ESP += 4; return;
L_12c8c6ea:;
  /* 12c8c6ea mov eax, 0x411 */
  EAX = (0x411u);
  /* 12c8c6ef ret  */
  ESPCHK(0x12c8c6bdu, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6f0 @ 0x12c8c6f0 (41 bytes, 17 insns) */
void f_12c8c6f0(void) {
  FTRACE(0x12c8c6f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8c6f0 push edi */
  push32((uint32_t)(EDI));
  /* 12c8c6f1 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12c8c6f3 pop ecx */
  ECX = (pop32());
  /* 12c8c6f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c8c6f6 mov edi, 0x12cac8e0 */
  EDI = (0x12cac8e0u);
  /* 12c8c6fb rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12c8c6fd stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12c8c6fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c8c700 mov edi, 0x12cac7c0 */
  EDI = (0x12cac7c0u);
  /* 12c8c705 mov dword ptr [0x12cac7bc], eax */
  w32((uint32_t)(0x12cac7bc), (EAX));
  /* 12c8c70a mov dword ptr [0x12cac7cc], eax */
  w32((uint32_t)(0x12cac7cc), (EAX));
  /* 12c8c70f mov dword ptr [0x12cac9e4], eax */
  w32((uint32_t)(0x12cac9e4), (EAX));
  /* 12c8c714 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 12c8c715 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 12c8c716 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 12c8c717 pop edi */
  EDI = (pop32());
  /* 12c8c718 ret  */
  ESPCHK(0x12c8c6f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c719 @ 0x12c8c719 (389 bytes, 124 insns) */
void f_12c8c719(void) {
  FTRACE(0x12c8c719u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8c719 push ebp */
  push32((uint32_t)(EBP));
  /* 12c8c71a mov ebp, esp */
  EBP = (ESP);
  /* 12c8c71c sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8c722 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 12c8c725 push esi */
  push32((uint32_t)(ESI));
  /* 12c8c726 push eax */
  push32((uint32_t)(EAX));
  /* 12c8c727 push dword ptr [0x12cac7bc] */
  push32((uint32_t)(r32((uint32_t)(0x12cac7bc))));
  /* 12c8c72d call dword ptr [0x12c8e030] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e030))), 0x12c8c733u);
  /* 12c8c733 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c736 jne 0x12c8c852 */
  if (!C.zf) goto L_12c8c852;
  /* 12c8c73c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c8c73e mov esi, 0x100 */
  ESI = (0x100u);
L_12c8c743:;
  /* 12c8c743 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 12c8c74a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c8c74b cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c74d jb 0x12c8c743 */
  if (C.cf) goto L_12c8c743;
  /* 12c8c74f mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 12c8c752 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 12c8c759 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12c8c75b je 0x12c8c794 */
  if (C.zf) goto L_12c8c794;
  /* 12c8c75d push ebx */
  push32((uint32_t)(EBX));
  /* 12c8c75e push edi */
  push32((uint32_t)(EDI));
  /* 12c8c75f lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_12c8c762:;
  /* 12c8c762 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 12c8c765 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 12c8c768 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c76a ja 0x12c8c789 */
  if ((!C.cf&&!C.zf)) goto L_12c8c789;
  /* 12c8c76c sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8c76e lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 12c8c775 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12c8c776 mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 12c8c77b mov ebx, ecx */
  EBX = (ECX);
  /* 12c8c77d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c8c780 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12c8c782 mov ecx, ebx */
  ECX = (EBX);
  /* 12c8c784 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12c8c787 rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_12c8c789:;
  /* 12c8c789 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12c8c78a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12c8c78b mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 12c8c78e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12c8c790 jne 0x12c8c762 */
  if (!C.zf) goto L_12c8c762;
  /* 12c8c792 pop edi */
  EDI = (pop32());
  /* 12c8c793 pop ebx */
  EBX = (pop32());
L_12c8c794:;
  /* 12c8c794 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c8c796 lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 12c8c79c push dword ptr [0x12cac9e4] */
  push32((uint32_t)(r32((uint32_t)(0x12cac9e4))));
  /* 12c8c7a2 push dword ptr [0x12cac7bc] */
  push32((uint32_t)(r32((uint32_t)(0x12cac7bc))));
  /* 12c8c7a8 push eax */
  push32((uint32_t)(EAX));
  /* 12c8c7a9 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 12c8c7af push esi */
  push32((uint32_t)(ESI));
  /* 12c8c7b0 push eax */
  push32((uint32_t)(EAX));
  /* 12c8c7b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c8c7b3 call 0x12c8c37d */
  push32(0x12c8c7b8u); f_12c8c37d();
  /* 12c8c7b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c8c7ba lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 12c8c7c0 push dword ptr [0x12cac7bc] */
  push32((uint32_t)(r32((uint32_t)(0x12cac7bc))));
  /* 12c8c7c6 push esi */
  push32((uint32_t)(ESI));
  /* 12c8c7c7 push eax */
  push32((uint32_t)(EAX));
  /* 12c8c7c8 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 12c8c7ce push esi */
  push32((uint32_t)(ESI));
  /* 12c8c7cf push eax */
  push32((uint32_t)(EAX));
  /* 12c8c7d0 push esi */
  push32((uint32_t)(ESI));
  /* 12c8c7d1 push dword ptr [0x12cac9e4] */
  push32((uint32_t)(r32((uint32_t)(0x12cac9e4))));
  /* 12c8c7d7 call 0x12c8ce4c */
  push32(0x12c8c7dcu); f_12c8ce4c();
  /* 12c8c7dc push 0 */
  push32((uint32_t)(0x0u));
  /* 12c8c7de lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 12c8c7e4 push dword ptr [0x12cac7bc] */
  push32((uint32_t)(r32((uint32_t)(0x12cac7bc))));
  /* 12c8c7ea push esi */
  push32((uint32_t)(ESI));
  /* 12c8c7eb push eax */
  push32((uint32_t)(EAX));
  /* 12c8c7ec lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 12c8c7f2 push esi */
  push32((uint32_t)(ESI));
  /* 12c8c7f3 push eax */
  push32((uint32_t)(EAX));
  /* 12c8c7f4 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 12c8c7f9 push dword ptr [0x12cac9e4] */
  push32((uint32_t)(r32((uint32_t)(0x12cac9e4))));
  /* 12c8c7ff call 0x12c8ce4c */
  push32(0x12c8c804u); f_12c8ce4c();
  /* 12c8c804 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8c807 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c8c809 lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_12c8c80f:;
  /* 12c8c80f mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12c8c812 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 12c8c815 je 0x12c8c82d */
  if (C.zf) goto L_12c8c82d;
  /* 12c8c817 or byte ptr [eax + 0x12cac8e1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x12cac8e1)))|(0x10u); w8((uint32_t)(EAX + 0x12cac8e1), (_r)); fl_logic(_r,8); }
  /* 12c8c81e mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_12c8c825:;
  /* 12c8c825 mov byte ptr [eax + 0x12cac7e0], dl */
  w8((uint32_t)(EAX + 0x12cac7e0), (DL));
  /* 12c8c82b jmp 0x12c8c849 */
  goto L_12c8c849;
L_12c8c82d:;
  /* 12c8c82d test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 12c8c830 je 0x12c8c842 */
  if (C.zf) goto L_12c8c842;
  /* 12c8c832 or byte ptr [eax + 0x12cac8e1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x12cac8e1)))|(0x20u); w8((uint32_t)(EAX + 0x12cac8e1), (_r)); fl_logic(_r,8); }
  /* 12c8c839 mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 12c8c840 jmp 0x12c8c825 */
  goto L_12c8c825;
L_12c8c842:;
  /* 12c8c842 and byte ptr [eax + 0x12cac7e0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x12cac7e0)))&(0x0u); w8((uint32_t)(EAX + 0x12cac7e0), (_r)); fl_logic(_r,8); }
L_12c8c849:;
  /* 12c8c849 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c8c84a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12c8c84b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12c8c84c cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c84e jb 0x12c8c80f */
  if (C.cf) goto L_12c8c80f;
  /* 12c8c850 jmp 0x12c8c89b */
  goto L_12c8c89b;
L_12c8c852:;
  /* 12c8c852 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c8c854 mov esi, 0x100 */
  ESI = (0x100u);
L_12c8c859:;
  /* 12c8c859 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c85c jb 0x12c8c877 */
  if (C.cf) goto L_12c8c877;
  /* 12c8c85e cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c861 ja 0x12c8c877 */
  if ((!C.cf&&!C.zf)) goto L_12c8c877;
  /* 12c8c863 or byte ptr [eax + 0x12cac8e1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x12cac8e1)))|(0x10u); w8((uint32_t)(EAX + 0x12cac8e1), (_r)); fl_logic(_r,8); }
  /* 12c8c86a mov cl, al */
  CL = (AL);
  /* 12c8c86c add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_12c8c86f:;
  /* 12c8c86f mov byte ptr [eax + 0x12cac7e0], cl */
  w8((uint32_t)(EAX + 0x12cac7e0), (CL));
  /* 12c8c875 jmp 0x12c8c896 */
  goto L_12c8c896;
L_12c8c877:;
  /* 12c8c877 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c87a jb 0x12c8c88f */
  if (C.cf) goto L_12c8c88f;
  /* 12c8c87c cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c87f ja 0x12c8c88f */
  if ((!C.cf&&!C.zf)) goto L_12c8c88f;
  /* 12c8c881 or byte ptr [eax + 0x12cac8e1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x12cac8e1)))|(0x20u); w8((uint32_t)(EAX + 0x12cac8e1), (_r)); fl_logic(_r,8); }
  /* 12c8c888 mov cl, al */
  CL = (AL);
  /* 12c8c88a sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12c8c88d jmp 0x12c8c86f */
  goto L_12c8c86f;
L_12c8c88f:;
  /* 12c8c88f and byte ptr [eax + 0x12cac7e0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x12cac7e0)))&(0x0u); w8((uint32_t)(EAX + 0x12cac7e0), (_r)); fl_logic(_r,8); }
L_12c8c896:;
  /* 12c8c896 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c8c897 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c899 jb 0x12c8c859 */
  if (C.cf) goto L_12c8c859;
L_12c8c89b:;
  /* 12c8c89b pop esi */
  ESI = (pop32());
  /* 12c8c89c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c8c89d ret  */
  ESPCHK(0x12c8c719u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c89e @ 0x12c8c89e (28 bytes, 7 insns) */
void f_12c8c89e(void) {
  FTRACE(0x12c8c89eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8c89e cmp dword ptr [0x12cadb48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12cadb48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c8a5 jne 0x12c8c8b9 */
  if (!C.zf) goto L_12c8c8b9;
  /* 12c8c8a7 push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 12c8c8a9 call 0x12c8c4c6 */
  push32(0x12c8c8aeu); f_12c8c4c6();
  /* 12c8c8ae pop ecx */
  ECX = (pop32());
  /* 12c8c8af mov dword ptr [0x12cadb48], 1 */
  w32((uint32_t)(0x12cadb48), (0x1u));
L_12c8c8b9:;
  /* 12c8c8b9 ret  */
  ESPCHK(0x12c8c89eu, _esp0);
  ESP += 4; return;
}

/* FUN_1000c8ba @ 0x12c8c8ba (23 bytes, 7 insns) */
void f_12c8c8ba(void) {
  FTRACE(0x12c8c8bau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8c8ba push 0 */
  push32((uint32_t)(0x0u));
  /* 12c8c8bc push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 12c8c8c0 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 12c8c8c4 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 12c8c8c8 call 0x12c8c8d1 */
  push32(0x12c8c8cdu); f_12c8c8d1();
  /* 12c8c8cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8c8d0 ret  */
  ESPCHK(0x12c8c8bau, _esp0);
  ESP += 4; return;
}

/* FUN_1000c8d1 @ 0x12c8c8d1 (517 bytes, 195 insns) */
void f_12c8c8d1(void) {
  FTRACE(0x12c8c8d1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8c8d1 push ebp */
  push32((uint32_t)(EBP));
  /* 12c8c8d2 mov ebp, esp */
  EBP = (ESP);
  /* 12c8c8d4 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8c8d7 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8c8d8 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 12c8c8dc push esi */
  push32((uint32_t)(ESI));
  /* 12c8c8dd push edi */
  push32((uint32_t)(EDI));
  /* 12c8c8de mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8c8e1 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 12c8c8e3 lea esi, [edi + 1] */
  ESI = ((uint32_t)(EDI + 0x1));
  /* 12c8c8e6 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_12c8c8e9:;
  /* 12c8c8e9 cmp dword ptr [0x12c90d24], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c90d24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c8f0 jle 0x12c8c901 */
  if ((C.zf||C.sf!=C.of)) goto L_12c8c901;
  /* 12c8c8f2 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 12c8c8f5 push 8 */
  push32((uint32_t)(0x8u));
  /* 12c8c8f7 push eax */
  push32((uint32_t)(EAX));
  /* 12c8c8f8 call 0x12c897ff */
  push32(0x12c8c8fdu); f_12c897ff();
  /* 12c8c8fd pop ecx */
  ECX = (pop32());
  /* 12c8c8fe pop ecx */
  ECX = (pop32());
  /* 12c8c8ff jmp 0x12c8c910 */
  goto L_12c8c910;
L_12c8c901:;
  /* 12c8c901 mov ecx, dword ptr [0x12c90b18] */
  ECX = (r32((uint32_t)(0x12c90b18)));
  /* 12c8c907 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 12c8c90a mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 12c8c90d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
L_12c8c910:;
  /* 12c8c910 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8c912 je 0x12c8c919 */
  if (C.zf) goto L_12c8c919;
  /* 12c8c914 mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 12c8c916 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c8c917 jmp 0x12c8c8e9 */
  goto L_12c8c8e9;
L_12c8c919:;
  /* 12c8c919 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8c91c mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 12c8c91f jne 0x12c8c927 */
  if (!C.zf) goto L_12c8c927;
  /* 12c8c921 or dword ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x2u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 12c8c925 jmp 0x12c8c92c */
  goto L_12c8c92c;
L_12c8c927:;
  /* 12c8c927 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8c92a jne 0x12c8c932 */
  if (!C.zf) goto L_12c8c932;
L_12c8c92c:;
  /* 12c8c92c mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 12c8c92e inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c8c92f mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_12c8c932:;
  /* 12c8c932 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c8c935 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8c937 jl 0x12c8cac6 */
  if ((C.sf!=C.of)) goto L_12c8cac6;
  /* 12c8c93d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c940 je 0x12c8cac6 */
  if (C.zf) goto L_12c8cac6;
  /* 12c8c946 cmp eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c949 jg 0x12c8cac6 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c8cac6;
  /* 12c8c94f push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12c8c951 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8c953 pop ecx */
  ECX = (pop32());
  /* 12c8c954 jne 0x12c8c97a */
  if (!C.zf) goto L_12c8c97a;
  /* 12c8c956 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8c959 je 0x12c8c964 */
  if (C.zf) goto L_12c8c964;
  /* 12c8c95b mov dword ptr [ebp + 0x10], 0xa */
  w32((uint32_t)(EBP + 0x10), (0xau));
  /* 12c8c962 jmp 0x12c8c996 */
  goto L_12c8c996;
L_12c8c964:;
  /* 12c8c964 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c8c966 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8c968 je 0x12c8c977 */
  if (C.zf) goto L_12c8c977;
  /* 12c8c96a cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8c96c je 0x12c8c977 */
  if (C.zf) goto L_12c8c977;
  /* 12c8c96e mov dword ptr [ebp + 0x10], 8 */
  w32((uint32_t)(EBP + 0x10), (0x8u));
  /* 12c8c975 jmp 0x12c8c996 */
  goto L_12c8c996;
L_12c8c977:;
  /* 12c8c977 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_12c8c97a:;
  /* 12c8c97a cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c97d jne 0x12c8c996 */
  if (!C.zf) goto L_12c8c996;
  /* 12c8c97f cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8c982 jne 0x12c8c996 */
  if (!C.zf) goto L_12c8c996;
  /* 12c8c984 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c8c986 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8c988 je 0x12c8c98e */
  if (C.zf) goto L_12c8c98e;
  /* 12c8c98a cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8c98c jne 0x12c8c996 */
  if (!C.zf) goto L_12c8c996;
L_12c8c98e:;
  /* 12c8c98e mov bl, byte ptr [esi + 1] */
  BL = (r8((uint32_t)(ESI + 0x1)));
  /* 12c8c991 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c8c992 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c8c993 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_12c8c996:;
  /* 12c8c996 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c8c999 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c8c99b div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12c8c99e mov edi, 0x103 */
  EDI = (0x103u);
  /* 12c8c9a3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12c8c9a6:;
  /* 12c8c9a6 cmp dword ptr [0x12c90d24], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c90d24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c9ad movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 12c8c9b0 jle 0x12c8c9be */
  if ((C.zf||C.sf!=C.of)) goto L_12c8c9be;
  /* 12c8c9b2 push 4 */
  push32((uint32_t)(0x4u));
  /* 12c8c9b4 push esi */
  push32((uint32_t)(ESI));
  /* 12c8c9b5 call 0x12c897ff */
  push32(0x12c8c9bau); f_12c897ff();
  /* 12c8c9ba pop ecx */
  ECX = (pop32());
  /* 12c8c9bb pop ecx */
  ECX = (pop32());
  /* 12c8c9bc jmp 0x12c8c9c9 */
  goto L_12c8c9c9;
L_12c8c9be:;
  /* 12c8c9be mov eax, dword ptr [0x12c90b18] */
  EAX = (r32((uint32_t)(0x12c90b18)));
  /* 12c8c9c3 mov al, byte ptr [eax + esi*2] */
  AL = (r8((uint32_t)(EAX + ESI*2)));
  /* 12c8c9c6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_12c8c9c9:;
  /* 12c8c9c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8c9cb je 0x12c8c9d5 */
  if (C.zf) goto L_12c8c9d5;
  /* 12c8c9cd movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 12c8c9d0 sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8c9d3 jmp 0x12c8ca07 */
  goto L_12c8ca07;
L_12c8c9d5:;
  /* 12c8c9d5 cmp dword ptr [0x12c90d24], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c90d24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8c9dc jle 0x12c8c9e9 */
  if ((C.zf||C.sf!=C.of)) goto L_12c8c9e9;
  /* 12c8c9de push edi */
  push32((uint32_t)(EDI));
  /* 12c8c9df push esi */
  push32((uint32_t)(ESI));
  /* 12c8c9e0 call 0x12c897ff */
  push32(0x12c8c9e5u); f_12c897ff();
  /* 12c8c9e5 pop ecx */
  ECX = (pop32());
  /* 12c8c9e6 pop ecx */
  ECX = (pop32());
  /* 12c8c9e7 jmp 0x12c8c9f4 */
  goto L_12c8c9f4;
L_12c8c9e9:;
  /* 12c8c9e9 mov eax, dword ptr [0x12c90b18] */
  EAX = (r32((uint32_t)(0x12c90b18)));
  /* 12c8c9ee mov ax, word ptr [eax + esi*2] */
  AX = (r16((uint32_t)(EAX + ESI*2)));
  /* 12c8c9f2 and eax, edi */
  { uint32_t _r=(EAX)&(EDI); EAX = (_r); fl_logic(_r,32); }
L_12c8c9f4:;
  /* 12c8c9f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8c9f6 je 0x12c8ca42 */
  if (C.zf) goto L_12c8ca42;
  /* 12c8c9f8 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 12c8c9fb push eax */
  push32((uint32_t)(EAX));
  /* 12c8c9fc call 0x12c8d09b */
  push32(0x12c8ca01u); f_12c8d09b();
  /* 12c8ca01 pop ecx */
  ECX = (pop32());
  /* 12c8ca02 mov ecx, eax */
  ECX = (EAX);
  /* 12c8ca04 sub ecx, 0x37 */
  { uint32_t _a=(ECX),_b=(0x37u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
L_12c8ca07:;
  /* 12c8ca07 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8ca0a jae 0x12c8ca42 */
  if (!C.cf) goto L_12c8ca42;
  /* 12c8ca0c mov esi, dword ptr [ebp - 8] */
  ESI = (r32((uint32_t)(EBP + -0x8)));
  /* 12c8ca0f or dword ptr [ebp + 0x14], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x8u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 12c8ca13 cmp esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8ca16 jb 0x12c8ca2c */
  if (C.cf) goto L_12c8ca2c;
  /* 12c8ca18 jne 0x12c8ca26 */
  if (!C.zf) goto L_12c8ca26;
  /* 12c8ca1a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c8ca1d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c8ca1f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12c8ca22 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8ca24 jbe 0x12c8ca2c */
  if ((C.cf||C.zf)) goto L_12c8ca2c;
L_12c8ca26:;
  /* 12c8ca26 or dword ptr [ebp + 0x14], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x4u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 12c8ca2a jmp 0x12c8ca35 */
  goto L_12c8ca35;
L_12c8ca2c:;
  /* 12c8ca2c imul esi, dword ptr [ebp + 0x10] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x10)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c8ca30 add esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8ca32 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
L_12c8ca35:;
  /* 12c8ca35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c8ca38 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 12c8ca3b mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 12c8ca3d jmp 0x12c8c9a6 */
  goto L_12c8c9a6;
L_12c8ca42:;
  /* 12c8ca42 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c8ca45 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 12c8ca48 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c8ca4b test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 12c8ca4d jne 0x12c8ca5f */
  if (!C.zf) goto L_12c8ca5f;
  /* 12c8ca4f test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 12c8ca51 je 0x12c8ca59 */
  if (C.zf) goto L_12c8ca59;
  /* 12c8ca53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8ca56 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c8ca59:;
  /* 12c8ca59 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 12c8ca5d jmp 0x12c8caaa */
  goto L_12c8caaa;
L_12c8ca5f:;
  /* 12c8ca5f test al, 4 */
  { uint32_t _r=(AL)&(0x4u); fl_logic(_r,8); }
  /* 12c8ca61 mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
  /* 12c8ca66 jne 0x12c8ca83 */
  if (!C.zf) goto L_12c8ca83;
  /* 12c8ca68 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 12c8ca6a jne 0x12c8caaa */
  if (!C.zf) goto L_12c8caaa;
  /* 12c8ca6c and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 12c8ca6f je 0x12c8ca7a */
  if (C.zf) goto L_12c8ca7a;
  /* 12c8ca71 cmp dword ptr [ebp - 8], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8ca78 ja 0x12c8ca83 */
  if ((!C.cf&&!C.zf)) goto L_12c8ca83;
L_12c8ca7a:;
  /* 12c8ca7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8ca7c jne 0x12c8caaa */
  if (!C.zf) goto L_12c8caaa;
  /* 12c8ca7e cmp dword ptr [ebp - 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8ca81 jbe 0x12c8caaa */
  if ((C.cf||C.zf)) goto L_12c8caaa;
L_12c8ca83:;
  /* 12c8ca83 call 0x12c874b3 */
  push32(0x12c8ca88u); f_12c874b3();
  /* 12c8ca88 test byte ptr [ebp + 0x14], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x1u); fl_logic(_r,8); }
  /* 12c8ca8c mov dword ptr [eax], 0x22 */
  w32((uint32_t)(EAX), (0x22u));
  /* 12c8ca92 je 0x12c8ca9a */
  if (C.zf) goto L_12c8ca9a;
  /* 12c8ca94 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 12c8ca98 jmp 0x12c8caaa */
  goto L_12c8caaa;
L_12c8ca9a:;
  /* 12c8ca9a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c8ca9d and al, 2 */
  { uint32_t _r=(AL)&(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 12c8ca9f neg al */
  { uint32_t _a=(AL),_r=0u-_a; AL = (_r); fl_sub(0,_a,_r,8); }
  /* 12c8caa1 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8caa3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c8caa5 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8caa7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12c8caaa:;
  /* 12c8caaa test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 12c8caac je 0x12c8cab3 */
  if (C.zf) goto L_12c8cab3;
  /* 12c8caae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c8cab1 mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
L_12c8cab3:;
  /* 12c8cab3 test byte ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x2u); fl_logic(_r,8); }
  /* 12c8cab7 je 0x12c8cac1 */
  if (C.zf) goto L_12c8cac1;
  /* 12c8cab9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c8cabc neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c8cabe mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12c8cac1:;
  /* 12c8cac1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c8cac4 jmp 0x12c8cad1 */
  goto L_12c8cad1;
L_12c8cac6:;
  /* 12c8cac6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c8cac9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8cacb je 0x12c8cacf */
  if (C.zf) goto L_12c8cacf;
  /* 12c8cacd mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_12c8cacf:;
  /* 12c8cacf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c8cad1:;
  /* 12c8cad1 pop edi */
  EDI = (pop32());
  /* 12c8cad2 pop esi */
  ESI = (pop32());
  /* 12c8cad3 pop ebx */
  EBX = (pop32());
  /* 12c8cad4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c8cad5 ret  */
  ESPCHK(0x12c8c8d1u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cad6 @ 0x12c8cad6 (137 bytes, 50 insns) */
void f_12c8cad6(void) {
  FTRACE(0x12c8cad6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8cad6 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8cad7 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12c8cad9 cmp dword ptr [0x12cac61c], ebx */
  { uint32_t _a=(r32((uint32_t)(0x12cac61c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8cadf push esi */
  push32((uint32_t)(ESI));
  /* 12c8cae0 push edi */
  push32((uint32_t)(EDI));
  /* 12c8cae1 jne 0x12c8cb25 */
  if (!C.zf) goto L_12c8cb25;
  /* 12c8cae3 push 0x12c8e704 */
  push32((uint32_t)(0x12c8e704u));
  /* 12c8cae8 call dword ptr [0x12c8e024] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e024))), 0x12c8caeeu);
  /* 12c8caee mov edi, eax */
  EDI = (EAX);
  /* 12c8caf0 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8caf2 je 0x12c8cb5b */
  if (C.zf) goto L_12c8cb5b;
  /* 12c8caf4 mov esi, dword ptr [0x12c8e098] */
  ESI = (r32((uint32_t)(0x12c8e098)));
  /* 12c8cafa push 0x12c8e6f8 */
  push32((uint32_t)(0x12c8e6f8u));
  /* 12c8caff push edi */
  push32((uint32_t)(EDI));
  /* 12c8cb00 call esi */
  call_ind((uint32_t)(ESI), 0x12c8cb02u);
  /* 12c8cb02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8cb04 mov dword ptr [0x12cac61c], eax */
  w32((uint32_t)(0x12cac61c), (EAX));
  /* 12c8cb09 je 0x12c8cb5b */
  if (C.zf) goto L_12c8cb5b;
  /* 12c8cb0b push 0x12c8e6e8 */
  push32((uint32_t)(0x12c8e6e8u));
  /* 12c8cb10 push edi */
  push32((uint32_t)(EDI));
  /* 12c8cb11 call esi */
  call_ind((uint32_t)(ESI), 0x12c8cb13u);
  /* 12c8cb13 push 0x12c8e6d4 */
  push32((uint32_t)(0x12c8e6d4u));
  /* 12c8cb18 push edi */
  push32((uint32_t)(EDI));
  /* 12c8cb19 mov dword ptr [0x12cac620], eax */
  w32((uint32_t)(0x12cac620), (EAX));
  /* 12c8cb1e call esi */
  call_ind((uint32_t)(ESI), 0x12c8cb20u);
  /* 12c8cb20 mov dword ptr [0x12cac624], eax */
  w32((uint32_t)(0x12cac624), (EAX));
L_12c8cb25:;
  /* 12c8cb25 mov eax, dword ptr [0x12cac620] */
  EAX = (r32((uint32_t)(0x12cac620)));
  /* 12c8cb2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8cb2c je 0x12c8cb44 */
  if (C.zf) goto L_12c8cb44;
  /* 12c8cb2e call eax */
  call_ind((uint32_t)(EAX), 0x12c8cb30u);
  /* 12c8cb30 mov ebx, eax */
  EBX = (EAX);
  /* 12c8cb32 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 12c8cb34 je 0x12c8cb44 */
  if (C.zf) goto L_12c8cb44;
  /* 12c8cb36 mov eax, dword ptr [0x12cac624] */
  EAX = (r32((uint32_t)(0x12cac624)));
  /* 12c8cb3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8cb3d je 0x12c8cb44 */
  if (C.zf) goto L_12c8cb44;
  /* 12c8cb3f push ebx */
  push32((uint32_t)(EBX));
  /* 12c8cb40 call eax */
  call_ind((uint32_t)(EAX), 0x12c8cb42u);
  /* 12c8cb42 mov ebx, eax */
  EBX = (EAX);
L_12c8cb44:;
  /* 12c8cb44 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 12c8cb48 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 12c8cb4c push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 12c8cb50 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8cb51 call dword ptr [0x12cac61c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12cac61c))), 0x12c8cb57u);
L_12c8cb57:;
  /* 12c8cb57 pop edi */
  EDI = (pop32());
  /* 12c8cb58 pop esi */
  ESI = (pop32());
  /* 12c8cb59 pop ebx */
  EBX = (pop32());
  /* 12c8cb5a ret  */
  ESPCHK(0x12c8cad6u, _esp0);
  ESP += 4; return;
L_12c8cb5b:;
  /* 12c8cb5b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c8cb5d jmp 0x12c8cb57 */
  goto L_12c8cb57;
}

/* FUN_1000cb5f @ 0x12c8cb5f (386 bytes, 138 insns) */
void f_12c8cb5f(void) {
  FTRACE(0x12c8cb5fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8cb5f push ebp */
  push32((uint32_t)(EBP));
  /* 12c8cb60 mov ebp, esp */
  EBP = (ESP);
  /* 12c8cb62 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8cb65 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8cb68 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c8cb6c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 12c8cb6d push ebx */
  push32((uint32_t)(EBX));
  /* 12c8cb6e push esi */
  push32((uint32_t)(ESI));
  /* 12c8cb6f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 12c8cb70 push edi */
  push32((uint32_t)(EDI));
  /* 12c8cb71 je 0x12c8cbda */
  if (C.zf) goto L_12c8cbda;
  /* 12c8cb73 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 12c8cb74 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 12c8cb75 je 0x12c8cbbd */
  if (C.zf) goto L_12c8cbbd;
  /* 12c8cb77 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8cb7a je 0x12c8cbbd */
  if (C.zf) goto L_12c8cbbd;
  /* 12c8cb7c sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8cb7f je 0x12c8cbbd */
  if (C.zf) goto L_12c8cbbd;
  /* 12c8cb81 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8cb84 je 0x12c8cbb0 */
  if (C.zf) goto L_12c8cbb0;
  /* 12c8cb86 sub eax, 6 */
  { uint32_t _a=(EAX),_b=(0x6u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8cb89 je 0x12c8cba3 */
  if (C.zf) goto L_12c8cba3;
  /* 12c8cb8b dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 12c8cb8c je 0x12c8cb96 */
  if (C.zf) goto L_12c8cb96;
  /* 12c8cb8e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c8cb91 jmp 0x12c8ccdc */
  goto L_12c8ccdc;
L_12c8cb96:;
  /* 12c8cb96 mov ebx, dword ptr [0x12cac630] */
  EBX = (r32((uint32_t)(0x12cac630)));
  /* 12c8cb9c mov edi, 0x12cac630 */
  EDI = (0x12cac630u);
  /* 12c8cba1 jmp 0x12c8cbe5 */
  goto L_12c8cbe5;
L_12c8cba3:;
  /* 12c8cba3 mov ebx, dword ptr [0x12cac62c] */
  EBX = (r32((uint32_t)(0x12cac62c)));
  /* 12c8cba9 mov edi, 0x12cac62c */
  EDI = (0x12cac62cu);
  /* 12c8cbae jmp 0x12c8cbe5 */
  goto L_12c8cbe5;
L_12c8cbb0:;
  /* 12c8cbb0 mov ebx, dword ptr [0x12cac634] */
  EBX = (r32((uint32_t)(0x12cac634)));
  /* 12c8cbb6 mov edi, 0x12cac634 */
  EDI = (0x12cac634u);
  /* 12c8cbbb jmp 0x12c8cbe5 */
  goto L_12c8cbe5;
L_12c8cbbd:;
  /* 12c8cbbd call 0x12c882c1 */
  push32(0x12c8cbc2u); f_12c882c1();
  /* 12c8cbc2 mov esi, eax */
  ESI = (EAX);
  /* 12c8cbc4 push dword ptr [esi + 0x50] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x50))));
  /* 12c8cbc7 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c8cbca call 0x12c8cce1 */
  push32(0x12c8cbcfu); f_12c8cce1();
  /* 12c8cbcf mov edi, eax */
  EDI = (EAX);
  /* 12c8cbd1 pop ecx */
  ECX = (pop32());
  /* 12c8cbd2 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8cbd5 pop ecx */
  ECX = (pop32());
  /* 12c8cbd6 mov ebx, dword ptr [edi] */
  EBX = (r32((uint32_t)(EDI)));
  /* 12c8cbd8 jmp 0x12c8cbf7 */
  goto L_12c8cbf7;
L_12c8cbda:;
  /* 12c8cbda mov ebx, dword ptr [0x12cac628] */
  EBX = (r32((uint32_t)(0x12cac628)));
  /* 12c8cbe0 mov edi, 0x12cac628 */
  EDI = (0x12cac628u);
L_12c8cbe5:;
  /* 12c8cbe5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c8cbe7 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12c8cbee call 0x12c86c88 */
  push32(0x12c8cbf3u); f_12c86c88();
  /* 12c8cbf3 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8cbf6 pop ecx */
  ECX = (pop32());
L_12c8cbf7:;
  /* 12c8cbf7 cmp ebx, 1 */
  { uint32_t _a=(EBX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8cbfa jne 0x12c8cc12 */
  if (!C.zf) goto L_12c8cc12;
  /* 12c8cbfc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8cc00 je 0x12c8ccda */
  if (C.zf) goto L_12c8ccda;
  /* 12c8cc06 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8cc07 call 0x12c86ce9 */
  push32(0x12c8cc0cu); f_12c86ce9();
  /* 12c8cc0c pop ecx */
  ECX = (pop32());
  /* 12c8cc0d jmp 0x12c8ccda */
  goto L_12c8ccda;
L_12c8cc12:;
  /* 12c8cc12 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c8cc14 cmp ebx, ecx */
  { uint32_t _a=(EBX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8cc16 jne 0x12c8cc2c */
  if (!C.zf) goto L_12c8cc2c;
  /* 12c8cc18 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8cc1b je 0x12c8cc25 */
  if (C.zf) goto L_12c8cc25;
  /* 12c8cc1d push 1 */
  push32((uint32_t)(0x1u));
  /* 12c8cc1f call 0x12c86ce9 */
  push32(0x12c8cc24u); f_12c86ce9();
  /* 12c8cc24 pop ecx */
  ECX = (pop32());
L_12c8cc25:;
  /* 12c8cc25 push 3 */
  push32((uint32_t)(0x3u));
  /* 12c8cc27 call 0x12c86412 */
  push32(0x12c8cc2cu); f_12c86412();
L_12c8cc2c:;
  /* 12c8cc2c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8cc2f cmp eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8cc32 je 0x12c8cc3e */
  if (C.zf) goto L_12c8cc3e;
  /* 12c8cc34 cmp eax, 0xb */
  { uint32_t _a=(EAX),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8cc37 je 0x12c8cc3e */
  if (C.zf) goto L_12c8cc3e;
  /* 12c8cc39 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8cc3c jne 0x12c8cc59 */
  if (!C.zf) goto L_12c8cc59;
L_12c8cc3e:;
  /* 12c8cc3e mov edx, dword ptr [esi + 0x54] */
  EDX = (r32((uint32_t)(ESI + 0x54)));
  /* 12c8cc41 cmp eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8cc44 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12c8cc47 mov dword ptr [esi + 0x54], ecx */
  w32((uint32_t)(ESI + 0x54), (ECX));
  /* 12c8cc4a jne 0x12c8cc95 */
  if (!C.zf) goto L_12c8cc95;
  /* 12c8cc4c mov edx, dword ptr [esi + 0x58] */
  EDX = (r32((uint32_t)(ESI + 0x58)));
  /* 12c8cc4f mov dword ptr [esi + 0x58], 0x8c */
  w32((uint32_t)(ESI + 0x58), (0x8cu));
  /* 12c8cc56 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12c8cc59:;
  /* 12c8cc59 cmp eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8cc5c jne 0x12c8cc95 */
  if (!C.zf) goto L_12c8cc95;
  /* 12c8cc5e mov ecx, dword ptr [0x12c92e68] */
  ECX = (r32((uint32_t)(0x12c92e68)));
  /* 12c8cc64 mov eax, dword ptr [0x12c92e6c] */
  EAX = (r32((uint32_t)(0x12c92e6c)));
  /* 12c8cc69 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8cc6b cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8cc6d jge 0x12c8cc97 */
  if ((C.sf==C.of)) goto L_12c8cc97;
  /* 12c8cc6f lea eax, [ecx + ecx*2] */
  EAX = ((uint32_t)(ECX + ECX*2));
  /* 12c8cc72 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
L_12c8cc75:;
  /* 12c8cc75 mov edx, dword ptr [esi + 0x50] */
  EDX = (r32((uint32_t)(ESI + 0x50)));
  /* 12c8cc78 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8cc7b and dword ptr [edx + eax - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EDX + EAX*1 + -0x4)))&(0x0u); w32((uint32_t)(EDX + EAX*1 + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c8cc80 mov edx, dword ptr [0x12c92e68] */
  EDX = (r32((uint32_t)(0x12c92e68)));
  /* 12c8cc86 mov edi, dword ptr [0x12c92e6c] */
  EDI = (r32((uint32_t)(0x12c92e6c)));
  /* 12c8cc8c inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12c8cc8d add edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8cc8f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8cc91 jl 0x12c8cc75 */
  if ((C.sf!=C.of)) goto L_12c8cc75;
  /* 12c8cc93 jmp 0x12c8cc97 */
  goto L_12c8cc97;
L_12c8cc95:;
  /* 12c8cc95 mov dword ptr [edi], ecx */
  w32((uint32_t)(EDI), (ECX));
L_12c8cc97:;
  /* 12c8cc97 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8cc9b je 0x12c8cca5 */
  if (C.zf) goto L_12c8cca5;
  /* 12c8cc9d push 1 */
  push32((uint32_t)(0x1u));
  /* 12c8cc9f call 0x12c86ce9 */
  push32(0x12c8cca4u); f_12c86ce9();
  /* 12c8cca4 pop ecx */
  ECX = (pop32());
L_12c8cca5:;
  /* 12c8cca5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8cca9 jne 0x12c8ccb6 */
  if (!C.zf) goto L_12c8ccb6;
  /* 12c8ccab push dword ptr [esi + 0x58] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x58))));
  /* 12c8ccae push 8 */
  push32((uint32_t)(0x8u));
  /* 12c8ccb0 call ebx */
  call_ind((uint32_t)(EBX), 0x12c8ccb2u);
  /* 12c8ccb2 pop ecx */
  ECX = (pop32());
  /* 12c8ccb3 pop ecx */
  ECX = (pop32());
  /* 12c8ccb4 jmp 0x12c8ccc8 */
  goto L_12c8ccc8;
L_12c8ccb6:;
  /* 12c8ccb6 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c8ccb9 call ebx */
  call_ind((uint32_t)(EBX), 0x12c8ccbbu);
  /* 12c8ccbb cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8ccbf pop ecx */
  ECX = (pop32());
  /* 12c8ccc0 je 0x12c8ccc8 */
  if (C.zf) goto L_12c8ccc8;
  /* 12c8ccc2 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8ccc6 jne 0x12c8ccda */
  if (!C.zf) goto L_12c8ccda;
L_12c8ccc8:;
  /* 12c8ccc8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c8cccb cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8cccf mov dword ptr [esi + 0x54], eax */
  w32((uint32_t)(ESI + 0x54), (EAX));
  /* 12c8ccd2 jne 0x12c8ccda */
  if (!C.zf) goto L_12c8ccda;
  /* 12c8ccd4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c8ccd7 mov dword ptr [esi + 0x58], eax */
  w32((uint32_t)(ESI + 0x58), (EAX));
L_12c8ccda:;
  /* 12c8ccda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c8ccdc:;
  /* 12c8ccdc pop edi */
  EDI = (pop32());
  /* 12c8ccdd pop esi */
  ESI = (pop32());
  /* 12c8ccde pop ebx */
  EBX = (pop32());
  /* 12c8ccdf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c8cce0 ret  */
  ESPCHK(0x12c8cb5fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000cce1 @ 0x12c8cce1 (61 bytes, 25 insns) */
void f_12c8cce1(void) {
  FTRACE(0x12c8cce1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8cce1 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c8cce5 mov ecx, dword ptr [0x12c92e74] */
  ECX = (r32((uint32_t)(0x12c92e74)));
  /* 12c8cceb push esi */
  push32((uint32_t)(ESI));
  /* 12c8ccec mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 12c8ccf0 cmp dword ptr [edx + 4], esi */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8ccf3 push edi */
  push32((uint32_t)(EDI));
  /* 12c8ccf4 mov eax, edx */
  EAX = (EDX);
  /* 12c8ccf6 je 0x12c8cd0a */
  if (C.zf) goto L_12c8cd0a;
  /* 12c8ccf8 lea edi, [ecx + ecx*2] */
  EDI = ((uint32_t)(ECX + ECX*2));
  /* 12c8ccfb lea edi, [edx + edi*4] */
  EDI = ((uint32_t)(EDX + EDI*4));
L_12c8ccfe:;
  /* 12c8ccfe add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8cd01 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8cd03 jae 0x12c8cd0a */
  if (!C.cf) goto L_12c8cd0a;
  /* 12c8cd05 cmp dword ptr [eax + 4], esi */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8cd08 jne 0x12c8ccfe */
  if (!C.zf) goto L_12c8ccfe;
L_12c8cd0a:;
  /* 12c8cd0a lea ecx, [ecx + ecx*2] */
  ECX = ((uint32_t)(ECX + ECX*2));
  /* 12c8cd0d lea ecx, [edx + ecx*4] */
  ECX = ((uint32_t)(EDX + ECX*4));
  /* 12c8cd10 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8cd12 jae 0x12c8cd19 */
  if (!C.cf) goto L_12c8cd19;
  /* 12c8cd14 cmp dword ptr [eax + 4], esi */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8cd17 je 0x12c8cd1b */
  if (C.zf) goto L_12c8cd1b;
L_12c8cd19:;
  /* 12c8cd19 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c8cd1b:;
  /* 12c8cd1b pop edi */
  EDI = (pop32());
  /* 12c8cd1c pop esi */
  ESI = (pop32());
  /* 12c8cd1d ret  */
  ESPCHK(0x12c8cce1u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd1e @ 0x12c8cd1e (293 bytes, 103 insns) */
void f_12c8cd1e(void) {
  FTRACE(0x12c8cd1eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8cd1e push ebp */
  push32((uint32_t)(EBP));
  /* 12c8cd1f mov ebp, esp */
  EBP = (ESP);
  /* 12c8cd21 mov eax, 0x1004 */
  EAX = (0x1004u);
  /* 12c8cd26 call 0x12c85470 */
  push32(0x12c8cd2bu); f_12c85470();
  /* 12c8cd2b push ebx */
  push32((uint32_t)(EBX));
  /* 12c8cd2c push esi */
  push32((uint32_t)(ESI));
  /* 12c8cd2d xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 12c8cd2f push 1 */
  push32((uint32_t)(0x1u));
  /* 12c8cd31 push esi */
  push32((uint32_t)(ESI));
  /* 12c8cd32 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c8cd35 call 0x12c8773a */
  push32(0x12c8cd3au); f_12c8773a();
  /* 12c8cd3a or ebx, 0xffffffff */
  { uint32_t _r=(EBX)|(0xffffffffu); EBX = (_r); fl_logic(_r,32); }
  /* 12c8cd3d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8cd40 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8cd42 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c8cd45 je 0x12c8ce3d */
  if (C.zf) goto L_12c8ce3d;
  /* 12c8cd4b push 2 */
  push32((uint32_t)(0x2u));
  /* 12c8cd4d push esi */
  push32((uint32_t)(ESI));
  /* 12c8cd4e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c8cd51 call 0x12c8773a */
  push32(0x12c8cd56u); f_12c8773a();
  /* 12c8cd56 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8cd59 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8cd5b je 0x12c8ce3d */
  if (C.zf) goto L_12c8ce3d;
  /* 12c8cd61 push edi */
  push32((uint32_t)(EDI));
  /* 12c8cd62 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 12c8cd65 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8cd67 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 12c8cd69 jle 0x12c8cde0 */
  if ((C.zf||C.sf!=C.of)) goto L_12c8cde0;
  /* 12c8cd6b mov ebx, 0x1000 */
  EBX = (0x1000u);
  /* 12c8cd70 lea eax, [ebp - 0x1004] */
  EAX = ((uint32_t)(EBP + -0x1004));
  /* 12c8cd76 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8cd77 push esi */
  push32((uint32_t)(ESI));
  /* 12c8cd78 push eax */
  push32((uint32_t)(EAX));
  /* 12c8cd79 call 0x12c8c250 */
  push32(0x12c8cd7eu); f_12c8c250();
  /* 12c8cd7e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12c8cd83 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c8cd86 call 0x12c8d1d6 */
  push32(0x12c8cd8bu); f_12c8d1d6();
  /* 12c8cd8b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8cd8e mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_12c8cd91:;
  /* 12c8cd91 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8cd93 mov eax, ebx */
  EAX = (EBX);
  /* 12c8cd95 jge 0x12c8cd99 */
  if ((C.sf==C.of)) goto L_12c8cd99;
  /* 12c8cd97 mov eax, edi */
  EAX = (EDI);
L_12c8cd99:;
  /* 12c8cd99 push eax */
  push32((uint32_t)(EAX));
  /* 12c8cd9a lea eax, [ebp - 0x1004] */
  EAX = ((uint32_t)(EBP + -0x1004));
  /* 12c8cda0 push eax */
  push32((uint32_t)(EAX));
  /* 12c8cda1 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c8cda4 call 0x12c898d9 */
  push32(0x12c8cda9u); f_12c898d9();
  /* 12c8cda9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8cdac cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8cdaf je 0x12c8cdb9 */
  if (C.zf) goto L_12c8cdb9;
  /* 12c8cdb1 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8cdb3 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 12c8cdb5 jle 0x12c8cdd1 */
  if ((C.zf||C.sf!=C.of)) goto L_12c8cdd1;
  /* 12c8cdb7 jmp 0x12c8cd91 */
  goto L_12c8cd91;
L_12c8cdb9:;
  /* 12c8cdb9 call 0x12c874bc */
  push32(0x12c8cdbeu); f_12c874bc();
  /* 12c8cdbe cmp dword ptr [eax], 5 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8cdc1 jne 0x12c8cdce */
  if (!C.zf) goto L_12c8cdce;
  /* 12c8cdc3 call 0x12c874b3 */
  push32(0x12c8cdc8u); f_12c874b3();
  /* 12c8cdc8 mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
L_12c8cdce:;
  /* 12c8cdce or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_12c8cdd1:;
  /* 12c8cdd1 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 12c8cdd4 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c8cdd7 call 0x12c8d1d6 */
  push32(0x12c8cddcu); f_12c8d1d6();
  /* 12c8cddc pop ecx */
  ECX = (pop32());
  /* 12c8cddd pop ecx */
  ECX = (pop32());
  /* 12c8cdde jmp 0x12c8ce28 */
  goto L_12c8ce28;
L_12c8cde0:;
  /* 12c8cde0 jge 0x12c8ce28 */
  if ((C.sf==C.of)) goto L_12c8ce28;
  /* 12c8cde2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c8cde4 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 12c8cde7 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c8cdea call 0x12c8773a */
  push32(0x12c8cdefu); f_12c8773a();
  /* 12c8cdef push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c8cdf2 call 0x12c8ba8e */
  push32(0x12c8cdf7u); f_12c8ba8e();
  /* 12c8cdf7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8cdfa push eax */
  push32((uint32_t)(EAX));
  /* 12c8cdfb call dword ptr [0x12c8e018] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e018))), 0x12c8ce01u);
  /* 12c8ce01 mov esi, eax */
  ESI = (EAX);
  /* 12c8ce03 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 12c8ce05 sbb esi, esi */
  { uint32_t _a=(ESI),_b=(ESI),_r=_a-_b-C.cf; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8ce07 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 12c8ce09 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 12c8ce0a cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8ce0c jne 0x12c8ce28 */
  if (!C.zf) goto L_12c8ce28;
  /* 12c8ce0e call 0x12c874b3 */
  push32(0x12c8ce13u); f_12c874b3();
  /* 12c8ce13 mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 12c8ce19 call dword ptr [0x12c8e078] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e078))), 0x12c8ce1fu);
  /* 12c8ce1f mov edi, eax */
  EDI = (EAX);
  /* 12c8ce21 call 0x12c874bc */
  push32(0x12c8ce26u); f_12c874bc();
  /* 12c8ce26 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_12c8ce28:;
  /* 12c8ce28 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c8ce2a push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 12c8ce2d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c8ce30 call 0x12c8773a */
  push32(0x12c8ce35u); f_12c8773a();
  /* 12c8ce35 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8ce38 mov eax, esi */
  EAX = (ESI);
  /* 12c8ce3a pop edi */
  EDI = (pop32());
  /* 12c8ce3b jmp 0x12c8ce3f */
  goto L_12c8ce3f;
L_12c8ce3d:;
  /* 12c8ce3d mov eax, ebx */
  EAX = (EBX);
L_12c8ce3f:;
  /* 12c8ce3f pop esi */
  ESI = (pop32());
  /* 12c8ce40 pop ebx */
  EBX = (pop32());
  /* 12c8ce41 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c8ce42 ret  */
  ESPCHK(0x12c8cd1eu, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x12c8ce43 (9 bytes, 4 insns) */
void f_12c8ce43(void) {
  FTRACE(0x12c8ce43u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8ce43 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c8ce45 call 0x12c85e26 */
  push32(0x12c8ce4au); f_12c85e26();
  /* 12c8ce4a pop ecx */
  ECX = (pop32());
  /* 12c8ce4b ret  */
  ESPCHK(0x12c8ce43u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce4c @ 0x12c8ce4c (511 bytes, 193 insns) */
void f_12c8ce4c(void) {
  FTRACE(0x12c8ce4cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8ce4c push ebp */
  push32((uint32_t)(EBP));
  /* 12c8ce4d mov ebp, esp */
  EBP = (ESP);
  /* 12c8ce4f push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c8ce51 push 0x12c8e710 */
  push32((uint32_t)(0x12c8e710u));
  /* 12c8ce56 push 0x12c86a64 */
  push32((uint32_t)(0x12c86a64u));
  /* 12c8ce5b mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12c8ce61 push eax */
  push32((uint32_t)(EAX));
  /* 12c8ce62 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12c8ce69 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8ce6c push ebx */
  push32((uint32_t)(EBX));
  /* 12c8ce6d push esi */
  push32((uint32_t)(ESI));
  /* 12c8ce6e push edi */
  push32((uint32_t)(EDI));
  /* 12c8ce6f mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12c8ce72 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 12c8ce74 cmp dword ptr [0x12cac66c], edi */
  { uint32_t _a=(r32((uint32_t)(0x12cac66c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8ce7a jne 0x12c8cec2 */
  if (!C.zf) goto L_12c8cec2;
  /* 12c8ce7c push edi */
  push32((uint32_t)(EDI));
  /* 12c8ce7d push edi */
  push32((uint32_t)(EDI));
  /* 12c8ce7e push 1 */
  push32((uint32_t)(0x1u));
  /* 12c8ce80 pop ebx */
  EBX = (pop32());
  /* 12c8ce81 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8ce82 push 0x12c8e6c4 */
  push32((uint32_t)(0x12c8e6c4u));
  /* 12c8ce87 mov esi, 0x100 */
  ESI = (0x100u);
  /* 12c8ce8c push esi */
  push32((uint32_t)(ESI));
  /* 12c8ce8d push edi */
  push32((uint32_t)(EDI));
  /* 12c8ce8e call dword ptr [0x12c8e010] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e010))), 0x12c8ce94u);
  /* 12c8ce94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8ce96 je 0x12c8cea0 */
  if (C.zf) goto L_12c8cea0;
  /* 12c8ce98 mov dword ptr [0x12cac66c], ebx */
  w32((uint32_t)(0x12cac66c), (EBX));
  /* 12c8ce9e jmp 0x12c8cec2 */
  goto L_12c8cec2;
L_12c8cea0:;
  /* 12c8cea0 push edi */
  push32((uint32_t)(EDI));
  /* 12c8cea1 push edi */
  push32((uint32_t)(EDI));
  /* 12c8cea2 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8cea3 push 0x12c8e6c0 */
  push32((uint32_t)(0x12c8e6c0u));
  /* 12c8cea8 push esi */
  push32((uint32_t)(ESI));
  /* 12c8cea9 push edi */
  push32((uint32_t)(EDI));
  /* 12c8ceaa call dword ptr [0x12c8e014] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e014))), 0x12c8ceb0u);
  /* 12c8ceb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8ceb2 je 0x12c8cfda */
  if (C.zf) goto L_12c8cfda;
  /* 12c8ceb8 mov dword ptr [0x12cac66c], 2 */
  w32((uint32_t)(0x12cac66c), (0x2u));
L_12c8cec2:;
  /* 12c8cec2 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8cec5 jle 0x12c8ced7 */
  if ((C.zf||C.sf!=C.of)) goto L_12c8ced7;
  /* 12c8cec7 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 12c8ceca push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 12c8cecd call 0x12c8d070 */
  push32(0x12c8ced2u); f_12c8d070();
  /* 12c8ced2 pop ecx */
  ECX = (pop32());
  /* 12c8ced3 pop ecx */
  ECX = (pop32());
  /* 12c8ced4 mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_12c8ced7:;
  /* 12c8ced7 mov eax, dword ptr [0x12cac66c] */
  EAX = (r32((uint32_t)(0x12cac66c)));
  /* 12c8cedc cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8cedf jne 0x12c8cefe */
  if (!C.zf) goto L_12c8cefe;
  /* 12c8cee1 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 12c8cee4 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 12c8cee7 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 12c8ceea push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 12c8ceed push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 12c8cef0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c8cef3 call dword ptr [0x12c8e014] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e014))), 0x12c8cef9u);
  /* 12c8cef9 jmp 0x12c8cfdc */
  goto L_12c8cfdc;
L_12c8cefe:;
  /* 12c8cefe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8cf01 jne 0x12c8cfda */
  if (!C.zf) goto L_12c8cfda;
  /* 12c8cf07 cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8cf0a jne 0x12c8cf14 */
  if (!C.zf) goto L_12c8cf14;
  /* 12c8cf0c mov eax, dword ptr [0x12cac664] */
  EAX = (r32((uint32_t)(0x12cac664)));
  /* 12c8cf11 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_12c8cf14:;
  /* 12c8cf14 push edi */
  push32((uint32_t)(EDI));
  /* 12c8cf15 push edi */
  push32((uint32_t)(EDI));
  /* 12c8cf16 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 12c8cf19 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 12c8cf1c mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 12c8cf1f neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c8cf21 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8cf23 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 12c8cf26 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c8cf27 push eax */
  push32((uint32_t)(EAX));
  /* 12c8cf28 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 12c8cf2b call dword ptr [0x12c8e0a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e0a0))), 0x12c8cf31u);
  /* 12c8cf31 mov ebx, eax */
  EBX = (EAX);
  /* 12c8cf33 mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 12c8cf36 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8cf38 je 0x12c8cfda */
  if (C.zf) goto L_12c8cfda;
  /* 12c8cf3e mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 12c8cf41 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 12c8cf44 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8cf47 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12c8cf49 call 0x12c85470 */
  push32(0x12c8cf4eu); f_12c85470();
  /* 12c8cf4e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12c8cf51 mov eax, esp */
  EAX = (ESP);
  /* 12c8cf53 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12c8cf56 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c8cf5a jmp 0x12c8cf6f */
  goto L_12c8cf6f;
  /* 12c8cf5c push 1 */
  push32((uint32_t)(0x1u));
  /* 12c8cf5e pop eax */
  EAX = (pop32());
  /* 12c8cf5f ret  */
  ESPCHK(0x12c8ce4cu, _esp0);
  ESP += 4; return;
  /* 12c8cf60 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12c8cf63 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 12c8cf65 mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 12c8cf68 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c8cf6c mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_12c8cf6f:;
  /* 12c8cf6f cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8cf72 je 0x12c8cfda */
  if (C.zf) goto L_12c8cfda;
  /* 12c8cf74 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8cf75 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 12c8cf78 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 12c8cf7b push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 12c8cf7e push 1 */
  push32((uint32_t)(0x1u));
  /* 12c8cf80 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 12c8cf83 call dword ptr [0x12c8e0a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e0a0))), 0x12c8cf89u);
  /* 12c8cf89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8cf8b je 0x12c8cfda */
  if (C.zf) goto L_12c8cfda;
  /* 12c8cf8d push edi */
  push32((uint32_t)(EDI));
  /* 12c8cf8e push edi */
  push32((uint32_t)(EDI));
  /* 12c8cf8f push ebx */
  push32((uint32_t)(EBX));
  /* 12c8cf90 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 12c8cf93 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 12c8cf96 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c8cf99 call dword ptr [0x12c8e010] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e010))), 0x12c8cf9fu);
  /* 12c8cf9f mov esi, eax */
  ESI = (EAX);
  /* 12c8cfa1 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 12c8cfa4 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8cfa6 je 0x12c8cfda */
  if (C.zf) goto L_12c8cfda;
  /* 12c8cfa8 test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 12c8cfac je 0x12c8cfee */
  if (C.zf) goto L_12c8cfee;
  /* 12c8cfae cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8cfb1 je 0x12c8d069 */
  if (C.zf) goto L_12c8d069;
  /* 12c8cfb7 cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8cfba jg 0x12c8cfda */
  if ((!C.zf&&C.sf==C.of)) goto L_12c8cfda;
  /* 12c8cfbc push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 12c8cfbf push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 12c8cfc2 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8cfc3 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 12c8cfc6 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 12c8cfc9 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c8cfcc call dword ptr [0x12c8e010] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e010))), 0x12c8cfd2u);
  /* 12c8cfd2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8cfd4 jne 0x12c8d069 */
  if (!C.zf) goto L_12c8d069;
L_12c8cfda:;
  /* 12c8cfda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c8cfdc:;
  /* 12c8cfdc lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 12c8cfdf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c8cfe2 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12c8cfe9 pop edi */
  EDI = (pop32());
  /* 12c8cfea pop esi */
  ESI = (pop32());
  /* 12c8cfeb pop ebx */
  EBX = (pop32());
  /* 12c8cfec leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c8cfed ret  */
  ESPCHK(0x12c8ce4cu, _esp0);
  ESP += 4; return;
L_12c8cfee:;
  /* 12c8cfee mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12c8cff5 lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 12c8cff8 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8cffb and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12c8cffd call 0x12c85470 */
  push32(0x12c8d002u); f_12c85470();
  /* 12c8d002 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12c8d005 mov ebx, esp */
  EBX = (ESP);
  /* 12c8d007 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 12c8d00a or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c8d00e jmp 0x12c8d022 */
  goto L_12c8d022;
  /* 12c8d010 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c8d012 pop eax */
  EAX = (pop32());
  /* 12c8d013 ret  */
  ESPCHK(0x12c8ce4cu, _esp0);
  ESP += 4; return;
  /* 12c8d014 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12c8d017 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 12c8d019 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12c8d01b or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c8d01f mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_12c8d022:;
  /* 12c8d022 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8d024 je 0x12c8cfda */
  if (C.zf) goto L_12c8cfda;
  /* 12c8d026 push esi */
  push32((uint32_t)(ESI));
  /* 12c8d027 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8d028 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 12c8d02b push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 12c8d02e push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 12c8d031 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c8d034 call dword ptr [0x12c8e010] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e010))), 0x12c8d03au);
  /* 12c8d03a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8d03c je 0x12c8cfda */
  if (C.zf) goto L_12c8cfda;
  /* 12c8d03e cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8d041 push edi */
  push32((uint32_t)(EDI));
  /* 12c8d042 push edi */
  push32((uint32_t)(EDI));
  /* 12c8d043 jne 0x12c8d049 */
  if (!C.zf) goto L_12c8d049;
  /* 12c8d045 push edi */
  push32((uint32_t)(EDI));
  /* 12c8d046 push edi */
  push32((uint32_t)(EDI));
  /* 12c8d047 jmp 0x12c8d04f */
  goto L_12c8d04f;
L_12c8d049:;
  /* 12c8d049 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 12c8d04c push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_12c8d04f:;
  /* 12c8d04f push esi */
  push32((uint32_t)(ESI));
  /* 12c8d050 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8d051 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12c8d056 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 12c8d059 call dword ptr [0x12c8e0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e0c4))), 0x12c8d05fu);
  /* 12c8d05f mov esi, eax */
  ESI = (EAX);
  /* 12c8d061 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8d063 je 0x12c8cfda */
  if (C.zf) goto L_12c8cfda;
L_12c8d069:;
  /* 12c8d069 mov eax, esi */
  EAX = (ESI);
  /* 12c8d06b jmp 0x12c8cfdc */
  goto L_12c8cfdc;
}

/* FUN_1000d070 @ 0x12c8d070 (43 bytes, 20 insns) */
void f_12c8d070(void) {
  FTRACE(0x12c8d070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8d070 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c8d074 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c8d078 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c8d07a push esi */
  push32((uint32_t)(ESI));
  /* 12c8d07b lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 12c8d07e je 0x12c8d08d */
  if (C.zf) goto L_12c8d08d;
L_12c8d080:;
  /* 12c8d080 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8d083 je 0x12c8d08d */
  if (C.zf) goto L_12c8d08d;
  /* 12c8d085 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c8d086 mov esi, ecx */
  ESI = (ECX);
  /* 12c8d088 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12c8d089 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 12c8d08b jne 0x12c8d080 */
  if (!C.zf) goto L_12c8d080;
L_12c8d08d:;
  /* 12c8d08d cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8d090 pop esi */
  ESI = (pop32());
  /* 12c8d091 jne 0x12c8d098 */
  if (!C.zf) goto L_12c8d098;
  /* 12c8d093 sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8d097 ret  */
  ESPCHK(0x12c8d070u, _esp0);
  ESP += 4; return;
L_12c8d098:;
  /* 12c8d098 mov eax, edx */
  EAX = (EDX);
  /* 12c8d09a ret  */
  ESPCHK(0x12c8d070u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d09b @ 0x12c8d09b (111 bytes, 44 insns) */
void f_12c8d09b(void) {
  FTRACE(0x12c8d09bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8d09b push ebx */
  push32((uint32_t)(EBX));
  /* 12c8d09c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12c8d09e cmp dword ptr [0x12cac654], ebx */
  { uint32_t _a=(r32((uint32_t)(0x12cac654))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8d0a4 jne 0x12c8d0b9 */
  if (!C.zf) goto L_12c8d0b9;
  /* 12c8d0a6 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c8d0aa cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8d0ad jl 0x12c8d108 */
  if ((C.sf!=C.of)) goto L_12c8d108;
  /* 12c8d0af cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8d0b2 jg 0x12c8d108 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c8d108;
  /* 12c8d0b4 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8d0b7 pop ebx */
  EBX = (pop32());
  /* 12c8d0b8 ret  */
  ESPCHK(0x12c8d09bu, _esp0);
  ESP += 4; return;
L_12c8d0b9:;
  /* 12c8d0b9 push esi */
  push32((uint32_t)(ESI));
  /* 12c8d0ba mov esi, 0x12cac7b8 */
  ESI = (0x12cac7b8u);
  /* 12c8d0bf push edi */
  push32((uint32_t)(EDI));
  /* 12c8d0c0 push esi */
  push32((uint32_t)(ESI));
  /* 12c8d0c1 call dword ptr [0x12c8e034] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e034))), 0x12c8d0c7u);
  /* 12c8d0c7 cmp dword ptr [0x12cac7b4], ebx */
  { uint32_t _a=(r32((uint32_t)(0x12cac7b4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8d0cd mov edi, dword ptr [0x12c8e038] */
  EDI = (r32((uint32_t)(0x12c8e038)));
  /* 12c8d0d3 je 0x12c8d0e3 */
  if (C.zf) goto L_12c8d0e3;
  /* 12c8d0d5 push esi */
  push32((uint32_t)(ESI));
  /* 12c8d0d6 call edi */
  call_ind((uint32_t)(EDI), 0x12c8d0d8u);
  /* 12c8d0d8 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12c8d0da call 0x12c86c88 */
  push32(0x12c8d0dfu); f_12c86c88();
  /* 12c8d0df pop ecx */
  ECX = (pop32());
  /* 12c8d0e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c8d0e2 pop ebx */
  EBX = (pop32());
L_12c8d0e3:;
  /* 12c8d0e3 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 12c8d0e7 call 0x12c8d10a */
  push32(0x12c8d0ecu); f_12c8d10a();
  /* 12c8d0ec test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 12c8d0ee pop ecx */
  ECX = (pop32());
  /* 12c8d0ef mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 12c8d0f3 je 0x12c8d0ff */
  if (C.zf) goto L_12c8d0ff;
  /* 12c8d0f5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12c8d0f7 call 0x12c86ce9 */
  push32(0x12c8d0fcu); f_12c86ce9();
  /* 12c8d0fc pop ecx */
  ECX = (pop32());
  /* 12c8d0fd jmp 0x12c8d102 */
  goto L_12c8d102;
L_12c8d0ff:;
  /* 12c8d0ff push esi */
  push32((uint32_t)(ESI));
  /* 12c8d100 call edi */
  call_ind((uint32_t)(EDI), 0x12c8d102u);
L_12c8d102:;
  /* 12c8d102 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12c8d106 pop edi */
  EDI = (pop32());
  /* 12c8d107 pop esi */
  ESI = (pop32());
L_12c8d108:;
  /* 12c8d108 pop ebx */
  EBX = (pop32());
  /* 12c8d109 ret  */
  ESPCHK(0x12c8d09bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000d10a @ 0x12c8d10a (204 bytes, 71 insns) */
void f_12c8d10a(void) {
  FTRACE(0x12c8d10au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8d10a push ebp */
  push32((uint32_t)(EBP));
  /* 12c8d10b mov ebp, esp */
  EBP = (ESP);
  /* 12c8d10d push ecx */
  push32((uint32_t)(ECX));
  /* 12c8d10e cmp dword ptr [0x12cac654], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12cac654))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8d115 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8d116 jne 0x12c8d135 */
  if (!C.zf) goto L_12c8d135;
  /* 12c8d118 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8d11b cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8d11e jl 0x12c8d1d3 */
  if ((C.sf!=C.of)) goto L_12c8d1d3;
  /* 12c8d124 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8d127 jg 0x12c8d1d3 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c8d1d3;
  /* 12c8d12d sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8d130 jmp 0x12c8d1d3 */
  goto L_12c8d1d3;
L_12c8d135:;
  /* 12c8d135 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8d138 cmp ebx, 0x100 */
  { uint32_t _a=(EBX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8d13e jge 0x12c8d168 */
  if ((C.sf==C.of)) goto L_12c8d168;
  /* 12c8d140 cmp dword ptr [0x12c90d24], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c90d24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8d147 jle 0x12c8d155 */
  if ((C.zf||C.sf!=C.of)) goto L_12c8d155;
  /* 12c8d149 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c8d14b push ebx */
  push32((uint32_t)(EBX));
  /* 12c8d14c call 0x12c897ff */
  push32(0x12c8d151u); f_12c897ff();
  /* 12c8d151 pop ecx */
  ECX = (pop32());
  /* 12c8d152 pop ecx */
  ECX = (pop32());
  /* 12c8d153 jmp 0x12c8d160 */
  goto L_12c8d160;
L_12c8d155:;
  /* 12c8d155 mov eax, dword ptr [0x12c90b18] */
  EAX = (r32((uint32_t)(0x12c90b18)));
  /* 12c8d15a mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 12c8d15d and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
L_12c8d160:;
  /* 12c8d160 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8d162 jne 0x12c8d168 */
  if (!C.zf) goto L_12c8d168;
L_12c8d164:;
  /* 12c8d164 mov eax, ebx */
  EAX = (EBX);
  /* 12c8d166 jmp 0x12c8d1d3 */
  goto L_12c8d1d3;
L_12c8d168:;
  /* 12c8d168 mov edx, dword ptr [0x12c90b18] */
  EDX = (r32((uint32_t)(0x12c90b18)));
  /* 12c8d16e mov eax, ebx */
  EAX = (EBX);
  /* 12c8d170 sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12c8d173 movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 12c8d176 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 12c8d17b je 0x12c8d18b */
  if (C.zf) goto L_12c8d18b;
  /* 12c8d17d and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 12c8d181 mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 12c8d184 mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 12c8d187 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c8d189 jmp 0x12c8d194 */
  goto L_12c8d194;
L_12c8d18b:;
  /* 12c8d18b and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 12c8d18f mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 12c8d192 push 1 */
  push32((uint32_t)(0x1u));
L_12c8d194:;
  /* 12c8d194 pop eax */
  EAX = (pop32());
  /* 12c8d195 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 12c8d198 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c8d19a push 0 */
  push32((uint32_t)(0x0u));
  /* 12c8d19c push 3 */
  push32((uint32_t)(0x3u));
  /* 12c8d19e push ecx */
  push32((uint32_t)(ECX));
  /* 12c8d19f push eax */
  push32((uint32_t)(EAX));
  /* 12c8d1a0 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 12c8d1a3 push eax */
  push32((uint32_t)(EAX));
  /* 12c8d1a4 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 12c8d1a9 push dword ptr [0x12cac654] */
  push32((uint32_t)(r32((uint32_t)(0x12cac654))));
  /* 12c8d1af call 0x12c8ce4c */
  push32(0x12c8d1b4u); f_12c8ce4c();
  /* 12c8d1b4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8d1b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8d1b9 je 0x12c8d164 */
  if (C.zf) goto L_12c8d164;
  /* 12c8d1bb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8d1be jne 0x12c8d1c6 */
  if (!C.zf) goto L_12c8d1c6;
  /* 12c8d1c0 movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12c8d1c4 jmp 0x12c8d1d3 */
  goto L_12c8d1d3;
L_12c8d1c6:;
  /* 12c8d1c6 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 12c8d1ca movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12c8d1ce shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12c8d1d1 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_12c8d1d3:;
  /* 12c8d1d3 pop ebx */
  EBX = (pop32());
  /* 12c8d1d4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c8d1d5 ret  */
  ESPCHK(0x12c8d10au, _esp0);
  ESP += 4; return;
}

/* FUN_1000d1d6 @ 0x12c8d1d6 (97 bytes, 31 insns) */
void f_12c8d1d6(void) {
  FTRACE(0x12c8d1d6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8d1d6 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c8d1da push esi */
  push32((uint32_t)(ESI));
  /* 12c8d1db mov ecx, eax */
  ECX = (EAX);
  /* 12c8d1dd and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12c8d1e0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12c8d1e3 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 12c8d1e6 mov esi, 0x8000 */
  ESI = (0x8000u);
  /* 12c8d1eb mov ecx, dword ptr [ecx*4 + 0x12caca20] */
  ECX = (r32((uint32_t)(ECX*4 + 0x12caca20)));
  /* 12c8d1f2 lea edx, [ecx + eax*4 + 4] */
  EDX = ((uint32_t)(ECX + EAX*4 + 0x4));
  /* 12c8d1f6 mov cl, byte ptr [ecx + eax*4 + 4] */
  CL = (r8((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 12c8d1fa mov al, cl */
  AL = (CL);
  /* 12c8d1fc and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 12c8d201 cmp dword ptr [esp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8d205 jne 0x12c8d20c */
  if (!C.zf) goto L_12c8d20c;
  /* 12c8d207 and cl, 0x7f */
  { uint32_t _r=(CL)&(0x7fu); CL = (_r); fl_logic(_r,8); }
  /* 12c8d20a jmp 0x12c8d219 */
  goto L_12c8d219;
L_12c8d20c:;
  /* 12c8d20c cmp dword ptr [esp + 0xc], 0x4000 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x4000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8d214 jne 0x12c8d227 */
  if (!C.zf) goto L_12c8d227;
  /* 12c8d216 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
L_12c8d219:;
  /* 12c8d219 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c8d21b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8d21d mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12c8d21f and ax, 0xc000 */
  { uint32_t _r=(AX)&(0xc000u); AX = (_r); fl_logic(_r,16); }
  /* 12c8d223 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8d225 pop esi */
  ESI = (pop32());
  /* 12c8d226 ret  */
  ESPCHK(0x12c8d1d6u, _esp0);
  ESP += 4; return;
L_12c8d227:;
  /* 12c8d227 call 0x12c874b3 */
  push32(0x12c8d22cu); f_12c874b3();
  /* 12c8d22c mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 12c8d232 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c8d235 pop esi */
  ESI = (pop32());
  /* 12c8d236 ret  */
  ESPCHK(0x12c8d1d6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d240 @ 0x12c8d240 (58 bytes, 32 insns) */
void f_12c8d240(void) {
  FTRACE(0x12c8d240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8d240 push ebp */
  push32((uint32_t)(EBP));
  /* 12c8d241 mov ebp, esp */
  EBP = (ESP);
  /* 12c8d243 push esi */
  push32((uint32_t)(ESI));
  /* 12c8d244 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c8d246 push eax */
  push32((uint32_t)(EAX));
  /* 12c8d247 push eax */
  push32((uint32_t)(EAX));
  /* 12c8d248 push eax */
  push32((uint32_t)(EAX));
  /* 12c8d249 push eax */
  push32((uint32_t)(EAX));
  /* 12c8d24a push eax */
  push32((uint32_t)(EAX));
  /* 12c8d24b push eax */
  push32((uint32_t)(EAX));
  /* 12c8d24c push eax */
  push32((uint32_t)(EAX));
  /* 12c8d24d push eax */
  push32((uint32_t)(EAX));
  /* 12c8d24e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c8d251 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12c8d254:;
  /* 12c8d254 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c8d256 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12c8d258 je 0x12c8d261 */
  if (C.zf) goto L_12c8d261;
  /* 12c8d25a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12c8d25b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x12c8d25b");
  /* 12c8d25f jmp 0x12c8d254 */
  goto L_12c8d254;
L_12c8d261:;
  /* 12c8d261 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_12c8d264:;
  /* 12c8d264 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c8d266 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12c8d268 je 0x12c8d274 */
  if (C.zf) goto L_12c8d274;
  /* 12c8d26a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c8d26b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x12c8d26b");
  /* 12c8d26f jae 0x12c8d264 */
  if (!C.cf) goto L_12c8d264;
  /* 12c8d271 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_12c8d274:;
  /* 12c8d274 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8d277 pop esi */
  ESI = (pop32());
  /* 12c8d278 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c8d279 ret  */
  ESPCHK(0x12c8d240u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d280 @ 0x12c8d280 (208 bytes, 85 insns) */
void f_12c8d280(void) {
  FTRACE(0x12c8d280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8d280 push ebp */
  push32((uint32_t)(EBP));
  /* 12c8d281 mov ebp, esp */
  EBP = (ESP);
  /* 12c8d283 push edi */
  push32((uint32_t)(EDI));
  /* 12c8d284 push esi */
  push32((uint32_t)(ESI));
  /* 12c8d285 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8d286 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12c8d289 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8d28c lea eax, [0x12cac64c] */
  EAX = ((uint32_t)(0x12cac64c));
  /* 12c8d292 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8d296 jne 0x12c8d2d3 */
  if (!C.zf) goto L_12c8d2d3;
  /* 12c8d298 mov al, 0xff */
  AL = (0xffu);
  /* 12c8d29a mov edi, edi */
  EDI = (EDI);
L_12c8d29c:;
  /* 12c8d29c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12c8d29e je 0x12c8d2ce */
  if (C.zf) goto L_12c8d2ce;
  /* 12c8d2a0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c8d2a2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c8d2a3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 12c8d2a5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12c8d2a6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8d2a8 je 0x12c8d29c */
  if (C.zf) goto L_12c8d29c;
  /* 12c8d2aa sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12c8d2ac cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8d2ae sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12c8d2b0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12c8d2b3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12c8d2b5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12c8d2b7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 12c8d2b9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12c8d2bb cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8d2bd sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12c8d2bf and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12c8d2c2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12c8d2c4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12c8d2c6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8d2c8 je 0x12c8d29c */
  if (C.zf) goto L_12c8d29c;
  /* 12c8d2ca sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12c8d2cc sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_12c8d2ce:;
  /* 12c8d2ce movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 12c8d2d1 jmp 0x12c8d34b */
  goto L_12c8d34b;
L_12c8d2d3:;
  /* 12c8d2d3 lock inc dword ptr [0x12cac7b8] */
  x86_unimpl("lock inc @ 0x12c8d2d3");
  /* 12c8d2da cmp dword ptr [0x12cac7b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12cac7b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8d2e1 jg 0x12c8d2e7 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c8d2e7;
  /* 12c8d2e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c8d2e5 jmp 0x12c8d2fc */
  goto L_12c8d2fc;
L_12c8d2e7:;
  /* 12c8d2e7 lock dec dword ptr [0x12cac7b8] */
  x86_unimpl("lock dec @ 0x12c8d2e7");
  /* 12c8d2ee push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12c8d2f0 call 0x12c86c88 */
  push32(0x12c8d2f5u); f_12c86c88();
  /* 12c8d2f5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_12c8d2fc:;
  /* 12c8d2fc mov eax, 0xff */
  EAX = (0xffu);
  /* 12c8d301 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12c8d303 nop  */
  /* nop */
L_12c8d304:;
  /* 12c8d304 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12c8d306 je 0x12c8d32f */
  if (C.zf) goto L_12c8d32f;
  /* 12c8d308 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c8d30a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c8d30b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 12c8d30d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12c8d30e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8d310 je 0x12c8d304 */
  if (C.zf) goto L_12c8d304;
  /* 12c8d312 push eax */
  push32((uint32_t)(EAX));
  /* 12c8d313 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8d314 call 0x12c8d451 */
  push32(0x12c8d319u); f_12c8d451();
  /* 12c8d319 mov ebx, eax */
  EBX = (EAX);
  /* 12c8d31b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8d31e call 0x12c8d451 */
  push32(0x12c8d323u); f_12c8d451();
  /* 12c8d323 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8d326 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8d328 je 0x12c8d304 */
  if (C.zf) goto L_12c8d304;
  /* 12c8d32a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8d32c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12c8d32f:;
  /* 12c8d32f mov ebx, eax */
  EBX = (EAX);
  /* 12c8d331 pop eax */
  EAX = (pop32());
  /* 12c8d332 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c8d334 jne 0x12c8d33f */
  if (!C.zf) goto L_12c8d33f;
  /* 12c8d336 lock dec dword ptr [0x12cac7b8] */
  x86_unimpl("lock dec @ 0x12c8d336");
  /* 12c8d33d jmp 0x12c8d349 */
  goto L_12c8d349;
L_12c8d33f:;
  /* 12c8d33f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12c8d341 call 0x12c86ce9 */
  push32(0x12c8d346u); f_12c86ce9();
  /* 12c8d346 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c8d349:;
  /* 12c8d349 mov eax, ebx */
  EAX = (EBX);
L_12c8d34b:;
  /* 12c8d34b pop ebx */
  EBX = (pop32());
  /* 12c8d34c pop esi */
  ESI = (pop32());
  /* 12c8d34d pop edi */
  EDI = (pop32());
  /* 12c8d34e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c8d34f ret  */
  ESPCHK(0x12c8d280u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d350 @ 0x12c8d350 (257 bytes, 103 insns) */
void f_12c8d350(void) {
  FTRACE(0x12c8d350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8d350 push ebp */
  push32((uint32_t)(EBP));
  /* 12c8d351 mov ebp, esp */
  EBP = (ESP);
  /* 12c8d353 push edi */
  push32((uint32_t)(EDI));
  /* 12c8d354 push esi */
  push32((uint32_t)(ESI));
  /* 12c8d355 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8d356 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c8d359 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c8d35b je 0x12c8d44a */
  if (C.zf) goto L_12c8d44a;
  /* 12c8d361 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8d364 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 12c8d367 lea eax, [0x12cac64c] */
  EAX = ((uint32_t)(0x12cac64c));
  /* 12c8d36d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8d371 jne 0x12c8d3c1 */
  if (!C.zf) goto L_12c8d3c1;
  /* 12c8d373 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 12c8d375 mov bl, 0x5a */
  BL = (0x5au);
  /* 12c8d377 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 12c8d379 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12c8d37c:;
  /* 12c8d37c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 12c8d37e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12c8d380 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 12c8d382 je 0x12c8d3a5 */
  if (C.zf) goto L_12c8d3a5;
  /* 12c8d384 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12c8d386 je 0x12c8d3a5 */
  if (C.zf) goto L_12c8d3a5;
  /* 12c8d388 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c8d389 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12c8d38a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8d38c jb 0x12c8d394 */
  if (C.cf) goto L_12c8d394;
  /* 12c8d38e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8d390 ja 0x12c8d394 */
  if ((!C.cf&&!C.zf)) goto L_12c8d394;
  /* 12c8d392 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_12c8d394:;
  /* 12c8d394 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8d396 jb 0x12c8d39e */
  if (C.cf) goto L_12c8d39e;
  /* 12c8d398 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8d39a ja 0x12c8d39e */
  if ((!C.cf&&!C.zf)) goto L_12c8d39e;
  /* 12c8d39c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_12c8d39e:;
  /* 12c8d39e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8d3a0 jne 0x12c8d3af */
  if (!C.zf) goto L_12c8d3af;
  /* 12c8d3a2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12c8d3a3 jne 0x12c8d37c */
  if (!C.zf) goto L_12c8d37c;
L_12c8d3a5:;
  /* 12c8d3a5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c8d3a7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8d3a9 je 0x12c8d44a */
  if (C.zf) goto L_12c8d44a;
L_12c8d3af:;
  /* 12c8d3af mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12c8d3b4 jb 0x12c8d44a */
  if (C.cf) goto L_12c8d44a;
  /* 12c8d3ba neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c8d3bc jmp 0x12c8d44a */
  goto L_12c8d44a;
L_12c8d3c1:;
  /* 12c8d3c1 lock inc dword ptr [0x12cac7b8] */
  x86_unimpl("lock inc @ 0x12c8d3c1");
  /* 12c8d3c8 cmp dword ptr [0x12cac7b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12cac7b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8d3cf jg 0x12c8d3d5 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c8d3d5;
  /* 12c8d3d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c8d3d3 jmp 0x12c8d3ee */
  goto L_12c8d3ee;
L_12c8d3d5:;
  /* 12c8d3d5 lock dec dword ptr [0x12cac7b8] */
  x86_unimpl("lock dec @ 0x12c8d3d5");
  /* 12c8d3dc mov ebx, ecx */
  EBX = (ECX);
  /* 12c8d3de push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12c8d3e0 call 0x12c86c88 */
  push32(0x12c8d3e5u); f_12c86c88();
  /* 12c8d3e5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 12c8d3ec mov ecx, ebx */
  ECX = (EBX);
L_12c8d3ee:;
  /* 12c8d3ee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c8d3f0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12c8d3f2 mov edi, edi */
  EDI = (EDI);
L_12c8d3f4:;
  /* 12c8d3f4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c8d3f6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c8d3f8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 12c8d3fa je 0x12c8d41f */
  if (C.zf) goto L_12c8d41f;
  /* 12c8d3fc or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12c8d3fe je 0x12c8d41f */
  if (C.zf) goto L_12c8d41f;
  /* 12c8d400 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c8d401 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12c8d402 push ecx */
  push32((uint32_t)(ECX));
  /* 12c8d403 push eax */
  push32((uint32_t)(EAX));
  /* 12c8d404 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8d405 call 0x12c8d451 */
  push32(0x12c8d40au); f_12c8d451();
  /* 12c8d40a mov ebx, eax */
  EBX = (EAX);
  /* 12c8d40c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8d40f call 0x12c8d451 */
  push32(0x12c8d414u); f_12c8d451();
  /* 12c8d414 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8d417 pop ecx */
  ECX = (pop32());
  /* 12c8d418 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8d41a jne 0x12c8d425 */
  if (!C.zf) goto L_12c8d425;
  /* 12c8d41c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12c8d41d jne 0x12c8d3f4 */
  if (!C.zf) goto L_12c8d3f4;
L_12c8d41f:;
  /* 12c8d41f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c8d421 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8d423 je 0x12c8d42e */
  if (C.zf) goto L_12c8d42e;
L_12c8d425:;
  /* 12c8d425 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12c8d42a jb 0x12c8d42e */
  if (C.cf) goto L_12c8d42e;
  /* 12c8d42c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_12c8d42e:;
  /* 12c8d42e pop eax */
  EAX = (pop32());
  /* 12c8d42f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c8d431 jne 0x12c8d43c */
  if (!C.zf) goto L_12c8d43c;
  /* 12c8d433 lock dec dword ptr [0x12cac7b8] */
  x86_unimpl("lock dec @ 0x12c8d433");
  /* 12c8d43a jmp 0x12c8d44a */
  goto L_12c8d44a;
L_12c8d43c:;
  /* 12c8d43c mov ebx, ecx */
  EBX = (ECX);
  /* 12c8d43e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12c8d440 call 0x12c86ce9 */
  push32(0x12c8d445u); f_12c86ce9();
  /* 12c8d445 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8d448 mov ecx, ebx */
  ECX = (EBX);
L_12c8d44a:;
  /* 12c8d44a mov eax, ecx */
  EAX = (ECX);
  /* 12c8d44c pop ebx */
  EBX = (pop32());
  /* 12c8d44d pop esi */
  ESI = (pop32());
  /* 12c8d44e pop edi */
  EDI = (pop32());
  /* 12c8d44f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c8d450 ret  */
  ESPCHK(0x12c8d350u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d451 @ 0x12c8d451 (203 bytes, 78 insns) */
void f_12c8d451(void) {
  FTRACE(0x12c8d451u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8d451 push ebp */
  push32((uint32_t)(EBP));
  /* 12c8d452 mov ebp, esp */
  EBP = (ESP);
  /* 12c8d454 push ecx */
  push32((uint32_t)(ECX));
  /* 12c8d455 cmp dword ptr [0x12cac654], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12cac654))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8d45c push ebx */
  push32((uint32_t)(EBX));
  /* 12c8d45d push esi */
  push32((uint32_t)(ESI));
  /* 12c8d45e push edi */
  push32((uint32_t)(EDI));
  /* 12c8d45f jne 0x12c8d47e */
  if (!C.zf) goto L_12c8d47e;
  /* 12c8d461 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8d464 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8d467 jl 0x12c8d517 */
  if ((C.sf!=C.of)) goto L_12c8d517;
  /* 12c8d46d cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8d470 jg 0x12c8d517 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c8d517;
  /* 12c8d476 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8d479 jmp 0x12c8d517 */
  goto L_12c8d517;
L_12c8d47e:;
  /* 12c8d47e mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8d481 mov edi, 0x100 */
  EDI = (0x100u);
  /* 12c8d486 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c8d488 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8d48a pop esi */
  ESI = (pop32());
  /* 12c8d48b jge 0x12c8d4b2 */
  if ((C.sf==C.of)) goto L_12c8d4b2;
  /* 12c8d48d cmp dword ptr [0x12c90d24], esi */
  { uint32_t _a=(r32((uint32_t)(0x12c90d24))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8d493 jle 0x12c8d4a0 */
  if ((C.zf||C.sf!=C.of)) goto L_12c8d4a0;
  /* 12c8d495 push esi */
  push32((uint32_t)(ESI));
  /* 12c8d496 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8d497 call 0x12c897ff */
  push32(0x12c8d49cu); f_12c897ff();
  /* 12c8d49c pop ecx */
  ECX = (pop32());
  /* 12c8d49d pop ecx */
  ECX = (pop32());
  /* 12c8d49e jmp 0x12c8d4aa */
  goto L_12c8d4aa;
L_12c8d4a0:;
  /* 12c8d4a0 mov eax, dword ptr [0x12c90b18] */
  EAX = (r32((uint32_t)(0x12c90b18)));
  /* 12c8d4a5 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 12c8d4a8 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_12c8d4aa:;
  /* 12c8d4aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8d4ac jne 0x12c8d4b2 */
  if (!C.zf) goto L_12c8d4b2;
L_12c8d4ae:;
  /* 12c8d4ae mov eax, ebx */
  EAX = (EBX);
  /* 12c8d4b0 jmp 0x12c8d517 */
  goto L_12c8d517;
L_12c8d4b2:;
  /* 12c8d4b2 mov edx, dword ptr [0x12c90b18] */
  EDX = (r32((uint32_t)(0x12c90b18)));
  /* 12c8d4b8 mov eax, ebx */
  EAX = (EBX);
  /* 12c8d4ba sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12c8d4bd movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 12c8d4c0 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 12c8d4c5 je 0x12c8d4d6 */
  if (C.zf) goto L_12c8d4d6;
  /* 12c8d4c7 and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 12c8d4cb push 2 */
  push32((uint32_t)(0x2u));
  /* 12c8d4cd mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 12c8d4d0 mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 12c8d4d3 pop eax */
  EAX = (pop32());
  /* 12c8d4d4 jmp 0x12c8d4df */
  goto L_12c8d4df;
L_12c8d4d6:;
  /* 12c8d4d6 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 12c8d4da mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 12c8d4dd mov eax, esi */
  EAX = (ESI);
L_12c8d4df:;
  /* 12c8d4df push esi */
  push32((uint32_t)(ESI));
  /* 12c8d4e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c8d4e2 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 12c8d4e5 push 3 */
  push32((uint32_t)(0x3u));
  /* 12c8d4e7 push ecx */
  push32((uint32_t)(ECX));
  /* 12c8d4e8 push eax */
  push32((uint32_t)(EAX));
  /* 12c8d4e9 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 12c8d4ec push eax */
  push32((uint32_t)(EAX));
  /* 12c8d4ed push edi */
  push32((uint32_t)(EDI));
  /* 12c8d4ee push dword ptr [0x12cac654] */
  push32((uint32_t)(r32((uint32_t)(0x12cac654))));
  /* 12c8d4f4 call 0x12c8ce4c */
  push32(0x12c8d4f9u); f_12c8ce4c();
  /* 12c8d4f9 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8d4fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8d4fe je 0x12c8d4ae */
  if (C.zf) goto L_12c8d4ae;
  /* 12c8d500 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8d502 jne 0x12c8d50a */
  if (!C.zf) goto L_12c8d50a;
  /* 12c8d504 movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12c8d508 jmp 0x12c8d517 */
  goto L_12c8d517;
L_12c8d50a:;
  /* 12c8d50a movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 12c8d50e movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12c8d512 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12c8d515 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_12c8d517:;
  /* 12c8d517 pop edi */
  EDI = (pop32());
  /* 12c8d518 pop esi */
  ESI = (pop32());
  /* 12c8d519 pop ebx */
  EBX = (pop32());
  /* 12c8d51a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c8d51b ret  */
  ESPCHK(0x12c8d451u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x12c8d51c (6 bytes, 1 insns) */
void f_12c8d51c(void) {
  FTRACE(0x12c8d51cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8d51c jmp dword ptr [0x12c8e03c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12c8e03c)))); return;
}

/* Unwind@1000d530 @ 0x12c8d530 (11 bytes, 2 insns) */
void f_12c8d530(void) {
  FTRACE(0x12c8d530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8d530 lea ecx, [ebp - 0x48554] */
  ECX = ((uint32_t)(EBP + -0x48554));
  /* 12c8d536 jmp 0x12c814a0 */
  f_12c814a0(); return;
}

/* Unwind@1000d550 @ 0x12c8d550 (11 bytes, 5 insns) */
void f_12c8d550(void) {
  FTRACE(0x12c8d550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8d550 mov eax, dword ptr [ebp + 4] */
  EAX = (r32((uint32_t)(EBP + 0x4)));
  /* 12c8d553 push eax */
  push32((uint32_t)(EAX));
  /* 12c8d554 call 0x12c847d0 */
  push32(0x12c8d559u); f_12c847d0();
  /* 12c8d559 pop ecx */
  ECX = (pop32());
  /* 12c8d55a ret  */
  ESPCHK(0x12c8d550u, _esp0);
  ESP += 4; return;
}

/* Unwind@1000d570 @ 0x12c8d570 (8 bytes, 2 insns) */
void f_12c8d570(void) {
  FTRACE(0x12c8d570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8d570 lea ecx, [ebp - 0x2c] */
  ECX = ((uint32_t)(EBP + -0x2c));
  /* 12c8d573 jmp 0x12c837f0 */
  f_12c837f0(); return;
}

/* Unwind@1000d578 @ 0x12c8d578 (8 bytes, 2 insns) */
void f_12c8d578(void) {
  FTRACE(0x12c8d578u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8d578 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12c8d57b jmp 0x12c837f0 */
  f_12c837f0(); return;
}

/* Unwind@1000d590 @ 0x12c8d590 (11 bytes, 2 insns) */
void f_12c8d590(void) {
  FTRACE(0x12c8d590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8d590 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 12c8d596 jmp 0x12c837f0 */
  f_12c837f0(); return;
}

/* Unwind@1000d5b0 @ 0x12c8d5b0 (11 bytes, 5 insns) */
void f_12c8d5b0(void) {
  FTRACE(0x12c8d5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8d5b0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c8d5b3 push eax */
  push32((uint32_t)(EAX));
  /* 12c8d5b4 call 0x12c847d0 */
  push32(0x12c8d5b9u); f_12c847d0();
  /* 12c8d5b9 pop ecx */
  ECX = (pop32());
  /* 12c8d5ba ret  */
  ESPCHK(0x12c8d5b0u, _esp0);
  ESP += 4; return;
}

/* Unwind@1000d5e0 @ 0x12c8d5e0 (11 bytes, 2 insns) */
void f_12c8d5e0(void) {
  FTRACE(0x12c8d5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8d5e0 lea ecx, [ebp - 0x424] */
  ECX = ((uint32_t)(EBP + -0x424));
  /* 12c8d5e6 jmp 0x12c837f0 */
  f_12c837f0(); return;
}

/* Unwind@1000d600 @ 0x12c8d600 (8 bytes, 2 insns) */
void f_12c8d600(void) {
  FTRACE(0x12c8d600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8d600 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12c8d603 jmp 0x12c837f0 */
  f_12c837f0(); return;
}

/* Unwind@1000d620 @ 0x12c8d620 (8 bytes, 2 insns) */
void f_12c8d620(void) {
  FTRACE(0x12c8d620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8d620 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12c8d623 jmp 0x12c837f0 */
  f_12c837f0(); return;
}

/* Unwind@1000d640 @ 0x12c8d640 (8 bytes, 2 insns) */
void f_12c8d640(void) {
  FTRACE(0x12c8d640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8d640 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12c8d643 jmp 0x12c837f0 */
  f_12c837f0(); return;
}

/* Unwind@1000d654 @ 0x12c8d654 (8 bytes, 2 insns) */
void f_12c8d654(void) {
  FTRACE(0x12c8d654u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8d654 lea ecx, [ebp - 0x20] */
  ECX = ((uint32_t)(EBP + -0x20));
  /* 12c8d657 jmp 0x12c837f0 */
  f_12c837f0(); return;
}

/* Unwind@1000d668 @ 0x12c8d668 (8 bytes, 2 insns) */
void f_12c8d668(void) {
  FTRACE(0x12c8d668u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8d668 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c8d66b jmp 0x12c85fe5 */
  f_12c85fe5(); return;
}

/* Unwind@1000d67c @ 0x12c8d67c (8 bytes, 2 insns) */
void f_12c8d67c(void) {
  FTRACE(0x12c8d67cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8d67c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c8d67f jmp 0x12c85fe5 */
  f_12c85fe5(); return;
}

/* Unwind@1000d690 @ 0x12c8d690 (8 bytes, 2 insns) */
void f_12c8d690(void) {
  FTRACE(0x12c8d690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8d690 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c8d693 jmp 0x12c85fe5 */
  f_12c85fe5(); return;
}

/* Unwind@1000d6a4 @ 0x12c8d6a4 (8 bytes, 2 insns) */
void f_12c8d6a4(void) {
  FTRACE(0x12c8d6a4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8d6a4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c8d6a7 jmp 0x12c85fe5 */
  f_12c85fe5(); return;
}

/* Unwind@1000d6b8 @ 0x12c8d6b8 (8 bytes, 2 insns) */
void f_12c8d6b8(void) {
  FTRACE(0x12c8d6b8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8d6b8 lea ecx, [ebp - 0x20] */
  ECX = ((uint32_t)(EBP + -0x20));
  /* 12c8d6bb jmp 0x12c837f0 */
  f_12c837f0(); return;
}

/* Unwind@1000d6cc @ 0x12c8d6cc (8 bytes, 2 insns) */
void f_12c8d6cc(void) {
  FTRACE(0x12c8d6ccu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8d6cc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c8d6cf jmp 0x12c85fe5 */
  f_12c85fe5(); return;
}

